#ifndef INCLUDED_hxd_impl__UncheckedBytes_UncheckedBytes_Impl_
#define INCLUDED_hxd_impl__UncheckedBytes_UncheckedBytes_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,impl,_UncheckedBytes,UncheckedBytes_Impl_)

namespace hxd{
namespace impl{
namespace _UncheckedBytes{


class HXCPP_CLASS_ATTRIBUTES UncheckedBytes_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef UncheckedBytes_Impl__obj OBJ_;
		UncheckedBytes_Impl__obj();

	public:
		enum { _hx_ClassId = 0x16f492c5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.impl._UncheckedBytes.UncheckedBytes_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.impl._UncheckedBytes.UncheckedBytes_Impl_"); }

		inline static ::hx::ObjectPtr< UncheckedBytes_Impl__obj > __new() {
			::hx::ObjectPtr< UncheckedBytes_Impl__obj > __this = new UncheckedBytes_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< UncheckedBytes_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			UncheckedBytes_Impl__obj *__this = (UncheckedBytes_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UncheckedBytes_Impl__obj), false, "hxd.impl._UncheckedBytes.UncheckedBytes_Impl_"));
			*(void **)__this = UncheckedBytes_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UncheckedBytes_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UncheckedBytes_Impl_",1d,bc,b7,7d); }

		static ::Array< unsigned char > _new(::Array< unsigned char > v);
		static ::Dynamic _new_dyn();

		static int get(::Array< unsigned char > this1,int i);
		static ::Dynamic get_dyn();

		static int set(::Array< unsigned char > this1,int i,int v);
		static ::Dynamic set_dyn();

		static ::Array< unsigned char > fromBytes( ::haxe::io::Bytes b);
		static ::Dynamic fromBytes_dyn();

};

} // end namespace hxd
} // end namespace impl
} // end namespace _UncheckedBytes

#endif /* INCLUDED_hxd_impl__UncheckedBytes_UncheckedBytes_Impl_ */ 
