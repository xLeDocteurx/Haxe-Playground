#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
#ifndef INCLUDED_hxsl_Const
#include <hxsl/Const.h>
#endif
#ifndef INCLUDED_hxsl_ExprDef
#include <hxsl/ExprDef.h>
#endif
namespace hxsl{

::hxsl::ExprDef ExprDef_obj::EArray( ::Dynamic e, ::Dynamic eindex)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EArray",14,c3,5c,4f),16,2)->_hx_init(0,e)->_hx_init(1,eindex);
}

::hxsl::ExprDef ExprDef_obj::EArrayDecl(::Array< ::Dynamic> el)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EArrayDecl",9e,59,bd,01),17,1)->_hx_init(0,el);
}

::hxsl::ExprDef ExprDef_obj::EBinop( ::haxe::macro::Binop op, ::Dynamic e1, ::Dynamic e2)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EBinop",23,6f,cd,dc),4,3)->_hx_init(0,op)->_hx_init(1,e1)->_hx_init(2,e2);
}

::hxsl::ExprDef ExprDef_obj::EBlock(::Array< ::Dynamic> el)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EBlock",c8,ca,c9,de),7,1)->_hx_init(0,el);
}

::hxsl::ExprDef ExprDef_obj::EBreak;

::hxsl::ExprDef ExprDef_obj::ECall( ::Dynamic e,::Array< ::Dynamic> args)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("ECall",83,4b,39,e7),6,2)->_hx_init(0,e)->_hx_init(1,args);
}

::hxsl::ExprDef ExprDef_obj::EConst( ::hxsl::Const c)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EConst",de,4e,2b,74),0,1)->_hx_init(0,c);
}

::hxsl::ExprDef ExprDef_obj::EContinue;

::hxsl::ExprDef ExprDef_obj::EDiscard;

::hxsl::ExprDef ExprDef_obj::EField( ::Dynamic e,::String f)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EField",35,ea,60,2a),3,2)->_hx_init(0,e)->_hx_init(1,f);
}

::hxsl::ExprDef ExprDef_obj::EFor(::String v, ::Dynamic loop, ::Dynamic block)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EFor",c4,37,d1,2d),12,3)->_hx_init(0,v)->_hx_init(1,loop)->_hx_init(2,block);
}

::hxsl::ExprDef ExprDef_obj::EFunction( ::Dynamic f)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EFunction",7d,b4,15,c9),9,1)->_hx_init(0,f);
}

::hxsl::ExprDef ExprDef_obj::EIdent(::String i)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EIdent",6b,98,46,e1),1,1)->_hx_init(0,i);
}

::hxsl::ExprDef ExprDef_obj::EIf( ::Dynamic econd, ::Dynamic eif, ::Dynamic eelse)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EIf",82,9b,34,00),10,3)->_hx_init(0,econd)->_hx_init(1,eif)->_hx_init(2,eelse);
}

::hxsl::ExprDef ExprDef_obj::EMeta(::String name,::Array< ::Dynamic> args, ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EMeta",aa,7d,d8,ed),20,3)->_hx_init(0,name)->_hx_init(1,args)->_hx_init(2,e);
}

::hxsl::ExprDef ExprDef_obj::EParenthesis( ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EParenthesis",91,a6,1e,bf),2,1)->_hx_init(0,e);
}

::hxsl::ExprDef ExprDef_obj::EReturn( ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EReturn",d5,1a,0b,73),13,1)->_hx_init(0,e);
}

::hxsl::ExprDef ExprDef_obj::ESwitch( ::Dynamic e,::Array< ::Dynamic> cases, ::Dynamic def)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("ESwitch",19,c0,56,2f),18,3)->_hx_init(0,e)->_hx_init(1,cases)->_hx_init(2,def);
}

::hxsl::ExprDef ExprDef_obj::EUnop( ::haxe::macro::Unop op, ::Dynamic e1)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EUnop",9f,02,29,f3),5,2)->_hx_init(0,op)->_hx_init(1,e1);
}

::hxsl::ExprDef ExprDef_obj::EVars(::Array< ::Dynamic> v)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EVars",91,5e,c8,f3),8,1)->_hx_init(0,v);
}

::hxsl::ExprDef ExprDef_obj::EWhile( ::Dynamic cond, ::Dynamic loop,bool normalWhile)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EWhile",2c,99,8a,f3),19,3)->_hx_init(0,cond)->_hx_init(1,loop)->_hx_init(2,normalWhile);
}

