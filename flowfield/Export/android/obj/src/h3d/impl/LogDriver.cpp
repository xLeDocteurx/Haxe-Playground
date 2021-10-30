#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_BufferOffset
#include <h3d/BufferOffset.h>
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
#ifndef INCLUDED_h3d_impl_InputNames
#include <h3d/impl/InputNames.h>
#endif
#ifndef INCLUDED_h3d_impl_LogDriver
#include <h3d/impl/LogDriver.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
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
#ifndef INCLUDED_h3d_mat_MipMap
#include <h3d/mat/MipMap.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
#endif
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_Pixels
#include <hxd/Pixels.h>
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
#ifndef INCLUDED_hxsl_Printer
#include <hxsl/Printer.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif
#ifndef INCLUDED_hxsl_RuntimeShaderData
#include <hxsl/RuntimeShaderData.h>
#endif
#ifndef INCLUDED_hxsl_SizeDecl
#include <hxsl/SizeDecl.h>
#endif
#ifndef INCLUDED_hxsl_Type
#include <hxsl/Type.h>
#endif
#ifndef INCLUDED_hxsl_VecType
#include <hxsl/VecType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_4_new,"h3d.impl.LogDriver","new",0xacbfa0a5,"h3d.impl.LogDriver.new","h3d/impl/LogDriver.hx",4,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_18_logImpl,"h3d.impl.LogDriver","logImpl",0x3cbe6849,"h3d.impl.LogDriver.logImpl","h3d/impl/LogDriver.hx",18,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_25_hasFeature,"h3d.impl.LogDriver","hasFeature",0x9377ccd7,"h3d.impl.LogDriver.hasFeature","h3d/impl/LogDriver.hx",25,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_29_isSupportedFormat,"h3d.impl.LogDriver","isSupportedFormat",0xe31a2240,"h3d.impl.LogDriver.isSupportedFormat","h3d/impl/LogDriver.hx",29,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_33_isDisposed,"h3d.impl.LogDriver","isDisposed",0x909a0f4a,"h3d.impl.LogDriver.isDisposed","h3d/impl/LogDriver.hx",33,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_38_dispose,"h3d.impl.LogDriver","dispose",0x8c865764,"h3d.impl.LogDriver.dispose","h3d/impl/LogDriver.hx",38,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_43_begin,"h3d.impl.LogDriver","begin",0x2b8a15ae,"h3d.impl.LogDriver.begin","h3d/impl/LogDriver.hx",43,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_46_clear,"h3d.impl.LogDriver","clear",0xc38f9d12,"h3d.impl.LogDriver.clear","h3d/impl/LogDriver.hx",46,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_53_captureRenderBuffer,"h3d.impl.LogDriver","captureRenderBuffer",0xa64bf8e1,"h3d.impl.LogDriver.captureRenderBuffer","h3d/impl/LogDriver.hx",53,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_57_getDriverName,"h3d.impl.LogDriver","getDriverName",0x3674674e,"h3d.impl.LogDriver.getDriverName","h3d/impl/LogDriver.hx",57,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_62_init,"h3d.impl.LogDriver","init",0x77a5a72b,"h3d.impl.LogDriver.init","h3d/impl/LogDriver.hx",62,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_60_init,"h3d.impl.LogDriver","init",0x77a5a72b,"h3d.impl.LogDriver.init","h3d/impl/LogDriver.hx",60,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_70_resize,"h3d.impl.LogDriver","resize",0x5aed42cf,"h3d.impl.LogDriver.resize","h3d/impl/LogDriver.hx",70,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_73_selectShader,"h3d.impl.LogDriver","selectShader",0x4505325c,"h3d.impl.LogDriver.selectShader","h3d/impl/LogDriver.hx",73,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_80_selectShader,"h3d.impl.LogDriver","selectShader",0x4505325c,"h3d.impl.LogDriver.selectShader","h3d/impl/LogDriver.hx",80,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_107_selectShader,"h3d.impl.LogDriver","selectShader",0x4505325c,"h3d.impl.LogDriver.selectShader","h3d/impl/LogDriver.hx",107,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_129_selectShader,"h3d.impl.LogDriver","selectShader",0x4505325c,"h3d.impl.LogDriver.selectShader","h3d/impl/LogDriver.hx",129,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_140_selectShader,"h3d.impl.LogDriver","selectShader",0x4505325c,"h3d.impl.LogDriver.selectShader","h3d/impl/LogDriver.hx",140,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_78_selectShader,"h3d.impl.LogDriver","selectShader",0x4505325c,"h3d.impl.LogDriver.selectShader","h3d/impl/LogDriver.hx",78,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_169_getNativeShaderCode,"h3d.impl.LogDriver","getNativeShaderCode",0xbc7bb664,"h3d.impl.LogDriver.getNativeShaderCode","h3d/impl/LogDriver.hx",169,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_172_selectMaterial,"h3d.impl.LogDriver","selectMaterial",0x30f64b9e,"h3d.impl.LogDriver.selectMaterial","h3d/impl/LogDriver.hx",172,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_178_sizeOf,"h3d.impl.LogDriver","sizeOf",0x13804113,"h3d.impl.LogDriver.sizeOf","h3d/impl/LogDriver.hx",178,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_190_uploadShaderBuffers,"h3d.impl.LogDriver","uploadShaderBuffers",0xc4626e52,"h3d.impl.LogDriver.uploadShaderBuffers","h3d/impl/LogDriver.hx",190,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_236_textureInfos,"h3d.impl.LogDriver","textureInfos",0xfa625485,"h3d.impl.LogDriver.textureInfos","h3d/impl/LogDriver.hx",236,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_251_getShaderInputNames,"h3d.impl.LogDriver","getShaderInputNames",0xf5a52dde,"h3d.impl.LogDriver.getShaderInputNames","h3d/impl/LogDriver.hx",251,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_256_selectBuffer,"h3d.impl.LogDriver","selectBuffer",0xf8793037,"h3d.impl.LogDriver.selectBuffer","h3d/impl/LogDriver.hx",256,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_261_selectMultiBuffers,"h3d.impl.LogDriver","selectMultiBuffers",0xcbe2a871,"h3d.impl.LogDriver.selectMultiBuffers","h3d/impl/LogDriver.hx",261,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_266_draw,"h3d.impl.LogDriver","draw",0x745a981f,"h3d.impl.LogDriver.draw","h3d/impl/LogDriver.hx",266,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_271_setRenderZone,"h3d.impl.LogDriver","setRenderZone",0x82bd9369,"h3d.impl.LogDriver.setRenderZone","h3d/impl/LogDriver.hx",271,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_274_setRenderTarget,"h3d.impl.LogDriver","setRenderTarget",0x68be6dce,"h3d.impl.LogDriver.setRenderTarget","h3d/impl/LogDriver.hx",274,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_279_setRenderTargets,"h3d.impl.LogDriver","setRenderTargets",0x3de1a6e5,"h3d.impl.LogDriver.setRenderTargets","h3d/impl/LogDriver.hx",279,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_286_end,"h3d.impl.LogDriver","end",0xacb8d420,"h3d.impl.LogDriver.end","h3d/impl/LogDriver.hx",286,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_291_present,"h3d.impl.LogDriver","present",0x0b1611c0,"h3d.impl.LogDriver.present","h3d/impl/LogDriver.hx",291,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_294_setDebug,"h3d.impl.LogDriver","setDebug",0x26b5d0ec,"h3d.impl.LogDriver.setDebug","h3d/impl/LogDriver.hx",294,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_299_allocTexture,"h3d.impl.LogDriver","allocTexture",0xabd57401,"h3d.impl.LogDriver.allocTexture","h3d/impl/LogDriver.hx",299,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_304_allocIndexes,"h3d.impl.LogDriver","allocIndexes",0xedb40726,"h3d.impl.LogDriver.allocIndexes","h3d/impl/LogDriver.hx",304,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_311_allocVertexes,"h3d.impl.LogDriver","allocVertexes",0xb0a1eaec,"h3d.impl.LogDriver.allocVertexes","h3d/impl/LogDriver.hx",311,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_316_disposeTexture,"h3d.impl.LogDriver","disposeTexture",0x98e90dd7,"h3d.impl.LogDriver.disposeTexture","h3d/impl/LogDriver.hx",316,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_321_disposeIndexes,"h3d.impl.LogDriver","disposeIndexes",0xdac7a0fc,"h3d.impl.LogDriver.disposeIndexes","h3d/impl/LogDriver.hx",321,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_326_disposeVertexes,"h3d.impl.LogDriver","disposeVertexes",0x34b4ec56,"h3d.impl.LogDriver.disposeVertexes","h3d/impl/LogDriver.hx",326,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_331_uploadIndexBuffer,"h3d.impl.LogDriver","uploadIndexBuffer",0x43a8c036,"h3d.impl.LogDriver.uploadIndexBuffer","h3d/impl/LogDriver.hx",331,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_336_uploadIndexBytes,"h3d.impl.LogDriver","uploadIndexBytes",0x547eddf5,"h3d.impl.LogDriver.uploadIndexBytes","h3d/impl/LogDriver.hx",336,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_341_uploadVertexBuffer,"h3d.impl.LogDriver","uploadVertexBuffer",0x64b68880,"h3d.impl.LogDriver.uploadVertexBuffer","h3d/impl/LogDriver.hx",341,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_346_uploadVertexBytes,"h3d.impl.LogDriver","uploadVertexBytes",0x1fd62ceb,"h3d.impl.LogDriver.uploadVertexBytes","h3d/impl/LogDriver.hx",346,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_349_uploadTextureBitmap,"h3d.impl.LogDriver","uploadTextureBitmap",0x1b54e6ae,"h3d.impl.LogDriver.uploadTextureBitmap","h3d/impl/LogDriver.hx",349,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_354_uploadTexturePixels,"h3d.impl.LogDriver","uploadTexturePixels",0xb6f2c5ec,"h3d.impl.LogDriver.uploadTexturePixels","h3d/impl/LogDriver.hx",354,0x836466cb)
HX_LOCAL_STACK_FRAME(_hx_pos_f5e276b7af6aa39e_361_debug,"h3d.impl.LogDriver","debug",0x52537dd8,"h3d.impl.LogDriver.debug","h3d/impl/LogDriver.hx",361,0x836466cb)
namespace h3d{
namespace impl{

void LogDriver_obj::__construct( ::h3d::impl::Driver driver){
            	HX_GC_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_4_new)
HXLINE(   9)		this->logLines = null();
HXLINE(   7)		this->loggedShaders =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  12)		this->d = driver;
HXLINE(  13)		this->logEnable = true;
HXLINE(  14)		driver->logEnable = true;
            	}

