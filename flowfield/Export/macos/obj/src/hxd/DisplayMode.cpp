#include <hxcpp.h>

#ifndef INCLUDED_hxd_DisplayMode
#include <hxd/DisplayMode.h>
#endif
namespace hxd{

::hxd::DisplayMode DisplayMode_obj::Borderless;

::hxd::DisplayMode DisplayMode_obj::Fullscreen;

::hxd::DisplayMode DisplayMode_obj::FullscreenResize;

::hxd::DisplayMode DisplayMode_obj::Windowed;

bool DisplayMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Borderless",65,4a,22,0e)) { outValue = DisplayMode_obj::Borderless; return true; }
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) { outValue = DisplayMode_obj::Fullscreen; return true; }
	if (inName==HX_("FullscreenResize",af,c2,18,02)) { outValue = DisplayMode_obj::FullscreenResize; return true; }
	if (inName==HX_("Windowed",6f,84,7f,57)) { outValue = DisplayMode_obj::Windowed; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DisplayMode_obj)

int DisplayMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Borderless",65,4a,22,0e)) return 1;
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) return 2;
	if (inName==HX_("FullscreenResize",af,c2,18,02)) return 3;
	if (inName==HX_("Windowed",6f,84,7f,57)) return 0;
	return super::__FindIndex(inName);
}

int DisplayMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Borderless",65,4a,22,0e)) return 0;
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) return 0;
	if (inName==HX_("FullscreenResize",af,c2,18,02)) return 0;
	if (inName==HX_("Windowed",6f,84,7f,57)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DisplayMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Borderless",65,4a,22,0e)) return Borderless;
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) return Fullscreen;
	if (inName==HX_("FullscreenResize",af,c2,18,02)) return FullscreenResize;
	if (inName==HX_("Windowed",6f,84,7f,57)) return Windowed;
	return super::__Field(inName,inCallProp);
}

static ::String DisplayMode_obj_sStaticFields[] = {
	HX_("Windowed",6f,84,7f,57),
	HX_("Borderless",65,4a,22,0e),
	HX_("Fullscreen",5b,3e,65,f0),
	HX_("FullscreenResize",af,c2,18,02),
	::String(null())
};

::hx::Class DisplayMode_obj::__mClass;

Dynamic __Create_DisplayMode_obj() { return new DisplayMode_obj; }

void DisplayMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.DisplayMode",8b,be,94,eb), ::hx::TCanCast< DisplayMode_obj >,DisplayMode_obj_sStaticFields,0,
	&__Create_DisplayMode_obj, &__Create,
	&super::__SGetClass(), &CreateDisplayMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DisplayMode_obj::__GetStatic;
}

void DisplayMode_obj::__boot()
{
Borderless = ::hx::CreateConstEnum< DisplayMode_obj >(HX_("Borderless",65,4a,22,0e),1);
Fullscreen = ::hx::CreateConstEnum< DisplayMode_obj >(HX_("Fullscreen",5b,3e,65,f0),2);
FullscreenResize = ::hx::CreateConstEnum< DisplayMode_obj >(HX_("FullscreenResize",af,c2,18,02),3);
Windowed = ::hx::CreateConstEnum< DisplayMode_obj >(HX_("Windowed",6f,84,7f,57),0);
}


} // end namespace hxd
