#ifndef INCLUDED_hxd_fmt_hdr_Reader
#define INCLUDED_hxd_fmt_hdr_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,fmt,hdr,Reader)

namespace hxd{
namespace fmt{
namespace hdr{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x30473840 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.fmt.hdr.Reader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.fmt.hdr.Reader"); }

		inline static ::hx::ObjectPtr< Reader_obj > __new() {
			::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Reader_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), false, "hxd.fmt.hdr.Reader"));
			*(void **)__this = Reader_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Reader",63,19,26,31); }

		static  ::Dynamic decode( ::haxe::io::Bytes bytes,bool sRGB);
		static ::Dynamic decode_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace hdr

#endif /* INCLUDED_hxd_fmt_hdr_Reader */ 
