#include <hxcpp.h>

#ifndef INCLUDED_hxd_Timer
#include <hxd/Timer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_62_update,"hxd.Timer","update",0x5523d10c,"hxd.Timer.update","hxd/Timer.hx",62,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_75_get_tmod,"hxd.Timer","get_tmod",0x1743e41a,"hxd.Timer.get_tmod","hxd/Timer.hx",75,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_78_set_tmod,"hxd.Timer","set_tmod",0xc5a13d8e,"hxd.Timer.set_tmod","hxd/Timer.hx",78,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_88_fps,"hxd.Timer","fps",0x922bcd06,"hxd.Timer.fps","hxd/Timer.hx",88,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_96_skip,"hxd.Timer","skip",0x5cbb8ac2,"hxd.Timer.skip","hxd/Timer.hx",96,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_103_reset,"hxd.Timer","reset",0x3007902c,"hxd.Timer.reset","hxd/Timer.hx",103,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_14_boot,"hxd.Timer","boot",0x5181f875,"hxd.Timer.boot","hxd/Timer.hx",14,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_21_boot,"hxd.Timer","boot",0x5181f875,"hxd.Timer.boot","hxd/Timer.hx",21,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_28_boot,"hxd.Timer","boot",0x5181f875,"hxd.Timer.boot","hxd/Timer.hx",28,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_33_boot,"hxd.Timer","boot",0x5181f875,"hxd.Timer.boot","hxd/Timer.hx",33,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_38_boot,"hxd.Timer","boot",0x5181f875,"hxd.Timer.boot","hxd/Timer.hx",38,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_43_boot,"hxd.Timer","boot",0x5181f875,"hxd.Timer.boot","hxd/Timer.hx",43,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_49_boot,"hxd.Timer","boot",0x5181f875,"hxd.Timer.boot","hxd/Timer.hx",49,0xd0279194)
HX_LOCAL_STACK_FRAME(_hx_pos_1ad27a74ba6d46ad_57_boot,"hxd.Timer","boot",0x5181f875,"hxd.Timer.boot","hxd/Timer.hx",57,0xd0279194)
namespace hxd{

void Timer_obj::__construct() { }

Dynamic Timer_obj::__CreateEmpty() { return new Timer_obj; }

void *Timer_obj::_hx_vtable = 0;

Dynamic Timer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Timer_obj > _hx_result = new Timer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Timer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d36b399;
}

Float Timer_obj::wantedFPS;

Float Timer_obj::maxDeltaTime;

Float Timer_obj::smoothFactor;

Float Timer_obj::lastTimeStamp;

Float Timer_obj::elapsedTime;

int Timer_obj::frameCount;

Float Timer_obj::dt;

Float Timer_obj::currentDT;

void Timer_obj::update(){
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_62_update)
HXLINE(  63)		::hxd::Timer_obj::frameCount++;
HXLINE(  64)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  64)		Float newTime;
HXDLIN(  64)		if ((timer > 0)) {
HXLINE(  64)			newTime = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  64)			newTime = ( (Float)(0) );
            		}
HXLINE(  65)		::hxd::Timer_obj::elapsedTime = (newTime - ::hxd::Timer_obj::lastTimeStamp);
HXLINE(  66)		::hxd::Timer_obj::lastTimeStamp = newTime;
HXLINE(  67)		if ((::hxd::Timer_obj::elapsedTime < ::hxd::Timer_obj::maxDeltaTime)) {
HXLINE(  68)			Float a = ::hxd::Timer_obj::elapsedTime;
HXDLIN(  68)			::hxd::Timer_obj::currentDT = (a + (::hxd::Timer_obj::smoothFactor * (::hxd::Timer_obj::currentDT - a)));
            		}
            		else {
HXLINE(  70)			::hxd::Timer_obj::elapsedTime = (( (Float)(1) ) / ::hxd::Timer_obj::wantedFPS);
            		}
HXLINE(  71)		::hxd::Timer_obj::dt = ::hxd::Timer_obj::currentDT;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,update,(void))

Float Timer_obj::get_tmod(){
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_75_get_tmod)
HXDLIN(  75)		return (::hxd::Timer_obj::dt * ::hxd::Timer_obj::wantedFPS);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,get_tmod,return )

Float Timer_obj::set_tmod(Float v){
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_78_set_tmod)
HXLINE(  79)		::hxd::Timer_obj::dt = (v / ::hxd::Timer_obj::wantedFPS);
HXLINE(  80)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,set_tmod,return )

Float Timer_obj::fps(){
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_88_fps)
HXDLIN(  88)		return (((Float)1.) / ::hxd::Timer_obj::currentDT);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,fps,return )

void Timer_obj::skip(){
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_96_skip)
HXDLIN(  96)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  96)		Float _hx_tmp;
HXDLIN(  96)		if ((timer > 0)) {
HXDLIN(  96)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXDLIN(  96)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  96)		::hxd::Timer_obj::lastTimeStamp = _hx_tmp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,skip,(void))

void Timer_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_103_reset)
HXLINE( 104)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 104)		Float _hx_tmp;
HXDLIN( 104)		if ((timer > 0)) {
HXLINE( 104)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 104)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN( 104)		::hxd::Timer_obj::lastTimeStamp = _hx_tmp;
HXLINE( 105)		::hxd::Timer_obj::dt = (::hxd::Timer_obj::currentDT = (((Float)1.) / ::hxd::Timer_obj::wantedFPS));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,reset,(void))


