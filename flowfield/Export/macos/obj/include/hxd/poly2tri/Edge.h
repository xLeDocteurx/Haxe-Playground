#ifndef INCLUDED_hxd_poly2tri_Edge
#define INCLUDED_hxd_poly2tri_Edge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,poly2tri,Edge)
HX_DECLARE_CLASS2(hxd,poly2tri,Point)

namespace hxd{
namespace poly2tri{


class HXCPP_CLASS_ATTRIBUTES Edge_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Edge_obj OBJ_;
		Edge_obj();

	public:
		enum { _hx_ClassId = 0x564331d2 };

		void __construct( ::hxd::poly2tri::Point p1, ::hxd::poly2tri::Point p2);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.poly2tri.Edge")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.poly2tri.Edge"); }
		static ::hx::ObjectPtr< Edge_obj > __new( ::hxd::poly2tri::Point p1, ::hxd::poly2tri::Point p2);
		static ::hx::ObjectPtr< Edge_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::poly2tri::Point p1, ::hxd::poly2tri::Point p2);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Edge_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Edge",5d,f4,e7,2d); }

		 ::hxd::poly2tri::Point p;
		 ::hxd::poly2tri::Point q;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hxd
} // end namespace poly2tri

#endif /* INCLUDED_hxd_poly2tri_Edge */ 
