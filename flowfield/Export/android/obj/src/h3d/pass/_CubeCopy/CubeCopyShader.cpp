#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_pass__CubeCopy_CubeCopyShader
#include <h3d/pass/_CubeCopy/CubeCopyShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c90a48a232ab82f0_3_new,"h3d.pass._CubeCopy.CubeCopyShader","new",0x9f7bc06e,"h3d.pass._CubeCopy.CubeCopyShader.new","h3d/pass/CubeCopy.hx",3,0x467882ec)
HX_LOCAL_STACK_FRAME(_hx_pos_a4844a285e336fe2_174_get_texture,"h3d.pass._CubeCopy.CubeCopyShader","get_texture",0x9ea6d700,"h3d.pass._CubeCopy.CubeCopyShader.get_texture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_a4844a285e336fe2_191_set_texture,"h3d.pass._CubeCopy.CubeCopyShader","set_texture",0xa913de0c,"h3d.pass._CubeCopy.CubeCopyShader.set_texture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_a4844a285e336fe2_174_get_mat,"h3d.pass._CubeCopy.CubeCopyShader","get_mat",0x2043e245,"h3d.pass._CubeCopy.CubeCopyShader.get_mat","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_a4844a285e336fe2_191_set_mat,"h3d.pass._CubeCopy.CubeCopyShader","set_mat",0x13457351,"h3d.pass._CubeCopy.CubeCopyShader.set_mat","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_a4844a285e336fe2_270_updateConstants,"h3d.pass._CubeCopy.CubeCopyShader","updateConstants",0x17cd1454,"h3d.pass._CubeCopy.CubeCopyShader.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_c90a48a232ab82f0_5_getParamValue,"h3d.pass._CubeCopy.CubeCopyShader","getParamValue",0x45027968,"h3d.pass._CubeCopy.CubeCopyShader.getParamValue","h3d/pass/CubeCopy.hx",5,0x467882ec)
HX_LOCAL_STACK_FRAME(_hx_pos_c90a48a232ab82f0_5_getParamFloatValue,"h3d.pass._CubeCopy.CubeCopyShader","getParamFloatValue",0x5366dade,"h3d.pass._CubeCopy.CubeCopyShader.getParamFloatValue","h3d/pass/CubeCopy.hx",5,0x467882ec)
HX_LOCAL_STACK_FRAME(_hx_pos_c90a48a232ab82f0_5_clone,"h3d.pass._CubeCopy.CubeCopyShader","clone",0xf571a2eb,"h3d.pass._CubeCopy.CubeCopyShader.clone","h3d/pass/CubeCopy.hx",5,0x467882ec)
HX_LOCAL_STACK_FRAME(_hx_pos_c90a48a232ab82f0_5_boot,"h3d.pass._CubeCopy.CubeCopyShader","boot",0xe4e5a064,"h3d.pass._CubeCopy.CubeCopyShader.boot","h3d/pass/CubeCopy.hx",5,0x467882ec)
namespace h3d{
namespace pass{
namespace _CubeCopy{

void CubeCopyShader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c90a48a232ab82f0_3_new)
HXLINE(  74)		this->mat__ =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(   3)		super::__construct();
            	}

Dynamic CubeCopyShader_obj::__CreateEmpty() { return new CubeCopyShader_obj; }

void *CubeCopyShader_obj::_hx_vtable = 0;

Dynamic CubeCopyShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubeCopyShader_obj > _hx_result = new CubeCopyShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CubeCopyShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x46d9066e) {
		if (inClassId<=(int)0x19343d6e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
		} else {
			return inClassId==(int)0x46d9066e;
		}
	} else {
		return inClassId==(int)0x738c8e6f;
	}
}

 ::h3d::mat::Texture CubeCopyShader_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_a4844a285e336fe2_174_get_texture)
HXDLIN( 174)		return this->texture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeCopyShader_obj,get_texture,return )

 ::h3d::mat::Texture CubeCopyShader_obj::set_texture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_a4844a285e336fe2_191_set_texture)
