#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_wav_Reader
#include <format/wav/Reader.h>
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
#ifndef INCLUDED_hxd_snd_SampleFormat
#include <hxd/snd/SampleFormat.h>
#endif
#ifndef INCLUDED_hxd_snd_WavData
#include <hxd/snd/WavData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_932697955a4d48da_9_new,"hxd.snd.WavData","new",0x714343a9,"hxd.snd.WavData.new","hxd/snd/WavData.hx",9,0x4b2aaee9)
HX_LOCAL_STACK_FRAME(_hx_pos_932697955a4d48da_13_init,"hxd.snd.WavData","init",0xa650a7a7,"hxd.snd.WavData.init","hxd/snd/WavData.hx",13,0x4b2aaee9)
HX_LOCAL_STACK_FRAME(_hx_pos_932697955a4d48da_27_decodeBuffer,"hxd.snd.WavData","decodeBuffer",0xe11c0065,"hxd.snd.WavData.decodeBuffer","hxd/snd/WavData.hx",27,0x4b2aaee9)
namespace hxd{
namespace snd{

void WavData_obj::__construct( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_932697955a4d48da_9_new)
HXDLIN(   9)		if (::hx::IsNotNull( bytes )) {
HXLINE(  10)			this->init( ::format::wav::Reader_obj::__alloc( HX_CTX , ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null()))->read());
            		}
            	}

Dynamic WavData_obj::__CreateEmpty() { return new WavData_obj; }

void *WavData_obj::_hx_vtable = 0;

Dynamic WavData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WavData_obj > _hx_result = new WavData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WavData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x74492a5f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x74492a5f;
	} else {
		return inClassId==(int)0x7f9db469;
	}
}

void WavData_obj::init( ::Dynamic d){
            	HX_STACKFRAME(&_hx_pos_932697955a4d48da_13_init)
HXLINE(  14)		 ::Dynamic h = d->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic);
HXLINE(  15)		this->samplingRate = ( (int)(h->__Field(HX_("samplingRate",67,a6,32,36),::hx::paccDynamic)) );
HXLINE(  16)		this->channels = ( (int)(h->__Field(HX_("channels",50,aa,ee,6a),::hx::paccDynamic)) );
HXLINE(  17)		 ::hxd::snd::SampleFormat _hx_tmp;
HXDLIN(  17)		switch((int)(( (int)(h->__Field(HX_("bitsPerSample",01,01,36,c4),::hx::paccDynamic)) ))){
            			case (int)8: {
HXLINE(  17)				_hx_tmp = ::hxd::snd::SampleFormat_obj::UI8_dyn();
            			}
            			break;
            			case (int)16: {
HXLINE(  17)				_hx_tmp = ::hxd::snd::SampleFormat_obj::I16_dyn();
            			}
            			break;
            			default:{
HXLINE(  21)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic(((HX_("Unsupported WAV ",ff,1c,d5,e5) + h->__Field(HX_("bitsPerSample",01,01,36,c4),::hx::paccDynamic)) + HX_(" bits",26,8b,e9,ad)))));
            			}
            		}
HXLINE(  17)		this->sampleFormat = _hx_tmp;
HXLINE(  23)		this->rawData = ( ( ::haxe::io::Bytes)(d->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) );
HXLINE(  24)		int _hx_tmp1 = this->rawData->length;
HXDLIN(  24)		this->samples = ::Std_obj::_hx_int((( (Float)(_hx_tmp1) ) / ( (Float)(this->getBytesPerSample()) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(WavData_obj,init,(void))

void WavData_obj::decodeBuffer( ::haxe::io::Bytes out,int outPos,int sampleStart,int sampleCount){
            	HX_STACKFRAME(&_hx_pos_932697955a4d48da_27_decodeBuffer)
HXLINE(  28)		int bpp = this->getBytesPerSample();
HXLINE(  29)		out->blit(outPos,this->rawData,(sampleStart * bpp),(sampleCount * bpp));
            	}



::hx::ObjectPtr< WavData_obj > WavData_obj::__new( ::haxe::io::Bytes bytes) {
	::hx::ObjectPtr< WavData_obj > __this = new WavData_obj();
	__this->__construct(bytes);
	return __this;
}

::hx::ObjectPtr< WavData_obj > WavData_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes) {
	WavData_obj *__this = (WavData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WavData_obj), true, "hxd.snd.WavData"));
	*(void **)__this = WavData_obj::_hx_vtable;
	__this->__construct(bytes);
	return __this;
}

WavData_obj::WavData_obj()
{
}

void WavData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WavData);
	HX_MARK_MEMBER_NAME(rawData,"rawData");
	 ::hxd::snd::Data_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WavData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rawData,"rawData");
	 ::hxd::snd::Data_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WavData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { return ::hx::Val( rawData ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"decodeBuffer") ) { return ::hx::Val( decodeBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WavData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { rawData=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WavData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rawData",32,6c,18,ff));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WavData_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(WavData_obj,rawData),HX_("rawData",32,6c,18,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WavData_obj_sStaticStorageInfo = 0;
#endif

static ::String WavData_obj_sMemberFields[] = {
	HX_("rawData",32,6c,18,ff),
	HX_("init",10,3b,bb,45),
	HX_("decodeBuffer",ce,a4,d5,1e),
	::String(null()) };

::hx::Class WavData_obj::__mClass;

void WavData_obj::__register()
{
	WavData_obj _hx_dummy;
	WavData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.WavData",37,3b,44,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WavData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WavData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WavData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WavData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
