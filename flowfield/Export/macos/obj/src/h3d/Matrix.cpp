#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_col_Matrix
#include <h2d/col/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Quat
#include <h3d/Quat.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b796e07832ca9a4f_38_new,"h3d.Matrix","new",0x381486e8,"h3d.Matrix.new","h3d/Matrix.hx",38,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_41_get_tx,"h3d.Matrix","get_tx",0x6a2a0b45,"h3d.Matrix.get_tx","h3d/Matrix.hx",41,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_42_get_ty,"h3d.Matrix","get_ty",0x6a2a0b46,"h3d.Matrix.get_ty","h3d/Matrix.hx",42,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_43_get_tz,"h3d.Matrix","get_tz",0x6a2a0b47,"h3d.Matrix.get_tz","h3d/Matrix.hx",43,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_44_set_tx,"h3d.Matrix","set_tx",0x36725fb9,"h3d.Matrix.set_tx","h3d/Matrix.hx",44,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_45_set_ty,"h3d.Matrix","set_ty",0x36725fba,"h3d.Matrix.set_ty","h3d/Matrix.hx",45,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_46_set_tz,"h3d.Matrix","set_tz",0x36725fbb,"h3d.Matrix.set_tz","h3d/Matrix.hx",46,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_49_equal,"h3d.Matrix","equal",0xa4c4383c,"h3d.Matrix.equal","h3d/Matrix.hx",49,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_55_zero,"h3d.Matrix","zero",0xe1d00fa0,"h3d.Matrix.zero","h3d/Matrix.hx",55,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_62_identity,"h3d.Matrix","identity",0xbda3e1b6,"h3d.Matrix.identity","h3d/Matrix.hx",62,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_69_isIdentity,"h3d.Matrix","isIdentity",0xb40d01c0,"h3d.Matrix.isIdentity","h3d/Matrix.hx",69,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_83_isIdentityEpsilon,"h3d.Matrix","isIdentityEpsilon",0x29ea938a,"h3d.Matrix.isIdentityEpsilon","h3d/Matrix.hx",83,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_97_initRotationX,"h3d.Matrix","initRotationX",0xe6184cb2,"h3d.Matrix.initRotationX","h3d/Matrix.hx",97,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_106_initRotationY,"h3d.Matrix","initRotationY",0xe6184cb3,"h3d.Matrix.initRotationY","h3d/Matrix.hx",106,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_115_initRotationZ,"h3d.Matrix","initRotationZ",0xe6184cb4,"h3d.Matrix.initRotationZ","h3d/Matrix.hx",115,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_124_initTranslation,"h3d.Matrix","initTranslation",0x5670aa49,"h3d.Matrix.initTranslation","h3d/Matrix.hx",124,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_131_initScale,"h3d.Matrix","initScale",0x75f535e2,"h3d.Matrix.initScale","h3d/Matrix.hx",131,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_138_initRotationAxis,"h3d.Matrix","initRotationAxis",0x9beeb0a7,"h3d.Matrix.initRotationAxis","h3d/Matrix.hx",138,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_163_initRotation,"h3d.Matrix","initRotation",0x9644fce6,"h3d.Matrix.initRotation","h3d/Matrix.hx",163,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_190_translate,"h3d.Matrix","translate",0x2b1423d6,"h3d.Matrix.translate","h3d/Matrix.hx",190,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_205_scale,"h3d.Matrix","scale",0xab103712,"h3d.Matrix.scale","h3d/Matrix.hx",205,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_220_rotate,"h3d.Matrix","rotate",0x921a54d3,"h3d.Matrix.rotate","h3d/Matrix.hx",220,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_226_rotateAxis,"h3d.Matrix","rotateAxis",0xf8b30314,"h3d.Matrix.rotateAxis","h3d/Matrix.hx",226,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_232_getPosition,"h3d.Matrix","getPosition",0x9994e1e7,"h3d.Matrix.getPosition","h3d/Matrix.hx",232,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_238_setPosition,"h3d.Matrix","setPosition",0xa401e8f3,"h3d.Matrix.setPosition","h3d/Matrix.hx",238,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_245_prependTranslation,"h3d.Matrix","prependTranslation",0x942772fb,"h3d.Matrix.prependTranslation","h3d/Matrix.hx",245,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_256_getScale,"h3d.Matrix","getScale",0xdd1a7a8c,"h3d.Matrix.getScale","h3d/Matrix.hx",256,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_270_prependRotation,"h3d.Matrix","prependRotation",0xa777b0f4,"h3d.Matrix.prependRotation","h3d/Matrix.hx",270,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_276_prependRotationAxis,"h3d.Matrix","prependRotationAxis",0x5e2783b5,"h3d.Matrix.prependRotationAxis","h3d/Matrix.hx",276,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_282_prependScale,"h3d.Matrix","prependScale",0xad9f8d14,"h3d.Matrix.prependScale","h3d/Matrix.hx",282,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_293_multiply3x4inline,"h3d.Matrix","multiply3x4inline",0xae99212c,"h3d.Matrix.multiply3x4inline","h3d/Matrix.hx",293,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_324_multiply,"h3d.Matrix","multiply",0x9f017e9c,"h3d.Matrix.multiply","h3d/Matrix.hx",324,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_355_multiplyValue,"h3d.Matrix","multiplyValue",0x7967fb35,"h3d.Matrix.multiplyValue","h3d/Matrix.hx",355,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_375_invert,"h3d.Matrix","invert",0x66d2f58e,"h3d.Matrix.invert","h3d/Matrix.hx",375,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_378_getInverse,"h3d.Matrix","getInverse",0x0d817c32,"h3d.Matrix.getInverse","h3d/Matrix.hx",378,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_385_getDeterminant,"h3d.Matrix","getDeterminant",0x1f94f717,"h3d.Matrix.getDeterminant","h3d/Matrix.hx",385,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_388_inverse3x4,"h3d.Matrix","inverse3x4",0xd65ae877,"h3d.Matrix.inverse3x4","h3d/Matrix.hx",388,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_422_initInverse,"h3d.Matrix","initInverse",0x9f023908,"h3d.Matrix.initInverse","h3d/Matrix.hx",422,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_471_initInverse3x3,"h3d.Matrix","initInverse3x3",0xe0d837a6,"h3d.Matrix.initInverse3x3","h3d/Matrix.hx",471,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_511_front,"h3d.Matrix","front",0x38cf8131,"h3d.Matrix.front","h3d/Matrix.hx",511,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_517_right,"h3d.Matrix","right",0x1ba57464,"h3d.Matrix.right","h3d/Matrix.hx",517,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_523_up,"h3d.Matrix","up",0xa343d8d3,"h3d.Matrix.up","h3d/Matrix.hx",523,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_529_transpose,"h3d.Matrix","transpose",0x2dc39d01,"h3d.Matrix.transpose","h3d/Matrix.hx",529,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_539_clone,"h3d.Matrix","clone",0x7aa47be5,"h3d.Matrix.clone","h3d/Matrix.hx",539,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_548_load,"h3d.Matrix","load",0xd8969a9e,"h3d.Matrix.load","h3d/Matrix.hx",548,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_555_loadValues,"h3d.Matrix","loadValues",0x8510dd20,"h3d.Matrix.loadValues","h3d/Matrix.hx",555,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_563_getFloats,"h3d.Matrix","getFloats",0x9f40f915,"h3d.Matrix.getFloats","h3d/Matrix.hx",563,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_566_getDirection,"h3d.Matrix","getDirection",0x089f3741,"h3d.Matrix.getDirection","h3d/Matrix.hx",566,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_576_getEulerAngles,"h3d.Matrix","getEulerAngles",0x5244710b,"h3d.Matrix.getEulerAngles","h3d/Matrix.hx",576,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_603_toString,"h3d.Matrix","toString",0x3ce36d24,"h3d.Matrix.toString","h3d/Matrix.hx",603,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_618_colorHue,"h3d.Matrix","colorHue",0x8e5bf38d,"h3d.Matrix.colorHue","h3d/Matrix.hx",618,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_644_colorSaturate,"h3d.Matrix","colorSaturate",0x7f2348fa,"h3d.Matrix.colorSaturate","h3d/Matrix.hx",644,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_666_colorContrast,"h3d.Matrix","colorContrast",0x389de60d,"h3d.Matrix.colorContrast","h3d/Matrix.hx",666,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_684_colorLightness,"h3d.Matrix","colorLightness",0xa4d52502,"h3d.Matrix.colorLightness","h3d/Matrix.hx",684,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_690_colorGain,"h3d.Matrix","colorGain",0x0160c80a,"h3d.Matrix.colorGain","h3d/Matrix.hx",690,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_708_colorBits,"h3d.Matrix","colorBits",0xfe18d291,"h3d.Matrix.colorBits","h3d/Matrix.hx",708,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_756_colorAdd,"h3d.Matrix","colorAdd",0x8e5694f6,"h3d.Matrix.colorAdd","h3d/Matrix.hx",756,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_762_colorSet,"h3d.Matrix","colorSet",0x8e643e77,"h3d.Matrix.colorSet","h3d/Matrix.hx",762,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_768_adjustColor,"h3d.Matrix","adjustColor",0x031bacdc,"h3d.Matrix.adjustColor","h3d/Matrix.hx",768,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_776_toMatrix2D,"h3d.Matrix","toMatrix2D",0x593e7366,"h3d.Matrix.toMatrix2D","h3d/Matrix.hx",776,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_789_I,"h3d.Matrix","I",0xa73084d1,"h3d.Matrix.I","h3d/Matrix.hx",789,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_795_L,"h3d.Matrix","L",0xa73084d4,"h3d.Matrix.L","h3d/Matrix.hx",795,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_801_T,"h3d.Matrix","T",0xa73084dc,"h3d.Matrix.T","h3d/Matrix.hx",801,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_807_R,"h3d.Matrix","R",0xa73084da,"h3d.Matrix.R","h3d/Matrix.hx",807,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_813_S,"h3d.Matrix","S",0xa73084db,"h3d.Matrix.S","h3d/Matrix.hx",813,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_822_lookAtX,"h3d.Matrix","lookAtX",0x70e3b16e,"h3d.Matrix.lookAtX","h3d/Matrix.hx",822,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_15_boot,"h3d.Matrix","boot",0xd1fa84aa,"h3d.Matrix.boot","h3d/Matrix.hx",15,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_613_boot,"h3d.Matrix","boot",0xd1fa84aa,"h3d.Matrix.boot","h3d/Matrix.hx",613,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_614_boot,"h3d.Matrix","boot",0xd1fa84aa,"h3d.Matrix.boot","h3d/Matrix.hx",614,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_615_boot,"h3d.Matrix","boot",0xd1fa84aa,"h3d.Matrix.boot","h3d/Matrix.hx",615,0x638e4567)
HX_LOCAL_STACK_FRAME(_hx_pos_b796e07832ca9a4f_617_boot,"h3d.Matrix","boot",0xd1fa84aa,"h3d.Matrix.boot","h3d/Matrix.hx",617,0x638e4567)
namespace h3d{

void Matrix_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_38_new)
            	}

Dynamic Matrix_obj::__CreateEmpty() { return new Matrix_obj; }

void *Matrix_obj::_hx_vtable = 0;

Dynamic Matrix_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Matrix_obj > _hx_result = new Matrix_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Matrix_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x14212a9a;
}

Float Matrix_obj::get_tx(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_41_get_tx)
HXDLIN(  41)		return this->_41;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_tx,return )

Float Matrix_obj::get_ty(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_42_get_ty)
HXDLIN(  42)		return this->_42;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_ty,return )

Float Matrix_obj::get_tz(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_43_get_tz)
HXDLIN(  43)		return this->_43;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_tz,return )

Float Matrix_obj::set_tx(Float v){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_44_set_tx)
HXDLIN(  44)		return (this->_41 = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_tx,return )

Float Matrix_obj::set_ty(Float v){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_45_set_ty)
HXDLIN(  45)		return (this->_42 = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_ty,return )

Float Matrix_obj::set_tz(Float v){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_46_set_tz)
HXDLIN(  46)		return (this->_43 = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_tz,return )

bool Matrix_obj::equal( ::h3d::Matrix other){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_49_equal)
HXDLIN(  49)		bool _hx_tmp;
HXDLIN(  49)		bool _hx_tmp1;
HXDLIN(  49)		bool _hx_tmp2;
HXDLIN(  49)		bool _hx_tmp3;
HXDLIN(  49)		bool _hx_tmp4;
HXDLIN(  49)		bool _hx_tmp5;
HXDLIN(  49)		bool _hx_tmp6;
HXDLIN(  49)		bool _hx_tmp7;
HXDLIN(  49)		bool _hx_tmp8;
HXDLIN(  49)		bool _hx_tmp9;
HXDLIN(  49)		bool _hx_tmp10;
HXDLIN(  49)		bool _hx_tmp11;
HXDLIN(  49)		bool _hx_tmp12;
HXDLIN(  49)		bool _hx_tmp13;
HXDLIN(  49)		if ((this->_11 == other->_11)) {
HXDLIN(  49)			_hx_tmp13 = (this->_12 == other->_12);
            		}
            		else {
HXDLIN(  49)			_hx_tmp13 = false;
            		}
HXDLIN(  49)		if (_hx_tmp13) {
HXDLIN(  49)			_hx_tmp12 = (this->_13 == other->_13);
            		}
            		else {
HXDLIN(  49)			_hx_tmp12 = false;
            		}
HXDLIN(  49)		if (_hx_tmp12) {
HXDLIN(  49)			_hx_tmp11 = (this->_14 == other->_14);
            		}
            		else {
HXDLIN(  49)			_hx_tmp11 = false;
            		}
HXDLIN(  49)		if (_hx_tmp11) {
HXDLIN(  49)			_hx_tmp10 = (this->_21 == other->_21);
            		}
            		else {
HXDLIN(  49)			_hx_tmp10 = false;
            		}
HXDLIN(  49)		if (_hx_tmp10) {
HXDLIN(  49)			_hx_tmp9 = (this->_22 == other->_22);
            		}
            		else {
HXDLIN(  49)			_hx_tmp9 = false;
            		}
HXDLIN(  49)		if (_hx_tmp9) {
HXDLIN(  49)			_hx_tmp8 = (this->_23 == other->_23);
            		}
            		else {
HXDLIN(  49)			_hx_tmp8 = false;
            		}
HXDLIN(  49)		if (_hx_tmp8) {
HXDLIN(  49)			_hx_tmp7 = (this->_24 == other->_24);
            		}
            		else {
HXDLIN(  49)			_hx_tmp7 = false;
            		}
HXDLIN(  49)		if (_hx_tmp7) {
HXDLIN(  49)			_hx_tmp6 = (this->_31 == other->_31);
            		}
            		else {
HXDLIN(  49)			_hx_tmp6 = false;
            		}
HXDLIN(  49)		if (_hx_tmp6) {
HXDLIN(  49)			_hx_tmp5 = (this->_32 == other->_32);
            		}
            		else {
HXDLIN(  49)			_hx_tmp5 = false;
            		}
HXDLIN(  49)		if (_hx_tmp5) {
HXDLIN(  49)			_hx_tmp4 = (this->_33 == other->_33);
            		}
            		else {
HXDLIN(  49)			_hx_tmp4 = false;
            		}
HXDLIN(  49)		if (_hx_tmp4) {
HXDLIN(  49)			_hx_tmp3 = (this->_34 == other->_34);
            		}
            		else {
HXDLIN(  49)			_hx_tmp3 = false;
            		}
HXDLIN(  49)		if (_hx_tmp3) {
HXDLIN(  49)			_hx_tmp2 = (this->_41 == other->_41);
            		}
            		else {
HXDLIN(  49)			_hx_tmp2 = false;
            		}
HXDLIN(  49)		if (_hx_tmp2) {
HXDLIN(  49)			_hx_tmp1 = (this->_42 == other->_42);
            		}
            		else {
HXDLIN(  49)			_hx_tmp1 = false;
            		}
