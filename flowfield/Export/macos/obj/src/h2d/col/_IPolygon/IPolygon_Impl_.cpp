#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IBounds
#include <h2d/col/IBounds.h>
#endif
#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_h2d_col_OffsetKind
#include <h2d/col/OffsetKind.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h2d_col__IPolygon_IPolygon_Impl_
#include <h2d/col/_IPolygon/IPolygon_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_clipper_ClipType
#include <hxd/clipper/ClipType.h>
#endif
#ifndef INCLUDED_hxd_clipper_Clipper
#include <hxd/clipper/Clipper.h>
#endif
#ifndef INCLUDED_hxd_clipper_ClipperOffset
#include <hxd/clipper/ClipperOffset.h>
#endif
#ifndef INCLUDED_hxd_clipper_EndType
#include <hxd/clipper/EndType.h>
#endif
#ifndef INCLUDED_hxd_clipper_JoinType
#include <hxd/clipper/JoinType.h>
#endif
#ifndef INCLUDED_hxd_clipper_PolyFillType
#include <hxd/clipper/PolyFillType.h>
#endif
#ifndef INCLUDED_hxd_clipper_PolyType
#include <hxd/clipper/PolyType.h>
#endif
#ifndef INCLUDED_hxd_clipper_ResultKind
#include <hxd/clipper/ResultKind.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_ClipperBase
#include <hxd/clipper/_Clipper/ClipperBase.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_h2d_col_IPoint
#include <hxd/impl/ArrayIterator_h2d_col_IPoint.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_27_get_length,"h2d.col._IPolygon.IPolygon_Impl_","get_length",0x1d628ecc,"h2d.col._IPolygon.IPolygon_Impl_.get_length","h2d/col/IPolygon.hx",27,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_28_get_points,"h2d.col._IPolygon.IPolygon_Impl_","get_points",0x75890c09,"h2d.col._IPolygon.IPolygon_Impl_.get_points","h2d/col/IPolygon.hx",28,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_34__new,"h2d.col._IPolygon.IPolygon_Impl_","_new",0xc475fbbe,"h2d.col._IPolygon.IPolygon_Impl_._new","h2d/col/IPolygon.hx",34,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_40_iterator,"h2d.col._IPolygon.IPolygon_Impl_","iterator",0x31a022cb,"h2d.col._IPolygon.IPolygon_Impl_.iterator","h2d/col/IPolygon.hx",40,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_47_toPolygon,"h2d.col._IPolygon.IPolygon_Impl_","toPolygon",0xe93d22c2,"h2d.col._IPolygon.IPolygon_Impl_.toPolygon","h2d/col/IPolygon.hx",47,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_53_getBounds,"h2d.col._IPolygon.IPolygon_Impl_","getBounds",0x898bf82e,"h2d.col._IPolygon.IPolygon_Impl_.getBounds","h2d/col/IPolygon.hx",53,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_65_union,"h2d.col._IPolygon.IPolygon_Impl_","union",0xcd9a1012,"h2d.col._IPolygon.IPolygon_Impl_.union","h2d/col/IPolygon.hx",65,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_79_intersection,"h2d.col._IPolygon.IPolygon_Impl_","intersection",0xd9c1ada6,"h2d.col._IPolygon.IPolygon_Impl_.intersection","h2d/col/IPolygon.hx",79,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_88_subtraction,"h2d.col._IPolygon.IPolygon_Impl_","subtraction",0x97534c77,"h2d.col._IPolygon.IPolygon_Impl_.subtraction","h2d/col/IPolygon.hx",88,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_97_offset,"h2d.col._IPolygon.IPolygon_Impl_","offset",0x15e28f30,"h2d.col._IPolygon.IPolygon_Impl_.offset","h2d/col/IPolygon.hx",97,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_112_clipperOp,"h2d.col._IPolygon.IPolygon_Impl_","clipperOp",0xf1fc1311,"h2d.col._IPolygon.IPolygon_Impl_.clipperOp","h2d/col/IPolygon.hx",112,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_124_convexHull,"h2d.col._IPolygon.IPolygon_Impl_","convexHull",0xc9efc3f1,"h2d.col._IPolygon.IPolygon_Impl_.convexHull","h2d/col/IPolygon.hx",124,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_157_isClockwise,"h2d.col._IPolygon.IPolygon_Impl_","isClockwise",0xa66583eb,"h2d.col._IPolygon.IPolygon_Impl_.isClockwise","h2d/col/IPolygon.hx",157,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_170_area,"h2d.col._IPolygon.IPolygon_Impl_","area",0xc5cb71ea,"h2d.col._IPolygon.IPolygon_Impl_.area","h2d/col/IPolygon.hx",170,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_181_side,"h2d.col._IPolygon.IPolygon_Impl_","side",0xd1aa73f4,"h2d.col._IPolygon.IPolygon_Impl_.side","h2d/col/IPolygon.hx",181,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_187_isConvex,"h2d.col._IPolygon.IPolygon_Impl_","isConvex",0xbe4debce,"h2d.col._IPolygon.IPolygon_Impl_.isConvex","h2d/col/IPolygon.hx",187,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_206_reverse,"h2d.col._IPolygon.IPolygon_Impl_","reverse",0x53f1eae5,"h2d.col._IPolygon.IPolygon_Impl_.reverse","h2d/col/IPolygon.hx",206,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_215_contains,"h2d.col._IPolygon.IPolygon_Impl_","contains",0xca8132fc,"h2d.col._IPolygon.IPolygon_Impl_.contains","h2d/col/IPolygon.hx",215,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_243_optimize,"h2d.col._IPolygon.IPolygon_Impl_","optimize",0xbb1e65ba,"h2d.col._IPolygon.IPolygon_Impl_.optimize","h2d/col/IPolygon.hx",243,0x5b1b99a9)
HX_LOCAL_STACK_FRAME(_hx_pos_a083d66f37e450af_249_optimizeRec,"h2d.col._IPolygon.IPolygon_Impl_","optimizeRec",0xc95efbb6,"h2d.col._IPolygon.IPolygon_Impl_.optimizeRec","h2d/col/IPolygon.hx",249,0x5b1b99a9)
namespace h2d{
namespace col{
namespace _IPolygon{

void IPolygon_Impl__obj::__construct() { }

Dynamic IPolygon_Impl__obj::__CreateEmpty() { return new IPolygon_Impl__obj; }

void *IPolygon_Impl__obj::_hx_vtable = 0;

Dynamic IPolygon_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IPolygon_Impl__obj > _hx_result = new IPolygon_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IPolygon_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25f7e457;
}

int IPolygon_Impl__obj::get_length(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_27_get_length)
HXDLIN(  27)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygon_Impl__obj,get_length,return )

::Array< ::Dynamic> IPolygon_Impl__obj::get_points(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_28_get_points)
HXDLIN(  28)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygon_Impl__obj,get_points,return )

