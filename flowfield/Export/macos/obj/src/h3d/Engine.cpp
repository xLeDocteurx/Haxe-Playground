#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_BufferOffset
#include <h3d/BufferOffset.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d__Engine_TargetTmp
#include <h3d/_Engine/TargetTmp.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_Feature
#include <h3d/impl/Feature.h>
#endif
#ifndef INCLUDED_h3d_impl_InstanceBuffer
#include <h3d/impl/InstanceBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_LogDriver
#include <h3d/impl/LogDriver.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_h3d_impl_NullDriver
#include <h3d/impl/NullDriver.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
#endif
#ifndef INCLUDED_h3d_shader_Buffers
#include <h3d/shader/Buffers.h>
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
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxd_DisplayMode
#include <hxd/DisplayMode.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_System
#include <hxd/System.h>
#endif
#ifndef INCLUDED_hxd_SystemValue
#include <hxd/SystemValue.h>
#endif
#ifndef INCLUDED_hxd_Timer
#include <hxd/Timer.h>
#endif
#ifndef INCLUDED_hxd_Window
#include <hxd/Window.h>
#endif
#ifndef INCLUDED_hxd_impl_Allocator
#include <hxd/impl/Allocator.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a143e3904060e99_18_new,"h3d.Engine","new",0x9d5dece9,"h3d.Engine.new","h3d/Engine.hx",18,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_90_setDriver,"h3d.Engine","setDriver",0xdf4a9eb3,"h3d.Engine.setDriver","h3d/Engine.hx",90,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_100_setCurrent,"h3d.Engine","setCurrent",0xb773374e,"h3d.Engine.setCurrent","h3d/Engine.hx",100,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_104_init,"h3d.Engine","init",0x118a1667,"h3d.Engine.init","h3d/Engine.hx",104,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_108_driverName,"h3d.Engine","driverName",0x7f6fc92a,"h3d.Engine.driverName","h3d/Engine.hx",108,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_111_selectShader,"h3d.Engine","selectShader",0x80053d98,"h3d.Engine.selectShader","h3d/Engine.hx",111,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_118_selectMaterial,"h3d.Engine","selectMaterial",0x347c9dda,"h3d.Engine.selectMaterial","h3d/Engine.hx",118,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_122_uploadShaderBuffers,"h3d.Engine","uploadShaderBuffers",0x7c1c8296,"h3d.Engine.uploadShaderBuffers","h3d/Engine.hx",122,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_125_selectBuffer,"h3d.Engine","selectBuffer",0x33793b73,"h3d.Engine.selectBuffer","h3d/Engine.hx",125,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_134_renderTriBuffer,"h3d.Engine","renderTriBuffer",0x6fc0ec5e,"h3d.Engine.renderTriBuffer","h3d/Engine.hx",134,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_138_renderQuadBuffer,"h3d.Engine","renderQuadBuffer",0x8c18f1f4,"h3d.Engine.renderQuadBuffer","h3d/Engine.hx",138,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_142_renderBuffer,"h3d.Engine","renderBuffer",0xbe974b4d,"h3d.Engine.renderBuffer","h3d/Engine.hx",142,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_177_renderIndexed,"h3d.Engine","renderIndexed",0x34f95104,"h3d.Engine.renderIndexed","h3d/Engine.hx",177,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_192_renderMultiBuffers,"h3d.Engine","renderMultiBuffers",0x52df3807,"h3d.Engine.renderMultiBuffers","h3d/Engine.hx",192,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_208_renderInstanced,"h3d.Engine","renderInstanced",0x998a2302,"h3d.Engine.renderInstanced","h3d/Engine.hx",208,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_220_set_debug,"h3d.Engine","set_debug",0x989d43ff,"h3d.Engine.set_debug","h3d/Engine.hx",220,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_226_onCreate,"h3d.Engine","onCreate",0xff713052,"h3d.Engine.onCreate","h3d/Engine.hx",226,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_251___default_onContextLost,"h3d.Engine","__default_onContextLost",0x4f58f53f,"h3d.Engine.__default_onContextLost","h3d/Engine.hx",251,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_254___default_onReady,"h3d.Engine","__default_onReady",0x6412652f,"h3d.Engine.__default_onReady","h3d/Engine.hx",254,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_258_onWindowResize,"h3d.Engine","onWindowResize",0xe48063da,"h3d.Engine.onWindowResize","h3d/Engine.hx",258,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_266_set_fullScreen,"h3d.Engine","set_fullScreen",0xaf032d2f,"h3d.Engine.set_fullScreen","h3d/Engine.hx",266,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_274___default_onResized,"h3d.Engine","__default_onResized",0xb9deebbc,"h3d.Engine.__default_onResized","h3d/Engine.hx",274,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_277_resize,"h3d.Engine","resize",0x8a38f90b,"h3d.Engine.resize","h3d/Engine.hx",277,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_286_begin,"h3d.Engine","begin",0x3986faf2,"h3d.Engine.begin","h3d/Engine.hx",286,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_305_hasFeature,"h3d.Engine","hasFeature",0x3de15113,"h3d.Engine.hasFeature","h3d/Engine.hx",305,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_308_end,"h3d.Engine","end",0x9d572064,"h3d.Engine.end","h3d/Engine.hx",308,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_314_getCurrentTarget,"h3d.Engine","getCurrentTarget",0x7d001fcb,"h3d.Engine.getCurrentTarget","h3d/Engine.hx",314,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_317_pushTarget,"h3d.Engine","pushTarget",0x737ccf62,"h3d.Engine.pushTarget","h3d/Engine.hx",317,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_332_updateNeedFlush,"h3d.Engine","updateNeedFlush",0xe364fd4e,"h3d.Engine.updateNeedFlush","h3d/Engine.hx",332,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_340_pushTargets,"h3d.Engine","pushTargets",0x99b8a6d1,"h3d.Engine.pushTargets","h3d/Engine.hx",340,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_346_popTarget,"h3d.Engine","popTarget",0x9de6710b,"h3d.Engine.popTarget","h3d/Engine.hx",346,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_360_flushTarget,"h3d.Engine","flushTarget",0x33f882be,"h3d.Engine.flushTarget","h3d/Engine.hx",360,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_363_doFlushTarget,"h3d.Engine","doFlushTarget",0x2ff1dd33,"h3d.Engine.doFlushTarget","h3d/Engine.hx",363,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_380_clearF,"h3d.Engine","clearF",0x89658930,"h3d.Engine.clearF","h3d/Engine.hx",380,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_385_clear,"h3d.Engine","clear",0xd18c8256,"h3d.Engine.clear","h3d/Engine.hx",385,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_396_setRenderZone,"h3d.Engine","setRenderZone",0xe7c75cad,"h3d.Engine.setRenderZone","h3d/Engine.hx",396,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_401_render,"h3d.Engine","render",0x86e70a6d,"h3d.Engine.render","h3d/Engine.hx",401,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_418_dispose,"h3d.Engine","dispose",0xbf7a15a8,"h3d.Engine.dispose","h3d/Engine.hx",418,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_424_get_fps,"h3d.Engine","get_fps",0x2af02589,"h3d.Engine.get_fps","h3d/Engine.hx",424,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_96_getCurrent,"h3d.Engine","getCurrent",0xb3f598da,"h3d.Engine.getCurrent","h3d/Engine.hx",96,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_57_boot,"h3d.Engine","boot",0x0cea5f89,"h3d.Engine.boot","h3d/Engine.hx",57,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_58_boot,"h3d.Engine","boot",0x0cea5f89,"h3d.Engine.boot","h3d/Engine.hx",58,0xd2375a86)
HX_LOCAL_STACK_FRAME(_hx_pos_8a143e3904060e99_88_boot,"h3d.Engine","boot",0x0cea5f89,"h3d.Engine.boot","h3d/Engine.hx",88,0xd2375a86)
namespace h3d{

void Engine_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_8a143e3904060e99_18_new)
HXLINE(  55)		this->resCache =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  54)		this->ready = false;
HXLINE(  53)		this->inRender = false;
HXLINE(  52)		this->textureColorCache =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  42)		this->tmpVector =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  33)		this->backgroundColor = -16777216;
HXLINE(  62)		this->hardware = !(::h3d::Engine_obj::SOFTWARE_DRIVER);
HXLINE(  63)		this->antiAlias = ::h3d::Engine_obj::ANTIALIASING;
HXLINE(  64)		this->autoResize = true;
HXLINE(  65)		this->set_fullScreen(!(::hxd::System_obj::getValue(::hxd::SystemValue_obj::IsWindowed_dyn())));
HXLINE(  66)		this->window = ::hxd::Window_obj::getInstance();
HXLINE(  67)		this->realFps = ::hxd::System_obj::getDefaultFrameRate();
HXLINE(  68)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  68)		Float _hx_tmp;
HXDLIN(  68)		if ((timer > 0)) {
HXLINE(  68)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  68)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  68)		this->lastTime = _hx_tmp;
HXLINE(  69)		this->window->addResizeEvent(this->onWindowResize_dyn());
HXLINE(  81)		::Sys_obj::println(HX_("No output driver available.",fd,33,97,51));
HXLINE(  82)		this->driver =  ::h3d::impl::LogDriver_obj::__alloc( HX_CTX , ::h3d::impl::NullDriver_obj::__alloc( HX_CTX ));
HXLINE(  83)		this->driver->logEnable = true;
HXLINE(  85)		::h3d::Engine_obj::CURRENT = ::hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic Engine_obj::__CreateEmpty() { return new Engine_obj; }

