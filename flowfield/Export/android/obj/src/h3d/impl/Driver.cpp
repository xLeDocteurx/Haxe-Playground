#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IBounds
#include <h2d/col/IBounds.h>
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
#ifndef INCLUDED_h3d_impl_InstanceBuffer
#include <h3d/impl/InstanceBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_QueryKind
#include <h3d/impl/QueryKind.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderFlag
#include <h3d/impl/RenderFlag.h>
#endif
#ifndef INCLUDED_h3d_mat_DepthBuffer
#include <h3d/mat/DepthBuffer.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_Buffers
#include <h3d/shader/Buffers.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
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
#ifndef INCLUDED_hxsl_RuntimeShader
#include <hxsl/RuntimeShader.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_145_hasFeature,"h3d.impl.Driver","hasFeature",0x56a1e669,"h3d.impl.Driver.hasFeature","h3d/impl/Driver.hx",145,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_148_setRenderFlag,"h3d.impl.Driver","setRenderFlag",0x6f6faa97,"h3d.impl.Driver.setRenderFlag","h3d/impl/Driver.hx",148,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_152_isSupportedFormat,"h3d.impl.Driver","isSupportedFormat",0xc51a3eee,"h3d.impl.Driver.isSupportedFormat","h3d/impl/Driver.hx",152,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_156_isDisposed,"h3d.impl.Driver","isDisposed",0x53c428dc,"h3d.impl.Driver.isDisposed","h3d/impl/Driver.hx",156,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_159_dispose,"h3d.impl.Driver","dispose",0x6f6c6e92,"h3d.impl.Driver.dispose","h3d/impl/Driver.hx",159,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_162_begin,"h3d.impl.Driver","begin",0x55fa655c,"h3d.impl.Driver.begin","h3d/impl/Driver.hx",162,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_165_log,"h3d.impl.Driver","log",0xd9618cf7,"h3d.impl.Driver.log","h3d/impl/Driver.hx",165,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_172_generateMipMaps,"h3d.impl.Driver","generateMipMaps",0x6062b849,"h3d.impl.Driver.generateMipMaps","h3d/impl/Driver.hx",172,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_176_getNativeShaderCode,"h3d.impl.Driver","getNativeShaderCode",0x343eda92,"h3d.impl.Driver.getNativeShaderCode","h3d/impl/Driver.hx",176,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_179_logImpl,"h3d.impl.Driver","logImpl",0x1fa47f77,"h3d.impl.Driver.logImpl","h3d/impl/Driver.hx",179,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_182_clear,"h3d.impl.Driver","clear",0xedffecc0,"h3d.impl.Driver.clear","h3d/impl/Driver.hx",182,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_185_captureRenderBuffer,"h3d.impl.Driver","captureRenderBuffer",0x1e0f1d0f,"h3d.impl.Driver.captureRenderBuffer","h3d/impl/Driver.hx",185,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_189_capturePixels,"h3d.impl.Driver","capturePixels",0x5d37c286,"h3d.impl.Driver.capturePixels","h3d/impl/Driver.hx",189,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_194_getDriverName,"h3d.impl.Driver","getDriverName",0x306114fc,"h3d.impl.Driver.getDriverName","h3d/impl/Driver.hx",194,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_197_init,"h3d.impl.Driver","init",0x59fd673d,"h3d.impl.Driver.init","h3d/impl/Driver.hx",197,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_200_resize,"h3d.impl.Driver","resize",0x52c2ab61,"h3d.impl.Driver.resize","h3d/impl/Driver.hx",200,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_204_selectShader,"h3d.impl.Driver","selectShader",0xba16546e,"h3d.impl.Driver.selectShader","h3d/impl/Driver.hx",204,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_207_selectMaterial,"h3d.impl.Driver","selectMaterial",0xe6219630,"h3d.impl.Driver.selectMaterial","h3d/impl/Driver.hx",207,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_210_uploadShaderBuffers,"h3d.impl.Driver","uploadShaderBuffers",0x3c259280,"h3d.impl.Driver.uploadShaderBuffers","h3d/impl/Driver.hx",210,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_214_getShaderInputNames,"h3d.impl.Driver","getShaderInputNames",0x6d68520c,"h3d.impl.Driver.getShaderInputNames","h3d/impl/Driver.hx",214,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_217_selectBuffer,"h3d.impl.Driver","selectBuffer",0x6d8a5249,"h3d.impl.Driver.selectBuffer","h3d/impl/Driver.hx",217,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_220_selectMultiBuffers,"h3d.impl.Driver","selectMultiBuffers",0xa9fba403,"h3d.impl.Driver.selectMultiBuffers","h3d/impl/Driver.hx",220,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_223_draw,"h3d.impl.Driver","draw",0x56b25831,"h3d.impl.Driver.draw","h3d/impl/Driver.hx",223,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_226_drawInstanced,"h3d.impl.Driver","drawInstanced",0x9770fcbe,"h3d.impl.Driver.drawInstanced","h3d/impl/Driver.hx",226,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_229_setRenderZone,"h3d.impl.Driver","setRenderZone",0x7caa4117,"h3d.impl.Driver.setRenderZone","h3d/impl/Driver.hx",229,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_232_setRenderTarget,"h3d.impl.Driver","setRenderTarget",0x397462fc,"h3d.impl.Driver.setRenderTarget","h3d/impl/Driver.hx",232,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_235_setRenderTargets,"h3d.impl.Driver","setRenderTargets",0x0c6239f7,"h3d.impl.Driver.setRenderTargets","h3d/impl/Driver.hx",235,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_239_allocDepthBuffer,"h3d.impl.Driver","allocDepthBuffer",0x1e7f0f9b,"h3d.impl.Driver.allocDepthBuffer","h3d/impl/Driver.hx",239,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_242_disposeDepthBuffer,"h3d.impl.Driver","disposeDepthBuffer",0x272bb4f1,"h3d.impl.Driver.disposeDepthBuffer","h3d/impl/Driver.hx",242,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_246_getDefaultDepthBuffer,"h3d.impl.Driver","getDefaultDepthBuffer",0xdaf57e8b,"h3d.impl.Driver.getDefaultDepthBuffer","h3d/impl/Driver.hx",246,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_249_present,"h3d.impl.Driver","present",0xedfc28ee,"h3d.impl.Driver.present","h3d/impl/Driver.hx",249,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_252_end,"h3d.impl.Driver","end",0xd95c3c4e,"h3d.impl.Driver.end","h3d/impl/Driver.hx",252,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_255_setDebug,"h3d.impl.Driver","setDebug",0xcd2401fe,"h3d.impl.Driver.setDebug","h3d/impl/Driver.hx",255,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_259_allocTexture,"h3d.impl.Driver","allocTexture",0x20e69613,"h3d.impl.Driver.allocTexture","h3d/impl/Driver.hx",259,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_263_allocIndexes,"h3d.impl.Driver","allocIndexes",0x62c52938,"h3d.impl.Driver.allocIndexes","h3d/impl/Driver.hx",263,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_267_allocVertexes,"h3d.impl.Driver","allocVertexes",0xaa8e989a,"h3d.impl.Driver.allocVertexes","h3d/impl/Driver.hx",267,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_270_allocInstanceBuffer,"h3d.impl.Driver","allocInstanceBuffer",0xac30783d,"h3d.impl.Driver.allocInstanceBuffer","h3d/impl/Driver.hx",270,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_273_disposeTexture,"h3d.impl.Driver","disposeTexture",0x4e145869,"h3d.impl.Driver.disposeTexture","h3d/impl/Driver.hx",273,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_276_disposeIndexes,"h3d.impl.Driver","disposeIndexes",0x8ff2eb8e,"h3d.impl.Driver.disposeIndexes","h3d/impl/Driver.hx",276,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_279_disposeVertexes,"h3d.impl.Driver","disposeVertexes",0x056ae184,"h3d.impl.Driver.disposeVertexes","h3d/impl/Driver.hx",279,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_282_disposeInstanceBuffer,"h3d.impl.Driver","disposeInstanceBuffer",0xa0114ca7,"h3d.impl.Driver.disposeInstanceBuffer","h3d/impl/Driver.hx",282,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_285_uploadIndexBuffer,"h3d.impl.Driver","uploadIndexBuffer",0x25a8dce4,"h3d.impl.Driver.uploadIndexBuffer","h3d/impl/Driver.hx",285,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_288_uploadIndexBytes,"h3d.impl.Driver","uploadIndexBytes",0x22ff7107,"h3d.impl.Driver.uploadIndexBytes","h3d/impl/Driver.hx",288,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_291_uploadVertexBuffer,"h3d.impl.Driver","uploadVertexBuffer",0x42cf8412,"h3d.impl.Driver.uploadVertexBuffer","h3d/impl/Driver.hx",291,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_294_uploadVertexBytes,"h3d.impl.Driver","uploadVertexBytes",0x01d64999,"h3d.impl.Driver.uploadVertexBytes","h3d/impl/Driver.hx",294,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_297_uploadTextureBitmap,"h3d.impl.Driver","uploadTextureBitmap",0x93180adc,"h3d.impl.Driver.uploadTextureBitmap","h3d/impl/Driver.hx",297,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_300_uploadTexturePixels,"h3d.impl.Driver","uploadTexturePixels",0x2eb5ea1a,"h3d.impl.Driver.uploadTexturePixels","h3d/impl/Driver.hx",300,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_304_readVertexBytes,"h3d.impl.Driver","readVertexBytes",0x1da76ba4,"h3d.impl.Driver.readVertexBytes","h3d/impl/Driver.hx",304,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_308_readIndexBytes,"h3d.impl.Driver","readIndexBytes",0x9711995c,"h3d.impl.Driver.readIndexBytes","h3d/impl/Driver.hx",308,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_315_copyTexture,"h3d.impl.Driver","copyTexture",0x866ea919,"h3d.impl.Driver.copyTexture","h3d/impl/Driver.hx",315,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_321_allocQuery,"h3d.impl.Driver","allocQuery",0x3b041a40,"h3d.impl.Driver.allocQuery","h3d/impl/Driver.hx",321,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_324_deleteQuery,"h3d.impl.Driver","deleteQuery",0x7f592250,"h3d.impl.Driver.deleteQuery","h3d/impl/Driver.hx",324,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_327_beginQuery,"h3d.impl.Driver","beginQuery",0x8524a80c,"h3d.impl.Driver.beginQuery","h3d/impl/Driver.hx",327,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_330_endQuery,"h3d.impl.Driver","endQuery",0x43b863da,"h3d.impl.Driver.endQuery","h3d/impl/Driver.hx",330,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_334_queryResultAvailable,"h3d.impl.Driver","queryResultAvailable",0xe03b8931,"h3d.impl.Driver.queryResultAvailable","h3d/impl/Driver.hx",334,0xe373499d)
HX_LOCAL_STACK_FRAME(_hx_pos_5fa2cf9cfc377a0e_338_queryResult,"h3d.impl.Driver","queryResult",0xec22c178,"h3d.impl.Driver.queryResult","h3d/impl/Driver.hx",338,0xe373499d)
namespace h3d{
namespace impl{

void Driver_obj::__construct() { }

Dynamic Driver_obj::__CreateEmpty() { return new Driver_obj; }

void *Driver_obj::_hx_vtable = 0;

Dynamic Driver_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Driver_obj > _hx_result = new Driver_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Driver_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fa9e081;
}

bool Driver_obj::hasFeature( ::h3d::impl::Feature f){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_145_hasFeature)
HXDLIN( 145)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,hasFeature,return )

