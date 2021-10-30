#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h2d_col_Segment
#include <h2d/col/Segment.h>
#endif
#ifndef INCLUDED_h2d_col__Segments_Segments_Impl_
#include <h2d/col/_Segments/Segments_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_h2d_col_Segment
#include <hxd/impl/ArrayIterator_h2d_col_Segment.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5bd7306660c27543_18_get_segments,"h2d.col._Segments.Segments_Impl_","get_segments",0xbcdf82a6,"h2d.col._Segments.Segments_Impl_.get_segments","h2d/col/Segments.hx",18,0x3cb000ba)
HX_LOCAL_STACK_FRAME(_hx_pos_5bd7306660c27543_23_get_length,"h2d.col._Segments.Segments_Impl_","get_length",0xfb162cac,"h2d.col._Segments.Segments_Impl_.get_length","h2d/col/Segments.hx",23,0x3cb000ba)
HX_LOCAL_STACK_FRAME(_hx_pos_5bd7306660c27543_27_iterator,"h2d.col._Segments.Segments_Impl_","iterator",0xbc8688ab,"h2d.col._Segments.Segments_Impl_.iterator","h2d/col/Segments.hx",27,0x3cb000ba)
HX_LOCAL_STACK_FRAME(_hx_pos_5bd7306660c27543_37_containsPoint,"h2d.col._Segments.Segments_Impl_","containsPoint",0x4451edd4,"h2d.col._Segments.Segments_Impl_.containsPoint","h2d/col/Segments.hx",37,0x3cb000ba)
HX_LOCAL_STACK_FRAME(_hx_pos_5bd7306660c27543_52_toPolygon,"h2d.col._Segments.Segments_Impl_","toPolygon",0xe7efe0e2,"h2d.col._Segments.Segments_Impl_.toPolygon","h2d/col/Segments.hx",52,0x3cb000ba)
HX_LOCAL_STACK_FRAME(_hx_pos_5bd7306660c27543_58_project,"h2d.col._Segments.Segments_Impl_","project",0x96d1babc,"h2d.col._Segments.Segments_Impl_.project","h2d/col/Segments.hx",58,0x3cb000ba)
HX_LOCAL_STACK_FRAME(_hx_pos_5bd7306660c27543_73_distanceSq,"h2d.col._Segments.Segments_Impl_","distanceSq",0xf773fb30,"h2d.col._Segments.Segments_Impl_.distanceSq","h2d/col/Segments.hx",73,0x3cb000ba)
HX_LOCAL_STACK_FRAME(_hx_pos_5bd7306660c27543_86_distance,"h2d.col._Segments.Segments_Impl_","distance",0x94e5d1f2,"h2d.col._Segments.Segments_Impl_.distance","h2d/col/Segments.hx",86,0x3cb000ba)
namespace h2d{
namespace col{
namespace _Segments{

void Segments_Impl__obj::__construct() { }

Dynamic Segments_Impl__obj::__CreateEmpty() { return new Segments_Impl__obj; }

void *Segments_Impl__obj::_hx_vtable = 0;

Dynamic Segments_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Segments_Impl__obj > _hx_result = new Segments_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Segments_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x582a3b19;
}

::Array< ::Dynamic> Segments_Impl__obj::get_segments(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_5bd7306660c27543_18_get_segments)
HXDLIN(  18)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Segments_Impl__obj,get_segments,return )

int Segments_Impl__obj::get_length(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_5bd7306660c27543_23_get_length)
HXDLIN(  23)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Segments_Impl__obj,get_length,return )

 ::hxd::impl::ArrayIterator_h2d_col_Segment Segments_Impl__obj::iterator(::Array< ::Dynamic> this1){
            	HX_GC_STACKFRAME(&_hx_pos_5bd7306660c27543_27_iterator)
HXDLIN(  27)		return  ::hxd::impl::ArrayIterator_h2d_col_Segment_obj::__alloc( HX_CTX ,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Segments_Impl__obj,iterator,return )

bool Segments_Impl__obj::containsPoint(::Array< ::Dynamic> this1, ::h2d::col::Point p,bool isConvex){
            	HX_STACKFRAME(&_hx_pos_5bd7306660c27543_37_containsPoint)
HXLINE(  38)		if (isConvex) {
HXLINE(  39)			int _g = 0;
HXDLIN(  39)			::Array< ::Dynamic> _g1 = this1;
HXDLIN(  39)			while((_g < _g1->length)){
HXLINE(  39)				 ::h2d::col::Segment s = _g1->__get(_g).StaticCast<  ::h2d::col::Segment >();
HXDLIN(  39)				_g = (_g + 1);
HXLINE(  40)				if ((((s->dx * (p->y - s->y)) - (s->dy * (p->x - s->x))) < 0)) {
HXLINE(  41)					return false;
            				}
            			}
            		}
            		else {
HXLINE(  43)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            		}
HXLINE(  45)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Segments_Impl__obj,containsPoint,return )

::Array< ::Dynamic> Segments_Impl__obj::toPolygon(::Array< ::Dynamic> this1){
            	HX_GC_STACKFRAME(&_hx_pos_5bd7306660c27543_52_toPolygon)
HXDLIN(  52)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  52)		{
HXDLIN(  52)			int _g1 = 0;
HXDLIN(  52)			::Array< ::Dynamic> _g2 = this1;
HXDLIN(  52)			while((_g1 < _g2->length)){
HXDLIN(  52)				 ::h2d::col::Segment s = _g2->__get(_g1).StaticCast<  ::h2d::col::Segment >();
HXDLIN(  52)				_g1 = (_g1 + 1);
HXDLIN(  52)				_g->push( ::h2d::col::Point_obj::__alloc( HX_CTX ,s->x,s->y));
            			}
            		}
HXDLIN(  52)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Segments_Impl__obj,toPolygon,return )

 ::h2d::col::Point Segments_Impl__obj::project(::Array< ::Dynamic> this1, ::h2d::col::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_5bd7306660c27543_58_project)