HXDLIN(  49)		if (_hx_tmp1) {
HXDLIN(  49)			_hx_tmp = (this->_43 == other->_43);
            		}
            		else {
HXDLIN(  49)			_hx_tmp = false;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  52)			return (this->_44 == other->_44);
            		}
            		else {
HXDLIN(  49)			return false;
            		}
HXDLIN(  49)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equal,return )

void Matrix_obj::zero(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_55_zero)
HXLINE(  56)		this->_11 = ((Float)0.0);
HXDLIN(  56)		this->_12 = ((Float)0.0);
HXDLIN(  56)		this->_13 = ((Float)0.0);
HXDLIN(  56)		this->_14 = ((Float)0.0);
HXLINE(  57)		this->_21 = ((Float)0.0);
HXDLIN(  57)		this->_22 = ((Float)0.0);
HXDLIN(  57)		this->_23 = ((Float)0.0);
HXDLIN(  57)		this->_24 = ((Float)0.0);
HXLINE(  58)		this->_31 = ((Float)0.0);
HXDLIN(  58)		this->_32 = ((Float)0.0);
HXDLIN(  58)		this->_33 = ((Float)0.0);
HXDLIN(  58)		this->_34 = ((Float)0.0);
HXLINE(  59)		this->_41 = ((Float)0.0);
HXDLIN(  59)		this->_42 = ((Float)0.0);
HXDLIN(  59)		this->_43 = ((Float)0.0);
HXDLIN(  59)		this->_44 = ((Float)0.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,zero,(void))

void Matrix_obj::identity(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_62_identity)
HXLINE(  63)		this->_11 = ((Float)1.0);
HXDLIN(  63)		this->_12 = ((Float)0.0);
HXDLIN(  63)		this->_13 = ((Float)0.0);
HXDLIN(  63)		this->_14 = ((Float)0.0);
HXLINE(  64)		this->_21 = ((Float)0.0);
HXDLIN(  64)		this->_22 = ((Float)1.0);
HXDLIN(  64)		this->_23 = ((Float)0.0);
HXDLIN(  64)		this->_24 = ((Float)0.0);
HXLINE(  65)		this->_31 = ((Float)0.0);
HXDLIN(  65)		this->_32 = ((Float)0.0);
HXDLIN(  65)		this->_33 = ((Float)1.0);
HXDLIN(  65)		this->_34 = ((Float)0.0);
HXLINE(  66)		this->_41 = ((Float)0.0);
HXDLIN(  66)		this->_42 = ((Float)0.0);
HXDLIN(  66)		this->_43 = ((Float)0.0);
HXDLIN(  66)		this->_44 = ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

bool Matrix_obj::isIdentity(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_69_isIdentity)
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		bool _hx_tmp1;
HXDLIN(  70)		if ((this->_41 == 0)) {
HXLINE(  70)			_hx_tmp1 = (this->_42 != 0);
            		}
            		else {
HXLINE(  70)			_hx_tmp1 = true;
            		}
HXDLIN(  70)		if (!(_hx_tmp1)) {
HXLINE(  70)			_hx_tmp = (this->_43 != 0);
            		}
            		else {
HXLINE(  70)			_hx_tmp = true;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			return false;
            		}
HXLINE(  72)		bool _hx_tmp2;
HXDLIN(  72)		bool _hx_tmp3;
HXDLIN(  72)		if ((this->_11 == 1)) {
HXLINE(  72)			_hx_tmp3 = (this->_22 != 1);
            		}
            		else {
HXLINE(  72)			_hx_tmp3 = true;
            		}
HXDLIN(  72)		if (!(_hx_tmp3)) {
HXLINE(  72)			_hx_tmp2 = (this->_33 != 1);
            		}
            		else {
HXLINE(  72)			_hx_tmp2 = true;
            		}
HXDLIN(  72)		if (_hx_tmp2) {
HXLINE(  73)			return false;
            		}
HXLINE(  74)		bool _hx_tmp4;
HXDLIN(  74)		bool _hx_tmp5;
HXDLIN(  74)		if ((this->_12 == 0)) {
HXLINE(  74)			_hx_tmp5 = (this->_13 != 0);
            		}
            		else {
HXLINE(  74)			_hx_tmp5 = true;
            		}
HXDLIN(  74)		if (!(_hx_tmp5)) {
HXLINE(  74)			_hx_tmp4 = (this->_14 != 0);
            		}
            		else {
HXLINE(  74)			_hx_tmp4 = true;
            		}
HXDLIN(  74)		if (_hx_tmp4) {
HXLINE(  75)			return false;
            		}
HXLINE(  76)		bool _hx_tmp6;
HXDLIN(  76)		bool _hx_tmp7;
HXDLIN(  76)		if ((this->_21 == 0)) {
HXLINE(  76)			_hx_tmp7 = (this->_23 != 0);
            		}
            		else {
HXLINE(  76)			_hx_tmp7 = true;
            		}
HXDLIN(  76)		if (!(_hx_tmp7)) {
HXLINE(  76)			_hx_tmp6 = (this->_24 != 0);
            		}
            		else {
HXLINE(  76)			_hx_tmp6 = true;
            		}
HXDLIN(  76)		if (_hx_tmp6) {
HXLINE(  77)			return false;
            		}
HXLINE(  78)		bool _hx_tmp8;
HXDLIN(  78)		bool _hx_tmp9;
HXDLIN(  78)		if ((this->_31 == 0)) {
HXLINE(  78)			_hx_tmp9 = (this->_32 != 0);
            		}
            		else {
HXLINE(  78)			_hx_tmp9 = true;
            		}
HXDLIN(  78)		if (!(_hx_tmp9)) {
HXLINE(  78)			_hx_tmp8 = (this->_34 != 0);
            		}
            		else {
HXLINE(  78)			_hx_tmp8 = true;
            		}
HXDLIN(  78)		if (_hx_tmp8) {
HXLINE(  79)			return false;
            		}
HXLINE(  80)		return (this->_44 == 1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,isIdentity,return )

bool Matrix_obj::isIdentityEpsilon(Float e){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_83_isIdentityEpsilon)
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		bool _hx_tmp1;
HXDLIN(  84)		Float f = this->_41;
HXDLIN(  84)		Float _hx_tmp2;
HXDLIN(  84)		if ((f < 0)) {
HXLINE(  84)			_hx_tmp2 = -(f);
            		}
            		else {
HXLINE(  84)			_hx_tmp2 = f;
            		}
HXDLIN(  84)		if (!((_hx_tmp2 > e))) {
HXLINE(  84)			Float f = this->_42;
HXDLIN(  84)			Float _hx_tmp;
HXDLIN(  84)			if ((f < 0)) {
HXLINE(  84)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(  84)				_hx_tmp = f;
            			}
HXDLIN(  84)			_hx_tmp1 = (_hx_tmp > e);
            		}
            		else {
HXLINE(  84)			_hx_tmp1 = true;
            		}
HXDLIN(  84)		if (!(_hx_tmp1)) {
HXLINE(  84)			Float f = this->_43;
HXDLIN(  84)			Float _hx_tmp1;
HXDLIN(  84)			if ((f < 0)) {
HXLINE(  84)				_hx_tmp1 = -(f);
            			}
            			else {
HXLINE(  84)				_hx_tmp1 = f;
            			}
HXDLIN(  84)			_hx_tmp = (_hx_tmp1 > e);
            		}
            		else {
HXLINE(  84)			_hx_tmp = true;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  85)			return false;
            		}
HXLINE(  86)		bool _hx_tmp3;
HXDLIN(  86)		bool _hx_tmp4;
HXDLIN(  86)		Float f1 = (this->_11 - ( (Float)(1) ));
HXDLIN(  86)		Float _hx_tmp5;
HXDLIN(  86)		if ((f1 < 0)) {
HXLINE(  86)			_hx_tmp5 = -(f1);
            		}
            		else {
HXLINE(  86)			_hx_tmp5 = f1;
            		}
HXDLIN(  86)		if (!((_hx_tmp5 > e))) {
HXLINE(  86)			Float f = (this->_22 - ( (Float)(1) ));
HXDLIN(  86)			Float _hx_tmp;
HXDLIN(  86)			if ((f < 0)) {
HXLINE(  86)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(  86)				_hx_tmp = f;
            			}
HXDLIN(  86)			_hx_tmp4 = (_hx_tmp > e);
            		}
            		else {
HXLINE(  86)			_hx_tmp4 = true;
            		}
HXDLIN(  86)		if (!(_hx_tmp4)) {
HXLINE(  86)			Float f = (this->_33 - ( (Float)(1) ));
HXDLIN(  86)			Float _hx_tmp;
HXDLIN(  86)			if ((f < 0)) {
HXLINE(  86)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(  86)				_hx_tmp = f;
            			}
HXDLIN(  86)			_hx_tmp3 = (_hx_tmp > e);
            		}
            		else {
HXLINE(  86)			_hx_tmp3 = true;
            		}
HXDLIN(  86)		if (_hx_tmp3) {
HXLINE(  87)			return false;
            		}
HXLINE(  88)		bool _hx_tmp6;
HXDLIN(  88)		bool _hx_tmp7;
HXDLIN(  88)		Float f2 = this->_12;
HXDLIN(  88)		Float _hx_tmp8;
HXDLIN(  88)		if ((f2 < 0)) {
HXLINE(  88)			_hx_tmp8 = -(f2);
            		}
            		else {
HXLINE(  88)			_hx_tmp8 = f2;
            		}
HXDLIN(  88)		if (!((_hx_tmp8 > e))) {
HXLINE(  88)			Float f = this->_13;
HXDLIN(  88)			Float _hx_tmp;
HXDLIN(  88)			if ((f < 0)) {
HXLINE(  88)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(  88)				_hx_tmp = f;
            			}
HXDLIN(  88)			_hx_tmp7 = (_hx_tmp > e);
            		}
            		else {
HXLINE(  88)			_hx_tmp7 = true;
            		}
HXDLIN(  88)		if (!(_hx_tmp7)) {
HXLINE(  88)			Float f = this->_14;
HXDLIN(  88)			Float _hx_tmp;
HXDLIN(  88)			if ((f < 0)) {
HXLINE(  88)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(  88)				_hx_tmp = f;
            			}
HXDLIN(  88)			_hx_tmp6 = (_hx_tmp > e);
            		}
            		else {
HXLINE(  88)			_hx_tmp6 = true;
            		}
HXDLIN(  88)		if (_hx_tmp6) {
HXLINE(  89)			return false;
            		}
HXLINE(  90)		bool _hx_tmp9;
HXDLIN(  90)		bool _hx_tmp10;
HXDLIN(  90)		Float f3 = this->_21;
HXDLIN(  90)		Float _hx_tmp11;
HXDLIN(  90)		if ((f3 < 0)) {
HXLINE(  90)			_hx_tmp11 = -(f3);
            		}
            		else {
HXLINE(  90)			_hx_tmp11 = f3;
            		}
HXDLIN(  90)		if (!((_hx_tmp11 > e))) {
HXLINE(  90)			Float f = this->_23;
HXDLIN(  90)			Float _hx_tmp;
HXDLIN(  90)			if ((f < 0)) {
HXLINE(  90)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(  90)				_hx_tmp = f;
            			}
HXDLIN(  90)			_hx_tmp10 = (_hx_tmp > e);
            		}
            		else {
HXLINE(  90)			_hx_tmp10 = true;
            		}
HXDLIN(  90)		if (!(_hx_tmp10)) {
HXLINE(  90)			Float f = this->_24;
HXDLIN(  90)			Float _hx_tmp;
HXDLIN(  90)			if ((f < 0)) {
HXLINE(  90)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(  90)				_hx_tmp = f;
            			}
HXDLIN(  90)			_hx_tmp9 = (_hx_tmp > e);
            		}
            		else {
HXLINE(  90)			_hx_tmp9 = true;
            		}
HXDLIN(  90)		if (_hx_tmp9) {
HXLINE(  91)			return false;
            		}
HXLINE(  92)		bool _hx_tmp12;
HXDLIN(  92)		bool _hx_tmp13;
HXDLIN(  92)		Float f4 = this->_31;
HXDLIN(  92)		Float _hx_tmp14;
HXDLIN(  92)		if ((f4 < 0)) {
HXLINE(  92)			_hx_tmp14 = -(f4);
            		}
            		else {
HXLINE(  92)			_hx_tmp14 = f4;
            		}
HXDLIN(  92)		if (!((_hx_tmp14 > e))) {
HXLINE(  92)			Float f = this->_32;
HXDLIN(  92)			Float _hx_tmp;
HXDLIN(  92)			if ((f < 0)) {
HXLINE(  92)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(  92)				_hx_tmp = f;
            			}
HXDLIN(  92)			_hx_tmp13 = (_hx_tmp > e);
            		}
            		else {
HXLINE(  92)			_hx_tmp13 = true;
            		}
HXDLIN(  92)		if (!(_hx_tmp13)) {
HXLINE(  92)			Float f = this->_34;
HXDLIN(  92)			Float _hx_tmp;
HXDLIN(  92)			if ((f < 0)) {
HXLINE(  92)				_hx_tmp = -(f);
            			}
            			else {
HXLINE(  92)				_hx_tmp = f;
            			}
HXDLIN(  92)			_hx_tmp12 = (_hx_tmp > e);
            		}
            		else {
HXLINE(  92)			_hx_tmp12 = true;
            		}
HXDLIN(  92)		if (_hx_tmp12) {
HXLINE(  93)			return false;
            		}
HXLINE(  94)		Float f5 = (this->_44 - ( (Float)(1) ));
HXDLIN(  94)		Float _hx_tmp15;
HXDLIN(  94)		if ((f5 < 0)) {
HXLINE(  94)			_hx_tmp15 = -(f5);
            		}
            		else {
HXLINE(  94)			_hx_tmp15 = f5;
            		}
HXDLIN(  94)		return (_hx_tmp15 <= e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,isIdentityEpsilon,return )

void Matrix_obj::initRotationX(Float a){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_97_initRotationX)
HXLINE(  98)		Float cos = ::Math_obj::cos(a);
HXLINE(  99)		Float sin = ::Math_obj::sin(a);
HXLINE( 100)		this->_11 = ((Float)1.0);
HXDLIN( 100)		this->_12 = ((Float)0.0);
HXDLIN( 100)		this->_13 = ((Float)0.0);
HXDLIN( 100)		this->_14 = ((Float)0.0);
HXLINE( 101)		this->_21 = ((Float)0.0);
HXDLIN( 101)		this->_22 = cos;
HXDLIN( 101)		this->_23 = sin;
HXDLIN( 101)		this->_24 = ((Float)0.0);
HXLINE( 102)		this->_31 = ((Float)0.0);
HXDLIN( 102)		this->_32 = -(sin);
HXDLIN( 102)		this->_33 = cos;
HXDLIN( 102)		this->_34 = ((Float)0.0);
HXLINE( 103)		this->_41 = ((Float)0.0);
HXDLIN( 103)		this->_42 = ((Float)0.0);
HXDLIN( 103)		this->_43 = ((Float)0.0);
HXDLIN( 103)		this->_44 = ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,initRotationX,(void))

void Matrix_obj::initRotationY(Float a){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_106_initRotationY)
HXLINE( 107)		Float cos = ::Math_obj::cos(a);
HXLINE( 108)		Float sin = ::Math_obj::sin(a);
HXLINE( 109)		this->_11 = cos;
HXDLIN( 109)		this->_12 = ((Float)0.0);
HXDLIN( 109)		this->_13 = -(sin);
HXDLIN( 109)		this->_14 = ((Float)0.0);
HXLINE( 110)		this->_21 = ((Float)0.0);
HXDLIN( 110)		this->_22 = ((Float)1.0);
HXDLIN( 110)		this->_23 = ((Float)0.0);
HXDLIN( 110)		this->_24 = ((Float)0.0);
HXLINE( 111)		this->_31 = sin;
HXDLIN( 111)		this->_32 = ((Float)0.0);
HXDLIN( 111)		this->_33 = cos;
HXDLIN( 111)		this->_34 = ((Float)0.0);
HXLINE( 112)		this->_41 = ((Float)0.0);
HXDLIN( 112)		this->_42 = ((Float)0.0);
HXDLIN( 112)		this->_43 = ((Float)0.0);
HXDLIN( 112)		this->_44 = ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,initRotationY,(void))

