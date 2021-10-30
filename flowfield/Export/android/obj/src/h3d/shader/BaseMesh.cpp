#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_shader_BaseMesh
#include <h3d/shader/BaseMesh.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_59e92ddeffccf539_3_new,"h3d.shader.BaseMesh","new",0xa2e547e4,"h3d.shader.BaseMesh.new","h3d/shader/BaseMesh.hx",3,0x6c43c1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_845d31fde3e25e57_174_get_color,"h3d.shader.BaseMesh","get_color",0xde9bc03e,"h3d.shader.BaseMesh.get_color","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_845d31fde3e25e57_191_set_color,"h3d.shader.BaseMesh","set_color",0xc1ecac4a,"h3d.shader.BaseMesh.set_color","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_845d31fde3e25e57_174_get_specularPower,"h3d.shader.BaseMesh","get_specularPower",0xf53d241d,"h3d.shader.BaseMesh.get_specularPower","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_845d31fde3e25e57_191_set_specularPower,"h3d.shader.BaseMesh","set_specularPower",0x18aafc29,"h3d.shader.BaseMesh.set_specularPower","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_845d31fde3e25e57_174_get_specularAmount,"h3d.shader.BaseMesh","get_specularAmount",0x74dd4ec0,"h3d.shader.BaseMesh.get_specularAmount","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_845d31fde3e25e57_191_set_specularAmount,"h3d.shader.BaseMesh","set_specularAmount",0x518c8134,"h3d.shader.BaseMesh.set_specularAmount","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_845d31fde3e25e57_174_get_specularColor,"h3d.shader.BaseMesh","get_specularColor",0x78ff497b,"h3d.shader.BaseMesh.get_specularColor","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_845d31fde3e25e57_191_set_specularColor,"h3d.shader.BaseMesh","set_specularColor",0x9c6d2187,"h3d.shader.BaseMesh.set_specularColor","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_845d31fde3e25e57_270_updateConstants,"h3d.shader.BaseMesh","updateConstants",0xbd9ef4ca,"h3d.shader.BaseMesh.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_59e92ddeffccf539_5_getParamValue,"h3d.shader.BaseMesh","getParamValue",0xb6c0305e,"h3d.shader.BaseMesh.getParamValue","h3d/shader/BaseMesh.hx",5,0x6c43c1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_59e92ddeffccf539_5_getParamFloatValue,"h3d.shader.BaseMesh","getParamFloatValue",0xc4002828,"h3d.shader.BaseMesh.getParamFloatValue","h3d/shader/BaseMesh.hx",5,0x6c43c1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_59e92ddeffccf539_5_clone,"h3d.shader.BaseMesh","clone",0xcbe473e1,"h3d.shader.BaseMesh.clone","h3d/shader/BaseMesh.hx",5,0x6c43c1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_59e92ddeffccf539_5_boot,"h3d.shader.BaseMesh","boot",0xddd2a02e,"h3d.shader.BaseMesh.boot","h3d/shader/BaseMesh.hx",5,0x6c43c1ec)
namespace h3d{
namespace shader{

void BaseMesh_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_59e92ddeffccf539_3_new)
HXLINE(  63)		this->specularColor__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  59)		this->specularAmount__ = ((Float)0);
HXDLIN(  59)		this->specularPower__ = ((Float)0);
HXLINE(  63)		this->color__ =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  96)		super::__construct();
HXLINE(  97)		{
HXLINE(  97)			 ::h3d::Vector _this = this->color__;
HXDLIN(  97)			_this->x = ( (Float)(1) );
HXDLIN(  97)			_this->y = ( (Float)(1) );
HXDLIN(  97)			_this->z = ( (Float)(1) );
HXDLIN(  97)			_this->w = ((Float)1.);
            		}
HXLINE(  98)		{
HXLINE(  98)			 ::h3d::Vector _this1 = this->specularColor__;
HXDLIN(  98)			_this1->x = ( (Float)(1) );
HXDLIN(  98)			_this1->y = ( (Float)(1) );
HXDLIN(  98)			_this1->z = ( (Float)(1) );
HXDLIN(  98)			_this1->w = ((Float)1.);
            		}