Dynamic LogDriver_obj::__CreateEmpty() { return new LogDriver_obj; }

void *LogDriver_obj::_hx_vtable = 0;

Dynamic LogDriver_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LogDriver_obj > _hx_result = new LogDriver_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LogDriver_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0be5bb0b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0be5bb0b;
	} else {
		return inClassId==(int)0x7fa9e081;
	}
}

void LogDriver_obj::logImpl(::String str){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_18_logImpl)
HXDLIN(  18)		if (::hx::IsNull( this->logLines )) {
HXLINE(  19)			this->d->logImpl(str);
            		}
            		else {
HXLINE(  21)			this->logLines->push(str);
            		}
            	}


bool LogDriver_obj::hasFeature( ::h3d::impl::Feature f){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_25_hasFeature)
HXDLIN(  25)		return this->d->hasFeature(f);
            	}


bool LogDriver_obj::isSupportedFormat( ::hxd::PixelFormat fmt){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_29_isSupportedFormat)
HXDLIN(  29)		return this->d->isSupportedFormat(fmt);
            	}


bool LogDriver_obj::isDisposed(){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_33_isDisposed)
HXDLIN(  33)		return this->d->isDisposed();
            	}


void LogDriver_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_38_dispose)
HXDLIN(  38)		this->d->dispose();
            	}


void LogDriver_obj::begin(int frame){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_43_begin)
HXDLIN(  43)		this->d->begin(frame);
            	}


void LogDriver_obj::clear( ::h3d::Vector color, ::Dynamic depth, ::Dynamic stencil){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_46_clear)
HXLINE(  47)		::String str = (((((HX_("Clear color=",cd,73,75,cf) + ::Std_obj::string(color)) + HX_(" depth=",fa,c9,37,a0)) + depth) + HX_(" stencil=",e1,9e,6f,e1)) + stencil);
HXLINE(  48)		this->d->clear(color,depth,stencil);
            	}


void LogDriver_obj::captureRenderBuffer( ::hxd::Pixels pixels){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_53_captureRenderBuffer)
HXDLIN(  53)		this->d->captureRenderBuffer(pixels);
            	}


