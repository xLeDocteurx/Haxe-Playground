#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h2d_Bitmap
#include <h2d/Bitmap.h>
#endif
#ifndef INCLUDED_h2d_Camera
#include <h2d/Camera.h>
#endif
#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_h2d_Interactive
#include <h2d/Interactive.h>
#endif
#ifndef INCLUDED_h2d_Layers
#include <h2d/Layers.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h2d_ScaleMode
#include <h2d/ScaleMode.h>
#endif
#ifndef INCLUDED_h2d_ScaleModeAlign
#include <h2d/ScaleModeAlign.h>
#endif
#ifndef INCLUDED_h2d_Scene
#include <h2d/Scene.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h2d_col_Collider
#include <h2d/col/Collider.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
#endif
#ifndef INCLUDED_h3d_pass_ShaderManager
#include <h3d/pass/ShaderManager.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_Event
#include <hxd/Event.h>
#endif
#ifndef INCLUDED_hxd_Interactive
#include <hxd/Interactive.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_SceneEvents
#include <hxd/SceneEvents.h>
#endif
#ifndef INCLUDED_hxd_Window
#include <hxd/Window.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c5c188afec21dee0_105_new,"h2d.Scene","new",0x3e0ec50a,"h2d.Scene.new","h2d/Scene.hx",105,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_257_get_defaultSmooth,"h2d.Scene","get_defaultSmooth",0xdae9f150,"h2d.Scene.get_defaultSmooth","h2d/Scene.hx",257,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_258_set_defaultSmooth,"h2d.Scene","set_defaultSmooth",0xfe57c95c,"h2d.Scene.set_defaultSmooth","h2d/Scene.hx",258,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_262_setEvents,"h2d.Scene","setEvents",0x4dbc9485,"h2d.Scene.setEvents","h2d/Scene.hx",262,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_266_get_zoom,"h2d.Scene","get_zoom",0x9d6f41b2,"h2d.Scene.get_zoom","h2d/Scene.hx",266,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_272_set_zoom,"h2d.Scene","set_zoom",0x4bcc9b26,"h2d.Scene.set_zoom","h2d/Scene.hx",272,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_277_set_scaleMode,"h2d.Scene","set_scaleMode",0x2e64be1a,"h2d.Scene.set_scaleMode","h2d/Scene.hx",277,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_283_get_renderer,"h2d.Scene","get_renderer",0x4eaf9f62,"h2d.Scene.get_renderer","h2d/Scene.hx",283,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_284_set_renderer,"h2d.Scene","set_renderer",0x63a8c2d6,"h2d.Scene.set_renderer","h2d/Scene.hx",284,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_286_get_camera,"h2d.Scene","get_camera",0x05df0b04,"h2d.Scene.get_camera","h2d/Scene.hx",286,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_288_get_cameras,"h2d.Scene","get_cameras",0x1d4a98ef,"h2d.Scene.get_cameras","h2d/Scene.hx",288,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_290_set_interactiveCamera,"h2d.Scene","set_interactiveCamera",0x9d66c634,"h2d.Scene.set_interactiveCamera","h2d/Scene.hx",290,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_301_addCamera,"h2d.Scene","addCamera",0xc75b4bd0,"h2d.Scene.addCamera","h2d/Scene.hx",301,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_314_removeCamera,"h2d.Scene","removeCamera",0x0d74081f,"h2d.Scene.removeCamera","h2d/Scene.hx",314,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_326_setFixedSize,"h2d.Scene","setFixedSize",0x38447669,"h2d.Scene.setFixedSize","h2d/Scene.hx",326,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_333_checkResize,"h2d.Scene","checkResize",0x9eabdb86,"h2d.Scene.checkResize","h2d/Scene.hx",333,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_425_screenXToViewport,"h2d.Scene","screenXToViewport",0xeb46b1b7,"h2d.Scene.screenXToViewport","h2d/Scene.hx",425,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_429_screenYToViewport,"h2d.Scene","screenYToViewport",0x6c251cf8,"h2d.Scene.screenYToViewport","h2d/Scene.hx",429,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_432_get_mouseX,"h2d.Scene","get_mouseX",0x1a610ef2,"h2d.Scene.get_mouseX","h2d/Scene.hx",432,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_440_get_mouseY,"h2d.Scene","get_mouseY",0x1a610ef3,"h2d.Scene.get_mouseY","h2d/Scene.hx",440,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_449_dispatchListeners,"h2d.Scene","dispatchListeners",0x87c4d98f,"h2d.Scene.dispatchListeners","h2d/Scene.hx",449,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_458_isInteractiveVisible,"h2d.Scene","isInteractiveVisible",0x03afb150,"h2d.Scene.isInteractiveVisible","h2d/Scene.hx",458,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_470_getInteractive,"h2d.Scene","getInteractive",0x6a17e882,"h2d.Scene.getInteractive","h2d/Scene.hx",470,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_506_screenToViewport,"h2d.Scene","screenToViewport",0x543308a3,"h2d.Scene.screenToViewport","h2d/Scene.hx",506,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_510_dispatchEvent,"h2d.Scene","dispatchEvent",0xc28bf42a,"h2d.Scene.dispatchEvent","h2d/Scene.hx",510,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_523_handleEvent,"h2d.Scene","handleEvent",0xdc2d21fc,"h2d.Scene.handleEvent","h2d/Scene.hx",523,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_586_addEventListener,"h2d.Scene","addEventListener",0xa1f9f4e3,"h2d.Scene.addEventListener","h2d/Scene.hx",586,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_592_removeEventListener,"h2d.Scene","removeEventListener",0x8141f074,"h2d.Scene.removeEventListener","h2d/Scene.hx",592,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_613_startCapture,"h2d.Scene","startCapture",0xffb7da5a,"h2d.Scene.startCapture","h2d/Scene.hx",613,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_612_startCapture,"h2d.Scene","startCapture",0xffb7da5a,"h2d.Scene.startCapture","h2d/Scene.hx",612,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_623_stopCapture,"h2d.Scene","stopCapture",0xab289b4e,"h2d.Scene.stopCapture","h2d/Scene.hx",623,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_628_startDrag,"h2d.Scene","startDrag",0x530e75a0,"h2d.Scene.startDrag","h2d/Scene.hx",628,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_633_stopDrag,"h2d.Scene","stopDrag",0x61e6542c,"h2d.Scene.stopDrag","h2d/Scene.hx",633,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_639_getFocus,"h2d.Scene","getFocus",0x311c5278,"h2d.Scene.getFocus","h2d/Scene.hx",639,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_653_addEventTarget,"h2d.Scene","addEventTarget",0x16319e00,"h2d.Scene.addEventTarget","h2d/Scene.hx",653,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_705_removeEventTarget,"h2d.Scene","removeEventTarget",0x6720e351,"h2d.Scene.removeEventTarget","h2d/Scene.hx",705,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_716_dispose,"h2d.Scene","dispose",0x05b01249,"h2d.Scene.dispose","h2d/Scene.hx",716,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_729_setElapsedTime,"h2d.Scene","setElapsedTime",0x14abf17d,"h2d.Scene.setElapsedTime","h2d/Scene.hx",729,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_732_drawImplTo,"h2d.Scene","drawImplTo",0xa80f1035,"h2d.Scene.drawImplTo","h2d/Scene.hx",732,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_753_syncOnly,"h2d.Scene","syncOnly",0x5683187d,"h2d.Scene.syncOnly","h2d/Scene.hx",753,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_768_render,"h2d.Scene","render",0x501d3cec,"h2d.Scene.render","h2d/Scene.hx",768,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_780_sync,"h2d.Scene","sync",0x123ada71,"h2d.Scene.sync","h2d/Scene.hx",780,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_789_clipBounds,"h2d.Scene","clipBounds",0xfa36b9fb,"h2d.Scene.clipBounds","h2d/Scene.hx",789,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_810_drawContent,"h2d.Scene","drawContent",0x16de803f,"h2d.Scene.drawContent","h2d/Scene.hx",810,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_851_onAdd,"h2d.Scene","onAdd",0x8c42796c,"h2d.Scene.onAdd","h2d/Scene.hx",851,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_857_onRemove,"h2d.Scene","onRemove",0xb0f175d9,"h2d.Scene.onRemove","h2d/Scene.hx",857,0x53cb92a7)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c188afec21dee0_868_captureBitmap,"h2d.Scene","captureBitmap",0xd091aa3f,"h2d.Scene.captureBitmap","h2d/Scene.hx",868,0x53cb92a7)
namespace h2d{

void Scene_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c5c188afec21dee0_105_new)
HXLINE( 185)		this->scaleMode = ::h2d::ScaleMode_obj::Resize_dyn();
HXLINE( 234)		super::__construct(null());
HXLINE( 235)		 ::h3d::Engine e = ::h3d::Engine_obj::CURRENT;
HXLINE( 236)		this->ctx =  ::h2d::RenderContext_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 237)		this->_cameras = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 238)		 ::h2d::Camera_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 239)		this->set_interactiveCamera(this->_cameras->__get(0).StaticCast<  ::h2d::Camera >());
HXLINE( 240)		this->width = e->width;
HXLINE( 241)		this->height = e->height;
HXLINE( 242)		this->viewportA = (( (Float)(2) ) / ( (Float)(e->width) ));
HXLINE( 243)		this->viewportD = (( (Float)(2) ) / ( (Float)(e->height) ));
HXLINE( 244)		this->viewportX = ( (Float)(-1) );
HXLINE( 245)		this->viewportY = ( (Float)(-1) );
HXLINE( 246)		this->viewportScaleX = ( (Float)(1) );
HXLINE( 247)		this->viewportScaleY = ( (Float)(1) );
HXLINE( 248)		this->offsetX = ( (Float)(0) );
HXLINE( 249)		this->offsetY = ( (Float)(0) );
HXLINE( 250)		this->interactive = ::Array_obj< ::Dynamic>::__new();
HXLINE( 251)		this->eventListeners = ::Array_obj< ::Dynamic>::__new();
HXLINE( 252)		this->shapePoint =  ::h2d::col::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 253)		this->window = ::hxd::Window_obj::getInstance();
HXLINE( 254)		this->posChanged = true;
            	}

Dynamic Scene_obj::__CreateEmpty() { return new Scene_obj; }

void *Scene_obj::_hx_vtable = 0;

Dynamic Scene_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scene_obj > _hx_result = new Scene_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Scene_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0af28419) {
		if (inClassId<=(int)0x0828b434) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0828b434;
		} else {
			return inClassId==(int)0x0af28419;
		}
	} else {
		return inClassId==(int)0x696e0a12;
	}
}

