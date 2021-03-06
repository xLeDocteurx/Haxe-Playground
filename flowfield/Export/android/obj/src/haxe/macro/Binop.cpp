#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::Binop Binop_obj::OpAdd;

::haxe::macro::Binop Binop_obj::OpAnd;

::haxe::macro::Binop Binop_obj::OpArrow;

::haxe::macro::Binop Binop_obj::OpAssign;

::haxe::macro::Binop Binop_obj::OpAssignOp( ::haxe::macro::Binop op)
{
	return ::hx::CreateEnum< Binop_obj >(HX_("OpAssignOp",91,5f,12,89),20,1)->_hx_init(0,op);
}

::haxe::macro::Binop Binop_obj::OpBoolAnd;

::haxe::macro::Binop Binop_obj::OpBoolOr;

::haxe::macro::Binop Binop_obj::OpDiv;

::haxe::macro::Binop Binop_obj::OpEq;

::haxe::macro::Binop Binop_obj::OpGt;

::haxe::macro::Binop Binop_obj::OpGte;

::haxe::macro::Binop Binop_obj::OpIn;

::haxe::macro::Binop Binop_obj::OpInterval;

::haxe::macro::Binop Binop_obj::OpLt;

::haxe::macro::Binop Binop_obj::OpLte;

::haxe::macro::Binop Binop_obj::OpMod;

::haxe::macro::Binop Binop_obj::OpMult;

::haxe::macro::Binop Binop_obj::OpNotEq;

::haxe::macro::Binop Binop_obj::OpOr;

::haxe::macro::Binop Binop_obj::OpShl;

::haxe::macro::Binop Binop_obj::OpShr;

::haxe::macro::Binop Binop_obj::OpSub;

::haxe::macro::Binop Binop_obj::OpUShr;

::haxe::macro::Binop Binop_obj::OpXor;

bool Binop_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("OpAdd",60,63,e1,c6)) { outValue = Binop_obj::OpAdd; return true; }
	if (inName==HX_("OpAnd",16,6c,e1,c6)) { outValue = Binop_obj::OpAnd; return true; }
	if (inName==HX_("OpArrow",c8,f8,d4,55)) { outValue = Binop_obj::OpArrow; return true; }
	if (inName==HX_("OpAssign",50,e6,8f,58)) { outValue = Binop_obj::OpAssign; return true; }
	if (inName==HX_("OpAssignOp",91,5f,12,89)) { outValue = Binop_obj::OpAssignOp_dyn(); return true; }
	if (inName==HX_("OpBoolAnd",8c,21,c6,69)) { outValue = Binop_obj::OpBoolAnd; return true; }
	if (inName==HX_("OpBoolOr",0e,48,ae,6e)) { outValue = Binop_obj::OpBoolOr; return true; }
	if (inName==HX_("OpDiv",90,ae,e3,c6)) { outValue = Binop_obj::OpDiv; return true; }
	if (inName==HX_("OpEq",0d,14,8d,34)) { outValue = Binop_obj::OpEq; return true; }
	if (inName==HX_("OpGt",ce,15,8d,34)) { outValue = Binop_obj::OpGt; return true; }
	if (inName==HX_("OpGte",d7,fe,e5,c6)) { outValue = Binop_obj::OpGte; return true; }
	if (inName==HX_("OpIn",86,17,8d,34)) { outValue = Binop_obj::OpIn; return true; }
	if (inName==HX_("OpInterval",a6,23,c7,a2)) { outValue = Binop_obj::OpInterval; return true; }
	if (inName==HX_("OpLt",29,1a,8d,34)) { outValue = Binop_obj::OpLt; return true; }
	if (inName==HX_("OpLte",1c,ca,e9,c6)) { outValue = Binop_obj::OpLte; return true; }
	if (inName==HX_("OpMod",01,88,ea,c6)) { outValue = Binop_obj::OpMod; return true; }
	if (inName==HX_("OpMult",d1,0d,51,46)) { outValue = Binop_obj::OpMult; return true; }
	if (inName==HX_("OpNotEq",5e,3f,10,d0)) { outValue = Binop_obj::OpNotEq; return true; }
	if (inName==HX_("OpOr",c4,1c,8d,34)) { outValue = Binop_obj::OpOr; return true; }
	if (inName==HX_("OpShl",76,0f,ef,c6)) { outValue = Binop_obj::OpShl; return true; }
	if (inName==HX_("OpShr",7c,0f,ef,c6)) { outValue = Binop_obj::OpShr; return true; }
	if (inName==HX_("OpSub",bf,1a,ef,c6)) { outValue = Binop_obj::OpSub; return true; }
	if (inName==HX_("OpUShr",a9,f2,80,4b)) { outValue = Binop_obj::OpUShr; return true; }
	if (inName==HX_("OpXor",da,e0,f2,c6)) { outValue = Binop_obj::OpXor; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Binop_obj)

