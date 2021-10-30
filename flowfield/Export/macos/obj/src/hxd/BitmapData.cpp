#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
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
#ifndef INCLUDED_hxd_BitmapInnerDataImpl
#include <hxd/BitmapInnerDataImpl.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_Pixels
#include <hxd/Pixels.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_46_new,"hxd.BitmapData","new",0x57dbfb25,"hxd.BitmapData.new","hxd/BitmapData.hx",46,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_74_clear,"hxd.BitmapData","clear",0xb2579792,"hxd.BitmapData.clear","hxd/BitmapData.hx",74,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_82_fill,"hxd.BitmapData","fill",0x8359101e,"hxd.BitmapData.fill","hxd/BitmapData.hx",82,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_165_draw,"hxd.BitmapData","draw",0x820d6d9f,"hxd.BitmapData.draw","hxd/BitmapData.hx",165,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_169_drawScaled,"hxd.BitmapData","drawScaled",0xf1ec4d99,"hxd.BitmapData.drawScaled","hxd/BitmapData.hx",169,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_227_line,"hxd.BitmapData","line",0x8750598f,"hxd.BitmapData.line","hxd/BitmapData.hx",227,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_468_dispose,"hxd.BitmapData","dispose",0xb921f1e4,"hxd.BitmapData.dispose","hxd/BitmapData.hx",468,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_473_clone,"hxd.BitmapData","clone",0xb25f3962,"hxd.BitmapData.clone","hxd/BitmapData.hx",473,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_476_sub,"hxd.BitmapData","sub",0x57dfd445,"hxd.BitmapData.sub","hxd/BitmapData.hx",476,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_509_lock,"hxd.BitmapData","lock",0x8754dd86,"hxd.BitmapData.lock","hxd/BitmapData.hx",509,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_521_unlock,"hxd.BitmapData","unlock",0xb831c11f,"hxd.BitmapData.unlock","hxd/BitmapData.hx",521,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_549_getPixel,"hxd.BitmapData","getPixel",0x3f68812b,"hxd.BitmapData.getPixel","hxd/BitmapData.hx",549,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_580_setPixel,"hxd.BitmapData","setPixel",0xedc5da9f,"hxd.BitmapData.setPixel","hxd/BitmapData.hx",580,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_590_get_width,"hxd.BitmapData","get_width",0x41141ee2,"hxd.BitmapData.get_width","hxd/BitmapData.hx",590,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_600_get_height,"hxd.BitmapData","get_height",0x66d65f8b,"hxd.BitmapData.get_height","hxd/BitmapData.hx",600,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_604_getPixels,"hxd.BitmapData","getPixels",0x3c0884e8,"hxd.BitmapData.getPixels","hxd/BitmapData.hx",604,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_623_setPixels,"hxd.BitmapData","setPixels",0x1f5970f4,"hxd.BitmapData.setPixels","hxd/BitmapData.hx",623,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_659_toNative,"hxd.BitmapData","toNative",0x66491c8d,"hxd.BitmapData.toNative","hxd/BitmapData.hx",659,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_675_toPNG,"hxd.BitmapData","toPNG",0x7e1317f3,"hxd.BitmapData.toPNG","hxd/BitmapData.hx",675,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_79_notImplemented,"hxd.BitmapData","notImplemented",0x6cddabca,"hxd.BitmapData.notImplemented","hxd/BitmapData.hx",79,0x8bf7c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_28eeaefc0fa92a14_663_fromNative,"hxd.BitmapData","fromNative",0xd963b67c,"hxd.BitmapData.fromNative","hxd/BitmapData.hx",663,0x8bf7c34a)
namespace hxd{

void BitmapData_obj::__construct(int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_46_new)
HXDLIN(  46)		bool _hx_tmp;
HXDLIN(  46)		if ((width == -101)) {
HXDLIN(  46)			_hx_tmp = (height == -102);
            		}
            		else {
HXDLIN(  46)			_hx_tmp = false;
            		}
HXDLIN(  46)		if (!(_hx_tmp)) {
HXLINE(  57)			this->data =  ::hxd::BitmapInnerDataImpl_obj::__alloc( HX_CTX );
HXLINE(  62)			::Array< int > this1 = ::Array_obj< int >::__new((width * height));
HXDLIN(  62)			this->data->pixels = this1;
HXLINE(  64)			this->data->width = width;
HXLINE(  65)			this->data->height = height;
            		}
            	}