void *Engine_obj::_hx_vtable = 0;

Dynamic Engine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Engine_obj > _hx_result = new Engine_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Engine_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x54dd3c1b;
}

void Engine_obj::setDriver( ::h3d::impl::Driver d){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_90_setDriver)
HXLINE(  91)		this->driver = d;
HXLINE(  92)		if (::hx::IsNotNull( this->mem )) {
HXLINE(  92)			this->mem->driver = d;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,setDriver,(void))

void Engine_obj::setCurrent(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_100_setCurrent)
HXDLIN( 100)		::h3d::Engine_obj::CURRENT = ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,setCurrent,(void))

void Engine_obj::init(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_104_init)
HXDLIN( 104)		this->driver->init(this->onCreate_dyn(),!(this->hardware));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,init,(void))

::String Engine_obj::driverName(::hx::Null< bool >  __o_details){
            		bool details = __o_details.Default(false);
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_108_driverName)
HXDLIN( 108)		return this->driver->getDriverName(details);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,driverName,return )

void Engine_obj::selectShader( ::hxsl::RuntimeShader shader){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_111_selectShader)
HXLINE( 112)		if (this->needFlushTarget) {
HXLINE( 112)			this->doFlushTarget();
            		}
HXLINE( 113)		if (this->driver->selectShader(shader)) {
HXLINE( 114)			this->shaderSwitches++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,selectShader,(void))

void Engine_obj::selectMaterial( ::h3d::mat::Pass pass){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_118_selectMaterial)
HXDLIN( 118)		this->driver->selectMaterial(pass);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,selectMaterial,(void))

void Engine_obj::uploadShaderBuffers( ::h3d::shader::Buffers buffers,int which){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_122_uploadShaderBuffers)
HXDLIN( 122)		this->driver->uploadShaderBuffers(buffers,which);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,uploadShaderBuffers,(void))

bool Engine_obj::selectBuffer( ::h3d::Buffer buf){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_125_selectBuffer)
HXLINE( 126)		bool _hx_tmp;
HXDLIN( 126)		if (::hx::IsNotNull( buf->buffer )) {
HXLINE( 126)			_hx_tmp = ::hx::IsNull( buf->buffer->vbuf );
            		}
            		else {
HXLINE( 126)			_hx_tmp = true;
            		}
HXDLIN( 126)		if (_hx_tmp) {
HXLINE( 127)			return false;
            		}
HXLINE( 128)		if (this->needFlushTarget) {
HXLINE( 128)			this->doFlushTarget();
            		}
HXLINE( 129)		this->driver->selectBuffer(buf);
HXLINE( 130)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,selectBuffer,return )

void Engine_obj::renderTriBuffer( ::h3d::Buffer b,::hx::Null< int >  __o_start,::hx::Null< int >  __o_max){
            		int start = __o_start.Default(0);
            		int max = __o_max.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_134_renderTriBuffer)
HXDLIN( 134)		this->renderBuffer(b,this->mem->triIndexes,3,start,max);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,renderTriBuffer,(void))

void Engine_obj::renderQuadBuffer( ::h3d::Buffer b,::hx::Null< int >  __o_start,::hx::Null< int >  __o_max){
            		int start = __o_start.Default(0);
            		int max = __o_max.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_138_renderQuadBuffer)
HXDLIN( 138)		this->renderBuffer(b,this->mem->quadIndexes,2,start,max);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,renderQuadBuffer,(void))

void Engine_obj::renderBuffer( ::h3d::Buffer b, ::h3d::Indexes indexes,int vertPerTri,::hx::Null< int >  __o_startTri,::hx::Null< int >  __o_drawTri){
            		int startTri = __o_startTri.Default(0);
            		int drawTri = __o_drawTri.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_142_renderBuffer)
HXLINE( 143)		if (indexes->isDisposed()) {
HXLINE( 144)			return;
            		}
