#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_Frustum
#include <h3d/col/Frustum.h>
#endif
#ifndef INCLUDED_h3d_col_ObjectCollider
#include <h3d/col/ObjectCollider.h>
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
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_31f849462ed26ef7_10_new,"h3d.col.ObjectCollider","new",0x11c2c9a8,"h3d.col.ObjectCollider.new","h3d/col/ObjectCollider.hx",10,0x59125c06)
HX_LOCAL_STACK_FRAME(_hx_pos_31f849462ed26ef7_15_rayIntersection,"h3d.col.ObjectCollider","rayIntersection",0xbaccc09b,"h3d.col.ObjectCollider.rayIntersection","h3d/col/ObjectCollider.hx",15,0x59125c06)
HX_LOCAL_STACK_FRAME(_hx_pos_31f849462ed26ef7_33_contains,"h3d.col.ObjectCollider","contains",0xd2d7bbd7,"h3d.col.ObjectCollider.contains","h3d/col/ObjectCollider.hx",33,0x59125c06)
HX_LOCAL_STACK_FRAME(_hx_pos_31f849462ed26ef7_41_inFrustum,"h3d.col.ObjectCollider","inFrustum",0xa0f5a945,"h3d.col.ObjectCollider.inFrustum","h3d/col/ObjectCollider.hx",41,0x59125c06)
HX_LOCAL_STACK_FRAME(_hx_pos_31f849462ed26ef7_49_inSphere,"h3d.col.ObjectCollider","inSphere",0xebd15a8a,"h3d.col.ObjectCollider.inSphere","h3d/col/ObjectCollider.hx",49,0x59125c06)
HX_LOCAL_STACK_FRAME(_hx_pos_31f849462ed26ef7_7_boot,"h3d.col.ObjectCollider","boot",0x70c6a9ea,"h3d.col.ObjectCollider.boot","h3d/col/ObjectCollider.hx",7,0x59125c06)
HX_LOCAL_STACK_FRAME(_hx_pos_31f849462ed26ef7_8_boot,"h3d.col.ObjectCollider","boot",0x70c6a9ea,"h3d.col.ObjectCollider.boot","h3d/col/ObjectCollider.hx",8,0x59125c06)
namespace h3d{
namespace col{

void ObjectCollider_obj::__construct( ::h3d::scene::Object obj,::Dynamic collider){
            	HX_STACKFRAME(&_hx_pos_31f849462ed26ef7_10_new)
HXLINE(  11)		this->obj = obj;
HXLINE(  12)		this->collider = collider;
            	}

Dynamic ObjectCollider_obj::__CreateEmpty() { return new ObjectCollider_obj; }

void *ObjectCollider_obj::_hx_vtable = 0;

Dynamic ObjectCollider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ObjectCollider_obj > _hx_result = new ObjectCollider_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ObjectCollider_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5016985a;
}

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_col_ObjectCollider__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

static ::h3d::col::Collider_obj _hx_h3d_col_ObjectCollider__hx_h3d_col_Collider= {
	( Float (::hx::Object::*)( ::h3d::col::Ray,bool))&::h3d::col::ObjectCollider_obj::rayIntersection,
	( bool (::hx::Object::*)( ::h3d::col::Point))&::h3d::col::ObjectCollider_obj::contains,
	( bool (::hx::Object::*)( ::h3d::col::Frustum, ::h3d::Matrix))&::h3d::col::ObjectCollider_obj::inFrustum,
	( bool (::hx::Object::*)( ::h3d::col::Sphere))&::h3d::col::ObjectCollider_obj::inSphere,
};

void *ObjectCollider_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa6f1a21a: return &_hx_h3d_col_ObjectCollider__hx_hxd_impl__Serializable_NoSerializeSupport;
		case (int)0x12a1e47b: return &_hx_h3d_col_ObjectCollider__hx_h3d_col_Collider;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float ObjectCollider_obj::rayIntersection( ::h3d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_31f849462ed26ef7_15_rayIntersection)
HXLINE(  16)		 ::h3d::col::Ray tmpRay = ::h3d::col::ObjectCollider_obj::TMP_RAY;
HXLINE(  17)		::h3d::col::ObjectCollider_obj::TMP_RAY = null();
HXLINE(  18)		{
HXLINE(  18)			tmpRay->px = r->px;
HXDLIN(  18)			tmpRay->py = r->py;
HXDLIN(  18)			tmpRay->pz = r->pz;
HXDLIN(  18)			tmpRay->lx = r->lx;
HXDLIN(  18)			tmpRay->ly = r->ly;
HXDLIN(  18)			tmpRay->lz = r->lz;
            		}
HXLINE(  19)		{
HXLINE(  19)			 ::h3d::Matrix m = this->obj->getInvPos();
HXDLIN(  19)			Float p_x = r->px;
HXDLIN(  19)			Float p_y = r->py;
HXDLIN(  19)			Float p_z = r->pz;
HXDLIN(  19)			Float p_w = ((Float)1.);
HXDLIN(  19)			{
HXLINE(  19)				Float px = ((((p_x * m->_11) + (p_y * m->_21)) + (p_z * m->_31)) + (p_w * m->_41));
HXDLIN(  19)				Float py = ((((p_x * m->_12) + (p_y * m->_22)) + (p_z * m->_32)) + (p_w * m->_42));
HXDLIN(  19)				Float pz = ((((p_x * m->_13) + (p_y * m->_23)) + (p_z * m->_33)) + (p_w * m->_43));
HXDLIN(  19)				p_x = px;
HXDLIN(  19)				p_y = py;
HXDLIN(  19)				p_z = pz;
            			}
HXDLIN(  19)			r->px = p_x;
HXDLIN(  19)			r->py = p_y;
HXDLIN(  19)			r->pz = p_z;
HXDLIN(  19)			Float l_x = r->lx;
HXDLIN(  19)			Float l_y = r->ly;
HXDLIN(  19)			Float l_z = r->lz;
HXDLIN(  19)			Float l_w = ((Float)1.);
HXDLIN(  19)			{
HXLINE(  19)				Float px1 = (((l_x * m->_11) + (l_y * m->_21)) + (l_z * m->_31));
HXDLIN(  19)				Float py1 = (((l_x * m->_12) + (l_y * m->_22)) + (l_z * m->_32));
HXDLIN(  19)				Float pz1 = (((l_x * m->_13) + (l_y * m->_23)) + (l_z * m->_33));
HXDLIN(  19)				l_x = px1;
HXDLIN(  19)				l_y = py1;
HXDLIN(  19)				l_z = pz1;
            			}
HXDLIN(  19)			r->lx = l_x;
HXDLIN(  19)			r->ly = l_y;
HXDLIN(  19)			r->lz = l_z;
HXDLIN(  19)			r->normalize();
            		}
HXLINE(  20)		Float hit = ::h3d::col::Collider_obj::rayIntersection(this->collider,r,bestMatch);
HXLINE(  21)		if ((hit < 0)) {
HXLINE(  22)			{
HXLINE(  22)				r->px = tmpRay->px;
HXDLIN(  22)				r->py = tmpRay->py;
HXDLIN(  22)				r->pz = tmpRay->pz;
HXDLIN(  22)				r->lx = tmpRay->lx;
HXDLIN(  22)				r->ly = tmpRay->ly;
HXDLIN(  22)				r->lz = tmpRay->lz;
            			}
HXLINE(  23)			::h3d::col::ObjectCollider_obj::TMP_RAY = tmpRay;
HXLINE(  24)			return hit;
            		}
HXLINE(  26)		Float pt_x = (r->px + (hit * r->lx));
HXDLIN(  26)		Float pt_y = (r->py + (hit * r->ly));
HXDLIN(  26)		Float pt_z = (r->pz + (hit * r->lz));
HXLINE(  27)		{
HXLINE(  27)			 ::h3d::Matrix m1 = this->obj->absPos;
HXDLIN(  27)			Float px2 = ((((pt_x * m1->_11) + (pt_y * m1->_21)) + (pt_z * m1->_31)) + m1->_41);
HXDLIN(  27)			Float py2 = ((((pt_x * m1->_12) + (pt_y * m1->_22)) + (pt_z * m1->_32)) + m1->_42);
HXDLIN(  27)			Float pz2 = ((((pt_x * m1->_13) + (pt_y * m1->_23)) + (pt_z * m1->_33)) + m1->_43);
HXDLIN(  27)			pt_x = px2;
HXDLIN(  27)			pt_y = py2;
HXDLIN(  27)			pt_z = pz2;
            		}
HXLINE(  28)		{
HXLINE(  28)			r->px = tmpRay->px;
HXDLIN(  28)			r->py = tmpRay->py;
HXDLIN(  28)			r->pz = tmpRay->pz;
HXDLIN(  28)			r->lx = tmpRay->lx;
HXDLIN(  28)			r->ly = tmpRay->ly;
HXDLIN(  28)			r->lz = tmpRay->lz;
            		}
HXLINE(  29)		::h3d::col::ObjectCollider_obj::TMP_RAY = tmpRay;
HXLINE(  30)		Float dx = (pt_x - r->px);
HXDLIN(  30)		Float dy = (pt_y - r->py);
HXDLIN(  30)		Float dz = (pt_z - r->pz);
HXDLIN(  30)		return ::Math_obj::sqrt((((dx * dx) + (dy * dy)) + (dz * dz)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectCollider_obj,rayIntersection,return )

bool ObjectCollider_obj::contains( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_31f849462ed26ef7_33_contains)
HXLINE(  34)		Float ptmp_x = p->x;
HXDLIN(  34)		Float ptmp_y = p->y;
HXDLIN(  34)		Float ptmp_z = p->z;
HXLINE(  35)		{
HXLINE(  35)			 ::h3d::Matrix m = this->obj->getInvPos();
HXDLIN(  35)			Float px = ((((p->x * m->_11) + (p->y * m->_21)) + (p->z * m->_31)) + m->_41);
HXDLIN(  35)			Float py = ((((p->x * m->_12) + (p->y * m->_22)) + (p->z * m->_32)) + m->_42);
HXDLIN(  35)			Float pz = ((((p->x * m->_13) + (p->y * m->_23)) + (p->z * m->_33)) + m->_43);
HXDLIN(  35)			p->x = px;
HXDLIN(  35)			p->y = py;
HXDLIN(  35)			p->z = pz;
            		}
HXLINE(  36)		bool b = ::h3d::col::Collider_obj::contains(this->collider,p);
HXLINE(  37)		{
HXLINE(  37)			p->x = ptmp_x;
HXDLIN(  37)			p->y = ptmp_y;
HXDLIN(  37)			p->z = ptmp_z;
            		}
HXLINE(  38)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectCollider_obj,contains,return )

bool ObjectCollider_obj::inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_31f849462ed26ef7_41_inFrustum)
HXLINE(  42)		if (::hx::IsNull( m )) {
HXLINE(  43)			::Dynamic _hx_tmp = this->collider;
HXDLIN(  43)			return ::h3d::col::Collider_obj::inFrustum(_hx_tmp,f,this->obj->getAbsPos());
            		}
