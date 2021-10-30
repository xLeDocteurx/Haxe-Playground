#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_hxd_fs_ConvertPattern
#include <hxd/fs/ConvertPattern.h>
#endif
namespace hxd{
namespace fs{

::hxd::fs::ConvertPattern ConvertPattern_obj::Ext(::String e)
{
	return ::hx::CreateEnum< ConvertPattern_obj >(HX_("Ext",81,c4,34,00),2,1)->_hx_init(0,e);
}

::hxd::fs::ConvertPattern ConvertPattern_obj::Exts(::Array< ::String > e)
{
	return ::hx::CreateEnum< ConvertPattern_obj >(HX_("Exts",d2,2c,f7,2d),3,1)->_hx_init(0,e);
}

::hxd::fs::ConvertPattern ConvertPattern_obj::Filename(::String name)
{
	return ::hx::CreateEnum< ConvertPattern_obj >(HX_("Filename",e7,ea,1b,51),0,1)->_hx_init(0,name);
}

::hxd::fs::ConvertPattern ConvertPattern_obj::Regexp( ::EReg r)
{
	return ::hx::CreateEnum< ConvertPattern_obj >(HX_("Regexp",e9,33,1e,35),1,1)->_hx_init(0,r);
}

::hxd::fs::ConvertPattern ConvertPattern_obj::Wildcard;

bool ConvertPattern_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Ext",81,c4,34,00)) { outValue = ConvertPattern_obj::Ext_dyn(); return true; }
	if (inName==HX_("Exts",d2,2c,f7,2d)) { outValue = ConvertPattern_obj::Exts_dyn(); return true; }
	if (inName==HX_("Filename",e7,ea,1b,51)) { outValue = ConvertPattern_obj::Filename_dyn(); return true; }
	if (inName==HX_("Regexp",e9,33,1e,35)) { outValue = ConvertPattern_obj::Regexp_dyn(); return true; }
	if (inName==HX_("Wildcard",fa,95,c9,82)) { outValue = ConvertPattern_obj::Wildcard; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ConvertPattern_obj)

int ConvertPattern_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Ext",81,c4,34,00)) return 2;
	if (inName==HX_("Exts",d2,2c,f7,2d)) return 3;
	if (inName==HX_("Filename",e7,ea,1b,51)) return 0;
	if (inName==HX_("Regexp",e9,33,1e,35)) return 1;
	if (inName==HX_("Wildcard",fa,95,c9,82)) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConvertPattern_obj,Ext,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConvertPattern_obj,Exts,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConvertPattern_obj,Filename,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConvertPattern_obj,Regexp,return)

int ConvertPattern_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Ext",81,c4,34,00)) return 1;
	if (inName==HX_("Exts",d2,2c,f7,2d)) return 1;
	if (inName==HX_("Filename",e7,ea,1b,51)) return 1;
	if (inName==HX_("Regexp",e9,33,1e,35)) return 1;
	if (inName==HX_("Wildcard",fa,95,c9,82)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ConvertPattern_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Ext",81,c4,34,00)) return Ext_dyn();
	if (inName==HX_("Exts",d2,2c,f7,2d)) return Exts_dyn();
	if (inName==HX_("Filename",e7,ea,1b,51)) return Filename_dyn();
	if (inName==HX_("Regexp",e9,33,1e,35)) return Regexp_dyn();
	if (inName==HX_("Wildcard",fa,95,c9,82)) return Wildcard;
	return super::__Field(inName,inCallProp);
}

static ::String ConvertPattern_obj_sStaticFields[] = {
	HX_("Filename",e7,ea,1b,51),
	HX_("Regexp",e9,33,1e,35),
	HX_("Ext",81,c4,34,00),
	HX_("Exts",d2,2c,f7,2d),
	HX_("Wildcard",fa,95,c9,82),
	::String(null())
};

::hx::Class ConvertPattern_obj::__mClass;

Dynamic __Create_ConvertPattern_obj() { return new ConvertPattern_obj; }

void ConvertPattern_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.fs.ConvertPattern",24,37,fe,4f), ::hx::TCanCast< ConvertPattern_obj >,ConvertPattern_obj_sStaticFields,0,
	&__Create_ConvertPattern_obj, &__Create,
	&super::__SGetClass(), &CreateConvertPattern_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ConvertPattern_obj::__GetStatic;
}

void ConvertPattern_obj::__boot()
{
Wildcard = ::hx::CreateConstEnum< ConvertPattern_obj >(HX_("Wildcard",fa,95,c9,82),4);
}


} // end namespace hxd
} // end namespace fs
