#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
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
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_Feature
#include <h3d/impl/Feature.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_impl_RendererFX
#include <h3d/impl/RendererFX.h>
#endif
#ifndef INCLUDED_h3d_impl_TextureCache
#include <h3d/impl/TextureCache.h>
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
#ifndef INCLUDED_h3d_pass_Copy
#include <h3d/pass/Copy.h>
#endif
#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_h3d_scene_LightSystem
#include <h3d/scene/LightSystem.h>
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
#ifndef INCLUDED_h3d_scene_RenderMode
#include <h3d/scene/RenderMode.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_41_new,"h3d.scene.Renderer","new",0x8c2c784c,"h3d.scene.Renderer.new","h3d/scene/Renderer.hx",41,0x5ccd7122)
HX_DEFINE_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_42_new,"h3d.scene.Renderer","new",0x8c2c784c,"h3d.scene.Renderer.new","h3d/scene/Renderer.hx",42,0x5ccd7122)
HX_DEFINE_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_21_new,"h3d.scene.Renderer","new",0x8c2c784c,"h3d.scene.Renderer.new","h3d/scene/Renderer.hx",21,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_45_getEffect,"h3d.scene.Renderer","getEffect",0xb11344b3,"h3d.scene.Renderer.getEffect","h3d/scene/Renderer.hx",45,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_53_dispose,"h3d.scene.Renderer","dispose",0xe0958e8b,"h3d.scene.Renderer.dispose","h3d/scene/Renderer.hx",53,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_61_mark,"h3d.scene.Renderer","mark",0x1a1086a1,"h3d.scene.Renderer.mark","h3d/scene/Renderer.hx",61,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_67_addShader,"h3d.scene.Renderer","addShader",0xa95e5512,"h3d.scene.Renderer.addShader","h3d/scene/Renderer.hx",67,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_70_getPass,"h3d.scene.Renderer","getPass",0x421da273,"h3d.scene.Renderer.getPass","h3d/scene/Renderer.hx",70,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_77_getPassByName,"h3d.scene.Renderer","getPassByName",0xbc0a1a95,"h3d.scene.Renderer.getPassByName","h3d/scene/Renderer.hx",77,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_84_debugCompileShader,"h3d.scene.Renderer","debugCompileShader",0x396b5839,"h3d.scene.Renderer.debugCompileShader","h3d/scene/Renderer.hx",84,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_92_hasFeature,"h3d.scene.Renderer","hasFeature",0x674c4810,"h3d.scene.Renderer.hasFeature","h3d/scene/Renderer.hx",92,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_96_getDefaultLight,"h3d.scene.Renderer","getDefaultLight",0x1c6cfbf7,"h3d.scene.Renderer.getDefaultLight","h3d/scene/Renderer.hx",96,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_100_getLightSystem,"h3d.scene.Renderer","getLightSystem",0x2ef2fb03,"h3d.scene.Renderer.getLightSystem","h3d/scene/Renderer.hx",100,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_104_depthSort,"h3d.scene.Renderer","depthSort",0x76f4e2ed,"h3d.scene.Renderer.depthSort","h3d/scene/Renderer.hx",104,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_118_clear,"h3d.scene.Renderer","clear",0xf99eec79,"h3d.scene.Renderer.clear","h3d/scene/Renderer.hx",118,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_122_allocTarget,"h3d.scene.Renderer","allocTarget",0xa49bc592,"h3d.scene.Renderer.allocTarget","h3d/scene/Renderer.hx",122,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_126_copy,"h3d.scene.Renderer","copy",0x137f0249,"h3d.scene.Renderer.copy","h3d/scene/Renderer.hx",126,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_129_setTarget,"h3d.scene.Renderer","setTarget",0xbaadc97f,"h3d.scene.Renderer.setTarget","h3d/scene/Renderer.hx",129,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_135_setTargets,"h3d.scene.Renderer","setTargets",0x9d628614,"h3d.scene.Renderer.setTargets","h3d/scene/Renderer.hx",135,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_142_resetTarget,"h3d.scene.Renderer","resetTarget",0x3ce5ea6c,"h3d.scene.Renderer.resetTarget","h3d/scene/Renderer.hx",142,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_149_has,"h3d.scene.Renderer","has",0x8c27e746,"h3d.scene.Renderer.has","h3d/scene/Renderer.hx",149,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_152_get,"h3d.scene.Renderer","get",0x8c272882,"h3d.scene.Renderer.get","h3d/scene/Renderer.hx",152,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_160_draw,"h3d.scene.Renderer","draw",0x142a7298,"h3d.scene.Renderer.draw","h3d/scene/Renderer.hx",160,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_164_render,"h3d.scene.Renderer","render",0x6ef17eea,"h3d.scene.Renderer.render","h3d/scene/Renderer.hx",164,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_168_computeStatic,"h3d.scene.Renderer","computeStatic",0x1f4c5271,"h3d.scene.Renderer.computeStatic","h3d/scene/Renderer.hx",168,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_171_start,"h3d.scene.Renderer","start",0x354eef4e,"h3d.scene.Renderer.start","h3d/scene/Renderer.hx",171,0x5ccd7122)
HX_LOCAL_STACK_FRAME(_hx_pos_ae380b77b3e5b78a_174_process,"h3d.scene.Renderer","process",0x1693b05b,"h3d.scene.Renderer.process","h3d/scene/Renderer.hx",174,0x5ccd7122)
namespace h3d{
namespace scene{

void Renderer_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,bool,frontToBack, ::Dynamic,_g) HXARGC(1)
            		void _hx_run( ::h3d::pass::PassList passes){
            			HX_GC_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_41_new)
HXLINE(  41)			_g(frontToBack,passes);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,bool,frontToBack1, ::Dynamic,_g1) HXARGC(1)
            		void _hx_run( ::h3d::pass::PassList passes){
            			HX_GC_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_42_new)
