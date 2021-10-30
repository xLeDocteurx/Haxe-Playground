#ifndef INCLUDED_hxd_fmt_fbx_Geometry
#define INCLUDED_hxd_fmt_fbx_Geometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS3(hxd,fmt,fbx,BaseLibrary)
HX_DECLARE_CLASS3(hxd,fmt,fbx,Geometry)

namespace hxd{
namespace fmt{
namespace fbx{


class HXCPP_CLASS_ATTRIBUTES Geometry_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Geometry_obj OBJ_;
		Geometry_obj();

	public:
		enum { _hx_ClassId = 0x670d526d };

		void __construct( ::hxd::fmt::fbx::BaseLibrary l, ::Dynamic root);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.fbx.Geometry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.fbx.Geometry"); }
		static ::hx::ObjectPtr< Geometry_obj > __new( ::hxd::fmt::fbx::BaseLibrary l, ::Dynamic root);
		static ::hx::ObjectPtr< Geometry_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fmt::fbx::BaseLibrary l, ::Dynamic root);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Geometry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Geometry",d2,be,5a,ac); }

		 ::hxd::fmt::fbx::BaseLibrary lib;
		 ::Dynamic root;
		 ::Dynamic getRoot();
		::Dynamic getRoot_dyn();

		::Array< Float > getVertices();
		::Dynamic getVertices_dyn();

		::Array< int > getPolygons();
		::Dynamic getPolygons_dyn();

		::Array< int > getMaterials();
		::Dynamic getMaterials_dyn();

		::Array< int > getMaterialByTriangle();
		::Dynamic getMaterialByTriangle_dyn();

		void merge( ::hxd::fmt::fbx::Geometry g,::Array< int > materials);
		::Dynamic merge_dyn();

		 ::Dynamic getIndexes();
		::Dynamic getIndexes_dyn();

		::Array< Float > getNormals();
		::Dynamic getNormals_dyn();

		::Array< Float > getTangents(::hx::Null< bool >  opt);
		::Dynamic getTangents_dyn();

		::Array< Float > getBinormals(::hx::Null< bool >  opt);
		::Dynamic getBinormals_dyn();

		::Array< Float > processVectors(::String layer,::String name,::hx::Null< bool >  opt);
		::Dynamic processVectors_dyn();

		 ::Dynamic getColors();
		::Dynamic getColors_dyn();

		::Array< ::Dynamic> getUVs();
		::Dynamic getUVs_dyn();

		 ::h3d::Matrix getGeomMatrix();
		::Dynamic getGeomMatrix_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx

#endif /* INCLUDED_hxd_fmt_fbx_Geometry */ 
