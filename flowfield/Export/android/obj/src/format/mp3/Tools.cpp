#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_mp3_Bitrate
#include <format/mp3/Bitrate.h>
#endif
#ifndef INCLUDED_format_mp3_CLayer
#include <format/mp3/CLayer.h>
#endif
#ifndef INCLUDED_format_mp3_ChannelMode
#include <format/mp3/ChannelMode.h>
#endif
#ifndef INCLUDED_format_mp3_Emphasis
#include <format/mp3/Emphasis.h>
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
#ifndef INCLUDED_format_mp3_Tools
#include <format/mp3/Tools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d2677bf64b1d3b37_40_getBitrate,"format.mp3.Tools","getBitrate",0x4191991f,"format.mp3.Tools.getBitrate","format/mp3/Tools.hx",40,0xa737367a)
HX_LOCAL_STACK_FRAME(_hx_pos_d2677bf64b1d3b37_51_getSamplingRate,"format.mp3.Tools","getSamplingRate",0xa8a31635,"format.mp3.Tools.getSamplingRate","format/mp3/Tools.hx",51,0xa737367a)
HX_LOCAL_STACK_FRAME(_hx_pos_d2677bf64b1d3b37_58_isInvalidFrameHeader,"format.mp3.Tools","isInvalidFrameHeader",0xc0f5a955,"format.mp3.Tools.isInvalidFrameHeader","format/mp3/Tools.hx",58,0xa737367a)
HX_LOCAL_STACK_FRAME(_hx_pos_d2677bf64b1d3b37_75_getSampleDataSize,"format.mp3.Tools","getSampleDataSize",0x430555a3,"format.mp3.Tools.getSampleDataSize","format/mp3/Tools.hx",75,0xa737367a)
HX_LOCAL_STACK_FRAME(_hx_pos_d2677bf64b1d3b37_79_getSampleDataSizeHdr,"format.mp3.Tools","getSampleDataSizeHdr",0x49328c13,"format.mp3.Tools.getSampleDataSizeHdr","format/mp3/Tools.hx",79,0xa737367a)
HX_LOCAL_STACK_FRAME(_hx_pos_d2677bf64b1d3b37_91_getSampleCount,"format.mp3.Tools","getSampleCount",0xdbda8037,"format.mp3.Tools.getSampleCount","format/mp3/Tools.hx",91,0xa737367a)
HX_LOCAL_STACK_FRAME(_hx_pos_d2677bf64b1d3b37_95_getSampleCountHdr,"format.mp3.Tools","getSampleCountHdr",0x484735ff,"format.mp3.Tools.getSampleCountHdr","format/mp3/Tools.hx",95,0xa737367a)
HX_LOCAL_STACK_FRAME(_hx_pos_d2677bf64b1d3b37_103_getFrameInfo,"format.mp3.Tools","getFrameInfo",0x65e1baad,"format.mp3.Tools.getFrameInfo","format/mp3/Tools.hx",103,0xa737367a)
namespace format{
namespace mp3{

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
	return inClassId==(int)0x00000001 || inClassId==(int)0x45caa366;
}

 ::format::mp3::Bitrate Tools_obj::getBitrate(int mpegVersion,int layerIdx,int bitrateIdx){
            	HX_STACKFRAME(&_hx_pos_d2677bf64b1d3b37_40_getBitrate)
HXLINE(  41)		bool _hx_tmp;
HXDLIN(  41)		if ((mpegVersion != ::format::mp3::MPEG_obj::Reserved)) {
HXLINE(  41)			_hx_tmp = (layerIdx == ::format::mp3::CLayer_obj::LReserved);
            		}
            		else {
HXLINE(  41)			_hx_tmp = true;
            		}
HXDLIN(  41)		if (_hx_tmp) {
HXLINE(  42)			return ::format::mp3::Bitrate_obj::BR_Bad_dyn();
            		}
HXLINE(  44)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN(  44)		if ((mpegVersion == 3)) {
HXLINE(  44)			_hx_tmp1 = ::format::mp3::MPEG_obj::V1_Bitrates;
            		}
            		else {
HXLINE(  44)			_hx_tmp1 = ::format::mp3::MPEG_obj::V2_Bitrates;
            		}
HXDLIN(  44)		return _hx_tmp1->__get(layerIdx).StaticCast< ::Array< ::Dynamic> >()->__get(bitrateIdx).StaticCast<  ::format::mp3::Bitrate >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Tools_obj,getBitrate,return )

