#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_Frustum
#include <h3d/col/Frustum.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_col_Ray
#include <h3d/col/Ray.h>
#endif
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
#endif
#ifndef INCLUDED_h3d_col_TriPlane
#include <h3d/col/TriPlane.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7858270cfb96ecc2_6_new,"h3d.col.TriPlane","new",0x7ffe9c86,"h3d.col.TriPlane.new","h3d/col/Polygon.hx",6,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_32_init,"h3d.col.TriPlane","init",0x7b83102a,"h3d.col.TriPlane.init","h3d/col/Polygon.hx",32,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_57_clone,"h3d.col.TriPlane","clone",0x2175b503,"h3d.col.TriPlane.clone","h3d/col/Polygon.hx",57,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_65_load,"h3d.col.TriPlane","load",0x7d7f6f40,"h3d.col.TriPlane.load","h3d/col/Polygon.hx",65,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_85_transform,"h3d.col.TriPlane","transform",0x278e9a12,"h3d.col.TriPlane.transform","h3d/col/Polygon.hx",85,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_96_contains,"h3d.col.TriPlane","contains",0xa3bcc439,"h3d.col.TriPlane.contains","h3d/col/Polygon.hx",96,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_100_side,"h3d.col.TriPlane","side",0x821b62b1,"h3d.col.TriPlane.side","h3d/col/Polygon.hx",100,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_104_inFrustum,"h3d.col.TriPlane","inFrustum",0x9877f6a3,"h3d.col.TriPlane.inFrustum","h3d/col/Polygon.hx",104,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_109_inSphere,"h3d.col.TriPlane","inSphere",0xbcb662ec,"h3d.col.TriPlane.inSphere","h3d/col/Polygon.hx",109,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_113_rayIntersection,"h3d.col.TriPlane","rayIntersection",0x79686879,"h3d.col.TriPlane.rayIntersection","h3d/col/Polygon.hx",113,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_129_isPointInTriangle,"h3d.col.TriPlane","isPointInTriangle",0xbfaa2619,"h3d.col.TriPlane.isPointInTriangle","h3d/col/Polygon.hx",129,0x5d386aa9)
HX_LOCAL_STACK_FRAME(_hx_pos_7858270cfb96ecc2_144_getPoints,"h3d.col.TriPlane","getPoints",0x558007ff,"h3d.col.TriPlane.getPoints","h3d/col/Polygon.hx",144,0x5d386aa9)
namespace h3d{
namespace col{

void TriPlane_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_6_new)
HXDLIN(   6)		this->next = null();
            	}

Dynamic TriPlane_obj::__CreateEmpty() { return new TriPlane_obj; }

void *TriPlane_obj::_hx_vtable = 0;

Dynamic TriPlane_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TriPlane_obj > _hx_result = new TriPlane_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TriPlane_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x632ed138;
}

static ::h3d::col::Collider_obj _hx_h3d_col_TriPlane__hx_h3d_col_Collider= {
	( Float (::hx::Object::*)( ::h3d::col::Ray,bool))&::h3d::col::TriPlane_obj::rayIntersection,
	( bool (::hx::Object::*)( ::h3d::col::Point))&::h3d::col::TriPlane_obj::contains,
	( bool (::hx::Object::*)( ::h3d::col::Frustum, ::h3d::Matrix))&::h3d::col::TriPlane_obj::inFrustum,
	( bool (::hx::Object::*)( ::h3d::col::Sphere))&::h3d::col::TriPlane_obj::inSphere,
};

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_col_TriPlane__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *TriPlane_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x12a1e47b: return &_hx_h3d_col_TriPlane__hx_h3d_col_Collider;
		case (int)0xa6f1a21a: return &_hx_h3d_col_TriPlane__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void TriPlane_obj::init( ::h3d::col::Point p0, ::h3d::col::Point p1, ::h3d::col::Point p2){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_32_init)
