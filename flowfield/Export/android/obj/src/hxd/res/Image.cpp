#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_format_gif_Reader
#include <format/gif/Reader.h>
#endif
#ifndef INCLUDED_format_gif_Tools
#include <format/gif/Tools.h>
#endif
#ifndef INCLUDED_format_png_Reader
#include <format/png/Reader.h>
#endif
#ifndef INCLUDED_format_png_Tools
#include <format/png/Tools.h>
#endif
#ifndef INCLUDED_format_tga_ImageOrigin
#include <format/tga/ImageOrigin.h>
#endif
#ifndef INCLUDED_format_tga_ImageType
#include <format/tga/ImageType.h>
#endif
#ifndef INCLUDED_format_tga_Reader
#include <format/tga/Reader.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h3d_mat_Filter
#include <h3d/mat/Filter.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
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
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
#endif
#ifndef INCLUDED_hxd_BitmapInnerDataImpl
#include <hxd/BitmapInnerDataImpl.h>
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
#ifndef INCLUDED_hxd__Pixels_PixelsARGB_Impl_
#include <hxd/_Pixels/PixelsARGB_Impl_.h>
#endif
#ifndef INCLUDED_hxd_fmt_hdr_Reader
#include <hxd/fmt/hdr/Reader.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileInput
#include <hxd/fs/FileInput.h>
#endif
#ifndef INCLUDED_hxd_fs__LoadedBitmap_LoadedBitmap_Impl_
#include <hxd/fs/_LoadedBitmap/LoadedBitmap_Impl_.h>
#endif
#ifndef INCLUDED_hxd_res_Filter
#include <hxd/res/Filter.h>
#endif
#ifndef INCLUDED_hxd_res_Image
#include <hxd/res/Image.h>
#endif
#ifndef INCLUDED_hxd_res_ImageInfo
#include <hxd/res/ImageInfo.h>
#endif
#ifndef INCLUDED_hxd_res_ImageInfoFlag
#include <hxd/res/ImageInfoFlag.h>
#endif
#ifndef INCLUDED_hxd_res_NanoJpeg
#include <hxd/res/NanoJpeg.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_83807ae13663e013_49_new,"hxd.res.Image","new",0xe883be85,"hxd.res.Image.new","hxd/res/Image.hx",49,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_67_getFormat,"hxd.res.Image","getFormat",0x2655b052,"hxd.res.Image.getFormat","hxd/res/Image.hx",67,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_71_getPixelFormat,"hxd.res.Image","getPixelFormat",0xa77f6f62,"hxd.res.Image.getPixelFormat","hxd/res/Image.hx",71,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_75_getSize,"hxd.res.Image","getSize",0xf668b51c,"hxd.res.Image.getSize","hxd/res/Image.hx",75,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_78_getInfo,"hxd.res.Image","getInfo",0xefd04cc9,"hxd.res.Image.getInfo","hxd/res/Image.hx",78,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_250_getPixels,"hxd.res.Image","getPixels",0xb5711048,"hxd.res.Image.getPixels","hxd/res/Image.hx",250,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_417_toBitmap,"hxd.res.Image","toBitmap",0xe0d06385,"hxd.res.Image.toBitmap","hxd/res/Image.hx",417,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_426_watchCallb,"hxd.res.Image","watchCallb",0xef39ddb0,"hxd.res.Image.watchCallb","hxd/res/Image.hx",426,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_436_loadTexture,"hxd.res.Image","loadTexture",0x8b30a27a,"hxd.res.Image.loadTexture","hxd/res/Image.hx",436,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_438_loadTexture,"hxd.res.Image","loadTexture",0x8b30a27a,"hxd.res.Image.loadTexture","hxd/res/Image.hx",438,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_459_loadTexture,"hxd.res.Image","loadTexture",0x8b30a27a,"hxd.res.Image.loadTexture","hxd/res/Image.hx",459,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_478_toTexture,"hxd.res.Image","toTexture",0x7ae59885,"hxd.res.Image.toTexture","hxd/res/Image.hx",478,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_504_toTile,"hxd.res.Image","toTile",0x0b23ed44,"hxd.res.Image.toTile","hxd/res/Image.hx",504,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_509___default_setupTextureFlags,"hxd.res.Image","__default_setupTextureFlags",0xd26d5a50,"hxd.res.Image.__default_setupTextureFlags","hxd/res/Image.hx",509,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_54_boot,"hxd.res.Image","boot",0x82dbf66d,"hxd.res.Image.boot","hxd/res/Image.hx",54,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_59_boot,"hxd.res.Image","boot",0x82dbf66d,"hxd.res.Image.boot","hxd/res/Image.hx",59,0x34241f0d)
HX_LOCAL_STACK_FRAME(_hx_pos_83807ae13663e013_61_boot,"hxd.res.Image","boot",0x82dbf66d,"hxd.res.Image.boot","hxd/res/Image.hx",61,0x34241f0d)
namespace hxd{
namespace res{

void Image_obj::__construct( ::hxd::fs::FileEntry entry){
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_49_new)
HXDLIN(  49)		super::__construct(entry);
            	}

Dynamic Image_obj::__CreateEmpty() { return new Image_obj; }

void *Image_obj::_hx_vtable = 0;

Dynamic Image_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Image_obj > _hx_result = new Image_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Image_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09c9e03a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09c9e03a;
	} else {
		return inClassId==(int)0x63ca806f;
	}
}

int Image_obj::getFormat(){
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_67_getFormat)
HXDLIN(  67)		return this->getInfo()->dataFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getFormat,return )

 ::hxd::PixelFormat Image_obj::getPixelFormat(){
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_71_getPixelFormat)
HXDLIN(  71)		return this->getInfo()->pixelFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getPixelFormat,return )

 ::hxd::res::ImageInfo Image_obj::getSize(){
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_75_getSize)
HXDLIN(  75)		return this->getInfo();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getSize,return )

 ::hxd::res::ImageInfo Image_obj::getInfo(){
            	HX_GC_STACKFRAME(&_hx_pos_83807ae13663e013_78_getInfo)
HXLINE(  79)		if (::hx::IsNotNull( this->inf )) {
HXLINE(  80)			return this->inf;
            		}
HXLINE(  81)		this->inf =  ::hxd::res::ImageInfo_obj::__alloc( HX_CTX );
HXLINE(  82)		 ::hxd::fs::FileInput f =  ::hxd::fs::FileInput_obj::__alloc( HX_CTX ,this->entry);
HXLINE(  83)		int head;
HXDLIN(  83)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  83)			head = f->readUInt16();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  83)				{
HXLINE(  83)					null();
            				}
