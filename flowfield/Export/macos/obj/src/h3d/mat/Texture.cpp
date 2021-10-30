#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h2d_col_IBounds
#include <h2d/col/IBounds.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_Driver
#include <h3d/impl/Driver.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_h3d_mat_DepthBuffer
#include <h3d/mat/DepthBuffer.h>
#endif
#ifndef INCLUDED_h3d_mat_Filter
#include <h3d/mat/Filter.h>
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
#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
#endif
#ifndef INCLUDED_h3d_mat_Wrap
#include <h3d/mat/Wrap.h>
#endif
#ifndef INCLUDED_h3d_pass_Copy
#include <h3d/pass/Copy.h>
#endif
#ifndef INCLUDED_h3d_pass_CubeCopy
#include <h3d/pass/CubeCopy.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_h3d_shader_GenTexture
#include <h3d/shader/GenTexture.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
#endif
#ifndef INCLUDED_hxd_BitmapInnerDataImpl
#include <hxd/BitmapInnerDataImpl.h>
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
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_5_new,"h3d.mat.Texture","new",0x1620752a,"h3d.mat.Texture.new","h3d/mat/Texture.hx",5,0x24dfe888)
HX_DEFINE_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_102_new,"h3d.mat.Texture","new",0x1620752a,"h3d.mat.Texture.new","h3d/mat/Texture.hx",102,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_58_set_lastFrame,"h3d.mat.Texture","set_lastFrame",0x529ca124,"h3d.mat.Texture.set_lastFrame","h3d/mat/Texture.hx",58,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_68_get_lastFrame,"h3d.mat.Texture","get_lastFrame",0x0d96bf18,"h3d.mat.Texture.get_lastFrame","h3d/mat/Texture.hx",68,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_71_get_mipLevels,"h3d.mat.Texture","get_mipLevels",0x0b28c444,"h3d.mat.Texture.get_mipLevels","h3d/mat/Texture.hx",71,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_117_get_layerCount,"h3d.mat.Texture","get_layerCount",0x4ee2e0fd,"h3d.mat.Texture.get_layerCount","h3d/mat/Texture.hx",117,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_121_alloc,"h3d.mat.Texture","alloc",0xbf6a8fbf,"h3d.mat.Texture.alloc","h3d/mat/Texture.hx",121,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_126_isSRGB,"h3d.mat.Texture","isSRGB",0xe7dfbada,"h3d.mat.Texture.isSRGB","h3d/mat/Texture.hx",126,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_130_checkAlloc,"h3d.mat.Texture","checkAlloc",0x20218f03,"h3d.mat.Texture.checkAlloc","h3d/mat/Texture.hx",130,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_136_clone,"h3d.mat.Texture","clone",0xe639fea7,"h3d.mat.Texture.clone","h3d/mat/Texture.hx",136,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_162_preventAutoDispose,"h3d.mat.Texture","preventAutoDispose",0x0b8c6b6e,"h3d.mat.Texture.preventAutoDispose","h3d/mat/Texture.hx",162,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_170_waitLoad,"h3d.mat.Texture","waitLoad",0x0291be31,"h3d.mat.Texture.waitLoad","h3d/mat/Texture.hx",170,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_179_toString,"h3d.mat.Texture","toString",0xea668fa2,"h3d.mat.Texture.toString","h3d/mat/Texture.hx",179,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_191_setName,"h3d.mat.Texture","setName",0x006384d7,"h3d.mat.Texture.setName","h3d/mat/Texture.hx",191,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_194_set_mipMap,"h3d.mat.Texture","set_mipMap",0x36dedc1b,"h3d.mat.Texture.set_mipMap","h3d/mat/Texture.hx",194,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_199_set_filter,"h3d.mat.Texture","set_filter",0x67d8166b,"h3d.mat.Texture.set_filter","h3d/mat/Texture.hx",199,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_204_set_wrap,"h3d.mat.Texture","set_wrap",0x2f0f0dbd,"h3d.mat.Texture.set_wrap","h3d/mat/Texture.hx",204,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_210_isDisposed,"h3d.mat.Texture","isDisposed",0x90f10565,"h3d.mat.Texture.isDisposed","h3d/mat/Texture.hx",210,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_213_resize,"h3d.mat.Texture","resize",0x86b24f6a,"h3d.mat.Texture.resize","h3d/mat/Texture.hx",213,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_231_clearF,"h3d.mat.Texture","clearF",0x85dedf8f,"h3d.mat.Texture.clearF","h3d/mat/Texture.hx",231,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_249_clear,"h3d.mat.Texture","clear",0xe6325cd7,"h3d.mat.Texture.clear","h3d/mat/Texture.hx",249,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_296_checkSize,"h3d.mat.Texture","checkSize",0xa702c1f3,"h3d.mat.Texture.checkSize","h3d/mat/Texture.hx",296,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_304_checkMipMapGen,"h3d.mat.Texture","checkMipMapGen",0xb526ed96,"h3d.mat.Texture.checkMipMapGen","h3d/mat/Texture.hx",304,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_308_uploadBitmap,"h3d.mat.Texture","uploadBitmap",0x5444b6c6,"h3d.mat.Texture.uploadBitmap","h3d/mat/Texture.hx",308,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_316_uploadPixels,"h3d.mat.Texture","uploadPixels",0xefe29604,"h3d.mat.Texture.uploadPixels","h3d/mat/Texture.hx",316,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_325_dispose,"h3d.mat.Texture","dispose",0xad2c5269,"h3d.mat.Texture.dispose","h3d/mat/Texture.hx",325,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_333_swapTexture,"h3d.mat.Texture","swapTexture",0x81d20d52,"h3d.mat.Texture.swapTexture","h3d/mat/Texture.hx",333,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_347_capturePixels,"h3d.mat.Texture","capturePixels",0x690aa19d,"h3d.mat.Texture.capturePixels","h3d/mat/Texture.hx",347,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_412_fromBitmap,"h3d.mat.Texture","fromBitmap",0x22edfd6f,"h3d.mat.Texture.fromBitmap","h3d/mat/Texture.hx",412,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_418_fromPixels,"h3d.mat.Texture","fromPixels",0xbe8bdcad,"h3d.mat.Texture.fromPixels","h3d/mat/Texture.hx",418,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_437_fromColor,"h3d.mat.Texture","fromColor",0x05b4b3e3,"h3d.mat.Texture.fromColor","h3d/mat/Texture.hx",437,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_427_fromColor,"h3d.mat.Texture","fromColor",0x05b4b3e3,"h3d.mat.Texture.fromColor","h3d/mat/Texture.hx",427,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_445_genDisc,"h3d.mat.Texture","genDisc",0x92646dcf,"h3d.mat.Texture.genDisc","h3d/mat/Texture.hx",445,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_463_genTexture,"h3d.mat.Texture","genTexture",0x85b18aa1,"h3d.mat.Texture.genTexture","h3d/mat/Texture.hx",463,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_448_genTexture,"h3d.mat.Texture","genTexture",0x85b18aa1,"h3d.mat.Texture.genTexture","h3d/mat/Texture.hx",448,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_469_drawGenTexture,"h3d.mat.Texture","drawGenTexture",0x6317dac5,"h3d.mat.Texture.drawGenTexture","h3d/mat/Texture.hx",469,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_491_defaultCubeTexture,"h3d.mat.Texture","defaultCubeTexture",0x8abb1f9b,"h3d.mat.Texture.defaultCubeTexture","h3d/mat/Texture.hx",491,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_484_defaultCubeTexture,"h3d.mat.Texture","defaultCubeTexture",0x8abb1f9b,"h3d.mat.Texture.defaultCubeTexture","h3d/mat/Texture.hx",484,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_510_genChecker,"h3d.mat.Texture","genChecker",0xf9f574fb,"h3d.mat.Texture.genChecker","h3d/mat/Texture.hx",510,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_499_genChecker,"h3d.mat.Texture","genChecker",0xf9f574fb,"h3d.mat.Texture.genChecker","h3d/mat/Texture.hx",499,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_530_genNoise,"h3d.mat.Texture","genNoise",0x4b6d33e0,"h3d.mat.Texture.genNoise","h3d/mat/Texture.hx",530,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_519_genNoise,"h3d.mat.Texture","genNoise",0x4b6d33e0,"h3d.mat.Texture.genNoise","h3d/mat/Texture.hx",519,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_535_allocNoise,"h3d.mat.Texture","allocNoise",0xba08fb5b,"h3d.mat.Texture.allocNoise","h3d/mat/Texture.hx",535,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_546_allocChecker,"h3d.mat.Texture","allocChecker",0x1cae5136,"h3d.mat.Texture.allocChecker","h3d/mat/Texture.hx",546,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_7_boot,"h3d.mat.Texture","boot",0x3e5f1028,"h3d.mat.Texture.boot","h3d/mat/Texture.hx",7,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_8_boot,"h3d.mat.Texture","boot",0x3e5f1028,"h3d.mat.Texture.boot","h3d/mat/Texture.hx",8,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_19_boot,"h3d.mat.Texture","boot",0x3e5f1028,"h3d.mat.Texture.boot","h3d/mat/Texture.hx",19,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_515_boot,"h3d.mat.Texture","boot",0x3e5f1028,"h3d.mat.Texture.boot","h3d/mat/Texture.hx",515,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_516_boot,"h3d.mat.Texture","boot",0x3e5f1028,"h3d.mat.Texture.boot","h3d/mat/Texture.hx",516,0x24dfe888)
HX_LOCAL_STACK_FRAME(_hx_pos_23365ddd19ebcf5e_517_boot,"h3d.mat.Texture","boot",0x3e5f1028,"h3d.mat.Texture.boot","h3d/mat/Texture.hx",517,0x24dfe888)
namespace h3d{
namespace mat{

void Texture_obj::__construct(int w,int h,::Array< ::Dynamic> flags, ::hxd::PixelFormat format){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_5_new)
HXLINE(  41)		this->lodBias = ((Float)0.);
HXLINE(  83)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE(  84)		this->mem = engine->mem;
HXLINE(  86)		if (::hx::IsNull( format )) {
HXLINE(  86)			format = ::h3d::mat::Texture_obj::nativeFormat;
            		}
HXLINE(  87)		this->id = ++::h3d::mat::Texture_obj::UID;
HXLINE(  88)		this->format = format;
HXLINE(  89)		int this1 = 0;
HXDLIN(  89)		this->flags = this1;
HXLINE(  90)		if (::hx::IsNotNull( flags )) {
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			while((_g < flags->length)){
HXLINE(  91)				 ::h3d::mat::TextureFlags f = flags->__get(_g).StaticCast<  ::h3d::mat::TextureFlags >();
HXDLIN(  91)				_g = (_g + 1);
HXLINE(  92)				 ::h3d::mat::Texture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  92)				int _hx_tmp1 = _hx_tmp->flags;
HXDLIN(  92)				_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(f)));
            			}
            		}
