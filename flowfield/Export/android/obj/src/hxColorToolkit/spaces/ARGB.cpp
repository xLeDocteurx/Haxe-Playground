#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_ARGB
#include <hxColorToolkit/spaces/ARGB.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f98c5ba84ced651b_115_new,"hxColorToolkit.spaces.ARGB","new",0xe5cf7e3c,"hxColorToolkit.spaces.ARGB.new","hxColorToolkit/spaces/ARGB.hx",115,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_38_get_alpha,"hxColorToolkit.spaces.ARGB","get_alpha",0xd6ad7e91,"hxColorToolkit.spaces.ARGB.get_alpha","hxColorToolkit/spaces/ARGB.hx",38,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_42_set_alpha,"hxColorToolkit.spaces.ARGB","set_alpha",0xb9fe6a9d,"hxColorToolkit.spaces.ARGB.set_alpha","hxColorToolkit/spaces/ARGB.hx",42,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_46_get_red,"hxColorToolkit.spaces.ARGB","get_red",0xe4496dc4,"hxColorToolkit.spaces.ARGB.get_red","hxColorToolkit/spaces/ARGB.hx",46,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_50_set_red,"hxColorToolkit.spaces.ARGB","set_red",0xd74afed0,"hxColorToolkit.spaces.ARGB.set_red","hxColorToolkit/spaces/ARGB.hx",50,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_54_get_green,"hxColorToolkit.spaces.ARGB","get_green",0x4f03e5f6,"hxColorToolkit.spaces.ARGB.get_green","hxColorToolkit/spaces/ARGB.hx",54,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_58_set_green,"hxColorToolkit.spaces.ARGB","set_green",0x3254d202,"hxColorToolkit.spaces.ARGB.set_green","hxColorToolkit/spaces/ARGB.hx",58,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_62_get_blue,"hxColorToolkit.spaces.ARGB","get_blue",0xd16892c7,"hxColorToolkit.spaces.ARGB.get_blue","hxColorToolkit/spaces/ARGB.hx",62,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_66_set_blue,"hxColorToolkit.spaces.ARGB","set_blue",0x7fc5ec3b,"hxColorToolkit.spaces.ARGB.set_blue","hxColorToolkit/spaces/ARGB.hx",66,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_70_toRGB,"hxColorToolkit.spaces.ARGB","toRGB",0x12404d2e,"hxColorToolkit.spaces.ARGB.toRGB","hxColorToolkit/spaces/ARGB.hx",70,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_74_toARGB,"hxColorToolkit.spaces.ARGB","toARGB",0xdacef7eb,"hxColorToolkit.spaces.ARGB.toARGB","hxColorToolkit/spaces/ARGB.hx",74,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_83_getColor,"hxColorToolkit.spaces.ARGB","getColor",0xbac81591,"hxColorToolkit.spaces.ARGB.getColor","hxColorToolkit/spaces/ARGB.hx",83,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_86_fromRGB,"hxColorToolkit.spaces.ARGB","fromRGB",0x157f5b9f,"hxColorToolkit.spaces.ARGB.fromRGB","hxColorToolkit/spaces/ARGB.hx",86,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_99_setColor,"hxColorToolkit.spaces.ARGB","setColor",0x69256f05,"hxColorToolkit.spaces.ARGB.setColor","hxColorToolkit/spaces/ARGB.hx",99,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_122_clone,"hxColorToolkit.spaces.ARGB","clone",0x468af039,"hxColorToolkit.spaces.ARGB.clone","hxColorToolkit/spaces/ARGB.hx",122,0xa4bc2e94)
HX_LOCAL_STACK_FRAME(_hx_pos_f98c5ba84ced651b_125_interpolate,"hxColorToolkit.spaces.ARGB","interpolate",0xe319be9d,"hxColorToolkit.spaces.ARGB.interpolate","hxColorToolkit/spaces/ARGB.hx",125,0xa4bc2e94)
namespace hxColorToolkit{
namespace spaces{

void ARGB_obj::__construct( ::Dynamic __o_a, ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b){
            		 ::Dynamic a = __o_a;
            		if (::hx::IsNull(__o_a)) a = 255;
            		 ::Dynamic r = __o_r;
            		if (::hx::IsNull(__o_r)) r = 0;
            		 ::Dynamic g = __o_g;
            		if (::hx::IsNull(__o_g)) g = 0;
            		 ::Dynamic b = __o_b;
            		if (::hx::IsNull(__o_b)) b = 0;
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_115_new)
HXLINE( 116)		super::__construct(r,g,b);
HXLINE( 117)		this->numOfChannels = 4;
HXLINE( 118)		this->set_alpha(( (Float)(a) ));
            	}

Dynamic ARGB_obj::__CreateEmpty() { return new ARGB_obj; }

void *ARGB_obj::_hx_vtable = 0;

Dynamic ARGB_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ARGB_obj > _hx_result = new ARGB_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ARGB_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f36d9d4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1f36d9d4;
	} else {
		return inClassId==(int)0x2e8eb6f5;
	}
}

