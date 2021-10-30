#ifndef INCLUDED_h3d_col_Point
#define INCLUDED_h3d_col_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,Point)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Point_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();

	public:
		enum { _hx_ClassId = 0x5ce991e9 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.col.Point")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.col.Point"); }
		static ::hx::ObjectPtr< Point_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		static ::hx::ObjectPtr< Point_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Point",30,24,bd,59); }

		Float x;
		Float y;
		Float z;
		void scale(Float v);
		::Dynamic scale_dyn();

		void set(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z);
		::Dynamic set_dyn();

		 ::h3d::col::Point sub( ::h3d::col::Point p);
		::Dynamic sub_dyn();

		 ::h3d::col::Point add( ::h3d::col::Point p);
		::Dynamic add_dyn();

		 ::h3d::col::Point multiply(Float v);
		::Dynamic multiply_dyn();

		 ::h3d::col::Point cross( ::h3d::col::Point p);
		::Dynamic cross_dyn();

		bool equals( ::h3d::col::Point other);
		::Dynamic equals_dyn();

		Float lengthSq();
		::Dynamic lengthSq_dyn();

		Float length();
		::Dynamic length_dyn();

		Float dot( ::h3d::col::Point p);
		::Dynamic dot_dyn();

		Float distanceSq( ::h3d::col::Point p);
		::Dynamic distanceSq_dyn();

		Float distance( ::h3d::col::Point p);
		::Dynamic distance_dyn();

		void normalize();
		::Dynamic normalize_dyn();

		 ::h3d::col::Point normalized();
		::Dynamic normalized_dyn();

		void lerp( ::h3d::col::Point p1, ::h3d::col::Point p2,Float k);
		::Dynamic lerp_dyn();

		void transform( ::h3d::Matrix m);
		::Dynamic transform_dyn();

		 ::h3d::col::Point transformed( ::h3d::Matrix m);
		::Dynamic transformed_dyn();

		void transform3x3( ::h3d::Matrix m);
		::Dynamic transform3x3_dyn();

		 ::h3d::col::Point transformed3x3( ::h3d::Matrix m);
		::Dynamic transformed3x3_dyn();

		 ::h3d::col::Point clone();
		::Dynamic clone_dyn();

		void load( ::h3d::col::Point p);
		::Dynamic load_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		bool inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m);
		::Dynamic inFrustum_dyn();

		 ::h3d::Vector toVector();
		::Dynamic toVector_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_Point */ 
