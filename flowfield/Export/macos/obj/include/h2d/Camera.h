#ifndef INCLUDED_h2d_Camera
#define INCLUDED_h2d_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,Camera)
HX_DECLARE_CLASS1(h2d,Layers)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Scene)
HX_DECLARE_CLASS2(h2d,col,Point)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS1(hxd,Event)
HX_DECLARE_CLASS1(hxd,InteractiveScene)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Camera_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Camera_obj OBJ_;
		Camera_obj();

	public:
		enum { _hx_ClassId = 0x4f9ac31f };

		void __construct( ::h2d::Scene scene);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Camera")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Camera"); }
		static ::hx::ObjectPtr< Camera_obj > __new( ::h2d::Scene scene);
		static ::hx::ObjectPtr< Camera_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Scene scene);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,Camera_obj *_hx_obj);
		//~Camera_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Camera",c5,ba,20,ec); }

		Float x;
		Float y;
		Float scaleX;
		Float scaleY;
		Float rotation;
		bool clipViewport;
		Float anchorX;
		Float anchorY;
		bool visible;
		 ::h2d::Object follow;
		bool followRotation;
		bool posChanged;
		Float viewX;
		Float viewY;
		Float viewW;
		Float viewH;
		Float matA;
		Float matB;
		Float matC;
		Float matD;
		Float absX;
		Float absY;
		Float invDet;
		 ::h2d::Scene scene;
		void remove();
		::Dynamic remove_dyn();

		::Dynamic layerVisible;
		inline ::Dynamic &layerVisible_dyn() {return layerVisible; }

		void enter( ::h2d::RenderContext ctx);
		::Dynamic enter_dyn();

		void exit( ::h2d::RenderContext ctx);
		::Dynamic exit_dyn();

		void sync( ::h2d::RenderContext ctx,::hx::Null< bool >  force);
		::Dynamic sync_dyn();

		void setScale(Float x,Float y);
		::Dynamic setScale_dyn();

		void scale(Float x,Float y);
		::Dynamic scale_dyn();

		void setPosition(Float x,Float y);
		::Dynamic setPosition_dyn();

		void move(Float dx,Float dy);
		::Dynamic move_dyn();

		void rotate(Float angle);
		::Dynamic rotate_dyn();

		void setAnchor(Float x,Float y);
		::Dynamic setAnchor_dyn();

		void setViewport(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  w,::hx::Null< Float >  h);
		::Dynamic setViewport_dyn();

		void setRawViewport(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  w,::hx::Null< Float >  h);
		::Dynamic setRawViewport_dyn();

		Float screenXToCamera(Float mx,Float my);
		::Dynamic screenXToCamera_dyn();

		Float screenYToCamera(Float mx,Float my);
		::Dynamic screenYToCamera_dyn();

		Float cameraXToScreen(Float mx,Float my);
		::Dynamic cameraXToScreen_dyn();

		Float cameraYToScreen(Float mx,Float my);
		::Dynamic cameraYToScreen_dyn();

		Float sceneXToCamera(Float mx,Float my);
		::Dynamic sceneXToCamera_dyn();

		Float sceneYToCamera(Float mx,Float my);
		::Dynamic sceneYToCamera_dyn();

		Float cameraXToScene(Float mx,Float my);
		::Dynamic cameraXToScene_dyn();

		Float cameraYToScene(Float mx,Float my);
		::Dynamic cameraYToScene_dyn();

		void eventToCamera( ::hxd::Event e);
		::Dynamic eventToCamera_dyn();

		void screenToCamera( ::h2d::col::Point pt);
		::Dynamic screenToCamera_dyn();

		void cameraToScreen( ::h2d::col::Point pt);
		::Dynamic cameraToScreen_dyn();

		void sceneToCamera( ::h2d::col::Point pt);
		::Dynamic sceneToCamera_dyn();

		void cameraToScene( ::h2d::col::Point pt);
		::Dynamic cameraToScene_dyn();

		void checkScene();
		::Dynamic checkScene_dyn();

		Float set_x(Float v);
		::Dynamic set_x_dyn();

		Float set_y(Float v);
		::Dynamic set_y_dyn();

		Float set_scaleX(Float v);
		::Dynamic set_scaleX_dyn();

		Float set_scaleY(Float v);
		::Dynamic set_scaleY_dyn();

		Float set_rotation(Float v);
		::Dynamic set_rotation_dyn();

		Float get_viewportX();
		::Dynamic get_viewportX_dyn();

		Float set_viewportX(Float v);
		::Dynamic set_viewportX_dyn();

		Float get_viewportY();
		::Dynamic get_viewportY_dyn();

		Float set_viewportY(Float v);
		::Dynamic set_viewportY_dyn();

		Float get_viewportWidth();
		::Dynamic get_viewportWidth_dyn();

		Float set_viewportWidth(Float v);
		::Dynamic set_viewportWidth_dyn();

		Float get_viewportHeight();
		::Dynamic get_viewportHeight_dyn();

		Float set_viewportHeight(Float v);
		::Dynamic set_viewportHeight_dyn();

		Float set_anchorX(Float v);
		::Dynamic set_anchorX_dyn();

		Float set_anchorY(Float v);
		::Dynamic set_anchorY_dyn();

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Camera */ 
