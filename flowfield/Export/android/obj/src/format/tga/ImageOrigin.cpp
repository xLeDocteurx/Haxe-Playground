#include <hxcpp.h>

#ifndef INCLUDED_format_tga_ImageOrigin
#include <format/tga/ImageOrigin.h>
#endif
namespace format{
namespace tga{

::format::tga::ImageOrigin ImageOrigin_obj::BottomLeft;

::format::tga::ImageOrigin ImageOrigin_obj::BottomRight;

::format::tga::ImageOrigin ImageOrigin_obj::TopLeft;

::format::tga::ImageOrigin ImageOrigin_obj::TopRight;

bool ImageOrigin_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BottomLeft",b2,70,48,23)) { outValue = ImageOrigin_obj::BottomLeft; return true; }
	if (inName==HX_("BottomRight",d1,38,27,33)) { outValue = ImageOrigin_obj::BottomRight; return true; }
	if (inName==HX_("TopLeft",1c,31,12,b6)) { outValue = ImageOrigin_obj::TopLeft; return true; }
	if (inName==HX_("TopRight",27,d5,e5,10)) { outValue = ImageOrigin_obj::TopRight; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ImageOrigin_obj)

int ImageOrigin_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BottomLeft",b2,70,48,23)) return 0;
	if (inName==HX_("BottomRight",d1,38,27,33)) return 1;
	if (inName==HX_("TopLeft",1c,31,12,b6)) return 2;
	if (inName==HX_("TopRight",27,d5,e5,10)) return 3;
	return super::__FindIndex(inName);
}

int ImageOrigin_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BottomLeft",b2,70,48,23)) return 0;
	if (inName==HX_("BottomRight",d1,38,27,33)) return 0;
	if (inName==HX_("TopLeft",1c,31,12,b6)) return 0;
	if (inName==HX_("TopRight",27,d5,e5,10)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ImageOrigin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BottomLeft",b2,70,48,23)) return BottomLeft;
	if (inName==HX_("BottomRight",d1,38,27,33)) return BottomRight;
	if (inName==HX_("TopLeft",1c,31,12,b6)) return TopLeft;
	if (inName==HX_("TopRight",27,d5,e5,10)) return TopRight;
	return super::__Field(inName,inCallProp);
}

static ::String ImageOrigin_obj_sStaticFields[] = {
	HX_("BottomLeft",b2,70,48,23),
	HX_("BottomRight",d1,38,27,33),
	HX_("TopLeft",1c,31,12,b6),
	HX_("TopRight",27,d5,e5,10),
	::String(null())
};

::hx::Class ImageOrigin_obj::__mClass;

Dynamic __Create_ImageOrigin_obj() { return new ImageOrigin_obj; }

void ImageOrigin_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.tga.ImageOrigin",6a,fb,6f,24), ::hx::TCanCast< ImageOrigin_obj >,ImageOrigin_obj_sStaticFields,0,
	&__Create_ImageOrigin_obj, &__Create,
	&super::__SGetClass(), &CreateImageOrigin_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ImageOrigin_obj::__GetStatic;
}

void ImageOrigin_obj::__boot()
{
BottomLeft = ::hx::CreateConstEnum< ImageOrigin_obj >(HX_("BottomLeft",b2,70,48,23),0);
BottomRight = ::hx::CreateConstEnum< ImageOrigin_obj >(HX_("BottomRight",d1,38,27,33),1);
TopLeft = ::hx::CreateConstEnum< ImageOrigin_obj >(HX_("TopLeft",1c,31,12,b6),2);
TopRight = ::hx::CreateConstEnum< ImageOrigin_obj >(HX_("TopRight",27,d5,e5,10),3);
}


} // end namespace format
} // end namespace tga
