#include <hxcpp.h>

#ifndef INCLUDED_hxColorToolkit_ColorToolkit
#include <hxColorToolkit/ColorToolkit.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_Analogous
#include <hxColorToolkit/schemes/Analogous.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorScheme
#include <hxColorToolkit/schemes/ColorScheme.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_ColorWheelScheme
#include <hxColorToolkit/schemes/ColorWheelScheme.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_Complementary
#include <hxColorToolkit/schemes/Complementary.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_Compound
#include <hxColorToolkit/schemes/Compound.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_FlippedCompound
#include <hxColorToolkit/schemes/FlippedCompound.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_Monochrome
#include <hxColorToolkit/schemes/Monochrome.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_SplitComplementary
#include <hxColorToolkit/schemes/SplitComplementary.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_Tetrad
#include <hxColorToolkit/schemes/Tetrad.h>
#endif
#ifndef INCLUDED_hxColorToolkit_schemes_Triad
#include <hxColorToolkit/schemes/Triad.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_ARGB
#include <hxColorToolkit/spaces/ARGB.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_CMYK
#include <hxColorToolkit/spaces/CMYK.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Color
#include <hxColorToolkit/spaces/Color.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Gray
#include <hxColorToolkit/spaces/Gray.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_HSB
#include <hxColorToolkit/spaces/HSB.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_HSL
#include <hxColorToolkit/spaces/HSL.h>
#endif
#ifndef INCLUDED_hxColorToolkit_spaces_Hex
#include <hxColorToolkit/spaces/Hex.h>
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
#ifndef INCLUDED_hxColorToolkit_spaces_YUV
#include <hxColorToolkit/spaces/YUV.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_19_setColorOpaque,"hxColorToolkit.ColorToolkit","setColorOpaque",0x50263d52,"hxColorToolkit.ColorToolkit.setColorOpaque","hxColorToolkit/ColorToolkit.hx",19,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_21_desaturate,"hxColorToolkit.ColorToolkit","desaturate",0x9064cba0,"hxColorToolkit.ColorToolkit.desaturate","hxColorToolkit/ColorToolkit.hx",21,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_23_getComplement,"hxColorToolkit.ColorToolkit","getComplement",0xb49f81ec,"hxColorToolkit.ColorToolkit.getComplement","hxColorToolkit/ColorToolkit.hx",23,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_26_shiftBrighteness,"hxColorToolkit.ColorToolkit","shiftBrighteness",0xf50932d0,"hxColorToolkit.ColorToolkit.shiftBrighteness","hxColorToolkit/ColorToolkit.hx",26,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_35_shiftSaturation,"hxColorToolkit.ColorToolkit","shiftSaturation",0xb85a71c4,"hxColorToolkit.ColorToolkit.shiftSaturation","hxColorToolkit/ColorToolkit.hx",35,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_44_shiftHue,"hxColorToolkit.ColorToolkit","shiftHue",0x316f6886,"hxColorToolkit.ColorToolkit.shiftHue","hxColorToolkit/ColorToolkit.hx",44,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_54_toLab,"hxColorToolkit.ColorToolkit","toLab",0x03858c62,"hxColorToolkit.ColorToolkit.toLab","hxColorToolkit/ColorToolkit.hx",54,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_59_toGray,"hxColorToolkit.ColorToolkit","toGray",0x0e141e2e,"hxColorToolkit.ColorToolkit.toGray","hxColorToolkit/ColorToolkit.hx",59,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_64_toRGB,"hxColorToolkit.ColorToolkit","toRGB",0x038a0322,"hxColorToolkit.ColorToolkit.toRGB","hxColorToolkit/ColorToolkit.hx",64,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_69_toARGB,"hxColorToolkit.ColorToolkit","toARGB",0x0a047777,"hxColorToolkit.ColorToolkit.toARGB","hxColorToolkit/ColorToolkit.hx",69,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_74_toHSB,"hxColorToolkit.ColorToolkit","toHSB",0x0382770c,"hxColorToolkit.ColorToolkit.toHSB","hxColorToolkit/ColorToolkit.hx",74,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_79_toHSL,"hxColorToolkit.ColorToolkit","toHSL",0x03827716,"hxColorToolkit.ColorToolkit.toHSL","hxColorToolkit/ColorToolkit.hx",79,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_84_toCMYK,"hxColorToolkit.ColorToolkit","toCMYK",0x0b532927,"hxColorToolkit.ColorToolkit.toCMYK","hxColorToolkit/ColorToolkit.hx",84,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_89_toXYZ,"hxColorToolkit.ColorToolkit","toXYZ",0x038ea06e,"hxColorToolkit.ColorToolkit.toXYZ","hxColorToolkit/ColorToolkit.hx",89,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_94_toYUV,"hxColorToolkit.ColorToolkit","toYUV",0x038f5f2f,"hxColorToolkit.ColorToolkit.toYUV","hxColorToolkit/ColorToolkit.hx",94,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_99_toHex,"hxColorToolkit.ColorToolkit","toHex",0x038286f0,"hxColorToolkit.ColorToolkit.toHex","hxColorToolkit/ColorToolkit.hx",99,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_103_getAnalogousScheme,"hxColorToolkit.ColorToolkit","getAnalogousScheme",0x78330b9c,"hxColorToolkit.ColorToolkit.getAnalogousScheme","hxColorToolkit/ColorToolkit.hx",103,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_107_getComplementaryScheme,"hxColorToolkit.ColorToolkit","getComplementaryScheme",0x8d793141,"hxColorToolkit.ColorToolkit.getComplementaryScheme","hxColorToolkit/ColorToolkit.hx",107,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_111_getCompoundScheme,"hxColorToolkit.ColorToolkit","getCompoundScheme",0xb2b073f6,"hxColorToolkit.ColorToolkit.getCompoundScheme","hxColorToolkit/ColorToolkit.hx",111,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_115_getFlippedCompoundScheme,"hxColorToolkit.ColorToolkit","getFlippedCompoundScheme",0x20e01c8c,"hxColorToolkit.ColorToolkit.getFlippedCompoundScheme","hxColorToolkit/ColorToolkit.hx",115,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_119_getMonochromeScheme,"hxColorToolkit.ColorToolkit","getMonochromeScheme",0x5f723168,"hxColorToolkit.ColorToolkit.getMonochromeScheme","hxColorToolkit/ColorToolkit.hx",119,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_123_getSplitComplementaryScheme,"hxColorToolkit.ColorToolkit","getSplitComplementaryScheme",0xd4c3bbd3,"hxColorToolkit.ColorToolkit.getSplitComplementaryScheme","hxColorToolkit/ColorToolkit.hx",123,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_127_getTetradScheme,"hxColorToolkit.ColorToolkit","getTetradScheme",0xcb0fd21d,"hxColorToolkit.ColorToolkit.getTetradScheme","hxColorToolkit/ColorToolkit.hx",127,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_131_getTriadScheme,"hxColorToolkit.ColorToolkit","getTriadScheme",0x41b727cd,"hxColorToolkit.ColorToolkit.getTriadScheme","hxColorToolkit/ColorToolkit.hx",131,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_136_rybRotate,"hxColorToolkit.ColorToolkit","rybRotate",0x23401e46,"hxColorToolkit.ColorToolkit.rybRotate","hxColorToolkit/ColorToolkit.hx",136,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_176_intArray,"hxColorToolkit.ColorToolkit","intArray",0x05de9d5a,"hxColorToolkit.ColorToolkit.intArray","hxColorToolkit/ColorToolkit.hx",176,0x68c20f5f)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba765084181bd96_17_boot,"hxColorToolkit.ColorToolkit","boot",0x928a3b62,"hxColorToolkit.ColorToolkit.boot","hxColorToolkit/ColorToolkit.hx",17,0x68c20f5f)
static const int _hx_array_data_5340f73e_30[] = {
	(int)0,(int)0,
};
static const int _hx_array_data_5340f73e_31[] = {
	(int)15,(int)8,
};
static const int _hx_array_data_5340f73e_32[] = {
	(int)30,(int)17,
};
static const int _hx_array_data_5340f73e_33[] = {
	(int)45,(int)26,
};
static const int _hx_array_data_5340f73e_34[] = {
	(int)60,(int)34,
};
static const int _hx_array_data_5340f73e_35[] = {
	(int)75,(int)41,
};
static const int _hx_array_data_5340f73e_36[] = {
	(int)90,(int)48,
};
static const int _hx_array_data_5340f73e_37[] = {
	(int)105,(int)54,
};
static const int _hx_array_data_5340f73e_38[] = {
	(int)120,(int)60,
};
static const int _hx_array_data_5340f73e_39[] = {
	(int)135,(int)81,
};
static const int _hx_array_data_5340f73e_40[] = {
	(int)150,(int)103,
};
static const int _hx_array_data_5340f73e_41[] = {
	(int)165,(int)123,
};
static const int _hx_array_data_5340f73e_42[] = {
	(int)180,(int)138,
};
static const int _hx_array_data_5340f73e_43[] = {
	(int)195,(int)155,
};
static const int _hx_array_data_5340f73e_44[] = {
	(int)210,(int)171,
};
static const int _hx_array_data_5340f73e_45[] = {
	(int)225,(int)187,
};
static const int _hx_array_data_5340f73e_46[] = {
	(int)240,(int)204,
};
static const int _hx_array_data_5340f73e_47[] = {
	(int)255,(int)219,
};
static const int _hx_array_data_5340f73e_48[] = {
	(int)270,(int)234,
};
static const int _hx_array_data_5340f73e_49[] = {
	(int)285,(int)251,
};
static const int _hx_array_data_5340f73e_50[] = {
	(int)300,(int)267,
};
static const int _hx_array_data_5340f73e_51[] = {
	(int)315,(int)282,
};
static const int _hx_array_data_5340f73e_52[] = {
	(int)330,(int)298,
};
static const int _hx_array_data_5340f73e_53[] = {
	(int)345,(int)329,
};
static const int _hx_array_data_5340f73e_54[] = {
	(int)360,(int)0,
};
namespace hxColorToolkit{

void ColorToolkit_obj::__construct() { }

Dynamic ColorToolkit_obj::__CreateEmpty() { return new ColorToolkit_obj; }

void *ColorToolkit_obj::_hx_vtable = 0;

Dynamic ColorToolkit_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorToolkit_obj > _hx_result = new ColorToolkit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorToolkit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21147ed6;
}