HXLINE( 145)		while(true){
HXLINE( 146)			int ntri = ::Std_obj::_hx_int((( (Float)(b->vertices) ) / ( (Float)(vertPerTri) )));
HXLINE( 147)			int pos = ::Std_obj::_hx_int((( (Float)(b->position) ) / ( (Float)(vertPerTri) )));
HXLINE( 148)			if ((startTri > 0)) {
HXLINE( 149)				if ((startTri >= ntri)) {
HXLINE( 150)					startTri = (startTri - ntri);
HXLINE( 151)					b = b->next;
HXLINE( 145)					if (!(::hx::IsNotNull( b ))) {
HXLINE( 145)						goto _hx_goto_11;
            					}
            					else {
HXLINE( 152)						continue;
            					}
            				}
HXLINE( 154)				pos = (pos + startTri);
HXLINE( 155)				ntri = (ntri - startTri);
HXLINE( 156)				startTri = 0;
            			}
HXLINE( 158)			if ((drawTri >= 0)) {
HXLINE( 159)				if ((drawTri == 0)) {
HXLINE( 159)					return;
            				}
HXLINE( 160)				drawTri = (drawTri - ntri);
HXLINE( 161)				if ((drawTri < 0)) {
HXLINE( 162)					ntri = (ntri + drawTri);
HXLINE( 163)					drawTri = 0;
            				}
            			}
HXLINE( 166)			bool _hx_tmp;
HXDLIN( 166)			if ((ntri > 0)) {
HXLINE( 166)				_hx_tmp = this->selectBuffer(b);
            			}
            			else {
HXLINE( 166)				_hx_tmp = false;
            			}
HXDLIN( 166)			if (_hx_tmp) {
HXLINE( 168)				this->driver->draw(indexes->ibuf,(pos * 3),ntri);
HXLINE( 169)				 ::h3d::Engine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)				_hx_tmp->drawTriangles = (_hx_tmp->drawTriangles + ntri);
HXLINE( 170)				this->drawCalls++;
            			}
HXLINE( 172)			b = b->next;
HXLINE( 145)			if (!(::hx::IsNotNull( b ))) {
HXLINE( 145)				goto _hx_goto_11;
            			}
            		}
            		_hx_goto_11:;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,renderBuffer,(void))

void Engine_obj::renderIndexed( ::h3d::Buffer b, ::h3d::Indexes indexes,::hx::Null< int >  __o_startTri,::hx::Null< int >  __o_drawTri){
            		int startTri = __o_startTri.Default(0);
            		int drawTri = __o_drawTri.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_177_renderIndexed)
HXLINE( 178)		if (::hx::IsNotNull( b->next )) {
HXLINE( 179)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Buffer is split",24,69,d4,a6)));
            		}
HXLINE( 180)		if (indexes->isDisposed()) {
HXLINE( 181)			return;
            		}
HXLINE( 182)		int maxTri = ::Std_obj::_hx_int((( (Float)(indexes->count) ) / ( (Float)(3) )));
HXLINE( 183)		if ((drawTri < 0)) {
HXLINE( 183)			drawTri = (maxTri - startTri);
            		}
HXLINE( 184)		bool _hx_tmp;
HXDLIN( 184)		if ((drawTri > 0)) {
HXLINE( 184)			_hx_tmp = this->selectBuffer(b);
            		}
            		else {
HXLINE( 184)			_hx_tmp = false;
            		}
HXDLIN( 184)		if (_hx_tmp) {
HXLINE( 186)			this->driver->draw(indexes->ibuf,(startTri * 3),drawTri);
HXLINE( 187)			 ::h3d::Engine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 187)			_hx_tmp->drawTriangles = (_hx_tmp->drawTriangles + drawTri);
HXLINE( 188)			this->drawCalls++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,renderIndexed,(void))

void Engine_obj::renderMultiBuffers( ::h3d::BufferOffset buffers, ::h3d::Indexes indexes,::hx::Null< int >  __o_startTri,::hx::Null< int >  __o_drawTri){
            		int startTri = __o_startTri.Default(0);
            		int drawTri = __o_drawTri.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_192_renderMultiBuffers)
HXLINE( 193)		int maxTri = ::Std_obj::_hx_int((( (Float)(indexes->count) ) / ( (Float)(3) )));
HXLINE( 194)		if ((maxTri <= 0)) {
HXLINE( 194)			return;
            		}
HXLINE( 195)		if (this->needFlushTarget) {
HXLINE( 195)			this->doFlushTarget();
            		}
HXLINE( 196)		this->driver->selectMultiBuffers(buffers);
HXLINE( 197)		if (indexes->isDisposed()) {
HXLINE( 198)			return;
            		}
HXLINE( 199)		if ((drawTri < 0)) {
HXLINE( 199)			drawTri = (maxTri - startTri);
            		}
HXLINE( 200)		if ((drawTri > 0)) {
HXLINE( 202)			this->driver->draw(indexes->ibuf,(startTri * 3),drawTri);
HXLINE( 203)			 ::h3d::Engine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)			_hx_tmp->drawTriangles = (_hx_tmp->drawTriangles + drawTri);
HXLINE( 204)			this->drawCalls++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,renderMultiBuffers,(void))

void Engine_obj::renderInstanced( ::h3d::BufferOffset buffers, ::h3d::Indexes indexes, ::h3d::impl::InstanceBuffer commands){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_208_renderInstanced)
HXLINE( 209)		if (this->needFlushTarget) {
HXLINE( 209)			this->doFlushTarget();
            		}
HXLINE( 210)		this->driver->selectMultiBuffers(buffers);
HXLINE( 211)		if (indexes->isDisposed()) {
HXLINE( 212)			return;
            		}
HXLINE( 213)		if ((commands->commandCount > 0)) {
HXLINE( 214)			this->driver->drawInstanced(indexes->ibuf,commands);
HXLINE( 215)			 ::h3d::Engine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 215)			_hx_tmp->drawTriangles = (_hx_tmp->drawTriangles + commands->triCount);
HXLINE( 216)			this->drawCalls++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,renderInstanced,(void))

bool Engine_obj::set_debug(bool d){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_220_set_debug)
HXLINE( 221)		this->debug = d;
HXLINE( 222)		this->driver->setDebug(this->debug);
HXLINE( 223)		return d;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,set_debug,return )

void Engine_obj::onCreate(bool disposed){
            	HX_GC_STACKFRAME(&_hx_pos_8a143e3904060e99_226_onCreate)
HXLINE( 227)		::h3d::Engine_obj::CURRENT = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 228)		if (this->autoResize) {
HXLINE( 229)			this->width = this->window->get_width();
HXLINE( 230)			this->height = this->window->get_height();
            		}
HXLINE( 232)		if (disposed) {
HXLINE( 233)			::hxd::impl::Allocator_obj::get()->onContextLost();
HXLINE( 234)			this->mem->onContextLost();
            		}
            		else {
HXLINE( 236)			this->mem =  ::h3d::impl::MemoryManager_obj::__alloc( HX_CTX ,this->driver);
HXLINE( 237)			this->mem->init();
HXLINE( 238)			this->nullTexture =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,0,0,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::mat::TextureFlags_obj::NoAlloc_dyn()),null());
            		}
HXLINE( 240)		this->hardware = this->driver->hasFeature(::h3d::impl::Feature_obj::HardwareAccelerated_dyn());
HXLINE( 241)		this->set_debug(this->debug);
HXLINE( 242)		this->set_fullScreen(this->fullScreen);
HXLINE( 243)		this->resize(this->width,this->height);
HXLINE( 244)		if (disposed) {
HXLINE( 245)			this->onContextLost();
            		}
            		else {
HXLINE( 247)			this->onReady();
            		}
HXLINE( 248)		this->ready = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onCreate,(void))

