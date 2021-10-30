#include <hxcpp.h>

#ifndef INCLUDED_hxd_res_Embed
#include <hxd/res/Embed.h>
#endif

namespace hxd{
namespace res{

void Embed_obj::__construct() { }

Dynamic Embed_obj::__CreateEmpty() { return new Embed_obj; }

void *Embed_obj::_hx_vtable = 0;

Dynamic Embed_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Embed_obj > _hx_result = new Embed_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Embed_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1630eeed;
}


Embed_obj::Embed_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Embed_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Embed_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Embed_obj::__mClass;

void Embed_obj::__register()
{
	Embed_obj _hx_dummy;
	Embed_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.Embed",91,86,25,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Embed_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Embed_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Embed_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace res
