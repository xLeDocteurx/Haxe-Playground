#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_ChannelMode
#include <format/mp3/ChannelMode.h>
#endif
#ifndef INCLUDED_format_mp3_MPEG
#include <format/mp3/MPEG.h>
#endif
#ifndef INCLUDED_format_mp3_Reader
#include <format/mp3/Reader.h>
#endif
#ifndef INCLUDED_format_mp3_SamplingRate
#include <format/mp3/SamplingRate.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hxd_snd_Data
#include <hxd/snd/Data.h>
#endif
#ifndef INCLUDED_hxd_snd_Mp3Data
#include <hxd/snd/Mp3Data.h>
#endif
#ifndef INCLUDED_hxd_snd_SampleFormat
#include <hxd/snd/SampleFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6906a445ece9742d_28_new,"hxd.snd.Mp3Data","new",0x77c19ded,"hxd.snd.Mp3Data.new","hxd/snd/Mp3Data.hx",28,0x2c334925)
HX_LOCAL_STACK_FRAME(_hx_pos_6906a445ece9742d_206_decodeBuffer,"hxd.snd.Mp3Data","decodeBuffer",0x5cca3da1,"hxd.snd.Mp3Data.decodeBuffer","hxd/snd/Mp3Data.hx",206,0x2c334925)
namespace hxd{
namespace snd{

void Mp3Data_obj::__construct( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_6906a445ece9742d_28_new)
HXLINE(  29)		 ::Dynamic mp =  ::format::mp3::Reader_obj::__alloc( HX_CTX , ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null()))->read();
HXLINE(  30)		this->samples = ( (int)(mp->__Field(HX_("sampleCount",45,7c,a7,61),::hx::paccDynamic)) );
HXLINE(  33)		 ::haxe::io::Bytes frame = ( ( ::haxe::io::Bytes)( ::Dynamic(mp->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic))->__GetItem(0)->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) );
HXLINE(  34)		int lame = -1;
HXLINE(  35)		{
HXLINE(  35)			int _g = 0;
HXDLIN(  35)			int _g1 = (frame->length - 24);
HXDLIN(  35)			while((_g < _g1)){
HXLINE(  35)				_g = (_g + 1);
HXDLIN(  35)				int i = (_g - 1);
HXLINE(  36)				bool _hx_tmp;
HXDLIN(  36)				bool _hx_tmp1;
HXDLIN(  36)				bool _hx_tmp2;
HXDLIN(  36)				if ((frame->b->__get(i) == 76)) {
HXLINE(  36)					_hx_tmp2 = (frame->b->__get((i + 1)) == 65);
            				}
            				else {
HXLINE(  36)					_hx_tmp2 = false;
            				}
HXDLIN(  36)				if (_hx_tmp2) {
HXLINE(  36)					_hx_tmp1 = (frame->b->__get((i + 2)) == 77);
            				}
            				else {
HXLINE(  36)					_hx_tmp1 = false;
            				}
HXDLIN(  36)				if (_hx_tmp1) {
HXLINE(  36)					_hx_tmp = (frame->b->__get((i + 3)) == 69);
            				}
            				else {
HXLINE(  36)					_hx_tmp = false;
            				}
HXDLIN(  36)				if (_hx_tmp) {
HXLINE(  37)					lame = i;
HXLINE(  38)					goto _hx_goto_0;
            				}
            			}
            			_hx_goto_0:;
            		}
HXLINE(  40)		if ((lame >= 0)) {
HXLINE(  41)			int startEnd = (((( (int)(frame->b->__get((lame + 21))) ) << 16) | (( (int)(frame->b->__get((lame + 22))) ) << 8)) | ( (int)(frame->b->__get((lame + 23))) ));
HXLINE(  42)			int start = (startEnd >> 12);
HXLINE(  43)			int end = (startEnd & 4095);
HXLINE(  44)			 ::hxd::snd::Mp3Data _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  44)			_hx_tmp->samples = (_hx_tmp->samples - ((start + end) + 1152));
            		}
HXLINE(  47)		 ::Dynamic header =  ::Dynamic(mp->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic))->__GetItem(0)->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic);
HXLINE(  48)		this->sampleFormat = ::hxd::snd::SampleFormat_obj::F32_dyn();
HXLINE(  49)		this->samplingRate = ::format::mp3::MPEG_obj::srEnum2Num(header->__Field(HX_("samplingRate",67,a6,32,36),::hx::paccDynamic));
HXLINE(  50)		int _hx_tmp;
HXDLIN(  50)		if (::hx::IsPointerEq( header->__Field(HX_("channelMode",c6,1d,2f,18),::hx::paccDynamic),::format::mp3::ChannelMode_obj::Mono_dyn() )) {
HXLINE(  50)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  50)			_hx_tmp = 2;
            		}
HXDLIN(  50)		this->channels = _hx_tmp;
            	}

Dynamic Mp3Data_obj::__CreateEmpty() { return new Mp3Data_obj; }

void *Mp3Data_obj::_hx_vtable = 0;

Dynamic Mp3Data_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mp3Data_obj > _hx_result = new Mp3Data_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Mp3Data_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x74492a5f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x74492a5f;
	} else {
		return inClassId==(int)0x7f716c5d;
	}
}

void Mp3Data_obj::decodeBuffer( ::haxe::io::Bytes out,int outPos,int sampleStart,int sampleCount){
            	HX_STACKFRAME(&_hx_pos_6906a445ece9742d_206_decodeBuffer)
HXDLIN( 206)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("MP3 decoding is not available for this platform",e9,7a,8c,ed)));
            	}



::hx::ObjectPtr< Mp3Data_obj > Mp3Data_obj::__new( ::haxe::io::Bytes bytes) {
	::hx::ObjectPtr< Mp3Data_obj > __this = new Mp3Data_obj();
	__this->__construct(bytes);
	return __this;
}

::hx::ObjectPtr< Mp3Data_obj > Mp3Data_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes) {
	Mp3Data_obj *__this = (Mp3Data_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mp3Data_obj), true, "hxd.snd.Mp3Data"));
	*(void **)__this = Mp3Data_obj::_hx_vtable;
	__this->__construct(bytes);
	return __this;
}

Mp3Data_obj::Mp3Data_obj()
{
}

::hx::Val Mp3Data_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"decodeBuffer") ) { return ::hx::Val( decodeBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Mp3Data_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Mp3Data_obj_sStaticStorageInfo = 0;
#endif

static ::String Mp3Data_obj_sMemberFields[] = {
	HX_("decodeBuffer",ce,a4,d5,1e),
	::String(null()) };

::hx::Class Mp3Data_obj::__mClass;

void Mp3Data_obj::__register()
{
	Mp3Data_obj _hx_dummy;
	Mp3Data_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.Mp3Data",7b,23,ef,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Mp3Data_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Mp3Data_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mp3Data_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mp3Data_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
