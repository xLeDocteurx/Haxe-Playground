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

HX_DEFINE_STACK_FRAME(_hx_pos_00481d1ae8c4ec7f_3_new,"h3d.shader.SkinBase","new",0x1b2b4274,"h3d.shader.SkinBase.new","h3d/shader/SkinBase.hx",3,0xde74495c)
HX_LOCAL_STACK_FRAME(_hx_pos_203b4be53081f00d_174_get_MaxBones,"h3d.shader.SkinBase","get_MaxBones",0x715bc700,"h3d.shader.SkinBase.get_MaxBones","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_203b4be53081f00d_193_set_MaxBones,"h3d.shader.SkinBase","set_MaxBones",0x8654ea74,"h3d.shader.SkinBase.set_MaxBones","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_203b4be53081f00d_174_get_bonesMatrixes,"h3d.shader.SkinBase","get_bonesMatrixes",0xf20eb529,"h3d.shader.SkinBase.get_bonesMatrixes","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_203b4be53081f00d_191_set_bonesMatrixes,"h3d.shader.SkinBase","set_bonesMatrixes",0x157c8d35,"h3d.shader.SkinBase.set_bonesMatrixes","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_203b4be53081f00d_270_updateConstants,"h3d.shader.SkinBase","updateConstants",0x403a875a,"h3d.shader.SkinBase.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_00481d1ae8c4ec7f_5_getParamValue,"h3d.shader.SkinBase","getParamValue",0xc91efeee,"h3d.shader.SkinBase.getParamValue","h3d/shader/SkinBase.hx",5,0xde74495c)
HX_LOCAL_STACK_FRAME(_hx_pos_203b4be53081f00d_304_getParamFloatValue,"h3d.shader.SkinBase","getParamFloatValue",0x749a8f98,"h3d.shader.SkinBase.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_00481d1ae8c4ec7f_5_clone,"h3d.shader.SkinBase","clone",0x5d8a3271,"h3d.shader.SkinBase.clone","h3d/shader/SkinBase.hx",5,0xde74495c)
HX_LOCAL_STACK_FRAME(_hx_pos_00481d1ae8c4ec7f_5_boot,"h3d.shader.SkinBase","boot",0xa2c7e39e,"h3d.shader.SkinBase.boot","h3d/shader/SkinBase.hx",5,0xde74495c)
namespace h3d{
namespace shader{

void SkinBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_00481d1ae8c4ec7f_3_new)
HXLINE(  72)		this->bonesMatrixes__ = ::Array_obj< ::Dynamic>::__new();
HXLINE(  59)		this->MaxBones__ = 0;
HXLINE(  17)		super::__construct();
HXLINE(  18)		{
HXLINE(  18)			this->constModified = true;
HXDLIN(  18)			this->MaxBones__ = 34;
            		}
            	}

Dynamic SkinBase_obj::__CreateEmpty() { return new SkinBase_obj; }

void *SkinBase_obj::_hx_vtable = 0;

Dynamic SkinBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SkinBase_obj > _hx_result = new SkinBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SkinBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0510bcec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0510bcec;
	} else {
		return inClassId==(int)0x19343d6e;
	}
}

int SkinBase_obj::get_MaxBones(){
            	HX_STACKFRAME(&_hx_pos_203b4be53081f00d_174_get_MaxBones)
HXDLIN( 174)		return this->MaxBones__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinBase_obj,get_MaxBones,return )

int SkinBase_obj::set_MaxBones(int _v){
            	HX_STACKFRAME(&_hx_pos_203b4be53081f00d_193_set_MaxBones)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->MaxBones__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SkinBase_obj,set_MaxBones,return )

::Array< ::Dynamic> SkinBase_obj::get_bonesMatrixes(){
            	HX_STACKFRAME(&_hx_pos_203b4be53081f00d_174_get_bonesMatrixes)
HXDLIN( 174)		return this->bonesMatrixes__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinBase_obj,get_bonesMatrixes,return )

::Array< ::Dynamic> SkinBase_obj::set_bonesMatrixes(::Array< ::Dynamic> _v){
            	HX_STACKFRAME(&_hx_pos_203b4be53081f00d_191_set_bonesMatrixes)
HXDLIN( 191)		return (this->bonesMatrixes__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SkinBase_obj,set_bonesMatrixes,return )

void SkinBase_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_203b4be53081f00d_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 241)		{
HXLINE( 242)			int v = this->MaxBones__;
HXLINE( 243)			if ((::hx::UShr(v,8) != 0)) {
HXLINE( 243)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("MaxBones",8b,67,c6,3a) + HX_(" is out of range ",04,9f,ff,37)) + v) + HX_(">",3e,00,00,00)) + 255)));
            			}
