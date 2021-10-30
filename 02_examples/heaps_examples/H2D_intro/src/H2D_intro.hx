import h2d.Font;

using hxColorToolkit.ColorToolkit;

class H2D_intro extends hxd.App {
	var windowSizeX = 1900;
	var windowSizeY = 1000;
	var backgroundColor = 0x000000;
	var vectorsColor = 0xFFFFFF;
	var particlesColor = 0x30D5C8;
	var noiseScale = 0.25;
	var timeScale = 0.5;
	var colorScale = 0.025;
	// var timeScale = 0.75;
	var particlesSize = 2;
	var particlesQuantity = 500;
	// var particlesQuantity = 800;
	// var particlesAlpha = 1;
	var particlesAlpha = 0.005;
	var magnitude:Float = 1;
	var noiseGenerator:NoiseGenerator = new NoiseGenerator();
	var particles:Array<Particle> = [];

	var font:h2d.Font;
	var debugNumberOfCells:h2d.Text;

	private var customGraphics:h2d.Graphics;

	override function init() {
		// hxd.Timer.dt = 1 / 30;
		// hxd.Timer.wantedFPS = 5;
		// trace('wanted fps : ', hxd.Timer.wantedFPS);
		// hxd.Timer.smoothFactor = 0.5;
		this.customGraphics = new h2d.Graphics(s2d);
		s2d.addChild(this.customGraphics);
		this.drawBackground();
		this.initParticles();
		this.initDebugTexts();
	}

	// on each frame
	override function update(dt:Float) {
		// this.drawBackground();
		this.updateParticles();
		this.updateDebugTexts();
	}

	function drawBackground() {
		this.customGraphics.beginFill(this.backgroundColor);
		this.customGraphics.drawRect(0, 0, this.windowSizeX, this.windowSizeY);
		this.customGraphics.endFill();
	}

	function initParticles() {
		for (i in 0...particlesQuantity) {
			particles.push(new Particle(this.noiseGenerator.getWhiteNoise(i, i) * this.windowSizeX,
				this.noiseGenerator.getWhiteNoise(i, i + 1) * this.windowSizeY, this.particlesSize, this.particlesAlpha));
		}
	}

	function updateParticles() {
		var color = float2color(0.188235294, 0.835294118, 0.7843);
		// var color = float2color(Math.sin((hxd.Timer.frameCount * this.noiseScale * this.colorScale) - Math.PI / 2) * 0.5
		// 	+ 0.5
		// 	+ 0.188235294,
		// 	Math.sin((hxd.Timer.frameCount * this.noiseScale * this.colorScale) - Math.PI / 2) * 0.5
		// 	+ 0.5
		// 	+ 0.835294118,
		// 	Math.sin((hxd.Timer.frameCount * this.noiseScale * this.colorScale) - Math.PI / 2) * 0.5
		// 	+ 0.5
		// 	+ 0.7843);
		for (i in 0...particles.length) {
			var noiseValue = this.noiseGenerator.getPerlinNoise(this.particles[i].positionX * this.noiseScale / 100,
				this.particles[i].positionY * this.noiseScale / 100, hxd.Timer.frameCount * this.timeScale / 100);
			this.particles[i].applyForce(noiseValue, this.magnitude, this.windowSizeX, this.windowSizeY);
			this.particles[i].draw(this.customGraphics, color);
		}
	}

	function initDebugTexts() {
		this.font = hxd.res.DefaultFont.get();
		this.debugNumberOfCells = new h2d.Text(this.font);
		this.debugNumberOfCells.text = "FrameCounter : " + Math.round(hxd.Timer.fps());
		s2d.addChild(debugNumberOfCells);
	}

	function updateDebugTexts() {
		this.debugNumberOfCells.text = "FrameCounter : " + Math.round(hxd.Timer.fps());
	}

	static function main() {
		new H2D_intro();
	}
}

class Particle {
	public var positionX:Float;
	public var positionY:Float;

	var _size:Float;
	var _alpha:Float;

	public function new(positionX:Float, positionY:Float, size:Float, alpha:Float) {
		this.positionX = positionX;
		this.positionY = positionY;
		this._size = size;
		this._alpha = alpha;
	}

	public function draw(customGraphics:h2d.Graphics, color:Int) {
		customGraphics.beginFill(color, this._alpha);
		customGraphics.drawCircle(this.positionX, this.positionY, this._size);
		customGraphics.endFill();
	}

