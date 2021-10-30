#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_HSL
#include <hxColorToolkit/spaces/HSL.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_888df5ddbac09c0c_175_new,"hxColorToolkit.spaces.HSL","new",0x33f8e815,"hxColorToolkit.spaces.HSL.new","hxColorToolkit/spaces/HSL.hx",175,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_34_getValue,"hxColorToolkit.spaces.HSL","getValue",0x9baf6726,"hxColorToolkit.spaces.HSL.getValue","hxColorToolkit/spaces/HSL.hx",34,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_37_setValue,"hxColorToolkit.spaces.HSL","setValue",0x4a0cc09a,"hxColorToolkit.spaces.HSL.setValue","hxColorToolkit/spaces/HSL.hx",37,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_48_minValue,"hxColorToolkit.spaces.HSL","minValue",0x330fc4aa,"hxColorToolkit.spaces.HSL.minValue","hxColorToolkit/spaces/HSL.hx",48,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_52_maxValue,"hxColorToolkit.spaces.HSL","maxValue",0xe5f5aa58,"hxColorToolkit.spaces.HSL.maxValue","hxColorToolkit/spaces/HSL.hx",52,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_74_get_hue,"hxColorToolkit.spaces.HSL","get_hue",0xffc7af84,"hxColorToolkit.spaces.HSL.get_hue","hxColorToolkit/spaces/HSL.hx",74,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_77_set_hue,"hxColorToolkit.spaces.HSL","set_hue",0xf2c94090,"hxColorToolkit.spaces.HSL.set_hue","hxColorToolkit/spaces/HSL.hx",77,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_83_get_saturation,"hxColorToolkit.spaces.HSL","get_saturation",0x70442686,"hxColorToolkit.spaces.HSL.get_saturation","hxColorToolkit/spaces/HSL.hx",83,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_86_set_saturation,"hxColorToolkit.spaces.HSL","set_saturation",0x90640efa,"hxColorToolkit.spaces.HSL.set_saturation","hxColorToolkit/spaces/HSL.hx",86,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_92_get_lightness,"hxColorToolkit.spaces.HSL","get_lightness",0xc574b439,"hxColorToolkit.spaces.HSL.get_lightness","hxColorToolkit/spaces/HSL.hx",92,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_95_set_lightness,"hxColorToolkit.spaces.HSL","set_lightness",0x0a7a9645,"hxColorToolkit.spaces.HSL.set_lightness","hxColorToolkit/spaces/HSL.hx",95,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_100_toRGB,"hxColorToolkit.spaces.HSL","toRGB",0x4cfa9f47,"hxColorToolkit.spaces.HSL.toRGB","hxColorToolkit/spaces/HSL.hx",100,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_126_getColor,"hxColorToolkit.spaces.HSL","getColor",0xb4535918,"hxColorToolkit.spaces.HSL.getColor","hxColorToolkit/spaces/HSL.hx",126,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_129_fromRGB,"hxColorToolkit.spaces.HSL","fromRGB",0x310525f8,"hxColorToolkit.spaces.HSL.fromRGB","hxColorToolkit/spaces/HSL.hx",129,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_165_setColor,"hxColorToolkit.spaces.HSL","setColor",0x62b0b28c,"hxColorToolkit.spaces.HSL.setColor","hxColorToolkit/spaces/HSL.hx",165,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_184_clone,"hxColorToolkit.spaces.HSL","clone",0x81454252,"hxColorToolkit.spaces.HSL.clone","hxColorToolkit/spaces/HSL.hx",184,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_187_interpolate,"hxColorToolkit.spaces.HSL","interpolate",0xd4f62976,"hxColorToolkit.spaces.HSL.interpolate","hxColorToolkit/spaces/HSL.hx",187,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_198_hue2rgb,"hxColorToolkit.spaces.HSL","hue2rgb",0xce592908,"hxColorToolkit.spaces.HSL.hue2rgb","hxColorToolkit/spaces/HSL.hx",198,0xd0f13b1b)
HX_LOCAL_STACK_FRAME(_hx_pos_888df5ddbac09c0c_213_loop,"hxColorToolkit.spaces.HSL","loop",0x44874d0f,"hxColorToolkit.spaces.HSL.loop","hxColorToolkit/spaces/HSL.hx",213,0xd0f13b1b)
namespace hxColorToolkit{
namespace spaces{

void HSL_obj::__construct( ::Dynamic __o_hue, ::Dynamic __o_saturation, ::Dynamic __o_lightness){
            		 ::Dynamic hue = __o_hue;
            		if (::hx::IsNull(__o_hue)) hue = 0;
            		 ::Dynamic saturation = __o_saturation;
            		if (::hx::IsNull(__o_saturation)) saturation = 0;
            		 ::Dynamic lightness = __o_lightness;
            		if (::hx::IsNull(__o_lightness)) lightness = 0;
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_175_new)
HXLINE( 176)		this->numOfChannels = 3;
HXLINE( 177)		this->data = ::Array_obj< Float >::__new(0);
HXLINE( 178)		this->set_hue(( (Float)(hue) ));
HXLINE( 179)		this->set_saturation(( (Float)(saturation) ));
HXLINE( 180)		this->set_lightness(( (Float)(lightness) ));
            	}

Dynamic HSL_obj::__CreateEmpty() { return new HSL_obj; }

void *HSL_obj::_hx_vtable = 0;

Dynamic HSL_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HSL_obj > _hx_result = new HSL_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HSL_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e872ae9;
}

