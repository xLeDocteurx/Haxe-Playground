#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_shader_GenTexture
#include <h3d/shader/GenTexture.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f3353c8472bf2e06_3_new,"h3d.shader.GenTexture","new",0x0b8bf6f1,"h3d.shader.GenTexture.new","h3d/shader/GenTexture.hx",3,0x7744ab7f)
HX_LOCAL_STACK_FRAME(_hx_pos_b45e0f0fa34a9bc4_174_get_mode,"h3d.shader.GenTexture","get_mode",0x9b58fabb,"h3d.shader.GenTexture.get_mode","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b45e0f0fa34a9bc4_193_set_mode,"h3d.shader.GenTexture","set_mode",0x49b6542f,"h3d.shader.GenTexture.set_mode","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b45e0f0fa34a9bc4_174_get_color,"h3d.shader.GenTexture","get_color",0x9086b70b,"h3d.shader.GenTexture.get_color","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b45e0f0fa34a9bc4_191_set_color,"h3d.shader.GenTexture","set_color",0x73d7a317,"h3d.shader.GenTexture.set_color","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_b45e0f0fa34a9bc4_270_updateConstants,"h3d.shader.GenTexture","updateConstants",0xa7d68357,"h3d.shader.GenTexture.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_f3353c8472bf2e06_5_getParamValue,"h3d.shader.GenTexture","getParamValue",0x418311ab,"h3d.shader.GenTexture.getParamValue","h3d/shader/GenTexture.hx",5,0x7744ab7f)
HX_LOCAL_STACK_FRAME(_hx_pos_f3353c8472bf2e06_5_getParamFloatValue,"h3d.shader.GenTexture","getParamFloatValue",0x0fa86fbb,"h3d.shader.GenTexture.getParamFloatValue","h3d/shader/GenTexture.hx",5,0x7744ab7f)
HX_LOCAL_STACK_FRAME(_hx_pos_f3353c8472bf2e06_5_clone,"h3d.shader.GenTexture","clone",0xaedec02e,"h3d.shader.GenTexture.clone","h3d/shader/GenTexture.hx",5,0x7744ab7f)
HX_LOCAL_STACK_FRAME(_hx_pos_f3353c8472bf2e06_5_boot,"h3d.shader.GenTexture","boot",0x07051c81,"h3d.shader.GenTexture.boot","h3d/shader/GenTexture.hx",5,0x7744ab7f)
namespace h3d{
namespace shader{

void GenTexture_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f3353c8472bf2e06_3_new)
HXLINE(  63)		this->color__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  59)		this->mode__ = 0;
HXLINE(   3)		super::__construct();
            	}

Dynamic GenTexture_obj::__CreateEmpty() { return new GenTexture_obj; }

void *GenTexture_obj::_hx_vtable = 0;

Dynamic GenTexture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenTexture_obj > _hx_result = new GenTexture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GenTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x257d9d69) {
		if (inClassId<=(int)0x19343d6e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
		} else {
			return inClassId==(int)0x257d9d69;
		}
	} else {
		return inClassId==(int)0x738c8e6f;
	}
}

int GenTexture_obj::get_mode(){
            	HX_STACKFRAME(&_hx_pos_b45e0f0fa34a9bc4_174_get_mode)
HXDLIN( 174)		return this->mode__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenTexture_obj,get_mode,return )

int GenTexture_obj::set_mode(int _v){
            	HX_STACKFRAME(&_hx_pos_b45e0f0fa34a9bc4_193_set_mode)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->mode__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenTexture_obj,set_mode,return )

 ::h3d::Vector GenTexture_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_b45e0f0fa34a9bc4_174_get_color)
HXDLIN( 174)		return this->color__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenTexture_obj,get_color,return )

 ::h3d::Vector GenTexture_obj::set_color( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_b45e0f0fa34a9bc4_191_set_color)
HXDLIN( 191)		return (this->color__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenTexture_obj,set_color,return )

void GenTexture_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_b45e0f0fa34a9bc4_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 241)		{
HXLINE( 242)			int v = this->mode__;
HXLINE( 243)			if ((::hx::UShr(v,8) != 0)) {
HXLINE( 243)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("mode",63,d3,60,48) + HX_(" is out of range ",04,9f,ff,37)) + v) + HX_(">",3e,00,00,00)) + 255)));
            			}
