#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_Bitrate
#include <format/mp3/Bitrate.h>
#endif
#ifndef INCLUDED_format_mp3_CLayer
#include <format/mp3/CLayer.h>
#endif
#ifndef INCLUDED_format_mp3_Layer
#include <format/mp3/Layer.h>
#endif
#ifndef INCLUDED_format_mp3_MPEG
#include <format/mp3/MPEG.h>
#endif
#ifndef INCLUDED_format_mp3_MPEGVersion
#include <format/mp3/MPEGVersion.h>
#endif
#ifndef INCLUDED_format_mp3_SamplingRate
#include <format/mp3/SamplingRate.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_17_enum2Num,"format.mp3.MPEG","enum2Num",0x54d49349,"format.mp3.MPEG.enum2Num","format/mp3/Constants.hx",17,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_26_num2Enum,"format.mp3.MPEG","num2Enum",0x5bd90ee1,"format.mp3.MPEG.num2Enum","format/mp3/Constants.hx",26,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_59_srNum2Enum,"format.mp3.MPEG","srNum2Enum",0x5f8833a0,"format.mp3.MPEG.srNum2Enum","format/mp3/Constants.hx",59,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_73_srEnum2Num,"format.mp3.MPEG","srEnum2Num",0x5883b808,"format.mp3.MPEG.srEnum2Num","format/mp3/Constants.hx",73,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_87_getBitrateIdx,"format.mp3.MPEG","getBitrateIdx",0x52f0d132,"format.mp3.MPEG.getBitrateIdx","format/mp3/Constants.hx",87,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_96_getSamplingRateIdx,"format.mp3.MPEG","getSamplingRateIdx",0x5259c3b4,"format.mp3.MPEG.getSamplingRateIdx","format/mp3/Constants.hx",96,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_106_bitrateEnum2Num,"format.mp3.MPEG","bitrateEnum2Num",0x0a184fee,"format.mp3.MPEG.bitrateEnum2Num","format/mp3/Constants.hx",106,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_137_bitrateNum2Enum,"format.mp3.MPEG","bitrateNum2Enum",0x111ccb86,"format.mp3.MPEG.bitrateNum2Enum","format/mp3/Constants.hx",137,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_11_boot,"format.mp3.MPEG","boot",0x3e6f7cc6,"format.mp3.MPEG.boot","format/mp3/Constants.hx",11,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_12_boot,"format.mp3.MPEG","boot",0x3e6f7cc6,"format.mp3.MPEG.boot","format/mp3/Constants.hx",12,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_13_boot,"format.mp3.MPEG","boot",0x3e6f7cc6,"format.mp3.MPEG.boot","format/mp3/Constants.hx",13,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_14_boot,"format.mp3.MPEG","boot",0x3e6f7cc6,"format.mp3.MPEG.boot","format/mp3/Constants.hx",14,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_35_boot,"format.mp3.MPEG","boot",0x3e6f7cc6,"format.mp3.MPEG.boot","format/mp3/Constants.hx",35,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_43_boot,"format.mp3.MPEG","boot",0x3e6f7cc6,"format.mp3.MPEG.boot","format/mp3/Constants.hx",43,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb11b94c0b3f987_51_boot,"format.mp3.MPEG","boot",0x3e6f7cc6,"format.mp3.MPEG.boot","format/mp3/Constants.hx",51,0x7e2fda06)
namespace format{
namespace mp3{

void MPEG_obj::__construct() { }

Dynamic MPEG_obj::__CreateEmpty() { return new MPEG_obj; }

void *MPEG_obj::_hx_vtable = 0;

Dynamic MPEG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MPEG_obj > _hx_result = new MPEG_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MPEG_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f98b10e;
}

int MPEG_obj::V1;

int MPEG_obj::V2;

int MPEG_obj::V25;

int MPEG_obj::Reserved;

int MPEG_obj::enum2Num( ::format::mp3::MPEGVersion m){
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_17_enum2Num)
HXDLIN(  17)		switch((int)(m->_hx_getIndex())){
            			case (int)0: {
HXLINE(  18)				return 3;
            			}
            			break;
            			case (int)1: {
HXLINE(  19)				return 2;
            			}
            			break;
            			case (int)2: {
HXLINE(  20)				return 0;
            			}
            			break;
            			case (int)3: {
HXLINE(  21)				return ::format::mp3::MPEG_obj::Reserved;
            			}
            			break;
            		}
HXLINE(  17)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MPEG_obj,enum2Num,return )

 ::format::mp3::MPEGVersion MPEG_obj::num2Enum(int m){
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_26_num2Enum)
HXDLIN(  26)		switch((int)(m)){
            			case (int)0: {
HXLINE(  29)				return ::format::mp3::MPEGVersion_obj::MPEG_V25_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE(  28)				return ::format::mp3::MPEGVersion_obj::MPEG_V2_dyn();
            			}
            			break;
            			case (int)3: {
HXLINE(  27)				return ::format::mp3::MPEGVersion_obj::MPEG_V1_dyn();
            			}
            			break;
            			default:{
HXLINE(  30)				return ::format::mp3::MPEGVersion_obj::MPEG_Reserved_dyn();
            			}
            		}