void Driver_obj::setRenderFlag( ::h3d::impl::RenderFlag r,int value){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_148_setRenderFlag)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,setRenderFlag,(void))

bool Driver_obj::isSupportedFormat( ::hxd::PixelFormat fmt){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_152_isSupportedFormat)
HXDLIN( 152)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,isSupportedFormat,return )

bool Driver_obj::isDisposed(){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_156_isDisposed)
HXDLIN( 156)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,isDisposed,return )

void Driver_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_159_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,dispose,(void))

void Driver_obj::begin(int frame){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_162_begin)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,begin,(void))

void Driver_obj::log(::String str){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_165_log)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,log,(void))

void Driver_obj::generateMipMaps( ::h3d::mat::Texture texture){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_172_generateMipMaps)
HXDLIN( 172)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Mipmaps auto generation is not supported on this platform",bd,cd,e1,98)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,generateMipMaps,(void))

::String Driver_obj::getNativeShaderCode( ::hxsl::RuntimeShader shader){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_176_getNativeShaderCode)
HXDLIN( 176)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,getNativeShaderCode,return )

void Driver_obj::logImpl(::String str){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_179_logImpl)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,logImpl,(void))

void Driver_obj::clear( ::h3d::Vector color, ::Dynamic depth, ::Dynamic stencil){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_182_clear)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Driver_obj,clear,(void))

