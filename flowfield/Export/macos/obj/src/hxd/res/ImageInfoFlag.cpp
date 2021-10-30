#include <hxcpp.h>

#ifndef INCLUDED_hxd_res_ImageInfoFlag
#include <hxd/res/ImageInfoFlag.h>
#endif
namespace hxd{
namespace res{

::hxd::res::ImageInfoFlag ImageInfoFlag_obj::Dxt10Header;

::hxd::res::ImageInfoFlag ImageInfoFlag_obj::IsCube;

bool ImageInfoFlag_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Dxt10Header",0c,dc,a2,e3)) { outValue = ImageInfoFlag_obj::Dxt10Header; return true; }
	if (inName==HX_("IsCube",1f,76,c4,93)) { outValue = ImageInfoFlag_obj::IsCube; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ImageInfoFlag_obj)

int ImageInfoFlag_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Dxt10Header",0c,dc,a2,e3)) return 1;
	if (inName==HX_("IsCube",1f,76,c4,93)) return 0;
	return super::__FindIndex(inName);
}

int ImageInfoFlag_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Dxt10Header",0c,dc,a2,e3)) return 0;
	if (inName==HX_("IsCube",1f,76,c4,93)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ImageInfoFlag_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Dxt10Header",0c,dc,a2,e3)) return Dxt10Header;
	if (inName==HX_("IsCube",1f,76,c4,93)) return IsCube;
	return super::__Field(inName,inCallProp);
}

static ::String ImageInfoFlag_obj_sStaticFields[] = {
	HX_("IsCube",1f,76,c4,93),
	HX_("Dxt10Header",0c,dc,a2,e3),
	::String(null())
};

::hx::Class ImageInfoFlag_obj::__mClass;

Dynamic __Create_ImageInfoFlag_obj() { return new ImageInfoFlag_obj; }

void ImageInfoFlag_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.res.ImageInfoFlag",6d,de,95,9e), ::hx::TCanCast< ImageInfoFlag_obj >,ImageInfoFlag_obj_sStaticFields,0,
	&__Create_ImageInfoFlag_obj, &__Create,
	&super::__SGetClass(), &CreateImageInfoFlag_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ImageInfoFlag_obj::__GetStatic;
}

void ImageInfoFlag_obj::__boot()
{
Dxt10Header = ::hx::CreateConstEnum< ImageInfoFlag_obj >(HX_("Dxt10Header",0c,dc,a2,e3),1);
IsCube = ::hx::CreateConstEnum< ImageInfoFlag_obj >(HX_("IsCube",1f,76,c4,93),0);
}


} // end namespace hxd
} // end namespace res
