#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h2d_col_Circle
#include <h2d/col/Circle.h>
#endif
#ifndef INCLUDED_h2d_col_Collider
#include <h2d/col/Collider.h>
#endif
#ifndef INCLUDED_h2d_col_IBounds
#include <h2d/col/IBounds.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_08f9cedc327a5c82_43_new,"h2d.col.Bounds","new",0x6a1d0b09,"h2d.col.Bounds.new","h2d/col/Bounds.hx",43,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_49_toIBounds,"h2d.col.Bounds","toIBounds",0x8fb006ec,"h2d.col.Bounds.toIBounds","h2d/col/Bounds.hx",49,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_59_intersects,"h2d.col.Bounds","intersects",0x656b1f2b,"h2d.col.Bounds.intersects","h2d/col/Bounds.hx",59,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_66_contains,"h2d.col.Bounds","contains",0xef4fdad6,"h2d.col.Bounds.contains","h2d/col/Bounds.hx",66,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_72_distanceSq,"h2d.col.Bounds","distanceSq",0x0d6c2faa,"h2d.col.Bounds.distanceSq","h2d/col/Bounds.hx",72,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_82_distance,"h2d.col.Bounds","distance",0x2ece13ec,"h2d.col.Bounds.distance","h2d/col/Bounds.hx",82,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_88_addBounds,"h2d.col.Bounds","addBounds",0xd55ddadf,"h2d.col.Bounds.addBounds","h2d/col/Bounds.hx",88,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_98_addPoint,"h2d.col.Bounds","addPoint",0x02c15b26,"h2d.col.Bounds.addPoint","h2d/col/Bounds.hx",98,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_108_addPos,"h2d.col.Bounds","addPos",0x7ef282ea,"h2d.col.Bounds.addPos","h2d/col/Bounds.hx",108,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_122_set,"h2d.col.Bounds","set",0x6a20d64b,"h2d.col.Bounds.set","h2d/col/Bounds.hx",122,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_132_setMin,"h2d.col.Bounds","setMin",0x4f56b407,"h2d.col.Bounds.setMin","h2d/col/Bounds.hx",132,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_140_setMax,"h2d.col.Bounds","setMax",0x4f56ad19,"h2d.col.Bounds.setMax","h2d/col/Bounds.hx",140,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_150_doIntersect,"h2d.col.Bounds","doIntersect",0x69654b7d,"h2d.col.Bounds.doIntersect","h2d/col/Bounds.hx",150,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_162_doUnion,"h2d.col.Bounds","doUnion",0xe8ba88ad,"h2d.col.Bounds.doUnion","h2d/col/Bounds.hx",162,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_172_intersection,"h2d.col.Bounds","intersection",0xedca4a80,"h2d.col.Bounds.intersection","h2d/col/Bounds.hx",172,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_186_union,"h2d.col.Bounds","union",0x01735bf8,"h2d.col.Bounds.union","h2d/col/Bounds.hx",186,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_198_load,"h2d.col.Bounds","load",0x6e01b35d,"h2d.col.Bounds.load","h2d/col/Bounds.hx",198,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_208_scalePivot,"h2d.col.Bounds","scalePivot",0x6555544f,"h2d.col.Bounds.scalePivot","h2d/col/Bounds.hx",208,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_218_scaleCenter,"h2d.col.Bounds","scaleCenter",0xbfd077a8,"h2d.col.Bounds.scaleCenter","h2d/col/Bounds.hx",218,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_232_rotate,"h2d.col.Bounds","rotate",0xab0c5b52,"h2d.col.Bounds.rotate","h2d/col/Bounds.hx",232,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_246_offset,"h2d.col.Bounds","offset",0x402bac8a,"h2d.col.Bounds.offset","h2d/col/Bounds.hx",246,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_257_getMin,"h2d.col.Bounds","getMin",0x830e5f93,"h2d.col.Bounds.getMin","h2d/col/Bounds.hx",257,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_264_getCenter,"h2d.col.Bounds","getCenter",0x394dce74,"h2d.col.Bounds.getCenter","h2d/col/Bounds.hx",264,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_271_getSize,"h2d.col.Bounds","getSize",0x2d7c93a0,"h2d.col.Bounds.getSize","h2d/col/Bounds.hx",271,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_278_getMax,"h2d.col.Bounds","getMax",0x830e58a5,"h2d.col.Bounds.getMax","h2d/col/Bounds.hx",278,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_286_isEmpty,"h2d.col.Bounds","isEmpty",0x1b06216c,"h2d.col.Bounds.isEmpty","h2d/col/Bounds.hx",286,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_292_empty,"h2d.col.Bounds","empty",0xca663176,"h2d.col.Bounds.empty","h2d/col/Bounds.hx",292,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_302_all,"h2d.col.Bounds","all",0x6a1333ca,"h2d.col.Bounds.all","h2d/col/Bounds.hx",302,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_312_clone,"h2d.col.Bounds","clone",0xa2ef0a46,"h2d.col.Bounds.clone","h2d/col/Bounds.hx",312,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_322_get_x,"h2d.col.Bounds","get_x",0xebec9c38,"h2d.col.Bounds.get_x","h2d/col/Bounds.hx",322,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_326_get_y,"h2d.col.Bounds","get_y",0xebec9c39,"h2d.col.Bounds.get_y","h2d/col/Bounds.hx",326,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_329_set_x,"h2d.col.Bounds","set_x",0xd4bb9244,"h2d.col.Bounds.set_x","h2d/col/Bounds.hx",329,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_334_set_y,"h2d.col.Bounds","set_y",0xd4bb9245,"h2d.col.Bounds.set_y","h2d/col/Bounds.hx",334,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_340_get_width,"h2d.col.Bounds","get_width",0xc52831c6,"h2d.col.Bounds.get_width","h2d/col/Bounds.hx",340,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_344_get_height,"h2d.col.Bounds","get_height",0x7452d427,"h2d.col.Bounds.get_height","h2d/col/Bounds.hx",344,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_347_set_width,"h2d.col.Bounds","set_width",0xa8791dd2,"h2d.col.Bounds.set_width","h2d/col/Bounds.hx",347,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_352_set_height,"h2d.col.Bounds","set_height",0x77d0729b,"h2d.col.Bounds.set_height","h2d/col/Bounds.hx",352,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_359_toString,"h2d.col.Bounds","toString",0xfb435163,"h2d.col.Bounds.toString","h2d/col/Bounds.hx",359,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_365_toCircle,"h2d.col.Bounds","toCircle",0x40209aa2,"h2d.col.Bounds.toCircle","h2d/col/Bounds.hx",365,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_378_fromValues,"h2d.col.Bounds","fromValues",0x147a6563,"h2d.col.Bounds.fromValues","h2d/col/Bounds.hx",378,0x3d6ab3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_08f9cedc327a5c82_390_fromPoints,"h2d.col.Bounds","fromPoints",0xbbf173a4,"h2d.col.Bounds.fromPoints","h2d/col/Bounds.hx",390,0x3d6ab3c5)
namespace h2d{
namespace col{

void Bounds_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_43_new)
HXDLIN(  43)		this->xMin = ((Float)1e20);
HXDLIN(  43)		this->yMin = ((Float)1e20);
HXDLIN(  43)		this->xMax = ((Float)-1e20);
HXDLIN(  43)		this->yMax = ((Float)-1e20);
            	}

