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
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_Plane
#include <h3d/col/Plane.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_col_Ray
#include <h3d/col/Ray.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4aaa85658b36acc3_14_new,"h3d.col.Ray","new",0xbe4358d9,"h3d.col.Ray.new","h3d/col/Ray.hx",14,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_17_clone,"h3d.col.Ray","clone",0x07a06c16,"h3d.col.Ray.clone","h3d/col/Ray.hx",17,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_28_load,"h3d.col.Ray","load",0xbb5f7b8d,"h3d.col.Ray.load","h3d/col/Ray.hx",28,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_37_normalize,"h3d.col.Ray","normalize",0x158be0c6,"h3d.col.Ray.normalize","h3d/col/Ray.hx",37,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_46_transform,"h3d.col.Ray","transform",0xaf7dd6a5,"h3d.col.Ray.transform","h3d/col/Ray.hx",46,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_61_getPos,"h3d.col.Ray","getPos",0x3994dfc5,"h3d.col.Ray.getPos","h3d/col/Ray.hx",61,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_65_getDir,"h3d.col.Ray","getDir",0x398bbf7e,"h3d.col.Ray.getDir","h3d/col/Ray.hx",65,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_69_getPoint,"h3d.col.Ray","getPoint",0x7058e4c1,"h3d.col.Ray.getPoint","h3d/col/Ray.hx",69,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_73_toString,"h3d.col.Ray","toString",0x8260f193,"h3d.col.Ray.toString","h3d/col/Ray.hx",73,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_76_intersect,"h3d.col.Ray","intersect",0xac5faa18,"h3d.col.Ray.intersect","h3d/col/Ray.hx",76,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_88_collideFrustum,"h3d.col.Ray","collideFrustum",0x95c813ab,"h3d.col.Ray.collideFrustum","h3d/col/Ray.hx",88,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_113_collide,"h3d.col.Ray","collide",0xf9336877,"h3d.col.Ray.collide","h3d/col/Ray.hx",113,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_137_fromPoints,"h3d.col.Ray","fromPoints",0x7ddb7fd4,"h3d.col.Ray.fromPoints","h3d/col/Ray.hx",137,0xddd126b9)
HX_LOCAL_STACK_FRAME(_hx_pos_4aaa85658b36acc3_149_fromValues,"h3d.col.Ray","fromValues",0xd6647193,"h3d.col.Ray.fromValues","h3d/col/Ray.hx",149,0xddd126b9)
namespace h3d{
namespace col{

void Ray_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4aaa85658b36acc3_14_new)
            	}

Dynamic Ray_obj::__CreateEmpty() { return new Ray_obj; }

void *Ray_obj::_hx_vtable = 0;

Dynamic Ray_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ray_obj > _hx_result = new Ray_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Ray_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c5e0b7b;
}

 ::h3d::col::Ray Ray_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_4aaa85658b36acc3_17_clone)
HXLINE(  18)		 ::h3d::col::Ray r =  ::h3d::col::Ray_obj::__alloc( HX_CTX );
HXLINE(  19)		r->px = this->px;
HXLINE(  20)		r->py = this->py;
HXLINE(  21)		r->pz = this->pz;
HXLINE(  22)		r->lx = this->lx;
HXLINE(  23)		r->ly = this->ly;
HXLINE(  24)		r->lz = this->lz;
HXLINE(  25)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,clone,return )

void Ray_obj::load( ::h3d::col::Ray r){
            	HX_STACKFRAME(&_hx_pos_4aaa85658b36acc3_28_load)
HXLINE(  29)		this->px = r->px;
HXLINE(  30)		this->py = r->py;
HXLINE(  31)		this->pz = r->pz;
HXLINE(  32)		this->lx = r->lx;
HXLINE(  33)		this->ly = r->ly;
HXLINE(  34)		this->lz = r->lz;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,load,(void))

void Ray_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_4aaa85658b36acc3_37_normalize)
HXLINE(  38)		Float l = (((this->lx * this->lx) + (this->ly * this->ly)) + (this->lz * this->lz));
HXLINE(  39)		if ((l == ((Float)1.))) {
HXLINE(  39)			return;
            		}
