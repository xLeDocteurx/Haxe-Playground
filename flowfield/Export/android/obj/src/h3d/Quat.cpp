#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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

HX_DEFINE_STACK_FRAME(_hx_pos_030234dd9c995b86_12_new,"h3d.Quat","new",0x32a5e53e,"h3d.Quat.new","h3d/Quat.hx",12,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_19_set,"h3d.Quat","set",0x32a9b080,"h3d.Quat.set","h3d/Quat.hx",19,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_26_identity,"h3d.Quat","identity",0xc40ecba0,"h3d.Quat.identity","h3d/Quat.hx",26,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_32_lengthSq,"h3d.Quat","lengthSq",0x2aa2e986,"h3d.Quat.lengthSq","h3d/Quat.hx",32,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_36_length,"h3d.Quat","length",0xf6f75ec8,"h3d.Quat.length","h3d/Quat.hx",36,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_39_load,"h3d.Quat","load",0x1d37c788,"h3d.Quat.load","h3d/Quat.hx",39,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_47_clone,"h3d.Quat","clone",0x430a9bbb,"h3d.Quat.clone","h3d/Quat.hx",47,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_50_initMoveTo,"h3d.Quat","initMoveTo",0xf78990fe,"h3d.Quat.initMoveTo","h3d/Quat.hx",50,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_66_initDirection,"h3d.Quat","initDirection",0xb9543b6d,"h3d.Quat.initDirection","h3d/Quat.hx",66,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_108_initRotateAxis,"h3d.Quat","initRotateAxis",0xc0ce87ae,"h3d.Quat.initRotateAxis","h3d/Quat.hx",108,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_118_initRotateMatrix,"h3d.Quat","initRotateMatrix",0x0c983e8e,"h3d.Quat.initRotateMatrix","h3d/Quat.hx",118,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_151_normalize,"h3d.Quat","normalize",0x245746eb,"h3d.Quat.normalize","h3d/Quat.hx",151,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_165_initRotation,"h3d.Quat","initRotation",0x329c23d0,"h3d.Quat.initRotation","h3d/Quat.hx",165,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_180_multiply,"h3d.Quat","multiply",0xa56c6886,"h3d.Quat.multiply","h3d/Quat.hx",180,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_192_toEuler,"h3d.Quat","toEuler",0xdb8601cc,"h3d.Quat.toEuler","h3d/Quat.hx",192,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_195_lerp,"h3d.Quat","lerp",0x1d303fd9,"h3d.Quat.lerp","h3d/Quat.hx",195,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_209_slerp,"h3d.Quat","slerp",0x796c50c8,"h3d.Quat.slerp","h3d/Quat.hx",209,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_232_conjugate,"h3d.Quat","conjugate",0xbb3f4576,"h3d.Quat.conjugate","h3d/Quat.hx",232,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_241_negate,"h3d.Quat","negate",0xbf090ba4,"h3d.Quat.negate","h3d/Quat.hx",241,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_249_dot,"h3d.Quat","dot",0x329e5767,"h3d.Quat.dot","h3d/Quat.hx",249,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_253_getDirection,"h3d.Quat","getDirection",0xa4f65e2b,"h3d.Quat.getDirection","h3d/Quat.hx",253,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_259_toMatrix,"h3d.Quat","toMatrix",0xede6647e,"h3d.Quat.toMatrix","h3d/Quat.hx",259,0xa67b7e11)
HX_LOCAL_STACK_FRAME(_hx_pos_030234dd9c995b86_290_toString,"h3d.Quat","toString",0x434e570e,"h3d.Quat.toString","h3d/Quat.hx",290,0xa67b7e11)
namespace h3d{

void Quat_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            		Float w = __o_w.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_12_new)
HXLINE(  13)		this->x = x;
HXLINE(  14)		this->y = y;
HXLINE(  15)		this->z = z;
HXLINE(  16)		this->w = w;
            	}

Dynamic Quat_obj::__CreateEmpty() { return new Quat_obj; }

void *Quat_obj::_hx_vtable = 0;

Dynamic Quat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Quat_obj > _hx_result = new Quat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Quat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4226d928;
}

void Quat_obj::set(Float x,Float y,Float z,Float w){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_19_set)
HXLINE(  20)		this->x = x;
HXLINE(  21)		this->y = y;
HXLINE(  22)		this->z = z;
HXLINE(  23)		this->w = w;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Quat_obj,set,(void))