Dynamic Bounds_obj::__CreateEmpty() { return new Bounds_obj; }

void *Bounds_obj::_hx_vtable = 0;

Dynamic Bounds_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Bounds_obj > _hx_result = new Bounds_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Bounds_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d9cf647;
}

 ::h2d::col::IBounds Bounds_obj::toIBounds(::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(((Float)1.));
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_49_toIBounds)
HXLINE(  50)		int ix = ::Math_obj::floor((this->xMin * scale));
HXLINE(  51)		int iy = ::Math_obj::floor((this->yMin * scale));
HXLINE(  52)		int width = (::Math_obj::ceil((this->xMax * scale)) - ix);
HXDLIN(  52)		int height = (::Math_obj::ceil((this->yMax * scale)) - iy);
HXDLIN(  52)		 ::h2d::col::IBounds b =  ::h2d::col::IBounds_obj::__alloc( HX_CTX );
HXDLIN(  52)		b->xMin = ix;
HXDLIN(  52)		b->yMin = iy;
HXDLIN(  52)		b->xMax = (ix + width);
HXDLIN(  52)		b->yMax = (iy + height);
HXDLIN(  52)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,toIBounds,return )

bool Bounds_obj::intersects( ::h2d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_59_intersects)
HXDLIN(  59)		bool _hx_tmp;
HXDLIN(  59)		bool _hx_tmp1;
HXDLIN(  59)		bool _hx_tmp2;
HXDLIN(  59)		if (!((this->xMin > b->xMax))) {
HXDLIN(  59)			_hx_tmp2 = (this->yMin > b->yMax);
            		}
            		else {
HXDLIN(  59)			_hx_tmp2 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp2)) {
HXDLIN(  59)			_hx_tmp1 = (this->xMax < b->xMin);
            		}
            		else {
HXDLIN(  59)			_hx_tmp1 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp1)) {
HXDLIN(  59)			_hx_tmp = (this->yMax < b->yMin);
            		}
            		else {
HXDLIN(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		return !(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,intersects,return )

bool Bounds_obj::contains( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_66_contains)
HXDLIN(  66)		bool _hx_tmp;
HXDLIN(  66)		bool _hx_tmp1;
HXDLIN(  66)		if ((p->x >= this->xMin)) {
HXDLIN(  66)			_hx_tmp1 = (p->x < this->xMax);
            		}
            		else {
HXDLIN(  66)			_hx_tmp1 = false;
            		}
HXDLIN(  66)		if (_hx_tmp1) {
HXDLIN(  66)			_hx_tmp = (p->y >= this->yMin);
            		}
            		else {
HXDLIN(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXDLIN(  66)			return (p->y < this->yMax);
            		}
            		else {
HXDLIN(  66)			return false;
            		}
HXDLIN(  66)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,contains,return )

Float Bounds_obj::distanceSq( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_72_distanceSq)
HXLINE(  73)		Float dx;
HXDLIN(  73)		if ((p->x < this->xMin)) {
HXLINE(  73)			dx = (this->xMin - p->x);
            		}
            		else {
HXLINE(  73)			if ((p->x > this->xMax)) {
HXLINE(  73)				dx = (p->x - this->xMax);
            			}
            			else {
HXLINE(  73)				dx = ((Float)0.);
            			}
            		}
HXLINE(  74)		Float dy;
HXDLIN(  74)		if ((p->y < this->yMin)) {
HXLINE(  74)			dy = (this->yMin - p->y);
            		}
            		else {
HXLINE(  74)			if ((p->y > this->yMax)) {
HXLINE(  74)				dy = (p->y - this->yMax);
            			}
            			else {
HXLINE(  74)				dy = ((Float)0.);
            			}
            		}
HXLINE(  75)		return ((dx * dx) + (dy * dy));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,distanceSq,return )

Float Bounds_obj::distance( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_82_distance)
HXDLIN(  82)		Float dx;
HXDLIN(  82)		if ((p->x < this->xMin)) {
HXDLIN(  82)			dx = (this->xMin - p->x);
            		}
            		else {
HXDLIN(  82)			if ((p->x > this->xMax)) {
HXDLIN(  82)				dx = (p->x - this->xMax);
            			}
            			else {
HXDLIN(  82)				dx = ((Float)0.);
            			}
            		}
HXDLIN(  82)		Float dy;
HXDLIN(  82)		if ((p->y < this->yMin)) {
HXDLIN(  82)			dy = (this->yMin - p->y);
            		}
            		else {
HXDLIN(  82)			if ((p->y > this->yMax)) {
HXDLIN(  82)				dy = (p->y - this->yMax);
            			}
            			else {
HXDLIN(  82)				dy = ((Float)0.);
            			}
            		}
HXDLIN(  82)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,distance,return )