static ::hxColorToolkit::spaces::Color_obj _hx_hxColorToolkit_spaces_HSL__hx_hxColorToolkit_spaces_Color= {
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::HSL_obj::getValue,
	( Float (::hx::Object::*)(int,Float))&::hxColorToolkit::spaces::HSL_obj::setValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::HSL_obj::minValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::HSL_obj::maxValue,
	( int (::hx::Object::*)())&::hxColorToolkit::spaces::HSL_obj::getColor,
	( ::Dynamic (::hx::Object::*)(int))&::hxColorToolkit::spaces::HSL_obj::setColor_41e3b804,
	(  ::hxColorToolkit::spaces::RGB (::hx::Object::*)())&::hxColorToolkit::spaces::HSL_obj::toRGB,
	( ::Dynamic (::hx::Object::*)( ::hxColorToolkit::spaces::RGB))&::hxColorToolkit::spaces::HSL_obj::fromRGB_488978a0,
	( ::Dynamic (::hx::Object::*)())&::hxColorToolkit::spaces::HSL_obj::clone_ee952b4b,
	( ::Dynamic (::hx::Object::*)(::Dynamic,::hx::Null< Float > ))&::hxColorToolkit::spaces::HSL_obj::interpolate_7d0ba1d9,
};

::Dynamic HSL_obj::interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio) {
			return interpolate(target,ratio);
}

::Dynamic HSL_obj::clone_ee952b4b() {
			return clone();
}

::Dynamic HSL_obj::fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb) {
			return fromRGB(rgb);
}

::Dynamic HSL_obj::setColor_41e3b804(int c) {
			return setColor(c);
}
void *HSL_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x98fa9e0b: return &_hx_hxColorToolkit_spaces_HSL__hx_hxColorToolkit_spaces_Color;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float HSL_obj::getValue(int channel){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_34_getValue)
HXDLIN(  34)		return this->data->__get(channel);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSL_obj,getValue,return )

Float HSL_obj::setValue(int channel,Float val){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_37_setValue)
HXLINE(  38)		::Array< Float > _hx_tmp = this->data;
HXDLIN(  38)		Float _hx_tmp1;
HXDLIN(  38)		if ((channel == 0)) {
HXLINE(  38)			_hx_tmp1 = ::hxColorToolkit::spaces::HSL_obj::loop(val,( (Float)(360) ));
            		}
            		else {
HXLINE(  41)			Float _hx_tmp;
HXDLIN(  41)			if ((channel == 0)) {
HXLINE(  41)				_hx_tmp = ( (Float)(360) );
            			}
            			else {
HXLINE(  41)				_hx_tmp = ( (Float)(100) );
            			}
HXLINE(  38)			_hx_tmp1 = ::Math_obj::min(_hx_tmp,::Math_obj::max(val,( (Float)(0) )));
            		}
HXDLIN(  38)		_hx_tmp[channel] = _hx_tmp1;
HXLINE(  44)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC2(HSL_obj,setValue,return )

Float HSL_obj::minValue(int channel){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_48_minValue)
HXDLIN(  48)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSL_obj,minValue,return )

