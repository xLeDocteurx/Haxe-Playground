import haxe.Http;
import haxe.Json;

class Main {
	static function main() {
		trace('starting');
		var h = new Http('http://google.com');
		h.onData = (data) -> {
			trace(Json.stringify(data));
		}
		h.onError = (err) -> {
			trace(Json.stringify(err));
		}
		// h.request(true);
		h.request();
	}
}
