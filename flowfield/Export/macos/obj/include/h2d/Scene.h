#ifndef INCLUDED_h2d_Scene
#define INCLUDED_h2d_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_Layers
#include <h2d/Layers.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
HX_DECLARE_CLASS1(h2d,Bitmap)
HX_DECLARE_CLASS1(h2d,Camera)
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Interactive)
HX_DECLARE_CLASS1(h2d,Layers)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,ScaleMode)
HX_DECLARE_CLASS1(h2d,Scene)
HX_DECLARE_CLASS1(h2d,Tile)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,Interactive)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS1(hxd,SceneEvents)
HX_DECLARE_CLASS1(hxd,Window)
HX_DECLARE_CLASS1(hxsl,Output)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Scene_obj : public  ::h2d::Layers_obj
{
	public:
		typedef  ::h2d::Layers_obj super;
		typedef Scene_obj OBJ_;
		Scene_obj();

	public:
		enum { _hx_ClassId = 0x696e0a12 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Scene")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Scene"); }
		static ::hx::ObjectPtr< Scene_obj > __new();
		static ::hx::ObjectPtr< Scene_obj > __alloc(::hx::Ctx *_hx_ctx);
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
		::String __ToString() const { return HX_("Scene",2c,49,ff,0b); }

		int width;
		int height;
		Float viewportA;
		Float viewportD;
		Float viewportX;
		Float viewportY;
		Float offsetX;
		Float offsetY;
		Float viewportScaleX;
		Float viewportScaleY;
		Float mouseX;
		Float mouseY;
		 ::h2d::ScaleMode scaleMode;
		::Array< ::Dynamic> _cameras;
		 ::h2d::Camera interactiveCamera;
		::Array< ::Dynamic> interactive;
		::Array< ::Dynamic> eventListeners;
		 ::h2d::RenderContext ctx;
		 ::hxd::Window window;
		 ::hxd::SceneEvents events;
		 ::h2d::col::Point shapePoint;
		bool get_defaultSmooth();
		::Dynamic get_defaultSmooth_dyn();

		bool set_defaultSmooth(bool v);
		::Dynamic set_defaultSmooth_dyn();

		void setEvents( ::hxd::SceneEvents events);
		::Dynamic setEvents_dyn();

		int get_zoom();
		::Dynamic get_zoom_dyn();

		int set_zoom(int v);
		::Dynamic set_zoom_dyn();

		 ::h2d::ScaleMode set_scaleMode( ::h2d::ScaleMode v);
		::Dynamic set_scaleMode_dyn();

		 ::h2d::RenderContext get_renderer();
		::Dynamic get_renderer_dyn();

		 ::h2d::RenderContext set_renderer( ::h2d::RenderContext v);
		::Dynamic set_renderer_dyn();

		 ::h2d::Camera get_camera();
		::Dynamic get_camera_dyn();

		::Array< ::Dynamic> get_cameras();
		::Dynamic get_cameras_dyn();

		 ::h2d::Camera set_interactiveCamera( ::h2d::Camera cam);
		::Dynamic set_interactiveCamera_dyn();

		void addCamera( ::h2d::Camera cam, ::Dynamic pos);
		::Dynamic addCamera_dyn();

		void removeCamera( ::h2d::Camera cam);
		::Dynamic removeCamera_dyn();

		void setFixedSize(int w,int h);
		::Dynamic setFixedSize_dyn();

		void checkResize();
		::Dynamic checkResize_dyn();

		Float screenXToViewport(Float mx);
		::Dynamic screenXToViewport_dyn();

		Float screenYToViewport(Float my);
		::Dynamic screenYToViewport_dyn();

		Float get_mouseX();
		::Dynamic get_mouseX_dyn();

		Float get_mouseY();
		::Dynamic get_mouseY_dyn();

		void dispatchListeners( ::hxd::Event event);
		::Dynamic dispatchListeners_dyn();

		bool isInteractiveVisible(::Dynamic i);
		::Dynamic isInteractiveVisible_dyn();

		 ::h2d::Interactive getInteractive(Float x,Float y);
		::Dynamic getInteractive_dyn();

		void screenToViewport( ::hxd::Event e);
		::Dynamic screenToViewport_dyn();

		void dispatchEvent( ::hxd::Event event,::Dynamic to);
		::Dynamic dispatchEvent_dyn();

		::Dynamic handleEvent( ::hxd::Event event,::Dynamic last);
		::Dynamic handleEvent_dyn();

		void addEventListener( ::Dynamic f);
		::Dynamic addEventListener_dyn();

		bool removeEventListener( ::Dynamic f);
		::Dynamic removeEventListener_dyn();

		void startCapture( ::Dynamic onEvent, ::Dynamic onCancel, ::Dynamic touchId);
		::Dynamic startCapture_dyn();

		void stopCapture();
		::Dynamic stopCapture_dyn();

		void startDrag( ::Dynamic onEvent, ::Dynamic onCancel, ::hxd::Event refEvent);
		::Dynamic startDrag_dyn();

		void stopDrag();
		::Dynamic stopDrag_dyn();

		 ::h2d::Interactive getFocus();
		::Dynamic getFocus_dyn();

		void addEventTarget( ::h2d::Interactive i);
		::Dynamic addEventTarget_dyn();

		void removeEventTarget( ::h2d::Interactive i,::hx::Null< bool >  notify);
		::Dynamic removeEventTarget_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void setElapsedTime(Float v);
		::Dynamic setElapsedTime_dyn();

		void drawImplTo( ::h2d::Object s,::Array< ::Dynamic> texs,::Array< ::Dynamic> outputs);
		::Dynamic drawImplTo_dyn();

		void syncOnly(Float et);
		::Dynamic syncOnly_dyn();

		void render( ::h3d::Engine engine);
		::Dynamic render_dyn();

		void sync( ::h2d::RenderContext ctx);

		void clipBounds( ::h2d::RenderContext ctx, ::h2d::col::Bounds bounds);

		void drawContent( ::h2d::RenderContext ctx);

		void onAdd();

		void onRemove();

		 ::h2d::Bitmap captureBitmap( ::h2d::Tile target);
		::Dynamic captureBitmap_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Scene */ 
