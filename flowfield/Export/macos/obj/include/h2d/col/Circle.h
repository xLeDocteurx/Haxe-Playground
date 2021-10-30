#ifndef INCLUDED_h2d_col_Circle
#define INCLUDED_h2d_col_Circle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_col_Collider
#include <h2d/col/Collider.h>
#endif
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h2d,col,Circle)
HX_DECLARE_CLASS2(h2d,col,Collider)
HX_DECLARE_CLASS2(h2d,col,Point)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Circle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Circle_obj OBJ_;
		Circle_obj();

	public:
		enum { _hx_ClassId = 0x7b550f1a };

		void __construct(Float x,Float y,Float ray);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col.Circle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col.Circle"); }
		static ::hx::ObjectPtr< Circle_obj > __new(Float x,Float y,Float ray);
		static ::hx::ObjectPtr< Circle_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float ray);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Circle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Circle",30,e6,a1,8a); }

		Float x;
		Float y;
		Float ray;
		Float distanceSq( ::h2d::col::Point p);
		::Dynamic distanceSq_dyn();

		Float side( ::h2d::col::Point p);
		::Dynamic side_dyn();

		bool collideCircle( ::h2d::col::Circle c);
		::Dynamic collideCircle_dyn();

		bool collideBounds( ::h2d::col::Bounds b);
		::Dynamic collideBounds_dyn();

		::Array< ::Dynamic> lineIntersect( ::h2d::col::Point p1, ::h2d::col::Point p2);
		::Dynamic lineIntersect_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		bool contains( ::h2d::col::Point p);
		::Dynamic contains_dyn();

};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_Circle */ 
