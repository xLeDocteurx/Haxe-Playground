#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_Camera
#include <h2d/Camera.h>
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
#ifndef INCLUDED_h2d_Scene
#include <h2d/Scene.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_Event
#include <hxd/Event.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_68a4b6a396068777_18_new,"h2d.Camera","new",0x1d721bcb,"h2d.Camera.new","h2d/Camera.hx",18,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_135_remove,"h2d.Camera","remove",0x47e505b9,"h2d.Camera.remove","h2d/Camera.hx",135,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_165___default_layerVisible,"h2d.Camera","__default_layerVisible",0xdfcc06b4,"h2d.Camera.__default_layerVisible","h2d/Camera.hx",165,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_173_enter,"h2d.Camera","enter",0xca5ea943,"h2d.Camera.enter","h2d/Camera.hx",173,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_188_exit,"h2d.Camera","exit",0xa081a953,"h2d.Camera.exit","h2d/Camera.hx",188,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_205_sync,"h2d.Camera","sync",0xa9c36c90,"h2d.Camera.sync","h2d/Camera.hx",205,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_237_setScale,"h2d.Camera","setScale",0xa964a83d,"h2d.Camera.setScale","h2d/Camera.hx",237,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_245_scale,"h2d.Camera","scale",0xd2a70ab5,"h2d.Camera.scale","h2d/Camera.hx",245,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_253_setPosition,"h2d.Camera","setPosition",0x4b2398d6,"h2d.Camera.setPosition","h2d/Camera.hx",253,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_261_move,"h2d.Camera","move",0xa5c49546,"h2d.Camera.move","h2d/Camera.hx",261,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_270_rotate,"h2d.Camera","rotate",0x0e7cafd0,"h2d.Camera.rotate","h2d/Camera.hx",270,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_276_setAnchor,"h2d.Camera","setAnchor",0xb2f9dd62,"h2d.Camera.setAnchor","h2d/Camera.hx",276,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_286_setViewport,"h2d.Camera","setViewport",0x1cce4493,"h2d.Camera.setViewport","h2d/Camera.hx",286,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_297_setRawViewport,"h2d.Camera","setRawViewport",0xd752a861,"h2d.Camera.setRawViewport","h2d/Camera.hx",297,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_312_screenXToCamera,"h2d.Camera","screenXToCamera",0xc7ddf9f7,"h2d.Camera.screenXToCamera","h2d/Camera.hx",312,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_321_screenYToCamera,"h2d.Camera","screenYToCamera",0x9acf62f8,"h2d.Camera.screenYToCamera","h2d/Camera.hx",321,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_330_cameraXToScreen,"h2d.Camera","cameraXToScreen",0xed5b3465,"h2d.Camera.cameraXToScreen","h2d/Camera.hx",330,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_339_cameraYToScreen,"h2d.Camera","cameraYToScreen",0xc04c9d66,"h2d.Camera.cameraYToScreen","h2d/Camera.hx",339,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_348_sceneXToCamera,"h2d.Camera","sceneXToCamera",0x4201c6a1,"h2d.Camera.sceneXToCamera","h2d/Camera.hx",348,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_356_sceneYToCamera,"h2d.Camera","sceneYToCamera",0x14f32fa2,"h2d.Camera.sceneYToCamera","h2d/Camera.hx",356,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_364_cameraXToScene,"h2d.Camera","cameraXToScene",0x439be273,"h2d.Camera.cameraXToScene","h2d/Camera.hx",364,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_372_cameraYToScene,"h2d.Camera","cameraYToScene",0x7cce5492,"h2d.Camera.cameraYToScene","h2d/Camera.hx",372,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_380_eventToCamera,"h2d.Camera","eventToCamera",0x8dcefbe5,"h2d.Camera.eventToCamera","h2d/Camera.hx",380,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_392_screenToCamera,"h2d.Camera","screenToCamera",0x31a79881,"h2d.Camera.screenToCamera","h2d/Camera.hx",392,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_405_cameraToScreen,"h2d.Camera","cameraToScreen",0xcfeaf981,"h2d.Camera.cameraToScreen","h2d/Camera.hx",405,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_419_sceneToCamera,"h2d.Camera","sceneToCamera",0x20fb8f17,"h2d.Camera.sceneToCamera","h2d/Camera.hx",419,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_433_cameraToScene,"h2d.Camera","cameraToScene",0x425434d7,"h2d.Camera.cameraToScene","h2d/Camera.hx",433,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_442_checkScene,"h2d.Camera","checkScene",0x1ae8a359,"h2d.Camera.checkScene","h2d/Camera.hx",442,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_447_set_x,"h2d.Camera","set_x",0xd407d786,"h2d.Camera.set_x","h2d/Camera.hx",447,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_452_set_y,"h2d.Camera","set_y",0xd407d787,"h2d.Camera.set_y","h2d/Camera.hx",452,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_457_set_scaleX,"h2d.Camera","set_scaleX",0xc251c0c0,"h2d.Camera.set_scaleX","h2d/Camera.hx",457,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_462_set_scaleY,"h2d.Camera","set_scaleY",0xc251c0c1,"h2d.Camera.set_scaleY","h2d/Camera.hx",462,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_467_set_rotation,"h2d.Camera","set_rotation",0x51f983f0,"h2d.Camera.set_rotation","h2d/Camera.hx",467,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_472_get_viewportX,"h2d.Camera","get_viewportX",0x2a624034,"h2d.Camera.get_viewportX","h2d/Camera.hx",472,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_473_set_viewportX,"h2d.Camera","set_viewportX",0x6f682240,"h2d.Camera.set_viewportX","h2d/Camera.hx",473,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_480_get_viewportY,"h2d.Camera","get_viewportY",0x2a624035,"h2d.Camera.get_viewportY","h2d/Camera.hx",480,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_481_set_viewportY,"h2d.Camera","set_viewportY",0x6f682241,"h2d.Camera.set_viewportY","h2d/Camera.hx",481,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_488_get_viewportWidth,"h2d.Camera","get_viewportWidth",0x4ba583c2,"h2d.Camera.get_viewportWidth","h2d/Camera.hx",488,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_489_set_viewportWidth,"h2d.Camera","set_viewportWidth",0x6f135bce,"h2d.Camera.set_viewportWidth","h2d/Camera.hx",489,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_496_get_viewportHeight,"h2d.Camera","get_viewportHeight",0x9b7d3eab,"h2d.Camera.get_viewportHeight","h2d/Camera.hx",496,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_497_set_viewportHeight,"h2d.Camera","set_viewportHeight",0x782c711f,"h2d.Camera.set_viewportHeight","h2d/Camera.hx",497,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_504_set_anchorX,"h2d.Camera","set_anchorX",0xe2d181d1,"h2d.Camera.set_anchorX","h2d/Camera.hx",504,0xae0e1de4)
HX_LOCAL_STACK_FRAME(_hx_pos_68a4b6a396068777_509_set_anchorY,"h2d.Camera","set_anchorY",0xe2d181d2,"h2d.Camera.set_anchorY","h2d/Camera.hx",509,0xae0e1de4)
namespace h2d{

void Camera_obj::__construct( ::h2d::Scene scene){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_18_new)
HXLINE(  95)		this->followRotation = false;
HXLINE( 120)		{
HXLINE( 120)			this->posChanged = true;
HXDLIN( 120)			this->x = ( (Float)(0) );
            		}
HXDLIN( 120)		{
HXLINE( 120)			this->posChanged = true;
HXDLIN( 120)			this->y = ( (Float)(0) );
            		}
HXLINE( 121)		{
HXLINE( 121)			this->posChanged = true;
HXDLIN( 121)			this->scaleX = ( (Float)(1) );
            		}
HXDLIN( 121)		{
HXLINE( 121)			this->posChanged = true;
HXDLIN( 121)			this->scaleY = ( (Float)(1) );
            		}
HXLINE( 122)		{
HXLINE( 122)			this->posChanged = true;
HXDLIN( 122)			this->rotation = ( (Float)(0) );
            		}
HXLINE( 123)		{
HXLINE( 123)			this->posChanged = true;
HXDLIN( 123)			this->anchorX = ( (Float)(0) );
            		}
HXLINE( 124)		{
HXLINE( 124)			this->posChanged = true;
HXDLIN( 124)			this->anchorY = ( (Float)(0) );
            		}
HXLINE( 125)		this->viewX = ( (Float)(0) );
HXDLIN( 125)		this->viewY = ( (Float)(0) );
HXLINE( 126)		this->viewW = ( (Float)(1) );
HXDLIN( 126)		this->viewH = ( (Float)(1) );
HXLINE( 127)		this->visible = true;
HXLINE( 128)		if (::hx::IsNotNull( scene )) {
HXLINE( 128)			scene->addCamera(::hx::ObjectPtr<OBJ_>(this),null());
            		}
            	}

