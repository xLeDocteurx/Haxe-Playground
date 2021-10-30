#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Printer
#include <hxsl/Printer.h>
#endif
#ifndef INCLUDED_hxsl_Tools3
#include <hxsl/Tools3.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5ea86625d62eac67_583_toString,"hxsl.Tools3","toString",0xdceca33d,"hxsl.Tools3.toString","hxsl/Ast.hx",583,0x84860dc2)
namespace hxsl{

void Tools3_obj::__construct() { }

Dynamic Tools3_obj::__CreateEmpty() { return new Tools3_obj; }

void *Tools3_obj::_hx_vtable = 0;

Dynamic Tools3_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools3_obj > _hx_result = new Tools3_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2783fa2d;
}

::String Tools3_obj::toString( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_5ea86625d62eac67_583_toString)
HXDLIN( 583)		return ::hxsl::Printer_obj::shaderToString(s,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools3_obj,toString,return )


Tools3_obj::Tools3_obj()
{
}

bool Tools3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools3_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools3_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools3_obj::__mClass;

static ::String Tools3_obj_sStaticFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Tools3_obj::__register()
{
	Tools3_obj _hx_dummy;
	Tools3_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Tools3",fd,23,ff,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools3_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools3_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools3_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools3_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