HXLINE(  26)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MPEG_obj,num2Enum,return )

::Array< ::Dynamic> MPEG_obj::V1_Bitrates;

::Array< ::Dynamic> MPEG_obj::V2_Bitrates;

::Array< ::Dynamic> MPEG_obj::SamplingRates;

 ::format::mp3::SamplingRate MPEG_obj::srNum2Enum(int sr){
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_59_srNum2Enum)
HXDLIN(  59)		switch((int)(sr)){
            			case (int)8000: {
HXLINE(  60)				return ::format::mp3::SamplingRate_obj::SR_8000_dyn();
            			}
            			break;
            			case (int)11025: {
HXLINE(  61)				return ::format::mp3::SamplingRate_obj::SR_11025_dyn();
            			}
            			break;
            			case (int)12000: {
HXLINE(  62)				return ::format::mp3::SamplingRate_obj::SR_12000_dyn();
            			}
            			break;
            			case (int)22050: {
HXLINE(  63)				return ::format::mp3::SamplingRate_obj::SR_22050_dyn();
            			}
            			break;
            			case (int)24000: {
HXLINE(  64)				return ::format::mp3::SamplingRate_obj::SR_24000_dyn();
            			}
            			break;
            			case (int)32000: {
HXLINE(  65)				return ::format::mp3::SamplingRate_obj::SR_32000_dyn();
            			}
            			break;
            			case (int)44100: {
HXLINE(  66)				return ::format::mp3::SamplingRate_obj::SR_44100_dyn();
            			}
            			break;
            			case (int)48000: {
HXLINE(  67)				return ::format::mp3::SamplingRate_obj::SR_48000_dyn();
            			}
            			break;
            			default:{
HXLINE(  68)				return ::format::mp3::SamplingRate_obj::SR_Bad_dyn();
            			}
            		}
HXLINE(  59)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MPEG_obj,srNum2Enum,return )

int MPEG_obj::srEnum2Num( ::format::mp3::SamplingRate sr){
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_73_srEnum2Num)
HXDLIN(  73)		switch((int)(sr->_hx_getIndex())){
            			case (int)0: {
HXLINE(  74)				return 8000;
            			}
            			break;
            			case (int)1: {
HXLINE(  75)				return 11025;
            			}
            			break;
            			case (int)2: {
HXLINE(  76)				return 12000;
            			}
            			break;
            			case (int)3: {
HXLINE(  77)				return 22050;
            			}
            			break;
            			case (int)4: {
HXLINE(  78)				return 24000;
            			}
            			break;
            			case (int)5: {
HXLINE(  79)				return 32000;
            			}
            			break;
            			case (int)6: {
HXLINE(  80)				return 44100;
            			}
            			break;
            			case (int)7: {
HXLINE(  81)				return 48000;
            			}
            			break;
            			case (int)8: {
HXLINE(  82)				return -1;
            			}
            			break;
            		}
HXLINE(  73)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MPEG_obj,srEnum2Num,return )