Dynamic Camera_obj::__CreateEmpty() { return new Camera_obj; }

void *Camera_obj::_hx_vtable = 0;

Dynamic Camera_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Camera_obj > _hx_result = new Camera_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Camera_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f9ac31f;
}

void Camera_obj::remove(){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_135_remove)
HXDLIN( 135)		if (::hx::IsNotNull( this->scene )) {
HXDLIN( 135)			this->scene->removeCamera(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,remove,(void))

HX_BEGIN_DEFAULT_FUNC(__default_layerVisible,Camera_obj)
bool _hx_run(int layer){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_165___default_layerVisible)
HXDLIN( 165)		return true;
            	}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

void Camera_obj::enter( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_173_enter)
HXLINE( 174)		ctx->pushCamera(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 175)		if (this->clipViewport) {
HXLINE( 176)			 ::h2d::Object old = ctx->inFilter;
HXLINE( 177)			ctx->inFilter = null();
HXLINE( 178)			ctx->pushRenderZone((this->viewX * ( (Float)(this->scene->width) )),(this->viewY * ( (Float)(this->scene->height) )),(this->viewW * ( (Float)(this->scene->width) )),(this->viewH * ( (Float)(this->scene->height) )));
HXLINE( 179)			ctx->inFilter = old;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,enter,(void))

void Camera_obj::exit( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_188_exit)
HXLINE( 189)		if (this->clipViewport) {
HXLINE( 190)			 ::h2d::Object old = ctx->inFilter;
HXLINE( 191)			ctx->inFilter = null();
HXLINE( 192)			ctx->popRenderZone();
HXLINE( 193)			ctx->inFilter = old;
            		}
HXLINE( 195)		ctx->popCamera();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,exit,(void))

