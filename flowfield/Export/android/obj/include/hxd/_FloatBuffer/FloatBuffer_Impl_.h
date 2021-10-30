#ifndef INCLUDED_hxd__FloatBuffer_FloatBuffer_Impl_
#define INCLUDED_hxd__FloatBuffer_FloatBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,_FloatBuffer,FloatBuffer_Impl_)
HX_DECLARE_CLASS2(hxd,_FloatBuffer,InnerIterator)

namespace hxd{
namespace _FloatBuffer{


class HXCPP_CLASS_ATTRIBUTES FloatBuffer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FloatBuffer_Impl__obj OBJ_;
		FloatBuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5e451bf3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd._FloatBuffer.FloatBuffer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd._FloatBuffer.FloatBuffer_Impl_"); }

		inline static ::hx::ObjectPtr< FloatBuffer_Impl__obj > __new() {
			::hx::ObjectPtr< FloatBuffer_Impl__obj > __this = new FloatBuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FloatBuffer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FloatBuffer_Impl__obj *__this = (FloatBuffer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FloatBuffer_Impl__obj), false, "hxd._FloatBuffer.FloatBuffer_Impl_"));
			*(void **)__this = FloatBuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FloatBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FloatBuffer_Impl_",3c,85,d8,b3); }

		static ::Array< Float > _new(::hx::Null< int >  length);
		static ::Dynamic _new_dyn();

		static void push(::Array< Float > this1,Float v);
		static ::Dynamic push_dyn();

		static void grow(::Array< Float > this1,int v);
		static ::Dynamic grow_dyn();

		static void resize(::Array< Float > this1,int v);
		static ::Dynamic resize_dyn();

		static Float arrayRead(::Array< Float > this1,int key);
		static ::Dynamic arrayRead_dyn();

		static Float arrayWrite(::Array< Float > this1,int key,Float value);
		static ::Dynamic arrayWrite_dyn();

		static ::Array< Float > getNative(::Array< Float > this1);
		static ::Dynamic getNative_dyn();

		static  ::hxd::_FloatBuffer::InnerIterator iterator(::Array< Float > this1);
		static ::Dynamic iterator_dyn();

		static int get_length(::Array< Float > this1);
		static ::Dynamic get_length_dyn();

};

} // end namespace hxd
} // end namespace _FloatBuffer

#endif /* INCLUDED_hxd__FloatBuffer_FloatBuffer_Impl_ */ 
