#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_79f48467dd63c93c_16_new,"h3d.Vector","new",0xbf066a6a,"h3d.Vector.new","h3d/Vector.hx",16,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_24_distance,"h3d.Vector","distance",0x1d2a54eb,"h3d.Vector.distance","h3d/Vector.hx",24,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_27_distanceSq,"h3d.Vector","distanceSq",0x7c19ee69,"h3d.Vector.distanceSq","h3d/Vector.hx",27,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_35_sub,"h3d.Vector","sub",0xbf0a438a,"h3d.Vector.sub","h3d/Vector.hx",35,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_39_add,"h3d.Vector","add",0xbefc8c2b,"h3d.Vector.add","h3d/Vector.hx",39,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_44_multiply,"h3d.Vector","multiply",0x4bbda3da,"h3d.Vector.multiply","h3d/Vector.hx",44,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_48_equals,"h3d.Vector","equals",0x8df8b675,"h3d.Vector.equals","h3d/Vector.hx",48,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_53_cross,"h3d.Vector","cross",0x106f100a,"h3d.Vector.cross","h3d/Vector.hx",53,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_57_dot,"h3d.Vector","dot",0xbefedc93,"h3d.Vector.dot","h3d/Vector.hx",57,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_61_lengthSq,"h3d.Vector","lengthSq",0xd0f424da,"h3d.Vector.lengthSq","h3d/Vector.hx",61,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_65_length,"h3d.Vector","length",0x6d0d5d1c,"h3d.Vector.length","h3d/Vector.hx",65,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_68_normalize,"h3d.Vector","normalize",0x0519f517,"h3d.Vector.normalize","h3d/Vector.hx",68,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_76_normalized,"h3d.Vector","normalized",0x719c7f6d,"h3d.Vector.normalized","h3d/Vector.hx",76,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_82_set,"h3d.Vector","set",0xbf0a35ac,"h3d.Vector.set","h3d/Vector.hx",82,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_89_load,"h3d.Vector","load",0x654bc8dc,"h3d.Vector.load","h3d/Vector.hx",89,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_96_scale,"h3d.Vector","scale",0x3ce37f14,"h3d.Vector.scale","h3d/Vector.hx",96,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_102_lerp,"h3d.Vector","lerp",0x6544412d,"h3d.Vector.lerp","h3d/Vector.hx",102,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_109_transform,"h3d.Vector","transform",0x9f0beaf6,"h3d.Vector.transform","h3d/Vector.hx",109,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_120_transformed,"h3d.Vector","transformed",0x6a156cd5,"h3d.Vector.transformed","h3d/Vector.hx",120,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_128_transform3x4,"h3d.Vector","transform3x4",0x6883ee79,"h3d.Vector.transform3x4","h3d/Vector.hx",128,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_137_transformed3x4,"h3d.Vector","transformed3x4",0x4107a1fa,"h3d.Vector.transformed3x4","h3d/Vector.hx",137,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_144_transform3x3,"h3d.Vector","transform3x3",0x6883ee78,"h3d.Vector.transform3x3","h3d/Vector.hx",144,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_153_transformed3x3,"h3d.Vector","transformed3x3",0x4107a1f9,"h3d.Vector.transformed3x3","h3d/Vector.hx",153,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_161_clone,"h3d.Vector","clone",0x0c77c3e7,"h3d.Vector.clone","h3d/Vector.hx",161,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_165_toPoint,"h3d.Vector","toPoint",0x0a1d67df,"h3d.Vector.toPoint","h3d/Vector.hx",165,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_169_toString,"h3d.Vector","toString",0xe99f9262,"h3d.Vector.toString","h3d/Vector.hx",169,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_174_reflect,"h3d.Vector","reflect",0x6032eb47,"h3d.Vector.reflect","h3d/Vector.hx",174,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_180_dot4,"h3d.Vector","dot4",0x60022441,"h3d.Vector.dot4","h3d/Vector.hx",180,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_183_project,"h3d.Vector","project",0x6cf479e3,"h3d.Vector.project","h3d/Vector.hx",183,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_201_get_r,"h3d.Vector","get_r",0x557555d3,"h3d.Vector.get_r","h3d/Vector.hx",201,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_202_get_g,"h3d.Vector","get_g",0x557555c8,"h3d.Vector.get_g","h3d/Vector.hx",202,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_203_get_b,"h3d.Vector","get_b",0x557555c3,"h3d.Vector.get_b","h3d/Vector.hx",203,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_204_get_a,"h3d.Vector","get_a",0x557555c2,"h3d.Vector.get_a","h3d/Vector.hx",204,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_205_set_r,"h3d.Vector","set_r",0x3e444bdf,"h3d.Vector.set_r","h3d/Vector.hx",205,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_206_set_g,"h3d.Vector","set_g",0x3e444bd4,"h3d.Vector.set_g","h3d/Vector.hx",206,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_207_set_b,"h3d.Vector","set_b",0x3e444bcf,"h3d.Vector.set_b","h3d/Vector.hx",207,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_208_set_a,"h3d.Vector","set_a",0x3e444bce,"h3d.Vector.set_a","h3d/Vector.hx",208,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_210_setColor,"h3d.Vector","setColor",0x09c19c17,"h3d.Vector.setColor","h3d/Vector.hx",210,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_217_makeColor,"h3d.Vector","makeColor",0x776da61f,"h3d.Vector.makeColor","h3d/Vector.hx",217,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_254_toColor,"h3d.Vector","toColor",0x8dea24f2,"h3d.Vector.toColor","h3d/Vector.hx",254,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_257_toColorHSL,"h3d.Vector","toColorHSL",0xec30e92f,"h3d.Vector.toColorHSL","h3d/Vector.hx",257,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_296_scale3,"h3d.Vector","scale3",0x0a2bb29f,"h3d.Vector.scale3","h3d/Vector.hx",296,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_300_dot3,"h3d.Vector","dot3",0x60022440,"h3d.Vector.dot3","h3d/Vector.hx",300,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_304_normalizeFast,"h3d.Vector","normalizeFast",0x9e7ebb53,"h3d.Vector.normalizeFast","h3d/Vector.hx",304,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_279_fromColor,"h3d.Vector","fromColor",0x585e1923,"h3d.Vector.fromColor","h3d/Vector.hx",279,0x2d0ec825)
HX_LOCAL_STACK_FRAME(_hx_pos_79f48467dd63c93c_284_fromArray,"h3d.Vector","fromArray",0x33911559,"h3d.Vector.fromArray","h3d/Vector.hx",284,0x2d0ec825)
namespace h3d{

void Vector_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            		Float w = __o_w.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_16_new)
HXLINE(  17)		this->x = x;
HXLINE(  18)		this->y = y;
HXLINE(  19)		this->z = z;
HXLINE(  20)		this->w = w;
            	}