HXLINE(  44)		 ::h3d::Matrix mat = ::h3d::col::ObjectCollider_obj::TMP_MAT;
HXLINE(  45)		{
HXLINE(  45)			 ::h3d::Matrix b = this->obj->getAbsPos();
HXDLIN(  45)			Float m11 = m->_11;
HXDLIN(  45)			Float m12 = m->_12;
HXDLIN(  45)			Float m13 = m->_13;
HXDLIN(  45)			Float m21 = m->_21;
HXDLIN(  45)			Float m22 = m->_22;
HXDLIN(  45)			Float m23 = m->_23;
HXDLIN(  45)			Float a31 = m->_31;
HXDLIN(  45)			Float a32 = m->_32;
HXDLIN(  45)			Float a33 = m->_33;
HXDLIN(  45)			Float a41 = m->_41;
HXDLIN(  45)			Float a42 = m->_42;
HXDLIN(  45)			Float a43 = m->_43;
HXDLIN(  45)			Float b11 = b->_11;
HXDLIN(  45)			Float b12 = b->_12;
HXDLIN(  45)			Float b13 = b->_13;
HXDLIN(  45)			Float b21 = b->_21;
HXDLIN(  45)			Float b22 = b->_22;
HXDLIN(  45)			Float b23 = b->_23;
HXDLIN(  45)			Float b31 = b->_31;
HXDLIN(  45)			Float b32 = b->_32;
HXDLIN(  45)			Float b33 = b->_33;
HXDLIN(  45)			Float b41 = b->_41;
HXDLIN(  45)			Float b42 = b->_42;
HXDLIN(  45)			Float b43 = b->_43;
HXDLIN(  45)			mat->_11 = (((m11 * b11) + (m12 * b21)) + (m13 * b31));
HXDLIN(  45)			mat->_12 = (((m11 * b12) + (m12 * b22)) + (m13 * b32));
HXDLIN(  45)			mat->_13 = (((m11 * b13) + (m12 * b23)) + (m13 * b33));
HXDLIN(  45)			mat->_14 = ( (Float)(0) );
HXDLIN(  45)			mat->_21 = (((m21 * b11) + (m22 * b21)) + (m23 * b31));
HXDLIN(  45)			mat->_22 = (((m21 * b12) + (m22 * b22)) + (m23 * b32));
HXDLIN(  45)			mat->_23 = (((m21 * b13) + (m22 * b23)) + (m23 * b33));
HXDLIN(  45)			mat->_24 = ( (Float)(0) );
HXDLIN(  45)			mat->_31 = (((a31 * b11) + (a32 * b21)) + (a33 * b31));
HXDLIN(  45)			mat->_32 = (((a31 * b12) + (a32 * b22)) + (a33 * b32));
HXDLIN(  45)			mat->_33 = (((a31 * b13) + (a32 * b23)) + (a33 * b33));
HXDLIN(  45)			mat->_34 = ( (Float)(0) );
HXDLIN(  45)			mat->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + b41);
HXDLIN(  45)			mat->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + b42);
HXDLIN(  45)			mat->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + b43);
HXDLIN(  45)			mat->_44 = ( (Float)(1) );
            		}
