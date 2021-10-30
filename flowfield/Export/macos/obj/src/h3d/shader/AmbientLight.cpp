#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_shader_AmbientLight
#include <h3d/shader/AmbientLight.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f60706a78429bbe3_3_new,"h3d.shader.AmbientLight","new",0x94d6d8e4,"h3d.shader.AmbientLight.new","h3d/shader/AmbientLight.hx",3,0x2105c0ec)
HX_LOCAL_STACK_FRAME(_hx_pos_4098c9d5eab25fd6_174_get_additive,"h3d.shader.AmbientLight","get_additive",0x1a9aee11,"h3d.shader.AmbientLight.get_additive","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_4098c9d5eab25fd6_193_set_additive,"h3d.shader.AmbientLight","set_additive",0x2f941185,"h3d.shader.AmbientLight.set_additive","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_4098c9d5eab25fd6_270_updateConstants,"h3d.shader.AmbientLight","updateConstants",0x5c2605ca,"h3d.shader.AmbientLight.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_f60706a78429bbe3_5_getParamValue,"h3d.shader.AmbientLight","getParamValue",0xdab1015e,"h3d.shader.AmbientLight.getParamValue","h3d/shader/AmbientLight.hx",5,0x2105c0ec)
HX_LOCAL_STACK_FRAME(_hx_pos_4098c9d5eab25fd6_304_getParamFloatValue,"h3d.shader.AmbientLight","getParamFloatValue",0xf079b728,"h3d.shader.AmbientLight.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_f60706a78429bbe3_5_clone,"h3d.shader.AmbientLight","clone",0x4a1c44e1,"h3d.shader.AmbientLight.clone","h3d/shader/AmbientLight.hx",5,0x2105c0ec)
HX_LOCAL_STACK_FRAME(_hx_pos_f60706a78429bbe3_5_boot,"h3d.shader.AmbientLight","boot",0x9f3fef2e,"h3d.shader.AmbientLight.boot","h3d/shader/AmbientLight.hx",5,0x2105c0ec)
namespace h3d{
namespace shader{

void AmbientLight_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f60706a78429bbe3_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic AmbientLight_obj::__CreateEmpty() { return new AmbientLight_obj; }

void *AmbientLight_obj::_hx_vtable = 0;

Dynamic AmbientLight_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AmbientLight_obj > _hx_result = new AmbientLight_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AmbientLight_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x3bbfd85c;
	}
}

bool AmbientLight_obj::get_additive(){
            	HX_STACKFRAME(&_hx_pos_4098c9d5eab25fd6_174_get_additive)
HXDLIN( 174)		return this->additive__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AmbientLight_obj,get_additive,return )

bool AmbientLight_obj::set_additive(bool _v){
            	HX_STACKFRAME(&_hx_pos_4098c9d5eab25fd6_193_set_additive)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->additive__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AmbientLight_obj,set_additive,return )

void AmbientLight_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_4098c9d5eab25fd6_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 247)		if (this->additive__) {
HXLINE( 247)			 ::h3d::shader::AmbientLight _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)			_hx_tmp->constBits = (_hx_tmp->constBits | 2);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic AmbientLight_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_f60706a78429bbe3_5_getParamValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 287)			return this->additive__;
            		}
HXLINE( 288)		return null();
            	}


Float AmbientLight_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_4098c9d5eab25fd6_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader AmbientLight_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_f60706a78429bbe3_5_clone)
HXLINE( 315)		 ::h3d::shader::AmbientLight s = ( ( ::h3d::shader::AmbientLight)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::AmbientLight >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->additive__ = this->additive__;
HXLINE( 322)		return s;
            	}


::String AmbientLight_obj::SRC;

 ::hxsl::SharedShader AmbientLight_obj::_SHADER;


::hx::ObjectPtr< AmbientLight_obj > AmbientLight_obj::__new() {
	::hx::ObjectPtr< AmbientLight_obj > __this = new AmbientLight_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AmbientLight_obj > AmbientLight_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AmbientLight_obj *__this = (AmbientLight_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AmbientLight_obj), true, "h3d.shader.AmbientLight"));
	*(void **)__this = AmbientLight_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AmbientLight_obj::AmbientLight_obj()
{
}

::hx::Val AmbientLight_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"additive") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_additive() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"additive__") ) { return ::hx::Val( additive__ ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_additive") ) { return ::hx::Val( get_additive_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_additive") ) { return ::hx::Val( set_additive_dyn() ); }
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

bool AmbientLight_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val AmbientLight_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"additive") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_additive(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"additive__") ) { additive__=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AmbientLight_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void AmbientLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("additive",0c,73,3f,a8));
	outFields->push(HX_("additive__",2c,a1,4b,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AmbientLight_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(AmbientLight_obj,additive__),HX_("additive__",2c,a1,4b,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AmbientLight_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AmbientLight_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &AmbientLight_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AmbientLight_obj_sMemberFields[] = {
	HX_("additive__",2c,a1,4b,cd),
	HX_("get_additive",15,27,59,5d),
	HX_("set_additive",89,4a,52,72),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void AmbientLight_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AmbientLight_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(AmbientLight_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AmbientLight_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AmbientLight_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(AmbientLight_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class AmbientLight_obj::__mClass;

static ::String AmbientLight_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void AmbientLight_obj::__register()
{
	AmbientLight_obj _hx_dummy;
	AmbientLight_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.AmbientLight",f2,d6,7f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AmbientLight_obj::__GetStatic;
	__mClass->mSetStaticField = &AmbientLight_obj::__SetStatic;
	__mClass->mMarkFunc = AmbientLight_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AmbientLight_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AmbientLight_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AmbientLight_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AmbientLight_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AmbientLight_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AmbientLight_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AmbientLight_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f60706a78429bbe3_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLF2gzZC5zaGFkZXIuQW1iaWVudExpZ2h0CgEGZ2xvYmFsDQECAgxhbWJpZW50TGlnaHQFCwABAAMQcGVyUGl4ZWxMaWdodGluZwIAAQEAAAAAAAAAAAQKcGl4ZWxDb2xvcgUMBAAABQ9saWdodFBpeGVsQ29sb3IFCwQAAAYKbGlnaHRDb2xvcgULBAAABwhhZGRpdGl2ZQICAAEAAAAAAAgIX19pbml0X18OBgAACRBfX2luaXRfX2ZyYWdtZW50DgYAAAoJY2FsY0xpZ2h0DgYAAAsGdmVydGV4DgYAAAwIZnJhZ21lbnQOBgAABQIIAAAFAQYEAgYFCwsCBwICAgULCQMpDgEBAwAAAAAAAAAAAwULBQsFCwACCQAABQEGBAIFBQsLAgcCAgIFCwkDKQ4BAQMAAAAAAAAAAAMFCwULBQsAAwoBDQpsaWdodENvbG9yBQsEAAAFCwUBDQsCBwICDQULBAYAAgIFCwYBCQMWDgIEBgMBAwAAAAAAAPA/AwICBQsFCwULAQMAAAAAAAAAAAMFCwINBQsFCwULBQsFCwAAAAsAAAUBCwcCAgMCAgaBCgIEBQySAAULCQIKDgECBgULBQsFCwAAAAEMAAAFAQsCAwIGgQoCBAUMkgAFCwkCCg4BAgUFCwULBQsAAAA",b8,a0,7d,83);
            	}
}

} // end namespace h3d
} // end namespace shader
