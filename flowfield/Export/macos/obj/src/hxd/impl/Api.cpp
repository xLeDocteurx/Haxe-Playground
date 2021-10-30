#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxd_impl_Api
#include <hxd/impl/Api.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_72acdb750e85ca96_7_downcast,"hxd.impl.Api","downcast",0x35cca149,"hxd.impl.Api.downcast","hxd/impl/Api.hx",7,0xa0b22298)
HX_LOCAL_STACK_FRAME(_hx_pos_72acdb750e85ca96_15_isOfType,"hxd.impl.Api","isOfType",0x56cba423,"hxd.impl.Api.isOfType","hxd/impl/Api.hx",15,0xa0b22298)
namespace hxd{
namespace impl{

void Api_obj::__construct() { }

Dynamic Api_obj::__CreateEmpty() { return new Api_obj; }

void *Api_obj::_hx_vtable = 0;

Dynamic Api_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Api_obj > _hx_result = new Api_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Api_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f0bd46a;
}

 ::Dynamic Api_obj::downcast( ::Dynamic value,::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_72acdb750e85ca96_7_downcast)
HXDLIN(   7)		return ::Std_obj::downcast(value,c);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Api_obj,downcast,return )

bool Api_obj::isOfType( ::Dynamic v, ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_72acdb750e85ca96_15_isOfType)
HXDLIN(  15)		return ::Std_obj::isOfType(v,t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Api_obj,isOfType,return )


Api_obj::Api_obj()
{
}

bool Api_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"downcast") ) { outValue = downcast_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isOfType") ) { outValue = isOfType_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Api_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Api_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Api_obj::__mClass;

static ::String Api_obj_sStaticFields[] = {
	HX_("downcast",21,f0,c8,8b),
	HX_("isOfType",fb,f2,c7,ac),
	::String(null())
};

void Api_obj::__register()
{
	Api_obj _hx_dummy;
	Api_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.impl.Api",46,74,ab,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Api_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Api_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Api_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Api_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Api_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace impl
