#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_DriverFeature
#include <hxd/snd/DriverFeature.h>
#endif
namespace hxd{
namespace snd{

::hxd::snd::DriverFeature DriverFeature_obj::MasterVolume;

bool DriverFeature_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MasterVolume",3c,90,0f,3b)) { outValue = DriverFeature_obj::MasterVolume; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DriverFeature_obj)

int DriverFeature_obj::__FindIndex(::String inName)
{
	if (inName==HX_("MasterVolume",3c,90,0f,3b)) return 0;
	return super::__FindIndex(inName);
}

int DriverFeature_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("MasterVolume",3c,90,0f,3b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DriverFeature_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MasterVolume",3c,90,0f,3b)) return MasterVolume;
	return super::__Field(inName,inCallProp);
}

static ::String DriverFeature_obj_sStaticFields[] = {
	HX_("MasterVolume",3c,90,0f,3b),
	::String(null())
};

::hx::Class DriverFeature_obj::__mClass;

Dynamic __Create_DriverFeature_obj() { return new DriverFeature_obj; }

void DriverFeature_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.snd.DriverFeature",ef,c7,f8,f0), ::hx::TCanCast< DriverFeature_obj >,DriverFeature_obj_sStaticFields,0,
	&__Create_DriverFeature_obj, &__Create,
	&super::__SGetClass(), &CreateDriverFeature_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DriverFeature_obj::__GetStatic;
}

void DriverFeature_obj::__boot()
{
MasterVolume = ::hx::CreateConstEnum< DriverFeature_obj >(HX_("MasterVolume",3c,90,0f,3b),0);
}


} // end namespace hxd
} // end namespace snd