void Matrix_obj::initRotationZ(Float a){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_115_initRotationZ)
HXLINE( 116)		Float cos = ::Math_obj::cos(a);
HXLINE( 117)		Float sin = ::Math_obj::sin(a);
HXLINE( 118)		this->_11 = cos;
HXDLIN( 118)		this->_12 = sin;
HXDLIN( 118)		this->_13 = ((Float)0.0);
HXDLIN( 118)		this->_14 = ((Float)0.0);
HXLINE( 119)		this->_21 = -(sin);
HXDLIN( 119)		this->_22 = cos;
HXDLIN( 119)		this->_23 = ((Float)0.0);
HXDLIN( 119)		this->_24 = ((Float)0.0);
HXLINE( 120)		this->_31 = ((Float)0.0);
HXDLIN( 120)		this->_32 = ((Float)0.0);
HXDLIN( 120)		this->_33 = ((Float)1.0);
HXDLIN( 120)		this->_34 = ((Float)0.0);
HXLINE( 121)		this->_41 = ((Float)0.0);
HXDLIN( 121)		this->_42 = ((Float)0.0);
HXDLIN( 121)		this->_43 = ((Float)0.0);
HXDLIN( 121)		this->_44 = ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,initRotationZ,(void))

void Matrix_obj::initTranslation(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_124_initTranslation)
HXLINE( 125)		this->_11 = ((Float)1.0);
HXDLIN( 125)		this->_12 = ((Float)0.0);
HXDLIN( 125)		this->_13 = ((Float)0.0);
HXDLIN( 125)		this->_14 = ((Float)0.0);
HXLINE( 126)		this->_21 = ((Float)0.0);
HXDLIN( 126)		this->_22 = ((Float)1.0);
HXDLIN( 126)		this->_23 = ((Float)0.0);
HXDLIN( 126)		this->_24 = ((Float)0.0);
HXLINE( 127)		this->_31 = ((Float)0.0);
HXDLIN( 127)		this->_32 = ((Float)0.0);
HXDLIN( 127)		this->_33 = ((Float)1.0);
HXDLIN( 127)		this->_34 = ((Float)0.0);
HXLINE( 128)		this->_41 = x;
HXDLIN( 128)		this->_42 = y;
HXDLIN( 128)		this->_43 = z;
HXDLIN( 128)		this->_44 = ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,initTranslation,(void))

void Matrix_obj::initScale(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)1.));
            		Float y = __o_y.Default(((Float)1.));
            		Float z = __o_z.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_131_initScale)
HXLINE( 132)		this->_11 = x;
HXDLIN( 132)		this->_12 = ((Float)0.0);
HXDLIN( 132)		this->_13 = ((Float)0.0);
HXDLIN( 132)		this->_14 = ((Float)0.0);
HXLINE( 133)		this->_21 = ((Float)0.0);
HXDLIN( 133)		this->_22 = y;
HXDLIN( 133)		this->_23 = ((Float)0.0);
HXDLIN( 133)		this->_24 = ((Float)0.0);
HXLINE( 134)		this->_31 = ((Float)0.0);
HXDLIN( 134)		this->_32 = ((Float)0.0);
HXDLIN( 134)		this->_33 = z;
HXDLIN( 134)		this->_34 = ((Float)0.0);
HXLINE( 135)		this->_41 = ((Float)0.0);
HXDLIN( 135)		this->_42 = ((Float)0.0);
HXDLIN( 135)		this->_43 = ((Float)0.0);
HXDLIN( 135)		this->_44 = ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,initScale,(void))

void Matrix_obj::initRotationAxis( ::h3d::Vector axis,Float angle){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_138_initRotationAxis)
HXLINE( 139)		Float cos = ::Math_obj::cos(angle);
HXDLIN( 139)		Float sin = ::Math_obj::sin(angle);
HXLINE( 140)		Float cos1 = (( (Float)(1) ) - cos);
HXLINE( 141)		Float x = -(axis->x);
HXDLIN( 141)		Float y = -(axis->y);
HXDLIN( 141)		Float z = -(axis->z);
HXLINE( 142)		Float xx = (x * x);
HXDLIN( 142)		Float yy = (y * y);
HXDLIN( 142)		Float zz = (z * z);
HXLINE( 143)		Float len = (((Float)1.) / ::Math_obj::sqrt(((xx + yy) + zz)));
HXLINE( 144)		x = (x * len);
HXLINE( 145)		y = (y * len);
HXLINE( 146)		z = (z * len);
HXLINE( 147)		Float xcos1 = (x * cos1);
HXDLIN( 147)		Float zcos1 = (z * cos1);
HXLINE( 148)		this->_11 = (cos + (x * xcos1));
HXLINE( 149)		this->_12 = ((y * xcos1) - (z * sin));
HXLINE( 150)		this->_13 = ((x * zcos1) + (y * sin));
HXLINE( 151)		this->_14 = ((Float)0.);
HXLINE( 152)		this->_21 = ((y * xcos1) + (z * sin));
HXLINE( 153)		this->_22 = (cos + ((y * y) * cos1));
HXLINE( 154)		this->_23 = ((y * zcos1) - (x * sin));
HXLINE( 155)		this->_24 = ((Float)0.);
HXLINE( 156)		this->_31 = ((x * zcos1) - (y * sin));
HXLINE( 157)		this->_32 = ((y * zcos1) + (x * sin));
HXLINE( 158)		this->_33 = (cos + (z * zcos1));
HXLINE( 159)		this->_34 = ((Float)0.);
HXLINE( 160)		this->_41 = ((Float)0.);
HXDLIN( 160)		this->_42 = ((Float)0.);
HXDLIN( 160)		this->_43 = ((Float)0.);
HXDLIN( 160)		this->_44 = ((Float)1.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,initRotationAxis,(void))

void Matrix_obj::initRotation(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_163_initRotation)
HXLINE( 164)		Float cx = ::Math_obj::cos(x);
HXLINE( 165)		Float sx = ::Math_obj::sin(x);
HXLINE( 166)		Float cy = ::Math_obj::cos(y);
HXLINE( 167)		Float sy = ::Math_obj::sin(y);
HXLINE( 168)		Float cz = ::Math_obj::cos(z);
HXLINE( 169)		Float sz = ::Math_obj::sin(z);
HXLINE( 170)		Float cxsy = (cx * sy);
HXLINE( 171)		Float sxsy = (sx * sy);
HXLINE( 172)		this->_11 = (cy * cz);
HXLINE( 173)		this->_12 = (cy * sz);
HXLINE( 174)		this->_13 = -(sy);
HXLINE( 175)		this->_14 = ( (Float)(0) );
HXLINE( 176)		this->_21 = ((sxsy * cz) - (cx * sz));
HXLINE( 177)		this->_22 = ((sxsy * sz) + (cx * cz));
HXLINE( 178)		this->_23 = (sx * cy);
HXLINE( 179)		this->_24 = ( (Float)(0) );
HXLINE( 180)		this->_31 = ((cxsy * cz) + (sx * sz));
HXLINE( 181)		this->_32 = ((cxsy * sz) - (sx * cz));
HXLINE( 182)		this->_33 = (cx * cy);
HXLINE( 183)		this->_34 = ( (Float)(0) );
HXLINE( 184)		this->_41 = ( (Float)(0) );
HXLINE( 185)		this->_42 = ( (Float)(0) );
HXLINE( 186)		this->_43 = ( (Float)(0) );
HXLINE( 187)		this->_44 = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,initRotation,(void))

void Matrix_obj::translate(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_190_translate)
HXLINE( 191)		 ::h3d::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)		_hx_tmp->_11 = (_hx_tmp->_11 + (x * this->_14));
HXLINE( 192)		 ::h3d::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 192)		_hx_tmp1->_12 = (_hx_tmp1->_12 + (y * this->_14));
HXLINE( 193)		 ::h3d::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 193)		_hx_tmp2->_13 = (_hx_tmp2->_13 + (z * this->_14));
HXLINE( 194)		 ::h3d::Matrix _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 194)		_hx_tmp3->_21 = (_hx_tmp3->_21 + (x * this->_24));
HXLINE( 195)		 ::h3d::Matrix _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 195)		_hx_tmp4->_22 = (_hx_tmp4->_22 + (y * this->_24));
HXLINE( 196)		 ::h3d::Matrix _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 196)		_hx_tmp5->_23 = (_hx_tmp5->_23 + (z * this->_24));
HXLINE( 197)		 ::h3d::Matrix _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)		_hx_tmp6->_31 = (_hx_tmp6->_31 + (x * this->_34));
HXLINE( 198)		 ::h3d::Matrix _hx_tmp7 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)		_hx_tmp7->_32 = (_hx_tmp7->_32 + (y * this->_34));
HXLINE( 199)		 ::h3d::Matrix _hx_tmp8 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 199)		_hx_tmp8->_33 = (_hx_tmp8->_33 + (z * this->_34));
HXLINE( 200)		 ::h3d::Matrix _hx_tmp9 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 200)		_hx_tmp9->_41 = (_hx_tmp9->_41 + (x * this->_44));
HXLINE( 201)		 ::h3d::Matrix _hx_tmp10 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 201)		_hx_tmp10->_42 = (_hx_tmp10->_42 + (y * this->_44));
HXLINE( 202)		 ::h3d::Matrix _hx_tmp11 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 202)		_hx_tmp11->_43 = (_hx_tmp11->_43 + (z * this->_44));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,translate,(void))

void Matrix_obj::scale(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)1.));
            		Float y = __o_y.Default(((Float)1.));
            		Float z = __o_z.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_205_scale)
HXLINE( 206)		 ::h3d::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 206)		_hx_tmp->_11 = (_hx_tmp->_11 * x);
HXLINE( 207)		 ::h3d::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 207)		_hx_tmp1->_21 = (_hx_tmp1->_21 * x);
HXLINE( 208)		 ::h3d::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 208)		_hx_tmp2->_31 = (_hx_tmp2->_31 * x);
HXLINE( 209)		 ::h3d::Matrix _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 209)		_hx_tmp3->_41 = (_hx_tmp3->_41 * x);
HXLINE( 210)		 ::h3d::Matrix _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)		_hx_tmp4->_12 = (_hx_tmp4->_12 * y);
HXLINE( 211)		 ::h3d::Matrix _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)		_hx_tmp5->_22 = (_hx_tmp5->_22 * y);
HXLINE( 212)		 ::h3d::Matrix _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)		_hx_tmp6->_32 = (_hx_tmp6->_32 * y);
HXLINE( 213)		 ::h3d::Matrix _hx_tmp7 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 213)		_hx_tmp7->_42 = (_hx_tmp7->_42 * y);
HXLINE( 214)		 ::h3d::Matrix _hx_tmp8 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 214)		_hx_tmp8->_13 = (_hx_tmp8->_13 * z);
HXLINE( 215)		 ::h3d::Matrix _hx_tmp9 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 215)		_hx_tmp9->_23 = (_hx_tmp9->_23 * z);
HXLINE( 216)		 ::h3d::Matrix _hx_tmp10 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 216)		_hx_tmp10->_33 = (_hx_tmp10->_33 * z);
HXLINE( 217)		 ::h3d::Matrix _hx_tmp11 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 217)		_hx_tmp11->_43 = (_hx_tmp11->_43 * z);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,scale,(void))

void Matrix_obj::rotate(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_220_rotate)
HXLINE( 221)		 ::h3d::Matrix tmp = ::h3d::Matrix_obj::tmp;
HXLINE( 222)		tmp->initRotation(x,y,z);
HXLINE( 223)		this->multiply(::hx::ObjectPtr<OBJ_>(this),tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,rotate,(void))

void Matrix_obj::rotateAxis( ::h3d::Vector axis,Float angle){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_226_rotateAxis)
HXLINE( 227)		 ::h3d::Matrix tmp = ::h3d::Matrix_obj::tmp;
HXLINE( 228)		tmp->initRotationAxis(axis,angle);
HXLINE( 229)		this->multiply(::hx::ObjectPtr<OBJ_>(this),tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,rotateAxis,(void))

 ::h3d::Vector Matrix_obj::getPosition( ::h3d::Vector v){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_232_getPosition)
HXLINE( 233)		if (::hx::IsNull( v )) {
HXLINE( 233)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 234)		{
HXLINE( 234)			v->x = this->_41;
HXDLIN( 234)			v->y = this->_42;
HXDLIN( 234)			v->z = this->_43;
HXDLIN( 234)			v->w = this->_44;
            		}
HXLINE( 235)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getPosition,return )

void Matrix_obj::setPosition( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_238_setPosition)
HXLINE( 239)		this->_41 = v->x;
HXLINE( 240)		this->_42 = v->y;
HXLINE( 241)		this->_43 = v->z;
HXLINE( 242)		this->_44 = v->w;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,setPosition,(void))

void Matrix_obj::prependTranslation(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_245_prependTranslation)
HXLINE( 246)		Float vx = ((((this->_11 * x) + (this->_21 * y)) + (this->_31 * z)) + this->_41);
HXLINE( 247)		Float vy = ((((this->_12 * x) + (this->_22 * y)) + (this->_32 * z)) + this->_42);
HXLINE( 248)		Float vz = ((((this->_13 * x) + (this->_23 * y)) + (this->_33 * z)) + this->_43);
HXLINE( 249)		Float vw = ((((this->_14 * x) + (this->_24 * y)) + (this->_34 * z)) + this->_44);
HXLINE( 250)		this->_41 = vx;
HXLINE( 251)		this->_42 = vy;
HXLINE( 252)		this->_43 = vz;
HXLINE( 253)		this->_44 = vw;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,prependTranslation,(void))

 ::h3d::Vector Matrix_obj::getScale( ::h3d::Vector v){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_256_getScale)
HXLINE( 257)		if (::hx::IsNull( v )) {
HXLINE( 258)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 259)		v->x = ::Math_obj::sqrt((((this->_11 * this->_11) + (this->_12 * this->_12)) + (this->_13 * this->_13)));
HXLINE( 260)		v->y = ::Math_obj::sqrt((((this->_21 * this->_21) + (this->_22 * this->_22)) + (this->_23 * this->_23)));
HXLINE( 261)		v->z = ::Math_obj::sqrt((((this->_31 * this->_31) + (this->_32 * this->_32)) + (this->_33 * this->_33)));
HXLINE( 262)		if (((((this->_11 * ((this->_22 * this->_33) - (this->_23 * this->_32))) + (this->_12 * ((this->_23 * this->_31) - (this->_21 * this->_33)))) + (this->_13 * ((this->_21 * this->_32) - (this->_22 * this->_31)))) < 0)) {
HXLINE( 263)			 ::h3d::Vector v1 = v;
HXDLIN( 263)			v1->x = (v1->x * ( (Float)(-1) ));
HXLINE( 264)			 ::h3d::Vector v2 = v;
HXDLIN( 264)			v2->y = (v2->y * ( (Float)(-1) ));
HXLINE( 265)			 ::h3d::Vector v3 = v;
HXDLIN( 265)			v3->z = (v3->z * ( (Float)(-1) ));
            		}
HXLINE( 267)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getScale,return )

void Matrix_obj::prependRotation(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_270_prependRotation)
HXLINE( 271)		 ::h3d::Matrix tmp = ::h3d::Matrix_obj::tmp;
HXLINE( 272)		tmp->initRotation(x,y,z);
HXLINE( 273)		this->multiply(tmp,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,prependRotation,(void))