Float HSL_obj::maxValue(int channel){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_52_maxValue)
HXDLIN(  52)		if ((channel == 0)) {
HXDLIN(  52)			return ( (Float)(360) );
            		}
            		else {
HXDLIN(  52)			return ( (Float)(100) );
            		}
HXDLIN(  52)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSL_obj,maxValue,return )

Float HSL_obj::get_hue(){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_74_get_hue)
HXDLIN(  74)		return this->getValue(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSL_obj,get_hue,return )

Float HSL_obj::set_hue(Float val){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_77_set_hue)
HXLINE(  78)		this->data[0] = ::hxColorToolkit::spaces::HSL_obj::loop(val,( (Float)(360) ));
HXLINE(  79)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSL_obj,set_hue,return )

Float HSL_obj::get_saturation(){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_83_get_saturation)
HXDLIN(  83)		return this->getValue(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSL_obj,get_saturation,return )

Float HSL_obj::set_saturation(Float val){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_86_set_saturation)
HXLINE(  87)		this->data[1] = ::Math_obj::min(( (Float)(100) ),::Math_obj::max(val,( (Float)(0) )));
HXLINE(  88)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSL_obj,set_saturation,return )

Float HSL_obj::get_lightness(){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_92_get_lightness)
HXDLIN(  92)		return this->getValue(2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSL_obj,get_lightness,return )

Float HSL_obj::set_lightness(Float val){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_95_set_lightness)
HXLINE(  96)		this->data[2] = ::Math_obj::min(( (Float)(100) ),::Math_obj::max(val,( (Float)(0) )));
HXLINE(  97)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSL_obj,set_lightness,return )

 ::hxColorToolkit::spaces::RGB HSL_obj::toRGB(){
            	HX_GC_STACKFRAME(&_hx_pos_888df5ddbac09c0c_100_toRGB)
HXLINE( 101)		Float hue = (this->get_hue() / ( (Float)(360) ));
HXLINE( 102)		Float saturation = (this->get_saturation() * ((Float)0.01));
HXLINE( 103)		Float lightness = (this->get_lightness() * ((Float)0.01));
HXLINE( 105)		Float r;
HXDLIN( 105)		Float g;
HXDLIN( 105)		Float b;
HXLINE( 107)		if ((saturation == 0)) {
HXLINE( 108)			b = lightness;
HXDLIN( 108)			g = b;
HXDLIN( 108)			r = g;
            		}
            		else {
HXLINE( 110)			Float q;
HXDLIN( 110)			if ((lightness < ((Float)0.5))) {
HXLINE( 110)				q = (lightness * (1 + saturation));
            			}
            			else {
HXLINE( 110)				q = ((lightness + saturation) - (lightness * saturation));
            			}
HXLINE( 111)			Float p = ((( (Float)(2) ) * lightness) - q);
HXLINE( 112)			r = this->hue2rgb(p,q,(hue + ((Float)0.333333333333333315)));
HXLINE( 113)			g = this->hue2rgb(p,q,hue);
HXLINE( 114)			b = this->hue2rgb(p,q,(hue - ((Float)0.333333333333333315)));
            		}
HXLINE( 117)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,(r * ( (Float)(255) )),(g * ( (Float)(255) )),(b * ( (Float)(255) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSL_obj,toRGB,return )

int HSL_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_126_getColor)
HXDLIN( 126)		return this->toRGB()->getColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSL_obj,getColor,return )

 ::hxColorToolkit::spaces::HSL HSL_obj::fromRGB( ::hxColorToolkit::spaces::RGB rgb){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_129_fromRGB)