void Bounds_obj::addBounds( ::h2d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_88_addBounds)
HXLINE(  89)		if ((b->xMin < this->xMin)) {
HXLINE(  89)			this->xMin = b->xMin;
            		}
HXLINE(  90)		if ((b->xMax > this->xMax)) {
HXLINE(  90)			this->xMax = b->xMax;
            		}
HXLINE(  91)		if ((b->yMin < this->yMin)) {
HXLINE(  91)			this->yMin = b->yMin;
            		}
HXLINE(  92)		if ((b->yMax > this->yMax)) {
HXLINE(  92)			this->yMax = b->yMax;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,addBounds,(void))

void Bounds_obj::addPoint( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_98_addPoint)
HXLINE(  99)		if ((p->x < this->xMin)) {
HXLINE(  99)			this->xMin = p->x;
            		}
HXLINE( 100)		if ((p->x > this->xMax)) {
HXLINE( 100)			this->xMax = p->x;
            		}
HXLINE( 101)		if ((p->y < this->yMin)) {
HXLINE( 101)			this->yMin = p->y;
            		}
HXLINE( 102)		if ((p->y > this->yMax)) {
HXLINE( 102)			this->yMax = p->y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,addPoint,(void))

void Bounds_obj::addPos(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_108_addPos)
HXLINE( 109)		if ((x < this->xMin)) {
HXLINE( 109)			this->xMin = x;
            		}
HXLINE( 110)		if ((x > this->xMax)) {
HXLINE( 110)			this->xMax = x;
            		}
HXLINE( 111)		if ((y < this->yMin)) {
HXLINE( 111)			this->yMin = y;
            		}
HXLINE( 112)		if ((y > this->yMax)) {
HXLINE( 112)			this->yMax = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,addPos,(void))

void Bounds_obj::set(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_122_set)
HXLINE( 123)		this->xMin = x;
HXLINE( 124)		this->yMin = y;
HXLINE( 125)		this->xMax = (x + width);
HXLINE( 126)		this->yMax = (y + height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Bounds_obj,set,(void))

void Bounds_obj::setMin( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_132_setMin)
HXLINE( 133)		this->xMin = p->x;
HXLINE( 134)		this->yMin = p->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,setMin,(void))

void Bounds_obj::setMax( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_140_setMax)
HXLINE( 141)		this->xMax = p->x;
HXLINE( 142)		this->yMax = p->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,setMax,(void))

void Bounds_obj::doIntersect( ::h2d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_150_doIntersect)
HXLINE( 151)		Float a = this->xMin;
HXDLIN( 151)		Float b1 = b->xMin;
HXDLIN( 151)		Float _hx_tmp;
HXDLIN( 151)		if ((a < b1)) {
HXLINE( 151)			_hx_tmp = b1;
            		}
            		else {
HXLINE( 151)			_hx_tmp = a;
            		}
