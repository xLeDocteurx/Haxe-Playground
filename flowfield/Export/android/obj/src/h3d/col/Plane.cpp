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
#ifndef INCLUDED_h3d_col_Plane
#include <h3d/col/Plane.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_827f9847bbccdbbe_13_new,"h3d.col.Plane","new",0x858d9b8b,"h3d.col.Plane.new","h3d/col/Plane.hx",13,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_24_getNormal,"h3d.col.Plane","getNormal",0xe3fef8c8,"h3d.col.Plane.getNormal","h3d/col/Plane.hx",24,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_28_getNormalDistance,"h3d.col.Plane","getNormalDistance",0x01fc501d,"h3d.col.Plane.getNormalDistance","h3d/col/Plane.hx",28,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_31_load,"h3d.col.Plane","load",0x550f949b,"h3d.col.Plane.load","h3d/col/Plane.hx",31,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_38_transform,"h3d.col.Plane","transform",0x7cd22ad7,"h3d.col.Plane.transform","h3d/col/Plane.hx",38,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_45_transform3x3,"h3d.col.Plane","transform3x3",0x23a81137,"h3d.col.Plane.transform3x3","h3d/col/Plane.hx",45,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_52_transformInverseTranspose,"h3d.col.Plane","transformInverseTranspose",0xc44853a0,"h3d.col.Plane.transformInverseTranspose","h3d/col/Plane.hx",52,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_64_normalize,"h3d.col.Plane","normalize",0xe2e034f8,"h3d.col.Plane.normalize","h3d/col/Plane.hx",64,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_73_toString,"h3d.col.Plane","toString",0xc82da9a1,"h3d.col.Plane.toString","h3d/col/Plane.hx",73,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_80_distance,"h3d.col.Plane","distance",0xfbb86c2a,"h3d.col.Plane.distance","h3d/col/Plane.hx",80,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_84_side,"h3d.col.Plane","side",0x59ab880c,"h3d.col.Plane.side","h3d/col/Plane.hx",84,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_87_project,"h3d.col.Plane","project",0x25a14f84,"h3d.col.Plane.project","h3d/col/Plane.hx",87,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_92_projectTo,"h3d.col.Plane","projectTo",0xcc37821f,"h3d.col.Plane.projectTo","h3d/col/Plane.hx",92,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_99_fromPoints,"h3d.col.Plane","fromPoints",0x5a50d762,"h3d.col.Plane.fromPoints","h3d/col/Plane.hx",99,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_107_fromNormalPoint,"h3d.col.Plane","fromNormalPoint",0xd3f05b0a,"h3d.col.Plane.fromNormalPoint","h3d/col/Plane.hx",107,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_111_X,"h3d.col.Plane","X",0x29ae1ac3,"h3d.col.Plane.X","h3d/col/Plane.hx",111,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_115_Y,"h3d.col.Plane","Y",0x29ae1ac4,"h3d.col.Plane.Y","h3d/col/Plane.hx",115,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_119_Z,"h3d.col.Plane","Z",0x29ae1ac5,"h3d.col.Plane.Z","h3d/col/Plane.hx",119,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_123_frustumLeft,"h3d.col.Plane","frustumLeft",0x6b8142b4,"h3d.col.Plane.frustumLeft","h3d/col/Plane.hx",123,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_127_frustumRight,"h3d.col.Plane","frustumRight",0x1ca6288f,"h3d.col.Plane.frustumRight","h3d/col/Plane.hx",127,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_131_frustumBottom,"h3d.col.Plane","frustumBottom",0x0c0fe6d8,"h3d.col.Plane.frustumBottom","h3d/col/Plane.hx",131,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_135_frustumTop,"h3d.col.Plane","frustumTop",0x86d1e088,"h3d.col.Plane.frustumTop","h3d/col/Plane.hx",135,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_139_frustumNear,"h3d.col.Plane","frustumNear",0x6cd3ab95,"h3d.col.Plane.frustumNear","h3d/col/Plane.hx",139,0x675b44c7)
HX_LOCAL_STACK_FRAME(_hx_pos_827f9847bbccdbbe_143_frustumFar,"h3d.col.Plane","frustumFar",0x86c734ca,"h3d.col.Plane.frustumFar","h3d/col/Plane.hx",143,0x675b44c7)
namespace h3d{
namespace col{

void Plane_obj::__construct(Float nx,Float ny,Float nz,Float d){
            	HX_STACKFRAME(&_hx_pos_827f9847bbccdbbe_13_new)
HXLINE(  14)		this->nx = nx;
HXLINE(  15)		this->ny = ny;
HXLINE(  16)		this->nz = nz;
HXLINE(  17)		this->d = d;
            	}

Dynamic Plane_obj::__CreateEmpty() { return new Plane_obj; }

void *Plane_obj::_hx_vtable = 0;

Dynamic Plane_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Plane_obj > _hx_result = new Plane_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Plane_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ae7dbf5;
}