::String LogDriver_obj::getDriverName(bool details){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_57_getDriverName)
HXDLIN(  57)		return this->d->getDriverName(details);
            	}


void LogDriver_obj::init( ::Dynamic onCreate,::hx::Null< bool >  __o_forceSoftware){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onCreate) HXARGC(1)
            		void _hx_run(bool b){
            			HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_62_init)
HXLINE(  63)			::String str = (HX_("OnCreate ",25,4e,e8,8a) + ::Std_obj::string(b));
HXLINE(  64)			onCreate(b);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool forceSoftware = __o_forceSoftware.Default(false);
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_60_init)
HXDLIN(  60)		 ::h3d::impl::LogDriver _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  62)		this->d->init( ::Dynamic(new _hx_Closure_0(onCreate)),forceSoftware);
            	}


void LogDriver_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_70_resize)
HXDLIN(  70)		this->d->resize(width,height);
            	}


bool LogDriver_obj::selectShader( ::hxsl::RuntimeShader shader){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_73_selectShader)
HXLINE(  75)		this->currentShader = shader;
HXLINE(  76)		bool ret = this->d->selectShader(shader);
HXLINE(  77)		if (!(this->loggedShaders->get_bool(shader->id))) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            			::String _hx_run( ::hxsl::RuntimeShaderData shader){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hxsl::RuntimeShaderData,shader) HXARGC(1)
            				::String _hx_run( ::EReg r){
            					HX_GC_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_80_selectShader)
HXLINE(  81)					::String name = null();
HXLINE(  82)					int cid = (( (int)(::Std_obj::parseInt(r->matched(4))) ) << 2);
HXLINE(  83)					::String swiz = r->matched(5);
HXLINE(  84)					if (::hx::IsNotNull( swiz )) {
HXLINE(  85)						int d = (( (int)(swiz.charCodeAt(1)) ) - 120);
HXLINE(  86)						cid = (cid + d);
HXLINE(  87)						::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  87)						{
HXLINE(  87)							int _g1 = 1;
HXDLIN(  87)							int _g2 = swiz.length;
HXDLIN(  87)							while((_g1 < _g2)){
HXLINE(  87)								_g1 = (_g1 + 1);
HXDLIN(  87)								int i = (_g1 - 1);
HXDLIN(  87)								_g->push(::String::fromCharCode((( (int)(swiz.charCodeAt(i)) ) - d)));
            							}
            						}
HXDLIN(  87)						swiz = (HX_(".",2e,00,00,00) + _g->join(HX_("",00,00,00,00)));
            					}
HXLINE(  89)					 ::hxsl::AllocGlobal g = shader->globals;
HXLINE(  90)					while(::hx::IsNotNull( g )){
HXLINE(  91)						bool str;
HXDLIN(  91)						bool str1;
HXDLIN(  91)						bool str2;
HXDLIN(  91)						if ((g->path == HX_("__consts__",f0,cf,e3,48))) {
HXLINE(  91)							str2 = (cid >= g->pos);
            						}
            						else {
HXLINE(  91)							str2 = false;
            						}
HXDLIN(  91)						if (str2) {
HXLINE(  91)							 ::hxsl::Type _g = g->type;
HXDLIN(  91)							int str;
HXDLIN(  91)							if ((_g->_hx_getIndex() == 15)) {
HXLINE(  91)								 ::hxsl::SizeDecl _g1 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  91)								if ((_g->_hx_getObject(0).StaticCast<  ::hxsl::Type >()->_hx_getIndex() == 3)) {
HXLINE(  91)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE(  91)										int n = _g1->_hx_getInt(0);
HXDLIN(  91)										str = n;
            									}
            									else {
HXLINE(  91)										str = 0;
            									}
            								}
            								else {
HXLINE(  91)									str = 0;
            								}
            							}
            							else {
HXLINE(  91)								str = 0;
            							}
HXDLIN(  91)							str1 = (cid < (g->pos + str));
            						}
            						else {
HXLINE(  91)							str1 = false;
            						}
HXDLIN(  91)						if (str1) {
HXLINE(  91)							str = (swiz == HX_(".x",8a,28,00,00));
            						}
            						else {
HXLINE(  91)							str = false;
            						}
HXDLIN(  91)						if (str) {
HXLINE(  92)							swiz = null();
HXLINE(  93)							name = (HX_("",00,00,00,00) + shader->consts->__get((cid - g->pos)));
HXLINE(  94)							goto _hx_goto_14;
            						}
HXLINE(  96)						if ((g->pos == cid)) {
HXLINE(  97)							name = g->path;
HXLINE(  98)							goto _hx_goto_14;
            						}
HXLINE( 100)						g = g->next;
            					}
            					_hx_goto_14:;
HXLINE( 102)					if (::hx::IsNull( name )) {
HXLINE( 103)						return r->matched(0);
            					}
HXLINE( 104)					if (::hx::IsNotNull( swiz )) {
HXLINE( 104)						name = (name + swiz);
            					}
HXLINE( 105)					return name;
            				}
            				HX_END_LOCAL_FUNC1(return)

            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::hxsl::RuntimeShaderData,shader) HXARGC(1)
            				::String _hx_run( ::EReg r){
            					HX_GC_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_107_selectShader)
HXLINE( 108)					::String name = null();
HXLINE( 109)					int cid = (( (int)(::Std_obj::parseInt(r->matched(4))) ) << 2);
HXLINE( 110)					::String swiz = r->matched(5);
HXLINE( 111)					if (::hx::IsNotNull( swiz )) {
HXLINE( 112)						int d = (( (int)(swiz.charCodeAt(1)) ) - 120);
HXLINE( 113)						cid = (cid + d);
HXLINE( 114)						::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 114)						{
HXLINE( 114)							int _g1 = 1;
HXDLIN( 114)							int _g2 = swiz.length;
HXDLIN( 114)							while((_g1 < _g2)){
HXLINE( 114)								_g1 = (_g1 + 1);
HXDLIN( 114)								int i = (_g1 - 1);
HXDLIN( 114)								_g->push(::String::fromCharCode((( (int)(swiz.charCodeAt(i)) ) - d)));
            							}
            						}
HXDLIN( 114)						swiz = (HX_(".",2e,00,00,00) + _g->join(HX_("",00,00,00,00)));
            					}
