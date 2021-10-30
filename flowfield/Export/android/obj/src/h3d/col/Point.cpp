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
#ifndef INCLUDED_h3d_col_Frustum
#include <h3d/col/Frustum.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_12_new,"h3d.col.Point","new",0x20d35b7f,"h3d.col.Point.new","h3d/col/Point.hx",12,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_18_scale,"h3d.col.Point","scale",0x609e9f69,"h3d.col.Point.scale","h3d/col/Point.hx",18,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_24_set,"h3d.col.Point","set",0x20d726c1,"h3d.col.Point.set","h3d/col/Point.hx",24,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_31_sub,"h3d.col.Point","sub",0x20d7349f,"h3d.col.Point.sub","h3d/col/Point.hx",31,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_35_add,"h3d.col.Point","add",0x20c97d40,"h3d.col.Point.add","h3d/col/Point.hx",35,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_39_multiply,"h3d.col.Point","multiply",0x4de5a6a5,"h3d.col.Point.multiply","h3d/col/Point.hx",39,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_43_cross,"h3d.col.Point","cross",0x342a305f,"h3d.col.Point.cross","h3d/col/Point.hx",43,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_47_equals,"h3d.col.Point","equals",0xadf9e080,"h3d.col.Point.equals","h3d/col/Point.hx",47,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_51_lengthSq,"h3d.col.Point","lengthSq",0xd31c27a5,"h3d.col.Point.lengthSq","h3d/col/Point.hx",51,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_55_length,"h3d.col.Point","length",0x8d0e8727,"h3d.col.Point.length","h3d/col/Point.hx",55,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_59_dot,"h3d.col.Point","dot",0x20cbcda8,"h3d.col.Point.dot","h3d/col/Point.hx",59,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_62_distanceSq,"h3d.col.Point","distanceSq",0x5a6079f4,"h3d.col.Point.distanceSq","h3d/col/Point.hx",62,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_70_distance,"h3d.col.Point","distance",0x1f5257b6,"h3d.col.Point.distance","h3d/col/Point.hx",70,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_73_normalize,"h3d.col.Point","normalize",0xe5f463ec,"h3d.col.Point.normalize","h3d/col/Point.hx",73,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_81_normalized,"h3d.col.Point","normalized",0x4fe30af8,"h3d.col.Point.normalized","h3d/col/Point.hx",81,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_87_lerp,"h3d.col.Point","lerp",0x96ca4278,"h3d.col.Point.lerp","h3d/col/Point.hx",87,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_96_transform,"h3d.col.Point","transform",0x7fe659cb,"h3d.col.Point.transform","h3d/col/Point.hx",96,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_105_transformed,"h3d.col.Point","transformed",0x0988faea,"h3d.col.Point.transformed","h3d/col/Point.hx",105,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_112_transform3x3,"h3d.col.Point","transform3x3",0x4e2cb2c3,"h3d.col.Point.transform3x3","h3d/col/Point.hx",112,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_121_transformed3x3,"h3d.col.Point","transformed3x3",0x75a24f04,"h3d.col.Point.transformed3x3","h3d/col/Point.hx",121,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_129_clone,"h3d.col.Point","clone",0x3032e43c,"h3d.col.Point.clone","h3d/col/Point.hx",129,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_132_load,"h3d.col.Point","load",0x96d1ca27,"h3d.col.Point.load","h3d/col/Point.hx",132,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_139_toString,"h3d.col.Point","toString",0xebc7952d,"h3d.col.Point.toString","h3d/col/Point.hx",139,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_145_inFrustum,"h3d.col.Point","inFrustum",0xf0cfb65c,"h3d.col.Point.inFrustum","h3d/col/Point.hx",145,0x20e0bf53)
HX_LOCAL_STACK_FRAME(_hx_pos_641d5b0e1dbe3595_149_toVector,"h3d.col.Point","toVector",0x71f51d1f,"h3d.col.Point.toVector","h3d/col/Point.hx",149,0x20e0bf53)
namespace h3d{
namespace col{

void Point_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_12_new)
HXLINE(  13)		this->x = x;
HXLINE(  14)		this->y = y;
HXLINE(  15)		this->z = z;
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ce991e9;
}

void Point_obj::scale(Float v){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_18_scale)
HXLINE(  19)		 ::h3d::col::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  19)		_hx_tmp->x = (_hx_tmp->x * v);
HXLINE(  20)		 ::h3d::col::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  20)		_hx_tmp1->y = (_hx_tmp1->y * v);
HXLINE(  21)		 ::h3d::col::Point _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  21)		_hx_tmp2->z = (_hx_tmp2->z * v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,scale,(void))

void Point_obj::set(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_24_set)
HXLINE(  25)		this->x = x;
HXLINE(  26)		this->y = y;
HXLINE(  27)		this->z = z;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Point_obj,set,(void))

 ::h3d::col::Point Point_obj::sub( ::h3d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_31_sub)