HXLINE(  46)		return ::h3d::col::Collider_obj::inFrustum(this->collider,f,mat);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectCollider_obj,inFrustum,return )

bool ObjectCollider_obj::inSphere( ::h3d::col::Sphere s){
            	HX_GC_STACKFRAME(&_hx_pos_31f849462ed26ef7_49_inSphere)
HXLINE(  50)		 ::h3d::Matrix invMat = this->obj->getInvPos();
HXLINE(  51)		Float oldX = s->x;
HXDLIN(  51)		Float oldY = s->y;
HXDLIN(  51)		Float oldZ = s->z;
HXDLIN(  51)		Float oldR = s->r;
HXLINE(  52)		Float center_x = s->x;
HXDLIN(  52)		Float center_y = s->y;
HXDLIN(  52)		Float center_z = s->z;
HXLINE(  53)		{
HXLINE(  53)			Float px = ((((center_x * invMat->_11) + (center_y * invMat->_21)) + (center_z * invMat->_31)) + invMat->_41);
HXDLIN(  53)			Float py = ((((center_x * invMat->_12) + (center_y * invMat->_22)) + (center_z * invMat->_32)) + invMat->_42);
HXDLIN(  53)			Float pz = ((((center_x * invMat->_13) + (center_y * invMat->_23)) + (center_z * invMat->_33)) + invMat->_43);
HXDLIN(  53)			center_x = px;
HXDLIN(  53)			center_y = py;
HXDLIN(  53)			center_z = pz;
            		}
HXLINE(  54)		 ::h3d::Vector v = null();
HXDLIN(  54)		if (::hx::IsNull( v )) {
HXLINE( 258)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  54)		v->x = ::Math_obj::sqrt((((invMat->_11 * invMat->_11) + (invMat->_12 * invMat->_12)) + (invMat->_13 * invMat->_13)));
HXDLIN(  54)		v->y = ::Math_obj::sqrt((((invMat->_21 * invMat->_21) + (invMat->_22 * invMat->_22)) + (invMat->_23 * invMat->_23)));
HXDLIN(  54)		v->z = ::Math_obj::sqrt((((invMat->_31 * invMat->_31) + (invMat->_32 * invMat->_32)) + (invMat->_33 * invMat->_33)));
HXDLIN(  54)		if (((((invMat->_11 * ((invMat->_22 * invMat->_33) - (invMat->_23 * invMat->_32))) + (invMat->_12 * ((invMat->_23 * invMat->_31) - (invMat->_21 * invMat->_33)))) + (invMat->_13 * ((invMat->_21 * invMat->_32) - (invMat->_22 * invMat->_31)))) < 0)) {
HXLINE(  54)			 ::h3d::Vector v1 = v;
HXDLIN(  54)			v1->x = (v1->x * ( (Float)(-1) ));
HXDLIN(  54)			 ::h3d::Vector v2 = v;
HXDLIN(  54)			v2->y = (v2->y * ( (Float)(-1) ));
HXDLIN(  54)			 ::h3d::Vector v3 = v;
HXDLIN(  54)			v3->z = (v3->z * ( (Float)(-1) ));
            		}
HXDLIN(  54)		 ::h3d::Vector scale = v;
HXLINE(  55)		s->x = center_x;
HXLINE(  56)		s->y = center_y;
HXLINE(  57)		s->z = center_z;
HXLINE(  58)		 ::h3d::col::Sphere s1 = s;
HXDLIN(  58)		s1->r = (s1->r * ::Math_obj::max(::Math_obj::max(scale->x,scale->y),scale->z));
HXLINE(  59)		bool res = ::h3d::col::Collider_obj::inSphere(this->collider,s);
HXLINE(  60)		s->x = oldX;
HXLINE(  61)		s->y = oldY;
HXLINE(  62)		s->z = oldZ;
HXLINE(  63)		s->r = oldR;
HXLINE(  64)		return res;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectCollider_obj,inSphere,return )

 ::h3d::col::Ray ObjectCollider_obj::TMP_RAY;

 ::h3d::Matrix ObjectCollider_obj::TMP_MAT;


