#ifndef INCLUDED_h3d_col_Bounds
#define INCLUDED_h3d_col_Bounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,Plane)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Bounds_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Bounds_obj OBJ_;
		Bounds_obj();

	public:
		enum { _hx_ClassId = 0x5e658ebc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.col.Bounds")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.col.Bounds"); }
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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Bounds",95,fa,b1,9a); }

		static  ::h3d::col::Bounds fromPoints( ::h3d::col::Point min, ::h3d::col::Point max);
		static ::Dynamic fromPoints_dyn();

		static  ::h3d::col::Bounds fromValues(Float x,Float y,Float z,Float dx,Float dy,Float dz);
		static ::Dynamic fromValues_dyn();

		Float xMin;
		Float xMax;
		Float yMin;
		Float yMax;
		Float zMin;
		Float zMax;
		bool inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m);
		::Dynamic inFrustum_dyn();

		bool inSphere( ::h3d::col::Sphere s);
		::Dynamic inSphere_dyn();

		Float testPlane( ::h3d::col::Plane p);
		::Dynamic testPlane_dyn();

		Float rayIntersection( ::h3d::col::Ray r,bool bestMatch);
		::Dynamic rayIntersection_dyn();

		int inFrustumDetails( ::h3d::Matrix mvp,::hx::Null< bool >  checkZ);
		::Dynamic inFrustumDetails_dyn();

		void transform3x3( ::h3d::Matrix m);
		::Dynamic transform3x3_dyn();

		void transform( ::h3d::Matrix m);
		::Dynamic transform_dyn();

		bool collide( ::h3d::col::Bounds b);
		::Dynamic collide_dyn();

		bool contains( ::h3d::col::Point p);
		::Dynamic contains_dyn();

		bool containsBounds( ::h3d::col::Bounds b);
		::Dynamic containsBounds_dyn();

		bool containsSphere( ::h3d::col::Sphere s);
		::Dynamic containsSphere_dyn();

		void add( ::h3d::col::Bounds b);
		::Dynamic add_dyn();

		void addPoint( ::h3d::col::Point p);
		::Dynamic addPoint_dyn();

		void addPos(Float x,Float y,Float z);
		::Dynamic addPos_dyn();

		void addSphere( ::h3d::col::Sphere s);
		::Dynamic addSphere_dyn();

		void addSpherePos(Float x,Float y,Float z,Float r);
		::Dynamic addSpherePos_dyn();

		void intersection( ::h3d::col::Bounds a, ::h3d::col::Bounds b);
		::Dynamic intersection_dyn();

		void offset(Float dx,Float dy,Float dz);
		::Dynamic offset_dyn();

		void setMin( ::h3d::col::Point p);
		::Dynamic setMin_dyn();

		void setMax( ::h3d::col::Point p);
		::Dynamic setMax_dyn();

		void load( ::h3d::col::Bounds b);
		::Dynamic load_dyn();

		void scalePivot(Float v);
		::Dynamic scalePivot_dyn();

		void scaleCenter(Float v);
		::Dynamic scaleCenter_dyn();

		 ::h3d::col::Point getMin();
		::Dynamic getMin_dyn();

		 ::h3d::col::Point getCenter();
		::Dynamic getCenter_dyn();

		 ::h3d::col::Point getSize();
		::Dynamic getSize_dyn();

		 ::h3d::col::Point getMax();
		::Dynamic getMax_dyn();

		Float getVolume();
		::Dynamic getVolume_dyn();

		Float get_xSize();
		::Dynamic get_xSize_dyn();

		Float get_ySize();
		::Dynamic get_ySize_dyn();

		Float get_zSize();
		::Dynamic get_zSize_dyn();

		Float set_xSize(Float v);
		::Dynamic set_xSize_dyn();

		Float set_ySize(Float v);
		::Dynamic set_ySize_dyn();

		Float set_zSize(Float v);
		::Dynamic set_zSize_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		void empty();
		::Dynamic empty_dyn();

		void all();
		::Dynamic all_dyn();

		 ::h3d::col::Bounds clone();
		::Dynamic clone_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::h3d::col::Sphere toSphere();
		::Dynamic toSphere_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_Bounds */ 