static ::h3d::IDrawable_obj _hx_h2d_Scene__hx_h3d_IDrawable= {
	( void (::hx::Object::*)( ::h3d::Engine))&::h2d::Scene_obj::render,
};

static ::hxd::InteractiveScene_obj _hx_h2d_Scene__hx_hxd_InteractiveScene= {
	( void (::hx::Object::*)( ::hxd::SceneEvents))&::h2d::Scene_obj::setEvents,
	( ::Dynamic (::hx::Object::*)( ::hxd::Event,::Dynamic))&::h2d::Scene_obj::handleEvent,
	( void (::hx::Object::*)( ::hxd::Event,::Dynamic))&::h2d::Scene_obj::dispatchEvent,
	( void (::hx::Object::*)( ::hxd::Event))&::h2d::Scene_obj::dispatchListeners,
	( bool (::hx::Object::*)(::Dynamic))&::h2d::Scene_obj::isInteractiveVisible,
};

void *Scene_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd84ebfae: return &_hx_h2d_Scene__hx_h3d_IDrawable;
		case (int)0xa477bf3e: return &_hx_h2d_Scene__hx_hxd_InteractiveScene;
	}
	return super::_hx_getInterface(inHash);
}

bool Scene_obj::get_defaultSmooth(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_257_get_defaultSmooth)
HXDLIN( 257)		return this->ctx->defaultSmooth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_defaultSmooth,return )

bool Scene_obj::set_defaultSmooth(bool v){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_258_set_defaultSmooth)
HXDLIN( 258)		return (this->ctx->defaultSmooth = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,set_defaultSmooth,return )

void Scene_obj::setEvents( ::hxd::SceneEvents events){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_262_setEvents)
HXDLIN( 262)		this->events = events;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setEvents,(void))

int Scene_obj::get_zoom(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_266_get_zoom)
HXDLIN( 266)		 ::h2d::ScaleMode _g = this->scaleMode;
HXDLIN( 266)		if ((_g->_hx_getIndex() == 4)) {
HXLINE( 267)			Float level = _g->_hx_getFloat(0);
HXDLIN( 267)			return ::Std_obj::_hx_int(level);
            		}
            		else {
HXLINE( 268)			return 0;
            		}
HXLINE( 266)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_zoom,return )

int Scene_obj::set_zoom(int v){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_272_set_zoom)
HXLINE( 273)		this->set_scaleMode(::h2d::ScaleMode_obj::Zoom(v));
HXLINE( 274)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,set_zoom,return )

 ::h2d::ScaleMode Scene_obj::set_scaleMode( ::h2d::ScaleMode v){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_277_set_scaleMode)
HXLINE( 278)		this->scaleMode = v;
HXLINE( 279)		this->checkResize();
HXLINE( 280)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,set_scaleMode,return )

 ::h2d::RenderContext Scene_obj::get_renderer(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_283_get_renderer)
HXDLIN( 283)		return this->ctx;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_renderer,return )

 ::h2d::RenderContext Scene_obj::set_renderer( ::h2d::RenderContext v){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_284_set_renderer)
HXDLIN( 284)		this->ctx = v;
HXDLIN( 284)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,set_renderer,return )

 ::h2d::Camera Scene_obj::get_camera(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_286_get_camera)
HXDLIN( 286)		return this->_cameras->__get(0).StaticCast<  ::h2d::Camera >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_camera,return )

::Array< ::Dynamic> Scene_obj::get_cameras(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_288_get_cameras)
HXDLIN( 288)		return this->_cameras;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_cameras,return )

 ::h2d::Camera Scene_obj::set_interactiveCamera( ::h2d::Camera cam){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_290_set_interactiveCamera)
HXLINE( 291)		if (::hx::IsNull( cam )) {
HXLINE( 291)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Interactive cammera cannot be null!",72,b6,aa,2a)));
            		}
HXLINE( 292)		if (::hx::IsInstanceNotEq( cam->scene,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 292)			this->addCamera(cam,null());
            		}
HXLINE( 293)		return (this->interactiveCamera = cam);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,set_interactiveCamera,return )

void Scene_obj::addCamera( ::h2d::Camera cam, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_301_addCamera)
HXLINE( 302)		if (::hx::IsNotNull( cam->scene )) {
HXLINE( 303)			cam->scene->removeCamera(cam);
            		}
HXLINE( 304)		cam->scene = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 305)		cam->posChanged = true;
HXLINE( 306)		if (::hx::IsNotNull( pos )) {
HXLINE( 306)			this->_cameras->insert(( (int)(pos) ),cam);
            		}
            		else {
HXLINE( 307)			this->_cameras->push(cam);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,addCamera,(void))

void Scene_obj::removeCamera( ::h2d::Camera cam){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_314_removeCamera)
HXLINE( 315)		if (::hx::IsInstanceEq( cam,this->interactiveCamera )) {
HXLINE( 315)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Current interactive Camera cannot be removed from camera list!",a8,ea,a5,a4)));
            		}
HXLINE( 316)		cam->scene = null();
HXLINE( 317)		this->_cameras->remove(cam);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeCamera,(void))

void Scene_obj::setFixedSize(int w,int h){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_326_setFixedSize)
HXDLIN( 326)		this->set_scaleMode(::h2d::ScaleMode_obj::Stretch(w,h));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,setFixedSize,(void))

void Scene_obj::checkResize(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_333_checkResize)
HXDLIN( 333)		 ::h2d::Scene _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 334)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 388)		{
HXLINE( 388)			 ::h2d::ScaleMode _g = this->scaleMode;
HXDLIN( 388)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 390)					{
HXLINE( 390)						int w = engine->width;
HXDLIN( 390)						int h = engine->height;
HXDLIN( 390)						bool _hx_tmp;
HXDLIN( 390)						if ((w == _gthis->width)) {
HXLINE( 390)							_hx_tmp = (h != _gthis->height);
            						}
            						else {
HXLINE( 390)							_hx_tmp = true;
            						}
HXDLIN( 390)						if (_hx_tmp) {
HXLINE( 390)							_gthis->width = w;
HXDLIN( 390)							_gthis->height = h;
HXDLIN( 390)							_gthis->posChanged = true;
            						}
            					}
HXLINE( 391)					{
HXLINE( 391)						_gthis->viewportScaleX = ( (Float)(1) );
HXDLIN( 391)						_gthis->viewportScaleY = ( (Float)(1) );
            					}
