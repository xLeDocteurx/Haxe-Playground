#ifndef INCLUDED_h2d_Font
#define INCLUDED_h2d_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,Font)
HX_DECLARE_CLASS1(h2d,FontChar)
HX_DECLARE_CLASS1(h2d,FontType)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(hxd,Charset)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Font_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Font_obj OBJ_;
		Font_obj();

	public:
		enum { _hx_ClassId = 0x52e3b9e5 };

		void __construct(::String name,int size, ::h2d::FontType type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Font")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Font"); }
		static ::hx::ObjectPtr< Font_obj > __new(::String name,int size, ::h2d::FontType type);
		static ::hx::ObjectPtr< Font_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int size, ::h2d::FontType type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Font",ef,89,99,2e); }

		::String name;
		int size;
		Float baseLine;
		Float lineHeight;
		 ::h2d::Tile tile;
		::String tilePath;
		 ::h2d::FontType type;
		 ::hxd::Charset charset;
		 ::haxe::ds::IntMap glyphs;
		 ::h2d::FontChar nullChar;
		 ::h2d::FontChar defaultChar;
		int initSize;
		Float offsetX;
		Float offsetY;
		 ::h2d::FontChar getChar(int code);
		::Dynamic getChar_dyn();

		void setOffset(Float x,Float y);
		::Dynamic setOffset_dyn();

		 ::h2d::Font clone();
		::Dynamic clone_dyn();

		void resizeTo(int size);
		::Dynamic resizeTo_dyn();

		bool hasChar(int code);
		::Dynamic hasChar_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Font */ 
