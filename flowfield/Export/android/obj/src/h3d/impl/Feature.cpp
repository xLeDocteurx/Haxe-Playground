#include <hxcpp.h>

#ifndef INCLUDED_h3d_impl_Feature
#include <h3d/impl/Feature.h>
#endif
namespace h3d{
namespace impl{

::h3d::impl::Feature Feature_obj::AllocDepthBuffer;

::h3d::impl::Feature Feature_obj::BottomLeftCoords;

::h3d::impl::Feature Feature_obj::FloatTextures;

::h3d::impl::Feature Feature_obj::HardwareAccelerated;

::h3d::impl::Feature Feature_obj::InstancedRendering;

::h3d::impl::Feature Feature_obj::MultipleRenderTargets;

::h3d::impl::Feature Feature_obj::Queries;

::h3d::impl::Feature Feature_obj::SRGBTextures;

::h3d::impl::Feature Feature_obj::ShaderModel3;

::h3d::impl::Feature Feature_obj::StandardDerivatives;

::h3d::impl::Feature Feature_obj::Wireframe;

bool Feature_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AllocDepthBuffer",0e,b0,cf,70)) { outValue = Feature_obj::AllocDepthBuffer; return true; }
	if (inName==HX_("BottomLeftCoords",70,1a,42,14)) { outValue = Feature_obj::BottomLeftCoords; return true; }
	if (inName==HX_("FloatTextures",d4,c4,f0,60)) { outValue = Feature_obj::FloatTextures; return true; }
	if (inName==HX_("HardwareAccelerated",ff,ba,96,92)) { outValue = Feature_obj::HardwareAccelerated; return true; }
	if (inName==HX_("InstancedRendering",3d,fe,71,0d)) { outValue = Feature_obj::InstancedRendering; return true; }
	if (inName==HX_("MultipleRenderTargets",fc,fa,3b,83)) { outValue = Feature_obj::MultipleRenderTargets; return true; }
	if (inName==HX_("Queries",46,b9,2e,63)) { outValue = Feature_obj::Queries; return true; }
	if (inName==HX_("SRGBTextures",d2,e9,b3,8e)) { outValue = Feature_obj::SRGBTextures; return true; }
	if (inName==HX_("ShaderModel3",8f,f9,c1,f8)) { outValue = Feature_obj::ShaderModel3; return true; }
	if (inName==HX_("StandardDerivatives",2f,6a,76,63)) { outValue = Feature_obj::StandardDerivatives; return true; }
	if (inName==HX_("Wireframe",a8,49,d9,12)) { outValue = Feature_obj::Wireframe; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Feature_obj)

int Feature_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AllocDepthBuffer",0e,b0,cf,70)) return 2;
	if (inName==HX_("BottomLeftCoords",70,1a,42,14)) return 8;
	if (inName==HX_("FloatTextures",d4,c4,f0,60)) return 1;
	if (inName==HX_("HardwareAccelerated",ff,ba,96,92)) return 3;
	if (inName==HX_("InstancedRendering",3d,fe,71,0d)) return 10;
	if (inName==HX_("MultipleRenderTargets",fc,fa,3b,83)) return 4;
	if (inName==HX_("Queries",46,b9,2e,63)) return 5;
	if (inName==HX_("SRGBTextures",d2,e9,b3,8e)) return 6;
	if (inName==HX_("ShaderModel3",8f,f9,c1,f8)) return 7;
	if (inName==HX_("StandardDerivatives",2f,6a,76,63)) return 0;
	if (inName==HX_("Wireframe",a8,49,d9,12)) return 9;
	return super::__FindIndex(inName);
}

int Feature_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AllocDepthBuffer",0e,b0,cf,70)) return 0;
	if (inName==HX_("BottomLeftCoords",70,1a,42,14)) return 0;
	if (inName==HX_("FloatTextures",d4,c4,f0,60)) return 0;
	if (inName==HX_("HardwareAccelerated",ff,ba,96,92)) return 0;
	if (inName==HX_("InstancedRendering",3d,fe,71,0d)) return 0;
	if (inName==HX_("MultipleRenderTargets",fc,fa,3b,83)) return 0;
	if (inName==HX_("Queries",46,b9,2e,63)) return 0;
	if (inName==HX_("SRGBTextures",d2,e9,b3,8e)) return 0;
	if (inName==HX_("ShaderModel3",8f,f9,c1,f8)) return 0;
	if (inName==HX_("StandardDerivatives",2f,6a,76,63)) return 0;
	if (inName==HX_("Wireframe",a8,49,d9,12)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Feature_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AllocDepthBuffer",0e,b0,cf,70)) return AllocDepthBuffer;
	if (inName==HX_("BottomLeftCoords",70,1a,42,14)) return BottomLeftCoords;
	if (inName==HX_("FloatTextures",d4,c4,f0,60)) return FloatTextures;
	if (inName==HX_("HardwareAccelerated",ff,ba,96,92)) return HardwareAccelerated;
	if (inName==HX_("InstancedRendering",3d,fe,71,0d)) return InstancedRendering;
	if (inName==HX_("MultipleRenderTargets",fc,fa,3b,83)) return MultipleRenderTargets;
	if (inName==HX_("Queries",46,b9,2e,63)) return Queries;
	if (inName==HX_("SRGBTextures",d2,e9,b3,8e)) return SRGBTextures;
	if (inName==HX_("ShaderModel3",8f,f9,c1,f8)) return ShaderModel3;
	if (inName==HX_("StandardDerivatives",2f,6a,76,63)) return StandardDerivatives;
	if (inName==HX_("Wireframe",a8,49,d9,12)) return Wireframe;
	return super::__Field(inName,inCallProp);
}

static ::String Feature_obj_sStaticFields[] = {
	HX_("StandardDerivatives",2f,6a,76,63),
	HX_("FloatTextures",d4,c4,f0,60),
	HX_("AllocDepthBuffer",0e,b0,cf,70),
	HX_("HardwareAccelerated",ff,ba,96,92),
	HX_("MultipleRenderTargets",fc,fa,3b,83),
	HX_("Queries",46,b9,2e,63),
	HX_("SRGBTextures",d2,e9,b3,8e),
	HX_("ShaderModel3",8f,f9,c1,f8),
	HX_("BottomLeftCoords",70,1a,42,14),
	HX_("Wireframe",a8,49,d9,12),
	HX_("InstancedRendering",3d,fe,71,0d),
	::String(null())
};

::hx::Class Feature_obj::__mClass;

Dynamic __Create_Feature_obj() { return new Feature_obj; }

void Feature_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.impl.Feature",5d,a1,7f,51), ::hx::TCanCast< Feature_obj >,Feature_obj_sStaticFields,0,
	&__Create_Feature_obj, &__Create,
	&super::__SGetClass(), &CreateFeature_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Feature_obj::__GetStatic;
}

