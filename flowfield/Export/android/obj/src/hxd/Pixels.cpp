#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_format_png_Tools
#include <format/png/Tools.h>
#endif
#ifndef INCLUDED_format_png_Writer
#include <format/png/Writer.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxd_Flags
#include <hxd/Flags.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_Pixels
#include <hxd/Pixels.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_107_new,"hxd.Pixels","new",0xf7a4f999,"hxd.Pixels.new","hxd/Pixels.hx",107,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_124_get_format,"hxd.Pixels","get_format",0xc3675ee7,"hxd.Pixels.get_format","hxd/Pixels.hx",124,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_126_set_innerFormat,"hxd.Pixels","set_innerFormat",0xac0158c9,"hxd.Pixels.set_innerFormat","hxd/Pixels.hx",126,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_135_invalidFormat,"hxd.Pixels","invalidFormat",0xfa443c07,"hxd.Pixels.invalidFormat","hxd/Pixels.hx",135,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_138_sub,"hxd.Pixels","sub",0xf7a8d2b9,"hxd.Pixels.sub","hxd/Pixels.hx",138,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_153_yflip,"hxd.Pixels","yflip",0x3c12ed1f,"hxd.Pixels.yflip","hxd/Pixels.hx",153,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_156_blit,"hxd.Pixels","blit",0xb0cc20dc,"hxd.Pixels.blit","hxd/Pixels.hx",156,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_174_clear,"hxd.Pixels","clear",0x95341b06,"hxd.Pixels.clear","hxd/Pixels.hx",174,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_222_toVector,"hxd.Pixels","toVector",0x0dce20c5,"hxd.Pixels.toVector","hxd/Pixels.hx",222,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_264_makeSquare,"hxd.Pixels","makeSquare",0x80133512,"hxd.Pixels.makeSquare","hxd/Pixels.hx",264,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_294_copyInner,"hxd.Pixels","copyInner",0x4074af9a,"hxd.Pixels.copyInner","hxd/Pixels.hx",294,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_303_willChange,"hxd.Pixels","willChange",0x55506e09,"hxd.Pixels.willChange","hxd/Pixels.hx",303,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_306_setFlip,"hxd.Pixels","setFlip",0xbcb30d28,"hxd.Pixels.setFlip","hxd/Pixels.hx",306,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_326_convert,"hxd.Pixels","convert",0xce3ab7ac,"hxd.Pixels.convert","hxd/Pixels.hx",326,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_431_getPixel,"hxd.Pixels","getPixel",0x71ac9e37,"hxd.Pixels.getPixel","hxd/Pixels.hx",431,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_446_setPixel,"hxd.Pixels","setPixel",0x2009f7ab,"hxd.Pixels.setPixel","hxd/Pixels.hx",446,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_463_getPixelF,"hxd.Pixels","getPixelF",0x055dd22f,"hxd.Pixels.getPixelF","hxd/Pixels.hx",463,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_483_setPixelF,"hxd.Pixels","setPixelF",0xe8aebe3b,"hxd.Pixels.setPixelF","hxd/Pixels.hx",483,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_500_dispose,"hxd.Pixels","dispose",0x6ebd3a58,"hxd.Pixels.dispose","hxd/Pixels.hx",500,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_504_toString,"hxd.Pixels","toString",0x87a098d3,"hxd.Pixels.toString","hxd/Pixels.hx",504,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_507_toPNG,"hxd.Pixels","toPNG",0x60ef9b67,"hxd.Pixels.toPNG","hxd/Pixels.hx",507,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_522_clone,"hxd.Pixels","clone",0x953bbcd6,"hxd.Pixels.clone","hxd/Pixels.hx",522,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_117_switchEndian,"hxd.Pixels","switchEndian",0xeafead56,"hxd.Pixels.switchEndian","hxd/Pixels.hx",117,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_121_switchBR,"hxd.Pixels","switchBR",0x5d08b0eb,"hxd.Pixels.switchBR","hxd/Pixels.hx",121,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_534_calcDataSize,"hxd.Pixels","calcDataSize",0x2de3d967,"hxd.Pixels.calcDataSize","hxd/Pixels.hx",534,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_543_calcStride,"hxd.Pixels","calcStride",0x9b702a75,"hxd.Pixels.calcStride","hxd/Pixels.hx",543,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_567_isFloatFormat,"hxd.Pixels","isFloatFormat",0xa51880a2,"hxd.Pixels.isFloatFormat","hxd/Pixels.hx",567,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_580_getChannelOffset,"hxd.Pixels","getChannelOffset",0x0720f167,"hxd.Pixels.getChannelOffset","hxd/Pixels.hx",580,0x892673d6)
static const int _hx_array_data_91383927_55[] = {
	(int)1,(int)2,(int)3,(int)0,
};
static const int _hx_array_data_91383927_56[] = {
	(int)2,(int)1,(int)0,(int)3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_607_alloc,"hxd.Pixels","alloc",0x6e6c4dee,"hxd.Pixels.alloc","hxd/Pixels.hx",607,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_637_toDDS,"hxd.Pixels","toDDS",0x60e677b1,"hxd.Pixels.toDDS","hxd/Pixels.hx",637,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_7f5532e55fe3b60b_616_toDDS,"hxd.Pixels","toDDS",0x60e677b1,"hxd.Pixels.toDDS","hxd/Pixels.hx",616,0x892673d6)
namespace hxd{

void Pixels_obj::__construct(int width,int height, ::haxe::io::Bytes bytes, ::hxd::PixelFormat format,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_107_new)
HXLINE( 108)		this->width = width;
HXLINE( 109)		this->height = height;
HXLINE( 110)		this->bytes = bytes;
HXLINE( 111)		this->set_innerFormat(format);
HXLINE( 112)		this->offset = offset;
HXLINE( 113)		int this1 = 0;
HXDLIN( 113)		this->flags = this1;
            	}

Dynamic Pixels_obj::__CreateEmpty() { return new Pixels_obj; }

void *Pixels_obj::_hx_vtable = 0;

Dynamic Pixels_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pixels_obj > _hx_result = new Pixels_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Pixels_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b052a65;
}

 ::hxd::PixelFormat Pixels_obj::get_format(){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_124_get_format)
HXDLIN( 124)		return this->innerFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pixels_obj,get_format,return )

 ::hxd::PixelFormat Pixels_obj::set_innerFormat( ::hxd::PixelFormat fmt){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_126_set_innerFormat)
HXLINE( 127)		this->innerFormat = fmt;
HXLINE( 128)		this->stride = ::hxd::Pixels_obj::calcStride(this->width,fmt);
HXLINE( 129)		this->dataSize = ::hxd::Pixels_obj::calcDataSize(this->width,this->height,fmt);
HXLINE( 130)		this->bytesPerPixel = ::hxd::Pixels_obj::calcStride(1,fmt);
HXLINE( 131)		return fmt;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pixels_obj,set_innerFormat,return )

void Pixels_obj::invalidFormat(){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_135_invalidFormat)
HXDLIN( 135)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported format for this operation : ",ec,3d,56,ff) + ::Std_obj::string(this->innerFormat))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pixels_obj,invalidFormat,(void))

 ::hxd::Pixels Pixels_obj::sub(int x,int y,int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_138_sub)
HXLINE( 139)		bool _hx_tmp;
HXDLIN( 139)		bool _hx_tmp1;
HXDLIN( 139)		bool _hx_tmp2;
HXDLIN( 139)		if ((x >= 0)) {
HXLINE( 139)			_hx_tmp2 = (y < 0);
            		}
            		else {
HXLINE( 139)			_hx_tmp2 = true;
            		}
HXDLIN( 139)		if (!(_hx_tmp2)) {
HXLINE( 139)			_hx_tmp1 = ((x + width) > this->width);
            		}
            		else {
HXLINE( 139)			_hx_tmp1 = true;
            		}
HXDLIN( 139)		if (!(_hx_tmp1)) {
HXLINE( 139)			_hx_tmp = ((y + height) > this->height);
            		}
            		else {
HXLINE( 139)			_hx_tmp = true;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 140)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Pixels.sub() outside bounds",90,7b,26,1d)));
            		}
HXLINE( 141)		 ::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc((height * this->stride));
HXLINE( 142)		int stride = ::hxd::Pixels_obj::calcStride(width,this->innerFormat);
HXLINE( 143)		int outP = 0;
HXLINE( 144)		{
HXLINE( 144)			int _g = 0;
HXDLIN( 144)			int _g1 = height;
HXDLIN( 144)			while((_g < _g1)){
HXLINE( 144)				_g = (_g + 1);
HXDLIN( 144)				int dy = (_g - 1);
HXLINE( 145)				int y1 = (y + dy);
HXDLIN( 145)				int p;
HXDLIN( 145)				int this1 = this->flags;
HXDLIN( 145)				if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0)) {
HXLINE( 145)					p = ((this->height - 1) - y1);
            				}
            				else {
HXLINE( 145)					p = y1;
            				}
HXDLIN( 145)				int p1 = (((x + (p * this->width)) * this->bytesPerPixel) + this->offset);
HXLINE( 146)				out->blit(outP,this->bytes,p1,stride);
HXLINE( 147)				outP = (outP + stride);
            			}
            		}
HXLINE( 149)		return  ::hxd::Pixels_obj::__alloc( HX_CTX ,width,height,out,this->innerFormat,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(Pixels_obj,sub,return )

int Pixels_obj::yflip(int y){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_153_yflip)
HXDLIN( 153)		int this1 = this->flags;
HXDLIN( 153)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0)) {
HXDLIN( 153)			return ((this->height - 1) - y);
            		}
            		else {
HXDLIN( 153)			return y;
            		}
HXDLIN( 153)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pixels_obj,yflip,return )

void Pixels_obj::blit(int x,int y, ::hxd::Pixels src,int srcX,int srcY,int width,int height){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_156_blit)
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		bool _hx_tmp1;
HXDLIN( 157)		bool _hx_tmp2;
HXDLIN( 157)		if ((x >= 0)) {
HXLINE( 157)			_hx_tmp2 = (y < 0);
            		}
            		else {
HXLINE( 157)			_hx_tmp2 = true;
            		}
HXDLIN( 157)		if (!(_hx_tmp2)) {
HXLINE( 157)			_hx_tmp1 = ((x + width) > this->width);
            		}
            		else {
HXLINE( 157)			_hx_tmp1 = true;
            		}
HXDLIN( 157)		if (!(_hx_tmp1)) {
HXLINE( 157)			_hx_tmp = ((y + height) > this->height);
            		}
            		else {
HXLINE( 157)			_hx_tmp = true;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 158)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Pixels.blit() outside bounds",99,ec,07,9a)));
            		}
HXLINE( 159)		bool _hx_tmp3;
HXDLIN( 159)		bool _hx_tmp4;
HXDLIN( 159)		bool _hx_tmp5;
HXDLIN( 159)		if ((srcX >= 0)) {
HXLINE( 159)			_hx_tmp5 = (srcX < 0);
            		}
            		else {
HXLINE( 159)			_hx_tmp5 = true;
            		}
HXDLIN( 159)		if (!(_hx_tmp5)) {
HXLINE( 159)			_hx_tmp4 = ((srcX + width) > src->width);
            		}
            		else {
HXLINE( 159)			_hx_tmp4 = true;
            		}
HXDLIN( 159)		if (!(_hx_tmp4)) {
HXLINE( 159)			_hx_tmp3 = ((srcY + height) > src->height);
            		}
            		else {
HXLINE( 159)			_hx_tmp3 = true;
            		}
HXDLIN( 159)		if (_hx_tmp3) {
HXLINE( 160)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Pixels.blit() outside src bounds",55,64,c5,12)));
            		}
HXLINE( 161)		int this1 = this->flags;
HXDLIN( 161)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::ReadOnly_dyn()))) != 0)) {
HXLINE( 161)			this->copyInner();
            		}
