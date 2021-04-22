package src;

class Subscriber<T> {
	private var isComplete:Bool = false;

	private var _next:T->Void;

	public function new(_next:T->Void) {
		this._next = _next;
	}

	public function next(value:T):Void {
		if (!this.isComplete) {
			this._next(value);
		}
	}

	public function complete():Void {
		this.isComplete = true;
	}
}