HXLINE( 392)					{
HXLINE( 392)						_gthis->viewportA = (( (Float)(2) ) / ( (Float)(_gthis->width) ));
HXDLIN( 392)						_gthis->viewportD = (( (Float)(2) ) / ( (Float)(_gthis->height) ));
HXDLIN( 392)						_gthis->viewportX = ( (Float)(-1) );
HXDLIN( 392)						_gthis->viewportY = ( (Float)(-1) );
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 393)					int _width = _g->_hx_getInt(0);
HXDLIN( 393)					int _height = _g->_hx_getInt(1);
HXDLIN( 393)					{
HXLINE( 394)						bool _hx_tmp;
HXDLIN( 394)						if ((_width == _gthis->width)) {
HXLINE( 394)							_hx_tmp = (_height != _gthis->height);
            						}
            						else {
HXLINE( 394)							_hx_tmp = true;
            						}
HXDLIN( 394)						if (_hx_tmp) {
HXLINE( 394)							_gthis->width = _width;
HXDLIN( 394)							_gthis->height = _height;
HXDLIN( 394)							_gthis->posChanged = true;
            						}
HXLINE( 395)						{
HXLINE( 395)							_gthis->viewportScaleX = (( (Float)(engine->width) ) / ( (Float)(_width) ));
HXDLIN( 395)							_gthis->viewportScaleY = (( (Float)(engine->height) ) / ( (Float)(_height) ));
            						}
HXLINE( 396)						{
HXLINE( 396)							_gthis->viewportA = (( (Float)(2) ) / ( (Float)(_gthis->width) ));
HXDLIN( 396)							_gthis->viewportD = (( (Float)(2) ) / ( (Float)(_gthis->height) ));
HXDLIN( 396)							_gthis->viewportX = ( (Float)(-1) );
HXDLIN( 396)							_gthis->viewportY = ( (Float)(-1) );
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 397)					int _width = _g->_hx_getInt(0);
HXDLIN( 397)					int _height = _g->_hx_getInt(1);
HXDLIN( 397)					 ::Dynamic integerScale = _g->_hx_getObject(2);
HXDLIN( 397)					 ::h2d::ScaleModeAlign horizontalAlign = _g->_hx_getObject(3).StaticCast<  ::h2d::ScaleModeAlign >();
HXDLIN( 397)					 ::h2d::ScaleModeAlign verticalAlign = _g->_hx_getObject(4).StaticCast<  ::h2d::ScaleModeAlign >();
HXDLIN( 397)					{
HXLINE( 398)						bool _hx_tmp;
HXDLIN( 398)						if ((_width == _gthis->width)) {
HXLINE( 398)							_hx_tmp = (_height != _gthis->height);
            						}
            						else {
HXLINE( 398)							_hx_tmp = true;
            						}
HXDLIN( 398)						if (_hx_tmp) {
HXLINE( 398)							_gthis->width = _width;
HXDLIN( 398)							_gthis->height = _height;
HXDLIN( 398)							_gthis->posChanged = true;
            						}
HXLINE( 399)						Float a = (( (Float)(engine->width) ) / ( (Float)(_width) ));
HXDLIN( 399)						Float b = (( (Float)(engine->height) ) / ( (Float)(_height) ));
HXDLIN( 399)						Float zoom;
HXDLIN( 399)						if ((a > b)) {
HXLINE( 399)							zoom = b;
            						}
            						else {
HXLINE( 399)							zoom = a;
            						}
HXLINE( 400)						if (( (bool)(integerScale) )) {
HXLINE( 401)							zoom = ( (Float)(::Std_obj::_hx_int(zoom)) );
HXLINE( 402)							if ((zoom == 0)) {
HXLINE( 402)								zoom = ( (Float)(1) );
            							}
            						}
HXLINE( 404)						{
HXLINE( 404)							 ::h2d::ScaleModeAlign horizontal = horizontalAlign;
HXDLIN( 404)							 ::h2d::ScaleModeAlign vertical = verticalAlign;
HXDLIN( 404)							_gthis->viewportA = ((zoom * ( (Float)(2) )) / ( (Float)(engine->width) ));
HXDLIN( 404)							_gthis->viewportD = ((zoom * ( (Float)(2) )) / ( (Float)(engine->height) ));
HXDLIN( 404)							{
HXLINE( 404)								_gthis->viewportScaleX = zoom;
HXDLIN( 404)								_gthis->viewportScaleY = zoom;
            							}
HXDLIN( 404)							if (::hx::IsNull( horizontal )) {
HXLINE( 404)								horizontal = ::h2d::ScaleModeAlign_obj::Center_dyn();
            							}
HXDLIN( 404)							switch((int)(horizontal->_hx_getIndex())){
            								case (int)0: {
HXLINE( 404)									_gthis->viewportX = ( (Float)(-1) );
HXDLIN( 404)									_gthis->offsetX = ( (Float)(0) );
            								}
            								break;
            								case (int)1: {
HXLINE( 404)									_gthis->viewportX = (( (Float)(1) ) - (( (Float)(_gthis->width) ) * _gthis->viewportA));
HXDLIN( 404)									_gthis->offsetX = (( (Float)(engine->width) ) - (( (Float)(_gthis->width) ) * zoom));
            								}
            								break;
            								default:{
HXLINE( 404)									_gthis->viewportX = ((( (Float)(::Math_obj::floor(((( (Float)(engine->width) ) - (( (Float)(_gthis->width) ) * zoom)) / (zoom * ( (Float)(2) ))))) ) * _gthis->viewportA) - ((Float)1.));
HXDLIN( 404)									_gthis->offsetX = ( (Float)(::Math_obj::floor(((( (Float)(engine->width) ) - (( (Float)(_gthis->width) ) * zoom)) / ( (Float)(2) )))) );
            								}
            							}
HXDLIN( 404)							if (::hx::IsNull( vertical )) {
HXLINE( 404)								vertical = ::h2d::ScaleModeAlign_obj::Center_dyn();
            							}
HXDLIN( 404)							switch((int)(vertical->_hx_getIndex())){
            								case (int)3: {
HXLINE( 404)									_gthis->viewportY = ( (Float)(-1) );
HXDLIN( 404)									_gthis->offsetY = ( (Float)(0) );
            								}
            								break;
            								case (int)4: {
HXLINE( 404)									_gthis->viewportY = (( (Float)(1) ) - (( (Float)(_gthis->height) ) * _gthis->viewportD));
HXDLIN( 404)									_gthis->offsetY = (( (Float)(engine->height) ) - (( (Float)(_gthis->height) ) * zoom));
            								}
            								break;
            								default:{
HXLINE( 404)									_gthis->viewportY = ((( (Float)(::Math_obj::floor(((( (Float)(engine->height) ) - (( (Float)(_gthis->height) ) * zoom)) / (zoom * ( (Float)(2) ))))) ) * _gthis->viewportD) - ((Float)1.));
HXDLIN( 404)									_gthis->offsetY = ( (Float)(::Math_obj::floor(((( (Float)(engine->height) ) - (( (Float)(_gthis->height) ) * zoom)) / ( (Float)(2) )))) );
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 405)					int _width = _g->_hx_getInt(0);
HXDLIN( 405)					int _height = _g->_hx_getInt(1);
HXDLIN( 405)					Float zoom = _g->_hx_getFloat(2);
HXDLIN( 405)					 ::h2d::ScaleModeAlign horizontalAlign = _g->_hx_getObject(3).StaticCast<  ::h2d::ScaleModeAlign >();
HXDLIN( 405)					 ::h2d::ScaleModeAlign verticalAlign = _g->_hx_getObject(4).StaticCast<  ::h2d::ScaleModeAlign >();
HXDLIN( 405)					{
HXLINE( 406)						bool _hx_tmp;
HXDLIN( 406)						if ((_width == _gthis->width)) {
HXLINE( 406)							_hx_tmp = (_height != _gthis->height);
            						}
            						else {
HXLINE( 406)							_hx_tmp = true;
            						}
HXDLIN( 406)						if (_hx_tmp) {
HXLINE( 406)							_gthis->width = _width;
HXDLIN( 406)							_gthis->height = _height;
HXDLIN( 406)							_gthis->posChanged = true;
            						}
HXLINE( 407)						{
HXLINE( 407)							 ::h2d::ScaleModeAlign horizontal = horizontalAlign;
HXDLIN( 407)							 ::h2d::ScaleModeAlign vertical = verticalAlign;
HXDLIN( 407)							_gthis->viewportA = ((zoom * ( (Float)(2) )) / ( (Float)(engine->width) ));
HXDLIN( 407)							_gthis->viewportD = ((zoom * ( (Float)(2) )) / ( (Float)(engine->height) ));
HXDLIN( 407)							{
HXLINE( 407)								_gthis->viewportScaleX = zoom;
HXDLIN( 407)								_gthis->viewportScaleY = zoom;
            							}
HXDLIN( 407)							if (::hx::IsNull( horizontal )) {
HXLINE( 407)								horizontal = ::h2d::ScaleModeAlign_obj::Center_dyn();
            							}
HXDLIN( 407)							switch((int)(horizontal->_hx_getIndex())){
            								case (int)0: {
HXLINE( 407)									_gthis->viewportX = ( (Float)(-1) );
HXDLIN( 407)									_gthis->offsetX = ( (Float)(0) );
            								}
            								break;
            								case (int)1: {
HXLINE( 407)									_gthis->viewportX = (( (Float)(1) ) - (( (Float)(_gthis->width) ) * _gthis->viewportA));
HXDLIN( 407)									_gthis->offsetX = (( (Float)(engine->width) ) - (( (Float)(_gthis->width) ) * zoom));
            								}
            								break;
            								default:{
HXLINE( 407)									_gthis->viewportX = ((( (Float)(::Math_obj::floor(((( (Float)(engine->width) ) - (( (Float)(_gthis->width) ) * zoom)) / (zoom * ( (Float)(2) ))))) ) * _gthis->viewportA) - ((Float)1.));
HXDLIN( 407)									_gthis->offsetX = ( (Float)(::Math_obj::floor(((( (Float)(engine->width) ) - (( (Float)(_gthis->width) ) * zoom)) / ( (Float)(2) )))) );
            								}
            							}
HXDLIN( 407)							if (::hx::IsNull( vertical )) {
HXLINE( 407)								vertical = ::h2d::ScaleModeAlign_obj::Center_dyn();
            							}
HXDLIN( 407)							switch((int)(vertical->_hx_getIndex())){
            								case (int)3: {
HXLINE( 407)									_gthis->viewportY = ( (Float)(-1) );
HXDLIN( 407)									_gthis->offsetY = ( (Float)(0) );
            								}
            								break;
            								case (int)4: {
HXLINE( 407)									_gthis->viewportY = (( (Float)(1) ) - (( (Float)(_gthis->height) ) * _gthis->viewportD));
HXDLIN( 407)									_gthis->offsetY = (( (Float)(engine->height) ) - (( (Float)(_gthis->height) ) * zoom));
            								}
            								break;
            								default:{
HXLINE( 407)									_gthis->viewportY = ((( (Float)(::Math_obj::floor(((( (Float)(engine->height) ) - (( (Float)(_gthis->height) ) * zoom)) / (zoom * ( (Float)(2) ))))) ) * _gthis->viewportD) - ((Float)1.));
HXDLIN( 407)									_gthis->offsetY = ( (Float)(::Math_obj::floor(((( (Float)(engine->height) ) - (( (Float)(_gthis->height) ) * zoom)) / ( (Float)(2) )))) );
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 408)					Float level = _g->_hx_getFloat(0);
HXDLIN( 408)					{
HXLINE( 409)						{
HXLINE( 409)							int w = ::Math_obj::ceil((( (Float)(engine->width) ) / level));
HXDLIN( 409)							int h = ::Math_obj::ceil((( (Float)(engine->height) ) / level));
HXDLIN( 409)							bool _hx_tmp;
HXDLIN( 409)							if ((w == _gthis->width)) {
HXLINE( 409)								_hx_tmp = (h != _gthis->height);
            							}
            							else {
HXLINE( 409)								_hx_tmp = true;
            							}
HXDLIN( 409)							if (_hx_tmp) {
HXLINE( 409)								_gthis->width = w;
HXDLIN( 409)								_gthis->height = h;
HXDLIN( 409)								_gthis->posChanged = true;
            							}
            						}
HXLINE( 410)						{
HXLINE( 410)							_gthis->viewportScaleX = level;
HXDLIN( 410)							_gthis->viewportScaleY = level;
            						}
HXLINE( 411)						{
HXLINE( 411)							_gthis->viewportA = (( (Float)(2) ) / ( (Float)(_gthis->width) ));
HXDLIN( 411)							_gthis->viewportD = (( (Float)(2) ) / ( (Float)(_gthis->height) ));
HXDLIN( 411)							_gthis->viewportX = ( (Float)(-1) );
HXDLIN( 411)							_gthis->viewportY = ( (Float)(-1) );
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 412)					int minWidth = _g->_hx_getInt(0);
HXDLIN( 412)					int minHeight = _g->_hx_getInt(1);
HXDLIN( 412)					 ::Dynamic integerScaling = _g->_hx_getObject(2);
HXDLIN( 412)					{
HXLINE( 413)						Float a = (( (Float)(engine->width) ) / ( (Float)(minWidth) ));
HXDLIN( 413)						Float b = (( (Float)(engine->height) ) / ( (Float)(minHeight) ));
HXDLIN( 413)						Float zoom;
HXDLIN( 413)						if ((a > b)) {
HXLINE( 413)							zoom = b;
            						}
            						else {
HXLINE( 413)							zoom = a;
            						}
HXLINE( 414)						if (( (bool)(integerScaling) )) {
HXLINE( 415)							zoom = ( (Float)(::Std_obj::_hx_int(zoom)) );
HXLINE( 416)							if ((zoom == 0)) {
HXLINE( 416)								zoom = ( (Float)(1) );
            							}
            						}
HXLINE( 418)						{
HXLINE( 418)							int w = ::Math_obj::ceil((( (Float)(engine->width) ) / zoom));
HXDLIN( 418)							int h = ::Math_obj::ceil((( (Float)(engine->height) ) / zoom));
HXDLIN( 418)							bool _hx_tmp;
HXDLIN( 418)							if ((w == _gthis->width)) {
HXLINE( 418)								_hx_tmp = (h != _gthis->height);
            							}
            							else {
HXLINE( 418)								_hx_tmp = true;
            							}
HXDLIN( 418)							if (_hx_tmp) {
HXLINE( 418)								_gthis->width = w;
HXDLIN( 418)								_gthis->height = h;
HXDLIN( 418)								_gthis->posChanged = true;
            							}
            						}
HXLINE( 419)						{
HXLINE( 419)							_gthis->viewportScaleX = zoom;
HXDLIN( 419)							_gthis->viewportScaleY = zoom;
            						}
HXLINE( 420)						{
HXLINE( 420)							_gthis->viewportA = (( (Float)(2) ) / ( (Float)(_gthis->width) ));
HXDLIN( 420)							_gthis->viewportD = (( (Float)(2) ) / ( (Float)(_gthis->height) ));
HXDLIN( 420)							_gthis->viewportX = ( (Float)(-1) );
HXDLIN( 420)							_gthis->viewportY = ( (Float)(-1) );
            						}
            					}
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,checkResize,(void))

Float Scene_obj::screenXToViewport(Float mx){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_425_screenXToViewport)
HXDLIN( 425)		 ::h2d::Camera _this = this->interactiveCamera;
HXDLIN( 425)		Float mx1 = ( (Float)(this->window->get_mouseX()) );
HXDLIN( 425)		Float my = ( (Float)(this->window->get_mouseY()) );
HXDLIN( 425)		return ((((((mx1 - _this->scene->offsetX) / _this->scene->viewportScaleX) - _this->absX) * _this->matD) - ((((my - _this->scene->offsetY) / _this->scene->viewportScaleY) - _this->absY) * _this->matC)) * _this->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,screenXToViewport,return )

Float Scene_obj::screenYToViewport(Float my){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_429_screenYToViewport)
HXDLIN( 429)		 ::h2d::Camera _this = this->interactiveCamera;
HXDLIN( 429)		Float mx = ( (Float)(this->window->get_mouseX()) );
HXDLIN( 429)		Float my1 = ( (Float)(this->window->get_mouseY()) );
HXDLIN( 429)		return (((-((((mx - _this->scene->offsetX) / _this->scene->viewportScaleX) - _this->absX)) * _this->matB) + ((((my1 - _this->scene->offsetY) / _this->scene->viewportScaleY) - _this->absY) * _this->matA)) * _this->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,screenYToViewport,return )

Float Scene_obj::get_mouseX(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_432_get_mouseX)
HXLINE( 433)		this->syncPos();
HXLINE( 434)		Float mx = ( (Float)(this->window->get_mouseX()) );
HXDLIN( 434)		 ::h2d::Camera _this = this->interactiveCamera;
HXDLIN( 434)		Float mx1 = ( (Float)(this->window->get_mouseX()) );
HXDLIN( 434)		Float my = ( (Float)(this->window->get_mouseY()) );
HXDLIN( 434)		Float dx = (((((((mx1 - _this->scene->offsetX) / _this->scene->viewportScaleX) - _this->absX) * _this->matD) - ((((my - _this->scene->offsetY) / _this->scene->viewportScaleY) - _this->absY) * _this->matC)) * _this->invDet) - this->absX);
HXLINE( 435)		if ((this->matC == 0)) {
HXLINE( 435)			return (dx / this->matA);
            		}
HXLINE( 436)		Float my1 = ( (Float)(this->window->get_mouseY()) );
HXDLIN( 436)		 ::h2d::Camera _this1 = this->interactiveCamera;
HXDLIN( 436)		Float mx2 = ( (Float)(this->window->get_mouseX()) );
HXDLIN( 436)		Float my2 = ( (Float)(this->window->get_mouseY()) );
HXDLIN( 436)		Float dy = ((((-((((mx2 - _this1->scene->offsetX) / _this1->scene->viewportScaleX) - _this1->absX)) * _this1->matB) + ((((my2 - _this1->scene->offsetY) / _this1->scene->viewportScaleY) - _this1->absY) * _this1->matA)) * _this1->invDet) - this->absY);
HXLINE( 437)		return (((dx * this->matD) - (dy * this->matC)) / ((this->matA * this->matD) - (this->matB * this->matC)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseX,return )

Float Scene_obj::get_mouseY(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_440_get_mouseY)
HXLINE( 441)		this->syncPos();
HXLINE( 442)		Float my = ( (Float)(this->window->get_mouseY()) );
HXDLIN( 442)		 ::h2d::Camera _this = this->interactiveCamera;
HXDLIN( 442)		Float mx = ( (Float)(this->window->get_mouseX()) );
HXDLIN( 442)		Float my1 = ( (Float)(this->window->get_mouseY()) );
HXDLIN( 442)		Float dy = ((((-((((mx - _this->scene->offsetX) / _this->scene->viewportScaleX) - _this->absX)) * _this->matB) + ((((my1 - _this->scene->offsetY) / _this->scene->viewportScaleY) - _this->absY) * _this->matA)) * _this->invDet) - this->absY);
HXLINE( 443)		if ((this->matB == 0)) {
HXLINE( 443)			return (dy / this->matD);
            		}
HXLINE( 444)		Float mx1 = ( (Float)(this->window->get_mouseX()) );
HXDLIN( 444)		 ::h2d::Camera _this1 = this->interactiveCamera;
HXDLIN( 444)		Float mx2 = ( (Float)(this->window->get_mouseX()) );
HXDLIN( 444)		Float my2 = ( (Float)(this->window->get_mouseY()) );
HXDLIN( 444)		Float dx = (((((((mx2 - _this1->scene->offsetX) / _this1->scene->viewportScaleX) - _this1->absX) * _this1->matD) - ((((my2 - _this1->scene->offsetY) / _this1->scene->viewportScaleY) - _this1->absY) * _this1->matC)) * _this1->invDet) - this->absX);
HXLINE( 445)		return (((dy * this->matA) - (dx * this->matB)) / ((this->matA * this->matD) - (this->matB * this->matC)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseY,return )

void Scene_obj::dispatchListeners( ::hxd::Event event){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_449_dispatchListeners)
HXLINE( 450)		this->screenToViewport(event);
HXLINE( 451)		{
HXLINE( 451)			int _g = 0;
HXDLIN( 451)			::Array< ::Dynamic> _g1 = this->eventListeners;
HXDLIN( 451)			while((_g < _g1->length)){
HXLINE( 451)				 ::Dynamic l = _g1->__get(_g);
HXDLIN( 451)				_g = (_g + 1);
HXLINE( 452)				l(event);
HXLINE( 453)				if (!(event->propagate)) {
HXLINE( 453)					goto _hx_goto_20;
            				}
            			}
            			_hx_goto_20:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,dispatchListeners,(void))

bool Scene_obj::isInteractiveVisible(::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_458_isInteractiveVisible)
HXLINE( 459)		 ::h2d::Object s = ( ( ::h2d::Object)(i) );
HXLINE( 460)		while(::hx::IsInstanceNotEq( s,::hx::ObjectPtr<OBJ_>(this) )){
HXLINE( 461)			bool _hx_tmp;
HXDLIN( 461)			if (::hx::IsNotNull( s )) {
HXLINE( 461)				_hx_tmp = !(s->visible);
            			}
            			else {
HXLINE( 461)				_hx_tmp = true;
            			}
HXDLIN( 461)			if (_hx_tmp) {
HXLINE( 461)				return false;
            			}
HXLINE( 462)			s = s->parent;
            		}
HXLINE( 464)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isInteractiveVisible,return )

 ::h2d::Interactive Scene_obj::getInteractive(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_470_getInteractive)
HXLINE( 471)		 ::h2d::col::Point pt = this->shapePoint;
HXLINE( 472)		{
HXLINE( 472)			int _g = 0;
HXDLIN( 472)			::Array< ::Dynamic> _g1 = this->interactive;
HXDLIN( 472)			while((_g < _g1->length)){
HXLINE( 472)				 ::h2d::Interactive i = _g1->__get(_g).StaticCast<  ::h2d::Interactive >();
HXDLIN( 472)				_g = (_g + 1);
HXLINE( 473)				if (i->posChanged) {
HXLINE( 473)					i->syncPos();
            				}
HXLINE( 475)				Float dx = (x - i->absX);
HXLINE( 476)				Float dy = (y - i->absY);
HXLINE( 477)				Float rx = (((dx * i->matD) - (dy * i->matC)) * i->invDet);
HXLINE( 478)				Float ry = (((dy * i->matA) - (dx * i->matB)) * i->invDet);
HXLINE( 480)				if (::hx::IsNotNull( i->shape )) {
HXLINE( 481)					{
HXLINE( 481)						pt->x = (rx + i->shapeX);
HXDLIN( 481)						pt->y = (ry + i->shapeY);
            					}
HXLINE( 482)					if (!(::h2d::col::Collider_obj::contains(i->shape,pt))) {
HXLINE( 482)						continue;
            					}
            				}
            				else {
HXLINE( 484)					bool _hx_tmp;
HXDLIN( 484)					bool _hx_tmp1;
HXDLIN( 484)					bool _hx_tmp2;
HXDLIN( 484)					if (!((ry < 0))) {
HXLINE( 484)						_hx_tmp2 = (rx < 0);
            					}
            					else {
HXLINE( 484)						_hx_tmp2 = true;
            					}
HXDLIN( 484)					if (!(_hx_tmp2)) {
HXLINE( 484)						_hx_tmp1 = (rx >= i->width);
            					}
            					else {
HXLINE( 484)						_hx_tmp1 = true;
            					}
HXDLIN( 484)					if (!(_hx_tmp1)) {
HXLINE( 484)						_hx_tmp = (ry >= i->height);
            					}
            					else {
HXLINE( 484)						_hx_tmp = true;
            					}
HXDLIN( 484)					if (_hx_tmp) {
HXLINE( 485)						continue;
            					}
            				}
HXLINE( 489)				bool visible = true;
HXLINE( 490)				 ::h2d::Object p = i;
HXLINE( 491)				while(::hx::IsNotNull( p )){
HXLINE( 492)					if (!(p->visible)) {
HXLINE( 493)						visible = false;
HXLINE( 494)						goto _hx_goto_25;
            					}
HXLINE( 496)					p = p->parent;
            				}
            				_hx_goto_25:;
HXLINE( 498)				if (!(visible)) {
HXLINE( 498)					continue;
            				}
HXLINE( 500)				return i;
            			}
            		}
HXLINE( 502)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getInteractive,return )

void Scene_obj::screenToViewport( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_506_screenToViewport)
HXDLIN( 506)		this->interactiveCamera->eventToCamera(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,screenToViewport,(void))

void Scene_obj::dispatchEvent( ::hxd::Event event,::Dynamic to){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_510_dispatchEvent)
HXLINE( 511)		 ::h2d::Interactive i = ( ( ::h2d::Interactive)(to) );
HXLINE( 512)		this->screenToViewport(event);
HXLINE( 513)		Float dx = (event->relX - i->absX);
HXLINE( 514)		Float dy = (event->relY - i->absY);
HXLINE( 515)		Float rx = (((dx * i->matD) - (dy * i->matC)) * i->invDet);
HXLINE( 516)		Float ry = (((dy * i->matA) - (dx * i->matB)) * i->invDet);
HXLINE( 517)		event->relX = rx;
HXLINE( 518)		event->relY = ry;
HXLINE( 519)		i->handleEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,dispatchEvent,(void))

::Dynamic Scene_obj::handleEvent( ::hxd::Event event,::Dynamic last){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_523_handleEvent)
HXLINE( 524)		this->screenToViewport(event);
HXLINE( 525)		Float ex = event->relX;
HXLINE( 526)		Float ey = event->relY;
HXLINE( 527)		int index;
HXDLIN( 527)		if (::hx::IsNull( last )) {
HXLINE( 527)			index = 0;
            		}
            		else {
HXLINE( 527)			index = (this->interactive->indexOf(( ( ::h2d::Interactive)(last) ),null()) + 1);
            		}
HXLINE( 528)		 ::h2d::col::Point pt = this->shapePoint;
HXLINE( 529)		{
HXLINE( 529)			int _g = index;
HXDLIN( 529)			int _g1 = this->interactive->length;
HXDLIN( 529)			while((_g < _g1)){
HXLINE( 529)				_g = (_g + 1);
HXDLIN( 529)				int idx = (_g - 1);
HXLINE( 530)				 ::h2d::Interactive i = this->interactive->__get(idx).StaticCast<  ::h2d::Interactive >();
HXLINE( 531)				if (::hx::IsNull( i )) {
HXLINE( 531)					goto _hx_goto_29;
            				}
HXLINE( 533)				if ((i->invDet == 0)) {
HXLINE( 536)					continue;
            				}
HXLINE( 539)				Float dx = (ex - i->absX);
HXLINE( 540)				Float dy = (ey - i->absY);
HXLINE( 541)				Float rx = (((dx * i->matD) - (dy * i->matC)) * i->invDet);
HXLINE( 542)				Float ry = (((dy * i->matA) - (dx * i->matB)) * i->invDet);
HXLINE( 544)				if (::hx::IsNotNull( i->shape )) {
HXLINE( 546)					{
HXLINE( 546)						pt->x = (rx + i->shapeX);
HXDLIN( 546)						pt->y = (ry + i->shapeY);
            					}
HXLINE( 547)					if (!(::h2d::col::Collider_obj::contains(i->shape,pt))) {
HXLINE( 547)						continue;
            					}
            				}
            				else {
HXLINE( 550)					bool _hx_tmp;
HXDLIN( 550)					bool _hx_tmp1;
HXDLIN( 550)					bool _hx_tmp2;
HXDLIN( 550)					if (!((ry < 0))) {
HXLINE( 550)						_hx_tmp2 = (rx < 0);
            					}
            					else {
HXLINE( 550)						_hx_tmp2 = true;
            					}
HXDLIN( 550)					if (!(_hx_tmp2)) {
HXLINE( 550)						_hx_tmp1 = (rx >= i->width);
            					}
            					else {
HXLINE( 550)						_hx_tmp1 = true;
            					}
HXDLIN( 550)					if (!(_hx_tmp1)) {
HXLINE( 550)						_hx_tmp = (ry >= i->height);
            					}
            					else {
HXLINE( 550)						_hx_tmp = true;
            					}
HXDLIN( 550)					if (_hx_tmp) {
HXLINE( 551)						continue;
            					}
            				}
HXLINE( 555)				bool visible = true;
HXLINE( 556)				 ::h2d::Object p = i;
HXLINE( 557)				while(::hx::IsNotNull( p )){
HXLINE( 558)					if (!(p->visible)) {
HXLINE( 559)						visible = false;
HXLINE( 560)						goto _hx_goto_30;
            					}
HXLINE( 562)					p = p->parent;
            				}
            				_hx_goto_30:;
HXLINE( 564)				if (!(visible)) {
HXLINE( 564)					continue;
            				}
HXLINE( 566)				event->relX = rx;
HXLINE( 567)				event->relY = ry;
HXLINE( 569)				i->handleEvent(event);
HXLINE( 571)				if (event->cancel) {
HXLINE( 572)					event->cancel = false;
HXLINE( 573)					event->propagate = false;
HXLINE( 574)					continue;
            				}
HXLINE( 577)				return i;
            			}
            			_hx_goto_29:;
            		}
HXLINE( 579)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,handleEvent,return )

void Scene_obj::addEventListener( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_586_addEventListener)
HXDLIN( 586)		this->eventListeners->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addEventListener,(void))

bool Scene_obj::removeEventListener( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_592_removeEventListener)
HXLINE( 593)		{
HXLINE( 593)			int _g = 0;
HXDLIN( 593)			::Array< ::Dynamic> _g1 = this->eventListeners;
HXDLIN( 593)			while((_g < _g1->length)){
HXLINE( 593)				 ::Dynamic e = _g1->__get(_g);
HXDLIN( 593)				_g = (_g + 1);
HXLINE( 594)				if (::Reflect_obj::compareMethods(e,f)) {
HXLINE( 595)					this->eventListeners->remove(e);
HXLINE( 596)					return true;
            				}
            			}
            		}
HXLINE( 598)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeEventListener,return )

void Scene_obj::startCapture( ::Dynamic onEvent, ::Dynamic onCancel, ::Dynamic touchId){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::h2d::Scene,_gthis, ::Dynamic,onEvent) HXARGC(1)
            		void _hx_run( ::hxd::Event e){
            			HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_613_startCapture)
HXLINE( 614)			_gthis->screenToViewport(e);
HXLINE( 615)			onEvent(e);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_612_startCapture)
HXDLIN( 612)		 ::h2d::Scene _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 613)		this->events->startCapture( ::Dynamic(new _hx_Closure_0(_gthis,onEvent)),onCancel,touchId);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,startCapture,(void))

