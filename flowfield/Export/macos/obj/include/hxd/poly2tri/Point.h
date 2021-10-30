#ifndef INCLUDED_hxd_poly2tri_Point
#define INCLUDED_hxd_poly2tri_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,poly2tri,Edge)
HX_DECLARE_CLASS2(hxd,poly2tri,Point)

namespace hxd{
namespace poly2tri{


class HXCPP_CLASS_ATTRIBUTES Point_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();

	public:
		enum { _hx_ClassId = 0x6d6141b7 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.poly2tri.Point")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.poly2tri.Point"); }
		static ::hx::ObjectPtr< Point_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< Point_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Point",30,24,bd,59); }

		static void __boot();
		static void sortPoints(::Array< ::Dynamic> points);
		static ::Dynamic sortPoints_dyn();

		static int cmpPoints( ::hxd::poly2tri::Point l, ::hxd::poly2tri::Point r);
		static ::Dynamic cmpPoints_dyn();

		static int C_ID;
		int id;
		Float x;
		Float y;
		::Array< ::Dynamic> edge_list;
		::Array< ::Dynamic> get_edge_list();
		::Dynamic get_edge_list_dyn();

		bool equals( ::hxd::poly2tri::Point that);
		::Dynamic equals_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hxd
} // end namespace poly2tri

#endif /* INCLUDED_hxd_poly2tri_Point */ 
