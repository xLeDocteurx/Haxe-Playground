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
#ifndef INCLUDED_h3d_col_Frustum
#include <h3d/col/Frustum.h>
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
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_268746cd3af8e76c_18_new,"h3d.col.Bounds","new",0xed10dd0a,"h3d.col.Bounds.new","h3d/col/Bounds.hx",18,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_21_inFrustum,"h3d.col.Bounds","inFrustum",0xedcb7227,"h3d.col.Bounds.inFrustum","h3d/col/Bounds.hx",21,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_27_inSphere,"h3d.col.Bounds","inSphere",0x4c97c3e8,"h3d.col.Bounds.inSphere","h3d/col/Bounds.hx",27,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_33_testPlane,"h3d.col.Bounds","testPlane",0xc4df24d4,"h3d.col.Bounds.testPlane","h3d/col/Bounds.hx",33,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_45_rayIntersection,"h3d.col.Bounds","rayIntersection",0x501b5efd,"h3d.col.Bounds.rayIntersection","h3d/col/Bounds.hx",45,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_73_inFrustumDetails,"h3d.col.Bounds","inFrustumDetails",0xd7be355b,"h3d.col.Bounds.inFrustumDetails","h3d/col/Bounds.hx",73,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_126_transform3x3,"h3d.col.Bounds","transform3x3",0x812627d8,"h3d.col.Bounds.transform3x3","h3d/col/Bounds.hx",126,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_156_transform,"h3d.col.Bounds","transform",0x7ce21596,"h3d.col.Bounds.transform","h3d/col/Bounds.hx",156,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_190_collide,"h3d.col.Bounds","collide",0x2db55928,"h3d.col.Bounds.collide","h3d/col/Bounds.hx",190,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_194_contains,"h3d.col.Bounds","contains",0x339e2535,"h3d.col.Bounds.contains","h3d/col/Bounds.hx",194,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_198_containsBounds,"h3d.col.Bounds","containsBounds",0x8eeb758a,"h3d.col.Bounds.containsBounds","h3d/col/Bounds.hx",198,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_202_containsSphere,"h3d.col.Bounds","containsSphere",0xe5c49e22,"h3d.col.Bounds.containsSphere","h3d/col/Bounds.hx",202,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_205_add,"h3d.col.Bounds","add",0xed06fecb,"h3d.col.Bounds.add","h3d/col/Bounds.hx",205,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_214_addPoint,"h3d.col.Bounds","addPoint",0x470fa585,"h3d.col.Bounds.addPoint","h3d/col/Bounds.hx",214,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_223_addPos,"h3d.col.Bounds","addPos",0xe5572789,"h3d.col.Bounds.addPos","h3d/col/Bounds.hx",223,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_233_addSphere,"h3d.col.Bounds","addSphere",0xac69cc38,"h3d.col.Bounds.addSphere","h3d/col/Bounds.hx",233,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_236_addSpherePos,"h3d.col.Bounds","addSpherePos",0x37febc3c,"h3d.col.Bounds.addSpherePos","h3d/col/Bounds.hx",236,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_245_intersection,"h3d.col.Bounds","intersection",0xcb16b05f,"h3d.col.Bounds.intersection","h3d/col/Bounds.hx",245,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_260_offset,"h3d.col.Bounds","offset",0xa6905129,"h3d.col.Bounds.offset","h3d/col/Bounds.hx",260,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_269_setMin,"h3d.col.Bounds","setMin",0xb5bb58a6,"h3d.col.Bounds.setMin","h3d/col/Bounds.hx",269,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_275_setMax,"h3d.col.Bounds","setMax",0xb5bb51b8,"h3d.col.Bounds.setMax","h3d/col/Bounds.hx",275,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_281_load,"h3d.col.Bounds","load",0x8065a23c,"h3d.col.Bounds.load","h3d/col/Bounds.hx",281,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_290_scalePivot,"h3d.col.Bounds","scalePivot",0x1192346e,"h3d.col.Bounds.scalePivot","h3d/col/Bounds.hx",290,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_300_scaleCenter,"h3d.col.Bounds","scaleCenter",0xc8d7b2a9,"h3d.col.Bounds.scaleCenter","h3d/col/Bounds.hx",300,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_316_getMin,"h3d.col.Bounds","getMin",0xe9730432,"h3d.col.Bounds.getMin","h3d/col/Bounds.hx",316,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_320_getCenter,"h3d.col.Bounds","getCenter",0xb9809735,"h3d.col.Bounds.getCenter","h3d/col/Bounds.hx",320,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_324_getSize,"h3d.col.Bounds","getSize",0x5f27fa21,"h3d.col.Bounds.getSize","h3d/col/Bounds.hx",324,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_328_getMax,"h3d.col.Bounds","getMax",0xe972fd44,"h3d.col.Bounds.getMax","h3d/col/Bounds.hx",328,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_332_getVolume,"h3d.col.Bounds","getVolume",0x12f89b3a,"h3d.col.Bounds.getVolume","h3d/col/Bounds.hx",332,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_335_get_xSize,"h3d.col.Bounds","get_xSize",0xca3aadda,"h3d.col.Bounds.get_xSize","h3d/col/Bounds.hx",335,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_336_get_ySize,"h3d.col.Bounds","get_ySize",0x5da1425b,"h3d.col.Bounds.get_ySize","h3d/col/Bounds.hx",336,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_337_get_zSize,"h3d.col.Bounds","get_zSize",0xf107d6dc,"h3d.col.Bounds.get_zSize","h3d/col/Bounds.hx",337,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_338_set_xSize,"h3d.col.Bounds","set_xSize",0xad8b99e6,"h3d.col.Bounds.set_xSize","h3d/col/Bounds.hx",338,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_339_set_ySize,"h3d.col.Bounds","set_ySize",0x40f22e67,"h3d.col.Bounds.set_ySize","h3d/col/Bounds.hx",339,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_340_set_zSize,"h3d.col.Bounds","set_zSize",0xd458c2e8,"h3d.col.Bounds.set_zSize","h3d/col/Bounds.hx",340,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_343_isEmpty,"h3d.col.Bounds","isEmpty",0x4cb187ed,"h3d.col.Bounds.isEmpty","h3d/col/Bounds.hx",343,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_346_empty,"h3d.col.Bounds","empty",0xcf7345b7,"h3d.col.Bounds.empty","h3d/col/Bounds.hx",346,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_355_all,"h3d.col.Bounds","all",0xed0705cb,"h3d.col.Bounds.all","h3d/col/Bounds.hx",355,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_364_clone,"h3d.col.Bounds","clone",0xa7fc1e87,"h3d.col.Bounds.clone","h3d/col/Bounds.hx",364,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_376_toString,"h3d.col.Bounds","toString",0x3f919bc2,"h3d.col.Bounds.toString","h3d/col/Bounds.hx",376,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_379_toSphere,"h3d.col.Bounds","toSphere",0xeb5821fe,"h3d.col.Bounds.toSphere","h3d/col/Bounds.hx",379,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_386_fromPoints,"h3d.col.Bounds","fromPoints",0x682e53c3,"h3d.col.Bounds.fromPoints","h3d/col/Bounds.hx",386,0x049adce4)
HX_LOCAL_STACK_FRAME(_hx_pos_268746cd3af8e76c_393_fromValues,"h3d.col.Bounds","fromValues",0xc0b74582,"h3d.col.Bounds.fromValues","h3d/col/Bounds.hx",393,0x049adce4)
namespace h3d{
namespace col{

void Bounds_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_18_new)
HXDLIN(  18)		this->xMin = ((Float)1e20);
HXDLIN(  18)		this->xMax = ((Float)-1e20);
HXDLIN(  18)		this->yMin = ((Float)1e20);
HXDLIN(  18)		this->yMax = ((Float)-1e20);
HXDLIN(  18)		this->zMin = ((Float)1e20);
HXDLIN(  18)		this->zMax = ((Float)-1e20);
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e658ebc;
}

static ::h3d::col::Collider_obj _hx_h3d_col_Bounds__hx_h3d_col_Collider= {
	( Float (::hx::Object::*)( ::h3d::col::Ray,bool))&::h3d::col::Bounds_obj::rayIntersection,
	( bool (::hx::Object::*)( ::h3d::col::Point))&::h3d::col::Bounds_obj::contains,
	( bool (::hx::Object::*)( ::h3d::col::Frustum, ::h3d::Matrix))&::h3d::col::Bounds_obj::inFrustum,
	( bool (::hx::Object::*)( ::h3d::col::Sphere))&::h3d::col::Bounds_obj::inSphere,
};

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_col_Bounds__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *Bounds_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x12a1e47b: return &_hx_h3d_col_Bounds__hx_h3d_col_Collider;
		case (int)0xa6f1a21a: return &_hx_h3d_col_Bounds__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool Bounds_obj::inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_21_inFrustum)
HXLINE(  22)		if (::hx::IsNotNull( m )) {
HXLINE(  23)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
            		}
HXLINE(  24)		return f->hasBounds(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,inFrustum,return )

bool Bounds_obj::inSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_27_inSphere)
HXLINE(  28)		Float c_x = s->x;
HXDLIN(  28)		Float c_y = s->y;
HXDLIN(  28)		Float c_z = s->z;
HXLINE(  29)		Float a = this->xMin;
HXDLIN(  29)		Float a1 = s->x;
HXDLIN(  29)		Float b = this->xMax;
HXDLIN(  29)		Float b1;
HXDLIN(  29)		if ((a1 > b)) {
HXLINE(  29)			b1 = b;
            		}
            		else {
HXLINE(  29)			b1 = a1;
            		}
HXDLIN(  29)		Float x;
HXDLIN(  29)		if ((a < b1)) {
HXLINE(  29)			x = b1;
            		}
            		else {
HXLINE(  29)			x = a;
            		}
HXDLIN(  29)		Float a2 = this->yMin;
HXDLIN(  29)		Float a3 = s->y;
HXDLIN(  29)		Float b2 = this->yMax;
HXDLIN(  29)		Float b3;
HXDLIN(  29)		if ((a3 > b2)) {
HXLINE(  29)			b3 = b2;
            		}
            		else {
HXLINE(  29)			b3 = a3;
            		}
HXDLIN(  29)		Float y;
HXDLIN(  29)		if ((a2 < b3)) {
HXLINE(  29)			y = b3;
            		}
            		else {
HXLINE(  29)			y = a2;
            		}
HXDLIN(  29)		Float a4 = this->zMin;
HXDLIN(  29)		Float a5 = s->z;
HXDLIN(  29)		Float b4 = this->zMax;
HXDLIN(  29)		Float b5;
HXDLIN(  29)		if ((a5 > b4)) {
HXLINE(  29)			b5 = b4;
            		}
            		else {
HXLINE(  29)			b5 = a5;
            		}