::Array< ::Dynamic> ColorToolkit_obj::rybWheel;

int ColorToolkit_obj::setColorOpaque(int color, ::Dynamic __o_opaqueValue){
            		 ::Dynamic opaqueValue = __o_opaqueValue;
            		if (::hx::IsNull(__o_opaqueValue)) opaqueValue = 255;
            	HX_STACKFRAME(&_hx_pos_4ba765084181bd96_19_setColorOpaque)
HXDLIN(  19)		return ((( (int)(opaqueValue) ) << 24) | (color & 16777215));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorToolkit_obj,setColorOpaque,return )

int ColorToolkit_obj::desaturate(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_21_desaturate)
HXDLIN(  21)		return  ::hxColorToolkit::spaces::Gray_obj::__alloc( HX_CTX ,null())->setColor(color)->getColor();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,desaturate,return )

int ColorToolkit_obj::getComplement(int color){
            	HX_STACKFRAME(&_hx_pos_4ba765084181bd96_23_getComplement)
HXDLIN(  23)		return ::hxColorToolkit::ColorToolkit_obj::rybRotate(color,( (Float)(180) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,getComplement,return )

int ColorToolkit_obj::shiftBrighteness(int color,Float degree){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_26_shiftBrighteness)
HXLINE(  27)		 ::hxColorToolkit::spaces::HSB col =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(color);
HXLINE(  29)		col->set_brightness((col->get_brightness() + degree));
HXLINE(  31)		return col->getColor();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorToolkit_obj,shiftBrighteness,return )

int ColorToolkit_obj::shiftSaturation(int color,Float degree){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_35_shiftSaturation)
HXLINE(  36)		 ::hxColorToolkit::spaces::HSB col =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(color);
HXLINE(  38)		col->set_saturation((col->get_saturation() + degree));
HXLINE(  40)		return col->getColor();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorToolkit_obj,shiftSaturation,return )

