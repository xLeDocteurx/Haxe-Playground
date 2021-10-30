#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_mat_Defaults
#include <h3d/mat/Defaults.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_Texture
#include <h3d/shader/Texture.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_72e8490f6cf38fa0_3_new,"h3d.shader.Texture","new",0x2b2cb479,"h3d.shader.Texture.new","h3d/shader/Texture.hx",3,0x47af9737)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_174_get_additive,"h3d.shader.Texture","get_additive",0x318977dc,"h3d.shader.Texture.get_additive","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_193_set_additive,"h3d.shader.Texture","set_additive",0x46829b50,"h3d.shader.Texture.set_additive","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_174_get_killAlpha,"h3d.shader.Texture","get_killAlpha",0xa66f0c10,"h3d.shader.Texture.get_killAlpha","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_193_set_killAlpha,"h3d.shader.Texture","set_killAlpha",0xeb74ee1c,"h3d.shader.Texture.set_killAlpha","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_174_get_specularAlpha,"h3d.shader.Texture","get_specularAlpha",0x0499e6cb,"h3d.shader.Texture.get_specularAlpha","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_193_set_specularAlpha,"h3d.shader.Texture","set_specularAlpha",0x2807bed7,"h3d.shader.Texture.set_specularAlpha","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_174_get_killAlphaThreshold,"h3d.shader.Texture","get_killAlphaThreshold",0xec6d957b,"h3d.shader.Texture.get_killAlphaThreshold","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_191_set_killAlphaThreshold,"h3d.shader.Texture","set_killAlphaThreshold",0x201911ef,"h3d.shader.Texture.set_killAlphaThreshold","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_174_get_texture,"h3d.shader.Texture","get_texture",0x82cb4e0b,"h3d.shader.Texture.get_texture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_191_set_texture,"h3d.shader.Texture","set_texture",0x8d385517,"h3d.shader.Texture.set_texture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5a69846bfac4a87f_270_updateConstants,"h3d.shader.Texture","updateConstants",0xe2616cdf,"h3d.shader.Texture.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_72e8490f6cf38fa0_5_getParamValue,"h3d.shader.Texture","getParamValue",0xd47b0933,"h3d.shader.Texture.getParamValue","h3d/shader/Texture.hx",5,0x47af9737)
HX_LOCAL_STACK_FRAME(_hx_pos_72e8490f6cf38fa0_5_getParamFloatValue,"h3d.shader.Texture","getParamFloatValue",0xe3fa2b33,"h3d.shader.Texture.getParamFloatValue","h3d/shader/Texture.hx",5,0x47af9737)
HX_LOCAL_STACK_FRAME(_hx_pos_72e8490f6cf38fa0_5_clone,"h3d.shader.Texture","clone",0x864fefb6,"h3d.shader.Texture.clone","h3d/shader/Texture.hx",5,0x47af9737)
HX_LOCAL_STACK_FRAME(_hx_pos_72e8490f6cf38fa0_5_boot,"h3d.shader.Texture","boot",0x940a35f9,"h3d.shader.Texture.boot","h3d/shader/Texture.hx",5,0x47af9737)
namespace h3d{
namespace shader{

void Texture_obj::__construct( ::h3d::mat::Texture tex){
            	HX_STACKFRAME(&_hx_pos_72e8490f6cf38fa0_3_new)
HXLINE(  59)		this->killAlphaThreshold__ = ((Float)0);
HXLINE(  38)		super::__construct();
HXLINE(  39)		this->texture__ = tex;
HXLINE(  40)		this->killAlphaThreshold__ = ::h3d::mat::Defaults_obj::defaultKillAlphaThreshold;
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

void *Texture_obj::_hx_vtable = 0;

Dynamic Texture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Texture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x15a47add) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x15a47add;
	} else {
		return inClassId==(int)0x19343d6e;
	}
}

bool Texture_obj::get_additive(){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_174_get_additive)
HXDLIN( 174)		return this->additive__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_additive,return )

bool Texture_obj::set_additive(bool _v){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_193_set_additive)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->additive__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_additive,return )

bool Texture_obj::get_killAlpha(){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_174_get_killAlpha)
HXDLIN( 174)		return this->killAlpha__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_killAlpha,return )

bool Texture_obj::set_killAlpha(bool _v){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_193_set_killAlpha)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->killAlpha__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_killAlpha,return )

bool Texture_obj::get_specularAlpha(){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_174_get_specularAlpha)
HXDLIN( 174)		return this->specularAlpha__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_specularAlpha,return )

