#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
#ifndef INCLUDED_hxsl_Const
#include <hxsl/Const.h>
#endif
#ifndef INCLUDED_hxsl_TExprDef
#include <hxsl/TExprDef.h>
#endif
#ifndef INCLUDED_hxsl_TGlobal
#include <hxsl/TGlobal.h>
#endif
namespace hxsl{

::hxsl::TExprDef TExprDef_obj::TArray( ::Dynamic e, ::Dynamic index)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TArray",a5,2c,b7,4e),16,2)->_hx_init(0,e)->_hx_init(1,index);
}

::hxsl::TExprDef TExprDef_obj::TArrayDecl(::Array< ::Dynamic> el)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TArrayDecl",af,5f,1a,46),17,1)->_hx_init(0,el);
}

::hxsl::TExprDef TExprDef_obj::TBinop( ::haxe::macro::Binop op, ::Dynamic e1, ::Dynamic e2)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TBinop",b4,d8,27,dc),5,3)->_hx_init(0,op)->_hx_init(1,e1)->_hx_init(2,e2);
}

::hxsl::TExprDef TExprDef_obj::TBlock(::Array< ::Dynamic> el)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TBlock",59,34,24,de),4,1)->_hx_init(0,el);
}

::hxsl::TExprDef TExprDef_obj::TBreak;

::hxsl::TExprDef TExprDef_obj::TCall( ::Dynamic e,::Array< ::Dynamic> args)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TCall",12,ff,3b,8a),8,2)->_hx_init(0,e)->_hx_init(1,args);
}

::hxsl::TExprDef TExprDef_obj::TConst( ::hxsl::Const c)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TConst",6f,b8,85,73),0,1)->_hx_init(0,c);
}

::hxsl::TExprDef TExprDef_obj::TContinue;

::hxsl::TExprDef TExprDef_obj::TDiscard;

::hxsl::TExprDef TExprDef_obj::TFor( ::Dynamic v, ::Dynamic it, ::Dynamic loop)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TFor",15,6b,bb,37),13,3)->_hx_init(0,v)->_hx_init(1,it)->_hx_init(2,loop);
}

::hxsl::TExprDef TExprDef_obj::TGlobal( ::hxsl::TGlobal g)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TGlobal",d7,9c,51,81),2,1)->_hx_init(0,g);
}

::hxsl::TExprDef TExprDef_obj::TIf( ::Dynamic econd, ::Dynamic eif, ::Dynamic eelse)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TIf",51,fd,3f,00),10,3)->_hx_init(0,econd)->_hx_init(1,eif)->_hx_init(2,eelse);
}

::hxsl::TExprDef TExprDef_obj::TMeta(::String m,::Array< ::Dynamic> args, ::Dynamic e)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TMeta",39,31,db,90),20,3)->_hx_init(0,m)->_hx_init(1,args)->_hx_init(2,e);
}

::hxsl::TExprDef TExprDef_obj::TParenthesis( ::Dynamic e)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TParenthesis",e2,12,56,99),3,1)->_hx_init(0,e);
}

::hxsl::TExprDef TExprDef_obj::TReturn( ::Dynamic e)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TReturn",24,10,cd,e2),12,1)->_hx_init(0,e);
}

::hxsl::TExprDef TExprDef_obj::TSwitch( ::Dynamic e,::Array< ::Dynamic> cases, ::Dynamic def)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TSwitch",68,b5,18,9f),18,3)->_hx_init(0,e)->_hx_init(1,cases)->_hx_init(2,def);
}

::hxsl::TExprDef TExprDef_obj::TSwiz( ::Dynamic e,::Array< ::Dynamic> regs)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TSwiz",09,18,e0,94),9,2)->_hx_init(0,e)->_hx_init(1,regs);
}

::hxsl::TExprDef TExprDef_obj::TUnop( ::haxe::macro::Unop op, ::Dynamic e1)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TUnop",2e,b6,2b,96),6,2)->_hx_init(0,op)->_hx_init(1,e1);
}

