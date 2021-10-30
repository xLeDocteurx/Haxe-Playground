#ifndef INCLUDED_hxd_res_Embed
#define INCLUDED_hxd_res_Embed

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,res,Embed)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES Embed_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Embed_obj OBJ_;
		Embed_obj();

	public:
		enum { _hx_ClassId = 0x1630eeed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.res.Embed")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.res.Embed"); }

		inline static ::hx::ObjectPtr< Embed_obj > __new() {
			::hx::ObjectPtr< Embed_obj > __this = new Embed_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Embed_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Embed_obj *__this = (Embed_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Embed_obj), false, "hxd.res.Embed"));
			*(void **)__this = Embed_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Embed_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Embed",b9,fd,fc,02); }

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_Embed */ 
