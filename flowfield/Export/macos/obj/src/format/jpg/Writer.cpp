#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_jpg_Writer
#include <format/jpg/Writer.h>
#endif
#ifndef INCLUDED_format_jpg__Writer_BitString
#include <format/jpg/_Writer/BitString.h>
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
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_551_new,"format.jpg.Writer","new",0x6060fb09,"format.jpg.Writer.new","format/jpg/Writer.hx",551,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_37_initZigZag,"format.jpg.Writer","initZigZag",0xf9d54f8f,"format.jpg.Writer.initZigZag","format/jpg/Writer.hx",37,0x7ff4c3c5)
static const int _hx_array_data_3e9ac297_4[] = {
	(int)0,(int)1,(int)5,(int)6,(int)14,(int)15,(int)27,(int)28,(int)2,(int)4,(int)7,(int)13,(int)16,(int)26,(int)29,(int)42,(int)3,(int)8,(int)12,(int)17,(int)25,(int)30,(int)41,(int)43,(int)9,(int)11,(int)18,(int)24,(int)31,(int)40,(int)44,(int)53,(int)10,(int)19,(int)23,(int)32,(int)39,(int)45,(int)52,(int)54,(int)20,(int)22,(int)33,(int)38,(int)46,(int)51,(int)55,(int)60,(int)21,(int)34,(int)37,(int)47,(int)50,(int)56,(int)59,(int)61,(int)35,(int)36,(int)48,(int)49,(int)57,(int)58,(int)62,(int)63,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_54_initQuantTables,"format.jpg.Writer","initQuantTables",0x3ad0a681,"format.jpg.Writer.initQuantTables","format/jpg/Writer.hx",54,0x7ff4c3c5)
static const int _hx_array_data_3e9ac297_10[] = {
	(int)16,(int)11,(int)10,(int)16,(int)24,(int)40,(int)51,(int)61,(int)12,(int)12,(int)14,(int)19,(int)26,(int)58,(int)60,(int)55,(int)14,(int)13,(int)16,(int)24,(int)40,(int)57,(int)69,(int)56,(int)14,(int)17,(int)22,(int)29,(int)51,(int)87,(int)80,(int)62,(int)18,(int)22,(int)37,(int)56,(int)68,(int)109,(int)103,(int)77,(int)24,(int)35,(int)55,(int)64,(int)81,(int)104,(int)113,(int)92,(int)49,(int)64,(int)78,(int)87,(int)103,(int)121,(int)120,(int)101,(int)72,(int)92,(int)95,(int)98,(int)112,(int)100,(int)103,(int)99,
};
static const int _hx_array_data_3e9ac297_11[] = {
	(int)17,(int)18,(int)24,(int)47,(int)99,(int)99,(int)99,(int)99,(int)18,(int)21,(int)26,(int)66,(int)99,(int)99,(int)99,(int)99,(int)24,(int)26,(int)56,(int)99,(int)99,(int)99,(int)99,(int)99,(int)47,(int)66,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,(int)99,
};
static const Float _hx_array_data_3e9ac297_12[] = {
	1.0,1.387039845,1.306562965,1.175875602,1.0,0.785694958,0.541196100,0.275899379,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_106_initLuminance,"format.jpg.Writer","initLuminance",0x464272b1,"format.jpg.Writer.initLuminance","format/jpg/Writer.hx",106,0x7ff4c3c5)
static const int _hx_array_data_3e9ac297_14[] = {
	(int)0,(int)0,(int)1,(int)5,(int)1,(int)1,(int)1,(int)1,(int)1,(int)1,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,
};
static const int _hx_array_data_3e9ac297_15[] = {
	(int)0,(int)0,(int)2,(int)1,(int)3,(int)3,(int)2,(int)4,(int)3,(int)5,(int)5,(int)4,(int)4,(int)0,(int)0,(int)1,(int)125,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_135_strIntsToBytes,"format.jpg.Writer","strIntsToBytes",0x54a90372,"format.jpg.Writer.strIntsToBytes","format/jpg/Writer.hx",135,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_159_initChrominance,"format.jpg.Writer","initChrominance",0x640f48f8,"format.jpg.Writer.initChrominance","format/jpg/Writer.hx",159,0x7ff4c3c5)
static const int _hx_array_data_3e9ac297_19[] = {
	(int)0,(int)0,(int)3,(int)1,(int)1,(int)1,(int)1,(int)1,(int)1,(int)1,(int)1,(int)1,(int)0,(int)0,(int)0,(int)0,(int)0,
};
static const int _hx_array_data_3e9ac297_20[] = {
	(int)0,(int)0,(int)2,(int)1,(int)2,(int)4,(int)4,(int)3,(int)4,(int)7,(int)5,(int)4,(int)4,(int)0,(int)1,(int)2,(int)119,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_193_initHuffmanTbl,"format.jpg.Writer","initHuffmanTbl",0xbf2fc538,"format.jpg.Writer.initHuffmanTbl","format/jpg/Writer.hx",193,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_200_computeHuffmanTbl,"format.jpg.Writer","computeHuffmanTbl",0xd061a4d1,"format.jpg.Writer.computeHuffmanTbl","format/jpg/Writer.hx",200,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_220_initCategoryNumber,"format.jpg.Writer","initCategoryNumber",0xef3bbf0e,"format.jpg.Writer.initCategoryNumber","format/jpg/Writer.hx",220,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_249_writeBits,"format.jpg.Writer","writeBits",0xaabefeee,"format.jpg.Writer.writeBits","format/jpg/Writer.hx",249,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_274_writeWord,"format.jpg.Writer","writeWord",0xb8a505b2,"format.jpg.Writer.writeWord","format/jpg/Writer.hx",274,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_281_fDCTQuant,"format.jpg.Writer","fDCTQuant",0x07b7881d,"format.jpg.Writer.fDCTQuant","format/jpg/Writer.hx",281,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_387_b,"format.jpg.Writer","b",0x2cc1fecb,"format.jpg.Writer.b","format/jpg/Writer.hx",387,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_390_writeAPP0,"format.jpg.Writer","writeAPP0",0xaa02b057,"format.jpg.Writer.writeAPP0","format/jpg/Writer.hx",390,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_406_writeDQT,"format.jpg.Writer","writeDQT",0x0437195f,"format.jpg.Writer.writeDQT","format/jpg/Writer.hx",406,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_416_writeSOF0,"format.jpg.Writer","writeSOF0",0xb5e7bc8e,"format.jpg.Writer.writeSOF0","format/jpg/Writer.hx",416,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_436_writeDHT,"format.jpg.Writer","writeDHT",0x04371188,"format.jpg.Writer.writeDHT","format/jpg/Writer.hx",436,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_460_writeSOS,"format.jpg.Writer","writeSOS",0x0442796f,"format.jpg.Writer.writeSOS","format/jpg/Writer.hx",460,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_478_processDU,"format.jpg.Writer","processDU",0x33ffa729,"format.jpg.Writer.processDU","format/jpg/Writer.hx",478,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_534_RGB2YUV,"format.jpg.Writer","RGB2YUV",0xe49ba29e,"format.jpg.Writer.RGB2YUV","format/jpg/Writer.hx",534,0x7ff4c3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_1edcfd72dbbcfda8_590_write,"format.jpg.Writer","write",0x2e0553c8,"format.jpg.Writer.write","format/jpg/Writer.hx",590,0x7ff4c3c5)
namespace format{
namespace jpg{

void Writer_obj::__construct( ::haxe::io::Output out){
            	HX_GC_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_551_new)
HXLINE( 553)		this->YTable = ::Array_obj< int >::__new();
HXLINE( 554)		this->UVTable = ::Array_obj< int >::__new();
HXLINE( 555)		this->fdtbl_Y = ::Array_obj< Float >::__new();
HXLINE( 556)		this->fdtbl_UV = ::Array_obj< Float >::__new();
HXLINE( 557)		{
HXLINE( 557)			int _g = 0;
HXDLIN( 557)			while((_g < 64)){
HXLINE( 557)				_g = (_g + 1);
HXDLIN( 557)				int i = (_g - 1);
HXLINE( 558)				this->YTable->push(0);
HXDLIN( 558)				this->UVTable->push(0);
HXLINE( 559)				this->fdtbl_Y->push(((Float)0.0));
HXDLIN( 559)				this->fdtbl_UV->push(((Float)0.0));
            			}
            		}
HXLINE( 562)		this->bitcode =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 563)		this->category =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 564)		this->byteout = out;
HXLINE( 565)		this->bytenew = 0;
HXLINE( 566)		this->bytepos = 7;
HXLINE( 568)		this->YDC_HT =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 569)		this->UVDC_HT =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 570)		this->YAC_HT =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 571)		this->UVAC_HT =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 573)		this->YDU = ::Array_obj< Float >::__new();
HXLINE( 574)		this->UDU = ::Array_obj< Float >::__new();
HXLINE( 575)		this->VDU = ::Array_obj< Float >::__new();
HXLINE( 576)		this->DU = ::Array_obj< Float >::__new();
HXLINE( 577)		{
HXLINE( 577)			int _g1 = 0;
HXDLIN( 577)			while((_g1 < 64)){
HXLINE( 577)				_g1 = (_g1 + 1);
HXDLIN( 577)				int i = (_g1 - 1);
HXLINE( 578)				this->YDU->push(((Float)0.0));
HXDLIN( 578)				this->UDU->push(((Float)0.0));
HXDLIN( 578)				this->VDU->push(((Float)0.0));
HXDLIN( 578)				this->DU->push(((Float)0.0));
            			}
            		}
