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
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
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
#ifndef INCLUDED_h3d_pass_PassList
#include <h3d/pass/PassList.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_pass_ShaderManager
#include <h3d/pass/ShaderManager.h>
#endif
#ifndef INCLUDED_h3d_pass_SortByMaterial
#include <h3d/pass/SortByMaterial.h>
#endif
#ifndef INCLUDED_h3d_scene_LightSystem
#include <h3d/scene/LightSystem.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene__RenderContext_SharedGlobal
#include <h3d/scene/_RenderContext/SharedGlobal.h>
#endif
#ifndef INCLUDED_h3d_shader_Buffers
#include <h3d/shader/Buffers.h>
#endif
#ifndef INCLUDED_h3d_shader_ShaderBuffers
#include <h3d/shader/ShaderBuffers.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_AllocGlobal
#include <hxsl/AllocGlobal.h>
#endif
#ifndef INCLUDED_hxsl_AllocParam
#include <hxsl/AllocParam.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif
#ifndef INCLUDED_hxsl_Type
#include <hxsl/Type.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36c6969c2f270b9a_5_new,"h3d.pass.Default","new",0x6d4f07cb,"h3d.pass.Default.new","h3d/pass/Default.hx",5,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_11_get_globals,"h3d.pass.Default","get_globals",0x02a48032,"h3d.pass.Default.get_globals","h3d/pass/Default.hx",11,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_33_getCurrentPixelSize,"h3d.pass.Default","getCurrentPixelSize",0x2436290f,"h3d.pass.Default.getCurrentPixelSize","h3d/pass/Default.hx",33,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_39_getOutputs,"h3d.pass.Default","getOutputs",0xeaccf451,"h3d.pass.Default.getOutputs","h3d/pass/Default.hx",39,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_42_compileShader,"h3d.pass.Default","compileShader",0x156f3c23,"h3d.pass.Default.compileShader","h3d/pass/Default.hx",42,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_49_processShaders,"h3d.pass.Default","processShaders",0x3c59bd74,"h3d.pass.Default.processShaders","h3d/pass/Default.hx",49,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_59_setupShaders,"h3d.pass.Default","setupShaders",0x184177e6,"h3d.pass.Default.setupShaders","h3d/pass/Default.hx",59,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_84_log,"h3d.pass.Default","log",0x6d4d8bef,"h3d.pass.Default.log","h3d/pass/Default.hx",84,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_87_drawObject,"h3d.pass.Default","drawObject",0x0e0255d8,"h3d.pass.Default.drawObject","h3d/pass/Default.hx",87,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_94_draw,"h3d.pass.Default","draw",0x31457239,"h3d.pass.Default.draw","h3d/pass/Default.hx",94,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_cameraView,"h3d.pass.Default","get_cameraView",0x54d7de68,"h3d.pass.Default.get_cameraView","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_cameraView,"h3d.pass.Default","set_cameraView",0x74f7c6dc,"h3d.pass.Default.set_cameraView","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_cameraNear,"h3d.pass.Default","get_cameraNear",0x4f8b1ceb,"h3d.pass.Default.get_cameraNear","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_cameraNear,"h3d.pass.Default","set_cameraNear",0x6fab055f,"h3d.pass.Default.set_cameraNear","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_cameraFar,"h3d.pass.Default","get_cameraFar",0x3649c034,"h3d.pass.Default.get_cameraFar","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_cameraFar,"h3d.pass.Default","set_cameraFar",0x7b4fa240,"h3d.pass.Default.set_cameraFar","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_cameraProj,"h3d.pass.Default","get_cameraProj",0x50e773a0,"h3d.pass.Default.get_cameraProj","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_cameraProj,"h3d.pass.Default","set_cameraProj",0x71075c14,"h3d.pass.Default.set_cameraProj","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_cameraPos,"h3d.pass.Default","get_cameraPos",0x365162f1,"h3d.pass.Default.get_cameraPos","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_cameraPos,"h3d.pass.Default","set_cameraPos",0x7b5744fd,"h3d.pass.Default.set_cameraPos","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_cameraProjDiag,"h3d.pass.Default","get_cameraProjDiag",0xb27c476b,"h3d.pass.Default.get_cameraProjDiag","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_cameraProjDiag,"h3d.pass.Default","set_cameraProjDiag",0x8f2b79df,"h3d.pass.Default.set_cameraProjDiag","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_cameraProjFlip,"h3d.pass.Default","get_cameraProjFlip",0xb3d1026d,"h3d.pass.Default.get_cameraProjFlip","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_cameraProjFlip,"h3d.pass.Default","set_cameraProjFlip",0x908034e1,"h3d.pass.Default.set_cameraProjFlip","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_cameraViewProj,"h3d.pass.Default","get_cameraViewProj",0x18032625,"h3d.pass.Default.get_cameraViewProj","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_cameraViewProj,"h3d.pass.Default","set_cameraViewProj",0xf4b25899,"h3d.pass.Default.set_cameraViewProj","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_cameraInverseViewProj,"h3d.pass.Default","get_cameraInverseViewProj",0x913c114f,"h3d.pass.Default.get_cameraInverseViewProj","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_cameraInverseViewProj,"h3d.pass.Default","set_cameraInverseViewProj",0xfd92d55b,"h3d.pass.Default.set_cameraInverseViewProj","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_globalTime,"h3d.pass.Default","get_globalTime",0xe40a99ce,"h3d.pass.Default.get_globalTime","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_globalTime,"h3d.pass.Default","set_globalTime",0x042a8242,"h3d.pass.Default.set_globalTime","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_pixelSize,"h3d.pass.Default","get_pixelSize",0x01fded69,"h3d.pass.Default.get_pixelSize","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_pixelSize,"h3d.pass.Default","set_pixelSize",0x4703cf75,"h3d.pass.Default.set_pixelSize","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_globalModelView,"h3d.pass.Default","get_globalModelView",0xb431c14d,"h3d.pass.Default.get_globalModelView","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_globalModelView,"h3d.pass.Default","set_globalModelView",0xf0ceb459,"h3d.pass.Default.set_globalModelView","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_440_get_globalModelViewInverse,"h3d.pass.Default","get_globalModelViewInverse",0xeb6725e3,"h3d.pass.Default.get_globalModelViewInverse","hxsl/Macros.hx",440,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ec9794c0edfe6c_450_set_globalModelViewInverse,"h3d.pass.Default","set_globalModelViewInverse",0x4afbec57,"h3d.pass.Default.set_globalModelViewInverse","hxsl/Macros.hx",450,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_3_initGlobals,"h3d.pass.Default","initGlobals",0x35148eeb,"h3d.pass.Default.initGlobals","h3d/pass/Default.hx",3,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_3_setGlobals,"h3d.pass.Default","setGlobals",0x1e178623,"h3d.pass.Default.setGlobals","h3d/pass/Default.hx",3,0x05f6ce65)
HX_LOCAL_STACK_FRAME(_hx_pos_36c6969c2f270b9a_5_boot,"h3d.pass.Default","boot",0x2ff0ca67,"h3d.pass.Default.boot","h3d/pass/Default.hx",5,0x05f6ce65)
namespace h3d{
namespace pass{

void Default_obj::__construct(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_36c6969c2f270b9a_5_new)
HXLINE(   9)		this->defaultSort =  ::h3d::pass::SortByMaterial_obj::__alloc( HX_CTX )->sort_dyn();
HXLINE(  28)		super::__construct(name);
HXLINE(  29)		this->manager =  ::h3d::pass::ShaderManager_obj::__alloc( HX_CTX ,this->getOutputs());
HXLINE(  30)		this->initGlobals();
            	}

Dynamic Default_obj::__CreateEmpty() { return new Default_obj; }

void *Default_obj::_hx_vtable = 0;

Dynamic Default_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Default_obj > _hx_result = new Default_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Default_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2eacfc8f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2eacfc8f;
	} else {
		return inClassId==(int)0x6e5907d7;
	}
}

 ::hxsl::Globals Default_obj::get_globals(){
            	HX_STACKFRAME(&_hx_pos_36c6969c2f270b9a_11_get_globals)
HXDLIN(  11)		return this->manager->globals;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_globals,return )

 ::h3d::Vector Default_obj::getCurrentPixelSize(){
            	HX_GC_STACKFRAME(&_hx_pos_36c6969c2f270b9a_33_getCurrentPixelSize)
HXLINE(  34)		 ::h3d::mat::Texture t = this->ctx->engine->getCurrentTarget();
HXLINE(  35)		int _hx_tmp;
HXDLIN(  35)		if (::hx::IsNull( t )) {
HXLINE(  35)			_hx_tmp = this->ctx->engine->width;
            		}
            		else {
HXLINE(  35)			_hx_tmp = t->width;
            		}
HXDLIN(  35)		int _hx_tmp1;
HXDLIN(  35)		if (::hx::IsNull( t )) {
HXLINE(  35)			_hx_tmp1 = this->ctx->engine->height;
            		}
            		else {
HXLINE(  35)			_hx_tmp1 = t->height;
            		}
HXDLIN(  35)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(( (Float)(2) ) / ( (Float)(_hx_tmp) )),(( (Float)(2) ) / ( (Float)(_hx_tmp1) )),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,getCurrentPixelSize,return )

