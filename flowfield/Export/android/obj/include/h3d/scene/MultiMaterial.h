#ifndef INCLUDED_h3d_scene_MultiMaterial
#define INCLUDED_h3d_scene_MultiMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Material)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS2(h3d,scene,Mesh)
HX_DECLARE_CLASS2(h3d,scene,MultiMaterial)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES MultiMaterial_obj : public  ::h3d::scene::Mesh_obj
{
	public:
		typedef  ::h3d::scene::Mesh_obj super;
		typedef MultiMaterial_obj OBJ_;
		MultiMaterial_obj();

	public:
		enum { _hx_ClassId = 0x70ba378d };

		void __construct( ::h3d::prim::Primitive prim,::Array< ::Dynamic> mats, ::h3d::scene::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.MultiMaterial")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.MultiMaterial"); }
		static ::hx::ObjectPtr< MultiMaterial_obj > __new( ::h3d::prim::Primitive prim,::Array< ::Dynamic> mats, ::h3d::scene::Object parent);
		static ::hx::ObjectPtr< MultiMaterial_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::prim::Primitive prim,::Array< ::Dynamic> mats, ::h3d::scene::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MultiMaterial_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MultiMaterial",20,94,51,d6); }

		::Array< ::Dynamic> materials;
		::Array< ::Dynamic> getMeshMaterials();

		virtual  ::h3d::scene::Object clone( ::h3d::scene::Object o);

		virtual void emit( ::h3d::scene::RenderContext ctx);

		 ::h3d::mat::Material getMaterialByName(::String name);

		::Array< ::Dynamic> getMaterials(::Array< ::Dynamic> a,::hx::Null< bool >  recursive);

		virtual void draw( ::h3d::scene::RenderContext ctx);

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_MultiMaterial */ 
