#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif
namespace hxd{
namespace fmt{
namespace hmd{

::hxd::fmt::hmd::Property Property_obj::CameraFOVY(Float v)
{
	return ::hx::CreateEnum< Property_obj >(HX_("CameraFOVY",11,2e,77,a0),0,1)->_hx_init(0,v);
}

::hxd::fmt::hmd::Property Property_obj::HasExtraTextures;

::hxd::fmt::hmd::Property Property_obj::Unused_HasMaterialFlags;

bool Property_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CameraFOVY",11,2e,77,a0)) { outValue = Property_obj::CameraFOVY_dyn(); return true; }
	if (inName==HX_("HasExtraTextures",4e,3a,48,be)) { outValue = Property_obj::HasExtraTextures; return true; }
	if (inName==HX_("Unused_HasMaterialFlags",ef,81,29,61)) { outValue = Property_obj::Unused_HasMaterialFlags; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Property_obj)

int Property_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CameraFOVY",11,2e,77,a0)) return 0;
	if (inName==HX_("HasExtraTextures",4e,3a,48,be)) return 2;
	if (inName==HX_("Unused_HasMaterialFlags",ef,81,29,61)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Property_obj,CameraFOVY,return)

int Property_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CameraFOVY",11,2e,77,a0)) return 1;
	if (inName==HX_("HasExtraTextures",4e,3a,48,be)) return 0;
	if (inName==HX_("Unused_HasMaterialFlags",ef,81,29,61)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Property_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CameraFOVY",11,2e,77,a0)) return CameraFOVY_dyn();
	if (inName==HX_("HasExtraTextures",4e,3a,48,be)) return HasExtraTextures;
	if (inName==HX_("Unused_HasMaterialFlags",ef,81,29,61)) return Unused_HasMaterialFlags;
	return super::__Field(inName,inCallProp);
}

static ::String Property_obj_sStaticFields[] = {
	HX_("CameraFOVY",11,2e,77,a0),
	HX_("Unused_HasMaterialFlags",ef,81,29,61),
	HX_("HasExtraTextures",4e,3a,48,be),
	::String(null())
};

::hx::Class Property_obj::__mClass;

Dynamic __Create_Property_obj() { return new Property_obj; }

void Property_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.fmt.hmd.Property",1f,0f,2b,58), ::hx::TCanCast< Property_obj >,Property_obj_sStaticFields,0,
	&__Create_Property_obj, &__Create,
	&super::__SGetClass(), &CreateProperty_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Property_obj::__GetStatic;
}

void Property_obj::__boot()
{
HasExtraTextures = ::hx::CreateConstEnum< Property_obj >(HX_("HasExtraTextures",4e,3a,48,be),2);
Unused_HasMaterialFlags = ::hx::CreateConstEnum< Property_obj >(HX_("Unused_HasMaterialFlags",ef,81,29,61),1);
}


} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