void Scene_obj::stopCapture(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_623_stopCapture)
HXDLIN( 623)		this->events->stopCapture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,stopCapture,(void))

void Scene_obj::startDrag( ::Dynamic onEvent, ::Dynamic onCancel, ::hxd::Event refEvent){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_628_startDrag)
HXDLIN( 628)		 ::Dynamic _hx_tmp;
HXDLIN( 628)		if (::hx::IsNotNull( refEvent )) {
HXDLIN( 628)			_hx_tmp = refEvent->touchId;
            		}
            		else {
HXDLIN( 628)			_hx_tmp = null();
            		}
HXDLIN( 628)		this->startCapture(onEvent,onCancel,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,startDrag,(void))

void Scene_obj::stopDrag(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_633_stopDrag)
HXDLIN( 633)		this->stopCapture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,stopDrag,(void))

 ::h2d::Interactive Scene_obj::getFocus(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_639_getFocus)
HXLINE( 640)		if (::hx::IsNull( this->events )) {
HXLINE( 641)			return null();
            		}
HXLINE( 642)		::Dynamic f = this->events->getFocus();
HXLINE( 643)		if (::hx::IsNull( f )) {
HXLINE( 644)			return null();
            		}
HXLINE( 645)		 ::h2d::Interactive i = ( ( ::h2d::Interactive)(::Std_obj::downcast(f,::hx::ClassOf< ::h2d::Interactive >())) );
HXLINE( 646)		if (::hx::IsNull( i )) {
HXLINE( 647)			return null();
            		}
