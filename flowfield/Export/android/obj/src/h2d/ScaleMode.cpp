#include <hxcpp.h>

#ifndef INCLUDED_h2d_ScaleMode
#include <h2d/ScaleMode.h>
#endif
#ifndef INCLUDED_h2d_ScaleModeAlign
#include <h2d/ScaleModeAlign.h>
#endif
namespace h2d{

::h2d::ScaleMode ScaleMode_obj::AutoZoom(int minWidth,int minHeight, ::Dynamic integerScaling)
{
	return ::hx::CreateEnum< ScaleMode_obj >(HX_("AutoZoom",42,4e,d0,0d),5,3)->_hx_init(0,minWidth)->_hx_init(1,minHeight)->_hx_init(2,integerScaling);
}

::h2d::ScaleMode ScaleMode_obj::Fixed(int width,int height,Float zoom, ::h2d::ScaleModeAlign horizontalAlign, ::h2d::ScaleModeAlign verticalAlign)
{
	return ::hx::CreateEnum< ScaleMode_obj >(HX_("Fixed",54,69,cf,93),3,5)->_hx_init(0,width)->_hx_init(1,height)->_hx_init(2,zoom)->_hx_init(3,horizontalAlign)->_hx_init(4,verticalAlign);
}

::h2d::ScaleMode ScaleMode_obj::LetterBox(int width,int height, ::Dynamic integerScale, ::h2d::ScaleModeAlign horizontalAlign, ::h2d::ScaleModeAlign verticalAlign)
{
	return ::hx::CreateEnum< ScaleMode_obj >(HX_("LetterBox",a5,3c,b7,dc),2,5)->_hx_init(0,width)->_hx_init(1,height)->_hx_init(2,integerScale)->_hx_init(3,horizontalAlign)->_hx_init(4,verticalAlign);
}

::h2d::ScaleMode ScaleMode_obj::Resize;

::h2d::ScaleMode ScaleMode_obj::Stretch(int width,int height)
{
	return ::hx::CreateEnum< ScaleMode_obj >(HX_("Stretch",e5,65,a4,c3),1,2)->_hx_init(0,width)->_hx_init(1,height);
}

::h2d::ScaleMode ScaleMode_obj::Zoom(Float level)
{
	return ::hx::CreateEnum< ScaleMode_obj >(HX_("Zoom",33,cf,d1,3b),4,1)->_hx_init(0,level);
}

bool ScaleMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AutoZoom",42,4e,d0,0d)) { outValue = ScaleMode_obj::AutoZoom_dyn(); return true; }
	if (inName==HX_("Fixed",54,69,cf,93)) { outValue = ScaleMode_obj::Fixed_dyn(); return true; }
	if (inName==HX_("LetterBox",a5,3c,b7,dc)) { outValue = ScaleMode_obj::LetterBox_dyn(); return true; }
	if (inName==HX_("Resize",14,ce,0f,3d)) { outValue = ScaleMode_obj::Resize; return true; }
	if (inName==HX_("Stretch",e5,65,a4,c3)) { outValue = ScaleMode_obj::Stretch_dyn(); return true; }
	if (inName==HX_("Zoom",33,cf,d1,3b)) { outValue = ScaleMode_obj::Zoom_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ScaleMode_obj)

int ScaleMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AutoZoom",42,4e,d0,0d)) return 5;
	if (inName==HX_("Fixed",54,69,cf,93)) return 3;
	if (inName==HX_("LetterBox",a5,3c,b7,dc)) return 2;
	if (inName==HX_("Resize",14,ce,0f,3d)) return 0;
	if (inName==HX_("Stretch",e5,65,a4,c3)) return 1;
	if (inName==HX_("Zoom",33,cf,d1,3b)) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ScaleMode_obj,AutoZoom,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(ScaleMode_obj,Fixed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(ScaleMode_obj,LetterBox,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScaleMode_obj,Stretch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScaleMode_obj,Zoom,return)

int ScaleMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AutoZoom",42,4e,d0,0d)) return 3;
	if (inName==HX_("Fixed",54,69,cf,93)) return 5;
	if (inName==HX_("LetterBox",a5,3c,b7,dc)) return 5;
	if (inName==HX_("Resize",14,ce,0f,3d)) return 0;
	if (inName==HX_("Stretch",e5,65,a4,c3)) return 2;
	if (inName==HX_("Zoom",33,cf,d1,3b)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val ScaleMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AutoZoom",42,4e,d0,0d)) return AutoZoom_dyn();
	if (inName==HX_("Fixed",54,69,cf,93)) return Fixed_dyn();
	if (inName==HX_("LetterBox",a5,3c,b7,dc)) return LetterBox_dyn();
	if (inName==HX_("Resize",14,ce,0f,3d)) return Resize;
	if (inName==HX_("Stretch",e5,65,a4,c3)) return Stretch_dyn();
	if (inName==HX_("Zoom",33,cf,d1,3b)) return Zoom_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ScaleMode_obj_sStaticFields[] = {
	HX_("Resize",14,ce,0f,3d),
	HX_("Stretch",e5,65,a4,c3),
	HX_("LetterBox",a5,3c,b7,dc),
	HX_("Fixed",54,69,cf,93),
	HX_("Zoom",33,cf,d1,3b),
	HX_("AutoZoom",42,4e,d0,0d),
	::String(null())
};

::hx::Class ScaleMode_obj::__mClass;

Dynamic __Create_ScaleMode_obj() { return new ScaleMode_obj; }

void ScaleMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h2d.ScaleMode",d9,8f,80,df), ::hx::TCanCast< ScaleMode_obj >,ScaleMode_obj_sStaticFields,0,
	&__Create_ScaleMode_obj, &__Create,
	&super::__SGetClass(), &CreateScaleMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ScaleMode_obj::__GetStatic;
}

void ScaleMode_obj::__boot()
{
Resize = ::hx::CreateConstEnum< ScaleMode_obj >(HX_("Resize",14,ce,0f,3d),0);
}


} // end namespace h2d