int ColorToolkit_obj::shiftHue(int color,Float degree){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_44_shiftHue)
HXLINE(  45)		 ::hxColorToolkit::spaces::HSB col =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(color);
HXLINE(  47)		col->set_hue((col->get_hue() + degree));
HXLINE(  49)		return col->getColor();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorToolkit_obj,shiftHue,return )

 ::hxColorToolkit::spaces::Lab ColorToolkit_obj::toLab(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_54_toLab)
HXDLIN(  54)		return  ::hxColorToolkit::spaces::Lab_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(color);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toLab,return )

 ::hxColorToolkit::spaces::Gray ColorToolkit_obj::toGray(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_59_toGray)
HXDLIN(  59)		return  ::hxColorToolkit::spaces::Gray_obj::__alloc( HX_CTX ,null())->setColor(color);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toGray,return )

 ::hxColorToolkit::spaces::RGB ColorToolkit_obj::toRGB(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_64_toRGB)
HXDLIN(  64)		return  ::hxColorToolkit::spaces::RGB_obj::__alloc( HX_CTX ,((color >> 16) & 255),((color >> 8) & 255),(color & 255));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toRGB,return )

 ::hxColorToolkit::spaces::RGB ColorToolkit_obj::toARGB(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_69_toARGB)
HXDLIN(  69)		return  ::hxColorToolkit::spaces::ARGB_obj::__alloc( HX_CTX ,((color >> 24) & 255),((color >> 16) & 255),((color >> 8) & 255),(color & 255));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toARGB,return )

 ::hxColorToolkit::spaces::HSB ColorToolkit_obj::toHSB(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_74_toHSB)