HXLINE( 580)		this->initZigZag();
HXLINE( 581)		this->initLuminance();
HXLINE( 582)		this->initChrominance();
HXLINE( 586)		this->initHuffmanTbl();
HXLINE( 587)		this->initCategoryNumber();
            	}

Dynamic Writer_obj::__CreateEmpty() { return new Writer_obj; }

void *Writer_obj::_hx_vtable = 0;

Dynamic Writer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Writer_obj > _hx_result = new Writer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Writer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5cb1ec5d;
}

void Writer_obj::initZigZag(){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_37_initZigZag)
HXDLIN(  37)		this->ZigZag = ::Array_obj< int >::fromData( _hx_array_data_3e9ac297_4,64);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,initZigZag,(void))

void Writer_obj::initQuantTables(int sf){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_54_initQuantTables)
HXLINE(  55)		::Array< int > YQT = ::Array_obj< int >::fromData( _hx_array_data_3e9ac297_10,64);
HXLINE(  65)		{
HXLINE(  65)			int _g = 0;
HXDLIN(  65)			while((_g < 64)){
HXLINE(  65)				_g = (_g + 1);
HXDLIN(  65)				int i = (_g - 1);
HXLINE(  66)				int t = ::Math_obj::floor((( (Float)(((YQT->__get(i) * sf) + 50)) ) / ( (Float)(100) )));
HXLINE(  67)				if ((t < 1)) {
HXLINE(  67)					t = 1;
            				}
            				else {
HXLINE(  68)					if ((t > 255)) {
HXLINE(  68)						t = 255;
            					}
            				}
HXLINE(  69)				this->YTable[this->ZigZag->__get(i)] = t;
            			}
            		}
HXLINE(  71)		::Array< int > UVQT = ::Array_obj< int >::fromData( _hx_array_data_3e9ac297_11,64);
HXLINE(  81)		{
HXLINE(  81)			int _g1 = 0;
HXDLIN(  81)			while((_g1 < 64)){
HXLINE(  81)				_g1 = (_g1 + 1);
HXDLIN(  81)				int j = (_g1 - 1);
HXLINE(  82)				int u = ::Math_obj::floor((( (Float)(((UVQT->__get(j) * sf) + 50)) ) / ( (Float)(100) )));
HXLINE(  83)				if ((u < 1)) {
HXLINE(  83)					u = 1;
            				}
            				else {
HXLINE(  84)					if ((u > 255)) {
HXLINE(  84)						u = 255;
            					}
            				}
HXLINE(  85)				this->UVTable[this->ZigZag->__get(j)] = u;
            			}
            		}