::Array< ::Dynamic> IPolygon_Impl__obj::_new(::Array< ::Dynamic> points){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_34__new)
HXDLIN(  34)		::Array< ::Dynamic> this1;
HXLINE(  35)		if (::hx::IsNull( points )) {
HXLINE(  35)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  35)			this1 = points;
            		}
HXLINE(  34)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygon_Impl__obj,_new,return )

 ::hxd::impl::ArrayIterator_h2d_col_IPoint IPolygon_Impl__obj::iterator(::Array< ::Dynamic> this1){
            	HX_GC_STACKFRAME(&_hx_pos_a083d66f37e450af_40_iterator)
HXDLIN(  40)		return  ::hxd::impl::ArrayIterator_h2d_col_IPoint_obj::__alloc( HX_CTX ,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygon_Impl__obj,iterator,return )

::Array< ::Dynamic> IPolygon_Impl__obj::toPolygon(::Array< ::Dynamic> this1,::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(((Float)1.));
            	HX_GC_STACKFRAME(&_hx_pos_a083d66f37e450af_47_toPolygon)
HXDLIN(  47)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  47)		{
HXDLIN(  47)			int _g1 = 0;
HXDLIN(  47)			::Array< ::Dynamic> _g2 = this1;
HXDLIN(  47)			while((_g1 < _g2->length)){
HXDLIN(  47)				 ::h2d::col::IPoint p = _g2->__get(_g1).StaticCast<  ::h2d::col::IPoint >();
HXDLIN(  47)				_g1 = (_g1 + 1);
HXDLIN(  47)				_g->push( ::h2d::col::Point_obj::__alloc( HX_CTX ,(( (Float)(p->x) ) * scale),(( (Float)(p->y) ) * scale)));
            			}
            		}
HXDLIN(  47)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IPolygon_Impl__obj,toPolygon,return )

 ::h2d::col::IBounds IPolygon_Impl__obj::getBounds(::Array< ::Dynamic> this1, ::h2d::col::IBounds b){
            	HX_GC_STACKFRAME(&_hx_pos_a083d66f37e450af_53_getBounds)
HXLINE(  54)		if (::hx::IsNull( b )) {
HXLINE(  54)			b =  ::h2d::col::IBounds_obj::__alloc( HX_CTX );
            		}
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			::Array< ::Dynamic> _g1 = this1;
HXDLIN(  55)			while((_g < _g1->length)){
HXLINE(  55)				 ::h2d::col::IPoint p = _g1->__get(_g).StaticCast<  ::h2d::col::IPoint >();
HXDLIN(  55)				_g = (_g + 1);
HXLINE(  56)				{
HXLINE(  56)					if ((p->x < b->xMin)) {
HXLINE(  56)						b->xMin = p->x;
            					}
HXDLIN(  56)					if ((p->x > b->xMax)) {
HXLINE(  56)						b->xMax = p->x;
            					}
HXDLIN(  56)					if ((p->y < b->yMin)) {
HXLINE(  56)						b->yMin = p->y;
            					}
HXDLIN(  56)					if ((p->y > b->yMax)) {
HXLINE(  56)						b->yMax = p->y;
            					}
            				}
            			}
            		}
