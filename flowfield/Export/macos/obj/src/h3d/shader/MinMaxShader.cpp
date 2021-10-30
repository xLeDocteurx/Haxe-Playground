#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_MinMaxShader
#include <h3d/shader/MinMaxShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_04f1afd2764ad3ac_3_new,"h3d.shader.MinMaxShader","new",0xc089c4bd,"h3d.shader.MinMaxShader.new","h3d/shader/MinMaxShader.hx",3,0x7ac2d333)
HX_LOCAL_STACK_FRAME(_hx_pos_b4f5a656531ded9b_174_get_texA,"h3d.shader.MinMaxShader","get_texA",0x6f9aa286,"h3d.shader.MinMaxShader.get_texA","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b4f5a656531ded9b_191_set_texA,"h3d.shader.MinMaxShader","set_texA",0x1df7fbfa,"h3d.shader.MinMaxShader.set_texA","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b4f5a656531ded9b_174_get_texB,"h3d.shader.MinMaxShader","get_texB",0x6f9aa287,"h3d.shader.MinMaxShader.get_texB","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b4f5a656531ded9b_191_set_texB,"h3d.shader.MinMaxShader","set_texB",0x1df7fbfb,"h3d.shader.MinMaxShader.set_texB","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b4f5a656531ded9b_174_get_isMax,"h3d.shader.MinMaxShader","get_isMax",0xeb6ba94e,"h3d.shader.MinMaxShader.get_isMax","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b4f5a656531ded9b_193_set_isMax,"h3d.shader.MinMaxShader","set_isMax",0xcebc955a,"h3d.shader.MinMaxShader.set_isMax","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b4f5a656531ded9b_270_updateConstants,"h3d.shader.MinMaxShader","updateConstants",0x1e37d323,"h3d.shader.MinMaxShader.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_04f1afd2764ad3ac_5_getParamValue,"h3d.shader.MinMaxShader","getParamValue",0xc1e09677,"h3d.shader.MinMaxShader.getParamValue","h3d/shader/MinMaxShader.hx",5,0x7ac2d333)
HX_LOCAL_STACK_FRAME(_hx_pos_04f1afd2764ad3ac_5_getParamFloatValue,"h3d.shader.MinMaxShader","getParamFloatValue",0xca9a076f,"h3d.shader.MinMaxShader.getParamFloatValue","h3d/shader/MinMaxShader.hx",5,0x7ac2d333)
HX_LOCAL_STACK_FRAME(_hx_pos_04f1afd2764ad3ac_5_clone,"h3d.shader.MinMaxShader","clone",0xf94498fa,"h3d.shader.MinMaxShader.clone","h3d/shader/MinMaxShader.hx",5,0x7ac2d333)
HX_LOCAL_STACK_FRAME(_hx_pos_04f1afd2764ad3ac_5_boot,"h3d.shader.MinMaxShader","boot",0xb01b6135,"h3d.shader.MinMaxShader.boot","h3d/shader/MinMaxShader.hx",5,0x7ac2d333)
namespace h3d{
namespace shader{

void MinMaxShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_04f1afd2764ad3ac_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic MinMaxShader_obj::__CreateEmpty() { return new MinMaxShader_obj; }

void *MinMaxShader_obj::_hx_vtable = 0;

Dynamic MinMaxShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MinMaxShader_obj > _hx_result = new MinMaxShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MinMaxShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x513d6dd1) {
		if (inClassId<=(int)0x19343d6e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
		} else {
			return inClassId==(int)0x513d6dd1;
		}
	} else {
		return inClassId==(int)0x738c8e6f;
	}
}

 ::h3d::mat::Texture MinMaxShader_obj::get_texA(){
            	HX_STACKFRAME(&_hx_pos_b4f5a656531ded9b_174_get_texA)
HXDLIN( 174)		return this->texA__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MinMaxShader_obj,get_texA,return )

 ::h3d::mat::Texture MinMaxShader_obj::set_texA( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_b4f5a656531ded9b_191_set_texA)
HXDLIN( 191)		return (this->texA__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MinMaxShader_obj,set_texA,return )

 ::h3d::mat::Texture MinMaxShader_obj::get_texB(){
            	HX_STACKFRAME(&_hx_pos_b4f5a656531ded9b_174_get_texB)
HXDLIN( 174)		return this->texB__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MinMaxShader_obj,get_texB,return )

 ::h3d::mat::Texture MinMaxShader_obj::set_texB( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_b4f5a656531ded9b_191_set_texB)
HXDLIN( 191)		return (this->texB__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MinMaxShader_obj,set_texB,return )

bool MinMaxShader_obj::get_isMax(){
            	HX_STACKFRAME(&_hx_pos_b4f5a656531ded9b_174_get_isMax)
HXDLIN( 174)		return this->isMax__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MinMaxShader_obj,get_isMax,return )

bool MinMaxShader_obj::set_isMax(bool _v){
            	HX_STACKFRAME(&_hx_pos_b4f5a656531ded9b_193_set_isMax)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->isMax__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MinMaxShader_obj,set_isMax,return )

void MinMaxShader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_b4f5a656531ded9b_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 247)		if (this->isMax__) {
HXLINE( 247)			 ::h3d::shader::MinMaxShader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)			_hx_tmp->constBits = (_hx_tmp->constBits | 1);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic MinMaxShader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_04f1afd2764ad3ac_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->flipY__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->texA__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->texB__;
            			}
            			break;
            			case (int)3: {
HXLINE( 287)				return this->isMax__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float MinMaxShader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_04f1afd2764ad3ac_5_getParamFloatValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 303)			return this->flipY__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader MinMaxShader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_04f1afd2764ad3ac_5_clone)
HXLINE( 315)		 ::h3d::shader::MinMaxShader s = ( ( ::h3d::shader::MinMaxShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::MinMaxShader >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->flipY__ = this->flipY__;
HXDLIN( 320)		s->texA__ = this->texA__;
HXDLIN( 320)		s->texB__ = this->texB__;
HXDLIN( 320)		s->isMax__ = this->isMax__;
HXLINE( 322)		return s;
            	}


::String MinMaxShader_obj::SRC;

 ::hxsl::SharedShader MinMaxShader_obj::_SHADER;


::hx::ObjectPtr< MinMaxShader_obj > MinMaxShader_obj::__new() {
	::hx::ObjectPtr< MinMaxShader_obj > __this = new MinMaxShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MinMaxShader_obj > MinMaxShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MinMaxShader_obj *__this = (MinMaxShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MinMaxShader_obj), true, "h3d.shader.MinMaxShader"));
	*(void **)__this = MinMaxShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MinMaxShader_obj::MinMaxShader_obj()
{
}

void MinMaxShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MinMaxShader);
	HX_MARK_MEMBER_NAME(texA__,"texA__");
	HX_MARK_MEMBER_NAME(texB__,"texB__");
	HX_MARK_MEMBER_NAME(isMax__,"isMax__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MinMaxShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texA__,"texA__");
	HX_VISIT_MEMBER_NAME(texB__,"texB__");
	HX_VISIT_MEMBER_NAME(isMax__,"isMax__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MinMaxShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"texA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texA() ); }
		if (HX_FIELD_EQ(inName,"texB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texB() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isMax() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"texA__") ) { return ::hx::Val( texA__ ); }
		if (HX_FIELD_EQ(inName,"texB__") ) { return ::hx::Val( texB__ ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isMax__") ) { return ::hx::Val( isMax__ ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_texA") ) { return ::hx::Val( get_texA_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texA") ) { return ::hx::Val( set_texA_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_texB") ) { return ::hx::Val( get_texB_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texB") ) { return ::hx::Val( set_texB_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_isMax") ) { return ::hx::Val( get_isMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_isMax") ) { return ::hx::Val( set_isMax_dyn() ); }
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

bool MinMaxShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val MinMaxShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"texA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texA(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		if (HX_FIELD_EQ(inName,"texB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texB(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isMax") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isMax(inValue.Cast< bool >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"texA__") ) { texA__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texB__") ) { texB__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isMax__") ) { isMax__=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MinMaxShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void MinMaxShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("texA",7a,cc,f9,4c));
	outFields->push(HX_("texA__",1a,b2,61,d8));
	outFields->push(HX_("texB",7b,cc,f9,4c));
	outFields->push(HX_("texB__",5b,74,62,d8));
	outFields->push(HX_("isMax",da,34,51,c1));
	outFields->push(HX_("isMax__",7a,f2,ab,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MinMaxShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(MinMaxShader_obj,texA__),HX_("texA__",1a,b2,61,d8)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(MinMaxShader_obj,texB__),HX_("texB__",5b,74,62,d8)},
	{::hx::fsBool,(int)offsetof(MinMaxShader_obj,isMax__),HX_("isMax__",7a,f2,ab,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MinMaxShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MinMaxShader_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &MinMaxShader_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MinMaxShader_obj_sMemberFields[] = {
	HX_("texA__",1a,b2,61,d8),
	HX_("get_texA",03,88,b4,cc),
	HX_("set_texA",77,e1,11,7b),
	HX_("texB__",5b,74,62,d8),
	HX_("get_texB",04,88,b4,cc),
	HX_("set_texB",78,e1,11,7b),
	HX_("isMax__",7a,f2,ab,9f),
	HX_("get_isMax",31,91,fa,04),
	HX_("set_isMax",3d,7d,4b,e8),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void MinMaxShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MinMaxShader_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(MinMaxShader_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MinMaxShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MinMaxShader_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(MinMaxShader_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class MinMaxShader_obj::__mClass;

static ::String MinMaxShader_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void MinMaxShader_obj::__register()
{
	MinMaxShader_obj _hx_dummy;
	MinMaxShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.MinMaxShader",4b,a2,47,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MinMaxShader_obj::__GetStatic;
	__mClass->mSetStaticField = &MinMaxShader_obj::__SetStatic;
	__mClass->mMarkFunc = MinMaxShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MinMaxShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MinMaxShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MinMaxShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MinMaxShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MinMaxShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MinMaxShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MinMaxShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_04f1afd2764ad3ac_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLF2gzZC5zaGFkZXIuTWluTWF4U2hhZGVyCwEFaW5wdXQNAQICCHBvc2l0aW9uBQoBAQADAnV2BQoBAQABAAAEBWZsaXBZAwIAAAUGb3V0cHV0DQICBghwb3NpdGlvbgUMBAUABwVjb2xvcgUMBAUABAAACApwaXhlbENvbG9yBQwEAAAJDGNhbGN1bGF0ZWRVVgUKBAAACgR0ZXhBCgIAAAsEdGV4QgoCAAAMBWlzTWF4AgIAAQAAAAAADQhfX2luaXRfXw4GAAAOBnZlcnRleA4GAAAPCGZyYWdtZW50DgYAAAMCDQAABQIGBAIHBQwCCAUMBQwGBAIJBQoCAwUKBQoAAA4AAAUBBgQCBgUMCQMqDgQKAgIFCgAAAwYBCgICBQoEAAMCBAMDAQMAAAAAAAAAAAMBAwAAAAAAAPA/AwUMBQwAAQ8AAAUDCBABYQUMBAAACQMhDgICCgoCCQUKBQwACBEBYgUMBAAACQMhDgICCwoCCQUKBQwABgQCCAUMCwIMAgkDFg4CAhAFDAIRBQwFDAkDFQ4CAhAFDAIRBQwFDAUMBQwA",ba,7a,e8,e3);
            	}
}

} // end namespace h3d
} // end namespace shader