void Driver_obj::captureRenderBuffer( ::hxd::Pixels pixels){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_185_captureRenderBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,captureRenderBuffer,(void))

 ::hxd::Pixels Driver_obj::capturePixels( ::h3d::mat::Texture tex,int layer,int mipLevel, ::h2d::col::IBounds region){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_189_capturePixels)
HXDLIN( 189)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Can't capture pixels on this platform",ea,bc,87,90)));
HXDLIN( 189)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(Driver_obj,capturePixels,return )

::String Driver_obj::getDriverName(bool details){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_194_getDriverName)
HXDLIN( 194)		return HX_("Not available",5c,b4,41,a8);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,getDriverName,return )

void Driver_obj::init( ::Dynamic onCreate,::hx::Null< bool >  __o_forceSoftware){
            		bool forceSoftware = __o_forceSoftware.Default(false);
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_197_init)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,init,(void))

void Driver_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_200_resize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,resize,(void))

bool Driver_obj::selectShader( ::hxsl::RuntimeShader shader){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_204_selectShader)
HXDLIN( 204)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,selectShader,return )

void Driver_obj::selectMaterial( ::h3d::mat::Pass pass){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_207_selectMaterial)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,selectMaterial,(void))

void Driver_obj::uploadShaderBuffers( ::h3d::shader::Buffers buffers,int which){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_210_uploadShaderBuffers)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,uploadShaderBuffers,(void))

 ::h3d::impl::InputNames Driver_obj::getShaderInputNames(){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_214_getShaderInputNames)