HX_BEGIN_DEFAULT_FUNC(__default_onContextLost,Engine_obj)
void _hx_run(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_251___default_onContextLost)
            	}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onReady,Engine_obj)
void _hx_run(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_254___default_onReady)
            	}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

void Engine_obj::onWindowResize(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_258_onWindowResize)
HXDLIN( 258)		bool _hx_tmp;
HXDLIN( 258)		if (this->autoResize) {
HXDLIN( 258)			_hx_tmp = !(this->driver->isDisposed());
            		}
            		else {
HXDLIN( 258)			_hx_tmp = false;
            		}
HXDLIN( 258)		if (_hx_tmp) {
HXLINE( 259)			int w = this->window->get_width();
HXDLIN( 259)			int h = this->window->get_height();
HXLINE( 260)			bool _hx_tmp;
HXDLIN( 260)			if ((w == this->width)) {
HXLINE( 260)				_hx_tmp = (h != this->height);
            			}
            			else {
HXLINE( 260)				_hx_tmp = true;
            			}
HXDLIN( 260)			if (_hx_tmp) {
HXLINE( 261)				this->resize(w,h);
            			}
HXLINE( 262)			this->onResized();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,onWindowResize,(void))

bool Engine_obj::set_fullScreen(bool v){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_266_set_fullScreen)
HXLINE( 267)		this->fullScreen = v;
HXLINE( 268)		bool _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( this->mem )) {
HXLINE( 268)			_hx_tmp = ::hxd::System_obj::getValue(::hxd::SystemValue_obj::IsWindowed_dyn());
            		}
            		else {
HXLINE( 268)			_hx_tmp = false;
            		}
HXDLIN( 268)		if (_hx_tmp) {
HXLINE( 269)			 ::hxd::DisplayMode _hx_tmp;
HXDLIN( 269)			if (v) {
HXLINE( 269)				_hx_tmp = ::hxd::DisplayMode_obj::Borderless_dyn();
            			}
            			else {
HXLINE( 269)				_hx_tmp = ::hxd::DisplayMode_obj::Windowed_dyn();
            			}
HXDLIN( 269)			this->window->set_displayMode(_hx_tmp);
            		}
HXLINE( 271)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,set_fullScreen,return )

HX_BEGIN_DEFAULT_FUNC(__default_onResized,Engine_obj)
void _hx_run(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_274___default_onResized)
            	}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

void Engine_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_277_resize)
HXLINE( 279)		if ((width < 32)) {
HXLINE( 279)			width = 32;
            		}
HXLINE( 280)		if ((height < 32)) {
HXLINE( 280)			height = 32;
            		}
HXLINE( 281)		this->width = width;
HXLINE( 282)		this->height = height;
HXLINE( 283)		if (!(this->driver->isDisposed())) {
HXLINE( 283)			this->driver->resize(width,height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,resize,(void))

bool Engine_obj::begin(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_286_begin)
HXLINE( 287)		if (this->driver->isDisposed()) {
HXLINE( 288)			return false;
            		}
HXLINE( 290)		this->inRender = true;
HXLINE( 291)		this->drawTriangles = 0;
HXLINE( 292)		this->shaderSwitches = 0;
HXLINE( 293)		this->drawCalls = 0;
HXLINE( 294)		this->targetStack = null();
HXLINE( 295)		this->needFlushTarget = ::hx::IsNotNull( this->currentTargetTex );
HXLINE( 299)		this->driver->begin(::hxd::Timer_obj::frameCount);
HXLINE( 300)		if (::hx::IsNotNull( this->backgroundColor )) {
HXLINE( 300)			this->clear(this->backgroundColor,1,0);
            		}
HXLINE( 301)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,begin,return )

bool Engine_obj::hasFeature( ::h3d::impl::Feature f){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_305_hasFeature)
HXDLIN( 305)		return this->driver->hasFeature(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,hasFeature,return )

void Engine_obj::end(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_308_end)
HXLINE( 309)		this->inRender = false;
HXLINE( 310)		this->driver->end();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,end,(void))

 ::h3d::mat::Texture Engine_obj::getCurrentTarget(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_314_getCurrentTarget)
HXDLIN( 314)		if (::hx::IsNull( this->targetStack )) {
HXDLIN( 314)			return null();
            		}
            		else {
HXDLIN( 314)			if (::hx::IsInstanceEq( this->targetStack->t,this->nullTexture )) {
HXDLIN( 314)				return this->targetStack->textures->__get(0).StaticCast<  ::h3d::mat::Texture >();
            			}
            			else {
HXDLIN( 314)				return this->targetStack->t;
            			}
            		}
HXDLIN( 314)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getCurrentTarget,return )

void Engine_obj::pushTarget( ::h3d::mat::Texture tex,::hx::Null< int >  __o_layer,::hx::Null< int >  __o_mipLevel){
            		int layer = __o_layer.Default(0);
            		int mipLevel = __o_mipLevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_8a143e3904060e99_317_pushTarget)
HXLINE( 318)		 ::h3d::_Engine::TargetTmp c = this->targetTmp;
HXLINE( 319)		if (::hx::IsNull( c )) {
HXLINE( 320)			c =  ::h3d::_Engine::TargetTmp_obj::__alloc( HX_CTX ,tex,this->targetStack,layer,mipLevel);
            		}
            		else {
HXLINE( 322)			this->targetTmp = c->next;
HXLINE( 323)			c->t = tex;
HXLINE( 324)			c->next = this->targetStack;
HXLINE( 325)			c->mipLevel = mipLevel;
HXLINE( 326)			c->layer = layer;
            		}
HXLINE( 328)		this->targetStack = c;
HXLINE( 329)		this->updateNeedFlush();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,pushTarget,(void))

void Engine_obj::updateNeedFlush(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_332_updateNeedFlush)
HXLINE( 333)		 ::h3d::_Engine::TargetTmp t = this->targetStack;
HXLINE( 334)		if (::hx::IsNull( t )) {
HXLINE( 335)			this->needFlushTarget = ::hx::IsNotNull( this->currentTargetTex );
            		}
            		else {
HXLINE( 337)			bool _hx_tmp;
HXDLIN( 337)			bool _hx_tmp1;
HXDLIN( 337)			bool _hx_tmp2;
HXDLIN( 337)			if (::hx::IsInstanceEq( this->currentTargetTex,t->t )) {
HXLINE( 337)				_hx_tmp2 = (this->currentTargetLayer != t->layer);
            			}
            			else {
HXLINE( 337)				_hx_tmp2 = true;
            			}
HXDLIN( 337)			if (!(_hx_tmp2)) {
HXLINE( 337)				_hx_tmp1 = (this->currentTargetMip != t->mipLevel);
            			}
            			else {
HXLINE( 337)				_hx_tmp1 = true;
            			}
HXDLIN( 337)			if (!(_hx_tmp1)) {
HXLINE( 337)				_hx_tmp = ::hx::IsNotNull( t->textures );
            			}
            			else {
HXLINE( 337)				_hx_tmp = true;
            			}
HXDLIN( 337)			this->needFlushTarget = _hx_tmp;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,updateNeedFlush,(void))