HXDLIN(  74)		return  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(color);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toHSB,return )

 ::hxColorToolkit::spaces::HSL ColorToolkit_obj::toHSL(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_79_toHSL)
HXDLIN(  79)		return  ::hxColorToolkit::spaces::HSL_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(color);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toHSL,return )

 ::hxColorToolkit::spaces::CMYK ColorToolkit_obj::toCMYK(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_84_toCMYK)
HXDLIN(  84)		return  ::hxColorToolkit::spaces::CMYK_obj::__alloc( HX_CTX ,null(),null(),null(),null())->setColor(color);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toCMYK,return )

 ::hxColorToolkit::spaces::XYZ ColorToolkit_obj::toXYZ(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_89_toXYZ)
HXDLIN(  89)		return  ::hxColorToolkit::spaces::XYZ_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(color);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toXYZ,return )

 ::hxColorToolkit::spaces::YUV ColorToolkit_obj::toYUV(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_94_toYUV)
HXDLIN(  94)		return  ::hxColorToolkit::spaces::YUV_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(color);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toYUV,return )

 ::hxColorToolkit::spaces::Hex ColorToolkit_obj::toHex(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_99_toHex)
HXDLIN(  99)		return  ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,color);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,toHex,return )

 ::hxColorToolkit::schemes::Analogous ColorToolkit_obj::getAnalogousScheme(int color, ::Dynamic __o_angle, ::Dynamic __o_contrast){
            		 ::Dynamic angle = __o_angle;
            		if (::hx::IsNull(__o_angle)) angle = 10;
            		 ::Dynamic contrast = __o_contrast;
            		if (::hx::IsNull(__o_contrast)) contrast = 25;
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_103_getAnalogousScheme)
HXDLIN( 103)		return  ::hxColorToolkit::schemes::Analogous_obj::__alloc( HX_CTX , ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,color),angle,contrast);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorToolkit_obj,getAnalogousScheme,return )

 ::hxColorToolkit::schemes::Complementary ColorToolkit_obj::getComplementaryScheme(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_107_getComplementaryScheme)
HXDLIN( 107)		return  ::hxColorToolkit::schemes::Complementary_obj::__alloc( HX_CTX , ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,getComplementaryScheme,return )

 ::hxColorToolkit::schemes::Compound ColorToolkit_obj::getCompoundScheme(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_111_getCompoundScheme)
HXDLIN( 111)		return  ::hxColorToolkit::schemes::Compound_obj::__alloc( HX_CTX , ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,getCompoundScheme,return )

 ::hxColorToolkit::schemes::FlippedCompound ColorToolkit_obj::getFlippedCompoundScheme(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_115_getFlippedCompoundScheme)
HXDLIN( 115)		return  ::hxColorToolkit::schemes::FlippedCompound_obj::__alloc( HX_CTX , ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,getFlippedCompoundScheme,return )

 ::hxColorToolkit::schemes::Monochrome ColorToolkit_obj::getMonochromeScheme(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_119_getMonochromeScheme)
HXDLIN( 119)		return  ::hxColorToolkit::schemes::Monochrome_obj::__alloc( HX_CTX , ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,getMonochromeScheme,return )

 ::hxColorToolkit::schemes::SplitComplementary ColorToolkit_obj::getSplitComplementaryScheme(int color){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_123_getSplitComplementaryScheme)
