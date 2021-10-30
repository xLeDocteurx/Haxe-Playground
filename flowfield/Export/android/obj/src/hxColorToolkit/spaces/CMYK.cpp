#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_CMYK
#include <hxColorToolkit/spaces/CMYK.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fe41dc45b03c5681_169_new,"hxColorToolkit.spaces.CMYK","new",0xe950c7ec,"hxColorToolkit.spaces.CMYK.new","hxColorToolkit/spaces/CMYK.hx",169,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_34_getValue,"hxColorToolkit.spaces.CMYK","getValue",0xb729bbef,"hxColorToolkit.spaces.CMYK.getValue","hxColorToolkit/spaces/CMYK.hx",34,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_37_setValue,"hxColorToolkit.spaces.CMYK","setValue",0x65871563,"hxColorToolkit.spaces.CMYK.setValue","hxColorToolkit/spaces/CMYK.hx",37,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_43_minValue,"hxColorToolkit.spaces.CMYK","minValue",0x4e8a1973,"hxColorToolkit.spaces.CMYK.minValue","hxColorToolkit/spaces/CMYK.hx",43,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_47_maxValue,"hxColorToolkit.spaces.CMYK","maxValue",0x016fff21,"hxColorToolkit.spaces.CMYK.maxValue","hxColorToolkit/spaces/CMYK.hx",47,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_75_get_cyan,"hxColorToolkit.spaces.CMYK","get_cyan",0xe7212da0,"hxColorToolkit.spaces.CMYK.get_cyan","hxColorToolkit/spaces/CMYK.hx",75,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_79_set_cyan,"hxColorToolkit.spaces.CMYK","set_cyan",0x957e8714,"hxColorToolkit.spaces.CMYK.set_cyan","hxColorToolkit/spaces/CMYK.hx",79,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_83_get_magenta,"hxColorToolkit.spaces.CMYK","get_magenta",0x21e97dcc,"hxColorToolkit.spaces.CMYK.get_magenta","hxColorToolkit/spaces/CMYK.hx",83,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_87_set_magenta,"hxColorToolkit.spaces.CMYK","set_magenta",0x2c5684d8,"hxColorToolkit.spaces.CMYK.set_magenta","hxColorToolkit/spaces/CMYK.hx",87,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_91_get_yellow,"hxColorToolkit.spaces.CMYK","get_yellow",0x231a6131,"hxColorToolkit.spaces.CMYK.get_yellow","hxColorToolkit/spaces/CMYK.hx",91,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_95_set_yellow,"hxColorToolkit.spaces.CMYK","set_yellow",0x2697ffa5,"hxColorToolkit.spaces.CMYK.set_yellow","hxColorToolkit/spaces/CMYK.hx",95,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_99_get_black,"hxColorToolkit.spaces.CMYK","get_black",0xb9e85aa2,"hxColorToolkit.spaces.CMYK.get_black","hxColorToolkit/spaces/CMYK.hx",99,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_103_set_black,"hxColorToolkit.spaces.CMYK","set_black",0x9d3946ae,"hxColorToolkit.spaces.CMYK.set_black","hxColorToolkit/spaces/CMYK.hx",103,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_106_toRGB,"hxColorToolkit.spaces.CMYK","toRGB",0xefeb62de,"hxColorToolkit.spaces.CMYK.toRGB","hxColorToolkit/spaces/CMYK.hx",106,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_119_getColor,"hxColorToolkit.spaces.CMYK","getColor",0xcfcdade1,"hxColorToolkit.spaces.CMYK.getColor","hxColorToolkit/spaces/CMYK.hx",119,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_122_fromRGB,"hxColorToolkit.spaces.CMYK","fromRGB",0x045f3d4f,"hxColorToolkit.spaces.CMYK.fromRGB","hxColorToolkit/spaces/CMYK.hx",122,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_160_setColor,"hxColorToolkit.spaces.CMYK","setColor",0x7e2b0755,"hxColorToolkit.spaces.CMYK.setColor","hxColorToolkit/spaces/CMYK.hx",160,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_179_clone,"hxColorToolkit.spaces.CMYK","clone",0x243605e9,"hxColorToolkit.spaces.CMYK.clone","hxColorToolkit/spaces/CMYK.hx",179,0x5b47aae4)
HX_LOCAL_STACK_FRAME(_hx_pos_fe41dc45b03c5681_182_interpolate,"hxColorToolkit.spaces.CMYK","interpolate",0xac84384d,"hxColorToolkit.spaces.CMYK.interpolate","hxColorToolkit/spaces/CMYK.hx",182,0x5b47aae4)
namespace hxColorToolkit{
namespace spaces{

void CMYK_obj::__construct( ::Dynamic __o_cyan, ::Dynamic __o_magenta, ::Dynamic __o_yellow, ::Dynamic __o_black){
            		 ::Dynamic cyan = __o_cyan;
            		if (::hx::IsNull(__o_cyan)) cyan = 0;
            		 ::Dynamic magenta = __o_magenta;
            		if (::hx::IsNull(__o_magenta)) magenta = 0;
            		 ::Dynamic yellow = __o_yellow;
            		if (::hx::IsNull(__o_yellow)) yellow = 0;
            		 ::Dynamic black = __o_black;
            		if (::hx::IsNull(__o_black)) black = 0;
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_169_new)
HXLINE( 170)		this->numOfChannels = 4;
HXLINE( 171)		this->data = ::Array_obj< Float >::__new(0);
HXLINE( 172)		this->set_cyan(( (Float)(cyan) ));
HXLINE( 173)		this->set_magenta(( (Float)(magenta) ));
HXLINE( 174)		this->set_yellow(( (Float)(yellow) ));
HXLINE( 175)		this->set_black(( (Float)(black) ));
            	}

Dynamic CMYK_obj::__CreateEmpty() { return new CMYK_obj; }

void *CMYK_obj::_hx_vtable = 0;

Dynamic CMYK_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CMYK_obj > _hx_result = new CMYK_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CMYK_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20858b84;
}

