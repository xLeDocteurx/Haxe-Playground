#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Camera
#include <h3d/Camera.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
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
#ifndef INCLUDED_h3d_pass_Blur
#include <h3d/pass/Blur.h>
#endif
#ifndef INCLUDED_h3d_pass_Default
#include <h3d/pass/Default.h>
#endif
#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_pass_RenderMode
#include <h3d/pass/RenderMode.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_h3d_pass_ShadowSamplingKind
#include <h3d/pass/ShadowSamplingKind.h>
#endif
#ifndef INCLUDED_h3d_pass_Shadows
#include <h3d/pass/Shadows.h>
#endif
#ifndef INCLUDED_h3d_scene_Light
#include <h3d/scene/Light.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_shader_Blur
#include <h3d/shader/Blur.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_16_new,"h3d.pass.Shadows","new",0xa11c9c9d,"h3d.pass.Shadows.new","h3d/pass/Shadows.hx",16,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_44_set_mode,"h3d.pass.Shadows","set_mode",0x32119f03,"h3d.pass.Shadows.set_mode","h3d/pass/Shadows.hx",44,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_50_set_enabled,"h3d.pass.Shadows","set_enabled",0x5a933ce1,"h3d.pass.Shadows.set_enabled","h3d/pass/Shadows.hx",50,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_53_set_size,"h3d.pass.Shadows","set_size",0x36046c61,"h3d.pass.Shadows.set_size","h3d/pass/Shadows.hx",53,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_61_dispose,"h3d.pass.Shadows","dispose",0x3ddcaf5c,"h3d.pass.Shadows.dispose","h3d/pass/Shadows.hx",61,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_69_getShadowProj,"h3d.pass.Shadows","getShadowProj",0xd33be250,"h3d.pass.Shadows.getShadowProj","h3d/pass/Shadows.hx",69,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_73_getShadowTex,"h3d.pass.Shadows","getShadowTex",0x33785a94,"h3d.pass.Shadows.getShadowTex","h3d/pass/Shadows.hx",73,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_77_isUsingWorldDist,"h3d.pass.Shadows","isUsingWorldDist",0x43282421,"h3d.pass.Shadows.isUsingWorldDist","h3d/pass/Shadows.hx",77,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_80_getOutputs,"h3d.pass.Shadows","getOutputs",0x8ffb7dbf,"h3d.pass.Shadows.getOutputs","h3d/pass/Shadows.hx",80,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_90_loadStaticData,"h3d.pass.Shadows","loadStaticData",0x74f02aa1,"h3d.pass.Shadows.loadStaticData","h3d/pass/Shadows.hx",90,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_94_saveStaticData,"h3d.pass.Shadows","saveStaticData",0xdcb8fe78,"h3d.pass.Shadows.saveStaticData","h3d/pass/Shadows.hx",94,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_98_computeStatic,"h3d.pass.Shadows","computeStatic",0xcdb16602,"h3d.pass.Shadows.computeStatic","h3d/pass/Shadows.hx",98,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_101_createDefaultShadowMap,"h3d.pass.Shadows","createDefaultShadowMap",0x3eb3769a,"h3d.pass.Shadows.createDefaultShadowMap","h3d/pass/Shadows.hx",101,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_107_syncShader,"h3d.pass.Shadows","syncShader",0x6beb8943,"h3d.pass.Shadows.syncShader","h3d/pass/Shadows.hx",107,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_111_filterPasses,"h3d.pass.Shadows","filterPasses",0x2a06457a,"h3d.pass.Shadows.filterPasses","h3d/pass/Shadows.hx",111,0x108739d3)
HX_LOCAL_STACK_FRAME(_hx_pos_a4a3517e12ff62ef_144_cullPasses,"h3d.pass.Shadows","cullPasses",0xf06bc434,"h3d.pass.Shadows.cullPasses","h3d/pass/Shadows.hx",144,0x108739d3)
namespace h3d{
namespace pass{

void Shadows_obj::__construct( ::h3d::scene::Light light){
            	HX_GC_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_16_new)
HXLINE(  32)		this->pcfScale = ((Float)1.0);
HXLINE(  31)		this->pcfQuality = 1;
HXLINE(  30)		this->bias = ((Float)0.01);
HXLINE(  29)		this->power = ((Float)30.0);
HXLINE(  28)		this->samplingKind = ::h3d::pass::ShadowSamplingKind_obj::None_dyn();
HXLINE(  24)		this->size = 1024;
HXLINE(  23)		this->mode = ::h3d::pass::RenderMode_obj::None_dyn();
HXLINE(  22)		this->enabled = true;
HXLINE(  35)		if (::hx::IsNull( this->format )) {
HXLINE(  35)			this->format = ::hxd::PixelFormat_obj::R16F_dyn();
            		}
HXLINE(  36)		if (!(::h3d::Engine_obj::CURRENT->driver->isSupportedFormat(this->format))) {
HXLINE(  36)			this->format = ::h3d::mat::Texture_obj::nativeFormat;
            		}
HXLINE(  37)		super::__construct(HX_("shadow",e0,c7,20,1d));
HXLINE(  38)		this->light = light;
HXLINE(  39)		this->blur =  ::h3d::pass::Blur_obj::__alloc( HX_CTX ,5,null(),null(),null());
HXLINE(  40)		this->blur->set_quality(((Float)0.5));
HXLINE(  41)		{
HXLINE(  41)			 ::h3d::shader::Blur _this = ( ( ::h3d::shader::Blur)(this->blur->shader) );
HXDLIN(  41)			_this->constModified = true;
HXDLIN(  41)			_this->isDepth__ = ::hx::IsPointerEq( this->format,::h3d::mat::Texture_obj::nativeFormat );
            		}
            	}

Dynamic Shadows_obj::__CreateEmpty() { return new Shadows_obj; }

void *Shadows_obj::_hx_vtable = 0;

Dynamic Shadows_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Shadows_obj > _hx_result = new Shadows_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Shadows_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x32234ba9) {
		if (inClassId<=(int)0x2eacfc8f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2eacfc8f;
		} else {
			return inClassId==(int)0x32234ba9;
		}
	} else {
		return inClassId==(int)0x6e5907d7;
	}
}

 ::h3d::pass::RenderMode Shadows_obj::set_mode( ::h3d::pass::RenderMode m){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_44_set_mode)