void Engine_obj::pushTargets(::Array< ::Dynamic> textures){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_340_pushTargets)
HXLINE( 341)		this->pushTarget(this->nullTexture,null(),null());
HXLINE( 342)		this->targetStack->textures = textures;
HXLINE( 343)		this->needFlushTarget = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,pushTargets,(void))

void Engine_obj::popTarget(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_346_popTarget)
HXLINE( 347)		 ::h3d::_Engine::TargetTmp c = this->targetStack;
HXLINE( 348)		if (::hx::IsNull( c )) {
HXLINE( 349)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("popTarget() with no matching pushTarget()",6d,e8,3b,13)));
            		}
HXLINE( 350)		this->targetStack = c->next;
HXLINE( 351)		this->updateNeedFlush();
HXLINE( 353)		c->t = null();
HXLINE( 354)		c->textures = null();
HXLINE( 355)		c->next = this->targetTmp;
HXLINE( 356)		this->targetTmp = c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,popTarget,(void))

void Engine_obj::flushTarget(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_360_flushTarget)
HXDLIN( 360)		if (this->needFlushTarget) {
HXDLIN( 360)			this->doFlushTarget();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,flushTarget,(void))

void Engine_obj::doFlushTarget(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_363_doFlushTarget)
HXLINE( 364)		 ::h3d::_Engine::TargetTmp t = this->targetStack;
HXLINE( 365)		if (::hx::IsNull( t )) {
HXLINE( 366)			this->driver->setRenderTarget(null(),null(),null());
HXLINE( 367)			this->currentTargetTex = null();
            		}
            		else {
HXLINE( 369)			if (::hx::IsNotNull( t->textures )) {
HXLINE( 370)				this->driver->setRenderTargets(t->textures);
            			}
            			else {
HXLINE( 372)				this->driver->setRenderTarget(t->t,t->layer,t->mipLevel);
            			}
HXLINE( 373)			this->currentTargetTex = t->t;
HXLINE( 374)			this->currentTargetLayer = t->layer;
HXLINE( 375)			this->currentTargetMip = t->mipLevel;
            		}
HXLINE( 377)		this->needFlushTarget = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,doFlushTarget,(void))

void Engine_obj::clearF( ::h3d::Vector color, ::Dynamic depth, ::Dynamic stencil){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_380_clearF)
HXLINE( 381)		if (this->needFlushTarget) {
HXLINE( 381)			this->doFlushTarget();
            		}
HXLINE( 382)		this->driver->clear(color,depth,stencil);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,clearF,(void))

void Engine_obj::clear( ::Dynamic color, ::Dynamic depth, ::Dynamic stencil){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_385_clear)
HXLINE( 386)		if (::hx::IsNotNull( color )) {
HXLINE( 387)			 ::h3d::Vector _this = this->tmpVector;
HXDLIN( 387)			int c = ( (int)(color) );
HXDLIN( 387)			_this->x = (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN( 387)			_this->y = (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN( 387)			_this->z = (( (Float)((c & 255)) ) / ( (Float)(255) ));
HXDLIN( 387)			_this->w = (( (Float)(::hx::UShr(c,24)) ) / ( (Float)(255) ));
            		}
HXLINE( 388)		if (this->needFlushTarget) {
HXLINE( 388)			this->doFlushTarget();
            		}
HXLINE( 389)		 ::h3d::Vector _hx_tmp;
HXDLIN( 389)		if (::hx::IsNull( color )) {
HXLINE( 389)			_hx_tmp = null();
            		}
            		else {
HXLINE( 389)			_hx_tmp = this->tmpVector;
            		}
HXDLIN( 389)		this->driver->clear(_hx_tmp,depth,stencil);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,clear,(void))

void Engine_obj::setRenderZone(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height){
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            		int width = __o_width.Default(-1);
            		int height = __o_height.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_396_setRenderZone)
HXLINE( 397)		if (this->needFlushTarget) {
HXLINE( 397)			this->doFlushTarget();
            		}
HXLINE( 398)		this->driver->setRenderZone(x,y,width,height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,setRenderZone,(void))

bool Engine_obj::render( ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_401_render)
HXLINE( 402)		if (!(this->begin())) {
HXLINE( 402)			return false;
            		}
HXLINE( 403)		obj->__Field(HX_("render",56,6b,29,05),::hx::paccDynamic)(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 404)		this->end();
HXLINE( 406)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 406)		Float delta;
HXDLIN( 406)		if ((timer > 0)) {
HXLINE( 406)			delta = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 406)			delta = ( (Float)(0) );
            		}
HXDLIN( 406)		Float delta1 = (delta - this->lastTime);
HXLINE( 407)		 ::h3d::Engine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 407)		_hx_tmp->lastTime = (_hx_tmp->lastTime + delta1);
HXLINE( 408)		if ((delta1 > 0)) {
HXLINE( 409)			Float curFps = (((Float)1.) / delta1);
HXLINE( 410)			if ((curFps > (this->realFps * ( (Float)(2) )))) {
HXLINE( 410)				curFps = (this->realFps * ( (Float)(2) ));
            			}
            			else {
HXLINE( 410)				if ((curFps < (this->realFps * ((Float)0.5)))) {
HXLINE( 410)					curFps = (this->realFps * ((Float)0.5));
            				}
            			}
HXLINE( 411)			Float f = (delta1 / ((Float).5));
HXLINE( 412)			if ((f > ((Float)0.3))) {
HXLINE( 412)				f = ((Float)0.3);
            			}
HXLINE( 413)			this->realFps = ((this->realFps * (( (Float)(1) ) - f)) + (curFps * f));
            		}
HXLINE( 415)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,render,return )

void Engine_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_418_dispose)
HXLINE( 419)		this->driver->dispose();
HXLINE( 420)		this->window->removeResizeEvent(this->onWindowResize_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,dispose,(void))

Float Engine_obj::get_fps(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_424_get_fps)
HXDLIN( 424)		return (( (Float)(::Math_obj::ceil((this->realFps * ( (Float)(100) )))) ) / ( (Float)(100) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,get_fps,return )

bool Engine_obj::SOFTWARE_DRIVER;

int Engine_obj::ANTIALIASING;

 ::h3d::Engine Engine_obj::CURRENT;

 ::h3d::Engine Engine_obj::getCurrent(){
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_96_getCurrent)
HXDLIN(  96)		return ::h3d::Engine_obj::CURRENT;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getCurrent,return )


void Engine_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,Engine_obj *_hx_obj) {
	if (!_hx_obj->onResized.mPtr) _hx_obj->onResized = new __default_onResized(_hx_obj);
	if (!_hx_obj->onReady.mPtr) _hx_obj->onReady = new __default_onReady(_hx_obj);
	if (!_hx_obj->onContextLost.mPtr) _hx_obj->onContextLost = new __default_onContextLost(_hx_obj);
}
::hx::ObjectPtr< Engine_obj > Engine_obj::__new() {
	::hx::ObjectPtr< Engine_obj > __this = new Engine_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Engine_obj > Engine_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Engine_obj *__this = (Engine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Engine_obj), true, "h3d.Engine"));
	*(void **)__this = Engine_obj::_hx_vtable;
	h3d::Engine_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct();
	return __this;
}

