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
#ifndef INCLUDED_h2d_col_Segment
#include <h2d/col/Segment.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6a96b177ddf74aeb_51_new,"h2d.col.Segment","new",0x06553ec3,"h2d.col.Segment.new","h2d/col/Segment.hx",51,0x7092150f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a96b177ddf74aeb_57_setPoints,"h2d.col.Segment","setPoints",0xa16a6208,"h2d.col.Segment.setPoints","h2d/col/Segment.hx",57,0x7092150f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a96b177ddf74aeb_70_side,"h2d.col.Segment","side",0x8792b5d4,"h2d.col.Segment.side","h2d/col/Segment.hx",70,0x7092150f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a96b177ddf74aeb_76_distanceSq,"h2d.col.Segment","distanceSq",0x83974730,"h2d.col.Segment.distanceSq","h2d/col/Segment.hx",76,0x7092150f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a96b177ddf74aeb_98_distance,"h2d.col.Segment","distance",0xd95e1df2,"h2d.col.Segment.distance","h2d/col/Segment.hx",98,0x7092150f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a96b177ddf74aeb_104_project,"h2d.col.Segment","project",0xa4e6eebc,"h2d.col.Segment.project","h2d/col/Segment.hx",104,0x7092150f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a96b177ddf74aeb_123_lineIntersection,"h2d.col.Segment","lineIntersection",0xef9e341a,"h2d.col.Segment.lineIntersection","h2d/col/Segment.hx",123,0x7092150f)
namespace h2d{
namespace col{

void Segment_obj::__construct( ::h2d::col::Point p1, ::h2d::col::Point p2){
            	HX_STACKFRAME(&_hx_pos_6a96b177ddf74aeb_51_new)
HXDLIN(  51)		this->x = p1->x;
HXDLIN(  51)		this->y = p1->y;
HXDLIN(  51)		this->dx = (p2->x - this->x);
HXDLIN(  51)		this->dy = (p2->y - this->y);
HXDLIN(  51)		this->lenSq = ((this->dx * this->dx) + (this->dy * this->dy));
HXDLIN(  51)		this->invLenSq = (( (Float)(1) ) / this->lenSq);
            	}

Dynamic Segment_obj::__CreateEmpty() { return new Segment_obj; }

void *Segment_obj::_hx_vtable = 0;

Dynamic Segment_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Segment_obj > _hx_result = new Segment_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Segment_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x265ddc6d;
}

void Segment_obj::setPoints( ::h2d::col::Point p1, ::h2d::col::Point p2){
            	HX_STACKFRAME(&_hx_pos_6a96b177ddf74aeb_57_setPoints)
HXLINE(  58)		this->x = p1->x;
HXLINE(  59)		this->y = p1->y;
HXLINE(  60)		this->dx = (p2->x - this->x);
HXLINE(  61)		this->dy = (p2->y - this->y);
HXLINE(  62)		this->lenSq = ((this->dx * this->dx) + (this->dy * this->dy));
HXLINE(  63)		this->invLenSq = (( (Float)(1) ) / this->lenSq);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Segment_obj,setPoints,(void))

Float Segment_obj::side( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_6a96b177ddf74aeb_70_side)
HXDLIN(  70)		return ((this->dx * (p->y - this->y)) - (this->dy * (p->x - this->x)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,side,return )

Float Segment_obj::distanceSq( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_6a96b177ddf74aeb_76_distanceSq)
HXLINE(  77)		Float px = (p->x - this->x);
HXLINE(  78)		Float py = (p->y - this->y);
HXLINE(  79)		Float t = ((px * this->dx) + (py * this->dy));
HXLINE(  80)		if ((t < 0)) {
HXLINE(  81)			return ((px * px) + (py * py));
            		}
            		else {
HXLINE(  82)			if ((t > this->lenSq)) {
HXLINE(  83)				Float kx = (p->x - (this->x + this->dx));
HXLINE(  84)				Float ky = (p->y - (this->y + this->dy));
HXLINE(  85)				return ((kx * kx) + (ky * ky));
            			}
            			else {
HXLINE(  87)				Float tl2 = (t * this->invLenSq);
HXLINE(  88)				Float pdx = ((this->x + (tl2 * this->dx)) - p->x);
HXLINE(  89)				Float pdy = ((this->y + (tl2 * this->dy)) - p->y);
HXLINE(  90)				return ((pdx * pdx) + (pdy * pdy));
            			}
            		}
HXLINE(  80)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,distanceSq,return )

Float Segment_obj::distance( ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_6a96b177ddf74aeb_98_distance)
HXDLIN(  98)		Float px = (p->x - this->x);
HXDLIN(  98)		Float py = (p->y - this->y);
HXDLIN(  98)		Float t = ((px * this->dx) + (py * this->dy));
HXDLIN(  98)		Float f;
HXDLIN(  98)		if ((t < 0)) {
HXDLIN(  98)			f = ((px * px) + (py * py));
            		}
            		else {
HXDLIN(  98)			if ((t > this->lenSq)) {
HXDLIN(  98)				Float kx = (p->x - (this->x + this->dx));
HXDLIN(  98)				Float ky = (p->y - (this->y + this->dy));
HXDLIN(  98)				f = ((kx * kx) + (ky * ky));
            			}
            			else {
HXDLIN(  98)				Float tl2 = (t * this->invLenSq);
HXDLIN(  98)				Float pdx = ((this->x + (tl2 * this->dx)) - p->x);
HXDLIN(  98)				Float pdy = ((this->y + (tl2 * this->dy)) - p->y);
HXDLIN(  98)				f = ((pdx * pdx) + (pdy * pdy));
            			}
            		}
HXDLIN(  98)		return ::Math_obj::sqrt(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,distance,return )