HXLINE( 648)		return this->interactive->__get(this->interactive->indexOf(i,null())).StaticCast<  ::h2d::Interactive >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getFocus,return )

void Scene_obj::addEventTarget( ::h2d::Interactive i){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_653_addEventTarget)
HXLINE( 672)		 ::h2d::Object i1 = i;
HXDLIN( 672)		int lv = 0;
HXDLIN( 672)		while(::hx::IsNotNull( i1 )){
HXLINE( 672)			i1 = i1->parent;
HXDLIN( 672)			lv = (lv + 1);
            		}
HXDLIN( 672)		int level = lv;
HXLINE( 673)		{
HXLINE( 673)			int _g = 0;
HXDLIN( 673)			int _g1 = this->interactive->length;
HXDLIN( 673)			while((_g < _g1)){
HXLINE( 673)				_g = (_g + 1);
HXDLIN( 673)				int index = (_g - 1);
HXLINE( 674)				 ::h2d::Object i1 = i;
HXLINE( 675)				 ::h2d::Object i2 = this->interactive->__get(index).StaticCast<  ::h2d::Interactive >();
HXLINE( 676)				int lv1 = level;
HXLINE( 677)				 ::h2d::Object i3 = i2;
HXDLIN( 677)				int lv = 0;
HXDLIN( 677)				while(::hx::IsNotNull( i3 )){
HXLINE( 677)					i3 = i3->parent;
HXDLIN( 677)					lv = (lv + 1);
            				}
HXDLIN( 677)				int lv2 = lv;
HXLINE( 678)				 ::h2d::Object p1 = i1;
HXLINE( 679)				 ::h2d::Object p2 = i2;
HXLINE( 680)				while((lv1 > lv2)){
HXLINE( 681)					i1 = p1;
HXLINE( 682)					p1 = p1->parent;
HXLINE( 683)					lv1 = (lv1 - 1);
            				}
HXLINE( 685)				while((lv2 > lv1)){
HXLINE( 686)					i2 = p2;
HXLINE( 687)					p2 = p2->parent;
HXLINE( 688)					lv2 = (lv2 - 1);
            				}
HXLINE( 690)				while(::hx::IsInstanceNotEq( p1,p2 )){
HXLINE( 691)					i1 = p1;
HXLINE( 692)					p1 = p1->parent;
HXLINE( 693)					i2 = p2;
HXLINE( 694)					p2 = p2->parent;
            				}
HXLINE( 696)				int id = -1;
HXDLIN( 696)				{
HXLINE( 696)					int _g1 = 0;
HXDLIN( 696)					int _g2 = p1->children->length;
HXDLIN( 696)					while((_g1 < _g2)){
HXLINE( 696)						_g1 = (_g1 + 1);
HXDLIN( 696)						int k = (_g1 - 1);
HXDLIN( 696)						if (::hx::IsInstanceEq( p1->children->__get(k).StaticCast<  ::h2d::Object >(),i1 )) {
HXLINE( 696)							id = k;
HXDLIN( 696)							goto _hx_goto_47;
            						}
            					}
            					_hx_goto_47:;
            				}
HXDLIN( 696)				int _hx_tmp = id;
HXDLIN( 696)				int id1 = -1;
HXDLIN( 696)				{
HXLINE( 696)					int _g3 = 0;
HXDLIN( 696)					int _g4 = p2->children->length;
HXDLIN( 696)					while((_g3 < _g4)){
HXLINE( 696)						_g3 = (_g3 + 1);
HXDLIN( 696)						int k = (_g3 - 1);
HXDLIN( 696)						if (::hx::IsInstanceEq( p2->children->__get(k).StaticCast<  ::h2d::Object >(),i2 )) {
HXLINE( 696)							id1 = k;
HXDLIN( 696)							goto _hx_goto_48;
            						}
            					}
            					_hx_goto_48:;
            				}
HXDLIN( 696)				if ((_hx_tmp > id1)) {
HXLINE( 697)					this->interactive->insert(index,i);
HXLINE( 698)					return;
            				}
            			}
            		}
