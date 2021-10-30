#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_col_Matrix
#include <h2d/col/Matrix.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5637121157ce5d81_28_new,"h2d.col.Matrix","new",0x720990d5,"h2d.col.Matrix.new","h2d/col/Matrix.hx",28,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_38_identity,"h2d.col.Matrix","identity",0x4462bca9,"h2d.col.Matrix.identity","h2d/col/Matrix.hx",38,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_50_initTranslate,"h2d.col.Matrix","initTranslate",0x008c5ed3,"h2d.col.Matrix.initTranslate","h2d/col/Matrix.hx",50,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_63_initScale,"h2d.col.Matrix","initScale",0xd635ef8f,"h2d.col.Matrix.initScale","h2d/col/Matrix.hx",63,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_75_initRotate,"h2d.col.Matrix","initRotate",0x27f609b6,"h2d.col.Matrix.initRotate","h2d/col/Matrix.hx",75,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_93_initSkew,"h2d.col.Matrix","initSkew",0xdc3fb9a5,"h2d.col.Matrix.initSkew","h2d/col/Matrix.hx",93,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_109_invert,"h2d.col.Matrix","invert",0xa3911dc1,"h2d.col.Matrix.invert","h2d/col/Matrix.hx",109,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_116_getDeterminant,"h2d.col.Matrix","getDeterminant",0x08d30a4a,"h2d.col.Matrix.getDeterminant","h2d/col/Matrix.hx",116,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_122_inverse,"h2d.col.Matrix","inverse",0x7b68eaa5,"h2d.col.Matrix.inverse","h2d/col/Matrix.hx",122,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_139_transform,"h2d.col.Matrix","transform",0x876833a1,"h2d.col.Matrix.transform","h2d/col/Matrix.hx",139,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_145_translate,"h2d.col.Matrix","translate",0x8b54dd83,"h2d.col.Matrix.translate","h2d/col/Matrix.hx",145,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_154_translateX,"h2d.col.Matrix","translateX",0x5eecf575,"h2d.col.Matrix.translateX","h2d/col/Matrix.hx",154,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_161_translateY,"h2d.col.Matrix","translateY",0x5eecf576,"h2d.col.Matrix.translateY","h2d/col/Matrix.hx",161,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_168_prependTranslate,"h2d.col.Matrix","prependTranslate",0x012328cb,"h2d.col.Matrix.prependTranslate","h2d/col/Matrix.hx",168,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_179_prependTranslateX,"h2d.col.Matrix","prependTranslateX",0xfda0892d,"h2d.col.Matrix.prependTranslateX","h2d/col/Matrix.hx",179,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_188_prependTranslateY,"h2d.col.Matrix","prependTranslateY",0xfda0892e,"h2d.col.Matrix.prependTranslateY","h2d/col/Matrix.hx",188,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_196_multiply,"h2d.col.Matrix","multiply",0x25c0598f,"h2d.col.Matrix.multiply","h2d/col/Matrix.hx",196,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_211_getScale,"h2d.col.Matrix","getScale",0x63d9557f,"h2d.col.Matrix.getScale","h2d/col/Matrix.hx",211,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_226_scale,"h2d.col.Matrix","scale",0x13cd563f,"h2d.col.Matrix.scale","h2d/col/Matrix.hx",226,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_238_scaleX,"h2d.col.Matrix","scaleX",0x3fde2139,"h2d.col.Matrix.scaleX","h2d/col/Matrix.hx",238,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_247_scaleY,"h2d.col.Matrix","scaleY",0x3fde213a,"h2d.col.Matrix.scaleY","h2d/col/Matrix.hx",247,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_256_rotate,"h2d.col.Matrix","rotate",0xced87d06,"h2d.col.Matrix.rotate","h2d/col/Matrix.hx",256,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_264_skew,"h2d.col.Matrix","skew",0x59a7b8f5,"h2d.col.Matrix.skew","h2d/col/Matrix.hx",264,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_281_skewX,"h2d.col.Matrix","skewX",0x191a1dc3,"h2d.col.Matrix.skewX","h2d/col/Matrix.hx",281,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_293_skewY,"h2d.col.Matrix","skewY",0x191a1dc4,"h2d.col.Matrix.skewY","h2d/col/Matrix.hx",293,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_305_clone,"h2d.col.Matrix","clone",0xe3619b12,"h2d.col.Matrix.clone","h2d/col/Matrix.hx",305,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_320_getPosition,"h2d.col.Matrix","getPosition",0x16b920d4,"h2d.col.Matrix.getPosition","h2d/col/Matrix.hx",320,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_328_toString,"h2d.col.Matrix","toString",0xc3a24817,"h2d.col.Matrix.toString","h2d/col/Matrix.hx",328,0x812eeb79)
HX_LOCAL_STACK_FRAME(_hx_pos_5637121157ce5d81_15_boot,"h2d.col.Matrix","boot",0x4e6e2a1d,"h2d.col.Matrix.boot","h2d/col/Matrix.hx",15,0x812eeb79)
namespace h2d{
namespace col{

void Matrix_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_28_new)
HXDLIN(  28)		this->a = ( (Float)(1) );
HXDLIN(  28)		this->b = ( (Float)(0) );
HXDLIN(  28)		this->c = ( (Float)(0) );
HXDLIN(  28)		this->d = ( (Float)(1) );
HXDLIN(  28)		this->x = ( (Float)(0) );
HXDLIN(  28)		this->y = ( (Float)(0) );
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f149ec7;
}

