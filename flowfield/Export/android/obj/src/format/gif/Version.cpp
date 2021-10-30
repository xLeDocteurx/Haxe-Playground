#include <hxcpp.h>

#ifndef INCLUDED_format_gif_Version
#include <format/gif/Version.h>
#endif
namespace format{
namespace gif{

::format::gif::Version Version_obj::GIF87a;

::format::gif::Version Version_obj::GIF89a;

::format::gif::Version Version_obj::Unknown(::String version)
{
	return ::hx::CreateEnum< Version_obj >(HX_("Unknown",6a,4b,cc,ae),2,1)->_hx_init(0,version);
}

bool Version_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GIF87a",1e,95,06,9a)) { outValue = Version_obj::GIF87a; return true; }
	if (inName==HX_("GIF89a",dc,96,06,9a)) { outValue = Version_obj::GIF89a; return true; }
	if (inName==HX_("Unknown",6a,4b,cc,ae)) { outValue = Version_obj::Unknown_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Version_obj)

int Version_obj::__FindIndex(::String inName)
{
	if (inName==HX_("GIF87a",1e,95,06,9a)) return 0;
	if (inName==HX_("GIF89a",dc,96,06,9a)) return 1;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Version_obj,Unknown,return)

int Version_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("GIF87a",1e,95,06,9a)) return 0;
	if (inName==HX_("GIF89a",dc,96,06,9a)) return 0;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Version_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GIF87a",1e,95,06,9a)) return GIF87a;
	if (inName==HX_("GIF89a",dc,96,06,9a)) return GIF89a;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return Unknown_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Version_obj_sStaticFields[] = {
	HX_("GIF87a",1e,95,06,9a),
	HX_("GIF89a",dc,96,06,9a),
	HX_("Unknown",6a,4b,cc,ae),
	::String(null())
};

::hx::Class Version_obj::__mClass;

Dynamic __Create_Version_obj() { return new Version_obj; }

void Version_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.gif.Version",d7,70,f5,c2), ::hx::TCanCast< Version_obj >,Version_obj_sStaticFields,0,
	&__Create_Version_obj, &__Create,
	&super::__SGetClass(), &CreateVersion_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Version_obj::__GetStatic;
}

void Version_obj::__boot()
{
GIF87a = ::hx::CreateConstEnum< Version_obj >(HX_("GIF87a",1e,95,06,9a),0);
GIF89a = ::hx::CreateConstEnum< Version_obj >(HX_("GIF89a",dc,96,06,9a),1);
}


} // end namespace format
} // end namespace gif