HXLINE(  94)		int tw = 1;
HXDLIN(  94)		int th = 1;
HXLINE(  95)		while((tw < w)){
HXLINE(  95)			tw = (tw << 1);
            		}
HXLINE(  96)		while((th < h)){
HXLINE(  96)			th = (th << 1);
            		}
HXLINE(  97)		bool _hx_tmp;
HXDLIN(  97)		if ((tw == w)) {
HXLINE(  97)			_hx_tmp = (th != h);
            		}
            		else {
HXLINE(  97)			_hx_tmp = true;
            		}
HXDLIN(  97)		if (_hx_tmp) {
HXLINE(  98)			 ::h3d::mat::Texture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  98)			int _hx_tmp1 = _hx_tmp->flags;
HXDLIN(  98)			_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::IsNPOT_dyn())));
            		}
HXLINE( 102)		int this2 = this->flags;
HXDLIN( 102)		if (((this2 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Target_dyn()))) != 0)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_102_new)
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 102)			this->realloc =  ::Dynamic(new _hx_Closure_0());
            		}
HXLINE( 104)		this->width = w;
HXLINE( 105)		this->height = h;
HXLINE( 106)		 ::h3d::mat::MipMap _hx_tmp1;
HXDLIN( 106)		int this3 = this->flags;
HXDLIN( 106)		if (((this3 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::MipMapped_dyn()))) != 0)) {
HXLINE( 106)			_hx_tmp1 = ::h3d::mat::MipMap_obj::Nearest_dyn();
            		}
            		else {
HXLINE( 106)			_hx_tmp1 = ::h3d::mat::MipMap_obj::None_dyn();
            		}
HXDLIN( 106)		this->set_mipMap(_hx_tmp1);
HXLINE( 107)		this->set_filter(::h3d::mat::Filter_obj::Linear_dyn());
HXLINE( 108)		this->set_wrap(::h3d::mat::Wrap_obj::Clamp_dyn());
HXLINE( 109)		 ::h3d::mat::Texture _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 109)		_hx_tmp2->bits = (_hx_tmp2->bits & 32767);
HXLINE( 113)		int this4 = this->flags;
HXDLIN( 113)		if (((this4 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::NoAlloc_dyn()))) == 0)) {
HXLINE( 113)			this->alloc();
            		}
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

void *Texture_obj::_hx_vtable = 0;

Dynamic Texture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Texture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6d442854;
}

int Texture_obj::set_lastFrame(int lf){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_58_set_lastFrame)
HXLINE(  60)		if ((this->_lastFrame != ::h3d::mat::Texture_obj::PREVENT_AUTO_DISPOSE)) {
HXLINE(  61)			this->_lastFrame = lf;
            		}
HXLINE(  63)		return this->_lastFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_lastFrame,return )

int Texture_obj::get_lastFrame(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_68_get_lastFrame)
HXDLIN(  68)		return this->_lastFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_lastFrame,return )

int Texture_obj::get_mipLevels(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_71_get_mipLevels)
HXLINE(  72)		int this1 = this->flags;
HXDLIN(  72)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::MipMapped_dyn()))) == 0)) {
HXLINE(  73)			return 1;
            		}
HXLINE(  75)		int lv = 1;
HXLINE(  76)		int w = this->width;
HXDLIN(  76)		int h = this->height;
HXLINE(  77)		while(true){
HXLINE(  77)			bool _hx_tmp;
HXDLIN(  77)			if (((w >> lv) < 1)) {
HXLINE(  77)				_hx_tmp = ((h >> lv) >= 1);
            			}
            			else {
HXLINE(  77)				_hx_tmp = true;
            			}
HXDLIN(  77)			if (!(_hx_tmp)) {
HXLINE(  77)				goto _hx_goto_7;
            			}
HXDLIN(  77)			lv = (lv + 1);
            		}
            		_hx_goto_7:;
HXLINE(  78)		return lv;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_mipLevels,return )

int Texture_obj::get_layerCount(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_117_get_layerCount)
HXDLIN( 117)		int this1 = this->flags;
HXDLIN( 117)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Cube_dyn()))) != 0)) {
HXDLIN( 117)			return 6;
            		}
            		else {
HXDLIN( 117)			return 1;
            		}
HXDLIN( 117)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_layerCount,return )

void Texture_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_121_alloc)
HXDLIN( 121)		if (::hx::IsNull( this->t )) {
HXLINE( 122)			this->mem->allocTexture(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,alloc,(void))

bool Texture_obj::isSRGB(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_126_isSRGB)
HXDLIN( 126)		switch((int)(this->format->_hx_getIndex())){
            			case (int)14: case (int)15: {
HXDLIN( 126)				return true;
            			}
            			break;
            			default:{
HXDLIN( 126)				return false;
            			}
            		}
HXDLIN( 126)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,isSRGB,return )

void Texture_obj::checkAlloc(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_130_checkAlloc)
HXDLIN( 130)		bool _hx_tmp;
HXDLIN( 130)		if (::hx::IsNull( this->t )) {
HXDLIN( 130)			_hx_tmp = ::hx::IsNotNull( this->realloc );
            		}
            		else {
HXDLIN( 130)			_hx_tmp = false;
            		}
HXDLIN( 130)		if (_hx_tmp) {
HXLINE( 131)			this->alloc();
HXLINE( 132)			this->realloc();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,checkAlloc,(void))

 ::h3d::mat::Texture Texture_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_136_clone)
HXLINE( 137)		this->checkAlloc();
HXLINE( 138)		if (::hx::IsNull( this->t )) {
HXLINE( 138)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Can't clone disposed texture",26,32,d1,ea)));
            		}
