#ifndef INCLUDED_hxColorToolkit_ColorToolkit
#define INCLUDED_hxColorToolkit_ColorToolkit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxColorToolkit,ColorToolkit)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Analogous)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorWheelScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Complementary)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Compound)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,FlippedCompound)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Monochrome)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,SplitComplementary)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Tetrad)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Triad)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,CMYK)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Gray)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,HSB)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,HSL)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Hex)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Lab)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,XYZ)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,YUV)

namespace hxColorToolkit{


class HXCPP_CLASS_ATTRIBUTES ColorToolkit_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ColorToolkit_obj OBJ_;
		ColorToolkit_obj();

	public:
		enum { _hx_ClassId = 0x21147ed6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxColorToolkit.ColorToolkit")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxColorToolkit.ColorToolkit"); }

		inline static ::hx::ObjectPtr< ColorToolkit_obj > __new() {
			::hx::ObjectPtr< ColorToolkit_obj > __this = new ColorToolkit_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ColorToolkit_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ColorToolkit_obj *__this = (ColorToolkit_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorToolkit_obj), false, "hxColorToolkit.ColorToolkit"));
			*(void **)__this = ColorToolkit_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorToolkit_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorToolkit",bb,1d,ef,5b); }

		static void __boot();
		static ::Array< ::Dynamic> rybWheel;
		static int setColorOpaque(int color, ::Dynamic opaqueValue);
		static ::Dynamic setColorOpaque_dyn();

		static int desaturate(int color);
		static ::Dynamic desaturate_dyn();

		static int getComplement(int color);
		static ::Dynamic getComplement_dyn();

		static int shiftBrighteness(int color,Float degree);
		static ::Dynamic shiftBrighteness_dyn();

		static int shiftSaturation(int color,Float degree);
		static ::Dynamic shiftSaturation_dyn();

		static int shiftHue(int color,Float degree);
		static ::Dynamic shiftHue_dyn();

		static  ::hxColorToolkit::spaces::Lab toLab(int color);
		static ::Dynamic toLab_dyn();

		static  ::hxColorToolkit::spaces::Gray toGray(int color);
		static ::Dynamic toGray_dyn();

		static  ::hxColorToolkit::spaces::RGB toRGB(int color);
		static ::Dynamic toRGB_dyn();

		static  ::hxColorToolkit::spaces::RGB toARGB(int color);
		static ::Dynamic toARGB_dyn();

		static  ::hxColorToolkit::spaces::HSB toHSB(int color);
		static ::Dynamic toHSB_dyn();

		static  ::hxColorToolkit::spaces::HSL toHSL(int color);
		static ::Dynamic toHSL_dyn();

		static  ::hxColorToolkit::spaces::CMYK toCMYK(int color);
		static ::Dynamic toCMYK_dyn();

		static  ::hxColorToolkit::spaces::XYZ toXYZ(int color);
		static ::Dynamic toXYZ_dyn();

		static  ::hxColorToolkit::spaces::YUV toYUV(int color);
		static ::Dynamic toYUV_dyn();

		static  ::hxColorToolkit::spaces::Hex toHex(int color);
		static ::Dynamic toHex_dyn();

		static  ::hxColorToolkit::schemes::Analogous getAnalogousScheme(int color, ::Dynamic angle, ::Dynamic contrast);
		static ::Dynamic getAnalogousScheme_dyn();

		static  ::hxColorToolkit::schemes::Complementary getComplementaryScheme(int color);
		static ::Dynamic getComplementaryScheme_dyn();

		static  ::hxColorToolkit::schemes::Compound getCompoundScheme(int color);
		static ::Dynamic getCompoundScheme_dyn();

		static  ::hxColorToolkit::schemes::FlippedCompound getFlippedCompoundScheme(int color);
		static ::Dynamic getFlippedCompoundScheme_dyn();

		static  ::hxColorToolkit::schemes::Monochrome getMonochromeScheme(int color);
		static ::Dynamic getMonochromeScheme_dyn();

		static  ::hxColorToolkit::schemes::SplitComplementary getSplitComplementaryScheme(int color);
		static ::Dynamic getSplitComplementaryScheme_dyn();

		static  ::hxColorToolkit::schemes::Tetrad getTetradScheme(int color, ::Dynamic angle, ::Dynamic alt);
		static ::Dynamic getTetradScheme_dyn();

		static  ::hxColorToolkit::schemes::Triad getTriadScheme(int color, ::Dynamic angle);
		static ::Dynamic getTriadScheme_dyn();

		static int rybRotate(int color,Float angle);
		static ::Dynamic rybRotate_dyn();

		static ::Array< int > intArray(::Dynamic colors);
		static ::Dynamic intArray_dyn();

};

} // end namespace hxColorToolkit

#endif /* INCLUDED_hxColorToolkit_ColorToolkit */ 
