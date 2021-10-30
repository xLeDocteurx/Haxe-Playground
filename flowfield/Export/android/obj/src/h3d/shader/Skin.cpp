#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_shader_Skin
#include <h3d/shader/Skin.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6c3df10946eb30a3_3_new,"h3d.shader.Skin","new",0x86adc543,"h3d.shader.Skin.new","h3d/shader/Skin.hx",3,0x115de56d)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb4648eff500525_270_updateConstants,"h3d.shader.Skin","updateConstants",0x0d1d84a9,"h3d.shader.Skin.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6c3df10946eb30a3_5_getParamValue,"h3d.shader.Skin","getParamValue",0x9170ba7d,"h3d.shader.Skin.getParamValue","h3d/shader/Skin.hx",5,0x115de56d)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb4648eff500525_304_getParamFloatValue,"h3d.shader.Skin","getParamFloatValue",0xd02b8da9,"h3d.shader.Skin.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6c3df10946eb30a3_5_clone,"h3d.shader.Skin","clone",0x90ce4700,"h3d.shader.Skin.clone","h3d/shader/Skin.hx",5,0x115de56d)
HX_LOCAL_STACK_FRAME(_hx_pos_6c3df10946eb30a3_5_boot,"h3d.shader.Skin","boot",0x4977d5ef,"h3d.shader.Skin.boot","h3d/shader/Skin.hx",5,0x115de56d)
namespace h3d{
namespace shader{

void Skin_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6c3df10946eb30a3_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic Skin_obj::__CreateEmpty() { return new Skin_obj; }

void *Skin_obj::_hx_vtable = 0;

Dynamic Skin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Skin_obj > _hx_result = new Skin_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Skin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		if (inClassId<=(int)0x0510bcec) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0510bcec;
		} else {
			return inClassId==(int)0x19343d6e;
		}
	} else {
		return inClassId==(int)0x54deef3b;
	}
}

void Skin_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_1bb4648eff500525_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 241)		{
HXLINE( 242)			int v = this->MaxBones__;
HXLINE( 243)			if ((::hx::UShr(v,8) != 0)) {
HXLINE( 243)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("MaxBones",8b,67,c6,3a) + HX_(" is out of range ",04,9f,ff,37)) + v) + HX_(">",3e,00,00,00)) + 255)));
            			}
HXLINE( 244)			 ::h3d::shader::Skin _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 244)			_hx_tmp->constBits = (_hx_tmp->constBits | v);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic Skin_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_6c3df10946eb30a3_5_getParamValue)
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


Float Skin_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_1bb4648eff500525_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader Skin_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_6c3df10946eb30a3_5_clone)
HXLINE( 315)		 ::h3d::shader::Skin s = ( ( ::h3d::shader::Skin)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::Skin >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->MaxBones__ = this->MaxBones__;
HXDLIN( 320)		s->bonesMatrixes__ = this->bonesMatrixes__;
HXLINE( 322)		return s;
            	}


::String Skin_obj::SRC;

 ::hxsl::SharedShader Skin_obj::_SHADER;


::hx::ObjectPtr< Skin_obj > Skin_obj::__new() {
	::hx::ObjectPtr< Skin_obj > __this = new Skin_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Skin_obj > Skin_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Skin_obj *__this = (Skin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Skin_obj), true, "h3d.shader.Skin"));
	*(void **)__this = Skin_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Skin_obj::Skin_obj()
{
}

::hx::Val Skin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

bool Skin_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

bool Skin_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Skin_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Skin_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Skin_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &Skin_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Skin_obj_sMemberFields[] = {
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void Skin_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Skin_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(Skin_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Skin_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Skin_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(Skin_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class Skin_obj::__mClass;

static ::String Skin_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void Skin_obj::__register()
{
	Skin_obj _hx_dummy;
	Skin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.Skin",d1,67,f3,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Skin_obj::__GetStatic;
	__mClass->mSetStaticField = &Skin_obj::__SetStatic;
	__mClass->mMarkFunc = Skin_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Skin_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Skin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Skin_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Skin_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Skin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Skin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Skin_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6c3df10946eb30a3_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLD2gzZC5zaGFkZXIuU2tpbggBEHJlbGF0aXZlUG9zaXRpb24FCwQAAAITdHJhbnNmb3JtZWRQb3NpdGlvbgULBAAAAxF0cmFuc2Zvcm1lZE5vcm1hbAULBAAABAhNYXhCb25lcwECAAEAAAAAAAUNYm9uZXNNYXRyaXhlcw8IBAIAAQgGBWlucHV0DQEEBwhwb3NpdGlvbgULAQYACAZub3JtYWwFCwEGAAkHd2VpZ2h0cwULAQYACgdpbmRleGVzCQQAAAABBgABAAALEnRyYW5zZm9ybWVkVGFuZ2VudAUMBAAADAZ2ZXJ0ZXgOBgAAAQAMAAAFAgYEAgIFCwYABgAGAQQGAQIBBQsRAgUPCAQJAyUOAQoCCgkEAAAAAAADAQgFCwULCgIJBQsAAAMFCwYBBAYBAgEFCxECBQ8IBAkDJQ4BCgIKCQQAAAAEAAMBCAULBQsKAgkFCwQAAwULBQsGAQQGAQIBBQsRAgUPCAQJAyUOAQoCCgkEAAAACAADAQgFCwULCgIJBQsIAAMFCwULBQsGBAIDBQsJAx8OAQYABgAGAQQGAQIIBQsJAzIOARECBQ8IBAkDJQ4BCgIKCQQAAAAAAAMBCAYFCwULCgIJBQsAAAMFCwYBBAYBAggFCwkDMg4BEQIFDwgECQMlDgEKAgoJBAAAAAQAAwEIBgULBQsKAgkFCwQAAwULBQsGAQQGAQIIBQsJAzIOARECBQ8IBAkDJQ4BCgIKCQQAAAAIAAMBCAYFCwULCgIJBQsIAAMFCwULBQsFCwA",a5,2b,af,da);
            	}
}

} // end namespace h3d
} // end namespace shader