HXLINE( 139)		int old = this->get_lastFrame();
HXLINE( 140)		this->preventAutoDispose();
HXLINE( 141)		::Array< ::Dynamic> flags = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 142)		{
HXLINE( 142)			{
HXLINE( 142)				 ::h3d::mat::TextureFlags f = ::h3d::mat::TextureFlags_obj::Target_dyn();
HXLINE( 143)				int this1 = this->flags;
HXDLIN( 143)				if (((this1 & (1 << _hx_getEnumValueIndex(f))) != 0)) {
HXLINE( 144)					flags->push(f);
            				}
            			}
HXLINE( 142)			{
HXLINE( 142)				 ::h3d::mat::TextureFlags f1 = ::h3d::mat::TextureFlags_obj::Cube_dyn();
HXLINE( 143)				int this2 = this->flags;
HXDLIN( 143)				if (((this2 & (1 << _hx_getEnumValueIndex(f1))) != 0)) {
HXLINE( 144)					flags->push(f1);
            				}
            			}
HXLINE( 142)			{
HXLINE( 142)				 ::h3d::mat::TextureFlags f2 = ::h3d::mat::TextureFlags_obj::MipMapped_dyn();
HXLINE( 143)				int this3 = this->flags;
HXDLIN( 143)				if (((this3 & (1 << _hx_getEnumValueIndex(f2))) != 0)) {
HXLINE( 144)					flags->push(f2);
            				}
            			}
HXLINE( 142)			{
HXLINE( 142)				 ::h3d::mat::TextureFlags f3 = ::h3d::mat::TextureFlags_obj::IsArray_dyn();
HXLINE( 143)				int this4 = this->flags;
HXDLIN( 143)				if (((this4 & (1 << _hx_getEnumValueIndex(f3))) != 0)) {
HXLINE( 144)					flags->push(f3);
            				}
            			}
            		}
HXLINE( 145)		 ::h3d::mat::Texture t =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,this->width,this->height,flags,this->format);
HXLINE( 146)		t->name = this->name;
HXLINE( 148)		int this5 = this->flags;
HXDLIN( 148)		if (((this5 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Cube_dyn()))) != 0)) {
HXLINE( 149)			::h3d::pass::CubeCopy_obj::run(::hx::ObjectPtr<OBJ_>(this),t,null(),null());
            		}
            		else {
HXLINE( 152)			::h3d::pass::Copy_obj::run(::hx::ObjectPtr<OBJ_>(this),t,null(),null(),null());
            		}
HXLINE( 153)		this->set_lastFrame(old);
HXLINE( 154)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,clone,return )

void Texture_obj::preventAutoDispose(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_162_preventAutoDispose)
HXDLIN( 162)		this->set_lastFrame(::h3d::mat::Texture_obj::PREVENT_AUTO_DISPOSE);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,preventAutoDispose,(void))

void Texture_obj::waitLoad( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_170_waitLoad)
HXLINE( 171)		int this1 = this->flags;
HXDLIN( 171)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Loading_dyn()))) == 0)) {
HXLINE( 172)			f();
HXLINE( 173)			return;
            		}
HXLINE( 175)		if (::hx::IsNull( this->waitLoads )) {
HXLINE( 175)			this->waitLoads = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 176)		this->waitLoads->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,waitLoad,(void))

::String Texture_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_179_toString)
HXLINE( 180)		::String str = this->name;
HXLINE( 181)		if (::hx::IsNull( this->name )) {
HXLINE( 182)			str = (HX_("Texture_",44,b3,80,3f) + this->id);
            		}
HXLINE( 187)		return (((((str + HX_("(",28,00,00,00)) + this->width) + HX_("x",78,00,00,00)) + this->height) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,toString,return )

void Texture_obj::setName(::String n){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_191_setName)
HXDLIN( 191)		this->name = n;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,setName,(void))

 ::h3d::mat::MipMap Texture_obj::set_mipMap( ::h3d::mat::MipMap m){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_194_set_mipMap)
HXLINE( 195)		int _hx_tmp = (this->bits & -4);
HXDLIN( 195)		this->bits = (_hx_tmp | _hx_getEnumValueIndex(m));
HXLINE( 196)		return (this->mipMap = m);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_mipMap,return )

 ::h3d::mat::Filter Texture_obj::set_filter( ::h3d::mat::Filter f){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_199_set_filter)
HXLINE( 200)		int _hx_tmp = (this->bits & -25);
HXDLIN( 200)		this->bits = (_hx_tmp | (_hx_getEnumValueIndex(f) << 3));
HXLINE( 201)		return (this->filter = f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_filter,return )

 ::h3d::mat::Wrap Texture_obj::set_wrap( ::h3d::mat::Wrap w){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_204_set_wrap)
HXLINE( 205)		int _hx_tmp = (this->bits & -193);
HXDLIN( 205)		this->bits = (_hx_tmp | (_hx_getEnumValueIndex(w) << 6));
HXLINE( 206)		return (this->wrap = w);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_wrap,return )

bool Texture_obj::isDisposed(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_210_isDisposed)
HXDLIN( 210)		if (::hx::IsNull( this->t )) {
HXDLIN( 210)			return ::hx::IsNull( this->realloc );
            		}
            		else {
HXDLIN( 210)			return false;
            		}
HXDLIN( 210)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,isDisposed,return )

void Texture_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_213_resize)
HXLINE( 214)		this->dispose();
HXLINE( 216)		int tw = 1;
HXDLIN( 216)		int th = 1;
HXLINE( 217)		while((tw < width)){
HXLINE( 217)			tw = (tw << 1);
            		}
HXLINE( 218)		while((th < height)){
HXLINE( 218)			th = (th << 1);
            		}
HXLINE( 219)		bool _hx_tmp;
HXDLIN( 219)		if ((tw == width)) {
HXLINE( 219)			_hx_tmp = (th != height);
            		}
            		else {
HXLINE( 219)			_hx_tmp = true;
            		}
HXDLIN( 219)		if (_hx_tmp) {
HXLINE( 220)			 ::h3d::mat::Texture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 220)			int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 220)			_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::IsNPOT_dyn())));
            		}
            		else {
HXLINE( 222)			 ::h3d::mat::Texture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 222)			int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 222)			_hx_tmp->flags = (_hx_tmp1 & (-1 - (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::IsNPOT_dyn()))));
            		}
HXLINE( 224)		this->width = width;
HXLINE( 225)		this->height = height;
HXLINE( 227)		int this1 = this->flags;
HXDLIN( 227)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::NoAlloc_dyn()))) == 0)) {
HXLINE( 228)			this->alloc();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,resize,(void))

void Texture_obj::clearF(::hx::Null< Float >  __o_r,::hx::Null< Float >  __o_g,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_a,::hx::Null< int >  __o_layer){
            		Float r = __o_r.Default(((Float)0.));
            		Float g = __o_g.Default(((Float)0.));
            		Float b = __o_b.Default(((Float)0.));
            		Float a = __o_a.Default(((Float)0.));
            		int layer = __o_layer.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_231_clearF)
HXLINE( 232)		this->alloc();
HXLINE( 233)		int this1 = this->flags;
HXDLIN( 233)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Target_dyn()))) == 0)) {
HXLINE( 233)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Texture should be target",e6,d2,f5,bc)));
            		}
HXLINE( 234)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 235)		 ::h3d::Vector color =  ::h3d::Vector_obj::__alloc( HX_CTX ,r,g,b,a);
HXLINE( 236)		if ((layer < 0)) {
HXLINE( 237)			int _g = 0;
HXDLIN( 237)			int _g1 = this->get_layerCount();
HXDLIN( 237)			while((_g < _g1)){
HXLINE( 237)				_g = (_g + 1);
HXDLIN( 237)				int i = (_g - 1);
HXLINE( 238)				engine->pushTarget(::hx::ObjectPtr<OBJ_>(this),i,null());
HXLINE( 239)				engine->clearF(color,null(),null());
HXLINE( 240)				engine->popTarget();
            			}
            		}
            		else {
HXLINE( 243)			engine->pushTarget(::hx::ObjectPtr<OBJ_>(this),layer,null());
HXLINE( 244)			engine->clearF(color,null(),null());
HXLINE( 245)			engine->popTarget();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(Texture_obj,clearF,(void))

void Texture_obj::clear(int color,::hx::Null< Float >  __o_alpha, ::Dynamic __o_layer){
            		Float alpha = __o_alpha.Default(((Float)1.));
            		 ::Dynamic layer = __o_layer;
            		if (::hx::IsNull(__o_layer)) layer = -1;
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_249_clear)
HXLINE( 250)		this->alloc();
HXLINE( 251)		bool _hx_tmp;
HXDLIN( 251)		if ((this->width != 0)) {
HXLINE( 251)			_hx_tmp = (this->height == 0);
            		}
            		else {
HXLINE( 251)			_hx_tmp = true;
            		}
HXDLIN( 251)		if (_hx_tmp) {
HXLINE( 251)			return;
            		}
HXLINE( 252)		bool _hx_tmp1;
HXDLIN( 252)		int this1 = this->flags;
HXDLIN( 252)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Target_dyn()))) != 0)) {
HXLINE( 252)			if ((this->width == 1)) {
HXLINE( 252)				_hx_tmp1 = (this->height != 1);
            			}
            			else {
HXLINE( 252)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 252)			_hx_tmp1 = false;
            		}
