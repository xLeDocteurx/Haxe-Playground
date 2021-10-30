#ifndef INCLUDED_hxColorToolkit_schemes_Compound
#define INCLUDED_hxColorToolkit_schemes_Compound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,ColorWheelScheme)
HX_DECLARE_CLASS2(hxColorToolkit,schemes,Compound)

namespace hxColorToolkit{
namespace schemes{


class HXCPP_CLASS_ATTRIBUTES Compound_obj : public  ::hxColorToolkit::schemes::ColorWheelScheme_obj
{
	public:
		typedef  ::hxColorToolkit::schemes::ColorWheelScheme_obj super;
		typedef Compound_obj OBJ_;
		Compound_obj();

	public:
		enum { _hx_ClassId = 0x5cbafd0e };

		void __construct( ::Dynamic primaryColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.schemes.Compound")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.schemes.Compound"); }
		static ::hx::ObjectPtr< Compound_obj > __new( ::Dynamic primaryColor);
		static ::hx::ObjectPtr< Compound_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic primaryColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Compound_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Compound",8b,7f,81,5b); }

		 ::hxColorToolkit::schemes::ColorWheelScheme clone();

		void generate();

};

} // end namespace hxColorToolkit
} // end namespace schemes

#endif /* INCLUDED_hxColorToolkit_schemes_Compound */ 