bool Texture_obj::set_specularAlpha(bool _v){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_193_set_specularAlpha)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->specularAlpha__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_specularAlpha,return )

Float Texture_obj::get_killAlphaThreshold(){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_174_get_killAlphaThreshold)
HXDLIN( 174)		return this->killAlphaThreshold__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_killAlphaThreshold,return )

Float Texture_obj::set_killAlphaThreshold(Float _v){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_191_set_killAlphaThreshold)
HXDLIN( 191)		return (this->killAlphaThreshold__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_killAlphaThreshold,return )

 ::h3d::mat::Texture Texture_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_174_get_texture)
HXDLIN( 174)		return this->texture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,get_texture,return )

 ::h3d::mat::Texture Texture_obj::set_texture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_191_set_texture)
HXDLIN( 191)		return (this->texture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,set_texture,return )

void Texture_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_5a69846bfac4a87f_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 272)		{
HXLINE( 247)			if (this->additive__) {
HXLINE( 247)				 ::h3d::shader::Texture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 1);
            			}
HXDLIN( 247)			if (this->killAlpha__) {
HXLINE( 247)				 ::h3d::shader::Texture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 2);
            			}
HXDLIN( 247)			if (this->specularAlpha__) {
HXLINE( 247)				 ::h3d::shader::Texture _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->constBits = (_hx_tmp->constBits | 4);
            			}
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic Texture_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_72e8490f6cf38fa0_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->additive__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->killAlpha__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->specularAlpha__;
            			}
            			break;
            			case (int)3: {
HXLINE( 287)				return this->killAlphaThreshold__;
            			}
            			break;
            			case (int)4: {
HXLINE( 287)				return this->texture__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float Texture_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_72e8490f6cf38fa0_5_getParamFloatValue)
HXDLIN(   5)		if ((index == 3)) {
HXLINE( 303)			return this->killAlphaThreshold__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader Texture_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_72e8490f6cf38fa0_5_clone)
HXLINE( 315)		 ::h3d::shader::Texture s = ( ( ::h3d::shader::Texture)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::Texture >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->additive__ = this->additive__;
HXDLIN( 320)		s->killAlpha__ = this->killAlpha__;
HXDLIN( 320)		s->specularAlpha__ = this->specularAlpha__;
HXDLIN( 320)		s->killAlphaThreshold__ = this->killAlphaThreshold__;
HXDLIN( 320)		s->texture__ = this->texture__;
HXLINE( 322)		return s;
            	}


::String Texture_obj::SRC;

 ::hxsl::SharedShader Texture_obj::_SHADER;


::hx::ObjectPtr< Texture_obj > Texture_obj::__new( ::h3d::mat::Texture tex) {
	::hx::ObjectPtr< Texture_obj > __this = new Texture_obj();
	__this->__construct(tex);
	return __this;
}

