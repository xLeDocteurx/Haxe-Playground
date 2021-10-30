#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h2d_col_Ray
#include <h2d/col/Ray.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cdd0812e457dfe12_21_new,"h2d.col.Ray","new",0xfb96057a,"h2d.col.Ray.new","h2d/col/Ray.hx",21,0x9810a938)
HX_LOCAL_STACK_FRAME(_hx_pos_cdd0812e457dfe12_28_side,"h2d.col.Ray","side",0x2affcf3d,"h2d.col.Ray.side","h2d/col/Ray.hx",28,0x9810a938)
HX_LOCAL_STACK_FRAME(_hx_pos_cdd0812e457dfe12_35_getPoint,"h2d.col.Ray","getPoint",0x6b4bd080,"h2d.col.Ray.getPoint","h2d/col/Ray.hx",35,0x9810a938)
HX_LOCAL_STACK_FRAME(_hx_pos_cdd0812e457dfe12_42_getPos,"h2d.col.Ray","getPos",0xb6a10dc4,"h2d.col.Ray.getPos","h2d/col/Ray.hx",42,0x9810a938)
HX_LOCAL_STACK_FRAME(_hx_pos_cdd0812e457dfe12_49_getDir,"h2d.col.Ray","getDir",0xb697ed7d,"h2d.col.Ray.getDir","h2d/col/Ray.hx",49,0x9810a938)
HX_LOCAL_STACK_FRAME(_hx_pos_cdd0812e457dfe12_52_normalize,"h2d.col.Ray","normalize",0xaf273c27,"h2d.col.Ray.normalize","h2d/col/Ray.hx",52,0x9810a938)
HX_LOCAL_STACK_FRAME(_hx_pos_cdd0812e457dfe12_63_fromPoints,"h2d.col.Ray","fromPoints",0x4c301953,"h2d.col.Ray.fromPoints","h2d/col/Ray.hx",63,0x9810a938)
HX_LOCAL_STACK_FRAME(_hx_pos_cdd0812e457dfe12_76_fromValues,"h2d.col.Ray","fromValues",0xa4b90b12,"h2d.col.Ray.fromValues","h2d/col/Ray.hx",76,0x9810a938)
namespace h2d{
namespace col{

void Ray_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cdd0812e457dfe12_21_new)
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x6bce8dc0;
}

Float Ray_obj::side( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_cdd0812e457dfe12_28_side)
HXDLIN(  28)		return ((this->lx * (p->y - this->py)) - (this->ly * (p->x - this->px)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,side,return )

 ::h2d::col::Point Ray_obj::getPoint(Float distance){
            	HX_GC_STACKFRAME(&_hx_pos_cdd0812e457dfe12_35_getPoint)
HXDLIN(  35)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(this->px + (distance * this->lx)),(this->py + (distance * this->ly)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,getPoint,return )

 ::h2d::col::Point Ray_obj::getPos(){
            	HX_GC_STACKFRAME(&_hx_pos_cdd0812e457dfe12_42_getPos)
HXDLIN(  42)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,this->px,this->py);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,getPos,return )

 ::h2d::col::Point Ray_obj::getDir(){
            	HX_GC_STACKFRAME(&_hx_pos_cdd0812e457dfe12_49_getDir)
HXDLIN(  49)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,this->lx,this->ly);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,getDir,return )

void Ray_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_cdd0812e457dfe12_52_normalize)
HXLINE(  53)		Float l = ((this->lx * this->lx) + (this->ly * this->ly));
HXLINE(  54)		if ((l == ((Float)1.))) {
HXLINE(  54)			return;
            		}
HXLINE(  55)		if ((l < ((Float)1e-10))) {
HXLINE(  55)			l = ( (Float)(0) );
            		}
            		else {
HXLINE(  55)			l = (((Float)1.) / ::Math_obj::sqrt(l));
            		}
HXLINE(  56)		 ::h2d::col::Ray _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  56)		_hx_tmp->lx = (_hx_tmp->lx * l);
HXLINE(  57)		 ::h2d::col::Ray _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  57)		_hx_tmp1->ly = (_hx_tmp1->ly * l);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,normalize,(void))

 ::h2d::col::Ray Ray_obj::fromPoints( ::h2d::col::Point p1, ::h2d::col::Point p2){
            	HX_GC_STACKFRAME(&_hx_pos_cdd0812e457dfe12_63_fromPoints)
HXLINE(  64)		 ::h2d::col::Ray r =  ::h2d::col::Ray_obj::__alloc( HX_CTX );
HXLINE(  65)		r->px = p1->x;
HXLINE(  66)		r->py = p1->y;
HXLINE(  67)		r->lx = (p2->x - p1->x);
HXLINE(  68)		r->ly = (p2->y - p1->y);
HXLINE(  69)		r->normalize();
HXLINE(  70)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,fromPoints,return )

 ::h2d::col::Ray Ray_obj::fromValues(Float x,Float y,Float dx,Float dy){
            	HX_GC_STACKFRAME(&_hx_pos_cdd0812e457dfe12_76_fromValues)
HXLINE(  77)		 ::h2d::col::Ray r =  ::h2d::col::Ray_obj::__alloc( HX_CTX );
HXLINE(  78)		r->px = x;
HXLINE(  79)		r->py = y;
HXLINE(  80)		r->lx = dx;
HXLINE(  81)		r->ly = dy;
HXLINE(  82)		r->normalize();
HXLINE(  83)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Ray_obj,fromValues,return )


::hx::ObjectPtr< Ray_obj > Ray_obj::__new() {
	::hx::ObjectPtr< Ray_obj > __this = new Ray_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Ray_obj > Ray_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Ray_obj *__this = (Ray_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ray_obj), false, "h2d.col.Ray"));
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
		if (HX_FIELD_EQ(inName,"lx") ) { return ::hx::Val( lx ); }
		if (HX_FIELD_EQ(inName,"ly") ) { return ::hx::Val( ly ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { return ::hx::Val( side_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getPos") ) { return ::hx::Val( getPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDir") ) { return ::hx::Val( getDir_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getPoint") ) { return ::hx::Val( getPoint_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
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
		if (HX_FIELD_EQ(inName,"lx") ) { lx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ly") ) { ly=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("px",08,62,00,00));
	outFields->push(HX_("py",09,62,00,00));
	outFields->push(HX_("lx",8c,5e,00,00));
	outFields->push(HX_("ly",8d,5e,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Ray_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Ray_obj,px),HX_("px",08,62,00,00)},
	{::hx::fsFloat,(int)offsetof(Ray_obj,py),HX_("py",09,62,00,00)},
	{::hx::fsFloat,(int)offsetof(Ray_obj,lx),HX_("lx",8c,5e,00,00)},
	{::hx::fsFloat,(int)offsetof(Ray_obj,ly),HX_("ly",8d,5e,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Ray_obj_sStaticStorageInfo = 0;
#endif

static ::String Ray_obj_sMemberFields[] = {
	HX_("px",08,62,00,00),
	HX_("py",09,62,00,00),
	HX_("lx",8c,5e,00,00),
	HX_("ly",8d,5e,00,00),
	HX_("side",97,8d,53,4c),
	HX_("getPoint",da,c3,66,26),
	HX_("getPos",9e,96,24,a3),
	HX_("getDir",57,76,1b,a3),
	HX_("normalize",8d,37,a1,ab),
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
	__mClass->mName = HX_("h2d.col.Ray",88,80,9b,5a);
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

} // end namespace h2d
} // end namespace col
