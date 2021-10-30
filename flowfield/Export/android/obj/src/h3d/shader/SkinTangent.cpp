#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_shader_SkinBase
#include <h3d/shader/SkinBase.h>
#endif
#ifndef INCLUDED_h3d_shader_SkinTangent
#include <h3d/shader/SkinTangent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_10ca255f9673a21a_3_new,"h3d.shader.SkinTangent","new",0xa3fa93e6,"h3d.shader.SkinTangent.new","h3d/shader/SkinTangent.hx",3,0x4960d46a)
HX_LOCAL_STACK_FRAME(_hx_pos_ce9e10c06a45ca27_270_updateConstants,"h3d.shader.SkinTangent","updateConstants",0x3af73bcc,"h3d.shader.SkinTangent.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_10ca255f9673a21a_5_getParamValue,"h3d.shader.SkinTangent","getParamValue",0xcda952e0,"h3d.shader.SkinTangent.getParamValue","h3d/shader/SkinTangent.hx",5,0x4960d46a)
HX_LOCAL_STACK_FRAME(_hx_pos_ce9e10c06a45ca27_304_getParamFloatValue,"h3d.shader.SkinTangent","getParamFloatValue",0x1d20ae66,"h3d.shader.SkinTangent.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_10ca255f9673a21a_5_clone,"h3d.shader.SkinTangent","clone",0x35e64463,"h3d.shader.SkinTangent.clone","h3d/shader/SkinTangent.hx",5,0x4960d46a)
HX_LOCAL_STACK_FRAME(_hx_pos_10ca255f9673a21a_5_boot,"h3d.shader.SkinTangent","boot",0xcf5fd5ec,"h3d.shader.SkinTangent.boot","h3d/shader/SkinTangent.hx",5,0x4960d46a)
namespace h3d{
namespace shader{

void SkinTangent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_10ca255f9673a21a_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic SkinTangent_obj::__CreateEmpty() { return new SkinTangent_obj; }

void *SkinTangent_obj::_hx_vtable = 0;

Dynamic SkinTangent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SkinTangent_obj > _hx_result = new SkinTangent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SkinTangent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		if (inClassId<=(int)0x0510bcec) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0510bcec;
		} else {
			return inClassId==(int)0x19343d6e;
		}
	} else {
		return inClassId==(int)0x722c02ca;
	}
}

void SkinTangent_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_ce9e10c06a45ca27_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 241)		{
HXLINE( 242)			int v = this->MaxBones__;
HXLINE( 243)			if ((::hx::UShr(v,8) != 0)) {
HXLINE( 243)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("MaxBones",8b,67,c6,3a) + HX_(" is out of range ",04,9f,ff,37)) + v) + HX_(">",3e,00,00,00)) + 255)));
            			}
HXLINE( 244)			 ::h3d::shader::SkinTangent _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 244)			_hx_tmp->constBits = (_hx_tmp->constBits | v);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic SkinTangent_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_10ca255f9673a21a_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->MaxBones__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->bonesMatrixes__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float SkinTangent_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_ce9e10c06a45ca27_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader SkinTangent_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_10ca255f9673a21a_5_clone)
HXLINE( 315)		 ::h3d::shader::SkinTangent s = ( ( ::h3d::shader::SkinTangent)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::SkinTangent >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->MaxBones__ = this->MaxBones__;
HXDLIN( 320)		s->bonesMatrixes__ = this->bonesMatrixes__;
HXLINE( 322)		return s;
            	}


::String SkinTangent_obj::SRC;

 ::hxsl::SharedShader SkinTangent_obj::_SHADER;


::hx::ObjectPtr< SkinTangent_obj > SkinTangent_obj::__new() {
	::hx::ObjectPtr< SkinTangent_obj > __this = new SkinTangent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SkinTangent_obj > SkinTangent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SkinTangent_obj *__this = (SkinTangent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SkinTangent_obj), true, "h3d.shader.SkinTangent"));
	*(void **)__this = SkinTangent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SkinTangent_obj::SkinTangent_obj()
{
}

::hx::Val SkinTangent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
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

bool SkinTangent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

bool SkinTangent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *SkinTangent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SkinTangent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SkinTangent_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &SkinTangent_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SkinTangent_obj_sMemberFields[] = {
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void SkinTangent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkinTangent_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(SkinTangent_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SkinTangent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkinTangent_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(SkinTangent_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class SkinTangent_obj::__mClass;

static ::String SkinTangent_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void SkinTangent_obj::__register()
{
	SkinTangent_obj _hx_dummy;
	SkinTangent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.SkinTangent",f4,68,a5,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SkinTangent_obj::__GetStatic;
	__mClass->mSetStaticField = &SkinTangent_obj::__SetStatic;
	__mClass->mMarkFunc = SkinTangent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SkinTangent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SkinTangent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SkinTangent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SkinTangent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SkinTangent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SkinTangent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SkinTangent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_10ca255f9673a21a_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLFmgzZC5zaGFkZXIuU2tpblRhbmdlbnQIARByZWxhdGl2ZVBvc2l0aW9uBQsEAAACE3RyYW5zZm9ybWVkUG9zaXRpb24FCwQAAAMRdHJhbnNmb3JtZWROb3JtYWwFCwQAAAQITWF4Qm9uZXMBAgABAAAAAAAFDWJvbmVzTWF0cml4ZXMPCAQCAAEIBgVpbnB1dA0BBQcIcG9zaXRpb24FCwEGAAgGbm9ybWFsBQsBBgAJB3RhbmdlbnQFCwEGAAoHd2VpZ2h0cwULAQYACwdpbmRleGVzCQQAAAABBgABAAAMEnRyYW5zZm9ybWVkVGFuZ2VudAUMBAAADQZ2ZXJ0ZXgOBgAAAQANAAAFAwYEAgIFCwYABgAGAQQGAQIBBQsRAgUPCAQJAyUOAQoCCwkEAAAAAAADAQgFCwULCgIKBQsAAAMFCwYBBAYBAgEFCxECBQ8IBAkDJQ4BCgILCQQAAAAEAAMBCAULBQsKAgoFCwQAAwULBQsGAQQGAQIBBQsRAgUPCAQJAyUOAQoCCwkEAAAACAADAQgFCwULCgIKBQsIAAMFCwULBQsGBAIDBQsJAx8OAQYABgAGAQQGAQIIBQsJAzIOARECBQ8IBAkDJQ4BCgILCQQAAAAAAAMBCAYFCwULCgIKBQsAAAMFCwYBBAYBAggFCwkDMg4BEQIFDwgECQMlDgEKAgsJBAAAAAQAAwEIBgULBQsKAgoFCwQAAwULBQsGAQQGAQIIBQsJAzIOARECBQ8IBAkDJQ4BCgILCQQAAAAIAAMBCAYFCwULCgIKBQsIAAMFCwULBQsFCwYEAgwFDAkDKg4CCQMfDgEGAAYABgEEBgEKAgkFC5IABQsJAzIOARECBQ8IBAkDJQ4BCgILCQQAAAAAAAMBCAYFCwULCgIKBQsAAAMFCwYBBAYBCgIJBQuSAAULCQMyDgERAgUPCAQJAyUOAQoCCwkEAAAABAADAQgGBQsFCwoCCgULBAADBQsFCwYBBAYBCgIJBQuSAAULCQMyDgERAgUPCAQJAyUOAQoCCwkEAAAACAADAQgGBQsFCwoCCgULCAADBQsFCwULCgIMBQwMAAMFDAUMAA",db,80,a3,c0);
            	}
}

} // end namespace h3d
} // end namespace shader
