#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Lab
#include <hxColorToolkit/spaces/Lab.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_RGB
#include <hxColorToolkit/spaces/RGB.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_XYZ
#include <hxColorToolkit/spaces/XYZ.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b5739bb1f74105c3_214_new,"hxColorToolkit.spaces.XYZ","new",0x43109d6d,"hxColorToolkit.spaces.XYZ.new","hxColorToolkit/spaces/XYZ.hx",214,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_38_getValue,"hxColorToolkit.spaces.XYZ","getValue",0x40ef52ce,"hxColorToolkit.spaces.XYZ.getValue","hxColorToolkit/spaces/XYZ.hx",38,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_41_setValue,"hxColorToolkit.spaces.XYZ","setValue",0xef4cac42,"hxColorToolkit.spaces.XYZ.setValue","hxColorToolkit/spaces/XYZ.hx",41,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_49_minValue,"hxColorToolkit.spaces.XYZ","minValue",0xd84fb052,"hxColorToolkit.spaces.XYZ.minValue","hxColorToolkit/spaces/XYZ.hx",49,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_53_maxValue,"hxColorToolkit.spaces.XYZ","maxValue",0x8b359600,"hxColorToolkit.spaces.XYZ.maxValue","hxColorToolkit/spaces/XYZ.hx",53,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_66_get_x,"hxColorToolkit.spaces.XYZ","get_x",0x96b48f9c,"hxColorToolkit.spaces.XYZ.get_x","hxColorToolkit/spaces/XYZ.hx",66,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_70_set_x,"hxColorToolkit.spaces.XYZ","set_x",0x7f8385a8,"hxColorToolkit.spaces.XYZ.set_x","hxColorToolkit/spaces/XYZ.hx",70,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_74_get_y,"hxColorToolkit.spaces.XYZ","get_y",0x96b48f9d,"hxColorToolkit.spaces.XYZ.get_y","hxColorToolkit/spaces/XYZ.hx",74,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_78_set_y,"hxColorToolkit.spaces.XYZ","set_y",0x7f8385a9,"hxColorToolkit.spaces.XYZ.set_y","hxColorToolkit/spaces/XYZ.hx",78,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_82_get_z,"hxColorToolkit.spaces.XYZ","get_z",0x96b48f9e,"hxColorToolkit.spaces.XYZ.get_z","hxColorToolkit/spaces/XYZ.hx",82,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_86_set_z,"hxColorToolkit.spaces.XYZ","set_z",0x7f8385aa,"hxColorToolkit.spaces.XYZ.set_z","hxColorToolkit/spaces/XYZ.hx",86,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_89_toRGB,"hxColorToolkit.spaces.XYZ","toRGB",0x196c5a9f,"hxColorToolkit.spaces.XYZ.toRGB","hxColorToolkit/spaces/XYZ.hx",89,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_120_getColor,"hxColorToolkit.spaces.XYZ","getColor",0x599344c0,"hxColorToolkit.spaces.XYZ.getColor","hxColorToolkit/spaces/XYZ.hx",120,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_155_fromRGB,"hxColorToolkit.spaces.XYZ","fromRGB",0x49de6750,"hxColorToolkit.spaces.XYZ.fromRGB","hxColorToolkit/spaces/XYZ.hx",155,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_186_toLab,"hxColorToolkit.spaces.XYZ","toLab",0x1967e3df,"hxColorToolkit.spaces.XYZ.toLab","hxColorToolkit/spaces/XYZ.hx",186,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_211_setColor,"hxColorToolkit.spaces.XYZ","setColor",0x07f09e34,"hxColorToolkit.spaces.XYZ.setColor","hxColorToolkit/spaces/XYZ.hx",211,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_223_clone,"hxColorToolkit.spaces.XYZ","clone",0x4db6fdaa,"hxColorToolkit.spaces.XYZ.clone","hxColorToolkit/spaces/XYZ.hx",223,0xb44f78c3)
HX_LOCAL_STACK_FRAME(_hx_pos_b5739bb1f74105c3_226_interpolate,"hxColorToolkit.spaces.XYZ","interpolate",0x8546f6ce,"hxColorToolkit.spaces.XYZ.interpolate","hxColorToolkit/spaces/XYZ.hx",226,0xb44f78c3)
namespace hxColorToolkit{
namespace spaces{

void XYZ_obj::__construct( ::Dynamic __o_x, ::Dynamic __o_y, ::Dynamic __o_z){
            		 ::Dynamic x = __o_x;
            		if (::hx::IsNull(__o_x)) x = 0;
            		 ::Dynamic y = __o_y;
            		if (::hx::IsNull(__o_y)) y = 0;
            		 ::Dynamic z = __o_z;
            		if (::hx::IsNull(__o_z)) z = 0;
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_214_new)
HXLINE( 215)		this->numOfChannels = 3;
HXLINE( 216)		this->data = ::Array_obj< Float >::__new(0);
HXLINE( 217)		this->set_x(( (Float)(x) ));
HXLINE( 218)		this->set_y(( (Float)(y) ));
HXLINE( 219)		this->set_z(( (Float)(z) ));
            	}

Dynamic XYZ_obj::__CreateEmpty() { return new XYZ_obj; }

void *XYZ_obj::_hx_vtable = 0;

Dynamic XYZ_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< XYZ_obj > _hx_result = new XYZ_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool XYZ_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e935441;
}

