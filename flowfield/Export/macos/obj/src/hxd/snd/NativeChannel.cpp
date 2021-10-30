#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif
#ifndef INCLUDED_hxd_snd_NativeChannel
#include <hxd/snd/NativeChannel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa487d8db72300f2_128_new,"hxd.snd.NativeChannel","new",0x117803df,"hxd.snd.NativeChannel.new","hxd/snd/NativeChannel.hx",128,0x58dc94f3)
HX_LOCAL_STACK_FRAME(_hx_pos_aa487d8db72300f2_214_onSample,"hxd.snd.NativeChannel","onSample",0x440d16ca,"hxd.snd.NativeChannel.onSample","hxd/snd/NativeChannel.hx",214,0x58dc94f3)
HX_LOCAL_STACK_FRAME(_hx_pos_aa487d8db72300f2_217_stop,"hxd.snd.NativeChannel","stop",0x3ae4cba3,"hxd.snd.NativeChannel.stop","hxd/snd/NativeChannel.hx",217,0x58dc94f3)
namespace hxd{
namespace snd{

void NativeChannel_obj::__construct(int bufferSamples){
            	HX_STACKFRAME(&_hx_pos_aa487d8db72300f2_128_new)
HXDLIN( 128)		this->bufferSamples = bufferSamples;
            	}

Dynamic NativeChannel_obj::__CreateEmpty() { return new NativeChannel_obj; }

void *NativeChannel_obj::_hx_vtable = 0;

Dynamic NativeChannel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeChannel_obj > _hx_result = new NativeChannel_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NativeChannel_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61e51833;
}

void NativeChannel_obj::onSample( ::haxe::io::ArrayBufferViewImpl out){
            	HX_STACKFRAME(&_hx_pos_aa487d8db72300f2_214_onSample)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeChannel_obj,onSample,(void))

void NativeChannel_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_aa487d8db72300f2_217_stop)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeChannel_obj,stop,(void))


::hx::ObjectPtr< NativeChannel_obj > NativeChannel_obj::__new(int bufferSamples) {
	::hx::ObjectPtr< NativeChannel_obj > __this = new NativeChannel_obj();
	__this->__construct(bufferSamples);
	return __this;
}

::hx::ObjectPtr< NativeChannel_obj > NativeChannel_obj::__alloc(::hx::Ctx *_hx_ctx,int bufferSamples) {
	NativeChannel_obj *__this = (NativeChannel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeChannel_obj), false, "hxd.snd.NativeChannel"));
	*(void **)__this = NativeChannel_obj::_hx_vtable;
	__this->__construct(bufferSamples);
	return __this;
}

NativeChannel_obj::NativeChannel_obj()
{
}

::hx::Val NativeChannel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onSample") ) { return ::hx::Val( onSample_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bufferSamples") ) { return ::hx::Val( bufferSamples ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NativeChannel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"bufferSamples") ) { bufferSamples=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bufferSamples",e9,cf,47,b9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeChannel_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NativeChannel_obj,bufferSamples),HX_("bufferSamples",e9,cf,47,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NativeChannel_obj_sStaticStorageInfo = 0;
#endif

static ::String NativeChannel_obj_sMemberFields[] = {
	HX_("bufferSamples",e9,cf,47,b9),
	HX_("onSample",a9,56,f7,fc),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

::hx::Class NativeChannel_obj::__mClass;

void NativeChannel_obj::__register()
{
	NativeChannel_obj _hx_dummy;
	NativeChannel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.NativeChannel",6d,28,5b,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeChannel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeChannel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeChannel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeChannel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
