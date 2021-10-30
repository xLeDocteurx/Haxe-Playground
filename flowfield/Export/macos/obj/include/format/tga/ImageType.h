#ifndef INCLUDED_format_tga_ImageType
#define INCLUDED_format_tga_ImageType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tga,ImageType)
namespace format{
namespace tga{


class ImageType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ImageType_obj OBJ_;

	public:
		ImageType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.tga.ImageType",3e,ab,75,27); }
		::String __ToString() const { return HX_("ImageType.",f9,3a,4a,1d) + _hx_tag; }

		static ::format::tga::ImageType NoImage;
		static inline ::format::tga::ImageType NoImage_dyn() { return NoImage; }
		static ::format::tga::ImageType RunLengthBlackAndWhite;
		static inline ::format::tga::ImageType RunLengthBlackAndWhite_dyn() { return RunLengthBlackAndWhite; }
		static ::format::tga::ImageType RunLengthColorMapped;
		static inline ::format::tga::ImageType RunLengthColorMapped_dyn() { return RunLengthColorMapped; }
		static ::format::tga::ImageType RunLengthTrueColor;
		static inline ::format::tga::ImageType RunLengthTrueColor_dyn() { return RunLengthTrueColor; }
		static ::format::tga::ImageType UncompressedBlackAndWhite;
		static inline ::format::tga::ImageType UncompressedBlackAndWhite_dyn() { return UncompressedBlackAndWhite; }
		static ::format::tga::ImageType UncompressedColorMapped;
		static inline ::format::tga::ImageType UncompressedColorMapped_dyn() { return UncompressedColorMapped; }
		static ::format::tga::ImageType UncompressedTrueColor;
		static inline ::format::tga::ImageType UncompressedTrueColor_dyn() { return UncompressedTrueColor; }
		static ::format::tga::ImageType Unknown(int type);
		static ::Dynamic Unknown_dyn();
};

} // end namespace format
} // end namespace tga

#endif /* INCLUDED_format_tga_ImageType */ 