::hxsl::TExprDef TExprDef_obj::TVar( ::Dynamic v)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TVar",f3,82,c7,37),1,1)->_hx_init(0,v);
}

::hxsl::TExprDef TExprDef_obj::TVarDecl( ::Dynamic v, ::Dynamic init)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TVarDecl",fd,f4,4e,56),7,2)->_hx_init(0,v)->_hx_init(1,init);
}

::hxsl::TExprDef TExprDef_obj::TWhile( ::Dynamic e, ::Dynamic loop,bool normalWhile)
{
	return ::hx::CreateEnum< TExprDef_obj >(HX_("TWhile",bd,02,e5,f2),19,3)->_hx_init(0,e)->_hx_init(1,loop)->_hx_init(2,normalWhile);
}

bool TExprDef_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TArray",a5,2c,b7,4e)) { outValue = TExprDef_obj::TArray_dyn(); return true; }
	if (inName==HX_("TArrayDecl",af,5f,1a,46)) { outValue = TExprDef_obj::TArrayDecl_dyn(); return true; }
	if (inName==HX_("TBinop",b4,d8,27,dc)) { outValue = TExprDef_obj::TBinop_dyn(); return true; }
	if (inName==HX_("TBlock",59,34,24,de)) { outValue = TExprDef_obj::TBlock_dyn(); return true; }
	if (inName==HX_("TBreak",cb,e3,13,e2)) { outValue = TExprDef_obj::TBreak; return true; }
	if (inName==HX_("TCall",12,ff,3b,8a)) { outValue = TExprDef_obj::TCall_dyn(); return true; }
	if (inName==HX_("TConst",6f,b8,85,73)) { outValue = TExprDef_obj::TConst_dyn(); return true; }
	if (inName==HX_("TContinue",db,10,b1,42)) { outValue = TExprDef_obj::TContinue; return true; }
	if (inName==HX_("TDiscard",2a,b4,88,44)) { outValue = TExprDef_obj::TDiscard; return true; }
	if (inName==HX_("TFor",15,6b,bb,37)) { outValue = TExprDef_obj::TFor_dyn(); return true; }
	if (inName==HX_("TGlobal",d7,9c,51,81)) { outValue = TExprDef_obj::TGlobal_dyn(); return true; }
	if (inName==HX_("TIf",51,fd,3f,00)) { outValue = TExprDef_obj::TIf_dyn(); return true; }
	if (inName==HX_("TMeta",39,31,db,90)) { outValue = TExprDef_obj::TMeta_dyn(); return true; }
	if (inName==HX_("TParenthesis",e2,12,56,99)) { outValue = TExprDef_obj::TParenthesis_dyn(); return true; }
	if (inName==HX_("TReturn",24,10,cd,e2)) { outValue = TExprDef_obj::TReturn_dyn(); return true; }
	if (inName==HX_("TSwitch",68,b5,18,9f)) { outValue = TExprDef_obj::TSwitch_dyn(); return true; }
	if (inName==HX_("TSwiz",09,18,e0,94)) { outValue = TExprDef_obj::TSwiz_dyn(); return true; }
	if (inName==HX_("TUnop",2e,b6,2b,96)) { outValue = TExprDef_obj::TUnop_dyn(); return true; }
	if (inName==HX_("TVar",f3,82,c7,37)) { outValue = TExprDef_obj::TVar_dyn(); return true; }
	if (inName==HX_("TVarDecl",fd,f4,4e,56)) { outValue = TExprDef_obj::TVarDecl_dyn(); return true; }
	if (inName==HX_("TWhile",bd,02,e5,f2)) { outValue = TExprDef_obj::TWhile_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TExprDef_obj)

