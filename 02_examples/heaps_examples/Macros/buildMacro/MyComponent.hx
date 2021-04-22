import Macros;

@:build(Macros.buildTemplate())
class MyComponent {
	public function new() {
		// trace the auto-generated template
		trace(MyComponent.TEMPLATE);
	}
}
