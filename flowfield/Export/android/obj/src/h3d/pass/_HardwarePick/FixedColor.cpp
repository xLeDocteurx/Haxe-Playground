#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_pass__HardwarePick_FixedColor
#include <h3d/pass/_HardwarePick/FixedColor.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6654f5518cceb707_3_new,"h3d.pass._HardwarePick.FixedColor","new",0x4e39e22f,"h3d.pass._HardwarePick.FixedColor.new","h3d/pass/HardwarePick.hx",3,0x9ccf9bed)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4fc002c3c1e1d3_174_get_colorID,"h3d.pass._HardwarePick.FixedColor","get_colorID",0xb27368e4,"h3d.pass._HardwarePick.FixedColor.get_colorID","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4fc002c3c1e1d3_191_set_colorID,"h3d.pass._HardwarePick.FixedColor","set_colorID",0xbce06ff0,"h3d.pass._HardwarePick.FixedColor.set_colorID","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4fc002c3c1e1d3_174_get_viewport,"h3d.pass._HardwarePick.FixedColor","get_viewport",0x8545bcc0,"h3d.pass._HardwarePick.FixedColor.get_viewport","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4fc002c3c1e1d3_191_set_viewport,"h3d.pass._HardwarePick.FixedColor","set_viewport",0x9a3ee034,"h3d.pass._HardwarePick.FixedColor.set_viewport","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4fc002c3c1e1d3_270_updateConstants,"h3d.pass._HardwarePick.FixedColor","updateConstants",0x51d75395,"h3d.pass._HardwarePick.FixedColor.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6654f5518cceb707_5_getParamValue,"h3d.pass._HardwarePick.FixedColor","getParamValue",0xe0c2b669,"h3d.pass._HardwarePick.FixedColor.getParamValue","h3d/pass/HardwarePick.hx",5,0x9ccf9bed)
HX_LOCAL_STACK_FRAME(_hx_pos_ea4fc002c3c1e1d3_304_getParamFloatValue,"h3d.pass._HardwarePick.FixedColor","getParamFloatValue",0x4b04da3d,"h3d.pass._HardwarePick.FixedColor.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6654f5518cceb707_5_clone,"h3d.pass._HardwarePick.FixedColor","clone",0x694c76ec,"h3d.pass._HardwarePick.FixedColor.clone","h3d/pass/HardwarePick.hx",5,0x9ccf9bed)
HX_LOCAL_STACK_FRAME(_hx_pos_6654f5518cceb707_5_boot,"h3d.pass._HardwarePick.FixedColor","boot",0x1c850783,"h3d.pass._HardwarePick.FixedColor.boot","h3d/pass/HardwarePick.hx",5,0x9ccf9bed)
namespace h3d{
namespace pass{
namespace _HardwarePick{

void FixedColor_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6654f5518cceb707_3_new)
HXLINE(  63)		this->viewport__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(  63)		this->colorID__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(   3)		super::__construct();
            	}

Dynamic FixedColor_obj::__CreateEmpty() { return new FixedColor_obj; }

void *FixedColor_obj::_hx_vtable = 0;

Dynamic FixedColor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FixedColor_obj > _hx_result = new FixedColor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FixedColor_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x5c7370f1;
	}
}

 ::h3d::Vector FixedColor_obj::get_colorID(){
            	HX_STACKFRAME(&_hx_pos_ea4fc002c3c1e1d3_174_get_colorID)
HXDLIN( 174)		return this->colorID__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FixedColor_obj,get_colorID,return )

 ::h3d::Vector FixedColor_obj::set_colorID( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_ea4fc002c3c1e1d3_191_set_colorID)
HXDLIN( 191)		return (this->colorID__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FixedColor_obj,set_colorID,return )

 ::h3d::Vector FixedColor_obj::get_viewport(){
            	HX_STACKFRAME(&_hx_pos_ea4fc002c3c1e1d3_174_get_viewport)
HXDLIN( 174)		return this->viewport__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FixedColor_obj,get_viewport,return )

 ::h3d::Vector FixedColor_obj::set_viewport( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_ea4fc002c3c1e1d3_191_set_viewport)
HXDLIN( 191)		return (this->viewport__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FixedColor_obj,set_viewport,return )

