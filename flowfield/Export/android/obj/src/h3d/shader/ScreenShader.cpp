#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_42c65d2cd22b814b_3_new,"h3d.shader.ScreenShader","new",0x80d39477,"h3d.shader.ScreenShader.new","h3d/shader/ScreenShader.hx",3,0x2a1dd8b9)
HX_LOCAL_STACK_FRAME(_hx_pos_f74be332704e4c85_174_get_flipY,"h3d.shader.ScreenShader","get_flipY",0xdb5410ba,"h3d.shader.ScreenShader.get_flipY","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_f74be332704e4c85_191_set_flipY,"h3d.shader.ScreenShader","set_flipY",0xbea4fcc6,"h3d.shader.ScreenShader.set_flipY","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_f74be332704e4c85_270_updateConstants,"h3d.shader.ScreenShader","updateConstants",0xfb5751dd,"h3d.shader.ScreenShader.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_42c65d2cd22b814b_5_getParamValue,"h3d.shader.ScreenShader","getParamValue",0x91bd12b1,"h3d.shader.ScreenShader.getParamValue","h3d/shader/ScreenShader.hx",5,0x2a1dd8b9)
HX_LOCAL_STACK_FRAME(_hx_pos_42c65d2cd22b814b_5_getParamFloatValue,"h3d.shader.ScreenShader","getParamFloatValue",0x6eaef8f5,"h3d.shader.ScreenShader.getParamFloatValue","h3d/shader/ScreenShader.hx",5,0x2a1dd8b9)
HX_LOCAL_STACK_FRAME(_hx_pos_42c65d2cd22b814b_5_clone,"h3d.shader.ScreenShader","clone",0xbb6d4b34,"h3d.shader.ScreenShader.clone","h3d/shader/ScreenShader.hx",5,0x2a1dd8b9)
HX_LOCAL_STACK_FRAME(_hx_pos_42c65d2cd22b814b_5_boot,"h3d.shader.ScreenShader","boot",0x3067543b,"h3d.shader.ScreenShader.boot","h3d/shader/ScreenShader.hx",5,0x2a1dd8b9)
namespace h3d{
namespace shader{

void ScreenShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_42c65d2cd22b814b_3_new)
HXLINE(  59)		this->flipY__ = ((Float)0);
HXLINE(   3)		super::__construct();
            	}

Dynamic ScreenShader_obj::__CreateEmpty() { return new ScreenShader_obj; }

void *ScreenShader_obj::_hx_vtable = 0;

Dynamic ScreenShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenShader_obj > _hx_result = new ScreenShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScreenShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x738c8e6f;
	}
}

Float ScreenShader_obj::get_flipY(){
            	HX_STACKFRAME(&_hx_pos_f74be332704e4c85_174_get_flipY)
HXDLIN( 174)		return this->flipY__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenShader_obj,get_flipY,return )

Float ScreenShader_obj::set_flipY(Float _v){
            	HX_STACKFRAME(&_hx_pos_f74be332704e4c85_191_set_flipY)
HXDLIN( 191)		return (this->flipY__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenShader_obj,set_flipY,return )

void ScreenShader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_f74be332704e4c85_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic ScreenShader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_42c65d2cd22b814b_5_getParamValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 287)			return this->flipY__;
            		}
HXLINE( 288)		return null();
            	}


Float ScreenShader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_42c65d2cd22b814b_5_getParamFloatValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 303)			return this->flipY__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader ScreenShader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_42c65d2cd22b814b_5_clone)
HXLINE( 315)		 ::h3d::shader::ScreenShader s = ( ( ::h3d::shader::ScreenShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::ScreenShader >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->flipY__ = this->flipY__;
HXLINE( 322)		return s;
            	}


::String ScreenShader_obj::SRC;

 ::hxsl::SharedShader ScreenShader_obj::_SHADER;


::hx::ObjectPtr< ScreenShader_obj > ScreenShader_obj::__new() {
	::hx::ObjectPtr< ScreenShader_obj > __this = new ScreenShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScreenShader_obj > ScreenShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScreenShader_obj *__this = (ScreenShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenShader_obj), true, "h3d.shader.ScreenShader"));
	*(void **)__this = ScreenShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScreenShader_obj::ScreenShader_obj()
{
}

::hx::Val ScreenShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_flipY() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipY__") ) { return ::hx::Val( flipY__ ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_flipY") ) { return ::hx::Val( get_flipY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return ::hx::Val( set_flipY_dyn() ); }
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

bool ScreenShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val ScreenShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_flipY(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipY__") ) { flipY__=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ScreenShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void ScreenShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("flipY__",2c,f3,76,7f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenShader_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ScreenShader_obj,flipY__),HX_("flipY__",2c,f3,76,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ScreenShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ScreenShader_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &ScreenShader_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ScreenShader_obj_sMemberFields[] = {
	HX_("flipY__",2c,f3,76,7f),
	HX_("get_flipY",63,a1,3b,46),
	HX_("set_flipY",6f,8d,8c,29),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ScreenShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenShader_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(ScreenShader_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScreenShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenShader_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(ScreenShader_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class ScreenShader_obj::__mClass;

static ::String ScreenShader_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void ScreenShader_obj::__register()
{
	ScreenShader_obj _hx_dummy;
	ScreenShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.ScreenShader",05,8d,4c,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScreenShader_obj::__GetStatic;
	__mClass->mSetStaticField = &ScreenShader_obj::__SetStatic;
	__mClass->mMarkFunc = ScreenShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ScreenShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScreenShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScreenShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_42c65d2cd22b814b_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLF2gzZC5zaGFkZXIuU2NyZWVuU2hhZGVyBwEFaW5wdXQNAQICCHBvc2l0aW9uBQoBAQADAnV2BQoBAQABAAAEBWZsaXBZAwIAAAUGb3V0cHV0DQICBghwb3NpdGlvbgUMBAUABwVjb2xvcgUMBAUABAAACApwaXhlbENvbG9yBQwEAAAJDGNhbGN1bGF0ZWRVVgUKBAAACghfX2luaXRfXw4GAAALBnZlcnRleA4GAAACAgoAAAUCBgQCBwUMAggFDAUMBgQCCQUKAgMFCgUKAAALAAAFAQYEAgYFDAkDKg4ECgICBQoAAAMGAQoCAgUKBAADAgQDAwEDAAAAAAAAAAADAQMAAAAAAADwPwMFDAUMAA",23,23,a4,ef);
            	}
}

} // end namespace h3d
} // end namespace shader