::hx::ObjectPtr< Texture_obj > Texture_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture tex) {
	Texture_obj *__this = (Texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Texture_obj), true, "h3d.shader.Texture"));
	*(void **)__this = Texture_obj::_hx_vtable;
	__this->__construct(tex);
	return __this;
}

Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(additive__,"additive__");
	HX_MARK_MEMBER_NAME(killAlpha__,"killAlpha__");
	HX_MARK_MEMBER_NAME(specularAlpha__,"specularAlpha__");
	HX_MARK_MEMBER_NAME(killAlphaThreshold__,"killAlphaThreshold__");
	HX_MARK_MEMBER_NAME(texture__,"texture__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(additive__,"additive__");
	HX_VISIT_MEMBER_NAME(killAlpha__,"killAlpha__");
	HX_VISIT_MEMBER_NAME(specularAlpha__,"specularAlpha__");
	HX_VISIT_MEMBER_NAME(killAlphaThreshold__,"killAlphaThreshold__");
	HX_VISIT_MEMBER_NAME(texture__,"texture__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Texture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"additive") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_additive() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"killAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_killAlpha() ); }
		if (HX_FIELD_EQ(inName,"texture__") ) { return ::hx::Val( texture__ ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"additive__") ) { return ::hx::Val( additive__ ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killAlpha__") ) { return ::hx::Val( killAlpha__ ); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_additive") ) { return ::hx::Val( get_additive_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_additive") ) { return ::hx::Val( set_additive_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_killAlpha") ) { return ::hx::Val( get_killAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_killAlpha") ) { return ::hx::Val( set_killAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"specularAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularAlpha() ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"specularAlpha__") ) { return ::hx::Val( specularAlpha__ ); }
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_specularAlpha") ) { return ::hx::Val( get_specularAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularAlpha") ) { return ::hx::Val( set_specularAlpha_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"killAlphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_killAlphaThreshold() ); }
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"killAlphaThreshold__") ) { return ::hx::Val( killAlphaThreshold__ ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_killAlphaThreshold") ) { return ::hx::Val( get_killAlphaThreshold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_killAlphaThreshold") ) { return ::hx::Val( set_killAlphaThreshold_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val Texture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"additive") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_additive(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"killAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_killAlpha(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"texture__") ) { texture__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"additive__") ) { additive__=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killAlpha__") ) { killAlpha__=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"specularAlpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularAlpha(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"specularAlpha__") ) { specularAlpha__=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"killAlphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_killAlphaThreshold(inValue.Cast< Float >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"killAlphaThreshold__") ) { killAlphaThreshold__=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("additive",0c,73,3f,a8));
	outFields->push(HX_("additive__",2c,a1,4b,cd));
	outFields->push(HX_("killAlpha",e0,da,f4,0e));
	outFields->push(HX_("killAlpha__",00,a6,09,5a));
	outFields->push(HX_("specularAlpha",9b,5d,77,e2));
	outFields->push(HX_("specularAlpha__",7b,8d,3e,f5));
	outFields->push(HX_("killAlphaThreshold",ab,6c,3f,f4));
	outFields->push(HX_("killAlphaThreshold__",8b,80,74,14));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("texture__",bb,48,49,af));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Texture_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Texture_obj,additive__),HX_("additive__",2c,a1,4b,cd)},
	{::hx::fsBool,(int)offsetof(Texture_obj,killAlpha__),HX_("killAlpha__",00,a6,09,5a)},
	{::hx::fsBool,(int)offsetof(Texture_obj,specularAlpha__),HX_("specularAlpha__",7b,8d,3e,f5)},
	{::hx::fsFloat,(int)offsetof(Texture_obj,killAlphaThreshold__),HX_("killAlphaThreshold__",8b,80,74,14)},
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(Texture_obj,texture__),HX_("texture__",bb,48,49,af)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Texture_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Texture_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &Texture_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_("additive__",2c,a1,4b,cd),
	HX_("get_additive",15,27,59,5d),
	HX_("set_additive",89,4a,52,72),
	HX_("killAlpha__",00,a6,09,5a),
	HX_("get_killAlpha",b7,ae,58,d0),
	HX_("set_killAlpha",c3,90,5e,15),
	HX_("specularAlpha__",7b,8d,3e,f5),
	HX_("get_specularAlpha",f2,68,e7,e8),
	HX_("set_specularAlpha",fe,40,55,0c),
	HX_("killAlphaThreshold__",8b,80,74,14),
	HX_("get_killAlphaThreshold",f4,e5,d3,4d),
	HX_("set_killAlphaThreshold",68,62,7f,81),
	HX_("texture__",bb,48,49,af),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void Texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(Texture_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(Texture_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class Texture_obj::__mClass;

static ::String Texture_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void Texture_obj::__register()
{
	Texture_obj _hx_dummy;
	Texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.Texture",07,04,d1,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = Texture_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Texture_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_72e8490f6cf38fa0_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLEmgzZC5zaGFkZXIuVGV4dHVyZQsBBWlucHV0DQEBAgJ1dgUKAQEAAQAAAwhhZGRpdGl2ZQICAAEAAAAAAAQJa2lsbEFscGhhAgIAAQAAAAAABQ1zcGVjdWxhckFscGhhAgIAAQAAAAAABhJraWxsQWxwaGFUaHJlc2hvbGQDAgABBwAAAAAAAAAAAAAAAAAA8D8HB3RleHR1cmUKAgAACAxjYWxjdWxhdGVkVVYFCgQAAAkKcGl4ZWxDb2xvcgUMBAAACglzcGVjQ29sb3IFCwQAAAsGdmVydGV4DgYAAAwIZnJhZ21lbnQOBgAAAgALAAAFAQYEAggFCgICBQoFCgABDAAABQQIDQFjBQwEAAAJAyEOAgIHCgIIBQoFDAALBg4CBAIGCQYDCgINBQwMAAMCBgMDAQMAAAAAAAAAAAMCAgwAAAALAgMCBoACCQUMAg0FDAUMBoECCQUMAg0FDAUMAAsCBQIGgQIKBQsKAg0FDP4ABQsFCwAAAA",67,48,a4,ab);
            	}
}

} // end namespace h3d
} // end namespace shader