HXLINE(  42)			_g1(frontToBack1,passes);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_21_new)
HXLINE(  34)		this->renderMode = ::h3d::scene::RenderMode_obj::Default_dyn();
HXLINE(  32)		this->effects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  28)		this->hasSetTarget = false;
HXLINE(  26)		this->emptyPasses =  ::h3d::pass::PassList_obj::__alloc( HX_CTX ,null());
HXLINE(  37)		this->allPasses = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  38)		this->passObjects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  39)		this->set_props(this->getDefaultProps(null()));
HXLINE(  41)		 ::Dynamic _g = this->depthSort_dyn();
HXDLIN(  41)		bool frontToBack = true;
HXDLIN(  41)		this->frontToBack =  ::Dynamic(new _hx_Closure_0(frontToBack,_g));
HXLINE(  42)		 ::Dynamic _g1 = this->depthSort_dyn();
HXDLIN(  42)		bool frontToBack1 = false;
HXDLIN(  42)		this->backToFront =  ::Dynamic(new _hx_Closure_1(frontToBack1,_g1));
            	}

Dynamic Renderer_obj::__CreateEmpty() { return new Renderer_obj; }

void *Renderer_obj::_hx_vtable = 0;

Dynamic Renderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Renderer_obj > _hx_result = new Renderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Renderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b619516) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b619516;
	} else {
		return inClassId==(int)0x531b0df8;
	}
}

 ::Dynamic Renderer_obj::getEffect(::hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_45_getEffect)
HXLINE(  46)		{
HXLINE(  46)			int _g = 0;
HXDLIN(  46)			::Array< ::Dynamic> _g1 = this->effects;
HXDLIN(  46)			while((_g < _g1->length)){
HXLINE(  46)				::Dynamic f = _g1->__get(_g);
HXDLIN(  46)				_g = (_g + 1);
HXLINE(  47)				 ::Dynamic f1 = ::Std_obj::downcast(f,cl);
HXLINE(  48)				if (::hx::IsNotNull( f1 )) {
HXLINE(  48)					return f1;
            				}
            			}
            		}
HXLINE(  50)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,getEffect,return )

void Renderer_obj::dispose(){
            	HX_GC_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_53_dispose)
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			::Array< ::Dynamic> _g1 = this->allPasses;
HXDLIN(  54)			while((_g < _g1->length)){
HXLINE(  54)				 ::h3d::pass::Base p = _g1->__get(_g).StaticCast<  ::h3d::pass::Base >();
HXDLIN(  54)				_g = (_g + 1);
HXLINE(  55)				p->dispose();
            			}
            		}
HXLINE(  56)		{
HXLINE(  56)			int _g2 = 0;
HXDLIN(  56)			::Array< ::Dynamic> _g3 = this->effects;
HXDLIN(  56)			while((_g2 < _g3->length)){
HXLINE(  56)				::Dynamic f = _g3->__get(_g2);
HXDLIN(  56)				_g2 = (_g2 + 1);
HXLINE(  57)				::h3d::impl::RendererFX_obj::dispose(f);
            			}
            		}
HXLINE(  58)		this->passObjects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,dispose,(void))

