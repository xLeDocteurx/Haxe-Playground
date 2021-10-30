#ifndef INCLUDED_hxd_Charset
#define INCLUDED_hxd_Charset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(hxd,Charset)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES Charset_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Charset_obj OBJ_;
		Charset_obj();

	public:
		enum { _hx_ClassId = 0x17c99ec4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.Charset")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.Charset"); }
		static ::hx::ObjectPtr< Charset_obj > __new();
		static ::hx::ObjectPtr< Charset_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Charset_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Charset",6c,ce,cb,9c); }

		static void __boot();
		static ::String ASCII;
		static ::String LATIN1;
		static ::String CYRILLIC;
		static ::String POLISH;
		static ::String TURKISH;
		static ::String JP_KANA;
		static ::String UNICODE_SPECIALS;
		static ::String DEFAULT_CHARS;
		static  ::haxe::ds::IntMap complementChars;
		static  ::hxd::Charset inst;
		static  ::hxd::Charset getDefault();
		static ::Dynamic getDefault_dyn();

		 ::haxe::ds::IntMap map;
		 ::Dynamic resolveChar(int code, ::haxe::ds::IntMap glyphs);
		::Dynamic resolveChar_dyn();

		bool isCJK(int code);
		::Dynamic isCJK_dyn();

		bool isSpace(int code);
		::Dynamic isSpace_dyn();

		bool isBreakChar(int code);
		::Dynamic isBreakChar_dyn();

		bool isComplementChar(int code);
		::Dynamic isComplementChar_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_Charset */ 
