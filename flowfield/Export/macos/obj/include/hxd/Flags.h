#ifndef INCLUDED_hxd_Flags
#define INCLUDED_hxd_Flags

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Flags)
namespace hxd{


class Flags_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Flags_obj OBJ_;

	public:
		Flags_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.Flags",8d,be,3e,ba); }
		::String __ToString() const { return HX_("Flags.",27,27,ae,6c) + _hx_tag; }

		static ::hxd::Flags AlphaPremultiplied;
		static inline ::hxd::Flags AlphaPremultiplied_dyn() { return AlphaPremultiplied; }
		static ::hxd::Flags FlipY;
		static inline ::hxd::Flags FlipY_dyn() { return FlipY; }
		static ::hxd::Flags ReadOnly;
		static inline ::hxd::Flags ReadOnly_dyn() { return ReadOnly; }
};

} // end namespace hxd

#endif /* INCLUDED_hxd_Flags */ 