HXLINE(  57)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IPolygon_Impl__obj,getBounds,return )

::Array< ::Dynamic> IPolygon_Impl__obj::_hx_union(::Array< ::Dynamic> this1,::Array< ::Dynamic> p,::hx::Null< bool >  __o_withHoles){
            		bool withHoles = __o_withHoles.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_a083d66f37e450af_65_union)
HXLINE(  66)		 ::hxd::clipper::Clipper c =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE(  67)		if (!(withHoles)) {
HXLINE(  67)			c->resultKind = ::hxd::clipper::ResultKind_obj::NoHoles_dyn();
            		}
HXLINE(  68)		c->addPolygon(this1,::hxd::clipper::PolyType_obj::Clip_dyn());
HXLINE(  69)		c->addPolygon(p,::hxd::clipper::PolyType_obj::Clip_dyn());
HXLINE(  70)		return c->execute(::hxd::clipper::ClipType_obj::Union_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IPolygon_Impl__obj,_hx_union,return )

::Array< ::Dynamic> IPolygon_Impl__obj::intersection(::Array< ::Dynamic> this1,::Array< ::Dynamic> p,::hx::Null< bool >  __o_withHoles){
            		bool withHoles = __o_withHoles.Default(true);
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_79_intersection)
HXDLIN(  79)		return ::h2d::col::_IPolygon::IPolygon_Impl__obj::clipperOp(this1,p,::hxd::clipper::ClipType_obj::Intersection_dyn(),withHoles);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IPolygon_Impl__obj,intersection,return )

::Array< ::Dynamic> IPolygon_Impl__obj::subtraction(::Array< ::Dynamic> this1,::Array< ::Dynamic> p,::hx::Null< bool >  __o_withHoles){
            		bool withHoles = __o_withHoles.Default(true);
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_88_subtraction)
HXDLIN(  88)		return ::h2d::col::_IPolygon::IPolygon_Impl__obj::clipperOp(this1,p,::hxd::clipper::ClipType_obj::Difference_dyn(),withHoles);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IPolygon_Impl__obj,subtraction,return )

::Array< ::Dynamic> IPolygon_Impl__obj::offset(::Array< ::Dynamic> this1,Float delta, ::h2d::col::OffsetKind kind,::hx::Null< bool >  __o_withHoles){
            		bool withHoles = __o_withHoles.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_a083d66f37e450af_97_offset)