Engine_obj::Engine_obj()
{
	onResized = new __default_onResized(this);
	onReady = new __default_onReady(this);
	onContextLost = new __default_onContextLost(this);
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(driver,"driver");
	HX_MARK_MEMBER_NAME(mem,"mem");
	HX_MARK_MEMBER_NAME(hardware,"hardware");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(debug,"debug");
	HX_MARK_MEMBER_NAME(drawTriangles,"drawTriangles");
	HX_MARK_MEMBER_NAME(drawCalls,"drawCalls");
	HX_MARK_MEMBER_NAME(shaderSwitches,"shaderSwitches");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(autoResize,"autoResize");
	HX_MARK_MEMBER_NAME(fullScreen,"fullScreen");
	HX_MARK_MEMBER_NAME(realFps,"realFps");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(antiAlias,"antiAlias");
	HX_MARK_MEMBER_NAME(tmpVector,"tmpVector");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(targetTmp,"targetTmp");
	HX_MARK_MEMBER_NAME(targetStack,"targetStack");
	HX_MARK_MEMBER_NAME(currentTargetTex,"currentTargetTex");
	HX_MARK_MEMBER_NAME(currentTargetLayer,"currentTargetLayer");
	HX_MARK_MEMBER_NAME(currentTargetMip,"currentTargetMip");
	HX_MARK_MEMBER_NAME(needFlushTarget,"needFlushTarget");
	HX_MARK_MEMBER_NAME(nullTexture,"nullTexture");
	HX_MARK_MEMBER_NAME(textureColorCache,"textureColorCache");
	HX_MARK_MEMBER_NAME(inRender,"inRender");
	HX_MARK_MEMBER_NAME(ready,"ready");
	HX_MARK_MEMBER_NAME(resCache,"resCache");
	HX_MARK_MEMBER_NAME(onContextLost,"onContextLost");
	HX_MARK_MEMBER_NAME(onReady,"onReady");
	HX_MARK_MEMBER_NAME(onResized,"onResized");
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(driver,"driver");
	HX_VISIT_MEMBER_NAME(mem,"mem");
	HX_VISIT_MEMBER_NAME(hardware,"hardware");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	HX_VISIT_MEMBER_NAME(drawTriangles,"drawTriangles");
	HX_VISIT_MEMBER_NAME(drawCalls,"drawCalls");
	HX_VISIT_MEMBER_NAME(shaderSwitches,"shaderSwitches");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(autoResize,"autoResize");
	HX_VISIT_MEMBER_NAME(fullScreen,"fullScreen");
	HX_VISIT_MEMBER_NAME(realFps,"realFps");
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(antiAlias,"antiAlias");
	HX_VISIT_MEMBER_NAME(tmpVector,"tmpVector");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(targetTmp,"targetTmp");
	HX_VISIT_MEMBER_NAME(targetStack,"targetStack");
	HX_VISIT_MEMBER_NAME(currentTargetTex,"currentTargetTex");
	HX_VISIT_MEMBER_NAME(currentTargetLayer,"currentTargetLayer");
	HX_VISIT_MEMBER_NAME(currentTargetMip,"currentTargetMip");
	HX_VISIT_MEMBER_NAME(needFlushTarget,"needFlushTarget");
	HX_VISIT_MEMBER_NAME(nullTexture,"nullTexture");
	HX_VISIT_MEMBER_NAME(textureColorCache,"textureColorCache");
	HX_VISIT_MEMBER_NAME(inRender,"inRender");
	HX_VISIT_MEMBER_NAME(ready,"ready");
	HX_VISIT_MEMBER_NAME(resCache,"resCache");
	HX_VISIT_MEMBER_NAME(onContextLost,"onContextLost");
	HX_VISIT_MEMBER_NAME(onReady,"onReady");
	HX_VISIT_MEMBER_NAME(onResized,"onResized");
}

