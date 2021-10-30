#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_shader_LineShader
#include <h3d/shader/LineShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bbbdfaa2329472f4_3_new,"h3d.shader.LineShader","new",0x12492dff,"h3d.shader.LineShader.new","h3d/shader/LineShader.hx",3,0xe20f9031)
HX_LOCAL_STACK_FRAME(_hx_pos_a1312a7c982b7d0d_174_get_lengthScale,"h3d.shader.LineShader","get_lengthScale",0x098daf7a,"h3d.shader.LineShader.get_lengthScale","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1312a7c982b7d0d_191_set_lengthScale,"h3d.shader.LineShader","set_lengthScale",0x05592c86,"h3d.shader.LineShader.set_lengthScale","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1312a7c982b7d0d_174_get_width,"h3d.shader.LineShader","get_width",0xa5b9f13c,"h3d.shader.LineShader.get_width","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1312a7c982b7d0d_191_set_width,"h3d.shader.LineShader","set_width",0x890add48,"h3d.shader.LineShader.set_width","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1312a7c982b7d0d_270_updateConstants,"h3d.shader.LineShader","updateConstants",0x81911765,"h3d.shader.LineShader.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbbdfaa2329472f4_5_getParamValue,"h3d.shader.LineShader","getParamValue",0xcbb4e639,"h3d.shader.LineShader.getParamValue","h3d/shader/LineShader.hx",5,0xe20f9031)
HX_LOCAL_STACK_FRAME(_hx_pos_bbbdfaa2329472f4_5_getParamFloatValue,"h3d.shader.LineShader","getParamFloatValue",0x6303586d,"h3d.shader.LineShader.getParamFloatValue","h3d/shader/LineShader.hx",5,0xe20f9031)
HX_LOCAL_STACK_FRAME(_hx_pos_bbbdfaa2329472f4_5_clone,"h3d.shader.LineShader","clone",0xc8a256bc,"h3d.shader.LineShader.clone","h3d/shader/LineShader.hx",5,0xe20f9031)
HX_LOCAL_STACK_FRAME(_hx_pos_bbbdfaa2329472f4_5_boot,"h3d.shader.LineShader","boot",0xe5d811b3,"h3d.shader.LineShader.boot","h3d/shader/LineShader.hx",5,0xe20f9031)
namespace h3d{
namespace shader{

void LineShader_obj::__construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_lengthScale){
            		Float width = __o_width.Default(((Float)1.5));
            		Float lengthScale = __o_lengthScale.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_bbbdfaa2329472f4_3_new)
HXLINE(  59)		this->width__ = ((Float)0);
HXDLIN(  59)		this->lengthScale__ = ((Float)0);
HXLINE(  54)		super::__construct();
HXLINE(  55)		this->width__ = width;
HXLINE(  56)		this->lengthScale__ = lengthScale;
            	}

Dynamic LineShader_obj::__CreateEmpty() { return new LineShader_obj; }

void *LineShader_obj::_hx_vtable = 0;

Dynamic LineShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LineShader_obj > _hx_result = new LineShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LineShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x63e24baf;
	}
}

Float LineShader_obj::get_lengthScale(){
            	HX_STACKFRAME(&_hx_pos_a1312a7c982b7d0d_174_get_lengthScale)
HXDLIN( 174)		return this->lengthScale__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LineShader_obj,get_lengthScale,return )

Float LineShader_obj::set_lengthScale(Float _v){
            	HX_STACKFRAME(&_hx_pos_a1312a7c982b7d0d_191_set_lengthScale)
HXDLIN( 191)		return (this->lengthScale__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LineShader_obj,set_lengthScale,return )

Float LineShader_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_a1312a7c982b7d0d_174_get_width)
HXDLIN( 174)		return this->width__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LineShader_obj,get_width,return )

Float LineShader_obj::set_width(Float _v){
            	HX_STACKFRAME(&_hx_pos_a1312a7c982b7d0d_191_set_width)
HXDLIN( 191)		return (this->width__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LineShader_obj,set_width,return )

void LineShader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_a1312a7c982b7d0d_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic LineShader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_bbbdfaa2329472f4_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->lengthScale__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->width__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float LineShader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_bbbdfaa2329472f4_5_getParamFloatValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 303)				return this->lengthScale__;
            			}
            			break;
            			case (int)1: {
HXLINE( 303)				return this->width__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader LineShader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_bbbdfaa2329472f4_5_clone)
HXLINE( 315)		 ::h3d::shader::LineShader s = ( ( ::h3d::shader::LineShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::h3d::shader::LineShader >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->lengthScale__ = this->lengthScale__;
HXDLIN( 320)		s->width__ = this->width__;
HXLINE( 322)		return s;
            	}


::String LineShader_obj::SRC;

 ::hxsl::SharedShader LineShader_obj::_SHADER;


::hx::ObjectPtr< LineShader_obj > LineShader_obj::__new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_lengthScale) {
	::hx::ObjectPtr< LineShader_obj > __this = new LineShader_obj();
	__this->__construct(__o_width,__o_lengthScale);
	return __this;
}

