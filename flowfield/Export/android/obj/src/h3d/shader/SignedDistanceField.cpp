#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_shader_SignedDistanceField
#include <h3d/shader/SignedDistanceField.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_32830a67de98a87d_3_new,"h3d.shader.SignedDistanceField","new",0xd342e267,"h3d.shader.SignedDistanceField.new","h3d/shader/SignedDistanceField.hx",3,0xb464b109)
HX_LOCAL_STACK_FRAME(_hx_pos_c1abd70fea7eb5b2_174_get_channel,"h3d.shader.SignedDistanceField","get_channel",0xeab751e1,"h3d.shader.SignedDistanceField.get_channel","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c1abd70fea7eb5b2_193_set_channel,"h3d.shader.SignedDistanceField","set_channel",0xf52458ed,"h3d.shader.SignedDistanceField.set_channel","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c1abd70fea7eb5b2_174_get_alphaCutoff,"h3d.shader.SignedDistanceField","get_alphaCutoff",0xdfa31949,"h3d.shader.SignedDistanceField.get_alphaCutoff","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c1abd70fea7eb5b2_191_set_alphaCutoff,"h3d.shader.SignedDistanceField","set_alphaCutoff",0xdb6e9655,"h3d.shader.SignedDistanceField.set_alphaCutoff","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c1abd70fea7eb5b2_174_get_smoothing,"h3d.shader.SignedDistanceField","get_smoothing",0xf4942a12,"h3d.shader.SignedDistanceField.get_smoothing","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c1abd70fea7eb5b2_191_set_smoothing,"h3d.shader.SignedDistanceField","set_smoothing",0x399a0c1e,"h3d.shader.SignedDistanceField.set_smoothing","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c1abd70fea7eb5b2_270_updateConstants,"h3d.shader.SignedDistanceField","updateConstants",0x027bc7cd,"h3d.shader.SignedDistanceField.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_32830a67de98a87d_5_getParamValue,"h3d.shader.SignedDistanceField","getParamValue",0x9bb32ca1,"h3d.shader.SignedDistanceField.getParamValue","h3d/shader/SignedDistanceField.hx",5,0xb464b109)
HX_LOCAL_STACK_FRAME(_hx_pos_32830a67de98a87d_5_getParamFloatValue,"h3d.shader.SignedDistanceField","getParamFloatValue",0x6aa4d905,"h3d.shader.SignedDistanceField.getParamFloatValue","h3d/shader/SignedDistanceField.hx",5,0xb464b109)
HX_LOCAL_STACK_FRAME(_hx_pos_32830a67de98a87d_5_clone,"h3d.shader.SignedDistanceField","clone",0x02bff524,"h3d.shader.SignedDistanceField.clone","h3d/shader/SignedDistanceField.hx",5,0xb464b109)
HX_LOCAL_STACK_FRAME(_hx_pos_32830a67de98a87d_5_boot,"h3d.shader.SignedDistanceField","boot",0xff5c384b,"h3d.shader.SignedDistanceField.boot","h3d/shader/SignedDistanceField.hx",5,0xb464b109)
namespace h3d{
namespace shader{

void SignedDistanceField_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_32830a67de98a87d_3_new)
HXLINE(  19)		this->smoothing__ = ((Float)0.0416666666666666644);
HXLINE(  15)		this->alphaCutoff__ = ((Float)0.5);
HXLINE(  10)		this->channel__ = 0;
HXLINE(   3)		super::__construct();
            	}

Dynamic SignedDistanceField_obj::__CreateEmpty() { return new SignedDistanceField_obj; }

void *SignedDistanceField_obj::_hx_vtable = 0;

Dynamic SignedDistanceField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SignedDistanceField_obj > _hx_result = new SignedDistanceField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SignedDistanceField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x6bb782cb;
	}
}

int SignedDistanceField_obj::get_channel(){
            	HX_STACKFRAME(&_hx_pos_c1abd70fea7eb5b2_174_get_channel)
HXDLIN( 174)		return this->channel__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignedDistanceField_obj,get_channel,return )

int SignedDistanceField_obj::set_channel(int _v){
            	HX_STACKFRAME(&_hx_pos_c1abd70fea7eb5b2_193_set_channel)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->channel__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SignedDistanceField_obj,set_channel,return )

