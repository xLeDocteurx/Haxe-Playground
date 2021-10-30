#include <hxcpp.h>

#ifndef INCLUDED_hxsl_ShaderInstanceDesc
#include <hxsl/ShaderInstanceDesc.h>
#endif
#ifndef INCLUDED_hxsl_SharedShader
#include <hxsl/SharedShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_20111e945dbb68e7_67_new,"hxsl.ShaderInstanceDesc","new",0xdb326202,"hxsl.ShaderInstanceDesc.new","hxsl/RuntimeShader.hx",67,0xe95fb147)
namespace hxsl{

void ShaderInstanceDesc_obj::__construct( ::hxsl::SharedShader shader,int bits){
            	HX_STACKFRAME(&_hx_pos_20111e945dbb68e7_67_new)
HXLINE(  68)		this->shader = shader;
HXLINE(  69)		this->bits = bits;
            	}

Dynamic ShaderInstanceDesc_obj::__CreateEmpty() { return new ShaderInstanceDesc_obj; }

void *ShaderInstanceDesc_obj::_hx_vtable = 0;

Dynamic ShaderInstanceDesc_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderInstanceDesc_obj > _hx_result = new ShaderInstanceDesc_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ShaderInstanceDesc_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78348f14;
}


::hx::ObjectPtr< ShaderInstanceDesc_obj > ShaderInstanceDesc_obj::__new( ::hxsl::SharedShader shader,int bits) {
	::hx::ObjectPtr< ShaderInstanceDesc_obj > __this = new ShaderInstanceDesc_obj();
	__this->__construct(shader,bits);
	return __this;
}

::hx::ObjectPtr< ShaderInstanceDesc_obj > ShaderInstanceDesc_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxsl::SharedShader shader,int bits) {
	ShaderInstanceDesc_obj *__this = (ShaderInstanceDesc_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderInstanceDesc_obj), true, "hxsl.ShaderInstanceDesc"));
	*(void **)__this = ShaderInstanceDesc_obj::_hx_vtable;
	__this->__construct(shader,bits);
	return __this;
}

ShaderInstanceDesc_obj::ShaderInstanceDesc_obj()
{
}

void ShaderInstanceDesc_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderInstanceDesc);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void ShaderInstanceDesc_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(bits,"bits");
	HX_VISIT_MEMBER_NAME(index,"index");
}

::hx::Val ShaderInstanceDesc_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return ::hx::Val( bits ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderInstanceDesc_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::hxsl::SharedShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderInstanceDesc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("bits",06,fb,16,41));
	outFields->push(HX_("index",12,9b,14,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderInstanceDesc_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(int)offsetof(ShaderInstanceDesc_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsInt,(int)offsetof(ShaderInstanceDesc_obj,bits),HX_("bits",06,fb,16,41)},
	{::hx::fsInt,(int)offsetof(ShaderInstanceDesc_obj,index),HX_("index",12,9b,14,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderInstanceDesc_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderInstanceDesc_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("bits",06,fb,16,41),
	HX_("index",12,9b,14,be),
	::String(null()) };

::hx::Class ShaderInstanceDesc_obj::__mClass;

void ShaderInstanceDesc_obj::__register()
{
	ShaderInstanceDesc_obj _hx_dummy;
	ShaderInstanceDesc_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.ShaderInstanceDesc",10,f9,9c,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderInstanceDesc_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderInstanceDesc_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderInstanceDesc_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderInstanceDesc_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