HXDLIN( 123)		return  ::hxColorToolkit::schemes::SplitComplementary_obj::__alloc( HX_CTX , ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,color));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,getSplitComplementaryScheme,return )

 ::hxColorToolkit::schemes::Tetrad ColorToolkit_obj::getTetradScheme(int color, ::Dynamic __o_angle, ::Dynamic __o_alt){
            		 ::Dynamic angle = __o_angle;
            		if (::hx::IsNull(__o_angle)) angle = 90;
            		 ::Dynamic alt = __o_alt;
            		if (::hx::IsNull(__o_alt)) alt = false;
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_127_getTetradScheme)
HXDLIN( 127)		return  ::hxColorToolkit::schemes::Tetrad_obj::__alloc( HX_CTX , ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,color),angle,alt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorToolkit_obj,getTetradScheme,return )

 ::hxColorToolkit::schemes::Triad ColorToolkit_obj::getTriadScheme(int color, ::Dynamic __o_angle){
            		 ::Dynamic angle = __o_angle;
            		if (::hx::IsNull(__o_angle)) angle = 120;
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_131_getTriadScheme)
HXDLIN( 131)		return  ::hxColorToolkit::schemes::Triad_obj::__alloc( HX_CTX , ::hxColorToolkit::spaces::Hex_obj::__alloc( HX_CTX ,color),angle);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorToolkit_obj,getTriadScheme,return )

int ColorToolkit_obj::rybRotate(int color,Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_4ba765084181bd96_136_rybRotate)
HXLINE( 137)		 ::hxColorToolkit::spaces::HSB hsb =  ::hxColorToolkit::spaces::HSB_obj::__alloc( HX_CTX ,null(),null(),null())->setColor(color);
HXLINE( 139)		Float a = ( (Float)(0) );
HXLINE( 140)		{
HXLINE( 140)			int _g = 0;
HXDLIN( 140)			int _g1 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->length;
HXDLIN( 140)			while((_g < _g1)){
HXLINE( 140)				_g = (_g + 1);
HXDLIN( 140)				int i = (_g - 1);
HXLINE( 141)				int x0 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->__get(i).StaticCast< ::Array< int > >()->__get(0);
HXLINE( 142)				int y0 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->__get(i).StaticCast< ::Array< int > >()->__get(1);
HXLINE( 144)				int x1 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->__get((i + 1)).StaticCast< ::Array< int > >()->__get(0);
HXLINE( 145)				int y1 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->__get((i + 1)).StaticCast< ::Array< int > >()->__get(1);
HXLINE( 146)				if ((y1 < y0)) {
HXLINE( 146)					y1 = (y1 + 360);
            				}
HXLINE( 147)				bool _hx_tmp;
HXDLIN( 147)				if ((y0 <= hsb->get_hue())) {
HXLINE( 147)					_hx_tmp = (hsb->get_hue() <= y1);
            				}
            				else {
HXLINE( 147)					_hx_tmp = false;
            				}
HXDLIN( 147)				if (_hx_tmp) {
HXLINE( 148)					a = ((((Float)1.0) * ( (Float)(x0) )) + ((( (Float)((x1 - x0)) ) * (hsb->get_hue() - ( (Float)(y0) ))) / ( (Float)((y1 - y0)) )));
HXLINE( 149)					goto _hx_goto_24;
            				}
            			}
            			_hx_goto_24:;
            		}
HXLINE( 153)		a = (a + ::hx::Mod(angle,360));
HXLINE( 154)		if ((a < 0)) {
HXLINE( 154)			a = (360 + a);
            		}
HXLINE( 155)		if ((a > 360)) {
HXLINE( 155)			a = (a - ( (Float)(360) ));
            		}