void Matrix_obj::identity(){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_38_identity)
HXLINE(  39)		this->a = ( (Float)(1) );
HXDLIN(  39)		this->b = ( (Float)(0) );
HXDLIN(  39)		this->c = ( (Float)(0) );
HXDLIN(  39)		this->d = ( (Float)(1) );
HXLINE(  40)		this->x = ( (Float)(0) );
HXDLIN(  40)		this->y = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

void Matrix_obj::initTranslate(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_50_initTranslate)
HXLINE(  51)		this->a = ( (Float)(1) );
HXDLIN(  51)		this->b = ( (Float)(0) );
HXDLIN(  51)		this->c = ( (Float)(0) );
HXDLIN(  51)		this->d = ( (Float)(1) );
HXLINE(  52)		this->x = x;
HXLINE(  53)		this->y = y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,initTranslate,(void))

void Matrix_obj::initScale(Float sx,Float sy){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_63_initScale)
HXLINE(  64)		this->a = sx;
HXDLIN(  64)		this->b = ( (Float)(0) );
HXDLIN(  64)		this->c = ( (Float)(0) );
HXDLIN(  64)		this->d = sy;
HXLINE(  65)		this->x = ( (Float)(0) );
HXDLIN(  65)		this->y = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,initScale,(void))

void Matrix_obj::initRotate(Float angle){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_75_initRotate)
HXLINE(  76)		Float cos = ::Math_obj::cos(angle);
HXLINE(  77)		Float sin = ::Math_obj::sin(angle);
HXLINE(  78)		this->a = cos;
HXLINE(  79)		this->b = sin;
HXLINE(  80)		this->c = -(sin);
HXLINE(  81)		this->d = cos;
HXLINE(  82)		this->x = ( (Float)(0) );
HXLINE(  83)		this->y = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,initRotate,(void))

void Matrix_obj::initSkew(Float sx,Float sy){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_93_initSkew)
HXLINE(  94)		Float tanX = ::Math_obj::tan(sx);
HXLINE(  95)		Float tanY = ::Math_obj::tan(sy);
HXLINE(  96)		this->a = ( (Float)(1) );
HXLINE(  97)		this->b = tanY;
HXLINE(  98)		this->c = tanX;
HXLINE(  99)		this->d = ( (Float)(1) );
HXLINE( 100)		this->x = ( (Float)(0) );
HXLINE( 101)		this->y = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,initSkew,(void))

void Matrix_obj::invert(){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_109_invert)
HXDLIN( 109)		this->inverse(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,(void))

Float Matrix_obj::getDeterminant(){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_116_getDeterminant)
HXDLIN( 116)		return ((this->a * this->d) - (this->b * this->c));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,getDeterminant,return )