HXLINE(  98)		 ::hxd::clipper::ClipperOffset c =  ::hxd::clipper::ClipperOffset_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  99)		switch((int)(kind->_hx_getIndex())){
            			case (int)0: {
HXLINE( 101)				c->addPolygon(this1,::hxd::clipper::JoinType_obj::Square_dyn(),::hxd::clipper::EndType_obj::ClosedPol_dyn());
            			}
            			break;
            			case (int)1: {
HXLINE( 103)				c->addPolygon(this1,::hxd::clipper::JoinType_obj::Miter_dyn(),::hxd::clipper::EndType_obj::ClosedPol_dyn());
            			}
            			break;
            			case (int)2: {
HXLINE( 104)				Float arc = kind->_hx_getFloat(0);
HXDLIN( 104)				{
HXLINE( 105)					c->ArcTolerance = arc;
HXLINE( 106)					c->addPolygon(this1,::hxd::clipper::JoinType_obj::Round_dyn(),::hxd::clipper::EndType_obj::ClosedPol_dyn());
            				}
            			}
            			break;
            		}
HXLINE( 108)		if (!(withHoles)) {
HXLINE( 108)			c->resultKind = ::hxd::clipper::ResultKind_obj::NoHoles_dyn();
            		}
HXLINE( 109)		return c->execute(delta);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(IPolygon_Impl__obj,offset,return )

::Array< ::Dynamic> IPolygon_Impl__obj::clipperOp(::Array< ::Dynamic> this1,::Array< ::Dynamic> p, ::hxd::clipper::ClipType op,bool withHoles){
            	HX_GC_STACKFRAME(&_hx_pos_a083d66f37e450af_112_clipperOp)
HXLINE( 113)		 ::hxd::clipper::Clipper c =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE( 114)		if (!(withHoles)) {
HXLINE( 114)			c->resultKind = ::hxd::clipper::ResultKind_obj::NoHoles_dyn();
            		}
HXLINE( 115)		c->addPolygon(this1,::hxd::clipper::PolyType_obj::Subject_dyn());
HXLINE( 116)		c->addPolygon(p,::hxd::clipper::PolyType_obj::Clip_dyn());
HXLINE( 117)		return c->execute(op,::hxd::clipper::PolyFillType_obj::NonZero_dyn(),::hxd::clipper::PolyFillType_obj::NonZero_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(IPolygon_Impl__obj,clipperOp,return )

::Array< ::Dynamic> IPolygon_Impl__obj::convexHull(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_124_convexHull)
HXLINE( 125)		int len = this1->length;
HXLINE( 126)		if ((len < 3)) {
HXLINE( 127)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("convexHull() needs at least 3 points",c6,8e,85,9f)));
            		}
HXLINE( 129)		int first = 0;
HXLINE( 130)		int firstX = this1->__get(first).StaticCast<  ::h2d::col::IPoint >()->x;
HXLINE( 131)		{
HXLINE( 131)			int _g = 1;
HXDLIN( 131)			int _g1 = this1->length;
HXDLIN( 131)			while((_g < _g1)){
HXLINE( 131)				_g = (_g + 1);
HXDLIN( 131)				int i = (_g - 1);
HXLINE( 132)				int px = this1->__get(i).StaticCast<  ::h2d::col::IPoint >()->x;
HXLINE( 133)				if ((px < firstX)) {
HXLINE( 134)					first = i;
HXLINE( 135)					firstX = px;
            				}
            			}
            		}
HXLINE( 139)		::Array< ::Dynamic> hull = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 140)		int curr = first;
HXLINE( 141)		int next = 0;
HXLINE( 142)		while(true){
HXLINE( 143)			hull->push(this1->__get(curr).StaticCast<  ::h2d::col::IPoint >());
HXLINE( 144)			next = ::hx::Mod((curr + 1),len);
HXLINE( 145)			{
HXLINE( 145)				int _g = 0;
HXDLIN( 145)				int _g1 = len;
HXDLIN( 145)				while((_g < _g1)){
HXLINE( 145)					_g = (_g + 1);
HXDLIN( 145)					int i = (_g - 1);
HXLINE( 146)					 ::h2d::col::IPoint p1 = this1->__get(i).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 146)					 ::h2d::col::IPoint p2 = this1->__get(curr).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 146)					 ::h2d::col::IPoint t = this1->__get(next).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 146)					if (((((p2->x - p1->x) * (t->y - p1->y)) - ((p2->y - p1->y) * (t->x - p1->x))) < 0)) {
HXLINE( 147)						next = i;
            					}
            				}
            			}
