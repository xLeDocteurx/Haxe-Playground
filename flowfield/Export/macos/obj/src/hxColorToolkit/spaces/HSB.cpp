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
#ifndef INCLUDED_hxColorToolkit_spaces_HSB
#include <hxColorToolkit/spaces/HSB.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_226_new,"hxColorToolkit.spaces.HSB","new",0x71f71b0b,"hxColorToolkit.spaces.HSB.new","hxColorToolkit/spaces/HSB.hx",226,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_34_getValue,"hxColorToolkit.spaces.HSB","getValue",0x18c6b870,"hxColorToolkit.spaces.HSB.getValue","hxColorToolkit/spaces/HSB.hx",34,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_37_setValue,"hxColorToolkit.spaces.HSB","setValue",0xc72411e4,"hxColorToolkit.spaces.HSB.setValue","hxColorToolkit/spaces/HSB.hx",37,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_48_minValue,"hxColorToolkit.spaces.HSB","minValue",0xb02715f4,"hxColorToolkit.spaces.HSB.minValue","hxColorToolkit/spaces/HSB.hx",48,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_52_maxValue,"hxColorToolkit.spaces.HSB","maxValue",0x630cfba2,"hxColorToolkit.spaces.HSB.maxValue","hxColorToolkit/spaces/HSB.hx",52,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_74_get_hue,"hxColorToolkit.spaces.HSB","get_hue",0xc259957a,"hxColorToolkit.spaces.HSB.get_hue","hxColorToolkit/spaces/HSB.hx",74,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_77_set_hue,"hxColorToolkit.spaces.HSB","set_hue",0xb55b2686,"hxColorToolkit.spaces.HSB.set_hue","hxColorToolkit/spaces/HSB.hx",77,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_83_get_saturation,"hxColorToolkit.spaces.HSB","get_saturation",0xa8628b50,"hxColorToolkit.spaces.HSB.get_saturation","hxColorToolkit/spaces/HSB.hx",83,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_86_set_saturation,"hxColorToolkit.spaces.HSB","set_saturation",0xc88273c4,"hxColorToolkit.spaces.HSB.set_saturation","hxColorToolkit/spaces/HSB.hx",86,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_92_get_brightness,"hxColorToolkit.spaces.HSB","get_brightness",0x1732454f,"hxColorToolkit.spaces.HSB.get_brightness","hxColorToolkit/spaces/HSB.hx",92,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_95_set_brightness,"hxColorToolkit.spaces.HSB","set_brightness",0x37522dc3,"hxColorToolkit.spaces.HSB.set_brightness","hxColorToolkit/spaces/HSB.hx",95,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_100_toRGB,"hxColorToolkit.spaces.HSB","toRGB",0xad23fbbd,"hxColorToolkit.spaces.HSB.toRGB","hxColorToolkit/spaces/HSB.hx",100,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_152_getColor,"hxColorToolkit.spaces.HSB","getColor",0x316aaa62,"hxColorToolkit.spaces.HSB.getColor","hxColorToolkit/spaces/HSB.hx",152,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_155_fromRGB,"hxColorToolkit.spaces.HSB","fromRGB",0xf3970bee,"hxColorToolkit.spaces.HSB.fromRGB","hxColorToolkit/spaces/HSB.hx",155,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_218_setColor,"hxColorToolkit.spaces.HSB","setColor",0xdfc803d6,"hxColorToolkit.spaces.HSB.setColor","hxColorToolkit/spaces/HSB.hx",218,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_235_clone,"hxColorToolkit.spaces.HSB","clone",0xe16e9ec8,"hxColorToolkit.spaces.HSB.clone","hxColorToolkit/spaces/HSB.hx",235,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_238_interpolate,"hxColorToolkit.spaces.HSB","interpolate",0x1b71426c,"hxColorToolkit.spaces.HSB.interpolate","hxColorToolkit/spaces/HSB.hx",238,0xca5518e5)
HX_LOCAL_STACK_FRAME(_hx_pos_e7a932a1bd2ddc5d_249_loop,"hxColorToolkit.spaces.HSB","loop",0x44f5b159,"hxColorToolkit.spaces.HSB.loop","hxColorToolkit/spaces/HSB.hx",249,0xca5518e5)
namespace hxColorToolkit{
namespace spaces{

void HSB_obj::__construct( ::Dynamic __o_hue, ::Dynamic __o_saturation, ::Dynamic __o_brightness){
            		 ::Dynamic hue = __o_hue;
            		if (::hx::IsNull(__o_hue)) hue = 0;
            		 ::Dynamic saturation = __o_saturation;
            		if (::hx::IsNull(__o_saturation)) saturation = 0;
            		 ::Dynamic brightness = __o_brightness;
            		if (::hx::IsNull(__o_brightness)) brightness = 0;
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_226_new)
HXLINE( 227)		this->numOfChannels = 3;
HXLINE( 228)		this->data = ::Array_obj< Float >::__new(0);
HXLINE( 229)		this->set_hue(( (Float)(hue) ));
HXLINE( 230)		this->set_saturation(( (Float)(saturation) ));
HXLINE( 231)		this->set_brightness(( (Float)(brightness) ));
            	}

Dynamic HSB_obj::__CreateEmpty() { return new HSB_obj; }

void *HSB_obj::_hx_vtable = 0;

Dynamic HSB_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HSB_obj > _hx_result = new HSB_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HSB_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e872adf;
}

