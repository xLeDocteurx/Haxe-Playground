#ifndef INCLUDED_hxd_impl_ArrayIterator_h3d_scene_Object
#define INCLUDED_hxd_impl_ArrayIterator_h3d_scene_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_h3d_scene_Object)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace hxd{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES ArrayIterator_h3d_scene_Object_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayIterator_h3d_scene_Object_obj OBJ_;
		ArrayIterator_h3d_scene_Object_obj();

	public:
		enum { _hx_ClassId = 0x3e16a2dc };

		void __construct(::Array< ::Dynamic> a);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.impl.ArrayIterator_h3d_scene_Object")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.impl.ArrayIterator_h3d_scene_Object"); }
		static ::hx::ObjectPtr< ArrayIterator_h3d_scene_Object_obj > __new(::Array< ::Dynamic> a);
		static ::hx::ObjectPtr< ArrayIterator_h3d_scene_Object_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> a);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayIterator_h3d_scene_Object_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayIterator_h3d_scene_Object",b0,ba,b5,24); }

		int i;
		int l;
		::Array< ::Dynamic> a;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::h3d::scene::Object next();
		::Dynamic next_dyn();

};

} // end namespace hxd
} // end namespace impl

#endif /* INCLUDED_hxd_impl_ArrayIterator_h3d_scene_Object */ 