HXLINE(  40)		if ((l < ((Float)1e-10))) {
HXLINE(  40)			l = ( (Float)(0) );
            		}
            		else {
HXLINE(  40)			l = (((Float)1.) / ::Math_obj::sqrt(l));
            		}
HXLINE(  41)		 ::h3d::col::Ray _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  41)		_hx_tmp->lx = (_hx_tmp->lx * l);
HXLINE(  42)		 ::h3d::col::Ray _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  42)		_hx_tmp1->ly = (_hx_tmp1->ly * l);
HXLINE(  43)		 ::h3d::col::Ray _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  43)		_hx_tmp2->lz = (_hx_tmp2->lz * l);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,normalize,(void))

void Ray_obj::transform( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_4aaa85658b36acc3_46_transform)
HXLINE(  47)		Float p_x = this->px;
HXDLIN(  47)		Float p_y = this->py;
HXDLIN(  47)		Float p_z = this->pz;
HXDLIN(  47)		Float p_w = ((Float)1.);
HXLINE(  48)		{
HXLINE(  48)			Float px = ((((p_x * m->_11) + (p_y * m->_21)) + (p_z * m->_31)) + (p_w * m->_41));
HXDLIN(  48)			Float py = ((((p_x * m->_12) + (p_y * m->_22)) + (p_z * m->_32)) + (p_w * m->_42));
HXDLIN(  48)			Float pz = ((((p_x * m->_13) + (p_y * m->_23)) + (p_z * m->_33)) + (p_w * m->_43));
HXDLIN(  48)			p_x = px;
HXDLIN(  48)			p_y = py;
HXDLIN(  48)			p_z = pz;
            		}
HXLINE(  49)		this->px = p_x;
HXLINE(  50)		this->py = p_y;
HXLINE(  51)		this->pz = p_z;
HXLINE(  52)		Float l_x = this->lx;
HXDLIN(  52)		Float l_y = this->ly;
HXDLIN(  52)		Float l_z = this->lz;
HXDLIN(  52)		Float l_w = ((Float)1.);
HXLINE(  53)		{
HXLINE(  53)			Float px1 = (((l_x * m->_11) + (l_y * m->_21)) + (l_z * m->_31));
HXDLIN(  53)			Float py1 = (((l_x * m->_12) + (l_y * m->_22)) + (l_z * m->_32));
HXDLIN(  53)			Float pz1 = (((l_x * m->_13) + (l_y * m->_23)) + (l_z * m->_33));
HXDLIN(  53)			l_x = px1;
HXDLIN(  53)			l_y = py1;
HXDLIN(  53)			l_z = pz1;
            		}
HXLINE(  54)		this->lx = l_x;
HXLINE(  55)		this->ly = l_y;
HXLINE(  56)		this->lz = l_z;
HXLINE(  57)		this->normalize();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,transform,(void))

 ::h3d::col::Point Ray_obj::getPos(){
            	HX_GC_STACKFRAME(&_hx_pos_4aaa85658b36acc3_61_getPos)
HXDLIN(  61)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->px,this->py,this->pz);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,getPos,return )

 ::h3d::col::Point Ray_obj::getDir(){
            	HX_GC_STACKFRAME(&_hx_pos_4aaa85658b36acc3_65_getDir)
HXDLIN(  65)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->lx,this->ly,this->lz);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,getDir,return )

 ::h3d::col::Point Ray_obj::getPoint(Float distance){
            	HX_GC_STACKFRAME(&_hx_pos_4aaa85658b36acc3_69_getPoint)
HXDLIN(  69)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->px + (distance * this->lx)),(this->py + (distance * this->ly)),(this->pz + (distance * this->lz)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,getPoint,return )

