#ifndef INCLUDED_h2d_ScaleMode
#define INCLUDED_h2d_ScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,ScaleMode)
HX_DECLARE_CLASS1(h2d,ScaleModeAlign)
namespace h2d{


class ScaleMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ScaleMode_obj OBJ_;

	public:
		ScaleMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h2d.ScaleMode",d9,8f,80,df); }
		::String __ToString() const { return HX_("ScaleMode.",a1,d4,3c,24) + _hx_tag; }

		static ::h2d::ScaleMode AutoZoom(int minWidth,int minHeight, ::Dynamic integerScaling);
		static ::Dynamic AutoZoom_dyn();
		static ::h2d::ScaleMode Fixed(int width,int height,Float zoom, ::h2d::ScaleModeAlign horizontalAlign, ::h2d::ScaleModeAlign verticalAlign);
		static ::Dynamic Fixed_dyn();
		static ::h2d::ScaleMode LetterBox(int width,int height, ::Dynamic integerScale, ::h2d::ScaleModeAlign horizontalAlign, ::h2d::ScaleModeAlign verticalAlign);
		static ::Dynamic LetterBox_dyn();
		static ::h2d::ScaleMode Resize;
		static inline ::h2d::ScaleMode Resize_dyn() { return Resize; }
		static ::h2d::ScaleMode Stretch(int width,int height);
		static ::Dynamic Stretch_dyn();
		static ::h2d::ScaleMode Zoom(Float level);
		static ::Dynamic Zoom_dyn();
};

} // end namespace h2d

#endif /* INCLUDED_h2d_ScaleMode */ 
