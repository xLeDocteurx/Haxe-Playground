#ifndef INCLUDED_hxd_fmt_bfnt_FontParser
#define INCLUDED_hxd_fmt_bfnt_FontParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,Font)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,fmt,bfnt,FontParser)

namespace hxd{
namespace fmt{
namespace bfnt{


class HXCPP_CLASS_ATTRIBUTES FontParser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FontParser_obj OBJ_;
		FontParser_obj();

	public:
		enum { _hx_ClassId = 0x4655ec39 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.fmt.bfnt.FontParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.fmt.bfnt.FontParser"); }

		inline static ::hx::ObjectPtr< FontParser_obj > __new() {
			::hx::ObjectPtr< FontParser_obj > __this = new FontParser_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FontParser_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FontParser_obj *__this = (FontParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FontParser_obj), false, "hxd.fmt.bfnt.FontParser"));
			*(void **)__this = FontParser_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FontParser_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FontParser",2e,38,8d,98); }

		static  ::h2d::Font parse( ::haxe::io::Bytes bytes,::String path, ::Dynamic resolveTile);
		static ::Dynamic parse_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace bfnt

#endif /* INCLUDED_hxd_fmt_bfnt_FontParser */ 
