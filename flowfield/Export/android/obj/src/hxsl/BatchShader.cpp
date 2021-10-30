#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxsl_BatchShader
#include <hxsl/BatchShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_240b4943c9fca8a7_3_new,"hxsl.BatchShader","new",0xebc0a00c,"hxsl.BatchShader.new","hxsl/BatchShader.hx",3,0x10dfc4a5)
HX_LOCAL_STACK_FRAME(_hx_pos_404707a40a1d6f68_174_get_Batch_Count,"hxsl.BatchShader","get_Batch_Count",0x28c25c4d,"hxsl.BatchShader.get_Batch_Count","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_404707a40a1d6f68_193_set_Batch_Count,"hxsl.BatchShader","set_Batch_Count",0x248dd959,"hxsl.BatchShader.set_Batch_Count","hxsl/Macros.hx",193,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_404707a40a1d6f68_174_get_Batch_Buffer,"hxsl.BatchShader","get_Batch_Buffer",0x856a33c2,"hxsl.BatchShader.get_Batch_Buffer","hxsl/Macros.hx",174,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_404707a40a1d6f68_191_set_Batch_Buffer,"hxsl.BatchShader","set_Batch_Buffer",0xdbac2136,"hxsl.BatchShader.set_Batch_Buffer","hxsl/Macros.hx",191,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_404707a40a1d6f68_270_updateConstants,"hxsl.BatchShader","updateConstants",0x7431e8f2,"hxsl.BatchShader.updateConstants","hxsl/Macros.hx",270,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_240b4943c9fca8a7_5_getParamValue,"hxsl.BatchShader","getParamValue",0x56fa4a86,"hxsl.BatchShader.getParamValue","hxsl/BatchShader.hx",5,0x10dfc4a5)
HX_LOCAL_STACK_FRAME(_hx_pos_404707a40a1d6f68_304_getParamFloatValue,"hxsl.BatchShader","getParamFloatValue",0x572e3d00,"hxsl.BatchShader.getParamFloatValue","hxsl/Macros.hx",304,0xfafb44f1)
HX_LOCAL_STACK_FRAME(_hx_pos_240b4943c9fca8a7_5_clone,"hxsl.BatchShader","clone",0x84642609,"hxsl.BatchShader.clone","hxsl/BatchShader.hx",5,0x10dfc4a5)
HX_LOCAL_STACK_FRAME(_hx_pos_240b4943c9fca8a7_5_boot,"hxsl.BatchShader","boot",0x54e46b06,"hxsl.BatchShader.boot","hxsl/BatchShader.hx",5,0x10dfc4a5)
namespace hxsl{

void BatchShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_240b4943c9fca8a7_3_new)
HXLINE(  59)		this->Batch_Count__ = 0;
HXLINE(   3)		super::__construct();
            	}

Dynamic BatchShader_obj::__CreateEmpty() { return new BatchShader_obj; }

void *BatchShader_obj::_hx_vtable = 0;

Dynamic BatchShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BatchShader_obj > _hx_result = new BatchShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BatchShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19343d6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19343d6e;
	} else {
		return inClassId==(int)0x7feffd0e;
	}
}

int BatchShader_obj::get_Batch_Count(){
            	HX_STACKFRAME(&_hx_pos_404707a40a1d6f68_174_get_Batch_Count)
HXDLIN( 174)		return this->Batch_Count__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BatchShader_obj,get_Batch_Count,return )

int BatchShader_obj::set_Batch_Count(int _v){
            	HX_STACKFRAME(&_hx_pos_404707a40a1d6f68_193_set_Batch_Count)
HXLINE( 194)		this->constModified = true;
HXLINE( 195)		return (this->Batch_Count__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BatchShader_obj,set_Batch_Count,return )

 ::h3d::Buffer BatchShader_obj::get_Batch_Buffer(){
            	HX_STACKFRAME(&_hx_pos_404707a40a1d6f68_174_get_Batch_Buffer)
HXDLIN( 174)		return this->Batch_Buffer__;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BatchShader_obj,get_Batch_Buffer,return )

 ::h3d::Buffer BatchShader_obj::set_Batch_Buffer( ::h3d::Buffer _v){
            	HX_STACKFRAME(&_hx_pos_404707a40a1d6f68_191_set_Batch_Buffer)
HXDLIN( 191)		return (this->Batch_Buffer__ = _v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BatchShader_obj,set_Batch_Buffer,return )

void BatchShader_obj::updateConstants( ::hxsl::Globals globals){
            	HX_STACKFRAME(&_hx_pos_404707a40a1d6f68_270_updateConstants)
HXLINE( 271)		this->constBits = 0;
HXLINE( 241)		{
HXLINE( 242)			int v = this->Batch_Count__;
HXLINE( 243)			if ((::hx::UShr(v,17) != 0)) {
HXLINE( 243)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Batch_Count",0a,03,a5,87) + HX_(" is out of range ",04,9f,ff,37)) + v) + HX_(">",3e,00,00,00)) + 131071)));
            			}
HXLINE( 244)			 ::hxsl::BatchShader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 244)			_hx_tmp->constBits = (_hx_tmp->constBits | v);
            		}
HXLINE( 273)		this->updateConstantsFinal(globals);
            	}


 ::Dynamic BatchShader_obj::getParamValue(int index){
            	HX_STACKFRAME(&_hx_pos_240b4943c9fca8a7_5_getParamValue)
HXDLIN(   5)		switch((int)(index)){
            			case (int)0: {
HXLINE( 287)				return this->Batch_Count__;
            			}
            			break;
            			case (int)1: {
HXLINE( 287)				return this->Batch_Buffer__;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 288)		return null();
            	}


Float BatchShader_obj::getParamFloatValue(int index){
            	HX_STACKFRAME(&_hx_pos_404707a40a1d6f68_304_getParamFloatValue)
HXDLIN( 304)		return ((Float)0.);
            	}


 ::hxsl::Shader BatchShader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_240b4943c9fca8a7_5_clone)
HXLINE( 315)		 ::hxsl::BatchShader s = ( ( ::hxsl::BatchShader)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::hxsl::BatchShader >())) );
HXLINE( 317)		s->shader = this->shader;
HXLINE( 320)		s->Batch_Count__ = this->Batch_Count__;
HXDLIN( 320)		s->Batch_Buffer__ = this->Batch_Buffer__;
HXLINE( 322)		return s;
            	}