HXDLIN(  29)		Float z;
HXDLIN(  29)		if ((a4 < b5)) {
HXLINE(  29)			z = b5;
            		}
            		else {
HXLINE(  29)			z = a4;
            		}
HXDLIN(  29)		Float p_x = x;
HXDLIN(  29)		Float p_y = y;
HXDLIN(  29)		Float p_z = z;
HXLINE(  30)		Float dx = (p_x - c_x);
HXDLIN(  30)		Float dy = (p_y - c_y);
HXDLIN(  30)		Float dz = (p_z - c_z);
HXDLIN(  30)		return ((((dx * dx) + (dy * dy)) + (dz * dz)) < (s->r * s->r));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,inSphere,return )

Float Bounds_obj::testPlane( ::h3d::col::Plane p){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_33_testPlane)
HXLINE(  34)		Float a = p->nx;
HXLINE(  35)		Float b = p->ny;
HXLINE(  36)		Float c = p->nz;
HXLINE(  37)		Float dd = (((a * (this->xMax + this->xMin)) + (b * (this->yMax + this->yMin))) + (c * (this->zMax + this->zMin)));
HXLINE(  38)		if ((a < 0)) {
HXLINE(  38)			a = -(a);
            		}
HXLINE(  39)		if ((b < 0)) {
HXLINE(  39)			b = -(b);
            		}
HXLINE(  40)		if ((c < 0)) {
HXLINE(  40)			c = -(c);
            		}
HXLINE(  41)		Float rr = (((a * (this->xMax - this->xMin)) + (b * (this->yMax - this->yMin))) + (c * (this->zMax - this->zMin)));
HXLINE(  42)		return ((dd + rr) - (p->d * ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,testPlane,return )

Float Bounds_obj::rayIntersection( ::h3d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_45_rayIntersection)
HXLINE(  46)		Float minTx = ((this->xMin - r->px) / r->lx);
HXLINE(  47)		Float minTy = ((this->yMin - r->py) / r->ly);
HXLINE(  48)		Float minTz = ((this->zMin - r->pz) / r->lz);
HXLINE(  49)		Float maxTx = ((this->xMax - r->px) / r->lx);
HXLINE(  50)		Float maxTy = ((this->yMax - r->py) / r->ly);
HXLINE(  51)		Float maxTz = ((this->zMax - r->pz) / r->lz);
HXLINE(  53)		Float realMinTx;
HXDLIN(  53)		if ((minTx > maxTx)) {
HXLINE(  53)			realMinTx = maxTx;
            		}
            		else {
HXLINE(  53)			realMinTx = minTx;
            		}
HXLINE(  54)		Float realMinTy;
HXDLIN(  54)		if ((minTy > maxTy)) {
HXLINE(  54)			realMinTy = maxTy;
            		}
            		else {
HXLINE(  54)			realMinTy = minTy;
            		}
HXLINE(  55)		Float realMinTz;
HXDLIN(  55)		if ((minTz > maxTz)) {
HXLINE(  55)			realMinTz = maxTz;
            		}
            		else {
HXLINE(  55)			realMinTz = minTz;
            		}
HXLINE(  56)		Float realMaxTx;
HXDLIN(  56)		if ((minTx < maxTx)) {
HXLINE(  56)			realMaxTx = maxTx;
            		}
            		else {
HXLINE(  56)			realMaxTx = minTx;
            		}
HXLINE(  57)		Float realMaxTy;
HXDLIN(  57)		if ((minTy < maxTy)) {
HXLINE(  57)			realMaxTy = maxTy;
            		}
            		else {
HXLINE(  57)			realMaxTy = minTy;
            		}
HXLINE(  58)		Float realMaxTz;
HXDLIN(  58)		if ((minTz < maxTz)) {
HXLINE(  58)			realMaxTz = maxTz;
            		}
            		else {
HXLINE(  58)			realMaxTz = minTz;
            		}
HXLINE(  60)		Float a;
HXDLIN(  60)		if ((realMaxTx > realMaxTy)) {
HXLINE(  60)			a = realMaxTy;
            		}
            		else {
HXLINE(  60)			a = realMaxTx;
            		}
HXDLIN(  60)		Float minmax;
HXDLIN(  60)		if ((a > realMaxTz)) {
HXLINE(  60)			minmax = realMaxTz;
            		}
            		else {
HXLINE(  60)			minmax = a;
            		}
HXLINE(  61)		Float a1;
HXDLIN(  61)		if ((realMinTx < realMinTy)) {
HXLINE(  61)			a1 = realMinTy;
            		}
            		else {
HXLINE(  61)			a1 = realMinTx;
            		}
HXDLIN(  61)		Float maxmin;
HXDLIN(  61)		if ((a1 < realMinTz)) {
HXLINE(  61)			maxmin = realMinTz;
            		}
            		else {
HXLINE(  61)			maxmin = a1;
            		}
HXLINE(  63)		if ((minmax < maxmin)) {
HXLINE(  63)			return ( (Float)(-1) );
            		}
HXLINE(  65)		return maxmin;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,rayIntersection,return )

int Bounds_obj::inFrustumDetails( ::h3d::Matrix mvp,::hx::Null< bool >  __o_checkZ){
            		bool checkZ = __o_checkZ.Default(true);
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_73_inFrustumDetails)
HXLINE(  74)		int ret = 1;
HXLINE(  77)		Float p_nx = (mvp->_14 + mvp->_11);
HXDLIN(  77)		Float p_ny = (mvp->_24 + mvp->_21);
HXDLIN(  77)		Float p_nz = (mvp->_34 + mvp->_31);
HXDLIN(  77)		Float p_d = (mvp->_44 + mvp->_41);
HXLINE(  78)		Float m;
HXDLIN(  78)		if ((p_nx > 0)) {
HXLINE(  78)			m = this->xMax;
            		}
            		else {
HXLINE(  78)			m = this->xMin;
            		}
HXDLIN(  78)		Float m1;
HXDLIN(  78)		if ((p_ny > 0)) {
HXLINE(  78)			m1 = this->yMax;
            		}
            		else {
HXLINE(  78)			m1 = this->yMin;
            		}
HXDLIN(  78)		Float m2;
HXDLIN(  78)		if ((p_nz > 0)) {
HXLINE(  78)			m2 = this->zMax;
            		}
            		else {
HXLINE(  78)			m2 = this->zMin;
            		}
HXDLIN(  78)		Float m3 = (((p_nx * m) + (p_ny * m1)) + (p_nz * m2));
HXLINE(  79)		if (((m3 + p_d) < 0)) {
HXLINE(  80)			return -1;
            		}
HXLINE(  81)		Float n;
HXDLIN(  81)		if ((p_nx > 0)) {
HXLINE(  81)			n = this->xMin;
            		}
            		else {
HXLINE(  81)			n = this->xMax;
            		}
HXDLIN(  81)		Float n1;
HXDLIN(  81)		if ((p_ny > 0)) {
HXLINE(  81)			n1 = this->yMin;
            		}
            		else {
HXLINE(  81)			n1 = this->yMax;
            		}
HXDLIN(  81)		Float n2;
HXDLIN(  81)		if ((p_nz > 0)) {
HXLINE(  81)			n2 = this->zMin;
            		}
            		else {
HXLINE(  81)			n2 = this->zMax;
            		}
HXDLIN(  81)		Float n3 = (((p_nx * n) + (p_ny * n1)) + (p_nz * n2));
HXLINE(  82)		if (((n3 + p_d) < 0)) {
HXLINE(  82)			ret = 0;
            		}
HXLINE(  84)		Float p_nx1 = (mvp->_14 - mvp->_11);
HXDLIN(  84)		Float p_ny1 = (mvp->_24 - mvp->_21);
HXDLIN(  84)		Float p_nz1 = (mvp->_34 - mvp->_31);
HXDLIN(  84)		Float p_d1 = (mvp->_44 - mvp->_41);
HXLINE(  85)		Float m4;
HXDLIN(  85)		if ((p_nx1 > 0)) {
HXLINE(  85)			m4 = this->xMax;
            		}
            		else {
HXLINE(  85)			m4 = this->xMin;
            		}
HXDLIN(  85)		Float m5;
HXDLIN(  85)		if ((p_ny1 > 0)) {
HXLINE(  85)			m5 = this->yMax;
            		}
            		else {
HXLINE(  85)			m5 = this->yMin;
            		}
HXDLIN(  85)		Float m6;
HXDLIN(  85)		if ((p_nz1 > 0)) {
HXLINE(  85)			m6 = this->zMax;
            		}
            		else {
HXLINE(  85)			m6 = this->zMin;
            		}
HXDLIN(  85)		Float m7 = (((p_nx1 * m4) + (p_ny1 * m5)) + (p_nz1 * m6));
HXLINE(  86)		if (((m7 + p_d1) < 0)) {
HXLINE(  87)			return -1;
            		}
HXLINE(  88)		Float n4;
HXDLIN(  88)		if ((p_nx1 > 0)) {
HXLINE(  88)			n4 = this->xMin;
            		}
            		else {
HXLINE(  88)			n4 = this->xMax;
            		}
HXDLIN(  88)		Float n5;
HXDLIN(  88)		if ((p_ny1 > 0)) {
HXLINE(  88)			n5 = this->yMin;
            		}
            		else {
HXLINE(  88)			n5 = this->yMax;
            		}
HXDLIN(  88)		Float n6;
HXDLIN(  88)		if ((p_nz1 > 0)) {
HXLINE(  88)			n6 = this->zMin;
            		}
            		else {
HXLINE(  88)			n6 = this->zMax;
            		}
HXDLIN(  88)		Float n7 = (((p_nx1 * n4) + (p_ny1 * n5)) + (p_nz1 * n6));
HXLINE(  89)		if (((n7 + p_d1) < 0)) {
HXLINE(  89)			ret = 0;
            		}
HXLINE(  91)		Float p_nx2 = (mvp->_14 + mvp->_12);
HXDLIN(  91)		Float p_ny2 = (mvp->_24 + mvp->_22);
HXDLIN(  91)		Float p_nz2 = (mvp->_34 + mvp->_32);
HXDLIN(  91)		Float p_d2 = (mvp->_44 + mvp->_42);
HXLINE(  92)		Float m8;
HXDLIN(  92)		if ((p_nx2 > 0)) {
HXLINE(  92)			m8 = this->xMax;
            		}
            		else {
HXLINE(  92)			m8 = this->xMin;
            		}
HXDLIN(  92)		Float m9;
HXDLIN(  92)		if ((p_ny2 > 0)) {
HXLINE(  92)			m9 = this->yMax;
            		}
            		else {
HXLINE(  92)			m9 = this->yMin;
            		}