HXDLIN(  83)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE(  83)					head = 0;
            				}
            				else {
HXLINE(  83)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  84)		switch((int)(head)){
            			case (int)16163: {
HXLINE( 211)				this->inf->dataFormat = 6;
HXLINE( 212)				while((f->readLine() != HX_("",00,00,00,00))){
            				}
HXLINE( 213)				::Array< ::String > parts = f->readLine().split(HX_(" ",20,00,00,00));
HXLINE( 214)				this->inf->pixelFormat = ::hxd::PixelFormat_obj::RGBA32F_dyn();
HXLINE( 215)				this->inf->height = ( (int)(::Std_obj::parseInt(parts->__get(1))) );
HXLINE( 216)				this->inf->width = ( (int)(::Std_obj::parseInt(parts->__get(3))) );
            			}
            			break;
            			case (int)17476: {
HXLINE( 130)				this->inf->dataFormat = 4;
HXLINE( 131)				f->skip(10);
HXLINE( 132)				this->inf->height = f->readInt32();
HXLINE( 133)				this->inf->width = f->readInt32();
HXLINE( 134)				f->skip(8);
HXLINE( 135)				this->inf->mipLevels = f->readInt32();
HXLINE( 136)				f->skip(48);
HXLINE( 137)				int caps = f->readInt32();
HXLINE( 138)				int fourCC = f->readInt32();
HXLINE( 139)				int bpp = f->readInt32();
HXLINE( 140)				int rMask = f->readInt32();
HXLINE( 141)				int gMask = f->readInt32();
HXLINE( 142)				int bMask = f->readInt32();
HXLINE( 143)				int aMask = f->readInt32();
HXLINE( 144)				int caps2 = f->readInt32();
HXLINE( 145)				int cubes = f->readInt32();
HXLINE( 146)				if (((cubes & 65024) == 65024)) {
HXLINE( 147)					 ::hxd::res::ImageInfo _hx_tmp = this->inf;
HXDLIN( 147)					int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 147)					_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::IsCube_dyn())));
            				}
HXLINE( 148)				switch((int)((fourCC & 16777215))){
            					case (int)0: {
HXLINE( 164)						if ((fourCC == 808540228)) {
HXLINE( 165)							f->skip(12);
HXLINE( 166)							 ::hxd::res::ImageInfo _hx_tmp = this->inf;
HXDLIN( 166)							int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 166)							_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::Dxt10Header_dyn())));
HXLINE( 167)							int dxgi = f->readInt32();
HXLINE( 168)							 ::hxd::PixelFormat _hx_tmp2;
HXDLIN( 168)							switch((int)(dxgi)){
            								case (int)95: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(6);
            								}
            								break;
            								case (int)98: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(7);
            								}
            								break;
            								default:{
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this->entry->get_path() + HX_(" has unsupported DXGI format ",90,09,85,bc)) + dxgi)));
            								}
            							}
HXLINE( 168)							this->inf->pixelFormat = _hx_tmp2;
            						}
            						else {
HXLINE( 190)							if (((caps & 64) != 0)) {
HXLINE( 191)								if ((bpp == 32)) {
HXLINE( 191)									switch((int)(rMask)){
            										case (int)255: {
HXLINE( 191)											if ((gMask == 65280)) {
HXLINE( 191)												if ((bMask == 16711680)) {
HXLINE( 191)													if ((aMask == -16777216)) {
HXLINE( 195)														this->inf->pixelFormat = ::hxd::PixelFormat_obj::RGBA_dyn();
            													}
            													else {
HXLINE( 197)														::String _hx_tmp = ((((HX_("Unsupported RGB DDS ",eb,c2,48,09) + bpp) + HX_("bits ",5a,aa,04,b3)) + ::StringTools_obj::hex(rMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)														::String _hx_tmp1 = ((_hx_tmp + ::StringTools_obj::hex(gMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)														::String _hx_tmp2 = ((_hx_tmp1 + ::StringTools_obj::hex(bMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp2 + ::StringTools_obj::hex(aMask,null()))));
            													}
            												}
            												else {
HXLINE( 197)													::String _hx_tmp = ((((HX_("Unsupported RGB DDS ",eb,c2,48,09) + bpp) + HX_("bits ",5a,aa,04,b3)) + ::StringTools_obj::hex(rMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)													::String _hx_tmp1 = ((_hx_tmp + ::StringTools_obj::hex(gMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)													::String _hx_tmp2 = ((_hx_tmp1 + ::StringTools_obj::hex(bMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp2 + ::StringTools_obj::hex(aMask,null()))));
            												}
            											}
            											else {
HXLINE( 197)												::String _hx_tmp = ((((HX_("Unsupported RGB DDS ",eb,c2,48,09) + bpp) + HX_("bits ",5a,aa,04,b3)) + ::StringTools_obj::hex(rMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)												::String _hx_tmp1 = ((_hx_tmp + ::StringTools_obj::hex(gMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)												::String _hx_tmp2 = ((_hx_tmp1 + ::StringTools_obj::hex(bMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp2 + ::StringTools_obj::hex(aMask,null()))));
            											}
            										}
            										break;
            										case (int)16711680: {
HXLINE( 191)											if ((gMask == 65280)) {
HXLINE( 191)												if ((bMask == 255)) {
HXLINE( 191)													if ((aMask == -16777216)) {
HXLINE( 193)														this->inf->pixelFormat = ::hxd::PixelFormat_obj::BGRA_dyn();
            													}
            													else {
HXLINE( 197)														::String _hx_tmp = ((((HX_("Unsupported RGB DDS ",eb,c2,48,09) + bpp) + HX_("bits ",5a,aa,04,b3)) + ::StringTools_obj::hex(rMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)														::String _hx_tmp1 = ((_hx_tmp + ::StringTools_obj::hex(gMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)														::String _hx_tmp2 = ((_hx_tmp1 + ::StringTools_obj::hex(bMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp2 + ::StringTools_obj::hex(aMask,null()))));
            													}
            												}
            												else {
HXLINE( 197)													::String _hx_tmp = ((((HX_("Unsupported RGB DDS ",eb,c2,48,09) + bpp) + HX_("bits ",5a,aa,04,b3)) + ::StringTools_obj::hex(rMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)													::String _hx_tmp1 = ((_hx_tmp + ::StringTools_obj::hex(gMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)													::String _hx_tmp2 = ((_hx_tmp1 + ::StringTools_obj::hex(bMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp2 + ::StringTools_obj::hex(aMask,null()))));
            												}
            											}
            											else {
HXLINE( 197)												::String _hx_tmp = ((((HX_("Unsupported RGB DDS ",eb,c2,48,09) + bpp) + HX_("bits ",5a,aa,04,b3)) + ::StringTools_obj::hex(rMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)												::String _hx_tmp1 = ((_hx_tmp + ::StringTools_obj::hex(gMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)												::String _hx_tmp2 = ((_hx_tmp1 + ::StringTools_obj::hex(bMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp2 + ::StringTools_obj::hex(aMask,null()))));
            											}
            										}
            										break;
            										default:{
HXLINE( 197)											::String _hx_tmp = ((((HX_("Unsupported RGB DDS ",eb,c2,48,09) + bpp) + HX_("bits ",5a,aa,04,b3)) + ::StringTools_obj::hex(rMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)											::String _hx_tmp1 = ((_hx_tmp + ::StringTools_obj::hex(gMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)											::String _hx_tmp2 = ((_hx_tmp1 + ::StringTools_obj::hex(bMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp2 + ::StringTools_obj::hex(aMask,null()))));
            										}
            									}
            								}
            								else {
HXLINE( 197)									::String _hx_tmp = ((((HX_("Unsupported RGB DDS ",eb,c2,48,09) + bpp) + HX_("bits ",5a,aa,04,b3)) + ::StringTools_obj::hex(rMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)									::String _hx_tmp1 = ((_hx_tmp + ::StringTools_obj::hex(gMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)									::String _hx_tmp2 = ((_hx_tmp1 + ::StringTools_obj::hex(bMask,null())) + HX_("/",2f,00,00,00));
HXDLIN( 197)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp2 + ::StringTools_obj::hex(aMask,null()))));
            								}
            							}
            						}
            					}
            					break;
            					case (int)111: {
HXLINE( 164)						if ((fourCC == 808540228)) {
HXLINE( 165)							f->skip(12);
HXLINE( 166)							 ::hxd::res::ImageInfo _hx_tmp = this->inf;
HXDLIN( 166)							int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 166)							_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::Dxt10Header_dyn())));
HXLINE( 167)							int dxgi = f->readInt32();
HXLINE( 168)							 ::hxd::PixelFormat _hx_tmp2;
HXDLIN( 168)							switch((int)(dxgi)){
            								case (int)95: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(6);
            								}
            								break;
            								case (int)98: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(7);
            								}
            								break;
            								default:{
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this->entry->get_path() + HX_(" has unsupported DXGI format ",90,09,85,bc)) + dxgi)));
            								}
            							}
HXLINE( 168)							this->inf->pixelFormat = _hx_tmp2;
            						}
            						else {
HXLINE( 177)							this->inf->pixelFormat = ::hxd::PixelFormat_obj::R16F_dyn();
            						}
            					}
            					break;
            					case (int)112: {
HXLINE( 164)						if ((fourCC == 808540228)) {
HXLINE( 165)							f->skip(12);
HXLINE( 166)							 ::hxd::res::ImageInfo _hx_tmp = this->inf;
HXDLIN( 166)							int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 166)							_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::Dxt10Header_dyn())));
HXLINE( 167)							int dxgi = f->readInt32();
HXLINE( 168)							 ::hxd::PixelFormat _hx_tmp2;
HXDLIN( 168)							switch((int)(dxgi)){
            								case (int)95: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(6);
            								}
            								break;
            								case (int)98: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(7);
            								}
            								break;
            								default:{
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this->entry->get_path() + HX_(" has unsupported DXGI format ",90,09,85,bc)) + dxgi)));
            								}
            							}
HXLINE( 168)							this->inf->pixelFormat = _hx_tmp2;
            						}
            						else {
HXLINE( 179)							this->inf->pixelFormat = ::hxd::PixelFormat_obj::RG16F_dyn();
            						}
            					}
            					break;
            					case (int)113: {
HXLINE( 164)						if ((fourCC == 808540228)) {
HXLINE( 165)							f->skip(12);
HXLINE( 166)							 ::hxd::res::ImageInfo _hx_tmp = this->inf;
HXDLIN( 166)							int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 166)							_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::Dxt10Header_dyn())));
HXLINE( 167)							int dxgi = f->readInt32();
HXLINE( 168)							 ::hxd::PixelFormat _hx_tmp2;
HXDLIN( 168)							switch((int)(dxgi)){
            								case (int)95: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(6);
            								}
            								break;
            								case (int)98: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(7);
            								}
            								break;
            								default:{
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this->entry->get_path() + HX_(" has unsupported DXGI format ",90,09,85,bc)) + dxgi)));
            								}
            							}