HXLINE(  33)		this->p0x = p0->x;
HXLINE(  34)		this->p0y = p0->y;
HXLINE(  35)		this->p0z = p0->z;
HXLINE(  36)		Float d1_x = (p1->x - p0->x);
HXDLIN(  36)		Float d1_y = (p1->y - p0->y);
HXDLIN(  36)		Float d1_z = (p1->z - p0->z);
HXLINE(  37)		Float d2_x = (p2->x - p0->x);
HXDLIN(  37)		Float d2_y = (p2->y - p0->y);
HXDLIN(  37)		Float d2_z = (p2->z - p0->z);
HXLINE(  38)		Float n_x = ((d1_y * d2_z) - (d1_z * d2_y));
HXDLIN(  38)		Float n_y = ((d1_z * d2_x) - (d1_x * d2_z));
HXDLIN(  38)		Float n_z = ((d1_x * d2_y) - (d1_y * d2_x));
HXLINE(  39)		this->d = (((n_x * p0->x) + (n_y * p0->y)) + (n_z * p0->z));
HXLINE(  40)		this->nx = n_x;
HXLINE(  41)		this->ny = n_y;
HXLINE(  42)		this->nz = n_z;
HXLINE(  44)		this->d1x = d1_x;
HXLINE(  45)		this->d1y = d1_y;
HXLINE(  46)		this->d1z = d1_z;
HXLINE(  47)		this->d2x = d2_x;
HXLINE(  48)		this->d2y = d2_y;
HXLINE(  49)		this->d2z = d2_z;
HXLINE(  51)		this->dot00 = (((d1_x * d1_x) + (d1_y * d1_y)) + (d1_z * d1_z));
HXLINE(  52)		this->dot01 = (((d1_x * d2_x) + (d1_y * d2_y)) + (d1_z * d2_z));
HXLINE(  53)		this->dot11 = (((d2_x * d2_x) + (d2_y * d2_y)) + (d2_z * d2_z));
HXLINE(  54)		this->invDenom = (( (Float)(1) ) / ((this->dot00 * this->dot11) - (this->dot01 * this->dot01)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(TriPlane_obj,init,(void))

 ::h3d::col::TriPlane TriPlane_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7858270cfb96ecc2_57_clone)
HXLINE(  58)		 ::h3d::col::TriPlane clone =  ::h3d::col::TriPlane_obj::__alloc( HX_CTX );
HXLINE(  59)		{
HXLINE(  59)			clone->p0x = this->p0x;
HXDLIN(  59)			clone->p0y = this->p0y;
HXDLIN(  59)			clone->p0z = this->p0z;
HXDLIN(  59)			clone->d1x = this->d1x;
HXDLIN(  59)			clone->d1y = this->d1y;
HXDLIN(  59)			clone->d1z = this->d1z;
HXDLIN(  59)			clone->d2x = this->d2x;
HXDLIN(  59)			clone->d2y = this->d2y;
HXDLIN(  59)			clone->d2z = this->d2z;
HXDLIN(  59)			clone->dot00 = this->dot00;
HXDLIN(  59)			clone->dot01 = this->dot01;
HXDLIN(  59)			clone->dot11 = this->dot11;
HXDLIN(  59)			clone->invDenom = this->invDenom;
HXDLIN(  59)			clone->nx = this->nx;
HXDLIN(  59)			clone->ny = this->ny;
HXDLIN(  59)			clone->nz = this->nz;
HXDLIN(  59)			clone->d = this->d;
            		}
HXLINE(  60)		if (::hx::IsNotNull( this->next )) {
HXLINE(  61)			clone->next = this->next->clone();
            		}
HXLINE(  62)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TriPlane_obj,clone,return )

void TriPlane_obj::load( ::h3d::col::TriPlane tp){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_65_load)
HXLINE(  66)		this->p0x = tp->p0x;
HXLINE(  67)		this->p0y = tp->p0y;
HXLINE(  68)		this->p0z = tp->p0z;
HXLINE(  69)		this->d1x = tp->d1x;
HXLINE(  70)		this->d1y = tp->d1y;
HXLINE(  71)		this->d1z = tp->d1z;
HXLINE(  72)		this->d2x = tp->d2x;
HXLINE(  73)		this->d2y = tp->d2y;
HXLINE(  74)		this->d2z = tp->d2z;
HXLINE(  75)		this->dot00 = tp->dot00;
HXLINE(  76)		this->dot01 = tp->dot01;
HXLINE(  77)		this->dot11 = tp->dot11;
HXLINE(  78)		this->invDenom = tp->invDenom;
HXLINE(  79)		this->nx = tp->nx;
HXLINE(  80)		this->ny = tp->ny;
HXLINE(  81)		this->nz = tp->nz;
HXLINE(  82)		this->d = tp->d;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TriPlane_obj,load,(void))