HXDLIN(  92)		Float m10;
HXDLIN(  92)		if ((p_nz2 > 0)) {
HXLINE(  92)			m10 = this->zMax;
            		}
            		else {
HXLINE(  92)			m10 = this->zMin;
            		}
HXDLIN(  92)		Float m11 = (((p_nx2 * m8) + (p_ny2 * m9)) + (p_nz2 * m10));
HXLINE(  93)		if (((m11 + p_d2) < 0)) {
HXLINE(  94)			return -1;
            		}
HXLINE(  95)		Float n8;
HXDLIN(  95)		if ((p_nx2 > 0)) {
HXLINE(  95)			n8 = this->xMin;
            		}
            		else {
HXLINE(  95)			n8 = this->xMax;
            		}
HXDLIN(  95)		Float n9;
HXDLIN(  95)		if ((p_ny2 > 0)) {
HXLINE(  95)			n9 = this->yMin;
            		}
            		else {
HXLINE(  95)			n9 = this->yMax;
            		}
HXDLIN(  95)		Float n10;
HXDLIN(  95)		if ((p_nz2 > 0)) {
HXLINE(  95)			n10 = this->zMin;
            		}
            		else {
HXLINE(  95)			n10 = this->zMax;
            		}
HXDLIN(  95)		Float n11 = (((p_nx2 * n8) + (p_ny2 * n9)) + (p_nz2 * n10));
HXLINE(  96)		if (((n11 + p_d2) < 0)) {
HXLINE(  96)			ret = 0;
            		}
HXLINE(  99)		Float p_nx3 = (mvp->_14 - mvp->_12);
HXDLIN(  99)		Float p_ny3 = (mvp->_24 - mvp->_22);
HXDLIN(  99)		Float p_nz3 = (mvp->_34 - mvp->_32);
HXDLIN(  99)		Float p_d3 = (mvp->_44 - mvp->_42);
HXLINE( 100)		Float m12;
HXDLIN( 100)		if ((p_nx3 > 0)) {
HXLINE( 100)			m12 = this->xMax;
            		}
            		else {
HXLINE( 100)			m12 = this->xMin;
            		}
HXDLIN( 100)		Float m13;
HXDLIN( 100)		if ((p_ny3 > 0)) {
HXLINE( 100)			m13 = this->yMax;
            		}
            		else {
HXLINE( 100)			m13 = this->yMin;
            		}
HXDLIN( 100)		Float m14;
HXDLIN( 100)		if ((p_nz3 > 0)) {
HXLINE( 100)			m14 = this->zMax;
            		}
            		else {
HXLINE( 100)			m14 = this->zMin;
            		}
HXDLIN( 100)		Float m15 = (((p_nx3 * m12) + (p_ny3 * m13)) + (p_nz3 * m14));
HXLINE( 101)		if (((m15 + p_d3) < 0)) {
HXLINE( 102)			return -1;
            		}
HXLINE( 103)		Float n12;
HXDLIN( 103)		if ((p_nx3 > 0)) {
HXLINE( 103)			n12 = this->xMin;
            		}
            		else {
HXLINE( 103)			n12 = this->xMax;
            		}
HXDLIN( 103)		Float n13;
HXDLIN( 103)		if ((p_ny3 > 0)) {
HXLINE( 103)			n13 = this->yMin;
            		}
            		else {
HXLINE( 103)			n13 = this->yMax;
            		}
HXDLIN( 103)		Float n14;
HXDLIN( 103)		if ((p_nz3 > 0)) {
HXLINE( 103)			n14 = this->zMin;
            		}
            		else {
HXLINE( 103)			n14 = this->zMax;
            		}
HXDLIN( 103)		Float n15 = (((p_nx3 * n12) + (p_ny3 * n13)) + (p_nz3 * n14));
HXLINE( 104)		if (((n15 + p_d3) < 0)) {
HXLINE( 104)			ret = 0;
            		}
HXLINE( 106)		if (checkZ) {
HXLINE( 108)			Float p_nx = mvp->_13;
HXDLIN( 108)			Float p_ny = mvp->_23;
HXDLIN( 108)			Float p_nz = mvp->_33;
HXDLIN( 108)			Float p_d = mvp->_43;
HXLINE( 109)			Float m;
HXDLIN( 109)			if ((p_nx > 0)) {
HXLINE( 109)				m = this->xMax;
            			}
            			else {
HXLINE( 109)				m = this->xMin;
            			}
HXDLIN( 109)			Float m1;
HXDLIN( 109)			if ((p_ny > 0)) {
HXLINE( 109)				m1 = this->yMax;
            			}
            			else {
HXLINE( 109)				m1 = this->yMin;
            			}
HXDLIN( 109)			Float m2;
HXDLIN( 109)			if ((p_nz > 0)) {
HXLINE( 109)				m2 = this->zMax;
            			}
            			else {
HXLINE( 109)				m2 = this->zMin;
            			}
HXDLIN( 109)			Float m3 = (((p_nx * m) + (p_ny * m1)) + (p_nz * m2));
HXLINE( 110)			if (((m3 + p_d) < 0)) {
HXLINE( 111)				return -1;
            			}
HXLINE( 112)			Float n;
HXDLIN( 112)			if ((p_nx > 0)) {
HXLINE( 112)				n = this->xMin;
            			}
            			else {
HXLINE( 112)				n = this->xMax;
            			}
HXDLIN( 112)			Float n1;
HXDLIN( 112)			if ((p_ny > 0)) {
HXLINE( 112)				n1 = this->yMin;
            			}
            			else {
HXLINE( 112)				n1 = this->yMax;
            			}
HXDLIN( 112)			Float n2;
HXDLIN( 112)			if ((p_nz > 0)) {
HXLINE( 112)				n2 = this->zMin;
            			}
            			else {
HXLINE( 112)				n2 = this->zMax;
            			}
HXDLIN( 112)			Float n3 = (((p_nx * n) + (p_ny * n1)) + (p_nz * n2));
HXLINE( 113)			if (((n3 + p_d) < 0)) {
HXLINE( 113)				ret = 0;
            			}
HXLINE( 115)			Float p_nx1 = (mvp->_14 - mvp->_13);
HXDLIN( 115)			Float p_ny1 = (mvp->_24 - mvp->_23);
HXDLIN( 115)			Float p_nz1 = (mvp->_34 - mvp->_33);
HXDLIN( 115)			Float p_d1 = (mvp->_44 - mvp->_43);
HXLINE( 116)			Float m4;
HXDLIN( 116)			if ((p_nx1 > 0)) {
HXLINE( 116)				m4 = this->xMax;
            			}
            			else {
HXLINE( 116)				m4 = this->xMin;
            			}
HXDLIN( 116)			Float m5;
HXDLIN( 116)			if ((p_ny1 > 0)) {
HXLINE( 116)				m5 = this->yMax;
            			}
            			else {
HXLINE( 116)				m5 = this->yMin;
            			}
HXDLIN( 116)			Float m6;
HXDLIN( 116)			if ((p_nz1 > 0)) {
HXLINE( 116)				m6 = this->zMax;
            			}
            			else {
HXLINE( 116)				m6 = this->zMin;
            			}
HXDLIN( 116)			Float m7 = (((p_nx1 * m4) + (p_ny1 * m5)) + (p_nz1 * m6));
HXLINE( 117)			if (((m7 + p_d1) < 0)) {
HXLINE( 118)				return -1;
            			}
HXLINE( 119)			Float n4;
HXDLIN( 119)			if ((p_nx1 > 0)) {
HXLINE( 119)				n4 = this->xMin;
            			}
            			else {
HXLINE( 119)				n4 = this->xMax;
            			}
HXDLIN( 119)			Float n5;
HXDLIN( 119)			if ((p_ny1 > 0)) {
HXLINE( 119)				n5 = this->yMin;
            			}
            			else {
HXLINE( 119)				n5 = this->yMax;
            			}
HXDLIN( 119)			Float n6;
HXDLIN( 119)			if ((p_nz1 > 0)) {
HXLINE( 119)				n6 = this->zMin;
            			}
            			else {
HXLINE( 119)				n6 = this->zMax;
            			}
HXDLIN( 119)			Float n7 = (((p_nx1 * n4) + (p_ny1 * n5)) + (p_nz1 * n6));
HXLINE( 120)			if (((n7 + p_d1) < 0)) {
HXLINE( 120)				ret = 0;
            			}
            		}
HXLINE( 123)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,inFrustumDetails,return )

void Bounds_obj::transform3x3( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_126_transform3x3)
HXLINE( 127)		Float xMin = this->xMin;
HXDLIN( 127)		Float yMin = this->yMin;
HXDLIN( 127)		Float zMin = this->zMin;
HXDLIN( 127)		Float xMax = this->xMax;
HXDLIN( 127)		Float yMax = this->yMax;
HXDLIN( 127)		Float zMax = this->zMax;
HXLINE( 128)		{
HXLINE( 128)			this->xMin = ((Float)1e20);
HXDLIN( 128)			this->xMax = ((Float)-1e20);
HXDLIN( 128)			this->yMin = ((Float)1e20);
HXDLIN( 128)			this->yMax = ((Float)-1e20);
HXDLIN( 128)			this->zMin = ((Float)1e20);
HXDLIN( 128)			this->zMax = ((Float)-1e20);
            		}
HXLINE( 129)		Float v_x = ((Float)0.);
HXDLIN( 129)		Float v_y = ((Float)0.);
HXDLIN( 129)		Float v_z = ((Float)0.);
HXLINE( 130)		{
HXLINE( 130)			v_x = xMin;
HXDLIN( 130)			v_y = yMin;
HXDLIN( 130)			v_z = zMin;
            		}