::String Ray_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_4aaa85658b36acc3_73_toString)
HXDLIN(  73)		::String _hx_tmp = ((HX_("Ray{",71,83,7d,36) + ::Std_obj::string( ::h3d::col::Point_obj::__alloc( HX_CTX ,this->px,this->py,this->pz))) + HX_(",",2c,00,00,00));
HXDLIN(  73)		return ((_hx_tmp + ::Std_obj::string( ::h3d::col::Point_obj::__alloc( HX_CTX ,this->lx,this->ly,this->lz))) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,toString,return )

 ::h3d::col::Point Ray_obj::intersect( ::h3d::col::Plane p){
            	HX_GC_STACKFRAME(&_hx_pos_4aaa85658b36acc3_76_intersect)
HXLINE(  77)		Float d = (((this->lx * p->nx) + (this->ly * p->ny)) + (this->lz * p->nz));
HXLINE(  78)		Float nd = (p->d - (((this->px * p->nx) + (this->py * p->ny)) + (this->pz * p->nz)));
HXLINE(  80)		Float _hx_tmp;
HXDLIN(  80)		if ((d < 0)) {
HXLINE(  80)			_hx_tmp = -(d);
            		}
            		else {
HXLINE(  80)			_hx_tmp = d;
            		}
HXDLIN(  80)		if ((_hx_tmp < ((Float)1e-10))) {
HXLINE(  81)			Float _hx_tmp;
HXDLIN(  81)			if ((nd < 0)) {
HXLINE(  81)				_hx_tmp = -(nd);
            			}
            			else {
HXLINE(  81)				_hx_tmp = nd;
            			}
HXDLIN(  81)			if ((_hx_tmp < ((Float)1e-10))) {
HXLINE(  81)				return  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->px,this->py,this->pz);
            			}
            			else {
HXLINE(  81)				return null();
            			}
            		}
            		else {
HXLINE(  83)			Float k = (nd / d);
HXLINE(  84)			return  ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->px + (this->lx * k)),(this->py + (this->ly * k)),(this->pz + (this->lz * k)));
            		}
HXLINE(  80)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,intersect,return )

