#ifndef INCLUDED_h3d_prim_Polygon
#define INCLUDED_h3d_prim_Polygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_prim_MeshPrimitive
#include <h3d/prim/MeshPrimitive.h>
#endif
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,prim,MeshPrimitive)
HX_DECLARE_CLASS2(h3d,prim,Polygon)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS2(h3d,prim,UV)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace prim{


class HXCPP_CLASS_ATTRIBUTES Polygon_obj : public  ::h3d::prim::MeshPrimitive_obj
{
	public:
		typedef  ::h3d::prim::MeshPrimitive_obj super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();

	public:
		enum { _hx_ClassId = 0x1f6183bf };

		void __construct(::Array< ::Dynamic> points,::Array< int > idx);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.prim.Polygon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.prim.Polygon"); }
		static ::hx::ObjectPtr< Polygon_obj > __new(::Array< ::Dynamic> points,::Array< int > idx);
		static ::hx::ObjectPtr< Polygon_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> points,::Array< int > idx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Polygon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Polygon",5a,2a,e2,df); }

		::Array< ::Dynamic> points;
		::Array< ::Dynamic> normals;
		::Array< ::Dynamic> tangents;
		::Array< ::Dynamic> uvs;
		::Array< int > idx;
		::Array< ::Dynamic> colors;
		Float scaled;
		Float translatedX;
		Float translatedY;
		Float translatedZ;
		 ::h3d::col::Bounds getBounds();

		void alloc( ::h3d::Engine engine);

		void unindex();
		::Dynamic unindex_dyn();

		void translate(Float dx,Float dy,Float dz);
		::Dynamic translate_dyn();

		void scale(Float s);
		::Dynamic scale_dyn();

		void addNormals();
		::Dynamic addNormals_dyn();

		void addTangents();
		::Dynamic addTangents_dyn();

		void addUVs();
		::Dynamic addUVs_dyn();

		void uvScale(Float su,Float sv);
		::Dynamic uvScale_dyn();

		int triCount();

		int vertexCount();

		::Dynamic getCollider();

		void render( ::h3d::Engine engine);

};

} // end namespace h3d
} // end namespace prim

#endif /* INCLUDED_h3d_prim_Polygon */ 