int MPEG_obj::getBitrateIdx( ::format::mp3::Bitrate br, ::format::mp3::MPEGVersion mpeg, ::format::mp3::Layer layer){
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_87_getBitrateIdx)
HXLINE(  88)		::Array< ::Dynamic> arr;
HXDLIN(  88)		if (::hx::IsPointerEq( mpeg,::format::mp3::MPEGVersion_obj::MPEG_V1_dyn() )) {
HXLINE(  88)			arr = ::format::mp3::MPEG_obj::V1_Bitrates;
            		}
            		else {
HXLINE(  88)			arr = ::format::mp3::MPEG_obj::V2_Bitrates;
            		}
HXDLIN(  88)		::Array< ::Dynamic> arr1 = arr->__get(::format::mp3::CLayer_obj::enum2Num(layer)).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  89)		{
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(0).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 0;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(1).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 1;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(2).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 2;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(3).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 3;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(4).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 4;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(5).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 5;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(6).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 6;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(7).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 7;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(8).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 8;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(9).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 9;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(10).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 10;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(11).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 11;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(12).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 12;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(13).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 13;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(14).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 14;
            			}
HXLINE(  90)			if (::hx::IsPointerEq( arr1->__get(15).StaticCast<  ::format::mp3::Bitrate >(),br )) {
HXLINE(  91)				return 15;
            			}
            		}
HXLINE(  92)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Bitrate index not found",d4,c4,71,76)));
HXDLIN(  92)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MPEG_obj,getBitrateIdx,return )

int MPEG_obj::getSamplingRateIdx( ::format::mp3::SamplingRate sr, ::format::mp3::MPEGVersion mpeg){
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_96_getSamplingRateIdx)
HXLINE(  97)		::Array< ::Dynamic> arr = ::format::mp3::MPEG_obj::SamplingRates->__get(::format::mp3::MPEG_obj::enum2Num(mpeg)).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  98)		{
HXLINE(  99)			if (::hx::IsPointerEq( arr->__get(0).StaticCast<  ::format::mp3::SamplingRate >(),sr )) {
HXLINE( 100)				return 0;
            			}
HXLINE(  99)			if (::hx::IsPointerEq( arr->__get(1).StaticCast<  ::format::mp3::SamplingRate >(),sr )) {
HXLINE( 100)				return 1;
            			}
HXLINE(  99)			if (::hx::IsPointerEq( arr->__get(2).StaticCast<  ::format::mp3::SamplingRate >(),sr )) {
HXLINE( 100)				return 2;
            			}
HXLINE(  99)			if (::hx::IsPointerEq( arr->__get(3).StaticCast<  ::format::mp3::SamplingRate >(),sr )) {
HXLINE( 100)				return 3;
            			}
            		}
HXLINE( 101)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Sampling rate index not found",60,04,5a,b8)));
HXDLIN( 101)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MPEG_obj,getSamplingRateIdx,return )

int MPEG_obj::bitrateEnum2Num( ::format::mp3::Bitrate br){
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_106_bitrateEnum2Num)
HXDLIN( 106)		switch((int)(br->_hx_getIndex())){
            			case (int)0: {
HXLINE( 109)				return 8;
            			}
            			break;
            			case (int)1: {
HXLINE( 110)				return 16;
            			}
            			break;
            			case (int)2: {
HXLINE( 111)				return 24;
            			}
            			break;
            			case (int)3: {
HXLINE( 112)				return 32;
            			}
            			break;
            			case (int)4: {
HXLINE( 113)				return 40;
            			}
            			break;
            			case (int)5: {
HXLINE( 114)				return 48;
            			}
            			break;
            			case (int)6: {
HXLINE( 115)				return 56;
            			}
            			break;
            			case (int)7: {
HXLINE( 116)				return 64;
            			}
            			break;
            			case (int)8: {
HXLINE( 117)				return 80;
            			}
            			break;
            			case (int)9: {
HXLINE( 118)				return 96;
            			}
            			break;
            			case (int)10: {
HXLINE( 119)				return 112;
            			}
            			break;
            			case (int)11: {
HXLINE( 120)				return 128;
            			}
            			break;
            			case (int)12: {
HXLINE( 121)				return 144;
            			}
            			break;
            			case (int)13: {
HXLINE( 122)				return 160;
            			}
            			break;
            			case (int)14: {
HXLINE( 123)				return 176;
            			}
            			break;
            			case (int)15: {
HXLINE( 124)				return 192;
            			}
            			break;
            			case (int)16: {
HXLINE( 125)				return 224;
            			}
            			break;
            			case (int)17: {
HXLINE( 126)				return 256;
            			}
            			break;
            			case (int)18: {
HXLINE( 127)				return 288;
            			}
            			break;
            			case (int)19: {
HXLINE( 128)				return 320;
            			}
            			break;
            			case (int)20: {
HXLINE( 129)				return 352;
            			}
            			break;
            			case (int)21: {
HXLINE( 130)				return 384;
            			}
            			break;
            			case (int)22: {
HXLINE( 131)				return 416;
            			}
            			break;
            			case (int)23: {
HXLINE( 132)				return 448;
            			}
            			break;
            			case (int)24: {
HXLINE( 108)				return 0;
            			}
            			break;
            			case (int)25: {
HXLINE( 107)				return -1;
            			}
            			break;
            		}