Dynamic Vector_obj::__CreateEmpty() { return new Vector_obj; }

void *Vector_obj::_hx_vtable = 0;

Dynamic Vector_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Vector_obj > _hx_result = new Vector_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Vector_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x071fc754;
}

Float Vector_obj::distance( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_24_distance)
HXDLIN(  24)		Float dx = (v->x - this->x);
HXDLIN(  24)		Float dy = (v->y - this->y);
HXDLIN(  24)		Float dz = (v->z - this->z);
HXDLIN(  24)		return ::Math_obj::sqrt((((dx * dx) + (dy * dy)) + (dz * dz)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,distance,return )

Float Vector_obj::distanceSq( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_27_distanceSq)
HXLINE(  28)		Float dx = (v->x - this->x);
HXLINE(  29)		Float dy = (v->y - this->y);
HXLINE(  30)		Float dz = (v->z - this->z);
HXLINE(  31)		return (((dx * dx) + (dy * dy)) + (dz * dz));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,distanceSq,return )

 ::h3d::Vector Vector_obj::sub( ::h3d::Vector v){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_35_sub)
HXDLIN(  35)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(this->x - v->x),(this->y - v->y),(this->z - v->z),(this->w - v->w));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,sub,return )

 ::h3d::Vector Vector_obj::add( ::h3d::Vector v){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_39_add)
HXDLIN(  39)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(this->x + v->x),(this->y + v->y),(this->z + v->z),(this->w + v->w));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,add,return )

 ::h3d::Vector Vector_obj::multiply(Float v){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_44_multiply)
HXDLIN(  44)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(this->x * v),(this->y * v),(this->z * v),this->w);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,multiply,return )

bool Vector_obj::equals( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_48_equals)
HXDLIN(  48)		bool _hx_tmp;
HXDLIN(  48)		bool _hx_tmp1;
HXDLIN(  48)		if ((this->x == v->x)) {
HXDLIN(  48)			_hx_tmp1 = (this->y == v->y);
            		}
            		else {
HXDLIN(  48)			_hx_tmp1 = false;
            		}
HXDLIN(  48)		if (_hx_tmp1) {
HXDLIN(  48)			_hx_tmp = (this->z == v->z);
            		}
            		else {
HXDLIN(  48)			_hx_tmp = false;
            		}
HXDLIN(  48)		if (_hx_tmp) {
HXDLIN(  48)			return (this->w == v->w);
            		}
            		else {
HXDLIN(  48)			return false;
            		}
