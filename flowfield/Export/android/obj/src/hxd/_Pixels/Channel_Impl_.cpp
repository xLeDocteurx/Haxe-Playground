#include <hxcpp.h>

#ifndef INCLUDED_hxd__Pixels_Channel_Impl_
#include <hxd/_Pixels/Channel_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_02220430ff11b481_89_toInt,"hxd._Pixels.Channel_Impl_","toInt",0x0f86c46d,"hxd._Pixels.Channel_Impl_.toInt","hxd/Pixels.hx",89,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_02220430ff11b481_90_fromInt,"hxd._Pixels.Channel_Impl_","fromInt",0xdf68a41e,"hxd._Pixels.Channel_Impl_.fromInt","hxd/Pixels.hx",90,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_02220430ff11b481_85_boot,"hxd._Pixels.Channel_Impl_","boot",0x93bde819,"hxd._Pixels.Channel_Impl_.boot","hxd/Pixels.hx",85,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_02220430ff11b481_86_boot,"hxd._Pixels.Channel_Impl_","boot",0x93bde819,"hxd._Pixels.Channel_Impl_.boot","hxd/Pixels.hx",86,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_02220430ff11b481_87_boot,"hxd._Pixels.Channel_Impl_","boot",0x93bde819,"hxd._Pixels.Channel_Impl_.boot","hxd/Pixels.hx",87,0x892673d6)
HX_LOCAL_STACK_FRAME(_hx_pos_02220430ff11b481_88_boot,"hxd._Pixels.Channel_Impl_","boot",0x93bde819,"hxd._Pixels.Channel_Impl_.boot","hxd/Pixels.hx",88,0x892673d6)
namespace hxd{
namespace _Pixels{

void Channel_Impl__obj::__construct() { }

Dynamic Channel_Impl__obj::__CreateEmpty() { return new Channel_Impl__obj; }

void *Channel_Impl__obj::_hx_vtable = 0;

Dynamic Channel_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Channel_Impl__obj > _hx_result = new Channel_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Channel_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d84c2ab;
}

int Channel_Impl__obj::R;

int Channel_Impl__obj::G;

int Channel_Impl__obj::B;

int Channel_Impl__obj::A;

int Channel_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_02220430ff11b481_89_toInt)
HXDLIN(  89)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Channel_Impl__obj,toInt,return )

int Channel_Impl__obj::fromInt(int v){
            	HX_STACKFRAME(&_hx_pos_02220430ff11b481_90_fromInt)
HXDLIN(  90)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Channel_Impl__obj,fromInt,return )


Channel_Impl__obj::Channel_Impl__obj()
{
}

bool Channel_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Channel_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Channel_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Channel_Impl__obj::R,HX_("R",52,00,00,00)},
	{::hx::fsInt,(void *) &Channel_Impl__obj::G,HX_("G",47,00,00,00)},
	{::hx::fsInt,(void *) &Channel_Impl__obj::B,HX_("B",42,00,00,00)},
	{::hx::fsInt,(void *) &Channel_Impl__obj::A,HX_("A",41,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Channel_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Channel_Impl__obj::R,"R");
	HX_MARK_MEMBER_NAME(Channel_Impl__obj::G,"G");
	HX_MARK_MEMBER_NAME(Channel_Impl__obj::B,"B");
	HX_MARK_MEMBER_NAME(Channel_Impl__obj::A,"A");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Channel_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Channel_Impl__obj::R,"R");
	HX_VISIT_MEMBER_NAME(Channel_Impl__obj::G,"G");
	HX_VISIT_MEMBER_NAME(Channel_Impl__obj::B,"B");
	HX_VISIT_MEMBER_NAME(Channel_Impl__obj::A,"A");
};

#endif

::hx::Class Channel_Impl__obj::__mClass;

static ::String Channel_Impl__obj_sStaticFields[] = {
	HX_("R",52,00,00,00),
	HX_("G",47,00,00,00),
	HX_("B",42,00,00,00),
	HX_("A",41,00,00,00),
	HX_("toInt",34,be,11,14),
	HX_("fromInt",a5,dd,fa,57),
	::String(null())
};

void Channel_Impl__obj::__register()
{
	Channel_Impl__obj _hx_dummy;
	Channel_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd._Pixels.Channel_Impl_",e7,85,fa,f2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Channel_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Channel_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Channel_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Channel_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Channel_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Channel_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Channel_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Channel_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_02220430ff11b481_85_boot)
HXDLIN(  85)		R = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_02220430ff11b481_86_boot)
HXDLIN(  86)		G = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_02220430ff11b481_87_boot)
HXDLIN(  87)		B = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_02220430ff11b481_88_boot)
HXDLIN(  88)		A = 3;
            	}
}

} // end namespace hxd
} // end namespace _Pixels