void Matrix_obj::inverse( ::h2d::col::Matrix m){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_122_inverse)
HXLINE( 123)		Float a = m->a;
HXDLIN( 123)		Float b = m->b;
HXLINE( 124)		Float c = m->c;
HXDLIN( 124)		Float d = m->d;
HXLINE( 125)		Float x = m->x;
HXDLIN( 125)		Float y = m->y;
HXLINE( 126)		Float invDet = (( (Float)(1) ) / ((this->a * this->d) - (this->b * this->c)));
HXLINE( 127)		this->a = (d * invDet);
HXLINE( 128)		this->b = (-(b) * invDet);
HXLINE( 129)		this->c = (-(c) * invDet);
HXLINE( 130)		this->d = (a * invDet);
HXLINE( 131)		this->x = (((-(x) * d) + (c * y)) * invDet);
HXLINE( 132)		this->y = (((x * b) - (a * y)) * invDet);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,inverse,(void))

 ::h2d::col::Point Matrix_obj::transform( ::h2d::col::Point pt){
            	HX_GC_STACKFRAME(&_hx_pos_5637121157ce5d81_139_transform)
HXDLIN( 139)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(((pt->x * this->a) + (pt->y * this->c)) + this->x),(((pt->x * this->b) + (pt->y * this->d)) + this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transform,return )

void Matrix_obj::translate(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_145_translate)
HXLINE( 146)		 ::h2d::col::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 146)		_hx_tmp->x = (_hx_tmp->x + x);
HXLINE( 147)		 ::h2d::col::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 147)		_hx_tmp1->y = (_hx_tmp1->y + y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))

void Matrix_obj::translateX(Float x){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_154_translateX)
HXDLIN( 154)		 ::h2d::col::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 154)		_hx_tmp->x = (_hx_tmp->x + x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,translateX,(void))

void Matrix_obj::translateY(Float y){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_161_translateY)
HXDLIN( 161)		 ::h2d::col::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 161)		_hx_tmp->y = (_hx_tmp->y + y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,translateY,(void))

void Matrix_obj::prependTranslate(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_168_prependTranslate)
HXLINE( 169)		 ::h2d::col::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)		_hx_tmp->x = (_hx_tmp->x + ((this->a * x) + (this->c * y)));
HXLINE( 170)		 ::h2d::col::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)		_hx_tmp1->y = (_hx_tmp1->y + ((this->b * x) + (this->d * y)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,prependTranslate,(void))

void Matrix_obj::prependTranslateX(Float x){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_179_prependTranslateX)
HXDLIN( 179)		 ::h2d::col::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 179)		_hx_tmp->x = (_hx_tmp->x + (this->a * x));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,prependTranslateX,(void))

void Matrix_obj::prependTranslateY(Float y){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_188_prependTranslateY)
HXDLIN( 188)		 ::h2d::col::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 188)		_hx_tmp->y = (_hx_tmp->y + (this->d * y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,prependTranslateY,(void))

void Matrix_obj::multiply( ::h2d::col::Matrix a, ::h2d::col::Matrix b){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_196_multiply)
HXLINE( 197)		Float aa = a->a;
HXDLIN( 197)		Float ab = a->b;
HXDLIN( 197)		Float ac = a->c;
HXDLIN( 197)		Float ad = a->d;
HXDLIN( 197)		Float ax = a->x;
HXDLIN( 197)		Float ay = a->y;
HXLINE( 198)		Float ba = b->a;
HXDLIN( 198)		Float bb = b->b;
HXDLIN( 198)		Float bc = b->c;
HXDLIN( 198)		Float bd = b->d;
HXDLIN( 198)		Float bx = b->x;
HXDLIN( 198)		Float by = b->y;
HXLINE( 199)		this->a = ((aa * ba) + (ab * bc));
HXLINE( 200)		this->b = ((aa * bb) + (ab * bd));
HXLINE( 201)		this->c = ((ac * ba) + (ad * bc));
HXLINE( 202)		this->d = ((ac * bb) + (ad * bd));
HXLINE( 203)		this->x = (((ax * ba) + (ay * bc)) + bx);
HXLINE( 204)		this->y = (((ax * bb) + (ay * bd)) + by);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,multiply,(void))

 ::h2d::col::Point Matrix_obj::getScale( ::h2d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_5637121157ce5d81_211_getScale)
