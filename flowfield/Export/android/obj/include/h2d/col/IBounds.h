#ifndef INCLUDED_h2d_col_IBounds
#define INCLUDED_h2d_col_IBounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h2d,col,IBounds)
HX_DECLARE_CLASS2(h2d,col,IPoint)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES IBounds_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IBounds_obj OBJ_;
		IBounds_obj();

	public:
		enum { _hx_ClassId = 0x288ebc78 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col.IBounds")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col.IBounds"); }
		static ::hx::ObjectPtr< IBounds_obj > __new();
		static ::hx::ObjectPtr< IBounds_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IBounds_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IBounds",9e,d7,50,76); }

		static  ::h2d::col::IBounds fromValues(int x0,int y0,int width,int height);
		static ::Dynamic fromValues_dyn();

		static  ::h2d::col::IBounds fromPoints( ::h2d::col::IPoint min, ::h2d::col::IPoint max);
		static ::Dynamic fromPoints_dyn();

		int xMin;
		int yMin;
		int xMax;
		int yMax;
		 ::h2d::col::Bounds toBounds(::hx::Null< Float >  scale);
		::Dynamic toBounds_dyn();

		bool intersects( ::h2d::col::IBounds b);
		::Dynamic intersects_dyn();

		bool contains( ::h2d::col::IPoint p);
		::Dynamic contains_dyn();

		void addBounds( ::h2d::col::IBounds b);
		::Dynamic addBounds_dyn();

		void addPoint( ::h2d::col::IPoint p);
		::Dynamic addPoint_dyn();

		void addPos(int x,int y);
		::Dynamic addPos_dyn();

		void set(int x,int y,int width,int height);
		::Dynamic set_dyn();

		void setMin( ::h2d::col::IPoint p);
		::Dynamic setMin_dyn();

		void setMax( ::h2d::col::IPoint p);
		::Dynamic setMax_dyn();

		void doIntersect( ::h2d::col::IBounds b);
		::Dynamic doIntersect_dyn();

		void doUnion( ::h2d::col::IBounds b);
		::Dynamic doUnion_dyn();

		 ::h2d::col::IBounds intersection( ::h2d::col::IBounds b);
		::Dynamic intersection_dyn();

		 ::h2d::col::IBounds _hx_union( ::h2d::col::IBounds b);
		::Dynamic _hx_union_dyn();

		void load( ::h2d::col::IBounds b);
		::Dynamic load_dyn();

		void offset(int dx,int dy);
		::Dynamic offset_dyn();

		 ::h2d::col::IPoint getMin();
		::Dynamic getMin_dyn();

		 ::h2d::col::IPoint getCenter();
		::Dynamic getCenter_dyn();

		 ::h2d::col::IPoint getSize();
		::Dynamic getSize_dyn();

		 ::h2d::col::IPoint getMax();
		::Dynamic getMax_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		void empty();
		::Dynamic empty_dyn();

		void all();
		::Dynamic all_dyn();

		 ::h2d::col::IBounds clone();
		::Dynamic clone_dyn();

		int get_x();
		::Dynamic get_x_dyn();

		int get_y();
		::Dynamic get_y_dyn();

		int set_x(int x);
		::Dynamic set_x_dyn();

		int set_y(int y);
		::Dynamic set_y_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		int set_width(int w);
		::Dynamic set_width_dyn();

		int set_height(int h);
		::Dynamic set_height_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_IBounds */ 