HXLINE( 701)		this->interactive->push(i);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addEventTarget,(void))

void Scene_obj::removeEventTarget( ::h2d::Interactive i,::hx::Null< bool >  __o_notify){
            		bool notify = __o_notify.Default(false);
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_705_removeEventTarget)
HXLINE( 706)		this->interactive->remove(i);
HXLINE( 707)		bool _hx_tmp;
HXDLIN( 707)		if (notify) {
HXLINE( 707)			_hx_tmp = ::hx::IsNotNull( this->events );
            		}
            		else {
HXLINE( 707)			_hx_tmp = false;
            		}
HXDLIN( 707)		if (_hx_tmp) {
HXLINE( 708)			this->events->onRemove(i);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,removeEventTarget,(void))

void Scene_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_716_dispose)
HXLINE( 717)		if (this->allocated) {
HXLINE( 718)			this->onRemove();
            		}
HXLINE( 719)		this->ctx->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,dispose,(void))

void Scene_obj::setElapsedTime(Float v){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_729_setElapsedTime)
HXDLIN( 729)		this->ctx->elapsedTime = v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setElapsedTime,(void))

void Scene_obj::drawImplTo( ::h2d::Object s,::Array< ::Dynamic> texs,::Array< ::Dynamic> outputs){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_732_drawImplTo)
HXLINE( 733)		{
HXLINE( 733)			int _g = 0;
HXDLIN( 733)			while((_g < texs->length)){
HXLINE( 733)				 ::h3d::mat::Texture t = texs->__get(_g).StaticCast<  ::h3d::mat::Texture >();
HXDLIN( 733)				_g = (_g + 1);
HXLINE( 734)				int this1 = t->flags;
HXDLIN( 734)				if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Target_dyn()))) == 0)) {
HXLINE( 735)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Can only draw to texture created with Target flag",eb,8d,11,86)));
            				}
            			}
            		}
HXLINE( 736)		this->ctx->engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 737)		 ::Dynamic oldBG = this->ctx->engine->backgroundColor;
HXLINE( 738)		this->ctx->engine->backgroundColor = null();
HXLINE( 739)		if (!(this->ctx->engine->inRender)) {
HXLINE( 739)			this->ctx->begin();
            		}
HXLINE( 740)		this->ctx->globalAlpha = this->alpha;
HXLINE( 741)		this->ctx->begin();
HXLINE( 742)		this->ctx->pushTargets(texs);
HXLINE( 743)		if (::hx::IsNotNull( outputs )) {
HXLINE( 743)			this->ctx->manager->setOutput(outputs);
            		}
HXLINE( 744)		s->drawRec(this->ctx);
HXLINE( 745)		if (::hx::IsNotNull( outputs )) {
HXLINE( 745)			this->ctx->manager->setOutput(null());
            		}
HXLINE( 746)		this->ctx->popTarget();
HXLINE( 747)		this->ctx->engine->backgroundColor = oldBG;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,drawImplTo,(void))

void Scene_obj::syncOnly(Float et){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_753_syncOnly)
HXLINE( 754)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 755)		this->setElapsedTime(et);
HXLINE( 756)		this->ctx->engine = engine;
HXLINE( 757)		this->ctx->frame++;
HXLINE( 758)		 ::h2d::RenderContext fh = this->ctx;
HXDLIN( 758)		fh->time = (fh->time + this->ctx->elapsedTime);
HXLINE( 759)		this->ctx->globalAlpha = this->alpha;
HXLINE( 760)		this->sync(this->ctx);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,syncOnly,(void))

void Scene_obj::render( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_768_render)
HXLINE( 769)		this->ctx->engine = engine;
HXLINE( 770)		this->ctx->frame++;
HXLINE( 771)		 ::h2d::RenderContext fh = this->ctx;
HXDLIN( 771)		fh->time = (fh->time + this->ctx->elapsedTime);
HXLINE( 772)		this->ctx->globalAlpha = this->alpha;
HXLINE( 773)		this->sync(this->ctx);
HXLINE( 774)		if ((this->children->length == 0)) {
HXLINE( 774)			return;
            		}
HXLINE( 775)		this->ctx->begin();
HXLINE( 776)		this->ctx->drawScene();
HXLINE( 777)		this->ctx->end();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,render,(void))

void Scene_obj::sync( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_780_sync)
HXLINE( 781)		bool forceCamSync = this->posChanged;
HXLINE( 782)		if (!(this->allocated)) {
HXLINE( 783)			this->onAdd();
            		}
HXLINE( 784)		this->super::sync(ctx);
HXLINE( 785)		{
HXLINE( 785)			int _g = 0;
HXDLIN( 785)			::Array< ::Dynamic> _g1 = this->_cameras;
HXDLIN( 785)			while((_g < _g1->length)){
HXLINE( 785)				 ::h2d::Camera cam = _g1->__get(_g).StaticCast<  ::h2d::Camera >();
HXDLIN( 785)				_g = (_g + 1);
HXDLIN( 785)				cam->sync(ctx,forceCamSync);
            			}
            		}
            	}


void Scene_obj::clipBounds( ::h2d::RenderContext ctx, ::h2d::col::Bounds bounds){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_789_clipBounds)
HXDLIN( 789)		 ::h2d::Scene _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 791)		if ((this->rotation == 0)) {
HXLINE( 792)			{
HXLINE( 792)				Float x = -(this->absX);
HXDLIN( 792)				Float y = -(this->absY);
HXDLIN( 792)				if ((x < bounds->xMin)) {
HXLINE( 792)					bounds->xMin = x;
            				}
HXDLIN( 792)				if ((x > bounds->xMax)) {
HXLINE( 792)					bounds->xMax = x;
            				}
HXDLIN( 792)				if ((y < bounds->yMin)) {
HXLINE( 792)					bounds->yMin = y;
            				}
HXDLIN( 792)				if ((y > bounds->yMax)) {
HXLINE( 792)					bounds->yMax = y;
            				}
            			}
HXLINE( 793)			{
HXLINE( 793)				int x1 = this->window->get_width();
HXDLIN( 793)				Float x2 = ((( (Float)(x1) ) / this->matA) - this->absX);
HXDLIN( 793)				int y1 = this->window->get_height();
HXDLIN( 793)				Float y2 = ((( (Float)(y1) ) / this->matD) - this->absY);
HXDLIN( 793)				if ((x2 < bounds->xMin)) {
HXLINE( 793)					bounds->xMin = x2;
            				}
HXDLIN( 793)				if ((x2 > bounds->xMax)) {
HXLINE( 793)					bounds->xMax = x2;
            				}
HXDLIN( 793)				if ((y2 < bounds->yMin)) {
HXLINE( 793)					bounds->yMin = y2;
            				}
HXDLIN( 793)				if ((y2 > bounds->yMax)) {
HXLINE( 793)					bounds->yMax = y2;
            				}
            			}
            		}
            		else {
HXLINE( 798)			int ww = this->window->get_width();
HXDLIN( 798)			Float ww1 = ((( (Float)(ww) ) / this->matA) - this->absX);
HXLINE( 799)			int wh = this->window->get_height();
HXDLIN( 799)			Float wh1 = ((( (Float)(wh) ) / this->matD) - this->absY);
HXLINE( 800)			{
HXLINE( 800)				Float x = -(this->absX);
HXDLIN( 800)				Float y = -(this->absY);
HXDLIN( 800)				{
HXLINE( 800)					Float x1 = ((x * _gthis->matA) + (y * _gthis->matC));
HXDLIN( 800)					Float y1 = ((x * _gthis->matB) + (y * _gthis->matD));
HXDLIN( 800)					if ((x1 < bounds->xMin)) {
HXLINE( 800)						bounds->xMin = x1;
            					}
HXDLIN( 800)					if ((x1 > bounds->xMax)) {
HXLINE( 800)						bounds->xMax = x1;
            					}
HXDLIN( 800)					if ((y1 < bounds->yMin)) {
HXLINE( 800)						bounds->yMin = y1;
            					}
HXDLIN( 800)					if ((y1 > bounds->yMax)) {
HXLINE( 800)						bounds->yMax = y1;
            					}
            				}
            			}
HXLINE( 801)			{
HXLINE( 801)				Float x2 = (ww1 - this->absX);
HXDLIN( 801)				Float y2 = -(this->absY);
HXDLIN( 801)				{
HXLINE( 801)					Float x3 = ((x2 * _gthis->matA) + (y2 * _gthis->matC));
HXDLIN( 801)					Float y3 = ((x2 * _gthis->matB) + (y2 * _gthis->matD));
HXDLIN( 801)					if ((x3 < bounds->xMin)) {
HXLINE( 801)						bounds->xMin = x3;
            					}
HXDLIN( 801)					if ((x3 > bounds->xMax)) {
HXLINE( 801)						bounds->xMax = x3;
            					}
HXDLIN( 801)					if ((y3 < bounds->yMin)) {
HXLINE( 801)						bounds->yMin = y3;
            					}
HXDLIN( 801)					if ((y3 > bounds->yMax)) {
HXLINE( 801)						bounds->yMax = y3;
            					}
            				}
            			}
HXLINE( 802)			{
HXLINE( 802)				Float x4 = -(this->absX);
HXDLIN( 802)				Float y4 = (wh1 - this->absY);
HXDLIN( 802)				{
HXLINE( 802)					Float x5 = ((x4 * _gthis->matA) + (y4 * _gthis->matC));
HXDLIN( 802)					Float y5 = ((x4 * _gthis->matB) + (y4 * _gthis->matD));
HXDLIN( 802)					if ((x5 < bounds->xMin)) {
HXLINE( 802)						bounds->xMin = x5;
            					}
HXDLIN( 802)					if ((x5 > bounds->xMax)) {
HXLINE( 802)						bounds->xMax = x5;
            					}
HXDLIN( 802)					if ((y5 < bounds->yMin)) {
HXLINE( 802)						bounds->yMin = y5;
            					}
HXDLIN( 802)					if ((y5 > bounds->yMax)) {
HXLINE( 802)						bounds->yMax = y5;
            					}
            				}
            			}
HXLINE( 803)			{
HXLINE( 803)				Float x6 = (ww1 - this->absX);
HXDLIN( 803)				Float y6 = (wh1 - this->absY);
HXDLIN( 803)				{
HXLINE( 803)					Float x7 = ((x6 * _gthis->matA) + (y6 * _gthis->matC));
HXDLIN( 803)					Float y7 = ((x6 * _gthis->matB) + (y6 * _gthis->matD));
HXDLIN( 803)					if ((x7 < bounds->xMin)) {
HXLINE( 803)						bounds->xMin = x7;
            					}
HXDLIN( 803)					if ((x7 > bounds->xMax)) {
HXLINE( 803)						bounds->xMax = x7;
            					}
HXDLIN( 803)					if ((y7 < bounds->yMin)) {
HXLINE( 803)						bounds->yMin = y7;
            					}
HXDLIN( 803)					if ((y7 > bounds->yMax)) {
HXLINE( 803)						bounds->yMax = y7;
            					}
            				}
            			}
            		}
