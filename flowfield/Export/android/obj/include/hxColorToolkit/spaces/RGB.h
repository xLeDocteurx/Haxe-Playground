#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#define INCLUDED_hxColorToolkit_spaces_RGB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)

namespace hxColorToolkit{
namespace spaces{


class HXCPP_CLASS_ATTRIBUTES RGB_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RGB_obj OBJ_;
		RGB_obj();

	public:
		enum { _hx_ClassId = 0x2e8eb6f5 };

		void __construct( ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.spaces.RGB")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.spaces.RGB"); }
		static ::hx::ObjectPtr< RGB_obj > __new( ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b);
		static ::hx::ObjectPtr< RGB_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RGB_obj();

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
		::String __ToString() const { return HX_("RGB",ed,76,3e,00); }

		int numOfChannels;
		Float getValue(int channel);
		::Dynamic getValue_dyn();

		Float setValue(int channel,Float val);
		::Dynamic setValue_dyn();

		Float minValue(int channel);
		::Dynamic minValue_dyn();

		Float maxValue(int channel);
		::Dynamic maxValue_dyn();

		virtual Float get_red();
		::Dynamic get_red_dyn();

		virtual Float set_red(Float value);
		::Dynamic set_red_dyn();

		virtual Float get_green();
		::Dynamic get_green_dyn();

		virtual Float set_green(Float value);
		::Dynamic set_green_dyn();

		virtual Float get_blue();
		::Dynamic get_blue_dyn();

		virtual Float set_blue(Float value);
		::Dynamic set_blue_dyn();

		virtual  ::hxColorToolkit::spaces::RGB toRGB();
		::Dynamic toRGB_dyn();

		virtual int getColor();
		::Dynamic getColor_dyn();

		virtual  ::hxColorToolkit::spaces::RGB fromRGB( ::hxColorToolkit::spaces::RGB rgb);
		::Dynamic fromRGB_dyn();

		virtual  ::hxColorToolkit::spaces::RGB setColor(int color);
		::Dynamic setColor_dyn();

		virtual  ::hxColorToolkit::spaces::RGB clone();
		::Dynamic clone_dyn();

		virtual  ::hxColorToolkit::spaces::RGB interpolate(::Dynamic target,::hx::Null< Float >  ratio);
		::Dynamic interpolate_dyn();

		::Array< Float > data;
};

} // end namespace hxColorToolkit
} // end namespace spaces

#endif /* INCLUDED_hxColorToolkit_spaces_RGB */ 
