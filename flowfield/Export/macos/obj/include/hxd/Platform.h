#ifndef INCLUDED_hxd_Platform
#define INCLUDED_hxd_Platform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,Platform)
namespace hxd{


class Platform_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Platform_obj OBJ_;

	public:
		Platform_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.Platform",2d,ef,29,64); }
		::String __ToString() const { return HX_("Platform.",fb,89,55,34) + _hx_tag; }

		static ::hxd::Platform Android;
		static inline ::hxd::Platform Android_dyn() { return Android; }
		static ::hxd::Platform Console;
		static inline ::hxd::Platform Console_dyn() { return Console; }
		static ::hxd::Platform FlashPlayer;
		static inline ::hxd::Platform FlashPlayer_dyn() { return FlashPlayer; }
		static ::hxd::Platform IOS;
		static inline ::hxd::Platform IOS_dyn() { return IOS; }
		static ::hxd::Platform PC;
		static inline ::hxd::Platform PC_dyn() { return PC; }
		static ::hxd::Platform WebGL;
		static inline ::hxd::Platform WebGL_dyn() { return WebGL; }
};

} // end namespace hxd

#endif /* INCLUDED_hxd_Platform */ 