void Quat_obj::identity(){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_26_identity)
HXLINE(  27)		this->x = (this->y = (this->z = ( (Float)(0) )));
HXLINE(  28)		this->w = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,identity,(void))

Float Quat_obj::lengthSq(){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_32_lengthSq)
HXDLIN(  32)		return ((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,lengthSq,return )

Float Quat_obj::length(){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_36_length)
HXDLIN(  36)		return ::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,length,return )

void Quat_obj::load( ::h3d::Quat q){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_39_load)
HXLINE(  40)		this->x = q->x;
HXLINE(  41)		this->y = q->y;
HXLINE(  42)		this->z = q->z;
HXLINE(  43)		this->w = q->w;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quat_obj,load,(void))

 ::h3d::Quat Quat_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_030234dd9c995b86_47_clone)
HXDLIN(  47)		return  ::h3d::Quat_obj::__alloc( HX_CTX ,this->x,this->y,this->z,this->w);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,clone,return )

void Quat_obj::initMoveTo( ::h3d::Vector from, ::h3d::Vector to){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_50_initMoveTo)
HXLINE(  55)		Float hx = (from->x + to->x);
HXLINE(  56)		Float hy = (from->y + to->y);
HXLINE(  57)		Float hz = (from->z + to->z);
HXLINE(  58)		Float h = (((Float)1.) / ::Math_obj::sqrt((((hx * hx) + (hy * hy)) + (hz * hz))));
HXLINE(  59)		this->x = ((from->y * hz) - (from->z * hy));
HXLINE(  60)		this->y = ((from->z * hx) - (from->x * hz));
HXLINE(  61)		this->z = ((from->x * hy) - (from->y * hx));
HXLINE(  62)		this->w = (((from->x * hx) + (from->y * hy)) + (from->z * hz));
HXLINE(  63)		this->normalize();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quat_obj,initMoveTo,(void))

void Quat_obj::initDirection( ::h3d::Vector dir){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_66_initDirection)
HXLINE(  68)		Float _this_x = dir->x;
HXDLIN(  68)		Float _this_y = dir->y;
HXDLIN(  68)		Float _this_z = dir->z;
HXDLIN(  68)		Float _this_w = dir->w;
HXDLIN(  68)		Float k = (((_this_x * _this_x) + (_this_y * _this_y)) + (_this_z * _this_z));
HXDLIN(  68)		if ((k < ((Float)1e-10))) {
HXLINE(  78)			k = ( (Float)(0) );
            		}
            		else {
HXLINE(  78)			k = (((Float)1.) / ::Math_obj::sqrt(k));
            		}
HXLINE(  68)		Float ax_x = (_this_x * k);
HXDLIN(  68)		Float ax_y = (_this_y * k);
HXDLIN(  68)		Float ax_z = (_this_z * k);
HXDLIN(  68)		Float ax_w = ((Float)1.);
HXLINE(  69)		Float _this_x1 = -(ax_y);
HXDLIN(  69)		Float _this_y1 = ax_x;
HXDLIN(  69)		Float _this_z1 = ( (Float)(0) );
HXDLIN(  69)		Float _this_w1 = ((Float)1.);
HXDLIN(  69)		Float k1 = (((_this_x1 * _this_x1) + (_this_y1 * _this_y1)) + (_this_z1 * _this_z1));
HXDLIN(  69)		if ((k1 < ((Float)1e-10))) {
HXLINE(  78)			k1 = ( (Float)(0) );
            		}
            		else {
HXLINE(  78)			k1 = (((Float)1.) / ::Math_obj::sqrt(k1));
            		}
HXLINE(  69)		Float ay_x = (_this_x1 * k1);
HXDLIN(  69)		Float ay_y = (_this_y1 * k1);
HXDLIN(  69)		Float ay_z = (_this_z1 * k1);
HXDLIN(  69)		Float ay_w = ((Float)1.);
HXLINE(  70)		if (((((ay_x * ay_x) + (ay_y * ay_y)) + (ay_z * ay_z)) < ((Float)1e-10))) {
HXLINE(  71)			ay_x = ax_y;
HXLINE(  72)			ay_y = ax_z;
HXLINE(  73)			ay_z = ax_x;
            		}
