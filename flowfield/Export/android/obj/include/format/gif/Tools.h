#ifndef INCLUDED_format_gif_Tools
#define INCLUDED_format_gif_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gif,Tools)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace format{
namespace gif{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x647eb152 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.gif.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.gif.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "format.gif.Tools"));
			*(void **)__this = Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools",fb,01,5c,a7); }

		static void __boot();
		static int framesCount( ::Dynamic data);
		static ::Dynamic framesCount_dyn();

		static  ::Dynamic frame( ::Dynamic data,int frameIndex);
		static ::Dynamic frame_dyn();

		static  ::Dynamic graphicControl( ::Dynamic data,int frameIndex);
		static ::Dynamic graphicControl_dyn();

		static  ::haxe::io::Bytes extractBGRA( ::Dynamic data,int frameIndex);
		static ::Dynamic extractBGRA_dyn();

		static  ::haxe::io::Bytes extractRGBA( ::Dynamic data,int frameIndex);
		static ::Dynamic extractRGBA_dyn();

		static  ::haxe::io::Bytes extractFullBGRA( ::Dynamic data,int frameIndex);
		static ::Dynamic extractFullBGRA_dyn();

		static  ::haxe::io::Bytes extractFullRGBA( ::Dynamic data,int frameIndex);
		static ::Dynamic extractFullRGBA_dyn();

		static int loopCount( ::Dynamic data);
		static ::Dynamic loopCount_dyn();

		static Float LN2;
		static Float log2(Float val);
		static ::Dynamic log2_dyn();

};

} // end namespace format
} // end namespace gif

#endif /* INCLUDED_format_gif_Tools */ 
