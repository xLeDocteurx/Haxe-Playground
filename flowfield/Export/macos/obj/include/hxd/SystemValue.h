#ifndef INCLUDED_hxd_SystemValue
#define INCLUDED_hxd_SystemValue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,SystemValue)
namespace hxd{


class SystemValue_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SystemValue_obj OBJ_;

	public:
		SystemValue_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.SystemValue",c8,21,70,f1); }
		::String __ToString() const { return HX_("SystemValue.",0c,b8,de,fa) + _hx_tag; }

		static ::hxd::SystemValue IsMobile;
		static inline ::hxd::SystemValue IsMobile_dyn() { return IsMobile; }
		static ::hxd::SystemValue IsTouch;
		static inline ::hxd::SystemValue IsTouch_dyn() { return IsTouch; }
		static ::hxd::SystemValue IsWindowed;
		static inline ::hxd::SystemValue IsWindowed_dyn() { return IsWindowed; }
};

} // end namespace hxd

#endif /* INCLUDED_hxd_SystemValue */ 
