#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_h3d_col_Frustum
#include <h3d/col/Frustum.h>
#endif
#ifndef INCLUDED_h3d_col_Plane
#include <h3d/col/Plane.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30f0493612d09d19_3_new,"h3d.col.Frustum","new",0x660ba8d1,"h3d.col.Frustum.new","h3d/col/Frustum.hx",3,0x02cb26c1)
HX_LOCAL_STACK_FRAME(_hx_pos_30f0493612d09d19_24_clone,"h3d.col.Frustum","clone",0x6e16aa0e,"h3d.col.Frustum.clone","h3d/col/Frustum.hx",24,0x02cb26c1)
HX_LOCAL_STACK_FRAME(_hx_pos_30f0493612d09d19_36_loadMatrix,"h3d.col.Frustum","loadMatrix",0x0faaecb6,"h3d.col.Frustum.loadMatrix","h3d/col/Frustum.hx",36,0x02cb26c1)
HX_LOCAL_STACK_FRAME(_hx_pos_30f0493612d09d19_51_transform,"h3d.col.Frustum","transform",0xc5b6709d,"h3d.col.Frustum.transform","h3d/col/Frustum.hx",51,0x02cb26c1)
HX_LOCAL_STACK_FRAME(_hx_pos_30f0493612d09d19_71_transform3x3,"h3d.col.Frustum","transform3x3",0x9fdd2b31,"h3d.col.Frustum.transform3x3","h3d/col/Frustum.hx",71,0x02cb26c1)
HX_LOCAL_STACK_FRAME(_hx_pos_30f0493612d09d19_91_hasPoint,"h3d.col.Frustum","hasPoint",0x1a14ec85,"h3d.col.Frustum.hasPoint","h3d/col/Frustum.hx",91,0x02cb26c1)
HX_LOCAL_STACK_FRAME(_hx_pos_30f0493612d09d19_103_hasSphere,"h3d.col.Frustum","hasSphere",0x7e02a538,"h3d.col.Frustum.hasSphere","h3d/col/Frustum.hx",103,0x02cb26c1)
HX_LOCAL_STACK_FRAME(_hx_pos_30f0493612d09d19_116_hasBounds,"h3d.col.Frustum","hasBounds",0x27297ca0,"h3d.col.Frustum.hasBounds","h3d/col/Frustum.hx",116,0x02cb26c1)
namespace h3d{
namespace col{

void Frustum_obj::__construct( ::h3d::Matrix mvp){
            	HX_GC_STACKFRAME(&_hx_pos_30f0493612d09d19_3_new)
HXLINE(  11)		this->checkNearFar = true;
HXLINE(  14)		this->pleft =  ::h3d::col::Plane_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),((Float)0.0));
HXLINE(  15)		this->pright =  ::h3d::col::Plane_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),((Float)0.0));
HXLINE(  16)		this->ptop =  ::h3d::col::Plane_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),((Float)0.0));
HXLINE(  17)		this->pbottom =  ::h3d::col::Plane_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),((Float)0.0));
HXLINE(  18)		this->pnear =  ::h3d::col::Plane_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),((Float)0.0));
HXLINE(  19)		this->pfar =  ::h3d::col::Plane_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),((Float)0.0));
HXLINE(  20)		if (::hx::IsNotNull( mvp )) {
HXLINE(  21)			this->loadMatrix(mvp);
            		}
            	}

Dynamic Frustum_obj::__CreateEmpty() { return new Frustum_obj; }

void *Frustum_obj::_hx_vtable = 0;

Dynamic Frustum_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Frustum_obj > _hx_result = new Frustum_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Frustum_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17397d3b;
}

 ::h3d::col::Frustum Frustum_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_30f0493612d09d19_24_clone)
HXLINE(  25)		 ::h3d::col::Frustum f =  ::h3d::col::Frustum_obj::__alloc( HX_CTX ,null());
HXLINE(  26)		{
HXLINE(  26)			 ::h3d::col::Plane _this = f->pleft;
HXDLIN(  26)			 ::h3d::col::Plane p = this->pleft;
HXDLIN(  26)			_this->nx = p->nx;
HXDLIN(  26)			_this->ny = p->ny;
HXDLIN(  26)			_this->nz = p->nz;
HXDLIN(  26)			_this->d = p->d;
            		}
HXLINE(  27)		{
HXLINE(  27)			 ::h3d::col::Plane _this1 = f->pright;
HXDLIN(  27)			 ::h3d::col::Plane p1 = this->pright;
HXDLIN(  27)			_this1->nx = p1->nx;
HXDLIN(  27)			_this1->ny = p1->ny;
HXDLIN(  27)			_this1->nz = p1->nz;
HXDLIN(  27)			_this1->d = p1->d;
            		}
HXLINE(  28)		{
HXLINE(  28)			 ::h3d::col::Plane _this2 = f->ptop;
HXDLIN(  28)			 ::h3d::col::Plane p2 = this->ptop;
HXDLIN(  28)			_this2->nx = p2->nx;
HXDLIN(  28)			_this2->ny = p2->ny;
HXDLIN(  28)			_this2->nz = p2->nz;
HXDLIN(  28)			_this2->d = p2->d;
            		}
HXLINE(  29)		{
HXLINE(  29)			 ::h3d::col::Plane _this3 = f->pbottom;
HXDLIN(  29)			 ::h3d::col::Plane p3 = this->pbottom;
HXDLIN(  29)			_this3->nx = p3->nx;
HXDLIN(  29)			_this3->ny = p3->ny;
HXDLIN(  29)			_this3->nz = p3->nz;
HXDLIN(  29)			_this3->d = p3->d;
            		}
HXLINE(  30)		{
HXLINE(  30)			 ::h3d::col::Plane _this4 = f->pnear;
HXDLIN(  30)			 ::h3d::col::Plane p4 = this->pnear;
HXDLIN(  30)			_this4->nx = p4->nx;
HXDLIN(  30)			_this4->ny = p4->ny;
HXDLIN(  30)			_this4->nz = p4->nz;
HXDLIN(  30)			_this4->d = p4->d;
            		}
HXLINE(  31)		{
HXLINE(  31)			 ::h3d::col::Plane _this5 = f->pfar;
HXDLIN(  31)			 ::h3d::col::Plane p5 = this->pfar;
HXDLIN(  31)			_this5->nx = p5->nx;
HXDLIN(  31)			_this5->ny = p5->ny;
HXDLIN(  31)			_this5->nz = p5->nz;
HXDLIN(  31)			_this5->d = p5->d;
            		}
HXLINE(  32)		f->checkNearFar = this->checkNearFar;
HXLINE(  33)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Frustum_obj,clone,return )