HXLINE( 162)		src->convert(this->innerFormat);
HXLINE( 163)		int bpp = this->bytesPerPixel;
HXLINE( 164)		if ((bpp == 0)) {
HXLINE( 165)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            		}
HXLINE( 166)		int stride = ::hxd::Pixels_obj::calcStride(width,this->innerFormat);
HXLINE( 167)		{
HXLINE( 167)			int _g = 0;
HXDLIN( 167)			int _g1 = height;
HXDLIN( 167)			while((_g < _g1)){
HXLINE( 167)				_g = (_g + 1);
HXDLIN( 167)				int dy = (_g - 1);
HXLINE( 168)				int y1 = (dy + srcY);
HXDLIN( 168)				int srcP;
HXDLIN( 168)				int this1 = src->flags;
HXDLIN( 168)				if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0)) {
HXLINE( 168)					srcP = ((src->height - 1) - y1);
            				}
            				else {
HXLINE( 168)					srcP = y1;
            				}
HXDLIN( 168)				int srcP1 = (((srcX + (srcP * src->width)) * bpp) + src->offset);
HXLINE( 169)				int y2 = (dy + y);
HXDLIN( 169)				int dstP;
HXDLIN( 169)				int this2 = this->flags;
HXDLIN( 169)				if (((this2 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0)) {
HXLINE( 169)					dstP = ((this->height - 1) - y2);
            				}
            				else {
HXLINE( 169)					dstP = y2;
            				}
HXDLIN( 169)				int dstP1 = (((x + (dstP * this->width)) * bpp) + this->offset);
HXLINE( 170)				this->bytes->blit(dstP1,src->bytes,srcP1,stride);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(Pixels_obj,blit,(void))

void Pixels_obj::clear(int color,::hx::Null< int >  __o_preserveMask){
            		int preserveMask = __o_preserveMask.Default(0);
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_174_clear)
HXLINE( 175)		int mask = preserveMask;
HXLINE( 176)		int this1 = this->flags;
HXDLIN( 176)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::ReadOnly_dyn()))) != 0)) {
HXLINE( 176)			this->copyInner();
            		}
HXLINE( 177)		bool _hx_tmp;
HXDLIN( 177)		bool _hx_tmp1;
HXDLIN( 177)		if (((color & 255) == ((color >> 8) & 255))) {
HXLINE( 177)			_hx_tmp1 = ((color & 65535) == ::hx::UShr(color,16));
            		}
            		else {
HXLINE( 177)			_hx_tmp1 = false;
            		}
HXDLIN( 177)		if (_hx_tmp1) {
HXLINE( 177)			_hx_tmp = (mask == 0);
            		}
            		else {
HXLINE( 177)			_hx_tmp = false;
            		}
HXDLIN( 177)		if (_hx_tmp) {
HXLINE( 178)			this->bytes->fill(this->offset,((this->width * this->height) * this->bytesPerPixel),(color & 255));
HXLINE( 179)			return;
            		}
HXLINE( 181)		switch((int)(this->innerFormat->_hx_getIndex())){
            			case (int)0: {
HXLINE( 187)				color = (((::hx::UShr(color,24) | ((color >> 8) & 65280)) | ((color << 8) & 16711680)) | (color << 24));
HXLINE( 188)				mask = (((::hx::UShr(mask,24) | ((mask >> 8) & 65280)) | ((mask << 8) & 16711680)) | (mask << 24));
            			}
            			break;
            			case (int)1: {
            			}
            			break;
            			case (int)2: {
HXLINE( 184)				color = (((color & -16711936) | ((color << 16) & 16711680)) | ((color >> 16) & 255));
HXLINE( 185)				mask = (((mask & -16711936) | ((mask << 16) & 16711680)) | ((mask >> 16) & 255));
            			}
            			break;
            			default:{
HXLINE( 190)				this->invalidFormat();
            			}
            		}
HXLINE( 192)		int p = this->offset;
HXLINE( 193)		if ((mask == 0)) {
HXLINE( 201)			int _g = 0;
HXDLIN( 201)			int _g1 = (this->width * this->height);
HXDLIN( 201)			while((_g < _g1)){
HXLINE( 201)				_g = (_g + 1);
HXDLIN( 201)				int i = (_g - 1);
HXLINE( 202)				{
HXLINE( 202)					 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 202)					_this->b[p] = ( (unsigned char)((color & 255)) );
HXDLIN( 202)					_this->b[(p + 1)] = ( (unsigned char)(((color >> 8) & 255)) );
HXDLIN( 202)					_this->b[(p + 2)] = ( (unsigned char)(((color >> 16) & 255)) );
HXDLIN( 202)					_this->b[(p + 3)] = ( (unsigned char)((::hx::UShr(color,24) & 255)) );
            				}
HXLINE( 203)				p = (p + 4);
            			}
            		}
            		else {
HXLINE( 214)			int _g = 0;
HXDLIN( 214)			int _g1 = (this->width * this->height);
HXDLIN( 214)			while((_g < _g1)){
HXLINE( 214)				_g = (_g + 1);
HXDLIN( 214)				int i = (_g - 1);
HXLINE( 215)				{
HXLINE( 215)					 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 215)					 ::haxe::io::Bytes _this1 = this->bytes;
HXDLIN( 215)					int v = (color | ((((( (int)(_this1->b->__get(p)) ) | (( (int)(_this1->b->__get((p + 1))) ) << 8)) | (( (int)(_this1->b->__get((p + 2))) ) << 16)) | (( (int)(_this1->b->__get((p + 3))) ) << 24)) & mask));
HXDLIN( 215)					_this->b[p] = ( (unsigned char)((v & 255)) );
HXDLIN( 215)					_this->b[(p + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 215)					_this->b[(p + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 215)					_this->b[(p + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            				}
HXLINE( 216)				p = (p + 4);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Pixels_obj,clear,(void))

::Array< int > Pixels_obj::toVector(){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_222_toVector)
HXLINE( 223)		::Array< int > this1 = ::Array_obj< int >::__new((this->width * this->height));
HXDLIN( 223)		::Array< int > vec = this1;
HXLINE( 224)		int idx = 0;
HXLINE( 225)		int p = this->offset;
HXLINE( 226)		int dl = 0;
HXLINE( 227)		int this2 = this->flags;
HXDLIN( 227)		if (((this2 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0)) {
HXLINE( 228)			p = (p + (((this->height - 1) * this->width) * this->bytesPerPixel));
HXLINE( 229)			dl = ((-(this->width) * 2) * this->bytesPerPixel);
            		}
HXLINE( 231)		switch((int)(this->innerFormat->_hx_getIndex())){
            			case (int)0: {
HXLINE( 250)				int _g = 0;
HXDLIN( 250)				int _g1 = this->height;
HXDLIN( 250)				while((_g < _g1)){
HXLINE( 250)					_g = (_g + 1);
HXDLIN( 250)					int y = (_g - 1);
HXLINE( 251)					{
HXLINE( 251)						int _g1 = 0;
HXDLIN( 251)						int _g2 = this->width;
HXDLIN( 251)						while((_g1 < _g2)){
HXLINE( 251)							_g1 = (_g1 + 1);
HXDLIN( 251)							int x = (_g1 - 1);
HXLINE( 252)							 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 252)							int v = (((( (int)(_this->b->__get(p)) ) | (( (int)(_this->b->__get((p + 1))) ) << 8)) | (( (int)(_this->b->__get((p + 2))) ) << 16)) | (( (int)(_this->b->__get((p + 3))) ) << 24));
HXLINE( 253)							{
HXLINE( 253)								idx = (idx + 1);
HXDLIN( 253)								vec->__unsafe_set((idx - 1),(((::hx::UShr(v,24) | ((v >> 8) & 65280)) | ((v << 8) & 16711680)) | (v << 24)));
            							}
HXLINE( 254)							p = (p + 4);
            						}
            					}
HXLINE( 256)					p = (p + dl);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 233)				int _g = 0;
HXDLIN( 233)				int _g1 = this->height;
HXDLIN( 233)				while((_g < _g1)){
HXLINE( 233)					_g = (_g + 1);
HXDLIN( 233)					int y = (_g - 1);
HXLINE( 234)					{
HXLINE( 234)						int _g1 = 0;
HXDLIN( 234)						int _g2 = this->width;
HXDLIN( 234)						while((_g1 < _g2)){
HXLINE( 234)							_g1 = (_g1 + 1);
HXDLIN( 234)							int x = (_g1 - 1);
HXLINE( 235)							{
HXLINE( 235)								idx = (idx + 1);
HXDLIN( 235)								 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 235)								vec->__unsafe_set((idx - 1),(((( (int)(_this->b->__get(p)) ) | (( (int)(_this->b->__get((p + 1))) ) << 8)) | (( (int)(_this->b->__get((p + 2))) ) << 16)) | (( (int)(_this->b->__get((p + 3))) ) << 24)));
            							}
HXLINE( 236)							p = (p + 4);
            						}
            					}
HXLINE( 238)					p = (p + dl);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 241)				int _g = 0;
HXDLIN( 241)				int _g1 = this->height;
HXDLIN( 241)				while((_g < _g1)){
HXLINE( 241)					_g = (_g + 1);
HXDLIN( 241)					int y = (_g - 1);
HXLINE( 242)					{
HXLINE( 242)						int _g1 = 0;
HXDLIN( 242)						int _g2 = this->width;
HXDLIN( 242)						while((_g1 < _g2)){
HXLINE( 242)							_g1 = (_g1 + 1);
HXDLIN( 242)							int x = (_g1 - 1);
HXLINE( 243)							 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 243)							int v = (((( (int)(_this->b->__get(p)) ) | (( (int)(_this->b->__get((p + 1))) ) << 8)) | (( (int)(_this->b->__get((p + 2))) ) << 16)) | (( (int)(_this->b->__get((p + 3))) ) << 24));
HXLINE( 244)							{
HXLINE( 244)								idx = (idx + 1);
HXDLIN( 244)								vec->__unsafe_set((idx - 1),(((v & -16711936) | ((v << 16) & 16711680)) | ((v >> 16) & 255)));
            							}
HXLINE( 245)							p = (p + 4);
            						}
            					}
HXLINE( 247)					p = (p + dl);
            				}
            			}
            			break;
            			default:{
HXLINE( 259)				this->invalidFormat();
            			}
            		}
HXLINE( 261)		return vec;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pixels_obj,toVector,return )

 ::hxd::Pixels Pixels_obj::makeSquare( ::Dynamic copy){
            	HX_GC_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_264_makeSquare)
HXLINE( 265)		int w = this->width;
HXDLIN( 265)		int h = this->height;
HXLINE( 266)		int tw;
HXDLIN( 266)		if ((w == 0)) {
HXLINE( 266)			tw = 0;
            		}
            		else {
HXLINE( 266)			tw = 1;
            		}
HXDLIN( 266)		int th;
HXDLIN( 266)		if ((h == 0)) {
HXLINE( 266)			th = 0;
            		}
            		else {
HXLINE( 266)			th = 1;
            		}
HXLINE( 267)		while((tw < w)){
HXLINE( 267)			tw = (tw << 1);
            		}
HXLINE( 268)		while((th < h)){
HXLINE( 268)			th = (th << 1);
            		}
HXLINE( 269)		bool _hx_tmp;
HXDLIN( 269)		if ((w == tw)) {
HXLINE( 269)			_hx_tmp = (h == th);
            		}
            		else {
HXLINE( 269)			_hx_tmp = false;
            		}
HXDLIN( 269)		if (_hx_tmp) {
HXLINE( 269)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 270)		int bpp = this->bytesPerPixel;
HXLINE( 271)		 ::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc(((tw * th) * bpp));
HXLINE( 272)		int p = 0;
HXDLIN( 272)		int b = this->offset;
HXLINE( 273)		{
HXLINE( 273)			int _g = 0;
HXDLIN( 273)			int _g1 = h;
HXDLIN( 273)			while((_g < _g1)){
HXLINE( 273)				_g = (_g + 1);
HXDLIN( 273)				int y = (_g - 1);
HXLINE( 274)				out->blit(p,this->bytes,b,(w * bpp));
HXLINE( 275)				p = (p + (w * bpp));
HXLINE( 276)				b = (b + (w * bpp));
HXLINE( 277)				{
HXLINE( 277)					int _g1 = 0;
HXDLIN( 277)					int _g2 = (((tw - w) * bpp) >> 2);
HXDLIN( 277)					while((_g1 < _g2)){
HXLINE( 277)						_g1 = (_g1 + 1);
HXDLIN( 277)						int i = (_g1 - 1);
HXLINE( 278)						{
HXLINE( 278)							out->b[p] = ( (unsigned char)(0) );
HXDLIN( 278)							out->b[(p + 1)] = ( (unsigned char)(0) );
HXDLIN( 278)							out->b[(p + 2)] = ( (unsigned char)(0) );
HXDLIN( 278)							out->b[(p + 3)] = ( (unsigned char)(0) );
            						}
HXLINE( 279)						p = (p + 4);
            					}
            				}
            			}
            		}
HXLINE( 282)		{
HXLINE( 282)			int _g2 = 0;
HXDLIN( 282)			int _g3 = ((((th - h) * tw) * bpp) >> 2);
HXDLIN( 282)			while((_g2 < _g3)){
HXLINE( 282)				_g2 = (_g2 + 1);
HXDLIN( 282)				int i = (_g2 - 1);
HXLINE( 283)				{
HXLINE( 283)					out->b[p] = ( (unsigned char)(0) );
HXDLIN( 283)					out->b[(p + 1)] = ( (unsigned char)(0) );
HXDLIN( 283)					out->b[(p + 2)] = ( (unsigned char)(0) );
HXDLIN( 283)					out->b[(p + 3)] = ( (unsigned char)(0) );
            				}
HXLINE( 284)				p = (p + 4);
            			}
            		}
HXLINE( 286)		if (( (bool)(copy) )) {
HXLINE( 287)			return  ::hxd::Pixels_obj::__alloc( HX_CTX ,tw,th,out,this->innerFormat,null());
            		}
HXLINE( 288)		this->bytes = out;
HXLINE( 289)		this->width = tw;
HXLINE( 290)		this->height = th;
HXLINE( 291)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pixels_obj,makeSquare,return )

