#include <hxcpp.h>

#ifndef INCLUDED_hxsl_ShaderGlobal
#include <hxsl/ShaderGlobal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_124c6b4599e4c68a_18_new,"hxsl.ShaderGlobal","new",0x4e2409df,"hxsl.ShaderGlobal.new","hxsl/SharedShader.hx",18,0xe9aca78e)
namespace hxsl{

void ShaderGlobal_obj::__construct( ::Dynamic v,int gid){
            	HX_STACKFRAME(&_hx_pos_124c6b4599e4c68a_18_new)
HXLINE(  19)		this->v = v;
HXLINE(  20)		this->globalId = gid;
            	}

Dynamic ShaderGlobal_obj::__CreateEmpty() { return new ShaderGlobal_obj; }

void *ShaderGlobal_obj::_hx_vtable = 0;

Dynamic ShaderGlobal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderGlobal_obj > _hx_result = new ShaderGlobal_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShaderGlobal_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4fffa971;
}


ShaderGlobal_obj::ShaderGlobal_obj()
{
}

void ShaderGlobal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderGlobal);
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(globalId,"globalId");
	HX_MARK_END_CLASS();
}

void ShaderGlobal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(globalId,"globalId");
}

::hx::Val ShaderGlobal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"globalId") ) { return ::hx::Val( globalId ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderGlobal_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"globalId") ) { globalId=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderGlobal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("v",76,00,00,00));
	outFields->push(HX_("globalId",1e,d0,ab,9d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderGlobal_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderGlobal_obj,v),HX_("v",76,00,00,00)},
	{::hx::fsInt,(int)offsetof(ShaderGlobal_obj,globalId),HX_("globalId",1e,d0,ab,9d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderGlobal_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderGlobal_obj_sMemberFields[] = {
	HX_("v",76,00,00,00),
	HX_("globalId",1e,d0,ab,9d),
	::String(null()) };

::hx::Class ShaderGlobal_obj::__mClass;

void ShaderGlobal_obj::__register()
{
	ShaderGlobal_obj _hx_dummy;
	ShaderGlobal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.ShaderGlobal",6d,2e,0c,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderGlobal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderGlobal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderGlobal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderGlobal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
