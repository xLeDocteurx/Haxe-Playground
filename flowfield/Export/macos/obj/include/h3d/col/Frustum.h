#ifndef INCLUDED_h3d_col_Frustum
#define INCLUDED_h3d_col_Frustum

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,Plane)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Sphere)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Frustum_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Frustum_obj OBJ_;
		Frustum_obj();

	public:
		enum { _hx_ClassId = 0x17397d3b };

		void __construct( ::h3d::Matrix mvp);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.col.Frustum")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.col.Frustum"); }
		static ::hx::ObjectPtr< Frustum_obj > __new( ::h3d::Matrix mvp);
		static ::hx::ObjectPtr< Frustum_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::Matrix mvp);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Frustum_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Frustum",42,6f,cb,9d); }

		 ::h3d::col::Plane pleft;
		 ::h3d::col::Plane pright;
		 ::h3d::col::Plane ptop;
		 ::h3d::col::Plane pbottom;
		 ::h3d::col::Plane pnear;
		 ::h3d::col::Plane pfar;
		bool checkNearFar;
		 ::h3d::col::Frustum clone();
		::Dynamic clone_dyn();

		void loadMatrix( ::h3d::Matrix mvp);
		::Dynamic loadMatrix_dyn();

		void transform( ::h3d::Matrix m);
		::Dynamic transform_dyn();

		void transform3x3( ::h3d::Matrix m);
		::Dynamic transform3x3_dyn();

		bool hasPoint( ::h3d::col::Point p);
		::Dynamic hasPoint_dyn();

		bool hasSphere( ::h3d::col::Sphere s);
		::Dynamic hasSphere_dyn();

		bool hasBounds( ::h3d::col::Bounds b);
		::Dynamic hasBounds_dyn();

};

} // end namespace h3d
} // end namespace col

#endif /* INCLUDED_h3d_col_Frustum */ 
