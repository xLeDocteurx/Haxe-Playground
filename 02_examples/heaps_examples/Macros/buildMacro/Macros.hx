import haxe.io.Path;
import haxe.macro.Context;
import haxe.macro.Expr;
import haxe.macro.Type;
import sys.FileSystem;
import sys.io.File;

class Macros {
	public static function buildTemplate():Array<Field> {
		// get the current fields of the class
		var fields:Array<Field> = Context.getBuildFields();

		// get the path of the current current class file, e.g. "src/path/to/MyClassName.hx"
		var posInfos = Context.getPosInfos(Context.currentPos());
		var directory = Path.directory(posInfos.file);

		// get the current class information.
		var ref:ClassType = Context.getLocalClass().get();
		// path to the template. syntax: "MyClassName.template"
		var filePath:String = Path.join([directory, ref.name + ".template"]);

		// detect if template file exists
		if (FileSystem.exists(filePath)) {
			// get the file content of the template
			var fileContent:String = File.getContent(filePath);

			// add a static field called "TEMPLATE" to the current fields of the class
			fields.push({
				name: "TEMPLATE",
				access: [Access.AStatic, Access.APublic],
				kind: FieldType.FVar(macro:String, macro $v{fileContent}),
				pos: Context.currentPos(),
				doc: "auto-generated from " + filePath,
			});
		}

		return fields;
	}
}