HXLINE( 116)					 ::hxsl::AllocParam p = shader->params;
HXLINE( 117)					while(::hx::IsNotNull( p )){
HXLINE( 118)						if ((p->pos == cid)) {
HXLINE( 119)							name = p->name;
HXLINE( 120)							goto _hx_goto_16;
            						}
HXLINE( 122)						p = p->next;
            					}
            					_hx_goto_16:;
HXLINE( 124)					if (::hx::IsNull( name )) {
HXLINE( 125)						return r->matched(0);
            					}
HXLINE( 126)					if (::hx::IsNotNull( swiz )) {
HXLINE( 126)						name = (name + swiz);
            					}
HXLINE( 127)					return name;
            				}
            				HX_END_LOCAL_FUNC1(return)

            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::hxsl::RuntimeShaderData,shader) HXARGC(1)
            				::String _hx_run( ::EReg r){
            					HX_GC_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_129_selectShader)
HXLINE( 130)					 ::Dynamic name = null();
HXLINE( 131)					 ::Dynamic cid = ::Std_obj::parseInt(r->matched(4));
HXLINE( 132)					 ::hxsl::AllocParam t = shader->textures;
HXLINE( 133)					while(::hx::IsNotNull( t )){
HXLINE( 134)						bool str;
HXDLIN( 134)						if (::hx::IsEq( t->pos,cid )) {
HXLINE( 134)							str = ::hx::IsPointerEq( t->type,::hxsl::Type_obj::TSampler2D_dyn() );
            						}
            						else {
HXLINE( 134)							str = false;
            						}
HXDLIN( 134)						if (str) {
HXLINE( 135)							return t->name;
            						}
HXLINE( 136)						t = t->next;
            					}
HXLINE( 138)					return r->matched(0);
            				}
            				HX_END_LOCAL_FUNC1(return)

            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::hxsl::RuntimeShaderData,shader) HXARGC(1)
            				::String _hx_run( ::EReg r){
            					HX_GC_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_140_selectShader)
HXLINE( 141)					 ::Dynamic name = null();
HXLINE( 142)					 ::Dynamic cid = ::Std_obj::parseInt(r->matched(4));
HXLINE( 143)					 ::hxsl::AllocParam t = shader->textures;
HXLINE( 144)					while(::hx::IsNotNull( t )){
HXLINE( 145)						bool str;
HXDLIN( 145)						if (::hx::IsEq( t->pos,cid )) {
HXLINE( 145)							str = ::hx::IsPointerEq( t->type,::hxsl::Type_obj::TSamplerCube_dyn() );
            						}
            						else {
HXLINE( 145)							str = false;
            						}
HXDLIN( 145)						if (str) {
HXLINE( 146)							return t->name;
            						}
HXLINE( 147)						t = t->next;
            					}
HXLINE( 149)					return r->matched(0);
            				}
            				HX_END_LOCAL_FUNC1(return)

            				HX_GC_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_78_selectShader)
HXLINE(  79)				::String str = ::hxsl::Printer_obj::shaderToString(shader->data,null());
HXLINE(  80)				str =  ::EReg_obj::__alloc( HX_CTX ,HX_("((fragment)|(vertex))Globals\\[([0-9]+)\\](.[xyz]+)?",c1,41,35,d9),HX_("g",67,00,00,00))->map(str, ::Dynamic(new _hx_Closure_0(shader)));
HXLINE( 107)				str =  ::EReg_obj::__alloc( HX_CTX ,HX_("((fragment)|(vertex))Params\\[([0-9]+)\\](.[xyz]+)?",49,5d,bd,bd),HX_("g",67,00,00,00))->map(str, ::Dynamic(new _hx_Closure_1(shader)));
HXLINE( 129)				str =  ::EReg_obj::__alloc( HX_CTX ,HX_("((fragment)|(vertex))Textures\\[([0-9]+)\\]",b3,7d,ea,94),HX_("g",67,00,00,00))->map(str, ::Dynamic(new _hx_Closure_2(shader)));
HXLINE( 140)				str =  ::EReg_obj::__alloc( HX_CTX ,HX_("((fragment)|(vertex))TexturesCube\\[([0-9]+)\\]",c8,36,34,e8),HX_("g",67,00,00,00))->map(str, ::Dynamic(new _hx_Closure_3(shader)));
HXLINE( 151)				return str;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  78)			 ::Dynamic fmt =  ::Dynamic(new _hx_Closure_4());
HXLINE( 153)			::String str = (fmt(shader->vertex) + HX_("\n",0a,00,00,00));
HXDLIN( 153)			::String str1 = (str + fmt(shader->fragment));
HXLINE( 156)			::String str2 = (HX_("\t",09,00,00,00) + str1.split(HX_("\n",0a,00,00,00))->join(HX_("\n\t",bf,08,00,00)));
HXLINE( 157)			::String str3 = this->getNativeShaderCode(shader);
HXLINE( 158)			if (::hx::IsNotNull( str3 )) {
HXLINE( 160)				::String str = (HX_("\t",09,00,00,00) + str3.split(HX_("\n",0a,00,00,00))->join(HX_("\n\t",bf,08,00,00)));
            			}
HXLINE( 163)			this->loggedShaders->set(shader->id,true);
            		}
HXLINE( 165)		return ret;
            	}


::String LogDriver_obj::getNativeShaderCode( ::hxsl::RuntimeShader shader){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_169_getNativeShaderCode)
HXDLIN( 169)		return this->d->getNativeShaderCode(shader);
            	}


void LogDriver_obj::selectMaterial( ::h3d::mat::Pass pass){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_172_selectMaterial)
HXLINE( 173)		{
HXLINE( 173)			::String str = ((HX_("Select Material Cull=",96,e2,9e,11) + ::Std_obj::string(pass->culling)) + HX_(" depth=",fa,c9,37,a0));
HXDLIN( 173)			::String str1 = (str + ::Std_obj::string(pass->depthTest));
HXDLIN( 173)			::String str2;
HXDLIN( 173)			if (pass->depthWrite) {
HXLINE( 173)				str2 = HX_("",00,00,00,00);
            			}
            			else {
HXLINE( 173)				str2 = HX_(" nowrite",de,c4,7d,36);
            			}
HXDLIN( 173)			::String str3 = ((((str1 + str2) + HX_(" blend=",ec,36,05,d4)) + ::Std_obj::string(pass->blendSrc)) + HX_(",",2c,00,00,00));
HXDLIN( 173)			::String str4 = ((str3 + ::Std_obj::string(pass->blendDst)) + HX_(" color=",9a,9d,35,f9));
HXDLIN( 173)			::String str5 = (str4 + pass->colorMask);
            		}