static ::hxColorToolkit::spaces::Color_obj _hx_hxColorToolkit_spaces_XYZ__hx_hxColorToolkit_spaces_Color= {
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::XYZ_obj::getValue,
	( Float (::hx::Object::*)(int,Float))&::hxColorToolkit::spaces::XYZ_obj::setValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::XYZ_obj::minValue,
	( Float (::hx::Object::*)(int))&::hxColorToolkit::spaces::XYZ_obj::maxValue,
	( int (::hx::Object::*)())&::hxColorToolkit::spaces::XYZ_obj::getColor,
	( ::Dynamic (::hx::Object::*)(int))&::hxColorToolkit::spaces::XYZ_obj::setColor_41e3b804,
	(  ::hxColorToolkit::spaces::RGB (::hx::Object::*)())&::hxColorToolkit::spaces::XYZ_obj::toRGB,
	( ::Dynamic (::hx::Object::*)( ::hxColorToolkit::spaces::RGB))&::hxColorToolkit::spaces::XYZ_obj::fromRGB_488978a0,
	( ::Dynamic (::hx::Object::*)())&::hxColorToolkit::spaces::XYZ_obj::clone_ee952b4b,
	( ::Dynamic (::hx::Object::*)(::Dynamic,::hx::Null< Float > ))&::hxColorToolkit::spaces::XYZ_obj::interpolate_7d0ba1d9,
};

::Dynamic XYZ_obj::interpolate_7d0ba1d9(::Dynamic target,::hx::Null< Float >  ratio) {
			return interpolate(target,ratio);
}

::Dynamic XYZ_obj::clone_ee952b4b() {
			return clone();
}

::Dynamic XYZ_obj::fromRGB_488978a0( ::hxColorToolkit::spaces::RGB rgb) {
			return fromRGB(rgb);
}

::Dynamic XYZ_obj::setColor_41e3b804(int c) {
			return setColor(c);
}
void *XYZ_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x98fa9e0b: return &_hx_hxColorToolkit_spaces_XYZ__hx_hxColorToolkit_spaces_Color;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float XYZ_obj::getValue(int channel){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_38_getValue)
HXDLIN(  38)		return this->data->__get(channel);
            	}


HX_DEFINE_DYNAMIC_FUNC1(XYZ_obj,getValue,return )

