import MyService;

class Main {
	public function new() {}

	public static function main() {
		var instance1 = MyService.getInstance();
		var instance2 = MyService.getInstance();
		var instance3 = MyService.getInstance();

		instance1.blbl = 'un';
		trace('MyService.getInstance().blbl', MyService.getInstance().blbl);
		trace('instance1.blbl', instance1.blbl);
		trace('instance2.blbl', instance2.blbl);
		trace('instance3.blbl', instance3.blbl);
		instance2.blbl = 'deux';
		trace('MyService.getInstance().blbl', MyService.getInstance().blbl);
		trace('instance1.blbl', instance1.blbl);
		trace('instance2.blbl', instance2.blbl);
		trace('instance3.blbl', instance3.blbl);
		instance3.blbl = 'trois';
		trace('MyService.getInstance().blbl', MyService.getInstance().blbl);
		trace('instance1.blbl', instance1.blbl);
		trace('instance2.blbl', instance2.blbl);
		trace('instance3.blbl', instance3.blbl);
	}
}