HXLINE( 174)		this->d->selectMaterial(pass);
            	}


int LogDriver_obj::sizeOf( ::hxsl::Type t){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_178_sizeOf)
HXDLIN( 178)		switch((int)(t->_hx_getIndex())){
            			case (int)0: {
HXLINE( 179)				return 0;
            			}
            			break;
            			case (int)1: case (int)3: {
HXLINE( 180)				return 1;
            			}
            			break;
            			case (int)5: {
HXLINE( 181)				 ::hxsl::VecType _g = t->_hx_getObject(1).StaticCast<  ::hxsl::VecType >();
HXDLIN( 181)				int n = t->_hx_getInt(0);
HXDLIN( 181)				return n;
            			}
            			break;
            			case (int)6: {
HXLINE( 183)				return 9;
            			}
            			break;
            			case (int)7: {
HXLINE( 182)				return 16;
            			}
            			break;
            			case (int)8: {
HXLINE( 184)				return 12;
            			}
            			break;
            			case (int)15: {
HXLINE( 185)				 ::hxsl::SizeDecl _g = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 185)				if ((_g->_hx_getIndex() == 0)) {
HXLINE( 185)					int n = _g->_hx_getInt(0);
HXDLIN( 185)					 ::hxsl::Type t1 = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 185)					return (this->sizeOf(t1) * n);
            				}
            				else {
HXLINE( 186)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("assert ",9a,a6,da,36) + ::Std_obj::string(t))));
            				}
            			}
            			break;
            			default:{
HXLINE( 186)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("assert ",9a,a6,da,36) + ::Std_obj::string(t))));
            			}
            		}
HXLINE( 178)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogDriver_obj,sizeOf,return )

void LogDriver_obj::uploadShaderBuffers( ::h3d::shader::Buffers buffers,int which){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_190_uploadShaderBuffers)
HXDLIN( 190)		 ::h3d::impl::LogDriver _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 191)		switch((int)(which)){
            			case (int)0: {
HXLINE( 202)				{
HXLINE( 202)					 ::hxsl::RuntimeShaderData s = this->currentShader->vertex;
HXDLIN( 202)					 ::h3d::shader::ShaderBuffers buf = buffers->vertex;
HXDLIN( 202)					if ((s->globalsSize != 0)) {
HXLINE( 202)						 ::hxsl::AllocGlobal g = s->globals;
HXDLIN( 202)						while(::hx::IsNotNull( g )){
HXLINE( 202)							{
HXLINE( 202)								::String str = ((((HX_("\t@",17,08,00,00) + g->pos) + HX_(" ",20,00,00,00)) + g->path) + HX_("=",3d,00,00,00));
HXDLIN( 202)								::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 202)								{
HXLINE( 202)									int _g1 = 0;
HXDLIN( 202)									int _g2 = _gthis->sizeOf(g->type);
HXDLIN( 202)									while((_g1 < _g2)){
HXLINE( 202)										_g1 = (_g1 + 1);
HXDLIN( 202)										int i = (_g1 - 1);
HXDLIN( 202)										_g->push(::hxd::Math_obj::fmt(( (Float)(_hx_array_unsafe_get(buf->globals,(g->pos + i))) )));
            									}
            								}
HXDLIN( 202)								::String str1 = (str + ::Std_obj::string(_g));
            							}
HXDLIN( 202)							g = g->next;
            						}
            					}
            				}
HXLINE( 203)				{
HXLINE( 203)					 ::hxsl::RuntimeShaderData s1 = this->currentShader->fragment;
HXDLIN( 203)					 ::h3d::shader::ShaderBuffers buf1 = buffers->fragment;
HXDLIN( 203)					if ((s1->globalsSize != 0)) {
HXLINE( 203)						 ::hxsl::AllocGlobal g = s1->globals;
HXDLIN( 203)						while(::hx::IsNotNull( g )){
HXLINE( 203)							{
HXLINE( 203)								::String str = ((((HX_("\t@",17,08,00,00) + g->pos) + HX_(" ",20,00,00,00)) + g->path) + HX_("=",3d,00,00,00));
HXDLIN( 203)								::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 203)								{
HXLINE( 203)									int _g1 = 0;
HXDLIN( 203)									int _g2 = _gthis->sizeOf(g->type);
HXDLIN( 203)									while((_g1 < _g2)){
HXLINE( 203)										_g1 = (_g1 + 1);
HXDLIN( 203)										int i = (_g1 - 1);
HXDLIN( 203)										_g->push(::hxd::Math_obj::fmt(( (Float)(_hx_array_unsafe_get(buf1->globals,(g->pos + i))) )));
            									}
            								}
HXDLIN( 203)								::String str1 = (str + ::Std_obj::string(_g));
            							}
HXDLIN( 203)							g = g->next;
            						}
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 218)				{
HXLINE( 218)					 ::hxsl::RuntimeShaderData s = this->currentShader->vertex;
HXDLIN( 218)					 ::h3d::shader::ShaderBuffers buf = buffers->vertex;
HXDLIN( 218)					if ((s->paramsSize != 0)) {
HXLINE( 218)						 ::hxsl::AllocParam p = s->params;
HXDLIN( 218)						while(::hx::IsNotNull( p )){
HXLINE( 218)							int pos = p->pos;
HXDLIN( 218)							{
HXLINE( 218)								::String str = ((((HX_("\t@",17,08,00,00) + pos) + HX_(" ",20,00,00,00)) + p->name) + HX_("=",3d,00,00,00));
HXDLIN( 218)								::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 218)								{
HXLINE( 218)									int _g1 = 0;
HXDLIN( 218)									int _g2 = _gthis->sizeOf(p->type);
HXDLIN( 218)									while((_g1 < _g2)){
HXLINE( 218)										_g1 = (_g1 + 1);
HXDLIN( 218)										int i = (_g1 - 1);
HXDLIN( 218)										_g->push(::hxd::Math_obj::fmt(( (Float)(_hx_array_unsafe_get(buf->params,(p->pos + i))) )));
            									}
            								}
HXDLIN( 218)								::String str1 = (str + ::Std_obj::string(_g));
            							}
HXDLIN( 218)							p = p->next;
            						}
            					}
            				}
