#ifndef INCLUDED_hxd_fmt_hmd_Property
#define INCLUDED_hxd_fmt_hmd_Property

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)
namespace hxd{
namespace fmt{
namespace hmd{


class Property_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Property_obj OBJ_;

	public:
		Property_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.fmt.hmd.Property",1f,0f,2b,58); }
		::String __ToString() const { return HX_("Property.",19,e2,d9,a6) + _hx_tag; }

		static ::hxd::fmt::hmd::Property CameraFOVY(Float v);
		static ::Dynamic CameraFOVY_dyn();
		static ::hxd::fmt::hmd::Property HasExtraTextures;
		static inline ::hxd::fmt::hmd::Property HasExtraTextures_dyn() { return HasExtraTextures; }
		static ::hxd::fmt::hmd::Property Unused_HasMaterialFlags;
		static inline ::hxd::fmt::hmd::Property Unused_HasMaterialFlags_dyn() { return Unused_HasMaterialFlags; }
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Property */ 