void Camera_obj::sync( ::h2d::RenderContext ctx,::hx::Null< bool >  __o_force){
            		bool force = __o_force.Default(false);
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_205_sync)
HXLINE( 206)		if (::hx::IsNull( this->scene )) {
HXLINE( 206)			return;
            		}
HXLINE( 208)		if (::hx::IsNotNull( this->follow )) {
HXLINE( 209)			{
HXLINE( 209)				this->posChanged = true;
HXDLIN( 209)				this->x = this->follow->absX;
            			}
HXLINE( 210)			{
HXLINE( 210)				this->posChanged = true;
HXDLIN( 210)				this->y = this->follow->absY;
            			}
HXLINE( 211)			if (this->followRotation) {
HXLINE( 211)				this->posChanged = true;
HXDLIN( 211)				this->rotation = -(this->follow->rotation);
            			}
            		}
HXLINE( 213)		bool _hx_tmp;
HXDLIN( 213)		if (!(this->posChanged)) {
HXLINE( 213)			_hx_tmp = force;
            		}
            		else {
HXLINE( 213)			_hx_tmp = true;
            		}
HXDLIN( 213)		if (_hx_tmp) {
HXLINE( 214)			if ((this->rotation == 0)) {
HXLINE( 215)				this->matA = this->scaleX;
HXLINE( 216)				this->matB = ( (Float)(0) );
HXLINE( 217)				this->matC = ( (Float)(0) );
HXLINE( 218)				this->matD = this->scaleY;
            			}
            			else {
HXLINE( 220)				Float cr = ::Math_obj::cos(this->rotation);
HXLINE( 221)				Float sr = ::Math_obj::sin(this->rotation);
HXLINE( 222)				this->matA = (this->scaleX * cr);
HXLINE( 223)				this->matB = (this->scaleX * sr);
HXLINE( 224)				this->matC = (this->scaleY * -(sr));
HXLINE( 225)				this->matD = (this->scaleY * cr);
            			}
HXLINE( 227)			this->absX = ( (Float)(::Math_obj::round(((-(((this->x * this->matA) + (this->y * this->matC))) + ((( (Float)(this->scene->width) ) * this->anchorX) * this->viewW)) + (( (Float)(this->scene->width) ) * this->viewX)))) );
HXLINE( 228)			this->absY = ( (Float)(::Math_obj::round(((-(((this->x * this->matB) + (this->y * this->matD))) + ((( (Float)(this->scene->height) ) * this->anchorY) * this->viewH)) + (( (Float)(this->scene->height) ) * this->viewY)))) );
HXLINE( 229)			this->invDet = (( (Float)(1) ) / ((this->matA * this->matD) - (this->matB * this->matC)));
HXLINE( 230)			this->posChanged = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,sync,(void))

void Camera_obj::setScale(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_237_setScale)
HXLINE( 238)		{
HXLINE( 238)			this->posChanged = true;
HXDLIN( 238)			this->scaleX = x;
            		}
HXLINE( 239)		{
HXLINE( 239)			this->posChanged = true;
HXDLIN( 239)			this->scaleY = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,setScale,(void))

void Camera_obj::scale(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_245_scale)
HXLINE( 246)		{
HXLINE( 246)			this->posChanged = true;
HXDLIN( 246)			this->scaleX = (this->scaleX * x);
            		}