::hx::ObjectPtr< LineShader_obj > LineShader_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_lengthScale) {
	LineShader_obj *__this = (LineShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LineShader_obj), true, "h3d.shader.LineShader"));
	*(void **)__this = LineShader_obj::_hx_vtable;
	__this->__construct(__o_width,__o_lengthScale);
	return __this;
}

LineShader_obj::LineShader_obj()
{
}

::hx::Val LineShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"width__") ) { return ::hx::Val( width__ ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lengthScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lengthScale() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthScale__") ) { return ::hx::Val( lengthScale__ ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_lengthScale") ) { return ::hx::Val( get_lengthScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lengthScale") ) { return ::hx::Val( set_lengthScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LineShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val LineShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"width__") ) { width__=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lengthScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lengthScale(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthScale__") ) { lengthScale__=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LineShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void LineShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lengthScale",c4,27,11,5b));
	outFields->push(HX_("lengthScale__",e4,f3,7d,1f));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("width__",a6,16,01,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LineShader_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(LineShader_obj,lengthScale__),HX_("lengthScale__",e4,f3,7d,1f)},
	{::hx::fsFloat,(int)offsetof(LineShader_obj,width__),HX_("width__",a6,16,01,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LineShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &LineShader_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &LineShader_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LineShader_obj_sMemberFields[] = {
	HX_("lengthScale__",e4,f3,7d,1f),
	HX_("get_lengthScale",5b,df,f2,1b),
	HX_("set_lengthScale",67,5c,be,17),
	HX_("width__",a6,16,01,31),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void LineShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineShader_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(LineShader_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineShader_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(LineShader_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class LineShader_obj::__mClass;

static ::String LineShader_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void LineShader_obj::__register()
{
	LineShader_obj _hx_dummy;
	LineShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.shader.LineShader",8d,c2,84,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineShader_obj::__GetStatic;
	__mClass->mSetStaticField = &LineShader_obj::__SetStatic;
	__mClass->mMarkFunc = LineShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LineShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LineShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LineShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LineShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bbbdfaa2329472f4_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLFWgzZC5zaGFkZXIuTGluZVNoYWRlcgwBBmNhbWVyYQ0BAwIEdmlldwcAAQADBHByb2oHAAEABAh2aWV3UHJvagcAAQAAAAAFBmdsb2JhbA0CAgYJcGl4ZWxTaXplBQoABQAHCW1vZGVsVmlldwcABQEDAAAACAVpbnB1dA0DAwkIcG9zaXRpb24FCwEIAAoGbm9ybWFsBQsBCAALAnV2BQoBCAABAAAMBm91dHB1dA0EAQ0IcG9zaXRpb24FDAQMAAQAAA4RdHJhbnNmb3JtZWROb3JtYWwFCwQAAA8TdHJhbnNmb3JtZWRQb3NpdGlvbgULBAAAEBFwcm9qZWN0ZWRQb3NpdGlvbgUMBAAAEQtsZW5ndGhTY2FsZQMCAAASBXdpZHRoAwIAABMEcGRpcgUMBAAAFAhfX2luaXRfXw4GAAAVBnZlcnRleA4GAAACAhQAAAUBBQUIFgNkaXIFCwQAAAYBAgoFCwkDMg4BAgcHBgULAAYEAhMFDAYBCQMqDgIGAQIWBQsJAzIOAQICBwYFCwEDAAAAAAAA8D8DBQwCAwcFDAUMBoEKAhMFDBEABQoGAgEDAAAAAAAA8D8DCQMNDgEGAAYBCgITBQwAAAMKAhMFDAAAAwMGAQoCEwUMBAADCgITBQwEAAMDAwMDBQoGgAIPBQsGAQYBAhYFCwoCCwUKAAADBQsCEQMFCwULBgQCDgULCQMfDgECFgULBQsFCwAAABUAAAUBBoAKAhAFDBEABQoGAQYBBgEGAQQGAQoCEwUMBQAFCgkDKA4CAQMAAAAAAADwPwMBAwAAAAAAAPC/AwUKBQoFCgQGAwoCCwUKBAADAQMAAAAAAADgPwMDAwUKCgIQBQwIAAMFCgIGBQoFCgISAwUKBQoA",52,98,61,c7);
            	}
}

} // end namespace h3d
} // end namespace shader
