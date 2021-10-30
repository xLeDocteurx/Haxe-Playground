#ifndef INCLUDED_hxd_res__NanoJpeg_FastBytes_Impl_
#define INCLUDED_hxd_res__NanoJpeg_FastBytes_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,res,_NanoJpeg,FastBytes_Impl_)

namespace hxd{
namespace res{
namespace _NanoJpeg{


class HXCPP_CLASS_ATTRIBUTES FastBytes_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FastBytes_Impl__obj OBJ_;
		FastBytes_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7e8637a0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.res._NanoJpeg.FastBytes_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.res._NanoJpeg.FastBytes_Impl_"); }

		inline static ::hx::ObjectPtr< FastBytes_Impl__obj > __new() {
			::hx::ObjectPtr< FastBytes_Impl__obj > __this = new FastBytes_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FastBytes_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FastBytes_Impl__obj *__this = (FastBytes_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FastBytes_Impl__obj), false, "hxd.res._NanoJpeg.FastBytes_Impl_"));
			*(void **)__this = FastBytes_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FastBytes_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FastBytes_Impl_",ef,d1,32,de); }

		static  ::haxe::io::Bytes _new( ::haxe::io::Bytes b);
		static ::Dynamic _new_dyn();

		static int get( ::haxe::io::Bytes this1,int i);
		static ::Dynamic get_dyn();

		static void set( ::haxe::io::Bytes this1,int i,int v);
		static ::Dynamic set_dyn();

};

} // end namespace hxd
} // end namespace res
} // end namespace _NanoJpeg

#endif /* INCLUDED_hxd_res__NanoJpeg_FastBytes_Impl_ */ 