HXDLIN( 252)		if (_hx_tmp1) {
HXLINE( 253)			 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 254)			Float min = ((Float)0.);
HXDLIN( 254)			Float max = ((Float)1.);
HXDLIN( 254)			Float color1;
HXDLIN( 254)			if ((alpha < min)) {
HXLINE( 254)				color1 = min;
            			}
            			else {
HXLINE( 254)				if ((alpha > max)) {
HXLINE( 254)					color1 = max;
            				}
            				else {
HXLINE( 254)					color1 = alpha;
            				}
            			}
HXDLIN( 254)			color = (color | (::Std_obj::_hx_int((color1 * ( (Float)(255) ))) << 24));
HXLINE( 255)			if (::hx::IsLess( layer,0 )) {
HXLINE( 256)				int _g = 0;
HXDLIN( 256)				int _g1 = this->get_layerCount();
HXDLIN( 256)				while((_g < _g1)){
HXLINE( 256)					_g = (_g + 1);
HXDLIN( 256)					int i = (_g - 1);
HXLINE( 257)					engine->pushTarget(::hx::ObjectPtr<OBJ_>(this),i,null());
HXLINE( 258)					engine->clear(color,null(),null());
HXLINE( 259)					engine->popTarget();
            				}
            			}
            			else {
HXLINE( 262)				engine->pushTarget(::hx::ObjectPtr<OBJ_>(this),layer,null());
HXLINE( 263)				engine->clear(color,null(),null());
HXLINE( 264)				engine->popTarget();
            			}
            		}
            		else {
HXLINE( 267)			 ::hxd::Pixels p = ::hxd::Pixels_obj::alloc(this->width,this->height,::h3d::mat::Texture_obj::nativeFormat);
HXLINE( 268)			int k = 0;
HXLINE( 269)			int b = (color & 255);
HXDLIN( 269)			int g = ((color >> 8) & 255);
HXDLIN( 269)			int r = ((color >> 16) & 255);
HXDLIN( 269)			int a = ::Std_obj::_hx_int((alpha * ( (Float)(255) )));
HXLINE( 270)			if ((a < 0)) {
HXLINE( 270)				a = 0;
            			}
            			else {
HXLINE( 270)				if ((a > 255)) {
HXLINE( 270)					a = 255;
            				}
            			}
HXLINE( 271)			switch((int)(::h3d::mat::Texture_obj::nativeFormat->_hx_getIndex())){
            				case (int)1: {
HXLINE( 275)					int tmp = r;
HXLINE( 276)					r = b;
HXLINE( 277)					b = tmp;
            				}
            				break;
            				case (int)2: {
            				}
            				break;
            				default:{
HXLINE( 279)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            				}
            			}
HXLINE( 281)			{
HXLINE( 281)				int _g = 0;
HXDLIN( 281)				int _g1 = (this->width * this->height);
HXDLIN( 281)				while((_g < _g1)){
HXLINE( 281)					_g = (_g + 1);
HXDLIN( 281)					int i = (_g - 1);
HXLINE( 282)					{
HXLINE( 282)						k = (k + 1);
HXDLIN( 282)						p->bytes->b[(k - 1)] = ( (unsigned char)(r) );
            					}
HXLINE( 283)					{
HXLINE( 283)						k = (k + 1);
HXDLIN( 283)						p->bytes->b[(k - 1)] = ( (unsigned char)(g) );
            					}
HXLINE( 284)					{
HXLINE( 284)						k = (k + 1);
HXDLIN( 284)						p->bytes->b[(k - 1)] = ( (unsigned char)(b) );
            					}
HXLINE( 285)					{
HXLINE( 285)						k = (k + 1);
HXDLIN( 285)						p->bytes->b[(k - 1)] = ( (unsigned char)(a) );
            					}
            				}
            			}
HXLINE( 287)			if (::hx::IsLess( layer,0 )) {
HXLINE( 288)				int _g = 0;
HXDLIN( 288)				int _g1 = this->get_layerCount();
HXDLIN( 288)				while((_g < _g1)){
HXLINE( 288)					_g = (_g + 1);
HXDLIN( 288)					int i = (_g - 1);
HXLINE( 289)					this->uploadPixels(p,0,i);
            				}
            			}
            			else {
HXLINE( 291)				this->uploadPixels(p,0,layer);
            			}
HXLINE( 292)			p->dispose();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,clear,(void))

void Texture_obj::checkSize(int width,int height,int mip){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_296_checkSize)
HXLINE( 297)		int mw = (this->width >> mip);
HXDLIN( 297)		if ((mw == 0)) {
HXLINE( 297)			mw = 1;
            		}
HXLINE( 298)		int mh = (this->height >> mip);
HXDLIN( 298)		if ((mh == 0)) {
HXLINE( 298)			mh = 1;
            		}
HXLINE( 299)		bool _hx_tmp;
HXDLIN( 299)		if ((width == mw)) {
HXLINE( 299)			_hx_tmp = (height != mh);
            		}
            		else {
HXLINE( 299)			_hx_tmp = true;
            		}
HXDLIN( 299)		if (_hx_tmp) {
HXLINE( 300)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((((((HX_("Invalid upload size : ",af,3e,8e,83) + width) + HX_("x",78,00,00,00)) + height) + HX_(" should be ",b0,2e,91,d5)) + mw) + HX_("x",78,00,00,00)) + mh)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,checkSize,(void))

void Texture_obj::checkMipMapGen(int mipLevel,int layer){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_304_checkMipMapGen)
HXDLIN( 304)		bool _hx_tmp;
HXDLIN( 304)		bool _hx_tmp1;
HXDLIN( 304)		bool _hx_tmp2;
HXDLIN( 304)		if ((mipLevel == 0)) {
HXDLIN( 304)			int this1 = this->flags;
HXDLIN( 304)			_hx_tmp2 = ((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::MipMapped_dyn()))) != 0);
            		}
            		else {
HXDLIN( 304)			_hx_tmp2 = false;
            		}
HXDLIN( 304)		if (_hx_tmp2) {
HXDLIN( 304)			int this1 = this->flags;
HXDLIN( 304)			_hx_tmp1 = ((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::ManualMipMapGen_dyn()))) == 0);
            		}
            		else {
HXDLIN( 304)			_hx_tmp1 = false;
            		}
HXDLIN( 304)		if (_hx_tmp1) {
HXDLIN( 304)			_hx_tmp = (layer == (this->get_layerCount() - 1));
            		}
            		else {
HXDLIN( 304)			_hx_tmp = false;
            		}
HXDLIN( 304)		if (_hx_tmp) {
HXLINE( 305)			this->mem->driver->generateMipMaps(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,checkMipMapGen,(void))

void Texture_obj::uploadBitmap( ::hxd::BitmapData bmp,::hx::Null< int >  __o_mipLevel,::hx::Null< int >  __o_layer){
            		int mipLevel = __o_mipLevel.Default(0);
            		int layer = __o_layer.Default(0);
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_308_uploadBitmap)
HXLINE( 309)		this->alloc();
HXLINE( 310)		this->checkSize(bmp->data->width,bmp->data->height,mipLevel);
HXLINE( 311)		this->mem->driver->uploadTextureBitmap(::hx::ObjectPtr<OBJ_>(this),bmp,mipLevel,layer);
HXLINE( 312)		 ::h3d::mat::Texture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 312)		int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 312)		_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::WasCleared_dyn())));
HXLINE( 313)		this->checkMipMapGen(mipLevel,layer);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadBitmap,(void))

