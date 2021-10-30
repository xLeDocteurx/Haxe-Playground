#ifndef INCLUDED_hxd_snd_DriverFeature
#define INCLUDED_hxd_snd_DriverFeature

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,snd,DriverFeature)
namespace hxd{
namespace snd{


class DriverFeature_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DriverFeature_obj OBJ_;

	public:
		DriverFeature_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.snd.DriverFeature",ef,c7,f8,f0); }
		::String __ToString() const { return HX_("DriverFeature.",20,a5,36,dd) + _hx_tag; }

		static ::hxd::snd::DriverFeature MasterVolume;
		static inline ::hxd::snd::DriverFeature MasterVolume_dyn() { return MasterVolume; }
};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_DriverFeature */ 
