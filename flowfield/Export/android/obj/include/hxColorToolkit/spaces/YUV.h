#ifndef INCLUDED_hxColorToolkit_spaces_YUV
#define INCLUDED_hxColorToolkit_spaces_YUV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,YUV)

namespace hxColorToolkit{
namespace spaces{


class HXCPP_CLASS_ATTRIBUTES YUV_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef YUV_obj OBJ_;
		YUV_obj();

	public:
		enum { _hx_ClassId = 0x2e941302 };

		void __construct( ::Dynamic __o_y, ::Dynamic __o_u, ::Dynamic __o_v);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.spaces.YUV")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.spaces.YUV"); }
		static ::hx::ObjectPtr< YUV_obj > __new( ::Dynamic __o_y, ::Dynamic __o_u, ::Dynamic __o_v);
		static ::hx::ObjectPtr< YUV_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_y, ::Dynamic __o_u, ::Dynamic __o_v);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~YUV_obj();

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
		::String __ToString() const { return HX_("YUV",fa,d2,43,00); }

		int numOfChannels;
		Float getValue(int channel);
		::Dynamic getValue_dyn();

		Float setValue(int channel,Float val);
		::Dynamic setValue_dyn();

		Float minValue(int channel);
		::Dynamic minValue_dyn();

		Float maxValue(int channel);
		::Dynamic maxValue_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		Float set_y(Float value);
		::Dynamic set_y_dyn();

		Float get_u();
		::Dynamic get_u_dyn();

		Float set_u(Float value);
		::Dynamic set_u_dyn();

		Float get_v();
		::Dynamic get_v_dyn();

		Float set_v(Float value);
		::Dynamic set_v_dyn();

		 ::hxColorToolkit::spaces::RGB toRGB();
		::Dynamic toRGB_dyn();

		int getColor();
		::Dynamic getColor_dyn();

		 ::hxColorToolkit::spaces::YUV fromRGB( ::hxColorToolkit::spaces::RGB rgb);
		::Dynamic fromRGB_dyn();

		 ::hxColorToolkit::spaces::YUV setColor(int color);
		::Dynamic setColor_dyn();

		 ::hxColorToolkit::spaces::YUV clone();
		::Dynamic clone_dyn();

		 ::hxColorToolkit::spaces::YUV interpolate(::Dynamic target,::hx::Null< Float >  ratio);
		::Dynamic interpolate_dyn();

		::Array< Float > data;
};

} // end namespace hxColorToolkit
} // end namespace spaces

#endif /* INCLUDED_hxColorToolkit_spaces_YUV */ 