int Binop_obj::__FindIndex(::String inName)
{
	if (inName==HX_("OpAdd",60,63,e1,c6)) return 0;
	if (inName==HX_("OpAnd",16,6c,e1,c6)) return 11;
	if (inName==HX_("OpArrow",c8,f8,d4,55)) return 22;
	if (inName==HX_("OpAssign",50,e6,8f,58)) return 4;
	if (inName==HX_("OpAssignOp",91,5f,12,89)) return 20;
	if (inName==HX_("OpBoolAnd",8c,21,c6,69)) return 14;
	if (inName==HX_("OpBoolOr",0e,48,ae,6e)) return 15;
	if (inName==HX_("OpDiv",90,ae,e3,c6)) return 2;
	if (inName==HX_("OpEq",0d,14,8d,34)) return 5;
	if (inName==HX_("OpGt",ce,15,8d,34)) return 7;
	if (inName==HX_("OpGte",d7,fe,e5,c6)) return 8;
	if (inName==HX_("OpIn",86,17,8d,34)) return 23;
	if (inName==HX_("OpInterval",a6,23,c7,a2)) return 21;
	if (inName==HX_("OpLt",29,1a,8d,34)) return 9;
	if (inName==HX_("OpLte",1c,ca,e9,c6)) return 10;
	if (inName==HX_("OpMod",01,88,ea,c6)) return 19;
	if (inName==HX_("OpMult",d1,0d,51,46)) return 1;
	if (inName==HX_("OpNotEq",5e,3f,10,d0)) return 6;
	if (inName==HX_("OpOr",c4,1c,8d,34)) return 12;
	if (inName==HX_("OpShl",76,0f,ef,c6)) return 16;
	if (inName==HX_("OpShr",7c,0f,ef,c6)) return 17;
	if (inName==HX_("OpSub",bf,1a,ef,c6)) return 3;
	if (inName==HX_("OpUShr",a9,f2,80,4b)) return 18;
	if (inName==HX_("OpXor",da,e0,f2,c6)) return 13;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Binop_obj,OpAssignOp,return)