	public function applyForce(noiseValue:Float, magnitude:Float, windowWidth:Int, windowHeight:Int) {
		var vectX = (magnitude * Math.cos(noiseValue * 2 * Math.PI));
		var vectY = (magnitude * Math.sin(noiseValue * 2 * Math.PI));
		this.positionX = (this.positionX + vectX < windowWidth) ? (this.positionX + vectX > 0 ? this.positionX + vectX : windowWidth - 1) : 1;
		this.positionY = (this.positionY + vectY < windowHeight) ? (this.positionY + vectY > 0 ? this.positionY + vectY : windowHeight - 1) : 1;
	}
}

class NoiseGenerator {
	var sineAmplitude:Float;
	var referenceVector:Vect3;
	var computedSeed:Int;
	var noise:Array<Float>;
	var NOISE_YWRAPB:Int;
	var NOISE_YWRAP:Int;
	var NOISE_ZWRAPB:Int;
	var NOISE_ZWRAP:Int;
	var NOISE_SIZE:Int;
	var perlin_octaves:Int;
	var perlin_amp_falloff:Float;

	public function new(?noiseSize:Int = 4095, ?octaves:Int = 4, ?falloff:Float = 0.5) {
		// GLOBAL VARIABLES
		this.sineAmplitude = 100000.0;
		this.referenceVector = new Vect3(12.9898, 78.233, 91.93432);

		this.computedSeed = (Math.round(Math.random() * 9999)) >>> 0;

		this.noise = null; // will be initialized lazily by getNoise() or setNoiseSeed()

		this.NOISE_YWRAPB = 4;
		this.NOISE_YWRAP = 1 << this.NOISE_YWRAPB;
		this.NOISE_ZWRAPB = 8;
		this.NOISE_ZWRAP = 1 << this.NOISE_ZWRAPB;
		this.NOISE_SIZE = noiseSize; // Linear Congruential Generator

		// PERLIN NOISE
		this.perlin_octaves = octaves; // default to medium smooth
		this.perlin_amp_falloff = falloff; // 50% reduction/octave
	}

	// WHITE NOISE
	public function getWhiteNoise(x:Float, y:Float, z:Float = 0) {
		return fract(Math.sin(Vect3.static_dot(new Vect3(x, y, z), this.referenceVector)) // *43758.5453123
			* this.sineAmplitude * (this.computedSeed));
	}

	// PERLIN NOISE
	public function getPerlinNoise(x:Float, y:Float = 0, ?z:Float = 0) {
		var r:Float = 0;
		var ampl = 0.5;
		for (o in 0...this.perlin_octaves) {
			var octaveAmplitude = o > 0 ? Math.pow(this.perlin_amp_falloff, o) : 1;
			var octaveScale = o > 0 ? Math.pow(2, o) : 1;

			var vector = new Vect3(x * octaveScale, y * octaveScale, z * octaveScale);
			var vectorInteger = vector.get_integer();
			var vectorFract = vector.get_fract();

			var randA = this.getWhiteNoise(vectorInteger.x, vectorInteger.y, vectorInteger.z);
			var randB = this.getWhiteNoise(vectorInteger.x + 1, vectorInteger.y, vectorInteger.z);
			var randC = this.getWhiteNoise(vectorInteger.x, vectorInteger.y + 1, vectorInteger.z);
			var randD = this.getWhiteNoise(vectorInteger.x + 1, vectorInteger.y + 1, vectorInteger.z);
			var randE = this.getWhiteNoise(vectorInteger.x, vectorInteger.y, vectorInteger.z + 1);
			var randF = this.getWhiteNoise(vectorInteger.x + 1, vectorInteger.y, vectorInteger.z + 1);
			var randG = this.getWhiteNoise(vectorInteger.x, vectorInteger.y + 1, vectorInteger.z + 1);
			var randH = this.getWhiteNoise(vectorInteger.x + 1, vectorInteger.y + 1, vectorInteger.z + 1);

			var lerpABCDEFGH = interpolateLinear(interpolateCubic(interpolateCubic(randA, randB, vectorFract.x),
				interpolateCubic(randC, randD, vectorFract.x), vectorFract.y),
				interpolateCubic(interpolateCubic(randE, randF, vectorFract.x), interpolateCubic(randG, randH, vectorFract.x), vectorFract.y), vectorFract.z);

			r = o > 0 ? r * (1 - lerpABCDEFGH * octaveAmplitude / octaveScale) : lerpABCDEFGH;
		}
		return r;
	}