HXLINE(  75)		Float az_x = ((ax_y * ay_z) - (ax_z * ay_y));
HXDLIN(  75)		Float az_y = ((ax_z * ay_x) - (ax_x * ay_z));
HXDLIN(  75)		Float az_z = ((ax_x * ay_y) - (ax_y * ay_x));
HXDLIN(  75)		Float az_w = ( (Float)(1) );
HXLINE(  76)		Float tr = ((ax_x + ay_y) + az_z);
HXLINE(  77)		if ((tr > 0)) {
HXLINE(  78)			Float s = (::Math_obj::sqrt((tr + ((Float)1.0))) * ( (Float)(2) ));
HXLINE(  79)			Float ins = (( (Float)(1) ) / s);
HXLINE(  80)			this->x = ((ay_z - az_y) * ins);
HXLINE(  81)			this->y = ((az_x - ax_z) * ins);
HXLINE(  82)			this->z = ((ax_y - ay_x) * ins);
HXLINE(  83)			this->w = (((Float)0.25) * s);
            		}
            		else {
HXLINE(  84)			bool _hx_tmp;
HXDLIN(  84)			if ((ax_x > ay_y)) {
HXLINE(  84)				_hx_tmp = (ax_x > az_z);
            			}
            			else {
HXLINE(  84)				_hx_tmp = false;
            			}
HXDLIN(  84)			if (_hx_tmp) {
HXLINE(  85)				Float s = (::Math_obj::sqrt((((((Float)1.0) + ax_x) - ay_y) - az_z)) * ( (Float)(2) ));
HXLINE(  86)				Float ins = (( (Float)(1) ) / s);
HXLINE(  87)				this->x = (((Float)0.25) * s);
HXLINE(  88)				this->y = ((ay_x + ax_y) * ins);
HXLINE(  89)				this->z = ((az_x + ax_z) * ins);
HXLINE(  90)				this->w = ((ay_z - az_y) * ins);
            			}
            			else {
HXLINE(  91)				if ((ay_y > az_z)) {
HXLINE(  92)					Float s = (::Math_obj::sqrt((((((Float)1.0) + ay_y) - ax_x) - az_z)) * ( (Float)(2) ));
HXLINE(  93)					Float ins = (( (Float)(1) ) / s);
HXLINE(  94)					this->x = ((ay_x + ax_y) * ins);
HXLINE(  95)					this->y = (((Float)0.25) * s);
HXLINE(  96)					this->z = ((az_y + ay_z) * ins);
HXLINE(  97)					this->w = ((az_x - ax_z) * ins);
            				}
            				else {
HXLINE(  99)					Float s = (::Math_obj::sqrt((((((Float)1.0) + az_z) - ax_x) - ay_y)) * ( (Float)(2) ));
HXLINE( 100)					Float ins = (( (Float)(1) ) / s);
HXLINE( 101)					this->x = ((az_x + ax_z) * ins);
HXLINE( 102)					this->y = ((az_y + ay_z) * ins);
HXLINE( 103)					this->z = (((Float)0.25) * s);
HXLINE( 104)					this->w = ((ax_y - ay_x) * ins);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quat_obj,initDirection,(void))

void Quat_obj::initRotateAxis(Float x,Float y,Float z,Float a){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_108_initRotateAxis)
HXLINE( 109)		Float sin = ::Math_obj::sin((a / ( (Float)(2) )));
HXLINE( 110)		Float cos = ::Math_obj::cos((a / ( (Float)(2) )));
HXLINE( 111)		this->x = (x * sin);
HXLINE( 112)		this->y = (y * sin);
HXLINE( 113)		this->z = (z * sin);
HXLINE( 114)		this->w = (cos * ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z))));
HXLINE( 115)		this->normalize();
            	}


HX_DEFINE_DYNAMIC_FUNC4(Quat_obj,initRotateAxis,(void))