HXLINE(  87)		::Array< Float > aasf = ::Array_obj< Float >::fromData( _hx_array_data_3e9ac297_12,8);
HXLINE(  91)		int k = 0;
HXLINE(  92)		{
HXLINE(  92)			int _g2 = 0;
HXDLIN(  92)			while((_g2 < 8)){
HXLINE(  92)				_g2 = (_g2 + 1);
HXDLIN(  92)				int row = (_g2 - 1);
HXLINE(  93)				{
HXLINE(  93)					int _g = 0;
HXDLIN(  93)					while((_g < 8)){
HXLINE(  93)						_g = (_g + 1);
HXDLIN(  93)						int col = (_g - 1);
HXLINE(  94)						this->fdtbl_Y[k] = (((Float)1.0) / (((( (Float)(this->YTable->__get(this->ZigZag->__get(k))) ) * aasf->__get(row)) * aasf->__get(col)) * ((Float)8.0)));
HXLINE(  95)						this->fdtbl_UV[k] = (((Float)1.0) / (((( (Float)(this->UVTable->__get(this->ZigZag->__get(k))) ) * aasf->__get(row)) * aasf->__get(col)) * ((Float)8.0)));
HXLINE(  96)						k = (k + 1);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,initQuantTables,(void))

void Writer_obj::initLuminance(){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_106_initLuminance)
HXLINE( 107)		this->std_dc_luminance_nrcodes = ::Array_obj< int >::fromData( _hx_array_data_3e9ac297_14,17);
HXLINE( 108)		this->std_dc_luminance_values = this->strIntsToBytes(HX_("0,1,2,3,4,5,6,7,8,9,10,11",a2,68,48,18));
HXLINE( 109)		this->std_ac_luminance_nrcodes = ::Array_obj< int >::fromData( _hx_array_data_3e9ac297_15,17);
HXLINE( 110)		this->std_ac_luminance_values = this->strIntsToBytes(((((((((((((((((((((HX_("0x01,0x02,0x03,0x00,0x04,0x11,0x05,0x12,",6a,3d,5f,17) + HX_("0x21,0x31,0x41,0x06,0x13,0x51,0x61,0x07,",f2,db,ed,85)) + HX_("0x22,0x71,0x14,0x32,0x81,0x91,0xa1,0x08,",53,80,5a,45)) + HX_("0x23,0x42,0xb1,0xc1,0x15,0x52,0xd1,0xf0,",0e,10,c9,cc)) + HX_("0x24,0x33,0x62,0x72,0x82,0x09,0x0a,0x16,",60,84,fd,f7)) + HX_("0x17,0x18,0x19,0x1a,0x25,0x26,0x27,0x28,",35,32,33,08)) + HX_("0x29,0x2a,0x34,0x35,0x36,0x37,0x38,0x39,",b5,d9,77,75)) + HX_("0x3a,0x43,0x44,0x45,0x46,0x47,0x48,0x49,",cc,4b,ad,02)) + HX_("0x4a,0x53,0x54,0x55,0x56,0x57,0x58,0x59,",4c,6d,79,db)) + HX_("0x5a,0x63,0x64,0x65,0x66,0x67,0x68,0x69,",cc,8e,45,b4)) + HX_("0x6a,0x73,0x74,0x75,0x76,0x77,0x78,0x79,",4c,b0,11,8d)) + HX_("0x7a,0x83,0x84,0x85,0x86,0x87,0x88,0x89,",cc,d1,dd,65)) + HX_("0x8a,0x92,0x93,0x94,0x95,0x96,0x97,0x98,",4d,9d,2d,37)) + HX_("0x99,0x9a,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,",55,ce,24,69)) + HX_("0xa8,0xa9,0xaa,0xb2,0xb3,0xb4,0xb5,0xb6,",cd,8e,45,4f)) + HX_("0xb7,0xb8,0xb9,0xba,0xc2,0xc3,0xc4,0xc5,",f5,75,6b,bc)) + HX_("0xc6,0xc7,0xc8,0xc9,0xca,0xd2,0xd3,0xd4,",cd,25,ed,06)) + HX_("0xd5,0xd6,0xd7,0xd8,0xd9,0xda,0xe1,0xe2,",55,53,72,2f)) + HX_("0xe3,0xe4,0xe5,0xe6,0xe7,0xe8,0xe9,0xea,",75,3e,57,27)) + HX_("0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,",fc,20,c2,bc)) + HX_("0xf9,0xfa",74,3c,85,2e)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,initLuminance,(void))

 ::haxe::io::Bytes Writer_obj::strIntsToBytes(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_135_strIntsToBytes)
HXLINE( 136)		int len = s.length;
HXLINE( 137)		 ::haxe::io::BytesBuffer b =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 138)		int val = 0;
HXLINE( 139)		int i = 0;
HXLINE( 140)		{
HXLINE( 140)			int _g = 0;
HXDLIN( 140)			int _g1 = len;
HXDLIN( 140)			while((_g < _g1)){
HXLINE( 140)				_g = (_g + 1);
HXDLIN( 140)				int j = (_g - 1);
HXLINE( 141)				if ((s.charAt(j) == HX_(",",2c,00,00,00))) {
HXLINE( 142)					val = ( (int)(::Std_obj::parseInt(s.substr(i,(j - i)))) );
HXLINE( 143)					b->b->push(val);
HXLINE( 144)					i = (j + 1);
            				}
            			}
            		}
HXLINE( 147)		if ((i < len)) {
HXLINE( 148)			val = ( (int)(::Std_obj::parseInt(s.substr(i,null()))) );
HXLINE( 149)			b->b->push(val);
            		}
HXLINE( 151)		return b->getBytes();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,strIntsToBytes,return )

void Writer_obj::initChrominance(){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_159_initChrominance)
HXLINE( 160)		this->std_dc_chrominance_nrcodes = ::Array_obj< int >::fromData( _hx_array_data_3e9ac297_19,17);
HXLINE( 161)		this->std_dc_chrominance_values = this->strIntsToBytes(HX_("0,1,2,3,4,5,6,7,8,9,10,11",a2,68,48,18));
HXLINE( 162)		this->std_ac_chrominance_nrcodes = ::Array_obj< int >::fromData( _hx_array_data_3e9ac297_20,17);
HXLINE( 163)		this->std_ac_chrominance_values = this->strIntsToBytes(((((((((((((((((((((HX_("0x00,0x01,0x02,0x03,0x11,0x04,0x05,0x21,",40,95,37,7e) + HX_("0x31,0x06,0x12,0x41,0x51,0x07,0x61,0x71,",b2,75,10,ad)) + HX_("0x13,0x22,0x32,0x81,0x08,0x14,0x42,0x91,",13,9b,db,55)) + HX_("0xa1,0xb1,0xc1,0x09,0x23,0x33,0x52,0xf0,",3a,4a,d7,e2)) + HX_("0x15,0x62,0x72,0xd1,0x0a,0x16,0x24,0x34,",83,87,5d,bf)) + HX_("0xe1,0x25,0xf1,0x17,0x18,0x19,0x1a,0x26,",b9,e5,3a,37)) + HX_("0x27,0x28,0x29,0x2a,0x35,0x36,0x37,0x38,",b5,53,ff,e0)) + HX_("0x39,0x3a,0x43,0x44,0x45,0x46,0x47,0x48,",55,3c,20,56)) + HX_("0x49,0x4a,0x53,0x54,0x55,0x56,0x57,0x58,",d5,5d,ec,2e)) + HX_("0x59,0x5a,0x63,0x64,0x65,0x66,0x67,0x68,",55,7f,b8,07)) + HX_("0x69,0x6a,0x73,0x74,0x75,0x76,0x77,0x78,",d5,a0,84,e0)) + HX_("0x79,0x7a,0x82,0x83,0x84,0x85,0x86,0x87,",75,03,2d,c1)) + HX_("0x88,0x89,0x8a,0x92,0x93,0x94,0x95,0x96,",4d,31,94,96)) + HX_("0x97,0x98,0x99,0x9a,0xa2,0xa3,0xa4,0xa5,",b5,95,13,28)) + HX_("0xa6,0xa7,0xa8,0xa9,0xaa,0xb2,0xb3,0xb4,",cd,e2,54,55)) + HX_("0xb5,0xb6,0xb7,0xb8,0xb9,0xba,0xc2,0xc3,",f5,87,6f,a7)) + HX_("0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xd2,",cd,39,35,6d)) + HX_("0xd3,0xd4,0xd5,0xd6,0xd7,0xd8,0xd9,0xda,",f5,1c,8b,4e)) + HX_("0xe2,0xe3,0xe4,0xe5,0xe6,0xe7,0xe8,0xe9,",fc,8d,a6,85)) + HX_("0xea,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,",cd,80,0f,53)) + HX_("0xf9,0xfa",74,3c,85,2e)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,initChrominance,(void))

void Writer_obj::initHuffmanTbl(){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_193_initHuffmanTbl)
HXLINE( 194)		this->YDC_HT = this->computeHuffmanTbl(this->std_dc_luminance_nrcodes,this->std_dc_luminance_values);
HXLINE( 195)		this->UVDC_HT = this->computeHuffmanTbl(this->std_dc_chrominance_nrcodes,this->std_dc_chrominance_values);
HXLINE( 196)		this->YAC_HT = this->computeHuffmanTbl(this->std_ac_luminance_nrcodes,this->std_ac_luminance_values);
HXLINE( 197)		this->UVAC_HT = this->computeHuffmanTbl(this->std_ac_chrominance_nrcodes,this->std_ac_chrominance_values);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,initHuffmanTbl,(void))

 ::haxe::ds::IntMap Writer_obj::computeHuffmanTbl(::Array< int > nrcodes, ::haxe::io::Bytes std_table){
            	HX_GC_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_200_computeHuffmanTbl)
HXLINE( 201)		int codevalue = 0;
HXLINE( 202)		int pos_in_table = 0;
HXLINE( 203)		 ::haxe::ds::IntMap HT =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 204)		{
HXLINE( 204)			int _g = 1;
HXDLIN( 204)			while((_g < 17)){
HXLINE( 204)				_g = (_g + 1);
HXDLIN( 204)				int k = (_g - 1);
HXLINE( 205)				int end = nrcodes->__get(k);
HXLINE( 206)				{
HXLINE( 206)					int _g1 = 0;
HXDLIN( 206)					int _g2 = end;
HXDLIN( 206)					while((_g1 < _g2)){
HXLINE( 206)						_g1 = (_g1 + 1);
HXDLIN( 206)						int j = (_g1 - 1);
HXLINE( 207)						int idx = ( (int)(std_table->b->__get(pos_in_table)) );
HXLINE( 208)						HT->set(idx, ::format::jpg::_Writer::BitString_obj::__alloc( HX_CTX ,k,codevalue));
HXLINE( 209)						pos_in_table = (pos_in_table + 1);
HXLINE( 210)						codevalue = (codevalue + 1);
            					}
            				}
HXLINE( 212)				codevalue = (codevalue * 2);
            			}
            		}
HXLINE( 214)		return HT;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,computeHuffmanTbl,return )

void Writer_obj::initCategoryNumber(){
            	HX_GC_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_220_initCategoryNumber)
