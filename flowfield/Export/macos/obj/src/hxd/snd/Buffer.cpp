#include <hxcpp.h>

#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_hxd_res_Sound
#include <hxd/res/Sound.h>
#endif
#ifndef INCLUDED_hxd_snd_Buffer
#include <hxd/snd/Buffer.h>
#endif
#ifndef INCLUDED_hxd_snd_Driver
#include <hxd/snd/Driver.h>
#endif
#ifndef INCLUDED_hxd_snd_Manager
#include <hxd/snd/Manager.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_BufferHandle
#include <hxd/snd/openal/BufferHandle.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cdc01ea84b140f8e_36_new,"hxd.snd.Buffer","new",0x2dde9ad1,"hxd.snd.Buffer.new","hxd/snd/Manager.hx",36,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_cdc01ea84b140f8e_56_dispose,"hxd.snd.Buffer","dispose",0x774bd790,"hxd.snd.Buffer.dispose","hxd/snd/Manager.hx",56,0x82fafa52)
namespace hxd{
namespace snd{

void Buffer_obj::__construct(::Dynamic driver){
            	HX_STACKFRAME(&_hx_pos_cdc01ea84b140f8e_36_new)
HXLINE(  45)		this->end = 0;
HXLINE(  50)		this->handle = ::hxd::snd::Driver_obj::createBuffer(driver);
HXLINE(  51)		this->refs = 0;
HXLINE(  52)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  52)		Float _hx_tmp;
HXDLIN(  52)		if ((timer > 0)) {
HXLINE(  52)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  52)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  52)		this->lastStop = _hx_tmp;
            	}

Dynamic Buffer_obj::__CreateEmpty() { return new Buffer_obj; }

void *Buffer_obj::_hx_vtable = 0;

Dynamic Buffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Buffer_obj > _hx_result = new Buffer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Buffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d6740cd;
}

void Buffer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_cdc01ea84b140f8e_56_dispose)
HXDLIN(  56)		::hxd::snd::Driver_obj::destroyBuffer(::hxd::snd::Manager_obj::get()->driver,this->handle);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,dispose,(void))


::hx::ObjectPtr< Buffer_obj > Buffer_obj::__new(::Dynamic driver) {
	::hx::ObjectPtr< Buffer_obj > __this = new Buffer_obj();
	__this->__construct(driver);
	return __this;
}

::hx::ObjectPtr< Buffer_obj > Buffer_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic driver) {
	Buffer_obj *__this = (Buffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Buffer_obj), true, "hxd.snd.Buffer"));
	*(void **)__this = Buffer_obj::_hx_vtable;
	__this->__construct(driver);
	return __this;
}

Buffer_obj::Buffer_obj()
{
}

void Buffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffer);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(isEnd,"isEnd");
	HX_MARK_MEMBER_NAME(isStream,"isStream");
	HX_MARK_MEMBER_NAME(refs,"refs");
	HX_MARK_MEMBER_NAME(lastStop,"lastStop");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_END_CLASS();
}

void Buffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(isEnd,"isEnd");
	HX_VISIT_MEMBER_NAME(isStream,"isStream");
	HX_VISIT_MEMBER_NAME(refs,"refs");
	HX_VISIT_MEMBER_NAME(lastStop,"lastStop");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(samples,"samples");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
}

::hx::Val Buffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"refs") ) { return ::hx::Val( refs ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound ); }
		if (HX_FIELD_EQ(inName,"isEnd") ) { return ::hx::Val( isEnd ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { return ::hx::Val( samples ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isStream") ) { return ::hx::Val( isStream ); }
		if (HX_FIELD_EQ(inName,"lastStop") ) { return ::hx::Val( lastStop ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return ::hx::Val( sampleRate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Buffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"refs") ) { refs=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::hxd::res::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isEnd") ) { isEnd=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::hxd::snd::openal::BufferHandle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isStream") ) { isStream=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStop") ) { lastStop=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("sound",cf,8c,cc,80));
	outFields->push(HX_("isEnd",11,2e,4b,c1));
	outFields->push(HX_("isStream",0a,b0,96,69));
	outFields->push(HX_("refs",c0,4f,a7,4b));
	outFields->push(HX_("lastStop",78,09,a5,df));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("samples",09,c5,c9,83));
	outFields->push(HX_("sampleRate",2a,3c,4c,67));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Buffer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::openal::BufferHandle */ ,(int)offsetof(Buffer_obj,handle),HX_("handle",a8,83,fd,b7)},
	{::hx::fsObject /*  ::hxd::res::Sound */ ,(int)offsetof(Buffer_obj,sound),HX_("sound",cf,8c,cc,80)},
	{::hx::fsBool,(int)offsetof(Buffer_obj,isEnd),HX_("isEnd",11,2e,4b,c1)},
	{::hx::fsBool,(int)offsetof(Buffer_obj,isStream),HX_("isStream",0a,b0,96,69)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,refs),HX_("refs",c0,4f,a7,4b)},
	{::hx::fsFloat,(int)offsetof(Buffer_obj,lastStop),HX_("lastStop",78,09,a5,df)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,start),HX_("start",62,74,0b,84)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,end),HX_("end",db,03,4d,00)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,samples),HX_("samples",09,c5,c9,83)},
	{::hx::fsInt,(int)offsetof(Buffer_obj,sampleRate),HX_("sampleRate",2a,3c,4c,67)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Buffer_obj_sStaticStorageInfo = 0;
#endif

static ::String Buffer_obj_sMemberFields[] = {
	HX_("handle",a8,83,fd,b7),
	HX_("sound",cf,8c,cc,80),
	HX_("isEnd",11,2e,4b,c1),
	HX_("isStream",0a,b0,96,69),
	HX_("refs",c0,4f,a7,4b),
	HX_("lastStop",78,09,a5,df),
	HX_("start",62,74,0b,84),
	HX_("end",db,03,4d,00),
	HX_("samples",09,c5,c9,83),
	HX_("sampleRate",2a,3c,4c,67),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class Buffer_obj::__mClass;

void Buffer_obj::__register()
{
	Buffer_obj _hx_dummy;
	Buffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.Buffer",5f,de,4a,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Buffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Buffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Buffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Buffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
