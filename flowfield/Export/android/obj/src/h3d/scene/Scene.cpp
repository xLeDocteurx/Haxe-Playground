#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_h3d_Camera
#include <h3d/Camera.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_Ray
#include <h3d/col/Ray.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderFlag
#include <h3d/impl/RenderFlag.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
#endif
#ifndef INCLUDED_h3d_mat_MaterialSetup
#include <h3d/mat/MaterialSetup.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_pass_Base
#include <h3d/pass/Base.h>
#endif
#ifndef INCLUDED_h3d_pass_Default
#include <h3d/pass/Default.h>
#endif
#ifndef INCLUDED_h3d_pass_HardwarePick
#include <h3d/pass/HardwarePick.h>
#endif
#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_h3d_scene_Interactive
#include <h3d/scene/Interactive.h>
#endif
#ifndef INCLUDED_h3d_scene_LightSystem
#include <h3d/scene/LightSystem.h>
#endif
#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_PassObjects
#include <h3d/scene/PassObjects.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene_Renderer
#include <h3d/scene/Renderer.h>
#endif
#ifndef INCLUDED_h3d_scene_Scene
#include <h3d/scene/Scene.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_hxd_SceneEvents
#include <hxd/SceneEvents.h>
#endif
#ifndef INCLUDED_hxd_Window
#include <hxd/Window.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8af959369304e32f_37_new,"h3d.scene.Scene","new",0x35b7a747,"h3d.scene.Scene.new","h3d/scene/Scene.hx",37,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_54_setEvents,"h3d.scene.Scene","setEvents",0x4ed84282,"h3d.scene.Scene.setEvents","h3d/scene/Scene.hx",54,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_61_addEventListener,"h3d.scene.Scene","addEventListener",0x6838b086,"h3d.scene.Scene.addEventListener","h3d/scene/Scene.hx",61,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_67_removeEventListener,"h3d.scene.Scene","removeEventListener",0xbc67dcb1,"h3d.scene.Scene.removeEventListener","h3d/scene/Scene.hx",67,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_78_dispatchListeners,"h3d.scene.Scene","dispatchListeners",0x386a4c8c,"h3d.scene.Scene.dispatchListeners","h3d/scene/Scene.hx",78,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_84_set_renderer,"h3d.scene.Scene","set_renderer",0xc69230f9,"h3d.scene.Scene.set_renderer","h3d/scene/Scene.hx",84,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_90_sortHitPointByCameraDistance,"h3d.scene.Scene","sortHitPointByCameraDistance",0x21f0b205,"h3d.scene.Scene.sortHitPointByCameraDistance","h3d/scene/Scene.hx",90,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_99_dispatchEvent,"h3d.scene.Scene","dispatchEvent",0xebe2e4a7,"h3d.scene.Scene.dispatchEvent","h3d/scene/Scene.hx",99,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_106_isInteractiveVisible,"h3d.scene.Scene","isInteractiveVisible",0x89b87a73,"h3d.scene.Scene.isInteractiveVisible","h3d/scene/Scene.hx",106,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_116_handleEvent,"h3d.scene.Scene","handleEvent",0x1e0e0939,"h3d.scene.Scene.handleEvent","h3d/scene/Scene.hx",116,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_232_clone,"h3d.scene.Scene","clone",0x7f97b204,"h3d.scene.Scene.clone","h3d/scene/Scene.hx",232,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_242_dispose,"h3d.scene.Scene","dispose",0x9fe35706,"h3d.scene.Scene.dispose","h3d/scene/Scene.hx",242,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_257_addEventTarget,"h3d.scene.Scene","addEventTarget",0x18ed1ae3,"h3d.scene.Scene.addEventTarget","h3d/scene/Scene.hx",257,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_264_removeEventTarget,"h3d.scene.Scene","removeEventTarget",0x17c6564e,"h3d.scene.Scene.removeEventTarget","h3d/scene/Scene.hx",264,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_275_setElapsedTime,"h3d.scene.Scene","setElapsedTime",0x17676e60,"h3d.scene.Scene.setElapsedTime","h3d/scene/Scene.hx",275,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_299_hardwarePick,"h3d.scene.Scene","hardwarePick",0x2492ffe2,"h3d.scene.Scene.hardwarePick","h3d/scene/Scene.hx",299,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_287_hardwarePick,"h3d.scene.Scene","hardwarePick",0x2492ffe2,"h3d.scene.Scene.hardwarePick","h3d/scene/Scene.hx",287,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_339_syncOnly,"h3d.scene.Scene","syncOnly",0xa92bf920,"h3d.scene.Scene.syncOnly","h3d/scene/Scene.hx",339,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_361_computeStatic,"h3d.scene.Scene","computeStatic",0x95f0292c,"h3d.scene.Scene.computeStatic","h3d/scene/Scene.hx",361,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_375_render,"h3d.scene.Scene","render",0x1bff9ecf,"h3d.scene.Scene.render","h3d/scene/Scene.hx",375,0xa87426cb)
HX_LOCAL_STACK_FRAME(_hx_pos_8af959369304e32f_463_serializeScene,"h3d.scene.Scene","serializeScene",0x532873c5,"h3d.scene.Scene.serializeScene","h3d/scene/Scene.hx",463,0xa87426cb)
namespace h3d{
namespace scene{

void Scene_obj::__construct( ::Dynamic __o_createRenderer, ::Dynamic __o_createLightSystem){
            		 ::Dynamic createRenderer = __o_createRenderer;
            		if (::hx::IsNull(__o_createRenderer)) createRenderer = true;
            		 ::Dynamic createLightSystem = __o_createLightSystem;
            		if (::hx::IsNull(__o_createLightSystem)) createLightSystem = true;
            	HX_GC_STACKFRAME(&_hx_pos_8af959369304e32f_37_new)
HXLINE(  38)		super::__construct(null());
HXLINE(  39)		this->window = ::hxd::Window_obj::getInstance();
HXLINE(  40)		this->eventListeners = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  41)		this->hitInteractives = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  42)		this->interactives = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  43)		this->camera =  ::h3d::Camera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  45)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE(  46)		if (::hx::IsNotNull( engine )) {
HXLINE(  47)			this->camera->screenRatio = (( (Float)(engine->width) ) / ( (Float)(engine->height) ));
            		}
HXLINE(  48)		this->ctx =  ::h3d::scene::RenderContext_obj::__alloc( HX_CTX );
HXLINE(  49)		if (( (bool)(createRenderer) )) {
HXLINE(  49)			this->set_renderer(::h3d::mat::MaterialSetup_obj::current->createRenderer());
            		}
HXLINE(  50)		if (( (bool)(createLightSystem) )) {
HXLINE(  50)			this->lightSystem = ::h3d::mat::MaterialSetup_obj::current->createLightSystem();
            		}
            	}

Dynamic Scene_obj::__CreateEmpty() { return new Scene_obj; }

void *Scene_obj::_hx_vtable = 0;

Dynamic Scene_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scene_obj > _hx_result = new Scene_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Scene_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1797ae36) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1797ae36;
	} else {
		return inClassId==(int)0x66003799;
	}
}

