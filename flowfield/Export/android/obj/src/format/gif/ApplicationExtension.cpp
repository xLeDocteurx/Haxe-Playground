#include <hxcpp.h>

#ifndef INCLUDED_format_gif_ApplicationExtension
#include <format/gif/ApplicationExtension.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace format{
namespace gif{

::format::gif::ApplicationExtension ApplicationExtension_obj::AENetscapeLooping(int loops)
{
	return ::hx::CreateEnum< ApplicationExtension_obj >(HX_("AENetscapeLooping",f1,96,b5,c1),0,1)->_hx_init(0,loops);
}

::format::gif::ApplicationExtension ApplicationExtension_obj::AEUnknown(::String name,::String version, ::haxe::io::Bytes data)
{
	return ::hx::CreateEnum< ApplicationExtension_obj >(HX_("AEUnknown",06,b7,b0,a8),1,3)->_hx_init(0,name)->_hx_init(1,version)->_hx_init(2,data);
}

bool ApplicationExtension_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AENetscapeLooping",f1,96,b5,c1)) { outValue = ApplicationExtension_obj::AENetscapeLooping_dyn(); return true; }
	if (inName==HX_("AEUnknown",06,b7,b0,a8)) { outValue = ApplicationExtension_obj::AEUnknown_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ApplicationExtension_obj)

int ApplicationExtension_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AENetscapeLooping",f1,96,b5,c1)) return 0;
	if (inName==HX_("AEUnknown",06,b7,b0,a8)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationExtension_obj,AENetscapeLooping,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ApplicationExtension_obj,AEUnknown,return)

int ApplicationExtension_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AENetscapeLooping",f1,96,b5,c1)) return 1;
	if (inName==HX_("AEUnknown",06,b7,b0,a8)) return 3;
	return super::__FindArgCount(inName);
}

::hx::Val ApplicationExtension_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AENetscapeLooping",f1,96,b5,c1)) return AENetscapeLooping_dyn();
	if (inName==HX_("AEUnknown",06,b7,b0,a8)) return AEUnknown_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ApplicationExtension_obj_sStaticFields[] = {
	HX_("AENetscapeLooping",f1,96,b5,c1),
	HX_("AEUnknown",06,b7,b0,a8),
	::String(null())
};

::hx::Class ApplicationExtension_obj::__mClass;

Dynamic __Create_ApplicationExtension_obj() { return new ApplicationExtension_obj; }

void ApplicationExtension_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.gif.ApplicationExtension",f0,e8,48,ef), ::hx::TCanCast< ApplicationExtension_obj >,ApplicationExtension_obj_sStaticFields,0,
	&__Create_ApplicationExtension_obj, &__Create,
	&super::__SGetClass(), &CreateApplicationExtension_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ApplicationExtension_obj::__GetStatic;
}

void ApplicationExtension_obj::__boot()
{
}


} // end namespace format
} // end namespace gif
