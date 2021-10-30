#ifndef INCLUDED_h3d_col_Sphere
#define INCLUDED_h3d_col_Sphere

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
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Sphere_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Sphere_obj OBJ_;
		Sphere_obj();

	public:
		enum { _hx_ClassId = 0x7e1e0274 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_r);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.col.Sphere")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.col.Sphere"); }
		static ::hx::ObjectPtr< Sphere_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_r);
		static ::hx::ObjectPtr< Sphere_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_r);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sphere_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Sphere",2d,23,8b,f1); }

		Float x;
		Float y;
		Float z;
		Float r;
		void load(::hx::Null< Float >  sx,::hx::Null< Float >  sy,::hx::Null< Float >  sz,::hx::Null< Float >  sr);
		::Dynamic load_dyn();

		 ::h3d::col::Point getCenter();
		::Dynamic getCenter_dyn();

		Float distance( ::h3d::col::Point p);
		::Dynamic distance_dyn();

		Float distanceSq( ::h3d::col::Point p);
		::Dynamic distanceSq_dyn();

		bool contains( ::h3d::col::Point p);
		::Dynamic contains_dyn();

		Float rayIntersection( ::h3d::col::Ray r,bool bestMatch);
		::Dynamic rayIntersection_dyn();

		bool inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m);
		::Dynamic inFrustum_dyn();

		bool inFrustumMatrix( ::h3d::col::Frustum f, ::h3d::Matrix m);
		::Dynamic inFrustumMatrix_dyn();

		bool inSphere( ::h3d::col::Sphere s);
		::Dynamic inSphere_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_Sphere */ 