HXLINE( 131)		{
HXLINE( 131)			Float px = (((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31));
HXDLIN( 131)			Float py = (((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32));
HXDLIN( 131)			Float pz = (((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33));
HXDLIN( 131)			v_x = px;
HXDLIN( 131)			v_y = py;
HXDLIN( 131)			v_z = pz;
            		}
HXLINE( 132)		{
HXLINE( 132)			if ((v_x < this->xMin)) {
HXLINE( 132)				this->xMin = v_x;
            			}
HXDLIN( 132)			if ((v_x > this->xMax)) {
HXLINE( 132)				this->xMax = v_x;
            			}
HXDLIN( 132)			if ((v_y < this->yMin)) {
HXLINE( 132)				this->yMin = v_y;
            			}
HXDLIN( 132)			if ((v_y > this->yMax)) {
HXLINE( 132)				this->yMax = v_y;
            			}
HXDLIN( 132)			if ((v_z < this->zMin)) {
HXLINE( 132)				this->zMin = v_z;
            			}
HXDLIN( 132)			if ((v_z > this->zMax)) {
HXLINE( 132)				this->zMax = v_z;
            			}
            		}
HXLINE( 133)		{
HXLINE( 133)			v_x = xMin;
HXDLIN( 133)			v_y = yMin;
HXDLIN( 133)			v_z = zMax;
            		}
HXLINE( 134)		{
HXLINE( 134)			Float px1 = (((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31));
HXDLIN( 134)			Float py1 = (((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32));
HXDLIN( 134)			Float pz1 = (((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33));
HXDLIN( 134)			v_x = px1;
HXDLIN( 134)			v_y = py1;
HXDLIN( 134)			v_z = pz1;
            		}
HXLINE( 135)		{
HXLINE( 135)			if ((v_x < this->xMin)) {
HXLINE( 135)				this->xMin = v_x;
            			}
HXDLIN( 135)			if ((v_x > this->xMax)) {
HXLINE( 135)				this->xMax = v_x;
            			}
HXDLIN( 135)			if ((v_y < this->yMin)) {
HXLINE( 135)				this->yMin = v_y;
            			}
HXDLIN( 135)			if ((v_y > this->yMax)) {
HXLINE( 135)				this->yMax = v_y;
            			}
HXDLIN( 135)			if ((v_z < this->zMin)) {
HXLINE( 135)				this->zMin = v_z;
            			}
HXDLIN( 135)			if ((v_z > this->zMax)) {
HXLINE( 135)				this->zMax = v_z;
            			}
            		}
HXLINE( 136)		{
HXLINE( 136)			v_x = xMin;
HXDLIN( 136)			v_y = yMax;
HXDLIN( 136)			v_z = zMin;
            		}
HXLINE( 137)		{
HXLINE( 137)			Float px2 = (((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31));
HXDLIN( 137)			Float py2 = (((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32));
HXDLIN( 137)			Float pz2 = (((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33));
HXDLIN( 137)			v_x = px2;
HXDLIN( 137)			v_y = py2;
HXDLIN( 137)			v_z = pz2;
            		}
HXLINE( 138)		{
HXLINE( 138)			if ((v_x < this->xMin)) {
HXLINE( 138)				this->xMin = v_x;
            			}
HXDLIN( 138)			if ((v_x > this->xMax)) {
HXLINE( 138)				this->xMax = v_x;
            			}
HXDLIN( 138)			if ((v_y < this->yMin)) {
HXLINE( 138)				this->yMin = v_y;
            			}
HXDLIN( 138)			if ((v_y > this->yMax)) {
HXLINE( 138)				this->yMax = v_y;
            			}
HXDLIN( 138)			if ((v_z < this->zMin)) {
HXLINE( 138)				this->zMin = v_z;
            			}
HXDLIN( 138)			if ((v_z > this->zMax)) {
HXLINE( 138)				this->zMax = v_z;
            			}
            		}
HXLINE( 139)		{
HXLINE( 139)			v_x = xMin;
HXDLIN( 139)			v_y = yMax;
HXDLIN( 139)			v_z = zMax;
            		}
HXLINE( 140)		{
HXLINE( 140)			Float px3 = (((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31));
HXDLIN( 140)			Float py3 = (((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32));
HXDLIN( 140)			Float pz3 = (((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33));
HXDLIN( 140)			v_x = px3;
HXDLIN( 140)			v_y = py3;
HXDLIN( 140)			v_z = pz3;
            		}
HXLINE( 141)		{
HXLINE( 141)			if ((v_x < this->xMin)) {
HXLINE( 141)				this->xMin = v_x;
            			}
HXDLIN( 141)			if ((v_x > this->xMax)) {
HXLINE( 141)				this->xMax = v_x;
            			}
HXDLIN( 141)			if ((v_y < this->yMin)) {
HXLINE( 141)				this->yMin = v_y;
            			}
HXDLIN( 141)			if ((v_y > this->yMax)) {
HXLINE( 141)				this->yMax = v_y;
            			}
HXDLIN( 141)			if ((v_z < this->zMin)) {
HXLINE( 141)				this->zMin = v_z;
            			}
HXDLIN( 141)			if ((v_z > this->zMax)) {
HXLINE( 141)				this->zMax = v_z;
            			}
            		}
HXLINE( 142)		{
HXLINE( 142)			v_x = xMax;
HXDLIN( 142)			v_y = yMin;
HXDLIN( 142)			v_z = zMin;
            		}
HXLINE( 143)		{
HXLINE( 143)			Float px4 = (((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31));
HXDLIN( 143)			Float py4 = (((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32));
HXDLIN( 143)			Float pz4 = (((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33));
HXDLIN( 143)			v_x = px4;
HXDLIN( 143)			v_y = py4;
HXDLIN( 143)			v_z = pz4;
            		}
HXLINE( 144)		{
HXLINE( 144)			if ((v_x < this->xMin)) {
HXLINE( 144)				this->xMin = v_x;
            			}
HXDLIN( 144)			if ((v_x > this->xMax)) {
HXLINE( 144)				this->xMax = v_x;
            			}
HXDLIN( 144)			if ((v_y < this->yMin)) {
HXLINE( 144)				this->yMin = v_y;
            			}
HXDLIN( 144)			if ((v_y > this->yMax)) {
HXLINE( 144)				this->yMax = v_y;
            			}
HXDLIN( 144)			if ((v_z < this->zMin)) {
HXLINE( 144)				this->zMin = v_z;
            			}
HXDLIN( 144)			if ((v_z > this->zMax)) {
HXLINE( 144)				this->zMax = v_z;
            			}
            		}
HXLINE( 145)		{
HXLINE( 145)			v_x = xMax;
HXDLIN( 145)			v_y = yMin;
HXDLIN( 145)			v_z = zMax;
            		}
HXLINE( 146)		{
HXLINE( 146)			Float px5 = (((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31));
HXDLIN( 146)			Float py5 = (((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32));
HXDLIN( 146)			Float pz5 = (((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33));
HXDLIN( 146)			v_x = px5;
HXDLIN( 146)			v_y = py5;
HXDLIN( 146)			v_z = pz5;
            		}
HXLINE( 147)		{
HXLINE( 147)			if ((v_x < this->xMin)) {
HXLINE( 147)				this->xMin = v_x;
            			}
HXDLIN( 147)			if ((v_x > this->xMax)) {
HXLINE( 147)				this->xMax = v_x;
            			}
HXDLIN( 147)			if ((v_y < this->yMin)) {
HXLINE( 147)				this->yMin = v_y;
            			}
HXDLIN( 147)			if ((v_y > this->yMax)) {
HXLINE( 147)				this->yMax = v_y;
            			}
HXDLIN( 147)			if ((v_z < this->zMin)) {
HXLINE( 147)				this->zMin = v_z;
            			}
HXDLIN( 147)			if ((v_z > this->zMax)) {
HXLINE( 147)				this->zMax = v_z;
            			}
            		}
HXLINE( 148)		{
HXLINE( 148)			v_x = xMax;
HXDLIN( 148)			v_y = yMax;
HXDLIN( 148)			v_z = zMin;
            		}
HXLINE( 149)		{
HXLINE( 149)			Float px6 = (((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31));
HXDLIN( 149)			Float py6 = (((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32));
HXDLIN( 149)			Float pz6 = (((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33));
HXDLIN( 149)			v_x = px6;
HXDLIN( 149)			v_y = py6;
HXDLIN( 149)			v_z = pz6;
            		}
HXLINE( 150)		{
HXLINE( 150)			if ((v_x < this->xMin)) {
HXLINE( 150)				this->xMin = v_x;
            			}
HXDLIN( 150)			if ((v_x > this->xMax)) {
HXLINE( 150)				this->xMax = v_x;
            			}
HXDLIN( 150)			if ((v_y < this->yMin)) {
HXLINE( 150)				this->yMin = v_y;
            			}
HXDLIN( 150)			if ((v_y > this->yMax)) {
HXLINE( 150)				this->yMax = v_y;
            			}
HXDLIN( 150)			if ((v_z < this->zMin)) {
HXLINE( 150)				this->zMin = v_z;
            			}
HXDLIN( 150)			if ((v_z > this->zMax)) {
HXLINE( 150)				this->zMax = v_z;
            			}
            		}
HXLINE( 151)		{
HXLINE( 151)			v_x = xMax;
HXDLIN( 151)			v_y = yMax;
HXDLIN( 151)			v_z = zMax;
            		}
HXLINE( 152)		{
HXLINE( 152)			Float px7 = (((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31));
HXDLIN( 152)			Float py7 = (((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32));
HXDLIN( 152)			Float pz7 = (((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33));
HXDLIN( 152)			v_x = px7;
HXDLIN( 152)			v_y = py7;
HXDLIN( 152)			v_z = pz7;
            		}
HXLINE( 153)		{
HXLINE( 153)			if ((v_x < this->xMin)) {
HXLINE( 153)				this->xMin = v_x;
            			}
HXDLIN( 153)			if ((v_x > this->xMax)) {
HXLINE( 153)				this->xMax = v_x;
            			}
HXDLIN( 153)			if ((v_y < this->yMin)) {
HXLINE( 153)				this->yMin = v_y;
            			}
HXDLIN( 153)			if ((v_y > this->yMax)) {
HXLINE( 153)				this->yMax = v_y;
            			}
HXDLIN( 153)			if ((v_z < this->zMin)) {
HXLINE( 153)				this->zMin = v_z;
            			}
HXDLIN( 153)			if ((v_z > this->zMax)) {
HXLINE( 153)				this->zMax = v_z;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,transform3x3,(void))

void Bounds_obj::transform( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_156_transform)
HXLINE( 157)		Float xMin = this->xMin;
HXDLIN( 157)		Float yMin = this->yMin;
HXDLIN( 157)		Float zMin = this->zMin;
HXDLIN( 157)		Float xMax = this->xMax;
HXDLIN( 157)		Float yMax = this->yMax;
HXDLIN( 157)		Float zMax = this->zMax;
HXLINE( 158)		{
HXLINE( 158)			this->xMin = ((Float)1e20);
HXDLIN( 158)			this->xMax = ((Float)-1e20);
HXDLIN( 158)			this->yMin = ((Float)1e20);
HXDLIN( 158)			this->yMax = ((Float)-1e20);
HXDLIN( 158)			this->zMin = ((Float)1e20);
HXDLIN( 158)			this->zMax = ((Float)-1e20);
            		}
HXLINE( 160)		bool _hx_tmp;
HXDLIN( 160)		bool _hx_tmp1;
HXDLIN( 160)		if ((xMax < xMin)) {
HXLINE( 160)			_hx_tmp1 = (yMax < yMin);
            		}
            		else {
HXLINE( 160)			_hx_tmp1 = false;
            		}
HXDLIN( 160)		if (_hx_tmp1) {
HXLINE( 160)			_hx_tmp = (zMax < zMin);
            		}
            		else {
HXLINE( 160)			_hx_tmp = false;
            		}
HXDLIN( 160)		if (_hx_tmp) {
HXLINE( 161)			return;
            		}
HXLINE( 162)		Float v_x = ((Float)0.);
HXDLIN( 162)		Float v_y = ((Float)0.);
HXDLIN( 162)		Float v_z = ((Float)0.);
HXLINE( 163)		{
HXLINE( 163)			v_x = xMin;
HXDLIN( 163)			v_y = yMin;
HXDLIN( 163)			v_z = zMin;
            		}
HXLINE( 164)		{
HXLINE( 164)			Float px = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + m->_41);
HXDLIN( 164)			Float py = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + m->_42);
HXDLIN( 164)			Float pz = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + m->_43);
HXDLIN( 164)			v_x = px;
HXDLIN( 164)			v_y = py;
HXDLIN( 164)			v_z = pz;
            		}
HXLINE( 165)		{
HXLINE( 165)			if ((v_x < this->xMin)) {
HXLINE( 165)				this->xMin = v_x;
            			}
HXDLIN( 165)			if ((v_x > this->xMax)) {
HXLINE( 165)				this->xMax = v_x;
            			}
HXDLIN( 165)			if ((v_y < this->yMin)) {
HXLINE( 165)				this->yMin = v_y;
            			}
HXDLIN( 165)			if ((v_y > this->yMax)) {
HXLINE( 165)				this->yMax = v_y;
            			}
HXDLIN( 165)			if ((v_z < this->zMin)) {
HXLINE( 165)				this->zMin = v_z;
            			}
HXDLIN( 165)			if ((v_z > this->zMax)) {
HXLINE( 165)				this->zMax = v_z;
            			}
            		}
HXLINE( 166)		{
HXLINE( 166)			v_x = xMin;
HXDLIN( 166)			v_y = yMin;
HXDLIN( 166)			v_z = zMax;
            		}
HXLINE( 167)		{
HXLINE( 167)			Float px1 = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + m->_41);
HXDLIN( 167)			Float py1 = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + m->_42);
HXDLIN( 167)			Float pz1 = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + m->_43);
HXDLIN( 167)			v_x = px1;
HXDLIN( 167)			v_y = py1;
HXDLIN( 167)			v_z = pz1;
            		}
HXLINE( 168)		{
HXLINE( 168)			if ((v_x < this->xMin)) {
HXLINE( 168)				this->xMin = v_x;
            			}
HXDLIN( 168)			if ((v_x > this->xMax)) {
HXLINE( 168)				this->xMax = v_x;
            			}
HXDLIN( 168)			if ((v_y < this->yMin)) {
HXLINE( 168)				this->yMin = v_y;
            			}
HXDLIN( 168)			if ((v_y > this->yMax)) {
HXLINE( 168)				this->yMax = v_y;
            			}
HXDLIN( 168)			if ((v_z < this->zMin)) {
HXLINE( 168)				this->zMin = v_z;
            			}
HXDLIN( 168)			if ((v_z > this->zMax)) {
HXLINE( 168)				this->zMax = v_z;
            			}
            		}
HXLINE( 169)		{
HXLINE( 169)			v_x = xMin;
HXDLIN( 169)			v_y = yMax;
HXDLIN( 169)			v_z = zMin;
            		}
HXLINE( 170)		{
HXLINE( 170)			Float px2 = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + m->_41);
HXDLIN( 170)			Float py2 = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + m->_42);
HXDLIN( 170)			Float pz2 = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + m->_43);
HXDLIN( 170)			v_x = px2;
HXDLIN( 170)			v_y = py2;
HXDLIN( 170)			v_z = pz2;
            		}
HXLINE( 171)		{
HXLINE( 171)			if ((v_x < this->xMin)) {
HXLINE( 171)				this->xMin = v_x;
            			}
HXDLIN( 171)			if ((v_x > this->xMax)) {
HXLINE( 171)				this->xMax = v_x;
            			}
HXDLIN( 171)			if ((v_y < this->yMin)) {
HXLINE( 171)				this->yMin = v_y;
            			}
HXDLIN( 171)			if ((v_y > this->yMax)) {
HXLINE( 171)				this->yMax = v_y;
            			}
HXDLIN( 171)			if ((v_z < this->zMin)) {
HXLINE( 171)				this->zMin = v_z;
            			}
HXDLIN( 171)			if ((v_z > this->zMax)) {
HXLINE( 171)				this->zMax = v_z;
            			}
            		}
HXLINE( 172)		{
HXLINE( 172)			v_x = xMin;
HXDLIN( 172)			v_y = yMax;
HXDLIN( 172)			v_z = zMax;
            		}
HXLINE( 173)		{
HXLINE( 173)			Float px3 = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + m->_41);
HXDLIN( 173)			Float py3 = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + m->_42);
HXDLIN( 173)			Float pz3 = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + m->_43);
HXDLIN( 173)			v_x = px3;
HXDLIN( 173)			v_y = py3;
HXDLIN( 173)			v_z = pz3;
            		}
HXLINE( 174)		{
HXLINE( 174)			if ((v_x < this->xMin)) {
HXLINE( 174)				this->xMin = v_x;
            			}
HXDLIN( 174)			if ((v_x > this->xMax)) {
HXLINE( 174)				this->xMax = v_x;
            			}
HXDLIN( 174)			if ((v_y < this->yMin)) {
HXLINE( 174)				this->yMin = v_y;
            			}
HXDLIN( 174)			if ((v_y > this->yMax)) {
HXLINE( 174)				this->yMax = v_y;
            			}
HXDLIN( 174)			if ((v_z < this->zMin)) {
HXLINE( 174)				this->zMin = v_z;
            			}
HXDLIN( 174)			if ((v_z > this->zMax)) {
HXLINE( 174)				this->zMax = v_z;
            			}
            		}
HXLINE( 175)		{
HXLINE( 175)			v_x = xMax;
HXDLIN( 175)			v_y = yMin;
HXDLIN( 175)			v_z = zMin;
            		}
HXLINE( 176)		{
HXLINE( 176)			Float px4 = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + m->_41);
HXDLIN( 176)			Float py4 = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + m->_42);
HXDLIN( 176)			Float pz4 = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + m->_43);
HXDLIN( 176)			v_x = px4;
HXDLIN( 176)			v_y = py4;
HXDLIN( 176)			v_z = pz4;
            		}
HXLINE( 177)		{
HXLINE( 177)			if ((v_x < this->xMin)) {
HXLINE( 177)				this->xMin = v_x;
            			}
HXDLIN( 177)			if ((v_x > this->xMax)) {
HXLINE( 177)				this->xMax = v_x;
            			}
HXDLIN( 177)			if ((v_y < this->yMin)) {
HXLINE( 177)				this->yMin = v_y;
            			}
HXDLIN( 177)			if ((v_y > this->yMax)) {
HXLINE( 177)				this->yMax = v_y;
            			}
HXDLIN( 177)			if ((v_z < this->zMin)) {
HXLINE( 177)				this->zMin = v_z;
            			}
HXDLIN( 177)			if ((v_z > this->zMax)) {
HXLINE( 177)				this->zMax = v_z;
            			}
            		}
HXLINE( 178)		{
HXLINE( 178)			v_x = xMax;
HXDLIN( 178)			v_y = yMin;
HXDLIN( 178)			v_z = zMax;
            		}
HXLINE( 179)		{
HXLINE( 179)			Float px5 = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + m->_41);
HXDLIN( 179)			Float py5 = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + m->_42);
HXDLIN( 179)			Float pz5 = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + m->_43);
HXDLIN( 179)			v_x = px5;
HXDLIN( 179)			v_y = py5;
HXDLIN( 179)			v_z = pz5;
            		}
HXLINE( 180)		{
HXLINE( 180)			if ((v_x < this->xMin)) {
HXLINE( 180)				this->xMin = v_x;
            			}
HXDLIN( 180)			if ((v_x > this->xMax)) {
HXLINE( 180)				this->xMax = v_x;
            			}
HXDLIN( 180)			if ((v_y < this->yMin)) {
HXLINE( 180)				this->yMin = v_y;
            			}
HXDLIN( 180)			if ((v_y > this->yMax)) {
HXLINE( 180)				this->yMax = v_y;
            			}
HXDLIN( 180)			if ((v_z < this->zMin)) {
HXLINE( 180)				this->zMin = v_z;
            			}
HXDLIN( 180)			if ((v_z > this->zMax)) {
HXLINE( 180)				this->zMax = v_z;
            			}
            		}
HXLINE( 181)		{
HXLINE( 181)			v_x = xMax;
HXDLIN( 181)			v_y = yMax;
HXDLIN( 181)			v_z = zMin;
            		}
HXLINE( 182)		{
HXLINE( 182)			Float px6 = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + m->_41);
HXDLIN( 182)			Float py6 = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + m->_42);
HXDLIN( 182)			Float pz6 = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + m->_43);
HXDLIN( 182)			v_x = px6;
HXDLIN( 182)			v_y = py6;
HXDLIN( 182)			v_z = pz6;
            		}
HXLINE( 183)		{
HXLINE( 183)			if ((v_x < this->xMin)) {
HXLINE( 183)				this->xMin = v_x;
            			}
HXDLIN( 183)			if ((v_x > this->xMax)) {
HXLINE( 183)				this->xMax = v_x;
            			}
HXDLIN( 183)			if ((v_y < this->yMin)) {
HXLINE( 183)				this->yMin = v_y;
            			}
HXDLIN( 183)			if ((v_y > this->yMax)) {
HXLINE( 183)				this->yMax = v_y;
            			}
HXDLIN( 183)			if ((v_z < this->zMin)) {
HXLINE( 183)				this->zMin = v_z;
            			}
HXDLIN( 183)			if ((v_z > this->zMax)) {
HXLINE( 183)				this->zMax = v_z;
            			}
            		}
HXLINE( 184)		{
HXLINE( 184)			v_x = xMax;
HXDLIN( 184)			v_y = yMax;
HXDLIN( 184)			v_z = zMax;
            		}
HXLINE( 185)		{
HXLINE( 185)			Float px7 = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + m->_41);
HXDLIN( 185)			Float py7 = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + m->_42);
HXDLIN( 185)			Float pz7 = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + m->_43);
HXDLIN( 185)			v_x = px7;
HXDLIN( 185)			v_y = py7;
HXDLIN( 185)			v_z = pz7;
            		}
HXLINE( 186)		{
HXLINE( 186)			if ((v_x < this->xMin)) {
HXLINE( 186)				this->xMin = v_x;
            			}
HXDLIN( 186)			if ((v_x > this->xMax)) {
HXLINE( 186)				this->xMax = v_x;
            			}
HXDLIN( 186)			if ((v_y < this->yMin)) {
HXLINE( 186)				this->yMin = v_y;
            			}
HXDLIN( 186)			if ((v_y > this->yMax)) {
HXLINE( 186)				this->yMax = v_y;
            			}
HXDLIN( 186)			if ((v_z < this->zMin)) {
HXLINE( 186)				this->zMin = v_z;
            			}
HXDLIN( 186)			if ((v_z > this->zMax)) {
HXLINE( 186)				this->zMax = v_z;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,transform,(void))

bool Bounds_obj::collide( ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_190_collide)
HXDLIN( 190)		bool _hx_tmp;
HXDLIN( 190)		bool _hx_tmp1;
HXDLIN( 190)		bool _hx_tmp2;
HXDLIN( 190)		bool _hx_tmp3;
HXDLIN( 190)		bool _hx_tmp4;
HXDLIN( 190)		if (!((this->xMin > b->xMax))) {
HXDLIN( 190)			_hx_tmp4 = (this->yMin > b->yMax);
            		}
            		else {
HXDLIN( 190)			_hx_tmp4 = true;
            		}
HXDLIN( 190)		if (!(_hx_tmp4)) {
HXDLIN( 190)			_hx_tmp3 = (this->zMin > b->zMax);
            		}
            		else {
HXDLIN( 190)			_hx_tmp3 = true;
            		}
HXDLIN( 190)		if (!(_hx_tmp3)) {
HXDLIN( 190)			_hx_tmp2 = (this->xMax < b->xMin);
            		}
            		else {
HXDLIN( 190)			_hx_tmp2 = true;
            		}
HXDLIN( 190)		if (!(_hx_tmp2)) {
HXDLIN( 190)			_hx_tmp1 = (this->yMax < b->yMin);
            		}
            		else {
HXDLIN( 190)			_hx_tmp1 = true;
            		}
HXDLIN( 190)		if (!(_hx_tmp1)) {
HXDLIN( 190)			_hx_tmp = (this->zMax < b->zMin);
            		}
            		else {
HXDLIN( 190)			_hx_tmp = true;
            		}
HXDLIN( 190)		return !(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,collide,return )

bool Bounds_obj::contains( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_194_contains)
HXDLIN( 194)		bool _hx_tmp;
HXDLIN( 194)		bool _hx_tmp1;
HXDLIN( 194)		bool _hx_tmp2;
HXDLIN( 194)		bool _hx_tmp3;
HXDLIN( 194)		if ((p->x >= this->xMin)) {
HXDLIN( 194)			_hx_tmp3 = (p->x < this->xMax);
            		}
            		else {
HXDLIN( 194)			_hx_tmp3 = false;
            		}
HXDLIN( 194)		if (_hx_tmp3) {
HXDLIN( 194)			_hx_tmp2 = (p->y >= this->yMin);
            		}
            		else {
HXDLIN( 194)			_hx_tmp2 = false;
            		}
HXDLIN( 194)		if (_hx_tmp2) {
HXDLIN( 194)			_hx_tmp1 = (p->y < this->yMax);
            		}
            		else {
HXDLIN( 194)			_hx_tmp1 = false;
            		}
HXDLIN( 194)		if (_hx_tmp1) {
HXDLIN( 194)			_hx_tmp = (p->z >= this->zMin);
            		}
            		else {
HXDLIN( 194)			_hx_tmp = false;
            		}
HXDLIN( 194)		if (_hx_tmp) {
HXDLIN( 194)			return (p->z < this->zMax);
            		}
            		else {
HXDLIN( 194)			return false;
            		}
HXDLIN( 194)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,contains,return )

bool Bounds_obj::containsBounds( ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_198_containsBounds)
HXDLIN( 198)		bool _hx_tmp;
HXDLIN( 198)		bool _hx_tmp1;
HXDLIN( 198)		bool _hx_tmp2;
HXDLIN( 198)		bool _hx_tmp3;
HXDLIN( 198)		if ((this->xMin <= b->xMin)) {
HXDLIN( 198)			_hx_tmp3 = (this->yMin <= b->yMin);
            		}
            		else {
HXDLIN( 198)			_hx_tmp3 = false;
            		}
HXDLIN( 198)		if (_hx_tmp3) {
HXDLIN( 198)			_hx_tmp2 = (this->zMin <= b->zMin);
            		}
            		else {
HXDLIN( 198)			_hx_tmp2 = false;
            		}
HXDLIN( 198)		if (_hx_tmp2) {
HXDLIN( 198)			_hx_tmp1 = (this->xMax >= b->xMax);
            		}
            		else {
HXDLIN( 198)			_hx_tmp1 = false;
            		}
HXDLIN( 198)		if (_hx_tmp1) {
HXDLIN( 198)			_hx_tmp = (this->yMax >= b->yMax);
            		}
            		else {
HXDLIN( 198)			_hx_tmp = false;
            		}
HXDLIN( 198)		if (_hx_tmp) {
HXDLIN( 198)			return (this->zMax >= b->zMax);
            		}
            		else {
HXDLIN( 198)			return false;
            		}
HXDLIN( 198)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,containsBounds,return )

