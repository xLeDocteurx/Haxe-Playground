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
#ifndef INCLUDED_h2d_Camera
#include <h2d/Camera.h>
#endif
#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
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
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h2d_filter_Filter
#include <h2d/filter/Filter.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_BufferFlag
#include <h3d/BufferFlag.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
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
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_impl_TextureCache
#include <h3d/impl/TextureCache.h>
#endif
#ifndef INCLUDED_h3d_mat_Blend
#include <h3d/mat/Blend.h>
#endif
#ifndef INCLUDED_h3d_mat_Compare
#include <h3d/mat/Compare.h>
#endif
#ifndef INCLUDED_h3d_mat_Face
#include <h3d/mat/Face.h>
#endif
#ifndef INCLUDED_h3d_mat_Filter
#include <h3d/mat/Filter.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_Wrap
#include <h3d/mat/Wrap.h>
#endif
#ifndef INCLUDED_h3d_pass_ShaderManager
#include <h3d/pass/ShaderManager.h>
#endif
#ifndef INCLUDED_h3d_shader_Base2d
#include <h3d/shader/Base2d.h>
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
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
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
#ifndef INCLUDED_hxsl_ShaderInstance
#include <hxsl/ShaderInstance.h>
#endif
#ifndef INCLUDED_hxsl_ShaderList
#include <hxsl/ShaderList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b8739c61c2868bc6_18_new,"h2d.RenderContext","new",0xcd909b77,"h2d.RenderContext.new","h2d/RenderContext.hx",18,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_144_dispose,"h2d.RenderContext","dispose",0x6c822336,"h2d.RenderContext.dispose","h2d/RenderContext.hx",144,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_154_hasBuffering,"h2d.RenderContext","hasBuffering",0x3de3ef31,"h2d.RenderContext.hasBuffering","h2d/RenderContext.hx",154,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_162_begin,"h2d.RenderContext","begin",0xdeace900,"h2d.RenderContext.begin","h2d/RenderContext.hx",162,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_196_allocTarget,"h2d.RenderContext","allocTarget",0x59e78bbd,"h2d.RenderContext.allocTarget","h2d/RenderContext.hx",196,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_206_clear,"h2d.RenderContext","clear",0x76b27064,"h2d.RenderContext.clear","h2d/RenderContext.hx",206,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_209_initShaders,"h2d.RenderContext","initShaders",0xe3212a95,"h2d.RenderContext.initShaders","h2d/RenderContext.hx",209,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_226_end,"h2d.RenderContext","end",0xcd89cef2,"h2d.RenderContext.end","h2d/RenderContext.hx",226,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_242_pushCamera,"h2d.RenderContext","pushCamera",0xc1b681e8,"h2d.RenderContext.pushCamera","h2d/RenderContext.hx",242,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_276_popCamera,"h2d.RenderContext","popCamera",0xd7d6d16d,"h2d.RenderContext.popCamera","h2d/RenderContext.hx",276,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_297_pushFilter,"h2d.RenderContext","pushFilter",0x8f5f5afb,"h2d.RenderContext.pushFilter","h2d/RenderContext.hx",297,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_310_popFilter,"h2d.RenderContext","popFilter",0xa57faa80,"h2d.RenderContext.popFilter","h2d/RenderContext.hx",310,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_330_pushTarget,"h2d.RenderContext","pushTarget",0x91172e94,"h2d.RenderContext.pushTarget","h2d/RenderContext.hx",330,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_374_pushTargets,"h2d.RenderContext","pushTargets",0x6331935f,"h2d.RenderContext.pushTargets","h2d/RenderContext.hx",374,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_386_popTarget,"h2d.RenderContext","popTarget",0xa7377e19,"h2d.RenderContext.popTarget","h2d/RenderContext.hx",386,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_415_pushRenderZone,"h2d.RenderContext","pushRenderZone",0x8d3f3565,"h2d.RenderContext.pushRenderZone","h2d/RenderContext.hx",415,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_436_popRenderZone,"h2d.RenderContext","popRenderZone",0x6f7e2b6a,"h2d.RenderContext.popRenderZone","h2d/RenderContext.hx",436,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_451_clipRenderZone,"h2d.RenderContext","clipRenderZone",0xac26a1db,"h2d.RenderContext.clipRenderZone","h2d/RenderContext.hx",451,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_467_setRZ,"h2d.RenderContext","setRZ",0xa8868ec1,"h2d.RenderContext.setRZ","h2d/RenderContext.hx",467,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_497_clearRZ,"h2d.RenderContext","clearRZ",0x5c7a992c,"h2d.RenderContext.clearRZ","h2d/RenderContext.hx",497,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_504_setRenderZone,"h2d.RenderContext","setRenderZone",0xb2bf08bb,"h2d.RenderContext.setRenderZone","h2d/RenderContext.hx",504,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_509_clearRenderZone,"h2d.RenderContext","clearRenderZone",0x13b3f626,"h2d.RenderContext.clearRenderZone","h2d/RenderContext.hx",509,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_513_drawLayer,"h2d.RenderContext","drawLayer",0xdba06d84,"h2d.RenderContext.drawLayer","h2d/RenderContext.hx",513,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_520_drawScene,"h2d.RenderContext","drawScene",0xe4b1c4ff,"h2d.RenderContext.drawScene","h2d/RenderContext.hx",520,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_528_flush,"h2d.RenderContext","flush",0x30f2619b,"h2d.RenderContext.flush","h2d/RenderContext.hx",528,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_531__flush,"h2d.RenderContext","_flush",0x5c4aa74e,"h2d.RenderContext._flush","h2d/RenderContext.hx",531,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_548_beforeDraw,"h2d.RenderContext","beforeDraw",0x47642dec,"h2d.RenderContext.beforeDraw","h2d/RenderContext.hx",548,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_580_setupColor,"h2d.RenderContext","setupColor",0xe2aa636f,"h2d.RenderContext.setupColor","h2d/RenderContext.hx",580,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_595_beginDrawBatchState,"h2d.RenderContext","beginDrawBatchState",0x7b6bd63b,"h2d.RenderContext.beginDrawBatchState","h2d/RenderContext.hx",595,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_606_swapTexture,"h2d.RenderContext","swapTexture",0x7174c89f,"h2d.RenderContext.swapTexture","h2d/RenderContext.hx",606,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_616_beginDrawObject,"h2d.RenderContext","beginDrawObject",0x2afe2703,"h2d.RenderContext.beginDrawObject","h2d/RenderContext.hx",616,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_632_beginDrawBatch,"h2d.RenderContext","beginDrawBatch",0xca86f3f6,"h2d.RenderContext.beginDrawBatch","h2d/RenderContext.hx",632,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_642_drawTile,"h2d.RenderContext","drawTile",0xbf1f16db,"h2d.RenderContext.drawTile","h2d/RenderContext.hx",642,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_715_beginDraw,"h2d.RenderContext","beginDraw",0x2f1ec124,"h2d.RenderContext.beginDraw","h2d/RenderContext.hx",715,0x99af91da)
HX_LOCAL_STACK_FRAME(_hx_pos_b8739c61c2868bc6_20_boot,"h2d.RenderContext","boot",0x09106d3b,"h2d.RenderContext.boot","h2d/RenderContext.hx",20,0x99af91da)
namespace h2d{

void RenderContext_obj::__construct( ::h2d::Scene scene){
            	HX_GC_STACKFRAME(&_hx_pos_b8739c61c2868bc6_18_new)
HXLINE(  97)		this->renderZoneIndex = 0;
HXLINE(  96)		this->renderZoneStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  79)		this->tmpBounds =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE(  48)		this->defaultSmooth = false;
HXLINE(  26)		this->globalAlpha = ((Float)1.);
HXLINE( 124)		super::__construct();
HXLINE( 125)		this->scene = scene;
HXLINE( 128)		this->bufPos = 0;
HXLINE( 129)		this->manager =  ::h3d::pass::ShaderManager_obj::__alloc( HX_CTX ,null());
HXLINE( 130)		this->pass =  ::h3d::mat::Pass_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),null(),null());
HXLINE( 131)		this->pass->depth(true,::h3d::mat::Compare_obj::Always_dyn());
HXLINE( 132)		this->pass->set_culling(::h3d::mat::Face_obj::None_dyn());
HXLINE( 133)		this->baseShader =  ::h3d::shader::Base2d_obj::__alloc( HX_CTX );
HXLINE( 134)		this->baseShader->setPriority(100);
HXLINE( 135)		this->baseShader->zValue__ = ((Float)0.);
HXLINE( 136)		this->baseShaderList =  ::hxsl::ShaderList_obj::__alloc( HX_CTX ,this->baseShader,null());
HXLINE( 137)		this->targetsStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 138)		this->targetsStackIndex = 0;
HXLINE( 139)		this->cameraStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 140)		this->cameraStackIndex = 0;
HXLINE( 141)		this->filterStack = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic RenderContext_obj::__CreateEmpty() { return new RenderContext_obj; }

void *RenderContext_obj::_hx_vtable = 0;

Dynamic RenderContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderContext_obj > _hx_result = new RenderContext_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RenderContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4786bba0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4786bba0;
	} else {
		return inClassId==(int)0x6c686fff;
	}
}

void RenderContext_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_144_dispose)
HXLINE( 145)		this->super::dispose();
HXLINE( 146)		if (::hx::IsNotNull( this->fixedBuffer )) {
HXLINE( 146)			this->fixedBuffer->dispose();
            		}
            	}


bool RenderContext_obj::hasBuffering(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_154_hasBuffering)
HXDLIN( 154)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,hasBuffering,return )

void RenderContext_obj::begin(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_162_begin)
HXLINE( 163)		this->texture = null();
HXLINE( 164)		this->currentObj = null();
HXLINE( 165)		this->bufPos = 0;
HXLINE( 166)		this->stride = 0;
HXLINE( 167)		this->viewA = this->scene->viewportA;
HXLINE( 168)		this->viewB = ( (Float)(0) );
HXLINE( 169)		this->viewC = ( (Float)(0) );
HXLINE( 170)		this->viewD = this->scene->viewportD;
HXLINE( 171)		this->viewX = this->scene->viewportX;
HXLINE( 172)		this->viewY = this->scene->viewportY;
HXLINE( 174)		Float _hx_tmp;
HXDLIN( 174)		if (this->engine->driver->hasFeature(::h3d::impl::Feature_obj::BottomLeftCoords_dyn())) {
HXLINE( 174)			_hx_tmp = ( (Float)(-1) );
            		}
            		else {
HXLINE( 174)			_hx_tmp = ( (Float)(1) );
            		}
HXDLIN( 174)		this->targetFlipY = _hx_tmp;
HXLINE( 175)		Float _hx_tmp1;
HXDLIN( 175)		if (::hx::IsNotNull( this->engine->getCurrentTarget() )) {
HXLINE( 175)			_hx_tmp1 = this->targetFlipY;
            		}
            		else {
HXLINE( 175)			_hx_tmp1 = ( (Float)(1) );
            		}
HXDLIN( 175)		this->baseFlipY = _hx_tmp1;
HXLINE( 176)		this->inFilter = null();
HXLINE( 177)		this->manager->globals->set(HX_("time",0d,cc,fc,4c),this->time);
HXLINE( 178)		this->manager->globals->set(HX_("global.time",f8,62,7c,0e),this->time);
HXLINE( 180)		{
HXLINE( 180)			 ::h3d::shader::Base2d _this = this->baseShader;
HXDLIN( 180)			_this->constModified = true;
HXDLIN( 180)			_this->pixelAlign__ = false;
            		}
HXLINE( 181)		{
HXLINE( 181)			 ::h3d::Vector _this1 = this->baseShader->halfPixelInverse__;
HXDLIN( 181)			_this1->x = (((Float)0.5) / ( (Float)(this->engine->width) ));
HXDLIN( 181)			_this1->y = (((Float)0.5) / ( (Float)(this->engine->height) ));
HXDLIN( 181)			_this1->z = ((Float)0.);
HXDLIN( 181)			_this1->w = ((Float)1.);
            		}
HXLINE( 182)		{
HXLINE( 182)			 ::h3d::Vector _this2 = this->baseShader->viewportA__;
HXDLIN( 182)			_this2->x = this->scene->viewportA;
HXDLIN( 182)			_this2->y = ( (Float)(0) );
HXDLIN( 182)			_this2->z = this->scene->viewportX;
HXDLIN( 182)			_this2->w = ((Float)1.);
            		}
HXLINE( 183)		{
HXLINE( 183)			 ::h3d::Vector _this3 = this->baseShader->viewportB__;
HXDLIN( 183)			_this3->x = ( (Float)(0) );
HXDLIN( 183)			_this3->y = (this->scene->viewportD * -(this->baseFlipY));
HXDLIN( 183)			_this3->z = (this->scene->viewportY * -(this->baseFlipY));
HXDLIN( 183)			_this3->w = ((Float)1.);
            		}
