#include <hxcpp.h>

#ifndef INCLUDED_hxsl__Dce_Exit
#include <hxsl/_Dce/Exit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3026f1fdb5c6c73e_5_new,"hxsl._Dce.Exit","new",0xec37e412,"hxsl._Dce.Exit.new","hxsl/Dce.hx",5,0x7744a77e)
namespace hxsl{
namespace _Dce{

void Exit_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3026f1fdb5c6c73e_5_new)
            	}

Dynamic Exit_obj::__CreateEmpty() { return new Exit_obj; }

void *Exit_obj::_hx_vtable = 0;

Dynamic Exit_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Exit_obj > _hx_result = new Exit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Exit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e5de4ce;
}


Exit_obj::Exit_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Exit_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Exit_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Exit_obj::__mClass;

void Exit_obj::__register()
{
	Exit_obj _hx_dummy;
	Exit_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl._Dce.Exit",20,33,14,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Exit_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Exit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Exit_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
} // end namespace _Dce