void Frustum_obj::loadMatrix( ::h3d::Matrix mvp){
            	HX_STACKFRAME(&_hx_pos_30f0493612d09d19_36_loadMatrix)
HXLINE(  37)		{
HXLINE(  37)			 ::h3d::col::Plane _this = this->pleft;
HXDLIN(  37)			Float p_nx = (mvp->_14 + mvp->_11);
HXDLIN(  37)			Float p_ny = (mvp->_24 + mvp->_21);
HXDLIN(  37)			Float p_nz = (mvp->_34 + mvp->_31);
HXDLIN(  37)			Float p_d = -((mvp->_44 + mvp->_41));
HXDLIN(  37)			_this->nx = p_nx;
HXDLIN(  37)			_this->ny = p_ny;
HXDLIN(  37)			_this->nz = p_nz;
HXDLIN(  37)			_this->d = p_d;
            		}
HXLINE(  38)		{
HXLINE(  38)			 ::h3d::col::Plane _this1 = this->pright;
HXDLIN(  38)			Float p_nx1 = (mvp->_14 - mvp->_11);
HXDLIN(  38)			Float p_ny1 = (mvp->_24 - mvp->_21);
HXDLIN(  38)			Float p_nz1 = (mvp->_34 - mvp->_31);
HXDLIN(  38)			Float p_d1 = (mvp->_41 - mvp->_44);
HXDLIN(  38)			_this1->nx = p_nx1;
HXDLIN(  38)			_this1->ny = p_ny1;
HXDLIN(  38)			_this1->nz = p_nz1;
HXDLIN(  38)			_this1->d = p_d1;
            		}
HXLINE(  39)		{
HXLINE(  39)			 ::h3d::col::Plane _this2 = this->ptop;
HXDLIN(  39)			Float p_nx2 = (mvp->_14 - mvp->_12);
HXDLIN(  39)			Float p_ny2 = (mvp->_24 - mvp->_22);
HXDLIN(  39)			Float p_nz2 = (mvp->_34 - mvp->_32);
HXDLIN(  39)			Float p_d2 = (mvp->_42 - mvp->_44);
HXDLIN(  39)			_this2->nx = p_nx2;
HXDLIN(  39)			_this2->ny = p_ny2;
HXDLIN(  39)			_this2->nz = p_nz2;
HXDLIN(  39)			_this2->d = p_d2;
            		}
HXLINE(  40)		{
HXLINE(  40)			 ::h3d::col::Plane _this3 = this->pbottom;
HXDLIN(  40)			Float p_nx3 = (mvp->_14 + mvp->_12);
HXDLIN(  40)			Float p_ny3 = (mvp->_24 + mvp->_22);
HXDLIN(  40)			Float p_nz3 = (mvp->_34 + mvp->_32);
HXDLIN(  40)			Float p_d3 = -((mvp->_44 + mvp->_42));
HXDLIN(  40)			_this3->nx = p_nx3;
HXDLIN(  40)			_this3->ny = p_ny3;
HXDLIN(  40)			_this3->nz = p_nz3;
HXDLIN(  40)			_this3->d = p_d3;
            		}
HXLINE(  41)		{
HXLINE(  41)			 ::h3d::col::Plane _this4 = this->pnear;
HXDLIN(  41)			Float p_nx4 = mvp->_13;
HXDLIN(  41)			Float p_ny4 = mvp->_23;
HXDLIN(  41)			Float p_nz4 = mvp->_33;
HXDLIN(  41)			Float p_d4 = -(mvp->_43);
HXDLIN(  41)			_this4->nx = p_nx4;
HXDLIN(  41)			_this4->ny = p_ny4;
HXDLIN(  41)			_this4->nz = p_nz4;
HXDLIN(  41)			_this4->d = p_d4;
            		}
HXLINE(  42)		{
HXLINE(  42)			 ::h3d::col::Plane _this5 = this->pfar;
HXDLIN(  42)			Float p_nx5 = (mvp->_14 - mvp->_13);
HXDLIN(  42)			Float p_ny5 = (mvp->_24 - mvp->_23);
HXDLIN(  42)			Float p_nz5 = (mvp->_34 - mvp->_33);
HXDLIN(  42)			Float p_d5 = (mvp->_43 - mvp->_44);
HXDLIN(  42)			_this5->nx = p_nx5;
HXDLIN(  42)			_this5->ny = p_ny5;
HXDLIN(  42)			_this5->nz = p_nz5;
HXDLIN(  42)			_this5->d = p_d5;
            		}
HXLINE(  43)		{
HXLINE(  43)			 ::h3d::col::Plane _this6 = this->pleft;
HXDLIN(  43)			Float len = (((Float)1.) / ::Math_obj::sqrt((((_this6->nx * _this6->nx) + (_this6->ny * _this6->ny)) + (_this6->nz * _this6->nz))));
HXDLIN(  43)			 ::h3d::col::Plane _this7 = _this6;
HXDLIN(  43)			_this7->nx = (_this7->nx * len);
HXDLIN(  43)			 ::h3d::col::Plane _this8 = _this6;
HXDLIN(  43)			_this8->ny = (_this8->ny * len);
HXDLIN(  43)			 ::h3d::col::Plane _this9 = _this6;
HXDLIN(  43)			_this9->nz = (_this9->nz * len);
HXDLIN(  43)			 ::h3d::col::Plane _this10 = _this6;
HXDLIN(  43)			_this10->d = (_this10->d * len);
            		}
HXLINE(  44)		{
HXLINE(  44)			 ::h3d::col::Plane _this11 = this->pright;
HXDLIN(  44)			Float len1 = (((Float)1.) / ::Math_obj::sqrt((((_this11->nx * _this11->nx) + (_this11->ny * _this11->ny)) + (_this11->nz * _this11->nz))));
HXDLIN(  44)			 ::h3d::col::Plane _this12 = _this11;
HXDLIN(  44)			_this12->nx = (_this12->nx * len1);
HXDLIN(  44)			 ::h3d::col::Plane _this13 = _this11;
HXDLIN(  44)			_this13->ny = (_this13->ny * len1);
HXDLIN(  44)			 ::h3d::col::Plane _this14 = _this11;
HXDLIN(  44)			_this14->nz = (_this14->nz * len1);
HXDLIN(  44)			 ::h3d::col::Plane _this15 = _this11;
HXDLIN(  44)			_this15->d = (_this15->d * len1);
            		}
HXLINE(  45)		{
HXLINE(  45)			 ::h3d::col::Plane _this16 = this->ptop;
HXDLIN(  45)			Float len2 = (((Float)1.) / ::Math_obj::sqrt((((_this16->nx * _this16->nx) + (_this16->ny * _this16->ny)) + (_this16->nz * _this16->nz))));
HXDLIN(  45)			 ::h3d::col::Plane _this17 = _this16;
HXDLIN(  45)			_this17->nx = (_this17->nx * len2);
HXDLIN(  45)			 ::h3d::col::Plane _this18 = _this16;
HXDLIN(  45)			_this18->ny = (_this18->ny * len2);
HXDLIN(  45)			 ::h3d::col::Plane _this19 = _this16;
HXDLIN(  45)			_this19->nz = (_this19->nz * len2);
HXDLIN(  45)			 ::h3d::col::Plane _this20 = _this16;
HXDLIN(  45)			_this20->d = (_this20->d * len2);
            		}
HXLINE(  46)		{
HXLINE(  46)			 ::h3d::col::Plane _this21 = this->pbottom;
HXDLIN(  46)			Float len3 = (((Float)1.) / ::Math_obj::sqrt((((_this21->nx * _this21->nx) + (_this21->ny * _this21->ny)) + (_this21->nz * _this21->nz))));
HXDLIN(  46)			 ::h3d::col::Plane _this22 = _this21;
HXDLIN(  46)			_this22->nx = (_this22->nx * len3);
HXDLIN(  46)			 ::h3d::col::Plane _this23 = _this21;
HXDLIN(  46)			_this23->ny = (_this23->ny * len3);
HXDLIN(  46)			 ::h3d::col::Plane _this24 = _this21;
HXDLIN(  46)			_this24->nz = (_this24->nz * len3);
HXDLIN(  46)			 ::h3d::col::Plane _this25 = _this21;
HXDLIN(  46)			_this25->d = (_this25->d * len3);
            		}
HXLINE(  47)		{
HXLINE(  47)			 ::h3d::col::Plane _this26 = this->pnear;
HXDLIN(  47)			Float len4 = (((Float)1.) / ::Math_obj::sqrt((((_this26->nx * _this26->nx) + (_this26->ny * _this26->ny)) + (_this26->nz * _this26->nz))));
HXDLIN(  47)			 ::h3d::col::Plane _this27 = _this26;
HXDLIN(  47)			_this27->nx = (_this27->nx * len4);
HXDLIN(  47)			 ::h3d::col::Plane _this28 = _this26;
HXDLIN(  47)			_this28->ny = (_this28->ny * len4);
HXDLIN(  47)			 ::h3d::col::Plane _this29 = _this26;
HXDLIN(  47)			_this29->nz = (_this29->nz * len4);
HXDLIN(  47)			 ::h3d::col::Plane _this30 = _this26;
HXDLIN(  47)			_this30->d = (_this30->d * len4);
            		}
HXLINE(  48)		{
HXLINE(  48)			 ::h3d::col::Plane _this31 = this->pfar;
HXDLIN(  48)			Float len5 = (((Float)1.) / ::Math_obj::sqrt((((_this31->nx * _this31->nx) + (_this31->ny * _this31->ny)) + (_this31->nz * _this31->nz))));
HXDLIN(  48)			 ::h3d::col::Plane _this32 = _this31;
HXDLIN(  48)			_this32->nx = (_this32->nx * len5);
HXDLIN(  48)			 ::h3d::col::Plane _this33 = _this31;
HXDLIN(  48)			_this33->ny = (_this33->ny * len5);
HXDLIN(  48)			 ::h3d::col::Plane _this34 = _this31;
HXDLIN(  48)			_this34->nz = (_this34->nz * len5);
HXDLIN(  48)			 ::h3d::col::Plane _this35 = _this31;
HXDLIN(  48)			_this35->d = (_this35->d * len5);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,loadMatrix,(void))

void Frustum_obj::transform( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_30f0493612d09d19_51_transform)
HXLINE(  52)		 ::h3d::Matrix m2 =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  53)		m2->initInverse(m);
HXLINE(  54)		m2->transpose();
HXLINE(  56)		{
HXLINE(  56)			 ::h3d::col::Plane _this = this->pleft;
HXDLIN(  56)			Float v_x = _this->nx;
HXDLIN(  56)			Float v_y = _this->ny;
HXDLIN(  56)			Float v_z = _this->nz;
HXDLIN(  56)			Float v_w = -(_this->d);
HXDLIN(  56)			{
HXLINE(  56)				Float px = ((((v_x * m2->_11) + (v_y * m2->_21)) + (v_z * m2->_31)) + (v_w * m2->_41));
HXDLIN(  56)				Float py = ((((v_x * m2->_12) + (v_y * m2->_22)) + (v_z * m2->_32)) + (v_w * m2->_42));
HXDLIN(  56)				Float pz = ((((v_x * m2->_13) + (v_y * m2->_23)) + (v_z * m2->_33)) + (v_w * m2->_43));
HXDLIN(  56)				Float pw = ((((v_x * m2->_14) + (v_y * m2->_24)) + (v_z * m2->_34)) + (v_w * m2->_44));
HXDLIN(  56)				v_x = px;
HXDLIN(  56)				v_y = py;
HXDLIN(  56)				v_z = pz;
HXDLIN(  56)				v_w = pw;
            			}
HXDLIN(  56)			_this->nx = v_x;
HXDLIN(  56)			_this->ny = v_y;
HXDLIN(  56)			_this->nz = v_z;
HXDLIN(  56)			_this->d = -(v_w);
            		}