Float SignedDistanceField_obj::get_alphaCutoff(){
            	HX_STACKFRAME(&_hx_pos_c1abd70fea7eb5b2_174_get_alphaCutoff)
HXDLIN( 174)		return this->alphaCutoff__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignedDistanceField_obj,get_alphaCutoff,return )

Float SignedDistanceField_obj::set_alphaCutoff(Float _v){
            	HX_STACKFRAME(&_hx_pos_c1abd70fea7eb5b2_191_set_alphaCutoff)
HXDLIN( 191)		return (this->alphaCutoff__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SignedDistanceField_obj,set_alphaCutoff,return )

Float SignedDistanceField_obj::get_smoothing(){
            	HX_STACKFRAME(&_hx_pos_c1abd70fea7eb5b2_174_get_smoothing)
HXDLIN( 174)		return this->smoothing__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SignedDistanceField_obj,get_smoothing,return )

Float SignedDistanceField_obj::set_smoothing(Float _v){
            	HX_STACKFRAME(&_hx_pos_c1abd70fea7eb5b2_191_set_smoothing)
HXDLIN( 191)		return (this->smoothing__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SignedDistanceField_obj,set_smoothing,return )

void SignedDistanceField_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_c1abd70fea7eb5b2_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 241)		{
HXLINE( 242)			int v = this->channel__;
HXLINE( 243)			if ((::hx::UShr(v,8) != 0)) {
HXLINE( 243)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("channel",c3,00,d2,cc) + HX_(" is out of range ",04,9f,ff,37)) + v) + HX_(">",3e,00,00,00)) + 255)));
            			}
HXLINE( 244)			 ::h3d::shader::SignedDistanceField _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 244)			_hx_tmp->constBits = (_hx_tmp->constBits | v);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic SignedDistanceField_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_32830a67de98a87d_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->channel__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->alphaCutoff__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->smoothing__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float SignedDistanceField_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_32830a67de98a87d_5_getParamFloatValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)1: {
HXLINE( 303)				return this->alphaCutoff__;
            			}
            			break;
            			case (int)2: {
HXLINE( 303)				return this->smoothing__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader SignedDistanceField_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_32830a67de98a87d_5_clone)
HXLINE( 315)		 ::h3d::shader::SignedDistanceField s = ( ( ::h3d::shader::SignedDistanceField)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::SignedDistanceField >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->channel__ = this->channel__;
HXDLIN( 320)		s->alphaCutoff__ = this->alphaCutoff__;
HXDLIN( 320)		s->smoothing__ = this->smoothing__;
HXLINE( 322)		return s;
            	}


::String SignedDistanceField_obj::SRC;

 ::hxsl::SharedShader SignedDistanceField_obj::_SHADER;


::hx::ObjectPtr< SignedDistanceField_obj > SignedDistanceField_obj::__new() {
	::hx::ObjectPtr< SignedDistanceField_obj > __this = new SignedDistanceField_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SignedDistanceField_obj > SignedDistanceField_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SignedDistanceField_obj *__this = (SignedDistanceField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SignedDistanceField_obj), true, "h3d.shader.SignedDistanceField"));
	*(void **)__this = SignedDistanceField_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SignedDistanceField_obj::SignedDistanceField_obj()
{
}

