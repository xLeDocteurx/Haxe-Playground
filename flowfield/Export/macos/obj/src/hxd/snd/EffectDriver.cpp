#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_EffectDriver
#include <hxd/snd/EffectDriver.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_SourceHandle
#include <hxd/snd/openal/SourceHandle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5869c8cf04aaa332_15_new,"hxd.snd.EffectDriver","new",0x49f9212a,"hxd.snd.EffectDriver.new","hxd/snd/Driver.hx",15,0xebfbdad5)
HX_LOCAL_STACK_FRAME(_hx_pos_5869c8cf04aaa332_17_acquire,"hxd.snd.EffectDriver","acquire",0x9262c9a0,"hxd.snd.EffectDriver.acquire","hxd/snd/Driver.hx",17,0xebfbdad5)
HX_LOCAL_STACK_FRAME(_hx_pos_5869c8cf04aaa332_18_release,"hxd.snd.EffectDriver","release",0x366c0391,"hxd.snd.EffectDriver.release","hxd/snd/Driver.hx",18,0xebfbdad5)
HX_LOCAL_STACK_FRAME(_hx_pos_5869c8cf04aaa332_19_update,"hxd.snd.EffectDriver","update",0x79174f7f,"hxd.snd.EffectDriver.update","hxd/snd/Driver.hx",19,0xebfbdad5)
HX_LOCAL_STACK_FRAME(_hx_pos_5869c8cf04aaa332_20_bind,"hxd.snd.EffectDriver","bind",0x681855b3,"hxd.snd.EffectDriver.bind","hxd/snd/Driver.hx",20,0xebfbdad5)
HX_LOCAL_STACK_FRAME(_hx_pos_5869c8cf04aaa332_21_apply,"hxd.snd.EffectDriver","apply",0x1e6e1cb8,"hxd.snd.EffectDriver.apply","hxd/snd/Driver.hx",21,0xebfbdad5)
HX_LOCAL_STACK_FRAME(_hx_pos_5869c8cf04aaa332_22_unbind,"hxd.snd.EffectDriver","unbind",0x50fdc60c,"hxd.snd.EffectDriver.unbind","hxd/snd/Driver.hx",22,0xebfbdad5)
namespace hxd{
namespace snd{

void EffectDriver_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5869c8cf04aaa332_15_new)
            	}

Dynamic EffectDriver_obj::__CreateEmpty() { return new EffectDriver_obj; }

void *EffectDriver_obj::_hx_vtable = 0;

Dynamic EffectDriver_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EffectDriver_obj > _hx_result = new EffectDriver_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EffectDriver_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ca6af32;
}

void EffectDriver_obj::acquire(){
            	HX_STACKFRAME(&_hx_pos_5869c8cf04aaa332_17_acquire)
            	}


HX_DEFINE_DYNAMIC_FUNC0(EffectDriver_obj,acquire,(void))

void EffectDriver_obj::release(){
            	HX_STACKFRAME(&_hx_pos_5869c8cf04aaa332_18_release)
            	}


HX_DEFINE_DYNAMIC_FUNC0(EffectDriver_obj,release,(void))

void EffectDriver_obj::update( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_5869c8cf04aaa332_19_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(EffectDriver_obj,update,(void))

void EffectDriver_obj::bind( ::Dynamic e, ::hxd::snd::openal::SourceHandle source){
            	HX_STACKFRAME(&_hx_pos_5869c8cf04aaa332_20_bind)
            	}


HX_DEFINE_DYNAMIC_FUNC2(EffectDriver_obj,bind,(void))

void EffectDriver_obj::apply( ::Dynamic e, ::hxd::snd::openal::SourceHandle source){
            	HX_STACKFRAME(&_hx_pos_5869c8cf04aaa332_21_apply)
            	}


HX_DEFINE_DYNAMIC_FUNC2(EffectDriver_obj,apply,(void))

void EffectDriver_obj::unbind( ::Dynamic e, ::hxd::snd::openal::SourceHandle source){
            	HX_STACKFRAME(&_hx_pos_5869c8cf04aaa332_22_unbind)
            	}


HX_DEFINE_DYNAMIC_FUNC2(EffectDriver_obj,unbind,(void))


::hx::ObjectPtr< EffectDriver_obj > EffectDriver_obj::__new() {
	::hx::ObjectPtr< EffectDriver_obj > __this = new EffectDriver_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EffectDriver_obj > EffectDriver_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EffectDriver_obj *__this = (EffectDriver_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EffectDriver_obj), false, "hxd.snd.EffectDriver"));
	*(void **)__this = EffectDriver_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EffectDriver_obj::EffectDriver_obj()
{
}

::hx::Val EffectDriver_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbind") ) { return ::hx::Val( unbind_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"acquire") ) { return ::hx::Val( acquire_dyn() ); }
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EffectDriver_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EffectDriver_obj_sStaticStorageInfo = 0;
#endif

static ::String EffectDriver_obj_sMemberFields[] = {
	HX_("acquire",d6,4b,e4,b4),
	HX_("release",c7,85,ed,58),
	HX_("update",09,86,05,87),
	HX_("bind",bd,f5,16,41),
	HX_("apply",6e,85,3b,24),
	HX_("unbind",96,fc,eb,5e),
	::String(null()) };

::hx::Class EffectDriver_obj::__mClass;

void EffectDriver_obj::__register()
{
	EffectDriver_obj _hx_dummy;
	EffectDriver_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.EffectDriver",38,04,fb,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EffectDriver_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EffectDriver_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EffectDriver_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EffectDriver_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