HXLINE( 805)		this->super::clipBounds(ctx,bounds);
            	}


void Scene_obj::drawContent( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_810_drawContent)
HXDLIN( 810)		if (ctx->front2back) {
HXLINE( 811)			{
HXLINE( 811)				int _g = 0;
HXDLIN( 811)				::Array< ::Dynamic> _g1 = this->_cameras;
HXDLIN( 811)				while((_g < _g1->length)){
HXLINE( 811)					 ::h2d::Camera cam = _g1->__get(_g).StaticCast<  ::h2d::Camera >();
HXDLIN( 811)					_g = (_g + 1);
HXLINE( 812)					if (!(cam->visible)) {
HXLINE( 812)						continue;
            					}
HXLINE( 813)					int i = this->children->length;
HXLINE( 814)					int l = this->layerCount;
HXLINE( 815)					cam->enter(ctx);
HXLINE( 816)					while(true){
HXLINE( 816)						l = (l - 1);
HXDLIN( 816)						if (!(((l + 1) > 0))) {
HXLINE( 816)							goto _hx_goto_61;
            						}
HXLINE( 817)						int top;
HXDLIN( 817)						if ((l == 0)) {
HXLINE( 817)							top = 0;
            						}
            						else {
HXLINE( 817)							top = this->layersIndexes->__get((l - 1));
            						}
HXLINE( 818)						if (( (bool)(cam->layerVisible(l)) )) {
HXLINE( 819)							while((i >= top)){
HXLINE( 820)								i = (i - 1);
HXDLIN( 820)								this->children->__get((i + 1)).StaticCast<  ::h2d::Object >()->drawRec(ctx);
            							}
            						}
            						else {
HXLINE( 823)							i = (top - 1);
            						}
            					}
            					_hx_goto_61:;
HXLINE( 826)					cam->exit(ctx);
            				}
            			}
HXLINE( 828)			this->draw(ctx);
            		}
            		else {
HXLINE( 830)			this->draw(ctx);
HXLINE( 831)			{
HXLINE( 831)				int _g = 0;
HXDLIN( 831)				::Array< ::Dynamic> _g1 = this->_cameras;
HXDLIN( 831)				while((_g < _g1->length)){
HXLINE( 831)					 ::h2d::Camera cam = _g1->__get(_g).StaticCast<  ::h2d::Camera >();
HXDLIN( 831)					_g = (_g + 1);
HXLINE( 832)					if (!(cam->visible)) {
HXLINE( 832)						continue;
            					}
HXLINE( 833)					int i = 0;
HXLINE( 834)					int l = 0;
HXLINE( 835)					cam->enter(ctx);
HXLINE( 836)					while((l < this->layerCount)){
HXLINE( 837)						l = (l + 1);
HXDLIN( 837)						int top = this->layersIndexes->__get((l - 1));
HXLINE( 838)						if (( (bool)(cam->layerVisible((l - 1))) )) {
HXLINE( 839)							while((i < top)){
HXLINE( 840)								i = (i + 1);
HXDLIN( 840)								this->children->__get((i - 1)).StaticCast<  ::h2d::Object >()->drawRec(ctx);
            							}
            						}
            						else {
HXLINE( 843)							i = top;
            						}
            					}
HXLINE( 846)					cam->exit(ctx);
            				}
            			}
            		}
            	}


void Scene_obj::onAdd(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_851_onAdd)
HXLINE( 852)		this->checkResize();
HXLINE( 853)		this->super::onAdd();
HXLINE( 854)		this->window->addResizeEvent(this->checkResize_dyn());
            	}


void Scene_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_c5c188afec21dee0_857_onRemove)
HXLINE( 858)		this->super::onRemove();
HXLINE( 859)		this->window->removeResizeEvent(this->checkResize_dyn());
            	}


 ::h2d::Bitmap Scene_obj::captureBitmap( ::h2d::Tile target){
            	HX_GC_STACKFRAME(&_hx_pos_c5c188afec21dee0_868_captureBitmap)
HXLINE( 869)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 870)		if (::hx::IsNull( target )) {
HXLINE( 871)			 ::h3d::mat::Texture tex =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,this->width,this->height,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::mat::TextureFlags_obj::Target_dyn()),null());
HXLINE( 872)			target =  ::h2d::Tile_obj::__alloc( HX_CTX ,tex,( (Float)(0) ),( (Float)(0) ),( (Float)(this->width) ),( (Float)(this->height) ),null(),null());
            		}
HXLINE( 874)		engine->begin();
HXLINE( 875)		int _hx_tmp = ::Std_obj::_hx_int(target->x);
HXDLIN( 875)		int _hx_tmp1 = ::Std_obj::_hx_int(target->y);
HXDLIN( 875)		engine->setRenderZone(_hx_tmp,_hx_tmp1,::Math_obj::ceil(target->width),::Math_obj::ceil(target->height));
HXLINE( 877)		 ::h3d::mat::Texture tex = target->innerTex;
HXLINE( 878)		engine->pushTarget(tex,null(),null());
HXLINE( 879)		int ow = this->width;
HXDLIN( 879)		int oh = this->height;
HXDLIN( 879)		Float ova = this->viewportA;
HXDLIN( 879)		Float ovd = this->viewportD;
HXDLIN( 879)		Float ovx = this->viewportX;
HXDLIN( 879)		Float ovy = this->viewportY;
HXLINE( 880)		this->width = tex->width;
HXLINE( 881)		this->height = tex->height;
HXLINE( 882)		this->viewportA = (( (Float)(2) ) / ( (Float)(this->width) ));
HXLINE( 883)		this->viewportD = (( (Float)(2) ) / ( (Float)(this->height) ));
HXLINE( 884)		this->viewportX = ( (Float)(-1) );
HXLINE( 885)		this->viewportY = ( (Float)(-1) );
HXLINE( 886)		this->posChanged = true;
HXLINE( 887)		this->render(engine);
HXLINE( 888)		engine->popTarget();
HXLINE( 890)		this->width = ow;
HXLINE( 891)		this->height = oh;
HXLINE( 892)		this->viewportA = ova;
HXLINE( 893)		this->viewportD = ovd;
HXLINE( 894)		this->viewportX = ovx;
HXLINE( 895)		this->viewportY = ovy;
HXLINE( 896)		this->posChanged = true;
HXLINE( 897)		engine->setRenderZone(null(),null(),null(),null());
HXLINE( 898)		engine->end();
HXLINE( 899)		return  ::h2d::Bitmap_obj::__alloc( HX_CTX ,target,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,captureBitmap,return )


