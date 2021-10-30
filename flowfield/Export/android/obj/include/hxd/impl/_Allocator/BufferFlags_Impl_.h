#ifndef INCLUDED_hxd_impl__Allocator_BufferFlags_Impl_
#define INCLUDED_hxd_impl__Allocator_BufferFlags_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,impl,_Allocator,BufferFlags_Impl_)

namespace hxd{
namespace impl{
namespace _Allocator{


class HXCPP_CLASS_ATTRIBUTES BufferFlags_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BufferFlags_Impl__obj OBJ_;
		BufferFlags_Impl__obj();

	public:
		enum { _hx_ClassId = 0x61c639c7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.impl._Allocator.BufferFlags_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.impl._Allocator.BufferFlags_Impl_"); }

		inline static ::hx::ObjectPtr< BufferFlags_Impl__obj > __new() {
			::hx::ObjectPtr< BufferFlags_Impl__obj > __this = new BufferFlags_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BufferFlags_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			BufferFlags_Impl__obj *__this = (BufferFlags_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BufferFlags_Impl__obj), false, "hxd.impl._Allocator.BufferFlags_Impl_"));
			*(void **)__this = BufferFlags_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BufferFlags_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BufferFlags_Impl_",e7,51,0e,cd); }

		static void __boot();
		static int Dynamic;
		static int UniformDynamic;
		static int RawFormat;
		static int RawQuads;
		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

};

} // end namespace hxd
} // end namespace impl
} // end namespace _Allocator

#endif /* INCLUDED_hxd_impl__Allocator_BufferFlags_Impl_ */ 
