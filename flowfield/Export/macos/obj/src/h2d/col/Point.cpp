#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_484832acc3cf4c74_26_new,"h2d.col.Point","new",0x59a33260,"h2d.col.Point.new","h2d/col/Point.hx",26,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_34_distanceSq,"h2d.col.Point","distanceSq",0xda2db133,"h2d.col.Point.distanceSq","h2d/col/Point.hx",34,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_44_distance,"h2d.col.Point","distance",0xeda6f135,"h2d.col.Point.distance","h2d/col/Point.hx",44,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_49_toString,"h2d.col.Point","toString",0xba1c2eac,"h2d.col.Point.toString","h2d/col/Point.hx",49,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_56_sub,"h2d.col.Point","sub",0x59a70b80,"h2d.col.Point.sub","h2d/col/Point.hx",56,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_63_add,"h2d.col.Point","add",0x59995421,"h2d.col.Point.add","h2d/col/Point.hx",63,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_70_multiply,"h2d.col.Point","multiply",0x1c3a4024,"h2d.col.Point.multiply","h2d/col/Point.hx",70,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_77_equals,"h2d.col.Point","equals",0xa8eccc3f,"h2d.col.Point.equals","h2d/col/Point.hx",77,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_84_dot,"h2d.col.Point","dot",0x599ba489,"h2d.col.Point.dot","h2d/col/Point.hx",84,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_91_lengthSq,"h2d.col.Point","lengthSq",0xa170c124,"h2d.col.Point.lengthSq","h2d/col/Point.hx",91,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_98_length,"h2d.col.Point","length",0x880172e6,"h2d.col.Point.length","h2d/col/Point.hx",98,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_104_normalize,"h2d.col.Point","normalize",0xa1a6198d,"h2d.col.Point.normalize","h2d/col/Point.hx",104,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_114_normalized,"h2d.col.Point","normalized",0xcfb04237,"h2d.col.Point.normalized","h2d/col/Point.hx",114,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_123_set,"h2d.col.Point","set",0x59a6fda2,"h2d.col.Point.set","h2d/col/Point.hx",123,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_131_load,"h2d.col.Point","load",0x13ddf826,"h2d.col.Point.load","h2d/col/Point.hx",131,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_139_scale,"h2d.col.Point","scale",0x4e3ab08a,"h2d.col.Point.scale","h2d/col/Point.hx",139,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_148_clone,"h2d.col.Point","clone",0x1dcef55d,"h2d.col.Point.clone","h2d/col/Point.hx",148,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_155_cross,"h2d.col.Point","cross",0x21c64180,"h2d.col.Point.cross","h2d/col/Point.hx",155,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_161_lerp,"h2d.col.Point","lerp",0x13d67077,"h2d.col.Point.lerp","h2d/col/Point.hx",161,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_169_transform,"h2d.col.Point","transform",0x3b980f6c,"h2d.col.Point.transform","h2d/col/Point.hx",169,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_179_transformed,"h2d.col.Point","transformed",0x5d4c1acb,"h2d.col.Point.transformed","h2d/col/Point.hx",179,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_188_transform2x2,"h2d.col.Point","transform2x2",0x4524b580,"h2d.col.Point.transform2x2","h2d/col/Point.hx",188,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_198_transformed2x2,"h2d.col.Point","transformed2x2",0xb014cf81,"h2d.col.Point.transformed2x2","h2d/col/Point.hx",198,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_211_toIPoint,"h2d.col.Point","toIPoint",0xfe220d02,"h2d.col.Point.toIPoint","h2d/col/Point.hx",211,0x8be51f92)
HX_LOCAL_STACK_FRAME(_hx_pos_484832acc3cf4c74_217_rotate,"h2d.col.Point","rotate",0xb41a245b,"h2d.col.Point.rotate","h2d/col/Point.hx",217,0x8be51f92)
namespace h2d{
namespace col{

void Point_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_26_new)
HXLINE(  27)		this->x = x;
HXLINE(  28)		this->y = y;
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27582bde;
}

Float Point_obj::distanceSq( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_34_distanceSq)
HXLINE(  35)		Float dx = (this->x - p->x);
HXLINE(  36)		Float dy = (this->y - p->y);
HXLINE(  37)		return ((dx * dx) + (dy * dy));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,distanceSq,return )

Float Point_obj::distance( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_44_distance)
HXDLIN(  44)		Float dx = (this->x - p->x);
HXDLIN(  44)		Float dy = (this->y - p->y);
HXDLIN(  44)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,distance,return )

