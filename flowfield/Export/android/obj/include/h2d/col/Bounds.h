#ifndef INCLUDED_h2d_col_Bounds
#define INCLUDED_h2d_col_Bounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h2d,col,Circle)
HX_DECLARE_CLASS2(h2d,col,Collider)
HX_DECLARE_CLASS2(h2d,col,IBounds)
HX_DECLARE_CLASS2(h2d,col,Point)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Bounds_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Bounds_obj OBJ_;
		Bounds_obj();

	public:
		enum { _hx_ClassId = 0x7d9cf647 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col.Bounds")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col.Bounds"); }
		static ::hx::ObjectPtr< Bounds_obj > __new();
		static ::hx::ObjectPtr< Bounds_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Bounds_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Bounds",95,fa,b1,9a); }

		static  ::h2d::col::Bounds fromValues(Float x0,Float y0,Float width,Float height);
		static ::Dynamic fromValues_dyn();

		static  ::h2d::col::Bounds fromPoints( ::h2d::col::Point min, ::h2d::col::Point max);
		static ::Dynamic fromPoints_dyn();

		Float xMin;
		Float yMin;
		Float xMax;
		Float yMax;
		 ::h2d::col::IBounds toIBounds(::hx::Null< Float >  scale);
		::Dynamic toIBounds_dyn();

		bool intersects( ::h2d::col::Bounds b);
		::Dynamic intersects_dyn();

		bool contains( ::h2d::col::Point p);
		::Dynamic contains_dyn();

		Float distanceSq( ::h2d::col::Point p);
		::Dynamic distanceSq_dyn();

		Float distance( ::h2d::col::Point p);
		::Dynamic distance_dyn();

		void addBounds( ::h2d::col::Bounds b);
		::Dynamic addBounds_dyn();

		void addPoint( ::h2d::col::Point p);
		::Dynamic addPoint_dyn();

		void addPos(Float x,Float y);
		::Dynamic addPos_dyn();

		void set(Float x,Float y,Float width,Float height);
		::Dynamic set_dyn();

		void setMin( ::h2d::col::Point p);
		::Dynamic setMin_dyn();

		void setMax( ::h2d::col::Point p);
		::Dynamic setMax_dyn();

		void doIntersect( ::h2d::col::Bounds b);
		::Dynamic doIntersect_dyn();

		void doUnion( ::h2d::col::Bounds b);
		::Dynamic doUnion_dyn();

		 ::h2d::col::Bounds intersection( ::h2d::col::Bounds b);
		::Dynamic intersection_dyn();

		 ::h2d::col::Bounds _hx_union( ::h2d::col::Bounds b);
		::Dynamic _hx_union_dyn();

		void load( ::h2d::col::Bounds b);
		::Dynamic load_dyn();

		void scalePivot(Float v);
		::Dynamic scalePivot_dyn();

		void scaleCenter(Float v);
		::Dynamic scaleCenter_dyn();

		void rotate(Float angle);
		::Dynamic rotate_dyn();

		void offset(Float dx,Float dy);
		::Dynamic offset_dyn();

		 ::h2d::col::Point getMin();
		::Dynamic getMin_dyn();

		 ::h2d::col::Point getCenter();
		::Dynamic getCenter_dyn();

		 ::h2d::col::Point getSize();
		::Dynamic getSize_dyn();

		 ::h2d::col::Point getMax();
		::Dynamic getMax_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		void empty();
		::Dynamic empty_dyn();

		void all();
		::Dynamic all_dyn();

		 ::h2d::col::Bounds clone();
		::Dynamic clone_dyn();

		Float get_x();
		::Dynamic get_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		Float set_x(Float x);
		::Dynamic set_x_dyn();

		Float set_y(Float y);
		::Dynamic set_y_dyn();

		Float get_width();
		::Dynamic get_width_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		Float set_width(Float w);
		::Dynamic set_width_dyn();

		Float set_height(Float h);
		::Dynamic set_height_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::h2d::col::Circle toCircle();
		::Dynamic toCircle_dyn();

};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_Bounds */ 