HXLINE(  45)		if (::hx::IsPointerNotEq( m,::h3d::pass::RenderMode_obj::None_dyn() )) {
HXLINE(  45)			::String _hx_tmp = ((HX_("Shadow mode ",3d,eb,0d,e7) + ::Std_obj::string(m)) + HX_(" not supported for ",b6,d8,57,fa));
HXDLIN(  45)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(this->light))));
            		}
HXLINE(  46)		return (this->mode = m);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shadows_obj,set_mode,return )

bool Shadows_obj::set_enabled(bool b){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_50_set_enabled)
HXDLIN(  50)		return (this->enabled = b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shadows_obj,set_enabled,return )

int Shadows_obj::set_size(int s){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_53_set_size)
HXLINE(  54)		bool _hx_tmp;
HXDLIN(  54)		if ((s != this->size)) {
HXLINE(  54)			_hx_tmp = ::hx::IsNotNull( this->staticTexture );
            		}
            		else {
HXLINE(  54)			_hx_tmp = false;
            		}
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  55)			this->staticTexture->dispose();
HXLINE(  56)			this->staticTexture = null();
            		}
HXLINE(  58)		return (this->size = s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shadows_obj,set_size,return )

void Shadows_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_61_dispose)
HXLINE(  62)		this->super::dispose();
HXLINE(  63)		this->blur->dispose();
HXLINE(  65)		if (::hx::IsNotNull( this->staticTexture )) {
HXLINE(  65)			this->staticTexture->dispose();
            		}
            	}


 ::h3d::Matrix Shadows_obj::getShadowProj(){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_69_getShadowProj)
