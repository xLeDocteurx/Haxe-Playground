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
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_11_new,"h3d.col.Sphere","new",0xb08631a2,"h3d.col.Sphere.new","h3d/col/Sphere.hx",11,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_14_load,"h3d.col.Sphere","load",0xc39a52a4,"h3d.col.Sphere.load","h3d/col/Sphere.hx",14,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_22_getCenter,"h3d.col.Sphere","getCenter",0xbe6b6dcd,"h3d.col.Sphere.getCenter","h3d/col/Sphere.hx",22,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_25_distance,"h3d.col.Sphere","distance",0xc81562b3,"h3d.col.Sphere.distance","h3d/col/Sphere.hx",25,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_30_distanceSq,"h3d.col.Sphere","distanceSq",0x0239fe31,"h3d.col.Sphere.distanceSq","h3d/col/Sphere.hx",30,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_38_contains,"h3d.col.Sphere","contains",0x8897299d,"h3d.col.Sphere.contains","h3d/col/Sphere.hx",38,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_41_rayIntersection,"h3d.col.Sphere","rayIntersection",0x82893795,"h3d.col.Sphere.rayIntersection","h3d/col/Sphere.hx",41,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_59_inFrustum,"h3d.col.Sphere","inFrustum",0xf2b648bf,"h3d.col.Sphere.inFrustum","h3d/col/Sphere.hx",59,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_64_inFrustumMatrix,"h3d.col.Sphere","inFrustumMatrix",0xdf7c8c60,"h3d.col.Sphere.inFrustumMatrix","h3d/col/Sphere.hx",64,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_82_inSphere,"h3d.col.Sphere","inSphere",0xa190c850,"h3d.col.Sphere.inSphere","h3d/col/Sphere.hx",82,0x9063234c)
HX_LOCAL_STACK_FRAME(_hx_pos_7c49f4d21693b7c1_86_toString,"h3d.col.Sphere","toString",0x948aa02a,"h3d.col.Sphere.toString","h3d/col/Sphere.hx",86,0x9063234c)
namespace h3d{
namespace col{

void Sphere_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_r){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            		Float r = __o_r.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_11_new)
HXDLIN(  11)		this->x = x;
HXDLIN(  11)		this->y = y;
HXDLIN(  11)		this->z = z;
HXDLIN(  11)		this->r = r;
            	}

Dynamic Sphere_obj::__CreateEmpty() { return new Sphere_obj; }

void *Sphere_obj::_hx_vtable = 0;

Dynamic Sphere_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sphere_obj > _hx_result = new Sphere_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Sphere_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e1e0274;
}

static ::h3d::col::Collider_obj _hx_h3d_col_Sphere__hx_h3d_col_Collider= {
	( Float (::hx::Object::*)( ::h3d::col::Ray,bool))&::h3d::col::Sphere_obj::rayIntersection,
	( bool (::hx::Object::*)( ::h3d::col::Point))&::h3d::col::Sphere_obj::contains,
	( bool (::hx::Object::*)( ::h3d::col::Frustum, ::h3d::Matrix))&::h3d::col::Sphere_obj::inFrustum,
	( bool (::hx::Object::*)( ::h3d::col::Sphere))&::h3d::col::Sphere_obj::inSphere,
};

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_col_Sphere__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *Sphere_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x12a1e47b: return &_hx_h3d_col_Sphere__hx_h3d_col_Collider;
		case (int)0xa6f1a21a: return &_hx_h3d_col_Sphere__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Sphere_obj::load(::hx::Null< Float >  __o_sx,::hx::Null< Float >  __o_sy,::hx::Null< Float >  __o_sz,::hx::Null< Float >  __o_sr){
            		Float sx = __o_sx.Default(((Float)0.));
            		Float sy = __o_sy.Default(((Float)0.));
            		Float sz = __o_sz.Default(((Float)0.));
            		Float sr = __o_sr.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_14_load)
HXLINE(  15)		this->x = sx;
HXLINE(  16)		this->y = sy;
HXLINE(  17)		this->z = sz;
HXLINE(  18)		this->r = sr;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Sphere_obj,load,(void))

 ::h3d::col::Point Sphere_obj::getCenter(){
            	HX_GC_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_22_getCenter)
HXDLIN(  22)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->x,this->y,this->z);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sphere_obj,getCenter,return )

Float Sphere_obj::distance( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_25_distance)
HXLINE(  26)		Float dx = (p->x - this->x);
HXDLIN(  26)		Float dy = (p->y - this->y);
HXDLIN(  26)		Float dz = (p->z - this->z);
HXDLIN(  26)		Float d = ((((dx * dx) + (dy * dy)) + (dz * dz)) - (this->r * this->r));
HXLINE(  27)		if ((d < 0)) {
HXLINE(  27)			return -(::Math_obj::sqrt(-(d)));
            		}
            		else {
HXLINE(  27)			return ::Math_obj::sqrt(d);
            		}
