#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_openal_Device
#include <hxd/snd/openal/Device.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b7f343ca600beefe_725_new,"hxd.snd.openal.Device","new",0x98ffea62,"hxd.snd.openal.Device.new","hxd/snd/openal/Emulator.hx",725,0x857ad050)
namespace hxd{
namespace snd{
namespace openal{

void Device_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b7f343ca600beefe_725_new)
            	}

Dynamic Device_obj::__CreateEmpty() { return new Device_obj; }

void *Device_obj::_hx_vtable = 0;

Dynamic Device_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Device_obj > _hx_result = new Device_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Device_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b7e7ec8;
}


Device_obj::Device_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Device_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Device_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Device_obj::__mClass;

void Device_obj::__register()
{
	Device_obj _hx_dummy;
	Device_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.Device",70,d1,26,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Device_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Device_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Device_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