 ::h3d::col::Point Plane_obj::getNormal(){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_24_getNormal)
HXDLIN(  24)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->nx,this->ny,this->nz);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Plane_obj,getNormal,return )

Float Plane_obj::getNormalDistance(){
            	HX_STACKFRAME(&_hx_pos_827f9847bbccdbbe_28_getNormalDistance)
HXDLIN(  28)		return this->d;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Plane_obj,getNormalDistance,return )

void Plane_obj::load( ::h3d::col::Plane p){
            	HX_STACKFRAME(&_hx_pos_827f9847bbccdbbe_31_load)
HXLINE(  32)		this->nx = p->nx;
HXLINE(  33)		this->ny = p->ny;
HXLINE(  34)		this->nz = p->nz;
HXLINE(  35)		this->d = p->d;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,load,(void))

void Plane_obj::transform( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_38_transform)
HXLINE(  39)		 ::h3d::Matrix m2 =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  40)		m2->initInverse(m);
HXLINE(  41)		m2->transpose();
HXLINE(  42)		{
HXLINE(  42)			Float v_x = this->nx;
HXDLIN(  42)			Float v_y = this->ny;
HXDLIN(  42)			Float v_z = this->nz;
HXDLIN(  42)			Float v_w = -(this->d);
HXDLIN(  42)			{
HXLINE(  42)				Float px = ((((v_x * m2->_11) + (v_y * m2->_21)) + (v_z * m2->_31)) + (v_w * m2->_41));
HXDLIN(  42)				Float py = ((((v_x * m2->_12) + (v_y * m2->_22)) + (v_z * m2->_32)) + (v_w * m2->_42));
HXDLIN(  42)				Float pz = ((((v_x * m2->_13) + (v_y * m2->_23)) + (v_z * m2->_33)) + (v_w * m2->_43));
HXDLIN(  42)				Float pw = ((((v_x * m2->_14) + (v_y * m2->_24)) + (v_z * m2->_34)) + (v_w * m2->_44));
HXDLIN(  42)				v_x = px;
HXDLIN(  42)				v_y = py;
HXDLIN(  42)				v_z = pz;
HXDLIN(  42)				v_w = pw;
            			}
HXDLIN(  42)			this->nx = v_x;
HXDLIN(  42)			this->ny = v_y;
HXDLIN(  42)			this->nz = v_z;
HXDLIN(  42)			this->d = -(v_w);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,transform,(void))

void Plane_obj::transform3x3( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_45_transform3x3)
HXLINE(  46)		 ::h3d::Matrix m2 =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  47)		m2->initInverse3x3(m);
HXLINE(  48)		m2->transpose();
HXLINE(  49)		{
HXLINE(  49)			Float v_x = this->nx;
HXDLIN(  49)			Float v_y = this->ny;
HXDLIN(  49)			Float v_z = this->nz;
HXDLIN(  49)			Float v_w = -(this->d);
HXDLIN(  49)			{
HXLINE(  49)				Float px = ((((v_x * m2->_11) + (v_y * m2->_21)) + (v_z * m2->_31)) + (v_w * m2->_41));
HXDLIN(  49)				Float py = ((((v_x * m2->_12) + (v_y * m2->_22)) + (v_z * m2->_32)) + (v_w * m2->_42));
HXDLIN(  49)				Float pz = ((((v_x * m2->_13) + (v_y * m2->_23)) + (v_z * m2->_33)) + (v_w * m2->_43));
HXDLIN(  49)				Float pw = ((((v_x * m2->_14) + (v_y * m2->_24)) + (v_z * m2->_34)) + (v_w * m2->_44));
HXDLIN(  49)				v_x = px;
HXDLIN(  49)				v_y = py;
HXDLIN(  49)				v_z = pz;
HXDLIN(  49)				v_w = pw;
            			}
HXDLIN(  49)			this->nx = v_x;
HXDLIN(  49)			this->ny = v_y;
HXDLIN(  49)			this->nz = v_z;
HXDLIN(  49)			this->d = -(v_w);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,transform3x3,(void))

