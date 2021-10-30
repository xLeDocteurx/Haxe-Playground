#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_SpecularTexture
#include <h3d/shader/SpecularTexture.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f9eb922783fbcc6e_15_new,"h3d.shader.SpecularTexture","new",0xcf3e4276,"h3d.shader.SpecularTexture.new","h3d/shader/SpecularTexture.hx",15,0xdfd5b7da)
HX_LOCAL_STACK_FRAME(_hx_pos_580f2b0b4e592994_174_get_texture,"h3d.shader.SpecularTexture","get_texture",0x8f46a108,"h3d.shader.SpecularTexture.get_texture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_580f2b0b4e592994_191_set_texture,"h3d.shader.SpecularTexture","set_texture",0x99b3a814,"h3d.shader.SpecularTexture.set_texture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_580f2b0b4e592994_270_updateConstants,"h3d.shader.SpecularTexture","updateConstants",0xd04e825c,"h3d.shader.SpecularTexture.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_f9eb922783fbcc6e_5_getParamValue,"h3d.shader.SpecularTexture","getParamValue",0x74aed570,"h3d.shader.SpecularTexture.getParamValue","h3d/shader/SpecularTexture.hx",5,0xdfd5b7da)
HX_LOCAL_STACK_FRAME(_hx_pos_580f2b0b4e592994_304_getParamFloatValue,"h3d.shader.SpecularTexture","getParamFloatValue",0xdc47e1d6,"h3d.shader.SpecularTexture.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_f9eb922783fbcc6e_5_clone,"h3d.shader.SpecularTexture","clone",0x7c5eb6f3,"h3d.shader.SpecularTexture.clone","h3d/shader/SpecularTexture.hx",5,0xdfd5b7da)
HX_LOCAL_STACK_FRAME(_hx_pos_f9eb922783fbcc6e_5_boot,"h3d.shader.SpecularTexture","boot",0x7f54e55c,"h3d.shader.SpecularTexture.boot","h3d/shader/SpecularTexture.hx",5,0xdfd5b7da)
namespace h3d{
namespace shader{

void SpecularTexture_obj::__construct( ::h3d::mat::Texture tex){
            	HX_STACKFRAME(&_hx_pos_f9eb922783fbcc6e_15_new)
HXLINE(  16)		super::__construct();
HXLINE(  17)		this->texture__ = tex;
            	}

Dynamic SpecularTexture_obj::__CreateEmpty() { return new SpecularTexture_obj; }

void *SpecularTexture_obj::_hx_vtable = 0;

Dynamic SpecularTexture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SpecularTexture_obj > _hx_result = new SpecularTexture_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SpecularTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x22beab22;
	}
}

 ::h3d::mat::Texture SpecularTexture_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_580f2b0b4e592994_174_get_texture)
HXDLIN( 174)		return this->texture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpecularTexture_obj,get_texture,return )

 ::h3d::mat::Texture SpecularTexture_obj::set_texture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_580f2b0b4e592994_191_set_texture)
HXDLIN( 191)		return (this->texture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpecularTexture_obj,set_texture,return )

void SpecularTexture_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_580f2b0b4e592994_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic SpecularTexture_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_f9eb922783fbcc6e_5_getParamValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 287)			return this->texture__;
            		}
HXLINE( 288)		return null();
            	}


Float SpecularTexture_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_580f2b0b4e592994_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader SpecularTexture_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_f9eb922783fbcc6e_5_clone)
HXLINE( 315)		 ::h3d::shader::SpecularTexture s = ( ( ::h3d::shader::SpecularTexture)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::SpecularTexture >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->texture__ = this->texture__;
HXLINE( 322)		return s;
            	}


::String SpecularTexture_obj::SRC;

 ::hxsl::SharedShader SpecularTexture_obj::_SHADER;


::hx::ObjectPtr< SpecularTexture_obj > SpecularTexture_obj::__new( ::h3d::mat::Texture tex) {
	::hx::ObjectPtr< SpecularTexture_obj > __this = new SpecularTexture_obj();
	__this->__construct(tex);
	return __this;
}

::hx::ObjectPtr< SpecularTexture_obj > SpecularTexture_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture tex) {
	SpecularTexture_obj *__this = (SpecularTexture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SpecularTexture_obj), true, "h3d.shader.SpecularTexture"));
	*(void **)__this = SpecularTexture_obj::_hx_vtable;
	__this->__construct(tex);
	return __this;
}

SpecularTexture_obj::SpecularTexture_obj()
{
}

void SpecularTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpecularTexture);
	HX_MARK_MEMBER_NAME(texture__,"texture__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpecularTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture__,"texture__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SpecularTexture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { return ::hx::Val( texture__ ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
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

bool SpecularTexture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val SpecularTexture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { texture__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpecularTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void SpecularTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("texture__",bb,48,49,af));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SpecularTexture_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(SpecularTexture_obj,texture__),HX_("texture__",bb,48,49,af)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SpecularTexture_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SpecularTexture_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &SpecularTexture_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SpecularTexture_obj_sMemberFields[] = {
	HX_("texture__",bb,48,49,af),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void SpecularTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpecularTexture_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(SpecularTexture_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SpecularTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpecularTexture_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(SpecularTexture_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class SpecularTexture_obj::__mClass;

static ::String SpecularTexture_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void SpecularTexture_obj::__register()
{
	SpecularTexture_obj _hx_dummy;
	SpecularTexture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.SpecularTexture",84,8f,aa,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SpecularTexture_obj::__GetStatic;
	__mClass->mSetStaticField = &SpecularTexture_obj::__SetStatic;
	__mClass->mMarkFunc = SpecularTexture_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SpecularTexture_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SpecularTexture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SpecularTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SpecularTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpecularTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpecularTexture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SpecularTexture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f9eb922783fbcc6e_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLGmgzZC5zaGFkZXIuU3BlY3VsYXJUZXh0dXJlBAEHdGV4dHVyZQoCAAACDGNhbGN1bGF0ZWRVVgUKBAAAAwlzcGVjQ29sb3IFCwQAAAQIZnJhZ21lbnQOBgAAAQEEAAAFAQaBAgMFCwoJAyEOAgIBCgICBQoFDJIABQsFCwA",23,52,94,bc);
            	}
}

} // end namespace h3d
} // end namespace shader
