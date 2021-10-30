#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_format_png_Chunk
#include <format/png/Chunk.h>
#endif
#ifndef INCLUDED_format_png_Color
#include <format/png/Color.h>
#endif
#ifndef INCLUDED_format_png_Tools
#include <format/png/Tools.h>
#endif
#ifndef INCLUDED_format_tools_Deflate
#include <format/tools/Deflate.h>
#endif
#ifndef INCLUDED_format_tools_Inflate
#include <format/tools/Inflate.h>
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
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_35_getHeader,"format.png.Tools","getHeader",0xf1b59214,"format.png.Tools.getHeader","format/png/Tools.hx",35,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_47_getPalette,"format.png.Tools","getPalette",0x96858014,"format.png.Tools.getPalette","format/png/Tools.hx",47,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_56_filter,"format.png.Tools","filter",0xb708d3c7,"format.png.Tools.filter","format/png/Tools.hx",56,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_69_reverseBytes,"format.png.Tools","reverseBytes",0x2d518d38,"format.png.Tools.reverseBytes","format/png/Tools.hx",69,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_653_buildGrey,"format.png.Tools","buildGrey",0x5d0708fe,"format.png.Tools.buildGrey","format/png/Tools.hx",653,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_672_buildIndexed,"format.png.Tools","buildIndexed",0x4c6c33b2,"format.png.Tools.buildIndexed","format/png/Tools.hx",672,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_691_buildRGB,"format.png.Tools","buildRGB",0x68ea624e,"format.png.Tools.buildRGB","format/png/Tools.hx",691,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_714_build32ARGB,"format.png.Tools","build32ARGB",0x02e864aa,"format.png.Tools.build32ARGB","format/png/Tools.hx",714,0x79d90221)
HX_LOCAL_STACK_FRAME(_hx_pos_7ba0aa4bcda37a20_738_build32BGRA,"format.png.Tools","build32BGRA",0x03894c12,"format.png.Tools.build32BGRA","format/png/Tools.hx",738,0x79d90221)
namespace format{
namespace png{

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
	return inClassId==(int)0x00000001 || inClassId==(int)0x18125ce9;
}

 ::Dynamic Tools_obj::getHeader( ::haxe::ds::List d){
            	HX_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_35_getHeader)
HXLINE(  36)		{
HXLINE(  36)			 ::haxe::ds::_List::ListNode _g_head = d->h;
HXDLIN(  36)			while(::hx::IsNotNull( _g_head )){
HXLINE(  36)				 ::format::png::Chunk val = _g_head->item;
HXDLIN(  36)				_g_head = _g_head->next;
HXDLIN(  36)				 ::format::png::Chunk c = val;
HXLINE(  37)				if ((c->_hx_getIndex() == 1)) {
HXLINE(  38)					 ::Dynamic h = c->_hx_getObject(0);
HXDLIN(  38)					return h;
            				}
            			}
            		}
HXLINE(  41)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Header not found",42,2b,e7,44)));
HXDLIN(  41)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getHeader,return )

 ::haxe::io::Bytes Tools_obj::getPalette( ::haxe::ds::List d){
            	HX_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_47_getPalette)
HXLINE(  48)		{
HXLINE(  48)			 ::haxe::ds::_List::ListNode _g_head = d->h;
HXDLIN(  48)			while(::hx::IsNotNull( _g_head )){
HXLINE(  48)				 ::format::png::Chunk val = _g_head->item;
HXDLIN(  48)				_g_head = _g_head->next;
HXDLIN(  48)				 ::format::png::Chunk c = val;
HXLINE(  49)				if ((c->_hx_getIndex() == 3)) {
HXLINE(  50)					 ::haxe::io::Bytes b = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN(  50)					return b;
            				}
            			}
            		}
HXLINE(  53)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getPalette,return )

int Tools_obj::filter( ::haxe::io::Bytes data,int x,int y,int stride,int prev,int p,::hx::Null< int >  __o_numChannels){
            		int numChannels = __o_numChannels.Default(4);
            	HX_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_56_filter)
HXLINE(  57)		int b;
HXDLIN(  57)		if ((y == 0)) {
HXLINE(  57)			b = 0;
            		}
            		else {
HXLINE(  57)			b = ( (int)(data->b->__get((p - stride))) );
            		}
HXLINE(  58)		int c;
HXDLIN(  58)		bool c1;
HXDLIN(  58)		if ((x != 0)) {
HXLINE(  58)			c1 = (y == 0);
            		}
            		else {
HXLINE(  58)			c1 = true;
            		}
HXDLIN(  58)		if (c1) {
HXLINE(  58)			c = 0;
            		}
            		else {
HXLINE(  58)			c = ( (int)(data->b->__get(((p - stride) - numChannels))) );
            		}
HXLINE(  59)		int k = ((prev + b) - c);
HXLINE(  60)		int pa = (k - prev);
HXDLIN(  60)		if ((pa < 0)) {
HXLINE(  60)			pa = -(pa);
            		}
HXLINE(  61)		int pb = (k - b);
HXDLIN(  61)		if ((pb < 0)) {
HXLINE(  61)			pb = -(pb);
            		}
HXLINE(  62)		int pc = (k - c);
HXDLIN(  62)		if ((pc < 0)) {
HXLINE(  62)			pc = -(pc);
            		}
HXLINE(  63)		bool _hx_tmp;
HXDLIN(  63)		if ((pa <= pb)) {
HXLINE(  63)			_hx_tmp = (pa <= pc);
            		}
            		else {
HXLINE(  63)			_hx_tmp = false;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  63)			return prev;
            		}
            		else {
HXLINE(  63)			if ((pb <= pc)) {
HXLINE(  63)				return b;
            			}
            			else {
HXLINE(  63)				return c;
            			}
            		}
HXDLIN(  63)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Tools_obj,filter,return )

