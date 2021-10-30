#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_hxd_Math
#include <hxd/Math.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c13cd5c23fdd46e_28_new,"h2d.col.Circle","new",0xe6fa6024,"h2d.col.Circle.new","h2d/col/Circle.hx",28,0x6873bb0a)
HX_LOCAL_STACK_FRAME(_hx_pos_4c13cd5c23fdd46e_37_distanceSq,"h2d.col.Circle","distanceSq",0x5e6583ef,"h2d.col.Circle.distanceSq","h2d/col/Circle.hx",37,0x6873bb0a)
HX_LOCAL_STACK_FRAME(_hx_pos_4c13cd5c23fdd46e_47_side,"h2d.col.Circle","side",0x376ac953,"h2d.col.Circle.side","h2d/col/Circle.hx",47,0x6873bb0a)
HX_LOCAL_STACK_FRAME(_hx_pos_4c13cd5c23fdd46e_56_collideCircle,"h2d.col.Circle","collideCircle",0xa25cb4f2,"h2d.col.Circle.collideCircle","h2d/col/Circle.hx",56,0x6873bb0a)
HX_LOCAL_STACK_FRAME(_hx_pos_4c13cd5c23fdd46e_65_collideBounds,"h2d.col.Circle","collideBounds",0xb26cc957,"h2d.col.Circle.collideBounds","h2d/col/Circle.hx",65,0x6873bb0a)
HX_LOCAL_STACK_FRAME(_hx_pos_4c13cd5c23fdd46e_83_lineIntersect,"h2d.col.Circle","lineIntersect",0x604d970f,"h2d.col.Circle.lineIntersect","h2d/col/Circle.hx",83,0x6873bb0a)
HX_LOCAL_STACK_FRAME(_hx_pos_4c13cd5c23fdd46e_105_toString,"h2d.col.Circle","toString",0xde949a68,"h2d.col.Circle.toString","h2d/col/Circle.hx",105,0x6873bb0a)
HX_LOCAL_STACK_FRAME(_hx_pos_4c13cd5c23fdd46e_112_contains,"h2d.col.Circle","contains",0xd2a123db,"h2d.col.Circle.contains","h2d/col/Circle.hx",112,0x6873bb0a)
namespace h2d{
namespace col{

void Circle_obj::__construct(Float x,Float y,Float ray){
            	HX_STACKFRAME(&_hx_pos_4c13cd5c23fdd46e_28_new)
HXLINE(  29)		this->x = x;
HXLINE(  30)		this->y = y;
HXLINE(  31)		this->ray = ray;
            	}

Dynamic Circle_obj::__CreateEmpty() { return new Circle_obj; }

void *Circle_obj::_hx_vtable = 0;

Dynamic Circle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Circle_obj > _hx_result = new Circle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Circle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7b550f1a;
}

static ::h2d::col::Collider_obj _hx_h2d_col_Circle__hx_h2d_col_Collider= {
	( bool (::hx::Object::*)( ::h2d::col::Point))&::h2d::col::Circle_obj::contains,
};

void *Circle_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x8fae127a: return &_hx_h2d_col_Circle__hx_h2d_col_Collider;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float Circle_obj::distanceSq( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_4c13cd5c23fdd46e_37_distanceSq)
HXLINE(  38)		Float dx = (p->x - this->x);
HXLINE(  39)		Float dy = (p->y - this->y);
HXLINE(  40)		Float d = (((dx * dx) + (dy * dy)) - (this->ray * this->ray));
HXLINE(  41)		if ((d < 0)) {
HXLINE(  41)			return ( (Float)(0) );
            		}
            		else {
HXLINE(  41)			return d;
            		}
HXDLIN(  41)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,distanceSq,return )