HXLINE( 244)			 ::h3d::shader::GenTexture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 244)			_hx_tmp->constBits = (_hx_tmp->constBits | v);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic GenTexture_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_f3353c8472bf2e06_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->flipY__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->mode__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->color__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float GenTexture_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_f3353c8472bf2e06_5_getParamFloatValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 303)			return this->flipY__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader GenTexture_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_f3353c8472bf2e06_5_clone)
HXLINE( 315)		 ::h3d::shader::GenTexture s = ( ( ::h3d::shader::GenTexture)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::GenTexture >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->flipY__ = this->flipY__;
HXDLIN( 320)		s->mode__ = this->mode__;
HXDLIN( 320)		s->color__ = this->color__;
HXLINE( 322)		return s;
            	}


::String GenTexture_obj::SRC;

 ::hxsl::SharedShader GenTexture_obj::_SHADER;


::hx::ObjectPtr< GenTexture_obj > GenTexture_obj::__new() {
	::hx::ObjectPtr< GenTexture_obj > __this = new GenTexture_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GenTexture_obj > GenTexture_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GenTexture_obj *__this = (GenTexture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenTexture_obj), true, "h3d.shader.GenTexture"));
	*(void **)__this = GenTexture_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GenTexture_obj::GenTexture_obj()
{
}

void GenTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenTexture);
	HX_MARK_MEMBER_NAME(mode__,"mode__");
	HX_MARK_MEMBER_NAME(color__,"color__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GenTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mode__,"mode__");
	HX_VISIT_MEMBER_NAME(color__,"color__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GenTexture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mode() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mode__") ) { return ::hx::Val( mode__ ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"color__") ) { return ::hx::Val( color__ ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_mode") ) { return ::hx::Val( get_mode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mode") ) { return ::hx::Val( set_mode_dyn() ); }
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

bool GenTexture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val GenTexture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mode(inValue.Cast< int >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mode__") ) { mode__=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"color__") ) { color__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GenTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void GenTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mode",63,d3,60,48));
	outFields->push(HX_("mode__",43,05,c7,c0));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("color__",43,23,66,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenTexture_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(GenTexture_obj,mode__),HX_("mode__",43,05,c7,c0)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(GenTexture_obj,color__),HX_("color__",43,23,66,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GenTexture_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GenTexture_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &GenTexture_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GenTexture_obj_sMemberFields[] = {
	HX_("mode__",43,05,c7,c0),
	HX_("get_mode",ec,8e,1b,c8),
	HX_("set_mode",60,e8,78,76),
	HX_("color__",43,23,66,ef),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void GenTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenTexture_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(GenTexture_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GenTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenTexture_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(GenTexture_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class GenTexture_obj::__mClass;

static ::String GenTexture_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void GenTexture_obj::__register()
{
	GenTexture_obj _hx_dummy;
	GenTexture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.GenTexture",7f,aa,cf,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GenTexture_obj::__GetStatic;
	__mClass->mSetStaticField = &GenTexture_obj::__SetStatic;
	__mClass->mMarkFunc = GenTexture_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GenTexture_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenTexture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GenTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenTexture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GenTexture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f3353c8472bf2e06_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLFWgzZC5zaGFkZXIuR2VuVGV4dHVyZQoBBWlucHV0DQECAghwb3NpdGlvbgUKAQEAAwJ1dgUKAQEAAQAABAVmbGlwWQMCAAAFBm91dHB1dA0CAgYIcG9zaXRpb24FDAQFAAcFY29sb3IFDAQFAAQAAAgKcGl4ZWxDb2xvcgUMBAAACQxjYWxjdWxhdGVkVVYFCgQAAAoEbW9kZQECAAEAAAAAAAsFY29sb3IFDAIAAAwIX19pbml0X18OBgAADQZ2ZXJ0ZXgOBgAADghmcmFnbWVudA4GAAADAgwAAAUCBgQCBwUMAggFDAUMBgQCCQUKAgMFCgUKAAANAAAFAQYEAgYFDAkDKg4ECgICBQoAAAMGAQoCAgUKBAADAgQDAwEDAAAAAAAAAAADAQMAAAAAAADwPwMFDAUMAAEOAAAFARMEAgoBAQEBAQIAAAAAAQUBBgQCCAUMCwYHCQMbDgEKAgYFDBEABQoDAQMAAAAAAADwPwMCCQMqDgEBAwAAAAAAAAAAAwUMAgsFDAUMBQwAAAAA",7d,57,2c,30);
            	}
}

} // end namespace h3d
} // end namespace shader