HXDLIN(  31)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->x - p->x),(this->y - p->y),(this->z - p->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,sub,return )

 ::h3d::col::Point Point_obj::add( ::h3d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_35_add)
HXDLIN(  35)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->x + p->x),(this->y + p->y),(this->z + p->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

 ::h3d::col::Point Point_obj::multiply(Float v){
            	HX_GC_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_39_multiply)
HXDLIN(  39)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->x * v),(this->y * v),(this->z * v));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,multiply,return )

 ::h3d::col::Point Point_obj::cross( ::h3d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_43_cross)
HXDLIN(  43)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,((this->y * p->z) - (this->z * p->y)),((this->z * p->x) - (this->x * p->z)),((this->x * p->y) - (this->y * p->x)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,cross,return )

bool Point_obj::equals( ::h3d::col::Point other){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_47_equals)
HXDLIN(  47)		bool _hx_tmp;
HXDLIN(  47)		if ((this->x == other->x)) {
HXDLIN(  47)			_hx_tmp = (this->y == other->y);
            		}
            		else {
HXDLIN(  47)			_hx_tmp = false;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXDLIN(  47)			return (this->z == other->z);
            		}
            		else {
HXDLIN(  47)			return false;
            		}
HXDLIN(  47)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

Float Point_obj::lengthSq(){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_51_lengthSq)
HXDLIN(  51)		return (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,lengthSq,return )

Float Point_obj::length(){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_55_length)
HXDLIN(  55)		return ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,length,return )

Float Point_obj::dot( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_59_dot)
HXDLIN(  59)		return (((this->x * p->x) + (this->y * p->y)) + (this->z * p->z));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,dot,return )

Float Point_obj::distanceSq( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_62_distanceSq)
HXLINE(  63)		Float dx = (p->x - this->x);
HXLINE(  64)		Float dy = (p->y - this->y);
HXLINE(  65)		Float dz = (p->z - this->z);
HXLINE(  66)		return (((dx * dx) + (dy * dy)) + (dz * dz));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,distanceSq,return )

Float Point_obj::distance( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_70_distance)
HXDLIN(  70)		Float dx = (p->x - this->x);
HXDLIN(  70)		Float dy = (p->y - this->y);
HXDLIN(  70)		Float dz = (p->z - this->z);
HXDLIN(  70)		return ::Math_obj::sqrt((((dx * dx) + (dy * dy)) + (dz * dz)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,distance,return )

void Point_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_73_normalize)
HXLINE(  74)		Float k = (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
HXLINE(  75)		if ((k < ((Float)1e-10))) {
HXLINE(  75)			k = ( (Float)(0) );
            		}
            		else {
HXLINE(  75)			k = (((Float)1.) / ::Math_obj::sqrt(k));
            		}
HXLINE(  76)		 ::h3d::col::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  76)		_hx_tmp->x = (_hx_tmp->x * k);
HXLINE(  77)		 ::h3d::col::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  77)		_hx_tmp1->y = (_hx_tmp1->y * k);
HXLINE(  78)		 ::h3d::col::Point _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  78)		_hx_tmp2->z = (_hx_tmp2->z * k);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,normalize,(void))

 ::h3d::col::Point Point_obj::normalized(){
            	HX_GC_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_81_normalized)
HXLINE(  82)		Float k = (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
HXLINE(  83)		if ((k < ((Float)1e-10))) {
HXLINE(  83)			k = ( (Float)(0) );
            		}
            		else {
HXLINE(  83)			k = (((Float)1.) / ::Math_obj::sqrt(k));
            		}
HXLINE(  84)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,(this->x * k),(this->y * k),(this->z * k));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,normalized,return )

void Point_obj::lerp( ::h3d::col::Point p1, ::h3d::col::Point p2,Float k){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_87_lerp)
HXLINE(  88)		Float a = p1->x;
HXDLIN(  88)		Float x = (a + (k * (p2->x - a)));
HXLINE(  89)		Float a1 = p1->y;
HXDLIN(  89)		Float y = (a1 + (k * (p2->y - a1)));
HXLINE(  90)		Float a2 = p1->z;
HXDLIN(  90)		Float z = (a2 + (k * (p2->z - a2)));
HXLINE(  91)		this->x = x;
HXLINE(  92)		this->y = y;
HXLINE(  93)		this->z = z;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Point_obj,lerp,(void))