static ::h3d::IDrawable_obj _hx_h3d_scene_Scene__hx_h3d_IDrawable= {
	( void (::hx::Object::*)( ::h3d::Engine))&::h3d::scene::Scene_obj::render,
};

static ::hxd::InteractiveScene_obj _hx_h3d_scene_Scene__hx_hxd_InteractiveScene= {
	( void (::hx::Object::*)( ::hxd::SceneEvents))&::h3d::scene::Scene_obj::setEvents,
	( ::Dynamic (::hx::Object::*)( ::hxd::Event,::Dynamic))&::h3d::scene::Scene_obj::handleEvent_6a1ec3ce,
	( void (::hx::Object::*)( ::hxd::Event,::Dynamic))&::h3d::scene::Scene_obj::dispatchEvent,
	( void (::hx::Object::*)( ::hxd::Event))&::h3d::scene::Scene_obj::dispatchListeners,
	( bool (::hx::Object::*)(::Dynamic))&::h3d::scene::Scene_obj::isInteractiveVisible,
};

::Dynamic Scene_obj::handleEvent_6a1ec3ce( ::hxd::Event e,::Dynamic last) {
			return handleEvent(e,last);
}
void *Scene_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd84ebfae: return &_hx_h3d_scene_Scene__hx_h3d_IDrawable;
		case (int)0xa477bf3e: return &_hx_h3d_scene_Scene__hx_hxd_InteractiveScene;
	}
	return super::_hx_getInterface(inHash);
}

void Scene_obj::setEvents( ::hxd::SceneEvents events){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_54_setEvents)
HXDLIN(  54)		this->events = events;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setEvents,(void))

void Scene_obj::addEventListener( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_61_addEventListener)
HXDLIN(  61)		this->eventListeners->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addEventListener,(void))

bool Scene_obj::removeEventListener( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_67_removeEventListener)
HXLINE(  68)		{
HXLINE(  68)			int _g = 0;
HXDLIN(  68)			::Array< ::Dynamic> _g1 = this->eventListeners;
HXDLIN(  68)			while((_g < _g1->length)){
HXLINE(  68)				 ::Dynamic e = _g1->__get(_g);
HXDLIN(  68)				_g = (_g + 1);
HXLINE(  69)				if (::Reflect_obj::compareMethods(e,f)) {
HXLINE(  70)					this->eventListeners->remove(e);
HXLINE(  71)					return true;
            				}
            			}
            		}
HXLINE(  73)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeEventListener,return )

void Scene_obj::dispatchListeners( ::hxd::Event event){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_78_dispatchListeners)
HXDLIN(  78)		int _g = 0;
HXDLIN(  78)		::Array< ::Dynamic> _g1 = this->eventListeners;
HXDLIN(  78)		while((_g < _g1->length)){
HXDLIN(  78)			 ::Dynamic l = _g1->__get(_g);
HXDLIN(  78)			_g = (_g + 1);
HXLINE(  79)			l(event);
HXLINE(  80)			if (!(event->propagate)) {
HXLINE(  80)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,dispatchListeners,(void))

 ::h3d::scene::Renderer Scene_obj::set_renderer( ::h3d::scene::Renderer r){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_84_set_renderer)
HXLINE(  85)		this->renderer = r;
HXLINE(  86)		if (::hx::IsNotNull( r )) {
HXLINE(  86)			r->ctx = this->ctx;
            		}
HXLINE(  87)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,set_renderer,return )

int Scene_obj::sortHitPointByCameraDistance( ::h3d::scene::Interactive i1, ::h3d::scene::Interactive i2){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_90_sortHitPointByCameraDistance)
HXLINE(  91)		Float z1 = i1->hitPoint->w;
HXLINE(  92)		Float z2 = i2->hitPoint->w;
HXLINE(  93)		if ((z1 > z2)) {
HXLINE(  94)			return -1;
            		}
HXLINE(  95)		return 1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,sortHitPointByCameraDistance,return )

void Scene_obj::dispatchEvent( ::hxd::Event event,::Dynamic to){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_99_dispatchEvent)
HXLINE( 100)		 ::h3d::scene::Interactive i = ( ( ::h3d::scene::Interactive)(to) );
HXLINE( 102)		i->handleEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,dispatchEvent,(void))

bool Scene_obj::isInteractiveVisible(::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_106_isInteractiveVisible)
HXLINE( 107)		 ::h3d::scene::Object o = ( ( ::h3d::scene::Object)(i) );
HXLINE( 108)		while(::hx::IsInstanceNotEq( o,::hx::ObjectPtr<OBJ_>(this) )){
HXLINE( 109)			bool _hx_tmp;
HXDLIN( 109)			if (::hx::IsNotNull( o )) {
HXLINE( 109)				_hx_tmp = ((o->flags & 2) == 0);
            			}
            			else {
HXLINE( 109)				_hx_tmp = true;
            			}
HXDLIN( 109)			if (_hx_tmp) {
HXLINE( 109)				return false;
            			}
HXLINE( 110)			o = o->parent;
            		}
