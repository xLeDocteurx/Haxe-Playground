#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_hxd_res_Sound
#include <hxd/res/Sound.h>
#endif
#ifndef INCLUDED_hxd_snd_Buffer
#include <hxd/snd/Buffer.h>
#endif
#ifndef INCLUDED_hxd_snd_Channel
#include <hxd/snd/Channel.h>
#endif
#ifndef INCLUDED_hxd_snd_ChannelBase
#include <hxd/snd/ChannelBase.h>
#endif
#ifndef INCLUDED_hxd_snd_Driver
#include <hxd/snd/Driver.h>
#endif
#ifndef INCLUDED_hxd_snd_Manager
#include <hxd/snd/Manager.h>
#endif
#ifndef INCLUDED_hxd_snd_Source
#include <hxd/snd/Source.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_SourceHandle
#include <hxd/snd/openal/SourceHandle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2f8d86a00842b6f2_7_new,"hxd.snd.Source","new",0x0532182c,"hxd.snd.Source.new","hxd/snd/Manager.hx",7,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_2f8d86a00842b6f2_31_dispose,"hxd.snd.Source","dispose",0x70189e6b,"hxd.snd.Source.dispose","hxd/snd/Manager.hx",31,0x82fafa52)
HX_LOCAL_STACK_FRAME(_hx_pos_2f8d86a00842b6f2_8_boot,"hxd.snd.Source","boot",0x7ebc0ee6,"hxd.snd.Source.boot","hxd/snd/Manager.hx",8,0x82fafa52)
namespace hxd{
namespace snd{

void Source_obj::__construct(::Dynamic driver){
            	HX_STACKFRAME(&_hx_pos_2f8d86a00842b6f2_7_new)
HXLINE(  17)		this->start = 0;
HXLINE(  16)		this->playing = false;
HXLINE(  15)		this->volume = ((Float)-1.0);
HXLINE(  25)		this->id = ::hxd::snd::Source_obj::ID++;
HXLINE(  26)		this->handle = ::hxd::snd::Driver_obj::createSource(driver);
HXLINE(  27)		this->buffers = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic Source_obj::__CreateEmpty() { return new Source_obj; }

void *Source_obj::_hx_vtable = 0;

Dynamic Source_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Source_obj > _hx_result = new Source_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Source_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x085cbc50;
}

void Source_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_2f8d86a00842b6f2_31_dispose)
HXDLIN(  31)		::hxd::snd::Driver_obj::destroySource(::hxd::snd::Manager_obj::get()->driver,this->handle);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Source_obj,dispose,(void))

int Source_obj::ID;


::hx::ObjectPtr< Source_obj > Source_obj::__new(::Dynamic driver) {
	::hx::ObjectPtr< Source_obj > __this = new Source_obj();
	__this->__construct(driver);
	return __this;
}

::hx::ObjectPtr< Source_obj > Source_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic driver) {
	Source_obj *__this = (Source_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Source_obj), true, "hxd.snd.Source"));
	*(void **)__this = Source_obj::_hx_vtable;
	__this->__construct(driver);
	return __this;
}

Source_obj::Source_obj()
{
}

void Source_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Source);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(channel,"channel");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(streamSound,"streamSound");
	HX_MARK_MEMBER_NAME(streamBuffer,"streamBuffer");
	HX_MARK_MEMBER_NAME(streamStart,"streamStart");
	HX_MARK_MEMBER_NAME(streamPos,"streamPos");
	HX_MARK_END_CLASS();
}

void Source_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(channel,"channel");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(streamSound,"streamSound");
	HX_VISIT_MEMBER_NAME(streamBuffer,"streamBuffer");
	HX_VISIT_MEMBER_NAME(streamStart,"streamStart");
	HX_VISIT_MEMBER_NAME(streamPos,"streamPos");
}

::hx::Val Source_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { return ::hx::Val( channel ); }
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"playing") ) { return ::hx::Val( playing ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"streamPos") ) { return ::hx::Val( streamPos ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"streamSound") ) { return ::hx::Val( streamSound ); }
		if (HX_FIELD_EQ(inName,"streamStart") ) { return ::hx::Val( streamStart ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"streamBuffer") ) { return ::hx::Val( streamBuffer ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Source_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { outValue = ( ID ); return true; }
	}
	return false;
}

::hx::Val Source_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::hxd::snd::openal::SourceHandle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { channel=inValue.Cast<  ::hxd::snd::Channel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"streamPos") ) { streamPos=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"streamSound") ) { streamSound=inValue.Cast<  ::hxd::res::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"streamStart") ) { streamStart=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"streamBuffer") ) { streamBuffer=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Source_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Source_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("channel",c3,00,d2,cc));
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("playing",6e,0f,18,8a));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("streamSound",2f,98,92,f0));
	outFields->push(HX_("streamBuffer",a0,a5,18,2e));
	outFields->push(HX_("streamStart",c2,7f,d1,f3));
	outFields->push(HX_("streamPos",f4,d0,0f,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Source_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Source_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::hxd::snd::openal::SourceHandle */ ,(int)offsetof(Source_obj,handle),HX_("handle",a8,83,fd,b7)},
	{::hx::fsObject /*  ::hxd::snd::Channel */ ,(int)offsetof(Source_obj,channel),HX_("channel",c3,00,d2,cc)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Source_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{::hx::fsFloat,(int)offsetof(Source_obj,volume),HX_("volume",da,29,53,5f)},
	{::hx::fsBool,(int)offsetof(Source_obj,playing),HX_("playing",6e,0f,18,8a)},
	{::hx::fsInt,(int)offsetof(Source_obj,start),HX_("start",62,74,0b,84)},
	{::hx::fsObject /*  ::hxd::res::Sound */ ,(int)offsetof(Source_obj,streamSound),HX_("streamSound",2f,98,92,f0)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Source_obj,streamBuffer),HX_("streamBuffer",a0,a5,18,2e)},
	{::hx::fsInt,(int)offsetof(Source_obj,streamStart),HX_("streamStart",c2,7f,d1,f3)},
	{::hx::fsInt,(int)offsetof(Source_obj,streamPos),HX_("streamPos",f4,d0,0f,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Source_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Source_obj::ID,HX_("ID",db,3f,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Source_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("handle",a8,83,fd,b7),
	HX_("channel",c3,00,d2,cc),
	HX_("buffers",73,a3,90,b1),
	HX_("volume",da,29,53,5f),
	HX_("playing",6e,0f,18,8a),
	HX_("start",62,74,0b,84),
	HX_("streamSound",2f,98,92,f0),
	HX_("streamBuffer",a0,a5,18,2e),
	HX_("streamStart",c2,7f,d1,f3),
	HX_("streamPos",f4,d0,0f,b6),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

static void Source_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Source_obj::ID,"ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Source_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Source_obj::ID,"ID");
};

#endif

::hx::Class Source_obj::__mClass;

static ::String Source_obj_sStaticFields[] = {
	HX_("ID",db,3f,00,00),
	::String(null())
};

void Source_obj::__register()
{
	Source_obj _hx_dummy;
	Source_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.Source",3a,d2,e7,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Source_obj::__GetStatic;
	__mClass->mSetStaticField = &Source_obj::__SetStatic;
	__mClass->mMarkFunc = Source_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Source_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Source_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Source_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Source_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Source_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Source_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Source_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2f8d86a00842b6f2_8_boot)
HXDLIN(   8)		ID = 0;
            	}
}

} // end namespace hxd
} // end namespace snd