 ::format::mp3::SamplingRate Tools_obj::getSamplingRate(int mpegVersion,int samplingRateIdx){
            	HX_STACKFRAME(&_hx_pos_d2677bf64b1d3b37_51_getSamplingRate)
HXDLIN(  51)		return ::format::mp3::MPEG_obj::SamplingRates->__get(mpegVersion).StaticCast< ::Array< ::Dynamic> >()->__get(samplingRateIdx).StaticCast<  ::format::mp3::SamplingRate >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,getSamplingRate,return )

bool Tools_obj::isInvalidFrameHeader( ::Dynamic hdr){
            	HX_STACKFRAME(&_hx_pos_d2677bf64b1d3b37_58_isInvalidFrameHeader)
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		bool _hx_tmp1;
HXDLIN(  59)		bool _hx_tmp2;
HXDLIN(  59)		if (::hx::IsPointerNotEq( hdr->__Field(HX_("version",18,e7,f1,7c),::hx::paccDynamic),::format::mp3::MPEGVersion_obj::MPEG_Reserved_dyn() )) {
HXLINE(  59)			_hx_tmp2 = ::hx::IsPointerEq( hdr->__Field(HX_("layer",d1,81,c0,6f),::hx::paccDynamic),::format::mp3::Layer_obj::LayerReserved_dyn() );
            		}
            		else {
HXLINE(  59)			_hx_tmp2 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp2)) {
HXLINE(  59)			_hx_tmp1 = ::hx::IsPointerEq( hdr->__Field(HX_("bitrate",2d,f6,cf,fc),::hx::paccDynamic),::format::mp3::Bitrate_obj::BR_Bad_dyn() );
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp1)) {
HXLINE(  59)			_hx_tmp = ::hx::IsPointerEq( hdr->__Field(HX_("bitrate",2d,f6,cf,fc),::hx::paccDynamic),::format::mp3::Bitrate_obj::BR_Free_dyn() );
            		}
            		else {
HXLINE(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp)) {
HXLINE(  63)			return ::hx::IsPointerEq( hdr->__Field(HX_("samplingRate",67,a6,32,36),::hx::paccDynamic),::format::mp3::SamplingRate_obj::SR_Bad_dyn() );
            		}
            		else {
HXLINE(  59)			return true;
            		}
HXDLIN(  59)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,isInvalidFrameHeader,return )

int Tools_obj::getSampleDataSize(int mpegVersion,int bitrate,int samplingRate,bool isPadded,bool hasCrc){
            	HX_STACKFRAME(&_hx_pos_d2677bf64b1d3b37_75_getSampleDataSize)
HXDLIN(  75)		int _hx_tmp;
HXDLIN(  75)		if ((mpegVersion == 3)) {
HXDLIN(  75)			_hx_tmp = 144;
            		}
            		else {
HXDLIN(  75)			_hx_tmp = 72;
            		}
HXDLIN(  75)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(((_hx_tmp * bitrate) * 1000)) ) / ( (Float)(samplingRate) )));
HXDLIN(  75)		int _hx_tmp2;
HXDLIN(  75)		if (isPadded) {
HXDLIN(  75)			_hx_tmp2 = 1;
            		}
            		else {
HXDLIN(  75)			_hx_tmp2 = 0;
            		}
HXDLIN(  75)		int _hx_tmp3;
HXDLIN(  75)		if (hasCrc) {
HXDLIN(  75)			_hx_tmp3 = 2;
            		}
            		else {
HXDLIN(  75)			_hx_tmp3 = 0;
            		}