HXLINE( 112)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isInteractiveVisible,return )

 ::h3d::scene::Interactive Scene_obj::handleEvent( ::hxd::Event event,::Dynamic last){
            	HX_GC_STACKFRAME(&_hx_pos_8af959369304e32f_116_handleEvent)
HXLINE( 118)		if ((this->interactives->length == 0)) {
HXLINE( 119)			return null();
            		}
HXLINE( 121)		if ((this->hitInteractives->length == 0)) {
HXLINE( 123)			Float event1 = event->relX;
HXDLIN( 123)			Float screenX = (((event1 / ( (Float)(this->window->get_width()) )) - ((Float)0.5)) * ( (Float)(2) ));
HXLINE( 124)			Float event2 = event->relY;
HXDLIN( 124)			Float screenY = (-(((event2 / ( (Float)(this->window->get_height()) )) - ((Float)0.5))) * ( (Float)(2) ));
HXLINE( 125)			 ::h3d::Vector p0 = this->camera->unproject(screenX,screenY,( (Float)(0) ));
HXLINE( 126)			 ::h3d::Vector p1 = this->camera->unproject(screenX,screenY,( (Float)(1) ));
HXLINE( 127)			Float p1_x = p0->x;
HXDLIN( 127)			Float p1_y = p0->y;
HXDLIN( 127)			Float p1_z = p0->z;
HXDLIN( 127)			Float p2_x = p1->x;
HXDLIN( 127)			Float p2_y = p1->y;
HXDLIN( 127)			Float p2_z = p1->z;
HXDLIN( 127)			 ::h3d::col::Ray r =  ::h3d::col::Ray_obj::__alloc( HX_CTX );
HXDLIN( 127)			r->px = p1_x;
HXDLIN( 127)			r->py = p1_y;
HXDLIN( 127)			r->pz = p1_z;
HXDLIN( 127)			r->lx = (p2_x - p1_x);
HXDLIN( 127)			r->ly = (p2_y - p1_y);
HXDLIN( 127)			r->lz = (p2_z - p1_z);
HXDLIN( 127)			r->normalize();
HXDLIN( 127)			 ::h3d::col::Ray r1 = r;
HXLINE( 128)			Float saveR_px = r1->px;
HXDLIN( 128)			Float saveR_py = r1->py;
HXDLIN( 128)			Float saveR_pz = r1->pz;
HXDLIN( 128)			Float saveR_lx = r1->lx;
HXDLIN( 128)			Float saveR_ly = r1->ly;
HXDLIN( 128)			Float saveR_lz = r1->lz;
HXLINE( 129)			int priority = (int)-2147483648;
HXLINE( 131)			{
HXLINE( 131)				int _g = 0;
HXDLIN( 131)				::Array< ::Dynamic> _g1 = this->interactives;
HXDLIN( 131)				while((_g < _g1->length)){
HXLINE( 131)					 ::h3d::scene::Interactive i = _g1->__get(_g).StaticCast<  ::h3d::scene::Interactive >();
HXDLIN( 131)					_g = (_g + 1);
HXLINE( 133)					if ((i->priority < priority)) {
HXLINE( 133)						continue;
            					}
HXLINE( 135)					 ::h3d::scene::Object p = i;
HXLINE( 136)					while(true){
HXLINE( 136)						bool _hx_tmp;
HXDLIN( 136)						if (::hx::IsNotNull( p )) {
HXLINE( 136)							_hx_tmp = ((p->flags & 2) != 0);
            						}
            						else {
HXLINE( 136)							_hx_tmp = false;
            						}
HXDLIN( 136)						if (!(_hx_tmp)) {
HXLINE( 136)							goto _hx_goto_13;
            						}
HXLINE( 137)						p = p->parent;
            					}
            					_hx_goto_13:;
HXLINE( 138)					if (::hx::IsNotNull( p )) {
HXLINE( 138)						continue;
            					}
HXLINE( 140)					 ::h3d::Matrix minv = i->getInvPos();
HXLINE( 141)					{
HXLINE( 141)						Float p_x = r1->px;
HXDLIN( 141)						Float p_y = r1->py;
HXDLIN( 141)						Float p_z = r1->pz;
HXDLIN( 141)						Float p_w = ((Float)1.);
HXDLIN( 141)						{
HXLINE( 141)							Float px = ((((p_x * minv->_11) + (p_y * minv->_21)) + (p_z * minv->_31)) + (p_w * minv->_41));
HXDLIN( 141)							Float py = ((((p_x * minv->_12) + (p_y * minv->_22)) + (p_z * minv->_32)) + (p_w * minv->_42));
HXDLIN( 141)							Float pz = ((((p_x * minv->_13) + (p_y * minv->_23)) + (p_z * minv->_33)) + (p_w * minv->_43));
HXDLIN( 141)							p_x = px;
HXDLIN( 141)							p_y = py;
HXDLIN( 141)							p_z = pz;
            						}
HXDLIN( 141)						r1->px = p_x;
HXDLIN( 141)						r1->py = p_y;
HXDLIN( 141)						r1->pz = p_z;
HXDLIN( 141)						Float l_x = r1->lx;
HXDLIN( 141)						Float l_y = r1->ly;
HXDLIN( 141)						Float l_z = r1->lz;
HXDLIN( 141)						Float l_w = ((Float)1.);
HXDLIN( 141)						{
HXLINE( 141)							Float px1 = (((l_x * minv->_11) + (l_y * minv->_21)) + (l_z * minv->_31));
HXDLIN( 141)							Float py1 = (((l_x * minv->_12) + (l_y * minv->_22)) + (l_z * minv->_32));
HXDLIN( 141)							Float pz1 = (((l_x * minv->_13) + (l_y * minv->_23)) + (l_z * minv->_33));
HXDLIN( 141)							l_x = px1;
HXDLIN( 141)							l_y = py1;
HXDLIN( 141)							l_z = pz1;
            						}
HXDLIN( 141)						r1->lx = l_x;
HXDLIN( 141)						r1->ly = l_y;
HXDLIN( 141)						r1->lz = l_z;
HXDLIN( 141)						r1->normalize();
            					}
HXLINE( 144)					if ((r1->lx != r1->lx)) {
HXLINE( 145)						{
HXLINE( 145)							r1->px = saveR_px;
HXDLIN( 145)							r1->py = saveR_py;
HXDLIN( 145)							r1->pz = saveR_pz;
HXDLIN( 145)							r1->lx = saveR_lx;
HXDLIN( 145)							r1->ly = saveR_ly;
HXDLIN( 145)							r1->lz = saveR_lz;
            						}
HXLINE( 146)						continue;
            					}
HXLINE( 149)					Float hit = ::h3d::col::Collider_obj::rayIntersection(i->shape,r1,i->bestMatch);
HXLINE( 150)					if ((hit < 0)) {
HXLINE( 151)						{
HXLINE( 151)							r1->px = saveR_px;
HXDLIN( 151)							r1->py = saveR_py;
HXDLIN( 151)							r1->pz = saveR_pz;
HXDLIN( 151)							r1->lx = saveR_lx;
HXDLIN( 151)							r1->ly = saveR_ly;
HXDLIN( 151)							r1->lz = saveR_lz;
            						}
HXLINE( 152)						continue;
            					}
HXLINE( 155)					Float hitPoint_x = (r1->px + (hit * r1->lx));
HXDLIN( 155)					Float hitPoint_y = (r1->py + (hit * r1->ly));
HXDLIN( 155)					Float hitPoint_z = (r1->pz + (hit * r1->lz));
HXLINE( 156)					{
HXLINE( 156)						r1->px = saveR_px;
HXDLIN( 156)						r1->py = saveR_py;
HXDLIN( 156)						r1->pz = saveR_pz;
HXDLIN( 156)						r1->lx = saveR_lx;
HXDLIN( 156)						r1->ly = saveR_ly;
HXDLIN( 156)						r1->lz = saveR_lz;
            					}
HXLINE( 158)					i->hitPoint->x = hitPoint_x;
HXLINE( 159)					i->hitPoint->y = hitPoint_y;
HXLINE( 160)					i->hitPoint->z = hitPoint_z;
HXLINE( 162)					if ((i->priority > priority)) {
HXLINE( 163)						while((this->hitInteractives->length > 0)){
HXLINE( 163)							this->hitInteractives->pop().StaticCast<  ::h3d::scene::Interactive >();
            						}
HXLINE( 164)						priority = i->priority;
            					}
HXLINE( 167)					this->hitInteractives->push(i);
            				}
            			}
HXLINE( 170)			if ((this->hitInteractives->length == 0)) {
HXLINE( 171)				return null();
            			}
HXLINE( 174)			if ((this->hitInteractives->length > 1)) {
HXLINE( 175)				{
HXLINE( 175)					int _g = 0;
HXDLIN( 175)					::Array< ::Dynamic> _g1 = this->hitInteractives;
HXDLIN( 175)					while((_g < _g1->length)){
HXLINE( 175)						 ::h3d::scene::Interactive i = _g1->__get(_g).StaticCast<  ::h3d::scene::Interactive >();
HXDLIN( 175)						_g = (_g + 1);
HXLINE( 176)						 ::h3d::Matrix m = i->invPos;
HXLINE( 177)						Float wfactor = ((Float)0.);
HXLINE( 180)						if (::hx::IsNotNull( i->preciseShape )) {
HXLINE( 181)							{
HXLINE( 181)								Float p_x = r1->px;
HXDLIN( 181)								Float p_y = r1->py;
HXDLIN( 181)								Float p_z = r1->pz;
HXDLIN( 181)								Float p_w = ((Float)1.);
HXDLIN( 181)								{
HXLINE( 181)									Float px = ((((p_x * m->_11) + (p_y * m->_21)) + (p_z * m->_31)) + (p_w * m->_41));
HXDLIN( 181)									Float py = ((((p_x * m->_12) + (p_y * m->_22)) + (p_z * m->_32)) + (p_w * m->_42));
HXDLIN( 181)									Float pz = ((((p_x * m->_13) + (p_y * m->_23)) + (p_z * m->_33)) + (p_w * m->_43));
HXDLIN( 181)									p_x = px;
HXDLIN( 181)									p_y = py;
HXDLIN( 181)									p_z = pz;
            								}
HXDLIN( 181)								r1->px = p_x;
HXDLIN( 181)								r1->py = p_y;
HXDLIN( 181)								r1->pz = p_z;
HXDLIN( 181)								Float l_x = r1->lx;
HXDLIN( 181)								Float l_y = r1->ly;
HXDLIN( 181)								Float l_z = r1->lz;
HXDLIN( 181)								Float l_w = ((Float)1.);
HXDLIN( 181)								{
HXLINE( 181)									Float px1 = (((l_x * m->_11) + (l_y * m->_21)) + (l_z * m->_31));
HXDLIN( 181)									Float py1 = (((l_x * m->_12) + (l_y * m->_22)) + (l_z * m->_32));
HXDLIN( 181)									Float pz1 = (((l_x * m->_13) + (l_y * m->_23)) + (l_z * m->_33));
HXDLIN( 181)									l_x = px1;
HXDLIN( 181)									l_y = py1;
HXDLIN( 181)									l_z = pz1;
            								}
HXDLIN( 181)								r1->lx = l_x;
HXDLIN( 181)								r1->ly = l_y;
HXDLIN( 181)								r1->lz = l_z;
HXDLIN( 181)								r1->normalize();
            							}
HXLINE( 182)							Float hit = ::h3d::col::Collider_obj::rayIntersection(i->preciseShape,r1,i->bestMatch);
HXLINE( 183)							if ((hit > 0)) {
HXLINE( 184)								Float hitPoint_x = (r1->px + (hit * r1->lx));
HXDLIN( 184)								Float hitPoint_y = (r1->py + (hit * r1->ly));
HXDLIN( 184)								Float hitPoint_z = (r1->pz + (hit * r1->lz));
HXLINE( 185)								i->hitPoint->x = hitPoint_x;
HXLINE( 186)								i->hitPoint->y = hitPoint_y;
HXLINE( 187)								i->hitPoint->z = hitPoint_z;
            							}
            							else {
HXLINE( 189)								wfactor = ((Float)1.);
            							}
HXLINE( 190)							{
HXLINE( 190)								r1->px = saveR_px;
HXDLIN( 190)								r1->py = saveR_py;
HXDLIN( 190)								r1->pz = saveR_pz;
HXDLIN( 190)								r1->lx = saveR_lx;
HXDLIN( 190)								r1->ly = saveR_ly;
HXDLIN( 190)								r1->lz = saveR_lz;
            							}
            						}
HXLINE( 193)						 ::h3d::Vector _this = i->hitPoint;
HXDLIN( 193)						Float p_x = _this->x;
HXDLIN( 193)						Float p_y = _this->y;
HXDLIN( 193)						Float p_z = _this->z;
HXDLIN( 193)						Float p_w = _this->w;
HXLINE( 194)						p_w = ( (Float)(1) );
HXLINE( 195)						{
HXLINE( 195)							 ::h3d::Matrix m1 = i->absPos;
HXDLIN( 195)							Float px = ((((p_x * m1->_11) + (p_y * m1->_21)) + (p_z * m1->_31)) + (p_w * m1->_41));
HXDLIN( 195)							Float py = ((((p_x * m1->_12) + (p_y * m1->_22)) + (p_z * m1->_32)) + (p_w * m1->_42));
HXDLIN( 195)							Float pz = ((((p_x * m1->_13) + (p_y * m1->_23)) + (p_z * m1->_33)) + (p_w * m1->_43));
HXDLIN( 195)							p_x = px;
HXDLIN( 195)							p_y = py;
HXDLIN( 195)							p_z = pz;
            						}
HXLINE( 196)						{
HXLINE( 196)							 ::h3d::Matrix m2 = this->camera->m;
HXDLIN( 196)							Float px1 = ((((p_x * m2->_11) + (p_y * m2->_21)) + (p_z * m2->_31)) + (p_w * m2->_41));
HXDLIN( 196)							Float py1 = ((((p_x * m2->_12) + (p_y * m2->_22)) + (p_z * m2->_32)) + (p_w * m2->_42));
HXDLIN( 196)							Float pz1 = ((((p_x * m2->_13) + (p_y * m2->_23)) + (p_z * m2->_33)) + (p_w * m2->_43));
HXDLIN( 196)							Float iw = (( (Float)(1) ) / ((((p_x * m2->_14) + (p_y * m2->_24)) + (p_z * m2->_34)) + (p_w * m2->_44)));
HXDLIN( 196)							p_x = (px1 * iw);
HXDLIN( 196)							p_y = (py1 * iw);
HXDLIN( 196)							p_z = (pz1 * iw);
HXDLIN( 196)							p_w = ( (Float)(1) );
            						}
HXLINE( 197)						i->hitPoint->w = (p_z + wfactor);
            					}
            				}
HXLINE( 199)				this->hitInteractives->sort(this->sortHitPointByCameraDistance_dyn());
            			}
HXLINE( 202)			this->hitInteractives->unshift(null());
            		}
HXLINE( 205)		while((this->hitInteractives->length > 0)){
HXLINE( 207)			 ::h3d::scene::Interactive i = this->hitInteractives->pop().StaticCast<  ::h3d::scene::Interactive >();
HXLINE( 208)			if (::hx::IsNull( i )) {
HXLINE( 209)				return null();
            			}
HXLINE( 211)			event->relX = i->hitPoint->x;
HXLINE( 212)			event->relY = i->hitPoint->y;
HXLINE( 213)			event->relZ = i->hitPoint->z;
HXLINE( 214)			i->handleEvent(event);
HXLINE( 216)			if (event->cancel) {
HXLINE( 217)				event->cancel = false;
HXLINE( 218)				event->propagate = false;
HXLINE( 219)				continue;
            			}
HXLINE( 222)			if (!(event->propagate)) {
HXLINE( 223)				while((this->hitInteractives->length > 0)){
HXLINE( 223)					this->hitInteractives->pop().StaticCast<  ::h3d::scene::Interactive >();
            				}
            			}
HXLINE( 226)			return i;
            		}
HXLINE( 229)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,handleEvent,return )

 ::h3d::scene::Object Scene_obj::clone( ::h3d::scene::Object o){
            	HX_GC_STACKFRAME(&_hx_pos_8af959369304e32f_232_clone)
HXLINE( 233)		 ::h3d::scene::Scene s;
HXDLIN( 233)		if (::hx::IsNull( o )) {
HXLINE( 233)			s =  ::h3d::scene::Scene_obj::__alloc( HX_CTX ,null(),null());
            		}
            		else {
HXLINE( 233)			s = ( ( ::h3d::scene::Scene)(o) );
            		}
HXLINE( 234)		s->camera = this->camera->clone();
HXLINE( 235)		this->super::clone(s);
HXLINE( 236)		return s;
            	}