HXLINE( 184)		{
HXLINE( 184)			 ::h3d::Vector _this4 = this->baseShader->filterMatrixA__;
HXDLIN( 184)			_this4->x = ( (Float)(1) );
HXDLIN( 184)			_this4->y = ( (Float)(0) );
HXDLIN( 184)			_this4->z = ( (Float)(0) );
HXDLIN( 184)			_this4->w = ((Float)1.);
            		}
HXLINE( 185)		{
HXLINE( 185)			 ::h3d::Vector _this5 = this->baseShader->filterMatrixB__;
HXDLIN( 185)			_this5->x = ( (Float)(0) );
HXDLIN( 185)			_this5->y = ( (Float)(1) );
HXDLIN( 185)			_this5->z = ( (Float)(0) );
HXDLIN( 185)			_this5->w = ((Float)1.);
            		}
HXLINE( 186)		this->baseShaderList->next = null();
HXLINE( 187)		this->initShaders(this->baseShaderList);
HXLINE( 188)		this->engine->selectMaterial(this->pass);
HXLINE( 189)		this->textures->begin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,begin,(void))

 ::h3d::mat::Texture RenderContext_obj::allocTarget(::String name,::hx::Null< bool >  __o_filter){
            		bool filter = __o_filter.Default(false);
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_196_allocTarget)
HXLINE( 197)		 ::h3d::mat::Texture t = this->textures->allocTarget(name,this->scene->width,this->scene->height,false,null(),null());
HXLINE( 198)		 ::h3d::mat::Filter _hx_tmp;
HXDLIN( 198)		if (filter) {
HXLINE( 198)			_hx_tmp = ::h3d::mat::Filter_obj::Linear_dyn();
            		}
            		else {
HXLINE( 198)			_hx_tmp = ::h3d::mat::Filter_obj::Nearest_dyn();
            		}
HXDLIN( 198)		t->set_filter(_hx_tmp);
HXLINE( 199)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,allocTarget,return )

void RenderContext_obj::clear( ::Dynamic color){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_206_clear)
HXDLIN( 206)		this->engine->clear(color,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,clear,(void))

