#include <hxcpp.h>

#ifndef INCLUDED_format_tga_ImageType
#include <format/tga/ImageType.h>
#endif
namespace format{
namespace tga{

::format::tga::ImageType ImageType_obj::NoImage;

::format::tga::ImageType ImageType_obj::RunLengthBlackAndWhite;

::format::tga::ImageType ImageType_obj::RunLengthColorMapped;

::format::tga::ImageType ImageType_obj::RunLengthTrueColor;

::format::tga::ImageType ImageType_obj::UncompressedBlackAndWhite;

::format::tga::ImageType ImageType_obj::UncompressedColorMapped;

::format::tga::ImageType ImageType_obj::UncompressedTrueColor;

::format::tga::ImageType ImageType_obj::Unknown(int type)
{
	return ::hx::CreateEnum< ImageType_obj >(HX_("Unknown",6a,4b,cc,ae),7,1)->_hx_init(0,type);
}

bool ImageType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NoImage",3a,cb,bd,5d)) { outValue = ImageType_obj::NoImage; return true; }
	if (inName==HX_("RunLengthBlackAndWhite",00,00,8a,27)) { outValue = ImageType_obj::RunLengthBlackAndWhite; return true; }
	if (inName==HX_("RunLengthColorMapped",85,c6,df,78)) { outValue = ImageType_obj::RunLengthColorMapped; return true; }
	if (inName==HX_("RunLengthTrueColor",84,ae,8e,3d)) { outValue = ImageType_obj::RunLengthTrueColor; return true; }
	if (inName==HX_("UncompressedBlackAndWhite",97,68,8b,98)) { outValue = ImageType_obj::UncompressedBlackAndWhite; return true; }
	if (inName==HX_("UncompressedColorMapped",5c,0b,65,8a)) { outValue = ImageType_obj::UncompressedColorMapped; return true; }
	if (inName==HX_("UncompressedTrueColor",9b,3f,bc,3b)) { outValue = ImageType_obj::UncompressedTrueColor; return true; }
	if (inName==HX_("Unknown",6a,4b,cc,ae)) { outValue = ImageType_obj::Unknown_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ImageType_obj)

int ImageType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("NoImage",3a,cb,bd,5d)) return 0;
	if (inName==HX_("RunLengthBlackAndWhite",00,00,8a,27)) return 6;
	if (inName==HX_("RunLengthColorMapped",85,c6,df,78)) return 4;
	if (inName==HX_("RunLengthTrueColor",84,ae,8e,3d)) return 5;
	if (inName==HX_("UncompressedBlackAndWhite",97,68,8b,98)) return 3;
	if (inName==HX_("UncompressedColorMapped",5c,0b,65,8a)) return 1;
	if (inName==HX_("UncompressedTrueColor",9b,3f,bc,3b)) return 2;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 7;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_obj,Unknown,return)

int ImageType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("NoImage",3a,cb,bd,5d)) return 0;
	if (inName==HX_("RunLengthBlackAndWhite",00,00,8a,27)) return 0;
	if (inName==HX_("RunLengthColorMapped",85,c6,df,78)) return 0;
	if (inName==HX_("RunLengthTrueColor",84,ae,8e,3d)) return 0;
	if (inName==HX_("UncompressedBlackAndWhite",97,68,8b,98)) return 0;
	if (inName==HX_("UncompressedColorMapped",5c,0b,65,8a)) return 0;
	if (inName==HX_("UncompressedTrueColor",9b,3f,bc,3b)) return 0;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val ImageType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NoImage",3a,cb,bd,5d)) return NoImage;
	if (inName==HX_("RunLengthBlackAndWhite",00,00,8a,27)) return RunLengthBlackAndWhite;
	if (inName==HX_("RunLengthColorMapped",85,c6,df,78)) return RunLengthColorMapped;
	if (inName==HX_("RunLengthTrueColor",84,ae,8e,3d)) return RunLengthTrueColor;
	if (inName==HX_("UncompressedBlackAndWhite",97,68,8b,98)) return UncompressedBlackAndWhite;
	if (inName==HX_("UncompressedColorMapped",5c,0b,65,8a)) return UncompressedColorMapped;
	if (inName==HX_("UncompressedTrueColor",9b,3f,bc,3b)) return UncompressedTrueColor;
	if (inName==HX_("Unknown",6a,4b,cc,ae)) return Unknown_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ImageType_obj_sStaticFields[] = {
	HX_("NoImage",3a,cb,bd,5d),
	HX_("UncompressedColorMapped",5c,0b,65,8a),
	HX_("UncompressedTrueColor",9b,3f,bc,3b),
	HX_("UncompressedBlackAndWhite",97,68,8b,98),
	HX_("RunLengthColorMapped",85,c6,df,78),
	HX_("RunLengthTrueColor",84,ae,8e,3d),
	HX_("RunLengthBlackAndWhite",00,00,8a,27),
	HX_("Unknown",6a,4b,cc,ae),
	::String(null())
};

::hx::Class ImageType_obj::__mClass;

Dynamic __Create_ImageType_obj() { return new ImageType_obj; }

void ImageType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.tga.ImageType",3e,ab,75,27), ::hx::TCanCast< ImageType_obj >,ImageType_obj_sStaticFields,0,
	&__Create_ImageType_obj, &__Create,
	&super::__SGetClass(), &CreateImageType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ImageType_obj::__GetStatic;
}

void ImageType_obj::__boot()
{
NoImage = ::hx::CreateConstEnum< ImageType_obj >(HX_("NoImage",3a,cb,bd,5d),0);
RunLengthBlackAndWhite = ::hx::CreateConstEnum< ImageType_obj >(HX_("RunLengthBlackAndWhite",00,00,8a,27),6);
RunLengthColorMapped = ::hx::CreateConstEnum< ImageType_obj >(HX_("RunLengthColorMapped",85,c6,df,78),4);
RunLengthTrueColor = ::hx::CreateConstEnum< ImageType_obj >(HX_("RunLengthTrueColor",84,ae,8e,3d),5);
UncompressedBlackAndWhite = ::hx::CreateConstEnum< ImageType_obj >(HX_("UncompressedBlackAndWhite",97,68,8b,98),3);
UncompressedColorMapped = ::hx::CreateConstEnum< ImageType_obj >(HX_("UncompressedColorMapped",5c,0b,65,8a),1);
UncompressedTrueColor = ::hx::CreateConstEnum< ImageType_obj >(HX_("UncompressedTrueColor",9b,3f,bc,3b),2);
}


} // end namespace format
} // end namespace tga