HXDLIN(  27)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sphere_obj,distance,return )

Float Sphere_obj::distanceSq( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_30_distanceSq)
HXLINE(  31)		Float dx = (p->x - this->x);
HXLINE(  32)		Float dy = (p->y - this->y);
HXLINE(  33)		Float dz = (p->z - this->z);
HXLINE(  34)		return ((((dx * dx) + (dy * dy)) + (dz * dz)) - (this->r * this->r));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sphere_obj,distanceSq,return )

bool Sphere_obj::contains( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_38_contains)
HXDLIN(  38)		Float dx = (p->x - this->x);
HXDLIN(  38)		Float dy = (p->y - this->y);
HXDLIN(  38)		Float dz = (p->z - this->z);
HXDLIN(  38)		return (((((dx * dx) + (dy * dy)) + (dz * dz)) - (this->r * this->r)) < 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sphere_obj,contains,return )

Float Sphere_obj::rayIntersection( ::h3d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_41_rayIntersection)
HXLINE(  42)		Float r2 = (this->r * this->r);
HXLINE(  43)		Float px = (r->px + r->lx);
HXLINE(  44)		Float py = (r->py + r->ly);
HXLINE(  45)		Float pz = (r->pz + r->lz);
HXLINE(  47)		Float a = (((r->lx * r->lx) + (r->ly * r->ly)) + (r->lz * r->lz));
HXLINE(  48)		Float b = ((((( (Float)(2) ) * r->lx) * (this->x - px)) + ((( (Float)(2) ) * r->ly) * (this->y - py))) + ((( (Float)(2) ) * r->lz) * (this->z - pz)));
HXLINE(  49)		Float c = ((((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (((px * px) + (py * py)) + (pz * pz))) - (( (Float)(2) ) * (((this->x * px) + (this->y * py)) + (this->z * pz)))) - r2);
HXLINE(  51)		Float d = ((b * b) - ((( (Float)(4) ) * a) * c));
HXLINE(  52)		if ((d < 0)) {
HXLINE(  52)			return ( (Float)(-1) );
            		}
HXLINE(  54)		d = ::Math_obj::sqrt(d);
HXLINE(  55)		Float t = ((-(b) + d) / (( (Float)(2) ) * a));
HXLINE(  56)		return (( (Float)(1) ) - t);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sphere_obj,rayIntersection,return )

bool Sphere_obj::inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_59_inFrustum)
HXLINE(  60)		if (::hx::IsNotNull( m )) {
HXLINE(  60)			return this->inFrustumMatrix(f,m);
            		}
HXLINE(  61)		return f->hasSphere(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sphere_obj,inFrustum,return )

bool Sphere_obj::inFrustumMatrix( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_64_inFrustumMatrix)
HXLINE(  65)		Float oldX = this->x;
HXDLIN(  65)		Float oldY = this->y;
HXDLIN(  65)		Float oldZ = this->z;
HXDLIN(  65)		Float oldR = this->r;
HXLINE(  66)		Float v_x = this->x;
HXDLIN(  66)		Float v_y = this->y;
HXDLIN(  66)		Float v_z = this->z;
HXLINE(  67)		{
HXLINE(  67)			Float px = ((((v_x * m->_11) + (v_y * m->_21)) + (v_z * m->_31)) + m->_41);
HXDLIN(  67)			Float py = ((((v_x * m->_12) + (v_y * m->_22)) + (v_z * m->_32)) + m->_42);
HXDLIN(  67)			Float pz = ((((v_x * m->_13) + (v_y * m->_23)) + (v_z * m->_33)) + m->_43);
HXDLIN(  67)			v_x = px;
HXDLIN(  67)			v_y = py;
HXDLIN(  67)			v_z = pz;
            		}