HXLINE(  59)		Float dmin = ((Float)1e20);
HXDLIN(  59)		 ::h2d::col::Segment smin = null();
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			::Array< ::Dynamic> _g1 = this1;
HXDLIN(  60)			while((_g < _g1->length)){
HXLINE(  60)				 ::h2d::col::Segment s = _g1->__get(_g).StaticCast<  ::h2d::col::Segment >();
HXDLIN(  60)				_g = (_g + 1);
HXLINE(  61)				Float px = (p->x - s->x);
HXDLIN(  61)				Float py = (p->y - s->y);
HXDLIN(  61)				Float t = ((px * s->dx) + (py * s->dy));
HXDLIN(  61)				Float d;
HXDLIN(  61)				if ((t < 0)) {
HXLINE(  61)					d = ((px * px) + (py * py));
            				}
            				else {
HXLINE(  61)					if ((t > s->lenSq)) {
HXLINE(  61)						Float kx = (p->x - (s->x + s->dx));
HXDLIN(  61)						Float ky = (p->y - (s->y + s->dy));
HXDLIN(  61)						d = ((kx * kx) + (ky * ky));
            					}
            					else {
HXLINE(  61)						Float tl2 = (t * s->invLenSq);
HXDLIN(  61)						Float pdx = ((s->x + (tl2 * s->dx)) - p->x);
HXDLIN(  61)						Float pdy = ((s->y + (tl2 * s->dy)) - p->y);
HXDLIN(  61)						d = ((pdx * pdx) + (pdy * pdy));
            					}
            				}
HXLINE(  62)				if ((d < dmin)) {
HXLINE(  63)					dmin = d;
HXLINE(  64)					smin = s;
            				}
            			}
            		}