void Pixels_obj::copyInner(){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_294_copyInner)
HXLINE( 295)		 ::haxe::io::Bytes old = this->bytes;
HXLINE( 296)		this->bytes = ::haxe::io::Bytes_obj::alloc(this->dataSize);
HXLINE( 297)		this->bytes->blit(0,old,this->offset,this->dataSize);
HXLINE( 298)		this->offset = 0;
HXLINE( 299)		 ::hxd::Pixels _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 299)		int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 299)		_hx_tmp->flags = (_hx_tmp1 & (-1 - (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::ReadOnly_dyn()))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pixels_obj,copyInner,(void))

void Pixels_obj::willChange(){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_303_willChange)
HXDLIN( 303)		int this1 = this->flags;
HXDLIN( 303)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::ReadOnly_dyn()))) != 0)) {
HXDLIN( 303)			this->copyInner();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pixels_obj,willChange,(void))

void Pixels_obj::setFlip(bool b){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_306_setFlip)
HXLINE( 308)		int this1 = this->flags;
HXDLIN( 308)		if ((((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0) == b)) {
HXLINE( 308)			return;
            		}
HXLINE( 309)		int this2 = this->flags;
HXDLIN( 309)		if (((this2 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::ReadOnly_dyn()))) != 0)) {
HXLINE( 309)			this->copyInner();
            		}
HXLINE( 310)		if (b) {
HXLINE( 310)			 ::hxd::Pixels _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)			int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 310)			_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn())));
            		}
            		else {
HXLINE( 310)			 ::hxd::Pixels _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)			int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 310)			_hx_tmp->flags = (_hx_tmp1 & (-1 - (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))));
            		}
HXLINE( 311)		if ((::hx::Mod(this->stride,4) != 0)) {
HXLINE( 311)			this->invalidFormat();
            		}
HXLINE( 312)		{
HXLINE( 312)			int _g = 0;
HXDLIN( 312)			int _g1 = (this->height >> 1);
HXDLIN( 312)			while((_g < _g1)){
HXLINE( 312)				_g = (_g + 1);
HXDLIN( 312)				int y = (_g - 1);
HXLINE( 313)				int p1 = ((y * this->stride) + this->offset);
HXLINE( 314)				int p2 = ((((this->height - 1) - y) * this->stride) + this->offset);
HXLINE( 315)				{
HXLINE( 315)					int _g1 = 0;
HXDLIN( 315)					int _g2 = (this->stride >> 2);
HXDLIN( 315)					while((_g1 < _g2)){
HXLINE( 315)						_g1 = (_g1 + 1);
HXDLIN( 315)						int x = (_g1 - 1);
HXLINE( 316)						 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 316)						int a = (((( (int)(_this->b->__get(p1)) ) | (( (int)(_this->b->__get((p1 + 1))) ) << 8)) | (( (int)(_this->b->__get((p1 + 2))) ) << 16)) | (( (int)(_this->b->__get((p1 + 3))) ) << 24));
HXLINE( 317)						 ::haxe::io::Bytes _this1 = this->bytes;
HXDLIN( 317)						int b = (((( (int)(_this1->b->__get(p2)) ) | (( (int)(_this1->b->__get((p2 + 1))) ) << 8)) | (( (int)(_this1->b->__get((p2 + 2))) ) << 16)) | (( (int)(_this1->b->__get((p2 + 3))) ) << 24));
HXLINE( 318)						{
HXLINE( 318)							 ::haxe::io::Bytes _this2 = this->bytes;
HXDLIN( 318)							_this2->b[p1] = ( (unsigned char)((b & 255)) );
HXDLIN( 318)							_this2->b[(p1 + 1)] = ( (unsigned char)(((b >> 8) & 255)) );
HXDLIN( 318)							_this2->b[(p1 + 2)] = ( (unsigned char)(((b >> 16) & 255)) );
HXDLIN( 318)							_this2->b[(p1 + 3)] = ( (unsigned char)((::hx::UShr(b,24) & 255)) );
            						}
HXLINE( 319)						{
HXLINE( 319)							 ::haxe::io::Bytes _this3 = this->bytes;
HXDLIN( 319)							_this3->b[p2] = ( (unsigned char)((a & 255)) );
HXDLIN( 319)							_this3->b[(p2 + 1)] = ( (unsigned char)(((a >> 8) & 255)) );
HXDLIN( 319)							_this3->b[(p2 + 2)] = ( (unsigned char)(((a >> 16) & 255)) );
HXDLIN( 319)							_this3->b[(p2 + 3)] = ( (unsigned char)((::hx::UShr(a,24) & 255)) );
            						}
HXLINE( 320)						p1 = (p1 + 4);
HXLINE( 321)						p2 = (p2 + 4);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pixels_obj,setFlip,(void))

void Pixels_obj::convert( ::hxd::PixelFormat target){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_326_convert)
HXLINE( 327)		bool _hx_tmp;
HXDLIN( 327)		if (::hx::IsPointerNotEq( this->innerFormat,target )) {
HXLINE( 327)			_hx_tmp = __hxcpp_enum_eq(this->innerFormat,target);
            		}
            		else {
HXLINE( 327)			_hx_tmp = true;
            		}
HXDLIN( 327)		if (_hx_tmp) {
HXLINE( 328)			return;
            		}
HXLINE( 329)		int this1 = this->flags;
HXDLIN( 329)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::ReadOnly_dyn()))) != 0)) {
HXLINE( 329)			this->copyInner();
            		}
HXLINE( 330)		::Array< unsigned char > this2 = this->bytes->b;
HXDLIN( 330)		::Array< unsigned char > bytes = this2;
HXLINE( 331)		{
HXLINE( 331)			 ::hxd::PixelFormat _g = this->innerFormat;
HXDLIN( 331)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 331)					switch((int)(target->_hx_getIndex())){
            						case (int)1: {
HXLINE( 334)							int _g = 0;
HXDLIN( 334)							int _g1 = (this->width * this->height);
HXDLIN( 334)							while((_g < _g1)){
HXLINE( 334)								_g = (_g + 1);
HXDLIN( 334)								int i = (_g - 1);
HXLINE( 335)								int p = ((i << 2) + this->offset);
HXLINE( 336)								int a = ( (int)(bytes->__get(p)) );
HXLINE( 337)								int r = ( (int)(bytes->__get((p + 1))) );
HXLINE( 338)								int g = ( (int)(bytes->__get((p + 2))) );
HXLINE( 339)								int b = ( (int)(bytes->__get((p + 3))) );
HXLINE( 340)								{
HXLINE( 340)									p = (p + 1);
HXDLIN( 340)									bytes[(p - 1)] = ( (unsigned char)(b) );
            								}
HXLINE( 341)								{
HXLINE( 341)									p = (p + 1);
HXDLIN( 341)									bytes[(p - 1)] = ( (unsigned char)(g) );
            								}
HXLINE( 342)								{
HXLINE( 342)									p = (p + 1);
HXDLIN( 342)									bytes[(p - 1)] = ( (unsigned char)(r) );
            								}
HXLINE( 343)								bytes[p] = ( (unsigned char)(a) );
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 355)							int _g = 0;
HXDLIN( 355)							int _g1 = (this->width * this->height);
HXDLIN( 355)							while((_g < _g1)){
HXLINE( 355)								_g = (_g + 1);
HXDLIN( 355)								int i = (_g - 1);
HXLINE( 356)								int p = ((i << 2) + this->offset);
HXLINE( 357)								int a = ( (int)(bytes->__get(p)) );
HXLINE( 358)								{
HXLINE( 358)									int v = ( (int)(bytes->__get((p + 1))) );
HXDLIN( 358)									bytes[p] = ( (unsigned char)(v) );
            								}
HXLINE( 359)								{
HXLINE( 359)									int v1 = ( (int)(bytes->__get((p + 2))) );
HXDLIN( 359)									bytes[(p + 1)] = ( (unsigned char)(v1) );
            								}
HXLINE( 360)								{
HXLINE( 360)									int v2 = ( (int)(bytes->__get((p + 3))) );
HXDLIN( 360)									bytes[(p + 2)] = ( (unsigned char)(v2) );
            								}
HXLINE( 361)								bytes[(p + 3)] = ( (unsigned char)(a) );
            							}
            						}
            						break;
            						default:{
HXLINE( 425)							::String _hx_tmp = ((HX_("Cannot convert from ",cc,5f,50,f0) + ::Std_obj::string(this->innerFormat)) + HX_(" to ",25,3a,7f,15));
HXDLIN( 425)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(target))));
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 331)					switch((int)(target->_hx_getIndex())){
            						case (int)0: {
HXLINE( 334)							int _g = 0;
HXDLIN( 334)							int _g1 = (this->width * this->height);
HXDLIN( 334)							while((_g < _g1)){
HXLINE( 334)								_g = (_g + 1);
HXDLIN( 334)								int i = (_g - 1);
HXLINE( 335)								int p = ((i << 2) + this->offset);
HXLINE( 336)								int a = ( (int)(bytes->__get(p)) );
HXLINE( 337)								int r = ( (int)(bytes->__get((p + 1))) );
HXLINE( 338)								int g = ( (int)(bytes->__get((p + 2))) );
HXLINE( 339)								int b = ( (int)(bytes->__get((p + 3))) );
HXLINE( 340)								{
HXLINE( 340)									p = (p + 1);
HXDLIN( 340)									bytes[(p - 1)] = ( (unsigned char)(b) );
            								}
HXLINE( 341)								{
HXLINE( 341)									p = (p + 1);
HXDLIN( 341)									bytes[(p - 1)] = ( (unsigned char)(g) );
            								}
HXLINE( 342)								{
HXLINE( 342)									p = (p + 1);
HXDLIN( 342)									bytes[(p - 1)] = ( (unsigned char)(r) );
            								}
HXLINE( 343)								bytes[p] = ( (unsigned char)(a) );
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 346)							int _g = 0;
HXDLIN( 346)							int _g1 = (this->width * this->height);
HXDLIN( 346)							while((_g < _g1)){
HXLINE( 346)								_g = (_g + 1);
HXDLIN( 346)								int i = (_g - 1);
HXLINE( 347)								int p = ((i << 2) + this->offset);
HXLINE( 348)								int b = ( (int)(bytes->__get(p)) );
HXLINE( 349)								int r = ( (int)(bytes->__get((p + 2))) );
HXLINE( 350)								bytes[p] = ( (unsigned char)(r) );
HXLINE( 351)								bytes[(p + 2)] = ( (unsigned char)(b) );
            							}
            						}
            						break;
            						default:{
HXLINE( 425)							::String _hx_tmp = ((HX_("Cannot convert from ",cc,5f,50,f0) + ::Std_obj::string(this->innerFormat)) + HX_(" to ",25,3a,7f,15));
HXDLIN( 425)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(target))));
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 331)					switch((int)(target->_hx_getIndex())){
            						case (int)0: {
HXLINE( 365)							int _g = 0;
HXDLIN( 365)							int _g1 = (this->width * this->height);
HXDLIN( 365)							while((_g < _g1)){
HXLINE( 365)								_g = (_g + 1);
HXDLIN( 365)								int i = (_g - 1);
HXLINE( 366)								int p = ((i << 2) + this->offset);
HXLINE( 367)								int a = ( (int)(bytes->__get((p + 3))) );
HXLINE( 368)								{
HXLINE( 368)									int v = ( (int)(bytes->__get((p + 2))) );
HXDLIN( 368)									bytes[(p + 3)] = ( (unsigned char)(v) );
            								}
HXLINE( 369)								{
HXLINE( 369)									int v1 = ( (int)(bytes->__get((p + 1))) );
HXDLIN( 369)									bytes[(p + 2)] = ( (unsigned char)(v1) );
            								}
HXLINE( 370)								{
HXLINE( 370)									int v2 = ( (int)(bytes->__get(p)) );
HXDLIN( 370)									bytes[(p + 1)] = ( (unsigned char)(v2) );
            								}
HXLINE( 371)								bytes[p] = ( (unsigned char)(a) );
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 346)							int _g = 0;
HXDLIN( 346)							int _g1 = (this->width * this->height);
HXDLIN( 346)							while((_g < _g1)){
HXLINE( 346)								_g = (_g + 1);
HXDLIN( 346)								int i = (_g - 1);
HXLINE( 347)								int p = ((i << 2) + this->offset);
HXLINE( 348)								int b = ( (int)(bytes->__get(p)) );
HXLINE( 349)								int r = ( (int)(bytes->__get((p + 2))) );
HXLINE( 350)								bytes[p] = ( (unsigned char)(r) );
HXLINE( 351)								bytes[(p + 2)] = ( (unsigned char)(b) );
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 374)							 ::haxe::io::Bytes nbytes = ::haxe::io::Bytes_obj::alloc((this->width * this->height));
HXLINE( 375)							::Array< unsigned char > this1 = nbytes->b;
HXDLIN( 375)							::Array< unsigned char > out = this1;
HXLINE( 376)							{
HXLINE( 376)								int _g = 0;
HXDLIN( 376)								int _g1 = (this->width * this->height);
HXDLIN( 376)								while((_g < _g1)){
HXLINE( 376)									_g = (_g + 1);
HXDLIN( 376)									int i = (_g - 1);
HXLINE( 377)									{
HXLINE( 377)										int v = ( (int)(bytes->__get((i << 2))) );
HXDLIN( 377)										out[i] = ( (unsigned char)(v) );
            									}
            								}
            							}
HXLINE( 378)							this->bytes = nbytes;
            						}
            						break;
            						default:{
HXLINE( 425)							::String _hx_tmp = ((HX_("Cannot convert from ",cc,5f,50,f0) + ::Std_obj::string(this->innerFormat)) + HX_(" to ",25,3a,7f,15));
HXDLIN( 425)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(target))));
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 331)					if ((target->_hx_getIndex() == 7)) {
HXLINE( 402)						 ::haxe::io::Bytes nbytes = ::haxe::io::Bytes_obj::alloc(((this->height * this->width) * 4));
HXLINE( 403)						::Array< unsigned char > this1 = nbytes->b;
HXDLIN( 403)						::Array< unsigned char > out = this1;
HXLINE( 404)						{
HXLINE( 404)							int _g = 0;
HXDLIN( 404)							int _g1 = (this->width * this->height);
HXDLIN( 404)							while((_g < _g1)){
HXLINE( 404)								_g = (_g + 1);
HXDLIN( 404)								int i = (_g - 1);
HXLINE( 405)								 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 405)								int pos = (i << 4);
HXDLIN( 405)								bool _hx_tmp;
HXDLIN( 405)								if ((pos >= 0)) {
HXLINE( 405)									_hx_tmp = ((pos + 4) > _this->length);
            								}
            								else {
HXLINE( 405)									_hx_tmp = true;
            								}
HXDLIN( 405)								if (_hx_tmp) {
HXLINE( 405)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            								}
HXDLIN( 405)								nbytes->setFloat((i << 2), ::__hxcpp_memory_get_float(_this->b,pos));
            							}
            						}