HXDLIN( 151)		this->xMin = _hx_tmp;
HXLINE( 152)		Float a1 = this->yMin;
HXDLIN( 152)		Float b2 = b->yMin;
HXDLIN( 152)		Float _hx_tmp1;
HXDLIN( 152)		if ((a1 < b2)) {
HXLINE( 152)			_hx_tmp1 = b2;
            		}
            		else {
HXLINE( 152)			_hx_tmp1 = a1;
            		}
HXDLIN( 152)		this->yMin = _hx_tmp1;
HXLINE( 153)		Float a2 = this->xMax;
HXDLIN( 153)		Float b3 = b->xMax;
HXDLIN( 153)		Float _hx_tmp2;
HXDLIN( 153)		if ((a2 > b3)) {
HXLINE( 153)			_hx_tmp2 = b3;
            		}
            		else {
HXLINE( 153)			_hx_tmp2 = a2;
            		}
HXDLIN( 153)		this->xMax = _hx_tmp2;
HXLINE( 154)		Float a3 = this->yMax;
HXDLIN( 154)		Float b4 = b->yMax;
HXDLIN( 154)		Float _hx_tmp3;
HXDLIN( 154)		if ((a3 > b4)) {
HXLINE( 154)			_hx_tmp3 = b4;
            		}
            		else {
HXLINE( 154)			_hx_tmp3 = a3;
            		}
HXDLIN( 154)		this->yMax = _hx_tmp3;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,doIntersect,(void))

void Bounds_obj::doUnion( ::h2d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_162_doUnion)
HXLINE( 163)		Float a = this->xMin;
HXDLIN( 163)		Float b1 = b->xMin;
HXDLIN( 163)		Float _hx_tmp;
HXDLIN( 163)		if ((a > b1)) {
HXLINE( 163)			_hx_tmp = b1;
            		}
            		else {
HXLINE( 163)			_hx_tmp = a;
            		}
HXDLIN( 163)		this->xMin = _hx_tmp;
HXLINE( 164)		Float a1 = this->yMin;
HXDLIN( 164)		Float b2 = b->yMin;
HXDLIN( 164)		Float _hx_tmp1;
HXDLIN( 164)		if ((a1 > b2)) {
HXLINE( 164)			_hx_tmp1 = b2;
            		}
            		else {
HXLINE( 164)			_hx_tmp1 = a1;
            		}
HXDLIN( 164)		this->yMin = _hx_tmp1;
HXLINE( 165)		Float a2 = this->xMax;
HXDLIN( 165)		Float b3 = b->xMax;
HXDLIN( 165)		Float _hx_tmp2;
HXDLIN( 165)		if ((a2 < b3)) {
HXLINE( 165)			_hx_tmp2 = b3;
            		}
            		else {
HXLINE( 165)			_hx_tmp2 = a2;
            		}
HXDLIN( 165)		this->xMax = _hx_tmp2;
HXLINE( 166)		Float a3 = this->yMax;
HXDLIN( 166)		Float b4 = b->yMax;
HXDLIN( 166)		Float _hx_tmp3;
HXDLIN( 166)		if ((a3 < b4)) {
HXLINE( 166)			_hx_tmp3 = b4;
            		}
            		else {
HXLINE( 166)			_hx_tmp3 = a3;
            		}
HXDLIN( 166)		this->yMax = _hx_tmp3;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,doUnion,(void))

 ::h2d::col::Bounds Bounds_obj::intersection( ::h2d::col::Bounds b){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_172_intersection)
HXLINE( 173)		 ::h2d::col::Bounds i =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 174)		Float a = this->xMin;
HXDLIN( 174)		Float b1 = b->xMin;
HXDLIN( 174)		Float _hx_tmp;
HXDLIN( 174)		if ((a < b1)) {
HXLINE( 174)			_hx_tmp = b1;
            		}
            		else {
HXLINE( 174)			_hx_tmp = a;
            		}
HXDLIN( 174)		i->xMin = _hx_tmp;
HXLINE( 175)		Float a1 = this->yMin;
HXDLIN( 175)		Float b2 = b->yMin;
HXDLIN( 175)		Float _hx_tmp1;
HXDLIN( 175)		if ((a1 < b2)) {
HXLINE( 175)			_hx_tmp1 = b2;
            		}
            		else {
HXLINE( 175)			_hx_tmp1 = a1;
            		}
HXDLIN( 175)		i->yMin = _hx_tmp1;
HXLINE( 176)		Float a2 = this->xMax;
HXDLIN( 176)		Float b3 = b->xMax;
HXDLIN( 176)		Float _hx_tmp2;
HXDLIN( 176)		if ((a2 > b3)) {
HXLINE( 176)			_hx_tmp2 = b3;
            		}
            		else {
HXLINE( 176)			_hx_tmp2 = a2;
            		}