HXLINE(  57)		{
HXLINE(  57)			 ::h3d::col::Plane _this1 = this->pright;
HXDLIN(  57)			Float v_x1 = _this1->nx;
HXDLIN(  57)			Float v_y1 = _this1->ny;
HXDLIN(  57)			Float v_z1 = _this1->nz;
HXDLIN(  57)			Float v_w1 = -(_this1->d);
HXDLIN(  57)			{
HXLINE(  57)				Float px1 = ((((v_x1 * m2->_11) + (v_y1 * m2->_21)) + (v_z1 * m2->_31)) + (v_w1 * m2->_41));
HXDLIN(  57)				Float py1 = ((((v_x1 * m2->_12) + (v_y1 * m2->_22)) + (v_z1 * m2->_32)) + (v_w1 * m2->_42));
HXDLIN(  57)				Float pz1 = ((((v_x1 * m2->_13) + (v_y1 * m2->_23)) + (v_z1 * m2->_33)) + (v_w1 * m2->_43));
HXDLIN(  57)				Float pw1 = ((((v_x1 * m2->_14) + (v_y1 * m2->_24)) + (v_z1 * m2->_34)) + (v_w1 * m2->_44));
HXDLIN(  57)				v_x1 = px1;
HXDLIN(  57)				v_y1 = py1;
HXDLIN(  57)				v_z1 = pz1;
HXDLIN(  57)				v_w1 = pw1;
            			}
HXDLIN(  57)			_this1->nx = v_x1;
HXDLIN(  57)			_this1->ny = v_y1;
HXDLIN(  57)			_this1->nz = v_z1;
HXDLIN(  57)			_this1->d = -(v_w1);
            		}
HXLINE(  58)		{
HXLINE(  58)			 ::h3d::col::Plane _this2 = this->ptop;
HXDLIN(  58)			Float v_x2 = _this2->nx;
HXDLIN(  58)			Float v_y2 = _this2->ny;
HXDLIN(  58)			Float v_z2 = _this2->nz;
HXDLIN(  58)			Float v_w2 = -(_this2->d);
HXDLIN(  58)			{
HXLINE(  58)				Float px2 = ((((v_x2 * m2->_11) + (v_y2 * m2->_21)) + (v_z2 * m2->_31)) + (v_w2 * m2->_41));
HXDLIN(  58)				Float py2 = ((((v_x2 * m2->_12) + (v_y2 * m2->_22)) + (v_z2 * m2->_32)) + (v_w2 * m2->_42));
HXDLIN(  58)				Float pz2 = ((((v_x2 * m2->_13) + (v_y2 * m2->_23)) + (v_z2 * m2->_33)) + (v_w2 * m2->_43));
HXDLIN(  58)				Float pw2 = ((((v_x2 * m2->_14) + (v_y2 * m2->_24)) + (v_z2 * m2->_34)) + (v_w2 * m2->_44));
HXDLIN(  58)				v_x2 = px2;
HXDLIN(  58)				v_y2 = py2;
HXDLIN(  58)				v_z2 = pz2;
HXDLIN(  58)				v_w2 = pw2;
            			}
HXDLIN(  58)			_this2->nx = v_x2;
HXDLIN(  58)			_this2->ny = v_y2;
HXDLIN(  58)			_this2->nz = v_z2;
HXDLIN(  58)			_this2->d = -(v_w2);
            		}
HXLINE(  59)		{
HXLINE(  59)			 ::h3d::col::Plane _this3 = this->pbottom;
HXDLIN(  59)			Float v_x3 = _this3->nx;
HXDLIN(  59)			Float v_y3 = _this3->ny;
HXDLIN(  59)			Float v_z3 = _this3->nz;
HXDLIN(  59)			Float v_w3 = -(_this3->d);
HXDLIN(  59)			{
HXLINE(  59)				Float px3 = ((((v_x3 * m2->_11) + (v_y3 * m2->_21)) + (v_z3 * m2->_31)) + (v_w3 * m2->_41));
HXDLIN(  59)				Float py3 = ((((v_x3 * m2->_12) + (v_y3 * m2->_22)) + (v_z3 * m2->_32)) + (v_w3 * m2->_42));
HXDLIN(  59)				Float pz3 = ((((v_x3 * m2->_13) + (v_y3 * m2->_23)) + (v_z3 * m2->_33)) + (v_w3 * m2->_43));
HXDLIN(  59)				Float pw3 = ((((v_x3 * m2->_14) + (v_y3 * m2->_24)) + (v_z3 * m2->_34)) + (v_w3 * m2->_44));
HXDLIN(  59)				v_x3 = px3;
HXDLIN(  59)				v_y3 = py3;
HXDLIN(  59)				v_z3 = pz3;
HXDLIN(  59)				v_w3 = pw3;
            			}
HXDLIN(  59)			_this3->nx = v_x3;
HXDLIN(  59)			_this3->ny = v_y3;
HXDLIN(  59)			_this3->nz = v_z3;
HXDLIN(  59)			_this3->d = -(v_w3);
            		}
HXLINE(  60)		{
HXLINE(  60)			 ::h3d::col::Plane _this4 = this->pfar;
HXDLIN(  60)			Float v_x4 = _this4->nx;
HXDLIN(  60)			Float v_y4 = _this4->ny;
HXDLIN(  60)			Float v_z4 = _this4->nz;
HXDLIN(  60)			Float v_w4 = -(_this4->d);
HXDLIN(  60)			{
HXLINE(  60)				Float px4 = ((((v_x4 * m2->_11) + (v_y4 * m2->_21)) + (v_z4 * m2->_31)) + (v_w4 * m2->_41));
HXDLIN(  60)				Float py4 = ((((v_x4 * m2->_12) + (v_y4 * m2->_22)) + (v_z4 * m2->_32)) + (v_w4 * m2->_42));
HXDLIN(  60)				Float pz4 = ((((v_x4 * m2->_13) + (v_y4 * m2->_23)) + (v_z4 * m2->_33)) + (v_w4 * m2->_43));
HXDLIN(  60)				Float pw4 = ((((v_x4 * m2->_14) + (v_y4 * m2->_24)) + (v_z4 * m2->_34)) + (v_w4 * m2->_44));
HXDLIN(  60)				v_x4 = px4;
HXDLIN(  60)				v_y4 = py4;
HXDLIN(  60)				v_z4 = pz4;
HXDLIN(  60)				v_w4 = pw4;
            			}
HXDLIN(  60)			_this4->nx = v_x4;
HXDLIN(  60)			_this4->ny = v_y4;
HXDLIN(  60)			_this4->nz = v_z4;
HXDLIN(  60)			_this4->d = -(v_w4);
            		}
