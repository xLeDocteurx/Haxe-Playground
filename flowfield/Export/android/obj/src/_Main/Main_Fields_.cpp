#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__Main_Main_Fields_
#include <_Main/Main_Fields_.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Hex
#include <hxColorToolkit/spaces/Hex.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_195033e4c87195a0_308_float2color,"_Main.Main_Fields_","float2color",0x7c2bb695,"_Main.Main_Fields_.float2color","Main.hx",308,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_195033e4c87195a0_313_fract,"_Main.Main_Fields_","fract",0xb0bc918e,"_Main.Main_Fields_.fract","Main.hx",313,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_195033e4c87195a0_319_isValidNoiseInput,"_Main.Main_Fields_","isValidNoiseInput",0xfb63936a,"_Main.Main_Fields_.isValidNoiseInput","Main.hx",319,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_195033e4c87195a0_327_interpolateLinear,"_Main.Main_Fields_","interpolateLinear",0x2c552f8e,"_Main.Main_Fields_.interpolateLinear","Main.hx",327,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_195033e4c87195a0_331_interpolateCubic,"_Main.Main_Fields_","interpolateCubic",0xb95867c1,"_Main.Main_Fields_.interpolateCubic","Main.hx",331,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_195033e4c87195a0_335_interpolateCosine,"_Main.Main_Fields_","interpolateCosine",0x0ad790a2,"_Main.Main_Fields_.interpolateCosine","Main.hx",335,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_195033e4c87195a0_342_smoothStep,"_Main.Main_Fields_","smoothStep",0x7d794b92,"_Main.Main_Fields_.smoothStep","Main.hx",342,0x087e5c05)
namespace _Main{

void Main_Fields__obj::__construct() { }

Dynamic Main_Fields__obj::__CreateEmpty() { return new Main_Fields__obj; }

void *Main_Fields__obj::_hx_vtable = 0;

Dynamic Main_Fields__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_Fields__obj > _hx_result = new Main_Fields__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_Fields__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a07ccb8;
}

int Main_Fields__obj::float2color(Float rr,Float rg,Float rb){
            	HX_GC_STACKFRAME(&_hx_pos_195033e4c87195a0_308_float2color)
HXLINE( 309)		 ::hxColorToolkit::spaces::RGB tk =  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,(rr * ( (Float)(255) )),(rg * ( (Float)(255) )),(rb * ( (Float)(255) )));
HXLINE( 310)		return  ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,tk->getColor())->data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Main_Fields__obj,float2color,return )

Float Main_Fields__obj::fract(Float input){
            	HX_STACKFRAME(&_hx_pos_195033e4c87195a0_313_fract)
HXLINE( 314)		int integer = ::Math_obj::floor(input);
HXLINE( 315)		Float decimal = (input - ( (Float)(integer) ));
HXLINE( 316)		return decimal;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_Fields__obj,fract,return )

bool Main_Fields__obj::isValidNoiseInput(Float input){
            	HX_STACKFRAME(&_hx_pos_195033e4c87195a0_319_isValidNoiseInput)
HXLINE( 320)		if (!(::Std_obj::isOfType(input,::hx::ClassOf< int >()))) {
HXLINE( 321)			return false;
            		}
HXLINE( 323)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_Fields__obj,isValidNoiseInput,return )

Float Main_Fields__obj::interpolateLinear(Float a,Float b,Float x){
            	HX_STACKFRAME(&_hx_pos_195033e4c87195a0_327_interpolateLinear)
HXDLIN( 327)		return ((a * (( (Float)(1) ) - x)) + (b * x));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Main_Fields__obj,interpolateLinear,return )

Float Main_Fields__obj::interpolateCubic(Float a,Float b,Float x){
            	HX_STACKFRAME(&_hx_pos_195033e4c87195a0_331_interpolateCubic)
HXDLIN( 331)		Float _hx_tmp = (a * (( (Float)(1) ) - ::_Main::Main_Fields__obj::smoothStep(x)));
HXDLIN( 331)		return (_hx_tmp + (b * ::_Main::Main_Fields__obj::smoothStep(x)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Main_Fields__obj,interpolateCubic,return )

Float Main_Fields__obj::interpolateCosine(Float a,Float b,Float x){
            	HX_STACKFRAME(&_hx_pos_195033e4c87195a0_335_interpolateCosine)
HXLINE( 336)		Float ft = (x * ::Math_obj::PI);
HXLINE( 337)		Float f = ((( (Float)(1) ) - ::Math_obj::cos(ft)) * ((Float)0.5));
HXLINE( 338)		return ((a * (( (Float)(1) ) - f)) + (b * f));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Main_Fields__obj,interpolateCosine,return )

Float Main_Fields__obj::smoothStep(Float f){
            	HX_STACKFRAME(&_hx_pos_195033e4c87195a0_342_smoothStep)
HXDLIN( 342)		return ((f * f) * (((Float)3.0) - (((Float)2.0) * f)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_Fields__obj,smoothStep,return )


Main_Fields__obj::Main_Fields__obj()
{
}

bool Main_Fields__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fract") ) { outValue = fract_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"smoothStep") ) { outValue = smoothStep_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"float2color") ) { outValue = float2color_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"interpolateCubic") ) { outValue = interpolateCubic_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidNoiseInput") ) { outValue = isValidNoiseInput_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"interpolateLinear") ) { outValue = interpolateLinear_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"interpolateCosine") ) { outValue = interpolateCosine_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Main_Fields__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Main_Fields__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Main_Fields__obj::__mClass;

static ::String Main_Fields__obj_sStaticFields[] = {
	HX_("float2color",8d,5e,c1,ba),
	HX_("fract",86,6f,83,06),
	HX_("isValidNoiseInput",62,85,fb,a0),
	HX_("interpolateLinear",86,21,ed,d1),
	HX_("interpolateCubic",c9,dc,66,40),
	HX_("interpolateCosine",9a,82,6f,b0),
	HX_("smoothStep",9a,ca,32,81),
	::String(null())
};

void Main_Fields__obj::__register()
{
	Main_Fields__obj _hx_dummy;
	Main_Fields__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("_Main.Main_Fields_",76,cc,48,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_Fields__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_Fields__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Main_Fields__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_Fields__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_Fields__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace _Main