void Renderer_obj::mark(::String id){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_61_mark)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,mark,(void))

void Renderer_obj::addShader( ::hxsl::Shader s){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_67_addShader)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,addShader,(void))

 ::Dynamic Renderer_obj::getPass(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_70_getPass)
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			::Array< ::Dynamic> _g1 = this->allPasses;
HXDLIN(  71)			while((_g < _g1->length)){
HXLINE(  71)				 ::h3d::pass::Base p = _g1->__get(_g).StaticCast<  ::h3d::pass::Base >();
HXDLIN(  71)				_g = (_g + 1);
HXLINE(  72)				if (::Std_obj::isOfType(p,( ( ::Dynamic)(c) ))) {
HXLINE(  73)					return p;
            				}
            			}
            		}
HXLINE(  74)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,getPass,return )

 ::h3d::pass::Base Renderer_obj::getPassByName(::String name){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_77_getPassByName)
HXLINE(  78)		{
HXLINE(  78)			int _g = 0;
HXDLIN(  78)			::Array< ::Dynamic> _g1 = this->allPasses;
HXDLIN(  78)			while((_g < _g1->length)){
HXLINE(  78)				 ::h3d::pass::Base p = _g1->__get(_g).StaticCast<  ::h3d::pass::Base >();
HXDLIN(  78)				_g = (_g + 1);
HXLINE(  79)				if ((p->name == name)) {
HXLINE(  80)					return p;
            				}
            			}
            		}
HXLINE(  81)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,getPassByName,return )

 ::hxsl::RuntimeShader Renderer_obj::debugCompileShader( ::h3d::mat::Pass pass){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_84_debugCompileShader)
HXLINE(  85)		 ::h3d::pass::Base p = this->getPassByName(pass->name);
HXLINE(  86)		if (::hx::IsNull( p )) {
HXLINE(  86)			p = this->defaultPass;
            		}
HXLINE(  87)		p->setContext(this->ctx);
HXLINE(  88)		return p->compileShader(pass);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,debugCompileShader,return )

bool Renderer_obj::hasFeature( ::h3d::impl::Feature f){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_92_hasFeature)
HXDLIN(  92)		return ::h3d::Engine_obj::CURRENT->driver->hasFeature(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,hasFeature,return )

 ::Dynamic Renderer_obj::getDefaultLight( ::Dynamic l){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_96_getDefaultLight)
HXDLIN(  96)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,getDefaultLight,return )

 ::h3d::scene::LightSystem Renderer_obj::getLightSystem(){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_100_getLightSystem)
HXDLIN( 100)		return this->ctx->scene->lightSystem;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,getLightSystem,return )

void Renderer_obj::depthSort(bool frontToBack, ::h3d::pass::PassList passes){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_104_depthSort)
HXLINE( 105)		 ::h3d::Matrix cam = this->ctx->camera->m;
HXLINE( 106)		{
HXLINE( 106)			 ::h3d::pass::PassObject _g_o = passes->current;
HXDLIN( 106)			while(::hx::IsNotNull( _g_o )){
HXLINE( 106)				 ::h3d::pass::PassObject tmp = _g_o;
HXDLIN( 106)				_g_o = _g_o->next;
HXDLIN( 106)				 ::h3d::pass::PassObject p = tmp;
HXLINE( 107)				Float z = ((((p->obj->absPos->_41 * cam->_13) + (p->obj->absPos->_42 * cam->_23)) + (p->obj->absPos->_43 * cam->_33)) + cam->_43);
HXLINE( 108)				Float w = ((((p->obj->absPos->_41 * cam->_14) + (p->obj->absPos->_42 * cam->_24)) + (p->obj->absPos->_43 * cam->_34)) + cam->_44);
HXLINE( 109)				p->depth = (z / w);
            			}
            		}