void Matrix_obj::prependRotationAxis( ::h3d::Vector axis,Float angle){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_276_prependRotationAxis)
HXLINE( 277)		 ::h3d::Matrix tmp = ::h3d::Matrix_obj::tmp;
HXLINE( 278)		tmp->initRotationAxis(axis,angle);
HXLINE( 279)		this->multiply(tmp,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,prependRotationAxis,(void))

void Matrix_obj::prependScale(::hx::Null< Float >  __o_sx,::hx::Null< Float >  __o_sy,::hx::Null< Float >  __o_sz){
            		Float sx = __o_sx.Default(((Float)1.));
            		Float sy = __o_sy.Default(((Float)1.));
            		Float sz = __o_sz.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_282_prependScale)
HXLINE( 283)		 ::h3d::Matrix tmp = ::h3d::Matrix_obj::tmp;
HXLINE( 284)		tmp->initScale(sx,sy,sz);
HXLINE( 285)		this->multiply(tmp,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,prependScale,(void))

void Matrix_obj::multiply3x4( ::h3d::Matrix a, ::h3d::Matrix b){
	Float m11 = a->_11;
	Float m12 = a->_12;
	Float m13 = a->_13;
	Float m21 = a->_21;
	Float m22 = a->_22;
	Float m23 = a->_23;
	Float a31 = a->_31;
	Float a32 = a->_32;
	Float a33 = a->_33;
	Float a41 = a->_41;
	Float a42 = a->_42;
	Float a43 = a->_43;
	Float b11 = b->_11;
	Float b12 = b->_12;
	Float b13 = b->_13;
	Float b21 = b->_21;
	Float b22 = b->_22;
	Float b23 = b->_23;
	Float b31 = b->_31;
	Float b32 = b->_32;
	Float b33 = b->_33;
	Float b41 = b->_41;
	Float b42 = b->_42;
	Float b43 = b->_43;
	this->_11 = (((m11 * b11) + (m12 * b21)) + (m13 * b31));
	this->_12 = (((m11 * b12) + (m12 * b22)) + (m13 * b32));
	this->_13 = (((m11 * b13) + (m12 * b23)) + (m13 * b33));
	this->_14 = ( (Float)(0) );
	this->_21 = (((m21 * b11) + (m22 * b21)) + (m23 * b31));
	this->_22 = (((m21 * b12) + (m22 * b22)) + (m23 * b32));
	this->_23 = (((m21 * b13) + (m22 * b23)) + (m23 * b33));
	this->_24 = ( (Float)(0) );
	this->_31 = (((a31 * b11) + (a32 * b21)) + (a33 * b31));
	this->_32 = (((a31 * b12) + (a32 * b22)) + (a33 * b32));
	this->_33 = (((a31 * b13) + (a32 * b23)) + (a33 * b33));
	this->_34 = ( (Float)(0) );
	this->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + b41);
	this->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + b42);
	this->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + b43);
	this->_44 = ( (Float)(1) );
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,multiply3x4,(void))

void Matrix_obj::multiply3x4inline( ::h3d::Matrix a, ::h3d::Matrix b){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_293_multiply3x4inline)
HXLINE( 294)		Float m11 = a->_11;
HXDLIN( 294)		Float m12 = a->_12;
HXDLIN( 294)		Float m13 = a->_13;
HXLINE( 295)		Float m21 = a->_21;
HXDLIN( 295)		Float m22 = a->_22;
HXDLIN( 295)		Float m23 = a->_23;
HXLINE( 296)		Float a31 = a->_31;
HXDLIN( 296)		Float a32 = a->_32;
HXDLIN( 296)		Float a33 = a->_33;
HXLINE( 297)		Float a41 = a->_41;
HXDLIN( 297)		Float a42 = a->_42;
HXDLIN( 297)		Float a43 = a->_43;
HXLINE( 298)		Float b11 = b->_11;
HXDLIN( 298)		Float b12 = b->_12;
HXDLIN( 298)		Float b13 = b->_13;
HXLINE( 299)		Float b21 = b->_21;
HXDLIN( 299)		Float b22 = b->_22;
HXDLIN( 299)		Float b23 = b->_23;
HXLINE( 300)		Float b31 = b->_31;
HXDLIN( 300)		Float b32 = b->_32;
HXDLIN( 300)		Float b33 = b->_33;
HXLINE( 301)		Float b41 = b->_41;
HXDLIN( 301)		Float b42 = b->_42;
HXDLIN( 301)		Float b43 = b->_43;
HXLINE( 303)		this->_11 = (((m11 * b11) + (m12 * b21)) + (m13 * b31));
HXLINE( 304)		this->_12 = (((m11 * b12) + (m12 * b22)) + (m13 * b32));
HXLINE( 305)		this->_13 = (((m11 * b13) + (m12 * b23)) + (m13 * b33));
HXLINE( 306)		this->_14 = ( (Float)(0) );
HXLINE( 308)		this->_21 = (((m21 * b11) + (m22 * b21)) + (m23 * b31));
HXLINE( 309)		this->_22 = (((m21 * b12) + (m22 * b22)) + (m23 * b32));
HXLINE( 310)		this->_23 = (((m21 * b13) + (m22 * b23)) + (m23 * b33));
HXLINE( 311)		this->_24 = ( (Float)(0) );
HXLINE( 313)		this->_31 = (((a31 * b11) + (a32 * b21)) + (a33 * b31));
HXLINE( 314)		this->_32 = (((a31 * b12) + (a32 * b22)) + (a33 * b32));
HXLINE( 315)		this->_33 = (((a31 * b13) + (a32 * b23)) + (a33 * b33));
HXLINE( 316)		this->_34 = ( (Float)(0) );
HXLINE( 318)		this->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + b41);
HXLINE( 319)		this->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + b42);
HXLINE( 320)		this->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + b43);
HXLINE( 321)		this->_44 = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,multiply3x4inline,(void))

void Matrix_obj::multiply( ::h3d::Matrix a, ::h3d::Matrix b){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_324_multiply)
HXLINE( 325)		Float a11 = a->_11;
HXDLIN( 325)		Float a12 = a->_12;
HXDLIN( 325)		Float a13 = a->_13;
HXDLIN( 325)		Float a14 = a->_14;
HXLINE( 326)		Float a21 = a->_21;
HXDLIN( 326)		Float a22 = a->_22;
HXDLIN( 326)		Float a23 = a->_23;
HXDLIN( 326)		Float a24 = a->_24;
HXLINE( 327)		Float a31 = a->_31;
HXDLIN( 327)		Float a32 = a->_32;
HXDLIN( 327)		Float a33 = a->_33;
HXDLIN( 327)		Float a34 = a->_34;
HXLINE( 328)		Float a41 = a->_41;
HXDLIN( 328)		Float a42 = a->_42;
HXDLIN( 328)		Float a43 = a->_43;
HXDLIN( 328)		Float a44 = a->_44;
HXLINE( 329)		Float b11 = b->_11;
HXDLIN( 329)		Float b12 = b->_12;
HXDLIN( 329)		Float b13 = b->_13;
HXDLIN( 329)		Float b14 = b->_14;
HXLINE( 330)		Float b21 = b->_21;
HXDLIN( 330)		Float b22 = b->_22;
HXDLIN( 330)		Float b23 = b->_23;
HXDLIN( 330)		Float b24 = b->_24;
HXLINE( 331)		Float b31 = b->_31;
HXDLIN( 331)		Float b32 = b->_32;
HXDLIN( 331)		Float b33 = b->_33;
HXDLIN( 331)		Float b34 = b->_34;
HXLINE( 332)		Float b41 = b->_41;
HXDLIN( 332)		Float b42 = b->_42;
HXDLIN( 332)		Float b43 = b->_43;
HXDLIN( 332)		Float b44 = b->_44;
HXLINE( 334)		this->_11 = ((((a11 * b11) + (a12 * b21)) + (a13 * b31)) + (a14 * b41));
HXLINE( 335)		this->_12 = ((((a11 * b12) + (a12 * b22)) + (a13 * b32)) + (a14 * b42));
HXLINE( 336)		this->_13 = ((((a11 * b13) + (a12 * b23)) + (a13 * b33)) + (a14 * b43));
HXLINE( 337)		this->_14 = ((((a11 * b14) + (a12 * b24)) + (a13 * b34)) + (a14 * b44));
HXLINE( 339)		this->_21 = ((((a21 * b11) + (a22 * b21)) + (a23 * b31)) + (a24 * b41));
HXLINE( 340)		this->_22 = ((((a21 * b12) + (a22 * b22)) + (a23 * b32)) + (a24 * b42));
HXLINE( 341)		this->_23 = ((((a21 * b13) + (a22 * b23)) + (a23 * b33)) + (a24 * b43));
HXLINE( 342)		this->_24 = ((((a21 * b14) + (a22 * b24)) + (a23 * b34)) + (a24 * b44));
HXLINE( 344)		this->_31 = ((((a31 * b11) + (a32 * b21)) + (a33 * b31)) + (a34 * b41));
HXLINE( 345)		this->_32 = ((((a31 * b12) + (a32 * b22)) + (a33 * b32)) + (a34 * b42));
HXLINE( 346)		this->_33 = ((((a31 * b13) + (a32 * b23)) + (a33 * b33)) + (a34 * b43));
HXLINE( 347)		this->_34 = ((((a31 * b14) + (a32 * b24)) + (a33 * b34)) + (a34 * b44));
HXLINE( 349)		this->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + (a44 * b41));
HXLINE( 350)		this->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + (a44 * b42));
HXLINE( 351)		this->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + (a44 * b43));
HXLINE( 352)		this->_44 = ((((a41 * b14) + (a42 * b24)) + (a43 * b34)) + (a44 * b44));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,multiply,(void))

void Matrix_obj::multiplyValue(Float v){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_355_multiplyValue)
HXLINE( 356)		 ::h3d::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 356)		_hx_tmp->_11 = (_hx_tmp->_11 * v);
HXLINE( 357)		 ::h3d::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 357)		_hx_tmp1->_12 = (_hx_tmp1->_12 * v);
HXLINE( 358)		 ::h3d::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 358)		_hx_tmp2->_13 = (_hx_tmp2->_13 * v);
HXLINE( 359)		 ::h3d::Matrix _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 359)		_hx_tmp3->_14 = (_hx_tmp3->_14 * v);
HXLINE( 360)		 ::h3d::Matrix _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 360)		_hx_tmp4->_21 = (_hx_tmp4->_21 * v);
HXLINE( 361)		 ::h3d::Matrix _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 361)		_hx_tmp5->_22 = (_hx_tmp5->_22 * v);
HXLINE( 362)		 ::h3d::Matrix _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 362)		_hx_tmp6->_23 = (_hx_tmp6->_23 * v);
HXLINE( 363)		 ::h3d::Matrix _hx_tmp7 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 363)		_hx_tmp7->_24 = (_hx_tmp7->_24 * v);
HXLINE( 364)		 ::h3d::Matrix _hx_tmp8 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 364)		_hx_tmp8->_31 = (_hx_tmp8->_31 * v);
HXLINE( 365)		 ::h3d::Matrix _hx_tmp9 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 365)		_hx_tmp9->_32 = (_hx_tmp9->_32 * v);
HXLINE( 366)		 ::h3d::Matrix _hx_tmp10 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 366)		_hx_tmp10->_33 = (_hx_tmp10->_33 * v);
HXLINE( 367)		 ::h3d::Matrix _hx_tmp11 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 367)		_hx_tmp11->_34 = (_hx_tmp11->_34 * v);
HXLINE( 368)		 ::h3d::Matrix _hx_tmp12 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 368)		_hx_tmp12->_41 = (_hx_tmp12->_41 * v);
HXLINE( 369)		 ::h3d::Matrix _hx_tmp13 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 369)		_hx_tmp13->_42 = (_hx_tmp13->_42 * v);
HXLINE( 370)		 ::h3d::Matrix _hx_tmp14 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 370)		_hx_tmp14->_43 = (_hx_tmp14->_43 * v);
HXLINE( 371)		 ::h3d::Matrix _hx_tmp15 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 371)		_hx_tmp15->_44 = (_hx_tmp15->_44 * v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiplyValue,(void))

void Matrix_obj::invert(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_375_invert)
HXDLIN( 375)		this->initInverse(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,(void))

 ::h3d::Matrix Matrix_obj::getInverse( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_378_getInverse)
HXLINE( 379)		if (::hx::IsNull( m )) {
HXLINE( 379)			m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
            		}
HXLINE( 380)		m->initInverse(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 381)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getInverse,return )

Float Matrix_obj::getDeterminant(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_385_getDeterminant)
HXDLIN( 385)		return (((this->_11 * ((this->_22 * this->_33) - (this->_23 * this->_32))) + (this->_12 * ((this->_23 * this->_31) - (this->_21 * this->_33)))) + (this->_13 * ((this->_21 * this->_32) - (this->_22 * this->_31))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,getDeterminant,return )

void Matrix_obj::inverse3x4( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_388_inverse3x4)
HXLINE( 389)		Float m11 = m->_11;
HXDLIN( 389)		Float m12 = m->_12;
HXDLIN( 389)		Float m13 = m->_13;
HXLINE( 390)		Float m21 = m->_21;
HXDLIN( 390)		Float m22 = m->_22;
HXDLIN( 390)		Float m23 = m->_23;
HXLINE( 391)		Float m31 = m->_31;
HXDLIN( 391)		Float m32 = m->_32;
HXDLIN( 391)		Float m33 = m->_33;
HXLINE( 392)		Float m41 = m->_41;
HXDLIN( 392)		Float m42 = m->_42;
HXDLIN( 392)		Float m43 = m->_43;
HXLINE( 393)		this->_11 = ((m22 * m33) - (m23 * m32));
HXLINE( 394)		this->_12 = ((m13 * m32) - (m12 * m33));
HXLINE( 395)		this->_13 = ((m12 * m23) - (m13 * m22));
HXLINE( 396)		this->_14 = ( (Float)(0) );
HXLINE( 397)		this->_21 = ((m23 * m31) - (m21 * m33));
HXLINE( 398)		this->_22 = ((m11 * m33) - (m13 * m31));
HXLINE( 399)		this->_23 = ((m13 * m21) - (m11 * m23));
HXLINE( 400)		this->_24 = ( (Float)(0) );
HXLINE( 401)		this->_31 = ((m21 * m32) - (m22 * m31));
HXLINE( 402)		this->_32 = ((m12 * m31) - (m11 * m32));
HXLINE( 403)		this->_33 = ((m11 * m22) - (m12 * m21));
HXLINE( 404)		this->_34 = ( (Float)(0) );
HXLINE( 405)		this->_41 = (((((((-(m21) * m32) * m43) + ((m21 * m33) * m42)) + ((m31 * m22) * m43)) - ((m31 * m23) * m42)) - ((m41 * m22) * m33)) + ((m41 * m23) * m32));
HXLINE( 406)		this->_42 = (((((((m11 * m32) * m43) - ((m11 * m33) * m42)) - ((m31 * m12) * m43)) + ((m31 * m13) * m42)) + ((m41 * m12) * m33)) - ((m41 * m13) * m32));
HXLINE( 407)		this->_43 = (((((((-(m11) * m22) * m43) + ((m11 * m23) * m42)) + ((m21 * m12) * m43)) - ((m21 * m13) * m42)) - ((m41 * m12) * m23)) + ((m41 * m13) * m22));
HXLINE( 408)		this->_44 = (((((((m11 * m22) * m33) - ((m11 * m23) * m32)) - ((m21 * m12) * m33)) + ((m21 * m13) * m32)) + ((m31 * m12) * m23)) - ((m31 * m13) * m22));
HXLINE( 409)		this->_44 = ( (Float)(1) );
HXLINE( 410)		Float det = (((m11 * this->_11) + (m12 * this->_21)) + (m13 * this->_31));
HXLINE( 411)		Float _hx_tmp;
HXDLIN( 411)		if ((det < 0)) {
HXLINE( 411)			_hx_tmp = -(det);
            		}
            		else {
HXLINE( 411)			_hx_tmp = det;
            		}
HXDLIN( 411)		if ((_hx_tmp < ((Float)1e-10))) {
HXLINE( 412)			this->zero();
HXLINE( 413)			return;
            		}
HXLINE( 415)		Float invDet = (((Float)1.0) / det);
HXLINE( 416)		 ::h3d::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 416)		_hx_tmp1->_11 = (_hx_tmp1->_11 * invDet);
HXDLIN( 416)		 ::h3d::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 416)		_hx_tmp2->_12 = (_hx_tmp2->_12 * invDet);
HXDLIN( 416)		 ::h3d::Matrix _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 416)		_hx_tmp3->_13 = (_hx_tmp3->_13 * invDet);
HXLINE( 417)		 ::h3d::Matrix _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 417)		_hx_tmp4->_21 = (_hx_tmp4->_21 * invDet);
HXDLIN( 417)		 ::h3d::Matrix _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 417)		_hx_tmp5->_22 = (_hx_tmp5->_22 * invDet);
HXDLIN( 417)		 ::h3d::Matrix _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 417)		_hx_tmp6->_23 = (_hx_tmp6->_23 * invDet);
HXLINE( 418)		 ::h3d::Matrix _hx_tmp7 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 418)		_hx_tmp7->_31 = (_hx_tmp7->_31 * invDet);
HXDLIN( 418)		 ::h3d::Matrix _hx_tmp8 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 418)		_hx_tmp8->_32 = (_hx_tmp8->_32 * invDet);
HXDLIN( 418)		 ::h3d::Matrix _hx_tmp9 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 418)		_hx_tmp9->_33 = (_hx_tmp9->_33 * invDet);
HXLINE( 419)		 ::h3d::Matrix _hx_tmp10 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 419)		_hx_tmp10->_41 = (_hx_tmp10->_41 * invDet);
HXDLIN( 419)		 ::h3d::Matrix _hx_tmp11 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 419)		_hx_tmp11->_42 = (_hx_tmp11->_42 * invDet);
HXDLIN( 419)		 ::h3d::Matrix _hx_tmp12 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 419)		_hx_tmp12->_43 = (_hx_tmp12->_43 * invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,inverse3x4,(void))