HXLINE( 406)						this->bytes = nbytes;
            					}
            					else {
HXLINE( 425)						::String _hx_tmp = ((HX_("Cannot convert from ",cc,5f,50,f0) + ::Std_obj::string(this->innerFormat)) + HX_(" to ",25,3a,7f,15));
HXDLIN( 425)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(target))));
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 331)					switch((int)(target->_hx_getIndex())){
            						case (int)1: case (int)2: {
HXLINE( 381)							 ::haxe::io::Bytes fbytes = this->bytes;
HXLINE( 382)							int p = 0;
HXLINE( 383)							{
HXLINE( 383)								int _g = 0;
HXDLIN( 383)								int _g1 = (this->width * this->height);
HXDLIN( 383)								while((_g < _g1)){
HXLINE( 383)									_g = (_g + 1);
HXDLIN( 383)									int i = (_g - 1);
HXLINE( 384)									bool v;
HXDLIN( 384)									if ((p >= 0)) {
HXLINE( 384)										v = ((p + 4) > fbytes->length);
            									}
            									else {
HXLINE( 384)										v = true;
            									}
HXDLIN( 384)									if (v) {
HXLINE( 384)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            									}
HXDLIN( 384)									int v1 = ::Std_obj::_hx_int(( ::__hxcpp_memory_get_float(fbytes->b,p) * ( (Float)(255) )));
HXLINE( 385)									if ((v1 < 0)) {
HXLINE( 385)										v1 = 0;
            									}
            									else {
HXLINE( 385)										if ((v1 > 255)) {
HXLINE( 385)											v1 = 255;
            										}
            									}
HXLINE( 386)									{
HXLINE( 386)										p = (p + 1);
HXDLIN( 386)										bytes[(p - 1)] = ( (unsigned char)(v1) );
            									}
HXLINE( 387)									{
HXLINE( 387)										p = (p + 1);
HXDLIN( 387)										bytes[(p - 1)] = ( (unsigned char)(v1) );
            									}
HXLINE( 388)									{
HXLINE( 388)										p = (p + 1);
HXDLIN( 388)										bytes[(p - 1)] = ( (unsigned char)(v1) );
            									}
HXLINE( 389)									{
HXLINE( 389)										p = (p + 1);
HXDLIN( 389)										bytes[(p - 1)] = ( (unsigned char)(255) );
            									}
            								}
            							}
            						}
            						break;
            						default:{
HXLINE( 425)							::String _hx_tmp = ((HX_("Cannot convert from ",cc,5f,50,f0) + ::Std_obj::string(this->innerFormat)) + HX_(" to ",25,3a,7f,15));
HXDLIN( 425)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(target))));
            						}
            					}
            				}
            				break;
            				case (int)18: {
HXLINE( 331)					if ((target->_hx_getIndex() == 7)) {
HXLINE( 393)						 ::haxe::io::Bytes nbytes = ::haxe::io::Bytes_obj::alloc(((this->width * this->height) * 4));
HXLINE( 394)						 ::haxe::io::Bytes fbytes = this->bytes;
HXLINE( 395)						{
HXLINE( 395)							int _g = 0;
HXDLIN( 395)							int _g1 = (this->width * this->height);
HXDLIN( 395)							while((_g < _g1)){
HXLINE( 395)								_g = (_g + 1);
HXDLIN( 395)								int i = (_g - 1);
HXLINE( 396)								int pos = (i << 1);
HXDLIN( 396)								int nv = (( (int)(fbytes->b->__get(pos)) ) | (( (int)(fbytes->b->__get((pos + 1))) ) << 8));
HXLINE( 397)								nbytes->setFloat((i << 2),(( (Float)(nv) ) / ((Float)65535.0)));
            							}
            						}
HXLINE( 399)						this->bytes = nbytes;
            					}
            					else {
HXLINE( 425)						::String _hx_tmp = ((HX_("Cannot convert from ",cc,5f,50,f0) + ::Std_obj::string(this->innerFormat)) + HX_(" to ",25,3a,7f,15));
HXDLIN( 425)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(target))));
            					}
            				}
            				break;
            				case (int)21: {
HXLINE( 331)					if ((target->_hx_getIndex() == 21)) {
HXLINE( 408)						int b = target->_hx_getInt(0);
HXDLIN( 408)						int a = _g->_hx_getInt(0);
HXDLIN( 408)						if ((a != b)) {
HXLINE( 425)							::String _hx_tmp = ((HX_("Cannot convert from ",cc,5f,50,f0) + ::Std_obj::string(this->innerFormat)) + HX_(" to ",25,3a,7f,15));
HXDLIN( 425)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(target))));
            						}
            					}
            					else {
HXLINE( 425)						::String _hx_tmp = ((HX_("Cannot convert from ",cc,5f,50,f0) + ::Std_obj::string(this->innerFormat)) + HX_(" to ",25,3a,7f,15));
HXDLIN( 425)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(target))));
            					}
            				}
            				break;
            				default:{
HXLINE( 425)					::String _hx_tmp = ((HX_("Cannot convert from ",cc,5f,50,f0) + ::Std_obj::string(this->innerFormat)) + HX_(" to ",25,3a,7f,15));
HXDLIN( 425)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(target))));
            				}
            			}
            		}
HXLINE( 428)		this->set_innerFormat(target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pixels_obj,convert,(void))

int Pixels_obj::getPixel(int x,int y){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_431_getPixel)
HXLINE( 432)		int p;
HXDLIN( 432)		int this1 = this->flags;
HXDLIN( 432)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0)) {
HXLINE( 432)			p = ((this->height - 1) - y);
            		}
            		else {
HXLINE( 432)			p = y;
            		}
HXDLIN( 432)		int p1 = (((x + (p * this->width)) * this->bytesPerPixel) + this->offset);
HXLINE( 433)		switch((int)(this->innerFormat->_hx_getIndex())){
            			case (int)0: {
HXLINE( 439)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 439)				int v = (((( (int)(_this->b->__get(p1)) ) | (( (int)(_this->b->__get((p1 + 1))) ) << 8)) | (( (int)(_this->b->__get((p1 + 2))) ) << 16)) | (( (int)(_this->b->__get((p1 + 3))) ) << 24));
HXDLIN( 439)				return (((::hx::UShr(v,24) | ((v >> 8) & 65280)) | ((v << 8) & 16711680)) | (v << 24));
            			}
            			break;
            			case (int)1: {
HXLINE( 435)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 435)				return (((( (int)(_this->b->__get(p1)) ) | (( (int)(_this->b->__get((p1 + 1))) ) << 8)) | (( (int)(_this->b->__get((p1 + 2))) ) << 16)) | (( (int)(_this->b->__get((p1 + 3))) ) << 24));
            			}
            			break;
            			case (int)2: {
HXLINE( 437)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 437)				int v = (((( (int)(_this->b->__get(p1)) ) | (( (int)(_this->b->__get((p1 + 1))) ) << 8)) | (( (int)(_this->b->__get((p1 + 2))) ) << 16)) | (( (int)(_this->b->__get((p1 + 3))) ) << 24));
HXDLIN( 437)				return (((v & -16711936) | ((v << 16) & 16711680)) | ((v >> 16) & 255));
            			}
            			break;
            			default:{
HXLINE( 441)				this->invalidFormat();
HXLINE( 442)				return 0;
            			}
            		}
HXLINE( 433)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Pixels_obj,getPixel,return )

void Pixels_obj::setPixel(int x,int y,int color){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_446_setPixel)
HXLINE( 447)		int p;
HXDLIN( 447)		int this1 = this->flags;
HXDLIN( 447)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0)) {
HXLINE( 447)			p = ((this->height - 1) - y);
            		}
            		else {
HXLINE( 447)			p = y;
            		}