Timer_obj::Timer_obj()
{
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dt") ) { outValue = ( dt ); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { outValue = fps_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tmod") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_tmod() ); return true; } }
		if (HX_FIELD_EQ(inName,"skip") ) { outValue = skip_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_tmod") ) { outValue = get_tmod_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_tmod") ) { outValue = set_tmod_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wantedFPS") ) { outValue = ( wantedFPS ); return true; }
		if (HX_FIELD_EQ(inName,"currentDT") ) { outValue = ( currentDT ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { outValue = ( frameCount ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { outValue = ( elapsedTime ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"maxDeltaTime") ) { outValue = ( maxDeltaTime ); return true; }
		if (HX_FIELD_EQ(inName,"smoothFactor") ) { outValue = ( smoothFactor ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastTimeStamp") ) { outValue = ( lastTimeStamp ); return true; }
	}
	return false;
}

bool Timer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dt") ) { dt=ioValue.Cast< Float >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tmod") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_tmod(ioValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wantedFPS") ) { wantedFPS=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"currentDT") ) { currentDT=ioValue.Cast< Float >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { elapsedTime=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"maxDeltaTime") ) { maxDeltaTime=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"smoothFactor") ) { smoothFactor=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastTimeStamp") ) { lastTimeStamp=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Timer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Timer_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Timer_obj::wantedFPS,HX_("wantedFPS",fa,3f,bb,63)},
	{::hx::fsFloat,(void *) &Timer_obj::maxDeltaTime,HX_("maxDeltaTime",e1,9c,df,8c)},
	{::hx::fsFloat,(void *) &Timer_obj::smoothFactor,HX_("smoothFactor",9d,6b,de,26)},
	{::hx::fsFloat,(void *) &Timer_obj::lastTimeStamp,HX_("lastTimeStamp",80,1f,35,37)},
	{::hx::fsFloat,(void *) &Timer_obj::elapsedTime,HX_("elapsedTime",69,5e,cd,c6)},
	{::hx::fsInt,(void *) &Timer_obj::frameCount,HX_("frameCount",62,79,89,2d)},
	{::hx::fsFloat,(void *) &Timer_obj::dt,HX_("dt",90,57,00,00)},
	{::hx::fsFloat,(void *) &Timer_obj::currentDT,HX_("currentDT",09,18,2e,41)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Timer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::wantedFPS,"wantedFPS");
	HX_MARK_MEMBER_NAME(Timer_obj::maxDeltaTime,"maxDeltaTime");
	HX_MARK_MEMBER_NAME(Timer_obj::smoothFactor,"smoothFactor");
	HX_MARK_MEMBER_NAME(Timer_obj::lastTimeStamp,"lastTimeStamp");
	HX_MARK_MEMBER_NAME(Timer_obj::elapsedTime,"elapsedTime");
	HX_MARK_MEMBER_NAME(Timer_obj::frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(Timer_obj::dt,"dt");
	HX_MARK_MEMBER_NAME(Timer_obj::currentDT,"currentDT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Timer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::wantedFPS,"wantedFPS");
	HX_VISIT_MEMBER_NAME(Timer_obj::maxDeltaTime,"maxDeltaTime");
	HX_VISIT_MEMBER_NAME(Timer_obj::smoothFactor,"smoothFactor");
	HX_VISIT_MEMBER_NAME(Timer_obj::lastTimeStamp,"lastTimeStamp");
	HX_VISIT_MEMBER_NAME(Timer_obj::elapsedTime,"elapsedTime");
	HX_VISIT_MEMBER_NAME(Timer_obj::frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(Timer_obj::dt,"dt");
	HX_VISIT_MEMBER_NAME(Timer_obj::currentDT,"currentDT");
};

#endif

::hx::Class Timer_obj::__mClass;

static ::String Timer_obj_sStaticFields[] = {
	HX_("wantedFPS",fa,3f,bb,63),
	HX_("maxDeltaTime",e1,9c,df,8c),
	HX_("smoothFactor",9d,6b,de,26),
	HX_("lastTimeStamp",80,1f,35,37),
	HX_("elapsedTime",69,5e,cd,c6),
	HX_("frameCount",62,79,89,2d),
	HX_("dt",90,57,00,00),
	HX_("currentDT",09,18,2e,41),
	HX_("update",09,86,05,87),
	HX_("get_tmod",57,92,ba,cc),
	HX_("set_tmod",cb,eb,17,7b),
	HX_("fps",e9,c7,4d,00),
	HX_("skip",7f,16,55,4c),
	HX_("reset",cf,49,c8,e6),
	::String(null())
};

void Timer_obj::__register()
{
	Timer_obj _hx_dummy;
	Timer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.Timer",0b,53,e8,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &Timer_obj::__SetStatic;
	__mClass->mMarkFunc = Timer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Timer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Timer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Timer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Timer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Timer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Timer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_14_boot)
HXDLIN(  14)		wantedFPS = ((Float)60.);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_21_boot)
HXDLIN(  21)		maxDeltaTime = ((Float)0.5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_28_boot)
HXDLIN(  28)		smoothFactor = ((Float)0.95);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		Float _hx_run(){
            			HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_33_boot)
HXDLIN(  33)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  33)			if ((timer > 0)) {
HXDLIN(  33)				return (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXDLIN(  33)				return ( (Float)(0) );
            			}
HXDLIN(  33)			return ((Float)0.);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_33_boot)
HXDLIN(  33)		lastTimeStamp = ( (Float)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_38_boot)
HXDLIN(  38)		elapsedTime = ((Float)0.);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_43_boot)
HXDLIN(  43)		frameCount = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_49_boot)
HXDLIN(  49)		dt = (( (Float)(1) ) / ::hxd::Timer_obj::wantedFPS);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1ad27a74ba6d46ad_57_boot)
HXDLIN(  57)		currentDT = (( (Float)(1) ) / ::hxd::Timer_obj::wantedFPS);
            	}
}

} // end namespace hxd