HXLINE( 247)		{
HXLINE( 247)			this->posChanged = true;
HXDLIN( 247)			this->scaleY = (this->scaleY * y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,scale,(void))

void Camera_obj::setPosition(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_253_setPosition)
HXLINE( 254)		{
HXLINE( 254)			this->posChanged = true;
HXDLIN( 254)			this->x = x;
            		}
HXLINE( 255)		{
HXLINE( 255)			this->posChanged = true;
HXDLIN( 255)			this->y = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,setPosition,(void))

void Camera_obj::move(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_261_move)
HXLINE( 262)		{
HXLINE( 262)			this->posChanged = true;
HXDLIN( 262)			this->x = (this->x + dx);
            		}
HXLINE( 263)		{
HXLINE( 263)			this->posChanged = true;
HXDLIN( 263)			this->y = (this->y + dy);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,move,(void))

void Camera_obj::rotate(Float angle){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_270_rotate)
HXDLIN( 270)		this->posChanged = true;
HXDLIN( 270)		this->rotation = (this->rotation + angle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,rotate,(void))

void Camera_obj::setAnchor(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_276_setAnchor)
HXLINE( 277)		{
HXLINE( 277)			this->posChanged = true;
HXDLIN( 277)			this->anchorX = x;
            		}
HXLINE( 278)		{
HXLINE( 278)			this->posChanged = true;
HXDLIN( 278)			this->anchorY = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,setAnchor,(void))

void Camera_obj::setViewport(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_w,::hx::Null< Float >  __o_h){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float w = __o_w.Default(0);
            		Float h = __o_h.Default(0);
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_286_setViewport)
HXLINE( 287)		if (::hx::IsNull( this->scene )) {
HXLINE( 287)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXLINE( 288)		{
HXLINE( 288)			if (::hx::IsNull( this->scene )) {
HXLINE( 288)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            			}
HXDLIN( 288)			this->posChanged = true;
HXDLIN( 288)			this->viewX = (( (Float)(::Math_obj::floor(x)) ) / ( (Float)(this->scene->width) ));
            		}
HXLINE( 289)		{
HXLINE( 289)			if (::hx::IsNull( this->scene )) {
HXLINE( 289)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            			}
HXDLIN( 289)			this->posChanged = true;
HXDLIN( 289)			this->viewY = (( (Float)(::Math_obj::floor(y)) ) / ( (Float)(this->scene->height) ));
            		}
HXLINE( 290)		{
HXLINE( 290)			Float v;
HXDLIN( 290)			if ((w == 0)) {
HXLINE( 290)				v = ( (Float)(this->scene->width) );
            			}
            			else {
HXLINE( 290)				v = w;
            			}
HXDLIN( 290)			if (::hx::IsNull( this->scene )) {
HXLINE( 290)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            			}
HXDLIN( 290)			this->posChanged = true;
HXDLIN( 290)			this->viewW = (( (Float)(::Math_obj::ceil(v)) ) / ( (Float)(this->scene->width) ));
            		}
HXLINE( 291)		{
HXLINE( 291)			Float v1;
HXDLIN( 291)			if ((h == 0)) {
HXLINE( 291)				v1 = ( (Float)(this->scene->height) );
            			}
            			else {
HXLINE( 291)				v1 = h;
            			}
HXDLIN( 291)			if (::hx::IsNull( this->scene )) {
HXLINE( 291)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            			}
HXDLIN( 291)			this->posChanged = true;
HXDLIN( 291)			this->viewH = (( (Float)(::Math_obj::ceil(v1)) ) / ( (Float)(this->scene->height) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Camera_obj,setViewport,(void))

void Camera_obj::setRawViewport(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_w,::hx::Null< Float >  __o_h){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float w = __o_w.Default(1);
            		Float h = __o_h.Default(1);
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_297_setRawViewport)
HXLINE( 298)		this->viewX = x;
HXLINE( 299)		this->viewY = y;
HXLINE( 300)		this->viewW = w;
HXLINE( 301)		this->viewH = h;
HXLINE( 302)		this->posChanged = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Camera_obj,setRawViewport,(void))

Float Camera_obj::screenXToCamera(Float mx,Float my){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_312_screenXToCamera)
HXDLIN( 312)		return ((((((mx - this->scene->offsetX) / this->scene->viewportScaleX) - this->absX) * this->matD) - ((((my - this->scene->offsetY) / this->scene->viewportScaleY) - this->absY) * this->matC)) * this->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,screenXToCamera,return )

Float Camera_obj::screenYToCamera(Float mx,Float my){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_321_screenYToCamera)
HXDLIN( 321)		return (((-((((mx - this->scene->offsetX) / this->scene->viewportScaleX) - this->absX)) * this->matB) + ((((my - this->scene->offsetY) / this->scene->viewportScaleY) - this->absY) * this->matA)) * this->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,screenYToCamera,return )

Float Camera_obj::cameraXToScreen(Float mx,Float my){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_330_cameraXToScreen)
HXDLIN( 330)		return (((((mx * this->matA) + (my * this->matC)) + this->absX) * this->scene->viewportScaleX) + this->scene->offsetX);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,cameraXToScreen,return )

Float Camera_obj::cameraYToScreen(Float mx,Float my){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_339_cameraYToScreen)
HXDLIN( 339)		return (((((mx * this->matB) + (my * this->matD)) + this->absY) * this->scene->viewportScaleY) + this->scene->offsetY);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,cameraYToScreen,return )

Float Camera_obj::sceneXToCamera(Float mx,Float my){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_348_sceneXToCamera)
HXDLIN( 348)		return ((((mx - this->absX) * this->matD) - ((my - this->absY) * this->matC)) * this->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,sceneXToCamera,return )

Float Camera_obj::sceneYToCamera(Float mx,Float my){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_356_sceneYToCamera)
HXDLIN( 356)		return (((-((mx - this->absX)) * this->matB) + ((my - this->absY) * this->matA)) * this->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,sceneYToCamera,return )

Float Camera_obj::cameraXToScene(Float mx,Float my){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_364_cameraXToScene)
HXDLIN( 364)		return (((mx * this->matA) + (my * this->matC)) + this->absX);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,cameraXToScene,return )

Float Camera_obj::cameraYToScene(Float mx,Float my){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_372_cameraYToScene)
HXDLIN( 372)		return (((mx * this->matB) + (my * this->matD)) + this->absY);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,cameraYToScene,return )

void Camera_obj::eventToCamera( ::hxd::Event e){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_380_eventToCamera)
HXLINE( 381)		Float x = (((e->relX - this->scene->offsetX) / this->scene->viewportScaleX) - this->absX);
HXLINE( 382)		Float y = (((e->relY - this->scene->offsetY) / this->scene->viewportScaleY) - this->absY);
HXLINE( 383)		e->relX = (((x * this->matD) - (y * this->matC)) * this->invDet);
HXLINE( 384)		e->relY = (((-(x) * this->matB) + (y * this->matA)) * this->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,eventToCamera,(void))