void TriPlane_obj::transform( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_85_transform)
HXLINE(  86)		Float p0_x = this->p0x;
HXDLIN(  86)		Float p0_y = this->p0y;
HXDLIN(  86)		Float p0_z = this->p0z;
HXLINE(  87)		Float p1_x = (this->d1x + this->p0x);
HXDLIN(  87)		Float p1_y = (this->d1y + this->p0y);
HXDLIN(  87)		Float p1_z = (this->d1z + this->p0z);
HXLINE(  88)		Float p2_x = (this->d2x + this->p0x);
HXDLIN(  88)		Float p2_y = (this->d2y + this->p0y);
HXDLIN(  88)		Float p2_z = (this->d2z + this->p0z);
HXLINE(  89)		{
HXLINE(  89)			Float px = ((((p0_x * m->_11) + (p0_y * m->_21)) + (p0_z * m->_31)) + m->_41);
HXDLIN(  89)			Float py = ((((p0_x * m->_12) + (p0_y * m->_22)) + (p0_z * m->_32)) + m->_42);
HXDLIN(  89)			Float pz = ((((p0_x * m->_13) + (p0_y * m->_23)) + (p0_z * m->_33)) + m->_43);
HXDLIN(  89)			p0_x = px;
HXDLIN(  89)			p0_y = py;
HXDLIN(  89)			p0_z = pz;
            		}
HXLINE(  90)		{
HXLINE(  90)			Float px1 = ((((p1_x * m->_11) + (p1_y * m->_21)) + (p1_z * m->_31)) + m->_41);
HXDLIN(  90)			Float py1 = ((((p1_x * m->_12) + (p1_y * m->_22)) + (p1_z * m->_32)) + m->_42);
HXDLIN(  90)			Float pz1 = ((((p1_x * m->_13) + (p1_y * m->_23)) + (p1_z * m->_33)) + m->_43);
HXDLIN(  90)			p1_x = px1;
HXDLIN(  90)			p1_y = py1;
HXDLIN(  90)			p1_z = pz1;
            		}
HXLINE(  91)		{
HXLINE(  91)			Float px2 = ((((p2_x * m->_11) + (p2_y * m->_21)) + (p2_z * m->_31)) + m->_41);
HXDLIN(  91)			Float py2 = ((((p2_x * m->_12) + (p2_y * m->_22)) + (p2_z * m->_32)) + m->_42);
HXDLIN(  91)			Float pz2 = ((((p2_x * m->_13) + (p2_y * m->_23)) + (p2_z * m->_33)) + m->_43);
HXDLIN(  91)			p2_x = px2;
HXDLIN(  91)			p2_y = py2;
HXDLIN(  91)			p2_z = pz2;
            		}