HXDLIN(  69)		return this->lightCamera->m;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shadows_obj,getShadowProj,return )

 ::h3d::mat::Texture Shadows_obj::getShadowTex(){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_73_getShadowTex)
HXDLIN(  73)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shadows_obj,getShadowTex,return )

bool Shadows_obj::isUsingWorldDist(){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_77_isUsingWorldDist)
HXDLIN(  77)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shadows_obj,isUsingWorldDist,return )

::Array< ::Dynamic> Shadows_obj::getOutputs(){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_80_getOutputs)
HXLINE(  81)		if (this->isUsingWorldDist()) {
HXLINE(  82)			return ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Output_obj::Swiz(::hxsl::Output_obj::Value(HX_("output.worldDist",2b,7f,cf,7d),1),::Array_obj< ::Dynamic>::__new(4)->init(0,::hxsl::Component_obj::X_dyn())->init(1,::hxsl::Component_obj::X_dyn())->init(2,::hxsl::Component_obj::X_dyn())->init(3,::hxsl::Component_obj::X_dyn())));
            		}
HXLINE(  84)		if (::hx::IsPointerEq( this->format,::h3d::mat::Texture_obj::nativeFormat )) {
HXLINE(  85)			return ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Output_obj::PackFloat(::hxsl::Output_obj::Value(HX_("output.depth",d6,4f,60,0a),null())));
            		}
HXLINE(  86)		return ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Output_obj::Swiz(::hxsl::Output_obj::Value(HX_("output.depth",d6,4f,60,0a),1),::Array_obj< ::Dynamic>::__new(4)->init(0,::hxsl::Component_obj::X_dyn())->init(1,::hxsl::Component_obj::X_dyn())->init(2,::hxsl::Component_obj::X_dyn())->init(3,::hxsl::Component_obj::X_dyn())));
            	}


bool Shadows_obj::loadStaticData( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_90_loadStaticData)
HXDLIN(  90)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shadows_obj,loadStaticData,return )

 ::haxe::io::Bytes Shadows_obj::saveStaticData(){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_94_saveStaticData)
HXDLIN(  94)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shadows_obj,saveStaticData,return )

void Shadows_obj::computeStatic( ::h3d::pass::PassList passes){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_98_computeStatic)
HXDLIN(  98)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shadows_obj,computeStatic,(void))

 ::h3d::mat::Texture Shadows_obj::createDefaultShadowMap(){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_101_createDefaultShadowMap)
HXLINE( 102)		 ::h3d::mat::Texture tex = ::h3d::mat::Texture_obj::fromColor(16777215,null());
HXLINE( 103)		tex->name = HX_("defaultShadowMap",9b,8d,98,b7);
HXLINE( 104)		return tex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shadows_obj,createDefaultShadowMap,return )

void Shadows_obj::syncShader( ::h3d::mat::Texture texture){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_107_syncShader)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shadows_obj,syncShader,(void))