HXLINE(  67)		Float px = (p->x - smin->x);
HXDLIN(  67)		Float py = (p->y - smin->y);
HXDLIN(  67)		Float t = ((px * smin->dx) + (py * smin->dy));
HXDLIN(  67)		if ((t < 0)) {
HXLINE(  67)			return  ::h2d::col::Point_obj::__alloc( HX_CTX ,smin->x,smin->y);
            		}
            		else {
HXLINE(  67)			if ((t > smin->lenSq)) {
HXLINE(  67)				return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(smin->x + smin->dx),(smin->y + smin->dy));
            			}
            			else {
HXLINE(  67)				Float tl2 = (t * smin->invLenSq);
HXDLIN(  67)				return  ::h2d::col::Point_obj::__alloc( HX_CTX ,(smin->x + (tl2 * smin->dx)),(smin->y + (tl2 * smin->dy)));
            			}
            		}
HXDLIN(  67)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Segments_Impl__obj,project,return )

Float Segments_Impl__obj::distanceSq(::Array< ::Dynamic> this1, ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_5bd7306660c27543_73_distanceSq)
HXLINE(  74)		Float dmin = ((Float)1e20);
HXLINE(  75)		{
HXLINE(  75)			int _g = 0;
HXDLIN(  75)			::Array< ::Dynamic> _g1 = this1;
HXDLIN(  75)			while((_g < _g1->length)){
HXLINE(  75)				 ::h2d::col::Segment s = _g1->__get(_g).StaticCast<  ::h2d::col::Segment >();
HXDLIN(  75)				_g = (_g + 1);
HXLINE(  76)				Float px = (p->x - s->x);
HXDLIN(  76)				Float py = (p->y - s->y);
HXDLIN(  76)				Float t = ((px * s->dx) + (py * s->dy));
HXDLIN(  76)				Float d;
HXDLIN(  76)				if ((t < 0)) {
HXLINE(  76)					d = ((px * px) + (py * py));
            				}
            				else {
HXLINE(  76)					if ((t > s->lenSq)) {
HXLINE(  76)						Float kx = (p->x - (s->x + s->dx));
HXDLIN(  76)						Float ky = (p->y - (s->y + s->dy));
HXDLIN(  76)						d = ((kx * kx) + (ky * ky));
            					}
            					else {
HXLINE(  76)						Float tl2 = (t * s->invLenSq);
HXDLIN(  76)						Float pdx = ((s->x + (tl2 * s->dx)) - p->x);
HXDLIN(  76)						Float pdy = ((s->y + (tl2 * s->dy)) - p->y);
HXDLIN(  76)						d = ((pdx * pdx) + (pdy * pdy));
            					}
            				}
HXLINE(  77)				if ((d < dmin)) {
HXLINE(  77)					dmin = d;
            				}
            			}
            		}
HXLINE(  79)		return dmin;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Segments_Impl__obj,distanceSq,return )

Float Segments_Impl__obj::distance(::Array< ::Dynamic> this1, ::h2d::col::Point p){
            	HX_STACKFRAME(&_hx_pos_5bd7306660c27543_86_distance)
HXDLIN(  86)		return ::Math_obj::sqrt(::h2d::col::_Segments::Segments_Impl__obj::distanceSq(this1,p));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Segments_Impl__obj,distance,return )


Segments_Impl__obj::Segments_Impl__obj()
{
}

bool Segments_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { outValue = project_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toPolygon") ) { outValue = toPolygon_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceSq") ) { outValue = distanceSq_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_segments") ) { outValue = get_segments_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { outValue = containsPoint_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Segments_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Segments_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Segments_Impl__obj::__mClass;

static ::String Segments_Impl__obj_sStaticFields[] = {
	HX_("get_segments",69,a1,40,03),
	HX_("get_length",af,04,8f,8f),
	HX_("iterator",ee,49,9a,93),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("toPolygon",3f,3a,25,42),
	HX_("project",d9,12,eb,f5),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("distance",35,93,f9,6b),
	::String(null())
};

void Segments_Impl__obj::__register()
{
	Segments_Impl__obj _hx_dummy;
	Segments_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col._Segments.Segments_Impl_",51,ed,3e,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Segments_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Segments_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Segments_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Segments_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Segments_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
} // end namespace _Segments
