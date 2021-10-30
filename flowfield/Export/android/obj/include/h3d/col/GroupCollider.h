#ifndef INCLUDED_h3d_col_GroupCollider
#define INCLUDED_h3d_col_GroupCollider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,GroupCollider)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES GroupCollider_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GroupCollider_obj OBJ_;
		GroupCollider_obj();

	public:
		enum { _hx_ClassId = 0x0a6e8f48 };

		void __construct(::Array< ::Dynamic> colliders);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.col.GroupCollider")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.col.GroupCollider"); }
		static ::hx::ObjectPtr< GroupCollider_obj > __new(::Array< ::Dynamic> colliders);
		static ::hx::ObjectPtr< GroupCollider_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> colliders);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GroupCollider_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("GroupCollider",73,75,40,4f); }

		::Array< ::Dynamic> colliders;
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

#endif /* INCLUDED_h3d_col_GroupCollider */ 
