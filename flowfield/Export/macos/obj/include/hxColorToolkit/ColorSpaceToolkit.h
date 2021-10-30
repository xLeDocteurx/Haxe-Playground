#ifndef INCLUDED_hxColorToolkit_ColorSpaceToolkit
#define INCLUDED_hxColorToolkit_ColorSpaceToolkit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxColorToolkit,ColorSpaceToolkit)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,ARGB)
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


class HXCPP_CLASS_ATTRIBUTES ColorSpaceToolkit_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ColorSpaceToolkit_obj OBJ_;
		ColorSpaceToolkit_obj();

	public:
		enum { _hx_ClassId = 0x0be0a92c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxColorToolkit.ColorSpaceToolkit")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxColorToolkit.ColorSpaceToolkit"); }

		inline static ::hx::ObjectPtr< ColorSpaceToolkit_obj > __new() {
			::hx::ObjectPtr< ColorSpaceToolkit_obj > __this = new ColorSpaceToolkit_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ColorSpaceToolkit_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ColorSpaceToolkit_obj *__this = (ColorSpaceToolkit_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorSpaceToolkit_obj), false, "hxColorToolkit.ColorSpaceToolkit"));
			*(void **)__this = ColorSpaceToolkit_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorSpaceToolkit_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorSpaceToolkit",7b,be,68,e1); }

		static  ::hxColorToolkit::spaces::Lab toLab(::Dynamic color);
		static ::Dynamic toLab_dyn();

		static  ::hxColorToolkit::spaces::Gray toGray(::Dynamic color);
		static ::Dynamic toGray_dyn();

		static  ::hxColorToolkit::spaces::HSB toHSB(::Dynamic color);
		static ::Dynamic toHSB_dyn();

		static  ::hxColorToolkit::spaces::HSL toHSL(::Dynamic color);
		static ::Dynamic toHSL_dyn();

		static  ::hxColorToolkit::spaces::CMYK toCMYK(::Dynamic color);
		static ::Dynamic toCMYK_dyn();

		static  ::hxColorToolkit::spaces::XYZ toXYZ(::Dynamic color);
		static ::Dynamic toXYZ_dyn();

		static  ::hxColorToolkit::spaces::YUV toYUV(::Dynamic color);
		static ::Dynamic toYUV_dyn();

		static  ::hxColorToolkit::spaces::ARGB toARGB(::Dynamic color);
		static ::Dynamic toARGB_dyn();

		static  ::hxColorToolkit::spaces::Hex toHex(::Dynamic color);
		static ::Dynamic toHex_dyn();

};

} // end namespace hxColorToolkit

#endif /* INCLUDED_hxColorToolkit_ColorSpaceToolkit */ 
