#include <hxcpp.h>

#ifndef INCLUDED_h3d_shader_Shadow
#include <h3d/shader/Shadow.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
#ifndef INCLUDED_hxsl_SharedShader
#include <hxsl/SharedShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f7b89f6d5c4205b4_29_new,"h3d.shader.Shadow","new",0x06c9e126,"h3d.shader.Shadow.new","h3d/shader/Shadow.hx",29,0x0f9d4eea)
HX_LOCAL_STACK_FRAME(_hx_pos_7e05debb0005d94b_270_updateConstants,"h3d.shader.Shadow","updateConstants",0x6e25690c,"h3d.shader.Shadow.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_7e05debb0005d94b_288_getParamValue,"h3d.shader.Shadow","getParamValue",0x8715b020,"h3d.shader.Shadow.getParamValue","hxsl/Macros.hx",288,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_7e05debb0005d94b_304_getParamFloatValue,"h3d.shader.Shadow","getParamFloatValue",0x839a4926,"h3d.shader.Shadow.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_f7b89f6d5c4205b4_5_boot,"h3d.shader.Shadow","boot",0xe1f420ac,"h3d.shader.Shadow.boot","h3d/shader/Shadow.hx",5,0x0f9d4eea)
namespace h3d{
namespace shader{

void Shadow_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f7b89f6d5c4205b4_29_new)
HXDLIN(  29)		super::__construct();
            	}

Dynamic Shadow_obj::__CreateEmpty() { return new Shadow_obj; }

void *Shadow_obj::_hx_vtable = 0;

Dynamic Shadow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Shadow_obj > _hx_result = new Shadow_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Shadow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x6cf5d93a;
	}
}

void Shadow_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_7e05debb0005d94b_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic Shadow_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_7e05debb0005d94b_288_getParamValue)
HXDLIN( 288)		return null();
            	}


Float Shadow_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_7e05debb0005d94b_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


::String Shadow_obj::SRC;

 ::hxsl::SharedShader Shadow_obj::_SHADER;


::hx::ObjectPtr< Shadow_obj > Shadow_obj::__new() {
	::hx::ObjectPtr< Shadow_obj > __this = new Shadow_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Shadow_obj > Shadow_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Shadow_obj *__this = (Shadow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Shadow_obj), true, "h3d.shader.Shadow"));
	*(void **)__this = Shadow_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Shadow_obj::Shadow_obj()
{
}

::hx::Val Shadow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Shadow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"SRC") ) { outValue = ( SRC ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_SHADER") ) { outValue = ( _SHADER ); return true; }
	}
	return false;
}

bool Shadow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"SRC") ) { SRC=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_SHADER") ) { _SHADER=ioValue.Cast<  ::hxsl::SharedShader >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Shadow_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Shadow_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Shadow_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &Shadow_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Shadow_obj_sMemberFields[] = {
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	::String(null()) };

static void Shadow_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shadow_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(Shadow_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Shadow_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shadow_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(Shadow_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class Shadow_obj::__mClass;

static ::String Shadow_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void Shadow_obj::__register()
{
	Shadow_obj _hx_dummy;
	Shadow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.Shadow",34,16,f5,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Shadow_obj::__GetStatic;
	__mClass->mSetStaticField = &Shadow_obj::__SetStatic;
	__mClass->mMarkFunc = Shadow_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Shadow_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Shadow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Shadow_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Shadow_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shadow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shadow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Shadow_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f7b89f6d5c4205b4_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLEWgzZC5zaGFkZXIuU2hhZG93BgEGc2hhZG93DQEFAgNtYXARAQABAAMEcHJvaggAAQAEBWNvbG9yBQsAAQAFBXBvd2VyAwABAAYEYmlhcwMAAQAAAAAHCnBpeGVsQ29sb3IFDAQAAAgTdHJhbnNmb3JtZWRQb3NpdGlvbgULBAAACRhwaXhlbFRyYW5zZm9ybWVkUG9zaXRpb24FCwQAAAoJc2hhZG93UG9zBQsEAAEBCwhmcmFnbWVudA4GAAABAQsAAAUGCAwJc2hhZG93UG9zBQsEAAAGAQIJBQsCAwgFCwAIDQVkZXB0aAMEAAAJAz8OAgICEQEJAzoOAQoCDAULEQAFCgUKAwAIDgR6TWF4AwQAAAkDNQ4BCgIMBQsIAAMDAAgPBWRlbHRhAwQAAAYDCQMVDgIEBgACDQMCBgMDAwIOAwMCDgMDAAgQBXNoYWRlAwQAAAkDNQ4BCQMJDgEGAQIFAwIPAwMDAwAGgQoCBwUMkgAFCwYABgEEBgMBAwAAAAAAAPA/AwIQAwMDCgIEBQuSAAULBQsCEAMFCwULAA",c8,fe,32,a1);
            	}
}

} // end namespace h3d
} // end namespace shader