::String Point_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_49_toString)
HXDLIN(  49)		::String _hx_tmp = ((HX_("{",7b,00,00,00) + ::hxd::Math_obj::fmt(this->x)) + HX_(",",2c,00,00,00));
HXDLIN(  49)		return ((_hx_tmp + ::hxd::Math_obj::fmt(this->y)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

 ::h2d::col::Point Point_obj::sub( ::h2d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_484832acc3cf4c74_56_sub)
HXDLIN(  56)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(this->x - p->x),(this->y - p->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,sub,return )

 ::h2d::col::Point Point_obj::add( ::h2d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_484832acc3cf4c74_63_add)
HXDLIN(  63)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(this->x + p->x),(this->y + p->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

 ::h2d::col::Point Point_obj::multiply(Float v){
            	HX_GC_STACKFRAME(&_hx_pos_484832acc3cf4c74_70_multiply)
HXDLIN(  70)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(this->x * v),(this->y * v));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,multiply,return )

bool Point_obj::equals( ::h2d::col::Point other){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_77_equals)
HXDLIN(  77)		if ((this->x == other->x)) {
HXDLIN(  77)			return (this->y == other->y);
            		}
            		else {
HXDLIN(  77)			return false;
            		}
HXDLIN(  77)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

Float Point_obj::dot( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_84_dot)
HXDLIN(  84)		return ((this->x * p->x) + (this->y * p->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,dot,return )

Float Point_obj::lengthSq(){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_91_lengthSq)
HXDLIN(  91)		return ((this->x * this->x) + (this->y * this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,lengthSq,return )

Float Point_obj::length(){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_98_length)
HXDLIN(  98)		return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,length,return )

void Point_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_104_normalize)
HXLINE( 105)		Float k = ((this->x * this->x) + (this->y * this->y));
HXLINE( 106)		if ((k < ((Float)1e-10))) {
HXLINE( 106)			k = ( (Float)(0) );
            		}
            		else {
HXLINE( 106)			k = (((Float)1.) / ::Math_obj::sqrt(k));
            		}
HXLINE( 107)		 ::h2d::col::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 107)		_hx_tmp->x = (_hx_tmp->x * k);
HXLINE( 108)		 ::h2d::col::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 108)		_hx_tmp1->y = (_hx_tmp1->y * k);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,normalize,(void))

 ::h2d::col::Point Point_obj::normalized(){
            	HX_GC_STACKFRAME(&_hx_pos_484832acc3cf4c74_114_normalized)
HXLINE( 115)		Float k = ((this->x * this->x) + (this->y * this->y));
HXLINE( 116)		if ((k < ((Float)1e-10))) {
HXLINE( 116)			k = ( (Float)(0) );
            		}
            		else {
HXLINE( 116)			k = (((Float)1.) / ::Math_obj::sqrt(k));
            		}
HXLINE( 117)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(this->x * k),(this->y * k));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,normalized,return )

void Point_obj::set(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_123_set)
HXLINE( 124)		this->x = x;
HXLINE( 125)		this->y = y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,set,(void))

void Point_obj::load( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_131_load)
HXLINE( 132)		this->x = p->x;
HXLINE( 133)		this->y = p->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,load,(void))

void Point_obj::scale(Float f){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_139_scale)
HXLINE( 140)		 ::h2d::col::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 140)		_hx_tmp->x = (_hx_tmp->x * f);
HXLINE( 141)		 ::h2d::col::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 141)		_hx_tmp1->y = (_hx_tmp1->y * f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,scale,(void))

 ::h2d::col::Point Point_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_484832acc3cf4c74_148_clone)
HXDLIN( 148)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

Float Point_obj::cross( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_155_cross)
HXDLIN( 155)		return ((this->x * p->y) - (this->y * p->x));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,cross,return )

void Point_obj::lerp( ::h2d::col::Point a, ::h2d::col::Point b,Float k){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_161_lerp)
HXLINE( 162)		Float a1 = a->x;
HXDLIN( 162)		this->x = (a1 + (k * (b->x - a1)));
HXLINE( 163)		Float a2 = a->y;
HXDLIN( 163)		this->y = (a2 + (k * (a->y - a2)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Point_obj,lerp,(void))

void Point_obj::transform( ::h2d::col::Matrix m){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_169_transform)
HXLINE( 170)		Float mx = (((m->a * this->x) + (m->c * this->y)) + m->x);
HXLINE( 171)		Float my = (((m->b * this->x) + (m->d * this->y)) + m->y);
HXLINE( 172)		this->x = mx;
HXLINE( 173)		this->y = my;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,transform,(void))

 ::h2d::col::Point Point_obj::transformed( ::h2d::col::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_484832acc3cf4c74_179_transformed)
