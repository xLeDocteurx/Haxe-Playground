import haxe.Timer;
import src.Observable;

class Main {
	static function main() {
		trace('starting');
		var obs = new Observable<Int>(subscriber -> {
			var counter:Int = 0;
			var timer = new Timer(1000);
			timer.run = () -> {
				subscriber.next(counter);
				counter += 1;
			};
			Timer.delay(() -> {
				timer.stop();
				subscriber.complete();
			}, 10000);
		});

		obs.subscribe(value -> {
			trace('counter : ' + value);
		});
	}
}