HXLINE( 106)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MPEG_obj,bitrateEnum2Num,return )

 ::format::mp3::Bitrate MPEG_obj::bitrateNum2Enum(int br){
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_137_bitrateNum2Enum)
HXDLIN( 137)		switch((int)(br)){
            			case (int)0: {
HXLINE( 138)				return ::format::mp3::Bitrate_obj::BR_Free_dyn();
            			}
            			break;
            			case (int)8: {
HXLINE( 139)				return ::format::mp3::Bitrate_obj::BR_8_dyn();
            			}
            			break;
            			case (int)16: {
HXLINE( 140)				return ::format::mp3::Bitrate_obj::BR_16_dyn();
            			}
            			break;
            			case (int)24: {
HXLINE( 141)				return ::format::mp3::Bitrate_obj::BR_24_dyn();
            			}
            			break;
            			case (int)32: {
HXLINE( 142)				return ::format::mp3::Bitrate_obj::BR_32_dyn();
            			}
            			break;
            			case (int)40: {
HXLINE( 143)				return ::format::mp3::Bitrate_obj::BR_40_dyn();
            			}
            			break;
            			case (int)48: {
HXLINE( 144)				return ::format::mp3::Bitrate_obj::BR_48_dyn();
            			}
            			break;
            			case (int)56: {
HXLINE( 145)				return ::format::mp3::Bitrate_obj::BR_56_dyn();
            			}
            			break;
            			case (int)64: {
HXLINE( 146)				return ::format::mp3::Bitrate_obj::BR_64_dyn();
            			}
            			break;
            			case (int)80: {
HXLINE( 147)				return ::format::mp3::Bitrate_obj::BR_80_dyn();
            			}
            			break;
            			case (int)96: {
HXLINE( 148)				return ::format::mp3::Bitrate_obj::BR_96_dyn();
            			}
            			break;
            			case (int)112: {
HXLINE( 149)				return ::format::mp3::Bitrate_obj::BR_112_dyn();
            			}
            			break;
            			case (int)128: {
HXLINE( 150)				return ::format::mp3::Bitrate_obj::BR_128_dyn();
            			}
            			break;
            			case (int)144: {
HXLINE( 151)				return ::format::mp3::Bitrate_obj::BR_144_dyn();
            			}
            			break;
            			case (int)160: {
HXLINE( 152)				return ::format::mp3::Bitrate_obj::BR_160_dyn();
            			}
            			break;
            			case (int)176: {
HXLINE( 153)				return ::format::mp3::Bitrate_obj::BR_176_dyn();
            			}
            			break;
            			case (int)192: {
HXLINE( 154)				return ::format::mp3::Bitrate_obj::BR_192_dyn();
            			}
            			break;
            			case (int)224: {
HXLINE( 155)				return ::format::mp3::Bitrate_obj::BR_224_dyn();
            			}
            			break;
            			case (int)256: {
HXLINE( 156)				return ::format::mp3::Bitrate_obj::BR_256_dyn();
            			}
            			break;
            			case (int)288: {
HXLINE( 157)				return ::format::mp3::Bitrate_obj::BR_288_dyn();
            			}
            			break;
            			case (int)320: {
HXLINE( 158)				return ::format::mp3::Bitrate_obj::BR_320_dyn();
            			}
            			break;
            			case (int)352: {
HXLINE( 159)				return ::format::mp3::Bitrate_obj::BR_352_dyn();
            			}
            			break;
            			case (int)384: {
HXLINE( 160)				return ::format::mp3::Bitrate_obj::BR_384_dyn();
            			}
            			break;
            			case (int)416: {
HXLINE( 161)				return ::format::mp3::Bitrate_obj::BR_416_dyn();
            			}
            			break;
            			case (int)448: {
HXLINE( 162)				return ::format::mp3::Bitrate_obj::BR_448_dyn();
            			}
            			break;
            			default:{
HXLINE( 163)				return ::format::mp3::Bitrate_obj::BR_Bad_dyn();
            			}
            		}