void Plane_obj::transformInverseTranspose( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_827f9847bbccdbbe_52_transformInverseTranspose)
HXLINE(  53)		Float v_x = this->nx;
HXDLIN(  53)		Float v_y = this->ny;
HXDLIN(  53)		Float v_z = this->nz;
HXDLIN(  53)		Float v_w = -(this->d);
HXLINE(  54)		{
HXLINE(  54)			Float px = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + (v_w * m->_41));
HXDLIN(  54)			Float py = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + (v_w * m->_42));
HXDLIN(  54)			Float pz = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + (v_w * m->_43));
HXDLIN(  54)			Float pw = ((((v_x * m->_14) + (v_y * m->_24)) + (v_z * m->_34)) + (v_w * m->_44));
HXDLIN(  54)			v_x = px;
HXDLIN(  54)			v_y = py;
HXDLIN(  54)			v_z = pz;
HXDLIN(  54)			v_w = pw;
            		}
HXLINE(  55)		this->nx = v_x;
HXLINE(  56)		this->ny = v_y;
HXLINE(  57)		this->nz = v_z;
HXLINE(  58)		this->d = -(v_w);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,transformInverseTranspose,(void))

void Plane_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_827f9847bbccdbbe_64_normalize)
HXLINE(  65)		Float len = (((Float)1.) / ::Math_obj::sqrt((((this->nx * this->nx) + (this->ny * this->ny)) + (this->nz * this->nz))));
HXLINE(  66)		 ::h3d::col::Plane _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  66)		_hx_tmp->nx = (_hx_tmp->nx * len);
HXLINE(  67)		 ::h3d::col::Plane _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  67)		_hx_tmp1->ny = (_hx_tmp1->ny * len);
HXLINE(  68)		 ::h3d::col::Plane _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  68)		_hx_tmp2->nz = (_hx_tmp2->nz * len);
HXLINE(  69)		 ::h3d::col::Plane _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  69)		_hx_tmp3->d = (_hx_tmp3->d * len);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Plane_obj,normalize,(void))

::String Plane_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_73_toString)
HXDLIN(  73)		::String _hx_tmp = ((HX_("Plane{",bf,06,45,6c) + ::Std_obj::string( ::h3d::col::Point_obj::__alloc( HX_CTX ,this->nx,this->ny,this->nz))) + HX_(",",2c,00,00,00));
HXDLIN(  73)		return ((_hx_tmp + ::hxd::Math_obj::fmt(this->d)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Plane_obj,toString,return )

Float Plane_obj::distance( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_827f9847bbccdbbe_80_distance)
HXDLIN(  80)		return ((((this->nx * p->x) + (this->ny * p->y)) + (this->nz * p->z)) - this->d);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,distance,return )

bool Plane_obj::side( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_827f9847bbccdbbe_84_side)
HXDLIN(  84)		return (((((this->nx * p->x) + (this->ny * p->y)) + (this->nz * p->z)) - this->d) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,side,return )

 ::h3d::col::Point Plane_obj::project( ::h3d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_87_project)
HXLINE(  88)		Float d = ((((this->nx * p->x) + (this->ny * p->y)) + (this->nz * p->z)) - this->d);
HXLINE(  89)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,(p->x - (d * this->nx)),(p->y - (d * this->ny)),(p->z - (d * this->nz)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,project,return )

void Plane_obj::projectTo( ::h3d::col::Point p, ::h3d::col::Point out){
            	HX_STACKFRAME(&_hx_pos_827f9847bbccdbbe_92_projectTo)
HXLINE(  93)		Float d = ((((this->nx * p->x) + (this->ny * p->y)) + (this->nz * p->z)) - this->d);
HXLINE(  94)		out->x = (p->x - (d * this->nx));
HXLINE(  95)		out->y = (p->y - (d * this->ny));
HXLINE(  96)		out->z = (p->z - (d * this->nz));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Plane_obj,projectTo,(void))

 ::h3d::col::Plane Plane_obj::fromPoints( ::h3d::col::Point p0, ::h3d::col::Point p1, ::h3d::col::Point p2){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_99_fromPoints)