Float XYZ_obj::setValue(int channel,Float val){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_41_setValue)
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		if ((channel >= 0)) {
HXLINE(  42)			_hx_tmp = (channel >= this->numOfChannels);
            		}
            		else {
HXLINE(  42)			_hx_tmp = true;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  43)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("no such channel",a9,06,fa,95)));
            		}
HXLINE(  44)		::Array< Float > _hx_tmp1 = this->data;
HXDLIN(  44)		Float _hx_tmp2 = this->maxValue(channel);
HXDLIN(  44)		_hx_tmp1[channel] = ::Math_obj::min(_hx_tmp2,::Math_obj::max(val,( (Float)(0) )));
HXLINE(  45)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC2(XYZ_obj,setValue,return )

Float XYZ_obj::minValue(int channel){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_49_minValue)
HXDLIN(  49)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(XYZ_obj,minValue,return )

Float XYZ_obj::maxValue(int channel){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_53_maxValue)
HXDLIN(  53)		switch((int)(channel)){
            			case (int)0: {
HXLINE(  54)				return ((Float)95.047);
            			}
            			break;
            			case (int)1: {
HXLINE(  55)				return ((Float)100.000);
            			}
            			break;
            			case (int)2: {
HXLINE(  56)				return ((Float)108.883);
            			}
            			break;
            			default:{
HXLINE(  57)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("XYZ does not have channel ",c8,bc,92,bf) + channel)));
            			}
            		}
HXLINE(  53)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(XYZ_obj,maxValue,return )

