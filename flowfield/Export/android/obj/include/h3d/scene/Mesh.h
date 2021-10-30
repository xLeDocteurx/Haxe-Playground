#ifndef INCLUDED_h3d_scene_Mesh
#define INCLUDED_h3d_scene_Mesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Material)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS2(h3d,scene,Mesh)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Mesh_obj : public  ::h3d::scene::Object_obj
{
	public:
		typedef  ::h3d::scene::Object_obj super;
		typedef Mesh_obj OBJ_;
		Mesh_obj();

	public:
		enum { _hx_ClassId = 0x6cfff440 };

		void __construct( ::h3d::prim::Primitive primitive, ::h3d::mat::Material material, ::h3d::scene::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.Mesh")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.Mesh"); }
		static ::hx::ObjectPtr< Mesh_obj > __new( ::h3d::prim::Primitive primitive, ::h3d::mat::Material material, ::h3d::scene::Object parent);
		static ::hx::ObjectPtr< Mesh_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::prim::Primitive primitive, ::h3d::mat::Material material, ::h3d::scene::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mesh_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mesh",0d,76,32,33); }

		 ::h3d::prim::Primitive primitive;
		 ::h3d::mat::Material material;
		virtual ::Array< ::Dynamic> getMeshMaterials();
		::Dynamic getMeshMaterials_dyn();

		virtual  ::h3d::col::Bounds getBoundsRec( ::h3d::col::Bounds b);

		virtual  ::h3d::scene::Object clone( ::h3d::scene::Object o);

		virtual ::Dynamic getLocalCollider();

		virtual void draw( ::h3d::scene::RenderContext ctx);

		virtual void emit( ::h3d::scene::RenderContext ctx);

		virtual  ::h3d::mat::Material getMaterialByName(::String name);

		virtual ::Array< ::Dynamic> getMaterials(::Array< ::Dynamic> a,::hx::Null< bool >  recursive);

		void onAdd();

		virtual void onRemove();

		 ::h3d::prim::Primitive set_primitive( ::h3d::prim::Primitive prim);
		::Dynamic set_primitive_dyn();

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_Mesh */ 
