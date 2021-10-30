#ifndef INCLUDED_h2d_col_Segment
#define INCLUDED_h2d_col_Segment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS2(h2d,col,Ray)
HX_DECLARE_CLASS2(h2d,col,Segment)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Segment_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Segment_obj OBJ_;
		Segment_obj();

	public:
		enum { _hx_ClassId = 0x265ddc6d };

		void __construct( ::h2d::col::Point p1, ::h2d::col::Point p2);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col.Segment")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col.Segment"); }
		static ::hx::ObjectPtr< Segment_obj > __new( ::h2d::col::Point p1, ::h2d::col::Point p2);
		static ::hx::ObjectPtr< Segment_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::col::Point p1, ::h2d::col::Point p2);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Segment_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Segment",93,f7,1f,74); }

		Float x;
		Float y;
		Float dx;
		Float dy;
		Float lenSq;
		Float invLenSq;
		void setPoints( ::h2d::col::Point p1, ::h2d::col::Point p2);
		::Dynamic setPoints_dyn();

		Float side( ::h2d::col::Point p);
		::Dynamic side_dyn();

		Float distanceSq( ::h2d::col::Point p);
		::Dynamic distanceSq_dyn();

		Float distance( ::h2d::col::Point p);
		::Dynamic distance_dyn();

		 ::h2d::col::Point project( ::h2d::col::Point p);
		::Dynamic project_dyn();

		 ::h2d::col::Point lineIntersection( ::h2d::col::Ray r, ::h2d::col::Point pt);
		::Dynamic lineIntersection_dyn();

};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_Segment */ 