HXLINE( 111)		if (frontToBack) {
HXLINE( 112)			 ::h3d::pass::PassObject list = passes->current;
HXDLIN( 112)			 ::h3d::pass::PassObject _hx_tmp;
HXDLIN( 112)			if (::hx::IsNull( list )) {
HXLINE( 112)				_hx_tmp = null();
            			}
            			else {
HXLINE( 112)				int insize = 1;
HXDLIN( 112)				int nmerges;
HXDLIN( 112)				int psize = 0;
HXDLIN( 112)				int qsize = 0;
HXDLIN( 112)				 ::h3d::pass::PassObject p;
HXDLIN( 112)				 ::h3d::pass::PassObject q;
HXDLIN( 112)				 ::h3d::pass::PassObject e;
HXDLIN( 112)				 ::h3d::pass::PassObject tail;
HXDLIN( 112)				while(true){
HXLINE( 105)					p = list;
HXLINE( 106)					list = null();
HXLINE( 107)					tail = null();
HXLINE( 108)					nmerges = 0;
HXLINE( 112)					while(::hx::IsNotNull( p )){
HXLINE( 112)						nmerges = (nmerges + 1);
HXLINE( 111)						q = p;
HXLINE( 112)						psize = 0;
HXDLIN( 112)						{
HXLINE( 112)							int _g = 0;
HXDLIN( 112)							int _g1 = insize;
HXDLIN( 112)							while((_g < _g1)){
HXLINE( 112)								_g = (_g + 1);
HXDLIN( 112)								int i = (_g - 1);
HXDLIN( 112)								psize = (psize + 1);
HXLINE( 115)								q = q->next;
HXLINE( 112)								if (::hx::IsNull( q )) {
HXLINE( 112)									goto _hx_goto_21;
            								}
            							}
            							_hx_goto_21:;
            						}
HXLINE( 119)						qsize = insize;
HXLINE( 112)						while(true){
HXLINE( 112)							bool _hx_tmp;
HXDLIN( 112)							if ((psize <= 0)) {
HXLINE( 112)								if ((qsize > 0)) {
HXLINE( 112)									_hx_tmp = ::hx::IsNotNull( q );
            								}
            								else {
HXLINE( 112)									_hx_tmp = false;
            								}
            							}
            							else {
HXLINE( 112)								_hx_tmp = true;
            							}
HXDLIN( 112)							if (!(_hx_tmp)) {
HXLINE( 112)								goto _hx_goto_22;
            							}
HXDLIN( 112)							if ((psize == 0)) {
HXLINE( 122)								e = q;
HXLINE( 123)								q = q->next;
HXLINE( 112)								qsize = (qsize - 1);
            							}
            							else {
HXLINE( 112)								bool _hx_tmp;
HXDLIN( 112)								bool _hx_tmp1;
HXDLIN( 112)								if ((qsize != 0)) {
HXLINE( 112)									_hx_tmp1 = ::hx::IsNull( q );
            								}
            								else {
HXLINE( 112)									_hx_tmp1 = true;
            								}
HXDLIN( 112)								if (!(_hx_tmp1)) {
HXLINE( 112)									int _hx_tmp1;
HXDLIN( 112)									if ((p->pass->layer == q->pass->layer)) {
HXLINE( 112)										if ((p->depth > q->depth)) {
HXLINE( 112)											_hx_tmp1 = 1;
            										}
            										else {
HXLINE( 112)											_hx_tmp1 = -1;
            										}
            									}
            									else {
HXLINE( 112)										_hx_tmp1 = (p->pass->layer - q->pass->layer);
            									}
HXDLIN( 112)									_hx_tmp = (_hx_tmp1 <= 0);
            								}
            								else {
HXLINE( 112)									_hx_tmp = true;
            								}
HXDLIN( 112)								if (_hx_tmp) {
HXLINE( 126)									e = p;
HXLINE( 127)									p = p->next;
HXLINE( 112)									psize = (psize - 1);
            								}
            								else {
HXLINE( 130)									e = q;
HXLINE( 131)									q = q->next;
HXLINE( 112)									qsize = (qsize - 1);
            								}
            							}
HXDLIN( 112)							if (::hx::IsNotNull( tail )) {
HXLINE( 112)								tail->next = e;
            							}
            							else {
HXLINE( 137)								list = e;
            							}
HXLINE( 138)							tail = e;
            						}
            						_hx_goto_22:;
HXLINE( 140)						p = q;
            					}
HXLINE( 112)					tail->next = null();
HXDLIN( 112)					if ((nmerges <= 1)) {
HXLINE( 112)						goto _hx_goto_19;
            					}
HXDLIN( 112)					insize = (insize * 2);
            				}
            				_hx_goto_19:;
HXDLIN( 112)				_hx_tmp = list;
            			}
HXDLIN( 112)			passes->current = _hx_tmp;
            		}
            		else {
HXLINE( 114)			 ::h3d::pass::PassObject list = passes->current;
HXDLIN( 114)			 ::h3d::pass::PassObject _hx_tmp;
HXDLIN( 114)			if (::hx::IsNull( list )) {
HXLINE( 114)				_hx_tmp = null();
            			}
            			else {
HXLINE( 114)				int insize = 1;
HXDLIN( 114)				int nmerges;
HXDLIN( 114)				int psize = 0;
HXDLIN( 114)				int qsize = 0;
HXDLIN( 114)				 ::h3d::pass::PassObject p;
HXDLIN( 114)				 ::h3d::pass::PassObject q;
HXDLIN( 114)				 ::h3d::pass::PassObject e;
HXDLIN( 114)				 ::h3d::pass::PassObject tail;
HXDLIN( 114)				while(true){
HXLINE( 105)					p = list;
HXLINE( 106)					list = null();
HXLINE( 107)					tail = null();
HXLINE( 108)					nmerges = 0;
HXLINE( 114)					while(::hx::IsNotNull( p )){
HXLINE( 114)						nmerges = (nmerges + 1);
HXLINE( 111)						q = p;
HXLINE( 112)						psize = 0;
HXLINE( 114)						{
HXLINE( 114)							int _g = 0;
HXDLIN( 114)							int _g1 = insize;
HXDLIN( 114)							while((_g < _g1)){
HXLINE( 114)								_g = (_g + 1);
HXDLIN( 114)								int i = (_g - 1);
HXDLIN( 114)								psize = (psize + 1);
HXLINE( 115)								q = q->next;
HXLINE( 114)								if (::hx::IsNull( q )) {
HXLINE( 114)									goto _hx_goto_25;
            								}
            							}
            							_hx_goto_25:;
            						}
HXLINE( 119)						qsize = insize;
HXLINE( 114)						while(true){
HXLINE( 114)							bool _hx_tmp;
HXDLIN( 114)							if ((psize <= 0)) {
HXLINE( 114)								if ((qsize > 0)) {
HXLINE( 114)									_hx_tmp = ::hx::IsNotNull( q );
            								}
            								else {
HXLINE( 114)									_hx_tmp = false;
            								}
            							}
            							else {
HXLINE( 114)								_hx_tmp = true;
            							}
HXDLIN( 114)							if (!(_hx_tmp)) {
HXLINE( 114)								goto _hx_goto_26;
            							}
HXDLIN( 114)							if ((psize == 0)) {
HXLINE( 122)								e = q;
HXLINE( 123)								q = q->next;
HXLINE( 114)								qsize = (qsize - 1);
            							}
            							else {
HXLINE( 114)								bool _hx_tmp;
HXDLIN( 114)								bool _hx_tmp1;
HXDLIN( 114)								if ((qsize != 0)) {
HXLINE( 114)									_hx_tmp1 = ::hx::IsNull( q );
            								}
            								else {
HXLINE( 114)									_hx_tmp1 = true;
            								}
HXDLIN( 114)								if (!(_hx_tmp1)) {
HXLINE( 114)									int _hx_tmp1;
HXDLIN( 114)									if ((p->pass->layer == q->pass->layer)) {
HXLINE( 114)										if ((p->depth > q->depth)) {
HXLINE( 114)											_hx_tmp1 = -1;
            										}
            										else {
HXLINE( 114)											_hx_tmp1 = 1;
            										}
            									}
            									else {
HXLINE( 114)										_hx_tmp1 = (p->pass->layer - q->pass->layer);
            									}
HXDLIN( 114)									_hx_tmp = (_hx_tmp1 <= 0);
            								}
            								else {
HXLINE( 114)									_hx_tmp = true;
            								}
HXDLIN( 114)								if (_hx_tmp) {
HXLINE( 126)									e = p;
HXLINE( 127)									p = p->next;
HXLINE( 114)									psize = (psize - 1);
            								}
            								else {
HXLINE( 130)									e = q;
HXLINE( 131)									q = q->next;
HXLINE( 114)									qsize = (qsize - 1);
            								}
            							}
HXDLIN( 114)							if (::hx::IsNotNull( tail )) {
HXLINE( 114)								tail->next = e;
            							}
            							else {
HXLINE( 137)								list = e;
            							}
HXLINE( 138)							tail = e;
            						}
            						_hx_goto_26:;
HXLINE( 140)						p = q;
            					}
HXLINE( 114)					tail->next = null();
HXDLIN( 114)					if ((nmerges <= 1)) {
HXLINE( 114)						goto _hx_goto_23;
            					}
HXDLIN( 114)					insize = (insize * 2);
            				}
            				_hx_goto_23:;
HXDLIN( 114)				_hx_tmp = list;
            			}
HXDLIN( 114)			passes->current = _hx_tmp;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,depthSort,(void))