::hx::Val SignedDistanceField_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_channel() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"channel__") ) { return ::hx::Val( channel__ ); }
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_smoothing() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_channel") ) { return ::hx::Val( get_channel_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_channel") ) { return ::hx::Val( set_channel_dyn() ); }
		if (HX_FIELD_EQ(inName,"alphaCutoff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaCutoff() ); }
		if (HX_FIELD_EQ(inName,"smoothing__") ) { return ::hx::Val( smoothing__ ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alphaCutoff__") ) { return ::hx::Val( alphaCutoff__ ); }
		if (HX_FIELD_EQ(inName,"get_smoothing") ) { return ::hx::Val( get_smoothing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return ::hx::Val( set_smoothing_dyn() ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_alphaCutoff") ) { return ::hx::Val( get_alphaCutoff_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaCutoff") ) { return ::hx::Val( set_alphaCutoff_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SignedDistanceField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val SignedDistanceField_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_channel(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"channel__") ) { channel__=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_smoothing(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaCutoff") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaCutoff(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"smoothing__") ) { smoothing__=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alphaCutoff__") ) { alphaCutoff__=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SignedDistanceField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void SignedDistanceField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("channel",c3,00,d2,cc));
	outFields->push(HX_("channel__",a3,4a,e6,25));
	outFields->push(HX_("alphaCutoff",2b,e1,3b,b0));
	outFields->push(HX_("alphaCutoff__",0b,15,d7,1f));
	outFields->push(HX_("smoothing",74,d5,e1,95));
	outFields->push(HX_("smoothing__",94,6d,19,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SignedDistanceField_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SignedDistanceField_obj,channel__),HX_("channel__",a3,4a,e6,25)},
	{::hx::fsFloat,(int)offsetof(SignedDistanceField_obj,alphaCutoff__),HX_("alphaCutoff__",0b,15,d7,1f)},
	{::hx::fsFloat,(int)offsetof(SignedDistanceField_obj,smoothing__),HX_("smoothing__",94,6d,19,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SignedDistanceField_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SignedDistanceField_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &SignedDistanceField_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SignedDistanceField_obj_sMemberFields[] = {
	HX_("channel__",a3,4a,e6,25),
	HX_("get_channel",da,60,cc,52),
	HX_("set_channel",e6,67,39,5d),
	HX_("alphaCutoff__",0b,15,d7,1f),
	HX_("get_alphaCutoff",c2,98,1d,71),
	HX_("set_alphaCutoff",ce,15,e9,6c),
	HX_("smoothing__",94,6d,19,32),
	HX_("get_smoothing",4b,a9,45,57),
	HX_("set_smoothing",57,8b,4b,9c),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void SignedDistanceField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SignedDistanceField_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(SignedDistanceField_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SignedDistanceField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SignedDistanceField_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(SignedDistanceField_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class SignedDistanceField_obj::__mClass;

static ::String SignedDistanceField_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void SignedDistanceField_obj::__register()
{
	SignedDistanceField_obj _hx_dummy;
	SignedDistanceField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.SignedDistanceField",f5,22,a2,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SignedDistanceField_obj::__GetStatic;
	__mClass->mSetStaticField = &SignedDistanceField_obj::__SetStatic;
	__mClass->mMarkFunc = SignedDistanceField_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SignedDistanceField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SignedDistanceField_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SignedDistanceField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SignedDistanceField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SignedDistanceField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SignedDistanceField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SignedDistanceField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_32830a67de98a87d_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLHmgzZC5zaGFkZXIuU2lnbmVkRGlzdGFuY2VGaWVsZA4BBWlucHV0DQEDAghwb3NpdGlvbgUKAQEAAwJ1dgUKAQEABAVjb2xvcgUMAQEAAQAABQZvdXRwdXQNAgIGCHBvc2l0aW9uBQwEBQAHBWNvbG9yBQwEBQAEAAAIBHRpbWUDAAAACQ5zcHJpdGVQb3NpdGlvbgUMBAAAChBhYnNvbHV0ZVBvc2l0aW9uBQwEAAALCnBpeGVsQ29sb3IFDAQAAAwMdGV4dHVyZUNvbG9yBQwEAAANDGNhbGN1bGF0ZWRVVgUKAwAADg5vdXRwdXRQb3NpdGlvbgUMBAAADwdjaGFubmVsAQIAAQAAAAAAEAthbHBoYUN1dG9mZgMCAAARCXNtb290aGluZwMCAAASBm1lZGlhbg4GAAATCGZyYWdtZW50DgYAAAIDEgMUAXIDBAAAFQFnAwQAABYBYgMEAAADBQENCQMWDgIJAxUOAgIUAwIVAwMJAxUOAgkDFg4CAhQDAhUDAwIWAwMDAAABEwAABQQIFw10ZXh0dXJlU2FtcGxlBQwEAAACDAUMAAgYCGRpc3RhbmNlAwQAAAAABgQCGAMLBgUCDwEBAgAAAAABAgoCFwUMAAADCwYFAg8BAQIBAAAAAQIKAhcFDAQAAwsGBQIPAQECAgAAAAECCgIXBQwIAAMLBgUCDwEBAgMAAAABAgoCFwUMDAADCQISDgMKAhcFDAAAAwoCFwUMBAADCgIXBQwIAAMDAwMDAwMGBAIMBQwJAyoOBAEDAAAAAAAA8D8DAQMAAAAAAADwPwMBAwAAAAAAAPA/AwkDGg4DBgMCEAMCEQMDBgACEAMCEQMDAhgDAwUMBQwA",d9,27,ae,59);
            	}
}

} // end namespace h3d
} // end namespace shader
