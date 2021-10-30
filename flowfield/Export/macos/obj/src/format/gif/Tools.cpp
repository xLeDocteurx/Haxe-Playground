#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_format_gif_ApplicationExtension
#include <format/gif/ApplicationExtension.h>
#endif
#ifndef INCLUDED_format_gif_Block
#include <format/gif/Block.h>
#endif
#ifndef INCLUDED_format_gif_DisposalMethod
#include <format/gif/DisposalMethod.h>
#endif
#ifndef INCLUDED_format_gif_Extension
#include <format/gif/Extension.h>
#endif
#ifndef INCLUDED_format_gif_Tools
#include <format/gif/Tools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_17_framesCount,"format.gif.Tools","framesCount",0x4bdddaf5,"format.gif.Tools.framesCount","format/gif/Tools.hx",17,0xe57b9766)
HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_38_frame,"format.gif.Tools","frame",0x589e7ed9,"format.gif.Tools.frame","format/gif/Tools.hx",38,0xe57b9766)
HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_60_graphicControl,"format.gif.Tools","graphicControl",0x5a422169,"format.gif.Tools.graphicControl","format/gif/Tools.hx",60,0xe57b9766)
HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_91_extractBGRA,"format.gif.Tools","extractBGRA",0x1f5a7621,"format.gif.Tools.extractBGRA","format/gif/Tools.hx",91,0xe57b9766)
HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_142_extractRGBA,"format.gif.Tools","extractRGBA",0x29edd221,"format.gif.Tools.extractRGBA","format/gif/Tools.hx",142,0xe57b9766)
HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_193_extractFullBGRA,"format.gif.Tools","extractFullBGRA",0xce0449d0,"format.gif.Tools.extractFullBGRA","format/gif/Tools.hx",193,0xe57b9766)
HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_279_extractFullRGBA,"format.gif.Tools","extractFullRGBA",0xd897a5d0,"format.gif.Tools.extractFullRGBA","format/gif/Tools.hx",279,0xe57b9766)
HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_364_loopCount,"format.gif.Tools","loopCount",0xe4113077,"format.gif.Tools.loopCount","format/gif/Tools.hx",364,0xe57b9766)
HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_388_log2,"format.gif.Tools","log2",0xd9e11202,"format.gif.Tools.log2","format/gif/Tools.hx",388,0xe57b9766)
HX_LOCAL_STACK_FRAME(_hx_pos_a7bfee5aea2c53ef_385_boot,"format.gif.Tools","boot",0xd344f706,"format.gif.Tools.boot","format/gif/Tools.hx",385,0xe57b9766)
namespace format{
namespace gif{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x647eb152;
}

int Tools_obj::framesCount( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_17_framesCount)
HXLINE(  18)		int frames = 0;
HXLINE(  19)		{
HXLINE(  19)			 ::haxe::ds::_List::ListNode _g_head = ( ( ::haxe::ds::List)(data->__Field(HX_("blocks",86,2e,ea,a7),::hx::paccDynamic)) )->h;
HXDLIN(  19)			while(::hx::IsNotNull( _g_head )){
HXLINE(  19)				 ::format::gif::Block val = _g_head->item;
HXDLIN(  19)				_g_head = _g_head->next;
HXDLIN(  19)				 ::format::gif::Block block = val;
HXLINE(  21)				if ((block->_hx_getIndex() == 0)) {
HXLINE(  23)					 ::Dynamic _g = block->_hx_getObject(0);
HXLINE(  24)					frames = (frames + 1);
            				}
            			}
            		}
HXLINE(  28)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,framesCount,return )

 ::Dynamic Tools_obj::frame( ::Dynamic data,int frameIndex){
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_38_frame)
HXLINE(  39)		int counter = 0;
HXLINE(  40)		{
HXLINE(  40)			 ::haxe::ds::_List::ListNode _g_head = ( ( ::haxe::ds::List)(data->__Field(HX_("blocks",86,2e,ea,a7),::hx::paccDynamic)) )->h;
HXDLIN(  40)			while(::hx::IsNotNull( _g_head )){
HXLINE(  40)				 ::format::gif::Block val = _g_head->item;
HXDLIN(  40)				_g_head = _g_head->next;
HXDLIN(  40)				 ::format::gif::Block block = val;
HXLINE(  42)				if ((block->_hx_getIndex() == 0)) {
HXLINE(  44)					 ::Dynamic frame = block->_hx_getObject(0);
HXDLIN(  44)					{
HXLINE(  45)						if ((counter == frameIndex)) {
HXLINE(  45)							return frame;
            						}
HXLINE(  46)						counter = (counter + 1);
            					}
            				}
            			}
            		}
