#ifndef INCLUDED_hxColorToolkit_schemes_Tetrad
#define INCLUDED_hxColorToolkit_schemes_Tetrad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorWheelScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Tetrad)

namespace hxColorToolkit{
namespace schemes{


class HXCPP_CLASS_ATTRIBUTES Tetrad_obj : public  ::hxColorToolkit::schemes::ColorWheelScheme_obj
{
	public:
		typedef  ::hxColorToolkit::schemes::ColorWheelScheme_obj super;
		typedef Tetrad_obj OBJ_;
		Tetrad_obj();

	public:
		enum { _hx_ClassId = 0x508e82b5 };

		void __construct( ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_alt);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.schemes.Tetrad")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.schemes.Tetrad"); }
		static ::hx::ObjectPtr< Tetrad_obj > __new( ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_alt);
		static ::hx::ObjectPtr< Tetrad_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_alt);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tetrad_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tetrad",f2,7b,76,0a); }

		 ::hxColorToolkit::schemes::ColorWheelScheme clone();

		Float _angle;
		Float get_angle();
		::Dynamic get_angle_dyn();

		Float set_angle(Float value);
		::Dynamic set_angle_dyn();

		bool _alt;
		bool get_alt();
		::Dynamic get_alt_dyn();

		bool set_alt(bool val);
		::Dynamic set_alt_dyn();

		void generate();

};

} // end namespace hxColorToolkit
} // end namespace schemes

#endif /* INCLUDED_hxColorToolkit_schemes_Tetrad */ 
