#ifndef INCLUDED_h3d_scene_Scene
#define INCLUDED_h3d_scene_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
HX_DECLARE_CLASS1(h3d,Camera)
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,Default)
HX_DECLARE_CLASS2(h3d,pass,HardwarePick)
HX_DECLARE_CLASS2(h3d,scene,Interactive)
HX_DECLARE_CLASS2(h3d,scene,LightSystem)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS2(h3d,scene,Renderer)
HX_DECLARE_CLASS2(h3d,scene,Scene)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,Interactive)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS1(hxd,SceneEvents)
HX_DECLARE_CLASS1(hxd,Window)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Scene_obj : public  ::h3d::scene::Object_obj
{
	public:
		typedef  ::h3d::scene::Object_obj super;
		typedef Scene_obj OBJ_;
		Scene_obj();

	public:
		enum { _hx_ClassId = 0x66003799 };

		void __construct( ::Dynamic __o_createRenderer, ::Dynamic __o_createLightSystem);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.Scene")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.Scene"); }
		static ::hx::ObjectPtr< Scene_obj > __new( ::Dynamic __o_createRenderer, ::Dynamic __o_createLightSystem);
		static ::hx::ObjectPtr< Scene_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_createRenderer, ::Dynamic __o_createLightSystem);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::Dynamic handleEvent_6a1ec3ce( ::hxd::Event e,::Dynamic last);
		::String __ToString() const { return HX_("Scene",2c,49,ff,0b); }

		 ::h3d::Camera camera;
		 ::h3d::scene::LightSystem lightSystem;
		 ::h3d::scene::Renderer renderer;
		 ::h3d::scene::RenderContext ctx;
		::Array< ::Dynamic> interactives;
		 ::hxd::SceneEvents events;
		::Array< ::Dynamic> hitInteractives;
		::Array< ::Dynamic> eventListeners;
		 ::hxd::Window window;
		void setEvents( ::hxd::SceneEvents events);
		::Dynamic setEvents_dyn();

		void addEventListener( ::Dynamic f);
		::Dynamic addEventListener_dyn();

		bool removeEventListener( ::Dynamic f);
		::Dynamic removeEventListener_dyn();

		void dispatchListeners( ::hxd::Event event);
		::Dynamic dispatchListeners_dyn();

		 ::h3d::scene::Renderer set_renderer( ::h3d::scene::Renderer r);
		::Dynamic set_renderer_dyn();

		int sortHitPointByCameraDistance( ::h3d::scene::Interactive i1, ::h3d::scene::Interactive i2);
		::Dynamic sortHitPointByCameraDistance_dyn();

		void dispatchEvent( ::hxd::Event event,::Dynamic to);
		::Dynamic dispatchEvent_dyn();

		bool isInteractiveVisible(::Dynamic i);
		::Dynamic isInteractiveVisible_dyn();

		 ::h3d::scene::Interactive handleEvent( ::hxd::Event event,::Dynamic last);
		::Dynamic handleEvent_dyn();

		 ::h3d::scene::Object clone( ::h3d::scene::Object o);

		void dispose();
		::Dynamic dispose_dyn();

		void addEventTarget( ::h3d::scene::Interactive i);
		::Dynamic addEventTarget_dyn();

		void removeEventTarget( ::h3d::scene::Interactive i);
		::Dynamic removeEventTarget_dyn();

		void setElapsedTime(Float elapsedTime);
		::Dynamic setElapsedTime_dyn();

		 ::h3d::pass::HardwarePick hardwarePass;
		 ::h3d::scene::Object hardwarePick(Float pixelX,Float pixelY);
		::Dynamic hardwarePick_dyn();

		void syncOnly(Float et);
		::Dynamic syncOnly_dyn();

		void computeStatic();
		::Dynamic computeStatic_dyn();

		void render( ::h3d::Engine engine);
		::Dynamic render_dyn();

		 ::haxe::io::Bytes serializeScene();
		::Dynamic serializeScene_dyn();

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_Scene */ 