HXLINE( 221)		int nrlower = 1;
HXLINE( 222)		int nrupper = 2;
HXLINE( 223)		int idx;
HXLINE( 224)		{
HXLINE( 224)			int _g = 1;
HXDLIN( 224)			while((_g < 16)){
HXLINE( 224)				_g = (_g + 1);
HXDLIN( 224)				int cat = (_g - 1);
HXLINE( 226)				{
HXLINE( 226)					int _g1 = nrlower;
HXDLIN( 226)					int _g2 = nrupper;
HXDLIN( 226)					while((_g1 < _g2)){
HXLINE( 226)						_g1 = (_g1 + 1);
HXDLIN( 226)						int nr = (_g1 - 1);
HXLINE( 227)						idx = (32767 + nr);
HXLINE( 228)						this->category->set(idx,cat);
HXLINE( 229)						{
HXLINE( 229)							::Dynamic this1 = this->bitcode;
HXDLIN( 229)							( ( ::haxe::ds::IntMap)(this1) )->set(idx, ::format::jpg::_Writer::BitString_obj::__alloc( HX_CTX ,cat,nr));
            						}
            					}
            				}
HXLINE( 232)				int nrneg = -((nrupper - 1));
HXLINE( 233)				while((nrneg <= -(nrlower))){
HXLINE( 234)					idx = (32767 + nrneg);
HXLINE( 235)					this->category->set(idx,cat);
HXLINE( 236)					{
HXLINE( 236)						::Dynamic this1 = this->bitcode;
HXDLIN( 236)						( ( ::haxe::ds::IntMap)(this1) )->set(idx, ::format::jpg::_Writer::BitString_obj::__alloc( HX_CTX ,cat,((nrupper - 1) + nrneg)));
            					}
HXLINE( 237)					nrneg = (nrneg + 1);
            				}
HXLINE( 239)				nrlower = (nrlower << 1);
HXLINE( 240)				nrupper = (nrupper << 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,initCategoryNumber,(void))

void Writer_obj::writeBits( ::format::jpg::_Writer::BitString bs){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_249_writeBits)
HXLINE( 250)		int value = bs->val;
HXLINE( 251)		int posval = (bs->len - 1);
HXLINE( 252)		while((posval >= 0)){
HXLINE( 254)			if (((value & (1 << posval)) != 0)) {
HXLINE( 256)				 ::format::jpg::Writer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 256)				_hx_tmp->bytenew = (_hx_tmp->bytenew | (1 << this->bytepos));
            			}
HXLINE( 258)			posval = (posval - 1);
HXLINE( 259)			this->bytepos--;
HXLINE( 260)			if ((this->bytepos < 0)) {
HXLINE( 261)				if ((this->bytenew == 255)) {
HXLINE( 262)					this->byteout->writeByte(255);
HXLINE( 263)					this->byteout->writeByte(0);
            				}
            				else {
HXLINE( 266)					this->byteout->writeByte(this->bytenew);
            				}
HXLINE( 268)				this->bytepos = 7;
HXLINE( 269)				this->bytenew = 0;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeBits,(void))

void Writer_obj::writeWord(int val){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_274_writeWord)
HXLINE( 275)		this->byteout->writeByte(((val >> 8) & 255));
HXLINE( 276)		this->byteout->writeByte((val & 255));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeWord,(void))

::Array< Float > Writer_obj::fDCTQuant(::Array< Float > data,::Array< Float > fdtbl){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_281_fDCTQuant)
HXLINE( 283)		int dataOff = 0;
HXLINE( 284)		{
HXLINE( 284)			int _g = 0;
HXDLIN( 284)			while((_g < 8)){
HXLINE( 284)				_g = (_g + 1);
HXDLIN( 284)				int i = (_g - 1);
HXLINE( 285)				Float tmp0 = (data->__get(dataOff) + data->__get((dataOff + 7)));
HXLINE( 286)				Float tmp7 = (data->__get(dataOff) - data->__get((dataOff + 7)));
HXLINE( 287)				Float tmp1 = (data->__get((dataOff + 1)) + data->__get((dataOff + 6)));
HXLINE( 288)				Float tmp6 = (data->__get((dataOff + 1)) - data->__get((dataOff + 6)));
HXLINE( 289)				Float tmp2 = (data->__get((dataOff + 2)) + data->__get((dataOff + 5)));
HXLINE( 290)				Float tmp5 = (data->__get((dataOff + 2)) - data->__get((dataOff + 5)));
HXLINE( 291)				Float tmp3 = (data->__get((dataOff + 3)) + data->__get((dataOff + 4)));
HXLINE( 292)				Float tmp4 = (data->__get((dataOff + 3)) - data->__get((dataOff + 4)));
HXLINE( 295)				Float tmp10 = (tmp0 + tmp3);
HXLINE( 296)				Float tmp13 = (tmp0 - tmp3);
HXLINE( 297)				Float tmp11 = (tmp1 + tmp2);
HXLINE( 298)				Float tmp12 = (tmp1 - tmp2);
HXLINE( 300)				data[dataOff] = (tmp10 + tmp11);
HXLINE( 301)				data[(dataOff + 4)] = (tmp10 - tmp11);
HXLINE( 303)				Float z1 = ((tmp12 + tmp13) * ((Float)0.707106781));
HXLINE( 304)				data[(dataOff + 2)] = (tmp13 + z1);
HXLINE( 305)				data[(dataOff + 6)] = (tmp13 - z1);
HXLINE( 308)				tmp10 = (tmp4 + tmp5);
HXLINE( 309)				tmp11 = (tmp5 + tmp6);
HXLINE( 310)				tmp12 = (tmp6 + tmp7);
HXLINE( 313)				Float z5 = ((tmp10 - tmp12) * ((Float)0.382683433));
HXLINE( 314)				Float z2 = ((((Float)0.541196100) * tmp10) + z5);
HXLINE( 315)				Float z4 = ((((Float)1.306562965) * tmp12) + z5);
HXLINE( 316)				Float z3 = (tmp11 * ((Float)0.707106781));
HXLINE( 318)				Float z11 = (tmp7 + z3);
HXLINE( 319)				Float z13 = (tmp7 - z3);
HXLINE( 321)				data[(dataOff + 5)] = (z13 + z2);
HXLINE( 322)				data[(dataOff + 3)] = (z13 - z2);
HXLINE( 323)				data[(dataOff + 1)] = (z11 + z4);
HXLINE( 324)				data[(dataOff + 7)] = (z11 - z4);
HXLINE( 326)				dataOff = (dataOff + 8);
            			}
            		}
HXLINE( 330)		dataOff = 0;
HXLINE( 331)		{
HXLINE( 331)			int _g1 = 0;
HXDLIN( 331)			while((_g1 < 8)){
HXLINE( 331)				_g1 = (_g1 + 1);
HXDLIN( 331)				int j = (_g1 - 1);
HXLINE( 332)				Float tmp0p2 = (data->__get(dataOff) + data->__get((dataOff + 56)));
HXLINE( 333)				Float tmp7p2 = (data->__get(dataOff) - data->__get((dataOff + 56)));
HXLINE( 334)				Float tmp1p2 = (data->__get((dataOff + 8)) + data->__get((dataOff + 48)));
HXLINE( 335)				Float tmp6p2 = (data->__get((dataOff + 8)) - data->__get((dataOff + 48)));
HXLINE( 336)				Float tmp2p2 = (data->__get((dataOff + 16)) + data->__get((dataOff + 40)));
HXLINE( 337)				Float tmp5p2 = (data->__get((dataOff + 16)) - data->__get((dataOff + 40)));
HXLINE( 338)				Float tmp3p2 = (data->__get((dataOff + 24)) + data->__get((dataOff + 32)));
HXLINE( 339)				Float tmp4p2 = (data->__get((dataOff + 24)) - data->__get((dataOff + 32)));
HXLINE( 342)				Float tmp10p2 = (tmp0p2 + tmp3p2);
HXLINE( 343)				Float tmp13p2 = (tmp0p2 - tmp3p2);
HXLINE( 344)				Float tmp11p2 = (tmp1p2 + tmp2p2);
HXLINE( 345)				Float tmp12p2 = (tmp1p2 - tmp2p2);
HXLINE( 347)				data[dataOff] = (tmp10p2 + tmp11p2);
HXLINE( 348)				data[(dataOff + 32)] = (tmp10p2 - tmp11p2);
HXLINE( 350)				Float z1p2 = ((tmp12p2 + tmp13p2) * ((Float)0.707106781));
HXLINE( 351)				data[(dataOff + 16)] = (tmp13p2 + z1p2);
HXLINE( 352)				data[(dataOff + 48)] = (tmp13p2 - z1p2);
HXLINE( 355)				tmp10p2 = (tmp4p2 + tmp5p2);
HXLINE( 356)				tmp11p2 = (tmp5p2 + tmp6p2);
HXLINE( 357)				tmp12p2 = (tmp6p2 + tmp7p2);
HXLINE( 360)				Float z5p2 = ((tmp10p2 - tmp12p2) * ((Float)0.382683433));
HXLINE( 361)				Float z2p2 = ((((Float)0.541196100) * tmp10p2) + z5p2);
HXLINE( 362)				Float z4p2 = ((((Float)1.306562965) * tmp12p2) + z5p2);
HXLINE( 363)				Float z3p2 = (tmp11p2 * ((Float)0.707106781));
HXLINE( 365)				Float z11p2 = (tmp7p2 + z3p2);
HXLINE( 366)				Float z13p2 = (tmp7p2 - z3p2);
HXLINE( 368)				data[(dataOff + 40)] = (z13p2 + z2p2);
HXLINE( 369)				data[(dataOff + 24)] = (z13p2 - z2p2);
HXLINE( 370)				data[(dataOff + 8)] = (z11p2 + z4p2);
HXLINE( 371)				data[(dataOff + 56)] = (z11p2 - z4p2);
HXLINE( 373)				dataOff = (dataOff + 1);
            			}
            		}
HXLINE( 377)		{
HXLINE( 377)			int _g2 = 0;
HXDLIN( 377)			while((_g2 < 64)){
HXLINE( 377)				_g2 = (_g2 + 1);
HXDLIN( 377)				int k = (_g2 - 1);
HXLINE( 379)				data[k] = ( (Float)(::Math_obj::round((data->__get(k) * fdtbl->__get(k)))) );
            			}
            		}
HXLINE( 381)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,fDCTQuant,return )

void Writer_obj::b(int v){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_387_b)
HXDLIN( 387)		this->byteout->writeByte(v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,b,(void))