HXLINE(  61)		{
HXLINE(  61)			 ::h3d::col::Plane _this5 = this->pnear;
HXDLIN(  61)			Float v_x5 = _this5->nx;
HXDLIN(  61)			Float v_y5 = _this5->ny;
HXDLIN(  61)			Float v_z5 = _this5->nz;
HXDLIN(  61)			Float v_w5 = -(_this5->d);
HXDLIN(  61)			{
HXLINE(  61)				Float px5 = ((((v_x5 * m2->_11) + (v_y5 * m2->_21)) + (v_z5 * m2->_31)) + (v_w5 * m2->_41));
HXDLIN(  61)				Float py5 = ((((v_x5 * m2->_12) + (v_y5 * m2->_22)) + (v_z5 * m2->_32)) + (v_w5 * m2->_42));
HXDLIN(  61)				Float pz5 = ((((v_x5 * m2->_13) + (v_y5 * m2->_23)) + (v_z5 * m2->_33)) + (v_w5 * m2->_43));
HXDLIN(  61)				Float pw5 = ((((v_x5 * m2->_14) + (v_y5 * m2->_24)) + (v_z5 * m2->_34)) + (v_w5 * m2->_44));
HXDLIN(  61)				v_x5 = px5;
HXDLIN(  61)				v_y5 = py5;
HXDLIN(  61)				v_z5 = pz5;
HXDLIN(  61)				v_w5 = pw5;
            			}
HXDLIN(  61)			_this5->nx = v_x5;
HXDLIN(  61)			_this5->ny = v_y5;
HXDLIN(  61)			_this5->nz = v_z5;
HXDLIN(  61)			_this5->d = -(v_w5);
            		}
HXLINE(  63)		{
HXLINE(  63)			 ::h3d::col::Plane _this6 = this->pleft;
HXDLIN(  63)			Float len = (((Float)1.) / ::Math_obj::sqrt((((_this6->nx * _this6->nx) + (_this6->ny * _this6->ny)) + (_this6->nz * _this6->nz))));
HXDLIN(  63)			 ::h3d::col::Plane _this7 = _this6;
HXDLIN(  63)			_this7->nx = (_this7->nx * len);
HXDLIN(  63)			 ::h3d::col::Plane _this8 = _this6;
HXDLIN(  63)			_this8->ny = (_this8->ny * len);
HXDLIN(  63)			 ::h3d::col::Plane _this9 = _this6;
HXDLIN(  63)			_this9->nz = (_this9->nz * len);
HXDLIN(  63)			 ::h3d::col::Plane _this10 = _this6;
HXDLIN(  63)			_this10->d = (_this10->d * len);
            		}
HXLINE(  64)		{
HXLINE(  64)			 ::h3d::col::Plane _this11 = this->pright;
HXDLIN(  64)			Float len1 = (((Float)1.) / ::Math_obj::sqrt((((_this11->nx * _this11->nx) + (_this11->ny * _this11->ny)) + (_this11->nz * _this11->nz))));
HXDLIN(  64)			 ::h3d::col::Plane _this12 = _this11;
HXDLIN(  64)			_this12->nx = (_this12->nx * len1);
HXDLIN(  64)			 ::h3d::col::Plane _this13 = _this11;
HXDLIN(  64)			_this13->ny = (_this13->ny * len1);
HXDLIN(  64)			 ::h3d::col::Plane _this14 = _this11;
HXDLIN(  64)			_this14->nz = (_this14->nz * len1);
HXDLIN(  64)			 ::h3d::col::Plane _this15 = _this11;
HXDLIN(  64)			_this15->d = (_this15->d * len1);
            		}
HXLINE(  65)		{
HXLINE(  65)			 ::h3d::col::Plane _this16 = this->ptop;
HXDLIN(  65)			Float len2 = (((Float)1.) / ::Math_obj::sqrt((((_this16->nx * _this16->nx) + (_this16->ny * _this16->ny)) + (_this16->nz * _this16->nz))));
HXDLIN(  65)			 ::h3d::col::Plane _this17 = _this16;
HXDLIN(  65)			_this17->nx = (_this17->nx * len2);
HXDLIN(  65)			 ::h3d::col::Plane _this18 = _this16;
HXDLIN(  65)			_this18->ny = (_this18->ny * len2);
HXDLIN(  65)			 ::h3d::col::Plane _this19 = _this16;
HXDLIN(  65)			_this19->nz = (_this19->nz * len2);
HXDLIN(  65)			 ::h3d::col::Plane _this20 = _this16;
HXDLIN(  65)			_this20->d = (_this20->d * len2);
            		}
HXLINE(  66)		{
HXLINE(  66)			 ::h3d::col::Plane _this21 = this->pbottom;
HXDLIN(  66)			Float len3 = (((Float)1.) / ::Math_obj::sqrt((((_this21->nx * _this21->nx) + (_this21->ny * _this21->ny)) + (_this21->nz * _this21->nz))));
HXDLIN(  66)			 ::h3d::col::Plane _this22 = _this21;
HXDLIN(  66)			_this22->nx = (_this22->nx * len3);
HXDLIN(  66)			 ::h3d::col::Plane _this23 = _this21;
HXDLIN(  66)			_this23->ny = (_this23->ny * len3);
HXDLIN(  66)			 ::h3d::col::Plane _this24 = _this21;
HXDLIN(  66)			_this24->nz = (_this24->nz * len3);
HXDLIN(  66)			 ::h3d::col::Plane _this25 = _this21;
HXDLIN(  66)			_this25->d = (_this25->d * len3);
            		}
HXLINE(  67)		{
HXLINE(  67)			 ::h3d::col::Plane _this26 = this->pnear;
HXDLIN(  67)			Float len4 = (((Float)1.) / ::Math_obj::sqrt((((_this26->nx * _this26->nx) + (_this26->ny * _this26->ny)) + (_this26->nz * _this26->nz))));
HXDLIN(  67)			 ::h3d::col::Plane _this27 = _this26;
HXDLIN(  67)			_this27->nx = (_this27->nx * len4);
HXDLIN(  67)			 ::h3d::col::Plane _this28 = _this26;
HXDLIN(  67)			_this28->ny = (_this28->ny * len4);
HXDLIN(  67)			 ::h3d::col::Plane _this29 = _this26;
HXDLIN(  67)			_this29->nz = (_this29->nz * len4);
HXDLIN(  67)			 ::h3d::col::Plane _this30 = _this26;
HXDLIN(  67)			_this30->d = (_this30->d * len4);
            		}
HXLINE(  68)		{
HXLINE(  68)			 ::h3d::col::Plane _this31 = this->pfar;
HXDLIN(  68)			Float len5 = (((Float)1.) / ::Math_obj::sqrt((((_this31->nx * _this31->nx) + (_this31->ny * _this31->ny)) + (_this31->nz * _this31->nz))));
HXDLIN(  68)			 ::h3d::col::Plane _this32 = _this31;
HXDLIN(  68)			_this32->nx = (_this32->nx * len5);
HXDLIN(  68)			 ::h3d::col::Plane _this33 = _this31;
HXDLIN(  68)			_this33->ny = (_this33->ny * len5);
HXDLIN(  68)			 ::h3d::col::Plane _this34 = _this31;
HXDLIN(  68)			_this34->nz = (_this34->nz * len5);
HXDLIN(  68)			 ::h3d::col::Plane _this35 = _this31;
HXDLIN(  68)			_this35->d = (_this35->d * len5);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,transform,(void))

