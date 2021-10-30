#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_Layer
#include <format/mp3/Layer.h>
#endif
namespace format{
namespace mp3{

::format::mp3::Layer Layer_obj::Layer1;

::format::mp3::Layer Layer_obj::Layer2;

::format::mp3::Layer Layer_obj::Layer3;

::format::mp3::Layer Layer_obj::LayerReserved;

bool Layer_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Layer1",60,89,45,8d)) { outValue = Layer_obj::Layer1; return true; }
	if (inName==HX_("Layer2",61,89,45,8d)) { outValue = Layer_obj::Layer2; return true; }
	if (inName==HX_("Layer3",62,89,45,8d)) { outValue = Layer_obj::Layer3; return true; }
	if (inName==HX_("LayerReserved",79,3d,08,7d)) { outValue = Layer_obj::LayerReserved; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Layer_obj)

int Layer_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Layer1",60,89,45,8d)) return 3;
	if (inName==HX_("Layer2",61,89,45,8d)) return 2;
	if (inName==HX_("Layer3",62,89,45,8d)) return 1;
	if (inName==HX_("LayerReserved",79,3d,08,7d)) return 0;
	return super::__FindIndex(inName);
}

int Layer_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Layer1",60,89,45,8d)) return 0;
	if (inName==HX_("Layer2",61,89,45,8d)) return 0;
	if (inName==HX_("Layer3",62,89,45,8d)) return 0;
	if (inName==HX_("LayerReserved",79,3d,08,7d)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Layer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Layer1",60,89,45,8d)) return Layer1;
	if (inName==HX_("Layer2",61,89,45,8d)) return Layer2;
	if (inName==HX_("Layer3",62,89,45,8d)) return Layer3;
	if (inName==HX_("LayerReserved",79,3d,08,7d)) return LayerReserved;
	return super::__Field(inName,inCallProp);
}

static ::String Layer_obj_sStaticFields[] = {
	HX_("LayerReserved",79,3d,08,7d),
	HX_("Layer3",62,89,45,8d),
	HX_("Layer2",61,89,45,8d),
	HX_("Layer1",60,89,45,8d),
	::String(null())
};

::hx::Class Layer_obj::__mClass;

Dynamic __Create_Layer_obj() { return new Layer_obj; }

void Layer_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.mp3.Layer",3c,ba,1c,bd), ::hx::TCanCast< Layer_obj >,Layer_obj_sStaticFields,0,
	&__Create_Layer_obj, &__Create,
	&super::__SGetClass(), &CreateLayer_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Layer_obj::__GetStatic;
}

void Layer_obj::__boot()
{
Layer1 = ::hx::CreateConstEnum< Layer_obj >(HX_("Layer1",60,89,45,8d),3);
Layer2 = ::hx::CreateConstEnum< Layer_obj >(HX_("Layer2",61,89,45,8d),2);
Layer3 = ::hx::CreateConstEnum< Layer_obj >(HX_("Layer3",62,89,45,8d),1);
LayerReserved = ::hx::CreateConstEnum< Layer_obj >(HX_("LayerReserved",79,3d,08,7d),0);
}


} // end namespace format
} // end namespace mp3
