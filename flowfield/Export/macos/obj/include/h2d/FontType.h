#ifndef INCLUDED_h2d_FontType
#define INCLUDED_h2d_FontType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,FontType)
namespace h2d{


class FontType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FontType_obj OBJ_;

	public:
		FontType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h2d.FontType",dd,f8,e5,8e); }
		::String __ToString() const { return HX_("FontType.",c5,f3,79,68) + _hx_tag; }

		static ::h2d::FontType BitmapFont;
		static inline ::h2d::FontType BitmapFont_dyn() { return BitmapFont; }
		static ::h2d::FontType SignedDistanceField(int channel,Float alphaCutoff,Float smoothing);
		static ::Dynamic SignedDistanceField_dyn();
};

} // end namespace h2d

#endif /* INCLUDED_h2d_FontType */ 