HXLINE( 100)		Float d1_x = (p1->x - p0->x);
HXDLIN( 100)		Float d1_y = (p1->y - p0->y);
HXDLIN( 100)		Float d1_z = (p1->z - p0->z);
HXLINE( 101)		Float d2_x = (p2->x - p0->x);
HXDLIN( 101)		Float d2_y = (p2->y - p0->y);
HXDLIN( 101)		Float d2_z = (p2->z - p0->z);
HXLINE( 102)		Float n_x = ((d1_y * d2_z) - (d1_z * d2_y));
HXDLIN( 102)		Float n_y = ((d1_z * d2_x) - (d1_x * d2_z));
HXDLIN( 102)		Float n_z = ((d1_x * d2_y) - (d1_y * d2_x));
HXLINE( 103)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,n_x,n_y,n_z,(((n_x * p0->x) + (n_y * p0->y)) + (n_z * p0->z)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Plane_obj,fromPoints,return )

 ::h3d::col::Plane Plane_obj::fromNormalPoint( ::h3d::col::Point n, ::h3d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_107_fromNormalPoint)
HXDLIN( 107)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,n->x,n->y,n->z,(((n->x * p->x) + (n->y * p->y)) + (n->z * p->z)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Plane_obj,fromNormalPoint,return )

 ::h3d::col::Plane Plane_obj::X(::hx::Null< Float >  __o_v){
            		Float v = __o_v.Default(((Float)0.0));
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_111_X)
HXDLIN( 111)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,X,return )

 ::h3d::col::Plane Plane_obj::Y(::hx::Null< Float >  __o_v){
            		Float v = __o_v.Default(((Float)0.0));
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_115_Y)
HXDLIN( 115)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,Y,return )

 ::h3d::col::Plane Plane_obj::Z(::hx::Null< Float >  __o_v){
            		Float v = __o_v.Default(((Float)0.0));
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_119_Z)
HXDLIN( 119)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),( (Float)(1) ),v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,Z,return )

 ::h3d::col::Plane Plane_obj::frustumLeft( ::h3d::Matrix mvp){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_123_frustumLeft)
HXDLIN( 123)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,(mvp->_14 + mvp->_11),(mvp->_24 + mvp->_21),(mvp->_34 + mvp->_31),-((mvp->_44 + mvp->_41)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,frustumLeft,return )

 ::h3d::col::Plane Plane_obj::frustumRight( ::h3d::Matrix mvp){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_127_frustumRight)
HXDLIN( 127)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,(mvp->_14 - mvp->_11),(mvp->_24 - mvp->_21),(mvp->_34 - mvp->_31),(mvp->_41 - mvp->_44));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,frustumRight,return )

 ::h3d::col::Plane Plane_obj::frustumBottom( ::h3d::Matrix mvp){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_131_frustumBottom)
HXDLIN( 131)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,(mvp->_14 + mvp->_12),(mvp->_24 + mvp->_22),(mvp->_34 + mvp->_32),-((mvp->_44 + mvp->_42)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,frustumBottom,return )

 ::h3d::col::Plane Plane_obj::frustumTop( ::h3d::Matrix mvp){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_135_frustumTop)
HXDLIN( 135)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,(mvp->_14 - mvp->_12),(mvp->_24 - mvp->_22),(mvp->_34 - mvp->_32),(mvp->_42 - mvp->_44));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,frustumTop,return )

 ::h3d::col::Plane Plane_obj::frustumNear( ::h3d::Matrix mvp){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_139_frustumNear)
HXDLIN( 139)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,mvp->_13,mvp->_23,mvp->_33,-(mvp->_43));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,frustumNear,return )

 ::h3d::col::Plane Plane_obj::frustumFar( ::h3d::Matrix mvp){
            	HX_GC_STACKFRAME(&_hx_pos_827f9847bbccdbbe_143_frustumFar)
HXDLIN( 143)		return  ::h3d::col::Plane_obj::__alloc( HX_CTX ,(mvp->_14 - mvp->_13),(mvp->_24 - mvp->_23),(mvp->_34 - mvp->_33),(mvp->_43 - mvp->_44));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Plane_obj,frustumFar,return )


