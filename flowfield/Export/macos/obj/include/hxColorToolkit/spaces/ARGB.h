#ifndef INCLUDED_hxColorToolkit_spaces_ARGB
#define INCLUDED_hxColorToolkit_spaces_ARGB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,spaces,ARGB)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)

namespace hxColorToolkit{
namespace spaces{


class HXCPP_CLASS_ATTRIBUTES ARGB_obj : public  ::hxColorToolkit::spaces::RGB_obj
{
	public:
		typedef  ::hxColorToolkit::spaces::RGB_obj super;
		typedef ARGB_obj OBJ_;
		ARGB_obj();

	public:
		enum { _hx_ClassId = 0x1f36d9d4 };

		void __construct( ::Dynamic __o_a, ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.spaces.ARGB")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.spaces.ARGB"); }
		static ::hx::ObjectPtr< ARGB_obj > __new( ::Dynamic __o_a, ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b);
		static ::hx::ObjectPtr< ARGB_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_a, ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ARGB_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ARGB",4c,55,35,2b); }

		Float get_alpha();
		::Dynamic get_alpha_dyn();

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		Float get_red();

		Float set_red(Float value);

		Float get_green();

		Float set_green(Float value);

		Float get_blue();

		Float set_blue(Float value);

		 ::hxColorToolkit::spaces::RGB toRGB();

		 ::hxColorToolkit::spaces::ARGB toARGB();
		::Dynamic toARGB_dyn();

		int getColor();

		 ::hxColorToolkit::spaces::RGB fromRGB( ::hxColorToolkit::spaces::RGB rgb);

		 ::hxColorToolkit::spaces::RGB setColor(int color);

		 ::hxColorToolkit::spaces::RGB clone();

		 ::hxColorToolkit::spaces::RGB interpolate(::Dynamic target,::hx::Null< Float >  ratio);

};

} // end namespace hxColorToolkit
} // end namespace spaces

#endif /* INCLUDED_hxColorToolkit_spaces_ARGB */ 
