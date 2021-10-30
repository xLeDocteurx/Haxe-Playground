#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Printer
#include <hxsl/Printer.h>
#endif
#ifndef INCLUDED_hxsl_Tools4
#include <hxsl/Tools4.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f982a7ec1bb07f95_591_toString,"hxsl.Tools4","toString",0x9d371b1c,"hxsl.Tools4.toString","hxsl/Ast.hx",591,0x84860dc2)
namespace hxsl{

void Tools4_obj::__construct() { }

Dynamic Tools4_obj::__CreateEmpty() { return new Tools4_obj; }

void *Tools4_obj::_hx_vtable = 0;

Dynamic Tools4_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools4_obj > _hx_result = new Tools4_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools4_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2783fa2e;
}

::String Tools4_obj::toString( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_f982a7ec1bb07f95_591_toString)
HXDLIN( 591)		return ::hxsl::Printer_obj::toString(e,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools4_obj,toString,return )


Tools4_obj::Tools4_obj()
{
}

bool Tools4_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools4_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools4_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools4_obj::__mClass;

static ::String Tools4_obj_sStaticFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Tools4_obj::__register()
{
	Tools4_obj _hx_dummy;
	Tools4_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Tools4",fe,23,ff,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools4_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools4_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools4_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools4_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools4_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