HXLINE( 137)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MPEG_obj,bitrateNum2Enum,return )


MPEG_obj::MPEG_obj()
{
}

bool MPEG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"Reserved") ) { outValue = ( Reserved ); return true; }
		if (HX_FIELD_EQ(inName,"enum2Num") ) { outValue = enum2Num_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"num2Enum") ) { outValue = num2Enum_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"srNum2Enum") ) { outValue = srNum2Enum_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"srEnum2Num") ) { outValue = srEnum2Num_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"V1_Bitrates") ) { outValue = ( V1_Bitrates ); return true; }
		if (HX_FIELD_EQ(inName,"V2_Bitrates") ) { outValue = ( V2_Bitrates ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SamplingRates") ) { outValue = ( SamplingRates ); return true; }
		if (HX_FIELD_EQ(inName,"getBitrateIdx") ) { outValue = getBitrateIdx_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bitrateEnum2Num") ) { outValue = bitrateEnum2Num_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bitrateNum2Enum") ) { outValue = bitrateNum2Enum_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getSamplingRateIdx") ) { outValue = getSamplingRateIdx_dyn(); return true; }
	}
	return false;
}

bool MPEG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"Reserved") ) { Reserved=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"V1_Bitrates") ) { V1_Bitrates=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"V2_Bitrates") ) { V2_Bitrates=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SamplingRates") ) { SamplingRates=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MPEG_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MPEG_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &MPEG_obj::V1,HX_("V1",1b,4b,00,00)},
	{::hx::fsInt,(void *) &MPEG_obj::V2,HX_("V2",1c,4b,00,00)},
	{::hx::fsInt,(void *) &MPEG_obj::V25,HX_("V25",99,6d,41,00)},
	{::hx::fsInt,(void *) &MPEG_obj::Reserved,HX_("Reserved",c8,b2,57,28)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &MPEG_obj::V1_Bitrates,HX_("V1_Bitrates",aa,1e,68,73)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &MPEG_obj::V2_Bitrates,HX_("V2_Bitrates",89,96,b2,33)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &MPEG_obj::SamplingRates,HX_("SamplingRates",0c,44,0f,7e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MPEG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MPEG_obj::V1,"V1");
	HX_MARK_MEMBER_NAME(MPEG_obj::V2,"V2");
	HX_MARK_MEMBER_NAME(MPEG_obj::V25,"V25");
	HX_MARK_MEMBER_NAME(MPEG_obj::Reserved,"Reserved");
	HX_MARK_MEMBER_NAME(MPEG_obj::V1_Bitrates,"V1_Bitrates");
	HX_MARK_MEMBER_NAME(MPEG_obj::V2_Bitrates,"V2_Bitrates");
	HX_MARK_MEMBER_NAME(MPEG_obj::SamplingRates,"SamplingRates");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MPEG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MPEG_obj::V1,"V1");
	HX_VISIT_MEMBER_NAME(MPEG_obj::V2,"V2");
	HX_VISIT_MEMBER_NAME(MPEG_obj::V25,"V25");
	HX_VISIT_MEMBER_NAME(MPEG_obj::Reserved,"Reserved");
	HX_VISIT_MEMBER_NAME(MPEG_obj::V1_Bitrates,"V1_Bitrates");
	HX_VISIT_MEMBER_NAME(MPEG_obj::V2_Bitrates,"V2_Bitrates");
	HX_VISIT_MEMBER_NAME(MPEG_obj::SamplingRates,"SamplingRates");
};

