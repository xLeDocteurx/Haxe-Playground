#ifndef INCLUDED_format_tools_Deflate
#define INCLUDED_format_tools_Deflate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tools,Deflate)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace format{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES Deflate_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Deflate_obj OBJ_;
		Deflate_obj();

	public:
		enum { _hx_ClassId = 0x2efe2a2b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="format.tools.Deflate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"format.tools.Deflate"); }

		inline static ::hx::ObjectPtr< Deflate_obj > __new() {
			::hx::ObjectPtr< Deflate_obj > __this = new Deflate_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Deflate_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Deflate_obj *__this = (Deflate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Deflate_obj), false, "format.tools.Deflate"));
			*(void **)__this = Deflate_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Deflate_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Deflate",4b,33,4b,70); }

		static  ::haxe::io::Bytes run( ::haxe::io::Bytes b, ::Dynamic level);
		static ::Dynamic run_dyn();

};

} // end namespace format
} // end namespace tools

#endif /* INCLUDED_format_tools_Deflate */ 