HXLINE(  92)		{
HXLINE(  92)			this->p0x = p0_x;
HXDLIN(  92)			this->p0y = p0_y;
HXDLIN(  92)			this->p0z = p0_z;
HXDLIN(  92)			Float d1_x = (p1_x - p0_x);
HXDLIN(  92)			Float d1_y = (p1_y - p0_y);
HXDLIN(  92)			Float d1_z = (p1_z - p0_z);
HXDLIN(  92)			Float d2_x = (p2_x - p0_x);
HXDLIN(  92)			Float d2_y = (p2_y - p0_y);
HXDLIN(  92)			Float d2_z = (p2_z - p0_z);
HXDLIN(  92)			Float n_x = ((d1_y * d2_z) - (d1_z * d2_y));
HXDLIN(  92)			Float n_y = ((d1_z * d2_x) - (d1_x * d2_z));
HXDLIN(  92)			Float n_z = ((d1_x * d2_y) - (d1_y * d2_x));
HXDLIN(  92)			this->d = (((n_x * p0_x) + (n_y * p0_y)) + (n_z * p0_z));
HXDLIN(  92)			this->nx = n_x;
HXDLIN(  92)			this->ny = n_y;
HXDLIN(  92)			this->nz = n_z;
HXDLIN(  92)			this->d1x = d1_x;
HXDLIN(  92)			this->d1y = d1_y;
HXDLIN(  92)			this->d1z = d1_z;
HXDLIN(  92)			this->d2x = d2_x;
HXDLIN(  92)			this->d2y = d2_y;
HXDLIN(  92)			this->d2z = d2_z;
HXDLIN(  92)			this->dot00 = (((d1_x * d1_x) + (d1_y * d1_y)) + (d1_z * d1_z));
HXDLIN(  92)			this->dot01 = (((d1_x * d2_x) + (d1_y * d2_y)) + (d1_z * d2_z));
HXDLIN(  92)			this->dot11 = (((d2_x * d2_x) + (d2_y * d2_y)) + (d2_z * d2_z));
HXDLIN(  92)			this->invDenom = (( (Float)(1) ) / ((this->dot00 * this->dot11) - (this->dot01 * this->dot01)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TriPlane_obj,transform,(void))

bool TriPlane_obj::contains( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_96_contains)
HXDLIN(  96)		Float v2_x = (p->x - this->p0x);
HXDLIN(  96)		Float v2_y = (p->y - this->p0y);
HXDLIN(  96)		Float v2_z = (p->z - this->p0z);
HXDLIN(  96)		Float dot02 = (((this->d1x * v2_x) + (this->d1y * v2_y)) + (this->d1z * v2_z));
HXDLIN(  96)		Float dot12 = (((this->d2x * v2_x) + (this->d2y * v2_y)) + (this->d2z * v2_z));
HXDLIN(  96)		Float u = (((this->dot11 * dot02) - (this->dot01 * dot12)) * this->invDenom);
HXDLIN(  96)		Float v = (((this->dot00 * dot12) - (this->dot01 * dot02)) * this->invDenom);
HXDLIN(  96)		bool _hx_tmp;
HXDLIN(  96)		if ((u >= 0)) {
HXDLIN(  96)			_hx_tmp = (v >= 0);
            		}
            		else {
HXDLIN(  96)			_hx_tmp = false;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXDLIN(  96)			return ((u + v) < 1);
            		}
            		else {
HXDLIN(  96)			return false;
            		}
HXDLIN(  96)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TriPlane_obj,contains,return )

bool TriPlane_obj::side( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_100_side)
HXDLIN( 100)		return (((((this->nx * p->x) + (this->ny * p->y)) + (this->nz * p->z)) - this->d) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TriPlane_obj,side,return )

bool TriPlane_obj::inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_104_inFrustum)
HXDLIN( 104)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 104)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TriPlane_obj,inFrustum,return )

bool TriPlane_obj::inSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_109_inSphere)
HXDLIN( 109)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 109)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TriPlane_obj,inSphere,return )

Float TriPlane_obj::rayIntersection( ::h3d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_113_rayIntersection)
HXLINE( 114)		Float dr = (((r->lx * this->nx) + (r->ly * this->ny)) + (r->lz * this->nz));
HXLINE( 115)		if ((dr >= 0)) {
HXLINE( 116)			return ((Float)-1.);
            		}
HXLINE( 117)		Float nd = (this->d - (((r->px * this->nx) + (r->py * this->ny)) + (r->pz * this->nz)));
HXLINE( 118)		Float k = (nd / dr);
HXLINE( 119)		if ((k < 0)) {
HXLINE( 120)			return ( (Float)(-1) );
            		}