void Renderer_obj::clear( ::Dynamic color, ::Dynamic depth, ::Dynamic stencil){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_118_clear)
HXDLIN( 118)		this->ctx->engine->clear(color,depth,stencil);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Renderer_obj,clear,(void))

 ::h3d::mat::Texture Renderer_obj::allocTarget(::String name,::hx::Null< bool >  __o_depth,::hx::Null< Float >  __o_size, ::hxd::PixelFormat format){
            		bool depth = __o_depth.Default(true);
            		Float size = __o_size.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_122_allocTarget)
HXDLIN( 122)		return this->ctx->textures->allocTarget(name,::Math_obj::round((( (Float)(this->ctx->engine->width) ) * size)),::Math_obj::round((( (Float)(this->ctx->engine->height) ) * size)),depth,format,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(Renderer_obj,allocTarget,return )

void Renderer_obj::copy( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_126_copy)
HXDLIN( 126)		::h3d::pass::Copy_obj::run(from,to,blend,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(Renderer_obj,copy,(void))

void Renderer_obj::setTarget( ::h3d::mat::Texture tex){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_129_setTarget)
HXLINE( 130)		if (this->hasSetTarget) {
HXLINE( 130)			this->ctx->engine->popTarget();
            		}
HXLINE( 131)		this->ctx->engine->pushTarget(tex,null(),null());
HXLINE( 132)		this->hasSetTarget = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,setTarget,(void))

void Renderer_obj::setTargets(::cpp::VirtualArray textures){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_135_setTargets)
HXLINE( 136)		if (this->hasSetTarget) {
HXLINE( 136)			this->ctx->engine->popTarget();
            		}
HXLINE( 137)		this->ctx->engine->pushTargets(textures);
HXLINE( 138)		this->hasSetTarget = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,setTargets,(void))