HXDLIN(  75)		return (((_hx_tmp1 + _hx_tmp2) - _hx_tmp3) - 4);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Tools_obj,getSampleDataSize,return )

int Tools_obj::getSampleDataSizeHdr( ::Dynamic hdr){
            	HX_STACKFRAME(&_hx_pos_d2677bf64b1d3b37_79_getSampleDataSizeHdr)
HXLINE(  80)		int _hx_tmp = ::format::mp3::MPEG_obj::enum2Num(hdr->__Field(HX_("version",18,e7,f1,7c),::hx::paccDynamic));
HXLINE(  81)		int _hx_tmp1 = ::format::mp3::MPEG_obj::bitrateEnum2Num(hdr->__Field(HX_("bitrate",2d,f6,cf,fc),::hx::paccDynamic));
HXLINE(  82)		int _hx_tmp2 = ::format::mp3::MPEG_obj::srEnum2Num(hdr->__Field(HX_("samplingRate",67,a6,32,36),::hx::paccDynamic));
HXLINE(  79)		return ::format::mp3::Tools_obj::getSampleDataSize(_hx_tmp,_hx_tmp1,_hx_tmp2,( (bool)(hdr->__Field(HX_("isPadded",da,d9,a5,3c),::hx::paccDynamic)) ),( (bool)(hdr->__Field(HX_("hasCrc",9a,8f,32,bb),::hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getSampleDataSizeHdr,return )

int Tools_obj::getSampleCount(int mpegVersion){
            	HX_STACKFRAME(&_hx_pos_d2677bf64b1d3b37_91_getSampleCount)
HXDLIN(  91)		if ((mpegVersion == 3)) {
HXDLIN(  91)			return 1152;
            		}
            		else {
HXDLIN(  91)			return 576;
            		}
HXDLIN(  91)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getSampleCount,return )

int Tools_obj::getSampleCountHdr( ::Dynamic hdr){
            	HX_STACKFRAME(&_hx_pos_d2677bf64b1d3b37_95_getSampleCountHdr)
HXDLIN(  95)		return ::format::mp3::Tools_obj::getSampleCount(::format::mp3::MPEG_obj::enum2Num(hdr->__Field(HX_("version",18,e7,f1,7c),::hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getSampleCountHdr,return )

::String Tools_obj::getFrameInfo( ::Dynamic fr){
            	HX_STACKFRAME(&_hx_pos_d2677bf64b1d3b37_103_getFrameInfo)
HXLINE( 104)		::String _hx_tmp = (::Std_obj::string( ::Dynamic( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("version",18,e7,f1,7c),::hx::paccDynamic))) + HX_(", ",74,26,00,00));
HXDLIN( 104)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string( ::Dynamic( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("layer",d1,81,c0,6f),::hx::paccDynamic)))) + HX_(", ",74,26,00,00));
HXDLIN( 104)		::String _hx_tmp2 = ((_hx_tmp1 + ::Std_obj::string( ::Dynamic( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("channelMode",c6,1d,2f,18),::hx::paccDynamic)))) + HX_(", ",74,26,00,00));
HXDLIN( 104)		::String _hx_tmp3 = ((_hx_tmp2 + ::Std_obj::string( ::Dynamic( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("samplingRate",67,a6,32,36),::hx::paccDynamic)))) + HX_(" Hz, ",46,a6,c6,9c));
HXDLIN( 104)		::String _hx_tmp4 = (((_hx_tmp3 + ::Std_obj::string( ::Dynamic( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("bitrate",2d,f6,cf,fc),::hx::paccDynamic)))) + HX_(" kbps ",66,e7,67,a8)) + HX_("Emphasis: ",82,c3,17,d5));
HXDLIN( 104)		::String _hx_tmp5 = ((_hx_tmp4 + ::Std_obj::string( ::Dynamic( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("emphasis",bc,a5,a4,2f),::hx::paccDynamic)))) + HX_(", ",74,26,00,00));
HXLINE( 110)		::String _hx_tmp6;
HXDLIN( 110)		if (( (bool)( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("hasCrc",9a,8f,32,bb),::hx::paccDynamic)) )) {
HXLINE( 110)			_hx_tmp6 = HX_("(CRC) ",63,c6,85,c8);
            		}
            		else {
HXLINE( 110)			_hx_tmp6 = HX_("",00,00,00,00);
            		}