HXLINE( 168)							this->inf->pixelFormat = _hx_tmp2;
            						}
            						else {
HXLINE( 181)							this->inf->pixelFormat = ::hxd::PixelFormat_obj::RGBA16F_dyn();
            						}
            					}
            					break;
            					case (int)114: {
HXLINE( 164)						if ((fourCC == 808540228)) {
HXLINE( 165)							f->skip(12);
HXLINE( 166)							 ::hxd::res::ImageInfo _hx_tmp = this->inf;
HXDLIN( 166)							int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 166)							_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::Dxt10Header_dyn())));
HXLINE( 167)							int dxgi = f->readInt32();
HXLINE( 168)							 ::hxd::PixelFormat _hx_tmp2;
HXDLIN( 168)							switch((int)(dxgi)){
            								case (int)95: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(6);
            								}
            								break;
            								case (int)98: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(7);
            								}
            								break;
            								default:{
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this->entry->get_path() + HX_(" has unsupported DXGI format ",90,09,85,bc)) + dxgi)));
            								}
            							}
HXLINE( 168)							this->inf->pixelFormat = _hx_tmp2;
            						}
            						else {
HXLINE( 183)							this->inf->pixelFormat = ::hxd::PixelFormat_obj::R32F_dyn();
            						}
            					}
            					break;
            					case (int)115: {
HXLINE( 164)						if ((fourCC == 808540228)) {
HXLINE( 165)							f->skip(12);
HXLINE( 166)							 ::hxd::res::ImageInfo _hx_tmp = this->inf;
HXDLIN( 166)							int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 166)							_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::Dxt10Header_dyn())));
HXLINE( 167)							int dxgi = f->readInt32();
HXLINE( 168)							 ::hxd::PixelFormat _hx_tmp2;
HXDLIN( 168)							switch((int)(dxgi)){
            								case (int)95: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(6);
            								}
            								break;
            								case (int)98: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(7);
            								}
            								break;
            								default:{
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this->entry->get_path() + HX_(" has unsupported DXGI format ",90,09,85,bc)) + dxgi)));
            								}
            							}
HXLINE( 168)							this->inf->pixelFormat = _hx_tmp2;
            						}
            						else {
HXLINE( 185)							this->inf->pixelFormat = ::hxd::PixelFormat_obj::RG32F_dyn();
            						}
            					}
            					break;
            					case (int)116: {
HXLINE( 164)						if ((fourCC == 808540228)) {
HXLINE( 165)							f->skip(12);
HXLINE( 166)							 ::hxd::res::ImageInfo _hx_tmp = this->inf;
HXDLIN( 166)							int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 166)							_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::Dxt10Header_dyn())));
HXLINE( 167)							int dxgi = f->readInt32();
HXLINE( 168)							 ::hxd::PixelFormat _hx_tmp2;
HXDLIN( 168)							switch((int)(dxgi)){
            								case (int)95: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(6);
            								}
            								break;
            								case (int)98: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(7);
            								}
            								break;
            								default:{
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this->entry->get_path() + HX_(" has unsupported DXGI format ",90,09,85,bc)) + dxgi)));
            								}
            							}