HXDLIN( 214)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,getShaderInputNames,return )

void Driver_obj::selectBuffer( ::h3d::Buffer buffer){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_217_selectBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,selectBuffer,(void))

void Driver_obj::selectMultiBuffers( ::h3d::BufferOffset buffers){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_220_selectMultiBuffers)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,selectMultiBuffers,(void))

void Driver_obj::draw( ::Dynamic ibuf,int startIndex,int ntriangles){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_223_draw)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Driver_obj,draw,(void))

void Driver_obj::drawInstanced( ::Dynamic ibuf, ::h3d::impl::InstanceBuffer commands){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_226_drawInstanced)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,drawInstanced,(void))

void Driver_obj::setRenderZone(int x,int y,int width,int height){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_229_setRenderZone)
            	}


HX_DEFINE_DYNAMIC_FUNC4(Driver_obj,setRenderZone,(void))

void Driver_obj::setRenderTarget( ::h3d::mat::Texture tex,::hx::Null< int >  __o_layer,::hx::Null< int >  __o_mipLevel){
            		int layer = __o_layer.Default(0);
            		int mipLevel = __o_mipLevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_232_setRenderTarget)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Driver_obj,setRenderTarget,(void))

void Driver_obj::setRenderTargets(::Array< ::Dynamic> textures){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_235_setRenderTargets)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,setRenderTargets,(void))

 ::Dynamic Driver_obj::allocDepthBuffer( ::h3d::mat::DepthBuffer b){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_239_allocDepthBuffer)
HXDLIN( 239)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,allocDepthBuffer,return )

void Driver_obj::disposeDepthBuffer( ::h3d::mat::DepthBuffer b){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_242_disposeDepthBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,disposeDepthBuffer,(void))

 ::h3d::mat::DepthBuffer Driver_obj::getDefaultDepthBuffer(){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_246_getDefaultDepthBuffer)