HXLINE( 212)		if (::hx::IsNull( p )) {
HXLINE( 213)			p =  ::h2d::col::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 214)		p->x = ::Math_obj::sqrt(((this->a * this->a) + (this->b * this->b)));
HXLINE( 215)		p->y = ::Math_obj::sqrt(((this->c * this->c) + (this->d * this->d)));
HXLINE( 216)		if ((((this->a * this->d) - (this->b * this->c)) < 0)) {
HXLINE( 217)			 ::h2d::col::Point p1 = p;
HXDLIN( 217)			p1->x = (p1->x * ( (Float)(-1) ));
HXLINE( 218)			 ::h2d::col::Point p2 = p;
HXDLIN( 218)			p2->y = (p2->y * ( (Float)(-1) ));
            		}
HXLINE( 220)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getScale,return )

void Matrix_obj::scale(Float sx,Float sy){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_226_scale)
HXLINE( 227)		 ::h2d::col::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 227)		_hx_tmp->a = (_hx_tmp->a * sx);
HXLINE( 228)		 ::h2d::col::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 228)		_hx_tmp1->c = (_hx_tmp1->c * sx);
HXLINE( 229)		 ::h2d::col::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 229)		_hx_tmp2->x = (_hx_tmp2->x * sx);
HXLINE( 230)		 ::h2d::col::Matrix _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 230)		_hx_tmp3->b = (_hx_tmp3->b * sy);
HXLINE( 231)		 ::h2d::col::Matrix _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)		_hx_tmp4->d = (_hx_tmp4->d * sy);
HXLINE( 232)		 ::h2d::col::Matrix _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 232)		_hx_tmp5->y = (_hx_tmp5->y * sy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

void Matrix_obj::scaleX(Float sx){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_238_scaleX)
HXLINE( 239)		 ::h2d::col::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)		_hx_tmp->a = (_hx_tmp->a * sx);
HXLINE( 240)		 ::h2d::col::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)		_hx_tmp1->c = (_hx_tmp1->c * sx);
HXLINE( 241)		 ::h2d::col::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 241)		_hx_tmp2->x = (_hx_tmp2->x * sx);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,scaleX,(void))

void Matrix_obj::scaleY(Float sy){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_247_scaleY)
HXLINE( 248)		 ::h2d::col::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 248)		_hx_tmp->b = (_hx_tmp->b * sy);
HXLINE( 249)		 ::h2d::col::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 249)		_hx_tmp1->d = (_hx_tmp1->d * sy);
HXLINE( 250)		 ::h2d::col::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 250)		_hx_tmp2->y = (_hx_tmp2->y * sy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,scaleY,(void))

void Matrix_obj::rotate(Float angle){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_256_rotate)
HXLINE( 257)		{
HXLINE( 257)			 ::h2d::col::Matrix _this = ::h2d::col::Matrix_obj::tmp;
HXDLIN( 257)			Float cos = ::Math_obj::cos(angle);
HXDLIN( 257)			Float sin = ::Math_obj::sin(angle);
HXDLIN( 257)			_this->a = cos;
HXDLIN( 257)			_this->b = sin;
HXDLIN( 257)			_this->c = -(sin);
HXDLIN( 257)			_this->d = cos;
HXDLIN( 257)			_this->x = ( (Float)(0) );
HXDLIN( 257)			_this->y = ( (Float)(0) );
            		}