HXLINE( 244)			 ::h3d::shader::SkinBase _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 244)			_hx_tmp->constBits = (_hx_tmp->constBits | v);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic SkinBase_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_00481d1ae8c4ec7f_5_getParamValue)
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


Float SkinBase_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_203b4be53081f00d_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader SkinBase_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_00481d1ae8c4ec7f_5_clone)
HXLINE( 315)		 ::h3d::shader::SkinBase s = ( ( ::h3d::shader::SkinBase)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::SkinBase >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->MaxBones__ = this->MaxBones__;
HXDLIN( 320)		s->bonesMatrixes__ = this->bonesMatrixes__;
HXLINE( 322)		return s;
            	}


::String SkinBase_obj::SRC;

 ::hxsl::SharedShader SkinBase_obj::_SHADER;


::hx::ObjectPtr< SkinBase_obj > SkinBase_obj::__new() {
	::hx::ObjectPtr< SkinBase_obj > __this = new SkinBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SkinBase_obj > SkinBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SkinBase_obj *__this = (SkinBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SkinBase_obj), true, "h3d.shader.SkinBase"));
	*(void **)__this = SkinBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SkinBase_obj::SkinBase_obj()
{
}

void SkinBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinBase);
	HX_MARK_MEMBER_NAME(MaxBones__,"MaxBones__");
	HX_MARK_MEMBER_NAME(bonesMatrixes__,"bonesMatrixes__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkinBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(MaxBones__,"MaxBones__");
	HX_VISIT_MEMBER_NAME(bonesMatrixes__,"bonesMatrixes__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SkinBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MaxBones") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_MaxBones() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MaxBones__") ) { return ::hx::Val( MaxBones__ ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_MaxBones") ) { return ::hx::Val( get_MaxBones_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_MaxBones") ) { return ::hx::Val( set_MaxBones_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bonesMatrixes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bonesMatrixes() ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bonesMatrixes__") ) { return ::hx::Val( bonesMatrixes__ ); }
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_bonesMatrixes") ) { return ::hx::Val( get_bonesMatrixes_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bonesMatrixes") ) { return ::hx::Val( set_bonesMatrixes_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SkinBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val SkinBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"MaxBones") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_MaxBones(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MaxBones__") ) { MaxBones__=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bonesMatrixes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bonesMatrixes(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bonesMatrixes__") ) { bonesMatrixes__=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SkinBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void SkinBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MaxBones",8b,67,c6,3a));
	outFields->push(HX_("MaxBones__",6b,f3,d7,46));
	outFields->push(HX_("bonesMatrixes",be,3c,bb,75));
	outFields->push(HX_("bonesMatrixes__",5e,bb,92,c8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SkinBase_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SkinBase_obj,MaxBones__),HX_("MaxBones__",6b,f3,d7,46)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SkinBase_obj,bonesMatrixes__),HX_("bonesMatrixes__",5e,bb,92,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SkinBase_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SkinBase_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &SkinBase_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SkinBase_obj_sMemberFields[] = {
	HX_("MaxBones__",6b,f3,d7,46),
	HX_("get_MaxBones",94,1b,e0,ef),
	HX_("set_MaxBones",08,3f,d9,04),
	HX_("bonesMatrixes__",5e,bb,92,c8),
	HX_("get_bonesMatrixes",15,48,2b,7c),
	HX_("set_bonesMatrixes",21,20,99,9f),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void SkinBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkinBase_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(SkinBase_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SkinBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkinBase_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(SkinBase_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class SkinBase_obj::__mClass;

static ::String SkinBase_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void SkinBase_obj::__register()
{
	SkinBase_obj _hx_dummy;
	SkinBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.SkinBase",82,38,dc,93);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SkinBase_obj::__GetStatic;
	__mClass->mSetStaticField = &SkinBase_obj::__SetStatic;
	__mClass->mMarkFunc = SkinBase_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SkinBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SkinBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SkinBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SkinBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SkinBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SkinBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SkinBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_00481d1ae8c4ec7f_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLE2gzZC5zaGFkZXIuU2tpbkJhc2UFARByZWxhdGl2ZVBvc2l0aW9uBQsEAAACE3RyYW5zZm9ybWVkUG9zaXRpb24FCwQAAAMRdHJhbnNmb3JtZWROb3JtYWwFCwQAAAQITWF4Qm9uZXMBAgABAAAAAAAFDWJvbmVzTWF0cml4ZXMPCAQCAAEIAA",da,9a,5f,49);
            	}
}

} // end namespace h3d
} // end namespace shader
