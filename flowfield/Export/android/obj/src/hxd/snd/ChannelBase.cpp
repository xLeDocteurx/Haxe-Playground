#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_snd_ChannelBase
#include <hxd/snd/ChannelBase.h>
#endif
#ifndef INCLUDED_hxd_snd_Effect
#include <hxd/snd/Effect.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_69381edbcbf7a44e_4_new,"hxd.snd.ChannelBase","new",0xc3375827,"hxd.snd.ChannelBase.new","hxd/snd/ChannelBase.hx",4,0x2dd9dd2b)
HX_LOCAL_STACK_FRAME(_hx_pos_69381edbcbf7a44e_18_getEffect,"hxd.snd.ChannelBase","getEffect",0x90ebface,"hxd.snd.ChannelBase.getEffect","hxd/snd/ChannelBase.hx",18,0x2dd9dd2b)
HX_LOCAL_STACK_FRAME(_hx_pos_69381edbcbf7a44e_27_set_volume,"hxd.snd.ChannelBase","set_volume",0x133a4730,"hxd.snd.ChannelBase.set_volume","hxd/snd/ChannelBase.hx",27,0x2dd9dd2b)
HX_LOCAL_STACK_FRAME(_hx_pos_69381edbcbf7a44e_33_fadeTo,"hxd.snd.ChannelBase","fadeTo",0x90ffa4b0,"hxd.snd.ChannelBase.fadeTo","hxd/snd/ChannelBase.hx",33,0x2dd9dd2b)
HX_LOCAL_STACK_FRAME(_hx_pos_69381edbcbf7a44e_36_updateCurrentVolume,"hxd.snd.ChannelBase","updateCurrentVolume",0x2e6068f1,"hxd.snd.ChannelBase.updateCurrentVolume","hxd/snd/ChannelBase.hx",36,0x2dd9dd2b)
HX_LOCAL_STACK_FRAME(_hx_pos_69381edbcbf7a44e_52_addEffect,"hxd.snd.ChannelBase","addEffect",0xccb9a699,"hxd.snd.ChannelBase.addEffect","hxd/snd/ChannelBase.hx",52,0x2dd9dd2b)
HX_LOCAL_STACK_FRAME(_hx_pos_69381edbcbf7a44e_61_removeEffect,"hxd.snd.ChannelBase","removeEffect",0xd7a7bd4e,"hxd.snd.ChannelBase.removeEffect","hxd/snd/ChannelBase.hx",61,0x2dd9dd2b)
namespace hxd{
namespace snd{

void ChannelBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_69381edbcbf7a44e_4_new)
HXLINE(  11)		this->volume = ((Float)1.);
HXLINE(   9)		this->bindedEffects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(   8)		this->effects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(   7)		this->mute = false;
HXLINE(   6)		this->priority = ((Float)0.);
            	}

Dynamic ChannelBase_obj::__CreateEmpty() { return new ChannelBase_obj; }

void *ChannelBase_obj::_hx_vtable = 0;

Dynamic ChannelBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChannelBase_obj > _hx_result = new ChannelBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChannelBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x431c9717;
}

 ::Dynamic ChannelBase_obj::getEffect(::hx::Class etype){
            	HX_STACKFRAME(&_hx_pos_69381edbcbf7a44e_18_getEffect)
HXLINE(  19)		if (::hx::IsNull( this->effects )) {
HXLINE(  19)			return null();
            		}
HXLINE(  20)		{
HXLINE(  20)			int _g = 0;
HXDLIN(  20)			::Array< ::Dynamic> _g1 = this->effects;
HXDLIN(  20)			while((_g < _g1->length)){
HXLINE(  20)				 ::hxd::snd::Effect e = _g1->__get(_g).StaticCast<  ::hxd::snd::Effect >();
HXDLIN(  20)				_g = (_g + 1);
HXLINE(  21)				 ::Dynamic e1 = ::Std_obj::downcast(e,etype);
HXLINE(  22)				if (::hx::IsNotNull( e1 )) {
HXLINE(  22)					return e1;
            				}
            			}
            		}
HXLINE(  24)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChannelBase_obj,getEffect,return )

