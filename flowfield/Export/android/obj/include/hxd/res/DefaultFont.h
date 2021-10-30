#ifndef INCLUDED_hxd_res_DefaultFont
#define INCLUDED_hxd_res_DefaultFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,Font)
HX_DECLARE_CLASS2(hxd,res,DefaultFont)

namespace hxd{
namespace res{


class HXCPP_CLASS_ATTRIBUTES DefaultFont_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DefaultFont_obj OBJ_;
		DefaultFont_obj();

	public:
		enum { _hx_ClassId = 0x1c4cbf44 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.res.DefaultFont")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.res.DefaultFont"); }

		inline static ::hx::ObjectPtr< DefaultFont_obj > __new() {
			::hx::ObjectPtr< DefaultFont_obj > __this = new DefaultFont_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DefaultFont_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DefaultFont_obj *__this = (DefaultFont_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultFont_obj), false, "hxd.res.DefaultFont"));
			*(void **)__this = DefaultFont_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultFont_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultFont",10,ef,b1,f9); }

		static  ::h2d::Font get();
		static ::Dynamic get_dyn();

};

} // end namespace hxd
} // end namespace res

#endif /* INCLUDED_hxd_res_DefaultFont */ 