HXLINE( 121)		Float px = (r->px + (r->lx * k));
HXLINE( 122)		Float py = (r->py + (r->ly * k));
HXLINE( 123)		Float pz = (r->pz + (r->lz * k));
HXLINE( 124)		Float v2_x = (px - this->p0x);
HXDLIN( 124)		Float v2_y = (py - this->p0y);
HXDLIN( 124)		Float v2_z = (pz - this->p0z);
HXDLIN( 124)		Float dot02 = (((this->d1x * v2_x) + (this->d1y * v2_y)) + (this->d1z * v2_z));
HXDLIN( 124)		Float dot12 = (((this->d2x * v2_x) + (this->d2y * v2_y)) + (this->d2z * v2_z));
HXDLIN( 124)		Float u = (((this->dot11 * dot02) - (this->dot01 * dot12)) * this->invDenom);
HXDLIN( 124)		Float v = (((this->dot00 * dot12) - (this->dot01 * dot02)) * this->invDenom);
HXDLIN( 124)		bool _hx_tmp;
HXDLIN( 124)		bool _hx_tmp1;
HXDLIN( 124)		if ((u >= 0)) {
HXLINE( 124)			_hx_tmp1 = (v >= 0);
            		}
            		else {
HXLINE( 124)			_hx_tmp1 = false;
            		}
HXDLIN( 124)		if (_hx_tmp1) {
HXLINE( 124)			_hx_tmp = ((u + v) < 1);
            		}
            		else {
HXLINE( 124)			_hx_tmp = false;
            		}
HXDLIN( 124)		if (!(_hx_tmp)) {
HXLINE( 125)			return ( (Float)(-1) );
            		}
HXLINE( 126)		return k;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TriPlane_obj,rayIntersection,return )

bool TriPlane_obj::isPointInTriangle(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_7858270cfb96ecc2_129_isPointInTriangle)
HXLINE( 131)		Float v2_x = (x - this->p0x);
HXDLIN( 131)		Float v2_y = (y - this->p0y);
HXDLIN( 131)		Float v2_z = (z - this->p0z);
HXLINE( 132)		Float dot02 = (((this->d1x * v2_x) + (this->d1y * v2_y)) + (this->d1z * v2_z));
HXLINE( 133)		Float dot12 = (((this->d2x * v2_x) + (this->d2y * v2_y)) + (this->d2z * v2_z));
HXLINE( 136)		Float u = (((this->dot11 * dot02) - (this->dot01 * dot12)) * this->invDenom);
HXLINE( 137)		Float v = (((this->dot00 * dot12) - (this->dot01 * dot02)) * this->invDenom);
HXLINE( 140)		bool _hx_tmp;
HXDLIN( 140)		if ((u >= 0)) {
HXLINE( 140)			_hx_tmp = (v >= 0);
            		}
            		else {
HXLINE( 140)			_hx_tmp = false;
            		}
HXDLIN( 140)		if (_hx_tmp) {
HXLINE( 140)			return ((u + v) < 1);
            		}
            		else {
HXLINE( 140)			return false;
            		}
HXDLIN( 140)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(TriPlane_obj,isPointInTriangle,return )

::Array< ::Dynamic> TriPlane_obj::getPoints(){
            	HX_GC_STACKFRAME(&_hx_pos_7858270cfb96ecc2_144_getPoints)
HXDLIN( 144)		 ::h3d::col::Point _hx_tmp =  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->p0x,this->p0y,this->p0z);
HXDLIN( 144)		 ::h3d::col::Point _hx_tmp1 =  ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->d1x + this->p0x),(this->d1y + this->p0y),(this->d1z + this->p0z));
HXDLIN( 144)		return ::Array_obj< ::Dynamic>::__new(3)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2, ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->d2x + this->p0x),(this->d2y + this->p0y),(this->d2z + this->p0z)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TriPlane_obj,getPoints,return )


::hx::ObjectPtr< TriPlane_obj > TriPlane_obj::__new() {
	::hx::ObjectPtr< TriPlane_obj > __this = new TriPlane_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TriPlane_obj > TriPlane_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TriPlane_obj *__this = (TriPlane_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TriPlane_obj), true, "h3d.col.TriPlane"));
	*(void **)__this = TriPlane_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TriPlane_obj::TriPlane_obj()
{
}