void RenderContext_obj::initShaders( ::hxsl::ShaderList shaders){
            	HX_GC_STACKFRAME(&_hx_pos_b8739c61c2868bc6_209_initShaders)
HXLINE( 210)		this->currentShaders = shaders;
HXLINE( 211)		this->compiledShader = this->manager->compileShaders(shaders,null());
HXLINE( 212)		if (::hx::IsNull( this->buffers )) {
HXLINE( 213)			this->buffers =  ::h3d::shader::Buffers_obj::__alloc( HX_CTX ,this->compiledShader);
            		}
            		else {
HXLINE( 215)			 ::h3d::shader::Buffers _this = this->buffers;
HXDLIN( 215)			 ::hxsl::RuntimeShader s = this->compiledShader;
HXDLIN( 215)			_this->vertex->grow(s->vertex);
HXDLIN( 215)			_this->fragment->grow(s->fragment);
            		}
HXLINE( 216)		this->manager->fillGlobals(this->buffers,this->compiledShader);
HXLINE( 217)		this->engine->selectShader(this->compiledShader);
HXLINE( 218)		this->engine->uploadShaderBuffers(this->buffers,0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,initShaders,(void))

void RenderContext_obj::end(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_226_end)
HXLINE( 228)		this->texture = null();
HXLINE( 229)		this->currentObj = null();
HXLINE( 230)		this->baseShaderList->next = null();
HXLINE( 231)		if ((this->targetsStackIndex != 0)) {
HXLINE( 231)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Missing popTarget()",69,4b,9a,1f)));
            		}
HXLINE( 232)		if ((this->cameraStackIndex != 0)) {
HXLINE( 232)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Missing popCamera()",bd,1b,34,35)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,end,(void))

void RenderContext_obj::pushCamera( ::h2d::Camera cam){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_242_pushCamera)
HXLINE( 243)		 ::Dynamic entry = this->cameraStack->__get(this->cameraStackIndex++);
HXLINE( 244)		if (::hx::IsNull( entry )) {
HXLINE( 245)			entry =  ::Dynamic(::hx::Anon_obj::Create(6)
            				->setFixed(0,HX_("va",2b,67,00,00),( (Float)(0) ))
            				->setFixed(1,HX_("vb",2c,67,00,00),( (Float)(0) ))
            				->setFixed(2,HX_("vc",2d,67,00,00),( (Float)(0) ))
            				->setFixed(3,HX_("vd",2e,67,00,00),( (Float)(0) ))
            				->setFixed(4,HX_("vx",42,67,00,00),( (Float)(0) ))
            				->setFixed(5,HX_("vy",43,67,00,00),( (Float)(0) )));
HXLINE( 246)			this->cameraStack->push(entry);
            		}
HXLINE( 248)		Float tmpA = this->viewA;
HXLINE( 249)		Float tmpB = this->viewB;
HXLINE( 250)		Float tmpC = this->viewC;
HXLINE( 251)		Float tmpD = this->viewD;
HXLINE( 253)		entry->__SetField(HX_("va",2b,67,00,00),tmpA,::hx::paccDynamic);
HXLINE( 254)		entry->__SetField(HX_("vb",2c,67,00,00),tmpB,::hx::paccDynamic);
HXLINE( 255)		entry->__SetField(HX_("vc",2d,67,00,00),tmpC,::hx::paccDynamic);
HXLINE( 256)		entry->__SetField(HX_("vd",2e,67,00,00),tmpD,::hx::paccDynamic);
HXLINE( 257)		entry->__SetField(HX_("vx",42,67,00,00),this->viewX,::hx::paccDynamic);
HXLINE( 258)		entry->__SetField(HX_("vy",43,67,00,00),this->viewY,::hx::paccDynamic);
HXLINE( 260)		this->viewA = ((cam->matA * tmpA) + (cam->matB * tmpC));
HXLINE( 261)		this->viewB = ((cam->matA * tmpB) + (cam->matB * tmpD));
HXLINE( 262)		this->viewC = ((cam->matC * tmpA) + (cam->matD * tmpC));
HXLINE( 263)		this->viewD = ((cam->matC * tmpB) + (cam->matD * tmpD));
HXLINE( 264)		this->viewX = (((cam->absX * tmpA) + (cam->absY * tmpC)) + this->viewX);
HXLINE( 265)		this->viewY = (((cam->absX * tmpB) + (cam->absY * tmpD)) + this->viewY);
HXLINE( 266)		Float flipY;
HXDLIN( 266)		if (::hx::IsNotNull( this->curTarget )) {
HXLINE( 266)			flipY = -(this->targetFlipY);
            		}
            		else {
HXLINE( 266)			flipY = -(this->baseFlipY);
            		}
HXLINE( 267)		{
HXLINE( 267)			 ::h3d::Vector _this = this->baseShader->viewportA__;
HXDLIN( 267)			_this->x = this->viewA;
HXDLIN( 267)			_this->y = this->viewC;
HXDLIN( 267)			_this->z = this->viewX;
HXDLIN( 267)			_this->w = ((Float)1.);
            		}
HXLINE( 268)		{
HXLINE( 268)			 ::h3d::Vector _this1 = this->baseShader->viewportB__;
HXDLIN( 268)			_this1->x = (this->viewB * flipY);
HXDLIN( 268)			_this1->y = (this->viewD * flipY);
HXDLIN( 268)			_this1->z = (this->viewY * flipY);
HXDLIN( 268)			_this1->w = ((Float)1.);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,pushCamera,(void))

void RenderContext_obj::popCamera(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_276_popCamera)
HXLINE( 277)		if ((this->cameraStackIndex == 0)) {
HXLINE( 277)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Too many popCamera()",c2,31,cc,07)));
            		}
HXLINE( 278)		 ::Dynamic inf = this->cameraStack->__get(--this->cameraStackIndex);
HXLINE( 279)		this->viewA = ( (Float)(inf->__Field(HX_("va",2b,67,00,00),::hx::paccDynamic)) );
HXLINE( 280)		this->viewB = ( (Float)(inf->__Field(HX_("vb",2c,67,00,00),::hx::paccDynamic)) );
HXLINE( 281)		this->viewC = ( (Float)(inf->__Field(HX_("vc",2d,67,00,00),::hx::paccDynamic)) );
HXLINE( 282)		this->viewD = ( (Float)(inf->__Field(HX_("vd",2e,67,00,00),::hx::paccDynamic)) );
HXLINE( 283)		this->viewX = ( (Float)(inf->__Field(HX_("vx",42,67,00,00),::hx::paccDynamic)) );
HXLINE( 284)		this->viewY = ( (Float)(inf->__Field(HX_("vy",43,67,00,00),::hx::paccDynamic)) );
HXLINE( 285)		Float flipY;
HXDLIN( 285)		if (::hx::IsNotNull( this->curTarget )) {
HXLINE( 285)			flipY = -(this->targetFlipY);
            		}
            		else {
HXLINE( 285)			flipY = -(this->baseFlipY);
            		}
HXLINE( 286)		{
HXLINE( 286)			 ::h3d::Vector _this = this->baseShader->viewportA__;
HXDLIN( 286)			_this->x = this->viewA;
HXDLIN( 286)			_this->y = this->viewC;
HXDLIN( 286)			_this->z = this->viewX;
HXDLIN( 286)			_this->w = ((Float)1.);
            		}
HXLINE( 287)		{
HXLINE( 287)			 ::h3d::Vector _this1 = this->baseShader->viewportB__;
HXDLIN( 287)			_this1->x = (this->viewB * flipY);
HXDLIN( 287)			_this1->y = (this->viewD * flipY);
HXDLIN( 287)			_this1->z = (this->viewY * flipY);
HXDLIN( 287)			_this1->w = ((Float)1.);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,popCamera,(void))

bool RenderContext_obj::pushFilter( ::h2d::Object spr){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_297_pushFilter)
HXLINE( 298)		bool _hx_tmp;
HXDLIN( 298)		if ((this->filterStack->length == 0)) {
HXLINE( 298)			_hx_tmp = ::hx::IsNotNull( this->onEnterFilter );
            		}
            		else {
HXLINE( 298)			_hx_tmp = false;
            		}
HXDLIN( 298)		if (_hx_tmp) {
HXLINE( 299)			if (!(( (bool)(this->onEnterFilter(spr)) ))) {
HXLINE( 299)				return false;
            			}
            		}
HXLINE( 300)		this->filterStack->push(spr);
HXLINE( 301)		this->inFilter = spr;
HXLINE( 302)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,pushFilter,return )

void RenderContext_obj::popFilter(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_310_popFilter)
HXLINE( 311)		 ::h2d::Object spr = this->filterStack->pop().StaticCast<  ::h2d::Object >();
HXLINE( 312)		if ((this->filterStack->length > 0)) {
HXLINE( 313)			this->inFilter = this->filterStack->__get((this->filterStack->length - 1)).StaticCast<  ::h2d::Object >();
            		}
            		else {
HXLINE( 315)			this->inFilter = null();
HXLINE( 316)			if (::hx::IsNotNull( this->onLeaveFilter )) {
HXLINE( 316)				this->onLeaveFilter(spr);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,popFilter,(void))

void RenderContext_obj::pushTarget( ::h3d::mat::Texture t,::hx::Null< int >  __o_startX,::hx::Null< int >  __o_startY,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height){
            		int startX = __o_startX.Default(0);
            		int startY = __o_startY.Default(0);
            		int width = __o_width.Default(-1);
            		int height = __o_height.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_330_pushTarget)
HXLINE( 332)		this->engine->pushTarget(t,null(),null());
HXLINE( 333)		this->initShaders(this->baseShaderList);
HXLINE( 335)		 ::Dynamic entry = this->targetsStack->__get(this->targetsStackIndex++);
HXLINE( 336)		if (::hx::IsNull( entry )) {
HXLINE( 337)			entry =  ::Dynamic(::hx::Anon_obj::Create(12)
            				->setFixed(0,HX_("t",74,00,00,00),null())
            				->setFixed(1,HX_("va",2b,67,00,00),( (Float)(0) ))
            				->setFixed(2,HX_("vb",2c,67,00,00),( (Float)(0) ))
            				->setFixed(3,HX_("vc",2d,67,00,00),( (Float)(0) ))
            				->setFixed(4,HX_("vd",2e,67,00,00),( (Float)(0) ))
            				->setFixed(5,HX_("vx",42,67,00,00),( (Float)(0) ))
            				->setFixed(6,HX_("vy",43,67,00,00),( (Float)(0) ))
            				->setFixed(7,HX_("rzH",80,eb,56,00),( (Float)(0) ))
            				->setFixed(8,HX_("rzW",8f,eb,56,00),( (Float)(0) ))
            				->setFixed(9,HX_("rzX",90,eb,56,00),( (Float)(0) ))
            				->setFixed(10,HX_("rzY",91,eb,56,00),( (Float)(0) ))
            				->setFixed(11,HX_("hasRZ",a2,91,21,22),false));
HXLINE( 338)			this->targetsStack->push(entry);
            		}
HXLINE( 340)		entry->__SetField(HX_("t",74,00,00,00),this->curTarget,::hx::paccDynamic);
HXLINE( 341)		entry->__SetField(HX_("va",2b,67,00,00),this->viewA,::hx::paccDynamic);
HXLINE( 342)		entry->__SetField(HX_("vb",2c,67,00,00),this->viewB,::hx::paccDynamic);
HXLINE( 343)		entry->__SetField(HX_("vc",2d,67,00,00),this->viewC,::hx::paccDynamic);
HXLINE( 344)		entry->__SetField(HX_("vd",2e,67,00,00),this->viewD,::hx::paccDynamic);
HXLINE( 345)		entry->__SetField(HX_("vx",42,67,00,00),this->viewX,::hx::paccDynamic);
HXLINE( 346)		entry->__SetField(HX_("vy",43,67,00,00),this->viewY,::hx::paccDynamic);
HXLINE( 347)		entry->__SetField(HX_("hasRZ",a2,91,21,22),this->hasRenderZone,::hx::paccDynamic);
HXLINE( 348)		entry->__SetField(HX_("rzX",90,eb,56,00),this->renderX,::hx::paccDynamic);
HXLINE( 349)		entry->__SetField(HX_("rzY",91,eb,56,00),this->renderY,::hx::paccDynamic);
HXLINE( 350)		entry->__SetField(HX_("rzW",8f,eb,56,00),this->renderW,::hx::paccDynamic);
HXLINE( 351)		entry->__SetField(HX_("rzH",80,eb,56,00),this->renderH,::hx::paccDynamic);
HXLINE( 353)		if ((width < 0)) {
HXLINE( 353)			if (::hx::IsNull( t )) {
HXLINE( 353)				width = this->scene->width;
            			}
            			else {
HXLINE( 353)				width = t->width;
            			}
            		}
HXLINE( 354)		if ((height < 0)) {
HXLINE( 354)			if (::hx::IsNull( t )) {
HXLINE( 354)				height = this->scene->height;
            			}
            			else {
HXLINE( 354)				height = t->height;
            			}
            		}
HXLINE( 356)		this->viewA = (( (Float)(2) ) / ( (Float)(width) ));
HXLINE( 357)		this->viewB = ( (Float)(0) );
HXLINE( 358)		this->viewC = ( (Float)(0) );
HXLINE( 359)		this->viewD = (( (Float)(2) ) / ( (Float)(height) ));
HXLINE( 360)		this->viewX = (( (Float)(-1) ) - (( (Float)(startX) ) * this->viewA));
HXLINE( 361)		this->viewY = (( (Float)(-1) ) - (( (Float)(startY) ) * this->viewD));
HXLINE( 363)		{
HXLINE( 363)			 ::h3d::Vector _this = this->baseShader->halfPixelInverse__;
HXDLIN( 363)			int x;
HXDLIN( 363)			if (::hx::IsNull( t )) {
HXLINE( 363)				x = this->engine->width;
            			}
            			else {
HXLINE( 363)				x = t->width;
            			}
HXDLIN( 363)			int y;
HXDLIN( 363)			if (::hx::IsNull( t )) {
HXLINE( 363)				y = this->engine->height;
            			}
            			else {
HXLINE( 363)				y = t->height;
            			}
HXDLIN( 363)			_this->x = (((Float)0.5) / ( (Float)(x) ));
HXDLIN( 363)			_this->y = (((Float)0.5) / ( (Float)(y) ));
HXDLIN( 363)			_this->z = ((Float)0.);
HXDLIN( 363)			_this->w = ((Float)1.);
            		}
HXLINE( 364)		{
HXLINE( 364)			 ::h3d::Vector _this1 = this->baseShader->viewportA__;
HXDLIN( 364)			_this1->x = this->viewA;
HXDLIN( 364)			_this1->y = this->viewC;
HXDLIN( 364)			_this1->z = this->viewX;
HXDLIN( 364)			_this1->w = ((Float)1.);
            		}
HXLINE( 365)		{
HXLINE( 365)			 ::h3d::Vector _this2 = this->baseShader->viewportB__;
HXDLIN( 365)			_this2->x = (this->viewB * -(this->targetFlipY));
HXDLIN( 365)			_this2->y = (this->viewD * -(this->targetFlipY));
HXDLIN( 365)			_this2->z = (this->viewY * -(this->targetFlipY));
HXDLIN( 365)			_this2->w = ((Float)1.);
            		}
HXLINE( 366)		this->curTarget = t;
HXLINE( 367)		this->currentBlend = null();
HXLINE( 368)		if (this->hasRenderZone) {
HXLINE( 368)			this->hasRenderZone = false;
HXDLIN( 368)			this->engine->setRenderZone(null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(RenderContext_obj,pushTarget,(void))

void RenderContext_obj::pushTargets(::Array< ::Dynamic> texs){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_374_pushTargets)
HXLINE( 375)		this->pushTarget(texs->__get(0).StaticCast<  ::h3d::mat::Texture >(),null(),null(),null(),null());
HXLINE( 376)		if ((texs->length > 1)) {
HXLINE( 377)			this->engine->popTarget();
HXLINE( 378)			this->engine->pushTargets(texs);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,pushTargets,(void))

void RenderContext_obj::popTarget(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_386_popTarget)
HXLINE( 388)		if ((this->targetsStackIndex <= 0)) {
HXLINE( 388)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Too many popTarget()",6e,61,32,f2)));
            		}
HXLINE( 389)		this->engine->popTarget();
HXLINE( 391)		 ::Dynamic tinf = this->targetsStack->__get(--this->targetsStackIndex);
HXLINE( 392)		 ::h3d::mat::Texture t = (this->curTarget = ( ( ::h3d::mat::Texture)(tinf->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)) ));
HXLINE( 393)		this->viewA = ( (Float)(tinf->__Field(HX_("va",2b,67,00,00),::hx::paccDynamic)) );
HXLINE( 394)		this->viewB = ( (Float)(tinf->__Field(HX_("vb",2c,67,00,00),::hx::paccDynamic)) );
HXLINE( 395)		this->viewC = ( (Float)(tinf->__Field(HX_("vc",2d,67,00,00),::hx::paccDynamic)) );
HXLINE( 396)		this->viewD = ( (Float)(tinf->__Field(HX_("vd",2e,67,00,00),::hx::paccDynamic)) );
HXLINE( 397)		this->viewX = ( (Float)(tinf->__Field(HX_("vx",42,67,00,00),::hx::paccDynamic)) );
HXLINE( 398)		this->viewY = ( (Float)(tinf->__Field(HX_("vy",43,67,00,00),::hx::paccDynamic)) );
HXLINE( 399)		Float flipY;
HXDLIN( 399)		if (::hx::IsNull( t )) {
HXLINE( 399)			flipY = -(this->baseFlipY);
            		}
            		else {
HXLINE( 399)			flipY = -(this->targetFlipY);
            		}
HXLINE( 401)		this->initShaders(this->baseShaderList);
HXLINE( 402)		{
HXLINE( 402)			 ::h3d::Vector _this = this->baseShader->halfPixelInverse__;
HXDLIN( 402)			int x;
HXDLIN( 402)			if (::hx::IsNull( t )) {
HXLINE( 402)				x = this->engine->width;
            			}
            			else {
HXLINE( 402)				x = t->width;
            			}
HXDLIN( 402)			int y;
HXDLIN( 402)			if (::hx::IsNull( t )) {
HXLINE( 402)				y = this->engine->height;
            			}
            			else {
HXLINE( 402)				y = t->height;
            			}
HXDLIN( 402)			_this->x = (((Float)0.5) / ( (Float)(x) ));
HXDLIN( 402)			_this->y = (((Float)0.5) / ( (Float)(y) ));
HXDLIN( 402)			_this->z = ((Float)0.);
HXDLIN( 402)			_this->w = ((Float)1.);
            		}
HXLINE( 403)		{
HXLINE( 403)			 ::h3d::Vector _this1 = this->baseShader->viewportA__;
HXDLIN( 403)			_this1->x = this->viewA;
HXDLIN( 403)			_this1->y = this->viewC;
HXDLIN( 403)			_this1->z = this->viewX;
HXDLIN( 403)			_this1->w = ((Float)1.);
            		}
HXLINE( 404)		{
HXLINE( 404)			 ::h3d::Vector _this2 = this->baseShader->viewportB__;
HXDLIN( 404)			_this2->x = (this->viewB * flipY);
HXDLIN( 404)			_this2->y = (this->viewD * flipY);
HXDLIN( 404)			_this2->z = (this->viewY * flipY);
HXDLIN( 404)			_this2->w = ((Float)1.);
            		}
HXLINE( 406)		if (( (bool)(tinf->__Field(HX_("hasRZ",a2,91,21,22),::hx::paccDynamic)) )) {
HXLINE( 406)			this->setRZ(( (Float)(tinf->__Field(HX_("rzX",90,eb,56,00),::hx::paccDynamic)) ),( (Float)(tinf->__Field(HX_("rzY",91,eb,56,00),::hx::paccDynamic)) ),( (Float)(tinf->__Field(HX_("rzW",8f,eb,56,00),::hx::paccDynamic)) ),( (Float)(tinf->__Field(HX_("rzH",80,eb,56,00),::hx::paccDynamic)) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,popTarget,(void))

void RenderContext_obj::pushRenderZone(Float x,Float y,Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_415_pushRenderZone)
HXLINE( 416)		 ::Dynamic inf = this->renderZoneStack->__get(this->renderZoneIndex++);
HXLINE( 417)		if (::hx::IsNull( inf )) {
HXLINE( 418)			inf =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("h",68,00,00,00),this->renderH)
            				->setFixed(1,HX_("w",77,00,00,00),this->renderW)
            				->setFixed(2,HX_("x",78,00,00,00),this->renderX)
            				->setFixed(3,HX_("y",79,00,00,00),this->renderY)
            				->setFixed(4,HX_("hasRZ",a2,91,21,22),this->hasRenderZone));
HXLINE( 419)			this->renderZoneStack[(this->renderZoneIndex - 1)] = inf;
            		}
            		else {
HXLINE( 420)			if (this->hasRenderZone) {
HXLINE( 421)				inf->__SetField(HX_("hasRZ",a2,91,21,22),true,::hx::paccDynamic);
HXLINE( 422)				inf->__SetField(HX_("x",78,00,00,00),this->renderX,::hx::paccDynamic);
HXLINE( 423)				inf->__SetField(HX_("y",79,00,00,00),this->renderY,::hx::paccDynamic);
HXLINE( 424)				inf->__SetField(HX_("w",77,00,00,00),this->renderW,::hx::paccDynamic);
HXLINE( 425)				inf->__SetField(HX_("h",68,00,00,00),this->renderH,::hx::paccDynamic);
            			}
            			else {
HXLINE( 427)				inf->__SetField(HX_("hasRZ",a2,91,21,22),false,::hx::paccDynamic);
            			}
            		}
HXLINE( 430)		this->setRZ(x,y,w,h);
            	}


HX_DEFINE_DYNAMIC_FUNC4(RenderContext_obj,pushRenderZone,(void))

void RenderContext_obj::popRenderZone(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_436_popRenderZone)
HXLINE( 437)		if ((this->renderZoneIndex == 0)) {
HXLINE( 437)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Too many popRenderZone()",ff,5e,43,6f)));
            		}
HXLINE( 438)		 ::Dynamic inf = this->renderZoneStack->__get(--this->renderZoneIndex);
HXLINE( 439)		if (( (bool)(inf->__Field(HX_("hasRZ",a2,91,21,22),::hx::paccDynamic)) )) {
HXLINE( 440)			this->setRZ(( (Float)(inf->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ),( (Float)(inf->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ),( (Float)(inf->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) ),( (Float)(inf->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 442)			this->hasRenderZone = false;
HXDLIN( 442)			this->engine->setRenderZone(null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,popRenderZone,(void))

void RenderContext_obj::clipRenderZone(Float x,Float y,Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_451_clipRenderZone)
HXLINE( 452)		if (!(this->hasRenderZone)) {
HXLINE( 453)			this->pushRenderZone(x,y,w,h);
HXLINE( 454)			return;
            		}
HXLINE( 457)		x = ::Math_obj::max(x,this->renderX);
HXLINE( 458)		y = ::Math_obj::max(y,this->renderY);
HXLINE( 459)		Float x2 = ::Math_obj::min((x + w),(this->renderX + this->renderW));
HXLINE( 460)		Float y2 = ::Math_obj::min((y + h),(this->renderY + this->renderH));
HXLINE( 461)		if ((x2 < x)) {
HXLINE( 461)			x2 = x;
            		}
HXLINE( 462)		if ((y2 < y)) {
HXLINE( 462)			y2 = y;
            		}
HXLINE( 464)		this->pushRenderZone(x,y,(x2 - x),(y2 - y));
            	}


HX_DEFINE_DYNAMIC_FUNC4(RenderContext_obj,clipRenderZone,(void))

void RenderContext_obj::setRZ(Float x,Float y,Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_467_setRZ)
HXLINE( 468)		this->hasRenderZone = true;
HXLINE( 469)		this->renderX = x;
HXLINE( 470)		this->renderY = y;
HXLINE( 471)		this->renderW = w;
HXLINE( 472)		this->renderH = h;
HXLINE( 473)		Float scaleX = ((this->scene->viewportA * ( (Float)(this->engine->width) )) / ( (Float)(2) ));
HXLINE( 474)		Float scaleY = ((this->scene->viewportD * ( (Float)(this->engine->height) )) / ( (Float)(2) ));
HXLINE( 475)		if (::hx::IsNotNull( this->inFilter )) {
HXLINE( 476)			 ::h3d::Vector fa = this->baseShader->filterMatrixA__;
HXLINE( 477)			 ::h3d::Vector fb = this->baseShader->filterMatrixB__;
HXLINE( 478)			Float x2 = (x + w);
HXDLIN( 478)			Float y2 = (y + h);
HXLINE( 479)			Float rx1 = (((x * fa->x) + (y * fa->y)) + fa->z);
HXLINE( 480)			Float ry1 = (((x * fb->x) + (y * fb->y)) + fb->z);
HXLINE( 481)			Float rx2 = (((x2 * fa->x) + (y2 * fa->y)) + fa->z);
HXLINE( 482)			Float ry2 = (((x2 * fb->x) + (y2 * fb->y)) + fb->z);
HXLINE( 483)			x = rx1;
HXLINE( 484)			y = ry1;
HXLINE( 485)			w = (rx2 - rx1);
HXLINE( 486)			h = (ry2 - ry1);
            		}
HXLINE( 489)		 ::h3d::Engine _hx_tmp = this->engine;
HXLINE( 490)		int _hx_tmp1 = ::Std_obj::_hx_int((((x * scaleX) + ((this->scene->viewportX + 1) * (( (Float)(this->engine->width) ) / ( (Float)(2) )))) + ((Float)1e-10)));
HXLINE( 491)		int _hx_tmp2 = ::Std_obj::_hx_int((((y * scaleY) + ((this->scene->viewportY + 1) * (( (Float)(this->engine->height) ) / ( (Float)(2) )))) + ((Float)1e-10)));
HXLINE( 492)		int _hx_tmp3 = ::Std_obj::_hx_int(((w * scaleX) + ((Float)1e-10)));
HXLINE( 489)		_hx_tmp->setRenderZone(_hx_tmp1,_hx_tmp2,_hx_tmp3,::Std_obj::_hx_int(((h * scaleY) + ((Float)1e-10))));
            	}


HX_DEFINE_DYNAMIC_FUNC4(RenderContext_obj,setRZ,(void))

void RenderContext_obj::clearRZ(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_497_clearRZ)
HXLINE( 498)		this->hasRenderZone = false;
HXLINE( 499)		this->engine->setRenderZone(null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,clearRZ,(void))

void RenderContext_obj::setRenderZone(Float x,Float y,Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_504_setRenderZone)
HXDLIN( 504)		this->pushRenderZone(x,y,w,h);
            	}


HX_DEFINE_DYNAMIC_FUNC4(RenderContext_obj,setRenderZone,(void))

void RenderContext_obj::clearRenderZone(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_509_clearRenderZone)
HXDLIN( 509)		this->popRenderZone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,clearRenderZone,(void))

void RenderContext_obj::drawLayer(int layer){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_513_drawLayer)
HXDLIN( 513)		this->scene->drawLayer(::hx::ObjectPtr<OBJ_>(this),layer);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,drawLayer,(void))

void RenderContext_obj::drawScene(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_520_drawScene)
HXDLIN( 520)		this->scene->drawRec(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,drawScene,(void))

void RenderContext_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_528_flush)
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,flush,(void))

