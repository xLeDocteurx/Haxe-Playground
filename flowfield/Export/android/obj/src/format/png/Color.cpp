#include <hxcpp.h>

#ifndef INCLUDED_format_png_Color
#include <format/png/Color.h>
#endif
namespace format{
namespace png{

::format::png::Color Color_obj::ColGrey(bool alpha)
{
	return ::hx::CreateEnum< Color_obj >(HX_("ColGrey",9f,c7,46,a2),0,1)->_hx_init(0,alpha);
}

::format::png::Color Color_obj::ColIndexed;

::format::png::Color Color_obj::ColTrue(bool alpha)
{
	return ::hx::CreateEnum< Color_obj >(HX_("ColTrue",8e,9b,de,aa),1,1)->_hx_init(0,alpha);
}

bool Color_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ColGrey",9f,c7,46,a2)) { outValue = Color_obj::ColGrey_dyn(); return true; }
	if (inName==HX_("ColIndexed",b1,8f,82,99)) { outValue = Color_obj::ColIndexed; return true; }
	if (inName==HX_("ColTrue",8e,9b,de,aa)) { outValue = Color_obj::ColTrue_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Color_obj)

int Color_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ColGrey",9f,c7,46,a2)) return 0;
	if (inName==HX_("ColIndexed",b1,8f,82,99)) return 2;
	if (inName==HX_("ColTrue",8e,9b,de,aa)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_obj,ColGrey,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_obj,ColTrue,return)

int Color_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ColGrey",9f,c7,46,a2)) return 1;
	if (inName==HX_("ColIndexed",b1,8f,82,99)) return 0;
	if (inName==HX_("ColTrue",8e,9b,de,aa)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Color_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ColGrey",9f,c7,46,a2)) return ColGrey_dyn();
	if (inName==HX_("ColIndexed",b1,8f,82,99)) return ColIndexed;
	if (inName==HX_("ColTrue",8e,9b,de,aa)) return ColTrue_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Color_obj_sStaticFields[] = {
	HX_("ColGrey",9f,c7,46,a2),
	HX_("ColTrue",8e,9b,de,aa),
	HX_("ColIndexed",b1,8f,82,99),
	::String(null())
};

::hx::Class Color_obj::__mClass;

Dynamic __Create_Color_obj() { return new Color_obj; }

void Color_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.png.Color",c7,1f,84,10), ::hx::TCanCast< Color_obj >,Color_obj_sStaticFields,0,
	&__Create_Color_obj, &__Create,
	&super::__SGetClass(), &CreateColor_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Color_obj::__GetStatic;
}

void Color_obj::__boot()
{
ColIndexed = ::hx::CreateConstEnum< Color_obj >(HX_("ColIndexed",b1,8f,82,99),2);
}


} // end namespace format
} // end namespace png