void Quat_obj::initRotateMatrix( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_118_initRotateMatrix)
HXLINE( 119)		Float tr = ((m->_11 + m->_22) + m->_33);
HXLINE( 120)		if ((tr > 0)) {
HXLINE( 121)			Float s = (::Math_obj::sqrt((tr + ((Float)1.0))) * ( (Float)(2) ));
HXLINE( 122)			Float ins = (( (Float)(1) ) / s);
HXLINE( 123)			this->x = ((m->_23 - m->_32) * ins);
HXLINE( 124)			this->y = ((m->_31 - m->_13) * ins);
HXLINE( 125)			this->z = ((m->_12 - m->_21) * ins);
HXLINE( 126)			this->w = (((Float)0.25) * s);
            		}
            		else {
HXLINE( 127)			bool _hx_tmp;
HXDLIN( 127)			if ((m->_11 > m->_22)) {
HXLINE( 127)				_hx_tmp = (m->_11 > m->_33);
            			}
            			else {
HXLINE( 127)				_hx_tmp = false;
            			}
HXDLIN( 127)			if (_hx_tmp) {
HXLINE( 128)				Float s = (::Math_obj::sqrt((((((Float)1.0) + m->_11) - m->_22) - m->_33)) * ( (Float)(2) ));
HXLINE( 129)				Float ins = (( (Float)(1) ) / s);
HXLINE( 130)				this->x = (((Float)0.25) * s);
HXLINE( 131)				this->y = ((m->_21 + m->_12) * ins);
HXLINE( 132)				this->z = ((m->_31 + m->_13) * ins);
HXLINE( 133)				this->w = ((m->_23 - m->_32) * ins);
            			}
            			else {
HXLINE( 134)				if ((m->_22 > m->_33)) {
HXLINE( 135)					Float s = (::Math_obj::sqrt((((((Float)1.0) + m->_22) - m->_11) - m->_33)) * ( (Float)(2) ));
HXLINE( 136)					Float ins = (( (Float)(1) ) / s);
HXLINE( 137)					this->x = ((m->_21 + m->_12) * ins);
HXLINE( 138)					this->y = (((Float)0.25) * s);
HXLINE( 139)					this->z = ((m->_32 + m->_23) * ins);
HXLINE( 140)					this->w = ((m->_31 - m->_13) * ins);
            				}
            				else {
HXLINE( 142)					Float s = (::Math_obj::sqrt((((((Float)1.0) + m->_33) - m->_11) - m->_22)) * ( (Float)(2) ));
HXLINE( 143)					Float ins = (( (Float)(1) ) / s);
HXLINE( 144)					this->x = ((m->_31 + m->_13) * ins);
HXLINE( 145)					this->y = ((m->_32 + m->_23) * ins);
HXLINE( 146)					this->z = (((Float)0.25) * s);
HXLINE( 147)					this->w = ((m->_12 - m->_21) * ins);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quat_obj,initRotateMatrix,(void))

void Quat_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_151_normalize)
HXLINE( 152)		Float len = ((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w));
HXLINE( 153)		if ((len < ((Float)1e-10))) {
HXLINE( 154)			this->x = (this->y = (this->z = ( (Float)(0) )));
HXLINE( 155)			this->w = ( (Float)(1) );
            		}
            		else {
HXLINE( 157)			Float m = (((Float)1.) / ::Math_obj::sqrt(len));
HXLINE( 158)			 ::h3d::Quat _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 158)			_hx_tmp->x = (_hx_tmp->x * m);
HXLINE( 159)			 ::h3d::Quat _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 159)			_hx_tmp1->y = (_hx_tmp1->y * m);
HXLINE( 160)			 ::h3d::Quat _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 160)			_hx_tmp2->z = (_hx_tmp2->z * m);
HXLINE( 161)			 ::h3d::Quat _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 161)			_hx_tmp3->w = (_hx_tmp3->w * m);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,normalize,(void))

void Quat_obj::initRotation(Float ax,Float ay,Float az){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_165_initRotation)
HXLINE( 166)		Float sinX = ::Math_obj::sin((ax * ((Float)0.5)));
HXLINE( 167)		Float cosX = ::Math_obj::cos((ax * ((Float)0.5)));
HXLINE( 168)		Float sinY = ::Math_obj::sin((ay * ((Float)0.5)));
HXLINE( 169)		Float cosY = ::Math_obj::cos((ay * ((Float)0.5)));
HXLINE( 170)		Float sinZ = ::Math_obj::sin((az * ((Float)0.5)));
HXLINE( 171)		Float cosZ = ::Math_obj::cos((az * ((Float)0.5)));
HXLINE( 172)		Float cosYZ = (cosY * cosZ);
HXLINE( 173)		Float sinYZ = (sinY * sinZ);
HXLINE( 174)		this->x = ((sinX * cosYZ) - (cosX * sinYZ));
HXLINE( 175)		this->y = (((cosX * sinY) * cosZ) + ((sinX * cosY) * sinZ));
HXLINE( 176)		this->z = (((cosX * cosY) * sinZ) - ((sinX * sinY) * cosZ));
HXLINE( 177)		this->w = ((cosX * cosYZ) + (sinX * sinYZ));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Quat_obj,initRotation,(void))