HXLINE( 149)			curr = next;
HXLINE( 142)			if (!((curr != first))) {
HXLINE( 142)				goto _hx_goto_14;
            			}
            		}
            		_hx_goto_14:;
HXLINE( 151)		return hull;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygon_Impl__obj,convexHull,return )

bool IPolygon_Impl__obj::isClockwise(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_157_isClockwise)
HXLINE( 158)		Float sum = ((Float)0.);
HXLINE( 159)		 ::h2d::col::IPoint p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 160)		{
HXLINE( 160)			int _g = 0;
HXDLIN( 160)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 160)			while((_g < _g1->length)){
HXLINE( 160)				 ::h2d::col::IPoint p2 = _g1->__get(_g).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 160)				_g = (_g + 1);
HXLINE( 161)				sum = (sum + ((p2->x - p1->x) * (p2->y + p1->y)));
HXLINE( 162)				p1 = p2;
            			}
            		}
HXLINE( 164)		return (sum < 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygon_Impl__obj,isClockwise,return )

Float IPolygon_Impl__obj::area(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_170_area)
HXLINE( 171)		Float sum = ((Float)0.);
HXLINE( 172)		 ::h2d::col::IPoint p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 173)		{
HXLINE( 173)			int _g = 0;
HXDLIN( 173)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 173)			while((_g < _g1->length)){
HXLINE( 173)				 ::h2d::col::IPoint p2 = _g1->__get(_g).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 173)				_g = (_g + 1);
HXLINE( 174)				sum = (sum + ((p1->x * p2->y) - (p2->x * p1->y)));
HXLINE( 175)				p1 = p2;
            			}
            		}
HXLINE( 177)		Float _hx_tmp;
HXDLIN( 177)		if ((sum < 0)) {
HXLINE( 177)			_hx_tmp = -(sum);
            		}
            		else {
HXLINE( 177)			_hx_tmp = sum;
            		}
HXDLIN( 177)		return (_hx_tmp * ((Float)0.5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygon_Impl__obj,area,return )

int IPolygon_Impl__obj::side(::Array< ::Dynamic> this1, ::h2d::col::IPoint p1, ::h2d::col::IPoint p2, ::h2d::col::IPoint t){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_181_side)
HXDLIN( 181)		return (((p2->x - p1->x) * (t->y - p1->y)) - ((p2->y - p1->y) * (t->x - p1->x)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(IPolygon_Impl__obj,side,return )

bool IPolygon_Impl__obj::isConvex(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_187_isConvex)
HXLINE( 188)		 ::h2d::col::IPoint p1 = this1->__get((this1->length - 2)).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 189)		 ::h2d::col::IPoint p2 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 190)		 ::h2d::col::IPoint p3 = this1->__get(0).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 191)		bool s = ((((p2->x - p1->x) * (p3->y - p1->y)) - ((p2->y - p1->y) * (p3->x - p1->x))) > 0);
HXLINE( 192)		{
HXLINE( 192)			int _g = 1;
HXDLIN( 192)			int _g1 = this1->length;
HXDLIN( 192)			while((_g < _g1)){
HXLINE( 192)				_g = (_g + 1);
HXDLIN( 192)				int i = (_g - 1);
HXLINE( 193)				p1 = p2;
HXLINE( 194)				p2 = p3;
HXLINE( 195)				p3 = this1->__get(i).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 196)				if ((((((p2->x - p1->x) * (p3->y - p1->y)) - ((p2->y - p1->y) * (p3->x - p1->x))) > 0) != s)) {
HXLINE( 197)					return false;
            				}
            			}
            		}
HXLINE( 199)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygon_Impl__obj,isConvex,return )

void IPolygon_Impl__obj::reverse(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_206_reverse)
HXDLIN( 206)		this1->reverse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IPolygon_Impl__obj,reverse,(void))