void TriPlane_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TriPlane);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(p0x,"p0x");
	HX_MARK_MEMBER_NAME(p0y,"p0y");
	HX_MARK_MEMBER_NAME(p0z,"p0z");
	HX_MARK_MEMBER_NAME(d1x,"d1x");
	HX_MARK_MEMBER_NAME(d1y,"d1y");
	HX_MARK_MEMBER_NAME(d1z,"d1z");
	HX_MARK_MEMBER_NAME(d2x,"d2x");
	HX_MARK_MEMBER_NAME(d2y,"d2y");
	HX_MARK_MEMBER_NAME(d2z,"d2z");
	HX_MARK_MEMBER_NAME(dot00,"dot00");
	HX_MARK_MEMBER_NAME(dot01,"dot01");
	HX_MARK_MEMBER_NAME(dot11,"dot11");
	HX_MARK_MEMBER_NAME(invDenom,"invDenom");
	HX_MARK_MEMBER_NAME(nx,"nx");
	HX_MARK_MEMBER_NAME(ny,"ny");
	HX_MARK_MEMBER_NAME(nz,"nz");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_END_CLASS();
}

void TriPlane_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(p0x,"p0x");
	HX_VISIT_MEMBER_NAME(p0y,"p0y");
	HX_VISIT_MEMBER_NAME(p0z,"p0z");
	HX_VISIT_MEMBER_NAME(d1x,"d1x");
	HX_VISIT_MEMBER_NAME(d1y,"d1y");
	HX_VISIT_MEMBER_NAME(d1z,"d1z");
	HX_VISIT_MEMBER_NAME(d2x,"d2x");
	HX_VISIT_MEMBER_NAME(d2y,"d2y");
	HX_VISIT_MEMBER_NAME(d2z,"d2z");
	HX_VISIT_MEMBER_NAME(dot00,"dot00");
	HX_VISIT_MEMBER_NAME(dot01,"dot01");
	HX_VISIT_MEMBER_NAME(dot11,"dot11");
	HX_VISIT_MEMBER_NAME(invDenom,"invDenom");
	HX_VISIT_MEMBER_NAME(nx,"nx");
	HX_VISIT_MEMBER_NAME(ny,"ny");
	HX_VISIT_MEMBER_NAME(nz,"nz");
	HX_VISIT_MEMBER_NAME(d,"d");
}