HXLINE( 156)		a = ::hx::Mod(a,360);
HXLINE( 158)		Float newHue = ( (Float)(0) );
HXLINE( 159)		{
HXLINE( 159)			int _g2 = 0;
HXDLIN( 159)			int _g3 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->length;
HXDLIN( 159)			while((_g2 < _g3)){
HXLINE( 159)				_g2 = (_g2 + 1);
HXDLIN( 159)				int k = (_g2 - 1);
HXLINE( 160)				int xx0 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->__get(k).StaticCast< ::Array< int > >()->__get(0);
HXLINE( 161)				int yy0 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->__get(k).StaticCast< ::Array< int > >()->__get(1);
HXLINE( 163)				int xx1 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->__get((k + 1)).StaticCast< ::Array< int > >()->__get(0);
HXLINE( 164)				int yy1 = ::hxColorToolkit::ColorToolkit_obj::rybWheel->__get((k + 1)).StaticCast< ::Array< int > >()->__get(1);
HXLINE( 165)				if ((yy1 < yy0)) {
HXLINE( 165)					yy1 = (yy1 + 360);
            				}
HXLINE( 166)				bool _hx_tmp;
HXDLIN( 166)				if ((xx0 <= a)) {
HXLINE( 166)					_hx_tmp = (a <= xx1);
            				}
            				else {
HXLINE( 166)					_hx_tmp = false;
            				}
HXDLIN( 166)				if (_hx_tmp) {
HXLINE( 167)					newHue = (yy0 + ((( (Float)((yy1 - yy0)) ) * (a - ( (Float)(xx0) ))) / ( (Float)((xx1 - xx0)) )));
HXLINE( 168)					goto _hx_goto_25;
            				}
            			}
            			_hx_goto_25:;
            		}
HXLINE( 171)		hsb->set_hue(newHue);
HXLINE( 173)		return hsb->getColor();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorToolkit_obj,rybRotate,return )

::Array< int > ColorToolkit_obj::intArray(::Dynamic colors){
            	HX_STACKFRAME(&_hx_pos_4ba765084181bd96_176_intArray)
HXLINE( 177)		::Array< int > a = ::Array_obj< int >::__new(0);
HXLINE( 178)		{
HXLINE( 178)			 ::Dynamic c = ::hxColorToolkit::schemes::ColorScheme_obj::iterator(colors);
HXDLIN( 178)			while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 178)				 ::Dynamic c1 = c->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 179)				a->push(c1->__Field(HX_("getColor",ed,80,33,aa),::hx::paccDynamic)());
            			}
            		}
HXLINE( 181)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorToolkit_obj,intArray,return )


ColorToolkit_obj::ColorToolkit_obj()
{
}

bool ColorToolkit_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toLab") ) { outValue = toLab_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toRGB") ) { outValue = toRGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHSB") ) { outValue = toHSB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHSL") ) { outValue = toHSL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toXYZ") ) { outValue = toXYZ_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toYUV") ) { outValue = toYUV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHex") ) { outValue = toHex_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGray") ) { outValue = toGray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toARGB") ) { outValue = toARGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toCMYK") ) { outValue = toCMYK_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rybWheel") ) { outValue = ( rybWheel ); return true; }
		if (HX_FIELD_EQ(inName,"shiftHue") ) { outValue = shiftHue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"intArray") ) { outValue = intArray_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rybRotate") ) { outValue = rybRotate_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"desaturate") ) { outValue = desaturate_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getComplement") ) { outValue = getComplement_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setColorOpaque") ) { outValue = setColorOpaque_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTriadScheme") ) { outValue = getTriadScheme_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"shiftSaturation") ) { outValue = shiftSaturation_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTetradScheme") ) { outValue = getTetradScheme_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"shiftBrighteness") ) { outValue = shiftBrighteness_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getCompoundScheme") ) { outValue = getCompoundScheme_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getAnalogousScheme") ) { outValue = getAnalogousScheme_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getMonochromeScheme") ) { outValue = getMonochromeScheme_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getComplementaryScheme") ) { outValue = getComplementaryScheme_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getFlippedCompoundScheme") ) { outValue = getFlippedCompoundScheme_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getSplitComplementaryScheme") ) { outValue = getSplitComplementaryScheme_dyn(); return true; }
	}
	return false;
}

bool ColorToolkit_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"rybWheel") ) { rybWheel=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ColorToolkit_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ColorToolkit_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &ColorToolkit_obj::rybWheel,HX_("rybWheel",e0,f3,fc,ab)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ColorToolkit_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorToolkit_obj::rybWheel,"rybWheel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorToolkit_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorToolkit_obj::rybWheel,"rybWheel");
};

#endif

::hx::Class ColorToolkit_obj::__mClass;