void Renderer_obj::resetTarget(){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_142_resetTarget)
HXDLIN( 142)		if (this->hasSetTarget) {
HXLINE( 143)			this->ctx->engine->popTarget();
HXLINE( 144)			this->hasSetTarget = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,resetTarget,(void))

bool Renderer_obj::has(::String name){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_149_has)
HXDLIN( 149)		return ::hx::IsNotNull( this->passObjects->get(name) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,has,return )

 ::h3d::pass::PassList Renderer_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_152_get)
HXLINE( 153)		 ::h3d::scene::PassObjects p = ( ( ::h3d::scene::PassObjects)(this->passObjects->get(name)) );
HXLINE( 154)		if (::hx::IsNull( p )) {
HXLINE( 154)			return this->emptyPasses;
            		}
HXLINE( 155)		p->rendered = true;
HXLINE( 156)		return p->passes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,get,return )

void Renderer_obj::draw(::String name){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_160_draw)
HXDLIN( 160)		 ::h3d::pass::Base _hx_tmp = this->defaultPass;
HXDLIN( 160)		_hx_tmp->draw(this->get(name),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,draw,(void))

void Renderer_obj::render(){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_164_render)
HXDLIN( 164)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,render,(void))

void Renderer_obj::computeStatic(){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_168_computeStatic)
HXDLIN( 168)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,computeStatic,(void))

void Renderer_obj::start(){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_171_start)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,start,(void))

