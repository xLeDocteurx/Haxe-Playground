#ifndef INCLUDED_h3d_col_SkinCollider
#define INCLUDED_h3d_col_SkinCollider

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
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,PolygonBuffer)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,SkinCollider)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS2(h3d,scene,Mesh)
HX_DECLARE_CLASS2(h3d,scene,MultiMaterial)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,Skin)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES SkinCollider_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SkinCollider_obj OBJ_;
		SkinCollider_obj();

	public:
		enum { _hx_ClassId = 0x1e34ee58 };

		void __construct( ::h3d::scene::Skin obj, ::h3d::col::PolygonBuffer col);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.col.SkinCollider")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.col.SkinCollider"); }
		static ::hx::ObjectPtr< SkinCollider_obj > __new( ::h3d::scene::Skin obj, ::h3d::col::PolygonBuffer col);
		static ::hx::ObjectPtr< SkinCollider_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Skin obj, ::h3d::col::PolygonBuffer col);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SkinCollider_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SkinCollider",f1,42,d5,53); }

		 ::h3d::scene::Skin obj;
		 ::h3d::col::PolygonBuffer col;
		 ::h3d::col::Bounds currentBounds;
		 ::h3d::col::PolygonBuffer transform;
		int lastFrame;
		int lastBoundsFrame;
		bool contains( ::h3d::col::Point p);
		::Dynamic contains_dyn();

		bool inFrustum( ::h3d::col::Frustum p, ::h3d::Matrix m);
		::Dynamic inFrustum_dyn();

		bool inSphere( ::h3d::col::Sphere s);
		::Dynamic inSphere_dyn();

		Float rayIntersection( ::h3d::col::Ray r,bool bestMatch);
		::Dynamic rayIntersection_dyn();

		void checkBounds();
		::Dynamic checkBounds_dyn();

		void applyTransform();
		::Dynamic applyTransform_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_SkinCollider */ 