void Texture_obj::uploadPixels( ::hxd::Pixels pixels,::hx::Null< int >  __o_mipLevel,::hx::Null< int >  __o_layer){
            		int mipLevel = __o_mipLevel.Default(0);
            		int layer = __o_layer.Default(0);
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_316_uploadPixels)
HXLINE( 317)		this->alloc();
HXLINE( 318)		this->checkSize(pixels->width,pixels->height,mipLevel);
HXLINE( 319)		this->mem->driver->uploadTexturePixels(::hx::ObjectPtr<OBJ_>(this),pixels,mipLevel,layer);
HXLINE( 320)		 ::h3d::mat::Texture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 320)		int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 320)		_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::WasCleared_dyn())));
HXLINE( 321)		this->checkMipMapGen(mipLevel,layer);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadPixels,(void))

void Texture_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_325_dispose)
HXDLIN( 325)		if (::hx::IsNotNull( this->t )) {
HXLINE( 326)			this->mem->deleteTexture(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,dispose,(void))

void Texture_obj::swapTexture( ::h3d::mat::Texture t){
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_333_swapTexture)
HXLINE( 334)		this->checkAlloc();
HXLINE( 335)		t->checkAlloc();
HXLINE( 336)		bool _hx_tmp;
HXDLIN( 336)		bool _hx_tmp1;
HXDLIN( 336)		if (::hx::IsNull( this->t )) {
HXLINE( 336)			_hx_tmp1 = ::hx::IsNull( this->realloc );
            		}
            		else {
HXLINE( 336)			_hx_tmp1 = false;
            		}
HXDLIN( 336)		if (!(_hx_tmp1)) {
HXLINE( 336)			if (::hx::IsNull( t->t )) {
HXLINE( 336)				_hx_tmp = ::hx::IsNull( t->realloc );
            			}
            			else {
HXLINE( 336)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 336)			_hx_tmp = true;
            		}
HXDLIN( 336)		if (_hx_tmp) {
HXLINE( 337)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("One of the two texture is disposed",e4,cb,9e,f7)));
            		}
HXLINE( 338)		 ::Dynamic tmp = this->t;
HXLINE( 339)		this->t = t->t;
HXLINE( 340)		t->t = tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,swapTexture,(void))

 ::hxd::Pixels Texture_obj::capturePixels(::hx::Null< int >  __o_face,::hx::Null< int >  __o_mipLevel, ::h2d::col::IBounds region){
            		int face = __o_face.Default(0);
            		int mipLevel = __o_mipLevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_347_capturePixels)
HXLINE( 354)		int old = this->get_lastFrame();
HXLINE( 355)		this->preventAutoDispose();
HXLINE( 356)		 ::hxd::Pixels pix = this->mem->driver->capturePixels(::hx::ObjectPtr<OBJ_>(this),face,mipLevel,region);
HXLINE( 357)		this->set_lastFrame(old);
HXLINE( 358)		return pix;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,capturePixels,return )

int Texture_obj::UID;

int Texture_obj::PREVENT_AUTO_DISPOSE;

 ::hxd::PixelFormat Texture_obj::nativeFormat;

 ::h3d::mat::Texture Texture_obj::fromBitmap( ::hxd::BitmapData bmp){
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_412_fromBitmap)
HXLINE( 413)		 ::h3d::mat::Texture t =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,bmp->data->width,bmp->data->height,null(),null());
HXLINE( 414)		t->uploadBitmap(bmp,null(),null());
HXLINE( 415)		return t;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,fromBitmap,return )

 ::h3d::mat::Texture Texture_obj::fromPixels( ::hxd::Pixels pixels){
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_418_fromPixels)
HXLINE( 419)		 ::h3d::mat::Texture t =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,pixels->width,pixels->height,null(),null());
HXLINE( 420)		t->uploadPixels(pixels,null(),null());
HXLINE( 421)		return t;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,fromPixels,return )

 ::h3d::mat::Texture Texture_obj::fromColor(int color, ::Dynamic __o_alpha){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,alpha,int,color, ::h3d::mat::Texture,t1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_437_fromColor)
HXLINE( 437)			t1->clear(color,alpha,null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		 ::Dynamic alpha = __o_alpha;
            		if (::hx::IsNull(__o_alpha)) alpha = ((Float)1.);
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_427_fromColor)
HXLINE( 428)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 429)		int aval = ::Std_obj::_hx_int((( (Float)(alpha) ) * ( (Float)(255) )));
HXLINE( 430)		if ((aval < 0)) {
HXLINE( 430)			aval = 0;
            		}
            		else {
HXLINE( 430)			if ((aval > 255)) {
HXLINE( 430)				aval = 255;
            			}
            		}
HXLINE( 431)		int key = ((color & 16777215) | (aval << 24));
HXLINE( 432)		 ::h3d::mat::Texture t = ( ( ::h3d::mat::Texture)(engine->textureColorCache->get(key)) );
HXLINE( 433)		if (::hx::IsNotNull( t )) {
HXLINE( 434)			return t;
            		}
HXLINE( 435)		 ::h3d::mat::Texture t1 =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,1,1,null(),null());
HXLINE( 436)		t1->clear(color,alpha,null());
HXLINE( 437)		t1->realloc =  ::Dynamic(new _hx_Closure_0(alpha,color,t1));
HXLINE( 438)		engine->textureColorCache->set(key,t1);
HXLINE( 439)		return t1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,fromColor,return )

 ::h3d::mat::Texture Texture_obj::genDisc(int size,int color, ::Dynamic __o_alpha){
            		 ::Dynamic alpha = __o_alpha;
            		if (::hx::IsNull(__o_alpha)) alpha = ((Float)1.);
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_445_genDisc)
HXDLIN( 445)		return ::h3d::mat::Texture_obj::genTexture(0,size,color,( (Float)(alpha) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,genDisc,return )

 ::h3d::mat::Texture Texture_obj::genTexture(int mode,int size,int color,Float alpha){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< int >,color1,int,mode,::Array< ::Dynamic>,t1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_463_genTexture)
HXLINE( 463)			::h3d::mat::Texture_obj::drawGenTexture(t1->__get(0).StaticCast<  ::h3d::mat::Texture >(),color1->__get(0),mode);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_448_genTexture)
HXDLIN( 448)		::Array< int > color1 = ::Array_obj< int >::__new(1)->init(0,color);
HXLINE( 449)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 450)		int aval = ::Std_obj::_hx_int((alpha * ( (Float)(255) )));
HXLINE( 451)		if ((aval < 0)) {
HXLINE( 451)			aval = 0;
            		}
            		else {
HXLINE( 451)			if ((aval > 255)) {
HXLINE( 451)				aval = 255;
            			}
            		}
HXLINE( 452)		color1[0] = ((color1->__get(0) & 16777215) | (aval << 24));
HXLINE( 453)		::String key = ((((size << 16) | mode) + HX_(",",2c,00,00,00)) + color1->__get(0));
HXLINE( 454)		 ::Dynamic k = ::h3d::mat::Texture_obj::genTextureKeys->get(key);
HXLINE( 455)		 ::h3d::mat::Texture t;
HXDLIN( 455)		if (::hx::IsNull( k )) {
HXLINE( 455)			t = null();
            		}
            		else {
HXLINE( 455)			t = ( ( ::h3d::mat::Texture)(engine->resCache->get(k)) );
            		}
HXDLIN( 455)		::Array< ::Dynamic> t1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 456)		if (::hx::IsNotNull( t1->__get(0).StaticCast<  ::h3d::mat::Texture >() )) {
HXLINE( 457)			return t1->__get(0).StaticCast<  ::h3d::mat::Texture >();
            		}
HXLINE( 458)		if (::hx::IsNull( k )) {
HXLINE( 459)			k =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 460)			::h3d::mat::Texture_obj::genTextureKeys->set(key,k);
            		}
HXLINE( 462)		t1[0] =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,size,size,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::mat::TextureFlags_obj::Target_dyn()),null());
HXLINE( 463)		t1->__get(0).StaticCast<  ::h3d::mat::Texture >()->realloc =  ::Dynamic(new _hx_Closure_0(color1,mode,t1));
HXLINE( 464)		::h3d::mat::Texture_obj::drawGenTexture(t1->__get(0).StaticCast<  ::h3d::mat::Texture >(),color1->__get(0),mode);
HXLINE( 465)		engine->resCache->set(k,t1->__get(0).StaticCast<  ::h3d::mat::Texture >());
HXLINE( 466)		return t1->__get(0).StaticCast<  ::h3d::mat::Texture >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Texture_obj,genTexture,return )

