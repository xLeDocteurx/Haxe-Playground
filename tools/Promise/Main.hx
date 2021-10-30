import haxe.Exception;
import haxe.Timer;
import src.Promise;

class Main {
	static function main() {
		Promise.resolve(1)
			.then(value -> {
				trace('value 1 :');
				trace(value);
				return value + 1;
			})
			.then(value -> {
				trace('value 2 :');
				trace(value);
			})
			.then(value -> {
				trace('value 3 :');
				trace(value);
			})
			.catchh(value -> {
				trace('catchh1 value :');
				trace(value);
			})
			.catchh(value -> {
				trace('catchh2 value :');
				trace(value);
			})
			.complete(value -> {
				trace('complete value :');
				trace(value);
			});

		trace('--------------');
		trace('starting');
		Promise.reject(new Exception('Bouhou', '')).then(value -> {
			trace('then value : ');
			trace(value);
			// return 'return';
		}).catchh(value -> {
			trace('then value : ');
			trace(value);
		});

		trace('--------------');
		trace('starting');
		var promise = new Promise((resolve, reject) -> {
			trace('in promise callback');
			var res = 1;
			Timer.delay(() -> {
				if (res >= 1) {
					resolve('OK');
				} else {
					reject(new Exception('Error', ''));
				}
			}, 1500);
		});

		Timer.delay(() -> promise.then(value -> {
			trace('then value : ');
			trace(value);
		}), 1500);
	}
}