void Feature_obj::__boot()
{
AllocDepthBuffer = ::hx::CreateConstEnum< Feature_obj >(HX_("AllocDepthBuffer",0e,b0,cf,70),2);
BottomLeftCoords = ::hx::CreateConstEnum< Feature_obj >(HX_("BottomLeftCoords",70,1a,42,14),8);
FloatTextures = ::hx::CreateConstEnum< Feature_obj >(HX_("FloatTextures",d4,c4,f0,60),1);
HardwareAccelerated = ::hx::CreateConstEnum< Feature_obj >(HX_("HardwareAccelerated",ff,ba,96,92),3);
InstancedRendering = ::hx::CreateConstEnum< Feature_obj >(HX_("InstancedRendering",3d,fe,71,0d),10);
MultipleRenderTargets = ::hx::CreateConstEnum< Feature_obj >(HX_("MultipleRenderTargets",fc,fa,3b,83),4);
Queries = ::hx::CreateConstEnum< Feature_obj >(HX_("Queries",46,b9,2e,63),5);
SRGBTextures = ::hx::CreateConstEnum< Feature_obj >(HX_("SRGBTextures",d2,e9,b3,8e),6);
ShaderModel3 = ::hx::CreateConstEnum< Feature_obj >(HX_("ShaderModel3",8f,f9,c1,f8),7);
StandardDerivatives = ::hx::CreateConstEnum< Feature_obj >(HX_("StandardDerivatives",2f,6a,76,63),0);
Wireframe = ::hx::CreateConstEnum< Feature_obj >(HX_("Wireframe",a8,49,d9,12),9);
}


} // end namespace h3d
} // end namespace impl