void Scene_obj::dispose(){
            	HX_GC_STACKFRAME(&_hx_pos_8af959369304e32f_242_dispose)
HXLINE( 243)		if (((this->flags & 32) != 0)) {
HXLINE( 244)			this->onRemove();
            		}
HXLINE( 245)		if (::hx::IsNotNull( this->hardwarePass )) {
HXLINE( 246)			this->hardwarePass->dispose();
HXLINE( 247)			this->hardwarePass = null();
            		}
HXLINE( 249)		this->ctx->dispose();
HXLINE( 250)		if (::hx::IsNotNull( this->renderer )) {
HXLINE( 251)			this->renderer->dispose();
HXLINE( 252)			this->set_renderer( ::h3d::scene::Renderer_obj::__alloc( HX_CTX ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,dispose,(void))

void Scene_obj::addEventTarget( ::h3d::scene::Interactive i){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_257_addEventTarget)
HXLINE( 258)		if ((this->interactives->indexOf(i,null()) >= 0)) {
HXLINE( 258)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            		}
HXLINE( 259)		this->interactives->push(i);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addEventTarget,(void))

void Scene_obj::removeEventTarget( ::h3d::scene::Interactive i){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_264_removeEventTarget)
HXDLIN( 264)		if (this->interactives->remove(i)) {
HXLINE( 265)			if (::hx::IsNotNull( this->events )) {
HXLINE( 265)				this->events->onRemove(i);
            			}
HXLINE( 266)			this->hitInteractives->remove(i);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeEventTarget,(void))

void Scene_obj::setElapsedTime(Float elapsedTime){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_275_setElapsedTime)
HXDLIN( 275)		this->ctx->elapsedTime = elapsedTime;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setElapsedTime,(void))

 ::h3d::scene::Object Scene_obj::hardwarePick(Float pixelX,Float pixelY){
            		HX_BEGIN_LOCAL_FUNC_S8(::hx::LocalFunc,_hx_Closure_0, ::h3d::scene::Scene,_gthis,::Array< Float >,savedRay_pz,::Array< Float >,savedRay_px,::Array< Float >,savedRay_ly, ::h3d::col::Ray,ray,::Array< Float >,savedRay_lz,::Array< Float >,savedRay_lx,::Array< Float >,savedRay_py) HXARGC(1)
            		void _hx_run( ::h3d::scene::Mesh m){
            			HX_STACKFRAME(&_hx_pos_8af959369304e32f_299_hardwarePick)
HXLINE( 300)			if (::hx::IsNull( m->primitive )) {
HXLINE( 300)				return;
            			}
HXLINE( 301)			{
HXLINE( 301)				 ::h3d::Matrix m1 = m->getInvPos();
HXDLIN( 301)				Float p_x = ray->px;
HXDLIN( 301)				Float p_y = ray->py;
HXDLIN( 301)				Float p_z = ray->pz;
HXDLIN( 301)				Float p_w = ((Float)1.);
HXDLIN( 301)				{
HXLINE( 301)					Float px = ((((p_x * m1->_11) + (p_y * m1->_21)) + (p_z * m1->_31)) + (p_w * m1->_41));
HXDLIN( 301)					Float py = ((((p_x * m1->_12) + (p_y * m1->_22)) + (p_z * m1->_32)) + (p_w * m1->_42));
HXDLIN( 301)					Float pz = ((((p_x * m1->_13) + (p_y * m1->_23)) + (p_z * m1->_33)) + (p_w * m1->_43));
HXDLIN( 301)					p_x = px;
HXDLIN( 301)					p_y = py;
HXDLIN( 301)					p_z = pz;
            				}
HXDLIN( 301)				ray->px = p_x;
HXDLIN( 301)				ray->py = p_y;
HXDLIN( 301)				ray->pz = p_z;
HXDLIN( 301)				Float l_x = ray->lx;
HXDLIN( 301)				Float l_y = ray->ly;
HXDLIN( 301)				Float l_z = ray->lz;
HXDLIN( 301)				Float l_w = ((Float)1.);
HXDLIN( 301)				{
HXLINE( 301)					Float px1 = (((l_x * m1->_11) + (l_y * m1->_21)) + (l_z * m1->_31));
HXDLIN( 301)					Float py1 = (((l_x * m1->_12) + (l_y * m1->_22)) + (l_z * m1->_32));
HXDLIN( 301)					Float pz1 = (((l_x * m1->_13) + (l_y * m1->_23)) + (l_z * m1->_33));
HXDLIN( 301)					l_x = px1;
HXDLIN( 301)					l_y = py1;
HXDLIN( 301)					l_z = pz1;
            				}
HXDLIN( 301)				ray->lx = l_x;
HXDLIN( 301)				ray->ly = l_y;
HXDLIN( 301)				ray->lz = l_z;
HXDLIN( 301)				ray->normalize();
            			}
HXLINE( 302)			if ((m->primitive->getBounds()->rayIntersection(ray,false) >= 0)) {
HXLINE( 303)				_gthis->ctx->emitPass(m->material->passes,m);
            			}
HXLINE( 304)			{
HXLINE( 304)				ray->px = savedRay_px->__get(0);
HXDLIN( 304)				ray->py = savedRay_py->__get(0);
HXDLIN( 304)				ray->pz = savedRay_pz->__get(0);
HXDLIN( 304)				ray->lx = savedRay_lx->__get(0);
HXDLIN( 304)				ray->ly = savedRay_ly->__get(0);
HXDLIN( 304)				ray->lz = savedRay_lz->__get(0);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_8af959369304e32f_287_hardwarePick)
HXDLIN( 287)		 ::h3d::scene::Scene _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 288)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 289)		this->camera->screenRatio = (( (Float)(engine->width) ) / ( (Float)(engine->height) ));
HXLINE( 290)		this->camera->update();
HXLINE( 291)		this->ctx->camera = this->camera;
HXLINE( 292)		this->ctx->engine = engine;
HXLINE( 293)		this->ctx->scene = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 294)		this->ctx->start();
HXLINE( 296)		 ::h3d::col::Ray ray = this->camera->rayFromScreen(pixelX,pixelY,null(),null());
HXLINE( 297)		::Array< Float > savedRay_pz = ::Array_obj< Float >::__new(0);
HXDLIN( 297)		::Array< Float > savedRay_py = ::Array_obj< Float >::__new(0);
HXDLIN( 297)		::Array< Float > savedRay_px = ::Array_obj< Float >::__new(0);
HXDLIN( 297)		::Array< Float > savedRay_lz = ::Array_obj< Float >::__new(0);
HXDLIN( 297)		::Array< Float > savedRay_ly = ::Array_obj< Float >::__new(0);
HXDLIN( 297)		::Array< Float > savedRay_lx = ::Array_obj< Float >::__new(0);
HXDLIN( 297)		savedRay_px[0] = ray->px;
HXDLIN( 297)		savedRay_py[0] = ray->py;
HXDLIN( 297)		savedRay_pz[0] = ray->pz;
HXDLIN( 297)		savedRay_lx[0] = ray->lx;
HXDLIN( 297)		savedRay_ly[0] = ray->ly;
HXDLIN( 297)		savedRay_lz[0] = ray->lz;
HXLINE( 299)		this->iterVisibleMeshes( ::Dynamic(new _hx_Closure_0(_gthis,savedRay_pz,savedRay_px,savedRay_ly,ray,savedRay_lz,savedRay_lx,savedRay_py)));
HXLINE( 307)		this->ctx->lightSystem = null();
HXLINE( 309)		 ::h3d::scene::Object found = null();
HXLINE( 310)		 ::h3d::pass::PassList passes =  ::h3d::pass::PassList_obj::__alloc( HX_CTX ,this->ctx->passes);
HXLINE( 312)		if (::hx::IsNotNull( passes->current )) {
HXLINE( 313)			 ::h3d::pass::HardwarePick p = this->hardwarePass;
HXLINE( 314)			if (::hx::IsNull( p )) {
HXLINE( 315)				p =  ::h3d::pass::HardwarePick_obj::__alloc( HX_CTX );
HXDLIN( 315)				this->hardwarePass = p;
            			}
HXLINE( 316)			{
HXLINE( 316)				 ::h3d::scene::RenderContext _this = this->ctx;
HXDLIN( 316)				 ::Dynamic value =  ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("texture",db,c8,e0,9e),::h3d::mat::Texture_obj::fromColor(267386880,0)));
HXDLIN( 316)				_this->setGlobalID(::hxsl::Globals_obj::allocID(HX_("depthMap",59,15,19,97)),value);
            			}