bool Shadows_obj::filterPasses( ::h3d::pass::PassList passes){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_111_filterPasses)
HXDLIN( 111)		if (!(this->ctx->computingStatic)) {
HXLINE( 112)			switch((int)(this->mode->_hx_getIndex())){
            				case (int)0: {
HXLINE( 114)					return false;
            				}
            				break;
            				case (int)1: {
HXLINE( 122)					bool _hx_tmp;
HXDLIN( 122)					if (::hx::IsNotNull( this->staticTexture )) {
HXLINE( 122)						 ::h3d::mat::Texture _this = this->staticTexture;
HXDLIN( 122)						if (::hx::IsNull( _this->t )) {
HXLINE( 122)							_hx_tmp = ::hx::IsNull( _this->realloc );
            						}
            						else {
HXLINE( 122)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 122)						_hx_tmp = true;
            					}
HXDLIN( 122)					if (_hx_tmp) {
HXLINE( 123)						this->staticTexture = this->createDefaultShadowMap();
            					}
HXLINE( 124)					this->syncShader(this->staticTexture);
HXLINE( 125)					return false;
            				}
            				break;
            				case (int)2: {
HXLINE( 116)					return true;
            				}
            				break;
            				case (int)3: {
HXLINE( 118)					bool _hx_tmp;
HXDLIN( 118)					if (::hx::IsNotNull( this->staticTexture )) {
HXLINE( 118)						 ::h3d::mat::Texture _this = this->staticTexture;
HXDLIN( 118)						if (::hx::IsNull( _this->t )) {
HXLINE( 118)							_hx_tmp = ::hx::IsNull( _this->realloc );
            						}
            						else {
HXLINE( 118)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 118)						_hx_tmp = true;
            					}
HXDLIN( 118)					if (_hx_tmp) {
HXLINE( 119)						this->staticTexture = this->createDefaultShadowMap();
            					}
HXLINE( 120)					return true;
            				}
            				break;
            			}
            		}
            		else {
HXLINE( 129)			switch((int)(this->mode->_hx_getIndex())){
            				case (int)0: {
HXLINE( 131)					return false;
            				}
            				break;
            				case (int)1: {
HXLINE( 138)					{
HXLINE( 138)						 ::h3d::pass::PassObject head = null();
HXDLIN( 138)						 ::h3d::pass::PassObject prev = null();
HXDLIN( 138)						 ::h3d::pass::PassObject disc = passes->discarded;
HXDLIN( 138)						 ::h3d::pass::PassObject discQueue = passes->lastDisc;
HXDLIN( 138)						 ::h3d::pass::PassObject cur = passes->current;
HXDLIN( 138)						while(::hx::IsNotNull( cur )){
HXLINE( 138)							if ((cur->pass->isStatic == true)) {
HXLINE( 138)								if (::hx::IsNull( head )) {
HXLINE( 138)									prev = cur;
HXDLIN( 138)									head = prev;
            								}
            								else {
HXLINE( 138)									prev->next = cur;
HXDLIN( 138)									prev = cur;
            								}
            							}
            							else {
HXLINE( 138)								if (::hx::IsNull( disc )) {
HXLINE( 138)									discQueue = cur;
HXDLIN( 138)									disc = discQueue;
            								}
            								else {
HXLINE( 138)									discQueue->next = cur;
HXDLIN( 138)									discQueue = cur;
            								}
            							}
HXDLIN( 138)							cur = cur->next;
            						}
HXDLIN( 138)						if (::hx::IsNotNull( prev )) {
HXLINE( 138)							prev->next = null();
            						}
HXDLIN( 138)						if (::hx::IsNotNull( discQueue )) {
HXLINE( 138)							discQueue->next = null();
            						}
HXDLIN( 138)						passes->current = head;
HXDLIN( 138)						passes->discarded = disc;
HXDLIN( 138)						passes->lastDisc = discQueue;
            					}
HXLINE( 139)					return true;
            				}
            				break;
            				case (int)2: {
HXLINE( 133)					return false;
            				}
            				break;
            				case (int)3: {
HXLINE( 135)					{
HXLINE( 135)						 ::h3d::pass::PassObject head = null();
HXDLIN( 135)						 ::h3d::pass::PassObject prev = null();
HXDLIN( 135)						 ::h3d::pass::PassObject disc = passes->discarded;
HXDLIN( 135)						 ::h3d::pass::PassObject discQueue = passes->lastDisc;
HXDLIN( 135)						 ::h3d::pass::PassObject cur = passes->current;
HXDLIN( 135)						while(::hx::IsNotNull( cur )){
HXLINE( 135)							if ((cur->pass->isStatic == true)) {
HXLINE( 135)								if (::hx::IsNull( head )) {
HXLINE( 135)									prev = cur;
HXDLIN( 135)									head = prev;
            								}
            								else {
HXLINE( 135)									prev->next = cur;
HXDLIN( 135)									prev = cur;
            								}
            							}
            							else {
HXLINE( 135)								if (::hx::IsNull( disc )) {
HXLINE( 135)									discQueue = cur;
HXDLIN( 135)									disc = discQueue;
            								}
            								else {
HXLINE( 135)									discQueue->next = cur;
HXDLIN( 135)									discQueue = cur;
            								}
            							}
HXDLIN( 135)							cur = cur->next;
            						}
HXDLIN( 135)						if (::hx::IsNotNull( prev )) {
HXLINE( 135)							prev->next = null();
            						}
HXDLIN( 135)						if (::hx::IsNotNull( discQueue )) {
HXLINE( 135)							discQueue->next = null();
            						}
HXDLIN( 135)						passes->current = head;
HXDLIN( 135)						passes->discarded = disc;
HXDLIN( 135)						passes->lastDisc = discQueue;
            					}
HXLINE( 136)					return true;
            				}
            				break;
            			}
            		}