 ::h2d::col::Point Segment_obj::project( ::h2d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_6a96b177ddf74aeb_104_project)
HXLINE( 105)		Float px = (p->x - this->x);
HXLINE( 106)		Float py = (p->y - this->y);
HXLINE( 107)		Float t = ((px * this->dx) + (py * this->dy));
HXLINE( 108)		if ((t < 0)) {
HXLINE( 109)			return  ::h2d::col::Point_obj::__alloc( HX_CTX ,this->x,this->y);
            		}
            		else {
HXLINE( 110)			if ((t > this->lenSq)) {
HXLINE( 111)				return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(this->x + this->dx),(this->y + this->dy));
            			}
            			else {
HXLINE( 113)				Float tl2 = (t * this->invLenSq);
HXLINE( 114)				return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(this->x + (tl2 * this->dx)),(this->y + (tl2 * this->dy)));
            			}
            		}
HXLINE( 108)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,project,return )

 ::h2d::col::Point Segment_obj::lineIntersection( ::h2d::col::Ray r, ::h2d::col::Point pt){
            	HX_GC_STACKFRAME(&_hx_pos_6a96b177ddf74aeb_123_lineIntersection)
HXLINE( 124)		Float p_x = this->x;
HXDLIN( 124)		Float p_y = this->y;
HXDLIN( 124)		Float p_x1 = (this->x + this->dx);
HXDLIN( 124)		Float p_y1 = (this->y + this->dy);
HXDLIN( 124)		if (((((r->lx * (p_y - r->py)) - (r->ly * (p_x - r->px))) * ((r->lx * (p_y1 - r->py)) - (r->ly * (p_x1 - r->px)))) > 0)) {
HXLINE( 125)			return null();
            		}
HXLINE( 127)		Float u = (((r->lx * (this->y - r->py)) - (r->ly * (this->x - r->px))) / ((r->ly * this->dx) - (r->lx * this->dy)));
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		if (!((u < 0))) {
HXLINE( 128)			_hx_tmp = (u > 1);
            		}
            		else {
HXLINE( 128)			_hx_tmp = true;
            		}
HXDLIN( 128)		if (_hx_tmp) {
HXLINE( 128)			return null();
            		}
HXLINE( 130)		if (::hx::IsNull( pt )) {
HXLINE( 130)			pt =  ::h2d::col::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 131)		pt->x = (this->x + (u * this->dx));
HXLINE( 132)		pt->y = (this->y + (u * this->dy));
HXLINE( 134)		return pt;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Segment_obj,lineIntersection,return )


::hx::ObjectPtr< Segment_obj > Segment_obj::__new( ::h2d::col::Point p1, ::h2d::col::Point p2) {
	::hx::ObjectPtr< Segment_obj > __this = new Segment_obj();
	__this->__construct(p1,p2);
	return __this;
}

::hx::ObjectPtr< Segment_obj > Segment_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::col::Point p1, ::h2d::col::Point p2) {
	Segment_obj *__this = (Segment_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Segment_obj), false, "h2d.col.Segment"));
	*(void **)__this = Segment_obj::_hx_vtable;
	__this->__construct(p1,p2);
	return __this;
}

Segment_obj::Segment_obj()
{
}

::hx::Val Segment_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return ::hx::Val( dx ); }
		if (HX_FIELD_EQ(inName,"dy") ) { return ::hx::Val( dy ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"side") ) { return ::hx::Val( side_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lenSq") ) { return ::hx::Val( lenSq ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return ::hx::Val( project_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"invLenSq") ) { return ::hx::Val( invLenSq ); }
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setPoints") ) { return ::hx::Val( setPoints_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceSq") ) { return ::hx::Val( distanceSq_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lineIntersection") ) { return ::hx::Val( lineIntersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Segment_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lenSq") ) { lenSq=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"invLenSq") ) { invLenSq=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Segment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("dx",94,57,00,00));
	outFields->push(HX_("dy",95,57,00,00));
	outFields->push(HX_("lenSq",d3,f3,5c,72));
	outFields->push(HX_("invLenSq",22,cd,90,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Segment_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Segment_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,dx),HX_("dx",94,57,00,00)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,dy),HX_("dy",95,57,00,00)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,lenSq),HX_("lenSq",d3,f3,5c,72)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,invLenSq),HX_("invLenSq",22,cd,90,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Segment_obj_sStaticStorageInfo = 0;
#endif

static ::String Segment_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("dx",94,57,00,00),
	HX_("dy",95,57,00,00),
	HX_("lenSq",d3,f3,5c,72),
	HX_("invLenSq",22,cd,90,87),
	HX_("setPoints",65,87,d5,56),
	HX_("side",97,8d,53,4c),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("distance",35,93,f9,6b),
	HX_("project",d9,12,eb,f5),
	HX_("lineIntersection",5d,24,65,9f),
	::String(null()) };

::hx::Class Segment_obj::__mClass;

void Segment_obj::__register()
{
	Segment_obj _hx_dummy;
	Segment_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col.Segment",51,21,00,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Segment_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Segment_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Segment_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Segment_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
