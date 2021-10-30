#ifndef INCLUDED_h2d_col__Polygon_Polygon_Impl_
#define INCLUDED_h2d_col__Polygon_Polygon_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h2d,col,Collider)
HX_DECLARE_CLASS2(h2d,col,IPoint)
HX_DECLARE_CLASS2(h2d,col,Matrix)
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS2(h2d,col,PolygonCollider)
HX_DECLARE_CLASS2(h2d,col,Ray)
HX_DECLARE_CLASS2(h2d,col,Segment)
HX_DECLARE_CLASS3(h2d,col,_Polygon,Polygon_Impl_)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_h2d_col_Point)

namespace h2d{
namespace col{
namespace _Polygon{


class HXCPP_CLASS_ATTRIBUTES Polygon_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Polygon_Impl__obj OBJ_;
		Polygon_Impl__obj();

	public:
		enum { _hx_ClassId = 0x78047f19 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col._Polygon.Polygon_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col._Polygon.Polygon_Impl_"); }

		inline static ::hx::ObjectPtr< Polygon_Impl__obj > __new() {
			::hx::ObjectPtr< Polygon_Impl__obj > __this = new Polygon_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Polygon_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Polygon_Impl__obj *__this = (Polygon_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Polygon_Impl__obj), false, "h2d.col._Polygon.Polygon_Impl_"));
			*(void **)__this = Polygon_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Polygon_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Polygon_Impl_",7a,a6,f2,65); }

		static int get_length(::Array< ::Dynamic> this1);
		static ::Dynamic get_length_dyn();

		static ::Array< ::Dynamic> get_points(::Array< ::Dynamic> this1);
		static ::Dynamic get_points_dyn();

		static ::Array< ::Dynamic> _new(::Array< ::Dynamic> points);
		static ::Dynamic _new_dyn();

		static  ::hxd::impl::ArrayIterator_h2d_col_Point iterator(::Array< ::Dynamic> this1);
		static ::Dynamic iterator_dyn();

		static ::Array< int > fastTriangulate(::Array< ::Dynamic> this1);
		static ::Dynamic fastTriangulate_dyn();

		static ::Array< ::Dynamic> toSegments(::Array< ::Dynamic> this1);
		static ::Dynamic toSegments_dyn();

		static ::Array< ::Dynamic> toIPolygon(::Array< ::Dynamic> this1,::hx::Null< Float >  scale);
		static ::Dynamic toIPolygon_dyn();

		static  ::h2d::col::Bounds getBounds(::Array< ::Dynamic> this1, ::h2d::col::Bounds b);
		static ::Dynamic getBounds_dyn();

		static  ::h2d::col::PolygonCollider getCollider(::Array< ::Dynamic> this1,::hx::Null< bool >  isConvex);
		static ::Dynamic getCollider_dyn();

		static int xSort(::Array< ::Dynamic> this1, ::h2d::col::Point a, ::h2d::col::Point b);
		static ::Dynamic xSort_dyn();

		static ::Array< ::Dynamic> convexHull(::Array< ::Dynamic> this1);
		static ::Dynamic convexHull_dyn();

		static bool isClockwise(::Array< ::Dynamic> this1);
		static ::Dynamic isClockwise_dyn();

		static Float area(::Array< ::Dynamic> this1);
		static ::Dynamic area_dyn();

		static  ::h2d::col::Point centroid(::Array< ::Dynamic> this1);
		static ::Dynamic centroid_dyn();

		static Float side(::Array< ::Dynamic> this1, ::h2d::col::Point p1, ::h2d::col::Point p2, ::h2d::col::Point t);
		static ::Dynamic side_dyn();

		static bool isConvex(::Array< ::Dynamic> this1);
		static ::Dynamic isConvex_dyn();

		static void reverse(::Array< ::Dynamic> this1);
		static ::Dynamic reverse_dyn();

		static void transform(::Array< ::Dynamic> this1, ::h2d::col::Matrix mat);
		static ::Dynamic transform_dyn();

		static bool contains(::Array< ::Dynamic> this1, ::h2d::col::Point p,::hx::Null< bool >  isConvex);
		static ::Dynamic contains_dyn();

		static  ::h2d::col::Point findClosestPoint(::Array< ::Dynamic> this1, ::h2d::col::Point pt,Float maxDist);
		static ::Dynamic findClosestPoint_dyn();

		static  ::h2d::col::Point projectPoint(::Array< ::Dynamic> this1, ::h2d::col::Point pt);
		static ::Dynamic projectPoint_dyn();

		static Float distance(::Array< ::Dynamic> this1, ::h2d::col::Point pt, ::Dynamic outside);
		static ::Dynamic distance_dyn();

		static Float distanceSq(::Array< ::Dynamic> this1, ::h2d::col::Point pt, ::Dynamic outside);
		static ::Dynamic distanceSq_dyn();

		static Float rayIntersection(::Array< ::Dynamic> this1, ::h2d::col::Ray r,bool bestMatch);
		static ::Dynamic rayIntersection_dyn();

		static int orientation(::Array< ::Dynamic> this1, ::h2d::col::Point p, ::h2d::col::Point q, ::h2d::col::Point r);
		static ::Dynamic orientation_dyn();

		static bool onSegment(::Array< ::Dynamic> this1, ::h2d::col::Point p, ::h2d::col::Point q, ::h2d::col::Point r);
		static ::Dynamic onSegment_dyn();

		static bool intersect(::Array< ::Dynamic> this1, ::h2d::col::Point p1, ::h2d::col::Point q1, ::h2d::col::Point p2, ::h2d::col::Point q2);
		static ::Dynamic intersect_dyn();

		static bool selfIntersecting(::Array< ::Dynamic> this1);
		static ::Dynamic selfIntersecting_dyn();

		static ::Array< ::Dynamic> optimize(::Array< ::Dynamic> this1,Float epsilon);
		static ::Dynamic optimize_dyn();

		static void optimizeRec(::Array< ::Dynamic> points,int start,int end,::Array< ::Dynamic> out,Float epsilon);
		static ::Dynamic optimizeRec_dyn();

		static ::Array< ::Dynamic> makeCircle(Float x,Float y,Float radius,::hx::Null< int >  npoints);
		static ::Dynamic makeCircle_dyn();

};

} // end namespace h2d
} // end namespace col
} // end namespace _Polygon

#endif /* INCLUDED_h2d_col__Polygon_Polygon_Impl_ */ 
