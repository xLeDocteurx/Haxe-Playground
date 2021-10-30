#ifndef INCLUDED_hxColorToolkit_schemes_Triad
#define INCLUDED_hxColorToolkit_schemes_Triad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorWheelScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Triad)

namespace hxColorToolkit{
namespace schemes{


class HXCPP_CLASS_ATTRIBUTES Triad_obj : public  ::hxColorToolkit::schemes::ColorWheelScheme_obj
{
	public:
		typedef  ::hxColorToolkit::schemes::ColorWheelScheme_obj super;
		typedef Triad_obj OBJ_;
		Triad_obj();

	public:
		enum { _hx_ClassId = 0x4935514b };

		void __construct( ::Dynamic primaryColor, ::Dynamic __o_angle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.schemes.Triad")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.schemes.Triad"); }
		static ::hx::ObjectPtr< Triad_obj > __new( ::Dynamic primaryColor, ::Dynamic __o_angle);
		static ::hx::ObjectPtr< Triad_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor, ::Dynamic __o_angle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Triad_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Triad",ae,0e,53,a9); }

		 ::hxColorToolkit::schemes::ColorWheelScheme clone();

		Float _angle;
		Float get_angle();
		::Dynamic get_angle_dyn();

		Float set_angle(Float value);
		::Dynamic set_angle_dyn();

		void generate();

};

} // end namespace hxColorToolkit
} // end namespace schemes

#endif /* INCLUDED_hxColorToolkit_schemes_Triad */ 