void Quat_obj::multiply( ::h3d::Quat q1, ::h3d::Quat q2){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_180_multiply)
HXLINE( 181)		Float x2 = ((((q1->x * q2->w) + (q1->w * q2->x)) + (q1->y * q2->z)) - (q1->z * q2->y));
HXLINE( 182)		Float y2 = ((((q1->w * q2->y) - (q1->x * q2->z)) + (q1->y * q2->w)) + (q1->z * q2->x));
HXLINE( 183)		Float z2 = ((((q1->w * q2->z) + (q1->x * q2->y)) - (q1->y * q2->x)) + (q1->z * q2->w));
HXLINE( 184)		Float w2 = ((((q1->w * q2->w) - (q1->x * q2->x)) - (q1->y * q2->y)) - (q1->z * q2->z));
HXLINE( 185)		this->x = x2;
HXLINE( 186)		this->y = y2;
HXLINE( 187)		this->z = z2;
HXLINE( 188)		this->w = w2;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quat_obj,multiply,(void))

 ::h3d::Vector Quat_obj::toEuler(){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_192_toEuler)
HXDLIN( 192)		return this->toMatrix(null())->getEulerAngles();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,toEuler,return )

void Quat_obj::lerp( ::h3d::Quat q1, ::h3d::Quat q2,Float v,::hx::Null< bool >  __o_nearest){
            		bool nearest = __o_nearest.Default(false);
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_195_lerp)
HXLINE( 196)		Float v2 = (( (Float)(1) ) - v);
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (nearest) {
HXLINE( 197)			_hx_tmp = (((((q1->x * q2->x) + (q1->y * q2->y)) + (q1->z * q2->z)) + (q1->w * q2->w)) < 0);
            		}
            		else {
HXLINE( 197)			_hx_tmp = false;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			v = -(v);
            		}
HXLINE( 199)		Float x = ((q1->x * v2) + (q2->x * v));
HXLINE( 200)		Float y = ((q1->y * v2) + (q2->y * v));
HXLINE( 201)		Float z = ((q1->z * v2) + (q2->z * v));
HXLINE( 202)		Float w = ((q1->w * v2) + (q2->w * v));
HXLINE( 203)		this->x = x;
HXLINE( 204)		this->y = y;
HXLINE( 205)		this->z = z;
HXLINE( 206)		this->w = w;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Quat_obj,lerp,(void))

void Quat_obj::slerp( ::h3d::Quat q1, ::h3d::Quat q2,Float v){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_209_slerp)
HXLINE( 210)		Float cosHalfTheta = ((((q1->x * q2->x) + (q1->y * q2->y)) + (q1->z * q2->z)) + (q1->w * q2->w));
HXLINE( 211)		Float _hx_tmp;
HXDLIN( 211)		if ((cosHalfTheta < 0)) {
HXLINE( 211)			_hx_tmp = -(cosHalfTheta);
            		}
            		else {
HXLINE( 211)			_hx_tmp = cosHalfTheta;
            		}
HXDLIN( 211)		if ((_hx_tmp >= 1)) {
HXLINE( 212)			this->x = q1->x;
HXLINE( 213)			this->y = q1->y;
HXLINE( 214)			this->z = q1->z;
HXLINE( 215)			this->w = q1->w;
HXLINE( 216)			return;
            		}
HXLINE( 218)		Float halfTheta = ::Math_obj::acos(cosHalfTheta);
HXLINE( 219)		Float invSinHalfTheta = (((Float)1.) / ::Math_obj::sqrt((( (Float)(1) ) - (cosHalfTheta * cosHalfTheta))));
HXLINE( 220)		Float _hx_tmp1;
HXDLIN( 220)		if ((invSinHalfTheta < 0)) {
HXLINE( 220)			_hx_tmp1 = -(invSinHalfTheta);
            		}
            		else {
HXLINE( 220)			_hx_tmp1 = invSinHalfTheta;
            		}