void RenderContext_obj::_flush(){
            	HX_GC_STACKFRAME(&_hx_pos_b8739c61c2868bc6_531__flush)
HXLINE( 532)		if ((this->bufPos == 0)) {
HXLINE( 532)			return;
            		}
HXLINE( 533)		this->beforeDraw();
HXLINE( 534)		int nverts = ::Std_obj::_hx_int((( (Float)(this->bufPos) ) / ( (Float)(this->stride) )));
HXLINE( 535)		 ::h3d::Buffer tmp =  ::h3d::Buffer_obj::__alloc( HX_CTX ,nverts,this->stride,::Array_obj< ::Dynamic>::__new(3)->init(0,::h3d::BufferFlag_obj::Quads_dyn())->init(1,::h3d::BufferFlag_obj::Dynamic_dyn())->init(2,::h3d::BufferFlag_obj::RawFormat_dyn()));
HXLINE( 536)		tmp->uploadVector(this->buffer,0,nverts,null());
HXLINE( 537)		{
HXLINE( 537)			 ::h3d::Engine _this = this->engine;
HXDLIN( 537)			_this->renderBuffer(tmp,_this->mem->quadIndexes,2,0,-1);
            		}
HXLINE( 538)		tmp->dispose();
HXLINE( 539)		this->bufPos = 0;
HXLINE( 540)		this->texture = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,_flush,(void))

void RenderContext_obj::beforeDraw(){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_548_beforeDraw)
HXLINE( 549)		if (::hx::IsNull( this->texture )) {
HXLINE( 549)			this->texture = ::h3d::mat::Texture_obj::fromColor(16711935,null());
            		}
HXLINE( 550)		this->baseShader->texture__ = this->texture;
HXLINE( 551)		 ::h3d::mat::Filter _hx_tmp;
HXDLIN( 551)		bool _hx_tmp1;
HXDLIN( 551)		if (::hx::IsNull( this->currentObj->smooth )) {
HXLINE( 551)			_hx_tmp1 = this->defaultSmooth;
            		}
            		else {
HXLINE( 551)			_hx_tmp1 = ( (bool)(this->currentObj->smooth) );
            		}
HXDLIN( 551)		if (_hx_tmp1) {
HXLINE( 551)			_hx_tmp = ::h3d::mat::Filter_obj::Linear_dyn();
            		}
            		else {
HXLINE( 551)			_hx_tmp = ::h3d::mat::Filter_obj::Nearest_dyn();
            		}
HXDLIN( 551)		this->texture->set_filter(_hx_tmp);
HXLINE( 552)		 ::h3d::mat::Wrap _hx_tmp2;
HXDLIN( 552)		bool _hx_tmp3;
HXDLIN( 552)		if (this->currentObj->tileWrap) {
HXLINE( 552)			if (::hx::IsNotNull( this->currentObj->filter )) {
HXLINE( 552)				_hx_tmp3 = ::hx::IsNotNull( this->inFilter );
            			}
            			else {
HXLINE( 552)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXLINE( 552)			_hx_tmp3 = false;
            		}
HXDLIN( 552)		if (_hx_tmp3) {
HXLINE( 552)			_hx_tmp2 = ::h3d::mat::Wrap_obj::Repeat_dyn();
            		}
            		else {
HXLINE( 552)			_hx_tmp2 = ::h3d::mat::Wrap_obj::Clamp_dyn();
            		}
HXDLIN( 552)		this->texture->set_wrap(_hx_tmp2);
HXLINE( 553)		 ::h2d::BlendMode blend = this->currentObj->blendMode;
HXLINE( 554)		bool _hx_tmp4;
HXDLIN( 554)		if (::hx::IsInstanceEq( this->inFilter,this->currentObj )) {
HXLINE( 554)			_hx_tmp4 = ::hx::IsPointerEq( blend,::h2d::BlendMode_obj::Erase_dyn() );
            		}
            		else {
HXLINE( 554)			_hx_tmp4 = false;
            		}
HXDLIN( 554)		if (_hx_tmp4) {
HXLINE( 554)			blend = ::h2d::BlendMode_obj::Add_dyn();
            		}
HXLINE( 555)		if (::hx::IsNotNull( this->inFilterBlend )) {
HXLINE( 555)			blend = this->inFilterBlend;
            		}
HXLINE( 556)		if (::hx::IsPointerNotEq( blend,this->currentBlend )) {
HXLINE( 557)			this->currentBlend = blend;
HXLINE( 558)			this->pass->setBlendMode(blend);
HXLINE( 564)			bool _hx_tmp;
HXDLIN( 564)			if (::hx::IsPointerNotEq( blend,::h2d::BlendMode_obj::Alpha_dyn() )) {
HXLINE( 564)				_hx_tmp = ::hx::IsPointerEq( blend,::h2d::BlendMode_obj::Add_dyn() );
            			}
            			else {
HXLINE( 564)				_hx_tmp = true;
            			}
HXDLIN( 564)			if (_hx_tmp) {
HXLINE( 565)				this->pass->set_blendAlphaSrc(::h3d::mat::Blend_obj::One_dyn());
HXLINE( 567)				if (::hx::IsNotNull( this->inFilterBlend )) {
HXLINE( 568)					this->pass->set_blendSrc(::h3d::mat::Blend_obj::One_dyn());
            				}
            			}
            		}
HXLINE( 572)		this->manager->fillParams(this->buffers,this->compiledShader,this->currentShaders);
HXLINE( 573)		this->engine->selectMaterial(this->pass);
HXLINE( 574)		this->engine->uploadShaderBuffers(this->buffers,1);
HXLINE( 575)		this->engine->uploadShaderBuffers(this->buffers,2);
HXLINE( 576)		this->engine->uploadShaderBuffers(this->buffers,3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderContext_obj,beforeDraw,(void))

void RenderContext_obj::setupColor( ::h2d::Drawable obj){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_580_setupColor)
HXDLIN( 580)		if (::hx::IsInstanceEq( this->inFilter,obj )) {
HXLINE( 581)			 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 581)			_this->x = obj->color->x;
HXDLIN( 581)			_this->y = obj->color->y;
HXDLIN( 581)			_this->z = obj->color->z;
HXDLIN( 581)			_this->w = obj->color->w;
            		}
            		else {
HXLINE( 583)			if (::hx::IsNotNull( this->inFilterBlend )) {
HXLINE( 584)				 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 584)				_this->x = this->globalAlpha;
HXDLIN( 584)				_this->y = this->globalAlpha;
HXDLIN( 584)				_this->z = this->globalAlpha;
HXDLIN( 584)				_this->w = this->globalAlpha;
            			}
            			else {
HXLINE( 586)				 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 586)				_this->x = obj->color->x;
HXDLIN( 586)				_this->y = obj->color->y;
HXDLIN( 586)				_this->z = obj->color->z;
HXDLIN( 586)				_this->w = (obj->color->w * this->globalAlpha);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,setupColor,(void))

bool RenderContext_obj::beginDrawBatchState( ::h2d::Drawable obj){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_595_beginDrawBatchState)
HXLINE( 596)		if (!(this->beginDraw(obj,null(),true,null()))) {
HXLINE( 596)			return false;
            		}
HXLINE( 597)		if (::hx::IsInstanceEq( this->inFilter,obj )) {
HXLINE( 597)			 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 597)			_this->x = obj->color->x;
HXDLIN( 597)			_this->y = obj->color->y;
HXDLIN( 597)			_this->z = obj->color->z;
HXDLIN( 597)			_this->w = obj->color->w;
            		}
            		else {
HXLINE( 597)			if (::hx::IsNotNull( this->inFilterBlend )) {
HXLINE( 597)				 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 597)				_this->x = this->globalAlpha;
HXDLIN( 597)				_this->y = this->globalAlpha;
HXDLIN( 597)				_this->z = this->globalAlpha;
HXDLIN( 597)				_this->w = this->globalAlpha;
            			}
            			else {
HXLINE( 597)				 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 597)				_this->x = obj->color->x;
HXDLIN( 597)				_this->y = obj->color->y;
HXDLIN( 597)				_this->z = obj->color->z;
HXDLIN( 597)				_this->w = (obj->color->w * this->globalAlpha);
            			}
            		}
HXLINE( 598)		{
HXLINE( 598)			 ::h3d::Vector _this = this->baseShader->absoluteMatrixA__;
HXDLIN( 598)			_this->x = obj->matA;
HXDLIN( 598)			_this->y = obj->matC;
HXDLIN( 598)			_this->z = obj->absX;
HXDLIN( 598)			_this->w = ((Float)1.);
            		}
HXLINE( 599)		{
HXLINE( 599)			 ::h3d::Vector _this1 = this->baseShader->absoluteMatrixB__;
HXDLIN( 599)			_this1->x = obj->matB;
HXDLIN( 599)			_this1->y = obj->matD;
HXDLIN( 599)			_this1->z = obj->absY;
HXDLIN( 599)			_this1->w = ((Float)1.);
            		}
HXLINE( 600)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,beginDrawBatchState,return )

void RenderContext_obj::swapTexture( ::h3d::mat::Texture texture){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_606_swapTexture)
HXLINE( 607)		this->texture = texture;
HXLINE( 608)		this->beforeDraw();
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,swapTexture,(void))

bool RenderContext_obj::beginDrawObject( ::h2d::Drawable obj, ::h3d::mat::Texture texture){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_616_beginDrawObject)
HXLINE( 617)		if (!(this->beginDraw(obj,texture,true,null()))) {
HXLINE( 617)			return false;
            		}
