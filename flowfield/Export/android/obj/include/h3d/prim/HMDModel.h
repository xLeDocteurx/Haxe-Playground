#ifndef INCLUDED_h3d_prim_HMDModel
#define INCLUDED_h3d_prim_HMDModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_prim_MeshPrimitive
#include <h3d/prim/MeshPrimitive.h>
#endif
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,anim,Skin)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,PolygonBuffer)
HX_DECLARE_CLASS2(h3d,prim,HMDModel)
HX_DECLARE_CLASS2(h3d,prim,MeshPrimitive)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Geometry)
HX_DECLARE_CLASS3(hxd,fmt,hmd,GeometryBuffer)
HX_DECLARE_CLASS3(hxd,fmt,hmd,GeometryFormat)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Library)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace prim{


class HXCPP_CLASS_ATTRIBUTES HMDModel_obj : public  ::h3d::prim::MeshPrimitive_obj
{
	public:
		typedef  ::h3d::prim::MeshPrimitive_obj super;
		typedef HMDModel_obj OBJ_;
		HMDModel_obj();

	public:
		enum { _hx_ClassId = 0x0948bf69 };

		void __construct( ::hxd::fmt::hmd::Geometry data,int dataPos, ::hxd::fmt::hmd::Library lib);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.prim.HMDModel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.prim.HMDModel"); }
		static ::hx::ObjectPtr< HMDModel_obj > __new( ::hxd::fmt::hmd::Geometry data,int dataPos, ::hxd::fmt::hmd::Library lib);
		static ::hx::ObjectPtr< HMDModel_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fmt::hmd::Geometry data,int dataPos, ::hxd::fmt::hmd::Library lib);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HMDModel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HMDModel",8a,ed,ee,67); }

		 ::hxd::fmt::hmd::Geometry data;
		int dataPosition;
		int indexCount;
		::Array< int > indexesTriPos;
		 ::hxd::fmt::hmd::Library lib;
		int curMaterial;
		::Dynamic collider;
		::String normalsRecomputed;
		 ::haxe::ds::StringMap bufferAliases;
		int triCount();

		int vertexCount();

		 ::h3d::col::Bounds getBounds();

		void selectMaterial(int i);

		 ::hxd::fmt::hmd::GeometryBuffer getDataBuffers(::Array< ::Dynamic> fmt,::Array< ::Dynamic> defaults, ::Dynamic material);
		::Dynamic getDataBuffers_dyn();

		void loadSkin( ::h3d::anim::Skin skin);
		::Dynamic loadSkin_dyn();

		void addAlias(::String name,::String realName,::hx::Null< int >  offset);
		::Dynamic addAlias_dyn();

		void alloc( ::h3d::Engine engine);

		void allocAlias(::String name);
		::Dynamic allocAlias_dyn();

		void recomputeNormals(::String name);
		::Dynamic recomputeNormals_dyn();

		void render( ::h3d::Engine engine);

		void initCollider( ::h3d::col::PolygonBuffer poly);
		::Dynamic initCollider_dyn();

		::Dynamic getCollider();

};

} // end namespace h3d
} // end namespace prim

#endif /* INCLUDED_h3d_prim_HMDModel */ 
