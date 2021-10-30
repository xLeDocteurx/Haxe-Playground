#ifndef INCLUDED_hxd_impl_ArrayIterator_h2d_Object
#define INCLUDED_hxd_impl_ArrayIterator_h2d_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_h2d_Object)

namespace hxd{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES ArrayIterator_h2d_Object_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayIterator_h2d_Object_obj OBJ_;
		ArrayIterator_h2d_Object_obj();

	public:
		enum { _hx_ClassId = 0x6a049a50 };

		void __construct(::Array< ::Dynamic> a);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.impl.ArrayIterator_h2d_Object")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.impl.ArrayIterator_h2d_Object"); }
		static ::hx::ObjectPtr< ArrayIterator_h2d_Object_obj > __new(::Array< ::Dynamic> a);
		static ::hx::ObjectPtr< ArrayIterator_h2d_Object_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> a);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayIterator_h2d_Object_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayIterator_h2d_Object",5c,65,a1,fb); }

		int i;
		int l;
		::Array< ::Dynamic> a;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::h2d::Object next();
		::Dynamic next_dyn();

};

} // end namespace hxd
} // end namespace impl

#endif /* INCLUDED_hxd_impl_ArrayIterator_h2d_Object */ 
