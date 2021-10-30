package src;

import haxe.Constraints.Function;

// import Subscriber;
// package observable;
// import observer.Observer.*;
// import subscriber.Subscriber.*;
// import subscription.Subscription.*;
class Observable<T> {
	private var _callback:Function;
	private var _subscriber:Subscriber<T>;
	private var _observers:Array<T->Void> = [];

	public function new(callback) {
		this._callback = callback;
	}

	private function next(value:T):Void {
		for (o in this._observers)
			o(value);
	}

	// public function subscribe(f:T->Void):Subscription {
	public function subscribe(f:T->Void) {
		if (this._subscriber == null) {
			this._subscriber = new Subscriber<T>((value:T) -> {
				this.next(value);
			});
			this._callback(this._subscriber);
		}

		this._observers.push(f);
		return {
			unsubscribe: () -> {
				this._observers = this._observers.filter((of) -> {
					return of != f;
				});
			}
		};
	}

	// public function pipe(operations:Array<OperatorFunction<Any,Any>>):Observable<Any> {
	// 	for(operation in operations) {
	// 	}
	// }
}