static ::String ColorToolkit_obj_sStaticFields[] = {
	HX_("rybWheel",e0,f3,fc,ab),
	HX_("setColorOpaque",22,aa,d8,80),
	HX_("desaturate",70,90,8c,d4),
	HX_("getComplement",1c,9f,26,5a),
	HX_("shiftBrighteness",a0,73,cc,88),
	HX_("shiftSaturation",f4,3a,c7,23),
	HX_("shiftHue",56,59,9d,99),
	HX_("toLab",92,f9,13,14),
	HX_("toGray",fe,3a,25,7a),
	HX_("toRGB",52,70,18,14),
	HX_("toARGB",47,94,15,76),
	HX_("toHSB",3c,e4,10,14),
	HX_("toHSL",46,e4,10,14),
	HX_("toCMYK",f7,45,64,77),
	HX_("toXYZ",9e,0d,1d,14),
	HX_("toYUV",5f,cc,1d,14),
	HX_("toHex",20,f4,10,14),
	HX_("getAnalogousScheme",6c,20,e4,f3),
	HX_("getComplementaryScheme",11,ee,9c,fc),
	HX_("getCompoundScheme",26,e9,c5,69),
	HX_("getFlippedCompoundScheme",5c,ad,08,6e),
	HX_("getMonochromeScheme",98,52,b3,1e),
	HX_("getSplitComplementaryScheme",03,8d,d1,e8),
	HX_("getTetradScheme",4d,9b,7c,36),
	HX_("getTriadScheme",9d,94,69,72),
	HX_("rybRotate",76,e3,44,e3),
	HX_("intArray",2a,8e,0c,6e),
	::String(null())
};

void ColorToolkit_obj::__register()
{
	ColorToolkit_obj _hx_dummy;
	ColorToolkit_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxColorToolkit.ColorToolkit",3e,f7,40,53);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorToolkit_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorToolkit_obj::__SetStatic;
	__mClass->mMarkFunc = ColorToolkit_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorToolkit_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ColorToolkit_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorToolkit_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorToolkit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorToolkit_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ColorToolkit_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4ba765084181bd96_17_boot)
HXDLIN(  17)		rybWheel = ::Array_obj< ::Dynamic>::__new(25)->init(0,::Array_obj< int >::fromData( _hx_array_data_5340f73e_30,2))->init(1,::Array_obj< int >::fromData( _hx_array_data_5340f73e_31,2))->init(2,::Array_obj< int >::fromData( _hx_array_data_5340f73e_32,2))->init(3,::Array_obj< int >::fromData( _hx_array_data_5340f73e_33,2))->init(4,::Array_obj< int >::fromData( _hx_array_data_5340f73e_34,2))->init(5,::Array_obj< int >::fromData( _hx_array_data_5340f73e_35,2))->init(6,::Array_obj< int >::fromData( _hx_array_data_5340f73e_36,2))->init(7,::Array_obj< int >::fromData( _hx_array_data_5340f73e_37,2))->init(8,::Array_obj< int >::fromData( _hx_array_data_5340f73e_38,2))->init(9,::Array_obj< int >::fromData( _hx_array_data_5340f73e_39,2))->init(10,::Array_obj< int >::fromData( _hx_array_data_5340f73e_40,2))->init(11,::Array_obj< int >::fromData( _hx_array_data_5340f73e_41,2))->init(12,::Array_obj< int >::fromData( _hx_array_data_5340f73e_42,2))->init(13,::Array_obj< int >::fromData( _hx_array_data_5340f73e_43,2))->init(14,::Array_obj< int >::fromData( _hx_array_data_5340f73e_44,2))->init(15,::Array_obj< int >::fromData( _hx_array_data_5340f73e_45,2))->init(16,::Array_obj< int >::fromData( _hx_array_data_5340f73e_46,2))->init(17,::Array_obj< int >::fromData( _hx_array_data_5340f73e_47,2))->init(18,::Array_obj< int >::fromData( _hx_array_data_5340f73e_48,2))->init(19,::Array_obj< int >::fromData( _hx_array_data_5340f73e_49,2))->init(20,::Array_obj< int >::fromData( _hx_array_data_5340f73e_50,2))->init(21,::Array_obj< int >::fromData( _hx_array_data_5340f73e_51,2))->init(22,::Array_obj< int >::fromData( _hx_array_data_5340f73e_52,2))->init(23,::Array_obj< int >::fromData( _hx_array_data_5340f73e_53,2))->init(24,::Array_obj< int >::fromData( _hx_array_data_5340f73e_54,2));
            	}
}

} // end namespace hxColorToolkit