HXLINE( 618)		if (::hx::IsInstanceEq( this->inFilter,obj )) {
HXLINE( 618)			 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 618)			_this->x = obj->color->x;
HXDLIN( 618)			_this->y = obj->color->y;
HXDLIN( 618)			_this->z = obj->color->z;
HXDLIN( 618)			_this->w = obj->color->w;
            		}
            		else {
HXLINE( 618)			if (::hx::IsNotNull( this->inFilterBlend )) {
HXLINE( 618)				 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 618)				_this->x = this->globalAlpha;
HXDLIN( 618)				_this->y = this->globalAlpha;
HXDLIN( 618)				_this->z = this->globalAlpha;
HXDLIN( 618)				_this->w = this->globalAlpha;
            			}
            			else {
HXLINE( 618)				 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 618)				_this->x = obj->color->x;
HXDLIN( 618)				_this->y = obj->color->y;
HXDLIN( 618)				_this->z = obj->color->z;
HXDLIN( 618)				_this->w = (obj->color->w * this->globalAlpha);
            			}
            		}
HXLINE( 619)		{
HXLINE( 619)			 ::h3d::Vector _this = this->baseShader->absoluteMatrixA__;
HXDLIN( 619)			_this->x = obj->matA;
HXDLIN( 619)			_this->y = obj->matC;
HXDLIN( 619)			_this->z = obj->absX;
HXDLIN( 619)			_this->w = ((Float)1.);
            		}
HXLINE( 620)		{
HXLINE( 620)			 ::h3d::Vector _this1 = this->baseShader->absoluteMatrixB__;
HXDLIN( 620)			_this1->x = obj->matB;
HXDLIN( 620)			_this1->y = obj->matD;
HXDLIN( 620)			_this1->z = obj->absY;
HXDLIN( 620)			_this1->w = ((Float)1.);
            		}
HXLINE( 621)		this->beforeDraw();
HXLINE( 622)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,beginDrawObject,return )

bool RenderContext_obj::beginDrawBatch( ::h2d::Drawable obj, ::h3d::mat::Texture texture){
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_632_beginDrawBatch)
HXDLIN( 632)		return this->beginDraw(obj,texture,false,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,beginDrawBatch,return )

bool RenderContext_obj::drawTile( ::h2d::Drawable obj, ::h2d::Tile tile){
            	HX_GC_STACKFRAME(&_hx_pos_b8739c61c2868bc6_642_drawTile)
HXLINE( 643)		Float matA;
HXDLIN( 643)		Float matB;
HXDLIN( 643)		Float matC;
HXDLIN( 643)		Float matD;
HXDLIN( 643)		Float absX;
HXDLIN( 643)		Float absY;
HXLINE( 644)		if (::hx::IsNotNull( this->inFilter )) {
HXLINE( 645)			 ::h3d::Vector f1 = this->baseShader->filterMatrixA__;
HXLINE( 646)			 ::h3d::Vector f2 = this->baseShader->filterMatrixB__;
HXLINE( 647)			Float tmpA = ((obj->matA * f1->x) + (obj->matB * f1->y));
HXLINE( 648)			Float tmpB = ((obj->matA * f2->x) + (obj->matB * f2->y));
HXLINE( 649)			Float tmpC = ((obj->matC * f1->x) + (obj->matD * f1->y));
HXLINE( 650)			Float tmpD = ((obj->matC * f2->x) + (obj->matD * f2->y));
HXLINE( 651)			Float tmpX = (((obj->absX * f1->x) + (obj->absY * f1->y)) + f1->z);
HXLINE( 652)			Float tmpY = (((obj->absX * f2->x) + (obj->absY * f2->y)) + f2->z);
HXLINE( 653)			matA = ((tmpA * this->viewA) + (tmpB * this->viewC));
HXLINE( 654)			matB = ((tmpA * this->viewB) + (tmpB * this->viewD));
HXLINE( 655)			matC = ((tmpC * this->viewA) + (tmpD * this->viewC));
HXLINE( 656)			matD = ((tmpC * this->viewB) + (tmpD * this->viewD));
HXLINE( 657)			absX = (((tmpX * this->viewA) + (tmpY * this->viewC)) + this->viewX);
HXLINE( 658)			absY = (((tmpX * this->viewB) + (tmpY * this->viewD)) + this->viewY);
            		}
            		else {
HXLINE( 660)			matA = ((obj->matA * this->viewA) + (obj->matB * this->viewC));
HXLINE( 661)			matB = ((obj->matA * this->viewB) + (obj->matB * this->viewD));
HXLINE( 662)			matC = ((obj->matC * this->viewA) + (obj->matD * this->viewC));
HXLINE( 663)			matD = ((obj->matC * this->viewB) + (obj->matD * this->viewD));
HXLINE( 664)			absX = (((obj->absX * this->viewA) + (obj->absY * this->viewC)) + this->viewX);
HXLINE( 665)			absY = (((obj->absX * this->viewB) + (obj->absY * this->viewD)) + this->viewY);
            		}
HXLINE( 669)		bool _hx_tmp;
HXDLIN( 669)		if ((matB == 0)) {
HXLINE( 669)			_hx_tmp = (matC == 0);
            		}
            		else {
HXLINE( 669)			_hx_tmp = false;
            		}
HXDLIN( 669)		if (_hx_tmp) {
HXLINE( 670)			Float tx = (tile->dx + (tile->width * ((Float)0.5)));
HXLINE( 671)			Float ty = (tile->dy + (tile->height * ((Float)0.5)));
HXLINE( 672)			Float tr;
HXDLIN( 672)			if ((tile->width > tile->height)) {
HXLINE( 672)				tr = tile->width;
            			}
            			else {
HXLINE( 672)				tr = tile->height;
            			}
HXDLIN( 672)			Float a;
HXDLIN( 672)			if ((matA < 0)) {
HXLINE( 672)				a = -(matA);
            			}
            			else {
HXLINE( 672)				a = matA;
            			}
HXDLIN( 672)			Float b;
HXDLIN( 672)			if ((matD < 0)) {
HXLINE( 672)				b = -(matD);
            			}
            			else {
HXLINE( 672)				b = matD;
            			}
HXDLIN( 672)			Float tr1;
HXDLIN( 672)			if ((a < b)) {
HXLINE( 672)				tr1 = b;
            			}
            			else {
HXLINE( 672)				tr1 = a;
            			}
HXDLIN( 672)			Float tr2 = ((tr * ((Float)1.5)) * tr1);
HXLINE( 673)			Float cx = (absX + (tx * matA));
HXLINE( 674)			Float cy = (absY + (ty * matD));
HXLINE( 675)			bool _hx_tmp;
HXDLIN( 675)			bool _hx_tmp1;
HXDLIN( 675)			bool _hx_tmp2;
HXDLIN( 675)			if (!(((cx + tr2) < -1))) {
HXLINE( 675)				_hx_tmp2 = ((cx - tr2) > 1);
            			}
            			else {
HXLINE( 675)				_hx_tmp2 = true;
            			}
HXDLIN( 675)			if (!(_hx_tmp2)) {
HXLINE( 675)				_hx_tmp1 = ((cy + tr2) < -1);
            			}
            			else {
HXLINE( 675)				_hx_tmp1 = true;
            			}
HXDLIN( 675)			if (!(_hx_tmp1)) {
HXLINE( 675)				_hx_tmp = ((cy - tr2) > 1);
            			}
            			else {
HXLINE( 675)				_hx_tmp = true;
            			}
HXDLIN( 675)			if (_hx_tmp) {
HXLINE( 675)				return false;
            			}
            		}
            		else {
HXLINE( 677)			Float xMin = ((Float)1e20);
HXDLIN( 677)			Float yMin = ((Float)1e20);
HXDLIN( 677)			Float xMax = ((Float)-1e20);
HXDLIN( 677)			Float yMax = ((Float)-1e20);
HXLINE( 686)			Float hw = (tile->width * ((Float)0.5));
HXLINE( 687)			Float hh = (tile->height * ((Float)0.5));
HXLINE( 688)			{
HXLINE( 688)				Float px = ((tile->dx * matA) + (tile->dy * matC));
HXDLIN( 688)				Float py = ((tile->dx * matB) + (tile->dy * matD));
HXDLIN( 688)				if ((px < xMin)) {
HXLINE( 688)					xMin = px;
            				}
HXDLIN( 688)				if ((px > xMax)) {
HXLINE( 688)					xMax = px;
            				}
HXDLIN( 688)				if ((py < yMin)) {
HXLINE( 688)					yMin = py;
            				}
HXDLIN( 688)				if ((py > yMax)) {
HXLINE( 688)					yMax = py;
            				}
            			}
HXLINE( 689)			{
HXLINE( 689)				Float x = tile->width;
HXDLIN( 689)				Float px1 = (((x + tile->dx) * matA) + (tile->dy * matC));
HXDLIN( 689)				Float py1 = (((x + tile->dx) * matB) + (tile->dy * matD));
HXDLIN( 689)				if ((px1 < xMin)) {
HXLINE( 689)					xMin = px1;
            				}
HXDLIN( 689)				if ((px1 > xMax)) {
HXLINE( 689)					xMax = px1;
            				}
HXDLIN( 689)				if ((py1 < yMin)) {
HXLINE( 689)					yMin = py1;
            				}
HXDLIN( 689)				if ((py1 > yMax)) {
HXLINE( 689)					yMax = py1;
            				}
            			}
HXLINE( 690)			{
HXLINE( 690)				Float y = tile->height;
HXDLIN( 690)				Float px2 = ((tile->dx * matA) + ((y + tile->dy) * matC));
HXDLIN( 690)				Float py2 = ((tile->dx * matB) + ((y + tile->dy) * matD));
HXDLIN( 690)				if ((px2 < xMin)) {
HXLINE( 690)					xMin = px2;
            				}
HXDLIN( 690)				if ((px2 > xMax)) {
HXLINE( 690)					xMax = px2;
            				}
HXDLIN( 690)				if ((py2 < yMin)) {
HXLINE( 690)					yMin = py2;
            				}
HXDLIN( 690)				if ((py2 > yMax)) {
HXLINE( 690)					yMax = py2;
            				}
            			}
HXLINE( 691)			{
HXLINE( 691)				Float x1 = tile->width;
HXDLIN( 691)				Float y1 = tile->height;
HXDLIN( 691)				Float px3 = (((x1 + tile->dx) * matA) + ((y1 + tile->dy) * matC));
HXDLIN( 691)				Float py3 = (((x1 + tile->dx) * matB) + ((y1 + tile->dy) * matD));
HXDLIN( 691)				if ((px3 < xMin)) {
HXLINE( 691)					xMin = px3;
            				}
HXDLIN( 691)				if ((px3 > xMax)) {
HXLINE( 691)					xMax = px3;
            				}
HXDLIN( 691)				if ((py3 < yMin)) {
HXLINE( 691)					yMin = py3;
            				}
HXDLIN( 691)				if ((py3 > yMax)) {
HXLINE( 691)					yMax = py3;
            				}
            			}
HXLINE( 692)			bool _hx_tmp;
HXDLIN( 692)			bool _hx_tmp1;
HXDLIN( 692)			bool _hx_tmp2;
HXDLIN( 692)			if (!(((absX + xMax) < -1))) {
HXLINE( 692)				_hx_tmp2 = ((absY + yMax) < -1);
            			}
            			else {
HXLINE( 692)				_hx_tmp2 = true;
            			}
HXDLIN( 692)			if (!(_hx_tmp2)) {
HXLINE( 692)				_hx_tmp1 = ((absX + xMin) > 1);
            			}
            			else {
HXLINE( 692)				_hx_tmp1 = true;
            			}
HXDLIN( 692)			if (!(_hx_tmp1)) {
HXLINE( 692)				_hx_tmp = ((absY + yMin) > 1);
            			}
            			else {
HXLINE( 692)				_hx_tmp = true;
            			}
HXDLIN( 692)			if (_hx_tmp) {
HXLINE( 693)				return false;
            			}
            		}
HXLINE( 696)		if (!(this->beginDraw(obj,tile->innerTex,true,true))) {
HXLINE( 696)			return false;
            		}
HXLINE( 698)		if (::hx::IsInstanceEq( this->inFilter,obj )) {
HXLINE( 698)			 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 698)			_this->x = obj->color->x;
HXDLIN( 698)			_this->y = obj->color->y;
HXDLIN( 698)			_this->z = obj->color->z;
HXDLIN( 698)			_this->w = obj->color->w;
            		}
            		else {
HXLINE( 698)			if (::hx::IsNotNull( this->inFilterBlend )) {
HXLINE( 698)				 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 698)				_this->x = this->globalAlpha;
HXDLIN( 698)				_this->y = this->globalAlpha;
HXDLIN( 698)				_this->z = this->globalAlpha;
HXDLIN( 698)				_this->w = this->globalAlpha;
            			}
            			else {
HXLINE( 698)				 ::h3d::Vector _this = this->baseShader->color__;
HXDLIN( 698)				_this->x = obj->color->x;
HXDLIN( 698)				_this->y = obj->color->y;
HXDLIN( 698)				_this->z = obj->color->z;
HXDLIN( 698)				_this->w = (obj->color->w * this->globalAlpha);
            			}
            		}