void Point_obj::transform( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_96_transform)
HXLINE(  97)		Float px = ((((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31)) + m->_41);
HXLINE(  98)		Float py = ((((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32)) + m->_42);
HXLINE(  99)		Float pz = ((((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33)) + m->_43);
HXLINE( 100)		this->x = px;
HXLINE( 101)		this->y = py;
HXLINE( 102)		this->z = pz;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,transform,(void))

 ::h3d::col::Point Point_obj::transformed( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_105_transformed)
HXLINE( 106)		Float px = ((((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31)) + m->_41);
HXLINE( 107)		Float py = ((((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32)) + m->_42);
HXLINE( 108)		Float pz = ((((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33)) + m->_43);
HXLINE( 109)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,px,py,pz);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,transformed,return )

void Point_obj::transform3x3( ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_112_transform3x3)
HXLINE( 113)		Float px = (((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31));
HXLINE( 114)		Float py = (((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32));
HXLINE( 115)		Float pz = (((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33));
HXLINE( 116)		this->x = px;
HXLINE( 117)		this->y = py;
HXLINE( 118)		this->z = pz;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,transform3x3,(void))

 ::h3d::col::Point Point_obj::transformed3x3( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_121_transformed3x3)
HXLINE( 122)		Float px = (((this->x * m->_11) + (this->y * m->_21)) + (this->z * m->_31));
HXLINE( 123)		Float py = (((this->x * m->_12) + (this->y * m->_22)) + (this->z * m->_32));
HXLINE( 124)		Float pz = (((this->x * m->_13) + (this->y * m->_23)) + (this->z * m->_33));
HXLINE( 125)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,px,py,pz);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,transformed3x3,return )

 ::h3d::col::Point Point_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_129_clone)
HXDLIN( 129)		return  ::h3d::col::Point_obj::__alloc( HX_CTX ,this->x,this->y,this->z);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

void Point_obj::load( ::h3d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_132_load)
HXLINE( 133)		this->x = p->x;
HXLINE( 134)		this->y = p->y;
HXLINE( 135)		this->z = p->z;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,load,(void))

::String Point_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_139_toString)
HXDLIN( 139)		::String _hx_tmp = ((HX_("Point{",4b,86,c2,2b) + ::hxd::Math_obj::fmt(this->x)) + HX_(",",2c,00,00,00));
HXDLIN( 139)		::String _hx_tmp1 = ((_hx_tmp + ::hxd::Math_obj::fmt(this->y)) + HX_(",",2c,00,00,00));
HXDLIN( 139)		return ((_hx_tmp1 + ::hxd::Math_obj::fmt(this->z)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

bool Point_obj::inFrustum( ::h3d::col::Frustum f, ::h3d::Matrix m){
            	HX_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_145_inFrustum)
HXDLIN( 145)		return f->hasPoint(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,inFrustum,return )

 ::h3d::Vector Point_obj::toVector(){
            	HX_GC_STACKFRAME(&_hx_pos_641d5b0e1dbe3595_149_toVector)
HXDLIN( 149)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,this->x,this->y,this->z,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toVector,return )


::hx::ObjectPtr< Point_obj > Point_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z) {
	::hx::ObjectPtr< Point_obj > __this = new Point_obj();
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

::hx::ObjectPtr< Point_obj > Point_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z) {
	Point_obj *__this = (Point_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "h3d.col.Point"));
	*(void **)__this = Point_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

Point_obj::Point_obj()
{
}

::hx::Val Point_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return ::hx::Val( dot_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return ::hx::Val( lerp_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"cross") ) { return ::hx::Val( cross_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"multiply") ) { return ::hx::Val( multiply_dyn() ); }
		if (HX_FIELD_EQ(inName,"lengthSq") ) { return ::hx::Val( lengthSq_dyn() ); }
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"toVector") ) { return ::hx::Val( toVector_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"inFrustum") ) { return ::hx::Val( inFrustum_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceSq") ) { return ::hx::Val( distanceSq_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalized") ) { return ::hx::Val( normalized_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformed") ) { return ::hx::Val( transformed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transform3x3") ) { return ::hx::Val( transform3x3_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformed3x3") ) { return ::hx::Val( transformed3x3_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Point_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Point_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Point_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Point_obj,z),HX_("z",7a,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Point_obj_sStaticStorageInfo = 0;
#endif

static ::String Point_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("scale",8a,ce,ce,78),
	HX_("set",a2,9b,57,00),
	HX_("sub",80,a9,57,00),
	HX_("add",21,f2,49,00),
	HX_("multiply",24,e2,8c,9a),
	HX_("cross",80,5f,5a,4c),
	HX_("equals",3f,ee,f2,bf),
	HX_("lengthSq",24,63,c3,1f),
	HX_("length",e6,94,07,9f),
	HX_("dot",89,42,4c,00),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("distance",35,93,f9,6b),
	HX_("normalize",8d,37,a1,ab),
	HX_("normalized",37,64,6f,81),
	HX_("lerp",77,12,b0,47),
	HX_("transform",6c,2d,93,45),
	HX_("transformed",cb,b8,ca,32),
	HX_("transform3x3",c2,19,71,3e),
	HX_("transformed3x3",c3,b3,0d,4d),
	HX_("clone",5d,13,63,48),
	HX_("load",26,9a,b7,47),
	HX_("toString",ac,d0,6e,38),
	HX_("inFrustum",fd,89,7c,b6),
	HX_("toVector",9e,58,9c,be),
	::String(null()) };

::hx::Class Point_obj::__mClass;

void Point_obj::__register()
{
	Point_obj _hx_dummy;
	Point_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.col.Point",0d,30,0a,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Point_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Point_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Point_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace col