HXDLIN( 191)		return (this->texture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeCopyShader_obj,set_texture,return )

 ::h3d::Matrix CubeCopyShader_obj::get_mat(){
            	HX_STACKFRAME(&_hx_pos_a4844a285e336fe2_174_get_mat)
HXDLIN( 174)		return this->mat__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeCopyShader_obj,get_mat,return )

 ::h3d::Matrix CubeCopyShader_obj::set_mat( ::h3d::Matrix _v){
            	HX_STACKFRAME(&_hx_pos_a4844a285e336fe2_191_set_mat)
HXDLIN( 191)		return (this->mat__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeCopyShader_obj,set_mat,return )

void CubeCopyShader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_a4844a285e336fe2_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic CubeCopyShader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_c90a48a232ab82f0_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->flipY__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->texture__;
            			}
            			break;
            			case (int)2: {
HXLINE( 287)				return this->mat__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float CubeCopyShader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_c90a48a232ab82f0_5_getParamFloatValue)
HXDLIN(   5)		if ((index == 0)) {
HXLINE( 303)			return this->flipY__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader CubeCopyShader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_c90a48a232ab82f0_5_clone)
HXLINE( 315)		 ::h3d::pass::_CubeCopy::CubeCopyShader s = ( ( ::h3d::pass::_CubeCopy::CubeCopyShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::pass::_CubeCopy::CubeCopyShader >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->flipY__ = this->flipY__;
HXDLIN( 320)		s->texture__ = this->texture__;
HXDLIN( 320)		s->mat__ = this->mat__;
HXLINE( 322)		return s;
            	}


::String CubeCopyShader_obj::SRC;

 ::hxsl::SharedShader CubeCopyShader_obj::_SHADER;


::hx::ObjectPtr< CubeCopyShader_obj > CubeCopyShader_obj::__new() {
	::hx::ObjectPtr< CubeCopyShader_obj > __this = new CubeCopyShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CubeCopyShader_obj > CubeCopyShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CubeCopyShader_obj *__this = (CubeCopyShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubeCopyShader_obj), true, "h3d.pass._CubeCopy.CubeCopyShader"));
	*(void **)__this = CubeCopyShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CubeCopyShader_obj::CubeCopyShader_obj()
{
}

void CubeCopyShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeCopyShader);
	HX_MARK_MEMBER_NAME(texture__,"texture__");
	HX_MARK_MEMBER_NAME(mat__,"mat__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeCopyShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture__,"texture__");
	HX_VISIT_MEMBER_NAME(mat__,"mat__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CubeCopyShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mat() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mat__") ) { return ::hx::Val( mat__ ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		if (HX_FIELD_EQ(inName,"get_mat") ) { return ::hx::Val( get_mat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mat") ) { return ::hx::Val( set_mat_dyn() ); }
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

bool CubeCopyShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val CubeCopyShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mat(inValue.Cast<  ::h3d::Matrix >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mat__") ) { mat__=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::h3d::mat::Texture >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"texture__") ) { texture__=inValue.Cast<  ::h3d::mat::Texture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CubeCopyShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void CubeCopyShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("texture__",bb,48,49,af));
	outFields->push(HX_("mat",a0,0a,53,00));
	outFields->push(HX_("mat__",c0,45,23,03));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CubeCopyShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(CubeCopyShader_obj,texture__),HX_("texture__",bb,48,49,af)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(CubeCopyShader_obj,mat__),HX_("mat__",c0,45,23,03)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CubeCopyShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CubeCopyShader_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &CubeCopyShader_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CubeCopyShader_obj_sMemberFields[] = {
	HX_("texture__",bb,48,49,af),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("mat__",c0,45,23,03),
	HX_("get_mat",37,d3,c7,26),
	HX_("set_mat",43,64,c9,19),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void CubeCopyShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeCopyShader_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(CubeCopyShader_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CubeCopyShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeCopyShader_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(CubeCopyShader_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class CubeCopyShader_obj::__mClass;

static ::String CubeCopyShader_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void CubeCopyShader_obj::__register()
{
	CubeCopyShader_obj _hx_dummy;
	CubeCopyShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass._CubeCopy.CubeCopyShader",7c,b1,e3,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CubeCopyShader_obj::__GetStatic;
	__mClass->mSetStaticField = &CubeCopyShader_obj::__SetStatic;
	__mClass->mMarkFunc = CubeCopyShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CubeCopyShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubeCopyShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubeCopyShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CubeCopyShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeCopyShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeCopyShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CubeCopyShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c90a48a232ab82f0_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLIWgzZC5wYXNzLl9DdWJlQ29weS5DdWJlQ29weVNoYWRlcgoBBWlucHV0DQECAghwb3NpdGlvbgUKAQEAAwJ1dgUKAQEAAQAABAVmbGlwWQMCAAAFBm91dHB1dA0CAgYIcG9zaXRpb24FDAQFAAcFY29sb3IFDAQFAAQAAAgKcGl4ZWxDb2xvcgUMBAAACQxjYWxjdWxhdGVkVVYFCgQAAAoHdGV4dHVyZQwCAAALA21hdAYCAAAMCF9faW5pdF9fDgYAAA0GdmVydGV4DgYAAA4IZnJhZ21lbnQOBgAAAwIMAAAFAgYEAgcFDAIIBQwFDAYEAgkFCgIDBQoFCgAADQAABQEGBAIGBQwJAyoOBAoCAgUKAAADBgEKAgIFCgQAAwIEAwMBAwAAAAAAAAAAAwEDAAAAAAAA8D8DBQwFDAABDgAABQIIDwJ1dgUKBAAABgMGAQIJBQoBAwAAAAAAAABAAwUKAQMAAAAAAADwPwMFCgAGBAIIBQwJAyEOAgIKDAkDHw4BBgEJAykOAgIPBQoBAwAAAAAAAPA/AwULAgsGBQsFCwUMBQwA",b6,21,48,28);
            	}
}

} // end namespace h3d
} // end namespace pass
} // end namespace _CubeCopy