HXLINE( 699)		{
HXLINE( 699)			 ::h3d::Vector _this = this->baseShader->absoluteMatrixA__;
HXDLIN( 699)			_this->x = (tile->width * obj->matA);
HXDLIN( 699)			_this->y = (tile->height * obj->matC);
HXDLIN( 699)			_this->z = ((obj->absX + (tile->dx * obj->matA)) + (tile->dy * obj->matC));
HXDLIN( 699)			_this->w = ((Float)1.);
            		}
HXLINE( 700)		{
HXLINE( 700)			 ::h3d::Vector _this1 = this->baseShader->absoluteMatrixB__;
HXDLIN( 700)			_this1->x = (tile->width * obj->matB);
HXDLIN( 700)			_this1->y = (tile->height * obj->matD);
HXDLIN( 700)			_this1->z = ((obj->absY + (tile->dx * obj->matB)) + (tile->dy * obj->matD));
HXDLIN( 700)			_this1->w = ((Float)1.);
            		}
HXLINE( 701)		{
HXLINE( 701)			 ::h3d::Vector _this2 = this->baseShader->uvPos__;
HXDLIN( 701)			_this2->x = tile->u;
HXDLIN( 701)			_this2->y = tile->v;
HXDLIN( 701)			_this2->z = (tile->u2 - tile->u);
HXDLIN( 701)			_this2->w = (tile->v2 - tile->v);
            		}
HXLINE( 702)		this->beforeDraw();
HXLINE( 703)		bool _hx_tmp1;
HXDLIN( 703)		if (::hx::IsNotNull( this->fixedBuffer )) {
HXLINE( 703)			 ::h3d::Buffer _this = this->fixedBuffer;
HXDLIN( 703)			if (::hx::IsNotNull( _this->buffer )) {
HXLINE( 703)				_hx_tmp1 = ::hx::IsNull( _this->buffer->vbuf );
            			}
            			else {
HXLINE( 703)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 703)			_hx_tmp1 = true;
            		}
HXDLIN( 703)		if (_hx_tmp1) {
HXLINE( 704)			this->fixedBuffer =  ::h3d::Buffer_obj::__alloc( HX_CTX ,4,8,::Array_obj< ::Dynamic>::__new(2)->init(0,::h3d::BufferFlag_obj::Quads_dyn())->init(1,::h3d::BufferFlag_obj::RawFormat_dyn()));
HXLINE( 705)			int length = 0;
HXDLIN( 705)			::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN( 705)			if ((length > 0)) {
HXLINE( 705)				if ((length > this1->length)) {
HXLINE( 705)					this1[(length - 1)] = ((Float)0.);
            				}
            			}
HXDLIN( 705)			::Array< Float > k = this1;
HXLINE( 706)			{
HXLINE( 706)				{
HXLINE( 706)					int v = 0;
HXLINE( 707)					k->push(v);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v1 = 0;
HXLINE( 707)					k->push(v1);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v2 = 0;
HXLINE( 707)					k->push(v2);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v3 = 0;
HXLINE( 707)					k->push(v3);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v4 = 1;
HXLINE( 707)					k->push(v4);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v5 = 1;
HXLINE( 707)					k->push(v5);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v6 = 1;
HXLINE( 707)					k->push(v6);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v7 = 1;
HXLINE( 707)					k->push(v7);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v8 = 0;
HXLINE( 707)					k->push(v8);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v9 = 1;
HXLINE( 707)					k->push(v9);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v10 = 0;
HXLINE( 707)					k->push(v10);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v11 = 1;
HXLINE( 707)					k->push(v11);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v12 = 1;
HXLINE( 707)					k->push(v12);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v13 = 1;
HXLINE( 707)					k->push(v13);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v14 = 1;
HXLINE( 707)					k->push(v14);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v15 = 1;
HXLINE( 707)					k->push(v15);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v16 = 1;
HXLINE( 707)					k->push(v16);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v17 = 0;
HXLINE( 707)					k->push(v17);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v18 = 1;
HXLINE( 707)					k->push(v18);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v19 = 0;
HXLINE( 707)					k->push(v19);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v20 = 1;
HXLINE( 707)					k->push(v20);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v21 = 1;
HXLINE( 707)					k->push(v21);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v22 = 1;
HXLINE( 707)					k->push(v22);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v23 = 1;
HXLINE( 707)					k->push(v23);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v24 = 1;
HXLINE( 707)					k->push(v24);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v25 = 1;
HXLINE( 707)					k->push(v25);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v26 = 1;
HXLINE( 707)					k->push(v26);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v27 = 1;
HXLINE( 707)					k->push(v27);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v28 = 1;
HXLINE( 707)					k->push(v28);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v29 = 1;
HXLINE( 707)					k->push(v29);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v30 = 1;
HXLINE( 707)					k->push(v30);
            				}
HXLINE( 706)				{
HXLINE( 706)					int v31 = 1;
HXLINE( 707)					k->push(v31);
            				}
            			}
HXLINE( 708)			this->fixedBuffer->uploadVector(k,0,4,null());
            		}
HXLINE( 710)		{
HXLINE( 710)			 ::h3d::Engine _this3 = this->engine;
HXDLIN( 710)			_this3->renderBuffer(this->fixedBuffer,_this3->mem->quadIndexes,2,0,-1);
            		}
HXLINE( 711)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,drawTile,return )

bool RenderContext_obj::beginDraw( ::h2d::Drawable obj, ::h3d::mat::Texture texture,bool isRelative,::hx::Null< bool >  __o_hasUVPos){
            		bool hasUVPos = __o_hasUVPos.Default(false);
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_715_beginDraw)
HXLINE( 716)		bool _hx_tmp;
HXDLIN( 716)		if (::hx::IsNotNull( this->onBeginDraw )) {
HXLINE( 716)			_hx_tmp = !(( (bool)(this->onBeginDraw(obj)) ));
            		}
            		else {
HXLINE( 716)			_hx_tmp = false;
            		}
HXDLIN( 716)		if (_hx_tmp) {
HXLINE( 717)			return false;
            		}
HXLINE( 719)		int stride = 8;
HXLINE( 722)		bool shaderChanged = false;
HXDLIN( 722)		bool paramsChanged = false;
HXLINE( 723)		 ::hxsl::ShaderList objShaders = obj->shaders;
HXLINE( 724)		 ::hxsl::ShaderList curShaders = this->currentShaders->next;
HXLINE( 725)		while(true){
HXLINE( 725)			bool _hx_tmp;
HXDLIN( 725)			if (::hx::IsNotNull( objShaders )) {
HXLINE( 725)				_hx_tmp = ::hx::IsNotNull( curShaders );
            			}
            			else {
HXLINE( 725)				_hx_tmp = false;
            			}
HXDLIN( 725)			if (!(_hx_tmp)) {
HXLINE( 725)				goto _hx_goto_33;
            			}
HXLINE( 726)			 ::hxsl::Shader s = objShaders->s;
HXLINE( 727)			 ::hxsl::Shader t = curShaders->s;
HXLINE( 728)			objShaders = objShaders->next;
HXLINE( 729)			curShaders = curShaders->next;
HXLINE( 730)			 ::hxsl::ShaderInstance prevInst = t->instance;
HXLINE( 731)			if (::hx::IsInstanceNotEq( s,t )) {
HXLINE( 732)				paramsChanged = true;
            			}
HXLINE( 733)			s->updateConstants(this->manager->globals);
HXLINE( 734)			if (::hx::IsInstanceNotEq( s->instance,prevInst )) {
HXLINE( 735)				shaderChanged = true;
            			}
            		}
            		_hx_goto_33:;
HXLINE( 737)		bool _hx_tmp1;
HXDLIN( 737)		bool _hx_tmp2;
HXDLIN( 737)		bool _hx_tmp3;
HXDLIN( 737)		bool _hx_tmp4;
HXDLIN( 737)		if (::hx::IsNull( objShaders )) {
HXLINE( 737)			_hx_tmp4 = ::hx::IsNotNull( curShaders );
            		}
            		else {
HXLINE( 737)			_hx_tmp4 = true;
            		}
HXDLIN( 737)		if (!(_hx_tmp4)) {
HXLINE( 737)			_hx_tmp3 = (this->baseShader->isRelative__ != isRelative);
            		}
            		else {
HXLINE( 737)			_hx_tmp3 = true;
            		}
HXDLIN( 737)		if (!(_hx_tmp3)) {
HXLINE( 737)			_hx_tmp2 = (this->baseShader->hasUVPos__ != hasUVPos);
            		}
            		else {
HXLINE( 737)			_hx_tmp2 = true;
            		}
HXDLIN( 737)		if (!(_hx_tmp2)) {
HXLINE( 737)			_hx_tmp1 = (this->baseShader->killAlpha__ != this->killAlpha);
            		}
            		else {
HXLINE( 737)			_hx_tmp1 = true;
            		}
HXDLIN( 737)		if (_hx_tmp1) {
HXLINE( 738)			shaderChanged = true;
            		}
HXLINE( 739)		if (shaderChanged) {
HXLINE( 741)			{
HXLINE( 741)				 ::h3d::shader::Base2d _this = this->baseShader;
HXDLIN( 741)				_this->constModified = true;
HXDLIN( 741)				_this->hasUVPos__ = hasUVPos;
            			}
HXLINE( 742)			{
HXLINE( 742)				 ::h3d::shader::Base2d _this1 = this->baseShader;
HXDLIN( 742)				_this1->constModified = true;
HXDLIN( 742)				_this1->isRelative__ = isRelative;
            			}
HXLINE( 743)			{
HXLINE( 743)				 ::h3d::shader::Base2d _this2 = this->baseShader;
HXDLIN( 743)				_this2->constModified = true;
HXDLIN( 743)				_this2->killAlpha__ = this->killAlpha;
            			}
HXLINE( 744)			this->baseShader->updateConstants(this->manager->globals);
HXLINE( 745)			this->baseShaderList->next = obj->shaders;
HXLINE( 746)			this->initShaders(this->baseShaderList);
            		}
            		else {
HXLINE( 747)			if (paramsChanged) {
HXLINE( 749)				if (::hx::IsInstanceNotEq( this->currentShaders,this->baseShaderList )) {
HXLINE( 749)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("!",21,00,00,00)));
            				}
HXLINE( 751)				this->currentShaders->next = obj->shaders;
            			}
            		}
HXLINE( 754)		this->texture = texture;
HXLINE( 755)		this->stride = stride;
HXLINE( 756)		this->currentObj = obj;
HXLINE( 758)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(RenderContext_obj,beginDraw,return )

bool RenderContext_obj::BUFFERING;


::hx::ObjectPtr< RenderContext_obj > RenderContext_obj::__new( ::h2d::Scene scene) {
	::hx::ObjectPtr< RenderContext_obj > __this = new RenderContext_obj();
	__this->__construct(scene);
	return __this;
}

::hx::ObjectPtr< RenderContext_obj > RenderContext_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Scene scene) {
	RenderContext_obj *__this = (RenderContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderContext_obj), true, "h2d.RenderContext"));
	*(void **)__this = RenderContext_obj::_hx_vtable;
	__this->__construct(scene);
	return __this;
}

RenderContext_obj::RenderContext_obj()
{
}

void RenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderContext);
	HX_MARK_MEMBER_NAME(globalAlpha,"globalAlpha");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(bufPos,"bufPos");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(defaultSmooth,"defaultSmooth");
	HX_MARK_MEMBER_NAME(killAlpha,"killAlpha");
	HX_MARK_MEMBER_NAME(front2back,"front2back");
	HX_MARK_MEMBER_NAME(onBeginDraw,"onBeginDraw");
	HX_MARK_MEMBER_NAME(onEnterFilter,"onEnterFilter");
	HX_MARK_MEMBER_NAME(onLeaveFilter,"onLeaveFilter");
	HX_MARK_MEMBER_NAME(tmpBounds,"tmpBounds");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(baseShader,"baseShader");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(compiledShader,"compiledShader");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(fixedBuffer,"fixedBuffer");
	HX_MARK_MEMBER_NAME(pass,"pass");
	HX_MARK_MEMBER_NAME(currentShaders,"currentShaders");
	HX_MARK_MEMBER_NAME(baseShaderList,"baseShaderList");
	HX_MARK_MEMBER_NAME(currentObj,"currentObj");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(targetsStack,"targetsStack");
	HX_MARK_MEMBER_NAME(targetsStackIndex,"targetsStackIndex");
	HX_MARK_MEMBER_NAME(cameraStack,"cameraStack");
	HX_MARK_MEMBER_NAME(cameraStackIndex,"cameraStackIndex");
	HX_MARK_MEMBER_NAME(curTarget,"curTarget");
	HX_MARK_MEMBER_NAME(renderZoneStack,"renderZoneStack");
	HX_MARK_MEMBER_NAME(renderZoneIndex,"renderZoneIndex");
	HX_MARK_MEMBER_NAME(hasUVPos,"hasUVPos");
	HX_MARK_MEMBER_NAME(filterStack,"filterStack");
	HX_MARK_MEMBER_NAME(inFilter,"inFilter");
	HX_MARK_MEMBER_NAME(inFilterBlend,"inFilterBlend");
	HX_MARK_MEMBER_NAME(viewA,"viewA");
	HX_MARK_MEMBER_NAME(viewB,"viewB");
	HX_MARK_MEMBER_NAME(viewC,"viewC");
	HX_MARK_MEMBER_NAME(viewD,"viewD");
	HX_MARK_MEMBER_NAME(viewX,"viewX");
	HX_MARK_MEMBER_NAME(viewY,"viewY");
	HX_MARK_MEMBER_NAME(hasRenderZone,"hasRenderZone");
	HX_MARK_MEMBER_NAME(renderX,"renderX");
	HX_MARK_MEMBER_NAME(renderY,"renderY");
	HX_MARK_MEMBER_NAME(renderW,"renderW");
	HX_MARK_MEMBER_NAME(renderH,"renderH");
	HX_MARK_MEMBER_NAME(currentBlend,"currentBlend");
	HX_MARK_MEMBER_NAME(baseFlipY,"baseFlipY");
	HX_MARK_MEMBER_NAME(targetFlipY,"targetFlipY");
	 ::h3d::impl::RenderContext_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(globalAlpha,"globalAlpha");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(bufPos,"bufPos");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(defaultSmooth,"defaultSmooth");
	HX_VISIT_MEMBER_NAME(killAlpha,"killAlpha");
	HX_VISIT_MEMBER_NAME(front2back,"front2back");
	HX_VISIT_MEMBER_NAME(onBeginDraw,"onBeginDraw");
	HX_VISIT_MEMBER_NAME(onEnterFilter,"onEnterFilter");
	HX_VISIT_MEMBER_NAME(onLeaveFilter,"onLeaveFilter");
	HX_VISIT_MEMBER_NAME(tmpBounds,"tmpBounds");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(baseShader,"baseShader");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(compiledShader,"compiledShader");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(fixedBuffer,"fixedBuffer");
	HX_VISIT_MEMBER_NAME(pass,"pass");
	HX_VISIT_MEMBER_NAME(currentShaders,"currentShaders");
	HX_VISIT_MEMBER_NAME(baseShaderList,"baseShaderList");
	HX_VISIT_MEMBER_NAME(currentObj,"currentObj");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(targetsStack,"targetsStack");
	HX_VISIT_MEMBER_NAME(targetsStackIndex,"targetsStackIndex");
	HX_VISIT_MEMBER_NAME(cameraStack,"cameraStack");
	HX_VISIT_MEMBER_NAME(cameraStackIndex,"cameraStackIndex");
	HX_VISIT_MEMBER_NAME(curTarget,"curTarget");
	HX_VISIT_MEMBER_NAME(renderZoneStack,"renderZoneStack");
	HX_VISIT_MEMBER_NAME(renderZoneIndex,"renderZoneIndex");
	HX_VISIT_MEMBER_NAME(hasUVPos,"hasUVPos");
	HX_VISIT_MEMBER_NAME(filterStack,"filterStack");
	HX_VISIT_MEMBER_NAME(inFilter,"inFilter");
	HX_VISIT_MEMBER_NAME(inFilterBlend,"inFilterBlend");
	HX_VISIT_MEMBER_NAME(viewA,"viewA");
	HX_VISIT_MEMBER_NAME(viewB,"viewB");
	HX_VISIT_MEMBER_NAME(viewC,"viewC");
	HX_VISIT_MEMBER_NAME(viewD,"viewD");
	HX_VISIT_MEMBER_NAME(viewX,"viewX");
	HX_VISIT_MEMBER_NAME(viewY,"viewY");
	HX_VISIT_MEMBER_NAME(hasRenderZone,"hasRenderZone");
	HX_VISIT_MEMBER_NAME(renderX,"renderX");
	HX_VISIT_MEMBER_NAME(renderY,"renderY");
	HX_VISIT_MEMBER_NAME(renderW,"renderW");
	HX_VISIT_MEMBER_NAME(renderH,"renderH");
	HX_VISIT_MEMBER_NAME(currentBlend,"currentBlend");
	HX_VISIT_MEMBER_NAME(baseFlipY,"baseFlipY");
	HX_VISIT_MEMBER_NAME(targetFlipY,"targetFlipY");
	 ::h3d::impl::RenderContext_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RenderContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pass") ) { return ::hx::Val( pass ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return ::hx::Val( scene ); }
		if (HX_FIELD_EQ(inName,"viewA") ) { return ::hx::Val( viewA ); }
		if (HX_FIELD_EQ(inName,"viewB") ) { return ::hx::Val( viewB ); }
		if (HX_FIELD_EQ(inName,"viewC") ) { return ::hx::Val( viewC ); }
		if (HX_FIELD_EQ(inName,"viewD") ) { return ::hx::Val( viewD ); }
		if (HX_FIELD_EQ(inName,"viewX") ) { return ::hx::Val( viewX ); }
		if (HX_FIELD_EQ(inName,"viewY") ) { return ::hx::Val( viewY ); }
		if (HX_FIELD_EQ(inName,"begin") ) { return ::hx::Val( begin_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRZ") ) { return ::hx::Val( setRZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"bufPos") ) { return ::hx::Val( bufPos ); }
		if (HX_FIELD_EQ(inName,"stride") ) { return ::hx::Val( stride ); }
		if (HX_FIELD_EQ(inName,"_flush") ) { return ::hx::Val( _flush_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		if (HX_FIELD_EQ(inName,"manager") ) { return ::hx::Val( manager ); }
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"renderX") ) { return ::hx::Val( renderX ); }
		if (HX_FIELD_EQ(inName,"renderY") ) { return ::hx::Val( renderY ); }
		if (HX_FIELD_EQ(inName,"renderW") ) { return ::hx::Val( renderW ); }
		if (HX_FIELD_EQ(inName,"renderH") ) { return ::hx::Val( renderH ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearRZ") ) { return ::hx::Val( clearRZ_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasUVPos") ) { return ::hx::Val( hasUVPos ); }
		if (HX_FIELD_EQ(inName,"inFilter") ) { return ::hx::Val( inFilter ); }
		if (HX_FIELD_EQ(inName,"drawTile") ) { return ::hx::Val( drawTile_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"killAlpha") ) { return ::hx::Val( killAlpha ); }
		if (HX_FIELD_EQ(inName,"tmpBounds") ) { return ::hx::Val( tmpBounds ); }
		if (HX_FIELD_EQ(inName,"curTarget") ) { return ::hx::Val( curTarget ); }
		if (HX_FIELD_EQ(inName,"baseFlipY") ) { return ::hx::Val( baseFlipY ); }
		if (HX_FIELD_EQ(inName,"popCamera") ) { return ::hx::Val( popCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"popFilter") ) { return ::hx::Val( popFilter_dyn() ); }
		if (HX_FIELD_EQ(inName,"popTarget") ) { return ::hx::Val( popTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawLayer") ) { return ::hx::Val( drawLayer_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawScene") ) { return ::hx::Val( drawScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginDraw") ) { return ::hx::Val( beginDraw_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"front2back") ) { return ::hx::Val( front2back ); }
		if (HX_FIELD_EQ(inName,"baseShader") ) { return ::hx::Val( baseShader ); }
		if (HX_FIELD_EQ(inName,"currentObj") ) { return ::hx::Val( currentObj ); }
		if (HX_FIELD_EQ(inName,"pushCamera") ) { return ::hx::Val( pushCamera_dyn() ); }
		if (HX_FIELD_EQ(inName,"pushFilter") ) { return ::hx::Val( pushFilter_dyn() ); }
		if (HX_FIELD_EQ(inName,"pushTarget") ) { return ::hx::Val( pushTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"beforeDraw") ) { return ::hx::Val( beforeDraw_dyn() ); }
		if (HX_FIELD_EQ(inName,"setupColor") ) { return ::hx::Val( setupColor_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"globalAlpha") ) { return ::hx::Val( globalAlpha ); }
		if (HX_FIELD_EQ(inName,"onBeginDraw") ) { return ::hx::Val( onBeginDraw ); }
		if (HX_FIELD_EQ(inName,"fixedBuffer") ) { return ::hx::Val( fixedBuffer ); }
		if (HX_FIELD_EQ(inName,"cameraStack") ) { return ::hx::Val( cameraStack ); }
		if (HX_FIELD_EQ(inName,"filterStack") ) { return ::hx::Val( filterStack ); }
		if (HX_FIELD_EQ(inName,"targetFlipY") ) { return ::hx::Val( targetFlipY ); }
		if (HX_FIELD_EQ(inName,"allocTarget") ) { return ::hx::Val( allocTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"initShaders") ) { return ::hx::Val( initShaders_dyn() ); }
		if (HX_FIELD_EQ(inName,"pushTargets") ) { return ::hx::Val( pushTargets_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapTexture") ) { return ::hx::Val( swapTexture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetsStack") ) { return ::hx::Val( targetsStack ); }
		if (HX_FIELD_EQ(inName,"currentBlend") ) { return ::hx::Val( currentBlend ); }
		if (HX_FIELD_EQ(inName,"hasBuffering") ) { return ::hx::Val( hasBuffering_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultSmooth") ) { return ::hx::Val( defaultSmooth ); }
		if (HX_FIELD_EQ(inName,"onEnterFilter") ) { return ::hx::Val( onEnterFilter ); }
		if (HX_FIELD_EQ(inName,"onLeaveFilter") ) { return ::hx::Val( onLeaveFilter ); }
		if (HX_FIELD_EQ(inName,"inFilterBlend") ) { return ::hx::Val( inFilterBlend ); }
		if (HX_FIELD_EQ(inName,"hasRenderZone") ) { return ::hx::Val( hasRenderZone ); }
		if (HX_FIELD_EQ(inName,"popRenderZone") ) { return ::hx::Val( popRenderZone_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRenderZone") ) { return ::hx::Val( setRenderZone_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compiledShader") ) { return ::hx::Val( compiledShader ); }
		if (HX_FIELD_EQ(inName,"currentShaders") ) { return ::hx::Val( currentShaders ); }
		if (HX_FIELD_EQ(inName,"baseShaderList") ) { return ::hx::Val( baseShaderList ); }
		if (HX_FIELD_EQ(inName,"pushRenderZone") ) { return ::hx::Val( pushRenderZone_dyn() ); }
		if (HX_FIELD_EQ(inName,"clipRenderZone") ) { return ::hx::Val( clipRenderZone_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginDrawBatch") ) { return ::hx::Val( beginDrawBatch_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderZoneStack") ) { return ::hx::Val( renderZoneStack ); }
		if (HX_FIELD_EQ(inName,"renderZoneIndex") ) { return ::hx::Val( renderZoneIndex ); }
		if (HX_FIELD_EQ(inName,"clearRenderZone") ) { return ::hx::Val( clearRenderZone_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginDrawObject") ) { return ::hx::Val( beginDrawObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cameraStackIndex") ) { return ::hx::Val( cameraStackIndex ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"targetsStackIndex") ) { return ::hx::Val( targetsStackIndex ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"beginDrawBatchState") ) { return ::hx::Val( beginDrawBatchState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RenderContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pass") ) { pass=inValue.Cast<  ::h3d::mat::Pass >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast<  ::h2d::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewA") ) { viewA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewB") ) { viewB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewC") ) { viewC=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewD") ) { viewD=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewX") ) { viewX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewY") ) { viewY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufPos") ) { bufPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::h3d::pass::ShaderManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast<  ::h3d::shader::Buffers >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderX") ) { renderX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderY") ) { renderY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderW") ) { renderW=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderH") ) { renderH=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasUVPos") ) { hasUVPos=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inFilter") ) { inFilter=inValue.Cast<  ::h2d::Object >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"killAlpha") ) { killAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tmpBounds") ) { tmpBounds=inValue.Cast<  ::h2d::col::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curTarget") ) { curTarget=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"baseFlipY") ) { baseFlipY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"front2back") ) { front2back=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"baseShader") ) { baseShader=inValue.Cast<  ::h3d::shader::Base2d >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentObj") ) { currentObj=inValue.Cast<  ::h2d::Drawable >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"globalAlpha") ) { globalAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onBeginDraw") ) { onBeginDraw=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixedBuffer") ) { fixedBuffer=inValue.Cast<  ::h3d::Buffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraStack") ) { cameraStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterStack") ) { filterStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetFlipY") ) { targetFlipY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetsStack") ) { targetsStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentBlend") ) { currentBlend=inValue.Cast<  ::h2d::BlendMode >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultSmooth") ) { defaultSmooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onEnterFilter") ) { onEnterFilter=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onLeaveFilter") ) { onLeaveFilter=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inFilterBlend") ) { inFilterBlend=inValue.Cast<  ::h2d::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasRenderZone") ) { hasRenderZone=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compiledShader") ) { compiledShader=inValue.Cast<  ::hxsl::RuntimeShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentShaders") ) { currentShaders=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"baseShaderList") ) { baseShaderList=inValue.Cast<  ::hxsl::ShaderList >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderZoneStack") ) { renderZoneStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderZoneIndex") ) { renderZoneIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cameraStackIndex") ) { cameraStackIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"targetsStackIndex") ) { targetsStackIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("globalAlpha",fb,fe,d4,f9));
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("bufPos",21,14,84,d0));
	outFields->push(HX_("scene",4c,d9,d1,78));
	outFields->push(HX_("defaultSmooth",cf,db,e3,01));
	outFields->push(HX_("killAlpha",e0,da,f4,0e));
	outFields->push(HX_("front2back",10,be,c4,a4));
	outFields->push(HX_("tmpBounds",ac,1a,f4,bb));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("baseShader",16,fe,50,f5));
	outFields->push(HX_("manager",6d,92,c1,13));
	outFields->push(HX_("compiledShader",96,55,b0,e4));
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("fixedBuffer",94,b9,c5,ec));
	outFields->push(HX_("pass",d1,e4,51,4a));
	outFields->push(HX_("currentShaders",75,f6,1a,6d));
	outFields->push(HX_("baseShaderList",94,09,05,82));
	outFields->push(HX_("currentObj",3e,55,2f,c7));
	outFields->push(HX_("stride",19,20,30,11));
	outFields->push(HX_("targetsStack",e6,1b,33,9a));
	outFields->push(HX_("targetsStackIndex",4c,0d,02,77));
	outFields->push(HX_("cameraStack",63,5a,51,78));
	outFields->push(HX_("cameraStackIndex",af,29,1f,c7));
	outFields->push(HX_("curTarget",f1,0c,7a,f7));
	outFields->push(HX_("renderZoneStack",46,2f,11,94));
	outFields->push(HX_("renderZoneIndex",10,63,1a,ce));
	outFields->push(HX_("hasUVPos",19,98,4f,23));
	outFields->push(HX_("filterStack",70,bc,bd,33));
	outFields->push(HX_("inFilter",7d,69,b3,0d));
	outFields->push(HX_("inFilterBlend",94,69,0e,25));
	outFields->push(HX_("viewA",3c,e6,fc,36));
	outFields->push(HX_("viewB",3d,e6,fc,36));
	outFields->push(HX_("viewC",3e,e6,fc,36));
	outFields->push(HX_("viewD",3f,e6,fc,36));
	outFields->push(HX_("viewX",53,e6,fc,36));
	outFields->push(HX_("viewY",54,e6,fc,36));
	outFields->push(HX_("hasRenderZone",9c,54,59,08));
	outFields->push(HX_("renderX",42,80,14,7f));
	outFields->push(HX_("renderY",43,80,14,7f));
	outFields->push(HX_("renderW",41,80,14,7f));
	outFields->push(HX_("renderH",32,80,14,7f));
	outFields->push(HX_("currentBlend",58,cd,00,fc));
	outFields->push(HX_("baseFlipY",3b,ef,76,12));
	outFields->push(HX_("targetFlipY",fb,1b,ea,92));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RenderContext_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,globalAlpha),HX_("globalAlpha",fb,fe,d4,f9)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(RenderContext_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(RenderContext_obj,bufPos),HX_("bufPos",21,14,84,d0)},
	{::hx::fsObject /*  ::h2d::Scene */ ,(int)offsetof(RenderContext_obj,scene),HX_("scene",4c,d9,d1,78)},
	{::hx::fsBool,(int)offsetof(RenderContext_obj,defaultSmooth),HX_("defaultSmooth",cf,db,e3,01)},
	{::hx::fsBool,(int)offsetof(RenderContext_obj,killAlpha),HX_("killAlpha",e0,da,f4,0e)},
	{::hx::fsBool,(int)offsetof(RenderContext_obj,front2back),HX_("front2back",10,be,c4,a4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(RenderContext_obj,onBeginDraw),HX_("onBeginDraw",ae,ed,8c,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(RenderContext_obj,onEnterFilter),HX_("onEnterFilter",11,00,4d,3f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(RenderContext_obj,onLeaveFilter),HX_("onLeaveFilter",30,79,9b,0a)},
	{::hx::fsObject /*  ::h2d::col::Bounds */ ,(int)offsetof(RenderContext_obj,tmpBounds),HX_("tmpBounds",ac,1a,f4,bb)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(RenderContext_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsObject /*  ::h3d::shader::Base2d */ ,(int)offsetof(RenderContext_obj,baseShader),HX_("baseShader",16,fe,50,f5)},
	{::hx::fsObject /*  ::h3d::pass::ShaderManager */ ,(int)offsetof(RenderContext_obj,manager),HX_("manager",6d,92,c1,13)},
	{::hx::fsObject /*  ::hxsl::RuntimeShader */ ,(int)offsetof(RenderContext_obj,compiledShader),HX_("compiledShader",96,55,b0,e4)},
	{::hx::fsObject /*  ::h3d::shader::Buffers */ ,(int)offsetof(RenderContext_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{::hx::fsObject /*  ::h3d::Buffer */ ,(int)offsetof(RenderContext_obj,fixedBuffer),HX_("fixedBuffer",94,b9,c5,ec)},
	{::hx::fsObject /*  ::h3d::mat::Pass */ ,(int)offsetof(RenderContext_obj,pass),HX_("pass",d1,e4,51,4a)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(RenderContext_obj,currentShaders),HX_("currentShaders",75,f6,1a,6d)},
	{::hx::fsObject /*  ::hxsl::ShaderList */ ,(int)offsetof(RenderContext_obj,baseShaderList),HX_("baseShaderList",94,09,05,82)},
	{::hx::fsObject /*  ::h2d::Drawable */ ,(int)offsetof(RenderContext_obj,currentObj),HX_("currentObj",3e,55,2f,c7)},
	{::hx::fsInt,(int)offsetof(RenderContext_obj,stride),HX_("stride",19,20,30,11)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RenderContext_obj,targetsStack),HX_("targetsStack",e6,1b,33,9a)},
	{::hx::fsInt,(int)offsetof(RenderContext_obj,targetsStackIndex),HX_("targetsStackIndex",4c,0d,02,77)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RenderContext_obj,cameraStack),HX_("cameraStack",63,5a,51,78)},
	{::hx::fsInt,(int)offsetof(RenderContext_obj,cameraStackIndex),HX_("cameraStackIndex",af,29,1f,c7)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(RenderContext_obj,curTarget),HX_("curTarget",f1,0c,7a,f7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RenderContext_obj,renderZoneStack),HX_("renderZoneStack",46,2f,11,94)},
	{::hx::fsInt,(int)offsetof(RenderContext_obj,renderZoneIndex),HX_("renderZoneIndex",10,63,1a,ce)},
	{::hx::fsBool,(int)offsetof(RenderContext_obj,hasUVPos),HX_("hasUVPos",19,98,4f,23)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RenderContext_obj,filterStack),HX_("filterStack",70,bc,bd,33)},
	{::hx::fsObject /*  ::h2d::Object */ ,(int)offsetof(RenderContext_obj,inFilter),HX_("inFilter",7d,69,b3,0d)},
	{::hx::fsObject /*  ::h2d::BlendMode */ ,(int)offsetof(RenderContext_obj,inFilterBlend),HX_("inFilterBlend",94,69,0e,25)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,viewA),HX_("viewA",3c,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,viewB),HX_("viewB",3d,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,viewC),HX_("viewC",3e,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,viewD),HX_("viewD",3f,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,viewX),HX_("viewX",53,e6,fc,36)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,viewY),HX_("viewY",54,e6,fc,36)},
	{::hx::fsBool,(int)offsetof(RenderContext_obj,hasRenderZone),HX_("hasRenderZone",9c,54,59,08)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,renderX),HX_("renderX",42,80,14,7f)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,renderY),HX_("renderY",43,80,14,7f)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,renderW),HX_("renderW",41,80,14,7f)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,renderH),HX_("renderH",32,80,14,7f)},
	{::hx::fsObject /*  ::h2d::BlendMode */ ,(int)offsetof(RenderContext_obj,currentBlend),HX_("currentBlend",58,cd,00,fc)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,baseFlipY),HX_("baseFlipY",3b,ef,76,12)},
	{::hx::fsFloat,(int)offsetof(RenderContext_obj,targetFlipY),HX_("targetFlipY",fb,1b,ea,92)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo RenderContext_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &RenderContext_obj::BUFFERING,HX_("BUFFERING",c2,df,e7,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String RenderContext_obj_sMemberFields[] = {
	HX_("globalAlpha",fb,fe,d4,f9),
	HX_("buffer",00,bd,94,d0),
	HX_("bufPos",21,14,84,d0),
	HX_("scene",4c,d9,d1,78),
	HX_("defaultSmooth",cf,db,e3,01),
	HX_("killAlpha",e0,da,f4,0e),
	HX_("front2back",10,be,c4,a4),
	HX_("onBeginDraw",ae,ed,8c,ad),
	HX_("onEnterFilter",11,00,4d,3f),
	HX_("onLeaveFilter",30,79,9b,0a),
	HX_("tmpBounds",ac,1a,f4,bb),
	HX_("texture",db,c8,e0,9e),
	HX_("baseShader",16,fe,50,f5),
	HX_("manager",6d,92,c1,13),
	HX_("compiledShader",96,55,b0,e4),
	HX_("buffers",73,a3,90,b1),
	HX_("fixedBuffer",94,b9,c5,ec),
	HX_("pass",d1,e4,51,4a),
	HX_("currentShaders",75,f6,1a,6d),
	HX_("baseShaderList",94,09,05,82),
	HX_("currentObj",3e,55,2f,c7),
	HX_("stride",19,20,30,11),
	HX_("targetsStack",e6,1b,33,9a),
	HX_("targetsStackIndex",4c,0d,02,77),
	HX_("cameraStack",63,5a,51,78),
	HX_("cameraStackIndex",af,29,1f,c7),
	HX_("curTarget",f1,0c,7a,f7),
	HX_("renderZoneStack",46,2f,11,94),
	HX_("renderZoneIndex",10,63,1a,ce),
	HX_("hasUVPos",19,98,4f,23),
	HX_("filterStack",70,bc,bd,33),
	HX_("inFilter",7d,69,b3,0d),
	HX_("inFilterBlend",94,69,0e,25),
	HX_("viewA",3c,e6,fc,36),
	HX_("viewB",3d,e6,fc,36),
	HX_("viewC",3e,e6,fc,36),
	HX_("viewD",3f,e6,fc,36),
	HX_("viewX",53,e6,fc,36),
	HX_("viewY",54,e6,fc,36),
	HX_("hasRenderZone",9c,54,59,08),
	HX_("renderX",42,80,14,7f),
	HX_("renderY",43,80,14,7f),
	HX_("renderW",41,80,14,7f),
	HX_("renderH",32,80,14,7f),
	HX_("currentBlend",58,cd,00,fc),
	HX_("baseFlipY",3b,ef,76,12),
	HX_("targetFlipY",fb,1b,ea,92),
	HX_("dispose",9f,80,4c,bb),
	HX_("hasBuffering",28,55,e1,3e),
	HX_("begin",29,ea,55,b0),
	HX_("allocTarget",a6,51,b7,8e),
	HX_("clear",8d,71,5b,48),
	HX_("initShaders",7e,f0,f0,17),
	HX_("end",db,03,4d,00),
	HX_("pushCamera",1f,ac,6b,0b),
	HX_("popCamera",16,1b,02,34),
	HX_("pushFilter",32,85,14,d9),
	HX_("popFilter",29,f4,aa,01),
	HX_("pushTarget",cb,58,cc,da),
	HX_("pushTargets",48,59,01,98),
	HX_("popTarget",c2,c7,62,03),
	HX_("pushRenderZone",1c,47,db,d4),
	HX_("popRenderZone",93,fd,39,4c),
	HX_("clipRenderZone",92,b3,c2,f3),
	HX_("setRZ",ea,8f,2f,7a),
	HX_("clearRZ",95,f6,44,ab),
	HX_("setRenderZone",e4,da,7a,8f),
	HX_("clearRenderZone",8f,64,a7,74),
	HX_("drawLayer",2d,b7,cb,37),
	HX_("drawScene",a8,0e,dd,40),
	HX_("flush",c4,62,9b,02),
	HX_("_flush",05,aa,82,fe),
	HX_("beforeDraw",23,58,19,91),
	HX_("setupColor",a6,8d,5f,2c),
	HX_("beginDrawBatchState",24,2d,c1,5a),
	HX_("swapTexture",88,8e,44,a6),
	HX_("beginDrawObject",6c,95,f1,8b),
	HX_("beginDrawBatch",ad,05,23,12),
	HX_("drawTile",52,75,66,61),
	HX_("beginDraw",cd,0a,4a,8b),
	::String(null()) };

static void RenderContext_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderContext_obj::BUFFERING,"BUFFERING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RenderContext_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderContext_obj::BUFFERING,"BUFFERING");
};

#endif

::hx::Class RenderContext_obj::__mClass;

static ::String RenderContext_obj_sStaticFields[] = {
	HX_("BUFFERING",c2,df,e7,ac),
	::String(null())
};

void RenderContext_obj::__register()
{
	RenderContext_obj _hx_dummy;
	RenderContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.RenderContext",05,14,3a,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RenderContext_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RenderContext_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderContext_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RenderContext_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RenderContext_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b8739c61c2868bc6_20_boot)
HXDLIN(  20)		BUFFERING = false;
            	}
}

} // end namespace h2d