HXDLIN(  48)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,equals,return )

 ::h3d::Vector Vector_obj::cross( ::h3d::Vector v){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_53_cross)
HXDLIN(  53)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,((this->y * v->z) - (this->z * v->y)),((this->z * v->x) - (this->x * v->z)),((this->x * v->y) - (this->y * v->x)),1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,cross,return )

Float Vector_obj::dot( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_57_dot)
HXDLIN(  57)		return (((this->x * v->x) + (this->y * v->y)) + (this->z * v->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,dot,return )

Float Vector_obj::lengthSq(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_61_lengthSq)
HXDLIN(  61)		return (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,lengthSq,return )

Float Vector_obj::length(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_65_length)
HXDLIN(  65)		return ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,length,return )

void Vector_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_68_normalize)
HXLINE(  69)		Float k = (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
HXLINE(  70)		if ((k < ((Float)1e-10))) {
HXLINE(  70)			k = ( (Float)(0) );
            		}
            		else {
HXLINE(  70)			k = (((Float)1.) / ::Math_obj::sqrt(k));
            		}
HXLINE(  71)		 ::h3d::Vector _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  71)		_hx_tmp->x = (_hx_tmp->x * k);
HXLINE(  72)		 ::h3d::Vector _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)		_hx_tmp1->y = (_hx_tmp1->y * k);
HXLINE(  73)		 ::h3d::Vector _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  73)		_hx_tmp2->z = (_hx_tmp2->z * k);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,normalize,(void))

 ::h3d::Vector Vector_obj::normalized(){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_76_normalized)
HXLINE(  77)		Float k = (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
HXLINE(  78)		if ((k < ((Float)1e-10))) {
HXLINE(  78)			k = ( (Float)(0) );
            		}
            		else {
HXLINE(  78)			k = (((Float)1.) / ::Math_obj::sqrt(k));
            		}
HXLINE(  79)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(this->x * k),(this->y * k),(this->z * k),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,normalized,return )

void Vector_obj::set(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            		Float w = __o_w.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_82_set)
HXLINE(  83)		this->x = x;
HXLINE(  84)		this->y = y;
HXLINE(  85)		this->z = z;
HXLINE(  86)		this->w = w;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Vector_obj,set,(void))

void Vector_obj::load( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_89_load)
HXLINE(  90)		this->x = v->x;
HXLINE(  91)		this->y = v->y;
HXLINE(  92)		this->z = v->z;
HXLINE(  93)		this->w = v->w;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,load,(void))

void Vector_obj::scale(Float f){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_96_scale)
HXLINE(  97)		 ::h3d::Vector _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  97)		_hx_tmp->x = (_hx_tmp->x * f);
HXLINE(  98)		 ::h3d::Vector _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  98)		_hx_tmp1->y = (_hx_tmp1->y * f);
HXLINE(  99)		 ::h3d::Vector _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  99)		_hx_tmp2->z = (_hx_tmp2->z * f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,scale,(void))