HXDLIN( 246)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,getDefaultDepthBuffer,return )

void Driver_obj::present(){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_249_present)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,present,(void))

void Driver_obj::end(){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_252_end)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Driver_obj,end,(void))

void Driver_obj::setDebug(bool b){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_255_setDebug)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,setDebug,(void))

 ::Dynamic Driver_obj::allocTexture( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_259_allocTexture)
HXDLIN( 259)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,allocTexture,return )

 ::Dynamic Driver_obj::allocIndexes(int count,bool is32){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_263_allocIndexes)
HXDLIN( 263)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,allocIndexes,return )

 ::Dynamic Driver_obj::allocVertexes( ::h3d::impl::ManagedBuffer m){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_267_allocVertexes)
HXDLIN( 267)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,allocVertexes,return )

void Driver_obj::allocInstanceBuffer( ::h3d::impl::InstanceBuffer b, ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_270_allocInstanceBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,allocInstanceBuffer,(void))

void Driver_obj::disposeTexture( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_273_disposeTexture)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,disposeTexture,(void))

void Driver_obj::disposeIndexes( ::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_276_disposeIndexes)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,disposeIndexes,(void))

void Driver_obj::disposeVertexes( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_279_disposeVertexes)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,disposeVertexes,(void))

void Driver_obj::disposeInstanceBuffer( ::h3d::impl::InstanceBuffer b){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_282_disposeInstanceBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,disposeInstanceBuffer,(void))

void Driver_obj::uploadIndexBuffer( ::Dynamic i,int startIndice,int indiceCount,::Array< int > buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_285_uploadIndexBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC5(Driver_obj,uploadIndexBuffer,(void))

void Driver_obj::uploadIndexBytes( ::Dynamic i,int startIndice,int indiceCount, ::haxe::io::Bytes buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_288_uploadIndexBytes)
            	}


HX_DEFINE_DYNAMIC_FUNC5(Driver_obj,uploadIndexBytes,(void))

void Driver_obj::uploadVertexBuffer( ::Dynamic v,int startVertex,int vertexCount,::Array< Float > buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_291_uploadVertexBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC5(Driver_obj,uploadVertexBuffer,(void))

void Driver_obj::uploadVertexBytes( ::Dynamic v,int startVertex,int vertexCount, ::haxe::io::Bytes buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_294_uploadVertexBytes)
            	}


HX_DEFINE_DYNAMIC_FUNC5(Driver_obj,uploadVertexBytes,(void))

void Driver_obj::uploadTextureBitmap( ::h3d::mat::Texture t, ::hxd::BitmapData bmp,int mipLevel,int side){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_297_uploadTextureBitmap)
            	}


HX_DEFINE_DYNAMIC_FUNC4(Driver_obj,uploadTextureBitmap,(void))

void Driver_obj::uploadTexturePixels( ::h3d::mat::Texture t, ::hxd::Pixels pixels,int mipLevel,int side){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_300_uploadTexturePixels)
            	}


HX_DEFINE_DYNAMIC_FUNC4(Driver_obj,uploadTexturePixels,(void))

void Driver_obj::readVertexBytes( ::Dynamic v,int startVertex,int vertexCount, ::haxe::io::Bytes buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_304_readVertexBytes)
HXDLIN( 304)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Driver does not allow to read vertex bytes",67,bc,ed,2e)));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Driver_obj,readVertexBytes,(void))

void Driver_obj::readIndexBytes( ::Dynamic v,int startVertex,int vertexCount, ::haxe::io::Bytes buf,int bufPos){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_308_readIndexBytes)
HXDLIN( 308)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Driver does not allow to read index bytes",25,be,6d,8e)));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Driver_obj,readIndexBytes,(void))

bool Driver_obj::copyTexture( ::h3d::mat::Texture from, ::h3d::mat::Texture to){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_315_copyTexture)
HXDLIN( 315)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Driver_obj,copyTexture,return )

 ::Dynamic Driver_obj::allocQuery( ::h3d::impl::QueryKind queryKind){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_321_allocQuery)
HXDLIN( 321)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,allocQuery,return )

