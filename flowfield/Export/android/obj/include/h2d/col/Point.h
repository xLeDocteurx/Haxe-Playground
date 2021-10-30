#ifndef INCLUDED_h2d_col_Point
#define INCLUDED_h2d_col_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(h2d,col,Matrix)
HX_DECLARE_CLASS2(h2d,col,Point)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Point_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();

	public:
		enum { _hx_ClassId = 0x27582bde };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col.Point")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col.Point"); }
		static ::hx::ObjectPtr< Point_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static ::hx::ObjectPtr< Point_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
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
		Float distanceSq( ::h2d::col::Point p);
		::Dynamic distanceSq_dyn();

		Float distance( ::h2d::col::Point p);
		::Dynamic distance_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::h2d::col::Point sub( ::h2d::col::Point p);
		::Dynamic sub_dyn();

		 ::h2d::col::Point add( ::h2d::col::Point p);
		::Dynamic add_dyn();

		 ::h2d::col::Point multiply(Float v);
		::Dynamic multiply_dyn();

		bool equals( ::h2d::col::Point other);
		::Dynamic equals_dyn();

		Float dot( ::h2d::col::Point p);
		::Dynamic dot_dyn();

		Float lengthSq();
		::Dynamic lengthSq_dyn();

		Float length();
		::Dynamic length_dyn();

		void normalize();
		::Dynamic normalize_dyn();

		 ::h2d::col::Point normalized();
		::Dynamic normalized_dyn();

		void set(::hx::Null< Float >  x,::hx::Null< Float >  y);
		::Dynamic set_dyn();

		void load( ::h2d::col::Point p);
		::Dynamic load_dyn();

		void scale(Float f);
		::Dynamic scale_dyn();

		 ::h2d::col::Point clone();
		::Dynamic clone_dyn();

		Float cross( ::h2d::col::Point p);
		::Dynamic cross_dyn();

		void lerp( ::h2d::col::Point a, ::h2d::col::Point b,Float k);
		::Dynamic lerp_dyn();

		void transform( ::h2d::col::Matrix m);
		::Dynamic transform_dyn();

		 ::h2d::col::Point transformed( ::h2d::col::Matrix m);
		::Dynamic transformed_dyn();

		void transform2x2( ::h2d::col::Matrix m);
		::Dynamic transform2x2_dyn();

		 ::h2d::col::Point transformed2x2( ::h2d::col::Matrix m);
		::Dynamic transformed2x2_dyn();

		 ::h2d::col::IPoint toIPoint(::hx::Null< Float >  scale);
		::Dynamic toIPoint_dyn();

		void rotate(Float angle);
		::Dynamic rotate_dyn();

};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_Point */ 
