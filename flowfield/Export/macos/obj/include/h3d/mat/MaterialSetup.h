#ifndef INCLUDED_h3d_mat_MaterialSetup
#define INCLUDED_h3d_mat_MaterialSetup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Material)
HX_DECLARE_CLASS2(h3d,mat,MaterialDatabase)
HX_DECLARE_CLASS2(h3d,mat,MaterialSetup)
HX_DECLARE_CLASS2(h3d,scene,LightSystem)
HX_DECLARE_CLASS2(h3d,scene,Mesh)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,Renderer)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES MaterialSetup_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MaterialSetup_obj OBJ_;
		MaterialSetup_obj();

	public:
		enum { _hx_ClassId = 0x0c950fab };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.mat.MaterialSetup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.mat.MaterialSetup"); }
		static ::hx::ObjectPtr< MaterialSetup_obj > __new(::String name);
		static ::hx::ObjectPtr< MaterialSetup_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MaterialSetup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MaterialSetup",36,d4,53,89); }

		static void __boot();
		static  ::h3d::mat::MaterialSetup current;
		::String name;
		::String displayName;
		 ::h3d::mat::MaterialDatabase database;
		 ::h3d::mat::Material emptyMat;
		 ::h3d::scene::Renderer createRenderer();
		::Dynamic createRenderer_dyn();

		 ::h3d::scene::LightSystem createLightSystem();
		::Dynamic createLightSystem_dyn();

		 ::h3d::mat::Material createMaterial();
		::Dynamic createMaterial_dyn();

		 ::Dynamic getDefaults(::String kind);
		::Dynamic getDefaults_dyn();

		 ::Dynamic loadMaterialProps( ::h3d::mat::Material material);
		::Dynamic loadMaterialProps_dyn();

		void saveMaterialProps( ::h3d::mat::Material material);
		::Dynamic saveMaterialProps_dyn();

		void customMeshInit( ::h3d::scene::Mesh mesh);
		::Dynamic customMeshInit_dyn();

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_MaterialSetup */ 
