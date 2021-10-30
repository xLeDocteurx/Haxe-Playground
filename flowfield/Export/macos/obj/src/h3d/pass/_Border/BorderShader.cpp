#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_pass__Border_BorderShader
#include <h3d/pass/_Border/BorderShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e9863dc9784222c8_3_new,"h3d.pass._Border.BorderShader","new",0xffede72e,"h3d.pass._Border.BorderShader.new","h3d/pass/Border.hx",3,0x2ed86c8a)
HX_LOCAL_STACK_FRAME(_hx_pos_c8795c38dd8dfcc2_174_get_color,"h3d.pass._Border.BorderShader","get_color",0x8b99f308,"h3d.pass._Border.BorderShader.get_color","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c8795c38dd8dfcc2_191_set_color,"h3d.pass._Border.BorderShader","set_color",0x6eeadf14,"h3d.pass._Border.BorderShader.set_color","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c8795c38dd8dfcc2_270_updateConstants,"h3d.pass._Border.BorderShader","updateConstants",0x3e3e5b14,"h3d.pass._Border.BorderShader.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_e9863dc9784222c8_4_getParamValue,"h3d.pass._Border.BorderShader","getParamValue",0x12b09028,"h3d.pass._Border.BorderShader.getParamValue","h3d/pass/Border.hx",4,0x2ed86c8a)
HX_LOCAL_STACK_FRAME(_hx_pos_e9863dc9784222c8_4_getParamFloatValue,"h3d.pass._Border.BorderShader","getParamFloatValue",0xcd6e4c1e,"h3d.pass._Border.BorderShader.getParamFloatValue","h3d/pass/Border.hx",4,0x2ed86c8a)
HX_LOCAL_STACK_FRAME(_hx_pos_e9863dc9784222c8_4_clone,"h3d.pass._Border.BorderShader","clone",0xf3caf9ab,"h3d.pass._Border.BorderShader.clone","h3d/pass/Border.hx",4,0x2ed86c8a)
HX_LOCAL_STACK_FRAME(_hx_pos_e9863dc9784222c8_4_boot,"h3d.pass._Border.BorderShader","boot",0xe85561a4,"h3d.pass._Border.BorderShader.boot","h3d/pass/Border.hx",4,0x2ed86c8a)
namespace h3d{
namespace pass{
namespace _Border{

void BorderShader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e9863dc9784222c8_3_new)
HXLINE(  63)		this->color__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(   3)		super::__construct();
            	}

Dynamic BorderShader_obj::__CreateEmpty() { return new BorderShader_obj; }

void *BorderShader_obj::_hx_vtable = 0;

Dynamic BorderShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BorderShader_obj > _hx_result = new BorderShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BorderShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x29848b16) {
		if (inClassId<=(int)0x19343d6e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
		} else {
			return inClassId==(int)0x29848b16;
		}
	} else {
		return inClassId==(int)0x738c8e6f;
	}
}

 ::h3d::Vector BorderShader_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_c8795c38dd8dfcc2_174_get_color)
HXDLIN( 174)		return this->color__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BorderShader_obj,get_color,return )

 ::h3d::Vector BorderShader_obj::set_color( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_c8795c38dd8dfcc2_191_set_color)
HXDLIN( 191)		return (this->color__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BorderShader_obj,set_color,return )

void BorderShader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_c8795c38dd8dfcc2_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic BorderShader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_e9863dc9784222c8_4_getParamValue)
HXDLIN(   4)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->flipY__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->color__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float BorderShader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_e9863dc9784222c8_4_getParamFloatValue)
HXDLIN(   4)		if ((index == 0)) {
HXLINE( 303)			return this->flipY__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader BorderShader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_e9863dc9784222c8_4_clone)
HXLINE( 315)		 ::h3d::pass::_Border::BorderShader s = ( ( ::h3d::pass::_Border::BorderShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::pass::_Border::BorderShader >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->flipY__ = this->flipY__;
HXDLIN( 320)		s->color__ = this->color__;
HXLINE( 322)		return s;
            	}


::String BorderShader_obj::SRC;

 ::hxsl::SharedShader BorderShader_obj::_SHADER;


::hx::ObjectPtr< BorderShader_obj > BorderShader_obj::__new() {
	::hx::ObjectPtr< BorderShader_obj > __this = new BorderShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BorderShader_obj > BorderShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BorderShader_obj *__this = (BorderShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BorderShader_obj), true, "h3d.pass._Border.BorderShader"));
	*(void **)__this = BorderShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BorderShader_obj::BorderShader_obj()
{
}

void BorderShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BorderShader);
	HX_MARK_MEMBER_NAME(color__,"color__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BorderShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color__,"color__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BorderShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"color__") ) { return ::hx::Val( color__ ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
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

bool BorderShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val BorderShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"color__") ) { color__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BorderShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void BorderShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("color__",43,23,66,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BorderShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(BorderShader_obj,color__),HX_("color__",43,23,66,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BorderShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &BorderShader_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &BorderShader_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BorderShader_obj_sMemberFields[] = {
	HX_("color__",43,23,66,ef),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void BorderShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BorderShader_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(BorderShader_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BorderShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BorderShader_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(BorderShader_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class BorderShader_obj::__mClass;

static ::String BorderShader_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void BorderShader_obj::__register()
{
	BorderShader_obj _hx_dummy;
	BorderShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass._Border.BorderShader",3c,78,0b,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BorderShader_obj::__GetStatic;
	__mClass->mSetStaticField = &BorderShader_obj::__SetStatic;
	__mClass->mMarkFunc = BorderShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BorderShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BorderShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BorderShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BorderShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BorderShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BorderShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BorderShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e9863dc9784222c8_4_boot)
HXDLIN(   4)		SRC = HX_("HXSLHWgzZC5wYXNzLl9Cb3JkZXIuQm9yZGVyU2hhZGVyCQEFaW5wdXQNAQICCHBvc2l0aW9uBQoBAQADAnV2BQoBAQABAAAEBWZsaXBZAwIAAAUGb3V0cHV0DQICBghwb3NpdGlvbgUMBAUABwVjb2xvcgUMBAUABAAACApwaXhlbENvbG9yBQwEAAAJDGNhbGN1bGF0ZWRVVgUKBAAACgVjb2xvcgUMAgAACwhfX2luaXRfXw4GAAAMBnZlcnRleA4GAAANCGZyYWdtZW50DgYAAAMCCwAABQIGBAIHBQwCCAUMBQwGBAIJBQoCAwUKBQoAAAwAAAUBBgQCBgUMCQMqDgQKAgIFCgAAAwYBCgICBQoEAAMCBAMDAQMAAAAAAAAAAAMBAwAAAAAAAPA/AwUMBQwAAQ0AAAUBBgQCCAUMAgoFDAUMAA",2a,56,d8,82);
            	}
}

} // end namespace h3d
} // end namespace pass
} // end namespace _Border