HXLINE( 168)							this->inf->pixelFormat = _hx_tmp2;
            						}
            						else {
HXLINE( 187)							this->inf->pixelFormat = ::hxd::PixelFormat_obj::RGBA32F_dyn();
            						}
            					}
            					break;
            					case (int)4805697: {
HXLINE( 158)						int v = (::hx::UShr(fourCC,24) - 48);
HXLINE( 159)						 ::hxd::PixelFormat _hx_tmp;
HXDLIN( 159)						switch((int)(v)){
            							case (int)1: {
HXLINE( 159)								_hx_tmp = ::hxd::PixelFormat_obj::S3TC(4);
            							}
            							break;
            							case (int)2: {
HXLINE( 159)								_hx_tmp = ::hxd::PixelFormat_obj::S3TC(5);
            							}
            							break;
            							default:{
HXLINE( 159)								_hx_tmp = null();
            							}
            						}
HXDLIN( 159)						this->inf->pixelFormat = _hx_tmp;
            					}
            					break;
            					case (int)5527620: {
HXLINE( 150)						int dxt = (::hx::UShr(fourCC,24) - 48);
HXLINE( 151)						 ::hxd::PixelFormat _hx_tmp;
HXDLIN( 151)						switch((int)(dxt)){
            							case (int)1: {
HXLINE( 151)								_hx_tmp = ::hxd::PixelFormat_obj::S3TC(1);
            							}
            							break;
            							case (int)2: case (int)3: {
HXLINE( 151)								_hx_tmp = ::hxd::PixelFormat_obj::S3TC(2);
            							}
            							break;
            							case (int)4: case (int)5: {
HXLINE( 151)								_hx_tmp = ::hxd::PixelFormat_obj::S3TC(3);
            							}
            							break;
            							default:{
HXLINE( 151)								_hx_tmp = null();
            							}
            						}
HXDLIN( 151)						this->inf->pixelFormat = _hx_tmp;
            					}
            					break;
            					default:{
HXLINE( 164)						if ((fourCC == 808540228)) {
HXLINE( 165)							f->skip(12);
HXLINE( 166)							 ::hxd::res::ImageInfo _hx_tmp = this->inf;
HXDLIN( 166)							int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 166)							_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::Dxt10Header_dyn())));
HXLINE( 167)							int dxgi = f->readInt32();
HXLINE( 168)							 ::hxd::PixelFormat _hx_tmp2;
HXDLIN( 168)							switch((int)(dxgi)){
            								case (int)95: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(6);
            								}
            								break;
            								case (int)98: {
HXLINE( 168)									_hx_tmp2 = ::hxd::PixelFormat_obj::S3TC(7);
            								}
            								break;
            								default:{
HXLINE( 174)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this->entry->get_path() + HX_(" has unsupported DXGI format ",90,09,85,bc)) + dxgi)));
            								}
            							}
HXLINE( 168)							this->inf->pixelFormat = _hx_tmp2;
            						}
            					}
            				}
HXLINE( 203)				if (::hx::IsNull( this->inf->pixelFormat )) {
HXLINE( 204)					::String fid = (((::String::fromCharCode((fourCC & 255)) + ::String::fromCharCode(((fourCC >> 8) & 255))) + ::String::fromCharCode(((fourCC >> 16) & 255))) + ::String::fromCharCode(::hx::UShr(fourCC,24)));
HXLINE( 205)					if (((fourCC & 255) == fourCC)) {
HXLINE( 205)						fid = (HX_("0x",48,2a,00,00) + fourCC);
            					}
HXLINE( 206)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this->entry->get_path() + HX_(" has unsupported 4CC ",bd,28,5c,0e)) + fid)));
            				}
            			}
            			break;
            			case (int)18759: {
HXLINE( 123)				this->inf->dataFormat = 2;
HXLINE( 124)				this->inf->pixelFormat = ::hxd::PixelFormat_obj::BGRA_dyn();
HXLINE( 125)				f->readInt32();
HXLINE( 126)				this->inf->width = f->readUInt16();
HXLINE( 127)				this->inf->height = f->readUInt16();
            			}
            			break;
            			case (int)20617: {
HXLINE( 102)				this->inf->dataFormat = 1;
HXLINE( 103)				f->set_bigEndian(true);
HXLINE( 104)				f->skip(6);
HXLINE( 105)				while(true){
HXLINE( 106)					int dataLen = f->readInt32();
HXLINE( 107)					if ((f->readInt32() == (int)1229472850)) {
HXLINE( 108)						this->inf->width = f->readInt32();
HXLINE( 109)						this->inf->height = f->readInt32();
HXLINE( 110)						int colbits = f->readByte();
HXLINE( 111)						 ::hxd::PixelFormat _hx_tmp;
HXDLIN( 111)						switch((int)(colbits)){
            							case (int)8: {
HXLINE( 111)								_hx_tmp = ::hxd::PixelFormat_obj::BGRA_dyn();
            							}
            							break;
            							case (int)16: {
HXLINE( 111)								_hx_tmp = ::hxd::PixelFormat_obj::R16U_dyn();
            							}
            							break;
            							case (int)48: {
HXLINE( 111)								_hx_tmp = ::hxd::PixelFormat_obj::RGB16U_dyn();
            							}
            							break;
            							case (int)64: {
HXLINE( 111)								_hx_tmp = ::hxd::PixelFormat_obj::RGBA16U_dyn();
            							}
            							break;
            							default:{
HXLINE( 116)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Unsupported png format ",87,56,8c,70) + colbits) + HX_("(",28,00,00,00)) + this->entry->get_path()) + HX_(")",29,00,00,00))));
            							}
            						}
HXLINE( 111)						this->inf->pixelFormat = _hx_tmp;
HXLINE( 118)						goto _hx_goto_5;
            					}
HXLINE( 120)					f->skip((dataLen + 4));
            				}
            				_hx_goto_5:;
            			}
            			break;
            			case (int)55551: {
HXLINE(  86)				this->inf->dataFormat = 0;
HXLINE(  87)				this->inf->pixelFormat = ::hxd::PixelFormat_obj::BGRA_dyn();
HXLINE(  88)				f->set_bigEndian(true);
HXLINE(  89)				while(true){
HXLINE(  90)					switch((int)(f->readUInt16())){
            						case (int)65472: case (int)65473: case (int)65474: {
HXLINE(  92)							int len = f->readUInt16();
HXLINE(  93)							int prec = f->readByte();
HXLINE(  94)							this->inf->height = f->readUInt16();
HXLINE(  95)							this->inf->width = f->readUInt16();
HXLINE(  96)							goto _hx_goto_6;
            						}
            						break;
            						default:{
HXLINE(  98)							f->skip((f->readUInt16() - 2));
            						}
            					}
            				}
            				_hx_goto_6:;
            			}
            			break;
            			default:{
HXLINE( 218)				if ((this->entry->get_extension() == HX_("tga",8e,5f,58,00))) {
HXLINE( 219)					this->inf->dataFormat = 3;
HXLINE( 220)					this->inf->pixelFormat = ::hxd::PixelFormat_obj::ARGB_dyn();
HXLINE( 221)					f->skip(10);
HXLINE( 222)					this->inf->width = f->readUInt16();
HXLINE( 223)					this->inf->height = f->readUInt16();
            				}
            				else {
HXLINE( 225)					if ((this->entry->get_extension() == HX_("raw",e8,d5,56,00))) {
HXLINE( 226)						this->inf->dataFormat = 5;
HXLINE( 227)						this->inf->pixelFormat = ::hxd::PixelFormat_obj::R32F_dyn();
HXLINE( 228)						int size = ::Std_obj::_hx_int(::Math_obj::sqrt(( (Float)((this->entry->get_size() >> 2)) )));
HXLINE( 229)						if ((this->entry->get_size() != ((size * size) * 4))) {
HXLINE( 230)							int size2 = ::Std_obj::_hx_int(::Math_obj::sqrt(( (Float)((this->entry->get_size() >> 1)) )));
HXLINE( 231)							if ((this->entry->get_size() == ((size2 * size2) * 2))) {
HXLINE( 232)								this->inf->pixelFormat = ::hxd::PixelFormat_obj::R16F_dyn();
HXLINE( 233)								size = size2;
            							}
            							else {
HXLINE( 235)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("RAW format does not match 32 bit per components on ",f0,09,f8,6b) + size) + HX_("x",78,00,00,00)) + size)));
            							}
            						}
HXLINE( 237)						this->inf->width = (this->inf->height = size);
            					}
            					else {
HXLINE( 240)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported texture format ",39,e3,c3,ba) + this->entry->get_path())));
            					}
            				}
            			}
            		}
