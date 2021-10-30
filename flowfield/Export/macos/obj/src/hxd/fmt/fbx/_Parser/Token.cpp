#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_fbx__Parser_Token
#include <hxd/fmt/fbx/_Parser/Token.h>
#endif
namespace hxd{
namespace fmt{
namespace fbx{
namespace _Parser{

::hxd::fmt::fbx::_Parser::Token Token_obj::TBraceClose;

::hxd::fmt::fbx::_Parser::Token Token_obj::TBraceOpen;

::hxd::fmt::fbx::_Parser::Token Token_obj::TColon;

::hxd::fmt::fbx::_Parser::Token Token_obj::TEof;

::hxd::fmt::fbx::_Parser::Token Token_obj::TFloat(::String s)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TFloat",a8,84,be,2b),3,1)->_hx_init(0,s);
}

::hxd::fmt::fbx::_Parser::Token Token_obj::TIdent(::String s)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TIdent",fc,01,a1,e0),0,1)->_hx_init(0,s);
}

::hxd::fmt::fbx::_Parser::Token Token_obj::TInt(::String s)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TInt",fb,b0,bd,37),2,1)->_hx_init(0,s);
}

::hxd::fmt::fbx::_Parser::Token Token_obj::TLength(int v)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TLength",5a,00,a7,78),5,1)->_hx_init(0,v);
}

::hxd::fmt::fbx::_Parser::Token Token_obj::TNode(::String s)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TNode",76,f0,8b,91),1,1)->_hx_init(0,s);
}

::hxd::fmt::fbx::_Parser::Token Token_obj::TString(::String s)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TString",45,94,cf,ea),4,1)->_hx_init(0,s);
}

bool Token_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBraceClose",b9,fe,34,ca)) { outValue = Token_obj::TBraceClose; return true; }
	if (inName==HX_("TBraceOpen",e9,b7,1f,a6)) { outValue = Token_obj::TBraceOpen; return true; }
	if (inName==HX_("TColon",6b,30,84,73)) { outValue = Token_obj::TColon; return true; }
	if (inName==HX_("TEof",c8,a8,ba,37)) { outValue = Token_obj::TEof; return true; }
	if (inName==HX_("TFloat",a8,84,be,2b)) { outValue = Token_obj::TFloat_dyn(); return true; }
	if (inName==HX_("TIdent",fc,01,a1,e0)) { outValue = Token_obj::TIdent_dyn(); return true; }
	if (inName==HX_("TInt",fb,b0,bd,37)) { outValue = Token_obj::TInt_dyn(); return true; }
	if (inName==HX_("TLength",5a,00,a7,78)) { outValue = Token_obj::TLength_dyn(); return true; }
	if (inName==HX_("TNode",76,f0,8b,91)) { outValue = Token_obj::TNode_dyn(); return true; }
	if (inName==HX_("TString",45,94,cf,ea)) { outValue = Token_obj::TString_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Token_obj)

int Token_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TBraceClose",b9,fe,34,ca)) return 7;
	if (inName==HX_("TBraceOpen",e9,b7,1f,a6)) return 6;
	if (inName==HX_("TColon",6b,30,84,73)) return 8;
	if (inName==HX_("TEof",c8,a8,ba,37)) return 9;
	if (inName==HX_("TFloat",a8,84,be,2b)) return 3;
	if (inName==HX_("TIdent",fc,01,a1,e0)) return 0;
	if (inName==HX_("TInt",fb,b0,bd,37)) return 2;
	if (inName==HX_("TLength",5a,00,a7,78)) return 5;
	if (inName==HX_("TNode",76,f0,8b,91)) return 1;
	if (inName==HX_("TString",45,94,cf,ea)) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TLength,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TNode,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TString,return)

int Token_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TBraceClose",b9,fe,34,ca)) return 0;
	if (inName==HX_("TBraceOpen",e9,b7,1f,a6)) return 0;
	if (inName==HX_("TColon",6b,30,84,73)) return 0;
	if (inName==HX_("TEof",c8,a8,ba,37)) return 0;
	if (inName==HX_("TFloat",a8,84,be,2b)) return 1;
	if (inName==HX_("TIdent",fc,01,a1,e0)) return 1;
	if (inName==HX_("TInt",fb,b0,bd,37)) return 1;
	if (inName==HX_("TLength",5a,00,a7,78)) return 1;
	if (inName==HX_("TNode",76,f0,8b,91)) return 1;
	if (inName==HX_("TString",45,94,cf,ea)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Token_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBraceClose",b9,fe,34,ca)) return TBraceClose;
	if (inName==HX_("TBraceOpen",e9,b7,1f,a6)) return TBraceOpen;
	if (inName==HX_("TColon",6b,30,84,73)) return TColon;
	if (inName==HX_("TEof",c8,a8,ba,37)) return TEof;
	if (inName==HX_("TFloat",a8,84,be,2b)) return TFloat_dyn();
	if (inName==HX_("TIdent",fc,01,a1,e0)) return TIdent_dyn();
	if (inName==HX_("TInt",fb,b0,bd,37)) return TInt_dyn();
	if (inName==HX_("TLength",5a,00,a7,78)) return TLength_dyn();
	if (inName==HX_("TNode",76,f0,8b,91)) return TNode_dyn();
	if (inName==HX_("TString",45,94,cf,ea)) return TString_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Token_obj_sStaticFields[] = {
	HX_("TIdent",fc,01,a1,e0),
	HX_("TNode",76,f0,8b,91),
	HX_("TInt",fb,b0,bd,37),
	HX_("TFloat",a8,84,be,2b),
	HX_("TString",45,94,cf,ea),
	HX_("TLength",5a,00,a7,78),
	HX_("TBraceOpen",e9,b7,1f,a6),
	HX_("TBraceClose",b9,fe,34,ca),
	HX_("TColon",6b,30,84,73),
	HX_("TEof",c8,a8,ba,37),
	::String(null())
};

::hx::Class Token_obj::__mClass;

Dynamic __Create_Token_obj() { return new Token_obj; }

void Token_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.fmt.fbx._Parser.Token",dc,98,71,c2), ::hx::TCanCast< Token_obj >,Token_obj_sStaticFields,0,
	&__Create_Token_obj, &__Create,
	&super::__SGetClass(), &CreateToken_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Token_obj::__GetStatic;
}

void Token_obj::__boot()
{
TBraceClose = ::hx::CreateConstEnum< Token_obj >(HX_("TBraceClose",b9,fe,34,ca),7);
TBraceOpen = ::hx::CreateConstEnum< Token_obj >(HX_("TBraceOpen",e9,b7,1f,a6),6);
TColon = ::hx::CreateConstEnum< Token_obj >(HX_("TColon",6b,30,84,73),8);
TEof = ::hx::CreateConstEnum< Token_obj >(HX_("TEof",c8,a8,ba,37),9);
}


} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
} // end namespace _Parser