void Writer_obj::writeAPP0(){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_390_writeAPP0)
HXLINE( 391)		this->byteout->writeByte(255);
HXDLIN( 391)		this->byteout->writeByte(224);
HXLINE( 392)		this->byteout->writeByte(0);
HXDLIN( 392)		this->byteout->writeByte(16);
HXLINE( 393)		this->byteout->writeByte(74);
HXLINE( 394)		this->byteout->writeByte(70);
HXLINE( 395)		this->byteout->writeByte(73);
HXLINE( 396)		this->byteout->writeByte(70);
HXLINE( 397)		this->byteout->writeByte(0);
HXLINE( 398)		this->byteout->writeByte(1);
HXLINE( 399)		this->byteout->writeByte(1);
HXLINE( 400)		this->byteout->writeByte(0);
HXLINE( 401)		this->byteout->writeByte(0);
HXDLIN( 401)		this->byteout->writeByte(1);
HXLINE( 402)		this->byteout->writeByte(0);
HXDLIN( 402)		this->byteout->writeByte(1);
HXLINE( 403)		this->byteout->writeByte(0);
HXLINE( 404)		this->byteout->writeByte(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,writeAPP0,(void))

void Writer_obj::writeDQT(){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_406_writeDQT)
HXLINE( 407)		this->byteout->writeByte(255);
HXDLIN( 407)		this->byteout->writeByte(219);
HXLINE( 408)		this->byteout->writeByte(0);
HXDLIN( 408)		this->byteout->writeByte(132);
HXLINE( 409)		this->byteout->writeByte(0);
HXLINE( 410)		{
HXLINE( 410)			int _g = 0;
HXDLIN( 410)			while((_g < 64)){
HXLINE( 410)				_g = (_g + 1);
HXDLIN( 410)				int j = (_g - 1);
HXLINE( 411)				this->byteout->writeByte(this->YTable->__get(j));
            			}
            		}
HXLINE( 412)		this->byteout->writeByte(1);
HXLINE( 413)		{
HXLINE( 413)			int _g1 = 0;
HXDLIN( 413)			while((_g1 < 64)){
HXLINE( 413)				_g1 = (_g1 + 1);
HXDLIN( 413)				int j = (_g1 - 1);
HXLINE( 414)				this->byteout->writeByte(this->UVTable->__get(j));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,writeDQT,(void))

void Writer_obj::writeSOF0(int width,int height){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_416_writeSOF0)
HXLINE( 417)		this->byteout->writeByte(255);
HXDLIN( 417)		this->byteout->writeByte(192);
HXLINE( 418)		this->byteout->writeByte(0);
HXDLIN( 418)		this->byteout->writeByte(17);
HXLINE( 419)		this->byteout->writeByte(8);
HXLINE( 420)		this->byteout->writeByte(((height >> 8) & 255));
HXLINE( 421)		this->byteout->writeByte((height & 255));
HXLINE( 422)		this->byteout->writeByte(((width >> 8) & 255));
HXLINE( 423)		this->byteout->writeByte((width & 255));
HXLINE( 424)		this->byteout->writeByte(3);
HXLINE( 425)		this->byteout->writeByte(1);
HXLINE( 426)		this->byteout->writeByte(17);
HXLINE( 427)		this->byteout->writeByte(0);
HXLINE( 428)		this->byteout->writeByte(2);
HXLINE( 429)		this->byteout->writeByte(17);
HXLINE( 430)		this->byteout->writeByte(1);
HXLINE( 431)		this->byteout->writeByte(3);
HXLINE( 432)		this->byteout->writeByte(17);
HXLINE( 433)		this->byteout->writeByte(1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeSOF0,(void))

void Writer_obj::writeDHT(){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_436_writeDHT)
HXLINE( 437)		this->byteout->writeByte(255);
HXDLIN( 437)		this->byteout->writeByte(196);
HXLINE( 438)		this->byteout->writeByte(1);
HXDLIN( 438)		this->byteout->writeByte(162);
HXLINE( 439)		this->byteout->writeByte(0);
HXLINE( 440)		{
HXLINE( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(1));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(2));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(3));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(4));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(5));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(6));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(7));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(8));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(9));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(10));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(11));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(12));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(13));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(14));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(15));
HXDLIN( 441)			this->byteout->writeByte(this->std_dc_luminance_nrcodes->__get(16));
            		}
HXLINE( 442)		this->byteout->write(this->std_dc_luminance_values);
HXLINE( 444)		this->byteout->writeByte(16);
HXLINE( 445)		{
HXLINE( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(1));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(2));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(3));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(4));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(5));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(6));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(7));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(8));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(9));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(10));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(11));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(12));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(13));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(14));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(15));
HXDLIN( 446)			this->byteout->writeByte(this->std_ac_luminance_nrcodes->__get(16));
            		}
HXLINE( 447)		this->byteout->write(this->std_ac_luminance_values);
HXLINE( 449)		this->byteout->writeByte(1);
HXLINE( 450)		{
HXLINE( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(1));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(2));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(3));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(4));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(5));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(6));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(7));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(8));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(9));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(10));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(11));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(12));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(13));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(14));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(15));
HXDLIN( 451)			this->byteout->writeByte(this->std_dc_chrominance_nrcodes->__get(16));
            		}
HXLINE( 452)		this->byteout->write(this->std_dc_chrominance_values);
HXLINE( 454)		this->byteout->writeByte(17);
HXLINE( 455)		{
HXLINE( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(1));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(2));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(3));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(4));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(5));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(6));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(7));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(8));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(9));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(10));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(11));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(12));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(13));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(14));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(15));
HXDLIN( 456)			this->byteout->writeByte(this->std_ac_chrominance_nrcodes->__get(16));
            		}
HXLINE( 457)		this->byteout->write(this->std_ac_chrominance_values);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,writeDHT,(void))

void Writer_obj::writeSOS(){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_460_writeSOS)
HXLINE( 461)		this->byteout->writeByte(255);
HXDLIN( 461)		this->byteout->writeByte(218);
HXLINE( 462)		this->byteout->writeByte(0);
HXDLIN( 462)		this->byteout->writeByte(12);
HXLINE( 463)		this->byteout->writeByte(3);
HXLINE( 464)		this->byteout->writeByte(1);
HXLINE( 465)		this->byteout->writeByte(0);
HXLINE( 466)		this->byteout->writeByte(2);
HXLINE( 467)		this->byteout->writeByte(17);
HXLINE( 468)		this->byteout->writeByte(3);
HXLINE( 469)		this->byteout->writeByte(17);
HXLINE( 470)		this->byteout->writeByte(0);
HXLINE( 471)		this->byteout->writeByte(63);
HXLINE( 472)		this->byteout->writeByte(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,writeSOS,(void))

Float Writer_obj::processDU(::Array< Float > CDU,::Array< Float > fdtbl,Float DC, ::haxe::ds::IntMap HTDC, ::haxe::ds::IntMap HTAC){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_478_processDU)
HXLINE( 479)		 ::format::jpg::_Writer::BitString EOB = ( ( ::format::jpg::_Writer::BitString)(HTAC->get(0)) );
HXLINE( 480)		 ::format::jpg::_Writer::BitString M16zeroes = ( ( ::format::jpg::_Writer::BitString)(HTAC->get(240)) );
HXLINE( 482)		::Array< Float > DU_DCT = this->fDCTQuant(CDU,fdtbl);
HXLINE( 484)		{
HXLINE( 484)			int _g = 0;
HXDLIN( 484)			while((_g < 64)){
HXLINE( 484)				_g = (_g + 1);
HXDLIN( 484)				int i = (_g - 1);
HXLINE( 485)				this->DU[this->ZigZag->__get(i)] = DU_DCT->__get(i);
            			}
            		}
HXLINE( 487)		int idx;
HXLINE( 488)		int Diff = ::Std_obj::_hx_int((this->DU->__get(0) - DC));
HXLINE( 489)		DC = this->DU->__get(0);
HXLINE( 491)		if ((Diff == 0)) {
HXLINE( 492)			this->writeBits(( ( ::format::jpg::_Writer::BitString)(HTDC->get(0)) ));
            		}
            		else {
HXLINE( 494)			idx = (32767 + Diff);
HXLINE( 495)			this->writeBits(( ( ::format::jpg::_Writer::BitString)(HTDC->get(this->category->get_int(idx))) ));
HXLINE( 496)			this->writeBits(( ( ::format::jpg::_Writer::BitString)(this->bitcode->get(idx)) ));
            		}
HXLINE( 500)		int end0pos = 63;
HXLINE( 502)		while(true){
HXLINE( 502)			bool _hx_tmp;
HXDLIN( 502)			if ((end0pos > 0)) {
HXLINE( 502)				_hx_tmp = (this->DU->__get(end0pos) == ((Float)0.0));
            			}
            			else {
HXLINE( 502)				_hx_tmp = false;
            			}
HXDLIN( 502)			if (!(_hx_tmp)) {
HXLINE( 502)				goto _hx_goto_45;
            			}
HXDLIN( 502)			end0pos = (end0pos - 1);
            		}
            		_hx_goto_45:;
HXLINE( 505)		if ((end0pos == 0)) {
HXLINE( 506)			this->writeBits(EOB);
HXLINE( 507)			return DC;
            		}