void Renderer_obj::process(::Array< ::Dynamic> passes){
            	HX_STACKFRAME(&_hx_pos_ae380b77b3e5b78a_174_process)
HXLINE( 175)		this->hasSetTarget = false;
HXLINE( 176)		{
HXLINE( 176)			int _g = 0;
HXDLIN( 176)			::Array< ::Dynamic> _g1 = this->allPasses;
HXDLIN( 176)			while((_g < _g1->length)){
HXLINE( 176)				 ::h3d::pass::Base p = _g1->__get(_g).StaticCast<  ::h3d::pass::Base >();
HXDLIN( 176)				_g = (_g + 1);
HXLINE( 177)				p->setContext(this->ctx);
            			}
            		}
HXLINE( 178)		{
HXLINE( 178)			int _g2 = 0;
HXDLIN( 178)			while((_g2 < passes->length)){
HXLINE( 178)				 ::h3d::scene::PassObjects p = passes->__get(_g2).StaticCast<  ::h3d::scene::PassObjects >();
HXDLIN( 178)				_g2 = (_g2 + 1);
HXLINE( 179)				this->passObjects->set(p->name,p);
            			}
            		}
HXLINE( 180)		this->ctx->textures->begin();
HXLINE( 181)		if (this->ctx->computingStatic) {
HXLINE( 182)			this->computeStatic();
            		}
            		else {
HXLINE( 184)			this->render();
            		}
HXLINE( 185)		this->resetTarget();
HXLINE( 186)		{
HXLINE( 186)			int _g3 = 0;
HXDLIN( 186)			while((_g3 < passes->length)){
HXLINE( 186)				 ::h3d::scene::PassObjects p = passes->__get(_g3).StaticCast<  ::h3d::scene::PassObjects >();
HXDLIN( 186)				_g3 = (_g3 + 1);
HXLINE( 187)				{
HXLINE( 187)					 ::h3d::scene::PassObjects value = null();
HXDLIN( 187)					this->passObjects->set(p->name,value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,process,(void))


::hx::ObjectPtr< Renderer_obj > Renderer_obj::__new() {
	::hx::ObjectPtr< Renderer_obj > __this = new Renderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Renderer_obj > Renderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Renderer_obj *__this = (Renderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Renderer_obj), true, "h3d.scene.Renderer"));
	*(void **)__this = Renderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(defaultPass,"defaultPass");
	HX_MARK_MEMBER_NAME(passObjects,"passObjects");
	HX_MARK_MEMBER_NAME(allPasses,"allPasses");
	HX_MARK_MEMBER_NAME(emptyPasses,"emptyPasses");
	HX_MARK_MEMBER_NAME(ctx,"ctx");
	HX_MARK_MEMBER_NAME(hasSetTarget,"hasSetTarget");
	HX_MARK_MEMBER_NAME(frontToBack,"frontToBack");
	HX_MARK_MEMBER_NAME(backToFront,"backToFront");
	HX_MARK_MEMBER_NAME(effects,"effects");
	HX_MARK_MEMBER_NAME(renderMode,"renderMode");
	 ::hxd::impl::AnyProps_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultPass,"defaultPass");
	HX_VISIT_MEMBER_NAME(passObjects,"passObjects");
	HX_VISIT_MEMBER_NAME(allPasses,"allPasses");
	HX_VISIT_MEMBER_NAME(emptyPasses,"emptyPasses");
	HX_VISIT_MEMBER_NAME(ctx,"ctx");
	HX_VISIT_MEMBER_NAME(hasSetTarget,"hasSetTarget");
	HX_VISIT_MEMBER_NAME(frontToBack,"frontToBack");
	HX_VISIT_MEMBER_NAME(backToFront,"backToFront");
	HX_VISIT_MEMBER_NAME(effects,"effects");
	HX_VISIT_MEMBER_NAME(renderMode,"renderMode");
	 ::hxd::impl::AnyProps_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Renderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { return ::hx::Val( ctx ); }
		if (HX_FIELD_EQ(inName,"has") ) { return ::hx::Val( has_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mark") ) { return ::hx::Val( mark_dyn() ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { return ::hx::Val( effects ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPass") ) { return ::hx::Val( getPass_dyn() ); }
		if (HX_FIELD_EQ(inName,"process") ) { return ::hx::Val( process_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allPasses") ) { return ::hx::Val( allPasses ); }
		if (HX_FIELD_EQ(inName,"getEffect") ) { return ::hx::Val( getEffect_dyn() ); }
		if (HX_FIELD_EQ(inName,"addShader") ) { return ::hx::Val( addShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"depthSort") ) { return ::hx::Val( depthSort_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTarget") ) { return ::hx::Val( setTarget_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMode") ) { return ::hx::Val( renderMode ); }
		if (HX_FIELD_EQ(inName,"hasFeature") ) { return ::hx::Val( hasFeature_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTargets") ) { return ::hx::Val( setTargets_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultPass") ) { return ::hx::Val( defaultPass ); }
		if (HX_FIELD_EQ(inName,"passObjects") ) { return ::hx::Val( passObjects ); }
		if (HX_FIELD_EQ(inName,"emptyPasses") ) { return ::hx::Val( emptyPasses ); }
		if (HX_FIELD_EQ(inName,"frontToBack") ) { return ::hx::Val( frontToBack ); }
		if (HX_FIELD_EQ(inName,"backToFront") ) { return ::hx::Val( backToFront ); }
		if (HX_FIELD_EQ(inName,"allocTarget") ) { return ::hx::Val( allocTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetTarget") ) { return ::hx::Val( resetTarget_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasSetTarget") ) { return ::hx::Val( hasSetTarget ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getPassByName") ) { return ::hx::Val( getPassByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"computeStatic") ) { return ::hx::Val( computeStatic_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLightSystem") ) { return ::hx::Val( getLightSystem_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getDefaultLight") ) { return ::hx::Val( getDefaultLight_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"debugCompileShader") ) { return ::hx::Val( debugCompileShader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Renderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ctx") ) { ctx=inValue.Cast<  ::h3d::scene::RenderContext >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { effects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allPasses") ) { allPasses=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMode") ) { renderMode=inValue.Cast<  ::h3d::scene::RenderMode >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultPass") ) { defaultPass=inValue.Cast<  ::h3d::pass::Base >(); return inValue; }
		if (HX_FIELD_EQ(inName,"passObjects") ) { passObjects=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyPasses") ) { emptyPasses=inValue.Cast<  ::h3d::pass::PassList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontToBack") ) { frontToBack=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backToFront") ) { backToFront=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasSetTarget") ) { hasSetTarget=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("defaultPass",32,de,10,1c));
	outFields->push(HX_("passObjects",03,58,42,01));
	outFields->push(HX_("allPasses",80,4f,95,bc));
	outFields->push(HX_("emptyPasses",ec,69,5a,b6));
	outFields->push(HX_("ctx",a7,84,4b,00));
	outFields->push(HX_("hasSetTarget",d9,4d,e6,73));
	outFields->push(HX_("effects",c2,e4,4b,2e));
	outFields->push(HX_("renderMode",d9,cd,6a,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Renderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::pass::Base */ ,(int)offsetof(Renderer_obj,defaultPass),HX_("defaultPass",32,de,10,1c)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Renderer_obj,passObjects),HX_("passObjects",03,58,42,01)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Renderer_obj,allPasses),HX_("allPasses",80,4f,95,bc)},
	{::hx::fsObject /*  ::h3d::pass::PassList */ ,(int)offsetof(Renderer_obj,emptyPasses),HX_("emptyPasses",ec,69,5a,b6)},
	{::hx::fsObject /*  ::h3d::scene::RenderContext */ ,(int)offsetof(Renderer_obj,ctx),HX_("ctx",a7,84,4b,00)},
	{::hx::fsBool,(int)offsetof(Renderer_obj,hasSetTarget),HX_("hasSetTarget",d9,4d,e6,73)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Renderer_obj,frontToBack),HX_("frontToBack",cb,36,3a,87)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Renderer_obj,backToFront),HX_("backToFront",c7,55,31,4d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Renderer_obj,effects),HX_("effects",c2,e4,4b,2e)},
	{::hx::fsObject /*  ::h3d::scene::RenderMode */ ,(int)offsetof(Renderer_obj,renderMode),HX_("renderMode",d9,cd,6a,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Renderer_obj_sStaticStorageInfo = 0;
#endif

static ::String Renderer_obj_sMemberFields[] = {
	HX_("defaultPass",32,de,10,1c),
	HX_("passObjects",03,58,42,01),
	HX_("allPasses",80,4f,95,bc),
	HX_("emptyPasses",ec,69,5a,b6),
	HX_("ctx",a7,84,4b,00),
	HX_("hasSetTarget",d9,4d,e6,73),
	HX_("frontToBack",cb,36,3a,87),
	HX_("backToFront",c7,55,31,4d),
	HX_("effects",c2,e4,4b,2e),
	HX_("renderMode",d9,cd,6a,e5),
	HX_("getEffect",c7,e3,f9,dc),
	HX_("dispose",9f,80,4c,bb),
	HX_("mark",0d,40,56,48),
	HX_("addShader",26,f4,44,d5),
	HX_("getPass",87,94,d4,1c),
	HX_("getPassByName",a9,d3,2f,0d),
	HX_("debugCompileShader",a5,36,0a,a7),
	HX_("hasFeature",7c,da,30,a5),
	HX_("getDefaultLight",0b,22,42,4d),
	HX_("getLightSystem",6f,33,cf,de),
	HX_("depthSort",01,82,db,a2),
	HX_("clear",8d,71,5b,48),
	HX_("allocTarget",a6,51,b7,8e),
	HX_("copy",b5,bb,c4,41),
	HX_("setTarget",93,68,94,e6),
	HX_("setTargets",80,18,47,db),
	HX_("resetTarget",80,76,01,27),
	HX_("has",5a,3f,4f,00),
	HX_("get",96,80,4e,00),
	HX_("draw",04,2c,70,42),
	HX_("render",56,6b,29,05),
	HX_("computeStatic",85,0b,72,70),
	HX_("start",62,74,0b,84),
	HX_("process",6f,a2,4a,f1),
	::String(null()) };

::hx::Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	Renderer_obj _hx_dummy;
	Renderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.Renderer",5a,a2,e7,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Renderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Renderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Renderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Renderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