bool Bounds_obj::containsSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_202_containsSphere)
HXDLIN( 202)		bool _hx_tmp;
HXDLIN( 202)		bool _hx_tmp1;
HXDLIN( 202)		bool _hx_tmp2;
HXDLIN( 202)		bool _hx_tmp3;
HXDLIN( 202)		if ((this->xMin <= (s->x - s->r))) {
HXDLIN( 202)			_hx_tmp3 = (this->yMin <= (s->y - s->r));
            		}
            		else {
HXDLIN( 202)			_hx_tmp3 = false;
            		}
HXDLIN( 202)		if (_hx_tmp3) {
HXDLIN( 202)			_hx_tmp2 = (this->zMin <= (s->z - s->r));
            		}
            		else {
HXDLIN( 202)			_hx_tmp2 = false;
            		}
HXDLIN( 202)		if (_hx_tmp2) {
HXDLIN( 202)			_hx_tmp1 = (this->xMax >= (s->x + s->r));
            		}
            		else {
HXDLIN( 202)			_hx_tmp1 = false;
            		}
HXDLIN( 202)		if (_hx_tmp1) {
HXDLIN( 202)			_hx_tmp = (this->yMax >= (s->y + s->r));
            		}
            		else {
HXDLIN( 202)			_hx_tmp = false;
            		}
