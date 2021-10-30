#include <hxcpp.h>

#ifndef INCLUDED_h3d_scene_RenderMode
#include <h3d/scene/RenderMode.h>
#endif
namespace h3d{
namespace scene{

::h3d::scene::RenderMode RenderMode_obj::Default;

::h3d::scene::RenderMode RenderMode_obj::LightProbe;

bool RenderMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Default",a1,00,15,69)) { outValue = RenderMode_obj::Default; return true; }
	if (inName==HX_("LightProbe",9a,f6,46,40)) { outValue = RenderMode_obj::LightProbe; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(RenderMode_obj)

int RenderMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Default",a1,00,15,69)) return 0;
	if (inName==HX_("LightProbe",9a,f6,46,40)) return 1;
	return super::__FindIndex(inName);
}

int RenderMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Default",a1,00,15,69)) return 0;
	if (inName==HX_("LightProbe",9a,f6,46,40)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val RenderMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Default",a1,00,15,69)) return Default;
	if (inName==HX_("LightProbe",9a,f6,46,40)) return LightProbe;
	return super::__Field(inName,inCallProp);
}

static ::String RenderMode_obj_sStaticFields[] = {
	HX_("Default",a1,00,15,69),
	HX_("LightProbe",9a,f6,46,40),
	::String(null())
};

::hx::Class RenderMode_obj::__mClass;

Dynamic __Create_RenderMode_obj() { return new RenderMode_obj; }

void RenderMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.scene.RenderMode",b0,5e,f9,24), ::hx::TCanCast< RenderMode_obj >,RenderMode_obj_sStaticFields,0,
	&__Create_RenderMode_obj, &__Create,
	&super::__SGetClass(), &CreateRenderMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &RenderMode_obj::__GetStatic;
}

void RenderMode_obj::__boot()
{
Default = ::hx::CreateConstEnum< RenderMode_obj >(HX_("Default",a1,00,15,69),0);
LightProbe = ::hx::CreateConstEnum< RenderMode_obj >(HX_("LightProbe",9a,f6,46,40),1);
}


} // end namespace h3d
} // end namespace scene