::hx::ObjectPtr< Scene_obj > Scene_obj::__new() {
	::hx::ObjectPtr< Scene_obj > __this = new Scene_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Scene_obj > Scene_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Scene_obj *__this = (Scene_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scene_obj), true, "h2d.Scene"));
	*(void **)__this = Scene_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(viewportA,"viewportA");
	HX_MARK_MEMBER_NAME(viewportD,"viewportD");
	HX_MARK_MEMBER_NAME(viewportX,"viewportX");
	HX_MARK_MEMBER_NAME(viewportY,"viewportY");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(viewportScaleX,"viewportScaleX");
	HX_MARK_MEMBER_NAME(viewportScaleY,"viewportScaleY");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(_cameras,"_cameras");
	HX_MARK_MEMBER_NAME(interactiveCamera,"interactiveCamera");
	HX_MARK_MEMBER_NAME(interactive,"interactive");
	HX_MARK_MEMBER_NAME(eventListeners,"eventListeners");
	HX_MARK_MEMBER_NAME(ctx,"ctx");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(shapePoint,"shapePoint");
	 ::h2d::Layers_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(viewportA,"viewportA");
	HX_VISIT_MEMBER_NAME(viewportD,"viewportD");
	HX_VISIT_MEMBER_NAME(viewportX,"viewportX");
	HX_VISIT_MEMBER_NAME(viewportY,"viewportY");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(viewportScaleX,"viewportScaleX");
	HX_VISIT_MEMBER_NAME(viewportScaleY,"viewportScaleY");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(_cameras,"_cameras");
	HX_VISIT_MEMBER_NAME(interactiveCamera,"interactiveCamera");
	HX_VISIT_MEMBER_NAME(interactive,"interactive");
	HX_VISIT_MEMBER_NAME(eventListeners,"eventListeners");
	HX_VISIT_MEMBER_NAME(ctx,"ctx");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(shapePoint,"shapePoint");
	 ::h2d::Layers_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Scene_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { return ::hx::Val( ctx ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_zoom() ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_mouseX() : mouseX ); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_mouseY() : mouseY ); }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_camera() ); }
		if (HX_FIELD_EQ(inName,"window") ) { return ::hx::Val( window ); }
		if (HX_FIELD_EQ(inName,"events") ) { return ::hx::Val( events ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameras() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { return ::hx::Val( _cameras ); }
		if (HX_FIELD_EQ(inName,"renderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderer() ); }
		if (HX_FIELD_EQ(inName,"get_zoom") ) { return ::hx::Val( get_zoom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return ::hx::Val( set_zoom_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return ::hx::Val( stopDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFocus") ) { return ::hx::Val( getFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncOnly") ) { return ::hx::Val( syncOnly_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewportA") ) { return ::hx::Val( viewportA ); }
		if (HX_FIELD_EQ(inName,"viewportD") ) { return ::hx::Val( viewportD ); }
		if (HX_FIELD_EQ(inName,"viewportX") ) { return ::hx::Val( viewportX ); }
		if (HX_FIELD_EQ(inName,"viewportY") ) { return ::hx::Val( viewportY ); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return ::hx::Val( scaleMode ); }
		if (HX_FIELD_EQ(inName,"setEvents") ) { return ::hx::Val( setEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCamera") ) { return ::hx::Val( addCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"startDrag") ) { return ::hx::Val( startDrag_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shapePoint") ) { return ::hx::Val( shapePoint ); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return ::hx::Val( get_camera_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return ::hx::Val( get_mouseX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return ::hx::Val( get_mouseY_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawImplTo") ) { return ::hx::Val( drawImplTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"clipBounds") ) { return ::hx::Val( clipBounds_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { return ::hx::Val( interactive ); }
		if (HX_FIELD_EQ(inName,"get_cameras") ) { return ::hx::Val( get_cameras_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkResize") ) { return ::hx::Val( checkResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return ::hx::Val( handleEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopCapture") ) { return ::hx::Val( stopCapture_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawContent") ) { return ::hx::Val( drawContent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return ::hx::Val( get_renderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_renderer") ) { return ::hx::Val( set_renderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeCamera") ) { return ::hx::Val( removeCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFixedSize") ) { return ::hx::Val( setFixedSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"startCapture") ) { return ::hx::Val( startCapture_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultSmooth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_defaultSmooth() ); }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return ::hx::Val( set_scaleMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return ::hx::Val( dispatchEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"captureBitmap") ) { return ::hx::Val( captureBitmap_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewportScaleX") ) { return ::hx::Val( viewportScaleX ); }
		if (HX_FIELD_EQ(inName,"viewportScaleY") ) { return ::hx::Val( viewportScaleY ); }
		if (HX_FIELD_EQ(inName,"eventListeners") ) { return ::hx::Val( eventListeners ); }
		if (HX_FIELD_EQ(inName,"getInteractive") ) { return ::hx::Val( getInteractive_dyn() ); }
		if (HX_FIELD_EQ(inName,"addEventTarget") ) { return ::hx::Val( addEventTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"setElapsedTime") ) { return ::hx::Val( setElapsedTime_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"screenToViewport") ) { return ::hx::Val( screenToViewport_dyn() ); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"interactiveCamera") ) { return ::hx::Val( interactiveCamera ); }
		if (HX_FIELD_EQ(inName,"get_defaultSmooth") ) { return ::hx::Val( get_defaultSmooth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_defaultSmooth") ) { return ::hx::Val( set_defaultSmooth_dyn() ); }
		if (HX_FIELD_EQ(inName,"screenXToViewport") ) { return ::hx::Val( screenXToViewport_dyn() ); }
		if (HX_FIELD_EQ(inName,"screenYToViewport") ) { return ::hx::Val( screenYToViewport_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchListeners") ) { return ::hx::Val( dispatchListeners_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeEventTarget") ) { return ::hx::Val( removeEventTarget_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isInteractiveVisible") ) { return ::hx::Val( isInteractiveVisible_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_interactiveCamera") ) { return ::hx::Val( set_interactiveCamera_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Scene_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { ctx=inValue.Cast<  ::h2d::RenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_zoom(inValue.Cast< int >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::hxd::Window >(); return inValue; }
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast<  ::hxd::SceneEvents >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cameras") ) { _cameras=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_renderer(inValue.Cast<  ::h2d::RenderContext >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewportA") ) { viewportA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewportD") ) { viewportD=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewportX") ) { viewportX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewportY") ) { viewportY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleMode(inValue.Cast<  ::h2d::ScaleMode >()) );scaleMode=inValue.Cast<  ::h2d::ScaleMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shapePoint") ) { shapePoint=inValue.Cast<  ::h2d::col::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { interactive=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultSmooth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_defaultSmooth(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewportScaleX") ) { viewportScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewportScaleY") ) { viewportScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventListeners") ) { eventListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"interactiveCamera") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_interactiveCamera(inValue.Cast<  ::h2d::Camera >()) );interactiveCamera=inValue.Cast<  ::h2d::Camera >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("viewportA",1b,8d,fd,73));
	outFields->push(HX_("viewportD",1e,8d,fd,73));
	outFields->push(HX_("viewportX",32,8d,fd,73));
	outFields->push(HX_("viewportY",33,8d,fd,73));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("viewportScaleX",94,fb,ed,87));
	outFields->push(HX_("viewportScaleY",95,fb,ed,87));
	outFields->push(HX_("mouseX",93,4a,0e,cc));
	outFields->push(HX_("mouseY",94,4a,0e,cc));
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("scaleMode",0d,db,d3,2b));
	outFields->push(HX_("cameras",2e,8a,31,e3));
	outFields->push(HX_("_cameras",af,e3,e9,1c));
	outFields->push(HX_("camera",a5,46,8c,b7));
	outFields->push(HX_("interactiveCamera",27,8e,78,c4));
	outFields->push(HX_("defaultSmooth",cf,db,e3,01));
	outFields->push(HX_("renderer",43,c5,db,b2));
	outFields->push(HX_("interactive",e2,3d,59,3c));
	outFields->push(HX_("eventListeners",05,aa,53,fc));
	outFields->push(HX_("ctx",a7,84,4b,00));
	outFields->push(HX_("window",f0,93,8c,52));
	outFields->push(HX_("events",19,4f,6a,96));
	outFields->push(HX_("shapePoint",6f,49,d0,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Scene_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Scene_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(Scene_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,viewportA),HX_("viewportA",1b,8d,fd,73)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,viewportD),HX_("viewportD",1e,8d,fd,73)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,viewportX),HX_("viewportX",32,8d,fd,73)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,viewportY),HX_("viewportY",33,8d,fd,73)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,viewportScaleX),HX_("viewportScaleX",94,fb,ed,87)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,viewportScaleY),HX_("viewportScaleY",95,fb,ed,87)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,mouseX),HX_("mouseX",93,4a,0e,cc)},
	{::hx::fsFloat,(int)offsetof(Scene_obj,mouseY),HX_("mouseY",94,4a,0e,cc)},
	{::hx::fsObject /*  ::h2d::ScaleMode */ ,(int)offsetof(Scene_obj,scaleMode),HX_("scaleMode",0d,db,d3,2b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Scene_obj,_cameras),HX_("_cameras",af,e3,e9,1c)},
	{::hx::fsObject /*  ::h2d::Camera */ ,(int)offsetof(Scene_obj,interactiveCamera),HX_("interactiveCamera",27,8e,78,c4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Scene_obj,interactive),HX_("interactive",e2,3d,59,3c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Scene_obj,eventListeners),HX_("eventListeners",05,aa,53,fc)},
	{::hx::fsObject /*  ::h2d::RenderContext */ ,(int)offsetof(Scene_obj,ctx),HX_("ctx",a7,84,4b,00)},
	{::hx::fsObject /*  ::hxd::Window */ ,(int)offsetof(Scene_obj,window),HX_("window",f0,93,8c,52)},
	{::hx::fsObject /*  ::hxd::SceneEvents */ ,(int)offsetof(Scene_obj,events),HX_("events",19,4f,6a,96)},
	{::hx::fsObject /*  ::h2d::col::Point */ ,(int)offsetof(Scene_obj,shapePoint),HX_("shapePoint",6f,49,d0,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Scene_obj_sStaticStorageInfo = 0;
#endif

static ::String Scene_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("viewportA",1b,8d,fd,73),
	HX_("viewportD",1e,8d,fd,73),
	HX_("viewportX",32,8d,fd,73),
	HX_("viewportY",33,8d,fd,73),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("viewportScaleX",94,fb,ed,87),
	HX_("viewportScaleY",95,fb,ed,87),
	HX_("mouseX",93,4a,0e,cc),
	HX_("mouseY",94,4a,0e,cc),
	HX_("scaleMode",0d,db,d3,2b),
	HX_("_cameras",af,e3,e9,1c),
	HX_("interactiveCamera",27,8e,78,c4),
	HX_("interactive",e2,3d,59,3c),
	HX_("eventListeners",05,aa,53,fc),
	HX_("ctx",a7,84,4b,00),
	HX_("window",f0,93,8c,52),
	HX_("events",19,4f,6a,96),
	HX_("shapePoint",6f,49,d0,ac),
	HX_("get_defaultSmooth",26,e7,53,08),
	HX_("set_defaultSmooth",32,bf,c1,2b),
	HX_("setEvents",5b,c4,11,f6),
	HX_("get_zoom",9c,5e,b3,d0),
	HX_("set_zoom",10,b8,10,7f),
	HX_("set_scaleMode",f0,90,3d,32),
	HX_("get_renderer",4c,79,f5,67),
	HX_("set_renderer",c0,9c,ee,7c),
	HX_("get_camera",6e,b6,13,a8),
	HX_("get_cameras",45,ea,2b,69),
	HX_("set_interactiveCamera",0a,5f,2f,97),
	HX_("addCamera",a6,7b,b0,6f),
	HX_("removeCamera",09,e2,b9,26),
	HX_("setFixedSize",53,50,8a,51),
	HX_("checkResize",dc,2c,8d,ea),
	HX_("screenXToViewport",8d,a7,b0,18),
	HX_("screenYToViewport",ce,12,8f,99),
	HX_("get_mouseX",5c,ba,95,bc),
	HX_("get_mouseY",5d,ba,95,bc),
	HX_("dispatchListeners",65,cf,2e,b5),
	HX_("isInteractiveVisible",3a,85,a0,dc),
	HX_("getInteractive",ec,90,f7,c3),
	HX_("screenToViewport",8d,1f,9d,a3),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("handleEvent",52,73,0e,28),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("removeEventListener",ca,87,75,55),
	HX_("startCapture",44,b4,fd,18),
	HX_("stopCapture",a4,ec,09,f7),
	HX_("startDrag",76,a5,63,fb),
	HX_("stopDrag",16,71,2a,95),
	HX_("getFocus",62,6f,60,64),
	HX_("addEventTarget",6a,46,11,70),
	HX_("removeEventTarget",27,d9,8a,94),
	HX_("dispose",9f,80,4c,bb),
	HX_("setElapsedTime",e7,99,8b,6e),
	HX_("drawImplTo",9f,bb,43,4a),
	HX_("syncOnly",67,35,c7,89),
	HX_("render",56,6b,29,05),
	HX_("sync",5b,ba,5f,4c),
	HX_("clipBounds",65,65,6b,9c),
	HX_("drawContent",95,d1,bf,62),
	HX_("onAdd",42,86,61,32),
	HX_("onRemove",c3,92,35,e4),
	HX_("captureBitmap",15,7d,6a,d4),
	::String(null()) };

::hx::Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	Scene_obj _hx_dummy;
	Scene_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Scene",18,38,b9,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Scene_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Scene_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scene_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scene_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