void Texture_obj::drawGenTexture( ::h3d::mat::Texture t,int color,int mode){
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_469_drawGenTexture)
HXLINE( 470)		 ::h3d::pass::ScreenFx s =  ::h3d::pass::ScreenFx_obj::__alloc( HX_CTX , ::h3d::shader::GenTexture_obj::__alloc( HX_CTX ),null());
HXLINE( 471)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 472)		{
HXLINE( 472)			 ::h3d::shader::GenTexture _this = ( ( ::h3d::shader::GenTexture)(s->shader) );
HXDLIN( 472)			_this->constModified = true;
HXDLIN( 472)			_this->mode__ = mode;
            		}
HXLINE( 473)		{
HXLINE( 473)			 ::h3d::Vector _this1 = ( ( ::h3d::shader::GenTexture)(s->shader) )->color__;
HXDLIN( 473)			_this1->x = (( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN( 473)			_this1->y = (( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN( 473)			_this1->z = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXDLIN( 473)			_this1->w = (( (Float)(::hx::UShr(color,24)) ) / ( (Float)(255) ));
            		}
HXLINE( 474)		engine->pushTarget(t,null(),null());
HXLINE( 475)		s->render();
HXLINE( 476)		engine->popTarget();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,drawGenTexture,(void))

 ::h3d::mat::Texture Texture_obj::defaultCubeTexture(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,t) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_491_defaultCubeTexture)
HXLINE( 491)			t->__get(0).StaticCast<  ::h3d::mat::Texture >()->clear(2105376,null(),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_484_defaultCubeTexture)
HXLINE( 485)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 486)		::Array< ::Dynamic> t = ::Array_obj< ::Dynamic>::__new(1)->init(0,engine->resCache->get(::hx::ClassOf< ::h3d::mat::Texture >()));
HXLINE( 487)		if (::hx::IsNotNull( t->__get(0).StaticCast<  ::h3d::mat::Texture >() )) {
HXLINE( 488)			return t->__get(0).StaticCast<  ::h3d::mat::Texture >();
            		}
HXLINE( 489)		t[0] =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,1,1,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::mat::TextureFlags_obj::Cube_dyn()),null());
HXLINE( 490)		t->__get(0).StaticCast<  ::h3d::mat::Texture >()->clear(2105376,null(),null());
HXLINE( 491)		t->__get(0).StaticCast<  ::h3d::mat::Texture >()->realloc =  ::Dynamic(new _hx_Closure_0(t));
HXLINE( 492)		engine->resCache->set(::hx::ClassOf< ::h3d::mat::Texture >(),t->__get(0).StaticCast<  ::h3d::mat::Texture >());
HXLINE( 493)		return t->__get(0).StaticCast<  ::h3d::mat::Texture >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,defaultCubeTexture,return )

 ::h3d::mat::Texture Texture_obj::genChecker(int size){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,size1, ::h3d::mat::Texture,t2) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_510_genChecker)
HXLINE( 510)			::h3d::mat::Texture_obj::allocChecker(t2,size1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_499_genChecker)
HXLINE( 500)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 501)		 ::Dynamic k = ::h3d::mat::Texture_obj::checkerTextureKeys->get(size);
HXLINE( 502)		 ::h3d::mat::Texture t;
HXDLIN( 502)		if (::hx::IsNull( k )) {
HXLINE( 502)			t = null();
            		}
            		else {
HXLINE( 502)			t = ( ( ::h3d::mat::Texture)(engine->resCache->get(k)) );
            		}
HXLINE( 503)		bool _hx_tmp;
HXDLIN( 503)		if (::hx::IsNotNull( t )) {
HXLINE( 503)			bool _hx_tmp1;
HXDLIN( 503)			if (::hx::IsNull( t->t )) {
HXLINE( 503)				_hx_tmp1 = ::hx::IsNull( t->realloc );
            			}
            			else {
HXLINE( 503)				_hx_tmp1 = false;
            			}
HXDLIN( 503)			_hx_tmp = !(_hx_tmp1);
            		}
            		else {
HXLINE( 503)			_hx_tmp = false;
            		}
HXDLIN( 503)		if (_hx_tmp) {
HXLINE( 504)			return t;
            		}
HXLINE( 505)		if (::hx::IsNull( k )) {
HXLINE( 506)			k =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 507)			::h3d::mat::Texture_obj::checkerTextureKeys->set(size,k);
            		}
HXLINE( 509)		 ::h3d::mat::Texture t1 =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,size,size,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::mat::TextureFlags_obj::NoAlloc_dyn()),null());
HXLINE( 510)		 ::h3d::mat::Texture t2 = t1;
HXDLIN( 510)		int size1 = size;
HXDLIN( 510)		t1->realloc =  ::Dynamic(new _hx_Closure_0(size1,t2));
HXLINE( 511)		engine->resCache->set(k,t1);
HXLINE( 512)		return t1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,genChecker,return )

 ::haxe::ds::IntMap Texture_obj::checkerTextureKeys;

 ::haxe::ds::IntMap Texture_obj::noiseTextureKeys;

 ::haxe::ds::StringMap Texture_obj::genTextureKeys;

 ::h3d::mat::Texture Texture_obj::genNoise(int size){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,size1, ::h3d::mat::Texture,t2) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_530_genNoise)
HXLINE( 530)			::h3d::mat::Texture_obj::allocNoise(t2,size1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_519_genNoise)
HXLINE( 520)		 ::h3d::Engine engine = ::h3d::Engine_obj::CURRENT;
HXLINE( 521)		 ::Dynamic k = ::h3d::mat::Texture_obj::noiseTextureKeys->get(size);
HXLINE( 522)		 ::h3d::mat::Texture t;
HXDLIN( 522)		if (::hx::IsNull( k )) {
HXLINE( 522)			t = null();
            		}
            		else {
HXLINE( 522)			t = ( ( ::h3d::mat::Texture)(engine->resCache->get(k)) );
            		}
HXLINE( 523)		bool _hx_tmp;
HXDLIN( 523)		if (::hx::IsNotNull( t )) {
HXLINE( 523)			bool _hx_tmp1;
HXDLIN( 523)			if (::hx::IsNull( t->t )) {
HXLINE( 523)				_hx_tmp1 = ::hx::IsNull( t->realloc );
            			}
            			else {
HXLINE( 523)				_hx_tmp1 = false;
            			}
HXDLIN( 523)			_hx_tmp = !(_hx_tmp1);
            		}
            		else {
HXLINE( 523)			_hx_tmp = false;
            		}
HXDLIN( 523)		if (_hx_tmp) {
HXLINE( 524)			return t;
            		}
HXLINE( 525)		if (::hx::IsNull( k )) {
HXLINE( 526)			k =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 527)			::h3d::mat::Texture_obj::noiseTextureKeys->set(size,k);
            		}
HXLINE( 529)		 ::h3d::mat::Texture t1 =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,size,size,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::mat::TextureFlags_obj::NoAlloc_dyn()),null());
HXLINE( 530)		 ::h3d::mat::Texture t2 = t1;
HXDLIN( 530)		int size1 = size;
HXDLIN( 530)		t1->realloc =  ::Dynamic(new _hx_Closure_0(size1,t2));
HXLINE( 531)		engine->resCache->set(k,t1);
HXLINE( 532)		return t1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,genNoise,return )

void Texture_obj::allocNoise( ::h3d::mat::Texture t,int size){
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_535_allocNoise)
HXLINE( 536)		 ::hxd::BitmapData b =  ::hxd::BitmapData_obj::__alloc( HX_CTX ,size,size);
HXLINE( 537)		{
HXLINE( 537)			int _g = 0;
HXDLIN( 537)			int _g1 = size;
HXDLIN( 537)			while((_g < _g1)){
HXLINE( 537)				_g = (_g + 1);
HXDLIN( 537)				int x = (_g - 1);
HXLINE( 538)				{
HXLINE( 538)					int _g1 = 0;
HXDLIN( 538)					int _g2 = size;
HXDLIN( 538)					while((_g1 < _g2)){
HXLINE( 538)						_g1 = (_g1 + 1);
HXDLIN( 538)						int y = (_g1 - 1);
HXLINE( 539)						int n = ::Std_obj::random(256);
HXLINE( 540)						b->setPixel(x,y,(((-16777216 | n) | (n << 8)) | (n << 16)));
            					}
            				}
            			}
            		}