HXDLIN( 220)		if ((_hx_tmp1 > ((Float)1e3))) {
HXLINE( 221)			{
HXLINE( 221)				Float v = ((Float)0.5);
HXDLIN( 221)				Float v2 = (( (Float)(1) ) - v);
HXDLIN( 221)				if ((((((q1->x * q2->x) + (q1->y * q2->y)) + (q1->z * q2->z)) + (q1->w * q2->w)) < 0)) {
HXLINE( 221)					v = -(v);
            				}
HXDLIN( 221)				Float x = ((q1->x * v2) + (q2->x * v));
HXDLIN( 221)				Float y = ((q1->y * v2) + (q2->y * v));
HXDLIN( 221)				Float z = ((q1->z * v2) + (q2->z * v));
HXDLIN( 221)				Float w = ((q1->w * v2) + (q2->w * v));
HXDLIN( 221)				this->x = x;
HXDLIN( 221)				this->y = y;
HXDLIN( 221)				this->z = z;
HXDLIN( 221)				this->w = w;
            			}
HXLINE( 222)			return;
            		}
HXLINE( 224)		Float a = (::Math_obj::sin(((( (Float)(1) ) - v) * halfTheta)) * invSinHalfTheta);
HXLINE( 225)		int b;
HXDLIN( 225)		if ((cosHalfTheta < 0)) {
HXLINE( 225)			b = -1;
            		}
            		else {
HXLINE( 225)			b = 1;
            		}
HXDLIN( 225)		Float b1 = ((::Math_obj::sin((v * halfTheta)) * invSinHalfTheta) * ( (Float)(b) ));
HXLINE( 226)		this->x = ((q1->x * a) + (q2->x * b1));
HXLINE( 227)		this->y = ((q1->y * a) + (q2->y * b1));
HXLINE( 228)		this->z = ((q1->z * a) + (q2->z * b1));
HXLINE( 229)		this->w = ((q1->w * a) + (q2->w * b1));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Quat_obj,slerp,(void))

void Quat_obj::conjugate(){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_232_conjugate)
HXLINE( 233)		this->x = -(this->x);
HXLINE( 234)		this->y = -(this->y);
HXLINE( 235)		this->z = -(this->z);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,conjugate,(void))

void Quat_obj::negate(){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_241_negate)
HXLINE( 242)		this->x = -(this->x);
HXLINE( 243)		this->y = -(this->y);
HXLINE( 244)		this->z = -(this->z);
HXLINE( 245)		this->w = -(this->w);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,negate,(void))

Float Quat_obj::dot( ::h3d::Quat q){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_249_dot)
HXDLIN( 249)		return ((((this->x * q->x) + (this->y * q->y)) + (this->z * q->z)) + (this->w * q->w));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quat_obj,dot,return )

 ::h3d::Vector Quat_obj::getDirection(){
            	HX_GC_STACKFRAME(&_hx_pos_030234dd9c995b86_253_getDirection)
HXDLIN( 253)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(( (Float)(1) ) - (( (Float)(2) ) * ((this->y * this->y) + (this->z * this->z)))),(( (Float)(2) ) * ((this->x * this->y) + (this->z * this->w))),(( (Float)(2) ) * ((this->x * this->z) - (this->y * this->w))),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,getDirection,return )

 ::h3d::Matrix Quat_obj::toMatrix( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_030234dd9c995b86_259_toMatrix)
HXLINE( 260)		if (::hx::IsNull( m )) {
HXLINE( 260)			m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
            		}
HXLINE( 261)		Float xx = (this->x * this->x);
HXLINE( 262)		Float xy = (this->x * this->y);
HXLINE( 263)		Float xz = (this->x * this->z);
HXLINE( 264)		Float xw = (this->x * this->w);
HXLINE( 265)		Float yy = (this->y * this->y);
HXLINE( 266)		Float yz = (this->y * this->z);
HXLINE( 267)		Float yw = (this->y * this->w);
HXLINE( 268)		Float zz = (this->z * this->z);
HXLINE( 269)		Float zw = (this->z * this->w);
HXLINE( 270)		m->_11 = (( (Float)(1) ) - (( (Float)(2) ) * (yy + zz)));
HXLINE( 271)		m->_12 = (( (Float)(2) ) * (xy + zw));
HXLINE( 272)		m->_13 = (( (Float)(2) ) * (xz - yw));
HXLINE( 273)		m->_14 = ( (Float)(0) );
HXLINE( 274)		m->_21 = (( (Float)(2) ) * (xy - zw));
HXLINE( 275)		m->_22 = (( (Float)(1) ) - (( (Float)(2) ) * (xx + zz)));
HXLINE( 276)		m->_23 = (( (Float)(2) ) * (yz + xw));
HXLINE( 277)		m->_24 = ( (Float)(0) );
HXLINE( 278)		m->_31 = (( (Float)(2) ) * (xz + yw));
HXLINE( 279)		m->_32 = (( (Float)(2) ) * (yz - xw));
HXLINE( 280)		m->_33 = (( (Float)(1) ) - (( (Float)(2) ) * (xx + yy)));
HXLINE( 281)		m->_34 = ( (Float)(0) );
HXLINE( 282)		m->_41 = ( (Float)(0) );
HXLINE( 283)		m->_42 = ( (Float)(0) );
HXLINE( 284)		m->_43 = ( (Float)(0) );
HXLINE( 285)		m->_44 = ( (Float)(1) );
HXLINE( 286)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quat_obj,toMatrix,return )

