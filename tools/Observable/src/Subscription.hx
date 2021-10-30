package src;

interface Subscription {
	public function unsubscribe():() -> Void;
}
// class Subscription<T> {
// 	var observable:Observable<T>;
// 	var f:Subscriber<T>->Void;
// 	public function new(observable:Observable<T>, f:Subscriber<T>->Void) {
// 		this.observable = observable;
// 		this.f = f;
// 	}
// 	public function unsubscribe():Void {
// 		this.observable.observers = this.observable.observers.filter(function(f) {
// 			return f != this.f;
// 		});
// 	}
// }
