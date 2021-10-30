#include <hxcpp.h>

#ifndef INCLUDED_hxd_Cursor
#include <hxd/Cursor.h>
#endif
#ifndef INCLUDED_hxd_Platform
#include <hxd/Platform.h>
#endif
#ifndef INCLUDED_hxd_System
#include <hxd/System.h>
#endif
#ifndef INCLUDED_hxd_SystemValue
#include <hxd/SystemValue.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_39_timeoutTick,"hxd.System","timeoutTick",0x90be3b99,"hxd.System.timeoutTick","hxd/System.hx",39,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_45_getCurrentLoop,"hxd.System","getCurrentLoop",0x227f142c,"hxd.System.getCurrentLoop","hxd/System.hx",45,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_49_setLoop,"hxd.System","setLoop",0x7555daa1,"hxd.System.setLoop","hxd/System.hx",49,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_52_start,"hxd.System","start",0xb4d8031d,"hxd.System.start","hxd/System.hx",52,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_60_setNativeCursor,"hxd.System","setNativeCursor",0x3c77d10a,"hxd.System.setNativeCursor","hxd/System.hx",60,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_64_getDeviceName,"hxd.System","getDeviceName",0xea5e1bf2,"hxd.System.getDeviceName","hxd/System.hx",64,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_68_getDefaultFrameRate,"hxd.System","getDefaultFrameRate",0x9a7aa15d,"hxd.System.getDefaultFrameRate","hxd/System.hx",68,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_72_getValue,"hxd.System","getValue",0x402aa720,"hxd.System.getValue","hxd/System.hx",72,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_75_exit,"hxd.System","exit",0xec16d8c3,"hxd.System.exit","hxd/System.hx",75,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_78_openURL,"hxd.System","openURL",0xa84fb140,"hxd.System.openURL","hxd/System.hx",78,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_82_get_width,"hxd.System","get_width",0x27261a98,"hxd.System.get_width","hxd/System.hx",82,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_83_get_height,"hxd.System","get_height",0xd080a315,"hxd.System.get_height","hxd/System.hx",83,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_84_get_lang,"hxd.System","get_lang",0x7602d99c,"hxd.System.get_lang","hxd/System.hx",84,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_85_get_platform,"hxd.System","get_platform",0xa0edf561,"hxd.System.get_platform","hxd/System.hx",85,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_86_get_screenDPI,"hxd.System","get_screenDPI",0xd4b6a4e3,"hxd.System.get_screenDPI","hxd/System.hx",86,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_87_get_allowTimeout,"hxd.System","get_allowTimeout",0x7f2662c6,"hxd.System.get_allowTimeout","hxd/System.hx",87,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_88_set_allowTimeout,"hxd.System","set_allowTimeout",0xd568503a,"hxd.System.set_allowTimeout","hxd/System.hx",88,0xb8cb9154)
HX_LOCAL_STACK_FRAME(_hx_pos_0789dde757aa3cb7_29_boot,"hxd.System","boot",0xea1465d7,"hxd.System.boot","hxd/System.hx",29,0xb8cb9154)
namespace hxd{

void System_obj::__construct() { }

Dynamic System_obj::__CreateEmpty() { return new System_obj; }

void *System_obj::_hx_vtable = 0;

Dynamic System_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< System_obj > _hx_result = new System_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool System_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f4dda63;
}

 ::Dynamic System_obj::setCursor;

void System_obj::timeoutTick(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_39_timeoutTick)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,timeoutTick,(void))

 ::Dynamic System_obj::loopFunc;

 ::Dynamic System_obj::getCurrentLoop(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_45_getCurrentLoop)
HXDLIN(  45)		return ::hxd::System_obj::loopFunc;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getCurrentLoop,return )

void System_obj::setLoop( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_49_setLoop)
HXDLIN(  49)		::hxd::System_obj::loopFunc = f;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,setLoop,(void))

void System_obj::start( ::Dynamic callb){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_52_start)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,start,(void))

void System_obj::setNativeCursor( ::hxd::Cursor c){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_60_setNativeCursor)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,setNativeCursor,(void))

::String System_obj::getDeviceName(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_64_getDeviceName)
HXDLIN(  64)		return HX_("Unknown",6a,4b,cc,ae);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getDeviceName,return )

Float System_obj::getDefaultFrameRate(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_68_getDefaultFrameRate)
HXDLIN(  68)		return ((Float)60.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getDefaultFrameRate,return )