HXLINE(  99)		this->specularPower__ = ( (Float)(50) );
HXLINE( 100)		this->specularAmount__ = ( (Float)(1) );
            	}

Dynamic BaseMesh_obj::__CreateEmpty() { return new BaseMesh_obj; }

void *BaseMesh_obj::_hx_vtable = 0;

Dynamic BaseMesh_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseMesh_obj > _hx_result = new BaseMesh_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BaseMesh_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x711f4a5c;
	}
}

 ::h3d::Vector BaseMesh_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_845d31fde3e25e57_174_get_color)
HXDLIN( 174)		return this->color__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseMesh_obj,get_color,return )

 ::h3d::Vector BaseMesh_obj::set_color( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_845d31fde3e25e57_191_set_color)
HXDLIN( 191)		return (this->color__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseMesh_obj,set_color,return )

Float BaseMesh_obj::get_specularPower(){
            	HX_STACKFRAME(&_hx_pos_845d31fde3e25e57_174_get_specularPower)
HXDLIN( 174)		return this->specularPower__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseMesh_obj,get_specularPower,return )

Float BaseMesh_obj::set_specularPower(Float _v){
            	HX_STACKFRAME(&_hx_pos_845d31fde3e25e57_191_set_specularPower)
HXDLIN( 191)		return (this->specularPower__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseMesh_obj,set_specularPower,return )

Float BaseMesh_obj::get_specularAmount(){
            	HX_STACKFRAME(&_hx_pos_845d31fde3e25e57_174_get_specularAmount)
HXDLIN( 174)		return this->specularAmount__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseMesh_obj,get_specularAmount,return )

Float BaseMesh_obj::set_specularAmount(Float _v){
            	HX_STACKFRAME(&_hx_pos_845d31fde3e25e57_191_set_specularAmount)
HXDLIN( 191)		return (this->specularAmount__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseMesh_obj,set_specularAmount,return )

 ::h3d::Vector BaseMesh_obj::get_specularColor(){
            	HX_STACKFRAME(&_hx_pos_845d31fde3e25e57_174_get_specularColor)
HXDLIN( 174)		return this->specularColor__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseMesh_obj,get_specularColor,return )

 ::h3d::Vector BaseMesh_obj::set_specularColor( ::h3d::Vector _v){
            	HX_STACKFRAME(&_hx_pos_845d31fde3e25e57_191_set_specularColor)
HXDLIN( 191)		return (this->specularColor__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseMesh_obj,set_specularColor,return )

void BaseMesh_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_845d31fde3e25e57_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic BaseMesh_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_59e92ddeffccf539_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->color__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->specularPower__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->specularAmount__;
            			}
            			break;
            			case (int)3: {
HXLINE( 287)				return this->specularColor__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float BaseMesh_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_59e92ddeffccf539_5_getParamFloatValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)1: {
HXLINE( 303)				return this->specularPower__;
            			}
            			break;
            			case (int)2: {
HXLINE( 303)				return this->specularAmount__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader BaseMesh_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_59e92ddeffccf539_5_clone)
HXLINE( 315)		 ::h3d::shader::BaseMesh s = ( ( ::h3d::shader::BaseMesh)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::BaseMesh >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->color__ = this->color__;
HXDLIN( 320)		s->specularPower__ = this->specularPower__;
HXDLIN( 320)		s->specularAmount__ = this->specularAmount__;
HXDLIN( 320)		s->specularColor__ = this->specularColor__;
HXLINE( 322)		return s;
            	}


::String BaseMesh_obj::SRC;

 ::hxsl::SharedShader BaseMesh_obj::_SHADER;


::hx::ObjectPtr< BaseMesh_obj > BaseMesh_obj::__new() {
	::hx::ObjectPtr< BaseMesh_obj > __this = new BaseMesh_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BaseMesh_obj > BaseMesh_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BaseMesh_obj *__this = (BaseMesh_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseMesh_obj), true, "h3d.shader.BaseMesh"));
	*(void **)__this = BaseMesh_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BaseMesh_obj::BaseMesh_obj()
{
}

void BaseMesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseMesh);
	HX_MARK_MEMBER_NAME(color__,"color__");
	HX_MARK_MEMBER_NAME(specularPower__,"specularPower__");
	HX_MARK_MEMBER_NAME(specularAmount__,"specularAmount__");
	HX_MARK_MEMBER_NAME(specularColor__,"specularColor__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseMesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color__,"color__");
	HX_VISIT_MEMBER_NAME(specularPower__,"specularPower__");
	HX_VISIT_MEMBER_NAME(specularAmount__,"specularAmount__");
	HX_VISIT_MEMBER_NAME(specularColor__,"specularColor__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseMesh_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"specularPower") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularPower() ); }
		if (HX_FIELD_EQ(inName,"specularColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularColor() ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"specularAmount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularAmount() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"specularPower__") ) { return ::hx::Val( specularPower__ ); }
		if (HX_FIELD_EQ(inName,"specularColor__") ) { return ::hx::Val( specularColor__ ); }
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"specularAmount__") ) { return ::hx::Val( specularAmount__ ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_specularPower") ) { return ::hx::Val( get_specularPower_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularPower") ) { return ::hx::Val( set_specularPower_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_specularColor") ) { return ::hx::Val( get_specularColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularColor") ) { return ::hx::Val( set_specularColor_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_specularAmount") ) { return ::hx::Val( get_specularAmount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularAmount") ) { return ::hx::Val( set_specularAmount_dyn() ); }
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BaseMesh_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val BaseMesh_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"color__") ) { color__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"specularPower") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularPower(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"specularColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularColor(inValue.Cast<  ::h3d::Vector >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"specularAmount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularAmount(inValue.Cast< Float >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"specularPower__") ) { specularPower__=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularColor__") ) { specularColor__=inValue.Cast<  ::h3d::Vector >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"specularAmount__") ) { specularAmount__=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BaseMesh_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void BaseMesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("color__",43,23,66,ef));
	outFields->push(HX_("specularPower",42,02,7b,87));
	outFields->push(HX_("specularPower__",e2,e9,f1,9d));
	outFields->push(HX_("specularAmount",fb,d0,c1,d8));
	outFields->push(HX_("specularAmount__",db,98,94,e9));
	outFields->push(HX_("specularColor",a0,27,3d,0b));
	outFields->push(HX_("specularColor__",c0,a2,8e,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseMesh_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(BaseMesh_obj,color__),HX_("color__",43,23,66,ef)},
	{::hx::fsFloat,(int)offsetof(BaseMesh_obj,specularPower__),HX_("specularPower__",e2,e9,f1,9d)},
	{::hx::fsFloat,(int)offsetof(BaseMesh_obj,specularAmount__),HX_("specularAmount__",db,98,94,e9)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(int)offsetof(BaseMesh_obj,specularColor__),HX_("specularColor__",c0,a2,8e,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BaseMesh_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &BaseMesh_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &BaseMesh_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BaseMesh_obj_sMemberFields[] = {
	HX_("color__",43,23,66,ef),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("specularPower__",e2,e9,f1,9d),
	HX_("get_specularPower",99,0d,eb,8d),
	HX_("set_specularPower",a5,e5,58,b1),
	HX_("specularAmount__",db,98,94,e9),
	HX_("get_specularAmount",c4,b1,5b,74),
	HX_("set_specularAmount",38,e4,0a,51),
	HX_("specularColor__",c0,a2,8e,32),
	HX_("get_specularColor",f7,32,ad,11),
	HX_("set_specularColor",03,0b,1b,35),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void BaseMesh_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseMesh_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(BaseMesh_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BaseMesh_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseMesh_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(BaseMesh_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class BaseMesh_obj::__mClass;

static ::String BaseMesh_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void BaseMesh_obj::__register()
{
	BaseMesh_obj _hx_dummy;
	BaseMesh_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.BaseMesh",f2,c5,ea,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BaseMesh_obj::__GetStatic;
	__mClass->mSetStaticField = &BaseMesh_obj::__SetStatic;
	__mClass->mMarkFunc = BaseMesh_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BaseMesh_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseMesh_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseMesh_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BaseMesh_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseMesh_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseMesh_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BaseMesh_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_59e92ddeffccf539_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLE2gzZC5zaGFkZXIuQmFzZU1lc2gXAQZjYW1lcmENAQoCBHZpZXcHAAEAAwRwcm9qBwABAAQIcG9zaXRpb24FCwABAAUIcHJvakZsaXADAAEABghwcm9qRGlhZwULAAEABwh2aWV3UHJvagcAAQAID2ludmVyc2VWaWV3UHJvagcAAQAJBXpOZWFyAwABAAoEekZhcgMAAQALA2RpcgULAwEAAAAADAZnbG9iYWwNAgQNBHRpbWUDAAwADglwaXhlbFNpemUFCgAMAA8JbW9kZWxWaWV3BwAMAQMQEG1vZGVsVmlld0ludmVyc2UHAAwBAwAAABEFaW5wdXQNAwISCHBvc2l0aW9uBQsBEQATBm5vcm1hbAULAREAAQAAFAZvdXRwdXQNBAUVCHBvc2l0aW9uBQwEFAAWBWNvbG9yBQwEFAAXBWRlcHRoAwQUABgGbm9ybWFsBQsEFAAZCXdvcmxkRGlzdAMEFAAEAAAaEHJlbGF0aXZlUG9zaXRpb24FCwQAABsTdHJhbnNmb3JtZWRQb3NpdGlvbgULBAAAHBhwaXhlbFRyYW5zZm9ybWVkUG9zaXRpb24FCwQAAB0RdHJhbnNmb3JtZWROb3JtYWwFCwQAAB4RcHJvamVjdGVkUG9zaXRpb24FDAQAAB8KcGl4ZWxDb2xvcgUMBAAAIAVkZXB0aAMEAAAhCHNjcmVlblVWBQoEAAAiCXNwZWNQb3dlcgMEAAAjCXNwZWNDb2xvcgULBAAAJAl3b3JsZERpc3QDBAAAJQVjb2xvcgUMAgAAJg1zcGVjdWxhclBvd2VyAwIAAQcAAAAAAAAAAAAAAAAAAFlAJw5zcGVjdWxhckFtb3VudAMCAAEHAAAAAAAAAAAAAAAAAAAkQCgNc3BlY3VsYXJDb2xvcgULAgAAKQhfX2luaXRfXw4GAAAqEF9faW5pdF9fZnJhZ21lbnQOBgAAKwZ2ZXJ0ZXgOBgAALAhmcmFnbWVudA4GAAAEAikAAAULBgQCGgULAhIFCwULBgQCGwULBgECGgULCQM0DgECDwcIBQsFCwYEAh4FDAYBCQMqDgICGwULAQMAAAAAAADwPwMFDAIHBwUMBQwGBAIdBQsJAx8OAQQGAQITBQsJAzIOAQIPBwYFCwULBQsFCwYEAgsFCwkDHw4BBAYDAgQFCwIbBQsFCwULBQsFCwYEAh8FDAIlBQwFDAYEAiIDAiYDAwYEAiMFCwYBAigFCwInAwULBQsGBAIhBQoJAzoOAQYCCgIeBQwRAAUKCgIeBQwMAAMFCgUKBQoGBAIgAwYCCgIeBQwIAAMKAh4FDAwAAwMDBgQCJAMGAgkDGw4BBgMCGwULAgQFCwULAwIKAwMDAAIqAAAFBQYEAh0FCwkDHw4BAh0FCwULBQsGBAIhBQoJAzoOAQYCCgIeBQwRAAUKCgIeBQwMAAMFCgUKBQoGBAIgAwYCCgIeBQwIAAMKAh4FDAwAAwMDBgQCIgMCJgMDBgQCIwULBgECKAULAicDBQsFCwAAKwAABQIGBAIVBQwGAQIeBQwJAyoOBAEDAAAAAAAA8D8DAgUDAQMAAAAAAADwPwMBAwAAAAAAAPA/AwUMBQwFDAYEAhwFCwIbBQsFCwABLAAABQQGBAIWBQwCHwUMBQwGBAIXAwIgAwMGBAIYBQsCHQULBQsGBAIZAwIkAwMA",84,32,ef,f3);
            	}
}

} // end namespace h3d
} // end namespace shader
