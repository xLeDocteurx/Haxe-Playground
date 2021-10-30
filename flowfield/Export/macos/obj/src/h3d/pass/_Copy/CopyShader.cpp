#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_pass__Copy_CopyShader
#include <h3d/pass/_Copy/CopyShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_888d85c1548ea7f1_71_new,"h3d.pass._Copy.CopyShader","new",0xadc3418e,"h3d.pass._Copy.CopyShader.new","h3d/pass/Copy.hx",71,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_fbf6ba17cda41bdf_174_get_texture,"h3d.pass._Copy.CopyShader","get_texture",0xd0047820,"h3d.pass._Copy.CopyShader.get_texture","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fbf6ba17cda41bdf_191_set_texture,"h3d.pass._Copy.CopyShader","set_texture",0xda717f2c,"h3d.pass._Copy.CopyShader.set_texture","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_fbf6ba17cda41bdf_270_updateConstants,"h3d.pass._Copy.CopyShader","updateConstants",0xabe1c574,"h3d.pass._Copy.CopyShader.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_888d85c1548ea7f1_73_getParamValue,"h3d.pass._Copy.CopyShader","getParamValue",0xc1e2a288,"h3d.pass._Copy.CopyShader.getParamValue","h3d/pass/Copy.hx",73,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_888d85c1548ea7f1_73_getParamFloatValue,"h3d.pass._Copy.CopyShader","getParamFloatValue",0x97bd9dbe,"h3d.pass._Copy.CopyShader.getParamFloatValue","h3d/pass/Copy.hx",73,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_888d85c1548ea7f1_73_clone,"h3d.pass._Copy.CopyShader","clone",0xc573ac0b,"h3d.pass._Copy.CopyShader.clone","h3d/pass/Copy.hx",73,0xc0a6e361)
HX_LOCAL_STACK_FRAME(_hx_pos_888d85c1548ea7f1_73_boot,"h3d.pass._Copy.CopyShader","boot",0x552f1b44,"h3d.pass._Copy.CopyShader.boot","h3d/pass/Copy.hx",73,0xc0a6e361)
namespace h3d{
namespace pass{
namespace _Copy{

void CopyShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_888d85c1548ea7f1_71_new)
HXDLIN(  71)		super::__construct();
            	}

Dynamic CopyShader_obj::__CreateEmpty() { return new CopyShader_obj; }

void *CopyShader_obj::_hx_vtable = 0;

Dynamic CopyShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CopyShader_obj > _hx_result = new CopyShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CopyShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5e767404) {
		if (inClassId<=(int)0x19343d6e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
		} else {
			return inClassId==(int)0x5e767404;
		}
	} else {
		return inClassId==(int)0x738c8e6f;
	}
}

 ::h3d::mat::Texture CopyShader_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_fbf6ba17cda41bdf_174_get_texture)
HXDLIN( 174)		return this->texture__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CopyShader_obj,get_texture,return )

 ::h3d::mat::Texture CopyShader_obj::set_texture( ::h3d::mat::Texture _v){
            	HX_STACKFRAME(&_hx_pos_fbf6ba17cda41bdf_191_set_texture)
HXDLIN( 191)		return (this->texture__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CopyShader_obj,set_texture,return )

void CopyShader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_fbf6ba17cda41bdf_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic CopyShader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_888d85c1548ea7f1_73_getParamValue)
HXDLIN(  73)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->flipY__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->texture__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float CopyShader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_888d85c1548ea7f1_73_getParamFloatValue)
HXDLIN(  73)		if ((index == 0)) {
HXLINE( 303)			return this->flipY__;
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader CopyShader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_888d85c1548ea7f1_73_clone)
HXLINE( 315)		 ::h3d::pass::_Copy::CopyShader s = ( ( ::h3d::pass::_Copy::CopyShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::pass::_Copy::CopyShader >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->flipY__ = this->flipY__;
HXDLIN( 320)		s->texture__ = this->texture__;
HXLINE( 322)		return s;
            	}


::String CopyShader_obj::SRC;

 ::hxsl::SharedShader CopyShader_obj::_SHADER;


::hx::ObjectPtr< CopyShader_obj > CopyShader_obj::__new() {
	::hx::ObjectPtr< CopyShader_obj > __this = new CopyShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CopyShader_obj > CopyShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CopyShader_obj *__this = (CopyShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CopyShader_obj), true, "h3d.pass._Copy.CopyShader"));
	*(void **)__this = CopyShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CopyShader_obj::CopyShader_obj()
{
}

void CopyShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CopyShader);
	HX_MARK_MEMBER_NAME(texture__,"texture__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CopyShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture__,"texture__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CopyShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

bool CopyShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val CopyShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

bool CopyShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void CopyShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("texture__",bb,48,49,af));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CopyShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::mat::Texture */ ,(int)offsetof(CopyShader_obj,texture__),HX_("texture__",bb,48,49,af)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CopyShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CopyShader_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &CopyShader_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CopyShader_obj_sMemberFields[] = {
	HX_("texture__",bb,48,49,af),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void CopyShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CopyShader_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(CopyShader_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CopyShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CopyShader_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(CopyShader_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class CopyShader_obj::__mClass;

static ::String CopyShader_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void CopyShader_obj::__register()
{
	CopyShader_obj _hx_dummy;
	CopyShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass._Copy.CopyShader",9c,22,cc,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CopyShader_obj::__GetStatic;
	__mClass->mSetStaticField = &CopyShader_obj::__SetStatic;
	__mClass->mMarkFunc = CopyShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CopyShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CopyShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CopyShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CopyShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CopyShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CopyShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CopyShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_888d85c1548ea7f1_73_boot)
HXDLIN(  73)		SRC = HX_("HXSLGWgzZC5wYXNzLl9Db3B5LkNvcHlTaGFkZXIJAQVpbnB1dA0BAgIIcG9zaXRpb24FCgEBAAMCdXYFCgEBAAEAAAQFZmxpcFkDAgAABQZvdXRwdXQNAgIGCHBvc2l0aW9uBQwEBQAHBWNvbG9yBQwEBQAEAAAICnBpeGVsQ29sb3IFDAQAAAkMY2FsY3VsYXRlZFVWBQoEAAAKB3RleHR1cmUKAgAACwhfX2luaXRfXw4GAAAMBnZlcnRleA4GAAANCGZyYWdtZW50DgYAAAMCCwAABQIGBAIHBQwCCAUMBQwGBAIJBQoCAwUKBQoAAAwAAAUBBgQCBgUMCQMqDgQKAgIFCgAAAwYBCgICBQoEAAMCBAMDAQMAAAAAAAAAAAMBAwAAAAAAAPA/AwUMBQwAAQ0AAAUBBgQCCAUMCQMhDgICCgoCCQUKBQwFDAA",ec,ef,53,73);
            	}
}

} // end namespace h3d
} // end namespace pass
} // end namespace _Copy
