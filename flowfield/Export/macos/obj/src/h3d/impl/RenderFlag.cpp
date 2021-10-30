#include <hxcpp.h>

#ifndef INCLUDED_h3d_impl_RenderFlag
#include <h3d/impl/RenderFlag.h>
#endif
namespace h3d{
namespace impl{

::h3d::impl::RenderFlag RenderFlag_obj::CameraHandness;

bool RenderFlag_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CameraHandness",6b,d3,58,76)) { outValue = RenderFlag_obj::CameraHandness; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(RenderFlag_obj)

int RenderFlag_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CameraHandness",6b,d3,58,76)) return 0;
	return super::__FindIndex(inName);
}

int RenderFlag_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CameraHandness",6b,d3,58,76)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val RenderFlag_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CameraHandness",6b,d3,58,76)) return CameraHandness;
	return super::__Field(inName,inCallProp);
}

static ::String RenderFlag_obj_sStaticFields[] = {
	HX_("CameraHandness",6b,d3,58,76),
	::String(null())
};

::hx::Class RenderFlag_obj::__mClass;

Dynamic __Create_RenderFlag_obj() { return new RenderFlag_obj; }

void RenderFlag_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.impl.RenderFlag",db,b9,88,e8), ::hx::TCanCast< RenderFlag_obj >,RenderFlag_obj_sStaticFields,0,
	&__Create_RenderFlag_obj, &__Create,
	&super::__SGetClass(), &CreateRenderFlag_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &RenderFlag_obj::__GetStatic;
}

void RenderFlag_obj::__boot()
{
CameraHandness = ::hx::CreateConstEnum< RenderFlag_obj >(HX_("CameraHandness",6b,d3,58,76),0);
}


} // end namespace h3d
} // end namespace impl
