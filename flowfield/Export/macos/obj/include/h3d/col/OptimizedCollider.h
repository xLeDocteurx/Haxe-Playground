#ifndef INCLUDED_h3d_col_OptimizedCollider
#define INCLUDED_h3d_col_OptimizedCollider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,OptimizedCollider)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES OptimizedCollider_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OptimizedCollider_obj OBJ_;
		OptimizedCollider_obj();

	public:
		enum { _hx_ClassId = 0x57d06e54 };

		void __construct(::Dynamic a,::Dynamic b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.col.OptimizedCollider")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.col.OptimizedCollider"); }
		static ::hx::ObjectPtr< OptimizedCollider_obj > __new(::Dynamic a,::Dynamic b);
		static ::hx::ObjectPtr< OptimizedCollider_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic a,::Dynamic b);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OptimizedCollider_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("OptimizedCollider",1b,cf,19,e5); }

		::Dynamic a;
		::Dynamic b;
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

#endif /* INCLUDED_h3d_col_OptimizedCollider */ 
