#ifndef INCLUDED_hxColorToolkit_schemes_Monochrome
#define INCLUDED_hxColorToolkit_schemes_Monochrome

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorWheelScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Monochrome)

namespace hxColorToolkit{
namespace schemes{


class HXCPP_CLASS_ATTRIBUTES Monochrome_obj : public  ::hxColorToolkit::schemes::ColorWheelScheme_obj
{
	public:
		typedef  ::hxColorToolkit::schemes::ColorWheelScheme_obj super;
		typedef Monochrome_obj OBJ_;
		Monochrome_obj();

	public:
		enum { _hx_ClassId = 0x28de3f5c };

		void __construct( ::Dynamic primaryColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.schemes.Monochrome")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.schemes.Monochrome"); }
		static ::hx::ObjectPtr< Monochrome_obj > __new( ::Dynamic primaryColor);
		static ::hx::ObjectPtr< Monochrome_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Monochrome_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Monochrome",fd,15,3e,ab); }

		 ::hxColorToolkit::schemes::ColorWheelScheme clone();

		void generate();

};

} // end namespace hxColorToolkit
} // end namespace schemes

#endif /* INCLUDED_hxColorToolkit_schemes_Monochrome */ 