void Frustum_obj::transform3x3( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_30f0493612d09d19_71_transform3x3)
HXLINE(  72)		 ::h3d::Matrix m2 =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  73)		m2->initInverse3x3(m);
HXLINE(  74)		m2->transpose();
HXLINE(  76)		{
HXLINE(  76)			 ::h3d::col::Plane _this = this->pleft;
HXDLIN(  76)			Float v_x = _this->nx;
HXDLIN(  76)			Float v_y = _this->ny;
HXDLIN(  76)			Float v_z = _this->nz;
HXDLIN(  76)			Float v_w = -(_this->d);
HXDLIN(  76)			{
HXLINE(  76)				Float px = ((((v_x * m2->_11) + (v_y * m2->_21)) + (v_z * m2->_31)) + (v_w * m2->_41));
HXDLIN(  76)				Float py = ((((v_x * m2->_12) + (v_y * m2->_22)) + (v_z * m2->_32)) + (v_w * m2->_42));
HXDLIN(  76)				Float pz = ((((v_x * m2->_13) + (v_y * m2->_23)) + (v_z * m2->_33)) + (v_w * m2->_43));
HXDLIN(  76)				Float pw = ((((v_x * m2->_14) + (v_y * m2->_24)) + (v_z * m2->_34)) + (v_w * m2->_44));
HXDLIN(  76)				v_x = px;
HXDLIN(  76)				v_y = py;
HXDLIN(  76)				v_z = pz;
HXDLIN(  76)				v_w = pw;
            			}
HXDLIN(  76)			_this->nx = v_x;
HXDLIN(  76)			_this->ny = v_y;
HXDLIN(  76)			_this->nz = v_z;
HXDLIN(  76)			_this->d = -(v_w);
            		}
HXLINE(  77)		{
HXLINE(  77)			 ::h3d::col::Plane _this1 = this->pright;
HXDLIN(  77)			Float v_x1 = _this1->nx;
HXDLIN(  77)			Float v_y1 = _this1->ny;
HXDLIN(  77)			Float v_z1 = _this1->nz;
HXDLIN(  77)			Float v_w1 = -(_this1->d);
HXDLIN(  77)			{
HXLINE(  77)				Float px1 = ((((v_x1 * m2->_11) + (v_y1 * m2->_21)) + (v_z1 * m2->_31)) + (v_w1 * m2->_41));
HXDLIN(  77)				Float py1 = ((((v_x1 * m2->_12) + (v_y1 * m2->_22)) + (v_z1 * m2->_32)) + (v_w1 * m2->_42));
HXDLIN(  77)				Float pz1 = ((((v_x1 * m2->_13) + (v_y1 * m2->_23)) + (v_z1 * m2->_33)) + (v_w1 * m2->_43));
HXDLIN(  77)				Float pw1 = ((((v_x1 * m2->_14) + (v_y1 * m2->_24)) + (v_z1 * m2->_34)) + (v_w1 * m2->_44));
HXDLIN(  77)				v_x1 = px1;
HXDLIN(  77)				v_y1 = py1;
HXDLIN(  77)				v_z1 = pz1;
HXDLIN(  77)				v_w1 = pw1;
            			}
HXDLIN(  77)			_this1->nx = v_x1;
HXDLIN(  77)			_this1->ny = v_y1;
HXDLIN(  77)			_this1->nz = v_z1;
HXDLIN(  77)			_this1->d = -(v_w1);
            		}
HXLINE(  78)		{
HXLINE(  78)			 ::h3d::col::Plane _this2 = this->ptop;
HXDLIN(  78)			Float v_x2 = _this2->nx;
HXDLIN(  78)			Float v_y2 = _this2->ny;
HXDLIN(  78)			Float v_z2 = _this2->nz;
HXDLIN(  78)			Float v_w2 = -(_this2->d);
HXDLIN(  78)			{
HXLINE(  78)				Float px2 = ((((v_x2 * m2->_11) + (v_y2 * m2->_21)) + (v_z2 * m2->_31)) + (v_w2 * m2->_41));
HXDLIN(  78)				Float py2 = ((((v_x2 * m2->_12) + (v_y2 * m2->_22)) + (v_z2 * m2->_32)) + (v_w2 * m2->_42));
HXDLIN(  78)				Float pz2 = ((((v_x2 * m2->_13) + (v_y2 * m2->_23)) + (v_z2 * m2->_33)) + (v_w2 * m2->_43));
HXDLIN(  78)				Float pw2 = ((((v_x2 * m2->_14) + (v_y2 * m2->_24)) + (v_z2 * m2->_34)) + (v_w2 * m2->_44));
HXDLIN(  78)				v_x2 = px2;
HXDLIN(  78)				v_y2 = py2;
HXDLIN(  78)				v_z2 = pz2;
HXDLIN(  78)				v_w2 = pw2;
            			}
HXDLIN(  78)			_this2->nx = v_x2;
HXDLIN(  78)			_this2->ny = v_y2;
HXDLIN(  78)			_this2->nz = v_z2;
HXDLIN(  78)			_this2->d = -(v_w2);
            		}
HXLINE(  79)		{
HXLINE(  79)			 ::h3d::col::Plane _this3 = this->pbottom;
HXDLIN(  79)			Float v_x3 = _this3->nx;
HXDLIN(  79)			Float v_y3 = _this3->ny;
HXDLIN(  79)			Float v_z3 = _this3->nz;
HXDLIN(  79)			Float v_w3 = -(_this3->d);
HXDLIN(  79)			{
HXLINE(  79)				Float px3 = ((((v_x3 * m2->_11) + (v_y3 * m2->_21)) + (v_z3 * m2->_31)) + (v_w3 * m2->_41));
HXDLIN(  79)				Float py3 = ((((v_x3 * m2->_12) + (v_y3 * m2->_22)) + (v_z3 * m2->_32)) + (v_w3 * m2->_42));
HXDLIN(  79)				Float pz3 = ((((v_x3 * m2->_13) + (v_y3 * m2->_23)) + (v_z3 * m2->_33)) + (v_w3 * m2->_43));
HXDLIN(  79)				Float pw3 = ((((v_x3 * m2->_14) + (v_y3 * m2->_24)) + (v_z3 * m2->_34)) + (v_w3 * m2->_44));
HXDLIN(  79)				v_x3 = px3;
HXDLIN(  79)				v_y3 = py3;
HXDLIN(  79)				v_z3 = pz3;
HXDLIN(  79)				v_w3 = pw3;
            			}
HXDLIN(  79)			_this3->nx = v_x3;
HXDLIN(  79)			_this3->ny = v_y3;
HXDLIN(  79)			_this3->nz = v_z3;
HXDLIN(  79)			_this3->d = -(v_w3);
            		}
HXLINE(  80)		{
HXLINE(  80)			 ::h3d::col::Plane _this4 = this->pfar;
HXDLIN(  80)			Float v_x4 = _this4->nx;
HXDLIN(  80)			Float v_y4 = _this4->ny;
HXDLIN(  80)			Float v_z4 = _this4->nz;
HXDLIN(  80)			Float v_w4 = -(_this4->d);
HXDLIN(  80)			{
HXLINE(  80)				Float px4 = ((((v_x4 * m2->_11) + (v_y4 * m2->_21)) + (v_z4 * m2->_31)) + (v_w4 * m2->_41));
HXDLIN(  80)				Float py4 = ((((v_x4 * m2->_12) + (v_y4 * m2->_22)) + (v_z4 * m2->_32)) + (v_w4 * m2->_42));
HXDLIN(  80)				Float pz4 = ((((v_x4 * m2->_13) + (v_y4 * m2->_23)) + (v_z4 * m2->_33)) + (v_w4 * m2->_43));
HXDLIN(  80)				Float pw4 = ((((v_x4 * m2->_14) + (v_y4 * m2->_24)) + (v_z4 * m2->_34)) + (v_w4 * m2->_44));
HXDLIN(  80)				v_x4 = px4;
HXDLIN(  80)				v_y4 = py4;
HXDLIN(  80)				v_z4 = pz4;
HXDLIN(  80)				v_w4 = pw4;
            			}
HXDLIN(  80)			_this4->nx = v_x4;
HXDLIN(  80)			_this4->ny = v_y4;
HXDLIN(  80)			_this4->nz = v_z4;
HXDLIN(  80)			_this4->d = -(v_w4);
            		}
