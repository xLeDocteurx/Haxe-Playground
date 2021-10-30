#ifndef INCLUDED_hxColorToolkit_spaces_HSL
#define INCLUDED_hxColorToolkit_spaces_HSL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,HSL)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)

namespace hxColorToolkit{
namespace spaces{


class HXCPP_CLASS_ATTRIBUTES HSL_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HSL_obj OBJ_;
		HSL_obj();

	public:
		enum { _hx_ClassId = 0x2e872ae9 };

		void __construct( ::Dynamic __o_hue, ::Dynamic __o_saturation, ::Dynamic __o_lightness);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.spaces.HSL")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.spaces.HSL"); }
		static ::hx::ObjectPtr< HSL_obj > __new( ::Dynamic __o_hue, ::Dynamic __o_saturation, ::Dynamic __o_lightness);
		static ::hx::ObjectPtr< HSL_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_hue, ::Dynamic __o_saturation, ::Dynamic __o_lightness);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HSL_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
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
		::String __ToString() const { return HX_("HSL",e1,ea,36,00); }

		static Float loop(Float index,Float length);
		static ::Dynamic loop_dyn();

		int numOfChannels;
		Float getValue(int channel);
		::Dynamic getValue_dyn();

		Float setValue(int channel,Float val);
		::Dynamic setValue_dyn();

		Float minValue(int channel);
		::Dynamic minValue_dyn();

		Float maxValue(int channel);
		::Dynamic maxValue_dyn();

		Float get_hue();
		::Dynamic get_hue_dyn();

		Float set_hue(Float val);
		::Dynamic set_hue_dyn();

		Float get_saturation();
		::Dynamic get_saturation_dyn();

		Float set_saturation(Float val);
		::Dynamic set_saturation_dyn();

		Float get_lightness();
		::Dynamic get_lightness_dyn();

		Float set_lightness(Float val);
		::Dynamic set_lightness_dyn();

		 ::hxColorToolkit::spaces::RGB toRGB();
		::Dynamic toRGB_dyn();

		int getColor();
		::Dynamic getColor_dyn();

		 ::hxColorToolkit::spaces::HSL fromRGB( ::hxColorToolkit::spaces::RGB rgb);
		::Dynamic fromRGB_dyn();

		 ::hxColorToolkit::spaces::HSL setColor(int color);
		::Dynamic setColor_dyn();

		 ::hxColorToolkit::spaces::HSL clone();
		::Dynamic clone_dyn();

		 ::hxColorToolkit::spaces::HSL interpolate(::Dynamic target,::hx::Null< Float >  ratio);
		::Dynamic interpolate_dyn();

		::Array< Float > data;
		Float hue2rgb(Float p,Float q,Float t);
		::Dynamic hue2rgb_dyn();

};

} // end namespace hxColorToolkit
} // end namespace spaces

#endif /* INCLUDED_hxColorToolkit_spaces_HSL */ 