static ::hxColorToolkit::spaces::Color_obj _hx_hxColorToolkit_spaces_CMYK__hx_hxColorToolkit_spaces_Color= {
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::CMYK_obj::getValue,
	( Float (::hx::Object::*)(int,Float))&::hxColorToolkit::spaces::CMYK_obj::setValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::CMYK_obj::minValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::CMYK_obj::maxValue,
	( int (::hx::Object::*)())&::hxColorToolkit::spaces::CMYK_obj::getColor,
	( ::Dynamic (::hx::Object::*)(int))&::hxColorToolkit::spaces::CMYK_obj::setColor_41e3b804,
	(  ::hxColorToolkit::spaces::RGB (::hx::Object::*)())&::hxColorToolkit::spaces::CMYK_obj::toRGB,
	( ::Dynamic (::hx::Object::*)( ::hxColorToolkit::spaces::RGB))&::hxColorToolkit::spaces::CMYK_obj::fromRGB_488978a0,
	( ::Dynamic (::hx::Object::*)())&::hxColorToolkit::spaces::CMYK_obj::clone_ee952b4b,
	( ::Dynamic (::hx::Object::*)(::Dynamic,::hx::Null< Float > ))&::hxColorToolkit::spaces::CMYK_obj::interpolate_7d0ba1d9,
};

::Dynamic CMYK_obj::interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio) {
			return interpolate(target,ratio);
}

::Dynamic CMYK_obj::clone_ee952b4b() {
			return clone();
}

::Dynamic CMYK_obj::fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb) {
			return fromRGB(rgb);
}

::Dynamic CMYK_obj::setColor_41e3b804(int c) {
			return setColor(c);
}
void *CMYK_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x98fa9e0b: return &_hx_hxColorToolkit_spaces_CMYK__hx_hxColorToolkit_spaces_Color;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float CMYK_obj::getValue(int channel){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_34_getValue)
HXDLIN(  34)		return this->data->__get(channel);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CMYK_obj,getValue,return )