static ::hxColorToolkit::spaces::Color_obj _hx_hxColorToolkit_spaces_HSB__hx_hxColorToolkit_spaces_Color= {
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::HSB_obj::getValue,
	( Float (::hx::Object::*)(int,Float))&::hxColorToolkit::spaces::HSB_obj::setValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::HSB_obj::minValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::HSB_obj::maxValue,
	( int (::hx::Object::*)())&::hxColorToolkit::spaces::HSB_obj::getColor,
	( ::Dynamic (::hx::Object::*)(int))&::hxColorToolkit::spaces::HSB_obj::setColor_41e3b804,
	(  ::hxColorToolkit::spaces::RGB (::hx::Object::*)())&::hxColorToolkit::spaces::HSB_obj::toRGB,
	( ::Dynamic (::hx::Object::*)( ::hxColorToolkit::spaces::RGB))&::hxColorToolkit::spaces::HSB_obj::fromRGB_488978a0,
	( ::Dynamic (::hx::Object::*)())&::hxColorToolkit::spaces::HSB_obj::clone_ee952b4b,
	( ::Dynamic (::hx::Object::*)(::Dynamic,::hx::Null< Float > ))&::hxColorToolkit::spaces::HSB_obj::interpolate_7d0ba1d9,
};

::Dynamic HSB_obj::interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio) {
			return interpolate(target,ratio);
}

::Dynamic HSB_obj::clone_ee952b4b() {
			return clone();
}

::Dynamic HSB_obj::fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb) {
			return fromRGB(rgb);
}

::Dynamic HSB_obj::setColor_41e3b804(int c) {
			return setColor(c);
}
void *HSB_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x98fa9e0b: return &_hx_hxColorToolkit_spaces_HSB__hx_hxColorToolkit_spaces_Color;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float HSB_obj::getValue(int channel){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_34_getValue)
HXDLIN(  34)		return this->data->__get(channel);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSB_obj,getValue,return )

Float HSB_obj::setValue(int channel,Float val){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_37_setValue)
HXLINE(  38)		::Array< Float > _hx_tmp = this->data;
HXDLIN(  38)		Float _hx_tmp1;
HXDLIN(  38)		if ((channel == 0)) {
HXLINE(  38)			_hx_tmp1 = ::hxColorToolkit::spaces::HSB_obj::loop(val,( (Float)(360) ));
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


HX_DEFINE_DYNAMIC_FUNC2(HSB_obj,setValue,return )

Float HSB_obj::minValue(int channel){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_48_minValue)
HXDLIN(  48)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSB_obj,minValue,return )

Float HSB_obj::maxValue(int channel){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_52_maxValue)
HXDLIN(  52)		if ((channel == 0)) {
HXDLIN(  52)			return ( (Float)(360) );
            		}
            		else {
HXDLIN(  52)			return ( (Float)(100) );
            		}