Float Circle_obj::side( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_4c13cd5c23fdd46e_47_side)
HXLINE(  48)		Float dx = (p->x - this->x);
HXLINE(  49)		Float dy = (p->y - this->y);
HXLINE(  50)		return ((this->ray * this->ray) - ((dx * dx) + (dy * dy)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,side,return )

bool Circle_obj::collideCircle( ::h2d::col::Circle c){
            	HX_STACKFRAME(&_hx_pos_4c13cd5c23fdd46e_56_collideCircle)
HXLINE(  57)		Float dx = (this->x - c->x);
HXLINE(  58)		Float dy = (this->y - c->y);
HXLINE(  59)		return (((dx * dx) + (dy * dy)) < ((this->ray + c->ray) * (this->ray + c->ray)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideCircle,return )

bool Circle_obj::collideBounds( ::h2d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_4c13cd5c23fdd46e_65_collideBounds)
HXLINE(  66)		if ((this->x < (b->xMin - this->ray))) {
HXLINE(  66)			return false;
            		}
HXLINE(  67)		if ((this->x > (b->xMax + this->ray))) {
HXLINE(  67)			return false;
            		}
HXLINE(  68)		if ((this->y < (b->yMin - this->ray))) {
HXLINE(  68)			return false;
            		}
HXLINE(  69)		if ((this->y > (b->yMax + this->ray))) {
HXLINE(  69)			return false;
            		}
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		bool _hx_tmp1;
HXDLIN(  70)		if ((this->x < b->xMin)) {
HXLINE(  70)			_hx_tmp1 = (this->y < b->yMin);
            		}
            		else {
HXLINE(  70)			_hx_tmp1 = false;
            		}
HXDLIN(  70)		if (_hx_tmp1) {
HXLINE(  70)			Float dx = (this->x - b->xMin);
HXDLIN(  70)			Float dy = (this->y - b->yMin);
HXDLIN(  70)			Float dz = ((Float)0.);
HXDLIN(  70)			_hx_tmp = ((((dx * dx) + (dy * dy)) + (dz * dz)) > (this->ray * this->ray));
            		}
            		else {
HXLINE(  70)			_hx_tmp = false;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  70)			return false;
            		}
HXLINE(  71)		bool _hx_tmp2;
HXDLIN(  71)		bool _hx_tmp3;
HXDLIN(  71)		if ((this->x > b->xMax)) {
HXLINE(  71)			_hx_tmp3 = (this->y < b->yMin);
            		}
            		else {
HXLINE(  71)			_hx_tmp3 = false;
            		}
HXDLIN(  71)		if (_hx_tmp3) {
HXLINE(  71)			Float dx = (this->x - b->xMax);
HXDLIN(  71)			Float dy = (this->y - b->yMin);
HXDLIN(  71)			Float dz = ((Float)0.);
HXDLIN(  71)			_hx_tmp2 = ((((dx * dx) + (dy * dy)) + (dz * dz)) > (this->ray * this->ray));
            		}
            		else {
HXLINE(  71)			_hx_tmp2 = false;
            		}
HXDLIN(  71)		if (_hx_tmp2) {
HXLINE(  71)			return false;
            		}
HXLINE(  72)		bool _hx_tmp4;
HXDLIN(  72)		bool _hx_tmp5;
HXDLIN(  72)		if ((this->x < b->xMin)) {
HXLINE(  72)			_hx_tmp5 = (this->y > b->yMax);
            		}
            		else {
HXLINE(  72)			_hx_tmp5 = false;
            		}
HXDLIN(  72)		if (_hx_tmp5) {
HXLINE(  72)			Float dx = (this->x - b->xMin);
HXDLIN(  72)			Float dy = (this->y - b->yMax);
HXDLIN(  72)			Float dz = ((Float)0.);
HXDLIN(  72)			_hx_tmp4 = ((((dx * dx) + (dy * dy)) + (dz * dz)) > (this->ray * this->ray));
            		}
            		else {
HXLINE(  72)			_hx_tmp4 = false;
            		}
HXDLIN(  72)		if (_hx_tmp4) {
HXLINE(  72)			return false;
            		}
HXLINE(  73)		bool _hx_tmp6;
HXDLIN(  73)		bool _hx_tmp7;
HXDLIN(  73)		if ((this->x > b->xMax)) {
HXLINE(  73)			_hx_tmp7 = (this->y > b->yMax);
            		}
            		else {
HXLINE(  73)			_hx_tmp7 = false;
            		}
HXDLIN(  73)		if (_hx_tmp7) {
HXLINE(  73)			Float dx = (this->x - b->xMax);
HXDLIN(  73)			Float dy = (this->y - b->yMax);
HXDLIN(  73)			Float dz = ((Float)0.);
HXDLIN(  73)			_hx_tmp6 = ((((dx * dx) + (dy * dy)) + (dz * dz)) > (this->ray * this->ray));
            		}
            		else {
HXLINE(  73)			_hx_tmp6 = false;
            		}
HXDLIN(  73)		if (_hx_tmp6) {
HXLINE(  73)			return false;
            		}
HXLINE(  74)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideBounds,return )

::Array< ::Dynamic> Circle_obj::lineIntersect( ::h2d::col::Point p1, ::h2d::col::Point p2){
            	HX_GC_STACKFRAME(&_hx_pos_4c13cd5c23fdd46e_83_lineIntersect)
HXLINE(  84)		Float dx = (p2->x - p1->x);
HXLINE(  85)		Float dy = (p2->y - p1->y);
HXLINE(  86)		Float a = ((dx * dx) + (dy * dy));
HXLINE(  87)		if ((a < ((Float)1e-8))) {
HXLINE(  87)			return null();
            		}
HXLINE(  88)		Float b = (( (Float)(2) ) * ((dx * (p1->x - this->x)) + (dy * (p1->y - this->y))));
HXLINE(  89)		Float dx1 = (p1->x - this->x);
HXDLIN(  89)		Float dy1 = (p1->y - this->y);
HXDLIN(  89)		Float dz = ((Float)0.);
HXDLIN(  89)		Float c = ((((dx1 * dx1) + (dy1 * dy1)) + (dz * dz)) - (this->ray * this->ray));
HXLINE(  90)		Float d = ((b * b) - ((( (Float)(4) ) * a) * c));
HXLINE(  92)		if ((d < 0)) {
HXLINE(  92)			return null();
            		}
HXLINE(  93)		if ((d == 0)) {
HXLINE(  94)			Float t = (-(b) / (( (Float)(2) ) * a));
HXLINE(  95)			return ::Array_obj< ::Dynamic>::__new(1)->init(0, ::h2d::col::Point_obj::__alloc( HX_CTX ,(p1->x + (t * dx)),(p1->y + (t * dy))));
            		}
HXLINE(  98)		Float t1 = ((-(b) - ::Math_obj::sqrt(d)) / (( (Float)(2) ) * a));
HXLINE(  99)		Float t2 = ((-(b) + ::Math_obj::sqrt(d)) / (( (Float)(2) ) * a));
HXLINE( 100)		 ::h2d::col::Point _hx_tmp =  ::h2d::col::Point_obj::__alloc( HX_CTX ,(p1->x + (t1 * dx)),(p1->y + (t1 * dy)));
HXDLIN( 100)		return ::Array_obj< ::Dynamic>::__new(2)->init(0,_hx_tmp)->init(1, ::h2d::col::Point_obj::__alloc( HX_CTX ,(p1->x + (t2 * dx)),(p1->y + (t2 * dy))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Circle_obj,lineIntersect,return )

::String Circle_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_4c13cd5c23fdd46e_105_toString)
HXDLIN( 105)		::String _hx_tmp = ((HX_("{",7b,00,00,00) + ::hxd::Math_obj::fmt(this->x)) + HX_(",",2c,00,00,00));
HXDLIN( 105)		::String _hx_tmp1 = ((_hx_tmp + ::hxd::Math_obj::fmt(this->y)) + HX_(",",2c,00,00,00));
HXDLIN( 105)		return ((_hx_tmp1 + ::hxd::Math_obj::fmt(this->ray)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,toString,return )

bool Circle_obj::contains( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_4c13cd5c23fdd46e_112_contains)
HXDLIN( 112)		Float dx = (p->x - this->x);
HXDLIN( 112)		Float dy = (p->y - this->y);
HXDLIN( 112)		Float d = (((dx * dx) + (dy * dy)) - (this->ray * this->ray));
HXDLIN( 112)		Float _hx_tmp;
HXDLIN( 112)		if ((d < 0)) {
HXDLIN( 112)			_hx_tmp = ( (Float)(0) );
            		}
            		else {
HXDLIN( 112)			_hx_tmp = d;
            		}
HXDLIN( 112)		return (_hx_tmp == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,contains,return )


::hx::ObjectPtr< Circle_obj > Circle_obj::__new(Float x,Float y,Float ray) {
	::hx::ObjectPtr< Circle_obj > __this = new Circle_obj();
	__this->__construct(x,y,ray);
	return __this;
}

::hx::ObjectPtr< Circle_obj > Circle_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float ray) {
	Circle_obj *__this = (Circle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Circle_obj), false, "h2d.col.Circle"));
	*(void **)__this = Circle_obj::_hx_vtable;
	__this->__construct(x,y,ray);
	return __this;
}

Circle_obj::Circle_obj()
{
}

::hx::Val Circle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ::hx::Val( ray ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { return ::hx::Val( side_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceSq") ) { return ::hx::Val( distanceSq_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return ::hx::Val( collideCircle_dyn() ); }
		if (HX_FIELD_EQ(inName,"collideBounds") ) { return ::hx::Val( collideBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineIntersect") ) { return ::hx::Val( lineIntersect_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Circle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { ray=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("ray",ea,d5,56,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Circle_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Circle_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Circle_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Circle_obj,ray),HX_("ray",ea,d5,56,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Circle_obj_sStaticStorageInfo = 0;
#endif

static ::String Circle_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("ray",ea,d5,56,00),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("side",97,8d,53,4c),
	HX_("collideCircle",2e,48,03,c8),
	HX_("collideBounds",93,5c,13,d8),
	HX_("lineIntersect",4b,2a,f4,85),
	HX_("toString",ac,d0,6e,38),
	HX_("contains",1f,5a,7b,2c),
	::String(null()) };

::hx::Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	Circle_obj _hx_dummy;
	Circle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col.Circle",32,be,fe,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Circle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Circle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Circle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Circle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