	public function set_PerlinNoiseDetail(lod, falloff) {
		if (lod > 0) {
			this.perlin_octaves = lod;
		}
		if (falloff > 0) {
			this.perlin_amp_falloff = falloff;
		}
	}
}

class Vect3 {
	public var x:Float;
	public var y:Float;
	public var z:Float;

	public function new(x, y, z) {
		this.x = x;
		this.y = y;
		this.z = z;
	}

	public function copy(x, y) {
		return Reflect.copy(this);
	}

	public function get_integer():Vect3 {
		var posX = this.x < 0 ? -this.x : this.x;
		var posY = this.y < 0 ? -this.y : this.y;
		var posZ = this.z < 0 ? -this.z : this.z;
		var integerX = Math.floor(posX);
		var integerY = Math.floor(posY);
		var integerZ = Math.floor(posZ);
		return new Vect3(integerX, integerY, integerZ);
	}

	public function get_fract():Vect3 {
		var posX = this.x < 0 ? -this.x : this.x;
		var posY = this.y < 0 ? -this.y : this.y;
		var posZ = this.z < 0 ? -this.z : this.z;
		var decimalX = posX - Math.floor(posX);
		var decimalY = posY - Math.floor(posY);
		var decimalZ = posZ - Math.floor(posZ);
		return new Vect3(decimalX, decimalY, decimalZ);
	}

	public function set_pos(x:Int, y:Int, z:Int):Void {
		this.x = x;
		this.y = y;
		this.z = z;
	}

	public static function static_add(vector1:Vect3, vector2:Vect3) {
		return new Vect3(vector1.x + vector2.x, vector1.y + vector2.y, vector1.z + vector2.z);
	}

	public function add(otherVector:Vect3):Vect3 {
		this.x += otherVector.x;
		this.y += otherVector.y;
		this.z += otherVector.z;
		return this;
	}

	public static function static_sub(vector1, vector2) {
		return new Vect3(vector1.x - vector2.x, vector1.y - vector2.y, vector1.z - vector2.z);
	}

	public function sub(otherVector):Vect3 {
		this.x -= otherVector.x;
		this.y -= otherVector.y;
		this.z -= otherVector.z;
		return this;
	}

	public static function static_mult(vector:Vect3, scalar:Float):Vect3 {
		return new Vect3(vector.x * scalar, vector.y * scalar, vector.z * scalar);
	}

	public function mult(scalar:Float) {
		this.x *= scalar;
		this.y *= scalar;
		this.z *= scalar;
		return this;
	}

	public static function static_div(vector:Vect3, scalar:Float) {
		return new Vect3(vector.x / scalar, vector.y / scalar, vector.z / scalar);
	}

	public function div(scalar:Float) {
		this.x /= scalar;
		this.y /= scalar;
		this.z /= scalar;
		return this;
	}

	public static function static_distance(vector1:Vect3, vector2:Vect3) {
		return Math.sqrt(Math.pow(vector2.x - vector1.x, 2) + Math.pow(vector2.y - vector1.y, 2) + Math.pow(vector2.z - vector1.z, 2));
	}

	public function publdistance(otherVector:Vect3) {
		return Math.sqrt(Math.pow(otherVector.x - this.x, 2) + Math.pow(otherVector.y - this.y, 2) + Math.pow(otherVector.z - this.z, 2));
	}

	public static function static_dot(vector1:Vect3, vector2:Vect3) {
		return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;
	}

	public function dot(otherVector:Vect3) {
		return this.x * otherVector.x + this.y * otherVector.y + this.z * otherVector.z;
	}
}

function float2color(rr:Float, rg:Float, rb:Float):Int {
	var tk = new hxColorToolkit.spaces.RGB(rr * 255, rg * 255, rb * 255);
	return tk.toHex().getColor();
}

function fract(input:Float):Float {
	var integer = Math.floor(input);
	var decimal = input - integer;
	return decimal;
}

function interpolateLinear(a:Float, b:Float, x:Float):Float {
	return a * (1 - x) + b * x;
}

// Slightly slower than linear interpolation but much smoother
function interpolateCosine(a:Float, b:Float, x:Float) {
	var ft = x * Math.PI;
	var f = (1 - Math.cos(ft)) * 0.5;
	return a * (1 - f) + b * f;
}

function interpolateCubic(a:Float, b:Float, x:Float):Float {
	return a * (1 - smoothStep(x)) + b * smoothStep(x);
}

function smoothStep(f:Float):Float {
	return f * f * (3.0 - 2.0 * f);
}