HXDLIN(  52)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSB_obj,maxValue,return )

Float HSB_obj::get_hue(){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_74_get_hue)
HXDLIN(  74)		return this->getValue(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSB_obj,get_hue,return )

Float HSB_obj::set_hue(Float val){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_77_set_hue)
HXLINE(  78)		this->data[0] = ::hxColorToolkit::spaces::HSB_obj::loop(val,( (Float)(360) ));
HXLINE(  79)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSB_obj,set_hue,return )

Float HSB_obj::get_saturation(){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_83_get_saturation)
HXDLIN(  83)		return this->getValue(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSB_obj,get_saturation,return )

Float HSB_obj::set_saturation(Float val){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_86_set_saturation)
HXLINE(  87)		this->data[1] = ::Math_obj::min(( (Float)(100) ),::Math_obj::max(val,( (Float)(0) )));
HXLINE(  88)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSB_obj,set_saturation,return )

Float HSB_obj::get_brightness(){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_92_get_brightness)
HXDLIN(  92)		return this->getValue(2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSB_obj,get_brightness,return )

Float HSB_obj::set_brightness(Float val){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_95_set_brightness)
HXLINE(  96)		this->data[2] = ::Math_obj::min(( (Float)(100) ),::Math_obj::max(val,( (Float)(0) )));
HXLINE(  97)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSB_obj,set_brightness,return )

 ::hxColorToolkit::spaces::RGB HSB_obj::toRGB(){
            	HX_GC_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_100_toRGB)
HXLINE( 101)		Float hue = this->get_hue();
HXLINE( 102)		Float saturation = this->get_saturation();
HXLINE( 103)		Float brightness = this->get_brightness();
HXLINE( 104)		Float r = ( (Float)(0) );
HXDLIN( 104)		Float g = ( (Float)(0) );
HXDLIN( 104)		Float b = ( (Float)(0) );
HXLINE( 105)		hue = ::hx::Mod(hue,360);
HXLINE( 106)		if ((brightness == 0)) {
HXLINE( 107)			return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,null(),null(),null());
            		}
