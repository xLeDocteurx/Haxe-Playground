#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hxsl_TGlobal
#include <hxsl/TGlobal.h>
#endif
#ifndef INCLUDED_hxsl_Tools2
#include <hxsl/Tools2.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7f8a1f42e8d5f58e_573_toString,"hxsl.Tools2","toString",0x1ca22b5e,"hxsl.Tools2.toString","hxsl/Ast.hx",573,0x84860dc2)
namespace hxsl{

void Tools2_obj::__construct() { }

Dynamic Tools2_obj::__CreateEmpty() { return new Tools2_obj; }

void *Tools2_obj::_hx_vtable = 0;

Dynamic Tools2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools2_obj > _hx_result = new Tools2_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools2_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2783fa2c;
}

::String Tools2_obj::toString( ::hxsl::TGlobal g){
            	HX_STACKFRAME(&_hx_pos_7f8a1f42e8d5f58e_573_toString)
HXLINE( 574)		::String n = ::Type_obj::enumConstructor(g);
HXLINE( 575)		::String _hx_tmp = n.charAt(0).toLowerCase();
HXDLIN( 575)		return (_hx_tmp + n.substr(1,null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools2_obj,toString,return )


Tools2_obj::Tools2_obj()
{
}

bool Tools2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools2_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools2_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools2_obj::__mClass;

static ::String Tools2_obj_sStaticFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Tools2_obj::__register()
{
	Tools2_obj _hx_dummy;
	Tools2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Tools2",fc,23,ff,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools2_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools2_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