HXLINE( 243)		f->close();
HXLINE( 244)		if (::hx::IsNull( this->inf->pixelFormat )) {
HXLINE( 245)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Unsupported internal format (",f7,19,31,6b) + this->entry->get_path()) + HX_(")",29,00,00,00))));
            		}
HXLINE( 247)		return this->inf;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getInfo,return )

 ::hxd::Pixels Image_obj::getPixels( ::hxd::PixelFormat fmt, ::Dynamic flipY, ::Dynamic index){
            	HX_GC_STACKFRAME(&_hx_pos_83807ae13663e013_250_getPixels)
HXLINE( 251)		 ::hxd::Pixels pixels;
HXLINE( 252)		if (::hx::IsNull( index )) {
HXLINE( 253)			index = 0;
            		}
HXLINE( 254)		switch((int)(this->getInfo()->dataFormat)){
            			case (int)0: {
HXLINE( 280)				 ::haxe::io::Bytes bytes = this->entry->getBytes();
HXLINE( 286)				if (::hx::IsPointerNotEq( this->inf->pixelFormat,::hxd::PixelFormat_obj::BGRA_dyn() )) {
HXLINE( 287)					::String _hx_tmp = ((HX_("No support to decode ",5d,b4,e1,a1) + ::Std_obj::string(this->inf->pixelFormat)) + HX_(" on this platform (",1c,ff,bf,3e));
HXDLIN( 287)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + this->entry->get_path()) + HX_(")",29,00,00,00))));
            				}
HXLINE( 288)				 ::Dynamic p;
HXDLIN( 288)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 288)					p = ::hxd::res::NanoJpeg_obj::decode(bytes,null(),null(),null());
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 288)						{
HXLINE( 288)							null();
            						}
HXDLIN( 288)						 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 288)						::String p = ((HX_("Failed to decode JPG ",2f,ad,cf,cd) + this->entry->get_path()) + HX_(" (",08,1c,00,00));
HXDLIN( 288)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((p + ::Std_obj::string(e)) + HX_(")",29,00,00,00))));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 289)				pixels =  ::hxd::Pixels_obj::__alloc( HX_CTX ,( (int)(p->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ),( (int)(p->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ),( ( ::haxe::io::Bytes)(p->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) ),::hxd::PixelFormat_obj::BGRA_dyn(),null());
            			}
            			break;
            			case (int)1: {
HXLINE( 256)				 ::haxe::io::Bytes bytes = this->entry->getBytes();
HXLINE( 262)				if (::hx::IsPointerNotEq( this->inf->pixelFormat,::hxd::PixelFormat_obj::BGRA_dyn() )) {
HXLINE( 263)					::String _hx_tmp = ((HX_("No support to decode ",5d,b4,e1,a1) + ::Std_obj::string(this->inf->pixelFormat)) + HX_(" on this platform (",1c,ff,bf,3e));
HXDLIN( 263)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + this->entry->get_path()) + HX_(")",29,00,00,00))));
            				}
HXLINE( 264)				 ::format::png::Reader png =  ::format::png::Reader_obj::__alloc( HX_CTX , ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null()));
HXLINE( 265)				png->checkCRC = false;
HXLINE( 267)				pixels = ::hxd::Pixels_obj::alloc(this->inf->width,this->inf->height,::hxd::PixelFormat_obj::BGRA_dyn());
HXLINE( 268)				 ::haxe::ds::List pdata = png->read();
HXLINE( 269)				::format::png::Tools_obj::extract32(pdata,pixels->bytes,flipY);
HXLINE( 270)				if (( (bool)(flipY) )) {
HXLINE( 270)					 ::hxd::Pixels pixels1 = pixels;
HXDLIN( 270)					int pixels2 = pixels1->flags;
HXDLIN( 270)					pixels1->flags = (pixels2 | (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn())));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 273)				 ::haxe::io::Bytes bytes = this->entry->getBytes();
HXLINE( 274)				 ::Dynamic gif =  ::format::gif::Reader_obj::__alloc( HX_CTX , ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null()))->read();
HXLINE( 275)				if (::hx::IsPointerEq( fmt,::hxd::PixelFormat_obj::RGBA_dyn() )) {
HXLINE( 276)					int pixels1 = this->inf->width;
HXDLIN( 276)					int pixels2 = this->inf->height;
HXDLIN( 276)					pixels =  ::hxd::Pixels_obj::__alloc( HX_CTX ,pixels1,pixels2,::format::gif::Tools_obj::extractFullRGBA(gif,0),::hxd::PixelFormat_obj::RGBA_dyn(),null());
            				}
            				else {
HXLINE( 278)					int pixels1 = this->inf->width;
HXDLIN( 278)					int pixels2 = this->inf->height;
HXDLIN( 278)					pixels =  ::hxd::Pixels_obj::__alloc( HX_CTX ,pixels1,pixels2,::format::gif::Tools_obj::extractFullBGRA(gif,0),::hxd::PixelFormat_obj::BGRA_dyn(),null());
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 292)				 ::haxe::io::Bytes bytes = this->entry->getBytes();
HXLINE( 293)				 ::Dynamic r =  ::format::tga::Reader_obj::__alloc( HX_CTX , ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null()))->read();
HXLINE( 294)				bool _hx_tmp;
HXDLIN( 294)				if (::hx::IsPointerEq(  ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("imageType",b5,87,3d,2f),::hx::paccDynamic),::format::tga::ImageType_obj::UncompressedTrueColor_dyn() )) {
HXLINE( 294)					_hx_tmp = ::hx::IsNotEq(  ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic),32 );
            				}
            				else {
HXLINE( 294)					_hx_tmp = true;
            				}
HXDLIN( 294)				if (_hx_tmp) {
HXLINE( 295)					::String _hx_tmp = ((HX_("Not supported TGA ",b1,18,33,00) + ::Std_obj::string( ::Dynamic( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("imageType",b5,87,3d,2f),::hx::paccDynamic)))) + HX_("/",2f,00,00,00));
HXDLIN( 295)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((_hx_tmp +  ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic)))));
            				}
HXLINE( 296)				int w = ( (int)( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
HXLINE( 297)				int h = ( (int)( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXLINE( 298)				pixels = ::hxd::Pixels_obj::alloc(w,h,::hxd::PixelFormat_obj::ARGB_dyn());
HXLINE( 299)				 ::hxd::Pixels access = ::hxd::_Pixels::PixelsARGB_Impl__obj::fromPixels(pixels);
HXLINE( 300)				int p = 0;
HXLINE( 301)				{
HXLINE( 301)					int _g = 0;
HXDLIN( 301)					int _g1 = h;
HXDLIN( 301)					while((_g < _g1)){
HXLINE( 301)						_g = (_g + 1);
HXDLIN( 301)						int y = (_g - 1);
HXLINE( 302)						{
HXLINE( 302)							int _g1 = 0;
HXDLIN( 302)							int _g2 = w;
HXDLIN( 302)							while((_g1 < _g2)){
HXLINE( 302)								_g1 = (_g1 + 1);
HXDLIN( 302)								int x = (_g1 - 1);
HXLINE( 303)								int c = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(r->__Field(HX_("imageData",25,eb,97,24),::hx::paccDynamic)) ),(x + (y * w)))) );
HXLINE( 304)								{
HXLINE( 304)									 ::haxe::io::Bytes _this = access->bytes;
HXDLIN( 304)									int pos = (((x + (y * access->width)) << 2) + access->offset);
HXDLIN( 304)									int v = (((::hx::UShr(c,24) | ((c >> 8) & 65280)) | ((c << 8) & 16711680)) | (c << 24));
HXDLIN( 304)									_this->b[pos] = ( (unsigned char)((v & 255)) );
HXDLIN( 304)									_this->b[(pos + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 304)									_this->b[(pos + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 304)									_this->b[(pos + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            								}
            							}
            						}
            					}
            				}
HXLINE( 306)				switch((int)( ::Dynamic( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("imageOrigin",a1,23,41,93),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 307)						 ::hxd::Pixels pixels1 = pixels;
HXDLIN( 307)						int pixels2 = pixels1->flags;
HXDLIN( 307)						pixels1->flags = (pixels2 | (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn())));
            					}
            					break;
            					case (int)2: {
            					}
            					break;
            					default:{
HXLINE( 309)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Not supported ",3f,88,54,c9) + ::Std_obj::string( ::Dynamic( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("imageOrigin",a1,23,41,93),::hx::paccDynamic))))));
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 312)				int pos = 128;
HXLINE( 313)				int mipLevel = 0;
HXLINE( 314)				int this1 = this->inf->flags;
HXDLIN( 314)				if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::Dxt10Header_dyn()))) != 0)) {
HXLINE( 314)					pos = (pos + 20);
            				}