void Camera_obj::screenToCamera( ::h2d::col::Point pt){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_392_screenToCamera)
HXLINE( 393)		if (::hx::IsNull( this->scene )) {
HXLINE( 393)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXLINE( 394)		Float x = (((pt->x - this->scene->offsetX) / this->scene->viewportScaleX) - this->absX);
HXLINE( 395)		Float y = (((pt->y - this->scene->offsetY) / this->scene->viewportScaleY) - this->absY);
HXLINE( 396)		pt->x = (((x * this->matD) - (y * this->matC)) * this->invDet);
HXLINE( 397)		pt->y = (((-(x) * this->matB) + (y * this->matA)) * this->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,screenToCamera,(void))

void Camera_obj::cameraToScreen( ::h2d::col::Point pt){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_405_cameraToScreen)
HXLINE( 406)		if (::hx::IsNull( this->scene )) {
HXLINE( 406)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXLINE( 407)		Float x = pt->x;
HXLINE( 408)		Float y = pt->y;
HXLINE( 409)		pt->x = (((((x * this->matA) + (y * this->matC)) + this->absX) * this->scene->viewportScaleX) + this->scene->offsetX);
HXLINE( 410)		pt->y = (((((x * this->matB) + (y * this->matD)) + this->absY) * this->scene->viewportScaleY) + this->scene->offsetY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,cameraToScreen,(void))

void Camera_obj::sceneToCamera( ::h2d::col::Point pt){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_419_sceneToCamera)
HXLINE( 420)		if (::hx::IsNull( this->scene )) {
HXLINE( 420)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXLINE( 421)		Float x = (pt->x - this->absX);
HXLINE( 422)		Float y = (pt->y - this->absY);
HXLINE( 423)		pt->x = (((x * this->matD) - (y * this->matC)) * this->invDet);
HXLINE( 424)		pt->y = (((-(x) * this->matB) + (y * this->matA)) * this->invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,sceneToCamera,(void))

void Camera_obj::cameraToScene( ::h2d::col::Point pt){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_433_cameraToScene)
HXLINE( 434)		if (::hx::IsNull( this->scene )) {
HXLINE( 434)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXLINE( 435)		Float x = pt->x;
HXLINE( 436)		Float y = pt->y;
HXLINE( 437)		pt->x = (((x * this->matA) + (y * this->matC)) + this->absX);
HXLINE( 438)		pt->y = (((x * this->matB) + (y * this->matD)) + this->absY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,cameraToScene,(void))

void Camera_obj::checkScene(){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_442_checkScene)
HXDLIN( 442)		if (::hx::IsNull( this->scene )) {
HXDLIN( 442)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,checkScene,(void))

Float Camera_obj::set_x(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_447_set_x)
HXLINE( 448)		this->posChanged = true;
HXLINE( 449)		return (this->x = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_x,return )

Float Camera_obj::set_y(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_452_set_y)
HXLINE( 453)		this->posChanged = true;
HXLINE( 454)		return (this->y = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_y,return )

Float Camera_obj::set_scaleX(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_457_set_scaleX)
HXLINE( 458)		this->posChanged = true;
HXLINE( 459)		return (this->scaleX = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_scaleX,return )

Float Camera_obj::set_scaleY(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_462_set_scaleY)
HXLINE( 463)		this->posChanged = true;
HXLINE( 464)		return (this->scaleY = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_scaleY,return )

Float Camera_obj::set_rotation(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_467_set_rotation)
HXLINE( 468)		this->posChanged = true;
HXLINE( 469)		return (this->rotation = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_rotation,return )

Float Camera_obj::get_viewportX(){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_472_get_viewportX)
HXDLIN( 472)		if (::hx::IsNull( this->scene )) {
HXDLIN( 472)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXDLIN( 472)		return (this->viewX * ( (Float)(this->scene->width) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewportX,return )

Float Camera_obj::set_viewportX(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_473_set_viewportX)
HXLINE( 474)		if (::hx::IsNull( this->scene )) {
HXLINE( 474)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXLINE( 475)		this->posChanged = true;
HXLINE( 476)		this->viewX = (( (Float)(::Math_obj::floor(v)) ) / ( (Float)(this->scene->width) ));
HXLINE( 477)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewportX,return )

Float Camera_obj::get_viewportY(){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_480_get_viewportY)
HXDLIN( 480)		if (::hx::IsNull( this->scene )) {
HXDLIN( 480)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXDLIN( 480)		return (this->viewY * ( (Float)(this->scene->height) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewportY,return )

Float Camera_obj::set_viewportY(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_481_set_viewportY)
HXLINE( 482)		if (::hx::IsNull( this->scene )) {
HXLINE( 482)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXLINE( 483)		this->posChanged = true;
HXLINE( 484)		this->viewY = (( (Float)(::Math_obj::floor(v)) ) / ( (Float)(this->scene->height) ));
HXLINE( 485)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewportY,return )

Float Camera_obj::get_viewportWidth(){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_488_get_viewportWidth)
HXDLIN( 488)		if (::hx::IsNull( this->scene )) {
HXDLIN( 488)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXDLIN( 488)		return (this->viewW * ( (Float)(this->scene->width) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewportWidth,return )

Float Camera_obj::set_viewportWidth(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_489_set_viewportWidth)
HXLINE( 490)		if (::hx::IsNull( this->scene )) {
HXLINE( 490)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXLINE( 491)		this->posChanged = true;
HXLINE( 492)		this->viewW = (( (Float)(::Math_obj::ceil(v)) ) / ( (Float)(this->scene->width) ));
HXLINE( 493)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewportWidth,return )

Float Camera_obj::get_viewportHeight(){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_496_get_viewportHeight)
HXDLIN( 496)		if (::hx::IsNull( this->scene )) {
HXDLIN( 496)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXDLIN( 496)		return (this->viewH * ( (Float)(this->scene->height) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewportHeight,return )

Float Camera_obj::set_viewportHeight(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_497_set_viewportHeight)
HXLINE( 498)		if (::hx::IsNull( this->scene )) {
HXLINE( 498)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This method requires Camera to be added to the Scene",16,8e,61,79)));
            		}
HXLINE( 499)		this->posChanged = true;
HXLINE( 500)		this->viewH = (( (Float)(::Math_obj::ceil(v)) ) / ( (Float)(this->scene->height) ));
HXLINE( 501)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewportHeight,return )

Float Camera_obj::set_anchorX(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_504_set_anchorX)
HXLINE( 505)		this->posChanged = true;
HXLINE( 506)		return (this->anchorX = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_anchorX,return )

Float Camera_obj::set_anchorY(Float v){
            	HX_STACKFRAME(&_hx_pos_68a4b6a396068777_509_set_anchorY)
HXLINE( 510)		this->posChanged = true;
HXLINE( 511)		return (this->anchorY = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_anchorY,return )


void Camera_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,Camera_obj *_hx_obj) {
	if (!_hx_obj->layerVisible.mPtr) _hx_obj->layerVisible = new __default_layerVisible(_hx_obj);
}
::hx::ObjectPtr< Camera_obj > Camera_obj::__new( ::h2d::Scene scene) {
	::hx::ObjectPtr< Camera_obj > __this = new Camera_obj();
	__this->__construct(scene);
	return __this;
}

::hx::ObjectPtr< Camera_obj > Camera_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Scene scene) {
	Camera_obj *__this = (Camera_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Camera_obj), true, "h2d.Camera"));
	*(void **)__this = Camera_obj::_hx_vtable;
	h2d::Camera_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(scene);
	return __this;
}

Camera_obj::Camera_obj()
{
	layerVisible = new __default_layerVisible(this);
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(clipViewport,"clipViewport");
	HX_MARK_MEMBER_NAME(anchorX,"anchorX");
	HX_MARK_MEMBER_NAME(anchorY,"anchorY");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(follow,"follow");
	HX_MARK_MEMBER_NAME(followRotation,"followRotation");
	HX_MARK_MEMBER_NAME(posChanged,"posChanged");
	HX_MARK_MEMBER_NAME(viewX,"viewX");
	HX_MARK_MEMBER_NAME(viewY,"viewY");
	HX_MARK_MEMBER_NAME(viewW,"viewW");
	HX_MARK_MEMBER_NAME(viewH,"viewH");
	HX_MARK_MEMBER_NAME(matA,"matA");
	HX_MARK_MEMBER_NAME(matB,"matB");
	HX_MARK_MEMBER_NAME(matC,"matC");
	HX_MARK_MEMBER_NAME(matD,"matD");
	HX_MARK_MEMBER_NAME(absX,"absX");
	HX_MARK_MEMBER_NAME(absY,"absY");
	HX_MARK_MEMBER_NAME(invDet,"invDet");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(layerVisible,"layerVisible");
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(clipViewport,"clipViewport");
	HX_VISIT_MEMBER_NAME(anchorX,"anchorX");
	HX_VISIT_MEMBER_NAME(anchorY,"anchorY");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(follow,"follow");
	HX_VISIT_MEMBER_NAME(followRotation,"followRotation");
	HX_VISIT_MEMBER_NAME(posChanged,"posChanged");
	HX_VISIT_MEMBER_NAME(viewX,"viewX");
	HX_VISIT_MEMBER_NAME(viewY,"viewY");
	HX_VISIT_MEMBER_NAME(viewW,"viewW");
	HX_VISIT_MEMBER_NAME(viewH,"viewH");
	HX_VISIT_MEMBER_NAME(matA,"matA");
	HX_VISIT_MEMBER_NAME(matB,"matB");
	HX_VISIT_MEMBER_NAME(matC,"matC");
	HX_VISIT_MEMBER_NAME(matD,"matD");
	HX_VISIT_MEMBER_NAME(absX,"absX");
	HX_VISIT_MEMBER_NAME(absY,"absY");
	HX_VISIT_MEMBER_NAME(invDet,"invDet");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(layerVisible,"layerVisible");
}

::hx::Val Camera_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"matA") ) { return ::hx::Val( matA ); }
		if (HX_FIELD_EQ(inName,"matB") ) { return ::hx::Val( matB ); }
		if (HX_FIELD_EQ(inName,"matC") ) { return ::hx::Val( matC ); }
		if (HX_FIELD_EQ(inName,"matD") ) { return ::hx::Val( matD ); }
		if (HX_FIELD_EQ(inName,"absX") ) { return ::hx::Val( absX ); }
		if (HX_FIELD_EQ(inName,"absY") ) { return ::hx::Val( absY ); }
		if (HX_FIELD_EQ(inName,"exit") ) { return ::hx::Val( exit_dyn() ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		if (HX_FIELD_EQ(inName,"move") ) { return ::hx::Val( move_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"viewX") ) { return ::hx::Val( viewX ); }
		if (HX_FIELD_EQ(inName,"viewY") ) { return ::hx::Val( viewY ); }
		if (HX_FIELD_EQ(inName,"viewW") ) { return ::hx::Val( viewW ); }
		if (HX_FIELD_EQ(inName,"viewH") ) { return ::hx::Val( viewH ); }
		if (HX_FIELD_EQ(inName,"scene") ) { return ::hx::Val( scene ); }
		if (HX_FIELD_EQ(inName,"enter") ) { return ::hx::Val( enter_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return ::hx::Val( scaleX ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return ::hx::Val( scaleY ); }
		if (HX_FIELD_EQ(inName,"follow") ) { return ::hx::Val( follow ); }
		if (HX_FIELD_EQ(inName,"invDet") ) { return ::hx::Val( invDet ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchorX") ) { return ::hx::Val( anchorX ); }
		if (HX_FIELD_EQ(inName,"anchorY") ) { return ::hx::Val( anchorY ); }
		if (HX_FIELD_EQ(inName,"visible") ) { return ::hx::Val( visible ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return ::hx::Val( rotation ); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return ::hx::Val( setScale_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewportX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewportX() ); }
		if (HX_FIELD_EQ(inName,"viewportY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewportY() ); }
		if (HX_FIELD_EQ(inName,"setAnchor") ) { return ::hx::Val( setAnchor_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"posChanged") ) { return ::hx::Val( posChanged ); }
		if (HX_FIELD_EQ(inName,"checkScene") ) { return ::hx::Val( checkScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setViewport") ) { return ::hx::Val( setViewport_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_anchorX") ) { return ::hx::Val( set_anchorX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_anchorY") ) { return ::hx::Val( set_anchorY_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clipViewport") ) { return ::hx::Val( clipViewport ); }
		if (HX_FIELD_EQ(inName,"layerVisible") ) { return ::hx::Val( layerVisible ); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return ::hx::Val( set_rotation_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"viewportWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewportWidth() ); }
		if (HX_FIELD_EQ(inName,"eventToCamera") ) { return ::hx::Val( eventToCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"sceneToCamera") ) { return ::hx::Val( sceneToCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraToScene") ) { return ::hx::Val( cameraToScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewportX") ) { return ::hx::Val( get_viewportX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewportX") ) { return ::hx::Val( set_viewportX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewportY") ) { return ::hx::Val( get_viewportY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewportY") ) { return ::hx::Val( set_viewportY_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewportHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewportHeight() ); }
		if (HX_FIELD_EQ(inName,"followRotation") ) { return ::hx::Val( followRotation ); }
		if (HX_FIELD_EQ(inName,"setRawViewport") ) { return ::hx::Val( setRawViewport_dyn() ); }
		if (HX_FIELD_EQ(inName,"sceneXToCamera") ) { return ::hx::Val( sceneXToCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"sceneYToCamera") ) { return ::hx::Val( sceneYToCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraXToScene") ) { return ::hx::Val( cameraXToScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraYToScene") ) { return ::hx::Val( cameraYToScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"screenToCamera") ) { return ::hx::Val( screenToCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraToScreen") ) { return ::hx::Val( cameraToScreen_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenXToCamera") ) { return ::hx::Val( screenXToCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"screenYToCamera") ) { return ::hx::Val( screenYToCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraXToScreen") ) { return ::hx::Val( cameraXToScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraYToScreen") ) { return ::hx::Val( cameraYToScreen_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_viewportWidth") ) { return ::hx::Val( get_viewportWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewportWidth") ) { return ::hx::Val( set_viewportWidth_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_viewportHeight") ) { return ::hx::Val( get_viewportHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewportHeight") ) { return ::hx::Val( set_viewportHeight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Camera_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"matA") ) { matA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matB") ) { matB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matC") ) { matC=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matD") ) { matD=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"absX") ) { absX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"absY") ) { absY=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"viewX") ) { viewX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewY") ) { viewY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewW") ) { viewW=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewH") ) { viewH=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast<  ::h2d::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) );scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) );scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"follow") ) { follow=inValue.Cast<  ::h2d::Object >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invDet") ) { invDet=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchorX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_anchorX(inValue.Cast< Float >()) );anchorX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"anchorY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_anchorY(inValue.Cast< Float >()) );anchorY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rotation(inValue.Cast< Float >()) );rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewportX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewportX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"viewportY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewportY(inValue.Cast< Float >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"posChanged") ) { posChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clipViewport") ) { clipViewport=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerVisible") ) { layerVisible=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"viewportWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewportWidth(inValue.Cast< Float >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewportHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewportHeight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"followRotation") ) { followRotation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("rotation",3e,3d,86,08));
	outFields->push(HX_("clipViewport",56,c7,5c,69));
	outFields->push(HX_("viewportX",32,8d,fd,73));
	outFields->push(HX_("viewportY",33,8d,fd,73));
	outFields->push(HX_("viewportWidth",c0,27,9e,b2));
	outFields->push(HX_("viewportHeight",ed,18,14,4e));
	outFields->push(HX_("anchorX",43,ec,a1,02));
	outFields->push(HX_("anchorY",44,ec,a1,02));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("follow",71,91,96,f9));
	outFields->push(HX_("followRotation",cf,e3,d6,3a));
	outFields->push(HX_("posChanged",c0,15,08,e3));
	outFields->push(HX_("viewX",53,e6,fc,36));
	outFields->push(HX_("viewY",54,e6,fc,36));
	outFields->push(HX_("viewW",52,e6,fc,36));
	outFields->push(HX_("viewH",43,e6,fc,36));
	outFields->push(HX_("matA",a1,41,56,48));
	outFields->push(HX_("matB",a2,41,56,48));
	outFields->push(HX_("matC",a3,41,56,48));
	outFields->push(HX_("matD",a4,41,56,48));
	outFields->push(HX_("absX",a6,73,68,40));
	outFields->push(HX_("absY",a7,73,68,40));
	outFields->push(HX_("invDet",62,d1,bf,9f));
	outFields->push(HX_("scene",4c,d9,d1,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Camera_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Camera_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,scaleX),HX_("scaleX",8e,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,scaleY),HX_("scaleY",8f,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,rotation),HX_("rotation",3e,3d,86,08)},
	{::hx::fsBool,(int)offsetof(Camera_obj,clipViewport),HX_("clipViewport",56,c7,5c,69)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,anchorX),HX_("anchorX",43,ec,a1,02)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,anchorY),HX_("anchorY",44,ec,a1,02)},
	{::hx::fsBool,(int)offsetof(Camera_obj,visible),HX_("visible",72,78,24,a3)},
	{::hx::fsObject /*  ::h2d::Object */ ,(int)offsetof(Camera_obj,follow),HX_("follow",71,91,96,f9)},
	{::hx::fsBool,(int)offsetof(Camera_obj,followRotation),HX_("followRotation",cf,e3,d6,3a)},
	{::hx::fsBool,(int)offsetof(Camera_obj,posChanged),HX_("posChanged",c0,15,08,e3)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,viewX),HX_("viewX",53,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,viewY),HX_("viewY",54,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,viewW),HX_("viewW",52,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,viewH),HX_("viewH",43,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,matA),HX_("matA",a1,41,56,48)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,matB),HX_("matB",a2,41,56,48)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,matC),HX_("matC",a3,41,56,48)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,matD),HX_("matD",a4,41,56,48)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,absX),HX_("absX",a6,73,68,40)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,absY),HX_("absY",a7,73,68,40)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,invDet),HX_("invDet",62,d1,bf,9f)},
	{::hx::fsObject /*  ::h2d::Scene */ ,(int)offsetof(Camera_obj,scene),HX_("scene",4c,d9,d1,78)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Camera_obj,layerVisible),HX_("layerVisible",a1,6a,66,96)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Camera_obj_sStaticStorageInfo = 0;
