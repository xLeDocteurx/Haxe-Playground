#ifndef INCLUDED_format_png_Color
#define INCLUDED_format_png_Color

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,png,Color)
namespace format{
namespace png{


class Color_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Color_obj OBJ_;

	public:
		Color_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.png.Color",c7,1f,84,10); }
		::String __ToString() const { return HX_("Color.",8b,39,1b,fb) + _hx_tag; }

		static ::format::png::Color ColGrey(bool alpha);
		static ::Dynamic ColGrey_dyn();
		static ::format::png::Color ColIndexed;
		static inline ::format::png::Color ColIndexed_dyn() { return ColIndexed; }
		static ::format::png::Color ColTrue(bool alpha);
		static ::Dynamic ColTrue_dyn();
};

} // end namespace format
} // end namespace png

#endif /* INCLUDED_format_png_Color */ 