HXDLIN( 447)		int p1 = (((x + (p * this->width)) * this->bytesPerPixel) + this->offset);
HXLINE( 448)		int this2 = this->flags;
HXDLIN( 448)		if (((this2 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::ReadOnly_dyn()))) != 0)) {
HXLINE( 448)			this->copyInner();
            		}
HXLINE( 449)		switch((int)(this->innerFormat->_hx_getIndex())){
            			case (int)0: {
HXLINE( 457)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 457)				int v = (((::hx::UShr(color,24) | ((color >> 8) & 65280)) | ((color << 8) & 16711680)) | (color << 24));
HXDLIN( 457)				_this->b[p1] = ( (unsigned char)((v & 255)) );
HXDLIN( 457)				_this->b[(p1 + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 457)				_this->b[(p1 + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 457)				_this->b[(p1 + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            			}
            			break;
            			case (int)1: {
HXLINE( 453)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 453)				_this->b[p1] = ( (unsigned char)((color & 255)) );
HXDLIN( 453)				_this->b[(p1 + 1)] = ( (unsigned char)(((color >> 8) & 255)) );
HXDLIN( 453)				_this->b[(p1 + 2)] = ( (unsigned char)(((color >> 16) & 255)) );
HXDLIN( 453)				_this->b[(p1 + 3)] = ( (unsigned char)((::hx::UShr(color,24) & 255)) );
            			}
            			break;
            			case (int)2: {
HXLINE( 455)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 455)				int v = (((color & -16711936) | ((color << 16) & 16711680)) | ((color >> 16) & 255));
HXDLIN( 455)				_this->b[p1] = ( (unsigned char)((v & 255)) );
HXDLIN( 455)				_this->b[(p1 + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 455)				_this->b[(p1 + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 455)				_this->b[(p1 + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            			}
            			break;
            			case (int)5: {
HXLINE( 451)				this->bytes->b[p1] = ( (unsigned char)(color) );
            			}
            			break;
            			default:{
HXLINE( 459)				this->invalidFormat();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Pixels_obj,setPixel,(void))

 ::h3d::Vector Pixels_obj::getPixelF(int x,int y, ::h3d::Vector v){
            	HX_GC_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_463_getPixelF)
HXLINE( 464)		if (::hx::IsNull( v )) {
HXLINE( 465)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 466)		int p;
HXDLIN( 466)		int this1 = this->flags;
HXDLIN( 466)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0)) {
HXLINE( 466)			p = ((this->height - 1) - y);
            		}
            		else {
HXLINE( 466)			p = y;
            		}
HXDLIN( 466)		int p1 = (((x + (p * this->width)) * this->bytesPerPixel) + this->offset);
HXLINE( 467)		switch((int)(this->innerFormat->_hx_getIndex())){
            			case (int)4: {
HXLINE( 475)				{
HXLINE( 475)					 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 475)					bool _hx_tmp;
HXDLIN( 475)					if ((p1 >= 0)) {
HXLINE( 475)						_hx_tmp = ((p1 + 4) > _this->length);
            					}
            					else {
HXLINE( 475)						_hx_tmp = true;
            					}
HXDLIN( 475)					if (_hx_tmp) {
HXLINE( 475)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 475)					Float x =  ::__hxcpp_memory_get_float(_this->b,p1);
HXDLIN( 475)					 ::haxe::io::Bytes _this1 = this->bytes;
HXDLIN( 475)					int pos = (p1 + 4);
HXDLIN( 475)					bool _hx_tmp1;
HXDLIN( 475)					if ((pos >= 0)) {
HXLINE( 475)						_hx_tmp1 = ((pos + 4) > _this1->length);
            					}
            					else {
HXLINE( 475)						_hx_tmp1 = true;
            					}
HXDLIN( 475)					if (_hx_tmp1) {
HXLINE( 475)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 475)					Float y =  ::__hxcpp_memory_get_float(_this1->b,pos);
HXDLIN( 475)					 ::haxe::io::Bytes _this2 = this->bytes;
HXDLIN( 475)					int pos1 = (p1 + 8);
HXDLIN( 475)					bool _hx_tmp2;
HXDLIN( 475)					if ((pos1 >= 0)) {
HXLINE( 475)						_hx_tmp2 = ((pos1 + 4) > _this2->length);
            					}
            					else {
HXLINE( 475)						_hx_tmp2 = true;
            					}
HXDLIN( 475)					if (_hx_tmp2) {
HXLINE( 475)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 475)					Float z =  ::__hxcpp_memory_get_float(_this2->b,pos1);
HXDLIN( 475)					 ::haxe::io::Bytes _this3 = this->bytes;
HXDLIN( 475)					int pos2 = (p1 + 12);
HXDLIN( 475)					bool _hx_tmp3;
HXDLIN( 475)					if ((pos2 >= 0)) {
HXLINE( 475)						_hx_tmp3 = ((pos2 + 4) > _this3->length);
            					}
            					else {
HXLINE( 475)						_hx_tmp3 = true;
            					}
HXDLIN( 475)					if (_hx_tmp3) {
HXLINE( 475)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 475)					Float w =  ::__hxcpp_memory_get_float(_this3->b,pos2);
HXDLIN( 475)					v->x = x;
HXDLIN( 475)					v->y = y;
HXDLIN( 475)					v->z = z;
HXDLIN( 475)					v->w = w;
            				}
HXLINE( 476)				return v;
            			}
            			break;
            			case (int)7: {
HXLINE( 469)				{
HXLINE( 469)					 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 469)					bool _hx_tmp;
HXDLIN( 469)					if ((p1 >= 0)) {
HXLINE( 469)						_hx_tmp = ((p1 + 4) > _this->length);
            					}
            					else {
HXLINE( 469)						_hx_tmp = true;
            					}
HXDLIN( 469)					if (_hx_tmp) {
HXLINE( 469)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 469)					v->x =  ::__hxcpp_memory_get_float(_this->b,p1);
HXDLIN( 469)					v->y = ( (Float)(0) );
HXDLIN( 469)					v->z = ( (Float)(0) );
HXDLIN( 469)					v->w = ( (Float)(0) );
            				}
HXLINE( 470)				return v;
            			}
            			break;
            			case (int)10: {
HXLINE( 472)				{
HXLINE( 472)					 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 472)					bool _hx_tmp;
HXDLIN( 472)					if ((p1 >= 0)) {
HXLINE( 472)						_hx_tmp = ((p1 + 4) > _this->length);
            					}
            					else {
HXLINE( 472)						_hx_tmp = true;
            					}
HXDLIN( 472)					if (_hx_tmp) {
HXLINE( 472)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 472)					Float x =  ::__hxcpp_memory_get_float(_this->b,p1);
HXDLIN( 472)					 ::haxe::io::Bytes _this1 = this->bytes;
HXDLIN( 472)					int pos = (p1 + 4);
HXDLIN( 472)					bool _hx_tmp1;
HXDLIN( 472)					if ((pos >= 0)) {
HXLINE( 472)						_hx_tmp1 = ((pos + 4) > _this1->length);
            					}
            					else {
HXLINE( 472)						_hx_tmp1 = true;
            					}
HXDLIN( 472)					if (_hx_tmp1) {
HXLINE( 472)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 472)					Float y =  ::__hxcpp_memory_get_float(_this1->b,pos);
HXDLIN( 472)					v->x = x;
HXDLIN( 472)					v->y = y;
HXDLIN( 472)					v->z = ( (Float)(0) );
HXDLIN( 472)					v->w = ( (Float)(0) );
            				}
HXLINE( 473)				return v;
            			}
            			break;
            			default:{
HXLINE( 478)				{
HXLINE( 478)					int c = this->getPixel(x,y);
HXDLIN( 478)					v->x = (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN( 478)					v->y = (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN( 478)					v->z = (( (Float)((c & 255)) ) / ( (Float)(255) ));
HXDLIN( 478)					v->w = (( (Float)(::hx::UShr(c,24)) ) / ( (Float)(255) ));
            				}
HXLINE( 479)				return v;
            			}
            		}
HXLINE( 467)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Pixels_obj,getPixelF,return )

void Pixels_obj::setPixelF(int x,int y, ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_483_setPixelF)
HXLINE( 484)		int this1 = this->flags;
HXDLIN( 484)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::ReadOnly_dyn()))) != 0)) {
HXLINE( 484)			this->copyInner();
            		}
HXLINE( 485)		int p;
HXDLIN( 485)		int this2 = this->flags;
HXDLIN( 485)		if (((this2 & (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn()))) != 0)) {
HXLINE( 485)			p = ((this->height - 1) - y);
            		}
            		else {
HXLINE( 485)			p = y;
            		}
HXDLIN( 485)		int p1 = (((x + (p * this->width)) * this->bytesPerPixel) + this->offset);
HXLINE( 486)		switch((int)(this->innerFormat->_hx_getIndex())){
            			case (int)4: {
HXLINE( 490)				this->bytes->setFloat(p1,v->x);
HXLINE( 491)				this->bytes->setFloat((p1 + 4),v->y);
HXLINE( 492)				this->bytes->setFloat((p1 + 8),v->z);
HXLINE( 493)				this->bytes->setFloat((p1 + 12),v->w);
            			}
            			break;
            			case (int)7: {
HXLINE( 488)				this->bytes->setFloat(p1,v->x);
            			}
            			break;
            			default:{
HXLINE( 495)				Float f = v->w;
HXDLIN( 495)				Float min = ((Float)0.);
HXDLIN( 495)				Float max = ((Float)1.);
HXDLIN( 495)				Float _hx_tmp;
HXDLIN( 495)				if ((f < min)) {
HXLINE( 495)					_hx_tmp = min;
            				}
            				else {
HXLINE( 495)					if ((f > max)) {
HXLINE( 495)						_hx_tmp = max;
            					}
            					else {
HXLINE( 495)						_hx_tmp = f;
            					}
            				}
HXDLIN( 495)				int _hx_tmp1 = (::Std_obj::_hx_int(((_hx_tmp * ( (Float)(255) )) + ((Float)0.499))) << 24);
HXDLIN( 495)				Float f1 = v->x;
HXDLIN( 495)				Float min1 = ((Float)0.);
HXDLIN( 495)				Float max1 = ((Float)1.);
HXDLIN( 495)				Float _hx_tmp2;
HXDLIN( 495)				if ((f1 < min1)) {
HXLINE( 495)					_hx_tmp2 = min1;
            				}
            				else {
HXLINE( 495)					if ((f1 > max1)) {
HXLINE( 495)						_hx_tmp2 = max1;
            					}
            					else {
HXLINE( 495)						_hx_tmp2 = f1;
            					}
            				}
HXDLIN( 495)				int _hx_tmp3 = (_hx_tmp1 | (::Std_obj::_hx_int(((_hx_tmp2 * ( (Float)(255) )) + ((Float)0.499))) << 16));
HXDLIN( 495)				Float f2 = v->y;
HXDLIN( 495)				Float min2 = ((Float)0.);
HXDLIN( 495)				Float max2 = ((Float)1.);
HXDLIN( 495)				Float _hx_tmp4;
HXDLIN( 495)				if ((f2 < min2)) {
HXLINE( 495)					_hx_tmp4 = min2;
            				}
            				else {
HXLINE( 495)					if ((f2 > max2)) {
HXLINE( 495)						_hx_tmp4 = max2;
            					}
            					else {
HXLINE( 495)						_hx_tmp4 = f2;
            					}
            				}
HXDLIN( 495)				int _hx_tmp5 = (_hx_tmp3 | (::Std_obj::_hx_int(((_hx_tmp4 * ( (Float)(255) )) + ((Float)0.499))) << 8));
HXDLIN( 495)				Float f3 = v->z;
HXDLIN( 495)				Float min3 = ((Float)0.);
HXDLIN( 495)				Float max3 = ((Float)1.);
HXDLIN( 495)				Float _hx_tmp6;
HXDLIN( 495)				if ((f3 < min3)) {
HXLINE( 495)					_hx_tmp6 = min3;
            				}
            				else {
HXLINE( 495)					if ((f3 > max3)) {
HXLINE( 495)						_hx_tmp6 = max3;
            					}
            					else {
HXLINE( 495)						_hx_tmp6 = f3;
            					}
            				}
HXDLIN( 495)				this->setPixel(x,y,(_hx_tmp5 | ::Std_obj::_hx_int(((_hx_tmp6 * ( (Float)(255) )) + ((Float)0.499)))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Pixels_obj,setPixelF,(void))

void Pixels_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_500_dispose)
HXDLIN( 500)		this->bytes = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pixels_obj,dispose,(void))

::String Pixels_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_504_toString)
HXDLIN( 504)		::String _hx_tmp = ((((HX_("Pixels(",3b,80,58,55) + this->width) + HX_("x",78,00,00,00)) + this->height) + HX_(" ",20,00,00,00));
HXDLIN( 504)		return ((_hx_tmp + ::Std_obj::string(this->innerFormat)) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pixels_obj,toString,return )

 ::haxe::io::Bytes Pixels_obj::toPNG( ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_507_toPNG)