void FixedColor_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_ea4fc002c3c1e1d3_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic FixedColor_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_6654f5518cceb707_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->colorID__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->viewport__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float FixedColor_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_ea4fc002c3c1e1d3_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader FixedColor_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_6654f5518cceb707_5_clone)
HXLINE( 315)		 ::h3d::pass::_HardwarePick::FixedColor s = ( ( ::h3d::pass::_HardwarePick::FixedColor)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::pass::_HardwarePick::FixedColor >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->colorID__ = this->colorID__;
HXDLIN( 320)		s->viewport__ = this->viewport__;
HXLINE( 322)		return s;
            	}


::String FixedColor_obj::SRC;

 ::hxsl::SharedShader FixedColor_obj::_SHADER;


::hx::ObjectPtr< FixedColor_obj > FixedColor_obj::__new() {
	::hx::ObjectPtr< FixedColor_obj > __this = new FixedColor_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FixedColor_obj > FixedColor_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FixedColor_obj *__this = (FixedColor_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FixedColor_obj), true, "h3d.pass._HardwarePick.FixedColor"));
	*(void **)__this = FixedColor_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FixedColor_obj::FixedColor_obj()
{
}

void FixedColor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FixedColor);
	HX_MARK_MEMBER_NAME(colorID__,"colorID__");
	HX_MARK_MEMBER_NAME(viewport__,"viewport__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FixedColor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colorID__,"colorID__");
	HX_VISIT_MEMBER_NAME(viewport__,"viewport__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FixedColor_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colorID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorID() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewport() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorID__") ) { return ::hx::Val( colorID__ ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"viewport__") ) { return ::hx::Val( viewport__ ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_colorID") ) { return ::hx::Val( get_colorID_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorID") ) { return ::hx::Val( set_colorID_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_viewport") ) { return ::hx::Val( get_viewport_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewport") ) { return ::hx::Val( set_viewport_dyn() ); }
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

bool FixedColor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val FixedColor_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"colorID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorID(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewport(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorID__") ) { colorID__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"viewport__") ) { viewport__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FixedColor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void FixedColor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colorID",fe,0f,66,ef));
	outFields->push(HX_("colorID__",9e,de,08,21));
	outFields->push(HX_("viewport",66,4c,a5,9c));
	outFields->push(HX_("viewport__",06,05,de,09));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FixedColor_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(FixedColor_obj,colorID__),HX_("colorID__",9e,de,08,21)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(FixedColor_obj,viewport__),HX_("viewport__",06,05,de,09)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FixedColor_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FixedColor_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &FixedColor_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FixedColor_obj_sMemberFields[] = {
	HX_("colorID__",9e,de,08,21),
	HX_("get_colorID",15,70,60,75),
	HX_("set_colorID",21,77,cd,7f),
	HX_("viewport__",06,05,de,09),
	HX_("get_viewport",6f,00,bf,51),
	HX_("set_viewport",e3,23,b8,66),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void FixedColor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FixedColor_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(FixedColor_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FixedColor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FixedColor_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(FixedColor_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class FixedColor_obj::__mClass;

static ::String FixedColor_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void FixedColor_obj::__register()
{
	FixedColor_obj _hx_dummy;
	FixedColor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass._HardwarePick.FixedColor",bd,9e,9b,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FixedColor_obj::__GetStatic;
	__mClass->mSetStaticField = &FixedColor_obj::__SetStatic;
	__mClass->mMarkFunc = FixedColor_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FixedColor_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FixedColor_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FixedColor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FixedColor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FixedColor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FixedColor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FixedColor_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6654f5518cceb707_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLIWgzZC5wYXNzLl9IYXJkd2FyZVBpY2suRml4ZWRDb2xvcgUBB2NvbG9ySUQFDAIAAAIIdmlld3BvcnQFDAIAAAMGb3V0cHV0DQECBAhwb3NpdGlvbgUMBAMABQdjb2xvcklEBQwEAwAEAAAGBnZlcnRleA4GAAAHCGZyYWdtZW50DgYAAAIABgAABQEGBAIEBQwGAQQGAAIEBQwGAQkDKg4DCgICBQwRAAUKAQMAAAAAAAAAAAMBAwAAAAAAAAAAAwUMCgIEBQwMAAMFDAUMBQwJAyoOAwoCAgUMOQAFCgEDAAAAAAAA8D8DAQMAAAAAAADwPwMFDAUMBQwAAQcAAAUBBgQCBQUMAgEFDAUMAA",b6,fb,5e,9d);
            	}
}

} // end namespace h3d
} // end namespace pass
} // end namespace _HardwarePick
