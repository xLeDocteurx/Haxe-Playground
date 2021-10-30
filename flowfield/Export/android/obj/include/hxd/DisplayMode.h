#ifndef INCLUDED_hxd_DisplayMode
#define INCLUDED_hxd_DisplayMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxd,DisplayMode)
namespace hxd{


class DisplayMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DisplayMode_obj OBJ_;

	public:
		DisplayMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.DisplayMode",8b,be,94,eb); }
		::String __ToString() const { return HX_("DisplayMode.",e9,45,c3,e0) + _hx_tag; }

		static ::hxd::DisplayMode Borderless;
		static inline ::hxd::DisplayMode Borderless_dyn() { return Borderless; }
		static ::hxd::DisplayMode Fullscreen;
		static inline ::hxd::DisplayMode Fullscreen_dyn() { return Fullscreen; }
		static ::hxd::DisplayMode FullscreenResize;
		static inline ::hxd::DisplayMode FullscreenResize_dyn() { return FullscreenResize; }
		static ::hxd::DisplayMode Windowed;
		static inline ::hxd::DisplayMode Windowed_dyn() { return Windowed; }
};

} // end namespace hxd

#endif /* INCLUDED_hxd_DisplayMode */ 