HXLINE( 508)		 ::haxe::ds::List png;
HXLINE( 509)		this->setFlip(false);
HXLINE( 510)		if ((this->innerFormat->_hx_getIndex() == 0)) {
HXLINE( 512)			png = ::format::png::Tools_obj::build32ARGB(this->width,this->height,this->bytes,level);
            		}
            		else {
HXLINE( 514)			this->convert(::hxd::PixelFormat_obj::BGRA_dyn());
HXLINE( 515)			png = ::format::png::Tools_obj::build32BGRA(this->width,this->height,this->bytes,level);
            		}
HXLINE( 517)		 ::haxe::io::BytesOutput o =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE( 518)		 ::format::png::Writer_obj::__alloc( HX_CTX ,o)->write(png);
HXLINE( 519)		return o->getBytes();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pixels_obj,toPNG,return )

 ::hxd::Pixels Pixels_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_522_clone)
HXLINE( 523)		 ::hxd::Pixels p =  ::hxd::Pixels_obj::__alloc( HX_CTX ,this->width,this->height,null(),this->innerFormat,null());
HXLINE( 524)		p->flags = this->flags;
HXLINE( 525)		 ::hxd::Pixels p1 = p;
HXDLIN( 525)		int p2 = p1->flags;
HXDLIN( 525)		p1->flags = (p2 & (-1 - (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::ReadOnly_dyn()))));
HXLINE( 526)		if (::hx::IsNotNull( this->bytes )) {
HXLINE( 527)			p->bytes = ::haxe::io::Bytes_obj::alloc(this->dataSize);
HXLINE( 528)			p->bytes->blit(0,this->bytes,this->offset,this->dataSize);
            		}
HXLINE( 530)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pixels_obj,clone,return )

int Pixels_obj::switchEndian(int v){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_117_switchEndian)
HXDLIN( 117)		return (((::hx::UShr(v,24) | ((v >> 8) & 65280)) | ((v << 8) & 16711680)) | (v << 24));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pixels_obj,switchEndian,return )

int Pixels_obj::switchBR(int v){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_121_switchBR)
HXDLIN( 121)		return (((v & -16711936) | ((v << 16) & 16711680)) | ((v >> 16) & 255));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pixels_obj,switchBR,return )

int Pixels_obj::calcDataSize(int width,int height, ::hxd::PixelFormat format){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_534_calcDataSize)
HXDLIN( 534)		if ((format->_hx_getIndex() == 21)) {
HXLINE( 535)			int _g = format->_hx_getInt(0);
HXLINE( 536)			return ((((height + 3) >> 2) << 2) * ::hxd::Pixels_obj::calcStride(width,format));
            		}
            		else {
HXLINE( 538)			return (height * ::hxd::Pixels_obj::calcStride(width,format));
            		}
HXLINE( 534)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Pixels_obj,calcDataSize,return )

int Pixels_obj::calcStride(int width, ::hxd::PixelFormat format){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_543_calcStride)
HXDLIN( 543)		int _hx_tmp;
HXDLIN( 543)		switch((int)(format->_hx_getIndex())){
            			case (int)3: case (int)20: {
HXDLIN( 543)				_hx_tmp = 8;
            			}
            			break;
            			case (int)4: {
HXDLIN( 543)				_hx_tmp = 16;
            			}
            			break;
            			case (int)5: {
HXDLIN( 543)				_hx_tmp = 1;
            			}
            			break;
            			case (int)7: {
HXDLIN( 543)				_hx_tmp = 4;
            			}
            			break;
            			case (int)8: {
HXDLIN( 543)				_hx_tmp = 2;
            			}
            			break;
            			case (int)9: {
HXDLIN( 543)				_hx_tmp = 4;
            			}
            			break;
            			case (int)10: {
HXDLIN( 543)				_hx_tmp = 8;
            			}
            			break;
            			case (int)11: {
HXDLIN( 543)				_hx_tmp = 3;
            			}
            			break;
            			case (int)12: case (int)19: {
HXDLIN( 543)				_hx_tmp = 6;
            			}
            			break;
            			case (int)13: {
HXDLIN( 543)				_hx_tmp = 12;
            			}
            			break;
            			case (int)0: case (int)1: case (int)2: case (int)14: case (int)15: {
HXDLIN( 543)				_hx_tmp = 4;
            			}
            			break;
            			case (int)16: {
HXDLIN( 543)				_hx_tmp = 4;
            			}
            			break;
            			case (int)17: {
HXDLIN( 543)				_hx_tmp = 4;
            			}
            			break;
            			case (int)6: case (int)18: {
HXDLIN( 543)				_hx_tmp = 2;
            			}
            			break;
            			case (int)21: {
HXLINE( 558)				int n = format->_hx_getInt(0);
HXLINE( 559)				int blocks = ((width + 3) >> 2);
HXLINE( 560)				bool _hx_tmp;
HXDLIN( 560)				if ((n != 1)) {
HXLINE( 560)					_hx_tmp = (n == 4);
            				}
            				else {
HXLINE( 560)					_hx_tmp = true;
            				}
HXDLIN( 560)				if (_hx_tmp) {
HXLINE( 561)					return (blocks << 1);
            				}
HXLINE( 562)				return (blocks << 2);
            			}
            			break;
            		}
HXLINE( 543)		return (width * _hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Pixels_obj,calcStride,return )

bool Pixels_obj::isFloatFormat( ::hxd::PixelFormat format){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_567_isFloatFormat)
HXDLIN( 567)		switch((int)(format->_hx_getIndex())){
            			case (int)3: case (int)6: case (int)9: case (int)12: {
HXLINE( 568)				return true;
            			}
            			break;
            			case (int)4: case (int)7: case (int)10: case (int)13: {
HXLINE( 569)				return true;
            			}
            			break;
            			case (int)21: {
HXLINE( 570)				if ((format->_hx_getInt(0) == 6)) {
HXLINE( 570)					return true;
            				}
            				else {
HXLINE( 571)					return false;
            				}
            			}
            			break;
            			default:{
HXLINE( 571)				return false;
            			}
            		}
HXLINE( 567)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pixels_obj,isFloatFormat,return )

int Pixels_obj::getChannelOffset( ::hxd::PixelFormat format,int channel){
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_580_getChannelOffset)
HXDLIN( 580)		switch((int)(format->_hx_getIndex())){
            			case (int)0: {
HXLINE( 590)				return ::Array_obj< int >::fromData( _hx_array_data_91383927_55,4)->__get(channel);
            			}
            			break;
            			case (int)1: {
HXLINE( 592)				return ::Array_obj< int >::fromData( _hx_array_data_91383927_56,4)->__get(channel);
            			}
            			break;
            			case (int)3: case (int)20: {
HXLINE( 596)				return (channel * 2);
            			}
            			break;
            			case (int)4: {
HXLINE( 598)				return (channel * 4);
            			}
            			break;
            			case (int)5: case (int)6: case (int)7: case (int)18: {
HXLINE( 582)				if ((channel == 0)) {
HXLINE( 582)					return 0;
            				}
            				else {
HXLINE( 582)					return -1;
            				}
            			}
            			break;
            			case (int)8: case (int)9: case (int)10: {
HXLINE( 584)				int p = ::hxd::Pixels_obj::calcStride(1,format);
HXLINE( 585)				return ::Array_obj< int >::__new(4)->init(0,0)->init(1,p)->init(2,-1)->init(3,-1)->__get(channel);
            			}
            			break;
            			case (int)11: case (int)12: case (int)13: case (int)19: {
HXLINE( 587)				int p = ::hxd::Pixels_obj::calcStride(1,format);
HXLINE( 588)				return ::Array_obj< int >::__new(4)->init(0,0)->init(1,p)->init(2,(p << 1))->init(3,-1)->__get(channel);
            			}
            			break;
            			case (int)2: case (int)14: case (int)15: {
HXLINE( 594)				return channel;
            			}
            			break;
            			case (int)16: case (int)17: {
HXLINE( 600)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Bit packed format",2c,40,5f,b1)));
            			}
            			break;
            			case (int)21: {
HXLINE( 601)				int _g = format->_hx_getInt(0);
HXLINE( 602)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not supported",c1,20,c8,45)));
            			}
            			break;
            		}
HXLINE( 580)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Pixels_obj,getChannelOffset,return )

 ::hxd::Pixels Pixels_obj::alloc(int width,int height, ::hxd::PixelFormat format){
            	HX_GC_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_607_alloc)
HXDLIN( 607)		return  ::hxd::Pixels_obj::__alloc( HX_CTX ,width,height,::haxe::io::Bytes_obj::alloc(::hxd::Pixels_obj::calcDataSize(width,height,format)),format,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Pixels_obj,alloc,return )

 ::haxe::io::Bytes Pixels_obj::toDDS(::Array< ::Dynamic> pixels,::hx::Null< bool >  __o_isCubeMap){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run(::Array< ::Dynamic> a1,::Array< ::Dynamic> a2){
            			HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_637_toDDS)
HXLINE( 637)			return ((a2->__get(0).StaticCast<  ::hxd::Pixels >()->width * a2->__get(0).StaticCast<  ::hxd::Pixels >()->height) - (a1->__get(0).StaticCast<  ::hxd::Pixels >()->width * a1->__get(0).StaticCast<  ::hxd::Pixels >()->height));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		bool isCubeMap = __o_isCubeMap.Default(false);
            	HX_STACKFRAME(&_hx_pos_7f5532e55fe3b60b_616_toDDS)
HXLINE( 617)		if ((pixels->length == 0)) {
HXLINE( 618)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Must contain at least one image",e0,c7,76,af)));
            		}
HXLINE( 619)		 ::hxd::Pixels ref = pixels->__get(0).StaticCast<  ::hxd::Pixels >();
HXLINE( 620)		 ::hxd::PixelFormat fmt = ref->innerFormat;
HXLINE( 621)		::Array< ::Dynamic> levels = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 622)		int outSize = 0;
HXLINE( 623)		{
HXLINE( 623)			int _g = 0;
HXDLIN( 623)			while((_g < pixels->length)){
HXLINE( 623)				 ::hxd::Pixels p = pixels->__get(_g).StaticCast<  ::hxd::Pixels >();
HXDLIN( 623)				_g = (_g + 1);
HXLINE( 624)				if (::hx::IsPointerNotEq( p->innerFormat,fmt )) {
HXLINE( 624)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("All images must be of the same pixel format",02,69,80,d8)));
            				}
HXLINE( 625)				outSize = (outSize + p->dataSize);
HXLINE( 626)				bool found = false;
HXLINE( 627)				{
HXLINE( 627)					int _g1 = 0;
HXDLIN( 627)					while((_g1 < levels->length)){
HXLINE( 627)						::Array< ::Dynamic> sz = levels->__get(_g1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 627)						_g1 = (_g1 + 1);
HXLINE( 628)						bool _hx_tmp;
HXDLIN( 628)						if ((sz->__get(0).StaticCast<  ::hxd::Pixels >()->width == p->width)) {
HXLINE( 628)							_hx_tmp = (sz->__get(0).StaticCast<  ::hxd::Pixels >()->height == p->height);
            						}
            						else {
HXLINE( 628)							_hx_tmp = false;
            						}
HXDLIN( 628)						if (_hx_tmp) {
HXLINE( 629)							sz->push(p);
HXLINE( 630)							found = true;
HXLINE( 631)							goto _hx_goto_59;
            						}
            					}
            					_hx_goto_59:;
            				}