HXLINE( 109)		saturation = (saturation * ((Float)0.01));
HXLINE( 110)		brightness = (brightness * ((Float)0.01));
HXLINE( 111)		hue = (hue / ( (Float)(60) ));
HXLINE( 104)		Float i = ( (Float)(::Math_obj::floor(hue)) );
HXDLIN( 104)		Float f = (hue - i);
HXDLIN( 104)		Float p = (brightness * (( (Float)(1) ) - saturation));
HXDLIN( 104)		Float q = (brightness * (( (Float)(1) ) - (saturation * f)));
HXDLIN( 104)		Float t = (brightness * (( (Float)(1) ) - (saturation * (( (Float)(1) ) - f))));
HXLINE( 117)		if ((i == 0)) {
HXLINE( 118)			r = brightness;
HXLINE( 119)			g = t;
HXLINE( 120)			b = p;
            		}
            		else {
HXLINE( 121)			if ((i == 1)) {
HXLINE( 122)				r = q;
HXLINE( 123)				g = brightness;
HXLINE( 124)				b = p;
            			}
            			else {
HXLINE( 125)				if ((i == 2)) {
HXLINE( 126)					r = p;
HXLINE( 127)					g = brightness;
HXLINE( 128)					b = t;
            				}
            				else {
HXLINE( 129)					if ((i == 3)) {
HXLINE( 130)						r = p;
HXLINE( 131)						g = q;
HXLINE( 132)						b = brightness;
            					}
            					else {
HXLINE( 133)						if ((i == 4)) {
HXLINE( 134)							r = t;
HXLINE( 135)							g = p;
HXLINE( 136)							b = brightness;
            						}
            						else {
HXLINE( 137)							if ((i == 5)) {
HXLINE( 138)								r = brightness;
HXLINE( 139)								g = p;
HXLINE( 140)								b = q;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 143)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,(r * ( (Float)(255) )),(g * ( (Float)(255) )),(b * ( (Float)(255) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSB_obj,toRGB,return )

int HSB_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_152_getColor)
HXDLIN( 152)		return this->toRGB()->getColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSB_obj,getColor,return )

 ::hxColorToolkit::spaces::HSB HSB_obj::fromRGB( ::hxColorToolkit::spaces::RGB rgb){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_155_fromRGB)
HXLINE( 156)		Float r = rgb->get_red();
HXLINE( 157)		Float g = rgb->get_green();
HXLINE( 158)		Float b = rgb->get_blue();
HXLINE( 160)		r = (r / ( (Float)(255) ));
HXLINE( 161)		g = (g / ( (Float)(255) ));
HXLINE( 162)		b = (b / ( (Float)(255) ));
HXLINE( 164)		Float h;
HXDLIN( 164)		Float s;
HXLINE( 165)		Float min = ::Math_obj::min(r,::Math_obj::min(g,b));
HXDLIN( 165)		Float max = ::Math_obj::max(r,::Math_obj::max(g,b));
HXLINE( 164)		Float v = (max * ( (Float)(100) ));
HXLINE( 165)		Float delta = (max - min);
HXLINE( 174)		if ((max != 0)) {
HXLINE( 175)			s = ((delta / max) * ( (Float)(100) ));
            		}
            		else {
HXLINE( 177)			s = ( (Float)(0) );
HXLINE( 178)			h = ( (Float)(-1) );
HXLINE( 180)			this->set_hue(h);
HXLINE( 181)			this->set_saturation(s);
HXLINE( 182)			this->set_brightness(v);
HXLINE( 183)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 186)		if ((delta == 0)) {
HXLINE( 187)			this->set_hue(( (Float)(0) ));
HXLINE( 188)			this->set_saturation(s);
HXLINE( 189)			this->set_brightness(v);
HXLINE( 190)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 193)		if ((r == max)) {
HXLINE( 194)			h = ((g - b) / delta);
            		}
            		else {
HXLINE( 195)			if ((g == max)) {
HXLINE( 196)				h = (2 + ((b - r) / delta));
            			}
            			else {
HXLINE( 198)				h = (4 + ((r - g) / delta));
            			}
            		}
HXLINE( 201)		h = (h * ( (Float)(60) ));
HXLINE( 202)		if ((h < 0)) {
HXLINE( 203)			h = (h + 360);
            		}
HXLINE( 205)		this->set_hue(h);
HXLINE( 206)		this->set_saturation(s);
HXLINE( 207)		this->set_brightness(v);
HXLINE( 209)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSB_obj,fromRGB,return )

 ::hxColorToolkit::spaces::HSB HSB_obj::setColor(int color){
            	HX_GC_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_218_setColor)
HXDLIN( 218)		return this->fromRGB( ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,((color >> 16) & 255),((color >> 8) & 255),(color & 255)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSB_obj,setColor,return )

 ::hxColorToolkit::spaces::HSB HSB_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_235_clone)
HXDLIN( 235)		Float _hx_tmp = this->get_hue();
HXDLIN( 235)		Float _hx_tmp1 = this->get_saturation();
HXDLIN( 235)		return  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_brightness());
            	}


HX_DEFINE_DYNAMIC_FUNC0(HSB_obj,clone,return )

 ::hxColorToolkit::spaces::HSB HSB_obj::interpolate(::Dynamic target,::hx::Null< Float >  __o_ratio){
            		Float ratio = __o_ratio.Default(((Float)0.5));
            	HX_GC_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_238_interpolate)
HXLINE( 239)		 ::hxColorToolkit::spaces::HSB target1;
HXDLIN( 239)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::HSB >()) ))) {
HXLINE( 239)			target1 = ( ( ::hxColorToolkit::spaces::HSB)(target) );
            		}
            		else {
HXLINE( 239)			 ::hxColorToolkit::spaces::HSB target2 =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 239)			target1 = target2->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(target));
            		}