int TExprDef_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TArray",a5,2c,b7,4e)) return 16;
	if (inName==HX_("TArrayDecl",af,5f,1a,46)) return 17;
	if (inName==HX_("TBinop",b4,d8,27,dc)) return 5;
	if (inName==HX_("TBlock",59,34,24,de)) return 4;
	if (inName==HX_("TBreak",cb,e3,13,e2)) return 15;
	if (inName==HX_("TCall",12,ff,3b,8a)) return 8;
	if (inName==HX_("TConst",6f,b8,85,73)) return 0;
	if (inName==HX_("TContinue",db,10,b1,42)) return 14;
	if (inName==HX_("TDiscard",2a,b4,88,44)) return 11;
	if (inName==HX_("TFor",15,6b,bb,37)) return 13;
	if (inName==HX_("TGlobal",d7,9c,51,81)) return 2;
	if (inName==HX_("TIf",51,fd,3f,00)) return 10;
	if (inName==HX_("TMeta",39,31,db,90)) return 20;
	if (inName==HX_("TParenthesis",e2,12,56,99)) return 3;
	if (inName==HX_("TReturn",24,10,cd,e2)) return 12;
	if (inName==HX_("TSwitch",68,b5,18,9f)) return 18;
	if (inName==HX_("TSwiz",09,18,e0,94)) return 9;
	if (inName==HX_("TUnop",2e,b6,2b,96)) return 6;
	if (inName==HX_("TVar",f3,82,c7,37)) return 1;
	if (inName==HX_("TVarDecl",fd,f4,4e,56)) return 7;
	if (inName==HX_("TWhile",bd,02,e5,f2)) return 19;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TExprDef_obj,TArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TExprDef_obj,TArrayDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TExprDef_obj,TBinop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TExprDef_obj,TBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TExprDef_obj,TCall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TExprDef_obj,TConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TExprDef_obj,TFor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TExprDef_obj,TGlobal,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TExprDef_obj,TIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TExprDef_obj,TMeta,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TExprDef_obj,TParenthesis,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TExprDef_obj,TReturn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TExprDef_obj,TSwitch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TExprDef_obj,TSwiz,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TExprDef_obj,TUnop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TExprDef_obj,TVar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TExprDef_obj,TVarDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TExprDef_obj,TWhile,return)

int TExprDef_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TArray",a5,2c,b7,4e)) return 2;
	if (inName==HX_("TArrayDecl",af,5f,1a,46)) return 1;
	if (inName==HX_("TBinop",b4,d8,27,dc)) return 3;
	if (inName==HX_("TBlock",59,34,24,de)) return 1;
	if (inName==HX_("TBreak",cb,e3,13,e2)) return 0;
	if (inName==HX_("TCall",12,ff,3b,8a)) return 2;
	if (inName==HX_("TConst",6f,b8,85,73)) return 1;
	if (inName==HX_("TContinue",db,10,b1,42)) return 0;
	if (inName==HX_("TDiscard",2a,b4,88,44)) return 0;
	if (inName==HX_("TFor",15,6b,bb,37)) return 3;
	if (inName==HX_("TGlobal",d7,9c,51,81)) return 1;
	if (inName==HX_("TIf",51,fd,3f,00)) return 3;
	if (inName==HX_("TMeta",39,31,db,90)) return 3;
	if (inName==HX_("TParenthesis",e2,12,56,99)) return 1;
	if (inName==HX_("TReturn",24,10,cd,e2)) return 1;
	if (inName==HX_("TSwitch",68,b5,18,9f)) return 3;
	if (inName==HX_("TSwiz",09,18,e0,94)) return 2;
	if (inName==HX_("TUnop",2e,b6,2b,96)) return 2;
	if (inName==HX_("TVar",f3,82,c7,37)) return 1;
	if (inName==HX_("TVarDecl",fd,f4,4e,56)) return 2;
	if (inName==HX_("TWhile",bd,02,e5,f2)) return 3;
	return super::__FindArgCount(inName);
}

