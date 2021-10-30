#ifndef INCLUDED_h3d_scene_LightSystem
#define INCLUDED_h3d_scene_LightSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,scene,Light)
HX_DECLARE_CLASS2(h3d,scene,LightSystem)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,ShaderList)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES LightSystem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LightSystem_obj OBJ_;
		LightSystem_obj();

	public:
		enum { _hx_ClassId = 0x3046418e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.LightSystem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.LightSystem"); }
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

		int drawPasses;
		 ::h3d::Vector ambientLight;
		 ::h3d::scene::Light shadowLight;
		int lightCount;
		 ::h3d::scene::RenderContext ctx;
		virtual void initGlobals( ::hxsl::Globals globals);
		::Dynamic initGlobals_dyn();

		void cullLights();
		::Dynamic cullLights_dyn();

		virtual void initLights( ::h3d::scene::RenderContext ctx);
		::Dynamic initLights_dyn();

		virtual  ::hxsl::ShaderList computeLight( ::h3d::scene::Object obj, ::hxsl::ShaderList shaders);
		::Dynamic computeLight_dyn();

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_LightSystem */ 