void Vector_obj::lerp( ::h3d::Vector v1, ::h3d::Vector v2,Float k){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_102_lerp)
HXLINE( 103)		Float a = v1->x;
HXDLIN( 103)		this->x = (a + (k * (v2->x - a)));
HXLINE( 104)		Float a1 = v1->y;
HXDLIN( 104)		this->y = (a1 + (k * (v2->y - a1)));
HXLINE( 105)		Float a2 = v1->z;
HXDLIN( 105)		this->z = (a2 + (k * (v2->z - a2)));
HXLINE( 106)		Float a3 = v1->w;
HXDLIN( 106)		this->w = (a3 + (k * (v2->w - a3)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,lerp,(void))

void Vector_obj::transform( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_109_transform)
HXLINE( 110)		Float px = ((((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31)) + (this->w * m->_41));
HXLINE( 111)		Float py = ((((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32)) + (this->w * m->_42));
HXLINE( 112)		Float pz = ((((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33)) + (this->w * m->_43));
HXLINE( 113)		Float pw = ((((this->x * m->_14) + (this->y * m->_24)) + (this->z * m->_34)) + (this->w * m->_44));
HXLINE( 114)		this->x = px;
HXLINE( 115)		this->y = py;
HXLINE( 116)		this->z = pz;
HXLINE( 117)		this->w = pw;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transform,(void))

 ::h3d::Vector Vector_obj::transformed( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_120_transformed)
HXLINE( 121)		Float px = ((((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31)) + (this->w * m->_41));
HXLINE( 122)		Float py = ((((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32)) + (this->w * m->_42));
HXLINE( 123)		Float pz = ((((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33)) + (this->w * m->_43));
HXLINE( 124)		Float pw = ((((this->x * m->_14) + (this->y * m->_24)) + (this->z * m->_34)) + (this->w * m->_44));
HXLINE( 125)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,px,py,pz,pw);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transformed,return )

void Vector_obj::transform3x4( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_128_transform3x4)
HXLINE( 129)		Float px = ((((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31)) + (this->w * m->_41));
HXLINE( 130)		Float py = ((((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32)) + (this->w * m->_42));
HXLINE( 131)		Float pz = ((((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33)) + (this->w * m->_43));
HXLINE( 132)		this->x = px;
HXLINE( 133)		this->y = py;
HXLINE( 134)		this->z = pz;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transform3x4,(void))

 ::h3d::Vector Vector_obj::transformed3x4( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_137_transformed3x4)
HXLINE( 138)		Float px = ((((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31)) + (this->w * m->_41));
HXLINE( 139)		Float py = ((((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32)) + (this->w * m->_42));
HXLINE( 140)		Float pz = ((((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33)) + (this->w * m->_43));
HXLINE( 141)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,px,py,pz,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transformed3x4,return )

void Vector_obj::transform3x3( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_144_transform3x3)
HXLINE( 145)		Float px = (((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31));
HXLINE( 146)		Float py = (((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32));
HXLINE( 147)		Float pz = (((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33));
HXLINE( 148)		this->x = px;
HXLINE( 149)		this->y = py;
HXLINE( 150)		this->z = pz;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transform3x3,(void))

 ::h3d::Vector Vector_obj::transformed3x3( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_153_transformed3x3)
HXLINE( 154)		Float px = (((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31));
HXLINE( 155)		Float py = (((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32));
HXLINE( 156)		Float pz = (((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33));
HXLINE( 157)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,px,py,pz,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transformed3x3,return )

 ::h3d::Vector Vector_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_161_clone)
HXDLIN( 161)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,this->x,this->y,this->z,this->w);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,clone,return )

 ::h3d::col::Point Vector_obj::toPoint(){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_165_toPoint)
HXDLIN( 165)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->x,this->y,this->z);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,toPoint,return )

::String Vector_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_169_toString)
HXDLIN( 169)		::String _hx_tmp = ((HX_("{",7b,00,00,00) + ::hxd::Math_obj::fmt(this->x)) + HX_(",",2c,00,00,00));
HXDLIN( 169)		::String _hx_tmp1 = ((_hx_tmp + ::hxd::Math_obj::fmt(this->y)) + HX_(",",2c,00,00,00));
HXDLIN( 169)		::String _hx_tmp2 = ((_hx_tmp1 + ::hxd::Math_obj::fmt(this->z)) + HX_(",",2c,00,00,00));
HXDLIN( 169)		return ((_hx_tmp2 + ::hxd::Math_obj::fmt(this->w)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,toString,return )

 ::h3d::Vector Vector_obj::reflect( ::h3d::Vector n){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_174_reflect)
HXLINE( 175)		Float k = (( (Float)(2) ) * (((this->x * n->x) + (this->y * n->y)) + (this->z * n->z)));
HXLINE( 176)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(this->x - (k * n->x)),(this->y - (k * n->y)),(this->z - (k * n->z)),1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,reflect,return )

Float Vector_obj::dot4( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_180_dot4)
HXDLIN( 180)		return ((((this->x * v->x) + (this->y * v->y)) + (this->z * v->z)) + (this->w * v->w));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,dot4,return )

void Vector_obj::project( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_183_project)
HXLINE( 184)		Float px = ((((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31)) + (this->w * m->_41));
HXLINE( 185)		Float py = ((((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32)) + (this->w * m->_42));
HXLINE( 186)		Float pz = ((((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33)) + (this->w * m->_43));
HXLINE( 187)		Float iw = (( (Float)(1) ) / ((((this->x * m->_14) + (this->y * m->_24)) + (this->z * m->_34)) + (this->w * m->_44)));
HXLINE( 188)		this->x = (px * iw);
HXLINE( 189)		this->y = (py * iw);
HXLINE( 190)		this->z = (pz * iw);
HXLINE( 191)		this->w = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,project,(void))

Float Vector_obj::get_r(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_201_get_r)
HXDLIN( 201)		return this->x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_r,return )

Float Vector_obj::get_g(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_202_get_g)
HXDLIN( 202)		return this->y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_g,return )

Float Vector_obj::get_b(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_203_get_b)
HXDLIN( 203)		return this->z;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_b,return )

Float Vector_obj::get_a(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_204_get_a)
HXDLIN( 204)		return this->w;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_a,return )

Float Vector_obj::set_r(Float v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_205_set_r)
HXDLIN( 205)		return (this->x = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_r,return )

Float Vector_obj::set_g(Float v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_206_set_g)
HXDLIN( 206)		return (this->y = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_g,return )

Float Vector_obj::set_b(Float v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_207_set_b)
HXDLIN( 207)		return (this->z = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_b,return )

Float Vector_obj::set_a(Float v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_208_set_a)
HXDLIN( 208)		return (this->w = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_a,return )

void Vector_obj::setColor(int c){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_210_setColor)
HXLINE( 211)		this->x = (( (Float)(((c >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 212)		this->y = (( (Float)(((c >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 213)		this->z = (( (Float)((c & 255)) ) / ( (Float)(255) ));
HXLINE( 214)		this->w = (( (Float)(::hx::UShr(c,24)) ) / ( (Float)(255) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,setColor,(void))

void Vector_obj::makeColor(Float hue,::hx::Null< Float >  __o_saturation,::hx::Null< Float >  __o_brightness){
            		Float saturation = __o_saturation.Default(((Float)1.));
            		Float brightness = __o_brightness.Default(((Float)0.5));
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_217_makeColor)
HXLINE( 218)		Float r = ::hx::Mod(hue,((Float)6.28318530717958623));
HXDLIN( 218)		if ((r >= 0)) {
HXLINE( 218)			hue = r;
            		}
            		else {
HXLINE( 218)			hue = (r + ((Float)6.28318530717958623));
            		}
HXLINE( 219)		Float f = ((( (Float)(2) ) * brightness) - ( (Float)(1) ));
HXDLIN( 219)		Float c;
HXDLIN( 219)		if ((f < 0)) {
HXLINE( 219)			c = -(f);
            		}
            		else {
HXLINE( 219)			c = f;
            		}
HXDLIN( 219)		Float c1 = ((( (Float)(1) ) - c) * saturation);
HXLINE( 220)		Float f1 = (::hx::Mod(((hue * ( (Float)(3) )) / ((Float)3.14159265358979323)),((Float)2.)) - ( (Float)(1) ));
HXDLIN( 220)		Float x;
HXDLIN( 220)		if ((f1 < 0)) {
HXLINE( 220)			x = -(f1);
            		}
            		else {
HXLINE( 220)			x = f1;
            		}
HXDLIN( 220)		Float x1 = (c1 * (( (Float)(1) ) - x));
HXLINE( 221)		Float m = (brightness - (c1 / ( (Float)(2) )));
HXLINE( 222)		if ((hue < ((Float)1.04719755119659763))) {
HXLINE( 223)			this->x = c1;
HXLINE( 224)			this->y = x1;
HXLINE( 225)			this->z = ( (Float)(0) );
            		}
            		else {
HXLINE( 226)			if ((hue < ((Float)2.09439510239319526))) {
HXLINE( 227)				this->x = x1;
HXLINE( 228)				this->y = c1;
HXLINE( 229)				this->z = ( (Float)(0) );
            			}
            			else {
HXLINE( 230)				if ((hue < ((Float)3.14159265358979323))) {
HXLINE( 231)					this->x = ( (Float)(0) );
HXLINE( 232)					this->y = c1;
HXLINE( 233)					this->z = x1;
            				}
            				else {
HXLINE( 234)					if ((hue < ((Float)4.18879020478639053))) {
HXLINE( 235)						this->x = ( (Float)(0) );
HXLINE( 236)						this->y = x1;
HXLINE( 237)						this->z = c1;
            					}
            					else {
HXLINE( 238)						if ((hue < ((Float)5.23598775598298882))) {
HXLINE( 239)							this->x = x1;
HXLINE( 240)							this->y = ( (Float)(0) );
HXLINE( 241)							this->z = c1;
            						}
            						else {
HXLINE( 243)							this->x = c1;
HXLINE( 244)							this->y = ( (Float)(0) );
HXLINE( 245)							this->z = x1;
            						}
            					}
            				}
            			}
            		}
HXLINE( 247)		this->x = (this->x + m);
HXLINE( 248)		this->y = (this->y + m);
HXLINE( 249)		this->z = (this->z + m);
HXLINE( 250)		this->w = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,makeColor,(void))

int Vector_obj::toColor(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_254_toColor)
HXDLIN( 254)		Float f = this->w;
HXDLIN( 254)		Float min = ((Float)0.);
HXDLIN( 254)		Float max = ((Float)1.);
HXDLIN( 254)		Float _hx_tmp;
HXDLIN( 254)		if ((f < min)) {
HXDLIN( 254)			_hx_tmp = min;
            		}
            		else {
HXDLIN( 254)			if ((f > max)) {
HXDLIN( 254)				_hx_tmp = max;
            			}
            			else {
HXDLIN( 254)				_hx_tmp = f;
            			}
            		}
HXDLIN( 254)		int _hx_tmp1 = (::Std_obj::_hx_int(((_hx_tmp * ( (Float)(255) )) + ((Float)0.499))) << 24);
HXDLIN( 254)		Float f1 = this->x;
HXDLIN( 254)		Float min1 = ((Float)0.);
HXDLIN( 254)		Float max1 = ((Float)1.);
HXDLIN( 254)		Float _hx_tmp2;
HXDLIN( 254)		if ((f1 < min1)) {
HXDLIN( 254)			_hx_tmp2 = min1;
            		}
            		else {
HXDLIN( 254)			if ((f1 > max1)) {
HXDLIN( 254)				_hx_tmp2 = max1;
            			}
            			else {
HXDLIN( 254)				_hx_tmp2 = f1;
            			}
            		}
HXDLIN( 254)		int _hx_tmp3 = (_hx_tmp1 | (::Std_obj::_hx_int(((_hx_tmp2 * ( (Float)(255) )) + ((Float)0.499))) << 16));
HXDLIN( 254)		Float f2 = this->y;
HXDLIN( 254)		Float min2 = ((Float)0.);
HXDLIN( 254)		Float max2 = ((Float)1.);
HXDLIN( 254)		Float _hx_tmp4;
HXDLIN( 254)		if ((f2 < min2)) {
HXDLIN( 254)			_hx_tmp4 = min2;
            		}
            		else {
HXDLIN( 254)			if ((f2 > max2)) {
HXDLIN( 254)				_hx_tmp4 = max2;
            			}
            			else {
HXDLIN( 254)				_hx_tmp4 = f2;
            			}
            		}
HXDLIN( 254)		int _hx_tmp5 = (_hx_tmp3 | (::Std_obj::_hx_int(((_hx_tmp4 * ( (Float)(255) )) + ((Float)0.499))) << 8));
HXDLIN( 254)		Float f3 = this->z;
HXDLIN( 254)		Float min3 = ((Float)0.);
HXDLIN( 254)		Float max3 = ((Float)1.);
HXDLIN( 254)		Float _hx_tmp6;
HXDLIN( 254)		if ((f3 < min3)) {
HXDLIN( 254)			_hx_tmp6 = min3;
            		}
            		else {
HXDLIN( 254)			if ((f3 > max3)) {
HXDLIN( 254)				_hx_tmp6 = max3;
            			}
            			else {
HXDLIN( 254)				_hx_tmp6 = f3;
            			}
            		}
HXDLIN( 254)		return (_hx_tmp5 | ::Std_obj::_hx_int(((_hx_tmp6 * ( (Float)(255) )) + ((Float)0.499))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,toColor,return )

 ::h3d::Vector Vector_obj::toColorHSL(){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_257_toColorHSL)
HXLINE( 258)		Float a = this->x;
HXDLIN( 258)		Float b = this->y;
HXDLIN( 258)		Float a1;
HXDLIN( 258)		if ((a < b)) {
HXLINE( 258)			a1 = b;
            		}
            		else {
HXLINE( 258)			a1 = a;
            		}
HXDLIN( 258)		Float b1 = this->z;
HXDLIN( 258)		Float max;
HXDLIN( 258)		if ((a1 < b1)) {
HXLINE( 258)			max = b1;
            		}
            		else {
HXLINE( 258)			max = a1;
            		}
HXLINE( 259)		Float a2 = this->x;
HXDLIN( 259)		Float b2 = this->y;
HXDLIN( 259)		Float a3;
HXDLIN( 259)		if ((a2 > b2)) {
HXLINE( 259)			a3 = b2;
            		}
            		else {
HXLINE( 259)			a3 = a2;
            		}
HXDLIN( 259)		Float b3 = this->z;
HXDLIN( 259)		Float min;
HXDLIN( 259)		if ((a3 > b3)) {
HXLINE( 259)			min = b3;
            		}
            		else {
HXLINE( 259)			min = a3;
            		}
HXLINE( 260)		Float h;
HXDLIN( 260)		Float s;
HXDLIN( 260)		Float l = ((max + min) / ((Float)2.0));
HXLINE( 262)		if ((max == min)) {
HXLINE( 263)			s = ((Float)0.0);
HXDLIN( 263)			h = s;
            		}
            		else {
HXLINE( 265)			Float d = (max - min);
HXLINE( 266)			if ((l > ((Float)0.5))) {
HXLINE( 266)				s = (d / ((( (Float)(2) ) - max) - min));
            			}
            			else {
HXLINE( 266)				s = (d / (max + min));
            			}
HXLINE( 267)			if ((max == this->x)) {
HXLINE( 268)				Float h1;
HXDLIN( 268)				if ((this->y < this->z)) {
HXLINE( 268)					h1 = ((Float)6.0);
            				}
            				else {
HXLINE( 268)					h1 = ((Float)0.0);
            				}
HXDLIN( 268)				h = (((this->y - this->z) / d) + h1);
            			}
            			else {
HXLINE( 269)				if ((max == this->y)) {
HXLINE( 270)					h = (((this->z - this->x) / d) + ((Float)2.0));
            				}
            				else {
HXLINE( 272)					h = (((this->x - this->y) / d) + ((Float)4.0));
            				}
            			}
HXLINE( 273)			h = (h * ((Float)1.04719755119659763));
            		}
HXLINE( 276)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,h,s,l,this->w);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,toColorHSL,return )

void Vector_obj::scale3(Float v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_296_scale3)
HXDLIN( 296)		 ::h3d::Vector _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)		_hx_tmp->x = (_hx_tmp->x * v);
HXDLIN( 296)		 ::h3d::Vector _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)		_hx_tmp1->y = (_hx_tmp1->y * v);
HXDLIN( 296)		 ::h3d::Vector _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)		_hx_tmp2->z = (_hx_tmp2->z * v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,scale3,(void))

Float Vector_obj::dot3( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_300_dot3)
HXDLIN( 300)		return (((this->x * v->x) + (this->y * v->y)) + (this->z * v->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,dot3,return )

void Vector_obj::normalizeFast(){
            	HX_STACKFRAME(&_hx_pos_79f48467dd63c93c_304_normalizeFast)
HXDLIN( 304)		Float k = (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
HXDLIN( 304)		if ((k < ((Float)1e-10))) {
HXDLIN( 304)			k = ( (Float)(0) );
            		}
            		else {
HXDLIN( 304)			k = (((Float)1.) / ::Math_obj::sqrt(k));
            		}
HXDLIN( 304)		 ::h3d::Vector _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 304)		_hx_tmp->x = (_hx_tmp->x * k);
HXDLIN( 304)		 ::h3d::Vector _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 304)		_hx_tmp1->y = (_hx_tmp1->y * k);
HXDLIN( 304)		 ::h3d::Vector _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 304)		_hx_tmp2->z = (_hx_tmp2->z * k);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,normalizeFast,(void))

 ::h3d::Vector Vector_obj::fromColor(int c,::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(((Float)1.0));
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_279_fromColor)
HXLINE( 280)		Float s = (scale / ( (Float)(255) ));
HXLINE( 281)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(( (Float)(((c >> 16) & 255)) ) * s),(( (Float)(((c >> 8) & 255)) ) * s),(( (Float)((c & 255)) ) * s),(( (Float)(::hx::UShr(c,24)) ) * s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,fromColor,return )

 ::h3d::Vector Vector_obj::fromArray(::Array< Float > a){
            	HX_GC_STACKFRAME(&_hx_pos_79f48467dd63c93c_284_fromArray)
HXLINE( 285)		 ::h3d::Vector r =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 286)		if ((a->length > 0)) {
HXLINE( 286)			r->x = a->__get(0);
            		}
HXLINE( 287)		if ((a->length > 1)) {
HXLINE( 287)			r->y = a->__get(1);
            		}
HXLINE( 288)		if ((a->length > 2)) {
HXLINE( 288)			r->z = a->__get(2);
            		}
HXLINE( 289)		if ((a->length > 3)) {
HXLINE( 289)			r->w = a->__get(3);
            		}
HXLINE( 290)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,fromArray,return )


::hx::ObjectPtr< Vector_obj > Vector_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	::hx::ObjectPtr< Vector_obj > __this = new Vector_obj();
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

::hx::ObjectPtr< Vector_obj > Vector_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
	Vector_obj *__this = (Vector_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Vector_obj), false, "h3d.Vector"));
	*(void **)__this = Vector_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

Vector_obj::Vector_obj()
{
}

::hx::Val Vector_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
		if (HX_FIELD_EQ(inName,"r") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_r() ); }
		if (HX_FIELD_EQ(inName,"g") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_g() ); }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_b() ); }
		if (HX_FIELD_EQ(inName,"a") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_a() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return ::hx::Val( dot_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return ::hx::Val( lerp_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot4") ) { return ::hx::Val( dot4_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot3") ) { return ::hx::Val( dot3_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cross") ) { return ::hx::Val( cross_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_r") ) { return ::hx::Val( get_r_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_g") ) { return ::hx::Val( get_g_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_b") ) { return ::hx::Val( get_b_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_a") ) { return ::hx::Val( get_a_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_r") ) { return ::hx::Val( set_r_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_g") ) { return ::hx::Val( set_g_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_b") ) { return ::hx::Val( set_b_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_a") ) { return ::hx::Val( set_a_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale3") ) { return ::hx::Val( scale3_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toPoint") ) { return ::hx::Val( toPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"reflect") ) { return ::hx::Val( reflect_dyn() ); }
		if (HX_FIELD_EQ(inName,"project") ) { return ::hx::Val( project_dyn() ); }
		if (HX_FIELD_EQ(inName,"toColor") ) { return ::hx::Val( toColor_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return ::hx::Val( multiply_dyn() ); }
		if (HX_FIELD_EQ(inName,"lengthSq") ) { return ::hx::Val( lengthSq_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeColor") ) { return ::hx::Val( makeColor_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceSq") ) { return ::hx::Val( distanceSq_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalized") ) { return ::hx::Val( normalized_dyn() ); }
		if (HX_FIELD_EQ(inName,"toColorHSL") ) { return ::hx::Val( toColorHSL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformed") ) { return ::hx::Val( transformed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transform3x4") ) { return ::hx::Val( transform3x4_dyn() ); }
		if (HX_FIELD_EQ(inName,"transform3x3") ) { return ::hx::Val( transform3x3_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalizeFast") ) { return ::hx::Val( normalizeFast_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformed3x4") ) { return ::hx::Val( transformed3x4_dyn() ); }
		if (HX_FIELD_EQ(inName,"transformed3x3") ) { return ::hx::Val( transformed3x3_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromColor") ) { outValue = fromColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true; }
	}
	return false;
}

::hx::Val Vector_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_r(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"g") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_g(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_b(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"a") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_a(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("w",77,00,00,00));
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("a",61,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Vector_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Vector_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vector_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vector_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vector_obj,w),HX_("w",77,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Vector_obj_sStaticStorageInfo = 0;
#endif

static ::String Vector_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("w",77,00,00,00),
	HX_("distance",35,93,f9,6b),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("sub",80,a9,57,00),
	HX_("add",21,f2,49,00),
	HX_("multiply",24,e2,8c,9a),
	HX_("equals",3f,ee,f2,bf),
	HX_("cross",80,5f,5a,4c),
	HX_("dot",89,42,4c,00),
	HX_("lengthSq",24,63,c3,1f),
	HX_("length",e6,94,07,9f),
	HX_("normalize",8d,37,a1,ab),
	HX_("normalized",37,64,6f,81),
	HX_("set",a2,9b,57,00),
	HX_("load",26,9a,b7,47),
	HX_("scale",8a,ce,ce,78),
	HX_("lerp",77,12,b0,47),
	HX_("transform",6c,2d,93,45),
	HX_("transformed",cb,b8,ca,32),
	HX_("transform3x4",c3,19,71,3e),
	HX_("transformed3x4",c4,b3,0d,4d),
	HX_("transform3x3",c2,19,71,3e),
	HX_("transformed3x3",c3,b3,0d,4d),
	HX_("clone",5d,13,63,48),
	HX_("toPoint",d5,00,14,93),
	HX_("toString",ac,d0,6e,38),
	HX_("reflect",3d,84,29,e9),
	HX_("dot4",8b,f5,6d,42),
	HX_("project",d9,12,eb,f5),
	HX_("get_r",49,a5,60,91),
	HX_("get_g",3e,a5,60,91),
	HX_("get_b",39,a5,60,91),
	HX_("get_a",38,a5,60,91),
	HX_("set_r",55,9b,2f,7a),
	HX_("set_g",4a,9b,2f,7a),
	HX_("set_b",45,9b,2f,7a),
	HX_("set_a",44,9b,2f,7a),
	HX_("setColor",61,da,90,58),
	HX_("makeColor",95,e8,f4,1d),
	HX_("toColor",e8,bd,e0,16),
	HX_("toColorHSL",f9,cd,03,fc),
	HX_("scale3",69,ea,25,3c),
	HX_("dot3",8a,f5,6d,42),
	HX_("normalizeFast",c9,70,17,f8),
	::String(null()) };

::hx::Class Vector_obj::__mClass;

static ::String Vector_obj_sStaticFields[] = {
	HX_("fromColor",99,5b,e5,fe),
	HX_("fromArray",cf,57,18,da),
	::String(null())
};

void Vector_obj::__register()
{
	Vector_obj _hx_dummy;
	Vector_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.Vector",78,ad,da,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Vector_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Vector_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Vector_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Vector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Vector_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