void Tools_obj::reverseBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_69_reverseBytes)
HXLINE(  89)		int p = 0;
HXLINE(  90)		{
HXLINE(  90)			int _g = 0;
HXDLIN(  90)			int _g1 = (b->length >> 2);
HXDLIN(  90)			while((_g < _g1)){
HXLINE(  90)				_g = (_g + 1);
HXDLIN(  90)				int i = (_g - 1);
HXLINE(  91)				int b1 = ( (int)(b->b->__get(p)) );
HXLINE(  92)				int g = ( (int)(b->b->__get((p + 1))) );
HXLINE(  93)				int r = ( (int)(b->b->__get((p + 2))) );
HXLINE(  94)				int a = ( (int)(b->b->__get((p + 3))) );
HXLINE(  95)				{
HXLINE(  95)					p = (p + 1);
HXDLIN(  95)					b->b[(p - 1)] = ( (unsigned char)(a) );
            				}
HXLINE(  96)				{
HXLINE(  96)					p = (p + 1);
HXDLIN(  96)					b->b[(p - 1)] = ( (unsigned char)(r) );
            				}
HXLINE(  97)				{
HXLINE(  97)					p = (p + 1);
HXDLIN(  97)					b->b[(p - 1)] = ( (unsigned char)(g) );
            				}
HXLINE(  98)				{
HXLINE(  98)					p = (p + 1);
HXDLIN(  98)					b->b[(p - 1)] = ( (unsigned char)(b1) );
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,reverseBytes,(void))

 ::haxe::io::Bytes Tools_obj::extractGrey( ::haxe::ds::List d){
	HX_JUST_GC_STACKFRAME
	 ::Dynamic h = ::format::png::Tools_obj::getHeader(d);
	 ::haxe::io::Bytes grey = ::haxe::io::Bytes_obj::alloc((( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )));
	 ::haxe::io::Bytes data = null();
	 ::haxe::io::BytesBuffer fullData = null();
	{
		 ::haxe::ds::_List::ListNode _g_head = d->h;
		while(::hx::IsNotNull( _g_head )){
			 ::format::png::Chunk val = _g_head->item;
			_g_head = _g_head->next;
			 ::format::png::Chunk c = val;
			if ((c->_hx_getIndex() == 2)) {
				 ::haxe::io::Bytes b = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
				if (::hx::IsNotNull( fullData )) {
					::Array< unsigned char > b1 = fullData->b;
					::Array< unsigned char > b2 = b->b;
					{
						int _g = 0;
						int _g1 = b->length;
						while((_g < _g1)){
							_g = (_g + 1);
							int i = (_g - 1);
							fullData->b->push(b2->__get(i));
						}
					}
				}
				else {
					if (::hx::IsNull( data )) {
						data = b;
					}
					else {
						fullData =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
						{
							::Array< unsigned char > b1 = fullData->b;
							::Array< unsigned char > b2 = data->b;
							{
								int _g = 0;
								int _g1 = data->length;
								while((_g < _g1)){
									_g = (_g + 1);
									int i = (_g - 1);
									fullData->b->push(b2->__get(i));
								}
							}
						}
						{
							::Array< unsigned char > b11 = fullData->b;
							::Array< unsigned char > b21 = b->b;
							{
								int _g2 = 0;
								int _g3 = b->length;
								while((_g2 < _g3)){
									_g2 = (_g2 + 1);
									int i = (_g2 - 1);
									fullData->b->push(b21->__get(i));
								}
							}
						}
						data = null();
					}
				}
			}
		}
	}
	if (::hx::IsNotNull( fullData )) {
		data = fullData->getBytes();
	}
	if (::hx::IsNull( data )) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Data not found",1f,f6,a3,e4)));
	}
	data = ::format::tools::Inflate_obj::run(data);
	int r = 0;
	int w = 0;
	{
		 ::format::png::Color _g = h->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
		if ((_g->_hx_getIndex() == 0)) {
			bool alpha = _g->_hx_getBool(0);
			{
				if (::hx::IsNotEq( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported color mode",eb,dc,a9,2c)));
				}
				int width = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
				int stride;
				if (alpha) {
					stride = 2;
				}
				else {
					stride = 1;
				}
				int stride1 = ((stride * width) + 1);
				if ((data->length < (( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * stride1))) {
					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not enough data",ed,1b,e9,b2)));
				}
				int rinc;
				if (alpha) {
					rinc = 2;
				}
				else {
					rinc = 1;
				}
				{
					int _g1 = 0;
					int _g2 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
					while((_g1 < _g2)){
						_g1 = (_g1 + 1);
						int y = (_g1 - 1);
						r = (r + 1);
						int f = ( (int)(data->b->__get((r - 1))) );
						switch((int)(f)){
							case (int)0: {
								int _g = 0;
								int _g1 = width;
								while((_g < _g1)){
									_g = (_g + 1);
									int x = (_g - 1);
									int v = ( (int)(data->b->__get(r)) );
									r = (r + rinc);
									{
										w = (w + 1);
										grey->b[(w - 1)] = ( (unsigned char)(v) );
									}
								}
							}
							break;
							case (int)1: {
								int cv = 0;
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										cv = (cv + data->b->__get(r));
										r = (r + rinc);
										{
											w = (w + 1);
											grey->b[(w - 1)] = ( (unsigned char)(cv) );
										}
									}
								}
							}
							break;
							case (int)2: {
								int stride;
								if ((y == 0)) {
									stride = 0;
								}
								else {
									stride = width;
								}
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = (data->b->__get(r) + grey->b->__get((w - stride)));
										r = (r + rinc);
										{
											w = (w + 1);
											grey->b[(w - 1)] = ( (unsigned char)(v) );
										}
									}
								}
							}
							break;
							case (int)3: {
								int cv = 0;
								int stride;
								if ((y == 0)) {
									stride = 0;
								}
								else {
									stride = width;
								}
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										cv = ((data->b->__get(r) + ((cv + grey->b->__get((w - stride))) >> 1)) & 255);
										r = (r + rinc);
										{
											w = (w + 1);
											grey->b[(w - 1)] = ( (unsigned char)(cv) );
										}
									}
								}
							}
							break;
							case (int)4: {
								int stride = width;
								int cv = 0;
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int b;
										if ((y == 0)) {
											b = 0;
										}
										else {
											b = ( (int)(grey->b->__get((w - stride))) );
										}
										int c;
										bool c1;
										if ((x != 0)) {
											c1 = (y == 0);
										}
										else {
											c1 = true;
										}
										if (c1) {
											c = 0;
										}
										else {
											c = ( (int)(grey->b->__get(((w - stride) - 1))) );
										}
										int k = ((cv + b) - c);
										int pa = (k - cv);
										if ((pa < 0)) {
											pa = -(pa);
										}
										int pb = (k - b);
										if ((pb < 0)) {
											pb = -(pb);
										}
										int pc = (k - c);
										if ((pc < 0)) {
											pc = -(pc);
										}
										int cv1;
										bool cv2;
										if ((pa <= pb)) {
											cv2 = (pa <= pc);
										}
										else {
											cv2 = false;
										}
										if (cv2) {
											cv1 = cv;
										}
										else {
											if ((pb <= pc)) {
												cv1 = b;
											}
											else {
												cv1 = c;
											}
										}
										cv = ((cv1 + data->b->__get(r)) & 255);
										r = (r + rinc);
										{
											w = (w + 1);
											grey->b[(w - 1)] = ( (unsigned char)(cv) );
										}
									}
								}
							}
							break;
							default:{
								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + f)));
							}
						}
					}
				}
			}
		}
		else {
			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported color mode",eb,dc,a9,2c)));
		}
	}
	return grey;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,extractGrey,return )

 ::haxe::io::Bytes Tools_obj::extract32( ::haxe::ds::List d, ::haxe::io::Bytes bytes, ::Dynamic flipY){
	HX_JUST_GC_STACKFRAME
	 ::Dynamic h = ::format::png::Tools_obj::getHeader(d);
	 ::haxe::io::Bytes bgra;
	if (::hx::IsNull( bytes )) {
		bgra = ::haxe::io::Bytes_obj::alloc(((( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )) * 4));
	}
	else {
		bgra = bytes;
	}
	 ::haxe::io::Bytes data = null();
	 ::haxe::io::BytesBuffer fullData = null();
	{
		 ::haxe::ds::_List::ListNode _g_head = d->h;
		while(::hx::IsNotNull( _g_head )){
			 ::format::png::Chunk val = _g_head->item;
			_g_head = _g_head->next;
			 ::format::png::Chunk c = val;
			if ((c->_hx_getIndex() == 2)) {
				 ::haxe::io::Bytes b = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
				if (::hx::IsNotNull( fullData )) {
					::Array< unsigned char > b1 = fullData->b;
					::Array< unsigned char > b2 = b->b;
					{
						int _g = 0;
						int _g1 = b->length;
						while((_g < _g1)){
							_g = (_g + 1);
							int i = (_g - 1);
							fullData->b->push(b2->__get(i));
						}
					}
				}
				else {
					if (::hx::IsNull( data )) {
						data = b;
					}
					else {
						fullData =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
						{
							::Array< unsigned char > b1 = fullData->b;
							::Array< unsigned char > b2 = data->b;
							{
								int _g = 0;
								int _g1 = data->length;
								while((_g < _g1)){
									_g = (_g + 1);
									int i = (_g - 1);
									fullData->b->push(b2->__get(i));
								}
							}
						}
						{
							::Array< unsigned char > b11 = fullData->b;
							::Array< unsigned char > b21 = b->b;
							{
								int _g2 = 0;
								int _g3 = b->length;
								while((_g2 < _g3)){
									_g2 = (_g2 + 1);
									int i = (_g2 - 1);
									fullData->b->push(b21->__get(i));
								}
							}
						}
						data = null();
					}
				}
			}
		}
	}
	if (::hx::IsNotNull( fullData )) {
		data = fullData->getBytes();
	}
	if (::hx::IsNull( data )) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Data not found",1f,f6,a3,e4)));
	}
	data = ::format::tools::Inflate_obj::run(data);
	int r = 0;
	int w = 0;
	int lineDelta = 0;
	if (( (bool)(flipY) )) {
		lineDelta = (-(( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) )) * 8);
		w = ((( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) - 1) * (( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * 4));
	}
	int flipY1;
	if (( (bool)(flipY) )) {
		flipY1 = -1;
	}
	else {
		flipY1 = 1;
	}
	{
		 ::format::png::Color _g = h->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
		switch((int)(_g->_hx_getIndex())){
			case (int)0: {
				bool alpha = _g->_hx_getBool(0);
				{
					if (::hx::IsNotEq( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported color mode",eb,dc,a9,2c)));
					}
					int width = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
					int stride;
					if (alpha) {
						stride = 2;
					}
					else {
						stride = 1;
					}
					int stride1 = ((stride * width) + 1);
					if ((data->length < (( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * stride1))) {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not enough data",ed,1b,e9,b2)));
					}
					int alphvaIdx = -1;
					if (!(alpha)) {
						 ::haxe::ds::_List::ListNode _g1_head = d->h;
						while(::hx::IsNotNull( _g1_head )){
							 ::format::png::Chunk val = _g1_head->item;
							_g1_head = _g1_head->next;
							 ::format::png::Chunk t = val;
							if ((t->_hx_getIndex() == 4)) {
								if ((t->_hx_getString(0) == HX_("tRNS",23,3d,eb,4c))) {
									 ::haxe::io::Bytes data = t->_hx_getObject(1).StaticCast<  ::haxe::io::Bytes >();
									if ((data->length >= 2)) {
										alphvaIdx = ( (int)(data->b->__get(1)) );
									}
									goto _hx_goto_21;
								}
							}
						}
						_hx_goto_21:;
					}
					{
						int _g1 = 0;
						int _g2 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
						while((_g1 < _g2)){
							_g1 = (_g1 + 1);
							int y = (_g1 - 1);
							r = (r + 1);
							int f = ( (int)(data->b->__get((r - 1))) );
							switch((int)(f)){
								case (int)0: {
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											int v = ( (int)(data->b->__get((r - 1))) );
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												r = (r + 1);
												bgra->b[(w - 1)] = data->b->__get((r - 1));
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											int v = ( (int)(data->b->__get((r - 1))) );
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((v == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								case (int)1: {
									int cv = 0;
									int ca = 0;
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											cv = (cv + data->b->__get((r - 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											r = (r + 1);
											ca = (ca + data->b->__get((r - 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											cv = (cv + data->b->__get((r - 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((cv == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								case (int)2: {
									int stride;
									if ((y == 0)) {
										stride = 0;
									}
									else {
										stride = ((width * 4) * flipY1);
									}
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											int v = (data->b->__get((r - 1)) + bgra->b->__get((w - stride)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												r = (r + 1);
												bgra->b[(w - 1)] = ( (unsigned char)((data->b->__get((r - 1)) + bgra->b->__get((w - stride)))) );
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											int v = (data->b->__get((r - 1)) + bgra->b->__get((w - stride)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(v) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((v == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								case (int)3: {
									int cv = 0;
									int ca = 0;
									int stride;
									if ((y == 0)) {
										stride = 0;
									}
									else {
										stride = ((width * 4) * flipY1);
									}
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											cv = ((data->b->__get((r - 1)) + ((cv + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											r = (r + 1);
											ca = ((data->b->__get((r - 1)) + ((ca + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											r = (r + 1);
											cv = ((data->b->__get((r - 1)) + ((cv + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((cv == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								case (int)4: {
									int stride = ((width * 4) * flipY1);
									int cv = 0;
									int ca = 0;
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											int b;
											if ((y == 0)) {
												b = 0;
											}
											else {
												b = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c;
											bool c1;
											if ((x != 0)) {
												c1 = (y == 0);
											}
											else {
												c1 = true;
											}
											if (c1) {
												c = 0;
											}
											else {
												c = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k = ((cv + b) - c);
											int pa = (k - cv);
											if ((pa < 0)) {
												pa = -(pa);
											}
											int pb = (k - b);
											if ((pb < 0)) {
												pb = -(pb);
											}
											int pc = (k - c);
											if ((pc < 0)) {
												pc = -(pc);
											}
											int cv1;
											bool cv2;
											if ((pa <= pb)) {
												cv2 = (pa <= pc);
											}
											else {
												cv2 = false;
											}
											if (cv2) {
												cv1 = cv;
											}
											else {
												if ((pb <= pc)) {
													cv1 = b;
												}
												else {
													cv1 = c;
												}
											}
											r = (r + 1);
											cv = ((cv1 + data->b->__get((r - 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											int b1;
											if ((y == 0)) {
												b1 = 0;
											}
											else {
												b1 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c2;
											bool c3;
											if ((x != 0)) {
												c3 = (y == 0);
											}
											else {
												c3 = true;
											}
											if (c3) {
												c2 = 0;
											}
											else {
												c2 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k1 = ((ca + b1) - c2);
											int pa1 = (k1 - ca);
											if ((pa1 < 0)) {
												pa1 = -(pa1);
											}
											int pb1 = (k1 - b1);
											if ((pb1 < 0)) {
												pb1 = -(pb1);
											}
											int pc1 = (k1 - c2);
											if ((pc1 < 0)) {
												pc1 = -(pc1);
											}
											int ca1;
											bool ca2;
											if ((pa1 <= pb1)) {
												ca2 = (pa1 <= pc1);
											}
											else {
												ca2 = false;
											}
											if (ca2) {
												ca1 = ca;
											}
											else {
												if ((pb1 <= pc1)) {
													ca1 = b1;
												}
												else {
													ca1 = c2;
												}
											}
											r = (r + 1);
											ca = ((ca1 + data->b->__get((r - 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											int b;
											if ((y == 0)) {
												b = 0;
											}
											else {
												b = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c;
											bool c1;
											if ((x != 0)) {
												c1 = (y == 0);
											}
											else {
												c1 = true;
											}
											if (c1) {
												c = 0;
											}
											else {
												c = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k = ((cv + b) - c);
											int pa = (k - cv);
											if ((pa < 0)) {
												pa = -(pa);
											}
											int pb = (k - b);
											if ((pb < 0)) {
												pb = -(pb);
											}
											int pc = (k - c);
											if ((pc < 0)) {
												pc = -(pc);
											}
											int cv1;
											bool cv2;
											if ((pa <= pb)) {
												cv2 = (pa <= pc);
											}
											else {
												cv2 = false;
											}
											if (cv2) {
												cv1 = cv;
											}
											else {
												if ((pb <= pc)) {
													cv1 = b;
												}
												else {
													cv1 = c;
												}
											}
											r = (r + 1);
											cv = ((cv1 + data->b->__get((r - 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cv) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												if ((cv == alphvaIdx)) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
										}
									}
								}
								break;
								default:{
									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + f)));
								}
							}
							w = (w + lineDelta);
						}
					}
				}
			}
			break;
			case (int)1: {
				bool alpha = _g->_hx_getBool(0);
				{
					if (::hx::IsNotEq( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported color mode",eb,dc,a9,2c)));
					}
					int width = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
					int stride;
					if (alpha) {
						stride = 4;
					}
					else {
						stride = 3;
					}
					int stride1 = ((stride * width) + 1);
					if ((data->length < (( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * stride1))) {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not enough data",ed,1b,e9,b2)));
					}
					int alphaRed = -1;
					int alphaGreen = -1;
					int alphaBlue = -1;
					if (!(alpha)) {
						 ::haxe::ds::_List::ListNode _g1_head = d->h;
						while(::hx::IsNotNull( _g1_head )){
							 ::format::png::Chunk val = _g1_head->item;
							_g1_head = _g1_head->next;
							 ::format::png::Chunk t = val;
							if ((t->_hx_getIndex() == 4)) {
								if ((t->_hx_getString(0) == HX_("tRNS",23,3d,eb,4c))) {
									 ::haxe::io::Bytes data = t->_hx_getObject(1).StaticCast<  ::haxe::io::Bytes >();
									if ((data->length >= 6)) {
										alphaRed = ( (int)(data->b->__get(1)) );
										alphaGreen = ( (int)(data->b->__get(3)) );
										alphaBlue = ( (int)(data->b->__get(5)) );
									}
									goto _hx_goto_33;
								}
							}
						}
						_hx_goto_33:;
					}
					int cr = 0;
					int cg = 0;
					int cb = 0;
					int ca = 0;
					{
						int _g1 = 0;
						int _g2 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
						while((_g1 < _g2)){
							_g1 = (_g1 + 1);
							int y = (_g1 - 1);
							r = (r + 1);
							int f = ( (int)(data->b->__get((r - 1))) );
							switch((int)(f)){
								case (int)0: {
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = data->b->__get((r + 2));
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = data->b->__get((r + 1));
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = data->b->__get(r);
											}
											{
												w = (w + 1);
												bgra->b[(w - 1)] = data->b->__get((r + 3));
											}
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											{
												w = (w + 1);
												cb = ( (int)(data->b->__get((r + 2))) );
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											{
												w = (w + 1);
												cg = ( (int)(data->b->__get((r + 1))) );
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											{
												w = (w + 1);
												cr = ( (int)(data->b->__get(r)) );
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								case (int)1: {
									ca = 0;
									cb = ca;
									cg = cb;
									cr = cg;
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											cb = (cb + data->b->__get((r + 2)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											cg = (cg + data->b->__get((r + 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											cr = (cr + data->b->__get(r));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											ca = (ca + data->b->__get((r + 3)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											cb = (cb + data->b->__get((r + 2)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											cg = (cg + data->b->__get((r + 1)));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											cr = (cr + data->b->__get(r));
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								case (int)2: {
									int stride;
									if ((y == 0)) {
										stride = 0;
									}
									else {
										stride = ((width * 4) * flipY1);
									}
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											bgra->b[w] = ( (unsigned char)((data->b->__get((r + 2)) + bgra->b->__get((w - stride)))) );
											w = (w + 1);
											bgra->b[w] = ( (unsigned char)((data->b->__get((r + 1)) + bgra->b->__get((w - stride)))) );
											w = (w + 1);
											bgra->b[w] = ( (unsigned char)((data->b->__get(r) + bgra->b->__get((w - stride)))) );
											w = (w + 1);
											bgra->b[w] = ( (unsigned char)((data->b->__get((r + 3)) + bgra->b->__get((w - stride)))) );
											w = (w + 1);
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											{
												cb = (data->b->__get((r + 2)) + bgra->b->__get((w - stride)));
												bgra->b[w] = ( (unsigned char)(cb) );
											}
											w = (w + 1);
											{
												cg = (data->b->__get((r + 1)) + bgra->b->__get((w - stride)));
												bgra->b[w] = ( (unsigned char)(cg) );
											}
											w = (w + 1);
											{
												cr = (data->b->__get(r) + bgra->b->__get((w - stride)));
												bgra->b[w] = ( (unsigned char)(cr) );
											}
											w = (w + 1);
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								case (int)3: {
									ca = 0;
									cb = ca;
									cg = cb;
									cr = cg;
									int stride;
									if ((y == 0)) {
										stride = 0;
									}
									else {
										stride = ((width * 4) * flipY1);
									}
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											cb = ((data->b->__get((r + 2)) + ((cb + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											cg = ((data->b->__get((r + 1)) + ((cg + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											cr = ((data->b->__get(r) + ((cr + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											ca = ((data->b->__get((r + 3)) + ((ca + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											cb = ((data->b->__get((r + 2)) + ((cb + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											cg = ((data->b->__get((r + 1)) + ((cg + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											cr = ((data->b->__get(r) + ((cr + bgra->b->__get((w - stride))) >> 1)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								case (int)4: {
									int stride = ((width * 4) * flipY1);
									ca = 0;
									cb = ca;
									cg = cb;
									cr = cg;
									if (alpha) {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											int b;
											if ((y == 0)) {
												b = 0;
											}
											else {
												b = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c;
											bool c1;
											if ((x != 0)) {
												c1 = (y == 0);
											}
											else {
												c1 = true;
											}
											if (c1) {
												c = 0;
											}
											else {
												c = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k = ((cb + b) - c);
											int pa = (k - cb);
											if ((pa < 0)) {
												pa = -(pa);
											}
											int pb = (k - b);
											if ((pb < 0)) {
												pb = -(pb);
											}
											int pc = (k - c);
											if ((pc < 0)) {
												pc = -(pc);
											}
											int cb1;
											bool cb2;
											if ((pa <= pb)) {
												cb2 = (pa <= pc);
											}
											else {
												cb2 = false;
											}
											if (cb2) {
												cb1 = cb;
											}
											else {
												if ((pb <= pc)) {
													cb1 = b;
												}
												else {
													cb1 = c;
												}
											}
											cb = ((cb1 + data->b->__get((r + 2))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											int b1;
											if ((y == 0)) {
												b1 = 0;
											}
											else {
												b1 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c2;
											bool c3;
											if ((x != 0)) {
												c3 = (y == 0);
											}
											else {
												c3 = true;
											}
											if (c3) {
												c2 = 0;
											}
											else {
												c2 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k1 = ((cg + b1) - c2);
											int pa1 = (k1 - cg);
											if ((pa1 < 0)) {
												pa1 = -(pa1);
											}
											int pb1 = (k1 - b1);
											if ((pb1 < 0)) {
												pb1 = -(pb1);
											}
											int pc1 = (k1 - c2);
											if ((pc1 < 0)) {
												pc1 = -(pc1);
											}
											int cg1;
											bool cg2;
											if ((pa1 <= pb1)) {
												cg2 = (pa1 <= pc1);
											}
											else {
												cg2 = false;
											}
											if (cg2) {
												cg1 = cg;
											}
											else {
												if ((pb1 <= pc1)) {
													cg1 = b1;
												}
												else {
													cg1 = c2;
												}
											}
											cg = ((cg1 + data->b->__get((r + 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											int b2;
											if ((y == 0)) {
												b2 = 0;
											}
											else {
												b2 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c4;
											bool c5;
											if ((x != 0)) {
												c5 = (y == 0);
											}
											else {
												c5 = true;
											}
											if (c5) {
												c4 = 0;
											}
											else {
												c4 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k2 = ((cr + b2) - c4);
											int pa2 = (k2 - cr);
											if ((pa2 < 0)) {
												pa2 = -(pa2);
											}
											int pb2 = (k2 - b2);
											if ((pb2 < 0)) {
												pb2 = -(pb2);
											}
											int pc2 = (k2 - c4);
											if ((pc2 < 0)) {
												pc2 = -(pc2);
											}
											int cr1;
											bool cr2;
											if ((pa2 <= pb2)) {
												cr2 = (pa2 <= pc2);
											}
											else {
												cr2 = false;
											}
											if (cr2) {
												cr1 = cr;
											}
											else {
												if ((pb2 <= pc2)) {
													cr1 = b2;
												}
												else {
													cr1 = c4;
												}
											}
											cr = ((cr1 + data->b->__get(r)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											int b3;
											if ((y == 0)) {
												b3 = 0;
											}
											else {
												b3 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c6;
											bool c7;
											if ((x != 0)) {
												c7 = (y == 0);
											}
											else {
												c7 = true;
											}
											if (c7) {
												c6 = 0;
											}
											else {
												c6 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k3 = ((ca + b3) - c6);
											int pa3 = (k3 - ca);
											if ((pa3 < 0)) {
												pa3 = -(pa3);
											}
											int pb3 = (k3 - b3);
											if ((pb3 < 0)) {
												pb3 = -(pb3);
											}
											int pc3 = (k3 - c6);
											if ((pc3 < 0)) {
												pc3 = -(pc3);
											}
											int ca1;
											bool ca2;
											if ((pa3 <= pb3)) {
												ca2 = (pa3 <= pc3);
											}
											else {
												ca2 = false;
											}
											if (ca2) {
												ca1 = ca;
											}
											else {
												if ((pb3 <= pc3)) {
													ca1 = b3;
												}
												else {
													ca1 = c6;
												}
											}
											ca = ((ca1 + data->b->__get((r + 3))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(ca) );
											}
											r = (r + 4);
										}
									}
									else {
										int _g = 0;
										int _g1 = width;
										while((_g < _g1)){
											_g = (_g + 1);
											int x = (_g - 1);
											int b;
											if ((y == 0)) {
												b = 0;
											}
											else {
												b = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c;
											bool c1;
											if ((x != 0)) {
												c1 = (y == 0);
											}
											else {
												c1 = true;
											}
											if (c1) {
												c = 0;
											}
											else {
												c = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k = ((cb + b) - c);
											int pa = (k - cb);
											if ((pa < 0)) {
												pa = -(pa);
											}
											int pb = (k - b);
											if ((pb < 0)) {
												pb = -(pb);
											}
											int pc = (k - c);
											if ((pc < 0)) {
												pc = -(pc);
											}
											int cb1;
											bool cb2;
											if ((pa <= pb)) {
												cb2 = (pa <= pc);
											}
											else {
												cb2 = false;
											}
											if (cb2) {
												cb1 = cb;
											}
											else {
												if ((pb <= pc)) {
													cb1 = b;
												}
												else {
													cb1 = c;
												}
											}
											cb = ((cb1 + data->b->__get((r + 2))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cb) );
											}
											int b1;
											if ((y == 0)) {
												b1 = 0;
											}
											else {
												b1 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c2;
											bool c3;
											if ((x != 0)) {
												c3 = (y == 0);
											}
											else {
												c3 = true;
											}
											if (c3) {
												c2 = 0;
											}
											else {
												c2 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k1 = ((cg + b1) - c2);
											int pa1 = (k1 - cg);
											if ((pa1 < 0)) {
												pa1 = -(pa1);
											}
											int pb1 = (k1 - b1);
											if ((pb1 < 0)) {
												pb1 = -(pb1);
											}
											int pc1 = (k1 - c2);
											if ((pc1 < 0)) {
												pc1 = -(pc1);
											}
											int cg1;
											bool cg2;
											if ((pa1 <= pb1)) {
												cg2 = (pa1 <= pc1);
											}
											else {
												cg2 = false;
											}
											if (cg2) {
												cg1 = cg;
											}
											else {
												if ((pb1 <= pc1)) {
													cg1 = b1;
												}
												else {
													cg1 = c2;
												}
											}
											cg = ((cg1 + data->b->__get((r + 1))) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cg) );
											}
											int b2;
											if ((y == 0)) {
												b2 = 0;
											}
											else {
												b2 = ( (int)(bgra->b->__get((w - stride))) );
											}
											int c4;
											bool c5;
											if ((x != 0)) {
												c5 = (y == 0);
											}
											else {
												c5 = true;
											}
											if (c5) {
												c4 = 0;
											}
											else {
												c4 = ( (int)(bgra->b->__get(((w - stride) - 4))) );
											}
											int k2 = ((cr + b2) - c4);
											int pa2 = (k2 - cr);
											if ((pa2 < 0)) {
												pa2 = -(pa2);
											}
											int pb2 = (k2 - b2);
											if ((pb2 < 0)) {
												pb2 = -(pb2);
											}
											int pc2 = (k2 - c4);
											if ((pc2 < 0)) {
												pc2 = -(pc2);
											}
											int cr1;
											bool cr2;
											if ((pa2 <= pb2)) {
												cr2 = (pa2 <= pc2);
											}
											else {
												cr2 = false;
											}
											if (cr2) {
												cr1 = cr;
											}
											else {
												if ((pb2 <= pc2)) {
													cr1 = b2;
												}
												else {
													cr1 = c4;
												}
											}
											cr = ((cr1 + data->b->__get(r)) & 255);
											{
												w = (w + 1);
												bgra->b[(w - 1)] = ( (unsigned char)(cr) );
											}
											{
												w = (w + 1);
												int _hx_tmp;
												bool _hx_tmp1;
												bool _hx_tmp2;
												if ((cr == alphaRed)) {
													_hx_tmp2 = (cg == alphaGreen);
												}
												else {
													_hx_tmp2 = false;
												}
												if (_hx_tmp2) {
													_hx_tmp1 = (cb == alphaBlue);
												}
												else {
													_hx_tmp1 = false;
												}
												if (_hx_tmp1) {
													_hx_tmp = 0;
												}
												else {
													_hx_tmp = 255;
												}
												bgra->b[(w - 1)] = ( (unsigned char)(_hx_tmp) );
											}
											r = (r + 3);
										}
									}
								}
								break;
								default:{
									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + f)));
								}
							}
							w = (w + lineDelta);
						}
					}
				}
			}
			break;
			case (int)2: {
				 ::haxe::io::Bytes pal = ::format::png::Tools_obj::getPalette(d);
				if (::hx::IsNull( pal )) {
					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("PNG Palette is missing",0c,e8,57,88)));
				}
				 ::haxe::io::Bytes alpha = null();
				{
					 ::haxe::ds::_List::ListNode _g1_head = d->h;
					while(::hx::IsNotNull( _g1_head )){
						 ::format::png::Chunk val = _g1_head->item;
						_g1_head = _g1_head->next;
						 ::format::png::Chunk t = val;
						if ((t->_hx_getIndex() == 4)) {
							if ((t->_hx_getString(0) == HX_("tRNS",23,3d,eb,4c))) {
								 ::haxe::io::Bytes data = t->_hx_getObject(1).StaticCast<  ::haxe::io::Bytes >();
								alpha = data;
								goto _hx_goto_45;
							}
						}
					}
					_hx_goto_45:;
				}
				bool _hx_tmp;
				if (::hx::IsNotNull( alpha )) {
					_hx_tmp = (alpha->length < (1 << ( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) )));
				}
				else {
					_hx_tmp = false;
				}
				if (_hx_tmp) {
					 ::haxe::io::Bytes alpha2 = ::haxe::io::Bytes_obj::alloc((1 << ( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) )));
					alpha2->blit(0,alpha,0,alpha->length);
					alpha2->fill(alpha->length,(alpha2->length - alpha->length),255);
					alpha = alpha2;
				}
				int width = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
				int stride = (::Math_obj::ceil((( (Float)((width * ( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) ))) ) / ( (Float)(8) ))) + 1);
				if ((data->length < (( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ) * stride))) {
					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not enough data",ed,1b,e9,b2)));
				}
				int tmp = (( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) ));
				int rline = (tmp >> 3);
				{
					int _g = 0;
					int _g1 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
					while((_g < _g1)){
						_g = (_g + 1);
						int y = (_g - 1);
						r = (r + 1);
						int f = ( (int)(data->b->__get((r - 1))) );
						if ((f == 0)) {
							r = (r + rline);
							continue;
						}
						switch((int)(f)){
							case (int)1: {
								int c = 0;
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = ( (int)(data->b->__get(r)) );
										c = (c + v);
										{
											r = (r + 1);
											data->b[(r - 1)] = ( (unsigned char)((c & 255)) );
										}
									}
								}
							}
							break;
							case (int)2: {
								int stride;
								if ((y == 0)) {
									stride = 0;
								}
								else {
									stride = (rline + 1);
								}
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = ( (int)(data->b->__get(r)) );
										data->b[r] = ( (unsigned char)((v + data->b->__get((r - stride)))) );
										r = (r + 1);
									}
								}
							}
							break;
							case (int)3: {
								int c = 0;
								int stride;
								if ((y == 0)) {
									stride = 0;
								}
								else {
									stride = (rline + 1);
								}
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = ( (int)(data->b->__get(r)) );
										c = ((v + ((c + data->b->__get((r - stride))) >> 1)) & 255);
										{
											r = (r + 1);
											data->b[(r - 1)] = ( (unsigned char)(c) );
										}
									}
								}
							}
							break;
							case (int)4: {
								int stride = (rline + 1);
								int c = 0;
								{
									int _g = 0;
									int _g1 = width;
									while((_g < _g1)){
										_g = (_g + 1);
										int x = (_g - 1);
										int v = ( (int)(data->b->__get(r)) );
										int b;
										if ((y == 0)) {
											b = 0;
										}
										else {
											b = ( (int)(data->b->__get((r - stride))) );
										}
										int c1;
										bool c2;
										if ((x != 0)) {
											c2 = (y == 0);
										}
										else {
											c2 = true;
										}
										if (c2) {
											c1 = 0;
										}
										else {
											c1 = ( (int)(data->b->__get(((r - stride) - 1))) );
										}
										int k = ((c + b) - c1);
										int pa = (k - c);
										if ((pa < 0)) {
											pa = -(pa);
										}
										int pb = (k - b);
										if ((pb < 0)) {
											pb = -(pb);
										}
										int pc = (k - c1);
										if ((pc < 0)) {
											pc = -(pc);
										}
										int c3;
										bool c4;
										if ((pa <= pb)) {
											c4 = (pa <= pc);
										}
										else {
											c4 = false;
										}
										if (c4) {
											c3 = c;
										}
										else {
											if ((pb <= pc)) {
												c3 = b;
											}
											else {
												c3 = c1;
											}
										}
										c = ((c3 + v) & 255);
										{
											r = (r + 1);
											data->b[(r - 1)] = ( (unsigned char)(c) );
										}
									}
								}
							}
							break;
							default:{
								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid filter ",1f,17,bf,04) + f)));
							}
						}
					}
				}
				int r1 = 0;
				if (::hx::IsEq( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
					int _g = 0;
					int _g1 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
					while((_g < _g1)){
						_g = (_g + 1);
						int y = (_g - 1);
						r1 = (r1 + 1);
						{
							int _g1 = 0;
							int _g2 = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
							while((_g1 < _g2)){
								_g1 = (_g1 + 1);
								int x = (_g1 - 1);
								r1 = (r1 + 1);
								int c = ( (int)(data->b->__get((r1 - 1))) );
								{
									w = (w + 1);
									bgra->b[(w - 1)] = pal->b->__get(((c * 3) + 2));
								}
								{
									w = (w + 1);
									bgra->b[(w - 1)] = pal->b->__get(((c * 3) + 1));
								}
								{
									w = (w + 1);
									bgra->b[(w - 1)] = pal->b->__get((c * 3));
								}
								{
									w = (w + 1);
									int v;
									if (::hx::IsNotNull( alpha )) {
										v = ( (int)(alpha->b->__get(c)) );
									}
									else {
										v = 255;
									}
									bgra->b[(w - 1)] = ( (unsigned char)(v) );
								}
							}
						}
						w = (w + lineDelta);
					}
				}
				else {
					if (::hx::IsLess( h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic),8 )) {
						int req = ( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) );
						int mask = ((1 << req) - 1);
						{
							int _g = 0;
							int _g1 = ( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
							while((_g < _g1)){
								_g = (_g + 1);
								int y = (_g - 1);
								r1 = (r1 + 1);
								int bits = 0;
								int nbits = 0;
								{
									int _g1 = 0;
									int _g2 = ( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
									while((_g1 < _g2)){
										_g1 = (_g1 + 1);
										int x = (_g1 - 1);
										if ((nbits < req)) {
											r1 = (r1 + 1);
											bits = ((bits << 8) | ( (int)(data->b->__get((r1 - 1))) ));
											nbits = (nbits + 8);
										}
										int c = (::hx::UShr(bits,(nbits - req)) & mask);
										nbits = (nbits - req);
										{
											w = (w + 1);
											bgra->b[(w - 1)] = pal->b->__get(((c * 3) + 2));
										}
										{
											w = (w + 1);
											bgra->b[(w - 1)] = pal->b->__get(((c * 3) + 1));
										}
										{
											w = (w + 1);
											bgra->b[(w - 1)] = pal->b->__get((c * 3));
										}
										{
											w = (w + 1);
											int v;
											if (::hx::IsNotNull( alpha )) {
												v = ( (int)(alpha->b->__get(c)) );
											}
											else {
												v = 255;
											}
											bgra->b[(w - 1)] = ( (unsigned char)(v) );
										}
									}
								}
								w = (w + lineDelta);
							}
						}
					}
					else {
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic) + HX_(" indexed bits per pixel not supported",99,37,8f,c1)))));
					}
				}
			}
			break;
		}
	}
	return bgra;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Tools_obj,extract32,return )

 ::haxe::ds::List Tools_obj::buildGrey(int width,int height, ::haxe::io::Bytes data, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_653_buildGrey)
HXLINE( 654)		 ::haxe::io::Bytes rgb = ::haxe::io::Bytes_obj::alloc(((width * height) + height));
HXLINE( 656)		int w = 0;
HXDLIN( 656)		int r = 0;
HXLINE( 657)		{
HXLINE( 657)			int _g = 0;
HXDLIN( 657)			int _g1 = height;
HXDLIN( 657)			while((_g < _g1)){
HXLINE( 657)				_g = (_g + 1);
HXDLIN( 657)				int y = (_g - 1);
HXLINE( 658)				{
HXLINE( 658)					w = (w + 1);
HXDLIN( 658)					rgb->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 659)				{
HXLINE( 659)					int _g1 = 0;
HXDLIN( 659)					int _g2 = width;
HXDLIN( 659)					while((_g1 < _g2)){
HXLINE( 659)						_g1 = (_g1 + 1);
HXDLIN( 659)						int x = (_g1 - 1);
HXLINE( 660)						{
HXLINE( 660)							w = (w + 1);
HXDLIN( 660)							r = (r + 1);
HXDLIN( 660)							rgb->b[(w - 1)] = data->b->__get((r - 1));
            						}
            					}
            				}
            			}
            		}
HXLINE( 662)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 663)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColGrey(false)))));
HXLINE( 664)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgb,level)));
HXLINE( 665)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 666)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,buildGrey,return )

 ::haxe::ds::List Tools_obj::buildIndexed(int width,int height, ::haxe::io::Bytes data, ::haxe::io::Bytes palette, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_672_buildIndexed)
HXLINE( 673)		 ::haxe::io::Bytes rgb = ::haxe::io::Bytes_obj::alloc(((width * height) + height));
HXLINE( 674)		int w = 0;
HXDLIN( 674)		int r = 0;
HXLINE( 675)		{
HXLINE( 675)			int _g = 0;
HXDLIN( 675)			int _g1 = height;
HXDLIN( 675)			while((_g < _g1)){
HXLINE( 675)				_g = (_g + 1);
HXDLIN( 675)				int y = (_g - 1);
HXLINE( 676)				{
HXLINE( 676)					w = (w + 1);
HXDLIN( 676)					rgb->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 677)				{
HXLINE( 677)					int _g1 = 0;
HXDLIN( 677)					int _g2 = width;
HXDLIN( 677)					while((_g1 < _g2)){
HXLINE( 677)						_g1 = (_g1 + 1);
HXDLIN( 677)						int x = (_g1 - 1);
HXLINE( 678)						{
HXLINE( 678)							w = (w + 1);
HXDLIN( 678)							r = (r + 1);
HXDLIN( 678)							rgb->b[(w - 1)] = data->b->__get((r - 1));
            						}
            					}
            				}
            			}
            		}
HXLINE( 680)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 681)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColIndexed_dyn()))));
HXLINE( 682)		l->add(::format::png::Chunk_obj::CPalette(palette));
HXLINE( 683)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgb,level)));
HXLINE( 684)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 685)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Tools_obj,buildIndexed,return )

 ::haxe::ds::List Tools_obj::buildRGB(int width,int height, ::haxe::io::Bytes data, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_691_buildRGB)
HXLINE( 692)		 ::haxe::io::Bytes rgb = ::haxe::io::Bytes_obj::alloc((((width * height) * 3) + height));
HXLINE( 694)		int w = 0;
HXDLIN( 694)		int r = 0;
HXLINE( 695)		{
HXLINE( 695)			int _g = 0;
HXDLIN( 695)			int _g1 = height;
HXDLIN( 695)			while((_g < _g1)){
HXLINE( 695)				_g = (_g + 1);
HXDLIN( 695)				int y = (_g - 1);
HXLINE( 696)				{
HXLINE( 696)					w = (w + 1);
HXDLIN( 696)					rgb->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 697)				{
HXLINE( 697)					int _g1 = 0;
HXDLIN( 697)					int _g2 = width;
HXDLIN( 697)					while((_g1 < _g2)){
HXLINE( 697)						_g1 = (_g1 + 1);
HXDLIN( 697)						int x = (_g1 - 1);
HXLINE( 698)						{
HXLINE( 698)							w = (w + 1);
HXDLIN( 698)							rgb->b[(w - 1)] = data->b->__get((r + 2));
            						}
HXLINE( 699)						{
HXLINE( 699)							w = (w + 1);
HXDLIN( 699)							rgb->b[(w - 1)] = data->b->__get((r + 1));
            						}
HXLINE( 700)						{
HXLINE( 700)							w = (w + 1);
HXDLIN( 700)							rgb->b[(w - 1)] = data->b->__get(r);
            						}
HXLINE( 701)						r = (r + 3);
            					}
            				}
            			}
            		}
HXLINE( 704)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 705)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColTrue(false)))));
HXLINE( 706)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgb,level)));
HXLINE( 707)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 708)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,buildRGB,return )

 ::haxe::ds::List Tools_obj::build32ARGB(int width,int height, ::haxe::io::Bytes data, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_714_build32ARGB)
HXLINE( 715)		 ::haxe::io::Bytes rgba = ::haxe::io::Bytes_obj::alloc((((width * height) * 4) + height));
HXLINE( 717)		int w = 0;
HXDLIN( 717)		int r = 0;
HXLINE( 718)		{
HXLINE( 718)			int _g = 0;
HXDLIN( 718)			int _g1 = height;
HXDLIN( 718)			while((_g < _g1)){
HXLINE( 718)				_g = (_g + 1);
HXDLIN( 718)				int y = (_g - 1);
HXLINE( 719)				{
HXLINE( 719)					w = (w + 1);
HXDLIN( 719)					rgba->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 720)				{
HXLINE( 720)					int _g1 = 0;
HXDLIN( 720)					int _g2 = width;
HXDLIN( 720)					while((_g1 < _g2)){
HXLINE( 720)						_g1 = (_g1 + 1);
HXDLIN( 720)						int x = (_g1 - 1);
HXLINE( 721)						{
HXLINE( 721)							w = (w + 1);
HXDLIN( 721)							rgba->b[(w - 1)] = data->b->__get((r + 1));
            						}
HXLINE( 722)						{
HXLINE( 722)							w = (w + 1);
HXDLIN( 722)							rgba->b[(w - 1)] = data->b->__get((r + 2));
            						}
HXLINE( 723)						{
HXLINE( 723)							w = (w + 1);
HXDLIN( 723)							rgba->b[(w - 1)] = data->b->__get((r + 3));
            						}
HXLINE( 724)						{
HXLINE( 724)							w = (w + 1);
HXDLIN( 724)							rgba->b[(w - 1)] = data->b->__get(r);
            						}
HXLINE( 725)						r = (r + 4);
            					}
            				}
            			}
            		}
HXLINE( 728)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 729)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColTrue(true)))));
HXLINE( 730)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgba,level)));
HXLINE( 731)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 732)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,build32ARGB,return )

 ::haxe::ds::List Tools_obj::build32BGRA(int width,int height, ::haxe::io::Bytes data, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_GC_STACKFRAME(&_hx_pos_7ba0aa4bcda37a20_738_build32BGRA)
HXLINE( 739)		 ::haxe::io::Bytes rgba = ::haxe::io::Bytes_obj::alloc((((width * height) * 4) + height));
HXLINE( 741)		int w = 0;
HXDLIN( 741)		int r = 0;
HXLINE( 742)		{
HXLINE( 742)			int _g = 0;
HXDLIN( 742)			int _g1 = height;
HXDLIN( 742)			while((_g < _g1)){
HXLINE( 742)				_g = (_g + 1);
HXDLIN( 742)				int y = (_g - 1);
HXLINE( 743)				{
HXLINE( 743)					w = (w + 1);
HXDLIN( 743)					rgba->b[(w - 1)] = ( (unsigned char)(0) );
            				}
HXLINE( 744)				{
HXLINE( 744)					int _g1 = 0;
HXDLIN( 744)					int _g2 = width;
HXDLIN( 744)					while((_g1 < _g2)){
HXLINE( 744)						_g1 = (_g1 + 1);
HXDLIN( 744)						int x = (_g1 - 1);
HXLINE( 745)						{
HXLINE( 745)							w = (w + 1);
HXDLIN( 745)							rgba->b[(w - 1)] = data->b->__get((r + 2));
            						}
HXLINE( 746)						{
HXLINE( 746)							w = (w + 1);
HXDLIN( 746)							rgba->b[(w - 1)] = data->b->__get((r + 1));
            						}
HXLINE( 747)						{
HXLINE( 747)							w = (w + 1);
HXDLIN( 747)							rgba->b[(w - 1)] = data->b->__get(r);
            						}
HXLINE( 748)						{
HXLINE( 748)							w = (w + 1);
HXDLIN( 748)							rgba->b[(w - 1)] = data->b->__get((r + 3));
            						}
HXLINE( 749)						r = (r + 4);
            					}
            				}
            			}
            		}
HXLINE( 752)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 753)		l->add(::format::png::Chunk_obj::CHeader( ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),false)
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),8)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),::format::png::Color_obj::ColTrue(true)))));
HXLINE( 754)		l->add(::format::png::Chunk_obj::CData(::format::tools::Deflate_obj::run(rgba,level)));
HXLINE( 755)		l->add(::format::png::Chunk_obj::CEnd_dyn());
HXLINE( 756)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,build32BGRA,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { outValue = filter_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buildRGB") ) { outValue = buildRGB_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeader") ) { outValue = getHeader_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"extract32") ) { outValue = extract32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"buildGrey") ) { outValue = buildGrey_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getPalette") ) { outValue = getPalette_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"extractGrey") ) { outValue = extractGrey_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"build32ARGB") ) { outValue = build32ARGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"build32BGRA") ) { outValue = build32BGRA_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reverseBytes") ) { outValue = reverseBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"buildIndexed") ) { outValue = buildIndexed_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("getHeader",c3,92,56,79),
	HX_("getPalette",85,18,c5,bb),
	HX_("filter",b8,1f,35,85),
	HX_("reverseBytes",e9,e3,fc,d3),
	HX_("extractGrey",40,e9,39,59),
	HX_("extract32",20,74,f3,90),
	HX_("buildGrey",ad,09,a8,e4),
	HX_("buildIndexed",63,8a,17,f3),
	HX_("buildRGB",7f,4c,b6,53),
	HX_("build32ARGB",19,2f,4e,75),
	HX_("build32BGRA",81,16,ef,75),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.png.Tools",7f,40,56,da);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace png