Dynamic BitmapData_obj::__CreateEmpty() { return new BitmapData_obj; }

void *BitmapData_obj::_hx_vtable = 0;

Dynamic BitmapData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapData_obj > _hx_result = new BitmapData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BitmapData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1504c32d;
}

void BitmapData_obj::clear(int color){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_74_clear)
HXDLIN(  74)		this->fill(0,0,this->data->width,this->data->height,color);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,clear,(void))

void BitmapData_obj::fill(int x,int y,int width,int height,int color){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_82_fill)
HXLINE(  94)		if ((x < 0)) {
HXLINE(  95)			width = (width + x);
HXLINE(  96)			x = 0;
            		}
HXLINE(  98)		if ((y < 0)) {
HXLINE(  99)			height = (height + y);
HXLINE( 100)			y = 0;
            		}
HXLINE( 102)		if (((x + width) > this->data->width)) {
HXLINE( 103)			width = (this->data->width - x);
            		}
HXLINE( 104)		if (((y + height) > this->data->height)) {
HXLINE( 105)			height = (this->data->height - y);
            		}
HXLINE( 106)		{
HXLINE( 106)			int _g = 0;
HXDLIN( 106)			int _g1 = height;
HXDLIN( 106)			while((_g < _g1)){
HXLINE( 106)				_g = (_g + 1);
HXDLIN( 106)				int dy = (_g - 1);
HXLINE( 107)				int p = (x + ((y + dy) * this->data->width));
HXLINE( 108)				{
HXLINE( 108)					int _g1 = 0;
HXDLIN( 108)					int _g2 = width;
HXDLIN( 108)					while((_g1 < _g2)){
HXLINE( 108)						_g1 = (_g1 + 1);
HXDLIN( 108)						int dx = (_g1 - 1);
HXLINE( 109)						{
HXLINE( 109)							p = (p + 1);
HXDLIN( 109)							this->data->pixels->__unsafe_set((p - 1),color);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,fill,(void))

void BitmapData_obj::draw(int x,int y, ::hxd::BitmapData src,int srcX,int srcY,int width,int height, ::h2d::BlendMode blendMode){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_165_draw)
HXDLIN( 165)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            	}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,draw,(void))

void BitmapData_obj::drawScaled(int x,int y,int width,int height, ::hxd::BitmapData src,int srcX,int srcY,int srcWidth,int srcHeight, ::h2d::BlendMode blendMode,::hx::Null< bool >  __o_smooth){
            		bool smooth = __o_smooth.Default(true);
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_169_drawScaled)
HXLINE( 170)		if (::hx::IsNull( blendMode )) {
HXLINE( 170)			blendMode = ::h2d::BlendMode_obj::Alpha_dyn();
            		}
HXLINE( 220)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            	}


HX_DEFINE_DYNAMIC_FUNC11(BitmapData_obj,drawScaled,(void))

void BitmapData_obj::line(int x0,int y0,int x1,int y1,int color){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_227_line)
HXLINE( 228)		int dx = (x1 - x0);
HXLINE( 229)		int dy = (y1 - y0);
HXLINE( 230)		if ((dx == 0)) {
HXLINE( 231)			if ((y1 < y0)) {
HXLINE( 232)				int tmp = y0;
HXLINE( 233)				y0 = y1;
HXLINE( 234)				y1 = tmp;
            			}
HXLINE( 236)			if ((y0 < 0)) {
HXLINE( 236)				y0 = 0;
            			}
HXLINE( 237)			if ((y1 > (this->data->height - 1))) {
HXLINE( 237)				y1 = (this->data->height - 1);
            			}
HXLINE( 238)			{
HXLINE( 238)				int _g = y0;
HXDLIN( 238)				int _g1 = (y1 + 1);
HXDLIN( 238)				while((_g < _g1)){
HXLINE( 238)					_g = (_g + 1);
HXDLIN( 238)					int y = (_g - 1);
HXLINE( 239)					this->setPixel(x0,y,color);
            				}
            			}
            		}
            		else {
HXLINE( 240)			if ((dy == 0)) {
HXLINE( 241)				if ((x1 < x0)) {
HXLINE( 242)					int tmp = x0;
HXLINE( 243)					x0 = x1;
HXLINE( 244)					x1 = tmp;
            				}
HXLINE( 246)				if ((x0 < 0)) {
HXLINE( 246)					x0 = 0;
            				}
HXLINE( 247)				if ((x1 > (this->data->width - 1))) {
HXLINE( 247)					x1 = (this->data->width - 1);
            				}
HXLINE( 248)				{
HXLINE( 248)					int _g = x0;
HXDLIN( 248)					int _g1 = (x1 + 1);
HXDLIN( 248)					while((_g < _g1)){
HXLINE( 248)						_g = (_g + 1);
HXDLIN( 248)						int x = (_g - 1);
HXLINE( 249)						this->setPixel(x,y0,color);
            					}
            				}
            			}
            			else {
HXLINE( 251)				int sx;
HXLINE( 252)				int sy;
HXLINE( 253)				int clip_x0;
HXLINE( 254)				int clip_y0;
HXLINE( 255)				int clip_x1;
HXLINE( 256)				int clip_y1;
HXLINE( 258)				if ((x0 < x1)) {
HXLINE( 259)					bool _hx_tmp;
HXDLIN( 259)					if ((x0 < this->data->width)) {
HXLINE( 259)						_hx_tmp = (x1 < 0);
            					}
            					else {
HXLINE( 259)						_hx_tmp = true;
            					}
HXDLIN( 259)					if (_hx_tmp) {
HXLINE( 259)						return;
            					}
HXLINE( 260)					sx = 1;
HXLINE( 261)					clip_x0 = 0;
HXLINE( 262)					clip_x1 = (this->data->width - 1);
            				}
            				else {
HXLINE( 264)					bool _hx_tmp;
HXDLIN( 264)					if ((x1 < this->data->width)) {
HXLINE( 264)						_hx_tmp = (x0 < 0);
            					}
            					else {
HXLINE( 264)						_hx_tmp = true;
            					}
HXDLIN( 264)					if (_hx_tmp) {
HXLINE( 264)						return;
            					}
HXLINE( 265)					sx = -1;
HXLINE( 266)					x1 = -(x1);
HXLINE( 267)					x0 = -(x0);
HXLINE( 268)					clip_x0 = (1 - this->data->width);
HXLINE( 269)					clip_x1 = 0;
            				}
HXLINE( 272)				if ((y0 < y1)) {
HXLINE( 273)					bool _hx_tmp;
HXDLIN( 273)					if ((y0 < this->data->height)) {
HXLINE( 273)						_hx_tmp = (y1 < 0);
            					}
            					else {
HXLINE( 273)						_hx_tmp = true;
            					}
HXDLIN( 273)					if (_hx_tmp) {
HXLINE( 273)						return;
            					}
HXLINE( 274)					sy = 1;
HXLINE( 275)					clip_y0 = 0;
HXLINE( 276)					clip_y1 = (this->data->height - 1);
            				}
            				else {
HXLINE( 278)					bool _hx_tmp;
HXDLIN( 278)					if ((y1 < this->data->width)) {
HXLINE( 278)						_hx_tmp = (y0 < 0);
            					}
            					else {
HXLINE( 278)						_hx_tmp = true;
            					}
HXDLIN( 278)					if (_hx_tmp) {
HXLINE( 278)						return;
            					}
HXLINE( 279)					sy = -1;
HXLINE( 280)					y1 = -(y1);
HXLINE( 281)					y0 = -(y0);
HXLINE( 282)					clip_y0 = (1 - this->data->height);
HXLINE( 283)					clip_y1 = 0;
            				}
HXLINE( 286)				dx = (x1 - x0);
HXLINE( 287)				dy = (y1 - y0);
HXLINE( 289)				int d2x = (dx << 1);
HXLINE( 290)				int d2y = (dy << 1);
HXLINE( 292)				int x = x0;
HXLINE( 293)				int y = y0;
HXLINE( 295)				if ((dx >= dy)) {
HXLINE( 296)					int delta = (d2y - dx);
HXLINE( 297)					bool tracing_can_start = false;
HXLINE( 300)					if ((y0 < clip_y0)) {
HXLINE( 302)						Float temp = ( (Float)(d2x) );
HXLINE( 303)						temp = ((temp * ( (Float)((clip_y0 - y0)) )) - ( (Float)(dx) ));
HXLINE( 304)						Float xinc = (temp / ( (Float)(d2y) ));
HXLINE( 305)						x = (x + ::Std_obj::_hx_int(xinc));
HXLINE( 307)						if ((x > clip_x1)) {
HXLINE( 307)							return;
            						}
HXLINE( 309)						if ((x >= clip_x0)) {
HXLINE( 310)							temp = (temp - (xinc * ( (Float)(d2y) )));
HXLINE( 311)							delta = (delta - (::Std_obj::_hx_int(temp) + dx));
HXLINE( 312)							y = clip_y0;
HXLINE( 314)							if ((temp > 0)) {
HXLINE( 315)								x = (x + 1);
HXLINE( 316)								delta = (delta + d2y);
            							}
HXLINE( 318)							tracing_can_start = true;
            						}
            					}
HXLINE( 322)					bool _hx_tmp;
HXDLIN( 322)					if (!(tracing_can_start)) {
HXLINE( 322)						_hx_tmp = (x0 < clip_x0);
            					}
            					else {
HXLINE( 322)						_hx_tmp = false;
            					}
HXDLIN( 322)					if (_hx_tmp) {
HXLINE( 324)						Float temp = ( (Float)(d2y) );
HXLINE( 325)						temp = (temp * ( (Float)((clip_x0 - x0)) ));
HXLINE( 326)						Float yinc = (temp / ( (Float)(d2x) ));
HXLINE( 327)						y = (y + ::Std_obj::_hx_int(yinc));
HXLINE( 328)						temp = ::hx::Mod(temp,d2x);
HXLINE( 329)						bool _hx_tmp;
HXDLIN( 329)						if ((y <= clip_y1)) {
HXLINE( 329)							if ((y == clip_y1)) {
HXLINE( 329)								_hx_tmp = (temp > dx);
            							}
            							else {
HXLINE( 329)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 329)							_hx_tmp = true;
            						}
HXDLIN( 329)						if (_hx_tmp) {
HXLINE( 329)							return;
            						}
HXLINE( 331)						x = clip_x0;
HXLINE( 332)						delta = (delta + ::Std_obj::_hx_int(temp));
HXLINE( 334)						if ((temp >= dx)) {
HXLINE( 335)							y = (y + 1);
HXLINE( 336)							delta = (delta - d2x);
            						}
            					}
HXLINE( 342)					int xend = x1;
HXLINE( 343)					if ((y1 > clip_y1)) {
HXLINE( 345)						Float temp = ( (Float)(d2x) );
HXLINE( 346)						temp = ((temp * ( (Float)((clip_y1 - y1)) )) + dx);
HXLINE( 347)						Float xinc = (temp / ( (Float)(d2y) ));
HXLINE( 348)						xend = (xend + ::Std_obj::_hx_int(xinc));
HXLINE( 350)						if (((temp - (xinc * ( (Float)(d2y) ))) == 0)) {
HXLINE( 351)							xend = (xend - 1);
            						}
            					}
HXLINE( 353)					if ((xend > clip_x1)) {
HXLINE( 353)						xend = (clip_x1 + 1);
            					}
            					else {
HXLINE( 353)						xend = (xend + 1);
            					}
HXLINE( 356)					if ((sx == -1)) {
HXLINE( 357)						x = -(x);
HXLINE( 358)						xend = -(xend);
            					}
HXLINE( 360)					if ((sy == -1)) {
HXLINE( 361)						y = -(y);
            					}
HXLINE( 364)					d2x = (d2x - d2y);
HXLINE( 367)					while((x != xend)){
HXLINE( 368)						this->setPixel(x,y,color);
HXLINE( 370)						if ((delta >= 0)) {
HXLINE( 371)							y = (y + sy);
HXLINE( 372)							delta = (delta - d2x);
            						}
            						else {
HXLINE( 374)							delta = (delta + d2y);
            						}
HXLINE( 376)						x = (x + sx);
            					}
            				}
            				else {
HXLINE( 379)					int delta = (d2x - dy);
HXLINE( 380)					bool tracing_can_start = false;
HXLINE( 383)					if ((x0 < clip_x0)) {
HXLINE( 384)						Float temp = ( (Float)(d2y) );
HXLINE( 385)						temp = ((temp * ( (Float)((clip_x0 - x0)) )) - ( (Float)(dy) ));
HXLINE( 386)						Float yinc = (temp / ( (Float)(d2x) ));
HXLINE( 387)						y = (y + ::Std_obj::_hx_int(yinc));
HXLINE( 389)						if ((y > clip_y1)) {
HXLINE( 389)							return;
            						}
HXLINE( 391)						if ((y >= clip_y0)) {
HXLINE( 392)							temp = (temp - (yinc * ( (Float)(d2x) )));
HXLINE( 393)							delta = (delta - (::Std_obj::_hx_int(temp) + dy));
HXLINE( 394)							x = clip_x0;
HXLINE( 396)							if ((temp > 0)) {
HXLINE( 397)								y = (y + 1);
HXLINE( 398)								delta = (delta + d2x);
            							}
HXLINE( 400)							tracing_can_start = true;
            						}
            					}
HXLINE( 404)					bool _hx_tmp;
HXDLIN( 404)					if (!(tracing_can_start)) {
HXLINE( 404)						_hx_tmp = (y0 < clip_y0);
            					}
            					else {
HXLINE( 404)						_hx_tmp = false;
            					}
HXDLIN( 404)					if (_hx_tmp) {
HXLINE( 405)						Float temp = ( (Float)(d2x) );
HXLINE( 406)						temp = (temp * ( (Float)((clip_y0 - y0)) ));
HXLINE( 407)						Float xinc = (temp / ( (Float)(d2y) ));
HXLINE( 408)						x = (x + ::Std_obj::_hx_int(xinc));
HXLINE( 409)						temp = ::hx::Mod(temp,d2y);
HXLINE( 410)						bool _hx_tmp;
HXDLIN( 410)						if ((x <= clip_x1)) {
HXLINE( 410)							if ((x == clip_x1)) {
HXLINE( 410)								_hx_tmp = (temp > dy);
            							}
            							else {
HXLINE( 410)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 410)							_hx_tmp = true;
            						}
HXDLIN( 410)						if (_hx_tmp) {
HXLINE( 410)							return;
            						}
HXLINE( 412)						y = clip_y0;
HXLINE( 413)						delta = (delta + ::Std_obj::_hx_int(temp));
HXLINE( 415)						if ((temp >= dy)) {
HXLINE( 416)							x = (x + 1);
HXLINE( 417)							delta = (delta - d2y);
            						}
            					}
HXLINE( 422)					int yend = y1;
HXLINE( 423)					if ((x1 > clip_x1)) {
HXLINE( 424)						Float temp = ( (Float)(d2y) );
HXLINE( 425)						temp = ((temp * ( (Float)((clip_x1 - x1)) )) + dy);
HXLINE( 426)						Float yinc = (temp / ( (Float)(d2x) ));
HXLINE( 427)						yend = (yend + ::Std_obj::_hx_int(yinc));
HXLINE( 429)						if (((temp - (yinc * ( (Float)(d2x) ))) == 0)) {
HXLINE( 430)							yend = (yend - 1);
            						}
            					}
HXLINE( 432)					if ((yend > clip_y1)) {
HXLINE( 432)						yend = (clip_y1 + 1);
            					}
            					else {
HXLINE( 432)						yend = (yend + 1);
            					}
HXLINE( 435)					if ((sx == -1)) {
HXLINE( 436)						x = -(x);
            					}
HXLINE( 438)					if ((sy == -1)) {
HXLINE( 439)						y = -(y);
HXLINE( 440)						yend = -(yend);
            					}
HXLINE( 443)					d2y = (d2y - d2x);
HXLINE( 446)					while((y != yend)){
HXLINE( 447)						this->setPixel(x,y,color);
HXLINE( 449)						if ((delta >= 0)) {
HXLINE( 450)							x = (x + sx);
HXLINE( 451)							delta = (delta - d2y);
            						}
            						else {
HXLINE( 453)							delta = (delta + d2x);
            						}
HXLINE( 455)						y = (y + sy);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,line,(void))

void BitmapData_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_468_dispose)
HXDLIN( 468)		this->data = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

 ::hxd::BitmapData BitmapData_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_473_clone)
HXDLIN( 473)		return this->sub(0,0,this->data->width,this->data->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

 ::hxd::BitmapData BitmapData_obj::sub(int x,int y,int w,int h){
            	HX_GC_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_476_sub)
HXLINE( 489)		bool _hx_tmp;
HXDLIN( 489)		bool _hx_tmp1;
HXDLIN( 489)		bool _hx_tmp2;
HXDLIN( 489)		bool _hx_tmp3;
HXDLIN( 489)		bool _hx_tmp4;
HXDLIN( 489)		if ((x >= 0)) {
HXLINE( 489)			_hx_tmp4 = (y < 0);
            		}
            		else {
HXLINE( 489)			_hx_tmp4 = true;
            		}
HXDLIN( 489)		if (!(_hx_tmp4)) {
HXLINE( 489)			_hx_tmp3 = (w < 0);
            		}
            		else {
HXLINE( 489)			_hx_tmp3 = true;
            		}
HXDLIN( 489)		if (!(_hx_tmp3)) {
HXLINE( 489)			_hx_tmp2 = (h < 0);
            		}
            		else {
HXLINE( 489)			_hx_tmp2 = true;
            		}
HXDLIN( 489)		if (!(_hx_tmp2)) {
HXLINE( 489)			_hx_tmp1 = ((x + w) > this->data->width);
            		}
            		else {
HXLINE( 489)			_hx_tmp1 = true;
            		}
HXDLIN( 489)		if (!(_hx_tmp1)) {
HXLINE( 489)			_hx_tmp = ((y + h) > this->data->height);
            		}
            		else {
HXLINE( 489)			_hx_tmp = true;
            		}
HXDLIN( 489)		if (_hx_tmp) {
HXLINE( 489)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Outside bounds",30,84,a9,11)));
            		}
HXLINE( 490)		 ::hxd::BitmapInnerDataImpl b =  ::hxd::BitmapInnerDataImpl_obj::__alloc( HX_CTX );
HXLINE( 491)		b->width = w;
HXLINE( 492)		b->height = h;
HXLINE( 498)		::Array< int > this1 = ::Array_obj< int >::__new((w * h));
HXDLIN( 498)		b->pixels = this1;
HXLINE( 499)		{
HXLINE( 499)			int _g = 0;
HXDLIN( 499)			int _g1 = h;
HXDLIN( 499)			while((_g < _g1)){
HXLINE( 499)				_g = (_g + 1);
HXDLIN( 499)				int dy = (_g - 1);
HXLINE( 500)				b->pixels->blit((dy * w),this->data->pixels,(x + ((y + dy) * this->data->width)),w);
            			}
            		}
HXLINE( 502)		return ::hxd::BitmapData_obj::fromNative(b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,sub,return )

void BitmapData_obj::lock(){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_509_lock)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

void BitmapData_obj::unlock(){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_521_unlock)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,unlock,(void))

int BitmapData_obj::getPixel(int x,int y){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_549_getPixel)
HXDLIN( 549)		bool _hx_tmp;
HXDLIN( 549)		bool _hx_tmp1;
HXDLIN( 549)		bool _hx_tmp2;
HXDLIN( 549)		if ((x >= 0)) {
HXDLIN( 549)			_hx_tmp2 = (y >= 0);
            		}
            		else {
HXDLIN( 549)			_hx_tmp2 = false;
            		}
HXDLIN( 549)		if (_hx_tmp2) {
HXDLIN( 549)			_hx_tmp1 = (x < this->data->width);
            		}
            		else {
HXDLIN( 549)			_hx_tmp1 = false;
            		}
HXDLIN( 549)		if (_hx_tmp1) {
HXDLIN( 549)			_hx_tmp = (y < this->data->height);
            		}
            		else {
HXDLIN( 549)			_hx_tmp = false;
            		}
HXDLIN( 549)		if (_hx_tmp) {
HXDLIN( 549)			return ( (int)(_hx_array_unsafe_get(this->data->pixels,(x + (y * this->data->width)))) );
            		}
            		else {
HXDLIN( 549)			return 0;
            		}
HXDLIN( 549)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

void BitmapData_obj::setPixel(int x,int y,int c){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_580_setPixel)
HXDLIN( 580)		bool _hx_tmp;
HXDLIN( 580)		bool _hx_tmp1;
HXDLIN( 580)		bool _hx_tmp2;
HXDLIN( 580)		if ((x >= 0)) {
HXDLIN( 580)			_hx_tmp2 = (y >= 0);
            		}
            		else {
HXDLIN( 580)			_hx_tmp2 = false;
            		}
HXDLIN( 580)		if (_hx_tmp2) {
HXDLIN( 580)			_hx_tmp1 = (x < this->data->width);
            		}
            		else {
HXDLIN( 580)			_hx_tmp1 = false;
            		}
HXDLIN( 580)		if (_hx_tmp1) {
HXDLIN( 580)			_hx_tmp = (y < this->data->height);
            		}
            		else {
HXDLIN( 580)			_hx_tmp = false;
            		}
HXDLIN( 580)		if (_hx_tmp) {
HXDLIN( 580)			this->data->pixels->__unsafe_set((x + (y * this->data->width)),c);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

int BitmapData_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_590_get_width)
HXDLIN( 590)		return this->data->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_width,return )

int BitmapData_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_600_get_height)
HXDLIN( 600)		return this->data->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_height,return )

 ::hxd::Pixels BitmapData_obj::getPixels(){
            	HX_GC_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_604_getPixels)
