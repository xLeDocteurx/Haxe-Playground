#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_shader_ColorKey
#include <h3d/shader/ColorKey.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_539aae8e00f11cfa_3_new,"h3d.shader.ColorKey","new",0x2820a442,"h3d.shader.ColorKey.new","h3d/shader/ColorKey.hx",3,0x81869b4e)
HX_LOCAL_STACK_FRAME(_hx_pos_19b319222186141c_174_get_colorKey,"h3d.shader.ColorKey","get_colorKey",0xe041e3e3,"h3d.shader.ColorKey.get_colorKey","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_19b319222186141c_191_set_colorKey,"h3d.shader.ColorKey","set_colorKey",0xf53b0757,"h3d.shader.ColorKey.set_colorKey","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_19b319222186141c_270_updateConstants,"h3d.shader.ColorKey","updateConstants",0x79226628,"h3d.shader.ColorKey.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_539aae8e00f11cfa_5_getParamValue,"h3d.shader.ColorKey","getParamValue",0x73f1ee3c,"h3d.shader.ColorKey.getParamValue","h3d/shader/ColorKey.hx",5,0x81869b4e)
HX_LOCAL_STACK_FRAME(_hx_pos_19b319222186141c_304_getParamFloatValue,"h3d.shader.ColorKey","getParamFloatValue",0xcb9b658a,"h3d.shader.ColorKey.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_539aae8e00f11cfa_5_clone,"h3d.shader.ColorKey","clone",0x9bf623bf,"h3d.shader.ColorKey.clone","h3d/shader/ColorKey.hx",5,0x81869b4e)
HX_LOCAL_STACK_FRAME(_hx_pos_539aae8e00f11cfa_5_boot,"h3d.shader.ColorKey","boot",0xec881610,"h3d.shader.ColorKey.boot","h3d/shader/ColorKey.hx",5,0x81869b4e)
namespace h3d{
namespace shader{

void ColorKey_obj::__construct(::hx::Null< int >  __o_v){
            		int v = __o_v.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_539aae8e00f11cfa_3_new)
HXLINE(  63)		this->colorKey__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  16)		super::__construct();
HXLINE(  17)		{
HXLINE(  17)			 ::h3d::Vector _this = this->colorKey__;
HXDLIN(  17)			_this->x = (( (Float)(((v >> 16) & 255)) ) / ( (Float)(255) ));
HXDLIN(  17)			_this->y = (( (Float)(((v >> 8) & 255)) ) / ( (Float)(255) ));
HXDLIN(  17)			_this->z = (( (Float)((v & 255)) ) / ( (Float)(255) ));
HXDLIN(  17)			_this->w = (( (Float)(::hx::UShr(v,24)) ) / ( (Float)(255) ));
            		}
            	}

Dynamic ColorKey_obj::__CreateEmpty() { return new ColorKey_obj; }

void *ColorKey_obj::_hx_vtable = 0;

Dynamic ColorKey_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorKey_obj > _hx_result = new ColorKey_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ColorKey_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x46292bd6;
	}
}

 ::h3d::Vector ColorKey_obj::get_colorKey(){
            	HX_STACKFRAME(&_hx_pos_19b319222186141c_174_get_colorKey)
HXDLIN( 174)		return this->colorKey__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorKey_obj,get_colorKey,return )

 ::h3d::Vector ColorKey_obj::set_colorKey( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_19b319222186141c_191_set_colorKey)
HXDLIN( 191)		return (this->colorKey__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorKey_obj,set_colorKey,return )

void ColorKey_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_19b319222186141c_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic ColorKey_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_539aae8e00f11cfa_5_getParamValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 287)			return this->colorKey__;
            		}
HXLINE( 288)		return null();
            	}


Float ColorKey_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_19b319222186141c_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader ColorKey_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_539aae8e00f11cfa_5_clone)
HXLINE( 315)		 ::h3d::shader::ColorKey s = ( ( ::h3d::shader::ColorKey)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::ColorKey >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->colorKey__ = this->colorKey__;
HXLINE( 322)		return s;
            	}


::String ColorKey_obj::SRC;

 ::hxsl::SharedShader ColorKey_obj::_SHADER;


::hx::ObjectPtr< ColorKey_obj > ColorKey_obj::__new(::hx::Null< int >  __o_v) {
	::hx::ObjectPtr< ColorKey_obj > __this = new ColorKey_obj();
	__this->__construct(__o_v);
	return __this;
}

::hx::ObjectPtr< ColorKey_obj > ColorKey_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_v) {
	ColorKey_obj *__this = (ColorKey_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorKey_obj), true, "h3d.shader.ColorKey"));
	*(void **)__this = ColorKey_obj::_hx_vtable;
	__this->__construct(__o_v);
	return __this;
}

ColorKey_obj::ColorKey_obj()
{
}

void ColorKey_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorKey);
	HX_MARK_MEMBER_NAME(colorKey__,"colorKey__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorKey_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colorKey__,"colorKey__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ColorKey_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"colorKey") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colorKey() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorKey__") ) { return ::hx::Val( colorKey__ ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_colorKey") ) { return ::hx::Val( get_colorKey_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colorKey") ) { return ::hx::Val( set_colorKey_dyn() ); }
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

bool ColorKey_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val ColorKey_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"colorKey") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_colorKey(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorKey__") ) { colorKey__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorKey_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void ColorKey_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colorKey",fc,8f,e9,89));
	outFields->push(HX_("colorKey__",1c,da,6a,03));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorKey_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(ColorKey_obj,colorKey__),HX_("colorKey__",1c,da,6a,03)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ColorKey_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ColorKey_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &ColorKey_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ColorKey_obj_sMemberFields[] = {
	HX_("colorKey__",1c,da,6a,03),
	HX_("get_colorKey",05,44,03,3f),
	HX_("set_colorKey",79,67,fc,53),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ColorKey_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorKey_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(ColorKey_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorKey_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorKey_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(ColorKey_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class ColorKey_obj::__mClass;

static ::String ColorKey_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void ColorKey_obj::__register()
{
	ColorKey_obj _hx_dummy;
	ColorKey_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.ColorKey",50,1b,2d,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorKey_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorKey_obj::__SetStatic;
	__mClass->mMarkFunc = ColorKey_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorKey_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorKey_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorKey_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorKey_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorKey_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorKey_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorKey_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_539aae8e00f11cfa_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLE2gzZC5zaGFkZXIuQ29sb3JLZXkDAQhjb2xvcktleQUMAgAAAgx0ZXh0dXJlQ29sb3IFDAQAAAMIZnJhZ21lbnQOBgAAAQEDAAAFAggEBWNkaWZmBQwEAAAGAwICBQwCAQUMBQwACwYJCQMdDgICBAUMAgQFDAMBA/Fo44i1+OQ+AwIMAAAAAA",5f,6f,c1,0a);
            	}
}

} // end namespace h3d
} // end namespace shader