bool System_obj::getValue( ::hxd::SystemValue s){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_72_getValue)
HXDLIN(  72)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,getValue,return )

void System_obj::exit(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_75_exit)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,exit,(void))

void System_obj::openURL(::String url){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_78_openURL)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,openURL,(void))

int System_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_82_get_width)
HXDLIN(  82)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_width,return )

int System_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_83_get_height)
HXDLIN(  83)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_height,return )

::String System_obj::get_lang(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_84_get_lang)
HXDLIN(  84)		return HX_("en",69,58,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_lang,return )

 ::hxd::Platform System_obj::get_platform(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_85_get_platform)
HXDLIN(  85)		return ::hxd::Platform_obj::PC_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_platform,return )

int System_obj::get_screenDPI(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_86_get_screenDPI)
HXDLIN(  86)		return 72;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_screenDPI,return )

bool System_obj::get_allowTimeout(){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_87_get_allowTimeout)
HXDLIN(  87)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_allowTimeout,return )

bool System_obj::set_allowTimeout(bool b){
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_88_set_allowTimeout)
HXDLIN(  88)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,set_allowTimeout,return )


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lang") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_lang() ); return true; } }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_width() ); return true; } }
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_height() ); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setLoop") ) { outValue = setLoop_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_platform() ); return true; } }
		if (HX_FIELD_EQ(inName,"loopFunc") ) { outValue = ( loopFunc ); return true; }
		if (HX_FIELD_EQ(inName,"getValue") ) { outValue = getValue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_lang") ) { outValue = get_lang_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_screenDPI() ); return true; } }
		if (HX_FIELD_EQ(inName,"setCursor") ) { outValue = ( setCursor ); return true; }
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeoutTick") ) { outValue = timeoutTick_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowTimeout") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_allowTimeout() ); return true; } }
		if (HX_FIELD_EQ(inName,"get_platform") ) { outValue = get_platform_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDeviceName") ) { outValue = getDeviceName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_screenDPI") ) { outValue = get_screenDPI_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentLoop") ) { outValue = getCurrentLoop_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setNativeCursor") ) { outValue = setNativeCursor_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_allowTimeout") ) { outValue = get_allowTimeout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_allowTimeout") ) { outValue = set_allowTimeout_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getDefaultFrameRate") ) { outValue = getDefaultFrameRate_dyn(); return true; }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"loopFunc") ) { loopFunc=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setCursor") ) { setCursor=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowTimeout") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_allowTimeout(ioValue.Cast< bool >()) ); }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *System_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo System_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &System_obj::setCursor,HX_("setCursor",18,04,90,9e)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &System_obj::loopFunc,HX_("loopFunc",c8,bf,32,36)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void System_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::setCursor,"setCursor");
	HX_MARK_MEMBER_NAME(System_obj::loopFunc,"loopFunc");
};

#ifdef HXCPP_VISIT_ALLOCS
static void System_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::setCursor,"setCursor");
	HX_VISIT_MEMBER_NAME(System_obj::loopFunc,"loopFunc");
};

#endif

::hx::Class System_obj::__mClass;

static ::String System_obj_sStaticFields[] = {
	HX_("setCursor",18,04,90,9e),
	HX_("timeoutTick",9e,6e,e5,76),
	HX_("loopFunc",c8,bf,32,36),
	HX_("getCurrentLoop",47,d2,e7,07),
	HX_("setLoop",26,e7,3b,0d),
	HX_("start",62,74,0b,84),
	HX_("setNativeCursor",8f,6a,b5,12),
	HX_("getDeviceName",37,da,fb,0e),
	HX_("getDefaultFrameRate",62,e1,43,b6),
	HX_("getValue",fb,8e,8f,91),
	HX_("exit",1e,f7,1d,43),
	HX_("openURL",c5,bd,35,40),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_lang",77,c1,67,c7),
	HX_("get_platform",bc,66,13,1d),
	HX_("get_screenDPI",28,63,54,f9),
	HX_("get_allowTimeout",a1,1d,cf,1e),
	HX_("set_allowTimeout",15,0b,11,75),
	::String(null())
};

void System_obj::__register()
{
	System_obj _hx_dummy;
	System_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.System",e9,e0,70,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = System_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(System_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< System_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = System_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = System_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = System_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void System_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0789dde757aa3cb7_29_boot)
HXDLIN(  29)		setCursor = ::hxd::System_obj::setNativeCursor_dyn();
            	}
}

} // end namespace hxd