HXLINE( 317)			p->pickX = pixelX;
HXLINE( 318)			p->pickY = pixelY;
HXLINE( 319)			p->setContext(this->ctx);
HXLINE( 320)			p->draw(passes,null());
HXLINE( 321)			if ((p->pickedIndex >= 0)) {
HXLINE( 322)				 ::h3d::pass::PassObject _g_o = passes->current;
HXDLIN( 322)				while(::hx::IsNotNull( _g_o )){
HXLINE( 322)					 ::h3d::pass::PassObject tmp = _g_o;
HXDLIN( 322)					_g_o = _g_o->next;
HXDLIN( 322)					 ::h3d::pass::PassObject po = tmp;
HXLINE( 323)					if ((p->pickedIndex-- == 0)) {
HXLINE( 324)						found = po->obj;
HXLINE( 325)						goto _hx_goto_24;
            					}
            				}
            				_hx_goto_24:;
            			}
            		}
HXLINE( 329)		this->ctx->done();
HXLINE( 330)		this->ctx->camera = null();
HXLINE( 331)		this->ctx->engine = null();
HXLINE( 332)		this->ctx->scene = null();
HXLINE( 333)		return found;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,hardwarePick,return )

void Scene_obj::syncOnly(Float et){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_339_syncOnly)
HXLINE( 340)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 341)		this->setElapsedTime(et);
HXLINE( 342)		 ::h3d::mat::Texture t = engine->getCurrentTarget();
HXLINE( 343)		if (::hx::IsNull( t )) {
HXLINE( 344)			this->camera->screenRatio = (( (Float)(engine->width) ) / ( (Float)(engine->height) ));
            		}
            		else {
HXLINE( 346)			this->camera->screenRatio = (( (Float)(t->width) ) / ( (Float)(t->height) ));
            		}