HXLINE( 258)		this->multiply(::hx::ObjectPtr<OBJ_>(this),::h2d::col::Matrix_obj::tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

void Matrix_obj::skew(Float sx,Float sy){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_264_skew)
HXLINE( 265)		Float aa = this->a;
HXDLIN( 265)		Float ab = this->b;
HXDLIN( 265)		Float ac = this->c;
HXDLIN( 265)		Float ad = this->d;
HXDLIN( 265)		Float ax = this->x;
HXDLIN( 265)		Float ay = this->y;
HXLINE( 268)		Float bb = ::Math_obj::tan(sy);
HXLINE( 269)		Float bc = ::Math_obj::tan(sx);
HXLINE( 270)		this->a = (aa + (ab * bc));
HXLINE( 271)		this->b = ((aa * bb) + ab);
HXLINE( 272)		this->c = (ac + (ad * bc));
HXLINE( 273)		this->d = ((ac * bb) + ad);
HXLINE( 274)		this->x = (ax + (ay * bc));
HXLINE( 275)		this->y = ((ax * bb) + ay);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,skew,(void))

void Matrix_obj::skewX(Float sx){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_281_skewX)
HXLINE( 284)		Float bc = ::Math_obj::tan(sx);
HXLINE( 285)		this->a = (this->a + (this->b * bc));
HXLINE( 286)		this->c = (this->c + (this->d * bc));
HXLINE( 287)		this->x = (this->x + (this->y * bc));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,skewX,(void))

void Matrix_obj::skewY(Float sy){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_293_skewY)
HXLINE( 296)		Float bb = ::Math_obj::tan(sy);
HXLINE( 297)		this->b = ((this->a * bb) + this->b);
HXLINE( 298)		this->d = ((this->c * bb) + this->d);
HXLINE( 299)		this->y = ((this->x * bb) + this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,skewY,(void))

 ::h2d::col::Matrix Matrix_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_5637121157ce5d81_305_clone)
HXLINE( 306)		 ::h2d::col::Matrix m =  ::h2d::col::Matrix_obj::__alloc( HX_CTX );
HXLINE( 307)		m->a = this->a;
HXLINE( 308)		m->b = this->b;
HXLINE( 309)		m->c = this->c;
HXLINE( 310)		m->d = this->d;
HXLINE( 311)		m->x = this->x;
HXLINE( 312)		m->y = this->y;
HXLINE( 313)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

 ::h2d::col::Point Matrix_obj::getPosition( ::h2d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_5637121157ce5d81_320_getPosition)
HXLINE( 321)		if (::hx::IsNull( p )) {
HXLINE( 321)			p =  ::h2d::col::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 322)		{
HXLINE( 322)			p->x = this->x;
HXDLIN( 322)			p->y = this->y;
            		}
HXLINE( 323)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getPosition,return )

