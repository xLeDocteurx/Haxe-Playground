#ifndef INCLUDED_format_tools_Inflate
#define INCLUDED_format_tools_Inflate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tools,Inflate)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace format{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES Inflate_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Inflate_obj OBJ_;
		Inflate_obj();

	public:
		enum { _hx_ClassId = 0x114caee3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.tools.Inflate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.tools.Inflate"); }

		inline static ::hx::ObjectPtr< Inflate_obj > __new() {
			::hx::ObjectPtr< Inflate_obj > __this = new Inflate_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Inflate_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Inflate_obj *__this = (Inflate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Inflate_obj), false, "format.tools.Inflate"));
			*(void **)__this = Inflate_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Inflate_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Inflate",67,c4,6c,d9); }

		static  ::haxe::io::Bytes run( ::haxe::io::Bytes bytes);
		static ::Dynamic run_dyn();

};

} // end namespace format
} // end namespace tools

#endif /* INCLUDED_format_tools_Inflate */ 
