#ifndef INCLUDED_hxd__IndexBuffer_IndexBuffer_Impl_
#define INCLUDED_hxd__IndexBuffer_IndexBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,_IndexBuffer,IndexBuffer_Impl_)
HX_DECLARE_CLASS2(hxd,_IndexBuffer,InnerIterator)

namespace hxd{
namespace _IndexBuffer{


class HXCPP_CLASS_ATTRIBUTES IndexBuffer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IndexBuffer_Impl__obj OBJ_;
		IndexBuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x058fe36b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd._IndexBuffer.IndexBuffer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd._IndexBuffer.IndexBuffer_Impl_"); }

		inline static ::hx::ObjectPtr< IndexBuffer_Impl__obj > __new() {
			::hx::ObjectPtr< IndexBuffer_Impl__obj > __this = new IndexBuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IndexBuffer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			IndexBuffer_Impl__obj *__this = (IndexBuffer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IndexBuffer_Impl__obj), false, "hxd._IndexBuffer.IndexBuffer_Impl_"));
			*(void **)__this = IndexBuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IndexBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IndexBuffer_Impl_",b2,b3,fb,85); }

		static ::Array< int > _new(::hx::Null< int >  length);
		static ::Dynamic _new_dyn();

		static void push(::Array< int > this1,int v);
		static ::Dynamic push_dyn();

		static void grow(::Array< int > this1,int v);
		static ::Dynamic grow_dyn();

		static int arrayRead(::Array< int > this1,int key);
		static ::Dynamic arrayRead_dyn();

		static int arrayWrite(::Array< int > this1,int key,int value);
		static ::Dynamic arrayWrite_dyn();

		static ::Array< int > getNative(::Array< int > this1);
		static ::Dynamic getNative_dyn();

		static  ::hxd::_IndexBuffer::InnerIterator iterator(::Array< int > this1);
		static ::Dynamic iterator_dyn();

		static int get_length(::Array< int > this1);
		static ::Dynamic get_length_dyn();

};

} // end namespace hxd
} // end namespace _IndexBuffer

#endif /* INCLUDED_hxd__IndexBuffer_IndexBuffer_Impl_ */ 
