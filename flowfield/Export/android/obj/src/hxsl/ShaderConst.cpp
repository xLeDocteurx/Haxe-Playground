#include <hxcpp.h>

#ifndef INCLUDED_hxsl_ShaderConst
#include <hxsl/ShaderConst.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc704b2cfa990ef5_30_new,"hxsl.ShaderConst","new",0x0193cd0b,"hxsl.ShaderConst.new","hxsl/SharedShader.hx",30,0xe9aca78e)
namespace hxsl{

void ShaderConst_obj::__construct( ::Dynamic v,int pos,int bits){
            	HX_STACKFRAME(&_hx_pos_cc704b2cfa990ef5_30_new)
HXLINE(  31)		this->v = v;
HXLINE(  32)		this->pos = pos;
HXLINE(  33)		this->bits = bits;
            	}

Dynamic ShaderConst_obj::__CreateEmpty() { return new ShaderConst_obj; }

void *ShaderConst_obj::_hx_vtable = 0;

Dynamic ShaderConst_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderConst_obj > _hx_result = new ShaderConst_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ShaderConst_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f9dbd89;
}


ShaderConst_obj::ShaderConst_obj()
{
}

void ShaderConst_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderConst);
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_MEMBER_NAME(globalId,"globalId");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ShaderConst_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(bits,"bits");
	HX_VISIT_MEMBER_NAME(globalId,"globalId");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val ShaderConst_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return ::hx::Val( bits ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"globalId") ) { return ::hx::Val( globalId ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderConst_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxsl::ShaderConst >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"globalId") ) { globalId=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderConst_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("v",76,00,00,00));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("bits",06,fb,16,41));
	outFields->push(HX_("globalId",1e,d0,ab,9d));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderConst_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderConst_obj,v),HX_("v",76,00,00,00)},
	{::hx::fsInt,(int)offsetof(ShaderConst_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsInt,(int)offsetof(ShaderConst_obj,bits),HX_("bits",06,fb,16,41)},
	{::hx::fsInt,(int)offsetof(ShaderConst_obj,globalId),HX_("globalId",1e,d0,ab,9d)},
	{::hx::fsObject /*  ::hxsl::ShaderConst */ ,(int)offsetof(ShaderConst_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderConst_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderConst_obj_sMemberFields[] = {
	HX_("v",76,00,00,00),
	HX_("pos",94,5d,55,00),
	HX_("bits",06,fb,16,41),
	HX_("globalId",1e,d0,ab,9d),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ShaderConst_obj::__mClass;

void ShaderConst_obj::__register()
{
	ShaderConst_obj _hx_dummy;
	ShaderConst_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.ShaderConst",99,eb,b7,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderConst_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderConst_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderConst_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderConst_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
