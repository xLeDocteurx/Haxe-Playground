#ifndef INCLUDED_h3d_col_ObjectCollider
#define INCLUDED_h3d_col_ObjectCollider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,ObjectCollider)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES ObjectCollider_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ObjectCollider_obj OBJ_;
		ObjectCollider_obj();

	public:
		enum { _hx_ClassId = 0x5016985a };

		void __construct( ::h3d::scene::Object obj,::Dynamic collider);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.col.ObjectCollider")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.col.ObjectCollider"); }
		static ::hx::ObjectPtr< ObjectCollider_obj > __new( ::h3d::scene::Object obj,::Dynamic collider);
		static ::hx::ObjectPtr< ObjectCollider_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Object obj,::Dynamic collider);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ObjectCollider_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ObjectCollider",33,05,e8,6d); }

		static void __boot();
		static  ::h3d::col::Ray TMP_RAY;
		static  ::h3d::Matrix TMP_MAT;
		 ::h3d::scene::Object obj;
		::Dynamic collider;
		Float rayIntersection( ::h3d::col::Ray r,bool bestMatch);
		::Dynamic rayIntersection_dyn();

		bool contains( ::h3d::col::Point p);
		::Dynamic contains_dyn();

		bool inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m);
		::Dynamic inFrustum_dyn();

		bool inSphere( ::h3d::col::Sphere s);
		::Dynamic inSphere_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_ObjectCollider */ 
