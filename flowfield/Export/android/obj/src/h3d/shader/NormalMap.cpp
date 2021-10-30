#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_shader_NormalMap
#include <h3d/shader/NormalMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_38a97071f28c888b_43_new,"h3d.shader.NormalMap","new",0x2d666653,"h3d.shader.NormalMap.new","h3d/shader/NormalMap.hx",43,0xd487269d)
HX_LOCAL_STACK_FRAME(_hx_pos_433aa2ba046b7d6a_174_get_texture,"h3d.shader.NormalMap","get_texture",0x713169e5,"h3d.shader.NormalMap.get_texture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_433aa2ba046b7d6a_191_set_texture,"h3d.shader.NormalMap","set_texture",0x7b9e70f1,"h3d.shader.NormalMap.set_texture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_433aa2ba046b7d6a_270_updateConstants,"h3d.shader.NormalMap","updateConstants",0x52cb7db9,"h3d.shader.NormalMap.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_38a97071f28c888b_5_getParamValue,"h3d.shader.NormalMap","getParamValue",0xbd834f8d,"h3d.shader.NormalMap.getParamValue","h3d/shader/NormalMap.hx",5,0xd487269d)
HX_LOCAL_STACK_FRAME(_hx_pos_433aa2ba046b7d6a_304_getParamFloatValue,"h3d.shader.NormalMap","getParamFloatValue",0x35529e99,"h3d.shader.NormalMap.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_38a97071f28c888b_5_clone,"h3d.shader.NormalMap","clone",0xcfbd4c10,"h3d.shader.NormalMap.clone","h3d/shader/NormalMap.hx",5,0xd487269d)
HX_LOCAL_STACK_FRAME(_hx_pos_38a97071f28c888b_5_boot,"h3d.shader.NormalMap","boot",0x844c22df,"h3d.shader.NormalMap.boot","h3d/shader/NormalMap.hx",5,0xd487269d)
namespace h3d{
namespace shader{

void NormalMap_obj::__construct( ::h3d::mat::Texture texture){
            	HX_STACKFRAME(&_hx_pos_38a97071f28c888b_43_new)
HXLINE(  44)		super::__construct();
HXLINE(  45)		this->texture__ = texture;
            	}

Dynamic NormalMap_obj::__CreateEmpty() { return new NormalMap_obj; }

void *NormalMap_obj::_hx_vtable = 0;

Dynamic NormalMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NormalMap_obj > _hx_result = new NormalMap_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NormalMap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x20219937;
	}
}

 ::h3d::mat::Texture NormalMap_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_433aa2ba046b7d6a_174_get_texture)
HXDLIN( 174)		return this->texture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NormalMap_obj,get_texture,return )

 ::h3d::mat::Texture NormalMap_obj::set_texture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_433aa2ba046b7d6a_191_set_texture)
HXDLIN( 191)		return (this->texture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NormalMap_obj,set_texture,return )

void NormalMap_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_433aa2ba046b7d6a_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic NormalMap_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_38a97071f28c888b_5_getParamValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 287)			return this->texture__;
            		}
HXLINE( 288)		return null();
            	}


Float NormalMap_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_433aa2ba046b7d6a_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader NormalMap_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_38a97071f28c888b_5_clone)
HXLINE( 315)		 ::h3d::shader::NormalMap s = ( ( ::h3d::shader::NormalMap)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::NormalMap >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->texture__ = this->texture__;
HXLINE( 322)		return s;
            	}


::String NormalMap_obj::SRC;

 ::hxsl::SharedShader NormalMap_obj::_SHADER;


::hx::ObjectPtr< NormalMap_obj > NormalMap_obj::__new( ::h3d::mat::Texture texture) {
	::hx::ObjectPtr< NormalMap_obj > __this = new NormalMap_obj();
	__this->__construct(texture);
	return __this;
}

::hx::ObjectPtr< NormalMap_obj > NormalMap_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture texture) {
	NormalMap_obj *__this = (NormalMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NormalMap_obj), true, "h3d.shader.NormalMap"));
	*(void **)__this = NormalMap_obj::_hx_vtable;
	__this->__construct(texture);
	return __this;
}

NormalMap_obj::NormalMap_obj()
{
}

void NormalMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NormalMap);
	HX_MARK_MEMBER_NAME(texture__,"texture__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NormalMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture__,"texture__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NormalMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { return ::hx::Val( texture__ ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
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

bool NormalMap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val NormalMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { texture__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NormalMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void NormalMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("texture__",bb,48,49,af));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NormalMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(NormalMap_obj,texture__),HX_("texture__",bb,48,49,af)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NormalMap_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NormalMap_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &NormalMap_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NormalMap_obj_sMemberFields[] = {
	HX_("texture__",bb,48,49,af),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void NormalMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NormalMap_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(NormalMap_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NormalMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NormalMap_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(NormalMap_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class NormalMap_obj::__mClass;

static ::String NormalMap_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void NormalMap_obj::__register()
{
	NormalMap_obj _hx_dummy;
	NormalMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.NormalMap",e1,40,62,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NormalMap_obj::__GetStatic;
	__mClass->mSetStaticField = &NormalMap_obj::__SetStatic;
	__mClass->mMarkFunc = NormalMap_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NormalMap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NormalMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NormalMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NormalMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NormalMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NormalMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NormalMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_38a97071f28c888b_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLFGgzZC5zaGFkZXIuTm9ybWFsTWFwCgEGY2FtZXJhDQECAghwb3NpdGlvbgULAAEAAwNkaXIFCwMBAAAAAAQGZ2xvYmFsDQIBBQltb2RlbFZpZXcHAAQBAwAAAAYFaW5wdXQNAwIHBm5vcm1hbAULAQYACAd0YW5nZW50BQsBBgABAAAJB3RleHR1cmUKAgAACgxjYWxjdWxhdGVkVVYFCgQAAAsTdHJhbnNmb3JtZWRQb3NpdGlvbgULBAAADBF0cmFuc2Zvcm1lZE5vcm1hbAULBAAADRJ0cmFuc2Zvcm1lZFRhbmdlbnQFDAMAAA4OX19pbml0X192ZXJ0ZXgOBgAADwhmcmFnbWVudA4GAAACAg4AAAUBBgQCDQUMCQMqDgIGAQIIBQsJAzIOAQIFBwYFCwsGBwkDHQ4CAggFCwIIBQsDAQMAAAAAAADgPwMCAQMAAAAAAADwPwMBAwAAAAAAAPC/AwMFDAUMAAEPAAAFBQgQAW4FCwQAAAIMBQsACBECbmYFCwQAAAkDOQ4BCQMhDgICCQoCCgUKBQwFCwAIEgR0YW5YBQsEAAAJAx8OAQoCDQUMkgAFCwULAAgTBHRhblkFCwQAAAYBCQMeDgICEAULAhIFCwULBwMKAg0FDAwAAwMFCwAGBAIMBQsJAx8OAQQGAAYABgEKAhEFCwAAAwISBQsFCwYBCgIRBQsEAAMCEwULBQsFCwYBCgIRBQsIAAMCEAULBQsFCwULBQsFCwA",09,33,ea,d1);
            	}
}

} // end namespace h3d
} // end namespace shader