::String BatchShader_obj::SRC;

 ::hxsl::SharedShader BatchShader_obj::_SHADER;


::hx::ObjectPtr< BatchShader_obj > BatchShader_obj::__new() {
	::hx::ObjectPtr< BatchShader_obj > __this = new BatchShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BatchShader_obj > BatchShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BatchShader_obj *__this = (BatchShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BatchShader_obj), true, "hxsl.BatchShader"));
	*(void **)__this = BatchShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BatchShader_obj::BatchShader_obj()
{
}

void BatchShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatchShader);
	HX_MARK_MEMBER_NAME(Batch_Count__,"Batch_Count__");
	HX_MARK_MEMBER_NAME(Batch_Buffer__,"Batch_Buffer__");
	 ::hxsl::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BatchShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Batch_Count__,"Batch_Count__");
	HX_VISIT_MEMBER_NAME(Batch_Buffer__,"Batch_Buffer__");
	 ::hxsl::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BatchShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Batch_Count") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_Batch_Count() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"Batch_Buffer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_Batch_Buffer() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"Batch_Count__") ) { return ::hx::Val( Batch_Count__ ); }
		if (HX_FIELD_EQ(inName,"getParamValue") ) { return ::hx::Val( getParamValue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"Batch_Buffer__") ) { return ::hx::Val( Batch_Buffer__ ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_Batch_Count") ) { return ::hx::Val( get_Batch_Count_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_Batch_Count") ) { return ::hx::Val( set_Batch_Count_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateConstants") ) { return ::hx::Val( updateConstants_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_Batch_Buffer") ) { return ::hx::Val( get_Batch_Buffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_Batch_Buffer") ) { return ::hx::Val( set_Batch_Buffer_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getParamFloatValue") ) { return ::hx::Val( getParamFloatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BatchShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val BatchShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"Batch_Count") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_Batch_Count(inValue.Cast< int >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"Batch_Buffer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_Batch_Buffer(inValue.Cast<  ::h3d::Buffer >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"Batch_Count__") ) { Batch_Count__=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"Batch_Buffer__") ) { Batch_Buffer__=inValue.Cast<  ::h3d::Buffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BatchShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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

void BatchShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("Batch_Count",0a,03,a5,87));
	outFields->push(HX_("Batch_Count__",aa,ac,33,7d));
	outFields->push(HX_("Batch_Buffer",65,72,d9,2c));
	outFields->push(HX_("Batch_Buffer__",c5,e8,e6,2b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BatchShader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BatchShader_obj,Batch_Count__),HX_("Batch_Count__",aa,ac,33,7d)},
	{::hx::fsObject /*  ::h3d::Buffer */ ,(int)offsetof(BatchShader_obj,Batch_Buffer__),HX_("Batch_Buffer__",c5,e8,e6,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BatchShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &BatchShader_obj::SRC,HX_("SRC",c4,42,3f,00)},
	{::hx::fsObject /*  ::hxsl::SharedShader */ ,(void *) &BatchShader_obj::_SHADER,HX_("_SHADER",c4,7c,1a,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BatchShader_obj_sMemberFields[] = {
	HX_("Batch_Count__",aa,ac,33,7d),
	HX_("get_Batch_Count",a1,ba,86,48),
	HX_("set_Batch_Count",ad,37,52,44),
	HX_("Batch_Buffer__",c5,e8,e6,2b),
	HX_("get_Batch_Buffer",ee,5e,78,31),
	HX_("set_Batch_Buffer",62,4c,ba,87),
	HX_("updateConstants",46,47,f6,93),
	HX_("getParamValue",da,ab,64,fe),
	HX_("getParamFloatValue",2c,8b,7e,c3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void BatchShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BatchShader_obj::SRC,"SRC");
	HX_MARK_MEMBER_NAME(BatchShader_obj::_SHADER,"_SHADER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BatchShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BatchShader_obj::SRC,"SRC");
	HX_VISIT_MEMBER_NAME(BatchShader_obj::_SHADER,"_SHADER");
};

#endif

::hx::Class BatchShader_obj::__mClass;

static ::String BatchShader_obj_sStaticFields[] = {
	HX_("SRC",c4,42,3f,00),
	HX_("_SHADER",c4,7c,1a,3e),
	::String(null())
};

void BatchShader_obj::__register()
{
	BatchShader_obj _hx_dummy;
	BatchShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.BatchShader",1a,ea,dc,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BatchShader_obj::__GetStatic;
	__mClass->mSetStaticField = &BatchShader_obj::__SetStatic;
	__mClass->mMarkFunc = BatchShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BatchShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BatchShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BatchShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BatchShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BatchShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BatchShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BatchShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_240b4943c9fca8a7_5_boot)
HXDLIN(   5)		SRC = HX_("HXSLEGh4c2wuQmF0Y2hTaGFkZXICAQtCYXRjaF9Db3VudAECAAEAAAABAAIMQmF0Y2hfQnVmZmVyEAUMAQIAAAA",9a,4c,bf,43);
            	}
}

} // end namespace hxsl