bool IPolygon_Impl__obj::contains(::Array< ::Dynamic> this1, ::h2d::col::Point p,::hx::Null< bool >  __o_isConvex){
            		bool isConvex = __o_isConvex.Default(false);
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_215_contains)
HXDLIN( 215)		if (isConvex) {
HXLINE( 216)			 ::h2d::col::IPoint p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 217)			{
HXLINE( 217)				int _g = 0;
HXDLIN( 217)				::Array< ::Dynamic> _g1 = this1;
HXDLIN( 217)				while((_g < _g1->length)){
HXLINE( 217)					 ::h2d::col::IPoint p2 = _g1->__get(_g).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 217)					_g = (_g + 1);
HXLINE( 218)					if ((((( (Float)((p2->x - p1->x)) ) * (p->y - ( (Float)(p1->y) ))) - (( (Float)((p2->y - p1->y)) ) * (p->x - ( (Float)(p1->x) )))) < 0)) {
HXLINE( 219)						return false;
            					}
HXLINE( 220)					p1 = p2;
            				}
            			}
HXLINE( 222)			return true;
            		}
            		else {
HXLINE( 224)			int w = 0;
HXLINE( 225)			 ::h2d::col::IPoint p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 226)			{
HXLINE( 226)				int _g = 0;
HXDLIN( 226)				::Array< ::Dynamic> _g1 = this1;
HXDLIN( 226)				while((_g < _g1->length)){
HXLINE( 226)					 ::h2d::col::IPoint p2 = _g1->__get(_g).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 226)					_g = (_g + 1);
HXLINE( 227)					if ((p2->y <= p->y)) {
HXLINE( 228)						bool _hx_tmp;
HXDLIN( 228)						if ((p1->y > p->y)) {
HXLINE( 228)							_hx_tmp = (((( (Float)((p1->x - p2->x)) ) * (p->y - ( (Float)(p2->y) ))) - (( (Float)((p1->y - p2->y)) ) * (p->x - ( (Float)(p2->x) )))) > 0);
            						}
            						else {
HXLINE( 228)							_hx_tmp = false;
            						}
HXDLIN( 228)						if (_hx_tmp) {
HXLINE( 229)							w = (w + 1);
            						}
            					}
            					else {
HXLINE( 231)						bool _hx_tmp;
HXDLIN( 231)						if ((p1->y <= p->y)) {
HXLINE( 231)							_hx_tmp = (((( (Float)((p1->x - p2->x)) ) * (p->y - ( (Float)(p2->y) ))) - (( (Float)((p1->y - p2->y)) ) * (p->x - ( (Float)(p2->x) )))) < 0);
            						}
            						else {
HXLINE( 231)							_hx_tmp = false;
            						}
HXDLIN( 231)						if (_hx_tmp) {
HXLINE( 232)							w = (w - 1);
            						}
            					}
HXLINE( 233)					p1 = p2;
            				}
            			}
HXLINE( 235)			return (w != 0);
            		}
HXLINE( 215)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IPolygon_Impl__obj,contains,return )

::Array< ::Dynamic> IPolygon_Impl__obj::optimize(::Array< ::Dynamic> this1,Float epsilon){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_243_optimize)
HXLINE( 244)		::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 245)		::h2d::col::_IPolygon::IPolygon_Impl__obj::optimizeRec(this1,0,this1->length,out,epsilon);
HXLINE( 246)		return out;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IPolygon_Impl__obj,optimize,return )

void IPolygon_Impl__obj::optimizeRec(::Array< ::Dynamic> points,int index,int len,::Array< ::Dynamic> out,Float epsilon){
            	HX_STACKFRAME(&_hx_pos_a083d66f37e450af_249_optimizeRec)
HXLINE( 250)		Float dmax = ((Float)0.);
HXLINE( 285)		 ::h2d::col::IPoint pfirst = points->__get(index).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 286)		 ::h2d::col::IPoint plast = points->__get((len - 1)).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 287)		{
HXLINE( 287)			int _g = (index + 1);
HXDLIN( 287)			int _g1 = (len - 1);
HXDLIN( 287)			while((_g < _g1)){
HXLINE( 287)				_g = (_g + 1);
HXDLIN( 287)				int i = (_g - 1);
HXLINE( 288)				 ::h2d::col::IPoint p0 = points->__get(i).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 288)				int A = (p0->x - pfirst->x);
HXDLIN( 288)				int B = (p0->y - pfirst->y);
HXDLIN( 288)				int C = (plast->x - pfirst->x);
HXDLIN( 288)				int D = (plast->y - pfirst->y);
HXDLIN( 288)				int dot = ((A * C) + (B * D));
HXDLIN( 288)				int dist = ((C * C) + (D * D));
HXDLIN( 288)				Float param = ((Float)-1.);
HXDLIN( 288)				if ((dist != 0)) {
HXLINE( 263)					param = (( (Float)(dot) ) / ( (Float)(dist) ));
            				}
HXLINE( 288)				Float xx;
HXDLIN( 288)				Float yy;
HXDLIN( 288)				if ((param < 0)) {
HXLINE( 268)					xx = ( (Float)(pfirst->x) );
HXLINE( 269)					yy = ( (Float)(pfirst->y) );
            				}
            				else {
HXLINE( 288)					if ((param > 1)) {
HXLINE( 272)						xx = ( (Float)(plast->x) );
HXLINE( 273)						yy = ( (Float)(plast->y) );
            					}
            					else {
HXLINE( 276)						xx = (pfirst->x + (param * ( (Float)(C) )));
HXLINE( 277)						yy = (pfirst->y + (param * ( (Float)(D) )));
            					}
            				}
HXLINE( 288)				Float dx = (( (Float)(p0->x) ) - xx);
HXDLIN( 288)				Float dy = (( (Float)(p0->y) ) - yy);
HXDLIN( 288)				Float d = ((dx * dx) + (dy * dy));
HXLINE( 289)				if ((d > dmax)) {
HXLINE( 290)					index = i;
HXLINE( 291)					dmax = d;
            				}
            			}
            		}