HXLINE( 509)		int i = 1;
HXLINE( 510)		while((i <= end0pos)){
HXLINE( 511)			int startpos = i;
HXLINE( 513)			while(true){
HXLINE( 513)				bool _hx_tmp;
HXDLIN( 513)				if ((this->DU->__get(i) == ((Float)0.0))) {
HXLINE( 513)					_hx_tmp = (i <= end0pos);
            				}
            				else {
HXLINE( 513)					_hx_tmp = false;
            				}
HXDLIN( 513)				if (!(_hx_tmp)) {
HXLINE( 513)					goto _hx_goto_47;
            				}
HXDLIN( 513)				i = (i + 1);
            			}
            			_hx_goto_47:;
HXLINE( 515)			int nrzeroes = (i - startpos);
HXLINE( 516)			if ((nrzeroes >= 16)) {
HXLINE( 518)				{
HXLINE( 518)					int _g = 0;
HXDLIN( 518)					int _g1 = (nrzeroes >> 4);
HXDLIN( 518)					while((_g < _g1)){
HXLINE( 518)						_g = (_g + 1);
HXDLIN( 518)						int nrmarker = (_g - 1);
HXDLIN( 518)						this->writeBits(M16zeroes);
            					}
            				}
HXLINE( 519)				nrzeroes = (nrzeroes & 15);
            			}
HXLINE( 521)			idx = (32767 + ::Std_obj::_hx_int(this->DU->__get(i)));
HXLINE( 522)			this->writeBits(( ( ::format::jpg::_Writer::BitString)(HTAC->get(((nrzeroes * 16) + this->category->get(idx)))) ));
HXLINE( 523)			this->writeBits(( ( ::format::jpg::_Writer::BitString)(this->bitcode->get(idx)) ));
HXLINE( 524)			i = (i + 1);
            		}
HXLINE( 526)		if ((end0pos != 63)) {
HXLINE( 526)			this->writeBits(EOB);
            		}
HXLINE( 527)		return DC;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Writer_obj,processDU,return )

void Writer_obj::RGB2YUV( ::haxe::io::Bytes img,int width,int xpos,int ypos){
            	HX_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_534_RGB2YUV)
HXLINE( 535)		int pos = 0;
HXLINE( 536)		{
HXLINE( 536)			int _g = 0;
HXDLIN( 536)			while((_g < 8)){
HXLINE( 536)				_g = (_g + 1);
HXDLIN( 536)				int y = (_g - 1);
HXLINE( 537)				int offset = ((((y + ypos) * width) + xpos) << 2);
HXLINE( 538)				{
HXLINE( 538)					int _g1 = 0;
HXDLIN( 538)					while((_g1 < 8)){
HXLINE( 538)						_g1 = (_g1 + 1);
HXDLIN( 538)						int x = (_g1 - 1);
HXLINE( 539)						offset = (offset + 1);
HXLINE( 540)						offset = (offset + 1);
HXDLIN( 540)						int R = ( (int)(img->b->__get((offset - 1))) );
HXLINE( 541)						offset = (offset + 1);
HXDLIN( 541)						int G = ( (int)(img->b->__get((offset - 1))) );
HXLINE( 542)						offset = (offset + 1);
HXDLIN( 542)						int B = ( (int)(img->b->__get((offset - 1))) );
HXLINE( 543)						this->YDU[pos] = ((((((Float)0.29900) * ( (Float)(R) )) + (((Float)0.58700) * ( (Float)(G) ))) + (((Float)0.11400) * ( (Float)(B) ))) - ( (Float)(128) ));
HXLINE( 544)						this->UDU[pos] = (((((Float)-0.16874) * ( (Float)(R) )) + (((Float)-0.33126) * ( (Float)(G) ))) + (((Float)0.50000) * ( (Float)(B) )));
HXLINE( 545)						this->VDU[pos] = (((((Float)0.50000) * ( (Float)(R) )) + (((Float)-0.41869) * ( (Float)(G) ))) + (((Float)-0.08131) * ( (Float)(B) )));
HXLINE( 546)						pos = (pos + 1);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Writer_obj,RGB2YUV,(void))

void Writer_obj::write( ::Dynamic image){
            	HX_GC_STACKFRAME(&_hx_pos_1edcfd72dbbcfda8_590_write)
HXLINE( 592)		Float quality = ( (Float)(image->__Field(HX_("quality",bf,04,4c,44),::hx::paccDynamic)) );
HXLINE( 593)		if ((quality <= 0)) {
HXLINE( 593)			quality = ( (Float)(1) );
            		}
HXLINE( 594)		if ((quality > 100)) {
HXLINE( 594)			quality = ( (Float)(100) );
            		}
HXLINE( 595)		int sf;
HXLINE( 596)		if ((quality < 50)) {
HXLINE( 595)			sf = ::Std_obj::_hx_int((( (Float)(5000) ) / quality));
            		}
            		else {
HXLINE( 595)			sf = ::Std_obj::_hx_int((( (Float)(200) ) - (quality * ( (Float)(2) ))));
            		}
HXLINE( 598)		this->initQuantTables(sf);
HXLINE( 601)		this->bytenew = 0;
HXLINE( 602)		this->bytepos = 7;
HXLINE( 604)		int width = ( (int)(image->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
HXLINE( 605)		int height = ( (int)(image->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXLINE( 607)		this->writeWord(65496);
HXLINE( 608)		this->writeAPP0();
HXLINE( 609)		this->writeDQT();
HXLINE( 610)		this->writeSOF0(width,height);
HXLINE( 611)		this->writeDHT();
HXLINE( 612)		this->writeSOS();
HXLINE( 615)		Float DCY = ((Float)0.0);
HXLINE( 616)		Float DCU = ((Float)0.0);
HXLINE( 617)		Float DCV = ((Float)0.0);
HXLINE( 618)		this->bytenew = 0;
HXLINE( 619)		this->bytepos = 7;
HXLINE( 620)		int ypos = 0;
HXLINE( 621)		while((ypos < height)){
HXLINE( 622)			int xpos = 0;
HXLINE( 623)			while((xpos < width)){
HXLINE( 624)				this->RGB2YUV(( ( ::haxe::io::Bytes)(image->__Field(HX_("pixels",2d,ef,a9,8c),::hx::paccDynamic)) ),width,xpos,ypos);
HXLINE( 625)				DCY = this->processDU(this->YDU,this->fdtbl_Y,DCY,this->YDC_HT,this->YAC_HT);
HXLINE( 626)				DCU = this->processDU(this->UDU,this->fdtbl_UV,DCU,this->UVDC_HT,this->UVAC_HT);
HXLINE( 627)				DCV = this->processDU(this->VDU,this->fdtbl_UV,DCV,this->UVDC_HT,this->UVAC_HT);
HXLINE( 628)				xpos = (xpos + 8);
            			}
HXLINE( 630)			ypos = (ypos + 8);
            		}
HXLINE( 634)		if ((this->bytepos >= 0)) {
HXLINE( 635)			 ::format::jpg::_Writer::BitString fillbits =  ::format::jpg::_Writer::BitString_obj::__alloc( HX_CTX ,(this->bytepos + 1),((1 << (this->bytepos + 1)) - 1));
HXLINE( 636)			this->writeBits(fillbits);
            		}
HXLINE( 639)		this->writeWord(65497);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,write,(void))


::hx::ObjectPtr< Writer_obj > Writer_obj::__new( ::haxe::io::Output out) {
	::hx::ObjectPtr< Writer_obj > __this = new Writer_obj();
	__this->__construct(out);
	return __this;
}

::hx::ObjectPtr< Writer_obj > Writer_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output out) {
	Writer_obj *__this = (Writer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Writer_obj), true, "format.jpg.Writer"));
	*(void **)__this = Writer_obj::_hx_vtable;
	__this->__construct(out);
	return __this;
}

Writer_obj::Writer_obj()
{
}

void Writer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Writer);
	HX_MARK_MEMBER_NAME(ZigZag,"ZigZag");
	HX_MARK_MEMBER_NAME(YTable,"YTable");
	HX_MARK_MEMBER_NAME(UVTable,"UVTable");
	HX_MARK_MEMBER_NAME(fdtbl_Y,"fdtbl_Y");
	HX_MARK_MEMBER_NAME(fdtbl_UV,"fdtbl_UV");
	HX_MARK_MEMBER_NAME(std_dc_luminance_nrcodes,"std_dc_luminance_nrcodes");
	HX_MARK_MEMBER_NAME(std_dc_luminance_values,"std_dc_luminance_values");
	HX_MARK_MEMBER_NAME(std_ac_luminance_nrcodes,"std_ac_luminance_nrcodes");
	HX_MARK_MEMBER_NAME(std_ac_luminance_values,"std_ac_luminance_values");
	HX_MARK_MEMBER_NAME(std_dc_chrominance_nrcodes,"std_dc_chrominance_nrcodes");
	HX_MARK_MEMBER_NAME(std_dc_chrominance_values,"std_dc_chrominance_values");
	HX_MARK_MEMBER_NAME(std_ac_chrominance_nrcodes,"std_ac_chrominance_nrcodes");
	HX_MARK_MEMBER_NAME(std_ac_chrominance_values,"std_ac_chrominance_values");
	HX_MARK_MEMBER_NAME(YDC_HT,"YDC_HT");
	HX_MARK_MEMBER_NAME(UVDC_HT,"UVDC_HT");
	HX_MARK_MEMBER_NAME(YAC_HT,"YAC_HT");
	HX_MARK_MEMBER_NAME(UVAC_HT,"UVAC_HT");
	HX_MARK_MEMBER_NAME(bitcode,"bitcode");
	HX_MARK_MEMBER_NAME(category,"category");
	HX_MARK_MEMBER_NAME(byteout,"byteout");
	HX_MARK_MEMBER_NAME(bytenew,"bytenew");
	HX_MARK_MEMBER_NAME(bytepos,"bytepos");
	HX_MARK_MEMBER_NAME(DU,"DU");
	HX_MARK_MEMBER_NAME(YDU,"YDU");
	HX_MARK_MEMBER_NAME(UDU,"UDU");
	HX_MARK_MEMBER_NAME(VDU,"VDU");
	HX_MARK_END_CLASS();
}

void Writer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ZigZag,"ZigZag");
	HX_VISIT_MEMBER_NAME(YTable,"YTable");
	HX_VISIT_MEMBER_NAME(UVTable,"UVTable");
	HX_VISIT_MEMBER_NAME(fdtbl_Y,"fdtbl_Y");
	HX_VISIT_MEMBER_NAME(fdtbl_UV,"fdtbl_UV");
	HX_VISIT_MEMBER_NAME(std_dc_luminance_nrcodes,"std_dc_luminance_nrcodes");
	HX_VISIT_MEMBER_NAME(std_dc_luminance_values,"std_dc_luminance_values");
	HX_VISIT_MEMBER_NAME(std_ac_luminance_nrcodes,"std_ac_luminance_nrcodes");
	HX_VISIT_MEMBER_NAME(std_ac_luminance_values,"std_ac_luminance_values");
	HX_VISIT_MEMBER_NAME(std_dc_chrominance_nrcodes,"std_dc_chrominance_nrcodes");
	HX_VISIT_MEMBER_NAME(std_dc_chrominance_values,"std_dc_chrominance_values");
	HX_VISIT_MEMBER_NAME(std_ac_chrominance_nrcodes,"std_ac_chrominance_nrcodes");
	HX_VISIT_MEMBER_NAME(std_ac_chrominance_values,"std_ac_chrominance_values");
	HX_VISIT_MEMBER_NAME(YDC_HT,"YDC_HT");
	HX_VISIT_MEMBER_NAME(UVDC_HT,"UVDC_HT");
	HX_VISIT_MEMBER_NAME(YAC_HT,"YAC_HT");
	HX_VISIT_MEMBER_NAME(UVAC_HT,"UVAC_HT");
	HX_VISIT_MEMBER_NAME(bitcode,"bitcode");
	HX_VISIT_MEMBER_NAME(category,"category");
	HX_VISIT_MEMBER_NAME(byteout,"byteout");
	HX_VISIT_MEMBER_NAME(bytenew,"bytenew");
	HX_VISIT_MEMBER_NAME(bytepos,"bytepos");
	HX_VISIT_MEMBER_NAME(DU,"DU");
	HX_VISIT_MEMBER_NAME(YDU,"YDU");
	HX_VISIT_MEMBER_NAME(UDU,"UDU");
	HX_VISIT_MEMBER_NAME(VDU,"VDU");
}