HXLINE( 130)		Float r = rgb->get_red();
HXLINE( 131)		Float g = rgb->get_green();
HXLINE( 132)		Float b = rgb->get_blue();
HXLINE( 134)		r = (r / ( (Float)(255) ));
HXLINE( 135)		g = (g / ( (Float)(255) ));
HXLINE( 136)		b = (b / ( (Float)(255) ));
HXLINE( 137)		Float max = ::Math_obj::max(r,::Math_obj::max(g,b));
HXLINE( 138)		Float min = ::Math_obj::min(r,::Math_obj::min(g,b));
HXLINE( 139)		Float l = ((max + min) / ( (Float)(2) ));
HXDLIN( 139)		Float s = l;
HXDLIN( 139)		Float h = s;
HXLINE( 143)		if ((max == min)) {
HXLINE( 144)			s = ( (Float)(0) );
HXDLIN( 144)			h = s;
            		}
            		else {
HXLINE( 146)			Float d = (max - min);
HXLINE( 147)			if ((l > ((Float)0.5))) {
HXLINE( 147)				s = (d / ((( (Float)(2) ) - max) - min));
            			}
            			else {
HXLINE( 147)				s = (d / (max + min));
            			}
HXLINE( 148)			if ((max == r)) {
HXLINE( 148)				int h1;
HXDLIN( 148)				if ((g < b)) {
HXLINE( 148)					h1 = 6;
            				}
            				else {
HXLINE( 148)					h1 = 0;
            				}
HXDLIN( 148)				h = (((g - b) / d) + h1);
            			}
            			else {
HXLINE( 148)				if ((max == g)) {
HXLINE( 148)					h = (((b - r) / d) + 2);
            				}
            				else {
HXLINE( 149)					h = (((r - g) / d) + 4);
            				}
            			}
HXLINE( 150)			h = (h / ( (Float)(6) ));
            		}
HXLINE( 153)		this->set_hue(( (Float)(::Math_obj::round((h * ( (Float)(360) )))) ));
HXLINE( 154)		this->set_saturation(( (Float)(::Math_obj::round((s * ( (Float)(100) )))) ));
HXLINE( 155)		this->set_lightness(( (Float)(::Math_obj::round((l * ( (Float)(100) )))) ));
HXLINE( 156)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSL_obj,fromRGB,return )

 ::hxColorToolkit::spaces::HSL HSL_obj::setColor(int color){
            	HX_GC_STACKFRAME(&_hx_pos_888df5ddbac09c0c_165_setColor)
HXDLIN( 165)		return this->fromRGB( ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,((color >> 16) & 255),((color >> 8) & 255),(color & 255)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSL_obj,setColor,return )

 ::hxColorToolkit::spaces::HSL HSL_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_888df5ddbac09c0c_184_clone)
HXDLIN( 184)		Float _hx_tmp = this->get_hue();
HXDLIN( 184)		Float _hx_tmp1 = this->get_saturation();
HXDLIN( 184)		return  ::hxColorToolkit::spaces::HSL_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_lightness());
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSL_obj,clone,return )

 ::hxColorToolkit::spaces::HSL HSL_obj::interpolate(::Dynamic target,::hx::Null< Float >  __o_ratio){
            		Float ratio = __o_ratio.Default(((Float)0.5));
            	HX_GC_STACKFRAME(&_hx_pos_888df5ddbac09c0c_187_interpolate)
HXLINE( 188)		 ::hxColorToolkit::spaces::HSL target1;
HXDLIN( 188)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::HSL >()) ))) {
HXLINE( 188)			target1 = ( ( ::hxColorToolkit::spaces::HSL)(target) );
            		}
            		else {
HXLINE( 188)			 ::hxColorToolkit::spaces::HSL target2 =  ::hxColorToolkit::spaces::HSL_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 188)			target1 = target2->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(target));
            		}