void Matrix_obj::initInverse( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_422_initInverse)
HXLINE( 423)		Float m11 = m->_11;
HXDLIN( 423)		Float m12 = m->_12;
HXDLIN( 423)		Float m13 = m->_13;
HXDLIN( 423)		Float m14 = m->_14;
HXLINE( 424)		Float m21 = m->_21;
HXDLIN( 424)		Float m22 = m->_22;
HXDLIN( 424)		Float m23 = m->_23;
HXDLIN( 424)		Float m24 = m->_24;
HXLINE( 425)		Float m31 = m->_31;
HXDLIN( 425)		Float m32 = m->_32;
HXDLIN( 425)		Float m33 = m->_33;
HXDLIN( 425)		Float m34 = m->_34;
HXLINE( 426)		Float m41 = m->_41;
HXDLIN( 426)		Float m42 = m->_42;
HXDLIN( 426)		Float m43 = m->_43;
HXDLIN( 426)		Float m44 = m->_44;
HXLINE( 428)		this->_11 = (((((((m22 * m33) * m44) - ((m22 * m34) * m43)) - ((m32 * m23) * m44)) + ((m32 * m24) * m43)) + ((m42 * m23) * m34)) - ((m42 * m24) * m33));
HXLINE( 429)		this->_12 = (((((((-(m12) * m33) * m44) + ((m12 * m34) * m43)) + ((m32 * m13) * m44)) - ((m32 * m14) * m43)) - ((m42 * m13) * m34)) + ((m42 * m14) * m33));
HXLINE( 430)		this->_13 = (((((((m12 * m23) * m44) - ((m12 * m24) * m43)) - ((m22 * m13) * m44)) + ((m22 * m14) * m43)) + ((m42 * m13) * m24)) - ((m42 * m14) * m23));
HXLINE( 431)		this->_14 = (((((((-(m12) * m23) * m34) + ((m12 * m24) * m33)) + ((m22 * m13) * m34)) - ((m22 * m14) * m33)) - ((m32 * m13) * m24)) + ((m32 * m14) * m23));
HXLINE( 432)		this->_21 = (((((((-(m21) * m33) * m44) + ((m21 * m34) * m43)) + ((m31 * m23) * m44)) - ((m31 * m24) * m43)) - ((m41 * m23) * m34)) + ((m41 * m24) * m33));
HXLINE( 433)		this->_22 = (((((((m11 * m33) * m44) - ((m11 * m34) * m43)) - ((m31 * m13) * m44)) + ((m31 * m14) * m43)) + ((m41 * m13) * m34)) - ((m41 * m14) * m33));
HXLINE( 434)		this->_23 = (((((((-(m11) * m23) * m44) + ((m11 * m24) * m43)) + ((m21 * m13) * m44)) - ((m21 * m14) * m43)) - ((m41 * m13) * m24)) + ((m41 * m14) * m23));
HXLINE( 435)		this->_24 = (((((((m11 * m23) * m34) - ((m11 * m24) * m33)) - ((m21 * m13) * m34)) + ((m21 * m14) * m33)) + ((m31 * m13) * m24)) - ((m31 * m14) * m23));
HXLINE( 436)		this->_31 = (((((((m21 * m32) * m44) - ((m21 * m34) * m42)) - ((m31 * m22) * m44)) + ((m31 * m24) * m42)) + ((m41 * m22) * m34)) - ((m41 * m24) * m32));
HXLINE( 437)		this->_32 = (((((((-(m11) * m32) * m44) + ((m11 * m34) * m42)) + ((m31 * m12) * m44)) - ((m31 * m14) * m42)) - ((m41 * m12) * m34)) + ((m41 * m14) * m32));
HXLINE( 438)		this->_33 = (((((((m11 * m22) * m44) - ((m11 * m24) * m42)) - ((m21 * m12) * m44)) + ((m21 * m14) * m42)) + ((m41 * m12) * m24)) - ((m41 * m14) * m22));
HXLINE( 439)		this->_34 = (((((((-(m11) * m22) * m34) + ((m11 * m24) * m32)) + ((m21 * m12) * m34)) - ((m21 * m14) * m32)) - ((m31 * m12) * m24)) + ((m31 * m14) * m22));
HXLINE( 440)		this->_41 = (((((((-(m21) * m32) * m43) + ((m21 * m33) * m42)) + ((m31 * m22) * m43)) - ((m31 * m23) * m42)) - ((m41 * m22) * m33)) + ((m41 * m23) * m32));
HXLINE( 441)		this->_42 = (((((((m11 * m32) * m43) - ((m11 * m33) * m42)) - ((m31 * m12) * m43)) + ((m31 * m13) * m42)) + ((m41 * m12) * m33)) - ((m41 * m13) * m32));
HXLINE( 442)		this->_43 = (((((((-(m11) * m22) * m43) + ((m11 * m23) * m42)) + ((m21 * m12) * m43)) - ((m21 * m13) * m42)) - ((m41 * m12) * m23)) + ((m41 * m13) * m22));
HXLINE( 443)		this->_44 = (((((((m11 * m22) * m33) - ((m11 * m23) * m32)) - ((m21 * m12) * m33)) + ((m21 * m13) * m32)) + ((m31 * m12) * m23)) - ((m31 * m13) * m22));
HXLINE( 445)		Float det = ((((m11 * this->_11) + (m12 * this->_21)) + (m13 * this->_31)) + (m14 * this->_41));
HXLINE( 446)		Float _hx_tmp;
HXDLIN( 446)		if ((det < 0)) {
HXLINE( 446)			_hx_tmp = -(det);
            		}
            		else {
HXLINE( 446)			_hx_tmp = det;
            		}
HXDLIN( 446)		if ((_hx_tmp < ((Float)1e-10))) {
HXLINE( 447)			this->zero();
HXLINE( 448)			return;
            		}
HXLINE( 451)		det = (((Float)1.0) / det);
HXLINE( 452)		 ::h3d::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 452)		_hx_tmp1->_11 = (_hx_tmp1->_11 * det);
HXLINE( 453)		 ::h3d::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 453)		_hx_tmp2->_12 = (_hx_tmp2->_12 * det);
HXLINE( 454)		 ::h3d::Matrix _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 454)		_hx_tmp3->_13 = (_hx_tmp3->_13 * det);
HXLINE( 455)		 ::h3d::Matrix _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 455)		_hx_tmp4->_14 = (_hx_tmp4->_14 * det);
HXLINE( 456)		 ::h3d::Matrix _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 456)		_hx_tmp5->_21 = (_hx_tmp5->_21 * det);
HXLINE( 457)		 ::h3d::Matrix _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 457)		_hx_tmp6->_22 = (_hx_tmp6->_22 * det);
HXLINE( 458)		 ::h3d::Matrix _hx_tmp7 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 458)		_hx_tmp7->_23 = (_hx_tmp7->_23 * det);
HXLINE( 459)		 ::h3d::Matrix _hx_tmp8 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 459)		_hx_tmp8->_24 = (_hx_tmp8->_24 * det);
HXLINE( 460)		 ::h3d::Matrix _hx_tmp9 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 460)		_hx_tmp9->_31 = (_hx_tmp9->_31 * det);
HXLINE( 461)		 ::h3d::Matrix _hx_tmp10 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 461)		_hx_tmp10->_32 = (_hx_tmp10->_32 * det);
HXLINE( 462)		 ::h3d::Matrix _hx_tmp11 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 462)		_hx_tmp11->_33 = (_hx_tmp11->_33 * det);
HXLINE( 463)		 ::h3d::Matrix _hx_tmp12 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 463)		_hx_tmp12->_34 = (_hx_tmp12->_34 * det);
HXLINE( 464)		 ::h3d::Matrix _hx_tmp13 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 464)		_hx_tmp13->_41 = (_hx_tmp13->_41 * det);
HXLINE( 465)		 ::h3d::Matrix _hx_tmp14 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 465)		_hx_tmp14->_42 = (_hx_tmp14->_42 * det);
HXLINE( 466)		 ::h3d::Matrix _hx_tmp15 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 466)		_hx_tmp15->_43 = (_hx_tmp15->_43 * det);
HXLINE( 467)		 ::h3d::Matrix _hx_tmp16 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 467)		_hx_tmp16->_44 = (_hx_tmp16->_44 * det);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,initInverse,(void))

void Matrix_obj::initInverse3x3( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_471_initInverse3x3)
HXLINE( 472)		Float m11 = m->_11;
HXDLIN( 472)		Float m12 = m->_12;
HXDLIN( 472)		Float m13 = m->_13;
HXLINE( 473)		Float m21 = m->_21;
HXDLIN( 473)		Float m22 = m->_22;
HXDLIN( 473)		Float m23 = m->_23;
HXLINE( 474)		Float m31 = m->_31;
HXDLIN( 474)		Float m32 = m->_32;
HXDLIN( 474)		Float m33 = m->_33;
HXLINE( 476)		this->_11 = ((m22 * m33) - (m32 * m23));
HXLINE( 477)		this->_12 = ((-(m12) * m33) + (m32 * m13));
HXLINE( 478)		this->_13 = ((m12 * m23) - (m22 * m13));
HXLINE( 479)		this->_21 = ((-(m21) * m33) + (m31 * m23));
HXLINE( 480)		this->_22 = ((m11 * m33) - (m31 * m13));
HXLINE( 481)		this->_23 = ((-(m11) * m23) + (m21 * m13));
HXLINE( 482)		this->_31 = ((m21 * m32) - (m31 * m22));
HXLINE( 483)		this->_32 = ((-(m11) * m32) + (m31 * m12));
HXLINE( 484)		this->_33 = ((m11 * m22) - (m21 * m12));
HXLINE( 486)		Float det = (((m11 * this->_11) + (m12 * this->_21)) + (m13 * this->_31));
HXLINE( 487)		Float _hx_tmp;
HXDLIN( 487)		if ((det < 0)) {
HXLINE( 487)			_hx_tmp = -(det);
            		}
            		else {
HXLINE( 487)			_hx_tmp = det;
            		}
HXDLIN( 487)		if ((_hx_tmp < ((Float)1e-10))) {
HXLINE( 488)			this->zero();
HXLINE( 489)			return;
            		}
HXLINE( 492)		det = (((Float)1.0) / det);
HXLINE( 493)		 ::h3d::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 493)		_hx_tmp1->_11 = (_hx_tmp1->_11 * det);
HXLINE( 494)		 ::h3d::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 494)		_hx_tmp2->_12 = (_hx_tmp2->_12 * det);
HXLINE( 495)		 ::h3d::Matrix _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 495)		_hx_tmp3->_13 = (_hx_tmp3->_13 * det);
HXLINE( 496)		this->_14 = ( (Float)(0) );
HXLINE( 497)		 ::h3d::Matrix _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 497)		_hx_tmp4->_21 = (_hx_tmp4->_21 * det);
HXLINE( 498)		 ::h3d::Matrix _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 498)		_hx_tmp5->_22 = (_hx_tmp5->_22 * det);
HXLINE( 499)		 ::h3d::Matrix _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 499)		_hx_tmp6->_23 = (_hx_tmp6->_23 * det);
HXLINE( 500)		this->_24 = ( (Float)(0) );
HXLINE( 501)		 ::h3d::Matrix _hx_tmp7 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 501)		_hx_tmp7->_31 = (_hx_tmp7->_31 * det);
HXLINE( 502)		 ::h3d::Matrix _hx_tmp8 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 502)		_hx_tmp8->_32 = (_hx_tmp8->_32 * det);
HXLINE( 503)		 ::h3d::Matrix _hx_tmp9 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 503)		_hx_tmp9->_33 = (_hx_tmp9->_33 * det);
HXLINE( 504)		this->_34 = ( (Float)(0) );
HXLINE( 505)		this->_41 = ( (Float)(0) );
HXLINE( 506)		this->_42 = ( (Float)(0) );
HXLINE( 507)		this->_43 = ( (Float)(0) );
HXLINE( 508)		this->_44 = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,initInverse3x3,(void))

 ::h3d::Vector Matrix_obj::front(){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_511_front)
HXLINE( 512)		 ::h3d::Vector v =  ::h3d::Vector_obj::__alloc( HX_CTX ,this->_11,this->_12,this->_13,null());
HXLINE( 513)		{
HXLINE( 513)			Float k = (((v->x * v->x) + (v->y * v->y)) + (v->z * v->z));
HXDLIN( 513)			if ((k < ((Float)1e-10))) {
HXLINE( 513)				k = ( (Float)(0) );
            			}
            			else {
HXLINE( 513)				k = (((Float)1.) / ::Math_obj::sqrt(k));
            			}
HXDLIN( 513)			 ::h3d::Vector v1 = v;
HXDLIN( 513)			v1->x = (v1->x * k);
HXDLIN( 513)			 ::h3d::Vector v2 = v;
HXDLIN( 513)			v2->y = (v2->y * k);
HXDLIN( 513)			 ::h3d::Vector v3 = v;
HXDLIN( 513)			v3->z = (v3->z * k);
            		}
HXLINE( 514)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,front,return )

 ::h3d::Vector Matrix_obj::right(){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_517_right)
HXLINE( 518)		 ::h3d::Vector v =  ::h3d::Vector_obj::__alloc( HX_CTX ,this->_21,this->_22,this->_23,null());
HXLINE( 519)		{
HXLINE( 519)			Float k = (((v->x * v->x) + (v->y * v->y)) + (v->z * v->z));
HXDLIN( 519)			if ((k < ((Float)1e-10))) {
HXLINE( 519)				k = ( (Float)(0) );
            			}
            			else {
HXLINE( 519)				k = (((Float)1.) / ::Math_obj::sqrt(k));
            			}
HXDLIN( 519)			 ::h3d::Vector v1 = v;
HXDLIN( 519)			v1->x = (v1->x * k);
HXDLIN( 519)			 ::h3d::Vector v2 = v;
HXDLIN( 519)			v2->y = (v2->y * k);
HXDLIN( 519)			 ::h3d::Vector v3 = v;
HXDLIN( 519)			v3->z = (v3->z * k);
            		}