Float ARGB_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_38_get_alpha)
HXDLIN(  38)		return this->getValue(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ARGB_obj,get_alpha,return )

Float ARGB_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_42_set_alpha)
HXDLIN(  42)		return this->setValue(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,set_alpha,return )

Float ARGB_obj::get_red(){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_46_get_red)
HXDLIN(  46)		return this->getValue(1);
            	}


Float ARGB_obj::set_red(Float value){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_50_set_red)
HXDLIN(  50)		return this->setValue(1,value);
            	}


Float ARGB_obj::get_green(){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_54_get_green)
HXDLIN(  54)		return this->getValue(2);
            	}


Float ARGB_obj::set_green(Float value){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_58_set_green)
HXDLIN(  58)		return this->setValue(2,value);
            	}


Float ARGB_obj::get_blue(){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_62_get_blue)
HXDLIN(  62)		return this->getValue(3);
            	}


Float ARGB_obj::set_blue(Float value){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_66_set_blue)
HXDLIN(  66)		return this->setValue(3,value);
            	}


 ::hxColorToolkit::spaces::RGB ARGB_obj::toRGB(){
            	HX_GC_STACKFRAME(&_hx_pos_f98c5ba84ced651b_70_toRGB)
HXDLIN(  70)		Float _hx_tmp = this->get_red();
HXDLIN(  70)		Float _hx_tmp1 = this->get_green();
HXDLIN(  70)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_blue());
            	}


 ::hxColorToolkit::spaces::ARGB ARGB_obj::toARGB(){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_74_toARGB)
HXDLIN(  74)		return this->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ARGB_obj,toARGB,return )

int ARGB_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_83_getColor)
HXDLIN(  83)		int _hx_tmp = (::Math_obj::round(this->get_alpha()) << 24);
HXDLIN(  83)		int _hx_tmp1 = (_hx_tmp | (::Math_obj::round(this->get_red()) << 16));
HXDLIN(  83)		int _hx_tmp2 = (_hx_tmp1 | (::Math_obj::round(this->get_green()) << 8));
HXDLIN(  83)		return (_hx_tmp2 | ::Math_obj::round(this->get_blue()));
            	}


 ::hxColorToolkit::spaces::RGB ARGB_obj::fromRGB( ::hxColorToolkit::spaces::RGB rgb){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_86_fromRGB)
HXLINE(  87)		this->set_alpha(( (Float)(255) ));
HXLINE(  88)		this->set_red(rgb->get_red());
HXLINE(  89)		this->set_green(rgb->get_green());
HXLINE(  90)		this->set_blue(rgb->get_blue());
HXLINE(  91)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::hxColorToolkit::spaces::RGB ARGB_obj::setColor(int color){
            	HX_STACKFRAME(&_hx_pos_f98c5ba84ced651b_99_setColor)
HXLINE( 100)		this->set_alpha(( (Float)(((color >> 24) & 255)) ));
HXLINE( 101)		this->set_red(( (Float)(((color >> 16) & 255)) ));
HXLINE( 102)		this->set_green(( (Float)(((color >> 8) & 255)) ));
HXLINE( 103)		this->set_blue(( (Float)((color & 255)) ));
HXLINE( 104)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::hxColorToolkit::spaces::RGB ARGB_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f98c5ba84ced651b_122_clone)
HXDLIN( 122)		Float _hx_tmp = this->get_alpha();
HXDLIN( 122)		Float _hx_tmp1 = this->get_red();
HXDLIN( 122)		Float _hx_tmp2 = this->get_green();
HXDLIN( 122)		return  ::hxColorToolkit::spaces::ARGB_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,this->get_blue());
            	}


 ::hxColorToolkit::spaces::RGB ARGB_obj::interpolate(::Dynamic target,::hx::Null< Float >  __o_ratio){
            		Float ratio = __o_ratio.Default(((Float)0.5));
            	HX_GC_STACKFRAME(&_hx_pos_f98c5ba84ced651b_125_interpolate)
HXLINE( 126)		 ::hxColorToolkit::spaces::ARGB target1;
HXDLIN( 126)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::ARGB >()) ))) {
HXLINE( 126)			target1 = ( ( ::hxColorToolkit::spaces::ARGB)(target) );
            		}
            		else {
HXLINE( 126)			 ::hxColorToolkit::spaces::ARGB target2 =  ::hxColorToolkit::spaces::ARGB_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN( 126)			target1 = Dynamic( target2->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(target))).StaticCast<  ::hxColorToolkit::spaces::ARGB >();
            		}