HXDLIN( 202)		if (_hx_tmp) {
HXDLIN( 202)			return (this->zMax >= (s->z + s->r));
            		}
            		else {
HXDLIN( 202)			return false;
            		}
HXDLIN( 202)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,containsSphere,return )

void Bounds_obj::add( ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_205_add)
HXLINE( 206)		if ((b->xMin < this->xMin)) {
HXLINE( 206)			this->xMin = b->xMin;
            		}
HXLINE( 207)		if ((b->xMax > this->xMax)) {
HXLINE( 207)			this->xMax = b->xMax;
            		}
HXLINE( 208)		if ((b->yMin < this->yMin)) {
HXLINE( 208)			this->yMin = b->yMin;
            		}
HXLINE( 209)		if ((b->yMax > this->yMax)) {
HXLINE( 209)			this->yMax = b->yMax;
            		}
HXLINE( 210)		if ((b->zMin < this->zMin)) {
HXLINE( 210)			this->zMin = b->zMin;
            		}
HXLINE( 211)		if ((b->zMax > this->zMax)) {
HXLINE( 211)			this->zMax = b->zMax;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,add,(void))

void Bounds_obj::addPoint( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_214_addPoint)
HXLINE( 215)		if ((p->x < this->xMin)) {
HXLINE( 215)			this->xMin = p->x;
            		}
HXLINE( 216)		if ((p->x > this->xMax)) {
HXLINE( 216)			this->xMax = p->x;
            		}
HXLINE( 217)		if ((p->y < this->yMin)) {
HXLINE( 217)			this->yMin = p->y;
            		}
HXLINE( 218)		if ((p->y > this->yMax)) {
HXLINE( 218)			this->yMax = p->y;
            		}
HXLINE( 219)		if ((p->z < this->zMin)) {
HXLINE( 219)			this->zMin = p->z;
            		}
HXLINE( 220)		if ((p->z > this->zMax)) {
HXLINE( 220)			this->zMax = p->z;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,addPoint,(void))

void Bounds_obj::addPos(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_223_addPos)
HXLINE( 224)		if ((x < this->xMin)) {
HXLINE( 224)			this->xMin = x;
            		}
HXLINE( 225)		if ((x > this->xMax)) {
HXLINE( 225)			this->xMax = x;
            		}
HXLINE( 226)		if ((y < this->yMin)) {
HXLINE( 226)			this->yMin = y;
            		}
HXLINE( 227)		if ((y > this->yMax)) {
HXLINE( 227)			this->yMax = y;
            		}
HXLINE( 228)		if ((z < this->zMin)) {
HXLINE( 228)			this->zMin = z;
            		}
HXLINE( 229)		if ((z > this->zMax)) {
HXLINE( 229)			this->zMax = z;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Bounds_obj,addPos,(void))

void Bounds_obj::addSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_233_addSphere)
HXDLIN( 233)		Float x = s->x;
HXDLIN( 233)		Float y = s->y;
HXDLIN( 233)		Float z = s->z;
HXDLIN( 233)		Float r = s->r;
HXDLIN( 233)		if (((x - r) < this->xMin)) {
HXDLIN( 233)			this->xMin = (x - r);
            		}
HXDLIN( 233)		if (((x + r) > this->xMax)) {
HXDLIN( 233)			this->xMax = (x + r);
            		}
HXDLIN( 233)		if (((y - r) < this->yMin)) {
HXDLIN( 233)			this->yMin = (y - r);
            		}
HXDLIN( 233)		if (((y + r) > this->yMax)) {
HXDLIN( 233)			this->yMax = (y + r);
            		}
HXDLIN( 233)		if (((z - r) < this->zMin)) {
HXDLIN( 233)			this->zMin = (z - r);
            		}
HXDLIN( 233)		if (((z + r) > this->zMax)) {
HXDLIN( 233)			this->zMax = (z + r);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,addSphere,(void))

void Bounds_obj::addSpherePos(Float x,Float y,Float z,Float r){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_236_addSpherePos)
HXLINE( 237)		if (((x - r) < this->xMin)) {
HXLINE( 237)			this->xMin = (x - r);
            		}
HXLINE( 238)		if (((x + r) > this->xMax)) {
HXLINE( 238)			this->xMax = (x + r);
            		}