HXLINE( 634)				if (!(found)) {
HXLINE( 635)					levels->push(::Array_obj< ::Dynamic>::__new(1)->init(0,p));
            				}
            			}
            		}
HXLINE( 637)		levels->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 638)		int layerCount = levels->__get(0).StaticCast< ::Array< ::Dynamic> >()->length;
HXLINE( 639)		int width = levels->__get(0).StaticCast< ::Array< ::Dynamic> >()->__get(0).StaticCast<  ::hxd::Pixels >()->width;
HXLINE( 640)		int height = levels->__get(0).StaticCast< ::Array< ::Dynamic> >()->__get(0).StaticCast<  ::hxd::Pixels >()->height;
HXLINE( 641)		{
HXLINE( 641)			int _g1 = 1;
HXDLIN( 641)			int _g2 = levels->length;
HXDLIN( 641)			while((_g1 < _g2)){
HXLINE( 641)				_g1 = (_g1 + 1);
HXDLIN( 641)				int i = (_g1 - 1);
HXLINE( 642)				::Array< ::Dynamic> level = levels->__get(i).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 643)				if ((level->length != layerCount)) {
HXLINE( 643)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((((HX_("Invalid number of mipmaps at level ",d9,e7,f6,6a) + i) + HX_(": ",a6,32,00,00)) + level->length) + HX_(" should be ",b0,2e,91,d5)) + layerCount)));
            				}
HXLINE( 644)				int w = (width >> i);
HXDLIN( 644)				if ((w == 0)) {
HXLINE( 644)					w = 1;
            				}
HXLINE( 645)				int h = (height >> i);
HXDLIN( 645)				if ((h == 0)) {
HXLINE( 645)					h = 1;
            				}
HXLINE( 646)				int lw = level->__get(0).StaticCast<  ::hxd::Pixels >()->width;
HXLINE( 647)				int lh = level->__get(0).StaticCast<  ::hxd::Pixels >()->height;
HXLINE( 648)				bool _hx_tmp;
HXDLIN( 648)				if ((lw == w)) {
HXLINE( 648)					_hx_tmp = (lh != h);
            				}
            				else {
HXLINE( 648)					_hx_tmp = true;
            				}
HXDLIN( 648)				if (_hx_tmp) {
HXLINE( 648)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((((((((HX_("Invalid mip level size ",ce,fc,1c,32) + i) + HX_(": ",a6,32,00,00)) + lw) + HX_("x",78,00,00,00)) + lh) + HX_(" should be ",b0,2e,91,d5)) + w) + HX_("x",78,00,00,00)) + h)));
            				}
            			}
            		}
HXLINE( 651)		outSize = (outSize + 128);
HXLINE( 652)		 ::haxe::io::Bytes ddsOut = ::haxe::io::Bytes_obj::alloc(outSize);
HXLINE( 653)		int outPos = 0;
HXLINE( 655)		{
HXLINE( 655)			{
HXLINE( 655)				ddsOut->b[outPos] = ( (unsigned char)(68) );
HXDLIN( 655)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(68) );
HXDLIN( 655)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(83) );
HXDLIN( 655)				ddsOut->b[(outPos + 3)] = ( (unsigned char)(32) );
            			}
HXDLIN( 655)			outPos = (outPos + 4);
            		}
HXLINE( 656)		{
HXLINE( 656)			{
HXLINE( 656)				ddsOut->b[outPos] = ( (unsigned char)(124) );
HXDLIN( 656)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 656)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 656)				ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            			}
HXDLIN( 656)			outPos = (outPos + 4);
            		}
HXLINE( 657)		{
HXLINE( 657)			{
HXLINE( 657)				ddsOut->b[outPos] = ( (unsigned char)(15) );
HXDLIN( 657)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(16) );
HXDLIN( 657)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(2) );
HXDLIN( 657)				ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            			}
HXDLIN( 657)			outPos = (outPos + 4);
            		}
HXLINE( 658)		{
HXLINE( 658)			{
HXLINE( 658)				ddsOut->b[outPos] = ( (unsigned char)((width & 255)) );
HXDLIN( 658)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(((width >> 8) & 255)) );
HXDLIN( 658)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(((width >> 16) & 255)) );
HXDLIN( 658)				ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(width,24) & 255)) );
            			}
HXDLIN( 658)			outPos = (outPos + 4);
            		}
HXLINE( 659)		{
HXLINE( 659)			{
HXLINE( 659)				ddsOut->b[outPos] = ( (unsigned char)((height & 255)) );
HXDLIN( 659)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(((height >> 8) & 255)) );
HXDLIN( 659)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(((height >> 16) & 255)) );
HXDLIN( 659)				ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(height,24) & 255)) );
            			}
HXDLIN( 659)			outPos = (outPos + 4);
            		}
HXLINE( 660)		{
HXLINE( 660)			int v = ref->stride;
HXDLIN( 660)			{
HXLINE( 660)				ddsOut->b[outPos] = ( (unsigned char)((v & 255)) );
HXDLIN( 660)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 660)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 660)				ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            			}
HXDLIN( 660)			outPos = (outPos + 4);
            		}
HXLINE( 661)		{
HXLINE( 661)			{
HXLINE( 661)				ddsOut->b[outPos] = ( (unsigned char)(1) );
HXDLIN( 661)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 661)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 661)				ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            			}
HXDLIN( 661)			outPos = (outPos + 4);
            		}
HXLINE( 662)		{
HXLINE( 662)			int v1 = levels->length;
HXDLIN( 662)			{
HXLINE( 662)				ddsOut->b[outPos] = ( (unsigned char)((v1 & 255)) );
HXDLIN( 662)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(((v1 >> 8) & 255)) );
HXDLIN( 662)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(((v1 >> 16) & 255)) );
HXDLIN( 662)				ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(v1,24) & 255)) );
            			}
HXDLIN( 662)			outPos = (outPos + 4);
            		}
HXLINE( 663)		{
HXLINE( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
HXDLIN( 663)			{
HXLINE( 663)				{
HXLINE( 663)					ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 663)					ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            				}
HXDLIN( 663)				outPos = (outPos + 4);
            			}
            		}
HXLINE( 665)		{
HXLINE( 665)			{
HXLINE( 665)				ddsOut->b[outPos] = ( (unsigned char)(32) );
HXDLIN( 665)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 665)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 665)				ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            			}
HXDLIN( 665)			outPos = (outPos + 4);
            		}
HXLINE( 667)		switch((int)(fmt->_hx_getIndex())){
            			case (int)0: case (int)1: case (int)2: {
HXLINE( 669)				{
HXLINE( 669)					{
HXLINE( 669)						ddsOut->b[outPos] = ( (unsigned char)(65) );
HXDLIN( 669)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 669)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 669)						ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            					}
HXDLIN( 669)					outPos = (outPos + 4);
            				}
HXLINE( 670)				{
HXLINE( 670)					{
HXLINE( 670)						ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 670)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 670)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 670)						ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            					}
HXDLIN( 670)					outPos = (outPos + 4);
            				}
HXLINE( 671)				{
HXLINE( 671)					{
HXLINE( 671)						ddsOut->b[outPos] = ( (unsigned char)(32) );
HXDLIN( 671)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 671)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 671)						ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            					}
HXDLIN( 671)					outPos = (outPos + 4);
            				}
HXLINE( 676)				{
HXLINE( 676)					int byte = ::hxd::Pixels_obj::getChannelOffset(fmt,0);
HXDLIN( 676)					{
HXLINE( 676)						int v = (255 << (byte * 8));
HXDLIN( 676)						{
HXLINE( 676)							ddsOut->b[outPos] = ( (unsigned char)((v & 255)) );
HXDLIN( 676)							ddsOut->b[(outPos + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 676)							ddsOut->b[(outPos + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 676)							ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            						}
HXDLIN( 676)						outPos = (outPos + 4);
            					}
            				}
HXLINE( 677)				{
HXLINE( 677)					int byte1 = ::hxd::Pixels_obj::getChannelOffset(fmt,1);
HXDLIN( 677)					{
HXLINE( 677)						int v1 = (255 << (byte1 * 8));
HXDLIN( 677)						{
HXLINE( 677)							ddsOut->b[outPos] = ( (unsigned char)((v1 & 255)) );
HXDLIN( 677)							ddsOut->b[(outPos + 1)] = ( (unsigned char)(((v1 >> 8) & 255)) );
HXDLIN( 677)							ddsOut->b[(outPos + 2)] = ( (unsigned char)(((v1 >> 16) & 255)) );
HXDLIN( 677)							ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(v1,24) & 255)) );
            						}
HXDLIN( 677)						outPos = (outPos + 4);
            					}
            				}
HXLINE( 678)				{
HXLINE( 678)					int byte2 = ::hxd::Pixels_obj::getChannelOffset(fmt,2);
HXDLIN( 678)					{
HXLINE( 678)						int v2 = (255 << (byte2 * 8));
HXDLIN( 678)						{
HXLINE( 678)							ddsOut->b[outPos] = ( (unsigned char)((v2 & 255)) );
HXDLIN( 678)							ddsOut->b[(outPos + 1)] = ( (unsigned char)(((v2 >> 8) & 255)) );
HXDLIN( 678)							ddsOut->b[(outPos + 2)] = ( (unsigned char)(((v2 >> 16) & 255)) );
HXDLIN( 678)							ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(v2,24) & 255)) );
            						}
HXDLIN( 678)						outPos = (outPos + 4);
            					}
            				}
HXLINE( 679)				{
HXLINE( 679)					int byte3 = ::hxd::Pixels_obj::getChannelOffset(fmt,3);
HXDLIN( 679)					{
HXLINE( 679)						int v3 = (255 << (byte3 * 8));
HXDLIN( 679)						{
HXLINE( 679)							ddsOut->b[outPos] = ( (unsigned char)((v3 & 255)) );
HXDLIN( 679)							ddsOut->b[(outPos + 1)] = ( (unsigned char)(((v3 >> 8) & 255)) );
HXDLIN( 679)							ddsOut->b[(outPos + 2)] = ( (unsigned char)(((v3 >> 16) & 255)) );
HXDLIN( 679)							ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(v3,24) & 255)) );
            						}
HXDLIN( 679)						outPos = (outPos + 4);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 681)				bool alpha = (::hxd::Pixels_obj::getChannelOffset(fmt,3) >= 0);
HXLINE( 682)				{
HXLINE( 682)					{
HXLINE( 682)						ddsOut->b[outPos] = ( (unsigned char)(4) );
HXDLIN( 682)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 682)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 682)						ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            					}
HXDLIN( 682)					outPos = (outPos + 4);
            				}
HXLINE( 683)				{
HXLINE( 683)					int v;
HXDLIN( 683)					switch((int)(fmt->_hx_getIndex())){
            						case (int)3: {
HXLINE( 683)							v = 113;
            						}
            						break;
            						case (int)4: {
HXLINE( 683)							v = 116;
            						}
            						break;
            						case (int)6: {
HXLINE( 683)							v = 111;
            						}
            						break;
            						case (int)7: {
HXLINE( 683)							v = 114;
            						}
            						break;
            						case (int)9: {
HXLINE( 683)							v = 112;
            						}
            						break;
            						case (int)10: {
HXLINE( 683)							v = 115;
            						}
            						break;
            						default:{
HXLINE( 690)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported format ",7e,06,66,fe) + ::Std_obj::string(fmt))));
            						}
            					}
HXLINE( 683)					{
HXLINE( 683)						ddsOut->b[outPos] = ( (unsigned char)((v & 255)) );
HXDLIN( 683)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 683)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 683)						ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            					}
HXDLIN( 683)					outPos = (outPos + 4);
            				}
HXLINE( 692)				{
HXLINE( 692)					{
HXLINE( 692)						ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 692)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 692)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 692)						ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            					}
HXDLIN( 692)					outPos = (outPos + 4);
            				}
HXLINE( 693)				{
HXLINE( 693)					{
HXLINE( 693)						ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 693)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 693)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 693)						ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            					}
HXDLIN( 693)					outPos = (outPos + 4);
            				}
HXLINE( 694)				{
HXLINE( 694)					{
HXLINE( 694)						ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 694)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 694)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 694)						ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            					}
HXDLIN( 694)					outPos = (outPos + 4);
            				}