bool Ray_obj::collideFrustum( ::h3d::Matrix mvp){
            	HX_STACKFRAME(&_hx_pos_4aaa85658b36acc3_88_collideFrustum)
HXLINE(  90)		Float a_x = this->px;
HXDLIN(  90)		Float a_y = this->py;
HXDLIN(  90)		Float a_z = this->pz;
HXDLIN(  90)		Float a_w = ((Float)1.);
HXLINE(  91)		{
HXLINE(  91)			Float px = ((((a_x * mvp->_11) + (a_y * mvp->_21)) + (a_z * mvp->_31)) + (a_w * mvp->_41));
HXDLIN(  91)			Float py = ((((a_x * mvp->_12) + (a_y * mvp->_22)) + (a_z * mvp->_32)) + (a_w * mvp->_42));
HXDLIN(  91)			Float pz = ((((a_x * mvp->_13) + (a_y * mvp->_23)) + (a_z * mvp->_33)) + (a_w * mvp->_43));
HXDLIN(  91)			Float iw = (( (Float)(1) ) / ((((a_x * mvp->_14) + (a_y * mvp->_24)) + (a_z * mvp->_34)) + (a_w * mvp->_44)));
HXDLIN(  91)			a_x = (px * iw);
HXDLIN(  91)			a_y = (py * iw);
HXDLIN(  91)			a_z = (pz * iw);
HXDLIN(  91)			a_w = ( (Float)(1) );
            		}
HXLINE(  92)		Float b_x = (this->px + this->lx);
HXDLIN(  92)		Float b_y = (this->py + this->ly);
HXDLIN(  92)		Float b_z = (this->pz + this->lz);
HXDLIN(  92)		Float b_w = ((Float)1.);
HXLINE(  93)		{
HXLINE(  93)			Float px1 = ((((b_x * mvp->_11) + (b_y * mvp->_21)) + (b_z * mvp->_31)) + (b_w * mvp->_41));
HXDLIN(  93)			Float py1 = ((((b_x * mvp->_12) + (b_y * mvp->_22)) + (b_z * mvp->_32)) + (b_w * mvp->_42));
HXDLIN(  93)			Float pz1 = ((((b_x * mvp->_13) + (b_y * mvp->_23)) + (b_z * mvp->_33)) + (b_w * mvp->_43));
HXDLIN(  93)			Float iw1 = (( (Float)(1) ) / ((((b_x * mvp->_14) + (b_y * mvp->_24)) + (b_z * mvp->_34)) + (b_w * mvp->_44)));
HXDLIN(  93)			b_x = (px1 * iw1);
HXDLIN(  93)			b_y = (py1 * iw1);
HXDLIN(  93)			b_z = (pz1 * iw1);
HXDLIN(  93)			b_w = ( (Float)(1) );
            		}
HXLINE(  95)		Float lx = (b_x - a_x);
HXLINE(  96)		Float ly = (b_y - a_y);
HXLINE(  97)		Float lz = (b_z - a_z);
HXLINE(  99)		Float dx = (( (Float)(1) ) / lx);
HXLINE( 100)		Float dy = (( (Float)(1) ) / ly);
HXLINE( 101)		Float dz = (( (Float)(1) ) / lz);
HXLINE( 102)		Float t1 = ((( (Float)(-1) ) - a_x) * dx);
HXLINE( 103)		Float t2 = ((( (Float)(1) ) - a_x) * dx);
HXLINE( 104)		Float t3 = ((( (Float)(-1) ) - a_y) * dy);
HXLINE( 105)		Float t4 = ((( (Float)(1) ) - a_y) * dy);
HXLINE( 106)		Float t5 = ((( (Float)(0) ) - a_z) * dz);
HXLINE( 107)		Float t6 = ((( (Float)(1) ) - a_z) * dz);
HXLINE( 108)		Float a;
HXDLIN( 108)		if ((t1 > t2)) {
HXLINE( 108)			a = t2;
            		}
            		else {
HXLINE( 108)			a = t1;
            		}
HXDLIN( 108)		Float b;
HXDLIN( 108)		if ((t3 > t4)) {
HXLINE( 108)			b = t4;
            		}
            		else {
HXLINE( 108)			b = t3;
            		}
HXDLIN( 108)		Float a1;
HXDLIN( 108)		if ((a < b)) {
HXLINE( 108)			a1 = b;
            		}
            		else {
HXLINE( 108)			a1 = a;
            		}
HXDLIN( 108)		Float b1;
HXDLIN( 108)		if ((t5 > t6)) {
HXLINE( 108)			b1 = t6;
            		}
            		else {
HXLINE( 108)			b1 = t5;
            		}
HXDLIN( 108)		Float tmin;
HXDLIN( 108)		if ((a1 < b1)) {
HXLINE( 108)			tmin = b1;
            		}
            		else {
HXLINE( 108)			tmin = a1;
            		}
HXLINE( 109)		Float a2;
HXDLIN( 109)		if ((t1 < t2)) {
HXLINE( 109)			a2 = t2;
            		}
            		else {
HXLINE( 109)			a2 = t1;
            		}
HXDLIN( 109)		Float b2;
HXDLIN( 109)		if ((t3 < t4)) {
HXLINE( 109)			b2 = t4;
            		}
            		else {
HXLINE( 109)			b2 = t3;
            		}
HXDLIN( 109)		Float a3;
HXDLIN( 109)		if ((a2 > b2)) {
HXLINE( 109)			a3 = b2;
            		}
            		else {
HXLINE( 109)			a3 = a2;
            		}
HXDLIN( 109)		Float b3;
HXDLIN( 109)		if ((t5 < t6)) {
HXLINE( 109)			b3 = t6;
            		}
            		else {
HXLINE( 109)			b3 = t5;
            		}
HXDLIN( 109)		Float tmax;
HXDLIN( 109)		if ((a3 > b3)) {
HXLINE( 109)			tmax = b3;
            		}
            		else {
HXLINE( 109)			tmax = a3;
            		}
HXLINE( 110)		bool _hx_tmp;
HXDLIN( 110)		if (!((tmax < 0))) {
HXLINE( 110)			_hx_tmp = (tmin > tmax);
            		}
            		else {
HXLINE( 110)			_hx_tmp = true;
            		}
HXDLIN( 110)		return !(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,collideFrustum,return )

bool Ray_obj::collide( ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_4aaa85658b36acc3_113_collide)
HXLINE( 114)		Float dx = (( (Float)(1) ) / this->lx);
HXLINE( 115)		Float dy = (( (Float)(1) ) / this->ly);
HXLINE( 116)		Float dz = (( (Float)(1) ) / this->lz);
HXLINE( 117)		Float t1 = ((b->xMin - this->px) * dx);
HXLINE( 118)		Float t2 = ((b->xMax - this->px) * dx);
HXLINE( 119)		Float t3 = ((b->yMin - this->py) * dy);
HXLINE( 120)		Float t4 = ((b->yMax - this->py) * dy);
HXLINE( 121)		Float t5 = ((b->zMin - this->pz) * dz);
HXLINE( 122)		Float t6 = ((b->zMax - this->pz) * dz);
HXLINE( 123)		Float a;
HXDLIN( 123)		if ((t1 > t2)) {
HXLINE( 123)			a = t2;
            		}
            		else {
HXLINE( 123)			a = t1;
            		}
HXDLIN( 123)		Float b1;
HXDLIN( 123)		if ((t3 > t4)) {
HXLINE( 123)			b1 = t4;
            		}
            		else {
HXLINE( 123)			b1 = t3;
            		}
HXDLIN( 123)		Float a1;
HXDLIN( 123)		if ((a < b1)) {
HXLINE( 123)			a1 = b1;
            		}
            		else {
HXLINE( 123)			a1 = a;
            		}
HXDLIN( 123)		Float b2;
HXDLIN( 123)		if ((t5 > t6)) {
HXLINE( 123)			b2 = t6;
            		}
            		else {
HXLINE( 123)			b2 = t5;
            		}
HXDLIN( 123)		Float tmin;
HXDLIN( 123)		if ((a1 < b2)) {
HXLINE( 123)			tmin = b2;
            		}
            		else {
HXLINE( 123)			tmin = a1;
            		}
HXLINE( 124)		Float a2;
HXDLIN( 124)		if ((t1 < t2)) {
HXLINE( 124)			a2 = t2;
            		}
            		else {
HXLINE( 124)			a2 = t1;
            		}
HXDLIN( 124)		Float b3;
HXDLIN( 124)		if ((t3 < t4)) {
HXLINE( 124)			b3 = t4;
            		}
            		else {
HXLINE( 124)			b3 = t3;
            		}
HXDLIN( 124)		Float a3;
HXDLIN( 124)		if ((a2 > b3)) {
HXLINE( 124)			a3 = b3;
            		}
            		else {
HXLINE( 124)			a3 = a2;
            		}
HXDLIN( 124)		Float b4;
HXDLIN( 124)		if ((t5 < t6)) {
HXLINE( 124)			b4 = t6;
            		}
            		else {
HXLINE( 124)			b4 = t5;
            		}
HXDLIN( 124)		Float tmax;
HXDLIN( 124)		if ((a3 > b4)) {
HXLINE( 124)			tmax = b4;
            		}
            		else {
HXLINE( 124)			tmax = a3;
            		}
HXLINE( 125)		if ((tmax < 0)) {
HXLINE( 127)			return false;
            		}
            		else {
HXLINE( 128)			if ((tmin > tmax)) {
HXLINE( 130)				return false;
            			}
            			else {
HXLINE( 133)				return true;
            			}
            		}
HXLINE( 125)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,collide,return )

 ::h3d::col::Ray Ray_obj::fromPoints( ::h3d::col::Point p1, ::h3d::col::Point p2){
            	HX_GC_STACKFRAME(&_hx_pos_4aaa85658b36acc3_137_fromPoints)
HXLINE( 138)		 ::h3d::col::Ray r =  ::h3d::col::Ray_obj::__alloc( HX_CTX );
HXLINE( 139)		r->px = p1->x;
HXLINE( 140)		r->py = p1->y;
HXLINE( 141)		r->pz = p1->z;
HXLINE( 142)		r->lx = (p2->x - p1->x);
HXLINE( 143)		r->ly = (p2->y - p1->y);
HXLINE( 144)		r->lz = (p2->z - p1->z);
HXLINE( 145)		r->normalize();
HXLINE( 146)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,fromPoints,return )

 ::h3d::col::Ray Ray_obj::fromValues(Float x,Float y,Float z,Float dx,Float dy,Float dz){
            	HX_GC_STACKFRAME(&_hx_pos_4aaa85658b36acc3_149_fromValues)
HXLINE( 150)		 ::h3d::col::Ray r =  ::h3d::col::Ray_obj::__alloc( HX_CTX );
HXLINE( 151)		r->px = x;
HXLINE( 152)		r->py = y;
HXLINE( 153)		r->pz = z;
HXLINE( 154)		r->lx = dx;
HXLINE( 155)		r->ly = dy;
HXLINE( 156)		r->lz = dz;
HXLINE( 157)		r->normalize();
HXLINE( 158)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Ray_obj,fromValues,return )