HXDLIN( 176)		i->xMax = _hx_tmp2;
HXLINE( 177)		Float a3 = this->yMax;
HXDLIN( 177)		Float b4 = b->yMax;
HXDLIN( 177)		Float _hx_tmp3;
HXDLIN( 177)		if ((a3 > b4)) {
HXLINE( 177)			_hx_tmp3 = b4;
            		}
            		else {
HXLINE( 177)			_hx_tmp3 = a3;
            		}
HXDLIN( 177)		i->yMax = _hx_tmp3;
HXLINE( 178)		if ((i->xMax < i->xMin)) {
HXLINE( 178)			i->xMax = i->xMin;
            		}
HXLINE( 179)		if ((i->yMax < i->yMin)) {
HXLINE( 179)			i->yMax = i->yMin;
            		}
HXLINE( 180)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,intersection,return )

 ::h2d::col::Bounds Bounds_obj::_hx_union( ::h2d::col::Bounds b){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_186_union)
HXLINE( 187)		 ::h2d::col::Bounds i =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 188)		Float a = this->xMin;
HXDLIN( 188)		Float b1 = b->xMin;
HXDLIN( 188)		Float _hx_tmp;
HXDLIN( 188)		if ((a > b1)) {
HXLINE( 188)			_hx_tmp = b1;
            		}
            		else {
HXLINE( 188)			_hx_tmp = a;
            		}
HXDLIN( 188)		i->xMin = _hx_tmp;
HXLINE( 189)		Float a1 = this->yMin;
HXDLIN( 189)		Float b2 = b->yMin;
HXDLIN( 189)		Float _hx_tmp1;
HXDLIN( 189)		if ((a1 > b2)) {
HXLINE( 189)			_hx_tmp1 = b2;
            		}
            		else {
HXLINE( 189)			_hx_tmp1 = a1;
            		}
HXDLIN( 189)		i->yMin = _hx_tmp1;
HXLINE( 190)		Float a2 = this->xMax;
HXDLIN( 190)		Float b3 = b->xMax;
HXDLIN( 190)		Float _hx_tmp2;
HXDLIN( 190)		if ((a2 < b3)) {
HXLINE( 190)			_hx_tmp2 = b3;
            		}
            		else {
HXLINE( 190)			_hx_tmp2 = a2;
            		}
HXDLIN( 190)		i->xMax = _hx_tmp2;
HXLINE( 191)		Float a3 = this->yMax;
HXDLIN( 191)		Float b4 = b->yMax;
HXDLIN( 191)		Float _hx_tmp3;
HXDLIN( 191)		if ((a3 < b4)) {
HXLINE( 191)			_hx_tmp3 = b4;
            		}
            		else {
HXLINE( 191)			_hx_tmp3 = a3;
            		}
HXDLIN( 191)		i->yMax = _hx_tmp3;
HXLINE( 192)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,_hx_union,return )

void Bounds_obj::load( ::h2d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_198_load)
HXLINE( 199)		this->xMin = b->xMin;
HXLINE( 200)		this->yMin = b->yMin;
HXLINE( 201)		this->xMax = b->xMax;
HXLINE( 202)		this->yMax = b->yMax;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,load,(void))

void Bounds_obj::scalePivot(Float v){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_208_scalePivot)
HXLINE( 209)		 ::h2d::col::Bounds _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 209)		_hx_tmp->xMin = (_hx_tmp->xMin * v);
HXLINE( 210)		 ::h2d::col::Bounds _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)		_hx_tmp1->yMin = (_hx_tmp1->yMin * v);
HXLINE( 211)		 ::h2d::col::Bounds _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)		_hx_tmp2->xMax = (_hx_tmp2->xMax * v);
HXLINE( 212)		 ::h2d::col::Bounds _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)		_hx_tmp3->yMax = (_hx_tmp3->yMax * v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,scalePivot,(void))

void Bounds_obj::scaleCenter(Float v){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_218_scaleCenter)
HXLINE( 219)		Float dx = (((this->xMax - this->xMin) * ((Float)0.5)) * v);
HXLINE( 220)		Float dy = (((this->yMax - this->yMin) * ((Float)0.5)) * v);
HXLINE( 221)		Float mx = ((this->xMax + this->xMin) * ((Float)0.5));
HXLINE( 222)		Float my = ((this->yMax + this->yMin) * ((Float)0.5));
HXLINE( 223)		this->xMin = (mx - dx);
HXLINE( 224)		this->yMin = (my - dy);
HXLINE( 225)		this->xMax = (mx + dx);
HXLINE( 226)		this->yMax = (my + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,scaleCenter,(void))

void Bounds_obj::rotate(Float angle){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_232_rotate)
HXLINE( 233)		Float cos = ::Math_obj::cos(angle);
HXLINE( 234)		Float sin = ::Math_obj::sin(angle);
HXLINE( 235)		Float x0 = this->xMin;
HXDLIN( 235)		Float y0 = this->yMin;
HXDLIN( 235)		Float x1 = this->xMax;
HXDLIN( 235)		Float y1 = this->yMax;
HXLINE( 236)		{
HXLINE( 236)			this->xMin = ((Float)1e20);
HXDLIN( 236)			this->yMin = ((Float)1e20);
HXDLIN( 236)			this->xMax = ((Float)-1e20);
HXDLIN( 236)			this->yMax = ((Float)-1e20);
            		}