HXLINE( 695)				{
HXLINE( 695)					{
HXLINE( 695)						ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 695)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 695)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 695)						ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            					}
HXDLIN( 695)					outPos = (outPos + 4);
            				}
HXLINE( 696)				{
HXLINE( 696)					{
HXLINE( 696)						ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 696)						ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 696)						ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 696)						ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            					}
HXDLIN( 696)					outPos = (outPos + 4);
            				}
            			}
            		}
HXLINE( 700)		{
HXLINE( 700)			int v2;
HXDLIN( 700)			if ((pixels->length == 1)) {
HXLINE( 700)				v2 = 0;
            			}
            			else {
HXLINE( 700)				v2 = 8;
            			}
HXDLIN( 700)			int v3;
HXDLIN( 700)			if ((levels->length == 1)) {
HXLINE( 700)				v3 = 0;
            			}
            			else {
HXLINE( 700)				v3 = 4194304;
            			}
HXDLIN( 700)			int v4 = ((v2 | 4096) | v3);
HXDLIN( 700)			{
HXLINE( 700)				ddsOut->b[outPos] = ( (unsigned char)((v4 & 255)) );
HXDLIN( 700)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(((v4 >> 8) & 255)) );
HXDLIN( 700)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(((v4 >> 16) & 255)) );
HXDLIN( 700)				ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(v4,24) & 255)) );
            			}
HXDLIN( 700)			outPos = (outPos + 4);
            		}
HXLINE( 701)		int cubebits;
HXDLIN( 701)		if ((layerCount > 1)) {
HXLINE( 701)			cubebits = 2048;
            		}
            		else {
HXLINE( 701)			cubebits = 0;
            		}
HXDLIN( 701)		int cubebits1;
HXDLIN( 701)		if ((layerCount > 2)) {
HXLINE( 701)			cubebits1 = 4096;
            		}
            		else {
HXLINE( 701)			cubebits1 = 0;
            		}
HXDLIN( 701)		int cubebits2;
HXDLIN( 701)		if ((layerCount > 3)) {
HXLINE( 701)			cubebits2 = 8192;
            		}
            		else {
HXLINE( 701)			cubebits2 = 0;
            		}
HXDLIN( 701)		int cubebits3;
HXDLIN( 701)		if ((layerCount > 4)) {
HXLINE( 701)			cubebits3 = 16384;
            		}
            		else {
HXLINE( 701)			cubebits3 = 0;
            		}
HXDLIN( 701)		int cubebits4;
HXDLIN( 701)		if ((layerCount > 5)) {
HXLINE( 701)			cubebits4 = 32768;
            		}
            		else {
HXLINE( 701)			cubebits4 = 0;
            		}
HXDLIN( 701)		int cubebits5 = (((((1536 | cubebits) | cubebits1) | cubebits2) | cubebits3) | cubebits4);
HXLINE( 702)		{
HXLINE( 702)			int v5;
HXDLIN( 702)			if (isCubeMap) {
HXLINE( 702)				v5 = cubebits5;
            			}
            			else {
HXLINE( 702)				v5 = 0;
            			}
HXDLIN( 702)			{
HXLINE( 702)				ddsOut->b[outPos] = ( (unsigned char)((v5 & 255)) );
HXDLIN( 702)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(((v5 >> 8) & 255)) );
HXDLIN( 702)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(((v5 >> 16) & 255)) );
HXDLIN( 702)				ddsOut->b[(outPos + 3)] = ( (unsigned char)((::hx::UShr(v5,24) & 255)) );
            			}
HXDLIN( 702)			outPos = (outPos + 4);
            		}
HXLINE( 703)		{
HXLINE( 703)			{
HXLINE( 703)				ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 703)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 703)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 703)				ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            			}
HXDLIN( 703)			outPos = (outPos + 4);
            		}
HXLINE( 704)		{
HXLINE( 704)			{
HXLINE( 704)				ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 704)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 704)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 704)				ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            			}
HXDLIN( 704)			outPos = (outPos + 4);
            		}
HXLINE( 705)		{
HXLINE( 705)			{
HXLINE( 705)				ddsOut->b[outPos] = ( (unsigned char)(0) );
HXDLIN( 705)				ddsOut->b[(outPos + 1)] = ( (unsigned char)(0) );
HXDLIN( 705)				ddsOut->b[(outPos + 2)] = ( (unsigned char)(0) );
HXDLIN( 705)				ddsOut->b[(outPos + 3)] = ( (unsigned char)(0) );
            			}
HXDLIN( 705)			outPos = (outPos + 4);
            		}
HXLINE( 707)		{
HXLINE( 707)			int _g3 = 0;
HXDLIN( 707)			int _g4 = layerCount;
HXDLIN( 707)			while((_g3 < _g4)){
HXLINE( 707)				_g3 = (_g3 + 1);
HXDLIN( 707)				int i = (_g3 - 1);
HXLINE( 708)				{
HXLINE( 708)					int _g = 0;
HXDLIN( 708)					int _g1 = levels->length;
HXDLIN( 708)					while((_g < _g1)){
HXLINE( 708)						_g = (_g + 1);
HXDLIN( 708)						int l = (_g - 1);
HXLINE( 709)						 ::hxd::Pixels p = levels->__get(l).StaticCast< ::Array< ::Dynamic> >()->__get(i).StaticCast<  ::hxd::Pixels >();
HXLINE( 710)						ddsOut->blit(outPos,p->bytes,p->offset,p->dataSize);
HXLINE( 711)						outPos = (outPos + p->dataSize);
            					}
            				}
            			}
            		}
HXLINE( 713)		return ddsOut;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Pixels_obj,toDDS,return )


::hx::ObjectPtr< Pixels_obj > Pixels_obj::__new(int width,int height, ::haxe::io::Bytes bytes, ::hxd::PixelFormat format,::hx::Null< int >  __o_offset) {
	::hx::ObjectPtr< Pixels_obj > __this = new Pixels_obj();
	__this->__construct(width,height,bytes,format,__o_offset);
	return __this;
}

::hx::ObjectPtr< Pixels_obj > Pixels_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::haxe::io::Bytes bytes, ::hxd::PixelFormat format,::hx::Null< int >  __o_offset) {
	Pixels_obj *__this = (Pixels_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pixels_obj), true, "hxd.Pixels"));
	*(void **)__this = Pixels_obj::_hx_vtable;
	__this->__construct(width,height,bytes,format,__o_offset);
	return __this;
}

Pixels_obj::Pixels_obj()
{
}

void Pixels_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pixels);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(dataSize,"dataSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(bytesPerPixel,"bytesPerPixel");
	HX_MARK_MEMBER_NAME(innerFormat,"innerFormat");
	HX_MARK_END_CLASS();
}

void Pixels_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(dataSize,"dataSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(bytesPerPixel,"bytesPerPixel");
	HX_VISIT_MEMBER_NAME(innerFormat,"innerFormat");
}

::hx::Val Pixels_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return ::hx::Val( blit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return ::hx::Val( bytes ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		if (HX_FIELD_EQ(inName,"yflip") ) { return ::hx::Val( yflip_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"toPNG") ) { return ::hx::Val( toPNG_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_format() ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"stride") ) { return ::hx::Val( stride ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setFlip") ) { return ::hx::Val( setFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dataSize") ) { return ::hx::Val( dataSize ); }
		if (HX_FIELD_EQ(inName,"toVector") ) { return ::hx::Val( toVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return ::hx::Val( getPixel_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return ::hx::Val( setPixel_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyInner") ) { return ::hx::Val( copyInner_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixelF") ) { return ::hx::Val( getPixelF_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPixelF") ) { return ::hx::Val( setPixelF_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_format") ) { return ::hx::Val( get_format_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeSquare") ) { return ::hx::Val( makeSquare_dyn() ); }
		if (HX_FIELD_EQ(inName,"willChange") ) { return ::hx::Val( willChange_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"innerFormat") ) { return ::hx::Val( innerFormat ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bytesPerPixel") ) { return ::hx::Val( bytesPerPixel ); }
		if (HX_FIELD_EQ(inName,"invalidFormat") ) { return ::hx::Val( invalidFormat_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_innerFormat") ) { return ::hx::Val( set_innerFormat_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Pixels_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toDDS") ) { outValue = toDDS_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"switchBR") ) { outValue = switchBR_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"calcStride") ) { outValue = calcStride_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"switchEndian") ) { outValue = switchEndian_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"calcDataSize") ) { outValue = calcDataSize_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isFloatFormat") ) { outValue = isFloatFormat_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getChannelOffset") ) { outValue = getChannelOffset_dyn(); return true; }
	}
	return false;
}

::hx::Val Pixels_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dataSize") ) { dataSize=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"innerFormat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_innerFormat(inValue.Cast<  ::hxd::PixelFormat >()) );innerFormat=inValue.Cast<  ::hxd::PixelFormat >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bytesPerPixel") ) { bytesPerPixel=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pixels_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytes",6b,08,98,bd));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("dataSize",0b,80,c7,8b));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("stride",19,20,30,11));
	outFields->push(HX_("bytesPerPixel",f4,c7,02,fe));
	outFields->push(HX_("innerFormat",6d,89,8d,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Pixels_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Pixels_obj,bytes),HX_("bytes",6b,08,98,bd)},
	{::hx::fsInt,(int)offsetof(Pixels_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(Pixels_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(Pixels_obj,dataSize),HX_("dataSize",0b,80,c7,8b)},
	{::hx::fsInt,(int)offsetof(Pixels_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsInt,(int)offsetof(Pixels_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsInt,(int)offsetof(Pixels_obj,stride),HX_("stride",19,20,30,11)},
	{::hx::fsInt,(int)offsetof(Pixels_obj,bytesPerPixel),HX_("bytesPerPixel",f4,c7,02,fe)},
	{::hx::fsObject /*  ::hxd::PixelFormat */ ,(int)offsetof(Pixels_obj,innerFormat),HX_("innerFormat",6d,89,8d,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Pixels_obj_sStaticStorageInfo = 0;
#endif

static ::String Pixels_obj_sMemberFields[] = {
	HX_("bytes",6b,08,98,bd),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("dataSize",0b,80,c7,8b),
	HX_("offset",93,97,3f,60),
	HX_("flags",47,2b,8c,02),
	HX_("stride",19,20,30,11),
	HX_("bytesPerPixel",f4,c7,02,fe),
	HX_("innerFormat",6d,89,8d,66),
	HX_("get_format",00,ff,15,ee),
	HX_("set_innerFormat",10,be,3a,23),
	HX_("invalidFormat",8e,f1,ff,02),
	HX_("sub",80,a9,57,00),
	HX_("yflip",a6,43,3a,ef),
	HX_("blit",35,38,19,41),
	HX_("clear",8d,71,5b,48),
	HX_("toVector",9e,58,9c,be),
	HX_("makeSquare",2b,d5,c1,aa),
	HX_("copyInner",a1,55,17,44),
	HX_("willChange",22,0e,ff,7f),
	HX_("setFlip",6f,53,42,09),
	HX_("convert",f3,fd,c9,1a),
	HX_("getPixel",10,d6,7a,22),
	HX_("setPixel",84,2f,d8,d0),
	HX_("getPixelF",36,78,00,09),
	HX_("setPixelF",42,64,51,ec),
	HX_("dispose",9f,80,4c,bb),
	HX_("toString",ac,d0,6e,38),
	HX_("toPNG",ee,f1,16,14),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class Pixels_obj::__mClass;

static ::String Pixels_obj_sStaticFields[] = {
	HX_("switchEndian",af,45,a8,16),
	HX_("switchBR",c4,e8,d6,0d),
	HX_("calcDataSize",c0,71,8d,59),
	HX_("calcStride",8e,ca,1e,c6),
	HX_("isFloatFormat",29,36,d4,ad),
	HX_("getChannelOffset",40,2a,20,e2),
	HX_("alloc",75,a4,93,21),
	HX_("toDDS",38,ce,0d,14),
	::String(null())
};

void Pixels_obj::__register()
{
	Pixels_obj _hx_dummy;
	Pixels_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.Pixels",27,39,38,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Pixels_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Pixels_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Pixels_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Pixels_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pixels_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pixels_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