HXLINE( 239)		if (((y - r) < this->yMin)) {
HXLINE( 239)			this->yMin = (y - r);
            		}
HXLINE( 240)		if (((y + r) > this->yMax)) {
HXLINE( 240)			this->yMax = (y + r);
            		}
HXLINE( 241)		if (((z - r) < this->zMin)) {
HXLINE( 241)			this->zMin = (z - r);
            		}
HXLINE( 242)		if (((z + r) > this->zMax)) {
HXLINE( 242)			this->zMax = (z + r);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Bounds_obj,addSpherePos,(void))

void Bounds_obj::intersection( ::h3d::col::Bounds a, ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_245_intersection)
HXLINE( 246)		Float a1 = a->xMin;
HXDLIN( 246)		Float b1 = b->xMin;
HXDLIN( 246)		Float xMin;
HXDLIN( 246)		if ((a1 < b1)) {
HXLINE( 246)			xMin = b1;
            		}
            		else {
HXLINE( 246)			xMin = a1;
            		}
HXLINE( 247)		Float a2 = a->yMin;
HXDLIN( 247)		Float b2 = b->yMin;
HXDLIN( 247)		Float yMin;
HXDLIN( 247)		if ((a2 < b2)) {
HXLINE( 247)			yMin = b2;
            		}
            		else {
HXLINE( 247)			yMin = a2;
            		}
HXLINE( 248)		Float a3 = a->zMin;
HXDLIN( 248)		Float b3 = b->zMin;
HXDLIN( 248)		Float zMin;
HXDLIN( 248)		if ((a3 < b3)) {
HXLINE( 248)			zMin = b3;
            		}
            		else {
HXLINE( 248)			zMin = a3;
            		}
HXLINE( 249)		Float a4 = a->xMax;
HXDLIN( 249)		Float b4 = b->xMax;
HXDLIN( 249)		Float xMax;
HXDLIN( 249)		if ((a4 > b4)) {
HXLINE( 249)			xMax = b4;
            		}
            		else {
HXLINE( 249)			xMax = a4;
            		}
HXLINE( 250)		Float a5 = a->yMax;
HXDLIN( 250)		Float b5 = b->yMax;
HXDLIN( 250)		Float yMax;
HXDLIN( 250)		if ((a5 > b5)) {
HXLINE( 250)			yMax = b5;
            		}
            		else {
HXLINE( 250)			yMax = a5;
            		}
HXLINE( 251)		Float a6 = a->zMax;
HXDLIN( 251)		Float b6 = b->zMax;
HXDLIN( 251)		Float zMax;
HXDLIN( 251)		if ((a6 > b6)) {
HXLINE( 251)			zMax = b6;
            		}
            		else {
HXLINE( 251)			zMax = a6;
            		}
HXLINE( 252)		this->xMin = xMin;
HXLINE( 253)		this->xMax = xMax;
HXLINE( 254)		this->yMin = yMin;
HXLINE( 255)		this->yMax = yMax;
HXLINE( 256)		this->zMin = zMin;
HXLINE( 257)		this->zMax = zMax;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,intersection,(void))

void Bounds_obj::offset(Float dx,Float dy,Float dz){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_260_offset)
HXLINE( 261)		 ::h3d::col::Bounds _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)		_hx_tmp->xMin = (_hx_tmp->xMin + dx);
HXLINE( 262)		 ::h3d::col::Bounds _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 262)		_hx_tmp1->xMax = (_hx_tmp1->xMax + dx);
HXLINE( 263)		 ::h3d::col::Bounds _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)		_hx_tmp2->yMin = (_hx_tmp2->yMin + dy);
HXLINE( 264)		 ::h3d::col::Bounds _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 264)		_hx_tmp3->yMax = (_hx_tmp3->yMax + dy);
HXLINE( 265)		 ::h3d::col::Bounds _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 265)		_hx_tmp4->zMin = (_hx_tmp4->zMin + dz);
HXLINE( 266)		 ::h3d::col::Bounds _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)		_hx_tmp5->zMax = (_hx_tmp5->zMax + dz);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Bounds_obj,offset,(void))

void Bounds_obj::setMin( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_269_setMin)
HXLINE( 270)		this->xMin = p->x;
HXLINE( 271)		this->yMin = p->y;
HXLINE( 272)		this->zMin = p->z;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,setMin,(void))

void Bounds_obj::setMax( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_275_setMax)
HXLINE( 276)		this->xMax = p->x;
HXLINE( 277)		this->yMax = p->y;
HXLINE( 278)		this->zMax = p->z;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,setMax,(void))

void Bounds_obj::load( ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_281_load)
HXLINE( 282)		this->xMin = b->xMin;
HXLINE( 283)		this->xMax = b->xMax;
HXLINE( 284)		this->yMin = b->yMin;
HXLINE( 285)		this->yMax = b->yMax;
HXLINE( 286)		this->zMin = b->zMin;
HXLINE( 287)		this->zMax = b->zMax;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,load,(void))

void Bounds_obj::scalePivot(Float v){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_290_scalePivot)
HXLINE( 291)		 ::h3d::col::Bounds _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 291)		_hx_tmp->xMin = (_hx_tmp->xMin * v);
HXLINE( 292)		 ::h3d::col::Bounds _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 292)		_hx_tmp1->yMin = (_hx_tmp1->yMin * v);
HXLINE( 293)		 ::h3d::col::Bounds _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 293)		_hx_tmp2->zMin = (_hx_tmp2->zMin * v);
HXLINE( 294)		 ::h3d::col::Bounds _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)		_hx_tmp3->xMax = (_hx_tmp3->xMax * v);
HXLINE( 295)		 ::h3d::col::Bounds _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)		_hx_tmp4->yMax = (_hx_tmp4->yMax * v);
HXLINE( 296)		 ::h3d::col::Bounds _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)		_hx_tmp5->zMax = (_hx_tmp5->zMax * v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,scalePivot,(void))

void Bounds_obj::scaleCenter(Float v){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_300_scaleCenter)
HXLINE( 301)		Float dx = (((this->xMax - this->xMin) * ((Float)0.5)) * v);
HXLINE( 302)		Float dy = (((this->yMax - this->yMin) * ((Float)0.5)) * v);
HXLINE( 303)		Float dz = (((this->zMax - this->zMin) * ((Float)0.5)) * v);
HXLINE( 304)		Float mx = ((this->xMax + this->xMin) * ((Float)0.5));
HXLINE( 305)		Float my = ((this->yMax + this->yMin) * ((Float)0.5));
HXLINE( 306)		Float mz = ((this->zMax + this->zMin) * ((Float)0.5));
HXLINE( 307)		this->xMin = (mx - dx);
HXLINE( 308)		this->yMin = (my - dy);
HXLINE( 309)		this->zMin = (mz - dz);
HXLINE( 310)		this->xMax = (mx + dx);
HXLINE( 311)		this->yMax = (my + dy);
HXLINE( 312)		this->zMax = (mz + dz);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,scaleCenter,(void))

 ::h3d::col::Point Bounds_obj::getMin(){
            	HX_GC_STACKFRAME(&_hx_pos_268746cd3af8e76c_316_getMin)
HXDLIN( 316)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->xMin,this->yMin,this->zMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,getMin,return )

 ::h3d::col::Point Bounds_obj::getCenter(){
            	HX_GC_STACKFRAME(&_hx_pos_268746cd3af8e76c_320_getCenter)
HXDLIN( 320)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,((this->xMin + this->xMax) * ((Float)0.5)),((this->yMin + this->yMax) * ((Float)0.5)),((this->zMin + this->zMax) * ((Float)0.5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,getCenter,return )

 ::h3d::col::Point Bounds_obj::getSize(){
            	HX_GC_STACKFRAME(&_hx_pos_268746cd3af8e76c_324_getSize)
HXDLIN( 324)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->xMax - this->xMin),(this->yMax - this->yMin),(this->zMax - this->zMin));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,getSize,return )

 ::h3d::col::Point Bounds_obj::getMax(){
            	HX_GC_STACKFRAME(&_hx_pos_268746cd3af8e76c_328_getMax)
HXDLIN( 328)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->xMax,this->yMax,this->zMax);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,getMax,return )

Float Bounds_obj::getVolume(){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_332_getVolume)
HXDLIN( 332)		return (((this->xMax - this->xMin) * (this->yMax - this->yMin)) * (this->zMax - this->zMin));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,getVolume,return )

Float Bounds_obj::get_xSize(){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_335_get_xSize)
HXDLIN( 335)		return (this->xMax - this->xMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,get_xSize,return )

Float Bounds_obj::get_ySize(){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_336_get_ySize)
HXDLIN( 336)		return (this->yMax - this->yMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,get_ySize,return )

Float Bounds_obj::get_zSize(){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_337_get_zSize)
HXDLIN( 337)		return (this->zMax - this->zMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,get_zSize,return )

Float Bounds_obj::set_xSize(Float v){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_338_set_xSize)
HXDLIN( 338)		this->xMax = (this->xMin + v);
HXDLIN( 338)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,set_xSize,return )

Float Bounds_obj::set_ySize(Float v){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_339_set_ySize)
HXDLIN( 339)		this->yMax = (this->yMin + v);
HXDLIN( 339)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,set_ySize,return )

Float Bounds_obj::set_zSize(Float v){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_340_set_zSize)
HXDLIN( 340)		this->zMax = (this->zMin + v);
HXDLIN( 340)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bounds_obj,set_zSize,return )

bool Bounds_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_343_isEmpty)
HXDLIN( 343)		bool _hx_tmp;
HXDLIN( 343)		if (!((this->xMax < this->xMin))) {
HXDLIN( 343)			_hx_tmp = (this->yMax < this->yMin);
            		}
            		else {
HXDLIN( 343)			_hx_tmp = true;
            		}
HXDLIN( 343)		if (!(_hx_tmp)) {
HXDLIN( 343)			return (this->zMax < this->zMin);
            		}
            		else {
HXDLIN( 343)			return true;
            		}
HXDLIN( 343)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,isEmpty,return )

void Bounds_obj::empty(){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_346_empty)
HXLINE( 347)		this->xMin = ((Float)1e20);
HXLINE( 348)		this->xMax = ((Float)-1e20);
HXLINE( 349)		this->yMin = ((Float)1e20);
HXLINE( 350)		this->yMax = ((Float)-1e20);
HXLINE( 351)		this->zMin = ((Float)1e20);
HXLINE( 352)		this->zMax = ((Float)-1e20);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,empty,(void))

