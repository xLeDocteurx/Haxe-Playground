#ifndef INCLUDED_hxColorToolkit_spaces_Lab
#define INCLUDED_hxColorToolkit_spaces_Lab

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Lab)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,XYZ)

namespace hxColorToolkit{
namespace spaces{


class HXCPP_CLASS_ATTRIBUTES Lab_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Lab_obj OBJ_;
		Lab_obj();

	public:
		enum { _hx_ClassId = 0x2e8a4035 };

		void __construct( ::Dynamic __o_lightness, ::Dynamic __o_a, ::Dynamic __o_b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.spaces.Lab")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.spaces.Lab"); }
		static ::hx::ObjectPtr< Lab_obj > __new( ::Dynamic __o_lightness, ::Dynamic __o_a, ::Dynamic __o_b);
		static ::hx::ObjectPtr< Lab_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_lightness, ::Dynamic __o_a, ::Dynamic __o_b);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Lab_obj();

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
		::String __ToString() const { return HX_("Lab",2d,00,3a,00); }

		int numOfChannels;
		Float getValue(int channel);
		::Dynamic getValue_dyn();

		Float setValue(int channel,Float val);
		::Dynamic setValue_dyn();

		Float minValue(int channel);
		::Dynamic minValue_dyn();

		Float maxValue(int channel);
		::Dynamic maxValue_dyn();

		 ::hxColorToolkit::spaces::RGB toRGB();
		::Dynamic toRGB_dyn();

		 ::hxColorToolkit::spaces::XYZ toXYZ();
		::Dynamic toXYZ_dyn();

		int getColor();
		::Dynamic getColor_dyn();

		 ::hxColorToolkit::spaces::Lab fromRGB( ::hxColorToolkit::spaces::RGB rgb);
		::Dynamic fromRGB_dyn();

		 ::hxColorToolkit::spaces::Lab setColor(int value);
		::Dynamic setColor_dyn();

		Float get_lightness();
		::Dynamic get_lightness_dyn();

		Float set_lightness(Float value);
		::Dynamic set_lightness_dyn();

		Float get_a();
		::Dynamic get_a_dyn();

		Float set_a(Float value);
		::Dynamic set_a_dyn();

		Float get_b();
		::Dynamic get_b_dyn();

		Float set_b(Float value);
		::Dynamic set_b_dyn();

		 ::hxColorToolkit::spaces::Lab clone();
		::Dynamic clone_dyn();

		 ::hxColorToolkit::spaces::Lab interpolate(::Dynamic target,::hx::Null< Float >  ratio);
		::Dynamic interpolate_dyn();

		::Array< Float > data;
};

} // end namespace hxColorToolkit
} // end namespace spaces

#endif /* INCLUDED_hxColorToolkit_spaces_Lab */ 