HXLINE( 520)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,right,return )

 ::h3d::Vector Matrix_obj::up(){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_523_up)
HXLINE( 524)		 ::h3d::Vector v =  ::h3d::Vector_obj::__alloc( HX_CTX ,this->_31,this->_32,this->_33,null());
HXLINE( 525)		{
HXLINE( 525)			Float k = (((v->x * v->x) + (v->y * v->y)) + (v->z * v->z));
HXDLIN( 525)			if ((k < ((Float)1e-10))) {
HXLINE( 525)				k = ( (Float)(0) );
            			}
            			else {
HXLINE( 525)				k = (((Float)1.) / ::Math_obj::sqrt(k));
            			}
HXDLIN( 525)			 ::h3d::Vector v1 = v;
HXDLIN( 525)			v1->x = (v1->x * k);
HXDLIN( 525)			 ::h3d::Vector v2 = v;
HXDLIN( 525)			v2->y = (v2->y * k);
HXDLIN( 525)			 ::h3d::Vector v3 = v;
HXDLIN( 525)			v3->z = (v3->z * k);
            		}
HXLINE( 526)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,up,return )

void Matrix_obj::transpose(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_529_transpose)
HXLINE( 530)		Float tmp = this->_12;
HXLINE( 531)		this->_12 = this->_21;
HXDLIN( 531)		this->_21 = tmp;
HXLINE( 532)		tmp = this->_13;
HXDLIN( 532)		this->_13 = this->_31;
HXDLIN( 532)		this->_31 = tmp;
HXLINE( 533)		tmp = this->_14;
HXDLIN( 533)		this->_14 = this->_41;
HXDLIN( 533)		this->_41 = tmp;
HXLINE( 534)		tmp = this->_23;
HXDLIN( 534)		this->_23 = this->_32;
HXDLIN( 534)		this->_32 = tmp;
HXLINE( 535)		tmp = this->_24;
HXDLIN( 535)		this->_24 = this->_42;
HXDLIN( 535)		this->_42 = tmp;
HXLINE( 536)		tmp = this->_34;
HXDLIN( 536)		this->_34 = this->_43;
HXDLIN( 536)		this->_43 = tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,transpose,(void))

 ::h3d::Matrix Matrix_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_539_clone)
HXLINE( 540)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 541)		m->_11 = this->_11;
HXDLIN( 541)		m->_12 = this->_12;
HXDLIN( 541)		m->_13 = this->_13;
HXDLIN( 541)		m->_14 = this->_14;
HXLINE( 542)		m->_21 = this->_21;
HXDLIN( 542)		m->_22 = this->_22;
HXDLIN( 542)		m->_23 = this->_23;
HXDLIN( 542)		m->_24 = this->_24;
HXLINE( 543)		m->_31 = this->_31;
HXDLIN( 543)		m->_32 = this->_32;
HXDLIN( 543)		m->_33 = this->_33;
HXDLIN( 543)		m->_34 = this->_34;
HXLINE( 544)		m->_41 = this->_41;
HXDLIN( 544)		m->_42 = this->_42;
HXDLIN( 544)		m->_43 = this->_43;
HXDLIN( 544)		m->_44 = this->_44;
HXLINE( 545)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

void Matrix_obj::load( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_548_load)
HXLINE( 549)		this->_11 = m->_11;
HXDLIN( 549)		this->_12 = m->_12;
HXDLIN( 549)		this->_13 = m->_13;
HXDLIN( 549)		this->_14 = m->_14;
HXLINE( 550)		this->_21 = m->_21;
HXDLIN( 550)		this->_22 = m->_22;
HXDLIN( 550)		this->_23 = m->_23;
HXDLIN( 550)		this->_24 = m->_24;
HXLINE( 551)		this->_31 = m->_31;
HXDLIN( 551)		this->_32 = m->_32;
HXDLIN( 551)		this->_33 = m->_33;
HXDLIN( 551)		this->_34 = m->_34;
HXLINE( 552)		this->_41 = m->_41;
HXDLIN( 552)		this->_42 = m->_42;
HXDLIN( 552)		this->_43 = m->_43;
HXDLIN( 552)		this->_44 = m->_44;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,load,(void))

void Matrix_obj::loadValues(::Array< Float > a){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_555_loadValues)
HXLINE( 556)		this->_11 = a->__get(0);
HXDLIN( 556)		this->_12 = a->__get(1);
HXDLIN( 556)		this->_13 = a->__get(2);
HXDLIN( 556)		this->_14 = a->__get(3);
HXLINE( 557)		this->_21 = a->__get(4);
HXDLIN( 557)		this->_22 = a->__get(5);
HXDLIN( 557)		this->_23 = a->__get(6);
HXDLIN( 557)		this->_24 = a->__get(7);
HXLINE( 558)		this->_31 = a->__get(8);
HXDLIN( 558)		this->_32 = a->__get(9);
HXDLIN( 558)		this->_33 = a->__get(10);
HXDLIN( 558)		this->_34 = a->__get(11);
HXLINE( 559)		this->_41 = a->__get(12);
HXDLIN( 559)		this->_42 = a->__get(13);
HXDLIN( 559)		this->_43 = a->__get(14);
HXDLIN( 559)		this->_44 = a->__get(15);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,loadValues,(void))

::Array< Float > Matrix_obj::getFloats(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_563_getFloats)
HXDLIN( 563)		return ::Array_obj< Float >::__new(16)->init(0,this->_11)->init(1,this->_12)->init(2,this->_13)->init(3,this->_14)->init(4,this->_21)->init(5,this->_22)->init(6,this->_23)->init(7,this->_24)->init(8,this->_31)->init(9,this->_32)->init(10,this->_33)->init(11,this->_34)->init(12,this->_41)->init(13,this->_42)->init(14,this->_43)->init(15,this->_44);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,getFloats,return )

 ::h3d::Vector Matrix_obj::getDirection(){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_566_getDirection)
HXLINE( 567)		 ::h3d::Quat q =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 568)		q->initRotateMatrix(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 569)		q->normalize();
HXLINE( 570)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(( (Float)(1) ) - (( (Float)(2) ) * ((q->y * q->y) + (q->z * q->z)))),(( (Float)(2) ) * ((q->x * q->y) + (q->z * q->w))),(( (Float)(2) ) * ((q->x * q->z) - (q->y * q->w))),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,getDirection,return )

 ::h3d::Vector Matrix_obj::getEulerAngles(){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_576_getEulerAngles)
HXLINE( 577)		 ::h3d::Matrix m = this->clone();
HXLINE( 578)		 ::h3d::Vector v = null();
HXDLIN( 578)		if (::hx::IsNull( v )) {
HXLINE( 578)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXDLIN( 578)		v->x = ::Math_obj::sqrt((((this->_11 * this->_11) + (this->_12 * this->_12)) + (this->_13 * this->_13)));
HXDLIN( 578)		v->y = ::Math_obj::sqrt((((this->_21 * this->_21) + (this->_22 * this->_22)) + (this->_23 * this->_23)));
HXDLIN( 578)		v->z = ::Math_obj::sqrt((((this->_31 * this->_31) + (this->_32 * this->_32)) + (this->_33 * this->_33)));
HXDLIN( 578)		if (((((this->_11 * ((this->_22 * this->_33) - (this->_23 * this->_32))) + (this->_12 * ((this->_23 * this->_31) - (this->_21 * this->_33)))) + (this->_13 * ((this->_21 * this->_32) - (this->_22 * this->_31)))) < 0)) {
HXLINE( 578)			 ::h3d::Vector v1 = v;
HXDLIN( 578)			v1->x = (v1->x * ( (Float)(-1) ));
HXDLIN( 578)			 ::h3d::Vector v2 = v;
HXDLIN( 578)			v2->y = (v2->y * ( (Float)(-1) ));
HXDLIN( 578)			 ::h3d::Vector v3 = v;
HXDLIN( 578)			v3->z = (v3->z * ( (Float)(-1) ));
            		}
HXDLIN( 578)		 ::h3d::Vector s = v;
HXLINE( 579)		m->prependScale((((Float)1.0) / s->x),(((Float)1.0) / s->y),(((Float)1.0) / s->z));
HXLINE( 580)		Float cy = ::Math_obj::sqrt(((m->_11 * m->_11) + (m->_12 * m->_12)));
HXLINE( 581)		if ((cy > ((Float)0.01))) {
HXLINE( 582)			 ::h3d::Vector v1 =  ::h3d::Vector_obj::__alloc( HX_CTX ,::Math_obj::atan2(m->_23,m->_33),::Math_obj::atan2(-(m->_13),cy),::Math_obj::atan2(m->_12,m->_11),null());
HXLINE( 587)			 ::h3d::Vector v2 =  ::h3d::Vector_obj::__alloc( HX_CTX ,::Math_obj::atan2(-(m->_23),-(m->_33)),::Math_obj::atan2(-(m->_13),-(cy)),::Math_obj::atan2(-(m->_12),-(m->_11)),null());
HXLINE( 592)			if (((((v1->x * v1->x) + (v1->y * v1->y)) + (v1->z * v1->z)) < (((v2->x * v2->x) + (v2->y * v2->y)) + (v2->z * v2->z)))) {
HXLINE( 592)				return v1;
            			}
            			else {
HXLINE( 592)				return v2;
            			}
            		}
            		else {
HXLINE( 595)			return  ::h3d::Vector_obj::__alloc( HX_CTX ,::Math_obj::atan2(-(m->_32),m->_22),::Math_obj::atan2(-(m->_13),cy),((Float)0.0),null());
            		}
HXLINE( 581)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,getEulerAngles,return )

