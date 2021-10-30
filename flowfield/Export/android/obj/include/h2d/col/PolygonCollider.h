#ifndef INCLUDED_h2d_col_PolygonCollider
#define INCLUDED_h2d_col_PolygonCollider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_col_Collider
#include <h2d/col/Collider.h>
#endif
HX_DECLARE_CLASS2(h2d,col,Collider)
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS2(h2d,col,PolygonCollider)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES PolygonCollider_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PolygonCollider_obj OBJ_;
		PolygonCollider_obj();

	public:
		enum { _hx_ClassId = 0x53d7fe88 };

		void __construct(::Array< ::Dynamic> polygons,::hx::Null< bool >  __o_isConvex);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.col.PolygonCollider")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.col.PolygonCollider"); }
		static ::hx::ObjectPtr< PolygonCollider_obj > __new(::Array< ::Dynamic> polygons,::hx::Null< bool >  __o_isConvex);
		static ::hx::ObjectPtr< PolygonCollider_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> polygons,::hx::Null< bool >  __o_isConvex);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolygonCollider_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("PolygonCollider",ae,af,82,f9); }

		::Array< ::Dynamic> polygons;
		bool isConvex;
		bool contains( ::h2d::col::Point p);
		::Dynamic contains_dyn();

};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_PolygonCollider */ 
