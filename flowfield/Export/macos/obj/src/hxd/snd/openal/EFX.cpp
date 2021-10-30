#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_openal_EFX
#include <hxd/snd/openal/EFX.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1c9bfa0a1c96fc55_860_boot,"hxd.snd.openal.EFX","boot",0x1fb0d263,"hxd.snd.openal.EFX.boot","hxd/snd/openal/Emulator.hx",860,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_1c9bfa0a1c96fc55_861_boot,"hxd.snd.openal.EFX","boot",0x1fb0d263,"hxd.snd.openal.EFX.boot","hxd/snd/openal/Emulator.hx",861,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_1c9bfa0a1c96fc55_862_boot,"hxd.snd.openal.EFX","boot",0x1fb0d263,"hxd.snd.openal.EFX.boot","hxd/snd/openal/Emulator.hx",862,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_1c9bfa0a1c96fc55_865_boot,"hxd.snd.openal.EFX","boot",0x1fb0d263,"hxd.snd.openal.EFX.boot","hxd/snd/openal/Emulator.hx",865,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_1c9bfa0a1c96fc55_868_boot,"hxd.snd.openal.EFX","boot",0x1fb0d263,"hxd.snd.openal.EFX.boot","hxd/snd/openal/Emulator.hx",868,0x857ad050)
HX_LOCAL_STACK_FRAME(_hx_pos_1c9bfa0a1c96fc55_869_boot,"hxd.snd.openal.EFX","boot",0x1fb0d263,"hxd.snd.openal.EFX.boot","hxd/snd/openal/Emulator.hx",869,0x857ad050)
namespace hxd{
namespace snd{
namespace openal{

void EFX_obj::__construct() { }

Dynamic EFX_obj::__CreateEmpty() { return new EFX_obj; }

void *EFX_obj::_hx_vtable = 0;

Dynamic EFX_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EFX_obj > _hx_result = new EFX_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EFX_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0861b34d;
}

int EFX_obj::EFX_MAJOR_VERSION;

int EFX_obj::EFX_MINOR_VERSION;

int EFX_obj::MAX_AUXILIARY_SENDS;

int EFX_obj::METERS_PER_UNIT;

int EFX_obj::DIRECT_FILTER;

int EFX_obj::FILTER_NULL;


EFX_obj::EFX_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EFX_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo EFX_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &EFX_obj::EFX_MAJOR_VERSION,HX_("EFX_MAJOR_VERSION",ea,fd,4b,43)},
	{::hx::fsInt,(void *) &EFX_obj::EFX_MINOR_VERSION,HX_("EFX_MINOR_VERSION",e6,17,c1,54)},
	{::hx::fsInt,(void *) &EFX_obj::MAX_AUXILIARY_SENDS,HX_("MAX_AUXILIARY_SENDS",b7,ed,de,b1)},
	{::hx::fsInt,(void *) &EFX_obj::METERS_PER_UNIT,HX_("METERS_PER_UNIT",db,5f,ed,94)},
	{::hx::fsInt,(void *) &EFX_obj::DIRECT_FILTER,HX_("DIRECT_FILTER",4e,0d,f3,01)},
	{::hx::fsInt,(void *) &EFX_obj::FILTER_NULL,HX_("FILTER_NULL",ae,3b,b3,5b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void EFX_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EFX_obj::EFX_MAJOR_VERSION,"EFX_MAJOR_VERSION");
	HX_MARK_MEMBER_NAME(EFX_obj::EFX_MINOR_VERSION,"EFX_MINOR_VERSION");
	HX_MARK_MEMBER_NAME(EFX_obj::MAX_AUXILIARY_SENDS,"MAX_AUXILIARY_SENDS");
	HX_MARK_MEMBER_NAME(EFX_obj::METERS_PER_UNIT,"METERS_PER_UNIT");
	HX_MARK_MEMBER_NAME(EFX_obj::DIRECT_FILTER,"DIRECT_FILTER");
	HX_MARK_MEMBER_NAME(EFX_obj::FILTER_NULL,"FILTER_NULL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EFX_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EFX_obj::EFX_MAJOR_VERSION,"EFX_MAJOR_VERSION");
	HX_VISIT_MEMBER_NAME(EFX_obj::EFX_MINOR_VERSION,"EFX_MINOR_VERSION");
	HX_VISIT_MEMBER_NAME(EFX_obj::MAX_AUXILIARY_SENDS,"MAX_AUXILIARY_SENDS");
	HX_VISIT_MEMBER_NAME(EFX_obj::METERS_PER_UNIT,"METERS_PER_UNIT");
	HX_VISIT_MEMBER_NAME(EFX_obj::DIRECT_FILTER,"DIRECT_FILTER");
	HX_VISIT_MEMBER_NAME(EFX_obj::FILTER_NULL,"FILTER_NULL");
};

#endif

::hx::Class EFX_obj::__mClass;

static ::String EFX_obj_sStaticFields[] = {
	HX_("EFX_MAJOR_VERSION",ea,fd,4b,43),
	HX_("EFX_MINOR_VERSION",e6,17,c1,54),
	HX_("MAX_AUXILIARY_SENDS",b7,ed,de,b1),
	HX_("METERS_PER_UNIT",db,5f,ed,94),
	HX_("DIRECT_FILTER",4e,0d,f3,01),
	HX_("FILTER_NULL",ae,3b,b3,5b),
	::String(null())
};

void EFX_obj::__register()
{
	EFX_obj _hx_dummy;
	EFX_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.EFX",dd,bf,c3,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EFX_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EFX_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EFX_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EFX_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EFX_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EFX_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EFX_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1c9bfa0a1c96fc55_860_boot)
HXDLIN( 860)		EFX_MAJOR_VERSION = 131073;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1c9bfa0a1c96fc55_861_boot)
HXDLIN( 861)		EFX_MINOR_VERSION = 131074;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1c9bfa0a1c96fc55_862_boot)
HXDLIN( 862)		MAX_AUXILIARY_SENDS = 131075;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1c9bfa0a1c96fc55_865_boot)
HXDLIN( 865)		METERS_PER_UNIT = 131076;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1c9bfa0a1c96fc55_868_boot)
HXDLIN( 868)		DIRECT_FILTER = 131077;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1c9bfa0a1c96fc55_869_boot)
HXDLIN( 869)		FILTER_NULL = 0;
            	}
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
