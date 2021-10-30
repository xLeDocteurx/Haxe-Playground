#include <hxcpp.h>

#ifndef INCLUDED_hxd_SystemValue
#include <hxd/SystemValue.h>
#endif
namespace hxd{

::hxd::SystemValue SystemValue_obj::IsMobile;

::hxd::SystemValue SystemValue_obj::IsTouch;

::hxd::SystemValue SystemValue_obj::IsWindowed;

bool SystemValue_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("IsMobile",0c,04,93,f1)) { outValue = SystemValue_obj::IsMobile; return true; }
	if (inName==HX_("IsTouch",55,e3,09,7e)) { outValue = SystemValue_obj::IsTouch; return true; }
	if (inName==HX_("IsWindowed",79,de,2d,ef)) { outValue = SystemValue_obj::IsWindowed; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SystemValue_obj)

int SystemValue_obj::__FindIndex(::String inName)
{
	if (inName==HX_("IsMobile",0c,04,93,f1)) return 2;
	if (inName==HX_("IsTouch",55,e3,09,7e)) return 0;
	if (inName==HX_("IsWindowed",79,de,2d,ef)) return 1;
	return super::__FindIndex(inName);
}

int SystemValue_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("IsMobile",0c,04,93,f1)) return 0;
	if (inName==HX_("IsTouch",55,e3,09,7e)) return 0;
	if (inName==HX_("IsWindowed",79,de,2d,ef)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SystemValue_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("IsMobile",0c,04,93,f1)) return IsMobile;
	if (inName==HX_("IsTouch",55,e3,09,7e)) return IsTouch;
	if (inName==HX_("IsWindowed",79,de,2d,ef)) return IsWindowed;
	return super::__Field(inName,inCallProp);
}

static ::String SystemValue_obj_sStaticFields[] = {
	HX_("IsTouch",55,e3,09,7e),
	HX_("IsWindowed",79,de,2d,ef),
	HX_("IsMobile",0c,04,93,f1),
	::String(null())
};

::hx::Class SystemValue_obj::__mClass;

Dynamic __Create_SystemValue_obj() { return new SystemValue_obj; }

void SystemValue_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.SystemValue",c8,21,70,f1), ::hx::TCanCast< SystemValue_obj >,SystemValue_obj_sStaticFields,0,
	&__Create_SystemValue_obj, &__Create,
	&super::__SGetClass(), &CreateSystemValue_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SystemValue_obj::__GetStatic;
}

void SystemValue_obj::__boot()
{
IsMobile = ::hx::CreateConstEnum< SystemValue_obj >(HX_("IsMobile",0c,04,93,f1),2);
IsTouch = ::hx::CreateConstEnum< SystemValue_obj >(HX_("IsTouch",55,e3,09,7e),0);
IsWindowed = ::hx::CreateConstEnum< SystemValue_obj >(HX_("IsWindowed",79,de,2d,ef),1);
}


} // end namespace hxd