HXLINE( 542)		t->uploadBitmap(b,null(),null());
HXLINE( 543)		b->data = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,allocNoise,(void))

void Texture_obj::allocChecker( ::h3d::mat::Texture t,int size){
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_546_allocChecker)
HXLINE( 547)		 ::hxd::BitmapData b =  ::hxd::BitmapData_obj::__alloc( HX_CTX ,size,size);
HXLINE( 548)		b->clear(-1);
HXLINE( 549)		{
HXLINE( 549)			int _g = 0;
HXDLIN( 549)			int _g1 = (size >> 1);
HXDLIN( 549)			while((_g < _g1)){
HXLINE( 549)				_g = (_g + 1);
HXDLIN( 549)				int x = (_g - 1);
HXLINE( 550)				{
HXLINE( 550)					int _g1 = 0;
HXDLIN( 550)					int _g2 = (size >> 1);
HXDLIN( 550)					while((_g1 < _g2)){
HXLINE( 550)						_g1 = (_g1 + 1);
HXDLIN( 550)						int y = (_g1 - 1);
HXLINE( 551)						b->setPixel(x,y,-16777216);
HXLINE( 552)						b->setPixel((x + (size >> 1)),(y + (size >> 1)),-16777216);
            					}
            				}
            			}
            		}
HXLINE( 554)		t->uploadBitmap(b,null(),null());
HXLINE( 555)		b->data = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,allocChecker,(void))


::hx::ObjectPtr< Texture_obj > Texture_obj::__new(int w,int h,::Array< ::Dynamic> flags, ::hxd::PixelFormat format) {
	::hx::ObjectPtr< Texture_obj > __this = new Texture_obj();
	__this->__construct(w,h,flags,format);
	return __this;
}

::hx::ObjectPtr< Texture_obj > Texture_obj::__alloc(::hx::Ctx *_hx_ctx,int w,int h,::Array< ::Dynamic> flags, ::hxd::PixelFormat format) {
	Texture_obj *__this = (Texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Texture_obj), true, "h3d.mat.Texture"));
	*(void **)__this = Texture_obj::_hx_vtable;
	__this->__construct(w,h,flags,format);
	return __this;
}

Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(mem,"mem");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_MEMBER_NAME(waitLoads,"waitLoads");
	HX_MARK_MEMBER_NAME(mipMap,"mipMap");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(lodBias,"lodBias");
	HX_MARK_MEMBER_NAME(realloc,"realloc");
	HX_MARK_MEMBER_NAME(depthBuffer,"depthBuffer");
	HX_MARK_MEMBER_NAME(_lastFrame,"_lastFrame");
	HX_MARK_END_CLASS();
}

void Texture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(mem,"mem");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(bits,"bits");
	HX_VISIT_MEMBER_NAME(waitLoads,"waitLoads");
	HX_VISIT_MEMBER_NAME(mipMap,"mipMap");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(lodBias,"lodBias");
	HX_VISIT_MEMBER_NAME(realloc,"realloc");
	HX_VISIT_MEMBER_NAME(depthBuffer,"depthBuffer");
	HX_VISIT_MEMBER_NAME(_lastFrame,"_lastFrame");
}

