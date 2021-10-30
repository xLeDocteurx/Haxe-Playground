#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_Driver
#include <hxd/snd/Driver.h>
#endif
#ifndef INCLUDED_hxd_snd_Effect
#include <hxd/snd/Effect.h>
#endif
#ifndef INCLUDED_hxd_snd_EffectDriver
#include <hxd/snd/EffectDriver.h>
#endif
#ifndef INCLUDED_hxd_snd_Manager
#include <hxd/snd/Manager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7c747086189f56cf_14_new,"hxd.snd.Effect","new",0x4319d4e2,"hxd.snd.Effect.new","hxd/snd/Effect.hx",14,0xa243a80c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c747086189f56cf_29_applyAudibleVolumeModifier,"hxd.snd.Effect","applyAudibleVolumeModifier",0x74a245e3,"hxd.snd.Effect.applyAudibleVolumeModifier","hxd/snd/Effect.hx",29,0xa243a80c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c747086189f56cf_34_getVolumeModifier,"hxd.snd.Effect","getVolumeModifier",0x0030fe89,"hxd.snd.Effect.getVolumeModifier","hxd/snd/Effect.hx",34,0xa243a80c)
namespace hxd{
namespace snd{

void Effect_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_7c747086189f56cf_14_new)
HXLINE(  15)		this->refs = 0;
HXLINE(  16)		this->priority = 0;
HXLINE(  17)		this->retainTime = ((Float)0.0);
HXLINE(  18)		this->lastStamp = ((Float)0.0);
HXLINE(  21)		::Dynamic managerDriver = ::hxd::snd::Manager_obj::get()->driver;
HXLINE(  22)		if (::hx::IsNotNull( managerDriver )) {
HXLINE(  23)			this->driver = ::hxd::snd::Driver_obj::getEffectDriver(managerDriver,type);
            		}
            	}

Dynamic Effect_obj::__CreateEmpty() { return new Effect_obj; }

void *Effect_obj::_hx_vtable = 0;

Dynamic Effect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Effect_obj > _hx_result = new Effect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Effect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36ce6606;
}

Float Effect_obj::applyAudibleVolumeModifier(Float v){
            	HX_STACKFRAME(&_hx_pos_7c747086189f56cf_29_applyAudibleVolumeModifier)
HXDLIN(  29)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,applyAudibleVolumeModifier,return )

Float Effect_obj::getVolumeModifier(){
            	HX_STACKFRAME(&_hx_pos_7c747086189f56cf_34_getVolumeModifier)
HXDLIN(  34)		return ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,getVolumeModifier,return )


::hx::ObjectPtr< Effect_obj > Effect_obj::__new(::String type) {
	::hx::ObjectPtr< Effect_obj > __this = new Effect_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< Effect_obj > Effect_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	Effect_obj *__this = (Effect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Effect_obj), true, "hxd.snd.Effect"));
	*(void **)__this = Effect_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

Effect_obj::Effect_obj()
{
}

void Effect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Effect);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(refs,"refs");
	HX_MARK_MEMBER_NAME(retainTime,"retainTime");
	HX_MARK_MEMBER_NAME(lastStamp,"lastStamp");
	HX_MARK_MEMBER_NAME(driver,"driver");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_END_CLASS();
}

void Effect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(refs,"refs");
	HX_VISIT_MEMBER_NAME(retainTime,"retainTime");
	HX_VISIT_MEMBER_NAME(lastStamp,"lastStamp");
	HX_VISIT_MEMBER_NAME(driver,"driver");
	HX_VISIT_MEMBER_NAME(priority,"priority");
}

::hx::Val Effect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"refs") ) { return ::hx::Val( refs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { return ::hx::Val( driver ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastStamp") ) { return ::hx::Val( lastStamp ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"retainTime") ) { return ::hx::Val( retainTime ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getVolumeModifier") ) { return ::hx::Val( getVolumeModifier_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"applyAudibleVolumeModifier") ) { return ::hx::Val( applyAudibleVolumeModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Effect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxd::snd::Effect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"refs") ) { refs=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"driver") ) { driver=inValue.Cast<  ::hxd::snd::EffectDriver >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastStamp") ) { lastStamp=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"retainTime") ) { retainTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Effect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("refs",c0,4f,a7,4b));
	outFields->push(HX_("retainTime",72,2e,48,10));
	outFields->push(HX_("lastStamp",cd,9d,b8,d0));
	outFields->push(HX_("driver",28,80,1f,e5));
	outFields->push(HX_("priority",64,7b,3e,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Effect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::Effect */ ,(int)offsetof(Effect_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsInt,(int)offsetof(Effect_obj,refs),HX_("refs",c0,4f,a7,4b)},
	{::hx::fsFloat,(int)offsetof(Effect_obj,retainTime),HX_("retainTime",72,2e,48,10)},
	{::hx::fsFloat,(int)offsetof(Effect_obj,lastStamp),HX_("lastStamp",cd,9d,b8,d0)},
	{::hx::fsObject /*  ::hxd::snd::EffectDriver */ ,(int)offsetof(Effect_obj,driver),HX_("driver",28,80,1f,e5)},
	{::hx::fsInt,(int)offsetof(Effect_obj,priority),HX_("priority",64,7b,3e,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Effect_obj_sStaticStorageInfo = 0;
#endif

static ::String Effect_obj_sMemberFields[] = {
	HX_("next",f3,84,02,49),
	HX_("refs",c0,4f,a7,4b),
	HX_("retainTime",72,2e,48,10),
	HX_("lastStamp",cd,9d,b8,d0),
	HX_("driver",28,80,1f,e5),
	HX_("priority",64,7b,3e,bb),
	HX_("applyAudibleVolumeModifier",25,fa,3d,b4),
	HX_("getVolumeModifier",87,da,a4,18),
	::String(null()) };

::hx::Class Effect_obj::__mClass;

void Effect_obj::__register()
{
	Effect_obj _hx_dummy;
	Effect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.Effect",f0,7b,59,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Effect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Effect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Effect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Effect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