HXLINE( 240)		Float _hx_tmp = this->get_hue();
HXLINE( 241)		Float _hx_tmp1 = target1->get_hue();
HXLINE( 240)		Float _hx_tmp2 = (_hx_tmp + ((_hx_tmp1 - this->get_hue()) * ratio));
HXLINE( 241)		Float _hx_tmp3 = this->get_saturation();
HXLINE( 242)		Float _hx_tmp4 = target1->get_saturation();
HXLINE( 241)		Float _hx_tmp5 = (_hx_tmp3 + ((_hx_tmp4 - this->get_saturation()) * ratio));
HXLINE( 243)		Float _hx_tmp6 = this->get_brightness();
HXLINE( 244)		Float _hx_tmp7 = target1->get_brightness();
HXLINE( 240)		return  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp5,(_hx_tmp6 + ((_hx_tmp7 - this->get_brightness()) * ratio)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(HSB_obj,interpolate,return )

Float HSB_obj::loop(Float index,Float length){
            	HX_STACKFRAME(&_hx_pos_e7a932a1bd2ddc5d_249_loop)
HXLINE( 250)		if ((index < 0)) {
HXLINE( 251)			index = (length + ::hx::Mod(index,length));
            		}
HXLINE( 253)		if ((index >= length)) {
HXLINE( 254)			index = ::hx::Mod(index,length);
            		}
HXLINE( 256)		return index;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HSB_obj,loop,return )


::hx::ObjectPtr< HSB_obj > HSB_obj::__new( ::Dynamic __o_hue, ::Dynamic __o_saturation, ::Dynamic __o_brightness) {
	::hx::ObjectPtr< HSB_obj > __this = new HSB_obj();
	__this->__construct(__o_hue,__o_saturation,__o_brightness);
	return __this;
}

::hx::ObjectPtr< HSB_obj > HSB_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_hue, ::Dynamic __o_saturation, ::Dynamic __o_brightness) {
	HSB_obj *__this = (HSB_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HSB_obj), true, "hxColorToolkit.spaces.HSB"));
	*(void **)__this = HSB_obj::_hx_vtable;
	__this->__construct(__o_hue,__o_saturation,__o_brightness);
	return __this;
}

HSB_obj::HSB_obj()
{
}

void HSB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HSB);
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void HSB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val HSB_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return ::hx::Val( getColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"saturation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_saturation() ); }
		if (HX_FIELD_EQ(inName,"brightness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_brightness() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return ::hx::Val( interpolate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { return ::hx::Val( numOfChannels ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_saturation") ) { return ::hx::Val( get_saturation_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_saturation") ) { return ::hx::Val( set_saturation_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_brightness") ) { return ::hx::Val( get_brightness_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_brightness") ) { return ::hx::Val( set_brightness_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HSB_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { outValue = loop_dyn(); return true; }
	}
	return false;
}

::hx::Val HSB_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hue(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"saturation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_saturation(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"brightness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_brightness(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { numOfChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HSB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numOfChannels",6d,ec,b1,8b));
	outFields->push(HX_("hue",b8,50,4f,00));
	outFields->push(HX_("saturation",d2,d3,a1,f6));
	outFields->push(HX_("brightness",d1,8d,71,65));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HSB_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(HSB_obj,numOfChannels),HX_("numOfChannels",6d,ec,b1,8b)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(HSB_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HSB_obj_sStaticStorageInfo = 0;
#endif

static ::String HSB_obj_sMemberFields[] = {
	HX_("numOfChannels",6d,ec,b1,8b),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("get_hue",4f,19,c4,26),
	HX_("set_hue",5b,aa,c5,19),
	HX_("get_saturation",1b,5c,97,6c),
	HX_("set_saturation",8f,44,b7,8c),
	HX_("get_brightness",1a,16,67,db),
	HX_("set_brightness",8e,fe,86,fb),
	HX_("toRGB",52,70,18,14),
	HX_("getColor",ed,80,33,aa),
	HX_("fromRGB",c3,8f,01,58),
	HX_("setColor",61,da,90,58),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	HX_("data",2a,56,63,42),
	::String(null()) };

::hx::Class HSB_obj::__mClass;

static ::String HSB_obj_sStaticFields[] = {
	HX_("loop",64,a6,b7,47),
	::String(null())
};

void HSB_obj::__register()
{
	HSB_obj _hx_dummy;
	HSB_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.HSB",99,39,dc,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HSB_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HSB_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HSB_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HSB_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HSB_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HSB_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