HXLINE( 616)		 ::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc(((this->data->width * this->data->height) * 4));
HXLINE( 617)		{
HXLINE( 617)			int _g = 0;
HXDLIN( 617)			int _g1 = (this->data->width * this->data->height);
HXDLIN( 617)			while((_g < _g1)){
HXLINE( 617)				_g = (_g + 1);
HXDLIN( 617)				int i = (_g - 1);
HXLINE( 618)				{
HXLINE( 618)					int pos = (i << 2);
HXDLIN( 618)					int v = ( (int)(_hx_array_unsafe_get(this->data->pixels,i)) );
HXDLIN( 618)					out->b[pos] = ( (unsigned char)((v & 255)) );
HXDLIN( 618)					out->b[(pos + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 618)					out->b[(pos + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 618)					out->b[(pos + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            				}
            			}
            		}
HXLINE( 619)		return  ::hxd::Pixels_obj::__alloc( HX_CTX ,this->data->width,this->data->height,out,::hxd::PixelFormat_obj::BGRA_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,getPixels,return )

void BitmapData_obj::setPixels( ::hxd::Pixels pixels){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_623_setPixels)
HXLINE( 624)		bool _hx_tmp;
HXDLIN( 624)		if ((pixels->width == this->data->width)) {
HXLINE( 624)			_hx_tmp = (pixels->height != this->data->height);
            		}
            		else {
HXLINE( 624)			_hx_tmp = true;
            		}
HXDLIN( 624)		if (_hx_tmp) {
HXLINE( 625)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid pixels size",cb,3b,d4,48)));
            		}
HXLINE( 626)		pixels->setFlip(false);
HXLINE( 646)		pixels->convert(::hxd::PixelFormat_obj::BGRA_dyn());
HXLINE( 647)		 ::haxe::io::Bytes src = pixels->bytes;
HXLINE( 648)		{
HXLINE( 648)			int _g = 0;
HXDLIN( 648)			int _g1 = (this->data->width * this->data->height);
HXDLIN( 648)			while((_g < _g1)){
HXLINE( 648)				_g = (_g + 1);
HXDLIN( 648)				int i = (_g - 1);
HXLINE( 649)				{
HXLINE( 649)					int pos = (i << 2);
HXDLIN( 649)					this->data->pixels->__unsafe_set(i,(((( (int)(src->b->__get(pos)) ) | (( (int)(src->b->__get((pos + 1))) ) << 8)) | (( (int)(src->b->__get((pos + 2))) ) << 16)) | (( (int)(src->b->__get((pos + 3))) ) << 24)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,setPixels,(void))

 ::hxd::BitmapInnerDataImpl BitmapData_obj::toNative(){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_659_toNative)
HXDLIN( 659)		return this->data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,toNative,return )

 ::haxe::io::Bytes BitmapData_obj::toPNG(){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_675_toPNG)
HXLINE( 676)		 ::hxd::Pixels pixels = this->getPixels();
HXLINE( 677)		 ::haxe::io::Bytes png = pixels->toPNG(null());
HXLINE( 678)		pixels->dispose();
HXLINE( 679)		return png;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,toPNG,return )

void BitmapData_obj::notImplemented(){
            	HX_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_79_notImplemented)
HXDLIN(  79)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,notImplemented,(void))

 ::hxd::BitmapData BitmapData_obj::fromNative( ::hxd::BitmapInnerDataImpl data){
            	HX_GC_STACKFRAME(&_hx_pos_28eeaefc0fa92a14_663_fromNative)
HXLINE( 664)		 ::hxd::BitmapData b =  ::hxd::BitmapData_obj::__alloc( HX_CTX ,-101,-102);
HXLINE( 670)		b->data = data;
HXLINE( 672)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,fromNative,return )


::hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height) {
	::hx::ObjectPtr< BitmapData_obj > __this = new BitmapData_obj();
	__this->__construct(width,height);
	return __this;
}

::hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height) {
	BitmapData_obj *__this = (BitmapData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapData_obj), true, "hxd.BitmapData"));
	*(void **)__this = BitmapData_obj::_hx_vtable;
	__this->__construct(width,height);
	return __this;
}

BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val BitmapData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line_dyn() ); }
		if (HX_FIELD_EQ(inName,"lock") ) { return ::hx::Val( lock_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"toPNG") ) { return ::hx::Val( toPNG_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return ::hx::Val( unlock_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getPixel") ) { return ::hx::Val( getPixel_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return ::hx::Val( setPixel_dyn() ); }
		if (HX_FIELD_EQ(inName,"toNative") ) { return ::hx::Val( toNative_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return ::hx::Val( getPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return ::hx::Val( setPixels_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawScaled") ) { return ::hx::Val( drawScaled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromNative") ) { outValue = fromNative_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notImplemented") ) { outValue = notImplemented_dyn(); return true; }
	}
	return false;
}

::hx::Val BitmapData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::hxd::BitmapInnerDataImpl >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapData_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::BitmapInnerDataImpl */ ,(int)offsetof(BitmapData_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitmapData_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapData_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("clear",8d,71,5b,48),
	HX_("fill",83,ce,bb,43),
	HX_("draw",04,2c,70,42),
	HX_("drawScaled",be,65,e9,7d),
	HX_("line",f4,17,b3,47),
	HX_("dispose",9f,80,4c,bb),
	HX_("clone",5d,13,63,48),
	HX_("sub",80,a9,57,00),
	HX_("lock",eb,9b,b7,47),
	HX_("unlock",c4,a2,8c,65),
	HX_("getPixel",10,d6,7a,22),
	HX_("setPixel",84,2f,d8,d0),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("getPixels",63,78,00,09),
	HX_("setPixels",6f,64,51,ec),
	HX_("toNative",72,71,5b,49),
	HX_("toPNG",ee,f1,16,14),
	::String(null()) };

::hx::Class BitmapData_obj::__mClass;

static ::String BitmapData_obj_sStaticFields[] = {
	HX_("notImplemented",6f,3a,1a,27),
	HX_("fromNative",a1,ce,60,65),
	::String(null())
};

void BitmapData_obj::__register()
{
	BitmapData_obj _hx_dummy;
	BitmapData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.BitmapData",b3,84,d4,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BitmapData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