HXLINE( 219)				{
HXLINE( 219)					 ::hxsl::RuntimeShaderData s1 = this->currentShader->fragment;
HXDLIN( 219)					 ::h3d::shader::ShaderBuffers buf1 = buffers->fragment;
HXDLIN( 219)					if ((s1->paramsSize != 0)) {
HXLINE( 219)						 ::hxsl::AllocParam p = s1->params;
HXDLIN( 219)						while(::hx::IsNotNull( p )){
HXLINE( 219)							int pos = p->pos;
HXDLIN( 219)							{
HXLINE( 219)								::String str = ((((HX_("\t@",17,08,00,00) + pos) + HX_(" ",20,00,00,00)) + p->name) + HX_("=",3d,00,00,00));
HXDLIN( 219)								::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 219)								{
HXLINE( 219)									int _g1 = 0;
HXDLIN( 219)									int _g2 = _gthis->sizeOf(p->type);
HXDLIN( 219)									while((_g1 < _g2)){
HXLINE( 219)										_g1 = (_g1 + 1);
HXDLIN( 219)										int i = (_g1 - 1);
HXDLIN( 219)										_g->push(::hxd::Math_obj::fmt(( (Float)(_hx_array_unsafe_get(buf1->params,(p->pos + i))) )));
            									}
            								}
HXDLIN( 219)								::String str1 = (str + ::Std_obj::string(_g));
            							}
HXDLIN( 219)							p = p->next;
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 230)				{
HXLINE( 230)					 ::hxsl::RuntimeShaderData s = this->currentShader->vertex;
HXDLIN( 230)					 ::h3d::shader::ShaderBuffers buf = buffers->vertex;
HXDLIN( 230)					 ::hxsl::AllocParam t = s->textures;
HXDLIN( 230)					while(::hx::IsNotNull( t )){
HXLINE( 230)						{
HXLINE( 230)							::String str;
HXDLIN( 230)							if (s->vertex) {
HXLINE( 230)								str = HX_("Vertex",84,4f,dc,d5);
            							}
            							else {
HXLINE( 230)								str = HX_("Fragment",f0,1b,97,87);
            							}
HXDLIN( 230)							::String str1 = ((((((HX_("Set ",5e,be,29,37) + str) + HX_(" Texture@",45,d3,ad,9d)) + t->pos) + HX_(" ",20,00,00,00)) + t->name) + HX_("=",3d,00,00,00));
HXDLIN( 230)							::String str2 = (str1 + _gthis->textureInfos(buf->tex,t->pos));
            						}
HXDLIN( 230)						t = t->next;
            					}
            				}
HXLINE( 231)				{
HXLINE( 231)					 ::hxsl::RuntimeShaderData s1 = this->currentShader->fragment;
HXDLIN( 231)					 ::h3d::shader::ShaderBuffers buf1 = buffers->fragment;
HXDLIN( 231)					 ::hxsl::AllocParam t1 = s1->textures;
HXDLIN( 231)					while(::hx::IsNotNull( t1 )){
HXLINE( 231)						{
HXLINE( 231)							::String str;
HXDLIN( 231)							if (s1->vertex) {
HXLINE( 231)								str = HX_("Vertex",84,4f,dc,d5);
            							}
            							else {
HXLINE( 231)								str = HX_("Fragment",f0,1b,97,87);
            							}
HXDLIN( 231)							::String str1 = ((((((HX_("Set ",5e,be,29,37) + str) + HX_(" Texture@",45,d3,ad,9d)) + t1->pos) + HX_(" ",20,00,00,00)) + t1->name) + HX_("=",3d,00,00,00));
HXDLIN( 231)							::String str2 = (str1 + _gthis->textureInfos(buf1->tex,t1->pos));
            						}
HXDLIN( 231)						t1 = t1->next;
            					}
            				}
            			}
            			break;
            			case (int)3: {
            			}
            			break;
            		}
HXLINE( 233)		this->d->uploadShaderBuffers(buffers,which);
            	}


::String LogDriver_obj::textureInfos(::Array< ::Dynamic> buf,int tid){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_236_textureInfos)
HXLINE( 237)		bool _hx_tmp;
HXDLIN( 237)		if ((tid >= 0)) {
HXLINE( 237)			_hx_tmp = (tid >= buf->length);
            		}
            		else {
HXLINE( 237)			_hx_tmp = true;
            		}
HXDLIN( 237)		if (_hx_tmp) {
HXLINE( 238)			return HX_("OUT OF BOUNDS",2c,f4,d9,b4);
            		}
HXLINE( 239)		 ::h3d::mat::Texture t = ( ( ::h3d::mat::Texture)(_hx_array_unsafe_get(buf,tid)) );
HXLINE( 240)		if (::hx::IsNull( t )) {
HXLINE( 241)			return HX_("NULL",87,66,cf,33);
            		}
HXLINE( 242)		::String inf = (HX_("",00,00,00,00) + ::Std_obj::string(t));
HXLINE( 243)		if (::hx::IsPointerNotEq( t->wrap,::h3d::mat::Wrap_obj::Clamp_dyn() )) {
HXLINE( 244)			inf = (inf + (HX_(" wrap=",13,e3,be,9b) + ::Std_obj::string(t->wrap)));
            		}
HXLINE( 245)		if (::hx::IsPointerNotEq( t->mipMap,::h3d::mat::MipMap_obj::None_dyn() )) {
HXLINE( 246)			inf = (inf + (HX_(" mip=",49,e0,2e,b5) + ::Std_obj::string(t->mipMap)));
            		}
HXLINE( 247)		return inf;
            	}


HX_DEFINE_DYNAMIC_FUNC2(LogDriver_obj,textureInfos,return )

 ::h3d::impl::InputNames LogDriver_obj::getShaderInputNames(){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_251_getShaderInputNames)
HXDLIN( 251)		return this->d->getShaderInputNames();
            	}


void LogDriver_obj::selectBuffer( ::h3d::Buffer buffer){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_256_selectBuffer)
HXDLIN( 256)		this->d->selectBuffer(buffer);
            	}


void LogDriver_obj::selectMultiBuffers( ::h3d::BufferOffset buffers){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_261_selectMultiBuffers)
HXDLIN( 261)		this->d->selectMultiBuffers(buffers);
            	}


void LogDriver_obj::draw( ::Dynamic ibuf,int startIndex,int ntriangles){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_266_draw)
HXDLIN( 266)		this->d->draw(ibuf,startIndex,ntriangles);
            	}


void LogDriver_obj::setRenderZone(int x,int y,int width,int height){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_271_setRenderZone)
HXDLIN( 271)		this->d->setRenderZone(x,y,width,height);
            	}