::String Matrix_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_603_toString)
HXDLIN( 603)		::String _hx_tmp = (((HX_("MAT=[\n",4c,02,3b,6e) + HX_("  [ ",65,6b,3f,15)) + ::hxd::Math_obj::fmt(this->_11)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp1 = ((_hx_tmp + ::hxd::Math_obj::fmt(this->_12)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp2 = ((_hx_tmp1 + ::hxd::Math_obj::fmt(this->_13)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp3 = (((_hx_tmp2 + ::hxd::Math_obj::fmt(this->_14)) + HX_(" ]\n",2d,99,18,00)) + HX_("  [ ",65,6b,3f,15));
HXDLIN( 603)		::String _hx_tmp4 = ((_hx_tmp3 + ::hxd::Math_obj::fmt(this->_21)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp5 = ((_hx_tmp4 + ::hxd::Math_obj::fmt(this->_22)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp6 = ((_hx_tmp5 + ::hxd::Math_obj::fmt(this->_23)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp7 = (((_hx_tmp6 + ::hxd::Math_obj::fmt(this->_24)) + HX_(" ]\n",2d,99,18,00)) + HX_("  [ ",65,6b,3f,15));
HXDLIN( 603)		::String _hx_tmp8 = ((_hx_tmp7 + ::hxd::Math_obj::fmt(this->_31)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp9 = ((_hx_tmp8 + ::hxd::Math_obj::fmt(this->_32)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp10 = ((_hx_tmp9 + ::hxd::Math_obj::fmt(this->_33)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp11 = (((_hx_tmp10 + ::hxd::Math_obj::fmt(this->_34)) + HX_(" ]\n",2d,99,18,00)) + HX_("  [ ",65,6b,3f,15));
HXDLIN( 603)		::String _hx_tmp12 = ((_hx_tmp11 + ::hxd::Math_obj::fmt(this->_41)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp13 = ((_hx_tmp12 + ::hxd::Math_obj::fmt(this->_42)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		::String _hx_tmp14 = ((_hx_tmp13 + ::hxd::Math_obj::fmt(this->_43)) + HX_(", ",74,26,00,00));
HXDLIN( 603)		return (((_hx_tmp14 + ::hxd::Math_obj::fmt(this->_44)) + HX_(" ]\n",2d,99,18,00)) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

void Matrix_obj::colorHue(Float hue){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_618_colorHue)
HXLINE( 619)		if ((hue == ((Float)0.))) {
HXLINE( 620)			return;
            		}
HXLINE( 622)		Float cosA = ::Math_obj::cos(-(hue));
HXLINE( 623)		Float sinA = ::Math_obj::sin(-(hue));
HXLINE( 624)		Float ch = ((( (Float)(1) ) - cosA) / ( (Float)(3) ));
HXLINE( 626)		 ::h3d::Matrix tmp = ::h3d::Matrix_obj::tmp;
HXLINE( 627)		tmp->_11 = (cosA + ch);
HXLINE( 628)		tmp->_12 = (ch - (((Float)0.57735026918962576450914878050196) * sinA));
HXLINE( 629)		tmp->_13 = (ch + (((Float)0.57735026918962576450914878050196) * sinA));
HXLINE( 630)		tmp->_21 = (ch + (((Float)0.57735026918962576450914878050196) * sinA));
HXLINE( 631)		tmp->_22 = (cosA + ch);
HXLINE( 632)		tmp->_23 = (ch - (((Float)0.57735026918962576450914878050196) * sinA));
HXLINE( 633)		tmp->_31 = (ch - (((Float)0.57735026918962576450914878050196) * sinA));
HXLINE( 634)		tmp->_32 = (ch + (((Float)0.57735026918962576450914878050196) * sinA));
HXLINE( 635)		tmp->_33 = (cosA + ch);
HXLINE( 637)		tmp->_34 = ( (Float)(0) );
HXLINE( 638)		tmp->_41 = ( (Float)(0) );
HXLINE( 639)		tmp->_42 = ( (Float)(0) );
HXLINE( 640)		tmp->_43 = ( (Float)(0) );
HXLINE( 641)		this->multiply3x4(::hx::ObjectPtr<OBJ_>(this),tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,colorHue,(void))

void Matrix_obj::colorSaturate(Float sat){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_644_colorSaturate)
HXLINE( 645)		sat = (sat + 1);
HXLINE( 646)		Float ins = (( (Float)(1) ) - sat);
HXLINE( 647)		Float r = (ins * ((Float)0.212671));
HXLINE( 648)		Float g = (ins * ((Float)0.71516));
HXLINE( 649)		Float b = (ins * ((Float)0.072169));
HXLINE( 650)		 ::h3d::Matrix tmp = ::h3d::Matrix_obj::tmp;
HXLINE( 651)		tmp->_11 = (r + sat);
HXLINE( 652)		tmp->_12 = r;
HXLINE( 653)		tmp->_13 = r;
HXLINE( 654)		tmp->_21 = g;
HXLINE( 655)		tmp->_22 = (g + sat);
HXLINE( 656)		tmp->_23 = g;
HXLINE( 657)		tmp->_31 = b;
HXLINE( 658)		tmp->_32 = b;
HXLINE( 659)		tmp->_33 = (b + sat);
HXLINE( 660)		tmp->_41 = ( (Float)(0) );
HXLINE( 661)		tmp->_42 = ( (Float)(0) );
HXLINE( 662)		tmp->_43 = ( (Float)(0) );
HXLINE( 663)		this->multiply3x4(::hx::ObjectPtr<OBJ_>(this),tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,colorSaturate,(void))

void Matrix_obj::colorContrast(Float contrast){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_666_colorContrast)
HXLINE( 667)		 ::h3d::Matrix tmp = ::h3d::Matrix_obj::tmp;
HXLINE( 668)		Float v = (contrast + 1);
HXLINE( 669)		tmp->_11 = v;
HXLINE( 670)		tmp->_12 = ( (Float)(0) );
HXLINE( 671)		tmp->_13 = ( (Float)(0) );
HXLINE( 672)		tmp->_21 = ( (Float)(0) );
HXLINE( 673)		tmp->_22 = v;
HXLINE( 674)		tmp->_23 = ( (Float)(0) );
HXLINE( 675)		tmp->_31 = ( (Float)(0) );
HXLINE( 676)		tmp->_32 = ( (Float)(0) );
HXLINE( 677)		tmp->_33 = v;
HXLINE( 678)		tmp->_41 = (-(contrast) * ((Float)0.5));
HXLINE( 679)		tmp->_42 = (-(contrast) * ((Float)0.5));
HXLINE( 680)		tmp->_43 = (-(contrast) * ((Float)0.5));
HXLINE( 681)		this->multiply3x4(::hx::ObjectPtr<OBJ_>(this),tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,colorContrast,(void))

void Matrix_obj::colorLightness(Float lightness){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_684_colorLightness)
HXLINE( 685)		 ::h3d::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 685)		_hx_tmp->_41 = (_hx_tmp->_41 + lightness);
HXLINE( 686)		 ::h3d::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 686)		_hx_tmp1->_42 = (_hx_tmp1->_42 + lightness);
HXLINE( 687)		 ::h3d::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 687)		_hx_tmp2->_43 = (_hx_tmp2->_43 + lightness);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,colorLightness,(void))

void Matrix_obj::colorGain(int color,Float alpha){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_690_colorGain)
HXLINE( 691)		 ::h3d::Matrix tmp = ::h3d::Matrix_obj::tmp;
HXLINE( 692)		tmp->_11 = (( (Float)(1) ) - alpha);
HXLINE( 693)		tmp->_12 = ( (Float)(0) );
HXLINE( 694)		tmp->_13 = ( (Float)(0) );
HXLINE( 695)		tmp->_21 = ( (Float)(0) );
HXLINE( 696)		tmp->_22 = (( (Float)(1) ) - alpha);
HXLINE( 697)		tmp->_23 = ( (Float)(0) );
HXLINE( 698)		tmp->_31 = ( (Float)(0) );
HXLINE( 699)		tmp->_32 = ( (Float)(0) );
HXLINE( 700)		tmp->_33 = (( (Float)(1) ) - alpha);
HXLINE( 701)		tmp->_41 = ((( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) )) * alpha);
HXLINE( 702)		tmp->_42 = ((( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) )) * alpha);
HXLINE( 703)		tmp->_43 = ((( (Float)((color & 255)) ) / ( (Float)(255) )) * alpha);
HXLINE( 704)		this->multiply3x4(::hx::ObjectPtr<OBJ_>(this),tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,colorGain,(void))

void Matrix_obj::colorBits(int bits,Float blend){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_708_colorBits)
HXLINE( 709)		Float t11 = ((Float)0.);
HXDLIN( 709)		Float t12 = ((Float)0.);
HXDLIN( 709)		Float t13 = ((Float)0.);
HXLINE( 710)		Float t21 = ((Float)0.);
HXDLIN( 710)		Float t22 = ((Float)0.);
HXDLIN( 710)		Float t23 = ((Float)0.);
HXLINE( 711)		Float t31 = ((Float)0.);
HXDLIN( 711)		Float t32 = ((Float)0.);
HXDLIN( 711)		Float t33 = ((Float)0.);
HXLINE( 712)		int c = bits;
HXLINE( 713)		if (((c & 1) == 1)) {
HXLINE( 713)			t11 = ( (Float)(1) );
            		}
HXDLIN( 713)		c = (c >> 1);
HXLINE( 714)		if (((c & 1) == 1)) {
HXLINE( 714)			t12 = ( (Float)(1) );
            		}
HXDLIN( 714)		c = (c >> 1);
HXLINE( 715)		if (((c & 1) == 1)) {
HXLINE( 715)			t13 = ( (Float)(1) );
            		}
HXDLIN( 715)		c = (c >> 1);
HXLINE( 716)		if (((c & 1) == 1)) {
HXLINE( 716)			t21 = ( (Float)(1) );
            		}
HXDLIN( 716)		c = (c >> 1);
HXLINE( 717)		if (((c & 1) == 1)) {
HXLINE( 717)			t22 = ( (Float)(1) );
            		}
HXDLIN( 717)		c = (c >> 1);
HXLINE( 718)		if (((c & 1) == 1)) {
HXLINE( 718)			t23 = ( (Float)(1) );
            		}
HXDLIN( 718)		c = (c >> 1);
HXLINE( 719)		if (((c & 1) == 1)) {
HXLINE( 719)			t31 = ( (Float)(1) );
            		}
HXDLIN( 719)		c = (c >> 1);
HXLINE( 720)		if (((c & 1) == 1)) {
HXLINE( 720)			t32 = ( (Float)(1) );
            		}
HXDLIN( 720)		c = (c >> 1);
HXLINE( 721)		if (((c & 1) == 1)) {
HXLINE( 721)			t33 = ( (Float)(1) );
            		}
HXDLIN( 721)		c = (c >> 1);
HXLINE( 722)		Float r = ((t11 + t21) + t31);
HXLINE( 723)		Float g = ((t12 + t22) + t32);
HXLINE( 724)		Float b = ((t13 + t23) + t33);
HXLINE( 725)		if ((r > 1)) {
HXLINE( 725)			t11 = (t11 / r);
HXDLIN( 725)			t21 = (t21 / r);
HXDLIN( 725)			t31 = (t31 / r);
            		}
HXLINE( 726)		if ((g > 1)) {
HXLINE( 726)			t12 = (t12 / g);
HXDLIN( 726)			t22 = (t22 / g);
HXDLIN( 726)			t32 = (t32 / g);
            		}
HXLINE( 727)		if ((b > 1)) {
HXLINE( 727)			t13 = (t13 / b);
HXDLIN( 727)			t23 = (t23 / b);
HXDLIN( 727)			t33 = (t33 / b);
            		}
HXLINE( 731)		Float b11 = (((this->_11 * t11) + (this->_12 * t21)) + (this->_13 * t31));
HXLINE( 732)		Float b12 = (((this->_11 * t12) + (this->_12 * t22)) + (this->_13 * t32));
HXLINE( 733)		Float b13 = (((this->_11 * t13) + (this->_12 * t23)) + (this->_13 * t33));
HXLINE( 735)		Float b21 = (((this->_21 * t11) + (this->_22 * t21)) + (this->_23 * t31));
HXLINE( 736)		Float b22 = (((this->_21 * t12) + (this->_22 * t22)) + (this->_23 * t32));
HXLINE( 737)		Float b23 = (((this->_21 * t13) + (this->_22 * t23)) + (this->_23 * t33));
HXLINE( 739)		Float b31 = (((this->_31 * t11) + (this->_32 * t21)) + (this->_33 * t31));
HXLINE( 740)		Float b32 = (((this->_31 * t12) + (this->_32 * t22)) + (this->_33 * t32));
HXLINE( 741)		Float b33 = (((this->_31 * t13) + (this->_32 * t23)) + (this->_33 * t33));
HXLINE( 744)		Float ik = blend;
HXDLIN( 744)		Float k = (( (Float)(1) ) - ik);
HXLINE( 745)		this->_11 = ((this->_11 * k) + (b11 * ik));
HXLINE( 746)		this->_12 = ((this->_12 * k) + (b12 * ik));
HXLINE( 747)		this->_13 = ((this->_13 * k) + (b13 * ik));
HXLINE( 748)		this->_21 = ((this->_21 * k) + (b21 * ik));
HXLINE( 749)		this->_22 = ((this->_22 * k) + (b22 * ik));
HXLINE( 750)		this->_23 = ((this->_23 * k) + (b23 * ik));
HXLINE( 751)		this->_31 = ((this->_31 * k) + (b31 * ik));
HXLINE( 752)		this->_32 = ((this->_32 * k) + (b32 * ik));
HXLINE( 753)		this->_33 = ((this->_33 * k) + (b33 * ik));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,colorBits,(void))

void Matrix_obj::colorAdd(int c){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_756_colorAdd)
HXLINE( 757)		 ::h3d::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 757)		_hx_tmp->_41 = (_hx_tmp->_41 + (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) )));
HXLINE( 758)		 ::h3d::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 758)		_hx_tmp1->_42 = (_hx_tmp1->_42 + (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) )));
HXLINE( 759)		 ::h3d::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 759)		_hx_tmp2->_43 = (_hx_tmp2->_43 + (( (Float)((c & 255)) ) / ( (Float)(255) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,colorAdd,(void))

void Matrix_obj::colorSet(int c,::hx::Null< Float >  __o_alpha){
            		Float alpha = __o_alpha.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_762_colorSet)
HXLINE( 763)		this->zero();
HXLINE( 764)		this->_44 = alpha;
HXLINE( 765)		{
HXLINE( 765)			 ::h3d::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 765)			_hx_tmp->_41 = (_hx_tmp->_41 + (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) )));
HXDLIN( 765)			 ::h3d::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 765)			_hx_tmp1->_42 = (_hx_tmp1->_42 + (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) )));
HXDLIN( 765)			 ::h3d::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 765)			_hx_tmp2->_43 = (_hx_tmp2->_43 + (( (Float)((c & 255)) ) / ( (Float)(255) )));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,colorSet,(void))

void Matrix_obj::adjustColor( ::Dynamic col){
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_768_adjustColor)
HXLINE( 769)		if (::hx::IsNotNull( col->__Field(HX_("hue",b8,50,4f,00),::hx::paccDynamic) )) {
HXLINE( 769)			this->colorHue(( (Float)(col->__Field(HX_("hue",b8,50,4f,00),::hx::paccDynamic)) ));
            		}
HXLINE( 770)		if (::hx::IsNotNull( col->__Field(HX_("saturation",d2,d3,a1,f6),::hx::paccDynamic) )) {
HXLINE( 770)			this->colorSaturate(( (Float)(col->__Field(HX_("saturation",d2,d3,a1,f6),::hx::paccDynamic)) ));
            		}
HXLINE( 771)		if (::hx::IsNotNull( col->__Field(HX_("contrast",02,ed,b1,37),::hx::paccDynamic) )) {
HXLINE( 771)			this->colorContrast(( (Float)(col->__Field(HX_("contrast",02,ed,b1,37),::hx::paccDynamic)) ));
            		}
HXLINE( 772)		if (::hx::IsNotNull( col->__Field(HX_("lightness",6d,34,47,d7),::hx::paccDynamic) )) {
HXLINE( 772)			this->colorLightness(( (Float)(col->__Field(HX_("lightness",6d,34,47,d7),::hx::paccDynamic)) ));
            		}
HXLINE( 773)		if (::hx::IsNotNull( col->__Field(HX_("gain",7f,f0,5e,44),::hx::paccDynamic) )) {
HXLINE( 773)			this->colorGain(( (int)( ::Dynamic(col->__Field(HX_("gain",7f,f0,5e,44),::hx::paccDynamic))->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic)) ),( (Float)( ::Dynamic(col->__Field(HX_("gain",7f,f0,5e,44),::hx::paccDynamic))->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,adjustColor,(void))

 ::h2d::col::Matrix Matrix_obj::toMatrix2D( ::h2d::col::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_776_toMatrix2D)
HXLINE( 777)		if (::hx::IsNull( m )) {
HXLINE( 777)			m =  ::h2d::col::Matrix_obj::__alloc( HX_CTX );
            		}
HXLINE( 778)		m->a = this->_11;
HXLINE( 779)		m->b = this->_12;
HXLINE( 780)		m->c = this->_21;
HXLINE( 781)		m->d = this->_22;
HXLINE( 782)		m->x = this->_41;
HXLINE( 783)		m->y = this->_42;
HXLINE( 784)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,toMatrix2D,return )

 ::h3d::Matrix Matrix_obj::tmp;

Float Matrix_obj::lumR;

Float Matrix_obj::lumG;

Float Matrix_obj::lumB;

Float Matrix_obj::SQ13;

 ::h3d::Matrix Matrix_obj::I(){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_789_I)
HXLINE( 790)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 791)		m->identity();
HXLINE( 792)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,I,return )

 ::h3d::Matrix Matrix_obj::L(::Array< Float > a){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_795_L)
HXLINE( 796)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 797)		m->loadValues(a);
HXLINE( 798)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,L,return )

 ::h3d::Matrix Matrix_obj::T(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_801_T)
HXLINE( 802)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 803)		m->initTranslation(x,y,z);
HXLINE( 804)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,T,return )

 ::h3d::Matrix Matrix_obj::R(Float x,Float y,Float z){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_807_R)
HXLINE( 808)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 809)		m->initRotation(x,y,z);
HXLINE( 810)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,R,return )

 ::h3d::Matrix Matrix_obj::S(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)1.));
            		Float y = __o_y.Default(((Float)1.));
            		Float z = __o_z.Default(((Float)1.0));
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_813_S)
HXLINE( 814)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 815)		m->initScale(x,y,z);
HXLINE( 816)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,S,return )

 ::h3d::Matrix Matrix_obj::lookAtX( ::h3d::Vector dir, ::h3d::Vector up, ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_822_lookAtX)
HXLINE( 823)		if (::hx::IsNull( up )) {
HXLINE( 823)			up =  ::h3d::Vector_obj::__alloc( HX_CTX ,0,0,1,null());
            		}
HXLINE( 824)		if (::hx::IsNull( m )) {
HXLINE( 824)			m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
            		}
HXLINE( 825)		Float k = (((dir->x * dir->x) + (dir->y * dir->y)) + (dir->z * dir->z));
HXDLIN( 825)		if ((k < ((Float)1e-10))) {
HXLINE(  78)			k = ( (Float)(0) );
            		}
            		else {
HXLINE(  78)			k = (((Float)1.) / ::Math_obj::sqrt(k));
            		}
HXLINE( 825)		Float ax_x = (dir->x * k);
HXDLIN( 825)		Float ax_y = (dir->y * k);
HXDLIN( 825)		Float ax_z = (dir->z * k);
HXDLIN( 825)		Float ax_w = ((Float)1.);
HXLINE( 826)		Float _this_x = ((up->y * ax_z) - (up->z * ax_y));
HXDLIN( 826)		Float _this_y = ((up->z * ax_x) - (up->x * ax_z));
HXDLIN( 826)		Float _this_z = ((up->x * ax_y) - (up->y * ax_x));
HXDLIN( 826)		Float _this_w = ( (Float)(1) );
HXDLIN( 826)		Float k1 = (((_this_x * _this_x) + (_this_y * _this_y)) + (_this_z * _this_z));
HXDLIN( 826)		if ((k1 < ((Float)1e-10))) {
HXLINE(  78)			k1 = ( (Float)(0) );
            		}
            		else {
HXLINE(  78)			k1 = (((Float)1.) / ::Math_obj::sqrt(k1));
            		}
HXLINE( 826)		Float ay_x = (_this_x * k1);
HXDLIN( 826)		Float ay_y = (_this_y * k1);
HXDLIN( 826)		Float ay_z = (_this_z * k1);
HXDLIN( 826)		Float ay_w = ((Float)1.);
HXLINE( 827)		if (((((ay_x * ay_x) + (ay_y * ay_y)) + (ay_z * ay_z)) < ((Float)1e-10))) {
HXLINE( 828)			ay_x = ax_y;
HXLINE( 829)			ay_y = ax_z;
HXLINE( 830)			ay_z = ax_x;
            		}
HXLINE( 832)		Float az_x = ((ax_y * ay_z) - (ax_z * ay_y));
HXDLIN( 832)		Float az_y = ((ax_z * ay_x) - (ax_x * ay_z));
HXDLIN( 832)		Float az_z = ((ax_x * ay_y) - (ax_y * ay_x));
HXDLIN( 832)		Float az_w = ( (Float)(1) );
HXLINE( 833)		m->_11 = ax_x;
HXLINE( 834)		m->_12 = ax_y;
HXLINE( 835)		m->_13 = ax_z;
HXLINE( 836)		m->_14 = ( (Float)(0) );
HXLINE( 837)		m->_21 = ay_x;
HXLINE( 838)		m->_22 = ay_y;
HXLINE( 839)		m->_23 = ay_z;
HXLINE( 840)		m->_24 = ( (Float)(0) );
HXLINE( 841)		m->_31 = az_x;
HXLINE( 842)		m->_32 = az_y;
HXLINE( 843)		m->_33 = az_z;
HXLINE( 844)		m->_34 = ( (Float)(0) );
HXLINE( 845)		m->_41 = ( (Float)(0) );
HXLINE( 846)		m->_42 = ( (Float)(0) );
HXLINE( 847)		m->_43 = ( (Float)(0) );
HXLINE( 848)		m->_44 = ( (Float)(1) );
HXLINE( 849)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,lookAtX,return )


