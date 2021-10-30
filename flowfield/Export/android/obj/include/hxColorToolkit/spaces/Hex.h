#ifndef INCLUDED_hxColorToolkit_spaces_Hex
#define INCLUDED_hxColorToolkit_spaces_Hex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,spaces,ARGB)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Hex)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)

namespace hxColorToolkit{
namespace spaces{


class HXCPP_CLASS_ATTRIBUTES Hex_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Hex_obj OBJ_;
		Hex_obj();

	public:
		enum { _hx_ClassId = 0x2e873ac3 };

		void __construct( ::Dynamic __o_color);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxColorToolkit.spaces.Hex")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxColorToolkit.spaces.Hex"); }
		static ::hx::ObjectPtr< Hex_obj > __new( ::Dynamic __o_color);
		static ::hx::ObjectPtr< Hex_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Hex_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::Dynamic interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio);

		::Dynamic clone_ee952b4b();

		::Dynamic fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb);

		::Dynamic setColor_41e3b804(int c);
		::String __ToString() const { return HX_("Hex",bb,fa,36,00); }

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

		 ::hxColorToolkit::spaces::ARGB toARGB();
		::Dynamic toARGB_dyn();

		int getColor();
		::Dynamic getColor_dyn();

		 ::hxColorToolkit::spaces::Hex fromRGB( ::hxColorToolkit::spaces::RGB rgb);
		::Dynamic fromRGB_dyn();

		 ::hxColorToolkit::spaces::Hex setColor(int color);
		::Dynamic setColor_dyn();

		int get_alpha();
		::Dynamic get_alpha_dyn();

		int get_red();
		::Dynamic get_red_dyn();

		int get_green();
		::Dynamic get_green_dyn();

		int get_blue();
		::Dynamic get_blue_dyn();

		int set_alpha(int v);
		::Dynamic set_alpha_dyn();

		int set_red(int v);
		::Dynamic set_red_dyn();

		int set_green(int v);
		::Dynamic set_green_dyn();

		int set_blue(int v);
		::Dynamic set_blue_dyn();

		 ::hxColorToolkit::spaces::Hex clone();
		::Dynamic clone_dyn();

		 ::hxColorToolkit::spaces::Hex interpolate(::Dynamic target,::hx::Null< Float >  ratio);
		::Dynamic interpolate_dyn();

		int data;
};

} // end namespace hxColorToolkit
} // end namespace spaces

#endif /* INCLUDED_hxColorToolkit_spaces_Hex */ 