Float CMYK_obj::setValue(int channel,Float val){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_37_setValue)
HXLINE(  38)		this->data[channel] = ::Math_obj::min(( (Float)(100) ),::Math_obj::max(val,( (Float)(0) )));
HXLINE(  39)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CMYK_obj,setValue,return )

Float CMYK_obj::minValue(int channel){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_43_minValue)
HXDLIN(  43)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(CMYK_obj,minValue,return )

Float CMYK_obj::maxValue(int channel){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_47_maxValue)
HXDLIN(  47)		return ( (Float)(100) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(CMYK_obj,maxValue,return )

Float CMYK_obj::get_cyan(){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_75_get_cyan)
HXDLIN(  75)		return this->getValue(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CMYK_obj,get_cyan,return )

Float CMYK_obj::set_cyan(Float value){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_79_set_cyan)
HXDLIN(  79)		return this->setValue(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CMYK_obj,set_cyan,return )

Float CMYK_obj::get_magenta(){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_83_get_magenta)
HXDLIN(  83)		return this->getValue(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CMYK_obj,get_magenta,return )

Float CMYK_obj::set_magenta(Float value){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_87_set_magenta)
HXDLIN(  87)		return this->setValue(1,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CMYK_obj,set_magenta,return )

Float CMYK_obj::get_yellow(){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_91_get_yellow)
HXDLIN(  91)		return this->getValue(2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CMYK_obj,get_yellow,return )

Float CMYK_obj::set_yellow(Float value){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_95_set_yellow)
HXDLIN(  95)		return this->setValue(2,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CMYK_obj,set_yellow,return )

Float CMYK_obj::get_black(){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_99_get_black)
HXDLIN(  99)		return this->getValue(3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CMYK_obj,get_black,return )

Float CMYK_obj::set_black(Float value){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_103_set_black)
HXDLIN( 103)		return this->setValue(3,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CMYK_obj,set_black,return )

 ::hxColorToolkit::spaces::RGB CMYK_obj::toRGB(){
            	HX_GC_STACKFRAME(&_hx_pos_fe41dc45b03c5681_106_toRGB)
HXLINE( 107)		Float cyan = this->get_cyan();
HXDLIN( 107)		Float cyan1 = ::Math_obj::min(( (Float)(100) ),(cyan + this->get_black()));
HXLINE( 108)		Float magenta = this->get_magenta();
HXDLIN( 108)		Float magenta1 = ::Math_obj::min(( (Float)(100) ),(magenta + this->get_black()));
HXLINE( 109)		Float yellow = this->get_yellow();
HXDLIN( 109)		Float yellow1 = ::Math_obj::min(( (Float)(100) ),(yellow + this->get_black()));
HXLINE( 111)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,((( (Float)(100) ) - cyan1) * ((Float)2.55)),((( (Float)(100) ) - magenta1) * ((Float)2.55)),((( (Float)(100) ) - yellow1) * ((Float)2.55)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CMYK_obj,toRGB,return )

int CMYK_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_119_getColor)
HXDLIN( 119)		return this->toRGB()->getColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CMYK_obj,getColor,return )

 ::hxColorToolkit::spaces::CMYK CMYK_obj::fromRGB( ::hxColorToolkit::spaces::RGB rgb){
            	HX_STACKFRAME(&_hx_pos_fe41dc45b03c5681_122_fromRGB)
HXLINE( 123)		Float r = rgb->get_red();
HXLINE( 124)		Float g = rgb->get_green();
HXLINE( 125)		Float b = rgb->get_blue();
HXLINE( 127)		Float c = (( (Float)(1) ) - (r / ( (Float)(255) )));
HXLINE( 128)		Float m = (( (Float)(1) ) - (g / ( (Float)(255) )));
HXLINE( 129)		Float y = (( (Float)(1) ) - (b / ( (Float)(255) )));
HXLINE( 131)		Float var_K = ( (Float)(1) );
HXLINE( 133)		if ((c < var_K)) {
HXLINE( 134)			var_K = c;
            		}
HXLINE( 135)		if ((m < var_K)) {
HXLINE( 136)			var_K = m;
            		}
HXLINE( 137)		if ((y < var_K)) {
HXLINE( 138)			var_K = y;
            		}
HXLINE( 139)		if ((var_K == 1)) {
HXLINE( 140)			y = ( (Float)(0) );
HXDLIN( 140)			m = y;
HXDLIN( 140)			c = m;
            		}
            		else {
HXLINE( 142)			c = (((c - var_K) / (( (Float)(1) ) - var_K)) * ( (Float)(100) ));
HXLINE( 143)			m = (((m - var_K) / (( (Float)(1) ) - var_K)) * ( (Float)(100) ));
HXLINE( 144)			y = (((y - var_K) / (( (Float)(1) ) - var_K)) * ( (Float)(100) ));
            		}
HXLINE( 130)		Float k = (var_K * ( (Float)(100) ));
HXLINE( 148)		this->set_cyan(c);
HXLINE( 149)		this->set_magenta(m);
HXLINE( 150)		this->set_yellow(y);
HXLINE( 151)		this->set_black(k);
HXLINE( 152)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CMYK_obj,fromRGB,return )

 ::hxColorToolkit::spaces::CMYK CMYK_obj::setColor(int color){
            	HX_GC_STACKFRAME(&_hx_pos_fe41dc45b03c5681_160_setColor)
HXDLIN( 160)		return this->fromRGB( ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,((color >> 16) & 255),((color >> 8) & 255),(color & 255)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CMYK_obj,setColor,return )

 ::hxColorToolkit::spaces::CMYK CMYK_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_fe41dc45b03c5681_179_clone)