HXLINE( 237)		{
HXLINE( 237)			Float x = ((x0 * cos) - (y0 * sin));
HXDLIN( 237)			Float y = ((x0 * sin) + (y0 * cos));
HXDLIN( 237)			if ((x < this->xMin)) {
HXLINE( 237)				this->xMin = x;
            			}
HXDLIN( 237)			if ((x > this->xMax)) {
HXLINE( 237)				this->xMax = x;
            			}
HXDLIN( 237)			if ((y < this->yMin)) {
HXLINE( 237)				this->yMin = y;
            			}
HXDLIN( 237)			if ((y > this->yMax)) {
HXLINE( 237)				this->yMax = y;
            			}
            		}
HXLINE( 238)		{
HXLINE( 238)			Float x2 = ((x1 * cos) - (y0 * sin));
HXDLIN( 238)			Float y2 = ((x1 * sin) + (y0 * cos));
HXDLIN( 238)			if ((x2 < this->xMin)) {
HXLINE( 238)				this->xMin = x2;
            			}
HXDLIN( 238)			if ((x2 > this->xMax)) {
HXLINE( 238)				this->xMax = x2;
            			}
HXDLIN( 238)			if ((y2 < this->yMin)) {
HXLINE( 238)				this->yMin = y2;
            			}
HXDLIN( 238)			if ((y2 > this->yMax)) {
HXLINE( 238)				this->yMax = y2;
            			}
            		}
HXLINE( 239)		{
HXLINE( 239)			Float x3 = ((x0 * cos) - (y1 * sin));
HXDLIN( 239)			Float y3 = ((x0 * sin) + (y1 * cos));
HXDLIN( 239)			if ((x3 < this->xMin)) {
HXLINE( 239)				this->xMin = x3;
            			}
HXDLIN( 239)			if ((x3 > this->xMax)) {
HXLINE( 239)				this->xMax = x3;
            			}
HXDLIN( 239)			if ((y3 < this->yMin)) {
HXLINE( 239)				this->yMin = y3;
            			}
HXDLIN( 239)			if ((y3 > this->yMax)) {
HXLINE( 239)				this->yMax = y3;
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			Float x4 = ((x1 * cos) - (y1 * sin));
HXDLIN( 240)			Float y4 = ((x1 * sin) + (y1 * cos));
HXDLIN( 240)			if ((x4 < this->xMin)) {
HXLINE( 240)				this->xMin = x4;
            			}
HXDLIN( 240)			if ((x4 > this->xMax)) {
HXLINE( 240)				this->xMax = x4;
            			}
HXDLIN( 240)			if ((y4 < this->yMin)) {
HXLINE( 240)				this->yMin = y4;
            			}
HXDLIN( 240)			if ((y4 > this->yMax)) {
HXLINE( 240)				this->yMax = y4;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,rotate,(void))

void Bounds_obj::offset(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_246_offset)
HXLINE( 247)		 ::h2d::col::Bounds _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)		_hx_tmp->xMin = (_hx_tmp->xMin + dx);
HXLINE( 248)		 ::h2d::col::Bounds _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 248)		_hx_tmp1->xMax = (_hx_tmp1->xMax + dx);
HXLINE( 249)		 ::h2d::col::Bounds _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 249)		_hx_tmp2->yMin = (_hx_tmp2->yMin + dy);
HXLINE( 250)		 ::h2d::col::Bounds _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 250)		_hx_tmp3->yMax = (_hx_tmp3->yMax + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,offset,(void))

 ::h2d::col::Point Bounds_obj::getMin(){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_257_getMin)
HXDLIN( 257)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,this->xMin,this->yMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,getMin,return )

 ::h2d::col::Point Bounds_obj::getCenter(){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_264_getCenter)
HXDLIN( 264)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,((this->xMin + this->xMax) * ((Float)0.5)),((this->yMin + this->yMax) * ((Float)0.5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,getCenter,return )

 ::h2d::col::Point Bounds_obj::getSize(){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_271_getSize)
HXDLIN( 271)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(this->xMax - this->xMin),(this->yMax - this->yMin));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,getSize,return )

 ::h2d::col::Point Bounds_obj::getMax(){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_278_getMax)
HXDLIN( 278)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,this->xMax,this->yMax);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,getMax,return )

bool Bounds_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_286_isEmpty)
HXDLIN( 286)		if (!((this->xMax <= this->xMin))) {
HXDLIN( 286)			return (this->yMax <= this->yMin);
            		}
            		else {
HXDLIN( 286)			return true;
            		}
HXDLIN( 286)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,isEmpty,return )