::hx::Val TriPlane_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { return ::hx::Val( nx ); }
		if (HX_FIELD_EQ(inName,"ny") ) { return ::hx::Val( ny ); }
		if (HX_FIELD_EQ(inName,"nz") ) { return ::hx::Val( nz ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"p0x") ) { return ::hx::Val( p0x ); }
		if (HX_FIELD_EQ(inName,"p0y") ) { return ::hx::Val( p0y ); }
		if (HX_FIELD_EQ(inName,"p0z") ) { return ::hx::Val( p0z ); }
		if (HX_FIELD_EQ(inName,"d1x") ) { return ::hx::Val( d1x ); }
		if (HX_FIELD_EQ(inName,"d1y") ) { return ::hx::Val( d1y ); }
		if (HX_FIELD_EQ(inName,"d1z") ) { return ::hx::Val( d1z ); }
		if (HX_FIELD_EQ(inName,"d2x") ) { return ::hx::Val( d2x ); }
		if (HX_FIELD_EQ(inName,"d2y") ) { return ::hx::Val( d2y ); }
		if (HX_FIELD_EQ(inName,"d2z") ) { return ::hx::Val( d2z ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"side") ) { return ::hx::Val( side_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dot00") ) { return ::hx::Val( dot00 ); }
		if (HX_FIELD_EQ(inName,"dot01") ) { return ::hx::Val( dot01 ); }
		if (HX_FIELD_EQ(inName,"dot11") ) { return ::hx::Val( dot11 ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"invDenom") ) { return ::hx::Val( invDenom ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"inSphere") ) { return ::hx::Val( inSphere_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPoints") ) { return ::hx::Val( getPoints_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isPointInTriangle") ) { return ::hx::Val( isPointInTriangle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TriPlane_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nz") ) { nz=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"p0x") ) { p0x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p0y") ) { p0y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p0z") ) { p0z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d1x") ) { d1x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d1y") ) { d1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d1z") ) { d1z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d2x") ) { d2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d2y") ) { d2y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d2z") ) { d2z=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::h3d::col::TriPlane >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dot00") ) { dot00=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dot01") ) { dot01=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dot11") ) { dot11=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"invDenom") ) { invDenom=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TriPlane_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("p0x",b8,26,55,00));
	outFields->push(HX_("p0y",b9,26,55,00));
	outFields->push(HX_("p0z",ba,26,55,00));
	outFields->push(HX_("d1x",8b,0c,4c,00));
	outFields->push(HX_("d1y",8c,0c,4c,00));
	outFields->push(HX_("d1z",8d,0c,4c,00));
	outFields->push(HX_("d2x",6a,0d,4c,00));
	outFields->push(HX_("d2y",6b,0d,4c,00));
	outFields->push(HX_("d2z",6c,0d,4c,00));
	outFields->push(HX_("dot00",c9,e0,c8,dd));
	outFields->push(HX_("dot01",ca,e0,c8,dd));
	outFields->push(HX_("dot11",a9,e1,c8,dd));
	outFields->push(HX_("invDenom",7a,41,5c,ec));
	outFields->push(HX_("nx",4a,60,00,00));
	outFields->push(HX_("ny",4b,60,00,00));
	outFields->push(HX_("nz",4c,60,00,00));
	outFields->push(HX_("d",64,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TriPlane_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::col::TriPlane */ ,(int)offsetof(TriPlane_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,p0x),HX_("p0x",b8,26,55,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,p0y),HX_("p0y",b9,26,55,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,p0z),HX_("p0z",ba,26,55,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,d1x),HX_("d1x",8b,0c,4c,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,d1y),HX_("d1y",8c,0c,4c,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,d1z),HX_("d1z",8d,0c,4c,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,d2x),HX_("d2x",6a,0d,4c,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,d2y),HX_("d2y",6b,0d,4c,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,d2z),HX_("d2z",6c,0d,4c,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,dot00),HX_("dot00",c9,e0,c8,dd)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,dot01),HX_("dot01",ca,e0,c8,dd)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,dot11),HX_("dot11",a9,e1,c8,dd)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,invDenom),HX_("invDenom",7a,41,5c,ec)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,nx),HX_("nx",4a,60,00,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,ny),HX_("ny",4b,60,00,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,nz),HX_("nz",4c,60,00,00)},
	{::hx::fsFloat,(int)offsetof(TriPlane_obj,d),HX_("d",64,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TriPlane_obj_sStaticStorageInfo = 0;
#endif

static ::String TriPlane_obj_sMemberFields[] = {
	HX_("next",f3,84,02,49),
	HX_("p0x",b8,26,55,00),
	HX_("p0y",b9,26,55,00),
	HX_("p0z",ba,26,55,00),
	HX_("d1x",8b,0c,4c,00),
	HX_("d1y",8c,0c,4c,00),
	HX_("d1z",8d,0c,4c,00),
	HX_("d2x",6a,0d,4c,00),
	HX_("d2y",6b,0d,4c,00),
	HX_("d2z",6c,0d,4c,00),
	HX_("dot00",c9,e0,c8,dd),
	HX_("dot01",ca,e0,c8,dd),
	HX_("dot11",a9,e1,c8,dd),
	HX_("invDenom",7a,41,5c,ec),
	HX_("nx",4a,60,00,00),
	HX_("ny",4b,60,00,00),
	HX_("nz",4c,60,00,00),
	HX_("d",64,00,00,00),
	HX_("init",10,3b,bb,45),
	HX_("clone",5d,13,63,48),
	HX_("load",26,9a,b7,47),
	HX_("transform",6c,2d,93,45),
	HX_("contains",1f,5a,7b,2c),
	HX_("side",97,8d,53,4c),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inSphere",d2,f8,74,45),
	HX_("rayIntersection",53,fb,28,64),
	HX_("isPointInTriangle",73,a3,d8,49),
	HX_("getPoints",59,9b,84,73),
	::String(null()) };

::hx::Class TriPlane_obj::__mClass;

void TriPlane_obj::__register()
{
	TriPlane_obj _hx_dummy;
	TriPlane_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.TriPlane",94,a1,90,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TriPlane_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TriPlane_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TriPlane_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TriPlane_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