HXDLIN( 179)		Float _hx_tmp = this->get_cyan();
HXDLIN( 179)		Float _hx_tmp1 = this->get_magenta();
HXDLIN( 179)		Float _hx_tmp2 = this->get_yellow();
HXDLIN( 179)		return  ::hxColorToolkit::spaces::CMYK_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,this->get_black());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CMYK_obj,clone,return )

 ::hxColorToolkit::spaces::CMYK CMYK_obj::interpolate(::Dynamic target,::hx::Null< Float >  __o_ratio){
            		Float ratio = __o_ratio.Default(((Float)0.5));
            	HX_GC_STACKFRAME(&_hx_pos_fe41dc45b03c5681_182_interpolate)
HXLINE( 183)		 ::hxColorToolkit::spaces::CMYK target1;
HXDLIN( 183)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::CMYK >()) ))) {
HXLINE( 183)			target1 = ( ( ::hxColorToolkit::spaces::CMYK)(target) );
            		}
            		else {
HXLINE( 183)			 ::hxColorToolkit::spaces::CMYK target2 =  ::hxColorToolkit::spaces::CMYK_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN( 183)			target1 = target2->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(target));
            		}
HXLINE( 184)		Float _hx_tmp = this->get_cyan();
HXLINE( 185)		Float _hx_tmp1 = target1->get_cyan();
HXLINE( 184)		Float _hx_tmp2 = (_hx_tmp + ((_hx_tmp1 - this->get_cyan()) * ratio));
HXLINE( 185)		Float _hx_tmp3 = this->get_magenta();
HXLINE( 186)		Float _hx_tmp4 = target1->get_magenta();
HXLINE( 185)		Float _hx_tmp5 = (_hx_tmp3 + ((_hx_tmp4 - this->get_magenta()) * ratio));
HXLINE( 186)		Float _hx_tmp6 = this->get_yellow();
HXLINE( 187)		Float _hx_tmp7 = target1->get_yellow();
HXLINE( 186)		Float _hx_tmp8 = (_hx_tmp6 + ((_hx_tmp7 - this->get_yellow()) * ratio));
HXLINE( 188)		Float _hx_tmp9 = this->get_black();
HXLINE( 189)		Float _hx_tmp10 = target1->get_black();
HXLINE( 184)		return  ::hxColorToolkit::spaces::CMYK_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp5,_hx_tmp8,(_hx_tmp9 + ((_hx_tmp10 - this->get_black()) * ratio)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(CMYK_obj,interpolate,return )


::hx::ObjectPtr< CMYK_obj > CMYK_obj::__new( ::Dynamic __o_cyan, ::Dynamic __o_magenta, ::Dynamic __o_yellow, ::Dynamic __o_black) {
	::hx::ObjectPtr< CMYK_obj > __this = new CMYK_obj();
	__this->__construct(__o_cyan,__o_magenta,__o_yellow,__o_black);
	return __this;
}

::hx::ObjectPtr< CMYK_obj > CMYK_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_cyan, ::Dynamic __o_magenta, ::Dynamic __o_yellow, ::Dynamic __o_black) {
	CMYK_obj *__this = (CMYK_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CMYK_obj), true, "hxColorToolkit.spaces.CMYK"));
	*(void **)__this = CMYK_obj::_hx_vtable;
	__this->__construct(__o_cyan,__o_magenta,__o_yellow,__o_black);
	return __this;
}

