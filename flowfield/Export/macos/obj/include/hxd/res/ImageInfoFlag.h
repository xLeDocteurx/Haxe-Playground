#ifndef INCLUDED_hxd_res_ImageInfoFlag
#define INCLUDED_hxd_res_ImageInfoFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,res,ImageInfoFlag)
namespace hxd{
namespace res{


class ImageInfoFlag_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ImageInfoFlag_obj OBJ_;

	public:
		ImageInfoFlag_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.res.ImageInfoFlag",6d,de,95,9e); }
		::String __ToString() const { return HX_("ImageInfoFlag.",f9,24,31,1a) + _hx_tag; }

		static ::hxd::res::ImageInfoFlag Dxt10Header;
		static inline ::hxd::res::ImageInfoFlag Dxt10Header_dyn() { return Dxt10Header; }
		static ::hxd::res::ImageInfoFlag IsCube;
		static inline ::hxd::res::ImageInfoFlag IsCube_dyn() { return IsCube; }
};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_ImageInfoFlag */ 
