#ifndef INCLUDED_h3d_col_Ray
#define INCLUDED_h3d_col_Ray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Plane)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Ray_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Ray_obj OBJ_;
		Ray_obj();

	public:
		enum { _hx_ClassId = 0x7c5e0b7b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.col.Ray")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.col.Ray"); }
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

		static  ::h3d::col::Ray fromPoints( ::h3d::col::Point p1, ::h3d::col::Point p2);
		static ::Dynamic fromPoints_dyn();

		static  ::h3d::col::Ray fromValues(Float x,Float y,Float z,Float dx,Float dy,Float dz);
		static ::Dynamic fromValues_dyn();

		Float px;
		Float py;
		Float pz;
		Float lx;
		Float ly;
		Float lz;
		 ::h3d::col::Ray clone();
		::Dynamic clone_dyn();

		void load( ::h3d::col::Ray r);
		::Dynamic load_dyn();

		void normalize();
		::Dynamic normalize_dyn();

		void transform( ::h3d::Matrix m);
		::Dynamic transform_dyn();

		 ::h3d::col::Point getPos();
		::Dynamic getPos_dyn();

		 ::h3d::col::Point getDir();
		::Dynamic getDir_dyn();

		 ::h3d::col::Point getPoint(Float distance);
		::Dynamic getPoint_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::h3d::col::Point intersect( ::h3d::col::Plane p);
		::Dynamic intersect_dyn();

		bool collideFrustum( ::h3d::Matrix mvp);
		::Dynamic collideFrustum_dyn();

		bool collide( ::h3d::col::Bounds b);
		::Dynamic collide_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_Ray */ 