int Binop_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("OpAdd",60,63,e1,c6)) return 0;
	if (inName==HX_("OpAnd",16,6c,e1,c6)) return 0;
	if (inName==HX_("OpArrow",c8,f8,d4,55)) return 0;
	if (inName==HX_("OpAssign",50,e6,8f,58)) return 0;
	if (inName==HX_("OpAssignOp",91,5f,12,89)) return 1;
	if (inName==HX_("OpBoolAnd",8c,21,c6,69)) return 0;
	if (inName==HX_("OpBoolOr",0e,48,ae,6e)) return 0;
	if (inName==HX_("OpDiv",90,ae,e3,c6)) return 0;
	if (inName==HX_("OpEq",0d,14,8d,34)) return 0;
	if (inName==HX_("OpGt",ce,15,8d,34)) return 0;
	if (inName==HX_("OpGte",d7,fe,e5,c6)) return 0;
	if (inName==HX_("OpIn",86,17,8d,34)) return 0;
	if (inName==HX_("OpInterval",a6,23,c7,a2)) return 0;
	if (inName==HX_("OpLt",29,1a,8d,34)) return 0;
	if (inName==HX_("OpLte",1c,ca,e9,c6)) return 0;
	if (inName==HX_("OpMod",01,88,ea,c6)) return 0;
	if (inName==HX_("OpMult",d1,0d,51,46)) return 0;
	if (inName==HX_("OpNotEq",5e,3f,10,d0)) return 0;
	if (inName==HX_("OpOr",c4,1c,8d,34)) return 0;
	if (inName==HX_("OpShl",76,0f,ef,c6)) return 0;
	if (inName==HX_("OpShr",7c,0f,ef,c6)) return 0;
	if (inName==HX_("OpSub",bf,1a,ef,c6)) return 0;
	if (inName==HX_("OpUShr",a9,f2,80,4b)) return 0;
	if (inName==HX_("OpXor",da,e0,f2,c6)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Binop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("OpAdd",60,63,e1,c6)) return OpAdd;
	if (inName==HX_("OpAnd",16,6c,e1,c6)) return OpAnd;
	if (inName==HX_("OpArrow",c8,f8,d4,55)) return OpArrow;
	if (inName==HX_("OpAssign",50,e6,8f,58)) return OpAssign;
	if (inName==HX_("OpAssignOp",91,5f,12,89)) return OpAssignOp_dyn();
	if (inName==HX_("OpBoolAnd",8c,21,c6,69)) return OpBoolAnd;
	if (inName==HX_("OpBoolOr",0e,48,ae,6e)) return OpBoolOr;
	if (inName==HX_("OpDiv",90,ae,e3,c6)) return OpDiv;
	if (inName==HX_("OpEq",0d,14,8d,34)) return OpEq;
	if (inName==HX_("OpGt",ce,15,8d,34)) return OpGt;
	if (inName==HX_("OpGte",d7,fe,e5,c6)) return OpGte;
	if (inName==HX_("OpIn",86,17,8d,34)) return OpIn;
	if (inName==HX_("OpInterval",a6,23,c7,a2)) return OpInterval;
	if (inName==HX_("OpLt",29,1a,8d,34)) return OpLt;
	if (inName==HX_("OpLte",1c,ca,e9,c6)) return OpLte;
	if (inName==HX_("OpMod",01,88,ea,c6)) return OpMod;
	if (inName==HX_("OpMult",d1,0d,51,46)) return OpMult;
	if (inName==HX_("OpNotEq",5e,3f,10,d0)) return OpNotEq;
	if (inName==HX_("OpOr",c4,1c,8d,34)) return OpOr;
	if (inName==HX_("OpShl",76,0f,ef,c6)) return OpShl;
	if (inName==HX_("OpShr",7c,0f,ef,c6)) return OpShr;
	if (inName==HX_("OpSub",bf,1a,ef,c6)) return OpSub;
	if (inName==HX_("OpUShr",a9,f2,80,4b)) return OpUShr;
	if (inName==HX_("OpXor",da,e0,f2,c6)) return OpXor;
	return super::__Field(inName,inCallProp);
}

static ::String Binop_obj_sStaticFields[] = {
	HX_("OpAdd",60,63,e1,c6),
	HX_("OpMult",d1,0d,51,46),
	HX_("OpDiv",90,ae,e3,c6),
	HX_("OpSub",bf,1a,ef,c6),
	HX_("OpAssign",50,e6,8f,58),
	HX_("OpEq",0d,14,8d,34),
	HX_("OpNotEq",5e,3f,10,d0),
	HX_("OpGt",ce,15,8d,34),
	HX_("OpGte",d7,fe,e5,c6),
	HX_("OpLt",29,1a,8d,34),
	HX_("OpLte",1c,ca,e9,c6),
	HX_("OpAnd",16,6c,e1,c6),
	HX_("OpOr",c4,1c,8d,34),
	HX_("OpXor",da,e0,f2,c6),
	HX_("OpBoolAnd",8c,21,c6,69),
	HX_("OpBoolOr",0e,48,ae,6e),
	HX_("OpShl",76,0f,ef,c6),
	HX_("OpShr",7c,0f,ef,c6),
	HX_("OpUShr",a9,f2,80,4b),
	HX_("OpMod",01,88,ea,c6),
	HX_("OpAssignOp",91,5f,12,89),
	HX_("OpInterval",a6,23,c7,a2),
	HX_("OpArrow",c8,f8,d4,55),
	HX_("OpIn",86,17,8d,34),
	::String(null())
};

