#ifndef INCLUDED_h2d_col_Ray
#define INCLUDED_h2d_col_Ray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS2(h2d,col,Ray)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Ray_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Ray_obj OBJ_;
		Ray_obj();

	public:
		enum { _hx_ClassId = 0x6bce8dc0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col.Ray")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col.Ray"); }
		static ::hx::ObjectPtr< Ray_obj > __new();
		static ::hx::ObjectPtr< Ray_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Ray_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Ray",ca,8d,3e,00); }

		static  ::h2d::col::Ray fromPoints( ::h2d::col::Point p1, ::h2d::col::Point p2);
		static ::Dynamic fromPoints_dyn();

		static  ::h2d::col::Ray fromValues(Float x,Float y,Float dx,Float dy);
		static ::Dynamic fromValues_dyn();

		Float px;
		Float py;
		Float lx;
		Float ly;
		Float side( ::h2d::col::Point p);
		::Dynamic side_dyn();

		 ::h2d::col::Point getPoint(Float distance);
		::Dynamic getPoint_dyn();

		 ::h2d::col::Point getPos();
		::Dynamic getPos_dyn();

		 ::h2d::col::Point getDir();
		::Dynamic getDir_dyn();

		void normalize();
		::Dynamic normalize_dyn();

};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_Ray */ 