HXLINE( 347)		this->camera->update();
HXLINE( 348)		this->ctx->camera = this->camera;
HXLINE( 349)		this->ctx->engine = engine;
HXLINE( 350)		this->ctx->scene = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 351)		this->ctx->start();
HXLINE( 352)		this->syncRec(this->ctx);
HXLINE( 353)		this->ctx->camera = null();
HXLINE( 354)		this->ctx->engine = null();
HXLINE( 355)		this->ctx->scene = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,syncOnly,(void))

void Scene_obj::computeStatic(){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_361_computeStatic)
HXLINE( 362)		Float old = this->ctx->elapsedTime;
HXLINE( 363)		this->ctx->elapsedTime = ( (Float)(0) );
HXLINE( 364)		this->ctx->computingStatic = true;
HXLINE( 365)		this->render(::h3d::Engine_obj::CURRENT);
HXLINE( 366)		this->ctx->computingStatic = false;
HXLINE( 367)		this->ctx->elapsedTime = old;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,computeStatic,(void))

void Scene_obj::render( ::h3d::Engine engine){
            	HX_GC_STACKFRAME(&_hx_pos_8af959369304e32f_375_render)
HXLINE( 377)		if (((this->flags & 32) == 0)) {
HXLINE( 378)			this->onAdd();
            		}
HXLINE( 380)		 ::h3d::mat::Texture t = engine->getCurrentTarget();
HXLINE( 381)		if (::hx::IsNull( t )) {
HXLINE( 382)			this->camera->screenRatio = (( (Float)(engine->width) ) / ( (Float)(engine->height) ));
            		}
            		else {
HXLINE( 384)			this->camera->screenRatio = (( (Float)(t->width) ) / ( (Float)(t->height) ));
            		}
HXLINE( 385)		this->camera->update();
HXLINE( 387)		if (this->camera->rightHanded) {
HXLINE( 388)			engine->driver->setRenderFlag(::h3d::impl::RenderFlag_obj::CameraHandness_dyn(),1);
            		}
HXLINE( 390)		this->ctx->camera = this->camera;
HXLINE( 391)		this->ctx->engine = engine;
HXLINE( 392)		this->ctx->scene = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 393)		this->ctx->start();
HXLINE( 394)		this->renderer->start();
HXLINE( 396)		this->syncRec(this->ctx);
HXLINE( 397)		this->emitRec(this->ctx);
HXLINE( 399)		 ::h3d::pass::PassObject list = this->ctx->passes;
HXDLIN( 399)		 ::h3d::pass::PassObject _hx_tmp;
HXDLIN( 399)		if (::hx::IsNull( list )) {
HXLINE( 399)			_hx_tmp = null();
            		}
            		else {
HXLINE( 399)			int insize = 1;
HXDLIN( 399)			int nmerges;
HXDLIN( 399)			int psize = 0;
HXDLIN( 399)			int qsize = 0;
HXDLIN( 399)			 ::h3d::pass::PassObject p;
HXDLIN( 399)			 ::h3d::pass::PassObject q;
HXDLIN( 399)			 ::h3d::pass::PassObject e;
HXDLIN( 399)			 ::h3d::pass::PassObject tail;
HXDLIN( 399)			while(true){
HXLINE( 399)				p = list;
HXDLIN( 399)				list = null();
HXDLIN( 399)				tail = null();
HXDLIN( 399)				nmerges = 0;
HXDLIN( 399)				while(::hx::IsNotNull( p )){
HXLINE( 399)					nmerges = (nmerges + 1);
HXDLIN( 399)					q = p;
HXDLIN( 399)					psize = 0;
HXDLIN( 399)					{
HXLINE( 399)						int _g = 0;
HXDLIN( 399)						int _g1 = insize;
HXDLIN( 399)						while((_g < _g1)){
HXLINE( 399)							_g = (_g + 1);
HXDLIN( 399)							int i = (_g - 1);
HXDLIN( 399)							psize = (psize + 1);
HXDLIN( 399)							q = q->next;
HXDLIN( 399)							if (::hx::IsNull( q )) {
HXLINE( 399)								goto _hx_goto_31;
            							}
            						}
            						_hx_goto_31:;
            					}
HXDLIN( 399)					qsize = insize;
HXDLIN( 399)					while(true){
HXLINE( 399)						bool _hx_tmp;
HXDLIN( 399)						if ((psize <= 0)) {
HXLINE( 399)							if ((qsize > 0)) {
HXLINE( 399)								_hx_tmp = ::hx::IsNotNull( q );
            							}
            							else {
HXLINE( 399)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 399)							_hx_tmp = true;
            						}
HXDLIN( 399)						if (!(_hx_tmp)) {
HXLINE( 399)							goto _hx_goto_32;
            						}
HXDLIN( 399)						if ((psize == 0)) {
HXLINE( 399)							e = q;
HXDLIN( 399)							q = q->next;
HXDLIN( 399)							qsize = (qsize - 1);
            						}
            						else {
HXLINE( 399)							bool _hx_tmp;
HXDLIN( 399)							bool _hx_tmp1;
HXDLIN( 399)							if ((qsize != 0)) {
HXLINE( 399)								_hx_tmp1 = ::hx::IsNull( q );
            							}
            							else {
HXLINE( 399)								_hx_tmp1 = true;
            							}
HXDLIN( 399)							if (!(_hx_tmp1)) {
HXLINE( 399)								_hx_tmp = ((p->pass->passId - q->pass->passId) <= 0);
            							}
            							else {
HXLINE( 399)								_hx_tmp = true;
            							}
HXDLIN( 399)							if (_hx_tmp) {
HXLINE( 399)								e = p;
HXDLIN( 399)								p = p->next;
HXDLIN( 399)								psize = (psize - 1);
            							}
            							else {
HXLINE( 399)								e = q;
HXDLIN( 399)								q = q->next;
HXDLIN( 399)								qsize = (qsize - 1);
            							}
            						}
HXDLIN( 399)						if (::hx::IsNotNull( tail )) {
HXLINE( 399)							tail->next = e;
            						}
            						else {
HXLINE( 399)							list = e;
            						}
HXDLIN( 399)						tail = e;
            					}
            					_hx_goto_32:;
HXDLIN( 399)					p = q;
            				}
HXDLIN( 399)				tail->next = null();
HXDLIN( 399)				if ((nmerges <= 1)) {
HXLINE( 399)					goto _hx_goto_29;
            				}
HXDLIN( 399)				insize = (insize * 2);
            			}
            			_hx_goto_29:;
HXDLIN( 399)			_hx_tmp = list;
            		}