::hx::Class Binop_obj::__mClass;

Dynamic __Create_Binop_obj() { return new Binop_obj; }

void Binop_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.macro.Binop",5e,ab,a2,6e), ::hx::TCanCast< Binop_obj >,Binop_obj_sStaticFields,0,
	&__Create_Binop_obj, &__Create,
	&super::__SGetClass(), &CreateBinop_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Binop_obj::__GetStatic;
}

void Binop_obj::__boot()
{
OpAdd = ::hx::CreateConstEnum< Binop_obj >(HX_("OpAdd",60,63,e1,c6),0);
OpAnd = ::hx::CreateConstEnum< Binop_obj >(HX_("OpAnd",16,6c,e1,c6),11);
OpArrow = ::hx::CreateConstEnum< Binop_obj >(HX_("OpArrow",c8,f8,d4,55),22);
OpAssign = ::hx::CreateConstEnum< Binop_obj >(HX_("OpAssign",50,e6,8f,58),4);
OpBoolAnd = ::hx::CreateConstEnum< Binop_obj >(HX_("OpBoolAnd",8c,21,c6,69),14);
OpBoolOr = ::hx::CreateConstEnum< Binop_obj >(HX_("OpBoolOr",0e,48,ae,6e),15);
OpDiv = ::hx::CreateConstEnum< Binop_obj >(HX_("OpDiv",90,ae,e3,c6),2);
OpEq = ::hx::CreateConstEnum< Binop_obj >(HX_("OpEq",0d,14,8d,34),5);
OpGt = ::hx::CreateConstEnum< Binop_obj >(HX_("OpGt",ce,15,8d,34),7);
OpGte = ::hx::CreateConstEnum< Binop_obj >(HX_("OpGte",d7,fe,e5,c6),8);
OpIn = ::hx::CreateConstEnum< Binop_obj >(HX_("OpIn",86,17,8d,34),23);
OpInterval = ::hx::CreateConstEnum< Binop_obj >(HX_("OpInterval",a6,23,c7,a2),21);
OpLt = ::hx::CreateConstEnum< Binop_obj >(HX_("OpLt",29,1a,8d,34),9);
OpLte = ::hx::CreateConstEnum< Binop_obj >(HX_("OpLte",1c,ca,e9,c6),10);
OpMod = ::hx::CreateConstEnum< Binop_obj >(HX_("OpMod",01,88,ea,c6),19);
OpMult = ::hx::CreateConstEnum< Binop_obj >(HX_("OpMult",d1,0d,51,46),1);
OpNotEq = ::hx::CreateConstEnum< Binop_obj >(HX_("OpNotEq",5e,3f,10,d0),6);
OpOr = ::hx::CreateConstEnum< Binop_obj >(HX_("OpOr",c4,1c,8d,34),12);
OpShl = ::hx::CreateConstEnum< Binop_obj >(HX_("OpShl",76,0f,ef,c6),16);
OpShr = ::hx::CreateConstEnum< Binop_obj >(HX_("OpShr",7c,0f,ef,c6),17);
OpSub = ::hx::CreateConstEnum< Binop_obj >(HX_("OpSub",bf,1a,ef,c6),3);
OpUShr = ::hx::CreateConstEnum< Binop_obj >(HX_("OpUShr",a9,f2,80,4b),18);
OpXor = ::hx::CreateConstEnum< Binop_obj >(HX_("OpXor",da,e0,f2,c6),13);
}


} // end namespace haxe
} // end namespace macro