::hx::ObjectPtr< ObjectCollider_obj > ObjectCollider_obj::__new( ::h3d::scene::Object obj,::Dynamic collider) {
	::hx::ObjectPtr< ObjectCollider_obj > __this = new ObjectCollider_obj();
	__this->__construct(obj,collider);
	return __this;
}

::hx::ObjectPtr< ObjectCollider_obj > ObjectCollider_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Object obj,::Dynamic collider) {
	ObjectCollider_obj *__this = (ObjectCollider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ObjectCollider_obj), true, "h3d.col.ObjectCollider"));
	*(void **)__this = ObjectCollider_obj::_hx_vtable;
	__this->__construct(obj,collider);
	return __this;
}

ObjectCollider_obj::ObjectCollider_obj()
{
}

void ObjectCollider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectCollider);
	HX_MARK_MEMBER_NAME(obj,"obj");
	HX_MARK_MEMBER_NAME(collider,"collider");
	HX_MARK_END_CLASS();
}

void ObjectCollider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(obj,"obj");
	HX_VISIT_MEMBER_NAME(collider,"collider");
}

::hx::Val ObjectCollider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return ::hx::Val( collider ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"inSphere") ) { return ::hx::Val( inSphere_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ObjectCollider_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TMP_RAY") ) { outValue = ( TMP_RAY ); return true; }
		if (HX_FIELD_EQ(inName,"TMP_MAT") ) { outValue = ( TMP_MAT ); return true; }
	}
	return false;
}

