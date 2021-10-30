#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureArray
#include <h3d/mat/TextureArray.h>
#endif
#ifndef INCLUDED_h3d_pass__Copy_ArrayCopyShader
#include <h3d/pass/_Copy/ArrayCopyShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_20074b7069a9658e_15_new,"h3d.pass._Copy.ArrayCopyShader","new",0x00a61c03,"h3d.pass._Copy.ArrayCopyShader.new","h3d/pass/Copy.hx",15,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_5d08d5c4bc0782f1_174_get_texture,"h3d.pass._Copy.ArrayCopyShader","get_texture",0xd0a64f95,"h3d.pass._Copy.ArrayCopyShader.get_texture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5d08d5c4bc0782f1_191_set_texture,"h3d.pass._Copy.ArrayCopyShader","set_texture",0xdb1356a1,"h3d.pass._Copy.ArrayCopyShader.set_texture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5d08d5c4bc0782f1_174_get_layer,"h3d.pass._Copy.ArrayCopyShader","get_layer",0x0131060b,"h3d.pass._Copy.ArrayCopyShader.get_layer","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5d08d5c4bc0782f1_191_set_layer,"h3d.pass._Copy.ArrayCopyShader","set_layer",0xe481f217,"h3d.pass._Copy.ArrayCopyShader.set_layer","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_5d08d5c4bc0782f1_270_updateConstants,"h3d.pass._Copy.ArrayCopyShader","updateConstants",0x959cfb69,"h3d.pass._Copy.ArrayCopyShader.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_20074b7069a9658e_17_getParamValue,"h3d.pass._Copy.ArrayCopyShader","getParamValue",0x9041013d,"h3d.pass._Copy.ArrayCopyShader.getParamValue","h3d/pass/Copy.hx",17,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_20074b7069a9658e_17_getParamFloatValue,"h3d.pass._Copy.ArrayCopyShader","getParamFloatValue",0xdf22cee9,"h3d.pass._Copy.ArrayCopyShader.getParamFloatValue","h3d/pass/Copy.hx",17,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_20074b7069a9658e_17_clone,"h3d.pass._Copy.ArrayCopyShader","clone",0xba99cdc0,"h3d.pass._Copy.ArrayCopyShader.clone","h3d/pass/Copy.hx",17,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_20074b7069a9658e_17_boot,"h3d.pass._Copy.ArrayCopyShader","boot",0x88cb672f,"h3d.pass._Copy.ArrayCopyShader.boot","h3d/pass/Copy.hx",17,0xc0a6e361)
namespace h3d{
namespace pass{
namespace _Copy{

void ArrayCopyShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_20074b7069a9658e_15_new)
HXLINE(  59)		this->layer__ = 0;
HXLINE(  15)		super::__construct();
            	}

Dynamic ArrayCopyShader_obj::__CreateEmpty() { return new ArrayCopyShader_obj; }

void *ArrayCopyShader_obj::_hx_vtable = 0;

Dynamic ArrayCopyShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayCopyShader_obj > _hx_result = new ArrayCopyShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayCopyShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x738c8e6f) {
		if (inClassId<=(int)0x19343d6e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
		} else {
			return inClassId==(int)0x738c8e6f;
		}
	} else {
		return inClassId==(int)0x7f36f429;
	}
}

 ::h3d::mat::TextureArray ArrayCopyShader_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_5d08d5c4bc0782f1_174_get_texture)
HXDLIN( 174)		return this->texture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCopyShader_obj,get_texture,return )

 ::h3d::mat::TextureArray ArrayCopyShader_obj::set_texture( ::h3d::mat::TextureArray _v){
            	HX_STACKFRAME(&_hx_pos_5d08d5c4bc0782f1_191_set_texture)
HXDLIN( 191)		return (this->texture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCopyShader_obj,set_texture,return )

int ArrayCopyShader_obj::get_layer(){
            	HX_STACKFRAME(&_hx_pos_5d08d5c4bc0782f1_174_get_layer)
HXDLIN( 174)		return this->layer__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCopyShader_obj,get_layer,return )

int ArrayCopyShader_obj::set_layer(int _v){
            	HX_STACKFRAME(&_hx_pos_5d08d5c4bc0782f1_191_set_layer)
HXDLIN( 191)		return (this->layer__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCopyShader_obj,set_layer,return )

void ArrayCopyShader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_5d08d5c4bc0782f1_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic ArrayCopyShader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_20074b7069a9658e_17_getParamValue)
HXDLIN(  17)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->flipY__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->texture__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->layer__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float ArrayCopyShader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_20074b7069a9658e_17_getParamFloatValue)
HXDLIN(  17)		if ((index == 0)) {
HXLINE( 303)			return this->flipY__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader ArrayCopyShader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_20074b7069a9658e_17_clone)
HXLINE( 315)		 ::h3d::pass::_Copy::ArrayCopyShader s = ( ( ::h3d::pass::_Copy::ArrayCopyShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::pass::_Copy::ArrayCopyShader >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->flipY__ = this->flipY__;
HXDLIN( 320)		s->texture__ = this->texture__;
HXDLIN( 320)		s->layer__ = this->layer__;
HXLINE( 322)		return s;
            	}


::String ArrayCopyShader_obj::SRC;

 ::hxsl::SharedShader ArrayCopyShader_obj::_SHADER;


::hx::ObjectPtr< ArrayCopyShader_obj > ArrayCopyShader_obj::__new() {
	::hx::ObjectPtr< ArrayCopyShader_obj > __this = new ArrayCopyShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ArrayCopyShader_obj > ArrayCopyShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ArrayCopyShader_obj *__this = (ArrayCopyShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayCopyShader_obj), true, "h3d.pass._Copy.ArrayCopyShader"));
	*(void **)__this = ArrayCopyShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ArrayCopyShader_obj::ArrayCopyShader_obj()
{
}

void ArrayCopyShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayCopyShader);
	HX_MARK_MEMBER_NAME(texture__,"texture__");
	HX_MARK_MEMBER_NAME(layer__,"layer__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArrayCopyShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture__,"texture__");
	HX_VISIT_MEMBER_NAME(layer__,"layer__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ArrayCopyShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layer() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		if (HX_FIELD_EQ(inName,"layer__") ) { return ::hx::Val( layer__ ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { return ::hx::Val( texture__ ); }
		if (HX_FIELD_EQ(inName,"get_layer") ) { return ::hx::Val( get_layer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return ::hx::Val( set_layer_dyn() ); }
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

bool ArrayCopyShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val ArrayCopyShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layer(inValue.Cast< int >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::h3d::mat::TextureArray >()) ); }
		if (HX_FIELD_EQ(inName,"layer__") ) { layer__=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { texture__=inValue.Cast<  ::h3d::mat::TextureArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ArrayCopyShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void ArrayCopyShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("texture__",bb,48,49,af));
	outFields->push(HX_("layer",d1,81,c0,6f));
	outFields->push(HX_("layer__",31,ab,41,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayCopyShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::TextureArray */ ,(int)offsetof(ArrayCopyShader_obj,texture__),HX_("texture__",bb,48,49,af)},
	{::hx::fsInt,(int)offsetof(ArrayCopyShader_obj,layer__),HX_("layer__",31,ab,41,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ArrayCopyShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ArrayCopyShader_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &ArrayCopyShader_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ArrayCopyShader_obj_sMemberFields[] = {
	HX_("texture__",bb,48,49,af),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("layer__",31,ab,41,42),
	HX_("get_layer",28,de,69,b3),
	HX_("set_layer",34,ca,ba,96),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ArrayCopyShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayCopyShader_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(ArrayCopyShader_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayCopyShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayCopyShader_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(ArrayCopyShader_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class ArrayCopyShader_obj::__mClass;

static ::String ArrayCopyShader_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void ArrayCopyShader_obj::__register()
{
	ArrayCopyShader_obj _hx_dummy;
	ArrayCopyShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass._Copy.ArrayCopyShader",91,5e,c9,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayCopyShader_obj::__GetStatic;
	__mClass->mSetStaticField = &ArrayCopyShader_obj::__SetStatic;
	__mClass->mMarkFunc = ArrayCopyShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayCopyShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayCopyShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayCopyShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayCopyShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayCopyShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayCopyShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ArrayCopyShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_20074b7069a9658e_17_boot)
HXDLIN(  17)		SRC = HX_("HXSLHmgzZC5wYXNzLl9Db3B5LkFycmF5Q29weVNoYWRlcgoBBWlucHV0DQECAghwb3NpdGlvbgUKAQEAAwJ1dgUKAQEAAQAABAVmbGlwWQMCAAAFBm91dHB1dA0CAgYIcG9zaXRpb24FDAQFAAcFY29sb3IFDAQFAAQAAAgKcGl4ZWxDb2xvcgUMBAAACQxjYWxjdWxhdGVkVVYFCgQAAAoHdGV4dHVyZQsCAAALBWxheWVyAQIAAAwIX19pbml0X18OBgAADQZ2ZXJ0ZXgOBgAADghmcmFnbWVudA4GAAADAgwAAAUCBgQCBwUMAggFDAUMBgQCCQUKAgMFCgUKAAANAAAFAQYEAgYFDAkDKg4ECgICBQoAAAMGAQoCAgUKBAADAgQDAwEDAAAAAAAAAAADAQMAAAAAAADwPwMFDAUMAAEOAAAFAQYEAggFDAkDIQ4CAgoLCQMpDgICCQUKCQMmDgECCwEDBQsFDAUMAA",07,08,4f,d1);
            	}
}

} // end namespace h3d
} // end namespace pass
} // end namespace _Copy