HXLINE( 127)		Float _hx_tmp = this->get_alpha();
HXLINE( 128)		Float _hx_tmp1 = target1->get_alpha();
HXLINE( 127)		Float _hx_tmp2 = (_hx_tmp + ((_hx_tmp1 - this->get_alpha()) * ratio));
HXLINE( 128)		Float _hx_tmp3 = this->get_red();
HXLINE( 129)		Float _hx_tmp4 = target1->get_red();
HXLINE( 128)		Float _hx_tmp5 = (_hx_tmp3 + ((_hx_tmp4 - this->get_red()) * ratio));
HXLINE( 129)		Float _hx_tmp6 = this->get_green();
HXLINE( 130)		Float _hx_tmp7 = target1->get_green();
HXLINE( 129)		Float _hx_tmp8 = (_hx_tmp6 + ((_hx_tmp7 - this->get_green()) * ratio));
HXLINE( 131)		Float _hx_tmp9 = this->get_blue();
HXLINE( 132)		Float _hx_tmp10 = target1->get_blue();
HXLINE( 127)		return  ::hxColorToolkit::spaces::ARGB_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp5,_hx_tmp8,(_hx_tmp9 + ((_hx_tmp10 - this->get_blue()) * ratio)));
            	}



::hx::ObjectPtr< ARGB_obj > ARGB_obj::__new( ::Dynamic __o_a, ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b) {
	::hx::ObjectPtr< ARGB_obj > __this = new ARGB_obj();
	__this->__construct(__o_a,__o_r,__o_g,__o_b);
	return __this;
}

::hx::ObjectPtr< ARGB_obj > ARGB_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_a, ::Dynamic __o_r, ::Dynamic __o_g, ::Dynamic __o_b) {
	ARGB_obj *__this = (ARGB_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ARGB_obj), true, "hxColorToolkit.spaces.ARGB"));
	*(void **)__this = ARGB_obj::_hx_vtable;
	__this->__construct(__o_a,__o_r,__o_g,__o_b);
	return __this;
}

ARGB_obj::ARGB_obj()
{
}

::hx::Val ARGB_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		if (HX_FIELD_EQ(inName,"toRGB") ) { return ::hx::Val( toRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toARGB") ) { return ::hx::Val( toARGB_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_red") ) { return ::hx::Val( get_red_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_red") ) { return ::hx::Val( set_red_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromRGB") ) { return ::hx::Val( fromRGB_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_blue") ) { return ::hx::Val( get_blue_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blue") ) { return ::hx::Val( set_blue_dyn() ); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_green") ) { return ::hx::Val( get_green_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_green") ) { return ::hx::Val( set_green_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return ::hx::Val( interpolate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ARGB_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ARGB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ARGB_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ARGB_obj_sStaticStorageInfo = 0;
#endif

static ::String ARGB_obj_sMemberFields[] = {
	HX_("get_alpha",b5,03,40,65),
	HX_("set_alpha",c1,ef,90,48),
	HX_("get_red",e8,a1,cb,26),
	HX_("set_red",f4,32,cd,19),
	HX_("get_green",1a,6b,96,dd),
	HX_("set_green",26,57,e7,c0),
	HX_("get_blue",23,fe,d3,c0),
	HX_("set_blue",97,57,31,6f),
	HX_("toRGB",52,70,18,14),
	HX_("toARGB",47,94,15,76),
	HX_("getColor",ed,80,33,aa),
	HX_("fromRGB",c3,8f,01,58),
	HX_("setColor",61,da,90,58),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	::String(null()) };

::hx::Class ARGB_obj::__mClass;

void ARGB_obj::__register()
{
	ARGB_obj _hx_dummy;
	ARGB_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.ARGB",4a,f0,34,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ARGB_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ARGB_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ARGB_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ARGB_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
