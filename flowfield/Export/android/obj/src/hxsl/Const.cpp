#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Const
#include <hxsl/Const.h>
#endif
namespace hxsl{

::hxsl::Const Const_obj::CBool(bool b)
{
	return ::hx::CreateEnum< Const_obj >(HX_("CBool",0d,8e,cd,bf),1,1)->_hx_init(0,b);
}

::hxsl::Const Const_obj::CFloat(Float v)
{
	return ::hx::CreateEnum< Const_obj >(HX_("CFloat",59,62,ad,5f),3,1)->_hx_init(0,v);
}

::hxsl::Const Const_obj::CInt(int v)
{
	return ::hx::CreateEnum< Const_obj >(HX_("CInt",6c,10,81,2c),2,1)->_hx_init(0,v);
}

::hxsl::Const Const_obj::CNull;

::hxsl::Const Const_obj::CString(::String v)
{
	return ::hx::CreateEnum< Const_obj >(HX_("CString",74,b1,e2,27),4,1)->_hx_init(0,v);
}

bool Const_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CBool",0d,8e,cd,bf)) { outValue = Const_obj::CBool_dyn(); return true; }
	if (inName==HX_("CFloat",59,62,ad,5f)) { outValue = Const_obj::CFloat_dyn(); return true; }
	if (inName==HX_("CInt",6c,10,81,2c)) { outValue = Const_obj::CInt_dyn(); return true; }
	if (inName==HX_("CNull",6a,a8,c0,c7)) { outValue = Const_obj::CNull; return true; }
	if (inName==HX_("CString",74,b1,e2,27)) { outValue = Const_obj::CString_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Const_obj)

int Const_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CBool",0d,8e,cd,bf)) return 1;
	if (inName==HX_("CFloat",59,62,ad,5f)) return 3;
	if (inName==HX_("CInt",6c,10,81,2c)) return 2;
	if (inName==HX_("CNull",6a,a8,c0,c7)) return 0;
	if (inName==HX_("CString",74,b1,e2,27)) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CBool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CString,return)

int Const_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CBool",0d,8e,cd,bf)) return 1;
	if (inName==HX_("CFloat",59,62,ad,5f)) return 1;
	if (inName==HX_("CInt",6c,10,81,2c)) return 1;
	if (inName==HX_("CNull",6a,a8,c0,c7)) return 0;
	if (inName==HX_("CString",74,b1,e2,27)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Const_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CBool",0d,8e,cd,bf)) return CBool_dyn();
	if (inName==HX_("CFloat",59,62,ad,5f)) return CFloat_dyn();
	if (inName==HX_("CInt",6c,10,81,2c)) return CInt_dyn();
	if (inName==HX_("CNull",6a,a8,c0,c7)) return CNull;
	if (inName==HX_("CString",74,b1,e2,27)) return CString_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Const_obj_sStaticFields[] = {
	HX_("CNull",6a,a8,c0,c7),
	HX_("CBool",0d,8e,cd,bf),
	HX_("CInt",6c,10,81,2c),
	HX_("CFloat",59,62,ad,5f),
	HX_("CString",74,b1,e2,27),
	::String(null())
};

::hx::Class Const_obj::__mClass;

Dynamic __Create_Const_obj() { return new Const_obj; }

void Const_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.Const",be,4a,17,7e), ::hx::TCanCast< Const_obj >,Const_obj_sStaticFields,0,
	&__Create_Const_obj, &__Create,
	&super::__SGetClass(), &CreateConst_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Const_obj::__GetStatic;
}

void Const_obj::__boot()
{
CNull = ::hx::CreateConstEnum< Const_obj >(HX_("CNull",6a,a8,c0,c7),0);
}


} // end namespace hxsl