CMYK_obj::CMYK_obj()
{
}

void CMYK_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CMYK);
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void CMYK_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val CMYK_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cyan") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cyan() ); }
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"black") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_black() ); }
		if (HX_FIELD_EQ(inName,"toRGB") ) { return ::hx::Val( toRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"yellow") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_yellow() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_magenta() ); }
		if (HX_FIELD_EQ(inName,"fromRGB") ) { return ::hx::Val( fromRGB_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cyan") ) { return ::hx::Val( get_cyan_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cyan") ) { return ::hx::Val( set_cyan_dyn() ); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_black") ) { return ::hx::Val( get_black_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_black") ) { return ::hx::Val( set_black_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_yellow") ) { return ::hx::Val( get_yellow_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_yellow") ) { return ::hx::Val( set_yellow_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_magenta") ) { return ::hx::Val( get_magenta_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_magenta") ) { return ::hx::Val( set_magenta_dyn() ); }
		if (HX_FIELD_EQ(inName,"interpolate") ) { return ::hx::Val( interpolate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { return ::hx::Val( numOfChannels ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CMYK_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cyan") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cyan(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"black") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_black(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"yellow") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_yellow(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_magenta(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { numOfChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CMYK_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numOfChannels",6d,ec,b1,8b));
	outFields->push(HX_("black",bf,d5,f1,b4));
	outFields->push(HX_("cyan",23,45,cc,41));
	outFields->push(HX_("magenta",29,ba,9d,0e));
	outFields->push(HX_("yellow",74,9f,5c,d0));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CMYK_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CMYK_obj,numOfChannels),HX_("numOfChannels",6d,ec,b1,8b)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(CMYK_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CMYK_obj_sStaticStorageInfo = 0;
#endif

static ::String CMYK_obj_sMemberFields[] = {
	HX_("numOfChannels",6d,ec,b1,8b),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("get_cyan",ac,00,87,c1),
	HX_("set_cyan",20,5a,e4,6f),
	HX_("get_magenta",40,1a,98,94),
	HX_("set_magenta",4c,21,05,9f),
	HX_("get_yellow",3d,0f,e4,c0),
	HX_("set_yellow",b1,ad,61,c4),
	HX_("get_black",16,32,9b,f8),
	HX_("set_black",22,1e,ec,db),
	HX_("toRGB",52,70,18,14),
	HX_("getColor",ed,80,33,aa),
	HX_("fromRGB",c3,8f,01,58),
	HX_("setColor",61,da,90,58),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	HX_("data",2a,56,63,42),
	::String(null()) };

::hx::Class CMYK_obj::__mClass;

void CMYK_obj::__register()
{
	CMYK_obj _hx_dummy;
	CMYK_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.CMYK",fa,a1,83,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CMYK_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CMYK_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CMYK_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CMYK_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
