#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_shader_VertexColorAlpha
#include <h3d/shader/VertexColorAlpha.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1871de3e91414c5b_3_new,"h3d.shader.VertexColorAlpha","new",0xc66b4945,"h3d.shader.VertexColorAlpha.new","h3d/shader/VertexColorAlpha.hx",3,0xd907a7ab)
HX_LOCAL_STACK_FRAME(_hx_pos_c528994fd2227c77_174_get_additive,"h3d.shader.VertexColorAlpha","get_additive",0x872fe990,"h3d.shader.VertexColorAlpha.get_additive","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c528994fd2227c77_193_set_additive,"h3d.shader.VertexColorAlpha","set_additive",0x9c290d04,"h3d.shader.VertexColorAlpha.set_additive","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c528994fd2227c77_270_updateConstants,"h3d.shader.VertexColorAlpha","updateConstants",0x409203ab,"h3d.shader.VertexColorAlpha.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1871de3e91414c5b_5_getParamValue,"h3d.shader.VertexColorAlpha","getParamValue",0x707814ff,"h3d.shader.VertexColorAlpha.getParamValue","h3d/shader/VertexColorAlpha.hx",5,0xd907a7ab)
HX_LOCAL_STACK_FRAME(_hx_pos_c528994fd2227c77_304_getParamFloatValue,"h3d.shader.VertexColorAlpha","getParamFloatValue",0x30a2dbe7,"h3d.shader.VertexColorAlpha.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_1871de3e91414c5b_5_clone,"h3d.shader.VertexColorAlpha","clone",0x5df64f82,"h3d.shader.VertexColorAlpha.clone","h3d/shader/VertexColorAlpha.hx",5,0xd907a7ab)
HX_LOCAL_STACK_FRAME(_hx_pos_1871de3e91414c5b_5_boot,"h3d.shader.VertexColorAlpha","boot",0xcf8dd3ad,"h3d.shader.VertexColorAlpha.boot","h3d/shader/VertexColorAlpha.hx",5,0xd907a7ab)
namespace h3d{
namespace shader{

void VertexColorAlpha_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1871de3e91414c5b_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic VertexColorAlpha_obj::__CreateEmpty() { return new VertexColorAlpha_obj; }

void *VertexColorAlpha_obj::_hx_vtable = 0;

Dynamic VertexColorAlpha_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VertexColorAlpha_obj > _hx_result = new VertexColorAlpha_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VertexColorAlpha_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x7f855059;
	}
}

bool VertexColorAlpha_obj::get_additive(){
            	HX_STACKFRAME(&_hx_pos_c528994fd2227c77_174_get_additive)
HXDLIN( 174)		return this->additive__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexColorAlpha_obj,get_additive,return )

bool VertexColorAlpha_obj::set_additive(bool _v){
            	HX_STACKFRAME(&_hx_pos_c528994fd2227c77_193_set_additive)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->additive__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VertexColorAlpha_obj,set_additive,return )

void VertexColorAlpha_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_c528994fd2227c77_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 247)		if (this->additive__) {
HXLINE( 247)			 ::h3d::shader::VertexColorAlpha _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)			_hx_tmp->constBits = (_hx_tmp->constBits | 1);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic VertexColorAlpha_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_1871de3e91414c5b_5_getParamValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 287)			return this->additive__;
            		}
HXLINE( 288)		return null();
            	}


Float VertexColorAlpha_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_c528994fd2227c77_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader VertexColorAlpha_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_1871de3e91414c5b_5_clone)
HXLINE( 315)		 ::h3d::shader::VertexColorAlpha s = ( ( ::h3d::shader::VertexColorAlpha)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::VertexColorAlpha >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->additive__ = this->additive__;
HXLINE( 322)		return s;
            	}


::String VertexColorAlpha_obj::SRC;

 ::hxsl::SharedShader VertexColorAlpha_obj::_SHADER;


::hx::ObjectPtr< VertexColorAlpha_obj > VertexColorAlpha_obj::__new() {
	::hx::ObjectPtr< VertexColorAlpha_obj > __this = new VertexColorAlpha_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VertexColorAlpha_obj > VertexColorAlpha_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VertexColorAlpha_obj *__this = (VertexColorAlpha_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VertexColorAlpha_obj), true, "h3d.shader.VertexColorAlpha"));
	*(void **)__this = VertexColorAlpha_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VertexColorAlpha_obj::VertexColorAlpha_obj()
{
}

::hx::Val VertexColorAlpha_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

bool VertexColorAlpha_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val VertexColorAlpha_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

bool VertexColorAlpha_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void VertexColorAlpha_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("additive",0c,73,3f,a8));
	outFields->push(HX_("additive__",2c,a1,4b,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VertexColorAlpha_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(VertexColorAlpha_obj,additive__),HX_("additive__",2c,a1,4b,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo VertexColorAlpha_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &VertexColorAlpha_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &VertexColorAlpha_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String VertexColorAlpha_obj_sMemberFields[] = {
	HX_("additive__",2c,a1,4b,cd),
	HX_("get_additive",15,27,59,5d),
	HX_("set_additive",89,4a,52,72),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void VertexColorAlpha_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexColorAlpha_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(VertexColorAlpha_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VertexColorAlpha_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexColorAlpha_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(VertexColorAlpha_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class VertexColorAlpha_obj::__mClass;

static ::String VertexColorAlpha_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void VertexColorAlpha_obj::__register()
{
	VertexColorAlpha_obj _hx_dummy;
	VertexColorAlpha_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.VertexColorAlpha",d3,42,da,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VertexColorAlpha_obj::__GetStatic;
	__mClass->mSetStaticField = &VertexColorAlpha_obj::__SetStatic;
	__mClass->mMarkFunc = VertexColorAlpha_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VertexColorAlpha_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VertexColorAlpha_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VertexColorAlpha_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VertexColorAlpha_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexColorAlpha_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexColorAlpha_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void VertexColorAlpha_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1871de3e91414c5b_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLG2gzZC5zaGFkZXIuVmVydGV4Q29sb3JBbHBoYQQBBWlucHV0DQEBAgVjb2xvcgUMAQEAAQAAAwpwaXhlbENvbG9yBQwEAAAECGFkZGl0aXZlAgIAAQAAAAAABQhmcmFnbWVudA4GAAABAQUAAAUBCwIEAgaAAgMFDAICBQwFDAaBAgMFDAICBQwFDAAA",13,d8,72,63);
            	}
}

} // end namespace h3d
} // end namespace shader