void LogDriver_obj::setRenderTarget( ::h3d::mat::Texture tex,::hx::Null< int >  __o_face,::hx::Null< int >  __o_mipMap){
            		int face = __o_face.Default(0);
            		int mipMap = __o_mipMap.Default(0);
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_274_setRenderTarget)
HXLINE( 275)		::String str = (((((HX_("SetRenderTarget ",17,da,b2,5e) + ::Std_obj::string(tex)) + HX_(" ",20,00,00,00)) + face) + HX_(" ",20,00,00,00)) + mipMap);
HXLINE( 276)		this->d->setRenderTarget(tex,face,null());
            	}


void LogDriver_obj::setRenderTargets(::Array< ::Dynamic> textures){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_279_setRenderTargets)
HXLINE( 280)		::String str = (HX_("SetRenderTargets ",76,42,cc,7d) + ::Std_obj::string(textures));
HXLINE( 281)		this->d->setRenderTargets(textures);
            	}


void LogDriver_obj::end(){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_286_end)
HXDLIN( 286)		this->d->end();
            	}


void LogDriver_obj::present(){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_291_present)
HXDLIN( 291)		this->d->present();
            	}


void LogDriver_obj::setDebug(bool b){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_294_setDebug)
HXLINE( 295)		::String str = (HX_("SetDebug ",8f,0b,c3,65) + ::Std_obj::string(b));
HXLINE( 296)		this->d->setDebug(b);
            	}


 ::Dynamic LogDriver_obj::allocTexture( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_299_allocTexture)
HXLINE( 300)		::String str = (HX_("AllocTexture ",5a,a4,9d,03) + ::Std_obj::string(t));
HXLINE( 301)		return this->d->allocTexture(t);
            	}


 ::Dynamic LogDriver_obj::allocIndexes(int count,bool is32){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_304_allocIndexes)
HXLINE( 305)		::String str = (((HX_("AllocIndexes ",95,d1,7f,64) + count) + HX_(" ",20,00,00,00)) + ::Std_obj::string(is32));
HXLINE( 306)		return this->d->allocIndexes(count,is32);
            	}


 ::Dynamic LogDriver_obj::allocVertexes( ::h3d::impl::ManagedBuffer m){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_311_allocVertexes)
HXDLIN( 311)		return this->d->allocVertexes(m);
            	}


void LogDriver_obj::disposeTexture( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_316_disposeTexture)
HXDLIN( 316)		this->d->disposeTexture(t);
            	}


void LogDriver_obj::disposeIndexes( ::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_321_disposeIndexes)
HXDLIN( 321)		this->d->disposeIndexes(i);
            	}


void LogDriver_obj::disposeVertexes( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_326_disposeVertexes)
HXDLIN( 326)		this->d->disposeVertexes(v);
            	}


void LogDriver_obj::uploadIndexBuffer( ::Dynamic i,int startIndice,int indiceCount,::Array< int > buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_331_uploadIndexBuffer)
HXDLIN( 331)		this->d->uploadIndexBuffer(i,startIndice,indiceCount,buf,bufPos);
            	}


void LogDriver_obj::uploadIndexBytes( ::Dynamic i,int startIndice,int indiceCount, ::haxe::io::Bytes buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_336_uploadIndexBytes)
HXDLIN( 336)		this->d->uploadIndexBytes(i,startIndice,indiceCount,buf,bufPos);
            	}


void LogDriver_obj::uploadVertexBuffer( ::Dynamic v,int startVertex,int vertexCount,::Array< Float > buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_341_uploadVertexBuffer)
HXDLIN( 341)		this->d->uploadVertexBuffer(v,startVertex,vertexCount,buf,bufPos);
            	}


void LogDriver_obj::uploadVertexBytes( ::Dynamic v,int startVertex,int vertexCount, ::haxe::io::Bytes buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_346_uploadVertexBytes)
HXDLIN( 346)		this->d->uploadVertexBytes(v,startVertex,vertexCount,buf,bufPos);
            	}


void LogDriver_obj::uploadTextureBitmap( ::h3d::mat::Texture t, ::hxd::BitmapData bmp,int mipLevel,int side){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_349_uploadTextureBitmap)
HXLINE( 350)		::String str = (((((HX_("UploadTextureBitmap ",b7,cb,26,30) + ::Std_obj::string(t)) + HX_(" mip=",49,e0,2e,b5)) + mipLevel) + HX_(" side=",a6,e2,33,48)) + side);
HXLINE( 351)		this->d->uploadTextureBitmap(t,bmp,mipLevel,side);
            	}


void LogDriver_obj::uploadTexturePixels( ::h3d::mat::Texture t, ::hxd::Pixels pixels,int mipLevel,int side){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_354_uploadTexturePixels)
HXLINE( 355)		::String str = (((((HX_("UploadTexturePixels ",b9,42,ac,be) + ::Std_obj::string(t)) + HX_(" mip=",49,e0,2e,b5)) + mipLevel) + HX_(" side=",a6,e2,33,48)) + side);
HXLINE( 356)		this->d->uploadTexturePixels(t,pixels,mipLevel,side);
            	}


void LogDriver_obj::debug( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_f5e276b7af6aa39e_361_debug)
HXDLIN( 361)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Requires -debug",58,07,98,cc)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LogDriver_obj,debug,(void))


::hx::ObjectPtr< LogDriver_obj > LogDriver_obj::__new( ::h3d::impl::Driver driver) {
	::hx::ObjectPtr< LogDriver_obj > __this = new LogDriver_obj();
	__this->__construct(driver);
	return __this;
}

::hx::ObjectPtr< LogDriver_obj > LogDriver_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::impl::Driver driver) {
	LogDriver_obj *__this = (LogDriver_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LogDriver_obj), true, "h3d.impl.LogDriver"));
	*(void **)__this = LogDriver_obj::_hx_vtable;
	__this->__construct(driver);
	return __this;
}

LogDriver_obj::LogDriver_obj()
{
}

void LogDriver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogDriver);
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(loggedShaders,"loggedShaders");
	HX_MARK_MEMBER_NAME(currentShader,"currentShader");
	HX_MARK_MEMBER_NAME(logLines,"logLines");
	HX_MARK_END_CLASS();
}

void LogDriver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(loggedShaders,"loggedShaders");
	HX_VISIT_MEMBER_NAME(currentShader,"currentShader");
	HX_VISIT_MEMBER_NAME(logLines,"logLines");
}