HXLINE( 315)				if (::hx::IsGreater( index,0 )) {
HXLINE( 316)					int bpp = ::hxd::Pixels_obj::calcStride(1,this->inf->pixelFormat);
HXLINE( 317)					int layer = ::Std_obj::_hx_int((( (Float)(index) ) / ( (Float)(this->inf->mipLevels) )));
HXLINE( 318)					mipLevel = ::hx::Mod(index,this->inf->mipLevels);
HXLINE( 319)					int totSize = 0;
HXLINE( 320)					{
HXLINE( 320)						int _g = 0;
HXDLIN( 320)						int _g1 = this->inf->mipLevels;
HXDLIN( 320)						while((_g < _g1)){
HXLINE( 320)							_g = (_g + 1);
HXDLIN( 320)							int i = (_g - 1);
HXLINE( 321)							int w = (this->inf->width >> i);
HXLINE( 322)							int h = (this->inf->height >> i);
HXLINE( 323)							if ((w == 0)) {
HXLINE( 323)								w = 1;
            							}
HXLINE( 324)							if ((h == 0)) {
HXLINE( 324)								h = 1;
            							}
HXLINE( 325)							int size = ::hxd::Pixels_obj::calcDataSize(w,h,this->inf->pixelFormat);
HXLINE( 326)							totSize = (totSize + size);
HXLINE( 327)							if ((i < mipLevel)) {
HXLINE( 327)								pos = (pos + size);
            							}
            							else {
HXLINE( 327)								if ((layer == 0)) {
HXLINE( 327)									goto _hx_goto_10;
            								}
            							}
            						}
            						_hx_goto_10:;
            					}
HXLINE( 329)					pos = (pos + (totSize * layer));
            				}
HXLINE( 331)				 ::haxe::io::Bytes bytes;
HXLINE( 332)				int w = (this->inf->width >> mipLevel);
HXLINE( 333)				int h = (this->inf->height >> mipLevel);
HXLINE( 334)				if ((w == 0)) {
HXLINE( 334)					w = 1;
            				}
HXLINE( 335)				if ((h == 0)) {
HXLINE( 335)					h = 1;
            				}
HXLINE( 336)				bool _hx_tmp;
HXDLIN( 336)				if ((this->inf->mipLevels == 1)) {
HXLINE( 336)					int this1 = this->inf->flags;
HXDLIN( 336)					_hx_tmp = ((this1 & (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::IsCube_dyn()))) == 0);
            				}
            				else {
HXLINE( 336)					_hx_tmp = false;
            				}
HXDLIN( 336)				if (_hx_tmp) {
HXLINE( 337)					bytes = this->entry->getBytes();
            				}
            				else {
HXLINE( 339)					int size = ::hxd::Pixels_obj::calcDataSize(w,h,this->inf->pixelFormat);
HXLINE( 340)					this->entry->open();
HXLINE( 341)					this->entry->skip(pos);
HXLINE( 342)					bytes = ::haxe::io::Bytes_obj::alloc(size);
HXLINE( 343)					this->entry->read(bytes,0,size);
HXLINE( 344)					this->entry->close();
HXLINE( 345)					pos = 0;
            				}
HXLINE( 347)				pixels =  ::hxd::Pixels_obj::__alloc( HX_CTX ,w,h,bytes,this->inf->pixelFormat,pos);
            			}
            			break;
            			case (int)5: {
HXLINE( 349)				 ::haxe::io::Bytes bytes = this->entry->getBytes();
HXLINE( 350)				pixels =  ::hxd::Pixels_obj::__alloc( HX_CTX ,this->inf->width,this->inf->height,bytes,this->inf->pixelFormat,null());
            			}
            			break;
            			case (int)6: {
HXLINE( 352)				 ::Dynamic data = ::hxd::fmt::hdr::Reader_obj::decode(this->entry->getBytes(),false);
HXLINE( 353)				pixels =  ::hxd::Pixels_obj::__alloc( HX_CTX ,( (int)(data->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ),( (int)(data->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ),( ( ::haxe::io::Bytes)(data->__Field(HX_("bytes",6b,08,98,bd),::hx::paccDynamic)) ),this->inf->pixelFormat,null());
            			}
            			break;
            		}
HXLINE( 355)		if (::hx::IsNotNull( fmt )) {
HXLINE( 355)			pixels->convert(fmt);
            		}
HXLINE( 356)		if (::hx::IsNotNull( flipY )) {
HXLINE( 356)			pixels->setFlip(( (bool)(flipY) ));
            		}
HXLINE( 357)		return pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixels,return )

 ::hxd::BitmapData Image_obj::toBitmap(){
            	HX_GC_STACKFRAME(&_hx_pos_83807ae13663e013_417_toBitmap)
HXLINE( 418)		this->getInfo();
HXLINE( 419)		 ::hxd::BitmapData bmp =  ::hxd::BitmapData_obj::__alloc( HX_CTX ,this->inf->width,this->inf->height);
HXLINE( 420)		 ::hxd::Pixels pixels = this->getPixels(null(),null(),null());
HXLINE( 421)		bmp->setPixels(pixels);
HXLINE( 422)		pixels->dispose();
HXLINE( 423)		return bmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,toBitmap,return )

void Image_obj::watchCallb(){
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_426_watchCallb)
HXLINE( 427)		int w = this->inf->width;
HXDLIN( 427)		int h = this->inf->height;
HXLINE( 428)		this->inf = null();
HXLINE( 429)		 ::hxd::res::ImageInfo s = this->getInfo();
HXLINE( 430)		bool _hx_tmp;
HXDLIN( 430)		if ((w == s->width)) {
HXLINE( 430)			_hx_tmp = (h != s->height);
            		}
            		else {
HXLINE( 430)			_hx_tmp = true;
            		}
HXDLIN( 430)		if (_hx_tmp) {
HXLINE( 431)			this->tex->resize(s->width,s->height);
            		}
HXLINE( 432)		this->tex->realloc = null();
HXLINE( 433)		this->loadTexture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,watchCallb,(void))