HXLINE(  81)		{
HXLINE(  81)			 ::h3d::col::Plane _this5 = this->pnear;
HXDLIN(  81)			Float v_x5 = _this5->nx;
HXDLIN(  81)			Float v_y5 = _this5->ny;
HXDLIN(  81)			Float v_z5 = _this5->nz;
HXDLIN(  81)			Float v_w5 = -(_this5->d);
HXDLIN(  81)			{
HXLINE(  81)				Float px5 = ((((v_x5 * m2->_11) + (v_y5 * m2->_21)) + (v_z5 * m2->_31)) + (v_w5 * m2->_41));
HXDLIN(  81)				Float py5 = ((((v_x5 * m2->_12) + (v_y5 * m2->_22)) + (v_z5 * m2->_32)) + (v_w5 * m2->_42));
HXDLIN(  81)				Float pz5 = ((((v_x5 * m2->_13) + (v_y5 * m2->_23)) + (v_z5 * m2->_33)) + (v_w5 * m2->_43));
HXDLIN(  81)				Float pw5 = ((((v_x5 * m2->_14) + (v_y5 * m2->_24)) + (v_z5 * m2->_34)) + (v_w5 * m2->_44));
HXDLIN(  81)				v_x5 = px5;
HXDLIN(  81)				v_y5 = py5;
HXDLIN(  81)				v_z5 = pz5;
HXDLIN(  81)				v_w5 = pw5;
            			}
HXDLIN(  81)			_this5->nx = v_x5;
HXDLIN(  81)			_this5->ny = v_y5;
HXDLIN(  81)			_this5->nz = v_z5;
HXDLIN(  81)			_this5->d = -(v_w5);
            		}
HXLINE(  83)		{
HXLINE(  83)			 ::h3d::col::Plane _this6 = this->pleft;
HXDLIN(  83)			Float len = (((Float)1.) / ::Math_obj::sqrt((((_this6->nx * _this6->nx) + (_this6->ny * _this6->ny)) + (_this6->nz * _this6->nz))));
HXDLIN(  83)			 ::h3d::col::Plane _this7 = _this6;
HXDLIN(  83)			_this7->nx = (_this7->nx * len);
HXDLIN(  83)			 ::h3d::col::Plane _this8 = _this6;
HXDLIN(  83)			_this8->ny = (_this8->ny * len);
HXDLIN(  83)			 ::h3d::col::Plane _this9 = _this6;
HXDLIN(  83)			_this9->nz = (_this9->nz * len);
HXDLIN(  83)			 ::h3d::col::Plane _this10 = _this6;
HXDLIN(  83)			_this10->d = (_this10->d * len);
            		}
HXLINE(  84)		{
HXLINE(  84)			 ::h3d::col::Plane _this11 = this->pright;
HXDLIN(  84)			Float len1 = (((Float)1.) / ::Math_obj::sqrt((((_this11->nx * _this11->nx) + (_this11->ny * _this11->ny)) + (_this11->nz * _this11->nz))));
HXDLIN(  84)			 ::h3d::col::Plane _this12 = _this11;
HXDLIN(  84)			_this12->nx = (_this12->nx * len1);
HXDLIN(  84)			 ::h3d::col::Plane _this13 = _this11;
HXDLIN(  84)			_this13->ny = (_this13->ny * len1);
HXDLIN(  84)			 ::h3d::col::Plane _this14 = _this11;
HXDLIN(  84)			_this14->nz = (_this14->nz * len1);
HXDLIN(  84)			 ::h3d::col::Plane _this15 = _this11;
HXDLIN(  84)			_this15->d = (_this15->d * len1);
            		}
HXLINE(  85)		{
HXLINE(  85)			 ::h3d::col::Plane _this16 = this->ptop;
HXDLIN(  85)			Float len2 = (((Float)1.) / ::Math_obj::sqrt((((_this16->nx * _this16->nx) + (_this16->ny * _this16->ny)) + (_this16->nz * _this16->nz))));
HXDLIN(  85)			 ::h3d::col::Plane _this17 = _this16;
HXDLIN(  85)			_this17->nx = (_this17->nx * len2);
HXDLIN(  85)			 ::h3d::col::Plane _this18 = _this16;
HXDLIN(  85)			_this18->ny = (_this18->ny * len2);
HXDLIN(  85)			 ::h3d::col::Plane _this19 = _this16;
HXDLIN(  85)			_this19->nz = (_this19->nz * len2);
HXDLIN(  85)			 ::h3d::col::Plane _this20 = _this16;
HXDLIN(  85)			_this20->d = (_this20->d * len2);
            		}
HXLINE(  86)		{
HXLINE(  86)			 ::h3d::col::Plane _this21 = this->pbottom;
HXDLIN(  86)			Float len3 = (((Float)1.) / ::Math_obj::sqrt((((_this21->nx * _this21->nx) + (_this21->ny * _this21->ny)) + (_this21->nz * _this21->nz))));
HXDLIN(  86)			 ::h3d::col::Plane _this22 = _this21;
HXDLIN(  86)			_this22->nx = (_this22->nx * len3);
HXDLIN(  86)			 ::h3d::col::Plane _this23 = _this21;
HXDLIN(  86)			_this23->ny = (_this23->ny * len3);
HXDLIN(  86)			 ::h3d::col::Plane _this24 = _this21;
HXDLIN(  86)			_this24->nz = (_this24->nz * len3);
HXDLIN(  86)			 ::h3d::col::Plane _this25 = _this21;
HXDLIN(  86)			_this25->d = (_this25->d * len3);
            		}
HXLINE(  87)		{
HXLINE(  87)			 ::h3d::col::Plane _this26 = this->pnear;
HXDLIN(  87)			Float len4 = (((Float)1.) / ::Math_obj::sqrt((((_this26->nx * _this26->nx) + (_this26->ny * _this26->ny)) + (_this26->nz * _this26->nz))));
HXDLIN(  87)			 ::h3d::col::Plane _this27 = _this26;
HXDLIN(  87)			_this27->nx = (_this27->nx * len4);
HXDLIN(  87)			 ::h3d::col::Plane _this28 = _this26;
HXDLIN(  87)			_this28->ny = (_this28->ny * len4);
HXDLIN(  87)			 ::h3d::col::Plane _this29 = _this26;
HXDLIN(  87)			_this29->nz = (_this29->nz * len4);
HXDLIN(  87)			 ::h3d::col::Plane _this30 = _this26;
HXDLIN(  87)			_this30->d = (_this30->d * len4);
            		}
HXLINE(  88)		{
HXLINE(  88)			 ::h3d::col::Plane _this31 = this->pfar;
HXDLIN(  88)			Float len5 = (((Float)1.) / ::Math_obj::sqrt((((_this31->nx * _this31->nx) + (_this31->ny * _this31->ny)) + (_this31->nz * _this31->nz))));
HXDLIN(  88)			 ::h3d::col::Plane _this32 = _this31;
HXDLIN(  88)			_this32->nx = (_this32->nx * len5);
HXDLIN(  88)			 ::h3d::col::Plane _this33 = _this31;
HXDLIN(  88)			_this33->ny = (_this33->ny * len5);
HXDLIN(  88)			 ::h3d::col::Plane _this34 = _this31;
HXDLIN(  88)			_this34->nz = (_this34->nz * len5);
HXDLIN(  88)			 ::h3d::col::Plane _this35 = _this31;
HXDLIN(  88)			_this35->d = (_this35->d * len5);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,transform3x3,(void))

bool Frustum_obj::hasPoint( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_30f0493612d09d19_91_hasPoint)
HXLINE(  92)		 ::h3d::col::Plane _this = this->pleft;
HXDLIN(  92)		if ((((((_this->nx * p->x) + (_this->ny * p->y)) + (_this->nz * p->z)) - _this->d) < 0)) {
HXLINE(  92)			return false;
            		}
HXLINE(  93)		 ::h3d::col::Plane _this1 = this->pright;
HXDLIN(  93)		if ((((((_this1->nx * p->x) + (_this1->ny * p->y)) + (_this1->nz * p->z)) - _this1->d) < 0)) {
HXLINE(  93)			return false;
            		}