bool ExprDef_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) { outValue = ExprDef_obj::EArray_dyn(); return true; }
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) { outValue = ExprDef_obj::EArrayDecl_dyn(); return true; }
	if (inName==HX_("EBinop",23,6f,cd,dc)) { outValue = ExprDef_obj::EBinop_dyn(); return true; }
	if (inName==HX_("EBlock",c8,ca,c9,de)) { outValue = ExprDef_obj::EBlock_dyn(); return true; }
	if (inName==HX_("EBreak",3a,7a,b9,e2)) { outValue = ExprDef_obj::EBreak; return true; }
	if (inName==HX_("ECall",83,4b,39,e7)) { outValue = ExprDef_obj::ECall_dyn(); return true; }
	if (inName==HX_("EConst",de,4e,2b,74)) { outValue = ExprDef_obj::EConst_dyn(); return true; }
	if (inName==HX_("EContinue",cc,e9,8b,e6)) { outValue = ExprDef_obj::EContinue; return true; }
	if (inName==HX_("EDiscard",59,04,94,ea)) { outValue = ExprDef_obj::EDiscard; return true; }
	if (inName==HX_("EField",35,ea,60,2a)) { outValue = ExprDef_obj::EField_dyn(); return true; }
	if (inName==HX_("EFor",c4,37,d1,2d)) { outValue = ExprDef_obj::EFor_dyn(); return true; }
	if (inName==HX_("EFunction",7d,b4,15,c9)) { outValue = ExprDef_obj::EFunction_dyn(); return true; }
	if (inName==HX_("EIdent",6b,98,46,e1)) { outValue = ExprDef_obj::EIdent_dyn(); return true; }
	if (inName==HX_("EIf",82,9b,34,00)) { outValue = ExprDef_obj::EIf_dyn(); return true; }
	if (inName==HX_("EMeta",aa,7d,d8,ed)) { outValue = ExprDef_obj::EMeta_dyn(); return true; }
	if (inName==HX_("EParenthesis",91,a6,1e,bf)) { outValue = ExprDef_obj::EParenthesis_dyn(); return true; }
	if (inName==HX_("EReturn",d5,1a,0b,73)) { outValue = ExprDef_obj::EReturn_dyn(); return true; }
	if (inName==HX_("ESwitch",19,c0,56,2f)) { outValue = ExprDef_obj::ESwitch_dyn(); return true; }
	if (inName==HX_("EUnop",9f,02,29,f3)) { outValue = ExprDef_obj::EUnop_dyn(); return true; }
	if (inName==HX_("EVars",91,5e,c8,f3)) { outValue = ExprDef_obj::EVars_dyn(); return true; }
	if (inName==HX_("EWhile",2c,99,8a,f3)) { outValue = ExprDef_obj::EWhile_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ExprDef_obj)

int ExprDef_obj::__FindIndex(::String inName)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) return 16;
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) return 17;
	if (inName==HX_("EBinop",23,6f,cd,dc)) return 4;
	if (inName==HX_("EBlock",c8,ca,c9,de)) return 7;
	if (inName==HX_("EBreak",3a,7a,b9,e2)) return 14;
	if (inName==HX_("ECall",83,4b,39,e7)) return 6;
	if (inName==HX_("EConst",de,4e,2b,74)) return 0;
	if (inName==HX_("EContinue",cc,e9,8b,e6)) return 15;
	if (inName==HX_("EDiscard",59,04,94,ea)) return 11;
	if (inName==HX_("EField",35,ea,60,2a)) return 3;
	if (inName==HX_("EFor",c4,37,d1,2d)) return 12;
	if (inName==HX_("EFunction",7d,b4,15,c9)) return 9;
	if (inName==HX_("EIdent",6b,98,46,e1)) return 1;
	if (inName==HX_("EIf",82,9b,34,00)) return 10;
	if (inName==HX_("EMeta",aa,7d,d8,ed)) return 20;
	if (inName==HX_("EParenthesis",91,a6,1e,bf)) return 2;
	if (inName==HX_("EReturn",d5,1a,0b,73)) return 13;
	if (inName==HX_("ESwitch",19,c0,56,2f)) return 18;
	if (inName==HX_("EUnop",9f,02,29,f3)) return 5;
	if (inName==HX_("EVars",91,5e,c8,f3)) return 8;
	if (inName==HX_("EWhile",2c,99,8a,f3)) return 19;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EArrayDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EBinop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ECall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EFor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EMeta,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EParenthesis,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EReturn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,ESwitch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EUnop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EVars,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EWhile,return)

