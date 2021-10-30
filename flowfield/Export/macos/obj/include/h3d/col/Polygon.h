#ifndef INCLUDED_h3d_col_Polygon
#define INCLUDED_h3d_col_Polygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Polygon)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS2(h3d,col,TriPlane)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Polygon_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();

	public:
		enum { _hx_ClassId = 0x59503853 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.col.Polygon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.col.Polygon"); }
		static ::hx::ObjectPtr< Polygon_obj > __new();
		static ::hx::ObjectPtr< Polygon_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Polygon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Polygon",5a,2a,e2,df); }

		static  ::h3d::col::Polygon fromPolygon2D(::Array< ::Dynamic> p,::hx::Null< Float >  z);
		static ::Dynamic fromPolygon2D_dyn();

		 ::h3d::col::TriPlane triPlanes;
		void addBuffers(::Array< Float > vertexes,::Array< int > indexes,::hx::Null< int >  stride);
		::Dynamic addBuffers_dyn();

		bool isConvex();
		::Dynamic isConvex_dyn();

		 ::h3d::col::Polygon clone();
		::Dynamic clone_dyn();

		void transform( ::h3d::Matrix m);
		::Dynamic transform_dyn();

		::Array< ::Dynamic> getPoints();
		::Dynamic getPoints_dyn();

		 ::h3d::col::Bounds getBounds( ::h3d::col::Bounds bnds);
		::Dynamic getBounds_dyn();

		bool contains( ::h3d::col::Point p);
		::Dynamic contains_dyn();

		Float rayIntersection( ::h3d::col::Ray r,bool bestMatch);
		::Dynamic rayIntersection_dyn();

		bool inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m);
		::Dynamic inFrustum_dyn();

		bool inSphere( ::h3d::col::Sphere s);
		::Dynamic inSphere_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_Polygon */ 