::hx::ObjectPtr< Ray_obj > Ray_obj::__new() {
	::hx::ObjectPtr< Ray_obj > __this = new Ray_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Ray_obj > Ray_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Ray_obj *__this = (Ray_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ray_obj), false, "h3d.col.Ray"));
	*(void **)__this = Ray_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Ray_obj::Ray_obj()
{
}

::hx::Val Ray_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { return ::hx::Val( px ); }
		if (HX_FIELD_EQ(inName,"py") ) { return ::hx::Val( py ); }
		if (HX_FIELD_EQ(inName,"pz") ) { return ::hx::Val( pz ); }
		if (HX_FIELD_EQ(inName,"lx") ) { return ::hx::Val( lx ); }
		if (HX_FIELD_EQ(inName,"ly") ) { return ::hx::Val( ly ); }
		if (HX_FIELD_EQ(inName,"lz") ) { return ::hx::Val( lz ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getPos") ) { return ::hx::Val( getPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDir") ) { return ::hx::Val( getDir_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return ::hx::Val( collide_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getPoint") ) { return ::hx::Val( getPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"intersect") ) { return ::hx::Val( intersect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collideFrustum") ) { return ::hx::Val( collideFrustum_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Ray_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromPoints") ) { outValue = fromPoints_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromValues") ) { outValue = fromValues_dyn(); return true; }
	}
	return false;
}