HXDLIN( 399)		this->ctx->passes = _hx_tmp;
HXLINE( 404)		 ::h3d::pass::PassObject curPass = this->ctx->passes;
HXLINE( 405)		::Array< ::Dynamic> passes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 406)		int passIndex = -1;
HXLINE( 407)		while(::hx::IsNotNull( curPass )){
HXLINE( 408)			int passId = curPass->pass->passId;
HXLINE( 409)			 ::h3d::pass::PassObject p = curPass;
HXDLIN( 409)			 ::h3d::pass::PassObject prev = null();
HXLINE( 410)			while(true){
HXLINE( 410)				bool _hx_tmp;
HXDLIN( 410)				if (::hx::IsNotNull( p )) {
HXLINE( 410)					_hx_tmp = (p->pass->passId == passId);
            				}
            				else {
HXLINE( 410)					_hx_tmp = false;
            				}
HXDLIN( 410)				if (!(_hx_tmp)) {
HXLINE( 410)					goto _hx_goto_34;
            				}
HXLINE( 411)				prev = p;
HXLINE( 412)				p = p->next;
            			}
            			_hx_goto_34:;
HXLINE( 414)			prev->next = null();
HXLINE( 415)			passIndex = (passIndex + 1);
HXDLIN( 415)			 ::h3d::scene::PassObjects pobjs = this->ctx->cachedPassObjects->__get(passIndex).StaticCast<  ::h3d::scene::PassObjects >();
HXLINE( 416)			if (::hx::IsNull( pobjs )) {
HXLINE( 417)				pobjs =  ::h3d::scene::PassObjects_obj::__alloc( HX_CTX );
HXLINE( 418)				this->ctx->cachedPassObjects[passIndex] = pobjs;
            			}
HXLINE( 420)			pobjs->name = curPass->pass->name;
HXLINE( 421)			{
HXLINE( 421)				 ::h3d::pass::PassList _this = pobjs->passes;
HXDLIN( 421)				_this->current = curPass;
HXDLIN( 421)				_this->discarded = (_this->lastDisc = null());
            			}
HXLINE( 422)			passes->push(pobjs);
HXLINE( 423)			curPass = p;
            		}
HXLINE( 427)		if (::hx::IsNotNull( this->lightSystem )) {
HXLINE( 428)			this->ctx->lightSystem = this->lightSystem;
HXLINE( 429)			this->lightSystem->initLights(this->ctx);
            		}
HXLINE( 431)		this->renderer->process(passes);
HXLINE( 441)		if (this->camera->rightHanded) {
HXLINE( 442)			engine->driver->setRenderFlag(::h3d::impl::RenderFlag_obj::CameraHandness_dyn(),0);
            		}