HXLINE(  94)		 ::h3d::col::Plane _this2 = this->ptop;
HXDLIN(  94)		if ((((((_this2->nx * p->x) + (_this2->ny * p->y)) + (_this2->nz * p->z)) - _this2->d) < 0)) {
HXLINE(  94)			return false;
            		}
HXLINE(  95)		 ::h3d::col::Plane _this3 = this->pbottom;
HXDLIN(  95)		if ((((((_this3->nx * p->x) + (_this3->ny * p->y)) + (_this3->nz * p->z)) - _this3->d) < 0)) {
HXLINE(  95)			return false;
            		}
HXLINE(  96)		if (this->checkNearFar) {
HXLINE(  97)			 ::h3d::col::Plane _this = this->pnear;
HXDLIN(  97)			if ((((((_this->nx * p->x) + (_this->ny * p->y)) + (_this->nz * p->z)) - _this->d) < 0)) {
HXLINE(  97)				return false;
            			}
HXLINE(  98)			 ::h3d::col::Plane _this1 = this->pfar;
HXDLIN(  98)			if ((((((_this1->nx * p->x) + (_this1->ny * p->y)) + (_this1->nz * p->z)) - _this1->d) < 0)) {
HXLINE(  98)				return false;
            			}
            		}
HXLINE( 100)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,hasPoint,return )

bool Frustum_obj::hasSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_30f0493612d09d19_103_hasSphere)
HXLINE( 104)		Float p_x = s->x;
HXDLIN( 104)		Float p_y = s->y;
HXDLIN( 104)		Float p_z = s->z;
HXLINE( 105)		 ::h3d::col::Plane _this = this->pleft;
HXDLIN( 105)		if ((((((_this->nx * p_x) + (_this->ny * p_y)) + (_this->nz * p_z)) - _this->d) < -(s->r))) {
HXLINE( 105)			return false;
            		}
HXLINE( 106)		 ::h3d::col::Plane _this1 = this->pright;
HXDLIN( 106)		if ((((((_this1->nx * p_x) + (_this1->ny * p_y)) + (_this1->nz * p_z)) - _this1->d) < -(s->r))) {
HXLINE( 106)			return false;
            		}
HXLINE( 107)		 ::h3d::col::Plane _this2 = this->ptop;
HXDLIN( 107)		if ((((((_this2->nx * p_x) + (_this2->ny * p_y)) + (_this2->nz * p_z)) - _this2->d) < -(s->r))) {
HXLINE( 107)			return false;
            		}
HXLINE( 108)		 ::h3d::col::Plane _this3 = this->pbottom;
HXDLIN( 108)		if ((((((_this3->nx * p_x) + (_this3->ny * p_y)) + (_this3->nz * p_z)) - _this3->d) < -(s->r))) {
HXLINE( 108)			return false;
            		}
HXLINE( 109)		if (this->checkNearFar) {
HXLINE( 110)			 ::h3d::col::Plane _this = this->pnear;
HXDLIN( 110)			if ((((((_this->nx * p_x) + (_this->ny * p_y)) + (_this->nz * p_z)) - _this->d) < -(s->r))) {
HXLINE( 110)				return false;
            			}
HXLINE( 111)			 ::h3d::col::Plane _this1 = this->pfar;
HXDLIN( 111)			if ((((((_this1->nx * p_x) + (_this1->ny * p_y)) + (_this1->nz * p_z)) - _this1->d) < -(s->r))) {
HXLINE( 111)				return false;
            			}
            		}
HXLINE( 113)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,hasSphere,return )

bool Frustum_obj::hasBounds( ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_30f0493612d09d19_116_hasBounds)
HXLINE( 117)		 ::h3d::col::Plane p = this->pleft;
HXDLIN( 117)		Float a = p->nx;
HXDLIN( 117)		Float b1 = p->ny;
HXDLIN( 117)		Float c = p->nz;
HXDLIN( 117)		Float dd = (((a * (b->xMax + b->xMin)) + (b1 * (b->yMax + b->yMin))) + (c * (b->zMax + b->zMin)));
HXDLIN( 117)		if ((a < 0)) {
HXLINE( 117)			a = -(a);
            		}
HXDLIN( 117)		if ((b1 < 0)) {
HXLINE( 117)			b1 = -(b1);
            		}
HXDLIN( 117)		if ((c < 0)) {
HXLINE( 117)			c = -(c);
            		}
HXDLIN( 117)		Float rr = (((a * (b->xMax - b->xMin)) + (b1 * (b->yMax - b->yMin))) + (c * (b->zMax - b->zMin)));
HXDLIN( 117)		if ((((dd + rr) - (p->d * ( (Float)(2) ))) < 0)) {
HXLINE( 118)			return false;
            		}
HXLINE( 119)		 ::h3d::col::Plane p1 = this->pright;
HXDLIN( 119)		Float a1 = p1->nx;
HXDLIN( 119)		Float b2 = p1->ny;
HXDLIN( 119)		Float c1 = p1->nz;
HXDLIN( 119)		Float dd1 = (((a1 * (b->xMax + b->xMin)) + (b2 * (b->yMax + b->yMin))) + (c1 * (b->zMax + b->zMin)));
HXDLIN( 119)		if ((a1 < 0)) {
HXLINE( 119)			a1 = -(a1);
            		}
HXDLIN( 119)		if ((b2 < 0)) {
HXLINE( 119)			b2 = -(b2);
            		}
HXDLIN( 119)		if ((c1 < 0)) {
HXLINE( 119)			c1 = -(c1);
            		}
HXDLIN( 119)		Float rr1 = (((a1 * (b->xMax - b->xMin)) + (b2 * (b->yMax - b->yMin))) + (c1 * (b->zMax - b->zMin)));
HXDLIN( 119)		if ((((dd1 + rr1) - (p1->d * ( (Float)(2) ))) < 0)) {
HXLINE( 120)			return false;
            		}
HXLINE( 121)		 ::h3d::col::Plane p2 = this->ptop;
HXDLIN( 121)		Float a2 = p2->nx;
HXDLIN( 121)		Float b3 = p2->ny;
HXDLIN( 121)		Float c2 = p2->nz;
HXDLIN( 121)		Float dd2 = (((a2 * (b->xMax + b->xMin)) + (b3 * (b->yMax + b->yMin))) + (c2 * (b->zMax + b->zMin)));
HXDLIN( 121)		if ((a2 < 0)) {
HXLINE( 121)			a2 = -(a2);
            		}
HXDLIN( 121)		if ((b3 < 0)) {
HXLINE( 121)			b3 = -(b3);
            		}
HXDLIN( 121)		if ((c2 < 0)) {
HXLINE( 121)			c2 = -(c2);
            		}
HXDLIN( 121)		Float rr2 = (((a2 * (b->xMax - b->xMin)) + (b3 * (b->yMax - b->yMin))) + (c2 * (b->zMax - b->zMin)));
HXDLIN( 121)		if ((((dd2 + rr2) - (p2->d * ( (Float)(2) ))) < 0)) {
HXLINE( 122)			return false;
            		}
HXLINE( 123)		 ::h3d::col::Plane p3 = this->ptop;
HXDLIN( 123)		Float a3 = p3->nx;
HXDLIN( 123)		Float b4 = p3->ny;
HXDLIN( 123)		Float c3 = p3->nz;
HXDLIN( 123)		Float dd3 = (((a3 * (b->xMax + b->xMin)) + (b4 * (b->yMax + b->yMin))) + (c3 * (b->zMax + b->zMin)));
HXDLIN( 123)		if ((a3 < 0)) {
HXLINE( 123)			a3 = -(a3);
            		}
HXDLIN( 123)		if ((b4 < 0)) {
HXLINE( 123)			b4 = -(b4);
            		}
HXDLIN( 123)		if ((c3 < 0)) {
HXLINE( 123)			c3 = -(c3);
            		}
HXDLIN( 123)		Float rr3 = (((a3 * (b->xMax - b->xMin)) + (b4 * (b->yMax - b->yMin))) + (c3 * (b->zMax - b->zMin)));
HXDLIN( 123)		if ((((dd3 + rr3) - (p3->d * ( (Float)(2) ))) < 0)) {
HXLINE( 124)			return false;
            		}
