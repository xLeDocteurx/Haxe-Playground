#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#define INCLUDED_hxColorToolkit_schemes_ColorWheelScheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_schemes_ColorScheme
#include <hxColorToolkit/schemes/ColorScheme.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorWheelScheme)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)

namespace hxColorToolkit{
namespace schemes{


class HXCPP_CLASS_ATTRIBUTES ColorWheelScheme_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ColorWheelScheme_obj OBJ_;
		ColorWheelScheme_obj();

	public:
		enum { _hx_ClassId = 0x49f0ef20 };

		void __construct( ::Dynamic primaryColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.schemes.ColorWheelScheme")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.schemes.ColorWheelScheme"); }
		static ::hx::ObjectPtr< ColorWheelScheme_obj > __new( ::Dynamic primaryColor);
		static ::hx::ObjectPtr< ColorWheelScheme_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorWheelScheme_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::Dynamic clone_ee952b4b();
		::String __ToString() const { return HX_("ColorWheelScheme",9d,b6,e9,15); }

		virtual  ::hxColorToolkit::schemes::ColorWheelScheme clone();
		::Dynamic clone_dyn();

		int numOfColors;
		 ::Dynamic getColor(int index);
		::Dynamic getColor_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		 ::Dynamic _primaryColor;
		 ::Dynamic get_primaryColor();
		::Dynamic get_primaryColor_dyn();

		 ::Dynamic set_primaryColor( ::Dynamic val);
		::Dynamic set_primaryColor_dyn();

		::cpp::VirtualArray _colors;
		::hx::Class _class;
		virtual void generate();
		::Dynamic generate_dyn();

		Float wrap(Float x,Float min,Float threshold,Float plus);
		::Dynamic wrap_dyn();

		 ::Dynamic mutateFromPrimary(::Dynamic newColor);
		::Dynamic mutateFromPrimary_dyn();

};

} // end namespace hxColorToolkit
} // end namespace schemes

#endif /* INCLUDED_hxColorToolkit_schemes_ColorWheelScheme */ 
