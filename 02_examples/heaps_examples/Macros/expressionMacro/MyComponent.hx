class MyComponent {
	public static var TEMPLATE:String = Macros.getTemplate();

	public function new() {
		// trace the auto-generated template
		trace(MyComponent.TEMPLATE);
	}
}
