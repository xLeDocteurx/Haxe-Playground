#ifndef INCLUDED_hxd_PixelFormat
#define INCLUDED_hxd_PixelFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,PixelFormat)
namespace hxd{


class PixelFormat_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef PixelFormat_obj OBJ_;

	public:
		PixelFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.PixelFormat",23,be,5c,2a); }
		::String __ToString() const { return HX_("PixelFormat.",51,eb,fa,90) + _hx_tag; }

		static ::hxd::PixelFormat ARGB;
		static inline ::hxd::PixelFormat ARGB_dyn() { return ARGB; }
		static ::hxd::PixelFormat BGRA;
		static inline ::hxd::PixelFormat BGRA_dyn() { return BGRA; }
		static ::hxd::PixelFormat R16F;
		static inline ::hxd::PixelFormat R16F_dyn() { return R16F; }
		static ::hxd::PixelFormat R16U;
		static inline ::hxd::PixelFormat R16U_dyn() { return R16U; }
		static ::hxd::PixelFormat R32F;
		static inline ::hxd::PixelFormat R32F_dyn() { return R32F; }
		static ::hxd::PixelFormat R8;
		static inline ::hxd::PixelFormat R8_dyn() { return R8; }
		static ::hxd::PixelFormat RG11B10UF;
		static inline ::hxd::PixelFormat RG11B10UF_dyn() { return RG11B10UF; }
		static ::hxd::PixelFormat RG16F;
		static inline ::hxd::PixelFormat RG16F_dyn() { return RG16F; }
		static ::hxd::PixelFormat RG32F;
		static inline ::hxd::PixelFormat RG32F_dyn() { return RG32F; }
		static ::hxd::PixelFormat RG8;
		static inline ::hxd::PixelFormat RG8_dyn() { return RG8; }
		static ::hxd::PixelFormat RGB10A2;
		static inline ::hxd::PixelFormat RGB10A2_dyn() { return RGB10A2; }
		static ::hxd::PixelFormat RGB16F;
		static inline ::hxd::PixelFormat RGB16F_dyn() { return RGB16F; }
		static ::hxd::PixelFormat RGB16U;
		static inline ::hxd::PixelFormat RGB16U_dyn() { return RGB16U; }
		static ::hxd::PixelFormat RGB32F;
		static inline ::hxd::PixelFormat RGB32F_dyn() { return RGB32F; }
		static ::hxd::PixelFormat RGB8;
		static inline ::hxd::PixelFormat RGB8_dyn() { return RGB8; }
		static ::hxd::PixelFormat RGBA;
		static inline ::hxd::PixelFormat RGBA_dyn() { return RGBA; }
		static ::hxd::PixelFormat RGBA16F;
		static inline ::hxd::PixelFormat RGBA16F_dyn() { return RGBA16F; }
		static ::hxd::PixelFormat RGBA16U;
		static inline ::hxd::PixelFormat RGBA16U_dyn() { return RGBA16U; }
		static ::hxd::PixelFormat RGBA32F;
		static inline ::hxd::PixelFormat RGBA32F_dyn() { return RGBA32F; }
		static ::hxd::PixelFormat S3TC(int v);
		static ::Dynamic S3TC_dyn();
		static ::hxd::PixelFormat SRGB;
		static inline ::hxd::PixelFormat SRGB_dyn() { return SRGB; }
		static ::hxd::PixelFormat SRGB_ALPHA;
		static inline ::hxd::PixelFormat SRGB_ALPHA_dyn() { return SRGB_ALPHA; }
};

} // end namespace hxd

#endif /* INCLUDED_hxd_PixelFormat */ 