HXLINE(  50)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,frame,return )

 ::Dynamic Tools_obj::graphicControl( ::Dynamic data,int frameIndex){
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_60_graphicControl)
HXLINE(  61)		int counter = 0;
HXLINE(  62)		 ::Dynamic gce = null();
HXLINE(  63)		{
HXLINE(  63)			 ::haxe::ds::_List::ListNode _g_head = ( ( ::haxe::ds::List)(data->__Field(HX_("blocks",86,2e,ea,a7),::hx::paccDynamic)) )->h;
HXDLIN(  63)			while(::hx::IsNotNull( _g_head )){
HXLINE(  63)				 ::format::gif::Block val = _g_head->item;
HXDLIN(  63)				_g_head = _g_head->next;
HXDLIN(  63)				 ::format::gif::Block block = val;
HXLINE(  65)				switch((int)(block->_hx_getIndex())){
            					case (int)0: {
HXLINE(  67)						 ::Dynamic frame = block->_hx_getObject(0);
HXDLIN(  67)						{
HXLINE(  68)							if ((counter == frameIndex)) {
HXLINE(  68)								return gce;
            							}
HXLINE(  69)							gce = null();
HXLINE(  70)							counter = (counter + 1);
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  71)						 ::format::gif::Extension _g = block->_hx_getObject(0).StaticCast<  ::format::gif::Extension >();
HXDLIN(  71)						if ((_g->_hx_getIndex() == 0)) {
HXLINE(  71)							 ::Dynamic g = _g->_hx_getObject(0);
HXLINE(  72)							gce = g;
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE(  76)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,graphicControl,return )

 ::haxe::io::Bytes Tools_obj::extractBGRA( ::Dynamic data,int frameIndex){
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_91_extractBGRA)
HXLINE(  92)		 ::Dynamic gce = null();
HXLINE(  93)		int frameCaret = 0;
HXLINE(  94)		{
HXLINE(  94)			 ::haxe::ds::_List::ListNode _g_head = ( ( ::haxe::ds::List)(data->__Field(HX_("blocks",86,2e,ea,a7),::hx::paccDynamic)) )->h;
HXDLIN(  94)			while(::hx::IsNotNull( _g_head )){
HXLINE(  94)				 ::format::gif::Block val = _g_head->item;
HXDLIN(  94)				_g_head = _g_head->next;
HXDLIN(  94)				 ::format::gif::Block block = val;
HXLINE(  96)				switch((int)(block->_hx_getIndex())){
            					case (int)0: {
HXLINE( 105)						 ::Dynamic frame = block->_hx_getObject(0);
HXDLIN( 105)						{
HXLINE( 106)							if ((frameCaret == frameIndex)) {
HXLINE( 108)								 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(((( (int)(frame->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(frame->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )) * 4));
HXLINE( 109)								 ::haxe::io::Bytes ct;
HXDLIN( 109)								if (( (bool)(frame->__Field(HX_("localColorTable",f6,b0,1d,aa),::hx::paccDynamic)) )) {
HXLINE( 109)									ct = ( ( ::haxe::io::Bytes)(frame->__Field(HX_("colorTable",ab,cf,4f,2f),::hx::paccDynamic)) );
            								}
            								else {
HXLINE( 109)									ct = ( ( ::haxe::io::Bytes)(data->__Field(HX_("globalColorTable",ee,be,bd,88),::hx::paccDynamic)) );
            								}
HXLINE( 110)								if (::hx::IsNull( ct )) {
HXLINE( 110)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Frame does not have a color table!",46,71,33,72)));
            								}
HXLINE( 111)								int transparentIndex;
HXDLIN( 111)								bool transparentIndex1;
HXDLIN( 111)								if (::hx::IsNotNull( gce )) {
HXLINE( 111)									transparentIndex1 = ( (bool)(gce->__Field(HX_("hasTransparentColor",2b,5c,07,ad),::hx::paccDynamic)) );
            								}
            								else {
HXLINE( 111)									transparentIndex1 = false;
            								}
HXDLIN( 111)								if (transparentIndex1) {
HXLINE( 111)									transparentIndex = (( (int)(gce->__Field(HX_("transparentIndex",60,96,0f,2e),::hx::paccDynamic)) ) * 3);
            								}
            								else {
HXLINE( 111)									transparentIndex = -1;
            								}
HXLINE( 112)								int writeCaret = 0;
HXLINE( 113)								{
HXLINE( 113)									int _g = 0;
HXDLIN( 113)									int _g1 = ( ( ::haxe::io::Bytes)(frame->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) )->length;
HXDLIN( 113)									while((_g < _g1)){
HXLINE( 113)										_g = (_g + 1);
HXDLIN( 113)										int i = (_g - 1);
HXLINE( 115)										int index = (( (int)(( ( ::haxe::io::Bytes)(frame->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) )->b->__get(i)) ) * 3);
HXLINE( 116)										bytes->b[writeCaret] = ct->b->__get((index + 2));
HXLINE( 117)										bytes->b[(writeCaret + 1)] = ct->b->__get((index + 1));
HXLINE( 118)										bytes->b[(writeCaret + 2)] = ct->b->__get(index);
HXLINE( 119)										if ((transparentIndex == index)) {
HXLINE( 119)											bytes->b[(writeCaret + 3)] = ( (unsigned char)(0) );
            										}
            										else {
HXLINE( 120)											bytes->b[(writeCaret + 3)] = ( (unsigned char)(255) );
            										}
HXLINE( 122)										writeCaret = (writeCaret + 4);
            									}
            								}
HXLINE( 124)								return bytes;
            							}
HXLINE( 126)							frameCaret = (frameCaret + 1);
HXLINE( 127)							gce = null();
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  98)						 ::format::gif::Extension ext = block->_hx_getObject(0).StaticCast<  ::format::gif::Extension >();
HXLINE(  99)						if ((ext->_hx_getIndex() == 0)) {
HXLINE( 101)							 ::Dynamic g = ext->_hx_getObject(0);
HXLINE( 102)							gce = g;
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE( 131)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,extractBGRA,return )

 ::haxe::io::Bytes Tools_obj::extractRGBA( ::Dynamic data,int frameIndex){
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_142_extractRGBA)
HXLINE( 143)		 ::Dynamic gce = null();
HXLINE( 144)		int frameCaret = 0;
HXLINE( 145)		{
HXLINE( 145)			 ::haxe::ds::_List::ListNode _g_head = ( ( ::haxe::ds::List)(data->__Field(HX_("blocks",86,2e,ea,a7),::hx::paccDynamic)) )->h;
HXDLIN( 145)			while(::hx::IsNotNull( _g_head )){
HXLINE( 145)				 ::format::gif::Block val = _g_head->item;
HXDLIN( 145)				_g_head = _g_head->next;
HXDLIN( 145)				 ::format::gif::Block block = val;
HXLINE( 147)				switch((int)(block->_hx_getIndex())){
            					case (int)0: {
HXLINE( 156)						 ::Dynamic frame = block->_hx_getObject(0);
HXDLIN( 156)						{
HXLINE( 157)							if ((frameCaret == frameIndex)) {
HXLINE( 159)								 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(((( (int)(frame->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(frame->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )) * 4));
HXLINE( 160)								 ::haxe::io::Bytes ct;
HXDLIN( 160)								if (( (bool)(frame->__Field(HX_("localColorTable",f6,b0,1d,aa),::hx::paccDynamic)) )) {
HXLINE( 160)									ct = ( ( ::haxe::io::Bytes)(frame->__Field(HX_("colorTable",ab,cf,4f,2f),::hx::paccDynamic)) );
            								}
            								else {
HXLINE( 160)									ct = ( ( ::haxe::io::Bytes)(data->__Field(HX_("globalColorTable",ee,be,bd,88),::hx::paccDynamic)) );
            								}
HXLINE( 161)								if (::hx::IsNull( ct )) {
HXLINE( 161)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Frame does not have a color table!",46,71,33,72)));
            								}
HXLINE( 162)								int transparentIndex;
HXDLIN( 162)								bool transparentIndex1;
HXDLIN( 162)								if (::hx::IsNotNull( gce )) {
HXLINE( 162)									transparentIndex1 = ( (bool)(gce->__Field(HX_("hasTransparentColor",2b,5c,07,ad),::hx::paccDynamic)) );
            								}
            								else {
HXLINE( 162)									transparentIndex1 = false;
            								}
HXDLIN( 162)								if (transparentIndex1) {
HXLINE( 162)									transparentIndex = (( (int)(gce->__Field(HX_("transparentIndex",60,96,0f,2e),::hx::paccDynamic)) ) * 3);
            								}
            								else {
HXLINE( 162)									transparentIndex = -1;
            								}
HXLINE( 163)								int writeCaret = 0;
HXLINE( 164)								{
HXLINE( 164)									int _g = 0;
HXDLIN( 164)									int _g1 = ( ( ::haxe::io::Bytes)(frame->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) )->length;
HXDLIN( 164)									while((_g < _g1)){
HXLINE( 164)										_g = (_g + 1);
HXDLIN( 164)										int i = (_g - 1);
HXLINE( 166)										int index = (( (int)(( ( ::haxe::io::Bytes)(frame->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) )->b->__get(i)) ) * 3);
HXLINE( 167)										bytes->b[writeCaret] = ct->b->__get(index);
HXLINE( 168)										bytes->b[(writeCaret + 1)] = ct->b->__get((index + 1));
HXLINE( 169)										bytes->b[(writeCaret + 2)] = ct->b->__get((index + 2));
HXLINE( 170)										if ((transparentIndex == index)) {
HXLINE( 170)											bytes->b[(writeCaret + 3)] = ( (unsigned char)(0) );
            										}
            										else {
HXLINE( 171)											bytes->b[(writeCaret + 3)] = ( (unsigned char)(255) );
            										}
HXLINE( 173)										writeCaret = (writeCaret + 4);
            									}
            								}
HXLINE( 175)								return bytes;
            							}
HXLINE( 177)							frameCaret = (frameCaret + 1);
HXLINE( 178)							gce = null();
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 149)						 ::format::gif::Extension ext = block->_hx_getObject(0).StaticCast<  ::format::gif::Extension >();
HXLINE( 150)						if ((ext->_hx_getIndex() == 0)) {
HXLINE( 152)							 ::Dynamic g = ext->_hx_getObject(0);
HXLINE( 153)							gce = g;
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE( 182)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,extractRGBA,return )

 ::haxe::io::Bytes Tools_obj::extractFullBGRA( ::Dynamic data,int frameIndex){
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_193_extractFullBGRA)
HXLINE( 194)		 ::Dynamic gce = null();
HXLINE( 195)		int frameCaret = 0;
HXLINE( 197)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(((( (int)( ::Dynamic(data->__Field(HX_("logicalScreenDescriptor",e4,86,29,f9),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)( ::Dynamic(data->__Field(HX_("logicalScreenDescriptor",e4,86,29,f9),::hx::paccDynamic))->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )) * 4));
HXLINE( 199)		{
HXLINE( 199)			 ::haxe::ds::_List::ListNode _g_head = ( ( ::haxe::ds::List)(data->__Field(HX_("blocks",86,2e,ea,a7),::hx::paccDynamic)) )->h;
HXDLIN( 199)			while(::hx::IsNotNull( _g_head )){
HXLINE( 199)				 ::format::gif::Block val = _g_head->item;
HXDLIN( 199)				_g_head = _g_head->next;
HXDLIN( 199)				 ::format::gif::Block block = val;
HXLINE( 201)				switch((int)(block->_hx_getIndex())){
            					case (int)0: {
HXLINE( 210)						 ::Dynamic frame = block->_hx_getObject(0);
HXDLIN( 210)						{
HXLINE( 211)							 ::haxe::io::Bytes ct;
HXDLIN( 211)							if (( (bool)(frame->__Field(HX_("localColorTable",f6,b0,1d,aa),::hx::paccDynamic)) )) {
HXLINE( 211)								ct = ( ( ::haxe::io::Bytes)(frame->__Field(HX_("colorTable",ab,cf,4f,2f),::hx::paccDynamic)) );
            							}
            							else {
HXLINE( 211)								ct = ( ( ::haxe::io::Bytes)(data->__Field(HX_("globalColorTable",ee,be,bd,88),::hx::paccDynamic)) );
            							}
HXLINE( 212)							if (::hx::IsNull( ct )) {
HXLINE( 212)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Frame does not have a color table!",46,71,33,72)));
            							}
HXLINE( 213)							int transparentIndex;
HXDLIN( 213)							bool transparentIndex1;
HXDLIN( 213)							if (::hx::IsNotNull( gce )) {
HXLINE( 213)								transparentIndex1 = ( (bool)(gce->__Field(HX_("hasTransparentColor",2b,5c,07,ad),::hx::paccDynamic)) );
            							}
            							else {
HXLINE( 213)								transparentIndex1 = false;
            							}
HXDLIN( 213)							if (transparentIndex1) {
HXLINE( 213)								transparentIndex = (( (int)(gce->__Field(HX_("transparentIndex",60,96,0f,2e),::hx::paccDynamic)) ) * 3);
            							}
            							else {
HXLINE( 213)								transparentIndex = -1;
            							}
HXLINE( 214)							 ::haxe::io::Bytes pixels = ( ( ::haxe::io::Bytes)(frame->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) );
HXLINE( 215)							int x = 0;
HXLINE( 216)							int writeCaret = (( (int)(((( (int)(frame->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ) * ( (int)( ::Dynamic(data->__Field(HX_("logicalScreenDescriptor",e4,86,29,f9),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) )) + frame->__Field(HX_("x",78,00,00,00),::hx::paccDynamic))) ) * 4);
HXLINE( 217)							int lineSkip = (((( (int)( ::Dynamic(data->__Field(HX_("logicalScreenDescriptor",e4,86,29,f9),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) - ( (int)(frame->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) )) * 4) + 4);
HXLINE( 219)							 ::format::gif::DisposalMethod disposalMethod;
HXDLIN( 219)							bool disposalMethod1;
HXDLIN( 219)							if ((frameCaret != frameIndex)) {
HXLINE( 219)								disposalMethod1 = ::hx::IsNotNull( gce );
            							}
            							else {
HXLINE( 219)								disposalMethod1 = false;
            							}
HXDLIN( 219)							if (disposalMethod1) {
HXLINE( 219)								disposalMethod = gce->__Field(HX_("disposalMethod",32,1d,cc,29),::hx::paccDynamic);
            							}
            							else {
HXLINE( 219)								disposalMethod = ::format::gif::DisposalMethod_obj::NO_ACTION_dyn();
            							}
HXLINE( 221)							switch((int)(disposalMethod->_hx_getIndex())){
            								case (int)2: {
HXLINE( 226)									int _g = 0;
HXDLIN( 226)									int _g1 = pixels->length;
HXDLIN( 226)									while((_g < _g1)){
HXLINE( 226)										_g = (_g + 1);
HXDLIN( 226)										int i = (_g - 1);
HXLINE( 228)										bytes->b[writeCaret] = ( (unsigned char)(0) );
HXLINE( 229)										bytes->b[(writeCaret + 1)] = ( (unsigned char)(0) );
HXLINE( 230)										bytes->b[(writeCaret + 2)] = ( (unsigned char)(0) );
HXLINE( 231)										bytes->b[(writeCaret + 3)] = ( (unsigned char)(0) );
HXLINE( 233)										x = (x + 1);
HXDLIN( 233)										if (::hx::IsEq( x,frame->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic) )) {
HXLINE( 235)											x = 0;
HXLINE( 236)											writeCaret = (writeCaret + lineSkip);
            										}
            										else {
HXLINE( 238)											writeCaret = (writeCaret + 4);
            										}
            									}
            								}
            								break;
            								case (int)3: {
            								}
            								break;
            								default:{
HXLINE( 241)									int _g = 0;
HXDLIN( 241)									int _g1 = pixels->length;
HXDLIN( 241)									while((_g < _g1)){
HXLINE( 241)										_g = (_g + 1);
HXDLIN( 241)										int i = (_g - 1);
HXLINE( 243)										int index = (( (int)(pixels->b->__get(i)) ) * 3);
HXLINE( 244)										if ((transparentIndex != index)) {
HXLINE( 246)											bytes->b[writeCaret] = ct->b->__get((index + 2));
HXLINE( 247)											bytes->b[(writeCaret + 1)] = ct->b->__get((index + 1));
HXLINE( 248)											bytes->b[(writeCaret + 2)] = ct->b->__get(index);
HXLINE( 249)											bytes->b[(writeCaret + 3)] = ( (unsigned char)(255) );
            										}
HXLINE( 252)										x = (x + 1);
HXDLIN( 252)										if (::hx::IsEq( x,frame->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic) )) {
HXLINE( 254)											x = 0;
HXLINE( 255)											writeCaret = (writeCaret + lineSkip);
            										}
            										else {
HXLINE( 257)											writeCaret = (writeCaret + 4);
            										}
            									}
            								}
            							}
HXLINE( 261)							if ((frameCaret == frameIndex)) {
HXLINE( 261)								return bytes;
            							}
HXLINE( 262)							frameCaret = (frameCaret + 1);
HXLINE( 263)							gce = null();
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 203)						 ::format::gif::Extension ext = block->_hx_getObject(0).StaticCast<  ::format::gif::Extension >();
HXLINE( 204)						if ((ext->_hx_getIndex() == 0)) {
HXLINE( 206)							 ::Dynamic g = ext->_hx_getObject(0);
HXLINE( 207)							gce = g;
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE( 268)		return bytes;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,extractFullBGRA,return )

 ::haxe::io::Bytes Tools_obj::extractFullRGBA( ::Dynamic data,int frameIndex){
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_279_extractFullRGBA)
HXLINE( 280)		 ::Dynamic gce = null();
HXLINE( 281)		int frameCaret = 0;
HXLINE( 283)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(((( (int)( ::Dynamic(data->__Field(HX_("logicalScreenDescriptor",e4,86,29,f9),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)( ::Dynamic(data->__Field(HX_("logicalScreenDescriptor",e4,86,29,f9),::hx::paccDynamic))->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )) * 4));
HXLINE( 285)		{
HXLINE( 285)			 ::haxe::ds::_List::ListNode _g_head = ( ( ::haxe::ds::List)(data->__Field(HX_("blocks",86,2e,ea,a7),::hx::paccDynamic)) )->h;
HXDLIN( 285)			while(::hx::IsNotNull( _g_head )){
HXLINE( 285)				 ::format::gif::Block val = _g_head->item;
HXDLIN( 285)				_g_head = _g_head->next;
HXDLIN( 285)				 ::format::gif::Block block = val;
HXLINE( 287)				switch((int)(block->_hx_getIndex())){
            					case (int)0: {
HXLINE( 296)						 ::Dynamic frame = block->_hx_getObject(0);
HXDLIN( 296)						{
HXLINE( 297)							 ::haxe::io::Bytes ct;
HXDLIN( 297)							if (( (bool)(frame->__Field(HX_("localColorTable",f6,b0,1d,aa),::hx::paccDynamic)) )) {
HXLINE( 297)								ct = ( ( ::haxe::io::Bytes)(frame->__Field(HX_("colorTable",ab,cf,4f,2f),::hx::paccDynamic)) );
            							}
            							else {
HXLINE( 297)								ct = ( ( ::haxe::io::Bytes)(data->__Field(HX_("globalColorTable",ee,be,bd,88),::hx::paccDynamic)) );
            							}
HXLINE( 298)							if (::hx::IsNull( ct )) {
HXLINE( 298)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Frame does not have a color table!",46,71,33,72)));
            							}
HXLINE( 299)							int transparentIndex;
HXDLIN( 299)							bool transparentIndex1;
HXDLIN( 299)							if (::hx::IsNotNull( gce )) {
HXLINE( 299)								transparentIndex1 = ( (bool)(gce->__Field(HX_("hasTransparentColor",2b,5c,07,ad),::hx::paccDynamic)) );
            							}
            							else {
HXLINE( 299)								transparentIndex1 = false;
            							}
HXDLIN( 299)							if (transparentIndex1) {
HXLINE( 299)								transparentIndex = (( (int)(gce->__Field(HX_("transparentIndex",60,96,0f,2e),::hx::paccDynamic)) ) * 3);
            							}
            							else {
HXLINE( 299)								transparentIndex = -1;
            							}
HXLINE( 300)							 ::haxe::io::Bytes pixels = ( ( ::haxe::io::Bytes)(frame->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) );
HXLINE( 301)							int x = 0;
HXLINE( 302)							int writeCaret = (( (int)(((( (int)(frame->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ) * ( (int)( ::Dynamic(data->__Field(HX_("logicalScreenDescriptor",e4,86,29,f9),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) )) + frame->__Field(HX_("x",78,00,00,00),::hx::paccDynamic))) ) * 4);
HXLINE( 303)							int lineSkip = (((( (int)( ::Dynamic(data->__Field(HX_("logicalScreenDescriptor",e4,86,29,f9),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) - ( (int)(frame->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) )) * 4) + 4);
HXLINE( 305)							 ::format::gif::DisposalMethod disposalMethod;
HXDLIN( 305)							bool disposalMethod1;
HXDLIN( 305)							if ((frameCaret != frameIndex)) {
HXLINE( 305)								disposalMethod1 = ::hx::IsNotNull( gce );
            							}
            							else {
HXLINE( 305)								disposalMethod1 = false;
            							}
HXDLIN( 305)							if (disposalMethod1) {
HXLINE( 305)								disposalMethod = gce->__Field(HX_("disposalMethod",32,1d,cc,29),::hx::paccDynamic);
            							}
            							else {
HXLINE( 305)								disposalMethod = ::format::gif::DisposalMethod_obj::NO_ACTION_dyn();
            							}
HXLINE( 307)							switch((int)(disposalMethod->_hx_getIndex())){
            								case (int)2: {
HXLINE( 312)									int _g = 0;
HXDLIN( 312)									int _g1 = pixels->length;
HXDLIN( 312)									while((_g < _g1)){
HXLINE( 312)										_g = (_g + 1);
HXDLIN( 312)										int i = (_g - 1);
HXLINE( 314)										bytes->b[writeCaret] = ( (unsigned char)(0) );
HXLINE( 315)										bytes->b[(writeCaret + 1)] = ( (unsigned char)(0) );
HXLINE( 316)										bytes->b[(writeCaret + 2)] = ( (unsigned char)(0) );
HXLINE( 317)										bytes->b[(writeCaret + 3)] = ( (unsigned char)(0) );
HXLINE( 319)										x = (x + 1);
HXDLIN( 319)										if (::hx::IsEq( x,frame->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic) )) {
HXLINE( 321)											x = 0;
HXLINE( 322)											writeCaret = (writeCaret + lineSkip);
            										}
            										else {
HXLINE( 324)											writeCaret = (writeCaret + 4);
            										}
            									}
            								}
            								break;
            								case (int)3: {
            								}
            								break;
            								default:{
HXLINE( 327)									int _g = 0;
HXDLIN( 327)									int _g1 = pixels->length;
HXDLIN( 327)									while((_g < _g1)){
HXLINE( 327)										_g = (_g + 1);
HXDLIN( 327)										int i = (_g - 1);
HXLINE( 329)										int index = (( (int)(pixels->b->__get(i)) ) * 3);
HXLINE( 330)										if ((transparentIndex != index)) {
HXLINE( 332)											bytes->b[writeCaret] = ct->b->__get(index);
HXLINE( 333)											bytes->b[(writeCaret + 1)] = ct->b->__get((index + 1));
HXLINE( 334)											bytes->b[(writeCaret + 2)] = ct->b->__get((index + 2));
HXLINE( 335)											bytes->b[(writeCaret + 3)] = ( (unsigned char)(255) );
            										}
HXLINE( 338)										x = (x + 1);
HXDLIN( 338)										if (::hx::IsEq( x,frame->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic) )) {
HXLINE( 340)											x = 0;
HXLINE( 341)											writeCaret = (writeCaret + lineSkip);
            										}
            										else {
HXLINE( 343)											writeCaret = (writeCaret + 4);
            										}
            									}
            								}
            							}
HXLINE( 347)							if ((frameCaret == frameIndex)) {
HXLINE( 347)								return bytes;
            							}
HXLINE( 348)							frameCaret = (frameCaret + 1);
HXLINE( 349)							gce = null();
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 289)						 ::format::gif::Extension ext = block->_hx_getObject(0).StaticCast<  ::format::gif::Extension >();
HXLINE( 290)						if ((ext->_hx_getIndex() == 0)) {
HXLINE( 292)							 ::Dynamic g = ext->_hx_getObject(0);
HXLINE( 293)							gce = g;
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE( 354)		return bytes;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,extractFullRGBA,return )

int Tools_obj::loopCount( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_364_loopCount)
HXLINE( 365)		{
HXLINE( 365)			 ::haxe::ds::_List::ListNode _g_head = ( ( ::haxe::ds::List)(data->__Field(HX_("blocks",86,2e,ea,a7),::hx::paccDynamic)) )->h;
HXDLIN( 365)			while(::hx::IsNotNull( _g_head )){
HXLINE( 365)				 ::format::gif::Block val = _g_head->item;
HXDLIN( 365)				_g_head = _g_head->next;
HXDLIN( 365)				 ::format::gif::Block block = val;
HXLINE( 367)				if ((block->_hx_getIndex() == 1)) {
HXLINE( 369)					 ::format::gif::Extension _g = block->_hx_getObject(0).StaticCast<  ::format::gif::Extension >();
HXDLIN( 369)					if ((_g->_hx_getIndex() == 3)) {
HXLINE( 369)						 ::format::gif::ApplicationExtension _g1 = _g->_hx_getObject(0).StaticCast<  ::format::gif::ApplicationExtension >();
HXDLIN( 369)						if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 369)							int loops = _g1->_hx_getInt(0);
HXDLIN( 369)							return loops;
            						}
            					}
            				}
            			}
            		}
HXLINE( 373)		return 1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,loopCount,return )

Float Tools_obj::LN2;

Float Tools_obj::log2(Float val){
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_388_log2)
HXDLIN( 388)		return (::Math_obj::log(val) / ::format::gif::Tools_obj::LN2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,log2,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LN2") ) { outValue = ( LN2 ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"log2") ) { outValue = log2_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { outValue = frame_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopCount") ) { outValue = loopCount_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framesCount") ) { outValue = framesCount_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"extractBGRA") ) { outValue = extractBGRA_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"extractRGBA") ) { outValue = extractRGBA_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicControl") ) { outValue = graphicControl_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"extractFullBGRA") ) { outValue = extractFullBGRA_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"extractFullRGBA") ) { outValue = extractFullRGBA_dyn(); return true; }
	}
	return false;
}

bool Tools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LN2") ) { LN2=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Tools_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Tools_obj::LN2,HX_("LN2",70,ef,39,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Tools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tools_obj::LN2,"LN2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tools_obj::LN2,"LN2");
};

#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("framesCount",49,8b,4e,82),
	HX_("frame",2d,78,83,06),
	HX_("graphicControl",95,5d,e5,56),
	HX_("extractBGRA",75,26,cb,55),
	HX_("extractRGBA",75,82,5e,60),
	HX_("extractFullBGRA",24,b4,35,e0),
	HX_("extractFullRGBA",24,10,c9,ea),
	HX_("loopCount",cb,63,0f,78),
	HX_("LN2",70,ef,39,00),
	HX_("log2",2e,9f,b7,47),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.gif.Tools",1a,de,47,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &Tools_obj::__SetStatic;
	__mClass->mMarkFunc = Tools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Tools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a7bfee5aea2c53ef_385_boot)
HXDLIN( 385)		LN2 = ::Math_obj::log(( (Float)(2) ));
            	}
}

} // end namespace format
} // end namespace gif