void Image_obj::loadTexture(){
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_436_loadTexture)
HXDLIN( 436)		 ::hxd::res::Image _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 437)		bool _hx_tmp;
HXDLIN( 437)		if ((this->getInfo()->dataFormat != 0)) {
HXLINE( 437)			_hx_tmp = !(::hxd::res::Image_obj::DEFAULT_ASYNC);
            		}
            		else {
HXLINE( 437)			_hx_tmp = false;
            		}
HXDLIN( 437)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hxd::res::Image,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_83807ae13663e013_438_loadTexture)
HXLINE( 440)				_gthis->tex->alloc();
HXLINE( 441)				{
HXLINE( 441)					int _g = 0;
HXDLIN( 441)					int _g1 = _gthis->tex->get_layerCount();
HXDLIN( 441)					while((_g < _g1)){
HXLINE( 441)						_g = (_g + 1);
HXDLIN( 441)						int layer = (_g - 1);
HXLINE( 442)						{
HXLINE( 442)							int _g1 = 0;
HXDLIN( 442)							int _g2 = _gthis->inf->mipLevels;
HXDLIN( 442)							while((_g1 < _g2)){
HXLINE( 442)								_g1 = (_g1 + 1);
HXDLIN( 442)								int mip = (_g1 - 1);
HXLINE( 443)								 ::hxd::Pixels pixels = _gthis->getPixels(_gthis->tex->format,null(),((layer * _gthis->inf->mipLevels) + mip));
HXLINE( 444)								_gthis->tex->uploadPixels(pixels,mip,layer);
HXLINE( 445)								pixels->dispose();
            							}
            						}
            					}
            				}
HXLINE( 448)				_gthis->tex->realloc = _gthis->loadTexture_dyn();
HXLINE( 449)				if (::hxd::res::Image_obj::ENABLE_AUTO_WATCH) {
HXLINE( 450)					_gthis->watch(_gthis->watchCallb_dyn());
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 438)			 ::Dynamic load =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 452)			if (this->entry->get_isAvailable()) {
HXLINE( 453)				load();
            			}
            			else {
HXLINE( 455)				this->entry->load(load);
            			}
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::hxd::res::Image,_gthis) HXARGC(1)
            			void _hx_run( ::hxd::BitmapData bmp){
            				HX_STACKFRAME(&_hx_pos_83807ae13663e013_459_loadTexture)
HXLINE( 460)				 ::hxd::BitmapData bmp1 = ::hxd::fs::_LoadedBitmap::LoadedBitmap_Impl__obj::toBitmap(bmp);
HXLINE( 461)				_gthis->tex->alloc();
HXLINE( 462)				_gthis->tex->uploadBitmap(bmp1,null(),null());
HXLINE( 463)				bmp1->data = null();
HXLINE( 464)				_gthis->tex->realloc = _gthis->loadTexture_dyn();
HXLINE( 465)				 ::h3d::mat::Texture _gthis1 = _gthis->tex;
HXDLIN( 465)				int _gthis2 = _gthis1->flags;
HXDLIN( 465)				_gthis1->flags = (_gthis2 & (-1 - (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Loading_dyn()))));
HXLINE( 466)				if (::hx::IsNotNull( _gthis->tex->waitLoads )) {
HXLINE( 467)					::Array< ::Dynamic> arr = _gthis->tex->waitLoads;
HXLINE( 468)					_gthis->tex->waitLoads = null();
HXLINE( 469)					{
HXLINE( 469)						int _g = 0;
HXDLIN( 469)						while((_g < arr->length)){
HXLINE( 469)							 ::Dynamic f = arr->__get(_g);
HXDLIN( 469)							_g = (_g + 1);
HXDLIN( 469)							f();
            						}
            					}
            				}
HXLINE( 472)				if (::hxd::res::Image_obj::ENABLE_AUTO_WATCH) {
HXLINE( 473)					_gthis->watch(_gthis->watchCallb_dyn());
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 458)			 ::h3d::mat::Texture _hx_tmp = this->tex;
HXDLIN( 458)			int _hx_tmp1 = _hx_tmp->flags;
HXDLIN( 458)			_hx_tmp->flags = (_hx_tmp1 | (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Loading_dyn())));
HXLINE( 459)			this->entry->loadBitmap( ::Dynamic(new _hx_Closure_1(_gthis)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,loadTexture,(void))

 ::h3d::mat::Texture Image_obj::toTexture(){
            	HX_GC_STACKFRAME(&_hx_pos_83807ae13663e013_478_toTexture)
HXLINE( 479)		if (::hx::IsNotNull( this->tex )) {
HXLINE( 480)			return this->tex;
            		}
HXLINE( 481)		this->getInfo();
HXLINE( 482)		::Array< ::Dynamic> flags = ::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::mat::TextureFlags_obj::NoAlloc_dyn());
HXLINE( 483)		 ::hxd::PixelFormat fmt = this->inf->pixelFormat;
HXLINE( 486)		bool _hx_tmp;
HXDLIN( 486)		bool _hx_tmp1;
HXDLIN( 486)		if (::hx::IsPointerNotEq( fmt,::hxd::PixelFormat_obj::BGRA_dyn() )) {
HXLINE( 486)			_hx_tmp1 = ::hx::IsPointerEq( fmt,::hxd::PixelFormat_obj::ARGB_dyn() );
            		}
            		else {
HXLINE( 486)			_hx_tmp1 = true;
            		}
HXDLIN( 486)		if (!(_hx_tmp1)) {
HXLINE( 486)			_hx_tmp = ::hx::IsPointerEq( fmt,::hxd::PixelFormat_obj::RGBA_dyn() );
            		}
            		else {
HXLINE( 486)			_hx_tmp = true;
            		}
HXDLIN( 486)		if (_hx_tmp) {
HXLINE( 487)			fmt = ::h3d::mat::Texture_obj::nativeFormat;
            		}
HXLINE( 488)		int this1 = this->inf->flags;
HXDLIN( 488)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::res::ImageInfoFlag_obj::IsCube_dyn()))) != 0)) {
HXLINE( 489)			flags->push(::h3d::mat::TextureFlags_obj::Cube_dyn());
            		}
HXLINE( 490)		if ((this->inf->mipLevels > 1)) {
HXLINE( 491)			flags->push(::h3d::mat::TextureFlags_obj::MipMapped_dyn());
HXLINE( 492)			flags->push(::h3d::mat::TextureFlags_obj::ManualMipMapGen_dyn());
            		}
HXLINE( 494)		if (::hx::IsPointerEq( fmt,::hxd::PixelFormat_obj::R16U_dyn() )) {
HXLINE( 495)			::String _hx_tmp = ((HX_("Unsupported texture format ",39,e3,c3,ba) + ::Std_obj::string(fmt)) + HX_(" for ",17,f1,92,b0));
HXDLIN( 495)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + this->entry->get_path())));
            		}
HXLINE( 496)		this->tex =  ::h3d::mat::Texture_obj::__alloc( HX_CTX ,this->inf->width,this->inf->height,flags,fmt);
HXLINE( 497)		if (::hx::IsPointerNotEq( ::hxd::res::Image_obj::DEFAULT_FILTER,::h3d::mat::Filter_obj::Linear_dyn() )) {
HXLINE( 497)			this->tex->set_filter(::hxd::res::Image_obj::DEFAULT_FILTER);
            		}
