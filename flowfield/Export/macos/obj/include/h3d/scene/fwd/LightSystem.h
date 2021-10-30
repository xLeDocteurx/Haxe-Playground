#ifndef INCLUDED_h3d_scene_fwd_LightSystem
#define INCLUDED_h3d_scene_fwd_LightSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_LightSystem
#include <h3d/scene/LightSystem.h>
#endif
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,scene,Light)
HX_DECLARE_CLASS2(h3d,scene,LightSystem)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS3(h3d,scene,fwd,LightSystem)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderList)

namespace h3d{
namespace scene{
namespace fwd{


class HXCPP_CLASS_ATTRIBUTES LightSystem_obj : public  ::h3d::scene::LightSystem_obj
{
	public:
		typedef  ::h3d::scene::LightSystem_obj super;
		typedef LightSystem_obj OBJ_;
		LightSystem_obj();

	public:
		enum { _hx_ClassId = 0x74a67265 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.fwd.LightSystem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.fwd.LightSystem"); }
		static ::hx::ObjectPtr< LightSystem_obj > __new();
		static ::hx::ObjectPtr< LightSystem_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LightSystem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LightSystem",45,78,63,3b); }

		int maxLightsPerObject;
		 ::hxsl::Globals globals;
		 ::hxsl::Shader ambientShader;
		bool perPixelLighting;
		bool get_additiveLighting();
		::Dynamic get_additiveLighting_dyn();

		bool set_additiveLighting(bool b);
		::Dynamic set_additiveLighting_dyn();

		void initLights( ::h3d::scene::RenderContext ctx);

		void initGlobals( ::hxsl::Globals globals);

		int sortLight( ::h3d::scene::Light l1, ::h3d::scene::Light l2);
		::Dynamic sortLight_dyn();

		 ::hxsl::ShaderList computeLight( ::h3d::scene::Object obj, ::hxsl::ShaderList shaders);

};

} // end namespace h3d
} // end namespace scene
} // end namespace fwd

#endif /* INCLUDED_h3d_scene_fwd_LightSystem */ 
