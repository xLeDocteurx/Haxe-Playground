#ifndef INCLUDED_hxd__IndexBuffer_InnerIterator
#define INCLUDED_hxd__IndexBuffer_InnerIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_18b8913ea890b8c3_9_new)
HX_DECLARE_CLASS2(hxd,_IndexBuffer,InnerIterator)

namespace hxd{
namespace _IndexBuffer{


class HXCPP_CLASS_ATTRIBUTES InnerIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InnerIterator_obj OBJ_;
		InnerIterator_obj();

	public:
		enum { _hx_ClassId = 0x01de8f85 };

		void __construct(::Array< int > b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd._IndexBuffer.InnerIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd._IndexBuffer.InnerIterator"); }

		inline static ::hx::ObjectPtr< InnerIterator_obj > __new(::Array< int > b) {
			::hx::ObjectPtr< InnerIterator_obj > __this = new InnerIterator_obj();
			__this->__construct(b);
			return __this;
		}

		inline static ::hx::ObjectPtr< InnerIterator_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< int > b) {
			InnerIterator_obj *__this = (InnerIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InnerIterator_obj), true, "hxd._IndexBuffer.InnerIterator"));
			*(void **)__this = InnerIterator_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_18b8913ea890b8c3_9_new)
HXLINE(  10)		( ( ::hxd::_IndexBuffer::InnerIterator)(__this) )->b = b;
HXLINE(  11)		( ( ::hxd::_IndexBuffer::InnerIterator)(__this) )->len = ( ( ::hxd::_IndexBuffer::InnerIterator)(__this) )->b->length;
HXLINE(  12)		( ( ::hxd::_IndexBuffer::InnerIterator)(__this) )->pos = 0;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InnerIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InnerIterator",84,0d,e5,bd); }

		::Array< int > b;
		int len;
		int pos;
		bool hasNext();
		::Dynamic hasNext_dyn();

		int next();
		::Dynamic next_dyn();

};

} // end namespace hxd
} // end namespace _IndexBuffer

#endif /* INCLUDED_hxd__IndexBuffer_InnerIterator */ 