::hx::Val LogDriver_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return ::hx::Val( begin_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"sizeOf") ) { return ::hx::Val( sizeOf_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"logImpl") ) { return ::hx::Val( logImpl_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"present") ) { return ::hx::Val( present_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"logLines") ) { return ::hx::Val( logLines ); }
		if (HX_FIELD_EQ(inName,"setDebug") ) { return ::hx::Val( setDebug_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasFeature") ) { return ::hx::Val( hasFeature_dyn() ); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectShader") ) { return ::hx::Val( selectShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"textureInfos") ) { return ::hx::Val( textureInfos_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectBuffer") ) { return ::hx::Val( selectBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocTexture") ) { return ::hx::Val( allocTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocIndexes") ) { return ::hx::Val( allocIndexes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loggedShaders") ) { return ::hx::Val( loggedShaders ); }
		if (HX_FIELD_EQ(inName,"currentShader") ) { return ::hx::Val( currentShader ); }
		if (HX_FIELD_EQ(inName,"getDriverName") ) { return ::hx::Val( getDriverName_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRenderZone") ) { return ::hx::Val( setRenderZone_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocVertexes") ) { return ::hx::Val( allocVertexes_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectMaterial") ) { return ::hx::Val( selectMaterial_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeTexture") ) { return ::hx::Val( disposeTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeIndexes") ) { return ::hx::Val( disposeIndexes_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setRenderTarget") ) { return ::hx::Val( setRenderTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeVertexes") ) { return ::hx::Val( disposeVertexes_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setRenderTargets") ) { return ::hx::Val( setRenderTargets_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadIndexBytes") ) { return ::hx::Val( uploadIndexBytes_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isSupportedFormat") ) { return ::hx::Val( isSupportedFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadIndexBuffer") ) { return ::hx::Val( uploadIndexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadVertexBytes") ) { return ::hx::Val( uploadVertexBytes_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"selectMultiBuffers") ) { return ::hx::Val( selectMultiBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadVertexBuffer") ) { return ::hx::Val( uploadVertexBuffer_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"captureRenderBuffer") ) { return ::hx::Val( captureRenderBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNativeShaderCode") ) { return ::hx::Val( getNativeShaderCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadShaderBuffers") ) { return ::hx::Val( uploadShaderBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"getShaderInputNames") ) { return ::hx::Val( getShaderInputNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadTextureBitmap") ) { return ::hx::Val( uploadTextureBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadTexturePixels") ) { return ::hx::Val( uploadTexturePixels_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LogDriver_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug_dyn(); return true; }
	}
	return false;
}

::hx::Val LogDriver_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast<  ::h3d::impl::Driver >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"logLines") ) { logLines=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loggedShaders") ) { loggedShaders=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentShader") ) { currentShader=inValue.Cast<  ::hxsl::RuntimeShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogDriver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("loggedShaders",4c,87,73,e4));
	outFields->push(HX_("currentShader",3e,40,7d,00));
	outFields->push(HX_("logLines",db,1a,08,60));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LogDriver_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::impl::Driver */ ,(int)offsetof(LogDriver_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(LogDriver_obj,loggedShaders),HX_("loggedShaders",4c,87,73,e4)},
	{::hx::fsObject /*  ::hxsl::RuntimeShader */ ,(int)offsetof(LogDriver_obj,currentShader),HX_("currentShader",3e,40,7d,00)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(LogDriver_obj,logLines),HX_("logLines",db,1a,08,60)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LogDriver_obj_sStaticStorageInfo = 0;
#endif

static ::String LogDriver_obj_sMemberFields[] = {
	HX_("d",64,00,00,00),
	HX_("loggedShaders",4c,87,73,e4),
	HX_("currentShader",3e,40,7d,00),
	HX_("logLines",db,1a,08,60),
	HX_("logImpl",84,91,84,6b),
	HX_("hasFeature",7c,da,30,a5),
	HX_("isSupportedFormat",3b,43,d0,d7),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("dispose",9f,80,4c,bb),
	HX_("begin",29,ea,55,b0),
	HX_("clear",8d,71,5b,48),
	HX_("captureRenderBuffer",9c,8e,88,cd),
	HX_("getDriverName",c9,ae,31,43),
	HX_("init",10,3b,bb,45),
	HX_("resize",f4,59,7b,08),
	HX_("selectShader",41,b3,58,01),
	HX_("getNativeShaderCode",1f,4c,b8,e3),
	HX_("selectMaterial",c3,8f,d7,49),
	HX_("sizeOf",38,58,0e,c1),
	HX_("uploadShaderBuffers",0d,04,9f,eb),
	HX_("textureInfos",6a,d5,b5,b6),
	HX_("getShaderInputNames",99,c3,e1,1c),
	HX_("selectBuffer",1c,b1,cc,b4),
	HX_("selectMultiBuffers",16,63,89,f6),
	HX_("draw",04,2c,70,42),
	HX_("setRenderZone",e4,da,7a,8f),
	HX_("setRenderTarget",09,ca,f8,14),
	HX_("setRenderTargets",4a,fe,b7,44),
	HX_("end",db,03,4d,00),
	HX_("present",fb,3a,dc,39),
	HX_("setDebug",51,bb,53,e5),
	HX_("allocTexture",e6,f4,28,68),
	HX_("allocIndexes",0b,88,07,aa),
	HX_("allocVertexes",67,32,5f,bd),
	HX_("disposeTexture",fc,51,ca,b1),
	HX_("disposeIndexes",21,e5,a8,f3),
	HX_("disposeVertexes",91,48,ef,e0),
	HX_("uploadIndexBuffer",31,e1,5e,38),
	HX_("uploadIndexBytes",5a,35,55,5b),
	HX_("uploadVertexBuffer",25,43,5d,8f),
	HX_("uploadVertexBytes",e6,4d,8c,14),
	HX_("uploadTextureBitmap",69,7c,91,42),
	HX_("uploadTexturePixels",a7,5b,2f,de),
	::String(null()) };

::hx::Class LogDriver_obj::__mClass;

static ::String LogDriver_obj_sStaticFields[] = {
	HX_("debug",53,52,1f,d7),
	::String(null())
};

void LogDriver_obj::__register()
{
	LogDriver_obj _hx_dummy;
	LogDriver_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.LogDriver",33,6a,97,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LogDriver_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LogDriver_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LogDriver_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LogDriver_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogDriver_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogDriver_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace impl