::hx::Val Engine_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { return ::hx::Val( mem ); }
		if (HX_FIELD_EQ(inName,"fps") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fps() ); }
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"debug") ) { return ::hx::Val( debug ); }
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready ); }
		if (HX_FIELD_EQ(inName,"begin") ) { return ::hx::Val( begin_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { return ::hx::Val( driver ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"window") ) { return ::hx::Val( window ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearF") ) { return ::hx::Val( clearF_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"realFps") ) { return ::hx::Val( realFps ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fps") ) { return ::hx::Val( get_fps_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hardware") ) { return ::hx::Val( hardware ); }
		if (HX_FIELD_EQ(inName,"lastTime") ) { return ::hx::Val( lastTime ); }
		if (HX_FIELD_EQ(inName,"inRender") ) { return ::hx::Val( inRender ); }
		if (HX_FIELD_EQ(inName,"resCache") ) { return ::hx::Val( resCache ); }
		if (HX_FIELD_EQ(inName,"onCreate") ) { return ::hx::Val( onCreate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCalls") ) { return ::hx::Val( drawCalls ); }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { return ::hx::Val( antiAlias ); }
		if (HX_FIELD_EQ(inName,"tmpVector") ) { return ::hx::Val( tmpVector ); }
		if (HX_FIELD_EQ(inName,"targetTmp") ) { return ::hx::Val( targetTmp ); }
		if (HX_FIELD_EQ(inName,"setDriver") ) { return ::hx::Val( setDriver_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_debug") ) { return ::hx::Val( set_debug_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResized") ) { return ::hx::Val( onResized ); }
		if (HX_FIELD_EQ(inName,"popTarget") ) { return ::hx::Val( popTarget_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoResize") ) { return ::hx::Val( autoResize ); }
		if (HX_FIELD_EQ(inName,"fullScreen") ) { return ::hx::Val( fullScreen ); }
		if (HX_FIELD_EQ(inName,"setCurrent") ) { return ::hx::Val( setCurrent_dyn() ); }
		if (HX_FIELD_EQ(inName,"driverName") ) { return ::hx::Val( driverName_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasFeature") ) { return ::hx::Val( hasFeature_dyn() ); }
		if (HX_FIELD_EQ(inName,"pushTarget") ) { return ::hx::Val( pushTarget_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"targetStack") ) { return ::hx::Val( targetStack ); }
		if (HX_FIELD_EQ(inName,"nullTexture") ) { return ::hx::Val( nullTexture ); }
		if (HX_FIELD_EQ(inName,"pushTargets") ) { return ::hx::Val( pushTargets_dyn() ); }
		if (HX_FIELD_EQ(inName,"flushTarget") ) { return ::hx::Val( flushTarget_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectShader") ) { return ::hx::Val( selectShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectBuffer") ) { return ::hx::Val( selectBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"renderBuffer") ) { return ::hx::Val( renderBuffer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return ::hx::Val( drawTriangles ); }
		if (HX_FIELD_EQ(inName,"renderIndexed") ) { return ::hx::Val( renderIndexed_dyn() ); }
		if (HX_FIELD_EQ(inName,"onContextLost") ) { return ::hx::Val( onContextLost ); }
		if (HX_FIELD_EQ(inName,"doFlushTarget") ) { return ::hx::Val( doFlushTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRenderZone") ) { return ::hx::Val( setRenderZone_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shaderSwitches") ) { return ::hx::Val( shaderSwitches ); }
		if (HX_FIELD_EQ(inName,"selectMaterial") ) { return ::hx::Val( selectMaterial_dyn() ); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return ::hx::Val( onWindowResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fullScreen") ) { return ::hx::Val( set_fullScreen_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"needFlushTarget") ) { return ::hx::Val( needFlushTarget ); }
		if (HX_FIELD_EQ(inName,"renderTriBuffer") ) { return ::hx::Val( renderTriBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"renderInstanced") ) { return ::hx::Val( renderInstanced_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateNeedFlush") ) { return ::hx::Val( updateNeedFlush_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentTargetTex") ) { return ::hx::Val( currentTargetTex ); }
		if (HX_FIELD_EQ(inName,"currentTargetMip") ) { return ::hx::Val( currentTargetMip ); }
		if (HX_FIELD_EQ(inName,"renderQuadBuffer") ) { return ::hx::Val( renderQuadBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCurrentTarget") ) { return ::hx::Val( getCurrentTarget_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"textureColorCache") ) { return ::hx::Val( textureColorCache ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentTargetLayer") ) { return ::hx::Val( currentTargetLayer ); }
		if (HX_FIELD_EQ(inName,"renderMultiBuffers") ) { return ::hx::Val( renderMultiBuffers_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadShaderBuffers") ) { return ::hx::Val( uploadShaderBuffers_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Engine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"CURRENT") ) { outValue = ( CURRENT ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getCurrent") ) { outValue = getCurrent_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ANTIALIASING") ) { outValue = ( ANTIALIASING ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOFTWARE_DRIVER") ) { outValue = ( SOFTWARE_DRIVER ); return true; }
	}
	return false;
}

::hx::Val Engine_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { mem=inValue.Cast<  ::h3d::impl::MemoryManager >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_debug(inValue.Cast< bool >()) );debug=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { driver=inValue.Cast<  ::h3d::impl::Driver >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::hxd::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"realFps") ) { realFps=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onReady") ) { onReady=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hardware") ) { hardware=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inRender") ) { inRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resCache") ) { resCache=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCalls") ) { drawCalls=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { antiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tmpVector") ) { tmpVector=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetTmp") ) { targetTmp=inValue.Cast<  ::h3d::_Engine::TargetTmp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onResized") ) { onResized=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoResize") ) { autoResize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullScreen") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fullScreen(inValue.Cast< bool >()) );fullScreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"targetStack") ) { targetStack=inValue.Cast<  ::h3d::_Engine::TargetTmp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nullTexture") ) { nullTexture=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { drawTriangles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onContextLost") ) { onContextLost=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shaderSwitches") ) { shaderSwitches=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needFlushTarget") ) { needFlushTarget=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentTargetTex") ) { currentTargetTex=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentTargetMip") ) { currentTargetMip=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"textureColorCache") ) { textureColorCache=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentTargetLayer") ) { currentTargetLayer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Engine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"CURRENT") ) { CURRENT=ioValue.Cast<  ::h3d::Engine >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ANTIALIASING") ) { ANTIALIASING=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOFTWARE_DRIVER") ) { SOFTWARE_DRIVER=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("driver",28,80,1f,e5));
	outFields->push(HX_("mem",15,0e,53,00));
	outFields->push(HX_("hardware",a8,e2,d3,75));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("debug",53,52,1f,d7));
	outFields->push(HX_("drawTriangles",07,44,68,de));
	outFields->push(HX_("drawCalls",71,a7,26,09));
	outFields->push(HX_("shaderSwitches",a7,af,e4,be));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("autoResize",c3,6a,46,74));
	outFields->push(HX_("fullScreen",5b,ae,48,2e));
	outFields->push(HX_("fps",e9,c7,4d,00));
	outFields->push(HX_("realFps",2b,23,11,08));
	outFields->push(HX_("lastTime",83,e5,45,e0));
	outFields->push(HX_("antiAlias",8e,46,17,09));
	outFields->push(HX_("tmpVector",fa,44,34,ed));
	outFields->push(HX_("window",f0,93,8c,52));
	outFields->push(HX_("targetTmp",06,52,37,69));
	outFields->push(HX_("targetStack",37,3e,63,14));
	outFields->push(HX_("currentTargetTex",9d,bf,67,5c));
	outFields->push(HX_("currentTargetLayer",07,3d,b4,77));
	outFields->push(HX_("currentTargetMip",4a,73,62,5c));
	outFields->push(HX_("needFlushTarget",7f,ac,ac,1c));
	outFields->push(HX_("nullTexture",14,41,ed,cc));
	outFields->push(HX_("textureColorCache",9a,3e,22,55));
	outFields->push(HX_("inRender",1b,b5,a7,8d));
	outFields->push(HX_("ready",63,a0,ba,e6));
	outFields->push(HX_("resCache",c2,34,bb,af));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Engine_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::impl::Driver */ ,(int)offsetof(Engine_obj,driver),HX_("driver",28,80,1f,e5)},
	{::hx::fsObject /*  ::h3d::impl::MemoryManager */ ,(int)offsetof(Engine_obj,mem),HX_("mem",15,0e,53,00)},
	{::hx::fsBool,(int)offsetof(Engine_obj,hardware),HX_("hardware",a8,e2,d3,75)},
	{::hx::fsInt,(int)offsetof(Engine_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(Engine_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsBool,(int)offsetof(Engine_obj,debug),HX_("debug",53,52,1f,d7)},
	{::hx::fsInt,(int)offsetof(Engine_obj,drawTriangles),HX_("drawTriangles",07,44,68,de)},
	{::hx::fsInt,(int)offsetof(Engine_obj,drawCalls),HX_("drawCalls",71,a7,26,09)},
	{::hx::fsInt,(int)offsetof(Engine_obj,shaderSwitches),HX_("shaderSwitches",a7,af,e4,be)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Engine_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsBool,(int)offsetof(Engine_obj,autoResize),HX_("autoResize",c3,6a,46,74)},
	{::hx::fsBool,(int)offsetof(Engine_obj,fullScreen),HX_("fullScreen",5b,ae,48,2e)},
	{::hx::fsFloat,(int)offsetof(Engine_obj,realFps),HX_("realFps",2b,23,11,08)},
	{::hx::fsFloat,(int)offsetof(Engine_obj,lastTime),HX_("lastTime",83,e5,45,e0)},
	{::hx::fsInt,(int)offsetof(Engine_obj,antiAlias),HX_("antiAlias",8e,46,17,09)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(Engine_obj,tmpVector),HX_("tmpVector",fa,44,34,ed)},
	{::hx::fsObject /*  ::hxd::Window */ ,(int)offsetof(Engine_obj,window),HX_("window",f0,93,8c,52)},
	{::hx::fsObject /*  ::h3d::_Engine::TargetTmp */ ,(int)offsetof(Engine_obj,targetTmp),HX_("targetTmp",06,52,37,69)},
	{::hx::fsObject /*  ::h3d::_Engine::TargetTmp */ ,(int)offsetof(Engine_obj,targetStack),HX_("targetStack",37,3e,63,14)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Engine_obj,currentTargetTex),HX_("currentTargetTex",9d,bf,67,5c)},
	{::hx::fsInt,(int)offsetof(Engine_obj,currentTargetLayer),HX_("currentTargetLayer",07,3d,b4,77)},
	{::hx::fsInt,(int)offsetof(Engine_obj,currentTargetMip),HX_("currentTargetMip",4a,73,62,5c)},
	{::hx::fsBool,(int)offsetof(Engine_obj,needFlushTarget),HX_("needFlushTarget",7f,ac,ac,1c)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Engine_obj,nullTexture),HX_("nullTexture",14,41,ed,cc)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Engine_obj,textureColorCache),HX_("textureColorCache",9a,3e,22,55)},
	{::hx::fsBool,(int)offsetof(Engine_obj,inRender),HX_("inRender",1b,b5,a7,8d)},
	{::hx::fsBool,(int)offsetof(Engine_obj,ready),HX_("ready",63,a0,ba,e6)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Engine_obj,resCache),HX_("resCache",c2,34,bb,af)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Engine_obj,onContextLost),HX_("onContextLost",94,ac,a5,87)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Engine_obj,onReady),HX_("onReady",c4,3e,f8,7c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Engine_obj,onResized),HX_("onResized",91,14,1e,3b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Engine_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Engine_obj::SOFTWARE_DRIVER,HX_("SOFTWARE_DRIVER",80,54,08,a7)},
	{::hx::fsInt,(void *) &Engine_obj::ANTIALIASING,HX_("ANTIALIASING",f4,6e,01,e7)},
	{::hx::fsObject /*  ::h3d::Engine */ ,(void *) &Engine_obj::CURRENT,HX_("CURRENT",19,70,b7,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Engine_obj_sMemberFields[] = {
	HX_("driver",28,80,1f,e5),
	HX_("mem",15,0e,53,00),
	HX_("hardware",a8,e2,d3,75),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("debug",53,52,1f,d7),
	HX_("drawTriangles",07,44,68,de),
	HX_("drawCalls",71,a7,26,09),
	HX_("shaderSwitches",a7,af,e4,be),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("autoResize",c3,6a,46,74),
	HX_("fullScreen",5b,ae,48,2e),
	HX_("realFps",2b,23,11,08),
	HX_("lastTime",83,e5,45,e0),
	HX_("antiAlias",8e,46,17,09),
	HX_("tmpVector",fa,44,34,ed),
	HX_("window",f0,93,8c,52),
	HX_("targetTmp",06,52,37,69),
	HX_("targetStack",37,3e,63,14),
	HX_("currentTargetTex",9d,bf,67,5c),
	HX_("currentTargetLayer",07,3d,b4,77),
	HX_("currentTargetMip",4a,73,62,5c),
	HX_("needFlushTarget",7f,ac,ac,1c),
	HX_("nullTexture",14,41,ed,cc),
	HX_("textureColorCache",9a,3e,22,55),
	HX_("inRender",1b,b5,a7,8d),
	HX_("ready",63,a0,ba,e6),
	HX_("resCache",c2,34,bb,af),
	HX_("setDriver",6a,f5,c6,44),
	HX_("setCurrent",b7,c0,c2,1e),
	HX_("init",10,3b,bb,45),
	HX_("driverName",93,52,bf,e6),
	HX_("selectShader",41,b3,58,01),
	HX_("selectMaterial",c3,8f,d7,49),
	HX_("uploadShaderBuffers",0d,04,9f,eb),
	HX_("selectBuffer",1c,b1,cc,b4),
	HX_("renderTriBuffer",55,a6,f9,09),
	HX_("renderQuadBuffer",1d,f0,82,e3),
	HX_("renderBuffer",f6,c0,ea,3f),
	HX_("renderIndexed",3b,cf,ac,dc),
	HX_("renderMultiBuffers",70,d2,63,d7),
	HX_("renderInstanced",f9,dc,c2,33),
	HX_("set_debug",b6,9a,19,fe),
	HX_("onCreate",7b,5d,bc,5b),
	HX_("onContextLost",94,ac,a5,87),
	HX_("onReady",c4,3e,f8,7c),
	HX_("onWindowResize",c3,55,db,f9),
	HX_("set_fullScreen",18,1f,5e,c4),
	HX_("onResized",91,14,1e,3b),
	HX_("resize",f4,59,7b,08),
	HX_("begin",29,ea,55,b0),
	HX_("hasFeature",7c,da,30,a5),
	HX_("end",db,03,4d,00),
	HX_("getCurrentTarget",f4,1d,6a,d4),
	HX_("pushTarget",cb,58,cc,da),
	HX_("updateNeedFlush",45,b7,9d,7d),
	HX_("pushTargets",48,59,01,98),
	HX_("popTarget",c2,c7,62,03),
	HX_("flushTarget",35,35,41,32),
	HX_("doFlushTarget",6a,5b,a5,d7),
	HX_("clearF",19,ea,a7,07),
	HX_("clear",8d,71,5b,48),
	HX_("setRenderZone",e4,da,7a,8f),
	HX_("render",56,6b,29,05),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_fps",80,90,c2,26),
	::String(null()) };

static void Engine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::SOFTWARE_DRIVER,"SOFTWARE_DRIVER");
	HX_MARK_MEMBER_NAME(Engine_obj::ANTIALIASING,"ANTIALIASING");
	HX_MARK_MEMBER_NAME(Engine_obj::CURRENT,"CURRENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Engine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::SOFTWARE_DRIVER,"SOFTWARE_DRIVER");
	HX_VISIT_MEMBER_NAME(Engine_obj::ANTIALIASING,"ANTIALIASING");
	HX_VISIT_MEMBER_NAME(Engine_obj::CURRENT,"CURRENT");
};

#endif

::hx::Class Engine_obj::__mClass;

static ::String Engine_obj_sStaticFields[] = {
	HX_("SOFTWARE_DRIVER",80,54,08,a7),
	HX_("ANTIALIASING",f4,6e,01,e7),
	HX_("CURRENT",19,70,b7,4b),
	HX_("getCurrent",43,22,45,1b),
	::String(null())
};

void Engine_obj::__register()
{
	Engine_obj _hx_dummy;
	Engine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.Engine",77,44,01,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Engine_obj::__GetStatic;
	__mClass->mSetStaticField = &Engine_obj::__SetStatic;
	__mClass->mMarkFunc = Engine_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Engine_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Engine_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Engine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Engine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Engine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Engine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Engine_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_57_boot)
HXDLIN(  57)		SOFTWARE_DRIVER = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_58_boot)
HXDLIN(  58)		ANTIALIASING = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8a143e3904060e99_88_boot)
HXDLIN(  88)		CURRENT = null();
            	}
}

} // end namespace h3d