void Bounds_obj::empty(){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_292_empty)
HXLINE( 293)		this->xMin = ((Float)1e20);
HXLINE( 294)		this->yMin = ((Float)1e20);
HXLINE( 295)		this->xMax = ((Float)-1e20);
HXLINE( 296)		this->yMax = ((Float)-1e20);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,empty,(void))

void Bounds_obj::all(){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_302_all)
HXLINE( 303)		this->xMin = ((Float)-1e20);
HXLINE( 304)		this->yMin = ((Float)-1e20);
HXLINE( 305)		this->xMax = ((Float)1e20);
HXLINE( 306)		this->yMax = ((Float)1e20);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,all,(void))

 ::h2d::col::Bounds Bounds_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_312_clone)
HXLINE( 313)		 ::h2d::col::Bounds b =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 314)		b->xMin = this->xMin;
HXLINE( 315)		b->yMin = this->yMin;
HXLINE( 316)		b->xMax = this->xMax;
HXLINE( 317)		b->yMax = this->yMax;
HXLINE( 318)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,clone,return )

Float Bounds_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_322_get_x)
HXDLIN( 322)		return this->xMin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,get_x,return )

Float Bounds_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_326_get_y)
HXDLIN( 326)		return this->yMin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,get_y,return )

Float Bounds_obj::set_x(Float x){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_329_set_x)
HXLINE( 330)		 ::h2d::col::Bounds _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 330)		_hx_tmp->xMax = (_hx_tmp->xMax + (x - this->xMin));
HXLINE( 331)		return (this->xMin = x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,set_x,return )

Float Bounds_obj::set_y(Float y){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_334_set_y)
HXLINE( 335)		 ::h2d::col::Bounds _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 335)		_hx_tmp->yMax = (_hx_tmp->yMax + (y - this->yMin));
HXLINE( 336)		return (this->yMin = y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,set_y,return )

Float Bounds_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_340_get_width)
HXDLIN( 340)		return (this->xMax - this->xMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,get_width,return )

Float Bounds_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_344_get_height)
HXDLIN( 344)		return (this->yMax - this->yMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,get_height,return )

Float Bounds_obj::set_width(Float w){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_347_set_width)
HXLINE( 348)		this->xMax = (this->xMin + w);
HXLINE( 349)		return w;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,set_width,return )

Float Bounds_obj::set_height(Float h){
            	HX_STACKFRAME(&_hx_pos_08f9cedc327a5c82_352_set_height)
HXLINE( 353)		this->yMax = (this->yMin + h);
HXLINE( 354)		return h;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,set_height,return )

::String Bounds_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_359_toString)
HXDLIN( 359)		::String _hx_tmp = ((HX_("{",7b,00,00,00) + ::Std_obj::string( ::h2d::col::Point_obj::__alloc( HX_CTX ,this->xMin,this->yMin))) + HX_(",",2c,00,00,00));
HXDLIN( 359)		return ((_hx_tmp + ::Std_obj::string( ::h2d::col::Point_obj::__alloc( HX_CTX ,(this->xMax - this->xMin),(this->yMax - this->yMin)))) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,toString,return )

 ::h2d::col::Circle Bounds_obj::toCircle(){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_365_toCircle)
HXLINE( 366)		Float dx = (this->xMax - this->xMin);
HXLINE( 367)		Float dy = (this->yMax - this->yMin);
HXLINE( 368)		return  ::h2d::col::Circle_obj::__alloc( HX_CTX ,((this->xMin + this->xMax) * ((Float)0.5)),((this->yMin + this->yMax) * ((Float)0.5)),(::Math_obj::sqrt(((dx * dx) + (dy * dy))) * ((Float)0.5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,toCircle,return )

 ::h2d::col::Bounds Bounds_obj::fromValues(Float x0,Float y0,Float width,Float height){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_378_fromValues)
HXLINE( 379)		 ::h2d::col::Bounds b =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 380)		b->xMin = x0;
HXLINE( 381)		b->yMin = y0;
HXLINE( 382)		b->xMax = (x0 + width);
HXLINE( 383)		b->yMax = (y0 + height);
HXLINE( 384)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Bounds_obj,fromValues,return )

 ::h2d::col::Bounds Bounds_obj::fromPoints( ::h2d::col::Point min, ::h2d::col::Point max){
            	HX_GC_STACKFRAME(&_hx_pos_08f9cedc327a5c82_390_fromPoints)
HXLINE( 391)		 ::h2d::col::Bounds b =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 392)		{
HXLINE( 392)			b->xMin = min->x;
HXDLIN( 392)			b->yMin = min->y;
            		}
HXLINE( 393)		{
HXLINE( 393)			b->xMax = max->x;
HXDLIN( 393)			b->yMax = max->y;
            		}
HXLINE( 394)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,fromPoints,return )


::hx::ObjectPtr< Bounds_obj > Bounds_obj::__new() {
	::hx::ObjectPtr< Bounds_obj > __this = new Bounds_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Bounds_obj > Bounds_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Bounds_obj *__this = (Bounds_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Bounds_obj), false, "h2d.col.Bounds"));
	*(void **)__this = Bounds_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Bounds_obj::Bounds_obj()
{
}

