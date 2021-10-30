#ifndef INCLUDED_hxColorToolkit_spaces_Gray
#define INCLUDED_hxColorToolkit_spaces_Gray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Color)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,Gray)
HX_DECLARE_CLASS2(hxColorToolkit,spaces,RGB)

namespace hxColorToolkit{
namespace spaces{


class HXCPP_CLASS_ATTRIBUTES Gray_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Gray_obj OBJ_;
		Gray_obj();

	public:
		enum { _hx_ClassId = 0x2346808b };

		void __construct( ::Dynamic __o_gray);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxColorToolkit.spaces.Gray")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxColorToolkit.spaces.Gray"); }
		static ::hx::ObjectPtr< Gray_obj > __new( ::Dynamic __o_gray);
		static ::hx::ObjectPtr< Gray_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_gray);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Gray_obj();

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
		::String __ToString() const { return HX_("Gray",03,fc,44,2f); }

		int numOfChannels;
		Float getValue(int channel);
		::Dynamic getValue_dyn();

		Float setValue(int channel,Float val);
		::Dynamic setValue_dyn();

		Float minValue(int channel);
		::Dynamic minValue_dyn();

		Float maxValue(int channel);
		::Dynamic maxValue_dyn();

		Float get_gray();
		::Dynamic get_gray_dyn();

		Float set_gray(Float value);
		::Dynamic set_gray_dyn();

		 ::hxColorToolkit::spaces::RGB toRGB();
		::Dynamic toRGB_dyn();

		int getColor();
		::Dynamic getColor_dyn();

		 ::hxColorToolkit::spaces::Gray fromRGB( ::hxColorToolkit::spaces::RGB rgb);
		::Dynamic fromRGB_dyn();

		 ::hxColorToolkit::spaces::Gray setColor(int color);
		::Dynamic setColor_dyn();

		 ::hxColorToolkit::spaces::Gray clone();
		::Dynamic clone_dyn();

		 ::hxColorToolkit::spaces::Gray interpolate(::Dynamic target,::hx::Null< Float >  ratio);
		::Dynamic interpolate_dyn();

		::Array< Float > data;
};

} // end namespace hxColorToolkit
} // end namespace spaces

#endif /* INCLUDED_hxColorToolkit_spaces_Gray */ 