::hx::Val Texture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return ::hx::Val( t ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { return ::hx::Val( mem ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"bits") ) { return ::hx::Val( bits ); }
		if (HX_FIELD_EQ(inName,"wrap") ) { return ::hx::Val( wrap ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"mipMap") ) { return ::hx::Val( mipMap ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"isSRGB") ) { return ::hx::Val( isSRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearF") ) { return ::hx::Val( clearF_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { return ::hx::Val( lodBias ); }
		if (HX_FIELD_EQ(inName,"realloc") ) { return ::hx::Val( realloc ); }
		if (HX_FIELD_EQ(inName,"setName") ) { return ::hx::Val( setName_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitLoad") ) { return ::hx::Val( waitLoad_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wrap") ) { return ::hx::Val( set_wrap_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lastFrame() ); }
		if (HX_FIELD_EQ(inName,"waitLoads") ) { return ::hx::Val( waitLoads ); }
		if (HX_FIELD_EQ(inName,"mipLevels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mipLevels() ); }
		if (HX_FIELD_EQ(inName,"checkSize") ) { return ::hx::Val( checkSize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layerCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layerCount() ); }
		if (HX_FIELD_EQ(inName,"_lastFrame") ) { return ::hx::Val( _lastFrame ); }
		if (HX_FIELD_EQ(inName,"checkAlloc") ) { return ::hx::Val( checkAlloc_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mipMap") ) { return ::hx::Val( set_mipMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filter") ) { return ::hx::Val( set_filter_dyn() ); }
		if (HX_FIELD_EQ(inName,"isDisposed") ) { return ::hx::Val( isDisposed_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"depthBuffer") ) { return ::hx::Val( depthBuffer ); }
		if (HX_FIELD_EQ(inName,"swapTexture") ) { return ::hx::Val( swapTexture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uploadBitmap") ) { return ::hx::Val( uploadBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadPixels") ) { return ::hx::Val( uploadPixels_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_lastFrame") ) { return ::hx::Val( set_lastFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_lastFrame") ) { return ::hx::Val( get_lastFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mipLevels") ) { return ::hx::Val( get_mipLevels_dyn() ); }
		if (HX_FIELD_EQ(inName,"capturePixels") ) { return ::hx::Val( capturePixels_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_layerCount") ) { return ::hx::Val( get_layerCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkMipMapGen") ) { return ::hx::Val( checkMipMapGen_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"preventAutoDispose") ) { return ::hx::Val( preventAutoDispose_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { outValue = ( UID ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"genDisc") ) { outValue = genDisc_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"genNoise") ) { outValue = genNoise_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromColor") ) { outValue = fromColor_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBitmap") ) { outValue = fromBitmap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromPixels") ) { outValue = fromPixels_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"genTexture") ) { outValue = genTexture_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"genChecker") ) { outValue = genChecker_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"allocNoise") ) { outValue = allocNoise_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nativeFormat") ) { outValue = ( nativeFormat ); return true; }
		if (HX_FIELD_EQ(inName,"allocChecker") ) { outValue = allocChecker_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawGenTexture") ) { outValue = drawGenTexture_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"genTextureKeys") ) { outValue = ( genTextureKeys ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"noiseTextureKeys") ) { outValue = ( noiseTextureKeys ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultCubeTexture") ) { outValue = defaultCubeTexture_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"checkerTextureKeys") ) { outValue = ( checkerTextureKeys ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PREVENT_AUTO_DISPOSE") ) { outValue = ( PREVENT_AUTO_DISPOSE ); return true; }
	}
	return false;
}

::hx::Val Texture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { mem=inValue.Cast<  ::h3d::impl::MemoryManager >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wrap(inValue.Cast<  ::h3d::mat::Wrap >()) );wrap=inValue.Cast<  ::h3d::mat::Wrap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::hxd::PixelFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mipMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mipMap(inValue.Cast<  ::h3d::mat::MipMap >()) );mipMap=inValue.Cast<  ::h3d::mat::MipMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filter(inValue.Cast<  ::h3d::mat::Filter >()) );filter=inValue.Cast<  ::h3d::mat::Filter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { lodBias=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realloc") ) { realloc=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lastFrame(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"waitLoads") ) { waitLoads=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastFrame") ) { _lastFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"depthBuffer") ) { depthBuffer=inValue.Cast<  ::h3d::mat::DepthBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { UID=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nativeFormat") ) { nativeFormat=ioValue.Cast<  ::hxd::PixelFormat >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"genTextureKeys") ) { genTextureKeys=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"noiseTextureKeys") ) { noiseTextureKeys=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"checkerTextureKeys") ) { checkerTextureKeys=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PREVENT_AUTO_DISPOSE") ) { PREVENT_AUTO_DISPOSE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("t",74,00,00,00));
	outFields->push(HX_("mem",15,0e,53,00));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("lastFrame",f7,a5,30,53));
	outFields->push(HX_("bits",06,fb,16,41));
	outFields->push(HX_("waitLoads",d8,54,25,36));
	outFields->push(HX_("mipMap",68,e5,3b,54));
	outFields->push(HX_("filter",b8,1f,35,85));
	outFields->push(HX_("wrap",ca,39,ff,4e));
	outFields->push(HX_("layerCount",3e,fd,f2,ef));
	outFields->push(HX_("lodBias",9a,3f,ad,ac));
	outFields->push(HX_("mipLevels",23,ab,c2,50));
	outFields->push(HX_("depthBuffer",63,46,9e,52));
	outFields->push(HX_("_lastFrame",b8,21,d3,ae));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Texture_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Texture_obj,t),HX_("t",74,00,00,00)},
	{::hx::fsObject /*  ::h3d::impl::MemoryManager */ ,(int)offsetof(Texture_obj,mem),HX_("mem",15,0e,53,00)},
	{::hx::fsInt,(int)offsetof(Texture_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(Texture_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Texture_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(Texture_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(Texture_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsObject /*  ::hxd::PixelFormat */ ,(int)offsetof(Texture_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsInt,(int)offsetof(Texture_obj,bits),HX_("bits",06,fb,16,41)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Texture_obj,waitLoads),HX_("waitLoads",d8,54,25,36)},
	{::hx::fsObject /*  ::h3d::mat::MipMap */ ,(int)offsetof(Texture_obj,mipMap),HX_("mipMap",68,e5,3b,54)},
	{::hx::fsObject /*  ::h3d::mat::Filter */ ,(int)offsetof(Texture_obj,filter),HX_("filter",b8,1f,35,85)},
	{::hx::fsObject /*  ::h3d::mat::Wrap */ ,(int)offsetof(Texture_obj,wrap),HX_("wrap",ca,39,ff,4e)},
	{::hx::fsFloat,(int)offsetof(Texture_obj,lodBias),HX_("lodBias",9a,3f,ad,ac)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Texture_obj,realloc),HX_("realloc",e2,f7,2d,08)},
	{::hx::fsObject /*  ::h3d::mat::DepthBuffer */ ,(int)offsetof(Texture_obj,depthBuffer),HX_("depthBuffer",63,46,9e,52)},
	{::hx::fsInt,(int)offsetof(Texture_obj,_lastFrame),HX_("_lastFrame",b8,21,d3,ae)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Texture_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Texture_obj::UID,HX_("UID",70,bf,40,00)},
	{::hx::fsInt,(void *) &Texture_obj::PREVENT_AUTO_DISPOSE,HX_("PREVENT_AUTO_DISPOSE",96,69,ab,89)},
	{::hx::fsObject /*  ::hxd::PixelFormat */ ,(void *) &Texture_obj::nativeFormat,HX_("nativeFormat",2e,98,a5,b2)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Texture_obj::checkerTextureKeys,HX_("checkerTextureKeys",3a,57,5c,8f)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Texture_obj::noiseTextureKeys,HX_("noiseTextureKeys",f5,3a,9a,30)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Texture_obj::genTextureKeys,HX_("genTextureKeys",bf,a1,a7,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_("t",74,00,00,00),
	HX_("mem",15,0e,53,00),
	HX_("id",db,5b,00,00),
	HX_("name",4b,72,ff,48),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("flags",47,2b,8c,02),
	HX_("format",37,8f,8e,fd),
	HX_("bits",06,fb,16,41),
	HX_("waitLoads",d8,54,25,36),
	HX_("mipMap",68,e5,3b,54),
	HX_("filter",b8,1f,35,85),
	HX_("wrap",ca,39,ff,4e),
	HX_("lodBias",9a,3f,ad,ac),
	HX_("realloc",e2,f7,2d,08),
	HX_("depthBuffer",63,46,9e,52),
	HX_("_lastFrame",b8,21,d3,ae),
	HX_("set_lastFrame",da,5b,9a,59),
	HX_("get_lastFrame",ce,79,94,14),
	HX_("get_mipLevels",fa,7e,26,12),
	HX_("get_layerCount",87,85,e8,65),
	HX_("alloc",75,a4,93,21),
	HX_("isSRGB",64,c5,a8,69),
	HX_("checkAlloc",8d,a6,83,31),
	HX_("clone",5d,13,63,48),
	HX_("preventAutoDispose",f8,1c,80,b5),
	HX_("waitLoad",3b,ff,99,50),
	HX_("toString",ac,d0,6e,38),
	HX_("setName",0d,b3,83,0e),
	HX_("set_mipMap",a5,f3,40,48),
	HX_("set_filter",f5,2d,3a,79),
	HX_("set_wrap",c7,4e,17,7d),
	HX_("isDisposed",ef,1c,53,a2),
	HX_("resize",f4,59,7b,08),
	HX_("clearF",19,ea,a7,07),
	HX_("clear",8d,71,5b,48),
	HX_("checkSize",a9,69,33,a0),
	HX_("checkMipMapGen",20,92,2c,cc),
	HX_("uploadBitmap",d0,44,03,14),
	HX_("uploadPixels",0e,24,a1,af),
	HX_("dispose",9f,80,4c,bb),
	HX_("swapTexture",88,8e,44,a6),
	HX_("capturePixels",53,5c,08,70),
	::String(null()) };

static void Texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::UID,"UID");
	HX_MARK_MEMBER_NAME(Texture_obj::PREVENT_AUTO_DISPOSE,"PREVENT_AUTO_DISPOSE");
	HX_MARK_MEMBER_NAME(Texture_obj::nativeFormat,"nativeFormat");
	HX_MARK_MEMBER_NAME(Texture_obj::checkerTextureKeys,"checkerTextureKeys");
	HX_MARK_MEMBER_NAME(Texture_obj::noiseTextureKeys,"noiseTextureKeys");
	HX_MARK_MEMBER_NAME(Texture_obj::genTextureKeys,"genTextureKeys");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::UID,"UID");
	HX_VISIT_MEMBER_NAME(Texture_obj::PREVENT_AUTO_DISPOSE,"PREVENT_AUTO_DISPOSE");
	HX_VISIT_MEMBER_NAME(Texture_obj::nativeFormat,"nativeFormat");
	HX_VISIT_MEMBER_NAME(Texture_obj::checkerTextureKeys,"checkerTextureKeys");
	HX_VISIT_MEMBER_NAME(Texture_obj::noiseTextureKeys,"noiseTextureKeys");
	HX_VISIT_MEMBER_NAME(Texture_obj::genTextureKeys,"genTextureKeys");
};

#endif

::hx::Class Texture_obj::__mClass;

static ::String Texture_obj_sStaticFields[] = {
	HX_("UID",70,bf,40,00),
	HX_("PREVENT_AUTO_DISPOSE",96,69,ab,89),
	HX_("nativeFormat",2e,98,a5,b2),
	HX_("fromBitmap",f9,14,50,34),
	HX_("fromPixels",37,f4,ed,cf),
	HX_("fromColor",99,5b,e5,fe),
	HX_("genDisc",05,9c,84,a0),
	HX_("genTexture",2b,a2,13,97),
	HX_("drawGenTexture",4f,7f,1d,7a),
	HX_("defaultCubeTexture",25,d1,ae,34),
	HX_("genChecker",85,8c,57,0b),
	HX_("checkerTextureKeys",3a,57,5c,8f),
	HX_("noiseTextureKeys",f5,3a,9a,30),
	HX_("genTextureKeys",bf,a1,a7,fa),
	HX_("genNoise",ea,74,75,99),
	HX_("allocNoise",e5,12,6b,cb),
	HX_("allocChecker",40,df,6c,dc),
	::String(null())
};

void Texture_obj::__register()
{
	Texture_obj _hx_dummy;
	Texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.Texture",38,58,e8,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = Texture_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Texture_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_7_boot)
HXDLIN(   7)		UID = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_8_boot)
HXDLIN(   8)		PREVENT_AUTO_DISPOSE = (int)2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_19_boot)
HXDLIN(  19)		nativeFormat = ::hxd::PixelFormat_obj::RGBA_dyn();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_515_boot)
HXDLIN( 515)		checkerTextureKeys =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_516_boot)
HXDLIN( 516)		noiseTextureKeys =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_23365ddd19ebcf5e_517_boot)
HXDLIN( 517)		genTextureKeys =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace h3d
} // end namespace mat