::hx::Val TExprDef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TArray",a5,2c,b7,4e)) return TArray_dyn();
	if (inName==HX_("TArrayDecl",af,5f,1a,46)) return TArrayDecl_dyn();
	if (inName==HX_("TBinop",b4,d8,27,dc)) return TBinop_dyn();
	if (inName==HX_("TBlock",59,34,24,de)) return TBlock_dyn();
	if (inName==HX_("TBreak",cb,e3,13,e2)) return TBreak;
	if (inName==HX_("TCall",12,ff,3b,8a)) return TCall_dyn();
	if (inName==HX_("TConst",6f,b8,85,73)) return TConst_dyn();
	if (inName==HX_("TContinue",db,10,b1,42)) return TContinue;
	if (inName==HX_("TDiscard",2a,b4,88,44)) return TDiscard;
	if (inName==HX_("TFor",15,6b,bb,37)) return TFor_dyn();
	if (inName==HX_("TGlobal",d7,9c,51,81)) return TGlobal_dyn();
	if (inName==HX_("TIf",51,fd,3f,00)) return TIf_dyn();
	if (inName==HX_("TMeta",39,31,db,90)) return TMeta_dyn();
	if (inName==HX_("TParenthesis",e2,12,56,99)) return TParenthesis_dyn();
	if (inName==HX_("TReturn",24,10,cd,e2)) return TReturn_dyn();
	if (inName==HX_("TSwitch",68,b5,18,9f)) return TSwitch_dyn();
	if (inName==HX_("TSwiz",09,18,e0,94)) return TSwiz_dyn();
	if (inName==HX_("TUnop",2e,b6,2b,96)) return TUnop_dyn();
	if (inName==HX_("TVar",f3,82,c7,37)) return TVar_dyn();
	if (inName==HX_("TVarDecl",fd,f4,4e,56)) return TVarDecl_dyn();
	if (inName==HX_("TWhile",bd,02,e5,f2)) return TWhile_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String TExprDef_obj_sStaticFields[] = {
	HX_("TConst",6f,b8,85,73),
	HX_("TVar",f3,82,c7,37),
	HX_("TGlobal",d7,9c,51,81),
	HX_("TParenthesis",e2,12,56,99),
	HX_("TBlock",59,34,24,de),
	HX_("TBinop",b4,d8,27,dc),
	HX_("TUnop",2e,b6,2b,96),
	HX_("TVarDecl",fd,f4,4e,56),
	HX_("TCall",12,ff,3b,8a),
	HX_("TSwiz",09,18,e0,94),
	HX_("TIf",51,fd,3f,00),
	HX_("TDiscard",2a,b4,88,44),
	HX_("TReturn",24,10,cd,e2),
	HX_("TFor",15,6b,bb,37),
	HX_("TContinue",db,10,b1,42),
	HX_("TBreak",cb,e3,13,e2),
	HX_("TArray",a5,2c,b7,4e),
	HX_("TArrayDecl",af,5f,1a,46),
	HX_("TSwitch",68,b5,18,9f),
	HX_("TWhile",bd,02,e5,f2),
	HX_("TMeta",39,31,db,90),
	::String(null())
};

::hx::Class TExprDef_obj::__mClass;

Dynamic __Create_TExprDef_obj() { return new TExprDef_obj; }

void TExprDef_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.TExprDef",01,fb,bc,cf), ::hx::TCanCast< TExprDef_obj >,TExprDef_obj_sStaticFields,0,
	&__Create_TExprDef_obj, &__Create,
	&super::__SGetClass(), &CreateTExprDef_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TExprDef_obj::__GetStatic;
}

void TExprDef_obj::__boot()
{
TBreak = ::hx::CreateConstEnum< TExprDef_obj >(HX_("TBreak",cb,e3,13,e2),15);
TContinue = ::hx::CreateConstEnum< TExprDef_obj >(HX_("TContinue",db,10,b1,42),14);
TDiscard = ::hx::CreateConstEnum< TExprDef_obj >(HX_("TDiscard",2a,b4,88,44),11);
}


} // end namespace hxsl