::hx::Val ObjectCollider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { obj=inValue.Cast<  ::h3d::scene::Object >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ObjectCollider_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TMP_RAY") ) { TMP_RAY=ioValue.Cast<  ::h3d::col::Ray >(); return true; }
		if (HX_FIELD_EQ(inName,"TMP_MAT") ) { TMP_MAT=ioValue.Cast<  ::h3d::Matrix >(); return true; }
	}
	return false;
}

void ObjectCollider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("obj",f7,8f,54,00));
	outFields->push(HX_("collider",34,df,d5,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ObjectCollider_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::scene::Object */ ,(int)offsetof(ObjectCollider_obj,obj),HX_("obj",f7,8f,54,00)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ObjectCollider_obj,collider),HX_("collider",34,df,d5,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ObjectCollider_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::col::Ray */ ,(void *) &ObjectCollider_obj::TMP_RAY,HX_("TMP_RAY",02,df,9d,bd)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(void *) &ObjectCollider_obj::TMP_MAT,HX_("TMP_MAT",b8,13,9a,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ObjectCollider_obj_sMemberFields[] = {
	HX_("obj",f7,8f,54,00),
	HX_("collider",34,df,d5,c9),
	HX_("rayIntersection",53,fb,28,64),
	HX_("contains",1f,5a,7b,2c),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inSphere",d2,f8,74,45),
	::String(null()) };

static void ObjectCollider_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectCollider_obj::TMP_RAY,"TMP_RAY");
	HX_MARK_MEMBER_NAME(ObjectCollider_obj::TMP_MAT,"TMP_MAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectCollider_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectCollider_obj::TMP_RAY,"TMP_RAY");
	HX_VISIT_MEMBER_NAME(ObjectCollider_obj::TMP_MAT,"TMP_MAT");
};

#endif

::hx::Class ObjectCollider_obj::__mClass;

static ::String ObjectCollider_obj_sStaticFields[] = {
	HX_("TMP_RAY",02,df,9d,bd),
	HX_("TMP_MAT",b8,13,9a,bd),
	::String(null())
};

void ObjectCollider_obj::__register()
{
	ObjectCollider_obj _hx_dummy;
	ObjectCollider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.ObjectCollider",b6,15,6b,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ObjectCollider_obj::__GetStatic;
	__mClass->mSetStaticField = &ObjectCollider_obj::__SetStatic;
	__mClass->mMarkFunc = ObjectCollider_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ObjectCollider_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ObjectCollider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ObjectCollider_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectCollider_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectCollider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectCollider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ObjectCollider_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_31f849462ed26ef7_7_boot)
HXDLIN(   7)		TMP_RAY =  ::h3d::col::Ray_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_31f849462ed26ef7_8_boot)
HXDLIN(   8)		TMP_MAT =  ::h3d::Matrix_obj::__alloc( HX_CTX );
            	}
}

} // end namespace h3d
} // end namespace col