Float XYZ_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_66_get_x)
HXDLIN(  66)		return this->getValue(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(XYZ_obj,get_x,return )

Float XYZ_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_70_set_x)
HXDLIN(  70)		return this->setValue(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(XYZ_obj,set_x,return )

Float XYZ_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_74_get_y)
HXDLIN(  74)		return this->getValue(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(XYZ_obj,get_y,return )

Float XYZ_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_78_set_y)
HXDLIN(  78)		return this->setValue(1,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(XYZ_obj,set_y,return )

Float XYZ_obj::get_z(){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_82_get_z)
HXDLIN(  82)		return this->getValue(2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(XYZ_obj,get_z,return )

Float XYZ_obj::set_z(Float value){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_86_set_z)
HXDLIN(  86)		return this->setValue(2,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(XYZ_obj,set_z,return )

 ::hxColorToolkit::spaces::RGB XYZ_obj::toRGB(){
            	HX_GC_STACKFRAME(&_hx_pos_b5739bb1f74105c3_89_toRGB)
HXLINE(  93)		Float x = (this->get_x() * ((Float)0.01));
HXLINE(  94)		Float y = (this->get_y() * ((Float)0.01));
HXLINE(  95)		Float z = (this->get_z() * ((Float)0.01));
HXLINE(  97)		Float r = (((x * ((Float)3.2406)) + (y * ((Float)-1.5372))) + (z * ((Float)-0.4986)));
HXLINE(  98)		Float g = (((x * ((Float)-0.9689)) + (y * ((Float)1.8758))) + (z * ((Float)0.0415)));
HXLINE(  99)		Float b = (((x * ((Float)0.0557)) + (y * ((Float)-0.2040))) + (z * ((Float)1.0570)));
HXLINE( 101)		if ((r > ((Float)0.0031308))) {
HXLINE( 102)			r = ((((Float)1.055) * ::Math_obj::pow(r,((Float)0.416666666666666685))) - ((Float)0.055));
            		}
            		else {
HXLINE( 104)			r = (((Float)12.92) * r);
            		}
HXLINE( 106)		if ((g > ((Float)0.0031308))) {
HXLINE( 107)			g = ((((Float)1.055) * ::Math_obj::pow(g,((Float)0.416666666666666685))) - ((Float)0.055));
            		}
            		else {
HXLINE( 109)			g = (((Float)12.92) * g);
            		}
HXLINE( 111)		if ((b > ((Float)0.0031308))) {
HXLINE( 112)			b = ((((Float)1.055) * ::Math_obj::pow(b,((Float)0.416666666666666685))) - ((Float)0.055));
            		}
            		else {
HXLINE( 114)			b = (((Float)12.92) * b);
            		}
HXLINE( 117)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,::Math_obj::round((r * ( (Float)(255) ))),::Math_obj::round((g * ( (Float)(255) ))),::Math_obj::round((b * ( (Float)(255) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(XYZ_obj,toRGB,return )

int XYZ_obj::getColor(){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_120_getColor)
HXLINE( 124)		Float x = (this->get_x() * ((Float)0.01));
HXLINE( 125)		Float y = (this->get_y() * ((Float)0.01));
HXLINE( 126)		Float z = (this->get_z() * ((Float)0.01));
HXLINE( 128)		Float r = (((x * ((Float)3.2406)) + (y * ((Float)-1.5372))) + (z * ((Float)-0.4986)));
HXLINE( 129)		Float g = (((x * ((Float)-0.9689)) + (y * ((Float)1.8758))) + (z * ((Float)0.0415)));
HXLINE( 130)		Float b = (((x * ((Float)0.0557)) + (y * ((Float)-0.2040))) + (z * ((Float)1.0570)));
HXLINE( 132)		if ((r > ((Float)0.0031308))) {
HXLINE( 133)			r = ((((Float)1.055) * ::Math_obj::pow(r,((Float)0.416666666666666685))) - ((Float)0.055));
            		}
            		else {
HXLINE( 135)			r = (((Float)12.92) * r);
            		}
HXLINE( 137)		if ((g > ((Float)0.0031308))) {
HXLINE( 138)			g = ((((Float)1.055) * ::Math_obj::pow(g,((Float)0.416666666666666685))) - ((Float)0.055));
            		}
            		else {
HXLINE( 140)			g = (((Float)12.92) * g);
            		}
HXLINE( 142)		if ((b > ((Float)0.0031308))) {
HXLINE( 143)			b = ((((Float)1.055) * ::Math_obj::pow(b,((Float)0.416666666666666685))) - ((Float)0.055));
            		}
            		else {
HXLINE( 145)			b = (((Float)12.92) * b);
            		}
HXLINE( 148)		int cR = (::Math_obj::round((r * ( (Float)(255) ))) << 16);
HXLINE( 149)		int cG = (::Math_obj::round((g * ( (Float)(255) ))) << 8);
HXLINE( 150)		int cB = ::Math_obj::round((b * ( (Float)(255) )));
HXLINE( 152)		return ((cR | cG) | cB);
            	}


HX_DEFINE_DYNAMIC_FUNC0(XYZ_obj,getColor,return )

 ::hxColorToolkit::spaces::XYZ XYZ_obj::fromRGB( ::hxColorToolkit::spaces::RGB rgb){
            	HX_STACKFRAME(&_hx_pos_b5739bb1f74105c3_155_fromRGB)
HXLINE( 156)		Float r = (rgb->get_red() / ( (Float)(255) ));
HXLINE( 157)		Float g = (rgb->get_green() / ( (Float)(255) ));
HXLINE( 158)		Float b = (rgb->get_blue() / ( (Float)(255) ));
HXLINE( 160)		if ((r > ((Float)0.04045))) {
HXLINE( 161)			r = ::Math_obj::pow(((r + ((Float)0.055)) / ((Float)1.055)),((Float)2.4));
            		}
            		else {
HXLINE( 163)			r = (r / ((Float)12.92));
            		}
HXLINE( 165)		if ((g > ((Float)0.04045))) {
HXLINE( 166)			g = ::Math_obj::pow(((g + ((Float)0.055)) / ((Float)1.055)),((Float)2.4));
            		}
            		else {
HXLINE( 168)			g = (g / ((Float)12.92));
            		}
HXLINE( 170)		if ((b > ((Float)0.04045))) {
HXLINE( 171)			b = ::Math_obj::pow(((b + ((Float)0.055)) / ((Float)1.055)),((Float)2.4));
            		}
            		else {
HXLINE( 173)			b = (b / ((Float)12.92));
            		}
HXLINE( 175)		r = (r * ( (Float)(100) ));
HXLINE( 176)		g = (g * ( (Float)(100) ));
HXLINE( 177)		b = (b * ( (Float)(100) ));
HXLINE( 180)		this->set_x((((r * ((Float)0.4124)) + (g * ((Float)0.3576))) + (b * ((Float)0.1805))));
HXLINE( 181)		this->set_y((((r * ((Float)0.2126)) + (g * ((Float)0.7152))) + (b * ((Float)0.0722))));
HXLINE( 182)		this->set_z((((r * ((Float)0.0193)) + (g * ((Float)0.1192))) + (b * ((Float)0.9505))));
HXLINE( 183)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(XYZ_obj,fromRGB,return )

 ::hxColorToolkit::spaces::Lab XYZ_obj::toLab(){
            	HX_GC_STACKFRAME(&_hx_pos_b5739bb1f74105c3_186_toLab)
HXLINE( 187)		Float x = (this->get_x() / ((Float)95.047));
HXLINE( 188)		Float y = (this->get_y() / ((Float)100.000));
HXLINE( 189)		Float z = (this->get_z() / ((Float)108.883));
HXLINE( 191)		if ((x > ((Float)0.008856))) {
HXLINE( 192)			x = ::Math_obj::pow(x,((Float)0.333333333333333315));
            		}
            		else {
HXLINE( 194)			x = ((((Float)7.787) * x) + ((Float)0.137931034482758619));
            		}
HXLINE( 196)		if ((y > ((Float)0.008856))) {
HXLINE( 197)			y = ::Math_obj::pow(y,((Float)0.333333333333333315));
            		}
            		else {
HXLINE( 199)			y = ((((Float)7.787) * y) + ((Float)0.137931034482758619));
            		}
HXLINE( 201)		if ((z > ((Float)0.008856))) {
HXLINE( 202)			z = ::Math_obj::pow(z,((Float)0.333333333333333315));
            		}
            		else {
HXLINE( 204)			z = ((((Float)7.787) * z) + ((Float)0.137931034482758619));
            		}
HXLINE( 207)		return  ::hxColorToolkit::spaces::Lab_obj::__alloc( HX_CTX ,((( (Float)(116) ) * y) - ( (Float)(16) )),(( (Float)(500) ) * (x - y)),(( (Float)(200) ) * (y - z)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(XYZ_obj,toLab,return )

 ::hxColorToolkit::spaces::XYZ XYZ_obj::setColor(int color){
            	HX_GC_STACKFRAME(&_hx_pos_b5739bb1f74105c3_211_setColor)
HXDLIN( 211)		return this->fromRGB( ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,((color >> 16) & 255),((color >> 8) & 255),(color & 255)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(XYZ_obj,setColor,return )

 ::hxColorToolkit::spaces::XYZ XYZ_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b5739bb1f74105c3_223_clone)
HXDLIN( 223)		Float _hx_tmp = this->get_x();
HXDLIN( 223)		Float _hx_tmp1 = this->get_y();
HXDLIN( 223)		return  ::hxColorToolkit::spaces::XYZ_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->get_z());
            	}


HX_DEFINE_DYNAMIC_FUNC0(XYZ_obj,clone,return )

 ::hxColorToolkit::spaces::XYZ XYZ_obj::interpolate(::Dynamic target,::hx::Null< Float >  __o_ratio){
            		Float ratio = __o_ratio.Default(((Float)0.5));
            	HX_GC_STACKFRAME(&_hx_pos_b5739bb1f74105c3_226_interpolate)
HXLINE( 227)		 ::hxColorToolkit::spaces::XYZ target1;
HXDLIN( 227)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::hxColorToolkit::spaces::XYZ >()) ))) {
HXLINE( 227)			target1 = ( ( ::hxColorToolkit::spaces::XYZ)(target) );
            		}
            		else {
HXLINE( 227)			 ::hxColorToolkit::spaces::XYZ target2 =  ::hxColorToolkit::spaces::XYZ_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 227)			target1 = target2->fromRGB(::hxColorToolkit::spaces::Color_obj::toRGB(target));
            		}
HXLINE( 228)		Float _hx_tmp = this->get_x();
HXDLIN( 228)		Float _hx_tmp1 = target1->get_x();
HXDLIN( 228)		Float _hx_tmp2 = (_hx_tmp + ((_hx_tmp1 - this->get_x()) * ratio));
HXDLIN( 228)		Float _hx_tmp3 = this->get_y();
HXDLIN( 228)		Float _hx_tmp4 = target1->get_y();
HXDLIN( 228)		Float _hx_tmp5 = (_hx_tmp3 + ((_hx_tmp4 - this->get_y()) * ratio));
HXDLIN( 228)		Float _hx_tmp6 = this->get_z();
HXDLIN( 228)		Float _hx_tmp7 = target1->get_z();
HXDLIN( 228)		return  ::hxColorToolkit::spaces::XYZ_obj::__alloc( HX_CTX ,_hx_tmp2,_hx_tmp5,(_hx_tmp6 + ((_hx_tmp7 - this->get_z()) * ratio)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(XYZ_obj,interpolate,return )


::hx::ObjectPtr< XYZ_obj > XYZ_obj::__new( ::Dynamic __o_x, ::Dynamic __o_y, ::Dynamic __o_z) {
	::hx::ObjectPtr< XYZ_obj > __this = new XYZ_obj();
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

::hx::ObjectPtr< XYZ_obj > XYZ_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_x, ::Dynamic __o_y, ::Dynamic __o_z) {
	XYZ_obj *__this = (XYZ_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(XYZ_obj), true, "hxColorToolkit.spaces.XYZ"));
	*(void **)__this = XYZ_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

XYZ_obj::XYZ_obj()
{
}

void XYZ_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(XYZ);
	HX_MARK_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void XYZ_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numOfChannels,"numOfChannels");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val XYZ_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_z() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return ::hx::Val( get_z_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return ::hx::Val( set_z_dyn() ); }
		if (HX_FIELD_EQ(inName,"toRGB") ) { return ::hx::Val( toRGB_dyn() ); }
		if (HX_FIELD_EQ(inName,"toLab") ) { return ::hx::Val( toLab_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
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
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return ::hx::Val( interpolate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { return ::hx::Val( numOfChannels ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val XYZ_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_z(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numOfChannels") ) { numOfChannels=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void XYZ_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numOfChannels",6d,ec,b1,8b));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo XYZ_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(XYZ_obj,numOfChannels),HX_("numOfChannels",6d,ec,b1,8b)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(XYZ_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *XYZ_obj_sStaticStorageInfo = 0;
#endif

static ::String XYZ_obj_sMemberFields[] = {
	HX_("numOfChannels",6d,ec,b1,8b),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_z",51,a5,60,91),
	HX_("set_z",5d,9b,2f,7a),
	HX_("toRGB",52,70,18,14),
	HX_("getColor",ed,80,33,aa),
	HX_("fromRGB",c3,8f,01,58),
	HX_("toLab",92,f9,13,14),
	HX_("setColor",61,da,90,58),
	HX_("clone",5d,13,63,48),
	HX_("interpolate",c1,d4,32,1f),
	HX_("data",2a,56,63,42),
	::String(null()) };

::hx::Class XYZ_obj::__mClass;

void XYZ_obj::__register()
{
	XYZ_obj _hx_dummy;
	XYZ_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.spaces.XYZ",fb,62,e8,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(XYZ_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< XYZ_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XYZ_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XYZ_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxColorToolkit
} // end namespace spaces
