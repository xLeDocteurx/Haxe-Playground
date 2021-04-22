package src.types;

interface OperatorFunction<T, R> extends UnaryFunction<Observable<T>, Observable<R>> {}

interface UnaryFunction<T, R> {
	// (source: T): R;
}
