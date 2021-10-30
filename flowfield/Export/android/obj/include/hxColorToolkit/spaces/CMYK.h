#ifndef INCLUDED_hxColorToolkit_spaces_CMYK
#define INCLUDED_hxColorToolkit_spaces_CMYK

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,spaces,CMYK)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)

namespace hxColorToolkit{
namespace spaces{


class HXCPP_CLASS_ATTRIBUTES CMYK_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CMYK_obj OBJ_;
		CMYK_obj();

	public:
		enum { _hx_ClassId = 0x20858b84 };

		void __construct( ::Dynamic __o_cyan, ::Dynamic __o_magenta, ::Dynamic __o_yellow, ::Dynamic __o_black);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.spaces.CMYK")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.spaces.CMYK"); }
		static ::hx::ObjectPtr< CMYK_obj > __new( ::Dynamic __o_cyan, ::Dynamic __o_magenta, ::Dynamic __o_yellow, ::Dynamic __o_black);
		static ::hx::ObjectPtr< CMYK_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_cyan, ::Dynamic __o_magenta, ::Dynamic __o_yellow, ::Dynamic __o_black);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CMYK_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::Dynamic interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio);

		::Dynamic clone_ee952b4b();

		::Dynamic fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb);

		::Dynamic setColor_41e3b804(int c);
		::String __ToString() const { return HX_("CMYK",fc,06,84,2c); }

		int numOfChannels;
		Float getValue(int channel);
		::Dynamic getValue_dyn();

		Float setValue(int channel,Float val);
		::Dynamic setValue_dyn();

		Float minValue(int channel);
		::Dynamic minValue_dyn();

		Float maxValue(int channel);
		::Dynamic maxValue_dyn();

		Float get_cyan();
		::Dynamic get_cyan_dyn();

		Float set_cyan(Float value);
		::Dynamic set_cyan_dyn();

		Float get_magenta();
		::Dynamic get_magenta_dyn();

		Float set_magenta(Float value);
		::Dynamic set_magenta_dyn();

		Float get_yellow();
		::Dynamic get_yellow_dyn();

		Float set_yellow(Float value);
		::Dynamic set_yellow_dyn();

		Float get_black();
		::Dynamic get_black_dyn();

		Float set_black(Float value);
		::Dynamic set_black_dyn();

		 ::hxColorToolkit::spaces::RGB toRGB();
		::Dynamic toRGB_dyn();

		int getColor();
		::Dynamic getColor_dyn();

		 ::hxColorToolkit::spaces::CMYK fromRGB( ::hxColorToolkit::spaces::RGB rgb);
		::Dynamic fromRGB_dyn();

		 ::hxColorToolkit::spaces::CMYK setColor(int color);
		::Dynamic setColor_dyn();

		 ::hxColorToolkit::spaces::CMYK clone();
		::Dynamic clone_dyn();

		 ::hxColorToolkit::spaces::CMYK interpolate(::Dynamic target,::hx::Null< Float >  ratio);
		::Dynamic interpolate_dyn();

		::Array< Float > data;
};

} // end namespace hxColorToolkit
} // end namespace spaces

#endif /* INCLUDED_hxColorToolkit_spaces_CMYK */ 
