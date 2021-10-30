#include <hxcpp.h>

#ifndef INCLUDED_h2d_FontType
#include <h2d/FontType.h>
#endif
namespace h2d{

::h2d::FontType FontType_obj::BitmapFont;

::h2d::FontType FontType_obj::SignedDistanceField(int channel,Float alphaCutoff,Float smoothing)
{
	return ::hx::CreateEnum< FontType_obj >(HX_("SignedDistanceField",a9,4d,0d,58),1,3)->_hx_init(0,channel)->_hx_init(1,alphaCutoff)->_hx_init(2,smoothing);
}

bool FontType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BitmapFont",7e,c1,ce,2b)) { outValue = FontType_obj::BitmapFont; return true; }
	if (inName==HX_("SignedDistanceField",a9,4d,0d,58)) { outValue = FontType_obj::SignedDistanceField_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FontType_obj)

int FontType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BitmapFont",7e,c1,ce,2b)) return 0;
	if (inName==HX_("SignedDistanceField",a9,4d,0d,58)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(FontType_obj,SignedDistanceField,return)

int FontType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BitmapFont",7e,c1,ce,2b)) return 0;
	if (inName==HX_("SignedDistanceField",a9,4d,0d,58)) return 3;
	return super::__FindArgCount(inName);
}

::hx::Val FontType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BitmapFont",7e,c1,ce,2b)) return BitmapFont;
	if (inName==HX_("SignedDistanceField",a9,4d,0d,58)) return SignedDistanceField_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FontType_obj_sStaticFields[] = {
	HX_("BitmapFont",7e,c1,ce,2b),
	HX_("SignedDistanceField",a9,4d,0d,58),
	::String(null())
};

::hx::Class FontType_obj::__mClass;

Dynamic __Create_FontType_obj() { return new FontType_obj; }

void FontType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h2d.FontType",dd,f8,e5,8e), ::hx::TCanCast< FontType_obj >,FontType_obj_sStaticFields,0,
	&__Create_FontType_obj, &__Create,
	&super::__SGetClass(), &CreateFontType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FontType_obj::__GetStatic;
}

void FontType_obj::__boot()
{
BitmapFont = ::hx::CreateConstEnum< FontType_obj >(HX_("BitmapFont",7e,c1,ce,2b),0);
}


} // end namespace h2d