#endif

::hx::Class MPEG_obj::__mClass;

static ::String MPEG_obj_sStaticFields[] = {
	HX_("V1",1b,4b,00,00),
	HX_("V2",1c,4b,00,00),
	HX_("V25",99,6d,41,00),
	HX_("Reserved",c8,b2,57,28),
	HX_("enum2Num",b5,c0,d6,1a),
	HX_("num2Enum",4d,3c,db,21),
	HX_("V1_Bitrates",aa,1e,68,73),
	HX_("V2_Bitrates",89,96,b2,33),
	HX_("SamplingRates",0c,44,0f,7e),
	HX_("srNum2Enum",0c,94,81,4c),
	HX_("srEnum2Num",74,18,7d,45),
	HX_("getBitrateIdx",46,7c,76,c3),
	HX_("getSamplingRateIdx",20,70,8b,e5),
	HX_("bitrateEnum2Num",02,e8,ad,e7),
	HX_("bitrateNum2Enum",9a,63,b2,ee),
	::String(null())
};

void MPEG_obj::__register()
{
	MPEG_obj _hx_dummy;
	MPEG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.mp3.MPEG",5a,30,ab,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MPEG_obj::__GetStatic;
	__mClass->mSetStaticField = &MPEG_obj::__SetStatic;
	__mClass->mMarkFunc = MPEG_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MPEG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MPEG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MPEG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MPEG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MPEG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MPEG_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_11_boot)
