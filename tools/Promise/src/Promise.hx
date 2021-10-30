package src;

import haxe.Constraints.Function;
import haxe.Exception;
import haxe.extern.EitherType;

using Lambda;

class Promise<T> {
	private var _status:PromiseStatus = PromiseStatus.pending;
	private var _value:EitherType<T, Exception>;

	private var _callback:Function;

	private var _then:Function;
	private var _catchh:Function;

	public function new(callback:(Function, Function) -> T) {
		this._callback = callback;
	}

	public static function all(promises:Array<Promise<Any>>):Promise<Any> {
		return new Promise((resolve, reject) -> {
			var responses:Array<Any>;
			for (promise in promises) {
				promise.then(value -> {
					responses.push(value);
				}).catchh(error -> {
					responses.push(error);
				});
			}
			return responses;
		});
	}

	public static function race(promises:Array<Promise<Any>>):Promise<Any> {
		return new Promise((resolve, reject) -> {
			for (promise in promises) {
				promise.then(value -> {
					resolve(value);
				});
			}
		});
	}

	public static function allSettled(promises:Array<Promise<Any>>):Promise<Any> {
		return new Promise((resolve, reject) -> {
			for (promise in promises) {}
		});
	}

	public static function resolve(value:Any):Promise<Any> {
		return new Promise((resolve, reject) -> {
			resolve(value);
		});
	}

	public static function reject(value:Exception):Promise<Any> {
		return new Promise((resolve, reject) -> {
			reject(value);
		});
	}

	private function _process():Promise<Any> {
		var response = null;
		if (this._status == PromiseStatus.pending) {
			this._callback((value:T) -> {
				response = this._resolve(value);
			}, (error:Exception) -> {
				response = this._reject(error);
			});
		} else {
			response = this;
		}
		return Promise.resolve(response);
	}

	private function _resolve(value:T) {
		this._value = value;
		this._status = PromiseStatus.complete;
		if (this._then != null) {
			return this._then(value);
		}
		return null;
	}

	private function _reject(error:Exception) {
		this._value = error;
		this._status = PromiseStatus.error;
		if (this._catchh != null) {
			this._catchh(error);
		}
		return null;
	}

	// public function then(f:Function):Promise<T> {
	public function then(f:Function):Promise<Any> {
		this._then = f;
		return this._process();
	}

	public function catchh(f:Function) {
		this._catchh = f;
		return this._process();
	}

	public function complete(f:Function) {
		f(this._value);
	}
}