::hx::Val Ray_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { px=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"py") ) { py=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pz") ) { pz=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lx") ) { lx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ly") ) { ly=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lz") ) { lz=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("px",08,62,00,00));
	outFields->push(HX_("py",09,62,00,00));
	outFields->push(HX_("pz",0a,62,00,00));
	outFields->push(HX_("lx",8c,5e,00,00));
	outFields->push(HX_("ly",8d,5e,00,00));
	outFields->push(HX_("lz",8e,5e,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Ray_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Ray_obj,px),HX_("px",08,62,00,00)},
	{::hx::fsFloat,(int)offsetof(Ray_obj,py),HX_("py",09,62,00,00)},
	{::hx::fsFloat,(int)offsetof(Ray_obj,pz),HX_("pz",0a,62,00,00)},
	{::hx::fsFloat,(int)offsetof(Ray_obj,lx),HX_("lx",8c,5e,00,00)},
	{::hx::fsFloat,(int)offsetof(Ray_obj,ly),HX_("ly",8d,5e,00,00)},
	{::hx::fsFloat,(int)offsetof(Ray_obj,lz),HX_("lz",8e,5e,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Ray_obj_sStaticStorageInfo = 0;
#endif

static ::String Ray_obj_sMemberFields[] = {
	HX_("px",08,62,00,00),
	HX_("py",09,62,00,00),
	HX_("pz",0a,62,00,00),
	HX_("lx",8c,5e,00,00),
	HX_("ly",8d,5e,00,00),
	HX_("lz",8e,5e,00,00),
	HX_("clone",5d,13,63,48),
	HX_("load",26,9a,b7,47),
	HX_("normalize",8d,37,a1,ab),
	HX_("transform",6c,2d,93,45),
	HX_("getPos",9e,96,24,a3),
	HX_("getDir",57,76,1b,a3),
	HX_("getPoint",da,c3,66,26),
	HX_("toString",ac,d0,6e,38),
	HX_("intersect",df,00,75,42),
	HX_("collideFrustum",84,cb,9f,15),
	HX_("collide",7e,af,63,ed),
	::String(null()) };

::hx::Class Ray_obj::__mClass;

static ::String Ray_obj_sStaticFields[] = {
	HX_("fromPoints",2d,17,72,3a),
	HX_("fromValues",ec,08,fb,92),
	::String(null())
};

void Ray_obj::__register()
{
	Ray_obj _hx_dummy;
	Ray_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.Ray",67,f8,e5,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ray_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Ray_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Ray_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Ray_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ray_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