#endif

static ::String Camera_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("rotation",3e,3d,86,08),
	HX_("clipViewport",56,c7,5c,69),
	HX_("anchorX",43,ec,a1,02),
	HX_("anchorY",44,ec,a1,02),
	HX_("visible",72,78,24,a3),
	HX_("follow",71,91,96,f9),
	HX_("followRotation",cf,e3,d6,3a),
	HX_("posChanged",c0,15,08,e3),
	HX_("viewX",53,e6,fc,36),
	HX_("viewY",54,e6,fc,36),
	HX_("viewW",52,e6,fc,36),
	HX_("viewH",43,e6,fc,36),
	HX_("matA",a1,41,56,48),
	HX_("matB",a2,41,56,48),
	HX_("matC",a3,41,56,48),
	HX_("matD",a4,41,56,48),
	HX_("absX",a6,73,68,40),
	HX_("absY",a7,73,68,40),
	HX_("invDet",62,d1,bf,9f),
	HX_("scene",4c,d9,d1,78),
	HX_("remove",44,9c,88,04),
	HX_("layerVisible",a1,6a,66,96),
	HX_("enter",18,6d,86,70),
	HX_("exit",1e,f7,1d,43),
	HX_("sync",5b,ba,5f,4c),
	HX_("setScale",88,37,03,87),
	HX_("scale",8a,ce,ce,78),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("move",11,e3,60,48),
	HX_("rotate",5b,46,20,cb),
	HX_("setAnchor",b7,af,18,c0),
	HX_("setViewport",28,16,06,cd),
	HX_("setRawViewport",ec,41,90,6b),
	HX_("screenXToCamera",0c,ba,86,e9),
	HX_("screenYToCamera",0d,23,78,bc),
	HX_("cameraXToScreen",7a,f4,03,0f),
	HX_("cameraYToScreen",7b,5d,f5,e1),
	HX_("sceneXToCamera",2c,60,3f,d6),
	HX_("sceneYToCamera",2d,c9,30,a9),
	HX_("cameraXToScene",fe,7b,d9,d7),
	HX_("cameraYToScene",1d,ee,0b,11),
	HX_("eventToCamera",ba,1c,ce,98),
	HX_("screenToCamera",0c,32,e5,c5),
	HX_("cameraToScreen",0c,93,28,64),
	HX_("sceneToCamera",ec,af,fa,2b),
	HX_("cameraToScene",ac,55,53,4d),
	HX_("checkScene",64,db,c1,88),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("set_rotation",bb,14,99,d2),
	HX_("get_viewportX",09,61,61,35),
	HX_("set_viewportX",15,43,67,7a),
	HX_("get_viewportY",0a,61,61,35),
	HX_("set_viewportY",16,43,67,7a),
	HX_("get_viewportWidth",17,33,0e,b9),
	HX_("set_viewportWidth",23,0b,7c,dc),
	HX_("get_viewportHeight",b6,f9,ad,e9),
	HX_("set_viewportHeight",2a,2c,5d,c6),
	HX_("set_anchorX",66,53,09,93),
	HX_("set_anchorY",67,53,09,93),
	::String(null()) };

::hx::Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	Camera_obj _hx_dummy;
	Camera_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Camera",59,da,17,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Camera_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Camera_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Camera_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Camera_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