HXLINE( 125)		 ::h3d::col::Plane p4 = this->pnear;
HXDLIN( 125)		Float a4 = p4->nx;
HXDLIN( 125)		Float b5 = p4->ny;
HXDLIN( 125)		Float c4 = p4->nz;
HXDLIN( 125)		Float dd4 = (((a4 * (b->xMax + b->xMin)) + (b5 * (b->yMax + b->yMin))) + (c4 * (b->zMax + b->zMin)));
HXDLIN( 125)		if ((a4 < 0)) {
HXLINE( 125)			a4 = -(a4);
            		}
HXDLIN( 125)		if ((b5 < 0)) {
HXLINE( 125)			b5 = -(b5);
            		}
HXDLIN( 125)		if ((c4 < 0)) {
HXLINE( 125)			c4 = -(c4);
            		}
HXDLIN( 125)		Float rr4 = (((a4 * (b->xMax - b->xMin)) + (b5 * (b->yMax - b->yMin))) + (c4 * (b->zMax - b->zMin)));
HXDLIN( 125)		if ((((dd4 + rr4) - (p4->d * ( (Float)(2) ))) < 0)) {
HXLINE( 126)			return false;
            		}
HXLINE( 127)		 ::h3d::col::Plane p5 = this->pfar;
HXDLIN( 127)		Float a5 = p5->nx;
HXDLIN( 127)		Float b6 = p5->ny;
HXDLIN( 127)		Float c5 = p5->nz;
HXDLIN( 127)		Float dd5 = (((a5 * (b->xMax + b->xMin)) + (b6 * (b->yMax + b->yMin))) + (c5 * (b->zMax + b->zMin)));
HXDLIN( 127)		if ((a5 < 0)) {
HXLINE( 127)			a5 = -(a5);
            		}
HXDLIN( 127)		if ((b6 < 0)) {
HXLINE( 127)			b6 = -(b6);
            		}
HXDLIN( 127)		if ((c5 < 0)) {
HXLINE( 127)			c5 = -(c5);
            		}
HXDLIN( 127)		Float rr5 = (((a5 * (b->xMax - b->xMin)) + (b6 * (b->yMax - b->yMin))) + (c5 * (b->zMax - b->zMin)));
HXDLIN( 127)		if ((((dd5 + rr5) - (p5->d * ( (Float)(2) ))) < 0)) {
HXLINE( 128)			return false;
            		}
HXLINE( 129)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Frustum_obj,hasBounds,return )


::hx::ObjectPtr< Frustum_obj > Frustum_obj::__new( ::h3d::Matrix mvp) {
	::hx::ObjectPtr< Frustum_obj > __this = new Frustum_obj();
	__this->__construct(mvp);
	return __this;
}

::hx::ObjectPtr< Frustum_obj > Frustum_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::Matrix mvp) {
	Frustum_obj *__this = (Frustum_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Frustum_obj), true, "h3d.col.Frustum"));
	*(void **)__this = Frustum_obj::_hx_vtable;
	__this->__construct(mvp);
	return __this;
}

Frustum_obj::Frustum_obj()
{
}

void Frustum_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Frustum);
	HX_MARK_MEMBER_NAME(pleft,"pleft");
	HX_MARK_MEMBER_NAME(pright,"pright");
	HX_MARK_MEMBER_NAME(ptop,"ptop");
	HX_MARK_MEMBER_NAME(pbottom,"pbottom");
	HX_MARK_MEMBER_NAME(pnear,"pnear");
	HX_MARK_MEMBER_NAME(pfar,"pfar");
	HX_MARK_MEMBER_NAME(checkNearFar,"checkNearFar");
	HX_MARK_END_CLASS();
}

void Frustum_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pleft,"pleft");
	HX_VISIT_MEMBER_NAME(pright,"pright");
	HX_VISIT_MEMBER_NAME(ptop,"ptop");
	HX_VISIT_MEMBER_NAME(pbottom,"pbottom");
	HX_VISIT_MEMBER_NAME(pnear,"pnear");
	HX_VISIT_MEMBER_NAME(pfar,"pfar");
	HX_VISIT_MEMBER_NAME(checkNearFar,"checkNearFar");
}

::hx::Val Frustum_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ptop") ) { return ::hx::Val( ptop ); }
		if (HX_FIELD_EQ(inName,"pfar") ) { return ::hx::Val( pfar ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pleft") ) { return ::hx::Val( pleft ); }
		if (HX_FIELD_EQ(inName,"pnear") ) { return ::hx::Val( pnear ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pright") ) { return ::hx::Val( pright ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pbottom") ) { return ::hx::Val( pbottom ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasPoint") ) { return ::hx::Val( hasPoint_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasSphere") ) { return ::hx::Val( hasSphere_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasBounds") ) { return ::hx::Val( hasBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadMatrix") ) { return ::hx::Val( loadMatrix_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkNearFar") ) { return ::hx::Val( checkNearFar ); }
		if (HX_FIELD_EQ(inName,"transform3x3") ) { return ::hx::Val( transform3x3_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Frustum_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ptop") ) { ptop=inValue.Cast<  ::h3d::col::Plane >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pfar") ) { pfar=inValue.Cast<  ::h3d::col::Plane >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pleft") ) { pleft=inValue.Cast<  ::h3d::col::Plane >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pnear") ) { pnear=inValue.Cast<  ::h3d::col::Plane >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pright") ) { pright=inValue.Cast<  ::h3d::col::Plane >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pbottom") ) { pbottom=inValue.Cast<  ::h3d::col::Plane >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkNearFar") ) { checkNearFar=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Frustum_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pleft",77,00,91,c4));
	outFields->push(HX_("pright",6c,75,5c,b1));
	outFields->push(HX_("ptop",25,4c,60,4a));
	outFields->push(HX_("pbottom",5b,db,dc,96));
	outFields->push(HX_("pnear",58,69,e3,c5));
	outFields->push(HX_("pfar",67,a0,55,4a));
	outFields->push(HX_("checkNearFar",e7,3a,39,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Frustum_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::col::Plane */ ,(int)offsetof(Frustum_obj,pleft),HX_("pleft",77,00,91,c4)},
	{::hx::fsObject /*  ::h3d::col::Plane */ ,(int)offsetof(Frustum_obj,pright),HX_("pright",6c,75,5c,b1)},
	{::hx::fsObject /*  ::h3d::col::Plane */ ,(int)offsetof(Frustum_obj,ptop),HX_("ptop",25,4c,60,4a)},
	{::hx::fsObject /*  ::h3d::col::Plane */ ,(int)offsetof(Frustum_obj,pbottom),HX_("pbottom",5b,db,dc,96)},
	{::hx::fsObject /*  ::h3d::col::Plane */ ,(int)offsetof(Frustum_obj,pnear),HX_("pnear",58,69,e3,c5)},
	{::hx::fsObject /*  ::h3d::col::Plane */ ,(int)offsetof(Frustum_obj,pfar),HX_("pfar",67,a0,55,4a)},
	{::hx::fsBool,(int)offsetof(Frustum_obj,checkNearFar),HX_("checkNearFar",e7,3a,39,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Frustum_obj_sStaticStorageInfo = 0;
#endif

static ::String Frustum_obj_sMemberFields[] = {
	HX_("pleft",77,00,91,c4),
	HX_("pright",6c,75,5c,b1),
	HX_("ptop",25,4c,60,4a),
	HX_("pbottom",5b,db,dc,96),
	HX_("pnear",58,69,e3,c5),
	HX_("pfar",67,a0,55,4a),
	HX_("checkNearFar",e7,3a,39,53),
	HX_("clone",5d,13,63,48),
	HX_("loadMatrix",07,65,f3,70),
	HX_("transform",6c,2d,93,45),
	HX_("transform3x3",c2,19,71,3e),
	HX_("hasPoint",96,fe,e7,52),
	HX_("hasSphere",07,62,df,fd),
	HX_("hasBounds",6f,39,06,a7),
	::String(null()) };

::hx::Class Frustum_obj::__mClass;

void Frustum_obj::__register()
{
	Frustum_obj _hx_dummy;
	Frustum_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.Frustum",5f,ec,58,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Frustum_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Frustum_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Frustum_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Frustum_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