::Array< ::Dynamic> Default_obj::getOutputs(){
            	HX_STACKFRAME(&_hx_pos_36c6969c2f270b9a_39_getOutputs)
HXDLIN(  39)		return ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Output_obj::Value(HX_("output.color",36,d0,92,7d),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,getOutputs,return )

 ::hxsl::RuntimeShader Default_obj::compileShader( ::h3d::mat::Pass p){
            	HX_GC_STACKFRAME(&_hx_pos_36c6969c2f270b9a_42_compileShader)
HXLINE(  43)		 ::h3d::pass::PassObject o =  ::h3d::pass::PassObject_obj::__alloc( HX_CTX );
HXLINE(  44)		o->pass = p;
HXLINE(  45)		this->setupShaders( ::h3d::pass::PassList_obj::__alloc( HX_CTX ,o));
HXLINE(  46)		return this->manager->compileShaders(o->shaders,p->batchMode);
            	}


 ::hxsl::ShaderList Default_obj::processShaders( ::h3d::pass::PassObject p, ::hxsl::ShaderList shaders){
            	HX_STACKFRAME(&_hx_pos_36c6969c2f270b9a_49_processShaders)
HXLINE(  50)		 ::hxsl::ShaderList p1 = this->ctx->extraShaders;
HXLINE(  51)		while(::hx::IsNotNull( p1 )){
HXLINE(  52)			shaders = this->ctx->allocShaderList(p1->s,shaders);
HXLINE(  53)			p1 = p1->next;
            		}
HXLINE(  55)		return shaders;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Default_obj,processShaders,return )

void Default_obj::setupShaders( ::h3d::pass::PassList passes){
            	HX_STACKFRAME(&_hx_pos_36c6969c2f270b9a_59_setupShaders)
HXLINE(  60)		bool lightInit = false;
HXLINE(  61)		{
HXLINE(  61)			 ::h3d::pass::PassObject _g_o = passes->current;
HXDLIN(  61)			while(::hx::IsNotNull( _g_o )){
HXLINE(  61)				 ::h3d::pass::PassObject tmp = _g_o;
HXDLIN(  61)				_g_o = _g_o->next;
HXDLIN(  61)				 ::h3d::pass::PassObject p = tmp;
HXLINE(  62)				 ::hxsl::ShaderList shaders = p->pass->getShadersRec();
HXLINE(  63)				shaders = this->processShaders(p,shaders);
HXLINE(  64)				bool _hx_tmp;
HXDLIN(  64)				if (p->pass->enableLights) {
HXLINE(  64)					_hx_tmp = ::hx::IsNotNull( this->ctx->lightSystem );
            				}
            				else {
HXLINE(  64)					_hx_tmp = false;
            				}
HXDLIN(  64)				if (_hx_tmp) {
HXLINE(  65)					if (!(lightInit)) {
HXLINE(  66)						this->ctx->lightSystem->initGlobals(this->manager->globals);
HXLINE(  67)						lightInit = true;
            					}
HXLINE(  69)					shaders = this->ctx->lightSystem->computeLight(p->obj,shaders);
            				}
HXLINE(  71)				p->shader = this->manager->compileShaders(shaders,p->pass->batchMode);
HXLINE(  72)				p->shaders = shaders;
HXLINE(  73)				 ::hxsl::AllocParam t = p->shader->fragment->textures;
HXLINE(  74)				if (::hx::IsNull( t )) {
HXLINE(  75)					p->texture = 0;
            				}
            				else {
HXLINE(  77)					 ::h3d::pass::ShaderManager _this = this->manager;
HXDLIN(  77)					 ::h3d::mat::Texture t1;
HXDLIN(  77)					if (::hx::IsNotNull( t->perObjectGlobal )) {
HXLINE(  77)						 ::Dynamic v = _this->globals->map->get(t->perObjectGlobal->gid);
HXDLIN(  77)						if (::hx::IsNull( v )) {
HXLINE(  77)							::String t1 = ((HX_("Missing global value ",52,2e,82,e6) + t->perObjectGlobal->path) + HX_(" for shader ",24,f1,2b,66));
HXDLIN(  77)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((t1 + _this->shaderInfo(shaders,t->perObjectGlobal->path))));
            						}
HXDLIN(  77)						 ::hxsl::Type _g = t->type;
HXDLIN(  77)						bool t2;
HXDLIN(  77)						if ((_g->_hx_getIndex() == 17)) {
HXLINE(  77)							int _g1 = _g->_hx_getInt(0);
HXDLIN(  77)							t2 = true;
            						}
            						else {
HXLINE(  77)							t2 = false;
            						}
HXDLIN(  77)						if (t2) {
HXLINE(  77)							t1 = ( ( ::h3d::mat::Texture)(v->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic)) );
            						}
            						else {
HXLINE(  77)							t1 = ( ( ::h3d::mat::Texture)(v) );
            						}
            					}
            					else {
HXLINE(  77)						 ::hxsl::ShaderList si = shaders;
HXDLIN(  77)						int n = t->instance;
HXDLIN(  77)						while(true){
HXLINE(  77)							n = (n - 1);
HXDLIN(  77)							if (!((n > 0))) {
HXLINE(  77)								goto _hx_goto_8;
            							}
HXLINE( 184)							si = si->next;
            						}
            						_hx_goto_8:;
HXLINE(  77)						 ::Dynamic v = si->s->getParamValue(t->index);
HXDLIN(  77)						bool t2;
HXDLIN(  77)						if (::hx::IsNull( v )) {
HXLINE(  77)							t2 = false;
            						}
            						else {
HXLINE(  77)							t2 = false;
            						}
HXDLIN(  77)						if (t2) {
HXLINE(  77)							::String t1 = ((HX_("Missing param value ",dc,6b,43,bb) + ::Std_obj::string(si->s)) + HX_(".",2e,00,00,00));
HXDLIN(  77)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((t1 + t->name)));
            						}
HXDLIN(  77)						t1 = ( ( ::h3d::mat::Texture)(v) );
            					}
HXLINE(  78)					int _hx_tmp;
HXDLIN(  78)					if (::hx::IsNull( t1 )) {
HXLINE(  78)						_hx_tmp = 0;
            					}
            					else {
HXLINE(  78)						_hx_tmp = t1->id;
            					}
HXDLIN(  78)					p->texture = _hx_tmp;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,setupShaders,(void))

void Default_obj::log(::String str){
            	HX_STACKFRAME(&_hx_pos_36c6969c2f270b9a_84_log)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,log,(void))

void Default_obj::drawObject( ::h3d::pass::PassObject p){
            	HX_STACKFRAME(&_hx_pos_36c6969c2f270b9a_87_drawObject)
HXLINE(  88)		this->ctx->drawPass = p;
HXLINE(  89)		this->ctx->engine->selectMaterial(p->pass);
HXLINE(  90)		p->obj->draw(this->ctx);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,drawObject,(void))

void Default_obj::draw( ::h3d::pass::PassList passes, ::Dynamic sort){
            	HX_GC_STACKFRAME(&_hx_pos_36c6969c2f270b9a_94_draw)
HXLINE(  95)		if (::hx::IsNull( passes->current )) {
HXLINE(  96)			return;
            		}
HXLINE(  97)		{
HXLINE(  97)			int _g = 0;
HXDLIN(  97)			::Array< ::Dynamic> _g1 = this->ctx->sharedGlobals;
HXDLIN(  97)			while((_g < _g1->length)){
HXLINE(  97)				 ::h3d::scene::_RenderContext::SharedGlobal g = _g1->__get(_g).StaticCast<  ::h3d::scene::_RenderContext::SharedGlobal >();
HXDLIN(  97)				_g = (_g + 1);
HXLINE(  98)				this->manager->globals->map->set(g->gid,g->value);
            			}
            		}
HXLINE(  99)		this->setGlobals();
HXLINE( 100)		this->setupShaders(passes);
HXLINE( 101)		if (::hx::IsNull( sort )) {
HXLINE( 102)			this->defaultSort(passes);
            		}
            		else {
HXLINE( 104)			sort(passes);
            		}
HXLINE( 105)		this->ctx->currentManager = this->manager;
HXLINE( 106)		 ::h3d::shader::Buffers buf = this->ctx->shaderBuffers;
HXDLIN( 106)		 ::hxsl::RuntimeShader prevShader = null();
HXLINE( 107)		{
HXLINE( 107)			 ::h3d::pass::PassObject _g2_o = passes->current;
HXDLIN( 107)			while(::hx::IsNotNull( _g2_o )){
HXLINE( 107)				 ::h3d::pass::PassObject tmp = _g2_o;
HXDLIN( 107)				_g2_o = _g2_o->next;
HXDLIN( 107)				 ::h3d::pass::PassObject p = tmp;
HXLINE( 108)				{
HXLINE( 108)					 ::h3d::Matrix v = p->obj->absPos;
HXDLIN( 108)					this->manager->globals->map->set(this->globalModelView_id,v);
            				}
HXLINE( 109)				if (p->shader->globals->exists(this->globalModelViewInverse_id)) {
HXLINE( 110)					 ::h3d::Matrix v = p->obj->getInvPos();
HXDLIN( 110)					this->manager->globals->map->set(this->globalModelViewInverse_id,v);
            				}
HXLINE( 111)				if (::hx::IsInstanceNotEq( prevShader,p->shader )) {
HXLINE( 112)					prevShader = p->shader;
HXLINE( 113)					this->ctx->engine->selectShader(p->shader);
HXLINE( 114)					if (::hx::IsNull( buf )) {
HXLINE( 115)						buf = (this->ctx->shaderBuffers =  ::h3d::shader::Buffers_obj::__alloc( HX_CTX ,p->shader));
            					}
            					else {
HXLINE( 117)						 ::hxsl::RuntimeShader s = p->shader;
HXDLIN( 117)						buf->vertex->grow(s->vertex);
HXDLIN( 117)						buf->fragment->grow(s->fragment);
            					}
HXLINE( 118)					this->manager->fillGlobals(buf,p->shader);
HXLINE( 119)					this->ctx->engine->uploadShaderBuffers(buf,0);
            				}
HXLINE( 121)				if (!(p->pass->dynamicParameters)) {
HXLINE( 122)					this->manager->fillParams(buf,p->shader,p->shaders);
HXLINE( 123)					this->ctx->engine->uploadShaderBuffers(buf,1);
HXLINE( 124)					this->ctx->engine->uploadShaderBuffers(buf,2);
HXLINE( 125)					this->ctx->engine->uploadShaderBuffers(buf,3);
            				}
HXLINE( 127)				this->drawObject(p);
            			}
            		}
HXLINE( 129)		{
HXLINE( 129)			 ::h3d::scene::RenderContext _this = this->ctx;
HXDLIN( 129)			_this->cachedPos = 0;
HXDLIN( 129)			_this->drawPass = null();
            		}
            	}


 ::h3d::Matrix Default_obj::get_cameraView(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_cameraView)
HXDLIN( 440)		return ( ( ::h3d::Matrix)(this->manager->globals->map->get(this->cameraView_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_cameraView,return )

 ::h3d::Matrix Default_obj::set_cameraView( ::h3d::Matrix v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_cameraView)
HXDLIN( 450)		this->manager->globals->map->set(this->cameraView_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_cameraView,return )

Float Default_obj::get_cameraNear(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_cameraNear)
HXDLIN( 440)		return ( (Float)(this->manager->globals->map->get(this->cameraNear_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_cameraNear,return )

Float Default_obj::set_cameraNear(Float v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_cameraNear)
HXDLIN( 450)		this->manager->globals->map->set(this->cameraNear_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_cameraNear,return )

Float Default_obj::get_cameraFar(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_cameraFar)
HXDLIN( 440)		return ( (Float)(this->manager->globals->map->get(this->cameraFar_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_cameraFar,return )

Float Default_obj::set_cameraFar(Float v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_cameraFar)
HXDLIN( 450)		this->manager->globals->map->set(this->cameraFar_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_cameraFar,return )

 ::h3d::Matrix Default_obj::get_cameraProj(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_cameraProj)
HXDLIN( 440)		return ( ( ::h3d::Matrix)(this->manager->globals->map->get(this->cameraProj_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_cameraProj,return )

 ::h3d::Matrix Default_obj::set_cameraProj( ::h3d::Matrix v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_cameraProj)
HXDLIN( 450)		this->manager->globals->map->set(this->cameraProj_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_cameraProj,return )

 ::h3d::Vector Default_obj::get_cameraPos(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_cameraPos)
HXDLIN( 440)		return ( ( ::h3d::Vector)(this->manager->globals->map->get(this->cameraPos_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_cameraPos,return )

 ::h3d::Vector Default_obj::set_cameraPos( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_cameraPos)
HXDLIN( 450)		this->manager->globals->map->set(this->cameraPos_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_cameraPos,return )

 ::h3d::Vector Default_obj::get_cameraProjDiag(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_cameraProjDiag)
HXDLIN( 440)		return ( ( ::h3d::Vector)(this->manager->globals->map->get(this->cameraProjDiag_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_cameraProjDiag,return )

 ::h3d::Vector Default_obj::set_cameraProjDiag( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_cameraProjDiag)
HXDLIN( 450)		this->manager->globals->map->set(this->cameraProjDiag_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_cameraProjDiag,return )

Float Default_obj::get_cameraProjFlip(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_cameraProjFlip)
HXDLIN( 440)		return ( (Float)(this->manager->globals->map->get(this->cameraProjFlip_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_cameraProjFlip,return )

Float Default_obj::set_cameraProjFlip(Float v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_cameraProjFlip)
HXDLIN( 450)		this->manager->globals->map->set(this->cameraProjFlip_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_cameraProjFlip,return )

 ::h3d::Matrix Default_obj::get_cameraViewProj(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_cameraViewProj)
HXDLIN( 440)		return ( ( ::h3d::Matrix)(this->manager->globals->map->get(this->cameraViewProj_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_cameraViewProj,return )

 ::h3d::Matrix Default_obj::set_cameraViewProj( ::h3d::Matrix v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_cameraViewProj)
HXDLIN( 450)		this->manager->globals->map->set(this->cameraViewProj_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_cameraViewProj,return )

 ::h3d::Matrix Default_obj::get_cameraInverseViewProj(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_cameraInverseViewProj)
HXDLIN( 440)		return ( ( ::h3d::Matrix)(this->manager->globals->map->get(this->cameraInverseViewProj_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_cameraInverseViewProj,return )

 ::h3d::Matrix Default_obj::set_cameraInverseViewProj( ::h3d::Matrix v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_cameraInverseViewProj)
HXDLIN( 450)		this->manager->globals->map->set(this->cameraInverseViewProj_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_cameraInverseViewProj,return )

Float Default_obj::get_globalTime(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_globalTime)
HXDLIN( 440)		return ( (Float)(this->manager->globals->map->get(this->globalTime_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_globalTime,return )

Float Default_obj::set_globalTime(Float v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_globalTime)
HXDLIN( 450)		this->manager->globals->map->set(this->globalTime_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_globalTime,return )

 ::h3d::Vector Default_obj::get_pixelSize(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_pixelSize)
HXDLIN( 440)		return ( ( ::h3d::Vector)(this->manager->globals->map->get(this->pixelSize_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_pixelSize,return )

 ::h3d::Vector Default_obj::set_pixelSize( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_pixelSize)
HXDLIN( 450)		this->manager->globals->map->set(this->pixelSize_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_pixelSize,return )

 ::h3d::Matrix Default_obj::get_globalModelView(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_globalModelView)
HXDLIN( 440)		return ( ( ::h3d::Matrix)(this->manager->globals->map->get(this->globalModelView_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_globalModelView,return )

 ::h3d::Matrix Default_obj::set_globalModelView( ::h3d::Matrix v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_globalModelView)
HXDLIN( 450)		this->manager->globals->map->set(this->globalModelView_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_globalModelView,return )

 ::h3d::Matrix Default_obj::get_globalModelViewInverse(){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_440_get_globalModelViewInverse)
HXDLIN( 440)		return ( ( ::h3d::Matrix)(this->manager->globals->map->get(this->globalModelViewInverse_id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,get_globalModelViewInverse,return )

 ::h3d::Matrix Default_obj::set_globalModelViewInverse( ::h3d::Matrix v){
            	HX_STACKFRAME(&_hx_pos_e6ec9794c0edfe6c_450_set_globalModelViewInverse)
HXDLIN( 450)		this->manager->globals->map->set(this->globalModelViewInverse_id,v);
HXDLIN( 450)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Default_obj,set_globalModelViewInverse,return )

void Default_obj::initGlobals(){
            	HX_STACKFRAME(&_hx_pos_36c6969c2f270b9a_3_initGlobals)
HXLINE( 455)		int this1 = ::hxsl::Globals_obj::allocID(HX_("camera.view",ce,64,d6,2b));
HXDLIN( 455)		this->cameraView_id = this1;
HXDLIN( 455)		int this2 = ::hxsl::Globals_obj::allocID(HX_("camera.zNear",f9,4b,83,6b));
HXDLIN( 455)		this->cameraNear_id = this2;
HXDLIN( 455)		int this3 = ::hxsl::Globals_obj::allocID(HX_("camera.zFar",e6,ac,60,2e));
HXDLIN( 455)		this->cameraFar_id = this3;
HXDLIN( 455)		int this4 = ::hxsl::Globals_obj::allocID(HX_("camera.proj",06,fa,e5,27));
HXDLIN( 455)		this->cameraProj_id = this4;
HXDLIN( 455)		int this5 = ::hxsl::Globals_obj::allocID(HX_("camera.position",92,bb,15,f6));
HXDLIN( 455)		this->cameraPos_id = this5;
HXDLIN( 455)		int this6 = ::hxsl::Globals_obj::allocID(HX_("camera.projDiag",d1,f8,14,4d));
HXDLIN( 455)		this->cameraProjDiag_id = this6;
HXDLIN( 455)		int this7 = ::hxsl::Globals_obj::allocID(HX_("camera.projFlip",d3,b3,69,4e));
HXDLIN( 455)		this->cameraProjFlip_id = this7;
HXDLIN( 455)		int this8 = ::hxsl::Globals_obj::allocID(HX_("camera.viewProj",8b,d7,9b,b2));
HXDLIN( 455)		this->cameraViewProj_id = this8;
HXDLIN( 455)		int this9 = ::hxsl::Globals_obj::allocID(HX_("camera.inverseViewProj",a9,f8,a4,a4));
HXDLIN( 455)		this->cameraInverseViewProj_id = this9;
HXDLIN( 455)		int this10 = ::hxsl::Globals_obj::allocID(HX_("global.time",f8,62,7c,0e));
HXDLIN( 455)		this->globalTime_id = this10;
HXDLIN( 455)		int this11 = ::hxsl::Globals_obj::allocID(HX_("global.pixelSize",9c,c3,fb,f5));
HXDLIN( 455)		this->pixelSize_id = this11;
HXDLIN( 455)		int this12 = ::hxsl::Globals_obj::allocID(HX_("global.modelView",e3,7f,a4,96));
HXDLIN( 455)		this->globalModelView_id = this12;
HXDLIN( 455)		int this13 = ::hxsl::Globals_obj::allocID(HX_("global.modelViewInverse",0d,06,77,0f));
HXDLIN( 455)		this->globalModelViewInverse_id = this13;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,initGlobals,(void))

void Default_obj::setGlobals(){
            	HX_GC_STACKFRAME(&_hx_pos_36c6969c2f270b9a_3_setGlobals)
HXLINE( 457)		{
HXLINE( 457)			 ::h3d::Matrix v = this->ctx->camera->mcam;
HXDLIN( 457)			this->manager->globals->map->set(this->cameraView_id,v);
            		}
HXDLIN( 457)		{
HXLINE( 457)			Float v1 = this->ctx->camera->zNear;
HXDLIN( 457)			this->manager->globals->map->set(this->cameraNear_id,v1);
            		}
HXDLIN( 457)		{
HXLINE( 457)			Float v2 = this->ctx->camera->zFar;
HXDLIN( 457)			this->manager->globals->map->set(this->cameraFar_id,v2);
            		}
HXDLIN( 457)		{
HXLINE( 457)			 ::h3d::Matrix v3 = this->ctx->camera->mproj;
HXDLIN( 457)			this->manager->globals->map->set(this->cameraProj_id,v3);
            		}
HXDLIN( 457)		{
HXLINE( 457)			 ::h3d::Vector v4 = this->ctx->camera->pos;
HXDLIN( 457)			this->manager->globals->map->set(this->cameraPos_id,v4);
            		}
HXDLIN( 457)		{
HXLINE( 457)			 ::h3d::Vector v5 =  ::h3d::Vector_obj::__alloc( HX_CTX ,this->ctx->camera->mproj->_11,this->ctx->camera->mproj->_22,this->ctx->camera->mproj->_33,this->ctx->camera->mproj->_44);
HXDLIN( 457)			this->manager->globals->map->set(this->cameraProjDiag_id,v5);
            		}
HXDLIN( 457)		{
HXLINE( 457)			Float v6;
HXLINE(  19)			bool v7;
HXDLIN(  19)			if (this->ctx->engine->driver->hasFeature(::h3d::impl::Feature_obj::BottomLeftCoords_dyn())) {
HXLINE(  19)				v7 = ::hx::IsNotNull( this->ctx->engine->getCurrentTarget() );
            			}
            			else {
HXLINE(  19)				v7 = false;
            			}
HXDLIN(  19)			if (v7) {
HXLINE( 457)				v6 = ( (Float)(-1) );
            			}
            			else {
HXLINE( 457)				v6 = ( (Float)(1) );
            			}
HXDLIN( 457)			this->manager->globals->map->set(this->cameraProjFlip_id,v6);
            		}
HXDLIN( 457)		{
HXLINE( 457)			 ::h3d::Matrix v8 = this->ctx->camera->m;
HXDLIN( 457)			this->manager->globals->map->set(this->cameraViewProj_id,v8);
            		}
HXDLIN( 457)		{
HXLINE( 457)			 ::h3d::Matrix v9 = this->ctx->camera->getInverseViewProj();
HXDLIN( 457)			this->manager->globals->map->set(this->cameraInverseViewProj_id,v9);
            		}
HXDLIN( 457)		{
HXLINE( 457)			Float v10 = this->ctx->time;
HXDLIN( 457)			this->manager->globals->map->set(this->globalTime_id,v10);
            		}
HXDLIN( 457)		{
HXLINE( 457)			 ::h3d::Vector v11 = this->getCurrentPixelSize();
HXDLIN( 457)			this->manager->globals->map->set(this->pixelSize_id,v11);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Default_obj,setGlobals,(void))


::hx::ObjectPtr< Default_obj > Default_obj::__new(::String name) {
	::hx::ObjectPtr< Default_obj > __this = new Default_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< Default_obj > Default_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	Default_obj *__this = (Default_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Default_obj), true, "h3d.pass.Default"));
	*(void **)__this = Default_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Default_obj::Default_obj()
{
}

void Default_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Default);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(defaultSort,"defaultSort");
	HX_MARK_MEMBER_NAME(cameraView_id,"cameraView_id");
	HX_MARK_MEMBER_NAME(cameraNear_id,"cameraNear_id");
	HX_MARK_MEMBER_NAME(cameraFar_id,"cameraFar_id");
	HX_MARK_MEMBER_NAME(cameraProj_id,"cameraProj_id");
	HX_MARK_MEMBER_NAME(cameraPos_id,"cameraPos_id");
	HX_MARK_MEMBER_NAME(cameraProjDiag_id,"cameraProjDiag_id");
	HX_MARK_MEMBER_NAME(cameraProjFlip_id,"cameraProjFlip_id");
	HX_MARK_MEMBER_NAME(cameraViewProj_id,"cameraViewProj_id");
	HX_MARK_MEMBER_NAME(cameraInverseViewProj_id,"cameraInverseViewProj_id");
	HX_MARK_MEMBER_NAME(globalTime_id,"globalTime_id");
	HX_MARK_MEMBER_NAME(pixelSize_id,"pixelSize_id");
	HX_MARK_MEMBER_NAME(globalModelView_id,"globalModelView_id");
	HX_MARK_MEMBER_NAME(globalModelViewInverse_id,"globalModelViewInverse_id");
	 ::h3d::pass::Base_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Default_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(defaultSort,"defaultSort");
	HX_VISIT_MEMBER_NAME(cameraView_id,"cameraView_id");
	HX_VISIT_MEMBER_NAME(cameraNear_id,"cameraNear_id");
	HX_VISIT_MEMBER_NAME(cameraFar_id,"cameraFar_id");
	HX_VISIT_MEMBER_NAME(cameraProj_id,"cameraProj_id");
	HX_VISIT_MEMBER_NAME(cameraPos_id,"cameraPos_id");
	HX_VISIT_MEMBER_NAME(cameraProjDiag_id,"cameraProjDiag_id");
	HX_VISIT_MEMBER_NAME(cameraProjFlip_id,"cameraProjFlip_id");
	HX_VISIT_MEMBER_NAME(cameraViewProj_id,"cameraViewProj_id");
	HX_VISIT_MEMBER_NAME(cameraInverseViewProj_id,"cameraInverseViewProj_id");
	HX_VISIT_MEMBER_NAME(globalTime_id,"globalTime_id");
	HX_VISIT_MEMBER_NAME(pixelSize_id,"pixelSize_id");
	HX_VISIT_MEMBER_NAME(globalModelView_id,"globalModelView_id");
	HX_VISIT_MEMBER_NAME(globalModelViewInverse_id,"globalModelViewInverse_id");
	 ::h3d::pass::Base_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Default_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return ::hx::Val( log_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return ::hx::Val( manager ); }
		if (HX_FIELD_EQ(inName,"globals") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_globals() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cameraFar") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraFar() ); }
		if (HX_FIELD_EQ(inName,"cameraPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraPos() ); }
		if (HX_FIELD_EQ(inName,"pixelSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pixelSize() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cameraView") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraView() ); }
		if (HX_FIELD_EQ(inName,"cameraNear") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraNear() ); }
		if (HX_FIELD_EQ(inName,"cameraProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraProj() ); }
		if (HX_FIELD_EQ(inName,"globalTime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_globalTime() ); }
		if (HX_FIELD_EQ(inName,"getOutputs") ) { return ::hx::Val( getOutputs_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawObject") ) { return ::hx::Val( drawObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGlobals") ) { return ::hx::Val( setGlobals_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultSort") ) { return ::hx::Val( defaultSort ); }
		if (HX_FIELD_EQ(inName,"get_globals") ) { return ::hx::Val( get_globals_dyn() ); }
		if (HX_FIELD_EQ(inName,"initGlobals") ) { return ::hx::Val( initGlobals_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setupShaders") ) { return ::hx::Val( setupShaders_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraFar_id") ) { return ::hx::Val( cameraFar_id ); }
		if (HX_FIELD_EQ(inName,"cameraPos_id") ) { return ::hx::Val( cameraPos_id ); }
		if (HX_FIELD_EQ(inName,"pixelSize_id") ) { return ::hx::Val( pixelSize_id ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { return ::hx::Val( compileShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraView_id") ) { return ::hx::Val( cameraView_id ); }
		if (HX_FIELD_EQ(inName,"cameraNear_id") ) { return ::hx::Val( cameraNear_id ); }
		if (HX_FIELD_EQ(inName,"get_cameraFar") ) { return ::hx::Val( get_cameraFar_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraFar") ) { return ::hx::Val( set_cameraFar_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraProj_id") ) { return ::hx::Val( cameraProj_id ); }
		if (HX_FIELD_EQ(inName,"get_cameraPos") ) { return ::hx::Val( get_cameraPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraPos") ) { return ::hx::Val( set_cameraPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"globalTime_id") ) { return ::hx::Val( globalTime_id ); }
		if (HX_FIELD_EQ(inName,"get_pixelSize") ) { return ::hx::Val( get_pixelSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pixelSize") ) { return ::hx::Val( set_pixelSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cameraProjDiag") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraProjDiag() ); }
		if (HX_FIELD_EQ(inName,"cameraProjFlip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraProjFlip() ); }
		if (HX_FIELD_EQ(inName,"cameraViewProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraViewProj() ); }
		if (HX_FIELD_EQ(inName,"processShaders") ) { return ::hx::Val( processShaders_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cameraView") ) { return ::hx::Val( get_cameraView_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraView") ) { return ::hx::Val( set_cameraView_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cameraNear") ) { return ::hx::Val( get_cameraNear_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraNear") ) { return ::hx::Val( set_cameraNear_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cameraProj") ) { return ::hx::Val( get_cameraProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraProj") ) { return ::hx::Val( set_cameraProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_globalTime") ) { return ::hx::Val( get_globalTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_globalTime") ) { return ::hx::Val( set_globalTime_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalModelView") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_globalModelView() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cameraProjDiag_id") ) { return ::hx::Val( cameraProjDiag_id ); }
		if (HX_FIELD_EQ(inName,"cameraProjFlip_id") ) { return ::hx::Val( cameraProjFlip_id ); }
		if (HX_FIELD_EQ(inName,"cameraViewProj_id") ) { return ::hx::Val( cameraViewProj_id ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_cameraProjDiag") ) { return ::hx::Val( get_cameraProjDiag_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraProjDiag") ) { return ::hx::Val( set_cameraProjDiag_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cameraProjFlip") ) { return ::hx::Val( get_cameraProjFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraProjFlip") ) { return ::hx::Val( set_cameraProjFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cameraViewProj") ) { return ::hx::Val( get_cameraViewProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraViewProj") ) { return ::hx::Val( set_cameraViewProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"globalModelView_id") ) { return ::hx::Val( globalModelView_id ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getCurrentPixelSize") ) { return ::hx::Val( getCurrentPixelSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_globalModelView") ) { return ::hx::Val( get_globalModelView_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_globalModelView") ) { return ::hx::Val( set_globalModelView_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cameraInverseViewProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cameraInverseViewProj() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"globalModelViewInverse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_globalModelViewInverse() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cameraInverseViewProj_id") ) { return ::hx::Val( cameraInverseViewProj_id ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_cameraInverseViewProj") ) { return ::hx::Val( get_cameraInverseViewProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameraInverseViewProj") ) { return ::hx::Val( set_cameraInverseViewProj_dyn() ); }
		if (HX_FIELD_EQ(inName,"globalModelViewInverse_id") ) { return ::hx::Val( globalModelViewInverse_id ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_globalModelViewInverse") ) { return ::hx::Val( get_globalModelViewInverse_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_globalModelViewInverse") ) { return ::hx::Val( set_globalModelViewInverse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Default_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::h3d::pass::ShaderManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cameraFar") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraFar(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"cameraPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraPos(inValue.Cast<  ::h3d::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"pixelSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixelSize(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cameraView") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraView(inValue.Cast<  ::h3d::Matrix >()) ); }
		if (HX_FIELD_EQ(inName,"cameraNear") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraNear(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"cameraProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraProj(inValue.Cast<  ::h3d::Matrix >()) ); }
		if (HX_FIELD_EQ(inName,"globalTime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_globalTime(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultSort") ) { defaultSort=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cameraFar_id") ) { cameraFar_id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraPos_id") ) { cameraPos_id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelSize_id") ) { pixelSize_id=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraView_id") ) { cameraView_id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraNear_id") ) { cameraNear_id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraProj_id") ) { cameraProj_id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"globalTime_id") ) { globalTime_id=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cameraProjDiag") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraProjDiag(inValue.Cast<  ::h3d::Vector >()) ); }
		if (HX_FIELD_EQ(inName,"cameraProjFlip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraProjFlip(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"cameraViewProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraViewProj(inValue.Cast<  ::h3d::Matrix >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalModelView") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_globalModelView(inValue.Cast<  ::h3d::Matrix >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cameraProjDiag_id") ) { cameraProjDiag_id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraProjFlip_id") ) { cameraProjFlip_id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraViewProj_id") ) { cameraViewProj_id=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"globalModelView_id") ) { globalModelView_id=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cameraInverseViewProj") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cameraInverseViewProj(inValue.Cast<  ::h3d::Matrix >()) ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"globalModelViewInverse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_globalModelViewInverse(inValue.Cast<  ::h3d::Matrix >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cameraInverseViewProj_id") ) { cameraInverseViewProj_id=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"globalModelViewInverse_id") ) { globalModelViewInverse_id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Default_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("manager",6d,92,c1,13));
	outFields->push(HX_("globals",b0,05,39,14));
	outFields->push(HX_("cameraView",aa,5b,6d,b4));
	outFields->push(HX_("cameraNear",2d,9a,20,af));
	outFields->push(HX_("cameraFar",32,21,29,3a));
	outFields->push(HX_("cameraProj",e2,f0,7c,b0));
	outFields->push(HX_("cameraPos",ef,c3,30,3a));
	outFields->push(HX_("cameraProjDiag",ad,8d,86,17));
	outFields->push(HX_("cameraProjFlip",af,48,db,18));
	outFields->push(HX_("cameraViewProj",67,6c,0d,7d));
	outFields->push(HX_("cameraInverseViewProj",4d,f7,a7,cb));
	outFields->push(HX_("globalTime",10,17,a0,43));
	outFields->push(HX_("pixelSize",67,4e,dd,05));
	outFields->push(HX_("globalModelView",cb,f4,24,b8));
	outFields->push(HX_("globalModelViewInverse",25,7e,64,cf));
	outFields->push(HX_("cameraView_id",90,3c,c4,a4));
	outFields->push(HX_("cameraNear_id",ed,b1,c2,6d));
	outFields->push(HX_("cameraFar_id",08,9c,d6,b6));
	outFields->push(HX_("cameraProj_id",58,ba,e3,fd));
	outFields->push(HX_("cameraPos_id",6b,8d,ad,c6));
	outFields->push(HX_("cameraProjDiag_id",6d,ee,f1,85));
	outFields->push(HX_("cameraProjFlip_id",ab,80,56,ad));
	outFields->push(HX_("cameraViewProj_id",f3,7f,7b,10));
	outFields->push(HX_("cameraInverseViewProj_id",cd,48,9a,2d));
	outFields->push(HX_("globalTime_id",ea,24,24,ff));
	outFields->push(HX_("pixelSize_id",f3,dd,44,15));
	outFields->push(HX_("globalModelView_id",0f,4e,e2,c4));
	outFields->push(HX_("globalModelViewInverse_id",f5,98,bb,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Default_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::pass::ShaderManager */ ,(int)offsetof(Default_obj,manager),HX_("manager",6d,92,c1,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Default_obj,defaultSort),HX_("defaultSort",bf,20,17,1e)},
	{::hx::fsInt,(int)offsetof(Default_obj,cameraView_id),HX_("cameraView_id",90,3c,c4,a4)},
	{::hx::fsInt,(int)offsetof(Default_obj,cameraNear_id),HX_("cameraNear_id",ed,b1,c2,6d)},
	{::hx::fsInt,(int)offsetof(Default_obj,cameraFar_id),HX_("cameraFar_id",08,9c,d6,b6)},
	{::hx::fsInt,(int)offsetof(Default_obj,cameraProj_id),HX_("cameraProj_id",58,ba,e3,fd)},
	{::hx::fsInt,(int)offsetof(Default_obj,cameraPos_id),HX_("cameraPos_id",6b,8d,ad,c6)},
	{::hx::fsInt,(int)offsetof(Default_obj,cameraProjDiag_id),HX_("cameraProjDiag_id",6d,ee,f1,85)},
	{::hx::fsInt,(int)offsetof(Default_obj,cameraProjFlip_id),HX_("cameraProjFlip_id",ab,80,56,ad)},
	{::hx::fsInt,(int)offsetof(Default_obj,cameraViewProj_id),HX_("cameraViewProj_id",f3,7f,7b,10)},
	{::hx::fsInt,(int)offsetof(Default_obj,cameraInverseViewProj_id),HX_("cameraInverseViewProj_id",cd,48,9a,2d)},
	{::hx::fsInt,(int)offsetof(Default_obj,globalTime_id),HX_("globalTime_id",ea,24,24,ff)},
	{::hx::fsInt,(int)offsetof(Default_obj,pixelSize_id),HX_("pixelSize_id",f3,dd,44,15)},
	{::hx::fsInt,(int)offsetof(Default_obj,globalModelView_id),HX_("globalModelView_id",0f,4e,e2,c4)},
	{::hx::fsInt,(int)offsetof(Default_obj,globalModelViewInverse_id),HX_("globalModelViewInverse_id",f5,98,bb,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Default_obj_sStaticStorageInfo = 0;
#endif

static ::String Default_obj_sMemberFields[] = {
	HX_("manager",6d,92,c1,13),
	HX_("defaultSort",bf,20,17,1e),
	HX_("get_globals",c7,65,33,9a),
	HX_("getCurrentPixelSize",a4,2b,34,b3),
	HX_("getOutputs",5c,98,cd,33),
	HX_("compileShader",f8,70,b2,da),
	HX_("processShaders",ff,c2,e4,11),
	HX_("setupShaders",b1,74,bb,1d),
	HX_("log",84,54,52,00),
	HX_("drawObject",e3,f9,02,57),
	HX_("draw",04,2c,70,42),
	HX_("cameraView_id",90,3c,c4,a4),
	HX_("get_cameraView",f3,e3,62,2a),
	HX_("set_cameraView",67,cc,82,4a),
	HX_("cameraNear_id",ed,b1,c2,6d),
	HX_("get_cameraNear",76,22,16,25),
	HX_("set_cameraNear",ea,0a,36,45),
	HX_("cameraFar_id",08,9c,d6,b6),
	HX_("get_cameraFar",09,f5,8c,fb),
	HX_("set_cameraFar",15,d7,92,40),
	HX_("cameraProj_id",58,ba,e3,fd),
	HX_("get_cameraProj",2b,79,72,26),
	HX_("set_cameraProj",9f,61,92,46),
	HX_("cameraPos_id",6b,8d,ad,c6),
	HX_("get_cameraPos",c6,97,94,fb),
	HX_("set_cameraPos",d2,79,9a,40),
	HX_("cameraProjDiag_id",6d,ee,f1,85),
	HX_("get_cameraProjDiag",76,6e,20,b3),
	HX_("set_cameraProjDiag",ea,a0,cf,8f),
	HX_("cameraProjFlip_id",ab,80,56,ad),
	HX_("get_cameraProjFlip",78,29,75,b4),
	HX_("set_cameraProjFlip",ec,5b,24,91),
	HX_("cameraViewProj_id",f3,7f,7b,10),
	HX_("get_cameraViewProj",30,4d,a7,18),
	HX_("set_cameraViewProj",a4,7f,56,f5),
	HX_("cameraInverseViewProj_id",cd,48,9a,2d),
	HX_("get_cameraInverseViewProj",a4,b1,a5,d1),
	HX_("set_cameraInverseViewProj",b0,75,fc,3d),
	HX_("globalTime_id",ea,24,24,ff),
	HX_("get_globalTime",59,9f,95,b9),
	HX_("set_globalTime",cd,87,b5,d9),
	HX_("pixelSize_id",f3,dd,44,15),
	HX_("get_pixelSize",3e,22,41,c7),
	HX_("set_pixelSize",4a,04,47,0c),
	HX_("globalModelView_id",0f,4e,e2,c4),
	HX_("get_globalModelView",e2,c3,2f,43),
	HX_("set_globalModelView",ee,b6,cc,7f),
	HX_("globalModelViewInverse_id",f5,98,bb,48),
	HX_("get_globalModelViewInverse",ee,cf,69,07),
	HX_("set_globalModelViewInverse",62,96,fe,66),
	HX_("initGlobals",80,74,a3,cc),
	HX_("setGlobals",2e,2a,18,67),
	::String(null()) };

::hx::Class Default_obj::__mClass;

void Default_obj::__register()
{
	Default_obj _hx_dummy;
	Default_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.Default",59,c6,0e,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Default_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Default_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Default_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Default_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Default_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_36c6969c2f270b9a_5_boot)
HXDLIN(   5)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(13)
            				->setFixed(0,HX_("cameraNear",2d,9a,20,af), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("camera.zNear",f9,4b,83,6b)))))
            				->setFixed(1,HX_("cameraProj",e2,f0,7c,b0), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("camera.proj",06,fa,e5,27)))))
            				->setFixed(2,HX_("cameraView",aa,5b,6d,b4), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("camera.view",ce,64,d6,2b)))))
            				->setFixed(3,HX_("globalModelView",cb,f4,24,b8), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("global.modelView",e3,7f,a4,96)))))
            				->setFixed(4,HX_("cameraInverseViewProj",4d,f7,a7,cb), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("camera.inverseViewProj",a9,f8,a4,a4)))))
            				->setFixed(5,HX_("globalModelViewInverse",25,7e,64,cf), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("global.modelViewInverse",0d,06,77,0f)))))
            				->setFixed(6,HX_("pixelSize",67,4e,dd,05), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("global.pixelSize",9c,c3,fb,f5)))))
            				->setFixed(7,HX_("cameraProjDiag",ad,8d,86,17), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("camera.projDiag",d1,f8,14,4d)))))
            				->setFixed(8,HX_("cameraProjFlip",af,48,db,18), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("camera.projFlip",d3,b3,69,4e)))))
            				->setFixed(9,HX_("cameraFar",32,21,29,3a), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("camera.zFar",e6,ac,60,2e)))))
            				->setFixed(10,HX_("cameraPos",ef,c3,30,3a), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("camera.position",92,bb,15,f6)))))
            				->setFixed(11,HX_("globalTime",10,17,a0,43), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("global.time",f8,62,7c,0e)))))
            				->setFixed(12,HX_("cameraViewProj",67,6c,0d,7d), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("global",63,31,b2,a7),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("camera.viewProj",8b,d7,9b,b2))))))));
            	}
}

} // end namespace h3d
} // end namespace pass