::String Matrix_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5637121157ce5d81_328_toString)
HXDLIN( 328)		::String _hx_tmp = (((HX_("MAT=[\n",4c,02,3b,6e) + HX_("  [ ",65,6b,3f,15)) + ::hxd::Math_obj::fmt(this->a)) + HX_(", ",74,26,00,00));
HXDLIN( 328)		::String _hx_tmp1 = (((_hx_tmp + ::hxd::Math_obj::fmt(this->b)) + HX_(" ]\n",2d,99,18,00)) + HX_("  [ ",65,6b,3f,15));
HXDLIN( 328)		::String _hx_tmp2 = ((_hx_tmp1 + ::hxd::Math_obj::fmt(this->c)) + HX_(", ",74,26,00,00));
HXDLIN( 328)		::String _hx_tmp3 = (((_hx_tmp2 + ::hxd::Math_obj::fmt(this->d)) + HX_(" ]\n",2d,99,18,00)) + HX_("  [ ",65,6b,3f,15));
HXDLIN( 328)		::String _hx_tmp4 = ((_hx_tmp3 + ::hxd::Math_obj::fmt(this->x)) + HX_(", ",74,26,00,00));
HXDLIN( 328)		return (((_hx_tmp4 + ::hxd::Math_obj::fmt(this->y)) + HX_(" ]\n",2d,99,18,00)) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

 ::h2d::col::Matrix Matrix_obj::tmp;


::hx::ObjectPtr< Matrix_obj > Matrix_obj::__new() {
	::hx::ObjectPtr< Matrix_obj > __this = new Matrix_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Matrix_obj > Matrix_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Matrix_obj *__this = (Matrix_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Matrix_obj), false, "h2d.col.Matrix"));
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
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"c") ) { return ::hx::Val( c ); }
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"skew") ) { return ::hx::Val( skew_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"skewX") ) { return ::hx::Val( skewX_dyn() ); }
		if (HX_FIELD_EQ(inName,"skewY") ) { return ::hx::Val( skewY_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return ::hx::Val( invert_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return ::hx::Val( scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return ::hx::Val( scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { return ::hx::Val( inverse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { return ::hx::Val( identity_dyn() ); }
		if (HX_FIELD_EQ(inName,"initSkew") ) { return ::hx::Val( initSkew_dyn() ); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return ::hx::Val( multiply_dyn() ); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return ::hx::Val( getScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initScale") ) { return ::hx::Val( initScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"translate") ) { return ::hx::Val( translate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initRotate") ) { return ::hx::Val( initRotate_dyn() ); }
		if (HX_FIELD_EQ(inName,"translateX") ) { return ::hx::Val( translateX_dyn() ); }
		if (HX_FIELD_EQ(inName,"translateY") ) { return ::hx::Val( translateY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initTranslate") ) { return ::hx::Val( initTranslate_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDeterminant") ) { return ::hx::Val( getDeterminant_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"prependTranslate") ) { return ::hx::Val( prependTranslate_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prependTranslateX") ) { return ::hx::Val( prependTranslateX_dyn() ); }
		if (HX_FIELD_EQ(inName,"prependTranslateY") ) { return ::hx::Val( prependTranslateY_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { outValue = ( tmp ); return true; }
	}
	return false;
}

::hx::Val Matrix_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { tmp=ioValue.Cast<  ::h2d::col::Matrix >(); return true; }
	}
	return false;
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("c",63,00,00,00));
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Matrix_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_("c",63,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Matrix_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::h2d::col::Matrix */ ,(void *) &Matrix_obj::tmp,HX_("tmp",d7,64,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Matrix_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("c",63,00,00,00),
	HX_("d",64,00,00,00),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("identity",3e,45,2f,b9),
	HX_("initTranslate",1e,9a,7f,c4),
	HX_("initScale",5a,e9,60,94),
	HX_("initRotate",8b,a1,65,cf),
	HX_("initSkew",3a,42,0c,51),
	HX_("invert",16,e7,d8,9f),
	HX_("getDeterminant",9f,b0,b3,b9),
	HX_("inverse",b0,4b,f1,3d),
	HX_("transform",6c,2d,93,45),
	HX_("translate",4e,d7,7f,49),
	HX_("translateX",4a,8d,5c,06),
	HX_("translateY",4b,8d,5c,06),
	HX_("prependTranslate",60,ce,39,28),
	HX_("prependTranslateX",f8,c5,5a,0a),
	HX_("prependTranslateY",f9,c5,5a,0a),
	HX_("multiply",24,e2,8c,9a),
	HX_("getScale",14,de,a5,d8),
	HX_("scale",8a,ce,ce,78),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("rotate",5b,46,20,cb),
	HX_("skew",0a,13,55,4c),
	HX_("skewX",0e,96,1b,7e),
	HX_("skewY",0f,96,1b,7e),
	HX_("clone",5d,13,63,48),
	HX_("getPosition",5f,63,ee,f0),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void Matrix_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::tmp,"tmp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::tmp,"tmp");
};

#endif

::hx::Class Matrix_obj::__mClass;

static ::String Matrix_obj_sStaticFields[] = {
	HX_("tmp",d7,64,58,00),
	::String(null())
};

void Matrix_obj::__register()
{
	Matrix_obj _hx_dummy;
	Matrix_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col.Matrix",63,82,b9,ea);
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
            	HX_GC_STACKFRAME(&_hx_pos_5637121157ce5d81_15_boot)
HXDLIN(  15)		tmp =  ::h2d::col::Matrix_obj::__alloc( HX_CTX );
            	}
}

} // end namespace h2d
} // end namespace col
