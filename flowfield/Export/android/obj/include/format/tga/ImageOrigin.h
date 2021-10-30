#ifndef INCLUDED_format_tga_ImageOrigin
#define INCLUDED_format_tga_ImageOrigin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tga,ImageOrigin)
namespace format{
namespace tga{


class ImageOrigin_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ImageOrigin_obj OBJ_;

	public:
		ImageOrigin_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.tga.ImageOrigin",6a,fb,6f,24); }
		::String __ToString() const { return HX_("ImageOrigin.",8d,55,d0,0d) + _hx_tag; }

		static ::format::tga::ImageOrigin BottomLeft;
		static inline ::format::tga::ImageOrigin BottomLeft_dyn() { return BottomLeft; }
		static ::format::tga::ImageOrigin BottomRight;
		static inline ::format::tga::ImageOrigin BottomRight_dyn() { return BottomRight; }
		static ::format::tga::ImageOrigin TopLeft;
		static inline ::format::tga::ImageOrigin TopLeft_dyn() { return TopLeft; }
		static ::format::tga::ImageOrigin TopRight;
		static inline ::format::tga::ImageOrigin TopRight_dyn() { return TopRight; }
};

} // end namespace format
} // end namespace tga

#endif /* INCLUDED_format_tga_ImageOrigin */ 
