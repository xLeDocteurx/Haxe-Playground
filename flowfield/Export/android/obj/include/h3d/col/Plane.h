#ifndef INCLUDED_h3d_col_Plane
#define INCLUDED_h3d_col_Plane

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Plane)
HX_DECLARE_CLASS2(h3d,col,Point)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Plane_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Plane_obj OBJ_;
		Plane_obj();

	public:
		enum { _hx_ClassId = 0x5ae7dbf5 };

		void __construct(Float nx,Float ny,Float nz,Float d);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.col.Plane")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.col.Plane"); }
		static ::hx::ObjectPtr< Plane_obj > __new(Float nx,Float ny,Float nz,Float d);
		static ::hx::ObjectPtr< Plane_obj > __alloc(::hx::Ctx *_hx_ctx,Float nx,Float ny,Float nz,Float d);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Plane_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Plane",3c,6e,bb,57); }

		static  ::h3d::col::Plane fromPoints( ::h3d::col::Point p0, ::h3d::col::Point p1, ::h3d::col::Point p2);
		static ::Dynamic fromPoints_dyn();

		static  ::h3d::col::Plane fromNormalPoint( ::h3d::col::Point n, ::h3d::col::Point p);
		static ::Dynamic fromNormalPoint_dyn();

		static  ::h3d::col::Plane X(::hx::Null< Float >  v);
		static ::Dynamic X_dyn();

		static  ::h3d::col::Plane Y(::hx::Null< Float >  v);
		static ::Dynamic Y_dyn();

		static  ::h3d::col::Plane Z(::hx::Null< Float >  v);
		static ::Dynamic Z_dyn();

		static  ::h3d::col::Plane frustumLeft( ::h3d::Matrix mvp);
		static ::Dynamic frustumLeft_dyn();

		static  ::h3d::col::Plane frustumRight( ::h3d::Matrix mvp);
		static ::Dynamic frustumRight_dyn();

		static  ::h3d::col::Plane frustumBottom( ::h3d::Matrix mvp);
		static ::Dynamic frustumBottom_dyn();

		static  ::h3d::col::Plane frustumTop( ::h3d::Matrix mvp);
		static ::Dynamic frustumTop_dyn();

		static  ::h3d::col::Plane frustumNear( ::h3d::Matrix mvp);
		static ::Dynamic frustumNear_dyn();

		static  ::h3d::col::Plane frustumFar( ::h3d::Matrix mvp);
		static ::Dynamic frustumFar_dyn();

		Float nx;
		Float ny;
		Float nz;
		Float d;
		 ::h3d::col::Point getNormal();
		::Dynamic getNormal_dyn();

		Float getNormalDistance();
		::Dynamic getNormalDistance_dyn();

		void load( ::h3d::col::Plane p);
		::Dynamic load_dyn();

		void transform( ::h3d::Matrix m);
		::Dynamic transform_dyn();

		void transform3x3( ::h3d::Matrix m);
		::Dynamic transform3x3_dyn();

		void transformInverseTranspose( ::h3d::Matrix m);
		::Dynamic transformInverseTranspose_dyn();

		void normalize();
		::Dynamic normalize_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		Float distance( ::h3d::col::Point p);
		::Dynamic distance_dyn();

		bool side( ::h3d::col::Point p);
		::Dynamic side_dyn();

		 ::h3d::col::Point project( ::h3d::col::Point p);
		::Dynamic project_dyn();

		void projectTo( ::h3d::col::Point p, ::h3d::col::Point out);
		::Dynamic projectTo_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_Plane */ 
