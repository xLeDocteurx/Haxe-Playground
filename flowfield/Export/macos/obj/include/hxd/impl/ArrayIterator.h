#ifndef INCLUDED_hxd_impl_ArrayIterator
#define INCLUDED_hxd_impl_ArrayIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_490dd079b89b7fe6_7_new)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator)

namespace hxd{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES ArrayIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayIterator_obj OBJ_;
		ArrayIterator_obj();

	public:
		enum { _hx_ClassId = 0x00a3f077 };

		void __construct(::cpp::VirtualArray a);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.impl.ArrayIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.impl.ArrayIterator"); }

		inline static ::hx::ObjectPtr< ArrayIterator_obj > __new(::cpp::VirtualArray a) {
			::hx::ObjectPtr< ArrayIterator_obj > __this = new ArrayIterator_obj();
			__this->__construct(a);
			return __this;
		}

		inline static ::hx::ObjectPtr< ArrayIterator_obj > __alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray a) {
			ArrayIterator_obj *__this = (ArrayIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayIterator_obj), true, "hxd.impl.ArrayIterator"));
			*(void **)__this = ArrayIterator_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_490dd079b89b7fe6_7_new)
HXLINE(   8)		( ( ::hxd::impl::ArrayIterator)(__this) )->i = 0;
HXLINE(   9)		( ( ::hxd::impl::ArrayIterator)(__this) )->a = a;
HXLINE(  10)		( ( ::hxd::impl::ArrayIterator)(__this) )->l = ( ( ::hxd::impl::ArrayIterator)(__this) )->a->get_length();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayIterator",87,84,c8,5d); }

		int i;
		int l;
		::cpp::VirtualArray a;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

};

} // end namespace hxd
} // end namespace impl

#endif /* INCLUDED_hxd_impl_ArrayIterator */ 