::hx::Val Bounds_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"all") ) { return ::hx::Val( all_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { return ::hx::Val( xMin ); }
		if (HX_FIELD_EQ(inName,"yMin") ) { return ::hx::Val( yMin ); }
		if (HX_FIELD_EQ(inName,"xMax") ) { return ::hx::Val( xMax ); }
		if (HX_FIELD_EQ(inName,"yMax") ) { return ::hx::Val( yMax ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"union") ) { return ::hx::Val( _hx_union_dyn() ); }
		if (HX_FIELD_EQ(inName,"empty") ) { return ::hx::Val( empty_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"addPos") ) { return ::hx::Val( addPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMin") ) { return ::hx::Val( setMin_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMax") ) { return ::hx::Val( setMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMin") ) { return ::hx::Val( getMin_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMax") ) { return ::hx::Val( getMax_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doUnion") ) { return ::hx::Val( doUnion_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return ::hx::Val( getSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"toCircle") ) { return ::hx::Val( toCircle_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toIBounds") ) { return ::hx::Val( toIBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"addBounds") ) { return ::hx::Val( addBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCenter") ) { return ::hx::Val( getCenter_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return ::hx::Val( intersects_dyn() ); }
		if (HX_FIELD_EQ(inName,"distanceSq") ) { return ::hx::Val( distanceSq_dyn() ); }
		if (HX_FIELD_EQ(inName,"scalePivot") ) { return ::hx::Val( scalePivot_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doIntersect") ) { return ::hx::Val( doIntersect_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleCenter") ) { return ::hx::Val( scaleCenter_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return ::hx::Val( intersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bounds_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromValues") ) { outValue = fromValues_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromPoints") ) { outValue = fromPoints_dyn(); return true; }
	}
	return false;
}

::hx::Val Bounds_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { xMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMin") ) { yMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xMax") ) { xMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMax") ) { yMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("xMin",fa,63,8c,4f));
	outFields->push(HX_("yMin",99,9a,35,50));
	outFields->push(HX_("xMax",0c,5d,8c,4f));
	outFields->push(HX_("yMax",ab,93,35,50));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Bounds_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Bounds_obj,xMin),HX_("xMin",fa,63,8c,4f)},
	{::hx::fsFloat,(int)offsetof(Bounds_obj,yMin),HX_("yMin",99,9a,35,50)},
	{::hx::fsFloat,(int)offsetof(Bounds_obj,xMax),HX_("xMax",0c,5d,8c,4f)},
	{::hx::fsFloat,(int)offsetof(Bounds_obj,yMax),HX_("yMax",ab,93,35,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Bounds_obj_sStaticStorageInfo = 0;
#endif

static ::String Bounds_obj_sMemberFields[] = {
	HX_("xMin",fa,63,8c,4f),
	HX_("yMin",99,9a,35,50),
	HX_("xMax",0c,5d,8c,4f),
	HX_("yMax",ab,93,35,50),
	HX_("toIBounds",83,e7,93,d8),
	HX_("intersects",b4,c2,eb,e3),
	HX_("contains",1f,5a,7b,2c),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("distance",35,93,f9,6b),
	HX_("addBounds",76,bb,41,1e),
	HX_("addPoint",6f,da,ec,3f),
	HX_("addPos",f3,6d,06,9f),
	HX_("set",a2,9b,57,00),
	HX_("setMin",10,9f,6a,6f),
	HX_("setMax",22,98,6a,6f),
	HX_("doIntersect",d4,bf,73,9b),
	HX_("doUnion",84,45,14,da),
	HX_("intersection",49,a2,61,88),
	HX_("union",0f,65,e7,a6),
	HX_("load",26,9a,b7,47),
	HX_("scalePivot",d8,f7,d5,e3),
	HX_("scaleCenter",ff,eb,de,f1),
	HX_("rotate",5b,46,20,cb),
	HX_("offset",93,97,3f,60),
	HX_("getMin",9c,4a,22,a3),
	HX_("getCenter",0b,af,31,82),
	HX_("getSize",77,50,d6,1e),
	HX_("getMax",ae,43,22,a3),
	HX_("isEmpty",43,de,5f,0c),
	HX_("empty",8d,3a,da,6f),
	HX_("all",21,f9,49,00),
	HX_("clone",5d,13,63,48),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("toString",ac,d0,6e,38),
	HX_("toCircle",eb,19,4c,7d),
	::String(null()) };

::hx::Class Bounds_obj::__mClass;

static ::String Bounds_obj_sStaticFields[] = {
	HX_("fromValues",ec,08,fb,92),
	HX_("fromPoints",2d,17,72,3a),
	::String(null())
};

void Bounds_obj::__register()
{
	Bounds_obj _hx_dummy;
	Bounds_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col.Bounds",97,d2,0e,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bounds_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Bounds_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Bounds_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Bounds_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bounds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bounds_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
