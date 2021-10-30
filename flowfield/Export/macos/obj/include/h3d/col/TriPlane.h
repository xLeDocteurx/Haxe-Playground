#ifndef INCLUDED_h3d_col_TriPlane
#define INCLUDED_h3d_col_TriPlane

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS2(h3d,col,TriPlane)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES TriPlane_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TriPlane_obj OBJ_;
		TriPlane_obj();

	public:
		enum { _hx_ClassId = 0x632ed138 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.col.TriPlane")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.col.TriPlane"); }
		static ::hx::ObjectPtr< TriPlane_obj > __new();
		static ::hx::ObjectPtr< TriPlane_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TriPlane_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TriPlane",51,a5,50,9c); }

		 ::h3d::col::TriPlane next;
		Float p0x;
		Float p0y;
		Float p0z;
		Float d1x;
		Float d1y;
		Float d1z;
		Float d2x;
		Float d2y;
		Float d2z;
		Float dot00;
		Float dot01;
		Float dot11;
		Float invDenom;
		Float nx;
		Float ny;
		Float nz;
		Float d;
		void init( ::h3d::col::Point p0, ::h3d::col::Point p1, ::h3d::col::Point p2);
		::Dynamic init_dyn();

		 ::h3d::col::TriPlane clone();
		::Dynamic clone_dyn();

		void load( ::h3d::col::TriPlane tp);
		::Dynamic load_dyn();

		void transform( ::h3d::Matrix m);
		::Dynamic transform_dyn();

		bool contains( ::h3d::col::Point p);
		::Dynamic contains_dyn();

		bool side( ::h3d::col::Point p);
		::Dynamic side_dyn();

		bool inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m);
		::Dynamic inFrustum_dyn();

		bool inSphere( ::h3d::col::Sphere s);
		::Dynamic inSphere_dyn();

		Float rayIntersection( ::h3d::col::Ray r,bool bestMatch);
		::Dynamic rayIntersection_dyn();

		bool isPointInTriangle(Float x,Float y,Float z);
		::Dynamic isPointInTriangle_dyn();

		::Array< ::Dynamic> getPoints();
		::Dynamic getPoints_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_TriPlane */ 