void Bounds_obj::all(){
            	HX_STACKFRAME(&_hx_pos_268746cd3af8e76c_355_all)
HXLINE( 356)		this->xMin = ((Float)-1e20);
HXLINE( 357)		this->xMax = ((Float)1e20);
HXLINE( 358)		this->yMin = ((Float)-1e20);
HXLINE( 359)		this->yMax = ((Float)1e20);
HXLINE( 360)		this->zMin = ((Float)-1e20);
HXLINE( 361)		this->zMax = ((Float)1e20);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,all,(void))

 ::h3d::col::Bounds Bounds_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_268746cd3af8e76c_364_clone)
HXLINE( 365)		 ::h3d::col::Bounds b =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 366)		b->xMin = this->xMin;
HXLINE( 367)		b->xMax = this->xMax;
HXLINE( 368)		b->yMin = this->yMin;
HXLINE( 369)		b->yMax = this->yMax;
HXLINE( 370)		b->zMin = this->zMin;
HXLINE( 371)		b->zMax = this->zMax;
HXLINE( 372)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,clone,return )

::String Bounds_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_268746cd3af8e76c_376_toString)
HXDLIN( 376)		::String _hx_tmp = ((HX_("Bounds{",46,48,09,c1) + ::Std_obj::string( ::h3d::col::Point_obj::__alloc( HX_CTX ,this->xMin,this->yMin,this->zMin))) + HX_(",",2c,00,00,00));
HXDLIN( 376)		return ((_hx_tmp + ::Std_obj::string( ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->xMax - this->xMin),(this->yMax - this->yMin),(this->zMax - this->zMin)))) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,toString,return )

 ::h3d::col::Sphere Bounds_obj::toSphere(){
            	HX_GC_STACKFRAME(&_hx_pos_268746cd3af8e76c_379_toSphere)
HXLINE( 380)		Float dx = (this->xMax - this->xMin);
HXLINE( 381)		Float dy = (this->yMax - this->yMin);
HXLINE( 382)		Float dz = (this->zMax - this->zMin);
HXLINE( 383)		return  ::h3d::col::Sphere_obj::__alloc( HX_CTX ,((this->xMin + this->xMax) * ((Float)0.5)),((this->yMin + this->yMax) * ((Float)0.5)),((this->zMin + this->zMax) * ((Float)0.5)),(::Math_obj::sqrt((((dx * dx) + (dy * dy)) + (dz * dz))) * ((Float)0.5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bounds_obj,toSphere,return )

 ::h3d::col::Bounds Bounds_obj::fromPoints( ::h3d::col::Point min, ::h3d::col::Point max){
            	HX_GC_STACKFRAME(&_hx_pos_268746cd3af8e76c_386_fromPoints)
HXLINE( 387)		 ::h3d::col::Bounds b =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 388)		{
HXLINE( 388)			b->xMin = min->x;
HXDLIN( 388)			b->yMin = min->y;
HXDLIN( 388)			b->zMin = min->z;
            		}
HXLINE( 389)		{
HXLINE( 389)			b->xMax = max->x;
HXDLIN( 389)			b->yMax = max->y;
HXDLIN( 389)			b->zMax = max->z;
            		}
HXLINE( 390)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,fromPoints,return )

 ::h3d::col::Bounds Bounds_obj::fromValues(Float x,Float y,Float z,Float dx,Float dy,Float dz){
            	HX_GC_STACKFRAME(&_hx_pos_268746cd3af8e76c_393_fromValues)
HXLINE( 394)		 ::h3d::col::Bounds b =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 395)		b->xMin = x;
HXLINE( 396)		b->yMin = y;
HXLINE( 397)		b->zMin = z;
HXLINE( 398)		b->xMax = (x + dx);
HXLINE( 399)		b->yMax = (y + dy);
HXLINE( 400)		b->zMax = (z + dz);
HXLINE( 401)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Bounds_obj,fromValues,return )


::hx::ObjectPtr< Bounds_obj > Bounds_obj::__new() {
	::hx::ObjectPtr< Bounds_obj > __this = new Bounds_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Bounds_obj > Bounds_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Bounds_obj *__this = (Bounds_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Bounds_obj), false, "h3d.col.Bounds"));
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
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"all") ) { return ::hx::Val( all_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { return ::hx::Val( xMin ); }
		if (HX_FIELD_EQ(inName,"xMax") ) { return ::hx::Val( xMax ); }
		if (HX_FIELD_EQ(inName,"yMin") ) { return ::hx::Val( yMin ); }
		if (HX_FIELD_EQ(inName,"yMax") ) { return ::hx::Val( yMax ); }
		if (HX_FIELD_EQ(inName,"zMin") ) { return ::hx::Val( zMin ); }
		if (HX_FIELD_EQ(inName,"zMax") ) { return ::hx::Val( zMax ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_xSize() ); }
		if (HX_FIELD_EQ(inName,"ySize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ySize() ); }
		if (HX_FIELD_EQ(inName,"zSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_zSize() ); }
		if (HX_FIELD_EQ(inName,"empty") ) { return ::hx::Val( empty_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addPos") ) { return ::hx::Val( addPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMin") ) { return ::hx::Val( setMin_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMax") ) { return ::hx::Val( setMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMin") ) { return ::hx::Val( getMin_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMax") ) { return ::hx::Val( getMax_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return ::hx::Val( collide_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return ::hx::Val( getSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inSphere") ) { return ::hx::Val( inSphere_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"toSphere") ) { return ::hx::Val( toSphere_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		if (HX_FIELD_EQ(inName,"testPlane") ) { return ::hx::Val( testPlane_dyn() ); }
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"addSphere") ) { return ::hx::Val( addSphere_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCenter") ) { return ::hx::Val( getCenter_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVolume") ) { return ::hx::Val( getVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_xSize") ) { return ::hx::Val( get_xSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ySize") ) { return ::hx::Val( get_ySize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_zSize") ) { return ::hx::Val( get_zSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_xSize") ) { return ::hx::Val( set_xSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ySize") ) { return ::hx::Val( set_ySize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_zSize") ) { return ::hx::Val( set_zSize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scalePivot") ) { return ::hx::Val( scalePivot_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaleCenter") ) { return ::hx::Val( scaleCenter_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transform3x3") ) { return ::hx::Val( transform3x3_dyn() ); }
		if (HX_FIELD_EQ(inName,"addSpherePos") ) { return ::hx::Val( addSpherePos_dyn() ); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return ::hx::Val( intersection_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"containsBounds") ) { return ::hx::Val( containsBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"containsSphere") ) { return ::hx::Val( containsSphere_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"inFrustumDetails") ) { return ::hx::Val( inFrustumDetails_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bounds_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromPoints") ) { outValue = fromPoints_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromValues") ) { outValue = fromValues_dyn(); return true; }
	}
	return false;
}

::hx::Val Bounds_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { xMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xMax") ) { xMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMin") ) { yMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMax") ) { yMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zMin") ) { zMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zMax") ) { zMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_xSize(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"ySize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ySize(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"zSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_zSize(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("xMin",fa,63,8c,4f));
	outFields->push(HX_("xMax",0c,5d,8c,4f));
	outFields->push(HX_("yMin",99,9a,35,50));
	outFields->push(HX_("yMax",ab,93,35,50));
	outFields->push(HX_("zMin",38,d1,de,50));
	outFields->push(HX_("zMax",4a,ca,de,50));
	outFields->push(HX_("xSize",59,69,42,4f));
	outFields->push(HX_("ySize",da,fd,a8,e2));
	outFields->push(HX_("zSize",5b,92,0f,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Bounds_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Bounds_obj,xMin),HX_("xMin",fa,63,8c,4f)},
	{::hx::fsFloat,(int)offsetof(Bounds_obj,xMax),HX_("xMax",0c,5d,8c,4f)},
	{::hx::fsFloat,(int)offsetof(Bounds_obj,yMin),HX_("yMin",99,9a,35,50)},
	{::hx::fsFloat,(int)offsetof(Bounds_obj,yMax),HX_("yMax",ab,93,35,50)},
	{::hx::fsFloat,(int)offsetof(Bounds_obj,zMin),HX_("zMin",38,d1,de,50)},
	{::hx::fsFloat,(int)offsetof(Bounds_obj,zMax),HX_("zMax",4a,ca,de,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Bounds_obj_sStaticStorageInfo = 0;
#endif

static ::String Bounds_obj_sMemberFields[] = {
	HX_("xMin",fa,63,8c,4f),
	HX_("xMax",0c,5d,8c,4f),
	HX_("yMin",99,9a,35,50),
	HX_("yMax",ab,93,35,50),
	HX_("zMin",38,d1,de,50),
	HX_("zMax",4a,ca,de,50),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inSphere",d2,f8,74,45),
	HX_("testPlane",aa,3c,90,8d),
	HX_("rayIntersection",53,fb,28,64),
	HX_("inFrustumDetails",45,64,99,4f),
	HX_("transform3x3",c2,19,71,3e),
	HX_("transform",6c,2d,93,45),
	HX_("collide",7e,af,63,ed),
	HX_("contains",1f,5a,7b,2c),
	HX_("containsBounds",f4,35,46,6a),
	HX_("containsSphere",8c,5e,1f,c1),
	HX_("add",21,f2,49,00),
	HX_("addPoint",6f,da,ec,3f),
	HX_("addPos",f3,6d,06,9f),
	HX_("addSphere",0e,e4,1a,75),
	HX_("addSpherePos",26,ae,49,f5),
	HX_("intersection",49,a2,61,88),
	HX_("offset",93,97,3f,60),
	HX_("setMin",10,9f,6a,6f),
	HX_("setMax",22,98,6a,6f),
	HX_("load",26,9a,b7,47),
	HX_("scalePivot",d8,f7,d5,e3),
	HX_("scaleCenter",ff,eb,de,f1),
	HX_("getMin",9c,4a,22,a3),
	HX_("getCenter",0b,af,31,82),
	HX_("getSize",77,50,d6,1e),
	HX_("getMax",ae,43,22,a3),
	HX_("getVolume",10,b3,a9,db),
	HX_("get_xSize",b0,c5,eb,92),
	HX_("get_ySize",31,5a,52,26),
	HX_("get_zSize",b2,ee,b8,b9),
	HX_("set_xSize",bc,b1,3c,76),
	HX_("set_ySize",3d,46,a3,09),
	HX_("set_zSize",be,da,09,9d),
	HX_("isEmpty",43,de,5f,0c),
	HX_("empty",8d,3a,da,6f),
	HX_("all",21,f9,49,00),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("toSphere",e8,56,35,e4),
	::String(null()) };

::hx::Class Bounds_obj::__mClass;

static ::String Bounds_obj_sStaticFields[] = {
	HX_("fromPoints",2d,17,72,3a),
	HX_("fromValues",ec,08,fb,92),
	::String(null())
};

void Bounds_obj::__register()
{
	Bounds_obj _hx_dummy;
	Bounds_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.Bounds",18,50,cf,da);
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

} // end namespace h3d
} // end namespace col
