#ifndef INCLUDED_h2d_FontChar
#define INCLUDED_h2d_FontChar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,FontChar)
HX_DECLARE_CLASS1(h2d,Kerning)
HX_DECLARE_CLASS1(h2d,Tile)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES FontChar_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FontChar_obj OBJ_;
		FontChar_obj();

	public:
		enum { _hx_ClassId = 0x5a3f8b3f };

		void __construct( ::h2d::Tile t,Float w);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.FontChar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.FontChar"); }
		static ::hx::ObjectPtr< FontChar_obj > __new( ::h2d::Tile t,Float w);
		static ::hx::ObjectPtr< FontChar_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Tile t,Float w);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FontChar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FontChar",65,38,ef,9d); }

		 ::h2d::Tile t;
		Float width;
		 ::h2d::Kerning kerning;
		void addKerning(int prevChar,int offset);
		::Dynamic addKerning_dyn();

		Float getKerningOffset(int prevChar);
		::Dynamic getKerningOffset_dyn();

		 ::h2d::FontChar clone();
		::Dynamic clone_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_FontChar */ 