HXLINE( 444)		this->ctx->done();
HXLINE( 445)		this->ctx->scene = null();
HXLINE( 446)		this->ctx->camera = null();
HXLINE( 447)		this->ctx->engine = null();
HXLINE( 448)		{
HXLINE( 448)			int _g = 0;
HXDLIN( 448)			int _g1 = passIndex;
HXDLIN( 448)			while((_g < _g1)){
HXLINE( 448)				_g = (_g + 1);
HXDLIN( 448)				int i = (_g - 1);
HXLINE( 449)				 ::h3d::scene::PassObjects p = this->ctx->cachedPassObjects->__get(i).StaticCast<  ::h3d::scene::PassObjects >();
HXLINE( 450)				p->name = null();
HXLINE( 451)				{
HXLINE( 451)					 ::h3d::pass::PassList _this = p->passes;
HXDLIN( 451)					 ::h3d::pass::PassObject pass = null();
HXDLIN( 451)					_this->current = pass;
HXDLIN( 451)					_this->discarded = (_this->lastDisc = null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,render,(void))

 ::haxe::io::Bytes Scene_obj::serializeScene(){
            	HX_STACKFRAME(&_hx_pos_8af959369304e32f_463_serializeScene)
HXDLIN( 463)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("You need -lib hxbit to serialize the scene data",30,77,4b,39)));
HXDLIN( 463)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,serializeScene,return )


::hx::ObjectPtr< Scene_obj > Scene_obj::__new( ::Dynamic __o_createRenderer, ::Dynamic __o_createLightSystem) {
	::hx::ObjectPtr< Scene_obj > __this = new Scene_obj();
	__this->__construct(__o_createRenderer,__o_createLightSystem);
	return __this;
}

::hx::ObjectPtr< Scene_obj > Scene_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_createRenderer, ::Dynamic __o_createLightSystem) {
	Scene_obj *__this = (Scene_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scene_obj), true, "h3d.scene.Scene"));
	*(void **)__this = Scene_obj::_hx_vtable;
	__this->__construct(__o_createRenderer,__o_createLightSystem);
	return __this;
}

Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(lightSystem,"lightSystem");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(ctx,"ctx");
	HX_MARK_MEMBER_NAME(interactives,"interactives");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(hitInteractives,"hitInteractives");
	HX_MARK_MEMBER_NAME(eventListeners,"eventListeners");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(hardwarePass,"hardwarePass");
	 ::h3d::scene::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(lightSystem,"lightSystem");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(ctx,"ctx");
	HX_VISIT_MEMBER_NAME(interactives,"interactives");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(hitInteractives,"hitInteractives");
	HX_VISIT_MEMBER_NAME(eventListeners,"eventListeners");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(hardwarePass,"hardwarePass");
	 ::h3d::scene::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Scene_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { return ::hx::Val( ctx ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return ::hx::Val( camera ); }
		if (HX_FIELD_EQ(inName,"events") ) { return ::hx::Val( events ); }
		if (HX_FIELD_EQ(inName,"window") ) { return ::hx::Val( window ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return ::hx::Val( renderer ); }
		if (HX_FIELD_EQ(inName,"syncOnly") ) { return ::hx::Val( syncOnly_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setEvents") ) { return ::hx::Val( setEvents_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightSystem") ) { return ::hx::Val( lightSystem ); }
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return ::hx::Val( handleEvent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"interactives") ) { return ::hx::Val( interactives ); }
		if (HX_FIELD_EQ(inName,"set_renderer") ) { return ::hx::Val( set_renderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"hardwarePass") ) { return ::hx::Val( hardwarePass ); }
		if (HX_FIELD_EQ(inName,"hardwarePick") ) { return ::hx::Val( hardwarePick_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return ::hx::Val( dispatchEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"computeStatic") ) { return ::hx::Val( computeStatic_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"eventListeners") ) { return ::hx::Val( eventListeners ); }
		if (HX_FIELD_EQ(inName,"addEventTarget") ) { return ::hx::Val( addEventTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"setElapsedTime") ) { return ::hx::Val( setElapsedTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"serializeScene") ) { return ::hx::Val( serializeScene_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hitInteractives") ) { return ::hx::Val( hitInteractives ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dispatchListeners") ) { return ::hx::Val( dispatchListeners_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeEventTarget") ) { return ::hx::Val( removeEventTarget_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return ::hx::Val( removeEventListener_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isInteractiveVisible") ) { return ::hx::Val( isInteractiveVisible_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"sortHitPointByCameraDistance") ) { return ::hx::Val( sortHitPointByCameraDistance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Scene_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { ctx=inValue.Cast<  ::h3d::scene::RenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast<  ::h3d::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast<  ::hxd::SceneEvents >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::hxd::Window >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_renderer(inValue.Cast<  ::h3d::scene::Renderer >()) );renderer=inValue.Cast<  ::h3d::scene::Renderer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightSystem") ) { lightSystem=inValue.Cast<  ::h3d::scene::LightSystem >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"interactives") ) { interactives=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hardwarePass") ) { hardwarePass=inValue.Cast<  ::h3d::pass::HardwarePick >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"eventListeners") ) { eventListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hitInteractives") ) { hitInteractives=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("camera",a5,46,8c,b7));
	outFields->push(HX_("lightSystem",65,e0,30,57));
	outFields->push(HX_("renderer",43,c5,db,b2));
	outFields->push(HX_("ctx",a7,84,4b,00));
	outFields->push(HX_("interactives",51,e8,bc,91));
	outFields->push(HX_("events",19,4f,6a,96));
	outFields->push(HX_("hitInteractives",44,2b,58,54));
	outFields->push(HX_("eventListeners",05,aa,53,fc));
	outFields->push(HX_("window",f0,93,8c,52));
	outFields->push(HX_("hardwarePass",99,67,e9,da));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Scene_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Camera */ ,(int)offsetof(Scene_obj,camera),HX_("camera",a5,46,8c,b7)},
	{::hx::fsObject /*  ::h3d::scene::LightSystem */ ,(int)offsetof(Scene_obj,lightSystem),HX_("lightSystem",65,e0,30,57)},
	{::hx::fsObject /*  ::h3d::scene::Renderer */ ,(int)offsetof(Scene_obj,renderer),HX_("renderer",43,c5,db,b2)},
	{::hx::fsObject /*  ::h3d::scene::RenderContext */ ,(int)offsetof(Scene_obj,ctx),HX_("ctx",a7,84,4b,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Scene_obj,interactives),HX_("interactives",51,e8,bc,91)},
	{::hx::fsObject /*  ::hxd::SceneEvents */ ,(int)offsetof(Scene_obj,events),HX_("events",19,4f,6a,96)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Scene_obj,hitInteractives),HX_("hitInteractives",44,2b,58,54)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Scene_obj,eventListeners),HX_("eventListeners",05,aa,53,fc)},
	{::hx::fsObject /*  ::hxd::Window */ ,(int)offsetof(Scene_obj,window),HX_("window",f0,93,8c,52)},
	{::hx::fsObject /*  ::h3d::pass::HardwarePick */ ,(int)offsetof(Scene_obj,hardwarePass),HX_("hardwarePass",99,67,e9,da)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Scene_obj_sStaticStorageInfo = 0;
#endif

static ::String Scene_obj_sMemberFields[] = {
	HX_("camera",a5,46,8c,b7),
	HX_("lightSystem",65,e0,30,57),
	HX_("renderer",43,c5,db,b2),
	HX_("ctx",a7,84,4b,00),
	HX_("interactives",51,e8,bc,91),
	HX_("events",19,4f,6a,96),
	HX_("hitInteractives",44,2b,58,54),
	HX_("eventListeners",05,aa,53,fc),
	HX_("window",f0,93,8c,52),
	HX_("setEvents",5b,c4,11,f6),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("removeEventListener",ca,87,75,55),
	HX_("dispatchListeners",65,cf,2e,b5),
	HX_("set_renderer",c0,9c,ee,7c),
	HX_("sortHitPointByCameraDistance",cc,5b,9b,04),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("isInteractiveVisible",3a,85,a0,dc),
	HX_("handleEvent",52,73,0e,28),
	HX_("clone",5d,13,63,48),
	HX_("dispose",9f,80,4c,bb),
	HX_("addEventTarget",6a,46,11,70),
	HX_("removeEventTarget",27,d9,8a,94),
	HX_("setElapsedTime",e7,99,8b,6e),
	HX_("hardwarePass",99,67,e9,da),
	HX_("hardwarePick",a9,6b,ef,da),
	HX_("syncOnly",67,35,c7,89),
	HX_("computeStatic",85,0b,72,70),
	HX_("render",56,6b,29,05),
	HX_("serializeScene",4c,9f,4c,aa),
	::String(null()) };

::hx::Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	Scene_obj _hx_dummy;
	Scene_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.Scene",d5,f7,5a,44);
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

} // end namespace h3d
} // end namespace scene