HXLINE( 111)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shadows_obj,filterPasses,return )

void Shadows_obj::cullPasses( ::h3d::pass::PassList passes, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_a4a3517e12ff62ef_144_cullPasses)
HXLINE( 145)		::Dynamic prevCollider = null();
HXLINE( 146)		bool prevResult = true;
HXLINE( 147)		{
HXLINE( 147)			 ::h3d::pass::PassObject head = null();
HXDLIN( 147)			 ::h3d::pass::PassObject prev = null();
HXDLIN( 147)			 ::h3d::pass::PassObject disc = passes->discarded;
HXDLIN( 147)			 ::h3d::pass::PassObject discQueue = passes->lastDisc;
HXDLIN( 147)			 ::h3d::pass::PassObject cur = passes->current;
HXDLIN( 147)			while(::hx::IsNotNull( cur )){
HXLINE( 148)				::Dynamic col = cur->obj->cullingCollider;
HXLINE( 147)				bool _hx_tmp;
HXLINE( 149)				if (::hx::IsNull( col )) {
HXLINE( 147)					_hx_tmp = true;
            				}
            				else {
HXLINE( 151)					if (::hx::IsInstanceNotEq( col,prevCollider )) {
HXLINE( 152)						prevCollider = col;
HXLINE( 153)						prevResult = ( (bool)(f(col)) );
            					}
HXLINE( 147)					_hx_tmp = prevResult;
            				}
HXDLIN( 147)				if (_hx_tmp) {
HXLINE( 147)					if (::hx::IsNull( head )) {
HXLINE( 147)						prev = cur;
HXDLIN( 147)						head = prev;
            					}
            					else {
HXLINE( 147)						prev->next = cur;
HXDLIN( 147)						prev = cur;
            					}
            				}
            				else {
HXLINE( 147)					if (::hx::IsNull( disc )) {
HXLINE( 147)						discQueue = cur;
HXDLIN( 147)						disc = discQueue;
            					}
            					else {
HXLINE( 147)						discQueue->next = cur;
HXDLIN( 147)						discQueue = cur;
            					}
            				}
HXDLIN( 147)				cur = cur->next;
            			}
HXDLIN( 147)			if (::hx::IsNotNull( prev )) {
HXLINE( 147)				prev->next = null();
            			}
HXDLIN( 147)			if (::hx::IsNotNull( discQueue )) {
HXLINE( 147)				discQueue->next = null();
            			}
HXDLIN( 147)			passes->current = head;
HXDLIN( 147)			passes->discarded = disc;
HXDLIN( 147)			passes->lastDisc = discQueue;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shadows_obj,cullPasses,(void))


::hx::ObjectPtr< Shadows_obj > Shadows_obj::__new( ::h3d::scene::Light light) {
	::hx::ObjectPtr< Shadows_obj > __this = new Shadows_obj();
	__this->__construct(light);
	return __this;
}

::hx::ObjectPtr< Shadows_obj > Shadows_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Light light) {
	Shadows_obj *__this = (Shadows_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Shadows_obj), true, "h3d.pass.Shadows"));
	*(void **)__this = Shadows_obj::_hx_vtable;
	__this->__construct(light);
	return __this;
}