int ExprDef_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) return 2;
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) return 1;
	if (inName==HX_("EBinop",23,6f,cd,dc)) return 3;
	if (inName==HX_("EBlock",c8,ca,c9,de)) return 1;
	if (inName==HX_("EBreak",3a,7a,b9,e2)) return 0;
	if (inName==HX_("ECall",83,4b,39,e7)) return 2;
	if (inName==HX_("EConst",de,4e,2b,74)) return 1;
	if (inName==HX_("EContinue",cc,e9,8b,e6)) return 0;
	if (inName==HX_("EDiscard",59,04,94,ea)) return 0;
	if (inName==HX_("EField",35,ea,60,2a)) return 2;
	if (inName==HX_("EFor",c4,37,d1,2d)) return 3;
	if (inName==HX_("EFunction",7d,b4,15,c9)) return 1;
	if (inName==HX_("EIdent",6b,98,46,e1)) return 1;
	if (inName==HX_("EIf",82,9b,34,00)) return 3;
	if (inName==HX_("EMeta",aa,7d,d8,ed)) return 3;
	if (inName==HX_("EParenthesis",91,a6,1e,bf)) return 1;
	if (inName==HX_("EReturn",d5,1a,0b,73)) return 1;
	if (inName==HX_("ESwitch",19,c0,56,2f)) return 3;
	if (inName==HX_("EUnop",9f,02,29,f3)) return 2;
	if (inName==HX_("EVars",91,5e,c8,f3)) return 1;
	if (inName==HX_("EWhile",2c,99,8a,f3)) return 3;
	return super::__FindArgCount(inName);
}

::hx::Val ExprDef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) return EArray_dyn();
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) return EArrayDecl_dyn();
	if (inName==HX_("EBinop",23,6f,cd,dc)) return EBinop_dyn();
	if (inName==HX_("EBlock",c8,ca,c9,de)) return EBlock_dyn();
	if (inName==HX_("EBreak",3a,7a,b9,e2)) return EBreak;
	if (inName==HX_("ECall",83,4b,39,e7)) return ECall_dyn();
	if (inName==HX_("EConst",de,4e,2b,74)) return EConst_dyn();
	if (inName==HX_("EContinue",cc,e9,8b,e6)) return EContinue;
	if (inName==HX_("EDiscard",59,04,94,ea)) return EDiscard;
	if (inName==HX_("EField",35,ea,60,2a)) return EField_dyn();
	if (inName==HX_("EFor",c4,37,d1,2d)) return EFor_dyn();
	if (inName==HX_("EFunction",7d,b4,15,c9)) return EFunction_dyn();
	if (inName==HX_("EIdent",6b,98,46,e1)) return EIdent_dyn();
	if (inName==HX_("EIf",82,9b,34,00)) return EIf_dyn();
	if (inName==HX_("EMeta",aa,7d,d8,ed)) return EMeta_dyn();
	if (inName==HX_("EParenthesis",91,a6,1e,bf)) return EParenthesis_dyn();
	if (inName==HX_("EReturn",d5,1a,0b,73)) return EReturn_dyn();
	if (inName==HX_("ESwitch",19,c0,56,2f)) return ESwitch_dyn();
	if (inName==HX_("EUnop",9f,02,29,f3)) return EUnop_dyn();
	if (inName==HX_("EVars",91,5e,c8,f3)) return EVars_dyn();
	if (inName==HX_("EWhile",2c,99,8a,f3)) return EWhile_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ExprDef_obj_sStaticFields[] = {
	HX_("EConst",de,4e,2b,74),
	HX_("EIdent",6b,98,46,e1),
	HX_("EParenthesis",91,a6,1e,bf),
	HX_("EField",35,ea,60,2a),
	HX_("EBinop",23,6f,cd,dc),
	HX_("EUnop",9f,02,29,f3),
	HX_("ECall",83,4b,39,e7),
	HX_("EBlock",c8,ca,c9,de),
	HX_("EVars",91,5e,c8,f3),
	HX_("EFunction",7d,b4,15,c9),
	HX_("EIf",82,9b,34,00),
	HX_("EDiscard",59,04,94,ea),
	HX_("EFor",c4,37,d1,2d),
	HX_("EReturn",d5,1a,0b,73),
	HX_("EBreak",3a,7a,b9,e2),
	HX_("EContinue",cc,e9,8b,e6),
	HX_("EArray",14,c3,5c,4f),
	HX_("EArrayDecl",9e,59,bd,01),
	HX_("ESwitch",19,c0,56,2f),
	HX_("EWhile",2c,99,8a,f3),
	HX_("EMeta",aa,7d,d8,ed),
	::String(null())
};

::hx::Class ExprDef_obj::__mClass;

Dynamic __Create_ExprDef_obj() { return new ExprDef_obj; }

void ExprDef_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.ExprDef",ab,01,ef,bc), ::hx::TCanCast< ExprDef_obj >,ExprDef_obj_sStaticFields,0,
	&__Create_ExprDef_obj, &__Create,
	&super::__SGetClass(), &CreateExprDef_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ExprDef_obj::__GetStatic;
}

void ExprDef_obj::__boot()
{
EBreak = ::hx::CreateConstEnum< ExprDef_obj >(HX_("EBreak",3a,7a,b9,e2),14);
EContinue = ::hx::CreateConstEnum< ExprDef_obj >(HX_("EContinue",cc,e9,8b,e6),15);
EDiscard = ::hx::CreateConstEnum< ExprDef_obj >(HX_("EDiscard",59,04,94,ea),11);
}


} // end namespace hxsl