HXLINE( 498)		 ::h3d::mat::Texture _hx_tmp2 = this->tex;
HXDLIN( 498)		_hx_tmp2->setName(this->entry->get_path());
HXLINE( 499)		::hxd::res::Image_obj::setupTextureFlags(this->tex);
HXLINE( 500)		this->loadTexture();
HXLINE( 501)		return this->tex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,toTexture,return )

 ::h2d::Tile Image_obj::toTile(){
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_504_toTile)
HXLINE( 505)		this->getInfo();
HXLINE( 506)		 ::h3d::mat::Texture _hx_tmp = this->toTexture();
HXDLIN( 506)		return ::h2d::Tile_obj::fromTexture(_hx_tmp)->sub(( (Float)(0) ),( (Float)(0) ),( (Float)(this->inf->width) ),( (Float)(this->inf->height) ),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,toTile,return )

 ::h3d::mat::Filter Image_obj::DEFAULT_FILTER;

bool Image_obj::DEFAULT_ASYNC;

bool Image_obj::ENABLE_AUTO_WATCH;

HX_BEGIN_DEFAULT_FUNC(__default_setupTextureFlags,Image_obj)
void _hx_run( ::h3d::mat::Texture tex){
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_509___default_setupTextureFlags)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

::Dynamic Image_obj::setupTextureFlags;


::hx::ObjectPtr< Image_obj > Image_obj::__new( ::hxd::fs::FileEntry entry) {
	::hx::ObjectPtr< Image_obj > __this = new Image_obj();
	__this->__construct(entry);
	return __this;
}

::hx::ObjectPtr< Image_obj > Image_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry) {
	Image_obj *__this = (Image_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Image_obj), true, "hxd.res.Image"));
	*(void **)__this = Image_obj::_hx_vtable;
	__this->__construct(entry);
	return __this;
}

Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(tex,"tex");
	HX_MARK_MEMBER_NAME(inf,"inf");
	 ::hxd::res::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tex,"tex");
	HX_VISIT_MEMBER_NAME(inf,"inf");
	 ::hxd::res::Resource_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Image_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tex") ) { return ::hx::Val( tex ); }
		if (HX_FIELD_EQ(inName,"inf") ) { return ::hx::Val( inf ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toTile") ) { return ::hx::Val( toTile_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getSize") ) { return ::hx::Val( getSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInfo") ) { return ::hx::Val( getInfo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toBitmap") ) { return ::hx::Val( toBitmap_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFormat") ) { return ::hx::Val( getFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return ::hx::Val( getPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"toTexture") ) { return ::hx::Val( toTexture_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watchCallb") ) { return ::hx::Val( watchCallb_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadTexture") ) { return ::hx::Val( loadTexture_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPixelFormat") ) { return ::hx::Val( getPixelFormat_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Image_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_ASYNC") ) { outValue = ( DEFAULT_ASYNC ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_FILTER") ) { outValue = ( DEFAULT_FILTER ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENABLE_AUTO_WATCH") ) { outValue = ( ENABLE_AUTO_WATCH ); return true; }
		if (HX_FIELD_EQ(inName,"setupTextureFlags") ) { outValue = ( setupTextureFlags ); return true; }
	}
	return false;
}

::hx::Val Image_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tex") ) { tex=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inf") ) { inf=inValue.Cast<  ::hxd::res::ImageInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Image_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_ASYNC") ) { DEFAULT_ASYNC=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_FILTER") ) { DEFAULT_FILTER=ioValue.Cast<  ::h3d::mat::Filter >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENABLE_AUTO_WATCH") ) { ENABLE_AUTO_WATCH=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"setupTextureFlags") ) { setupTextureFlags=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tex",e7,5d,58,00));
	outFields->push(HX_("inf",e1,0c,50,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Image_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Image_obj,tex),HX_("tex",e7,5d,58,00)},
	{::hx::fsObject /*  ::hxd::res::ImageInfo */ ,(int)offsetof(Image_obj,inf),HX_("inf",e1,0c,50,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Image_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Filter */ ,(void *) &Image_obj::DEFAULT_FILTER,HX_("DEFAULT_FILTER",d6,76,de,18)},
	{::hx::fsBool,(void *) &Image_obj::DEFAULT_ASYNC,HX_("DEFAULT_ASYNC",be,d9,b3,99)},
	{::hx::fsBool,(void *) &Image_obj::ENABLE_AUTO_WATCH,HX_("ENABLE_AUTO_WATCH",9b,c5,f6,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Image_obj::setupTextureFlags,HX_("setupTextureFlags",89,1a,38,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Image_obj_sMemberFields[] = {
	HX_("tex",e7,5d,58,00),
	HX_("inf",e1,0c,50,00),
	HX_("getFormat",6d,18,e5,79),
	HX_("getPixelFormat",67,c5,b9,f6),
	HX_("getSize",77,50,d6,1e),
	HX_("getInfo",24,e8,3d,18),
	HX_("getPixels",63,78,00,09),
	HX_("toBitmap",ca,b7,4a,18),
	HX_("watchCallb",35,8d,25,b9),
	HX_("loadTexture",55,87,7e,6f),
	HX_("toTexture",a0,00,75,ce),
	HX_("toTile",49,36,b6,82),
	::String(null()) };

static void Image_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::DEFAULT_FILTER,"DEFAULT_FILTER");
	HX_MARK_MEMBER_NAME(Image_obj::DEFAULT_ASYNC,"DEFAULT_ASYNC");
	HX_MARK_MEMBER_NAME(Image_obj::ENABLE_AUTO_WATCH,"ENABLE_AUTO_WATCH");
	HX_MARK_MEMBER_NAME(Image_obj::setupTextureFlags,"setupTextureFlags");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Image_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::DEFAULT_FILTER,"DEFAULT_FILTER");
	HX_VISIT_MEMBER_NAME(Image_obj::DEFAULT_ASYNC,"DEFAULT_ASYNC");
	HX_VISIT_MEMBER_NAME(Image_obj::ENABLE_AUTO_WATCH,"ENABLE_AUTO_WATCH");
	HX_VISIT_MEMBER_NAME(Image_obj::setupTextureFlags,"setupTextureFlags");
};

#endif

::hx::Class Image_obj::__mClass;

static ::String Image_obj_sStaticFields[] = {
	HX_("DEFAULT_FILTER",d6,76,de,18),
	HX_("DEFAULT_ASYNC",be,d9,b3,99),
	HX_("ENABLE_AUTO_WATCH",9b,c5,f6,f6),
	HX_("setupTextureFlags",89,1a,38,2c),
	::String(null())
};

void Image_obj::__register()
{
	Image_obj _hx_dummy;
	Image_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.Image",13,18,bf,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Image_obj::__GetStatic;
	__mClass->mSetStaticField = &Image_obj::__SetStatic;
	__mClass->mMarkFunc = Image_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Image_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Image_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Image_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Image_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Image_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Image_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Image_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_54_boot)
HXDLIN(  54)		DEFAULT_FILTER = ::h3d::mat::Filter_obj::Linear_dyn();
            	}
{
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_59_boot)
HXDLIN(  59)		DEFAULT_ASYNC = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_83807ae13663e013_61_boot)
HXDLIN(  61)		ENABLE_AUTO_WATCH = true;
            	}
	setupTextureFlags = new __default_setupTextureFlags;

}

} // end namespace hxd
} // end namespace res
