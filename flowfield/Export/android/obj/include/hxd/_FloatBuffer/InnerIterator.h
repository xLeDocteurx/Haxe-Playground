#ifndef INCLUDED_hxd__FloatBuffer_InnerIterator
#define INCLUDED_hxd__FloatBuffer_InnerIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5463c8a2a9c3cb85_50_new)
HX_DECLARE_CLASS2(hxd,_FloatBuffer,InnerIterator)

namespace hxd{
namespace _FloatBuffer{


class HXCPP_CLASS_ATTRIBUTES InnerIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InnerIterator_obj OBJ_;
		InnerIterator_obj();

	public:
		enum { _hx_ClassId = 0x4b8c59f3 };

		void __construct(::Array< Float > b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd._FloatBuffer.InnerIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd._FloatBuffer.InnerIterator"); }

		inline static ::hx::ObjectPtr< InnerIterator_obj > __new(::Array< Float > b) {
			::hx::ObjectPtr< InnerIterator_obj > __this = new InnerIterator_obj();
			__this->__construct(b);
			return __this;
		}

		inline static ::hx::ObjectPtr< InnerIterator_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< Float > b) {
			InnerIterator_obj *__this = (InnerIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InnerIterator_obj), true, "hxd._FloatBuffer.InnerIterator"));
			*(void **)__this = InnerIterator_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5463c8a2a9c3cb85_50_new)
HXLINE(  51)		( ( ::hxd::_FloatBuffer::InnerIterator)(__this) )->b = b;
HXLINE(  52)		( ( ::hxd::_FloatBuffer::InnerIterator)(__this) )->len = ( ( ::hxd::_FloatBuffer::InnerIterator)(__this) )->b->length;
HXLINE(  53)		( ( ::hxd::_FloatBuffer::InnerIterator)(__this) )->pos = 0;
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

		::Array< Float > b;
		int len;
		int pos;
		bool hasNext();
		::Dynamic hasNext_dyn();

		Float next();
		::Dynamic next_dyn();

};

} // end namespace hxd
} // end namespace _FloatBuffer

#endif /* INCLUDED_hxd__FloatBuffer_InnerIterator */ 
