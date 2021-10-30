#ifndef INCLUDED_h3d_col_PolygonBuffer
#define INCLUDED_h3d_col_PolygonBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,PolygonBuffer)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES PolygonBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PolygonBuffer_obj OBJ_;
		PolygonBuffer_obj();

	public:
		enum { _hx_ClassId = 0x67e8e9b3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.col.PolygonBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.col.PolygonBuffer"); }
		static ::hx::ObjectPtr< PolygonBuffer_obj > __new();
		static ::hx::ObjectPtr< PolygonBuffer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolygonBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("PolygonBuffer",fa,9a,92,1e); }

		::Array< Float > buffer;
		::Array< int > indexes;
		int startIndex;
		int triCount;
		 ::Dynamic source;
		void setData(::Array< Float > buffer,::Array< int > indexes,::hx::Null< int >  startIndex,::hx::Null< int >  triCount);
		::Dynamic setData_dyn();

		bool contains( ::h3d::col::Point p);
		::Dynamic contains_dyn();

		bool inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m);
		::Dynamic inFrustum_dyn();

		bool inSphere( ::h3d::col::Sphere s);
		::Dynamic inSphere_dyn();

		Float rayIntersection( ::h3d::col::Ray r,bool bestMatch);
		::Dynamic rayIntersection_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_PolygonBuffer */ 