::hx::Val Writer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b_dyn() ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"DU") ) { return ::hx::Val( DU ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"YDU") ) { return ::hx::Val( YDU ); }
		if (HX_FIELD_EQ(inName,"UDU") ) { return ::hx::Val( UDU ); }
		if (HX_FIELD_EQ(inName,"VDU") ) { return ::hx::Val( VDU ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ZigZag") ) { return ::hx::Val( ZigZag ); }
		if (HX_FIELD_EQ(inName,"YTable") ) { return ::hx::Val( YTable ); }
		if (HX_FIELD_EQ(inName,"YDC_HT") ) { return ::hx::Val( YDC_HT ); }
		if (HX_FIELD_EQ(inName,"YAC_HT") ) { return ::hx::Val( YAC_HT ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UVTable") ) { return ::hx::Val( UVTable ); }
		if (HX_FIELD_EQ(inName,"fdtbl_Y") ) { return ::hx::Val( fdtbl_Y ); }
		if (HX_FIELD_EQ(inName,"UVDC_HT") ) { return ::hx::Val( UVDC_HT ); }
		if (HX_FIELD_EQ(inName,"UVAC_HT") ) { return ::hx::Val( UVAC_HT ); }
		if (HX_FIELD_EQ(inName,"bitcode") ) { return ::hx::Val( bitcode ); }
		if (HX_FIELD_EQ(inName,"byteout") ) { return ::hx::Val( byteout ); }
		if (HX_FIELD_EQ(inName,"bytenew") ) { return ::hx::Val( bytenew ); }
		if (HX_FIELD_EQ(inName,"bytepos") ) { return ::hx::Val( bytepos ); }
		if (HX_FIELD_EQ(inName,"RGB2YUV") ) { return ::hx::Val( RGB2YUV_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fdtbl_UV") ) { return ::hx::Val( fdtbl_UV ); }
		if (HX_FIELD_EQ(inName,"category") ) { return ::hx::Val( category ); }
		if (HX_FIELD_EQ(inName,"writeDQT") ) { return ::hx::Val( writeDQT_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeDHT") ) { return ::hx::Val( writeDHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeSOS") ) { return ::hx::Val( writeSOS_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeBits") ) { return ::hx::Val( writeBits_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeWord") ) { return ::hx::Val( writeWord_dyn() ); }
		if (HX_FIELD_EQ(inName,"fDCTQuant") ) { return ::hx::Val( fDCTQuant_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeAPP0") ) { return ::hx::Val( writeAPP0_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeSOF0") ) { return ::hx::Val( writeSOF0_dyn() ); }
		if (HX_FIELD_EQ(inName,"processDU") ) { return ::hx::Val( processDU_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initZigZag") ) { return ::hx::Val( initZigZag_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initLuminance") ) { return ::hx::Val( initLuminance_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strIntsToBytes") ) { return ::hx::Val( strIntsToBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"initHuffmanTbl") ) { return ::hx::Val( initHuffmanTbl_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initQuantTables") ) { return ::hx::Val( initQuantTables_dyn() ); }
		if (HX_FIELD_EQ(inName,"initChrominance") ) { return ::hx::Val( initChrominance_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeHuffmanTbl") ) { return ::hx::Val( computeHuffmanTbl_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initCategoryNumber") ) { return ::hx::Val( initCategoryNumber_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"std_dc_luminance_values") ) { return ::hx::Val( std_dc_luminance_values ); }
		if (HX_FIELD_EQ(inName,"std_ac_luminance_values") ) { return ::hx::Val( std_ac_luminance_values ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"std_dc_luminance_nrcodes") ) { return ::hx::Val( std_dc_luminance_nrcodes ); }
		if (HX_FIELD_EQ(inName,"std_ac_luminance_nrcodes") ) { return ::hx::Val( std_ac_luminance_nrcodes ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"std_dc_chrominance_values") ) { return ::hx::Val( std_dc_chrominance_values ); }
		if (HX_FIELD_EQ(inName,"std_ac_chrominance_values") ) { return ::hx::Val( std_ac_chrominance_values ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"std_dc_chrominance_nrcodes") ) { return ::hx::Val( std_dc_chrominance_nrcodes ); }
		if (HX_FIELD_EQ(inName,"std_ac_chrominance_nrcodes") ) { return ::hx::Val( std_ac_chrominance_nrcodes ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Writer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"DU") ) { DU=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"YDU") ) { YDU=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UDU") ) { UDU=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VDU") ) { VDU=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ZigZag") ) { ZigZag=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"YTable") ) { YTable=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"YDC_HT") ) { YDC_HT=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"YAC_HT") ) { YAC_HT=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UVTable") ) { UVTable=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fdtbl_Y") ) { fdtbl_Y=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UVDC_HT") ) { UVDC_HT=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UVAC_HT") ) { UVAC_HT=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitcode") ) { bitcode=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteout") ) { byteout=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytenew") ) { bytenew=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytepos") ) { bytepos=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fdtbl_UV") ) { fdtbl_UV=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"category") ) { category=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"std_dc_luminance_values") ) { std_dc_luminance_values=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"std_ac_luminance_values") ) { std_ac_luminance_values=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"std_dc_luminance_nrcodes") ) { std_dc_luminance_nrcodes=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"std_ac_luminance_nrcodes") ) { std_ac_luminance_nrcodes=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"std_dc_chrominance_values") ) { std_dc_chrominance_values=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"std_ac_chrominance_values") ) { std_ac_chrominance_values=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"std_dc_chrominance_nrcodes") ) { std_dc_chrominance_nrcodes=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"std_ac_chrominance_nrcodes") ) { std_ac_chrominance_nrcodes=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Writer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ZigZag",08,fc,8a,b5));
	outFields->push(HX_("YTable",f5,44,d4,33));
	outFields->push(HX_("UVTable",ed,9d,62,cf));
	outFields->push(HX_("fdtbl_Y",da,df,d1,98));
	outFields->push(HX_("fdtbl_UV",c0,fb,d1,1e));
	outFields->push(HX_("std_dc_luminance_nrcodes",b7,4d,ec,b8));
	outFields->push(HX_("std_dc_luminance_values",ad,87,dc,d4));
	outFields->push(HX_("std_ac_luminance_nrcodes",da,5f,be,85));
	outFields->push(HX_("std_ac_luminance_values",ea,4a,b5,c5));
	outFields->push(HX_("std_dc_chrominance_nrcodes",be,f1,98,70));
	outFields->push(HX_("std_dc_chrominance_values",86,81,6a,19));
	outFields->push(HX_("std_ac_chrominance_nrcodes",a1,12,ae,a3));
	outFields->push(HX_("std_ac_chrominance_values",03,4e,68,84));
	outFields->push(HX_("YDC_HT",13,30,94,e9));
	outFields->push(HX_("UVDC_HT",0b,89,22,85));
	outFields->push(HX_("YAC_HT",90,72,60,2f));
	outFields->push(HX_("UVAC_HT",88,cb,ee,ca));
	outFields->push(HX_("bitcode",7a,54,f0,f2));
	outFields->push(HX_("category",fe,2a,6c,ad));
	outFields->push(HX_("byteout",86,96,f8,59));
	outFields->push(HX_("bytenew",58,c6,f7,59));
	outFields->push(HX_("bytepos",8c,53,f9,59));
	outFields->push(HX_("DU",91,3b,00,00));
	outFields->push(HX_("YDU",2a,c4,43,00));
	outFields->push(HX_("UDU",26,bb,40,00));
	outFields->push(HX_("VDU",67,7d,41,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Writer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Writer_obj,ZigZag),HX_("ZigZag",08,fc,8a,b5)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Writer_obj,YTable),HX_("YTable",f5,44,d4,33)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Writer_obj,UVTable),HX_("UVTable",ed,9d,62,cf)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Writer_obj,fdtbl_Y),HX_("fdtbl_Y",da,df,d1,98)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Writer_obj,fdtbl_UV),HX_("fdtbl_UV",c0,fb,d1,1e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Writer_obj,std_dc_luminance_nrcodes),HX_("std_dc_luminance_nrcodes",b7,4d,ec,b8)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Writer_obj,std_dc_luminance_values),HX_("std_dc_luminance_values",ad,87,dc,d4)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Writer_obj,std_ac_luminance_nrcodes),HX_("std_ac_luminance_nrcodes",da,5f,be,85)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Writer_obj,std_ac_luminance_values),HX_("std_ac_luminance_values",ea,4a,b5,c5)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Writer_obj,std_dc_chrominance_nrcodes),HX_("std_dc_chrominance_nrcodes",be,f1,98,70)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Writer_obj,std_dc_chrominance_values),HX_("std_dc_chrominance_values",86,81,6a,19)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Writer_obj,std_ac_chrominance_nrcodes),HX_("std_ac_chrominance_nrcodes",a1,12,ae,a3)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Writer_obj,std_ac_chrominance_values),HX_("std_ac_chrominance_values",03,4e,68,84)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Writer_obj,YDC_HT),HX_("YDC_HT",13,30,94,e9)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Writer_obj,UVDC_HT),HX_("UVDC_HT",0b,89,22,85)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Writer_obj,YAC_HT),HX_("YAC_HT",90,72,60,2f)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Writer_obj,UVAC_HT),HX_("UVAC_HT",88,cb,ee,ca)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Writer_obj,bitcode),HX_("bitcode",7a,54,f0,f2)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Writer_obj,category),HX_("category",fe,2a,6c,ad)},
	{::hx::fsObject /*  ::haxe::io::Output */ ,(int)offsetof(Writer_obj,byteout),HX_("byteout",86,96,f8,59)},
	{::hx::fsInt,(int)offsetof(Writer_obj,bytenew),HX_("bytenew",58,c6,f7,59)},
	{::hx::fsInt,(int)offsetof(Writer_obj,bytepos),HX_("bytepos",8c,53,f9,59)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Writer_obj,DU),HX_("DU",91,3b,00,00)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Writer_obj,YDU),HX_("YDU",2a,c4,43,00)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Writer_obj,UDU),HX_("UDU",26,bb,40,00)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Writer_obj,VDU),HX_("VDU",67,7d,41,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Writer_obj_sStaticStorageInfo = 0;
#endif

static ::String Writer_obj_sMemberFields[] = {
	HX_("ZigZag",08,fc,8a,b5),
	HX_("initZigZag",18,e3,3b,85),
	HX_("YTable",f5,44,d4,33),
	HX_("UVTable",ed,9d,62,cf),
	HX_("fdtbl_Y",da,df,d1,98),
	HX_("fdtbl_UV",c0,fb,d1,1e),
	HX_("initQuantTables",58,a2,99,da),
	HX_("std_dc_luminance_nrcodes",b7,4d,ec,b8),
	HX_("std_dc_luminance_values",ad,87,dc,d4),
	HX_("std_ac_luminance_nrcodes",da,5f,be,85),
	HX_("std_ac_luminance_values",ea,4a,b5,c5),
	HX_("initLuminance",c8,fa,87,e3),
	HX_("strIntsToBytes",7b,8f,3a,54),
	HX_("std_dc_chrominance_nrcodes",be,f1,98,70),
	HX_("std_dc_chrominance_values",86,81,6a,19),
	HX_("std_ac_chrominance_nrcodes",a1,12,ae,a3),
	HX_("std_ac_chrominance_values",03,4e,68,84),
	HX_("initChrominance",cf,44,d8,03),
	HX_("YDC_HT",13,30,94,e9),
	HX_("UVDC_HT",0b,89,22,85),
	HX_("YAC_HT",90,72,60,2f),
	HX_("UVAC_HT",88,cb,ee,ca),
	HX_("initHuffmanTbl",41,51,c1,be),
	HX_("computeHuffmanTbl",68,84,42,b1),
	HX_("bitcode",7a,54,f0,f2),
	HX_("category",fe,2a,6c,ad),
	HX_("initCategoryNumber",97,83,1e,d3),
	HX_("byteout",86,96,f8,59),
	HX_("bytenew",58,c6,f7,59),
	HX_("bytepos",8c,53,f9,59),
	HX_("writeBits",85,ef,ca,49),
	HX_("writeWord",49,f6,b0,57),
	HX_("fDCTQuant",b4,78,c3,a6),
	HX_("b",62,00,00,00),
	HX_("writeAPP0",ee,a0,0e,49),
	HX_("writeDQT",a8,88,ec,23),
	HX_("writeSOF0",25,ad,f3,54),
	HX_("writeDHT",d1,80,ec,23),
	HX_("writeSOS",b8,e8,f7,23),
	HX_("DU",91,3b,00,00),
	HX_("processDU",c0,97,0b,d3),
	HX_("YDU",2a,c4,43,00),
	HX_("UDU",26,bb,40,00),
	HX_("VDU",67,7d,41,00),
	HX_("RGB2YUV",75,6f,f9,d6),
	HX_("write",df,6c,59,d0),
	::String(null()) };

::hx::Class Writer_obj::__mClass;

void Writer_obj::__register()
{
	Writer_obj _hx_dummy;
	Writer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.jpg.Writer",97,c2,9a,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Writer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Writer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Writer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Writer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace jpg