::hx::ObjectPtr< Matrix_obj > Matrix_obj::__new() {
	::hx::ObjectPtr< Matrix_obj > __this = new Matrix_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Matrix_obj > Matrix_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Matrix_obj *__this = (Matrix_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Matrix_obj), false, "h3d.Matrix"));
	*(void **)__this = Matrix_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Matrix_obj::Matrix_obj()
{
}

::hx::Val Matrix_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tx() ); }
		if (HX_FIELD_EQ(inName,"ty") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ty() ); }
		if (HX_FIELD_EQ(inName,"tz") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tz() ); }
		if (HX_FIELD_EQ(inName,"up") ) { return ::hx::Val( up_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_11") ) { return ::hx::Val( _11 ); }
		if (HX_FIELD_EQ(inName,"_12") ) { return ::hx::Val( _12 ); }
		if (HX_FIELD_EQ(inName,"_13") ) { return ::hx::Val( _13 ); }
		if (HX_FIELD_EQ(inName,"_14") ) { return ::hx::Val( _14 ); }
		if (HX_FIELD_EQ(inName,"_21") ) { return ::hx::Val( _21 ); }
		if (HX_FIELD_EQ(inName,"_22") ) { return ::hx::Val( _22 ); }
		if (HX_FIELD_EQ(inName,"_23") ) { return ::hx::Val( _23 ); }
		if (HX_FIELD_EQ(inName,"_24") ) { return ::hx::Val( _24 ); }
		if (HX_FIELD_EQ(inName,"_31") ) { return ::hx::Val( _31 ); }
		if (HX_FIELD_EQ(inName,"_32") ) { return ::hx::Val( _32 ); }
		if (HX_FIELD_EQ(inName,"_33") ) { return ::hx::Val( _33 ); }
		if (HX_FIELD_EQ(inName,"_34") ) { return ::hx::Val( _34 ); }
		if (HX_FIELD_EQ(inName,"_41") ) { return ::hx::Val( _41 ); }
		if (HX_FIELD_EQ(inName,"_42") ) { return ::hx::Val( _42 ); }
		if (HX_FIELD_EQ(inName,"_43") ) { return ::hx::Val( _43 ); }
		if (HX_FIELD_EQ(inName,"_44") ) { return ::hx::Val( _44 ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zero") ) { return ::hx::Val( zero_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"equal") ) { return ::hx::Val( equal_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"front") ) { return ::hx::Val( front_dyn() ); }
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_tx") ) { return ::hx::Val( get_tx_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ty") ) { return ::hx::Val( get_ty_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tz") ) { return ::hx::Val( get_tz_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tx") ) { return ::hx::Val( set_tx_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ty") ) { return ::hx::Val( set_ty_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tz") ) { return ::hx::Val( set_tz_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		if (HX_FIELD_EQ(inName,"invert") ) { return ::hx::Val( invert_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { return ::hx::Val( identity_dyn() ); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return ::hx::Val( getScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return ::hx::Val( multiply_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"colorHue") ) { return ::hx::Val( colorHue_dyn() ); }
		if (HX_FIELD_EQ(inName,"colorAdd") ) { return ::hx::Val( colorAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"colorSet") ) { return ::hx::Val( colorSet_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initScale") ) { return ::hx::Val( initScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"translate") ) { return ::hx::Val( translate_dyn() ); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return ::hx::Val( transpose_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFloats") ) { return ::hx::Val( getFloats_dyn() ); }
		if (HX_FIELD_EQ(inName,"colorGain") ) { return ::hx::Val( colorGain_dyn() ); }
		if (HX_FIELD_EQ(inName,"colorBits") ) { return ::hx::Val( colorBits_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isIdentity") ) { return ::hx::Val( isIdentity_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotateAxis") ) { return ::hx::Val( rotateAxis_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInverse") ) { return ::hx::Val( getInverse_dyn() ); }
		if (HX_FIELD_EQ(inName,"inverse3x4") ) { return ::hx::Val( inverse3x4_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadValues") ) { return ::hx::Val( loadValues_dyn() ); }
		if (HX_FIELD_EQ(inName,"toMatrix2D") ) { return ::hx::Val( toMatrix2D_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"multiply3x4") ) { return ::hx::Val( multiply3x4_dyn() ); }
		if (HX_FIELD_EQ(inName,"initInverse") ) { return ::hx::Val( initInverse_dyn() ); }
		if (HX_FIELD_EQ(inName,"adjustColor") ) { return ::hx::Val( adjustColor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initRotation") ) { return ::hx::Val( initRotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"prependScale") ) { return ::hx::Val( prependScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDirection") ) { return ::hx::Val( getDirection_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initRotationX") ) { return ::hx::Val( initRotationX_dyn() ); }
		if (HX_FIELD_EQ(inName,"initRotationY") ) { return ::hx::Val( initRotationY_dyn() ); }
		if (HX_FIELD_EQ(inName,"initRotationZ") ) { return ::hx::Val( initRotationZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"multiplyValue") ) { return ::hx::Val( multiplyValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"colorSaturate") ) { return ::hx::Val( colorSaturate_dyn() ); }
		if (HX_FIELD_EQ(inName,"colorContrast") ) { return ::hx::Val( colorContrast_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDeterminant") ) { return ::hx::Val( getDeterminant_dyn() ); }
		if (HX_FIELD_EQ(inName,"initInverse3x3") ) { return ::hx::Val( initInverse3x3_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEulerAngles") ) { return ::hx::Val( getEulerAngles_dyn() ); }
		if (HX_FIELD_EQ(inName,"colorLightness") ) { return ::hx::Val( colorLightness_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initTranslation") ) { return ::hx::Val( initTranslation_dyn() ); }
		if (HX_FIELD_EQ(inName,"prependRotation") ) { return ::hx::Val( prependRotation_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initRotationAxis") ) { return ::hx::Val( initRotationAxis_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isIdentityEpsilon") ) { return ::hx::Val( isIdentityEpsilon_dyn() ); }
		if (HX_FIELD_EQ(inName,"multiply3x4inline") ) { return ::hx::Val( multiply3x4inline_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { return ::hx::Val( prependTranslation_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"prependRotationAxis") ) { return ::hx::Val( prependRotationAxis_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"I") ) { outValue = I_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"L") ) { outValue = L_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"T") ) { outValue = T_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"R") ) { outValue = R_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"S") ) { outValue = S_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { outValue = ( tmp ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lookAtX") ) { outValue = lookAtX_dyn(); return true; }
	}
	return false;
}

::hx::Val Matrix_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tx(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"ty") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ty(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"tz") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tz(inValue.Cast< Float >()) ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_11") ) { _11=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_12") ) { _12=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_13") ) { _13=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_14") ) { _14=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_21") ) { _21=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_22") ) { _22=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_23") ) { _23=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_24") ) { _24=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_31") ) { _31=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_32") ) { _32=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_33") ) { _33=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_34") ) { _34=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_41") ) { _41=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_42") ) { _42=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_43") ) { _43=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_44") ) { _44=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { tmp=ioValue.Cast<  ::h3d::Matrix >(); return true; }
	}
	return false;
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_11",ff,40,48,00));
	outFields->push(HX_("_12",00,41,48,00));
	outFields->push(HX_("_13",01,41,48,00));
	outFields->push(HX_("_14",02,41,48,00));
	outFields->push(HX_("_21",de,41,48,00));
	outFields->push(HX_("_22",df,41,48,00));
	outFields->push(HX_("_23",e0,41,48,00));
	outFields->push(HX_("_24",e1,41,48,00));
	outFields->push(HX_("_31",bd,42,48,00));
	outFields->push(HX_("_32",be,42,48,00));
	outFields->push(HX_("_33",bf,42,48,00));
	outFields->push(HX_("_34",c0,42,48,00));
	outFields->push(HX_("_41",9c,43,48,00));
	outFields->push(HX_("_42",9d,43,48,00));
	outFields->push(HX_("_43",9e,43,48,00));
	outFields->push(HX_("_44",9f,43,48,00));
	outFields->push(HX_("tx",84,65,00,00));
	outFields->push(HX_("ty",85,65,00,00));
	outFields->push(HX_("tz",86,65,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Matrix_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_11),HX_("_11",ff,40,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_12),HX_("_12",00,41,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_13),HX_("_13",01,41,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_14),HX_("_14",02,41,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_21),HX_("_21",de,41,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_22),HX_("_22",df,41,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_23),HX_("_23",e0,41,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_24),HX_("_24",e1,41,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_31),HX_("_31",bd,42,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_32),HX_("_32",be,42,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_33),HX_("_33",bf,42,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_34),HX_("_34",c0,42,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_41),HX_("_41",9c,43,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_42),HX_("_42",9d,43,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_43),HX_("_43",9e,43,48,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,_44),HX_("_44",9f,43,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Matrix_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Matrix */ ,(void *) &Matrix_obj::tmp,HX_("tmp",d7,64,58,00)},
	{::hx::fsFloat,(void *) &Matrix_obj::lumR,HX_("lumR",0e,32,bc,47)},
	{::hx::fsFloat,(void *) &Matrix_obj::lumG,HX_("lumG",03,32,bc,47)},
	{::hx::fsFloat,(void *) &Matrix_obj::lumB,HX_("lumB",fe,31,bc,47)},
	{::hx::fsFloat,(void *) &Matrix_obj::SQ13,HX_("SQ13",00,57,1a,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Matrix_obj_sMemberFields[] = {
	HX_("_11",ff,40,48,00),
	HX_("_12",00,41,48,00),
	HX_("_13",01,41,48,00),
	HX_("_14",02,41,48,00),
	HX_("_21",de,41,48,00),
	HX_("_22",df,41,48,00),
	HX_("_23",e0,41,48,00),
	HX_("_24",e1,41,48,00),
	HX_("_31",bd,42,48,00),
	HX_("_32",be,42,48,00),
	HX_("_33",bf,42,48,00),
	HX_("_34",c0,42,48,00),
	HX_("_41",9c,43,48,00),
	HX_("_42",9d,43,48,00),
	HX_("_43",9e,43,48,00),
	HX_("_44",9f,43,48,00),
	HX_("get_tx",cd,fc,2f,a3),
	HX_("get_ty",ce,fc,2f,a3),
	HX_("get_tz",cf,fc,2f,a3),
	HX_("set_tx",41,51,78,6f),
	HX_("set_ty",42,51,78,6f),
	HX_("set_tz",43,51,78,6f),
	HX_("equal",b4,cf,82,72),
	HX_("zero",28,0f,f1,50),
	HX_("identity",3e,45,2f,b9),
	HX_("isIdentity",48,57,de,33),
	HX_("isIdentityEpsilon",02,7f,ea,d8),
	HX_("initRotationX",2a,1c,ef,e7),
	HX_("initRotationY",2b,1c,ef,e7),
	HX_("initRotationZ",2c,1c,ef,e7),
	HX_("initTranslation",c1,47,34,97),
	HX_("initScale",5a,e9,60,94),
	HX_("initRotationAxis",2f,dc,54,06),
	HX_("initRotation",6e,c4,3c,ad),
	HX_("translate",4e,d7,7f,49),
	HX_("scale",8a,ce,ce,78),
	HX_("rotate",5b,46,20,cb),
	HX_("rotateAxis",9c,58,84,78),
	HX_("getPosition",5f,63,ee,f0),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("prependTranslation",83,90,15,05),
	HX_("getScale",14,de,a5,d8),
	HX_("prependRotation",6c,4e,3b,e8),
	HX_("prependRotationAxis",2d,3d,93,bd),
	HX_("prependScale",9c,54,97,c4),
	HX_("multiply3x4",0b,28,1f,ff),
	HX_("multiply3x4inline",a4,0c,99,5d),
	HX_("multiply",24,e2,8c,9a),
	HX_("multiplyValue",ad,ca,3e,7b),
	HX_("invert",16,e7,d8,9f),
	HX_("getInverse",ba,d1,52,8d),
	HX_("getDeterminant",9f,b0,b3,b9),
	HX_("inverse3x4",ff,3d,2c,56),
	HX_("initInverse",80,ba,5b,f6),
	HX_("initInverse3x3",2e,f1,f6,7a),
	HX_("front",a9,18,8e,06),
	HX_("right",dc,0b,64,e9),
	HX_("up",5b,66,00,00),
	HX_("transpose",79,50,2f,4c),
	HX_("clone",5d,13,63,48),
	HX_("load",26,9a,b7,47),
	HX_("loadValues",a8,32,e2,04),
	HX_("getFloats",8d,ac,ac,bd),
	HX_("getDirection",c9,fe,96,1f),
	HX_("getEulerAngles",93,2a,63,ec),
	HX_("toString",ac,d0,6e,38),
	HX_("colorHue",15,57,e7,89),
	HX_("colorSaturate",72,18,fa,80),
	HX_("colorContrast",85,b5,74,3a),
	HX_("colorLightness",8a,de,f3,3e),
	HX_("colorGain",82,7b,cc,1f),
	HX_("colorBits",09,86,84,1c),
	HX_("colorAdd",7e,f8,e1,89),
	HX_("colorSet",ff,a1,ef,89),
	HX_("adjustColor",54,2e,75,5a),
	HX_("toMatrix2D",ee,c8,0f,d9),
	::String(null()) };

static void Matrix_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::tmp,"tmp");
	HX_MARK_MEMBER_NAME(Matrix_obj::lumR,"lumR");
	HX_MARK_MEMBER_NAME(Matrix_obj::lumG,"lumG");
	HX_MARK_MEMBER_NAME(Matrix_obj::lumB,"lumB");
	HX_MARK_MEMBER_NAME(Matrix_obj::SQ13,"SQ13");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::tmp,"tmp");
	HX_VISIT_MEMBER_NAME(Matrix_obj::lumR,"lumR");
	HX_VISIT_MEMBER_NAME(Matrix_obj::lumG,"lumG");
	HX_VISIT_MEMBER_NAME(Matrix_obj::lumB,"lumB");
	HX_VISIT_MEMBER_NAME(Matrix_obj::SQ13,"SQ13");
};

#endif

::hx::Class Matrix_obj::__mClass;

static ::String Matrix_obj_sStaticFields[] = {
	HX_("tmp",d7,64,58,00),
	HX_("lumR",0e,32,bc,47),
	HX_("lumG",03,32,bc,47),
	HX_("lumB",fe,31,bc,47),
	HX_("SQ13",00,57,1a,37),
	HX_("I",49,00,00,00),
	HX_("L",4c,00,00,00),
	HX_("T",54,00,00,00),
	HX_("R",52,00,00,00),
	HX_("S",53,00,00,00),
	HX_("lookAtX",e6,16,11,1d),
	::String(null())
};

void Matrix_obj::__register()
{
	Matrix_obj _hx_dummy;
	Matrix_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.Matrix",f6,32,45,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix_obj::__SetStatic;
	__mClass->mMarkFunc = Matrix_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Matrix_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Matrix_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Matrix_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matrix_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_b796e07832ca9a4f_15_boot)
HXDLIN(  15)		tmp =  ::h3d::Matrix_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_613_boot)
HXDLIN( 613)		lumR = ((Float)0.212671);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_614_boot)
HXDLIN( 614)		lumG = ((Float)0.71516);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_615_boot)
HXDLIN( 615)		lumB = ((Float)0.072169);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b796e07832ca9a4f_617_boot)
HXDLIN( 617)		SQ13 = ((Float)0.57735026918962576450914878050196);
            	}
}

} // end namespace h3d