Float ChannelBase_obj::set_volume(Float v){
            	HX_STACKFRAME(&_hx_pos_69381edbcbf7a44e_27_set_volume)
HXLINE(  28)		this->currentFade = null();
HXLINE(  29)		return (this->volume = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChannelBase_obj,set_volume,return )

void ChannelBase_obj::fadeTo(Float volume, ::Dynamic __o_time, ::Dynamic onEnd){
            		 ::Dynamic time = __o_time;
            		if (::hx::IsNull(__o_time)) time = ((Float)1.);
            	HX_STACKFRAME(&_hx_pos_69381edbcbf7a44e_33_fadeTo)
HXDLIN(  33)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  33)		Float _hx_tmp;
HXDLIN(  33)		if ((timer > 0)) {
HXDLIN(  33)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXDLIN(  33)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  33)		this->currentFade =  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("start",62,74,0b,84),_hx_tmp)
            			->setFixed(1,HX_("startVolume",dc,87,39,d7),this->volume)
            			->setFixed(2,HX_("duration",54,0f,8e,14),time)
            			->setFixed(3,HX_("targetVolume",0b,64,d7,1b),volume)
            			->setFixed(4,HX_("onEnd",fc,97,64,32),onEnd));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ChannelBase_obj,fadeTo,(void))

void ChannelBase_obj::updateCurrentVolume(Float now){
            	HX_STACKFRAME(&_hx_pos_69381edbcbf7a44e_36_updateCurrentVolume)
HXLINE(  37)		if (::hx::IsNotNull( this->currentFade )) {
HXLINE(  38)			 ::Dynamic f = this->currentFade;
HXLINE(  39)			Float dt = (now - ( (Float)(f->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic)) ));
HXLINE(  40)			if (::hx::IsGreaterEq( dt,f->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic) )) {
HXLINE(  41)				this->set_volume(( (Float)(f->__Field(HX_("targetVolume",0b,64,d7,1b),::hx::paccDynamic)) ));
HXLINE(  42)				if (::hx::IsNotNull( f->__Field(HX_("onEnd",fc,97,64,32),::hx::paccDynamic) )) {
HXLINE(  42)					f->__Field(HX_("onEnd",fc,97,64,32),::hx::paccDynamic)();
            				}
            			}
            			else {
HXLINE(  44)				this->set_volume(( (Float)((f->__Field(HX_("startVolume",dc,87,39,d7),::hx::paccDynamic) + ((dt / ( (Float)(f->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic)) )) * (( (Float)(f->__Field(HX_("targetVolume",0b,64,d7,1b),::hx::paccDynamic)) ) - ( (Float)(f->__Field(HX_("startVolume",dc,87,39,d7),::hx::paccDynamic)) ))))) ));
HXLINE(  45)				this->currentFade = f;
            			}
            		}
HXLINE(  48)		this->currentVolume = this->volume;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChannelBase_obj,updateCurrentVolume,(void))

 ::Dynamic ChannelBase_obj::addEffect( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_69381edbcbf7a44e_52_addEffect)
HXLINE(  53)		if (::hx::IsNull( e )) {
HXLINE(  53)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Can't add null effect",c8,ee,8e,eb)));
            		}
HXLINE(  54)		if ((this->effects->indexOf(e,null()) >= 0)) {
HXLINE(  54)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("effect already added on this channel",eb,62,76,36)));
            		}
HXLINE(  55)		this->effects->push(e);
HXLINE(  56)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChannelBase_obj,addEffect,return )

void ChannelBase_obj::removeEffect( ::hxd::snd::Effect e){
            	HX_STACKFRAME(&_hx_pos_69381edbcbf7a44e_61_removeEffect)
HXDLIN(  61)		this->effects->remove(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChannelBase_obj,removeEffect,(void))


::hx::ObjectPtr< ChannelBase_obj > ChannelBase_obj::__new() {
	::hx::ObjectPtr< ChannelBase_obj > __this = new ChannelBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChannelBase_obj > ChannelBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChannelBase_obj *__this = (ChannelBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChannelBase_obj), true, "hxd.snd.ChannelBase"));
	*(void **)__this = ChannelBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChannelBase_obj::ChannelBase_obj()
{
}

void ChannelBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChannelBase);
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(mute,"mute");
	HX_MARK_MEMBER_NAME(effects,"effects");
	HX_MARK_MEMBER_NAME(bindedEffects,"bindedEffects");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(currentFade,"currentFade");
	HX_MARK_MEMBER_NAME(currentVolume,"currentVolume");
	HX_MARK_END_CLASS();
}

void ChannelBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(mute,"mute");
	HX_VISIT_MEMBER_NAME(effects,"effects");
	HX_VISIT_MEMBER_NAME(bindedEffects,"bindedEffects");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(currentFade,"currentFade");
	HX_VISIT_MEMBER_NAME(currentVolume,"currentVolume");
}

::hx::Val ChannelBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mute") ) { return ::hx::Val( mute ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		if (HX_FIELD_EQ(inName,"fadeTo") ) { return ::hx::Val( fadeTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { return ::hx::Val( effects ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getEffect") ) { return ::hx::Val( getEffect_dyn() ); }
		if (HX_FIELD_EQ(inName,"addEffect") ) { return ::hx::Val( addEffect_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentFade") ) { return ::hx::Val( currentFade ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeEffect") ) { return ::hx::Val( removeEffect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bindedEffects") ) { return ::hx::Val( bindedEffects ); }
		if (HX_FIELD_EQ(inName,"currentVolume") ) { return ::hx::Val( currentVolume ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateCurrentVolume") ) { return ::hx::Val( updateCurrentVolume_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChannelBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mute") ) { mute=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< Float >()) );volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { effects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentFade") ) { currentFade=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bindedEffects") ) { bindedEffects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentVolume") ) { currentVolume=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChannelBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("priority",64,7b,3e,bb));
	outFields->push(HX_("mute",d9,6e,65,48));
	outFields->push(HX_("effects",c2,e4,4b,2e));
	outFields->push(HX_("bindedEffects",c6,f8,6c,b4));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("currentFade",55,8e,47,7c));
	outFields->push(HX_("currentVolume",f3,aa,af,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChannelBase_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ChannelBase_obj,priority),HX_("priority",64,7b,3e,bb)},
	{::hx::fsBool,(int)offsetof(ChannelBase_obj,mute),HX_("mute",d9,6e,65,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ChannelBase_obj,effects),HX_("effects",c2,e4,4b,2e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ChannelBase_obj,bindedEffects),HX_("bindedEffects",c6,f8,6c,b4)},
	{::hx::fsFloat,(int)offsetof(ChannelBase_obj,volume),HX_("volume",da,29,53,5f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ChannelBase_obj,currentFade),HX_("currentFade",55,8e,47,7c)},
	{::hx::fsFloat,(int)offsetof(ChannelBase_obj,currentVolume),HX_("currentVolume",f3,aa,af,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChannelBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ChannelBase_obj_sMemberFields[] = {
	HX_("priority",64,7b,3e,bb),
	HX_("mute",d9,6e,65,48),
	HX_("effects",c2,e4,4b,2e),
	HX_("bindedEffects",c6,f8,6c,b4),
	HX_("volume",da,29,53,5f),
	HX_("currentFade",55,8e,47,7c),
	HX_("currentVolume",f3,aa,af,42),
	HX_("getEffect",c7,e3,f9,dc),
	HX_("set_volume",17,38,58,53),
	HX_("fadeTo",17,56,ab,e4),
	HX_("updateCurrentVolume",2a,a3,36,d6),
	HX_("addEffect",92,8f,c7,18),
	HX_("removeEffect",f5,f5,d0,cf),
	::String(null()) };

::hx::Class ChannelBase_obj::__mClass;

void ChannelBase_obj::__register()
{
	ChannelBase_obj _hx_dummy;
	ChannelBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.ChannelBase",b5,b8,38,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChannelBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChannelBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChannelBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChannelBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