HXLINE( 180)		Float mx = (((m->a * this->x) + (m->c * this->y)) + m->x);
HXLINE( 181)		Float my = (((m->b * this->x) + (m->d * this->y)) + m->y);
HXLINE( 182)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,mx,my);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,transformed,return )

void Point_obj::transform2x2( ::h2d::col::Matrix m){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_188_transform2x2)
HXLINE( 189)		Float mx = ((m->a * this->x) + (m->c * this->y));
HXLINE( 190)		Float my = ((m->b * this->x) + (m->d * this->y));
HXLINE( 191)		this->x = mx;
HXLINE( 192)		this->y = my;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,transform2x2,(void))

 ::h2d::col::Point Point_obj::transformed2x2( ::h2d::col::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_484832acc3cf4c74_198_transformed2x2)
HXLINE( 199)		Float mx = ((m->a * this->x) + (m->c * this->y));
HXLINE( 200)		Float my = ((m->b * this->x) + (m->d * this->y));
HXLINE( 201)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,mx,my);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,transformed2x2,return )

 ::h2d::col::IPoint Point_obj::toIPoint(::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(((Float)1.));
            	HX_GC_STACKFRAME(&_hx_pos_484832acc3cf4c74_211_toIPoint)
HXDLIN( 211)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->x * scale)),::Math_obj::round((this->y * scale)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,toIPoint,return )

void Point_obj::rotate(Float angle){
            	HX_STACKFRAME(&_hx_pos_484832acc3cf4c74_217_rotate)
HXLINE( 218)		Float c = ::Math_obj::cos(angle);
HXLINE( 219)		Float s = ::Math_obj::sin(angle);
HXLINE( 220)		Float x2 = ((this->x * c) - (this->y * s));
HXLINE( 221)		Float y2 = ((this->x * s) + (this->y * c));
HXLINE( 222)		this->x = x2;
HXLINE( 223)		this->y = y2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,rotate,(void))


::hx::ObjectPtr< Point_obj > Point_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Point_obj > __this = new Point_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Point_obj > Point_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Point_obj *__this = (Point_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "h2d.col.Point"));
	*(void **)__this = Point_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
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
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return ::hx::Val( dot_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return ::hx::Val( lerp_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"cross") ) { return ::hx::Val( cross_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return ::hx::Val( multiply_dyn() ); }
		if (HX_FIELD_EQ(inName,"lengthSq") ) { return ::hx::Val( lengthSq_dyn() ); }
		if (HX_FIELD_EQ(inName,"toIPoint") ) { return ::hx::Val( toIPoint_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceSq") ) { return ::hx::Val( distanceSq_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalized") ) { return ::hx::Val( normalized_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformed") ) { return ::hx::Val( transformed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transform2x2") ) { return ::hx::Val( transform2x2_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformed2x2") ) { return ::hx::Val( transformed2x2_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Point_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Point_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Point_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Point_obj_sStaticStorageInfo = 0;
#endif

static ::String Point_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("distance",35,93,f9,6b),
	HX_("toString",ac,d0,6e,38),
	HX_("sub",80,a9,57,00),
	HX_("add",21,f2,49,00),
	HX_("multiply",24,e2,8c,9a),
	HX_("equals",3f,ee,f2,bf),
	HX_("dot",89,42,4c,00),
	HX_("lengthSq",24,63,c3,1f),
	HX_("length",e6,94,07,9f),
	HX_("normalize",8d,37,a1,ab),
	HX_("normalized",37,64,6f,81),
	HX_("set",a2,9b,57,00),
	HX_("load",26,9a,b7,47),
	HX_("scale",8a,ce,ce,78),
	HX_("clone",5d,13,63,48),
	HX_("cross",80,5f,5a,4c),
	HX_("lerp",77,12,b0,47),
	HX_("transform",6c,2d,93,45),
	HX_("transformed",cb,b8,ca,32),
	HX_("transform2x2",80,57,70,3e),
	HX_("transformed2x2",81,f1,0c,4d),
	HX_("toIPoint",02,af,74,7c),
	HX_("rotate",5b,46,20,cb),
	::String(null()) };

::hx::Class Point_obj::__mClass;

void Point_obj::__register()
{
	Point_obj _hx_dummy;
	Point_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col.Point",6e,c2,4a,bb);
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

} // end namespace h2d
} // end namespace col