HXLINE( 111)		::String _hx_tmp7;
HXDLIN( 111)		if (( (bool)( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("isPadded",da,d9,a5,3c),::hx::paccDynamic)) )) {
HXLINE( 111)			_hx_tmp7 = HX_("(Padded) ",6f,ba,ee,69);
            		}
            		else {
HXLINE( 111)			_hx_tmp7 = HX_("",00,00,00,00);
            		}
HXLINE( 112)		::String _hx_tmp8;
HXDLIN( 112)		if (( (bool)( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("isIntensityStereo",81,95,5b,f4),::hx::paccDynamic)) )) {
HXLINE( 112)			_hx_tmp8 = HX_("(Intensity Stereo) ",84,06,eb,9b);
            		}
            		else {
HXLINE( 112)			_hx_tmp8 = HX_("",00,00,00,00);
            		}
HXLINE( 113)		::String _hx_tmp9;
HXDLIN( 113)		if (( (bool)( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("isMSStereo",28,cd,d2,8d),::hx::paccDynamic)) )) {
HXLINE( 113)			_hx_tmp9 = HX_("(MS Stereo) ",01,ae,06,6b);
            		}
            		else {
HXLINE( 113)			_hx_tmp9 = HX_("",00,00,00,00);
            		}
HXLINE( 114)		::String _hx_tmp10;
HXDLIN( 114)		if (( (bool)( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("isCopyrighted",5c,b8,4b,a5),::hx::paccDynamic)) )) {
HXLINE( 114)			_hx_tmp10 = HX_("(Copyrighted) ",35,b8,f3,35);
            		}
            		else {
HXLINE( 114)			_hx_tmp10 = HX_("",00,00,00,00);
            		}
HXLINE( 115)		::String _hx_tmp11;
HXDLIN( 115)		if (( (bool)( ::Dynamic(fr->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("isOriginal",5b,46,97,5b),::hx::paccDynamic)) )) {
HXLINE( 115)			_hx_tmp11 = HX_("(Original) ",b0,94,0c,2c);
            		}
            		else {
HXLINE( 115)			_hx_tmp11 = HX_("",00,00,00,00);
            		}
HXLINE( 103)		return ((((((_hx_tmp5 + _hx_tmp6) + _hx_tmp7) + _hx_tmp8) + _hx_tmp9) + _hx_tmp10) + _hx_tmp11);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getFrameInfo,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getBitrate") ) { outValue = getBitrate_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFrameInfo") ) { outValue = getFrameInfo_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getSampleCount") ) { outValue = getSampleCount_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSamplingRate") ) { outValue = getSamplingRate_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getSampleDataSize") ) { outValue = getSampleDataSize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSampleCountHdr") ) { outValue = getSampleCountHdr_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isInvalidFrameHeader") ) { outValue = isInvalidFrameHeader_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSampleDataSizeHdr") ) { outValue = getSampleDataSizeHdr_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("getBitrate",37,7c,31,4c),
	HX_("getSamplingRate",1d,fc,1c,59),
	HX_("isInvalidFrameHeader",6d,5a,49,36),
	HX_("getSampleDataSize",8b,85,32,72),
	HX_("getSampleDataSizeHdr",2b,3d,86,be),
	HX_("getSampleCount",4f,cf,45,e9),
	HX_("getSampleCountHdr",e7,65,74,77),
	HX_("getFrameInfo",c5,93,92,42),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.mp3.Tools",86,ca,8a,61);
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
} // end namespace mp3