HXLINE( 295)		if ((dmax >= epsilon)) {
HXLINE( 296)			::h2d::col::_IPolygon::IPolygon_Impl__obj::optimizeRec(points,0,index,out,epsilon);
HXLINE( 297)			out->pop().StaticCast<  ::h2d::col::IPoint >();
HXLINE( 298)			::h2d::col::_IPolygon::IPolygon_Impl__obj::optimizeRec(points,index,len,out,epsilon);
            		}
            		else {
HXLINE( 300)			out->push(points->__get(index).StaticCast<  ::h2d::col::IPoint >());
HXLINE( 301)			out->push(points->__get((len - 1)).StaticCast<  ::h2d::col::IPoint >());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(IPolygon_Impl__obj,optimizeRec,(void))


IPolygon_Impl__obj::IPolygon_Impl__obj()
{
}

bool IPolygon_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"area") ) { outValue = area_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"side") ) { outValue = side_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"union") ) { outValue = _hx_union_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { outValue = offset_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isConvex") ) { outValue = isConvex_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"optimize") ) { outValue = optimize_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toPolygon") ) { outValue = toPolygon_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { outValue = getBounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clipperOp") ) { outValue = clipperOp_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_points") ) { outValue = get_points_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"convexHull") ) { outValue = convexHull_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subtraction") ) { outValue = subtraction_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isClockwise") ) { outValue = isClockwise_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"optimizeRec") ) { outValue = optimizeRec_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { outValue = intersection_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IPolygon_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IPolygon_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class IPolygon_Impl__obj::__mClass;

static ::String IPolygon_Impl__obj_sStaticFields[] = {
	HX_("get_length",af,04,8f,8f),
	HX_("get_points",ec,81,b5,e7),
	HX_("_new",61,15,1f,3f),
	HX_("iterator",ee,49,9a,93),
	HX_("toPolygon",3f,3a,25,42),
	HX_("getBounds",ab,0f,74,e2),
	HX_("union",0f,65,e7,a6),
	HX_("intersection",49,a2,61,88),
	HX_("subtraction",34,fd,0d,0c),
	HX_("offset",93,97,3f,60),
	HX_("clipperOp",8e,2a,e4,4a),
	HX_("convexHull",d4,39,1c,3c),
	HX_("isClockwise",a8,34,20,1b),
	HX_("area",8d,8b,74,40),
	HX_("side",97,8d,53,4c),
	HX_("isConvex",f1,12,48,20),
	HX_("reverse",22,39,fc,1a),
	HX_("contains",1f,5a,7b,2c),
	HX_("optimize",dd,8c,18,1d),
	HX_("optimizeRec",73,ac,19,3e),
	::String(null())
};

void IPolygon_Impl__obj::__register()
{
	IPolygon_Impl__obj _hx_dummy;
	IPolygon_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col._IPolygon.IPolygon_Impl_",31,17,41,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IPolygon_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IPolygon_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< IPolygon_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IPolygon_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IPolygon_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
} // end namespace _IPolygon