Shadows_obj::Shadows_obj()
{
}

void Shadows_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shadows);
	HX_MARK_MEMBER_NAME(lightCamera,"lightCamera");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(staticTexture,"staticTexture");
	HX_MARK_MEMBER_NAME(light,"light");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(blur,"blur");
	HX_MARK_MEMBER_NAME(samplingKind,"samplingKind");
	HX_MARK_MEMBER_NAME(power,"power");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(pcfQuality,"pcfQuality");
	HX_MARK_MEMBER_NAME(pcfScale,"pcfScale");
	 ::h3d::pass::Default_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shadows_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lightCamera,"lightCamera");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(staticTexture,"staticTexture");
	HX_VISIT_MEMBER_NAME(light,"light");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(blur,"blur");
	HX_VISIT_MEMBER_NAME(samplingKind,"samplingKind");
	HX_VISIT_MEMBER_NAME(power,"power");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(pcfQuality,"pcfQuality");
	HX_VISIT_MEMBER_NAME(pcfScale,"pcfScale");
	 ::h3d::pass::Default_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Shadows_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return ::hx::Val( mode ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"blur") ) { return ::hx::Val( blur ); }
		if (HX_FIELD_EQ(inName,"bias") ) { return ::hx::Val( bias ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { return ::hx::Val( light ); }
		if (HX_FIELD_EQ(inName,"power") ) { return ::hx::Val( power ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pcfScale") ) { return ::hx::Val( pcfScale ); }
		if (HX_FIELD_EQ(inName,"set_mode") ) { return ::hx::Val( set_mode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pcfQuality") ) { return ::hx::Val( pcfQuality ); }
		if (HX_FIELD_EQ(inName,"getOutputs") ) { return ::hx::Val( getOutputs_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncShader") ) { return ::hx::Val( syncShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"cullPasses") ) { return ::hx::Val( cullPasses_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightCamera") ) { return ::hx::Val( lightCamera ); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"samplingKind") ) { return ::hx::Val( samplingKind ); }
		if (HX_FIELD_EQ(inName,"getShadowTex") ) { return ::hx::Val( getShadowTex_dyn() ); }
		if (HX_FIELD_EQ(inName,"filterPasses") ) { return ::hx::Val( filterPasses_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"staticTexture") ) { return ::hx::Val( staticTexture ); }
		if (HX_FIELD_EQ(inName,"getShadowProj") ) { return ::hx::Val( getShadowProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"computeStatic") ) { return ::hx::Val( computeStatic_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadStaticData") ) { return ::hx::Val( loadStaticData_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveStaticData") ) { return ::hx::Val( saveStaticData_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isUsingWorldDist") ) { return ::hx::Val( isUsingWorldDist_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createDefaultShadowMap") ) { return ::hx::Val( createDefaultShadowMap_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Shadows_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mode(inValue.Cast<  ::h3d::pass::RenderMode >()) );mode=inValue.Cast<  ::h3d::pass::RenderMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast< int >()) );size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blur") ) { blur=inValue.Cast<  ::h3d::pass::Blur >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { light=inValue.Cast<  ::h3d::scene::Light >(); return inValue; }
		if (HX_FIELD_EQ(inName,"power") ) { power=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::hxd::PixelFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::hxsl::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) );enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pcfScale") ) { pcfScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pcfQuality") ) { pcfQuality=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightCamera") ) { lightCamera=inValue.Cast<  ::h3d::Camera >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"samplingKind") ) { samplingKind=inValue.Cast<  ::h3d::pass::ShadowSamplingKind >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"staticTexture") ) { staticTexture=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shadows_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lightCamera",1b,90,da,1b));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("staticTexture",cd,25,f3,25));
	outFields->push(HX_("light",d6,90,fc,74));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("mode",63,d3,60,48));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("blur",a7,42,19,41));
	outFields->push(HX_("samplingKind",db,34,98,31));
	outFields->push(HX_("power",05,4c,9a,c6));
	outFields->push(HX_("bias",79,ea,16,41));
	outFields->push(HX_("pcfQuality",ec,b1,a6,8f));
	outFields->push(HX_("pcfScale",77,e6,41,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Shadows_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Camera */ ,(int)offsetof(Shadows_obj,lightCamera),HX_("lightCamera",1b,90,da,1b)},
	{::hx::fsObject /*  ::hxd::PixelFormat */ ,(int)offsetof(Shadows_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Shadows_obj,staticTexture),HX_("staticTexture",cd,25,f3,25)},
	{::hx::fsObject /*  ::h3d::scene::Light */ ,(int)offsetof(Shadows_obj,light),HX_("light",d6,90,fc,74)},
	{::hx::fsBool,(int)offsetof(Shadows_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsObject /*  ::h3d::pass::RenderMode */ ,(int)offsetof(Shadows_obj,mode),HX_("mode",63,d3,60,48)},
	{::hx::fsInt,(int)offsetof(Shadows_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsObject /*  ::hxsl::Shader */ ,(int)offsetof(Shadows_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::h3d::pass::Blur */ ,(int)offsetof(Shadows_obj,blur),HX_("blur",a7,42,19,41)},
	{::hx::fsObject /*  ::h3d::pass::ShadowSamplingKind */ ,(int)offsetof(Shadows_obj,samplingKind),HX_("samplingKind",db,34,98,31)},
	{::hx::fsFloat,(int)offsetof(Shadows_obj,power),HX_("power",05,4c,9a,c6)},
	{::hx::fsFloat,(int)offsetof(Shadows_obj,bias),HX_("bias",79,ea,16,41)},
	{::hx::fsInt,(int)offsetof(Shadows_obj,pcfQuality),HX_("pcfQuality",ec,b1,a6,8f)},
	{::hx::fsFloat,(int)offsetof(Shadows_obj,pcfScale),HX_("pcfScale",77,e6,41,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Shadows_obj_sStaticStorageInfo = 0;
#endif

static ::String Shadows_obj_sMemberFields[] = {
	HX_("lightCamera",1b,90,da,1b),
	HX_("format",37,8f,8e,fd),
	HX_("staticTexture",cd,25,f3,25),
	HX_("light",d6,90,fc,74),
	HX_("enabled",81,04,31,7e),
	HX_("mode",63,d3,60,48),
	HX_("size",c1,a0,53,4c),
	HX_("shader",25,bf,20,1d),
	HX_("blur",a7,42,19,41),
	HX_("samplingKind",db,34,98,31),
	HX_("power",05,4c,9a,c6),
	HX_("bias",79,ea,16,41),
	HX_("pcfQuality",ec,b1,a6,8f),
	HX_("pcfScale",77,e6,41,ef),
	HX_("set_mode",60,e8,78,76),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("set_size",be,b5,6b,7a),
	HX_("dispose",9f,80,4c,bb),
	HX_("getShadowProj",d3,87,fc,75),
	HX_("getShadowTex",71,16,fc,03),
	HX_("isUsingWorldDist",7e,92,33,3f),
	HX_("getOutputs",5c,98,cd,33),
	HX_("loadStaticData",be,57,c0,3a),
	HX_("saveStaticData",95,2b,89,a2),
	HX_("computeStatic",85,0b,72,70),
	HX_("createDefaultShadowMap",b7,88,51,a9),
	HX_("syncShader",e0,a3,bd,0f),
	HX_("filterPasses",57,01,8a,fa),
	HX_("cullPasses",d1,de,3d,94),
	::String(null()) };

::hx::Class Shadows_obj::__mClass;

void Shadows_obj::__register()
{
	Shadows_obj _hx_dummy;
	Shadows_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.Shadows",2b,0a,d9,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Shadows_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Shadows_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shadows_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shadows_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace pass