::String Quat_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_030234dd9c995b86_290_toString)
HXDLIN( 290)		::String _hx_tmp = ((HX_("{",7b,00,00,00) + ::hxd::Math_obj::fmt(this->x)) + HX_(",",2c,00,00,00));
HXDLIN( 290)		::String _hx_tmp1 = ((_hx_tmp + ::hxd::Math_obj::fmt(this->y)) + HX_(",",2c,00,00,00));
HXDLIN( 290)		::String _hx_tmp2 = ((_hx_tmp1 + ::hxd::Math_obj::fmt(this->z)) + HX_(",",2c,00,00,00));
HXDLIN( 290)		return ((_hx_tmp2 + ::hxd::Math_obj::fmt(this->w)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quat_obj,toString,return )


::hx::ObjectPtr< Quat_obj > Quat_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	::hx::ObjectPtr< Quat_obj > __this = new Quat_obj();
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

::hx::ObjectPtr< Quat_obj > Quat_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	Quat_obj *__this = (Quat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Quat_obj), false, "h3d.Quat"));
	*(void **)__this = Quat_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

Quat_obj::Quat_obj()
{
}

::hx::Val Quat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return ::hx::Val( dot_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return ::hx::Val( lerp_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"slerp") ) { return ::hx::Val( slerp_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length_dyn() ); }
		if (HX_FIELD_EQ(inName,"negate") ) { return ::hx::Val( negate_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toEuler") ) { return ::hx::Val( toEuler_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { return ::hx::Val( identity_dyn() ); }
		if (HX_FIELD_EQ(inName,"lengthSq") ) { return ::hx::Val( lengthSq_dyn() ); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return ::hx::Val( multiply_dyn() ); }
		if (HX_FIELD_EQ(inName,"toMatrix") ) { return ::hx::Val( toMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"conjugate") ) { return ::hx::Val( conjugate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initMoveTo") ) { return ::hx::Val( initMoveTo_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initRotation") ) { return ::hx::Val( initRotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDirection") ) { return ::hx::Val( getDirection_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initDirection") ) { return ::hx::Val( initDirection_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initRotateAxis") ) { return ::hx::Val( initRotateAxis_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initRotateMatrix") ) { return ::hx::Val( initRotateMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Quat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("w",77,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Quat_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Quat_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Quat_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Quat_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Quat_obj,w),HX_("w",77,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Quat_obj_sStaticStorageInfo = 0;
#endif

static ::String Quat_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("w",77,00,00,00),
	HX_("set",a2,9b,57,00),
	HX_("identity",3e,45,2f,b9),
	HX_("lengthSq",24,63,c3,1f),
	HX_("length",e6,94,07,9f),
	HX_("load",26,9a,b7,47),
	HX_("clone",5d,13,63,48),
	HX_("initMoveTo",1c,2e,f2,d0),
	HX_("initDirection",0f,25,40,8b),
	HX_("initRotateAxis",cc,0b,4f,9d),
	HX_("initRotateMatrix",2c,86,58,6d),
	HX_("normalize",8d,37,a1,ab),
	HX_("initRotation",6e,c4,3c,ad),
	HX_("multiply",24,e2,8c,9a),
	HX_("toEuler",ee,25,a5,41),
	HX_("lerp",77,12,b0,47),
	HX_("slerp",6a,c8,c4,7e),
	HX_("conjugate",18,36,89,42),
	HX_("negate",c2,41,19,67),
	HX_("dot",89,42,4c,00),
	HX_("getDirection",c9,fe,96,1f),
	HX_("toMatrix",1c,de,06,e3),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Quat_obj::__mClass;

void Quat_obj::__register()
{
	Quat_obj _hx_dummy;
	Quat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.Quat",4c,2e,47,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Quat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Quat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Quat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Quat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