::hx::ObjectPtr< Plane_obj > Plane_obj::__new(Float nx,Float ny,Float nz,Float d) {
	::hx::ObjectPtr< Plane_obj > __this = new Plane_obj();
	__this->__construct(nx,ny,nz,d);
	return __this;
}

::hx::ObjectPtr< Plane_obj > Plane_obj::__alloc(::hx::Ctx *_hx_ctx,Float nx,Float ny,Float nz,Float d) {
	Plane_obj *__this = (Plane_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Plane_obj), false, "h3d.col.Plane"));
	*(void **)__this = Plane_obj::_hx_vtable;
	__this->__construct(nx,ny,nz,d);
	return __this;
}

Plane_obj::Plane_obj()
{
}

::hx::Val Plane_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"side") ) { return ::hx::Val( side_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return ::hx::Val( project_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getNormal") ) { return ::hx::Val( getNormal_dyn() ); }
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"projectTo") ) { return ::hx::Val( projectTo_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transform3x3") ) { return ::hx::Val( transform3x3_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getNormalDistance") ) { return ::hx::Val( getNormalDistance_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"transformInverseTranspose") ) { return ::hx::Val( transformInverseTranspose_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Plane_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"X") ) { outValue = X_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"Y") ) { outValue = Y_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"Z") ) { outValue = Z_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromPoints") ) { outValue = fromPoints_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"frustumTop") ) { outValue = frustumTop_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"frustumFar") ) { outValue = frustumFar_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frustumLeft") ) { outValue = frustumLeft_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"frustumNear") ) { outValue = frustumNear_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"frustumRight") ) { outValue = frustumRight_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"frustumBottom") ) { outValue = frustumBottom_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromNormalPoint") ) { outValue = fromNormalPoint_dyn(); return true; }
	}
	return false;
}

::hx::Val Plane_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nz") ) { nz=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Plane_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("nx",4a,60,00,00));
	outFields->push(HX_("ny",4b,60,00,00));
	outFields->push(HX_("nz",4c,60,00,00));
	outFields->push(HX_("d",64,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Plane_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Plane_obj,nx),HX_("nx",4a,60,00,00)},
	{::hx::fsFloat,(int)offsetof(Plane_obj,ny),HX_("ny",4b,60,00,00)},
	{::hx::fsFloat,(int)offsetof(Plane_obj,nz),HX_("nz",4c,60,00,00)},
	{::hx::fsFloat,(int)offsetof(Plane_obj,d),HX_("d",64,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Plane_obj_sStaticStorageInfo = 0;
#endif

static ::String Plane_obj_sMemberFields[] = {
	HX_("nx",4a,60,00,00),
	HX_("ny",4b,60,00,00),
	HX_("nz",4c,60,00,00),
	HX_("d",64,00,00,00),
	HX_("getNormal",5d,fb,bf,ac),
	HX_("getNormalDistance",b2,6f,11,9d),
	HX_("load",26,9a,b7,47),
	HX_("transform",6c,2d,93,45),
	HX_("transform3x3",c2,19,71,3e),
	HX_("transformInverseTranspose",35,90,96,fe),
	HX_("normalize",8d,37,a1,ab),
	HX_("toString",ac,d0,6e,38),
	HX_("distance",35,93,f9,6b),
	HX_("side",97,8d,53,4c),
	HX_("project",d9,12,eb,f5),
	HX_("projectTo",b4,84,f8,94),
	::String(null()) };

::hx::Class Plane_obj::__mClass;

static ::String Plane_obj_sStaticFields[] = {
	HX_("fromPoints",2d,17,72,3a),
	HX_("fromNormalPoint",5f,fb,5c,82),
	HX_("X",58,00,00,00),
	HX_("Y",59,00,00,00),
	HX_("Z",5a,00,00,00),
	HX_("frustumLeft",89,d4,77,a8),
	HX_("frustumRight",1a,31,6f,37),
	HX_("frustumBottom",ed,57,2e,61),
	HX_("frustumTop",53,20,f3,66),
	HX_("frustumNear",6a,3d,ca,a9),
	HX_("frustumFar",95,74,e8,66),
	::String(null())
};

void Plane_obj::__register()
{
	Plane_obj _hx_dummy;
	Plane_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.Plane",19,7a,08,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Plane_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Plane_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Plane_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Plane_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Plane_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Plane_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
