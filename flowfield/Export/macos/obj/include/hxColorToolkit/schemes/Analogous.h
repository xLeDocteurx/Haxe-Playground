#ifndef INCLUDED_hxColorToolkit_schemes_Analogous
#define INCLUDED_hxColorToolkit_schemes_Analogous

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Analogous)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorWheelScheme)

namespace hxColorToolkit{
namespace schemes{


class HXCPP_CLASS_ATTRIBUTES Analogous_obj : public  ::hxColorToolkit::schemes::ColorWheelScheme_obj
{
	public:
		typedef  ::hxColorToolkit::schemes::ColorWheelScheme_obj super;
		typedef Analogous_obj OBJ_;
		Analogous_obj();

	public:
		enum { _hx_ClassId = 0x521dfd5a };

		void __construct( ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_contrast);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.schemes.Analogous")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.schemes.Analogous"); }
		static ::hx::ObjectPtr< Analogous_obj > __new( ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_contrast);
		static ::hx::ObjectPtr< Analogous_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor, ::Dynamic __o_angle, ::Dynamic __o_contrast);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Analogous_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Analogous",3d,a8,09,41); }

		 ::hxColorToolkit::schemes::ColorWheelScheme clone();

		Float _angle;
		Float get_angle();
		::Dynamic get_angle_dyn();

		Float set_angle(Float val);
		::Dynamic set_angle_dyn();

		Float _contrast;
		Float get_contrast();
		::Dynamic get_contrast_dyn();

		Float set_contrast(Float val);
		::Dynamic set_contrast_dyn();

		void generate();

};

} // end namespace hxColorToolkit
} // end namespace schemes

#endif /* INCLUDED_hxColorToolkit_schemes_Analogous */ 