HXDLIN(  11)		V1 = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_12_boot)
HXDLIN(  12)		V2 = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_13_boot)
HXDLIN(  13)		V25 = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_14_boot)
HXDLIN(  14)		Reserved = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_35_boot)
HXDLIN(  35)		V1_Bitrates = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< ::Dynamic>::__new(16)->init(0,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(1,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(2,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(3,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(4,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(5,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(6,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(7,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(8,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(9,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(10,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(11,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(12,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(13,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(14,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(15,::format::mp3::Bitrate_obj::BR_Bad_dyn()))->init(1,::Array_obj< ::Dynamic>::__new(16)->init(0,::format::mp3::Bitrate_obj::BR_Free_dyn())->init(1,::format::mp3::Bitrate_obj::BR_32_dyn())->init(2,::format::mp3::Bitrate_obj::BR_40_dyn())->init(3,::format::mp3::Bitrate_obj::BR_48_dyn())->init(4,::format::mp3::Bitrate_obj::BR_56_dyn())->init(5,::format::mp3::Bitrate_obj::BR_64_dyn())->init(6,::format::mp3::Bitrate_obj::BR_80_dyn())->init(7,::format::mp3::Bitrate_obj::BR_96_dyn())->init(8,::format::mp3::Bitrate_obj::BR_112_dyn())->init(9,::format::mp3::Bitrate_obj::BR_128_dyn())->init(10,::format::mp3::Bitrate_obj::BR_160_dyn())->init(11,::format::mp3::Bitrate_obj::BR_192_dyn())->init(12,::format::mp3::Bitrate_obj::BR_224_dyn())->init(13,::format::mp3::Bitrate_obj::BR_256_dyn())->init(14,::format::mp3::Bitrate_obj::BR_320_dyn())->init(15,::format::mp3::Bitrate_obj::BR_Bad_dyn()))->init(2,::Array_obj< ::Dynamic>::__new(16)->init(0,::format::mp3::Bitrate_obj::BR_Free_dyn())->init(1,::format::mp3::Bitrate_obj::BR_32_dyn())->init(2,::format::mp3::Bitrate_obj::BR_48_dyn())->init(3,::format::mp3::Bitrate_obj::BR_56_dyn())->init(4,::format::mp3::Bitrate_obj::BR_64_dyn())->init(5,::format::mp3::Bitrate_obj::BR_80_dyn())->init(6,::format::mp3::Bitrate_obj::BR_96_dyn())->init(7,::format::mp3::Bitrate_obj::BR_112_dyn())->init(8,::format::mp3::Bitrate_obj::BR_128_dyn())->init(9,::format::mp3::Bitrate_obj::BR_160_dyn())->init(10,::format::mp3::Bitrate_obj::BR_192_dyn())->init(11,::format::mp3::Bitrate_obj::BR_224_dyn())->init(12,::format::mp3::Bitrate_obj::BR_256_dyn())->init(13,::format::mp3::Bitrate_obj::BR_320_dyn())->init(14,::format::mp3::Bitrate_obj::BR_384_dyn())->init(15,::format::mp3::Bitrate_obj::BR_Bad_dyn()))->init(3,::Array_obj< ::Dynamic>::__new(16)->init(0,::format::mp3::Bitrate_obj::BR_Free_dyn())->init(1,::format::mp3::Bitrate_obj::BR_32_dyn())->init(2,::format::mp3::Bitrate_obj::BR_64_dyn())->init(3,::format::mp3::Bitrate_obj::BR_96_dyn())->init(4,::format::mp3::Bitrate_obj::BR_128_dyn())->init(5,::format::mp3::Bitrate_obj::BR_160_dyn())->init(6,::format::mp3::Bitrate_obj::BR_192_dyn())->init(7,::format::mp3::Bitrate_obj::BR_224_dyn())->init(8,::format::mp3::Bitrate_obj::BR_256_dyn())->init(9,::format::mp3::Bitrate_obj::BR_288_dyn())->init(10,::format::mp3::Bitrate_obj::BR_320_dyn())->init(11,::format::mp3::Bitrate_obj::BR_352_dyn())->init(12,::format::mp3::Bitrate_obj::BR_384_dyn())->init(13,::format::mp3::Bitrate_obj::BR_416_dyn())->init(14,::format::mp3::Bitrate_obj::BR_448_dyn())->init(15,::format::mp3::Bitrate_obj::BR_Bad_dyn()));
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_43_boot)
HXDLIN(  43)		V2_Bitrates = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< ::Dynamic>::__new(16)->init(0,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(1,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(2,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(3,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(4,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(5,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(6,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(7,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(8,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(9,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(10,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(11,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(12,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(13,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(14,::format::mp3::Bitrate_obj::BR_Bad_dyn())->init(15,::format::mp3::Bitrate_obj::BR_Bad_dyn()))->init(1,::Array_obj< ::Dynamic>::__new(16)->init(0,::format::mp3::Bitrate_obj::BR_Free_dyn())->init(1,::format::mp3::Bitrate_obj::BR_8_dyn())->init(2,::format::mp3::Bitrate_obj::BR_16_dyn())->init(3,::format::mp3::Bitrate_obj::BR_24_dyn())->init(4,::format::mp3::Bitrate_obj::BR_32_dyn())->init(5,::format::mp3::Bitrate_obj::BR_40_dyn())->init(6,::format::mp3::Bitrate_obj::BR_48_dyn())->init(7,::format::mp3::Bitrate_obj::BR_56_dyn())->init(8,::format::mp3::Bitrate_obj::BR_64_dyn())->init(9,::format::mp3::Bitrate_obj::BR_80_dyn())->init(10,::format::mp3::Bitrate_obj::BR_96_dyn())->init(11,::format::mp3::Bitrate_obj::BR_112_dyn())->init(12,::format::mp3::Bitrate_obj::BR_128_dyn())->init(13,::format::mp3::Bitrate_obj::BR_144_dyn())->init(14,::format::mp3::Bitrate_obj::BR_160_dyn())->init(15,::format::mp3::Bitrate_obj::BR_Bad_dyn()))->init(2,::Array_obj< ::Dynamic>::__new(16)->init(0,::format::mp3::Bitrate_obj::BR_Free_dyn())->init(1,::format::mp3::Bitrate_obj::BR_8_dyn())->init(2,::format::mp3::Bitrate_obj::BR_16_dyn())->init(3,::format::mp3::Bitrate_obj::BR_24_dyn())->init(4,::format::mp3::Bitrate_obj::BR_32_dyn())->init(5,::format::mp3::Bitrate_obj::BR_40_dyn())->init(6,::format::mp3::Bitrate_obj::BR_48_dyn())->init(7,::format::mp3::Bitrate_obj::BR_56_dyn())->init(8,::format::mp3::Bitrate_obj::BR_64_dyn())->init(9,::format::mp3::Bitrate_obj::BR_80_dyn())->init(10,::format::mp3::Bitrate_obj::BR_96_dyn())->init(11,::format::mp3::Bitrate_obj::BR_112_dyn())->init(12,::format::mp3::Bitrate_obj::BR_128_dyn())->init(13,::format::mp3::Bitrate_obj::BR_144_dyn())->init(14,::format::mp3::Bitrate_obj::BR_160_dyn())->init(15,::format::mp3::Bitrate_obj::BR_Bad_dyn()))->init(3,::Array_obj< ::Dynamic>::__new(16)->init(0,::format::mp3::Bitrate_obj::BR_Free_dyn())->init(1,::format::mp3::Bitrate_obj::BR_32_dyn())->init(2,::format::mp3::Bitrate_obj::BR_48_dyn())->init(3,::format::mp3::Bitrate_obj::BR_56_dyn())->init(4,::format::mp3::Bitrate_obj::BR_64_dyn())->init(5,::format::mp3::Bitrate_obj::BR_80_dyn())->init(6,::format::mp3::Bitrate_obj::BR_96_dyn())->init(7,::format::mp3::Bitrate_obj::BR_112_dyn())->init(8,::format::mp3::Bitrate_obj::BR_128_dyn())->init(9,::format::mp3::Bitrate_obj::BR_144_dyn())->init(10,::format::mp3::Bitrate_obj::BR_160_dyn())->init(11,::format::mp3::Bitrate_obj::BR_176_dyn())->init(12,::format::mp3::Bitrate_obj::BR_192_dyn())->init(13,::format::mp3::Bitrate_obj::BR_224_dyn())->init(14,::format::mp3::Bitrate_obj::BR_256_dyn())->init(15,::format::mp3::Bitrate_obj::BR_Bad_dyn()));
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfb11b94c0b3f987_51_boot)
HXDLIN(  51)		SamplingRates = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< ::Dynamic>::__new(4)->init(0,::format::mp3::SamplingRate_obj::SR_11025_dyn())->init(1,::format::mp3::SamplingRate_obj::SR_12000_dyn())->init(2,::format::mp3::SamplingRate_obj::SR_8000_dyn())->init(3,::format::mp3::SamplingRate_obj::SR_Bad_dyn()))->init(1,::Array_obj< ::Dynamic>::__new(4)->init(0,::format::mp3::SamplingRate_obj::SR_Bad_dyn())->init(1,::format::mp3::SamplingRate_obj::SR_Bad_dyn())->init(2,::format::mp3::SamplingRate_obj::SR_Bad_dyn())->init(3,::format::mp3::SamplingRate_obj::SR_Bad_dyn()))->init(2,::Array_obj< ::Dynamic>::__new(4)->init(0,::format::mp3::SamplingRate_obj::SR_22050_dyn())->init(1,::format::mp3::SamplingRate_obj::SR_24000_dyn())->init(2,::format::mp3::SamplingRate_obj::SR_12000_dyn())->init(3,::format::mp3::SamplingRate_obj::SR_Bad_dyn()))->init(3,::Array_obj< ::Dynamic>::__new(4)->init(0,::format::mp3::SamplingRate_obj::SR_44100_dyn())->init(1,::format::mp3::SamplingRate_obj::SR_48000_dyn())->init(2,::format::mp3::SamplingRate_obj::SR_32000_dyn())->init(3,::format::mp3::SamplingRate_obj::SR_Bad_dyn()));
            	}
}

} // end namespace format
} // end namespace mp3