HXLINE(  68)		this->x = v_x;
HXLINE(  69)		this->y = v_y;
HXLINE(  70)		this->z = v_z;
HXLINE(  71)		 ::h3d::Vector v = null();
HXDLIN(  71)		if (::hx::IsNull( v )) {
HXLINE( 258)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  71)		v->x = ::Math_obj::sqrt((((m->_11 * m->_11) + (m->_12 * m->_12)) + (m->_13 * m->_13)));
HXDLIN(  71)		v->y = ::Math_obj::sqrt((((m->_21 * m->_21) + (m->_22 * m->_22)) + (m->_23 * m->_23)));
HXDLIN(  71)		v->z = ::Math_obj::sqrt((((m->_31 * m->_31) + (m->_32 * m->_32)) + (m->_33 * m->_33)));
HXDLIN(  71)		if (((((m->_11 * ((m->_22 * m->_33) - (m->_23 * m->_32))) + (m->_12 * ((m->_23 * m->_31) - (m->_21 * m->_33)))) + (m->_13 * ((m->_21 * m->_32) - (m->_22 * m->_31)))) < 0)) {
HXLINE(  71)			 ::h3d::Vector v1 = v;
HXDLIN(  71)			v1->x = (v1->x * ( (Float)(-1) ));
HXDLIN(  71)			 ::h3d::Vector v2 = v;
HXDLIN(  71)			v2->y = (v2->y * ( (Float)(-1) ));
HXDLIN(  71)			 ::h3d::Vector v3 = v;
HXDLIN(  71)			v3->z = (v3->z * ( (Float)(-1) ));
            		}
HXDLIN(  71)		 ::h3d::Vector scale = v;
HXLINE(  72)		 ::h3d::col::Sphere _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)		_hx_tmp->r = (_hx_tmp->r * ::Math_obj::max(::Math_obj::max(scale->x,scale->y),scale->z));
HXLINE(  73)		bool res = f->hasSphere(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  74)		this->x = oldX;
HXLINE(  75)		this->y = oldY;
HXLINE(  76)		this->z = oldZ;
HXLINE(  77)		this->r = oldR;
HXLINE(  78)		return res;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sphere_obj,inFrustumMatrix,return )

bool Sphere_obj::inSphere( ::h3d::col::Sphere s){
            	HX_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_82_inSphere)
HXDLIN(  82)		Float _this_x = this->x;
HXDLIN(  82)		Float _this_y = this->y;
HXDLIN(  82)		Float _this_z = this->z;
HXDLIN(  82)		Float p_x = s->x;
HXDLIN(  82)		Float p_y = s->y;
HXDLIN(  82)		Float p_z = s->z;
HXDLIN(  82)		Float dx = (p_x - _this_x);
HXDLIN(  82)		Float dy = (p_y - _this_y);
HXDLIN(  82)		Float dz = (p_z - _this_z);
HXDLIN(  82)		return ((((dx * dx) + (dy * dy)) + (dz * dz)) < ((s->r + this->r) * (s->r + this->r)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sphere_obj,inSphere,return )

::String Sphere_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_7c49f4d21693b7c1_86_toString)
HXDLIN(  86)		::String _hx_tmp = ((HX_("Sphere{",ae,a4,33,68) + ::Std_obj::string( ::h3d::col::Point_obj::__alloc( HX_CTX ,this->x,this->y,this->z))) + HX_(",",2c,00,00,00));
HXDLIN(  86)		return ((_hx_tmp + ::hxd::Math_obj::fmt(this->r)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sphere_obj,toString,return )


::hx::ObjectPtr< Sphere_obj > Sphere_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_r) {
	::hx::ObjectPtr< Sphere_obj > __this = new Sphere_obj();
	__this->__construct(__o_x,__o_y,__o_z,__o_r);
	return __this;
}

::hx::ObjectPtr< Sphere_obj > Sphere_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_r) {
	Sphere_obj *__this = (Sphere_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sphere_obj), false, "h3d.col.Sphere"));
	*(void **)__this = Sphere_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z,__o_r);
	return __this;
}

Sphere_obj::Sphere_obj()
{
}

::hx::Val Sphere_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"inSphere") ) { return ::hx::Val( inSphere_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getCenter") ) { return ::hx::Val( getCenter_dyn() ); }
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceSq") ) { return ::hx::Val( distanceSq_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return ::hx::Val( rayIntersection_dyn() ); }
		if (HX_FIELD_EQ(inName,"inFrustumMatrix") ) { return ::hx::Val( inFrustumMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Sphere_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sphere_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("r",72,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sphere_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Sphere_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Sphere_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Sphere_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Sphere_obj,r),HX_("r",72,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Sphere_obj_sStaticStorageInfo = 0;
#endif

static ::String Sphere_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("r",72,00,00,00),
	HX_("load",26,9a,b7,47),
	HX_("getCenter",0b,af,31,82),
	HX_("distance",35,93,f9,6b),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("contains",1f,5a,7b,2c),
	HX_("rayIntersection",53,fb,28,64),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("inFrustumMatrix",1e,50,1c,c1),
	HX_("inSphere",d2,f8,74,45),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Sphere_obj::__mClass;

void Sphere_obj::__register()
{
	Sphere_obj _hx_dummy;
	Sphere_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.Sphere",b0,78,a8,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sphere_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sphere_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sphere_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sphere_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