void Driver_obj::deleteQuery( ::Dynamic q){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_324_deleteQuery)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,deleteQuery,(void))

void Driver_obj::beginQuery( ::Dynamic q){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_327_beginQuery)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,beginQuery,(void))

void Driver_obj::endQuery( ::Dynamic q){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_330_endQuery)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,endQuery,(void))

bool Driver_obj::queryResultAvailable( ::Dynamic q){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_334_queryResultAvailable)
HXDLIN( 334)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,queryResultAvailable,return )

Float Driver_obj::queryResult( ::Dynamic q){
            	HX_STACKFRAME(&_hx_pos_5fa2cf9cfc377a0e_338_queryResult)
HXDLIN( 338)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Driver_obj,queryResult,return )


Driver_obj::Driver_obj()
{
}

::hx::Val Driver_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return ::hx::Val( log_dyn() ); }
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
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"logImpl") ) { return ::hx::Val( logImpl_dyn() ); }
		if (HX_FIELD_EQ(inName,"present") ) { return ::hx::Val( present_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setDebug") ) { return ::hx::Val( setDebug_dyn() ); }
		if (HX_FIELD_EQ(inName,"endQuery") ) { return ::hx::Val( endQuery_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"logEnable") ) { return ::hx::Val( logEnable ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasFeature") ) { return ::hx::Val( hasFeature_dyn() ); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocQuery") ) { return ::hx::Val( allocQuery_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginQuery") ) { return ::hx::Val( beginQuery_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyTexture") ) { return ::hx::Val( copyTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteQuery") ) { return ::hx::Val( deleteQuery_dyn() ); }
		if (HX_FIELD_EQ(inName,"queryResult") ) { return ::hx::Val( queryResult_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectShader") ) { return ::hx::Val( selectShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectBuffer") ) { return ::hx::Val( selectBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocTexture") ) { return ::hx::Val( allocTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocIndexes") ) { return ::hx::Val( allocIndexes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setRenderFlag") ) { return ::hx::Val( setRenderFlag_dyn() ); }
		if (HX_FIELD_EQ(inName,"capturePixels") ) { return ::hx::Val( capturePixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDriverName") ) { return ::hx::Val( getDriverName_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawInstanced") ) { return ::hx::Val( drawInstanced_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRenderZone") ) { return ::hx::Val( setRenderZone_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocVertexes") ) { return ::hx::Val( allocVertexes_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectMaterial") ) { return ::hx::Val( selectMaterial_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeTexture") ) { return ::hx::Val( disposeTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeIndexes") ) { return ::hx::Val( disposeIndexes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readIndexBytes") ) { return ::hx::Val( readIndexBytes_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"generateMipMaps") ) { return ::hx::Val( generateMipMaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRenderTarget") ) { return ::hx::Val( setRenderTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeVertexes") ) { return ::hx::Val( disposeVertexes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readVertexBytes") ) { return ::hx::Val( readVertexBytes_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setRenderTargets") ) { return ::hx::Val( setRenderTargets_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocDepthBuffer") ) { return ::hx::Val( allocDepthBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadIndexBytes") ) { return ::hx::Val( uploadIndexBytes_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isSupportedFormat") ) { return ::hx::Val( isSupportedFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadIndexBuffer") ) { return ::hx::Val( uploadIndexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadVertexBytes") ) { return ::hx::Val( uploadVertexBytes_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"selectMultiBuffers") ) { return ::hx::Val( selectMultiBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeDepthBuffer") ) { return ::hx::Val( disposeDepthBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadVertexBuffer") ) { return ::hx::Val( uploadVertexBuffer_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getNativeShaderCode") ) { return ::hx::Val( getNativeShaderCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"captureRenderBuffer") ) { return ::hx::Val( captureRenderBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadShaderBuffers") ) { return ::hx::Val( uploadShaderBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"getShaderInputNames") ) { return ::hx::Val( getShaderInputNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"allocInstanceBuffer") ) { return ::hx::Val( allocInstanceBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadTextureBitmap") ) { return ::hx::Val( uploadTextureBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadTexturePixels") ) { return ::hx::Val( uploadTexturePixels_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"queryResultAvailable") ) { return ::hx::Val( queryResultAvailable_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getDefaultDepthBuffer") ) { return ::hx::Val( getDefaultDepthBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"disposeInstanceBuffer") ) { return ::hx::Val( disposeInstanceBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Driver_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"logEnable") ) { logEnable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Driver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("logEnable",27,b2,f6,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Driver_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Driver_obj,logEnable),HX_("logEnable",27,b2,f6,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Driver_obj_sStaticStorageInfo = 0;
#endif

static ::String Driver_obj_sMemberFields[] = {
	HX_("logEnable",27,b2,f6,b2),
	HX_("hasFeature",7c,da,30,a5),
	HX_("setRenderFlag",64,44,40,82),
	HX_("isSupportedFormat",3b,43,d0,d7),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("dispose",9f,80,4c,bb),
	HX_("begin",29,ea,55,b0),
	HX_("log",84,54,52,00),
	HX_("generateMipMaps",56,1f,e7,3b),
	HX_("getNativeShaderCode",1f,4c,b8,e3),
	HX_("logImpl",84,91,84,6b),
	HX_("clear",8d,71,5b,48),
	HX_("captureRenderBuffer",9c,8e,88,cd),
	HX_("capturePixels",53,5c,08,70),
	HX_("getDriverName",c9,ae,31,43),
	HX_("init",10,3b,bb,45),
	HX_("resize",f4,59,7b,08),
	HX_("selectShader",41,b3,58,01),
	HX_("selectMaterial",c3,8f,d7,49),
	HX_("uploadShaderBuffers",0d,04,9f,eb),
	HX_("getShaderInputNames",99,c3,e1,1c),
	HX_("selectBuffer",1c,b1,cc,b4),
	HX_("selectMultiBuffers",16,63,89,f6),
	HX_("draw",04,2c,70,42),
	HX_("drawInstanced",8b,96,41,aa),
	HX_("setRenderZone",e4,da,7a,8f),
	HX_("setRenderTarget",09,ca,f8,14),
	HX_("setRenderTargets",4a,fe,b7,44),
	HX_("allocDepthBuffer",ee,d3,d4,56),
	HX_("disposeDepthBuffer",04,74,b9,73),
	HX_("getDefaultDepthBuffer",58,2d,d8,70),
	HX_("present",fb,3a,dc,39),
	HX_("end",db,03,4d,00),
	HX_("setDebug",51,bb,53,e5),
	HX_("allocTexture",e6,f4,28,68),
	HX_("allocIndexes",0b,88,07,aa),
	HX_("allocVertexes",67,32,5f,bd),
	HX_("allocInstanceBuffer",ca,e9,a9,5b),
	HX_("disposeTexture",fc,51,ca,b1),
	HX_("disposeIndexes",21,e5,a8,f3),
	HX_("disposeVertexes",91,48,ef,e0),
	HX_("disposeInstanceBuffer",74,fb,f3,35),
	HX_("uploadIndexBuffer",31,e1,5e,38),
	HX_("uploadIndexBytes",5a,35,55,5b),
	HX_("uploadVertexBuffer",25,43,5d,8f),
	HX_("uploadVertexBytes",e6,4d,8c,14),
	HX_("uploadTextureBitmap",69,7c,91,42),
	HX_("uploadTexturePixels",a7,5b,2f,de),
	HX_("readVertexBytes",b1,d2,2b,f9),
	HX_("readIndexBytes",ef,92,c7,fa),
	HX_("copyTexture",a6,45,f5,f4),
	HX_("allocQuery",53,0e,93,89),
	HX_("deleteQuery",dd,be,df,ed),
	HX_("beginQuery",1f,9c,b3,d3),
	HX_("endQuery",2d,1d,e8,5b),
	HX_("queryResultAvailable",04,73,05,bb),
	HX_("queryResult",05,5e,a9,5a),
	::String(null()) };

::hx::Class Driver_obj::__mClass;

void Driver_obj::__register()
{
	Driver_obj _hx_dummy;
	Driver_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.impl.Driver",61,a3,bb,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Driver_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Driver_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Driver_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Driver_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace impl