HXLINE( 189)		Float _hx_tmp = this->get_hue();
HXLINE( 190)		Float _hx_tmp1 = target1->get_hue();
HXLINE( 189)		Float _hx_tmp2 = (_hx_tmp + ((_hx_tmp1 - this->get_hue()) * ratio));
HXLINE( 190)		Float _hx_tmp3 = this->get_saturation();
HXLINE( 191)		Float _hx_tmp4 = target1->get_saturation();
HXLINE( 190)		Float _hx_tmp5 = (_hx_tmp3 + ((_hx_tmp4 - this->get_saturation()) * ratio));
HXLINE( 192)		Float _hx_tmp6 = this->get_lightness();
HXLINE( 193)		Float _hx_tmp7 = target1->get_lightness();
HXLINE( 189)		return  ::hxColorToolkit::spaces::HSL_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp5,(_hx_tmp6 + ((_hx_tmp7 - this->get_lightness()) * ratio)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(HSL_obj,interpolate,return )

Float HSL_obj::hue2rgb(Float p,Float q,Float t){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_198_hue2rgb)
HXLINE( 199)		if ((t < 0)) {
HXLINE( 200)			t = (t + 1);
            		}
HXLINE( 201)		if ((t > 1)) {
HXLINE( 202)			t = (t - ( (Float)(1) ));
            		}
HXLINE( 203)		if ((t < ((Float)0.166666666666666657))) {
HXLINE( 204)			return (p + (((q - p) * ( (Float)(6) )) * t));
            		}
HXLINE( 205)		if ((t < ((Float)0.5))) {
HXLINE( 206)			return q;
            		}
HXLINE( 207)		if ((t < ((Float)0.66666666666666663))) {
HXLINE( 208)			return (p + (((q - p) * (((Float)0.66666666666666663) - t)) * ( (Float)(6) )));
            		}
HXLINE( 210)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC3(HSL_obj,hue2rgb,return )

Float HSL_obj::loop(Float index,Float length){
            	HX_STACKFRAME(&_hx_pos_888df5ddbac09c0c_213_loop)
HXLINE( 214)		if ((index < 0)) {
HXLINE( 215)			index = (length + ::hx::Mod(index,length));
            		}
HXLINE( 217)		if ((index >= length)) {
HXLINE( 218)			index = ::hx::Mod(index,length);
            		}
HXLINE( 220)		return index;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HSL_obj,loop,return )


::hx::ObjectPtr< HSL_obj > HSL_obj::__new( ::Dynamic __o_hue, ::Dynamic __o_saturation, ::Dynamic __o_lightness) {
	::hx::ObjectPtr< HSL_obj > __this = new HSL_obj();
	__this->__construct(__o_hue,__o_saturation,__o_lightness);
	return __this;
}

::hx::ObjectPtr< HSL_obj > HSL_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_hue, ::Dynamic __o_saturation, ::Dynamic __o_lightness) {
	HSL_obj *__this = (HSL_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HSL_obj), true, "hxColorToolkit.spaces.HSL"));
	*(void **)__this = HSL_obj::_hx_vtable;
	__this->__construct(__o_hue,__o_saturation,__o_lightness);
	return __this;
}

HSL_obj::HSL_obj()
{
}

void HSL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HSL);
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void HSL_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val HSL_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hue() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toRGB") ) { return ::hx::Val( toRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_hue") ) { return ::hx::Val( get_hue_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hue") ) { return ::hx::Val( set_hue_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromRGB") ) { return ::hx::Val( fromRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"hue2rgb") ) { return ::hx::Val( hue2rgb_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lightness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightness() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"saturation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_saturation() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return ::hx::Val( interpolate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { return ::hx::Val( numOfChannels ); }
		if (HX_FIELD_EQ(inName,"get_lightness") ) { return ::hx::Val( get_lightness_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lightness") ) { return ::hx::Val( set_lightness_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_saturation") ) { return ::hx::Val( get_saturation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_saturation") ) { return ::hx::Val( set_saturation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HSL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { outValue = loop_dyn(); return true; }
	}
	return false;
}

::hx::Val HSL_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hue(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lightness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lightness(inValue.Cast< Float >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"saturation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_saturation(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { numOfChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HSL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numOfChannels",6d,ec,b1,8b));
	outFields->push(HX_("hue",b8,50,4f,00));
	outFields->push(HX_("saturation",d2,d3,a1,f6));
	outFields->push(HX_("lightness",6d,34,47,d7));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HSL_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(HSL_obj,numOfChannels),HX_("numOfChannels",6d,ec,b1,8b)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(HSL_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HSL_obj_sStaticStorageInfo = 0;
#endif

static ::String HSL_obj_sMemberFields[] = {
	HX_("numOfChannels",6d,ec,b1,8b),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("get_hue",4f,19,c4,26),
	HX_("set_hue",5b,aa,c5,19),
	HX_("get_saturation",1b,5c,97,6c),
	HX_("set_saturation",8f,44,b7,8c),
	HX_("get_lightness",44,08,ab,98),
	HX_("set_lightness",50,ea,b0,dd),
	HX_("toRGB",52,70,18,14),
	HX_("getColor",ed,80,33,aa),
	HX_("fromRGB",c3,8f,01,58),
	HX_("setColor",61,da,90,58),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	HX_("data",2a,56,63,42),
	HX_("hue2rgb",d3,92,55,f5),
	::String(null()) };

::hx::Class HSL_obj::__mClass;

static ::String HSL_obj_sStaticFields[] = {
	HX_("loop",64,a6,b7,47),
	::String(null())
};

void HSL_obj::__register()
{
	HSL_obj _hx_dummy;
	HSL_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.HSL",a3,39,dc,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HSL_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HSL_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HSL_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HSL_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HSL_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HSL_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
