#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h2d_col_Collider
#include <h2d/col/Collider.h>
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
#ifndef INCLUDED_h2d_col_PolygonCollider
#include <h2d/col/PolygonCollider.h>
#endif
#ifndef INCLUDED_h2d_col_Ray
#include <h2d/col/Ray.h>
#endif
#ifndef INCLUDED_h2d_col_Segment
#include <h2d/col/Segment.h>
#endif
#ifndef INCLUDED_h2d_col__Polygon_Polygon_Impl_
#include <h2d/col/_Polygon/Polygon_Impl_.h>
#endif
#ifndef INCLUDED_hxd_earcut_Earcut
#include <hxd/earcut/Earcut.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_h2d_col_Point
#include <hxd/impl/ArrayIterator_h2d_col_Point.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_19_get_length,"h2d.col._Polygon.Polygon_Impl_","get_length",0xf7b65e54,"h2d.col._Polygon.Polygon_Impl_.get_length","h2d/col/Polygon.hx",19,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_20_get_points,"h2d.col._Polygon.Polygon_Impl_","get_points",0x4fdcdb91,"h2d.col._Polygon.Polygon_Impl_.get_points","h2d/col/Polygon.hx",20,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_26__new,"h2d.col._Polygon.Polygon_Impl_","_new",0x34a1f546,"h2d.col._Polygon.Polygon_Impl_._new","h2d/col/Polygon.hx",26,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_32_iterator,"h2d.col._Polygon.Polygon_Impl_","iterator",0xa83b8053,"h2d.col._Polygon.Polygon_Impl_.iterator","h2d/col/Polygon.hx",32,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_41_fastTriangulate,"h2d.col._Polygon.Polygon_Impl_","fastTriangulate",0x746cd82b,"h2d.col._Polygon.Polygon_Impl_.fastTriangulate","h2d/col/Polygon.hx",41,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_47_toSegments,"h2d.col._Polygon.Polygon_Impl_","toSegments",0x286adba0,"h2d.col._Polygon.Polygon_Impl_.toSegments","h2d/col/Polygon.hx",47,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_62_toIPolygon,"h2d.col._Polygon.Polygon_Impl_","toIPolygon",0x2fd6e751,"h2d.col._Polygon.Polygon_Impl_.toIPolygon","h2d/col/Polygon.hx",62,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_69_getBounds,"h2d.col._Polygon.Polygon_Impl_","getBounds",0xdae271a6,"h2d.col._Polygon.Polygon_Impl_.getBounds","h2d/col/Polygon.hx",69,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_81_getCollider,"h2d.col._Polygon.Polygon_Impl_","getCollider",0xaa10b8a5,"h2d.col._Polygon.Polygon_Impl_.getCollider","h2d/col/Polygon.hx",81,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_84_xSort,"h2d.col._Polygon.Polygon_Impl_","xSort",0x2c47f871,"h2d.col._Polygon.Polygon_Impl_.xSort","h2d/col/Polygon.hx",84,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_99_convexHull,"h2d.col._Polygon.Polygon_Impl_","convexHull",0xa4439379,"h2d.col._Polygon.Polygon_Impl_.convexHull","h2d/col/Polygon.hx",99,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_94_convexHull,"h2d.col._Polygon.Polygon_Impl_","convexHull",0xa4439379,"h2d.col._Polygon.Polygon_Impl_.convexHull","h2d/col/Polygon.hx",94,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_127_isClockwise,"h2d.col._Polygon.Polygon_Impl_","isClockwise",0xd5674b63,"h2d.col._Polygon.Polygon_Impl_.isClockwise","h2d/col/Polygon.hx",127,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_140_area,"h2d.col._Polygon.Polygon_Impl_","area",0x35f76b72,"h2d.col._Polygon.Polygon_Impl_.area","h2d/col/Polygon.hx",140,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_153_centroid,"h2d.col._Polygon.Polygon_Impl_","centroid",0xac8716a5,"h2d.col._Polygon.Polygon_Impl_.centroid","h2d/col/Polygon.hx",153,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_175_side,"h2d.col._Polygon.Polygon_Impl_","side",0x41d66d7c,"h2d.col._Polygon.Polygon_Impl_.side","h2d/col/Polygon.hx",175,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_181_isConvex,"h2d.col._Polygon.Polygon_Impl_","isConvex",0x34e94956,"h2d.col._Polygon.Polygon_Impl_.isConvex","h2d/col/Polygon.hx",181,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_201_reverse,"h2d.col._Polygon.Polygon_Impl_","reverse",0x00ac965d,"h2d.col._Polygon.Polygon_Impl_.reverse","h2d/col/Polygon.hx",201,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_208_transform,"h2d.col._Polygon.Polygon_Impl_","transform",0x3e018f67,"h2d.col._Polygon.Polygon_Impl_.transform","h2d/col/Polygon.hx",208,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_250_findClosestPoint,"h2d.col._Polygon.Polygon_Impl_","findClosestPoint",0x50eed875,"h2d.col._Polygon.Polygon_Impl_.findClosestPoint","h2d/col/Polygon.hx",250,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_266_projectPoint,"h2d.col._Polygon.Polygon_Impl_","projectPoint",0x83ceeb9c,"h2d.col._Polygon.Polygon_Impl_.projectPoint","h2d/col/Polygon.hx",266,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_288_distance,"h2d.col._Polygon.Polygon_Impl_","distance",0x809ac99a,"h2d.col._Polygon.Polygon_Impl_.distance","h2d/col/Polygon.hx",288,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_294_distanceSq,"h2d.col._Polygon.Polygon_Impl_","distanceSq",0xf4142cd8,"h2d.col._Polygon.Polygon_Impl_.distanceSq","h2d/col/Polygon.hx",294,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_309_rayIntersection,"h2d.col._Polygon.Polygon_Impl_","rayIntersection",0xcaa18b8e,"h2d.col._Polygon.Polygon_Impl_.rayIntersection","h2d/col/Polygon.hx",309,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_338_orientation,"h2d.col._Polygon.Polygon_Impl_","orientation",0xb846058b,"h2d.col._Polygon.Polygon_Impl_.orientation","h2d/col/Polygon.hx",338,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_348_onSegment,"h2d.col._Polygon.Polygon_Impl_","onSegment",0x76e7ea4f,"h2d.col._Polygon.Polygon_Impl_.onSegment","h2d/col/Polygon.hx",348,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_359_intersect,"h2d.col._Polygon.Polygon_Impl_","intersect",0x3ae362da,"h2d.col._Polygon.Polygon_Impl_.intersect","h2d/col/Polygon.hx",359,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_379_selfIntersecting,"h2d.col._Polygon.Polygon_Impl_","selfIntersecting",0xc1333e74,"h2d.col._Polygon.Polygon_Impl_.selfIntersecting","h2d/col/Polygon.hx",379,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_399_optimize,"h2d.col._Polygon.Polygon_Impl_","optimize",0x31b9c342,"h2d.col._Polygon.Polygon_Impl_.optimize","h2d/col/Polygon.hx",399,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_405_optimizeRec,"h2d.col._Polygon.Polygon_Impl_","optimizeRec",0xf860c32e,"h2d.col._Polygon.Polygon_Impl_.optimizeRec","h2d/col/Polygon.hx",405,0xda4498a8)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6ae716b962582b_461_makeCircle,"h2d.col._Polygon.Polygon_Impl_","makeCircle",0x1004a043,"h2d.col._Polygon.Polygon_Impl_.makeCircle","h2d/col/Polygon.hx",461,0xda4498a8)
namespace h2d{
namespace col{
namespace _Polygon{

void Polygon_Impl__obj::__construct() { }

Dynamic Polygon_Impl__obj::__CreateEmpty() { return new Polygon_Impl__obj; }

void *Polygon_Impl__obj::_hx_vtable = 0;

Dynamic Polygon_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Polygon_Impl__obj > _hx_result = new Polygon_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Polygon_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78047f19;
}

int Polygon_Impl__obj::get_length(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_19_get_length)
HXDLIN(  19)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,get_length,return )

::Array< ::Dynamic> Polygon_Impl__obj::get_points(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_20_get_points)
HXDLIN(  20)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,get_points,return )

::Array< ::Dynamic> Polygon_Impl__obj::_new(::Array< ::Dynamic> points){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_26__new)
HXDLIN(  26)		::Array< ::Dynamic> this1;
HXLINE(  27)		if (::hx::IsNull( points )) {
HXLINE(  27)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  27)			this1 = points;
            		}
HXLINE(  26)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,_new,return )

 ::hxd::impl::ArrayIterator_h2d_col_Point Polygon_Impl__obj::iterator(::Array< ::Dynamic> this1){
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_32_iterator)
HXDLIN(  32)		return  ::hxd::impl::ArrayIterator_h2d_col_Point_obj::__alloc( HX_CTX ,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,iterator,return )

::Array< int > Polygon_Impl__obj::fastTriangulate(::Array< ::Dynamic> this1){
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_41_fastTriangulate)
HXDLIN(  41)		return  ::hxd::earcut::Earcut_obj::__alloc( HX_CTX )->triangulate_h2d_col_Point(this1,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,fastTriangulate,return )

::Array< ::Dynamic> Polygon_Impl__obj::toSegments(::Array< ::Dynamic> this1){
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_47_toSegments)
HXLINE(  48)		::Array< ::Dynamic> segments = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  49)		 ::h2d::col::Point p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
HXLINE(  50)		{
HXLINE(  50)			int _g = 0;
HXDLIN(  50)			::Array< ::Dynamic> _g1 = this1;
HXDLIN(  50)			while((_g < _g1->length)){
HXLINE(  50)				 ::h2d::col::Point p2 = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN(  50)				_g = (_g + 1);
HXLINE(  51)				 ::h2d::col::Segment s =  ::h2d::col::Segment_obj::__alloc( HX_CTX ,p1,p2);
HXLINE(  52)				segments->push(s);
HXLINE(  53)				p1 = p2;
            			}
            		}
HXLINE(  55)		return segments;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,toSegments,return )

::Array< ::Dynamic> Polygon_Impl__obj::toIPolygon(::Array< ::Dynamic> this1,::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(((Float)1.));
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_62_toIPolygon)
HXDLIN(  62)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  62)		{
HXDLIN(  62)			int _g1 = 0;
HXDLIN(  62)			::Array< ::Dynamic> _g2 = this1;
HXDLIN(  62)			while((_g1 < _g2->length)){
HXDLIN(  62)				 ::h2d::col::Point p = _g2->__get(_g1).StaticCast<  ::h2d::col::Point >();
HXDLIN(  62)				_g1 = (_g1 + 1);
HXDLIN(  62)				_g->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((p->x * scale)),::Math_obj::round((p->y * scale))));
            			}
            		}
HXDLIN(  62)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygon_Impl__obj,toIPolygon,return )

 ::h2d::col::Bounds Polygon_Impl__obj::getBounds(::Array< ::Dynamic> this1, ::h2d::col::Bounds b){
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_69_getBounds)
HXLINE(  70)		if (::hx::IsNull( b )) {
HXLINE(  70)			b =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
            		}
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			::Array< ::Dynamic> _g1 = this1;
HXDLIN(  71)			while((_g < _g1->length)){
HXLINE(  71)				 ::h2d::col::Point p = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN(  71)				_g = (_g + 1);
HXLINE(  72)				{
HXLINE(  72)					if ((p->x < b->xMin)) {
HXLINE(  72)						b->xMin = p->x;
            					}
HXDLIN(  72)					if ((p->x > b->xMax)) {
HXLINE(  72)						b->xMax = p->x;
            					}
HXDLIN(  72)					if ((p->y < b->yMin)) {
HXLINE(  72)						b->yMin = p->y;
            					}
HXDLIN(  72)					if ((p->y > b->yMax)) {
HXLINE(  72)						b->yMax = p->y;
            					}
            				}
            			}
            		}
HXLINE(  73)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygon_Impl__obj,getBounds,return )

 ::h2d::col::PolygonCollider Polygon_Impl__obj::getCollider(::Array< ::Dynamic> this1,::hx::Null< bool >  __o_isConvex){
            		bool isConvex = __o_isConvex.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_81_getCollider)
HXDLIN(  81)		return  ::h2d::col::PolygonCollider_obj::__alloc( HX_CTX ,::Array_obj< ::Dynamic>::__new(1)->init(0,this1),isConvex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygon_Impl__obj,getCollider,return )

int Polygon_Impl__obj::xSort(::Array< ::Dynamic> this1, ::h2d::col::Point a, ::h2d::col::Point b){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_84_xSort)
HXLINE(  85)		if ((a->x == b->x)) {
HXLINE(  86)			if ((a->y < b->y)) {
HXLINE(  86)				return -1;
            			}
            			else {
HXLINE(  86)				return 1;
            			}
            		}
HXLINE(  87)		if ((a->x < b->x)) {
HXLINE(  87)			return -1;
            		}
            		else {
HXLINE(  87)			return 1;
            		}
HXDLIN(  87)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_Impl__obj,xSort,return )

::Array< ::Dynamic> Polygon_Impl__obj::convexHull(::Array< ::Dynamic> this1){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::h2d::col::Point a, ::h2d::col::Point b){
            			HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_99_convexHull)
HXLINE(  99)			if ((a->x == b->x)) {
HXLINE(  99)				if ((a->y < b->y)) {
HXLINE(  99)					return -1;
            				}
            				else {
HXLINE(  99)					return 1;
            				}
            			}
            			else {
HXLINE(  99)				if ((a->x < b->x)) {
HXLINE(  99)					return -1;
            				}
            				else {
HXLINE(  99)					return 1;
            				}
            			}
HXDLIN(  99)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_94_convexHull)
HXLINE(  95)		int len = this1->length;
HXLINE(  96)		if ((this1->length < 3)) {
HXLINE(  97)			return this1;
            		}
HXLINE(  99)		this1->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 101)		::Array< ::Dynamic> hull = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 102)		int k = 0;
HXLINE( 103)		{
HXLINE( 103)			int _g = 0;
HXDLIN( 103)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 103)			while((_g < _g1->length)){
HXLINE( 103)				 ::h2d::col::Point p = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN( 103)				_g = (_g + 1);
HXLINE( 104)				while(true){
HXLINE( 104)					bool _hx_tmp;
HXDLIN( 104)					if ((k >= 2)) {
HXLINE( 104)						 ::h2d::col::Point p1 = hull->__get((k - 2)).StaticCast<  ::h2d::col::Point >();
HXDLIN( 104)						 ::h2d::col::Point p2 = hull->__get((k - 1)).StaticCast<  ::h2d::col::Point >();
HXDLIN( 104)						_hx_tmp = ((((p2->x - p1->x) * (p->y - p1->y)) - ((p2->y - p1->y) * (p->x - p1->x))) <= 0);
            					}
            					else {
HXLINE( 104)						_hx_tmp = false;
            					}
HXDLIN( 104)					if (!(_hx_tmp)) {
HXLINE( 104)						goto _hx_goto_14;
            					}
HXLINE( 105)					k = (k - 1);
            				}
            				_hx_goto_14:;
HXLINE( 106)				k = (k + 1);
HXDLIN( 106)				hull[(k - 1)] = p;
            			}
            		}
HXLINE( 109)		int i = (this1->length - 2);
HXLINE( 110)		int len1 = (k + 1);
HXLINE( 111)		while((i >= 0)){
HXLINE( 112)			 ::h2d::col::Point p = this1->__get(i).StaticCast<  ::h2d::col::Point >();
HXLINE( 113)			while(true){
HXLINE( 113)				bool _hx_tmp;
HXDLIN( 113)				if ((k >= len1)) {
HXLINE( 113)					 ::h2d::col::Point p1 = hull->__get((k - 2)).StaticCast<  ::h2d::col::Point >();
HXDLIN( 113)					 ::h2d::col::Point p2 = hull->__get((k - 1)).StaticCast<  ::h2d::col::Point >();
HXDLIN( 113)					_hx_tmp = ((((p2->x - p1->x) * (p->y - p1->y)) - ((p2->y - p1->y) * (p->x - p1->x))) <= 0);
            				}
            				else {
HXLINE( 113)					_hx_tmp = false;
            				}
HXDLIN( 113)				if (!(_hx_tmp)) {
HXLINE( 113)					goto _hx_goto_16;
            				}
HXLINE( 114)				k = (k - 1);
            			}
            			_hx_goto_16:;
HXLINE( 115)			k = (k + 1);
HXDLIN( 115)			hull[(k - 1)] = p;
HXLINE( 116)			i = (i - 1);
            		}
HXLINE( 119)		while((hull->length >= k)){
HXLINE( 120)			hull->pop().StaticCast<  ::h2d::col::Point >();
            		}
HXLINE( 121)		return hull;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,convexHull,return )

bool Polygon_Impl__obj::isClockwise(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_127_isClockwise)
HXLINE( 128)		Float sum = ((Float)0.);
HXLINE( 129)		 ::h2d::col::Point p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
HXLINE( 130)		{
HXLINE( 130)			int _g = 0;
HXDLIN( 130)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 130)			while((_g < _g1->length)){
HXLINE( 130)				 ::h2d::col::Point p2 = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN( 130)				_g = (_g + 1);
HXLINE( 131)				sum = (sum + ((p2->x - p1->x) * (p2->y + p1->y)));
HXLINE( 132)				p1 = p2;
            			}
            		}
HXLINE( 134)		return (sum < 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,isClockwise,return )

Float Polygon_Impl__obj::area(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_140_area)
HXLINE( 141)		Float sum = ((Float)0.);
HXLINE( 142)		 ::h2d::col::Point p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
HXLINE( 143)		{
HXLINE( 143)			int _g = 0;
HXDLIN( 143)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 143)			while((_g < _g1->length)){
HXLINE( 143)				 ::h2d::col::Point p2 = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN( 143)				_g = (_g + 1);
HXLINE( 144)				sum = (sum + ((p2->x * p1->y) - (p1->x * p2->y)));
HXLINE( 145)				p1 = p2;
            			}
            		}
HXLINE( 147)		Float _hx_tmp;
HXDLIN( 147)		if ((sum < 0)) {
HXLINE( 147)			_hx_tmp = -(sum);
            		}
            		else {
HXLINE( 147)			_hx_tmp = sum;
            		}
HXDLIN( 147)		return (_hx_tmp * ((Float)0.5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,area,return )

 ::h2d::col::Point Polygon_Impl__obj::centroid(::Array< ::Dynamic> this1){
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_153_centroid)
HXLINE( 154)		Float A = ((Float)0.);
HXLINE( 155)		Float cx = ((Float)0.);
HXLINE( 156)		Float cy = ((Float)0.);
HXLINE( 158)		 ::h2d::col::Point p0 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
HXLINE( 159)		{
HXLINE( 159)			int _g = 0;
HXDLIN( 159)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 159)			while((_g < _g1->length)){
HXLINE( 159)				 ::h2d::col::Point p = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN( 159)				_g = (_g + 1);
HXLINE( 160)				Float a = ((p0->x * p->y) - (p->x * p0->y));
HXLINE( 161)				cx = (cx + ((p0->x + p->x) * a));
HXLINE( 162)				cy = (cy + ((p0->y + p->y) * a));
HXLINE( 163)				A = (A + a);
HXLINE( 164)				p0 = p;
            			}
            		}
HXLINE( 167)		A = (A * ((Float)0.5));
HXLINE( 168)		cx = (cx * (( (Float)(1) ) / (( (Float)(6) ) * A)));
HXLINE( 169)		cy = (cy * (( (Float)(1) ) / (( (Float)(6) ) * A)));
HXLINE( 171)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,cx,cy);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,centroid,return )

Float Polygon_Impl__obj::side(::Array< ::Dynamic> this1, ::h2d::col::Point p1, ::h2d::col::Point p2, ::h2d::col::Point t){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_175_side)
HXDLIN( 175)		return (((p2->x - p1->x) * (t->y - p1->y)) - ((p2->y - p1->y) * (t->x - p1->x)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_Impl__obj,side,return )

bool Polygon_Impl__obj::isConvex(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_181_isConvex)
HXLINE( 182)		if ((this1->length < 4)) {
HXLINE( 182)			return true;
            		}
HXLINE( 183)		 ::h2d::col::Point p1 = this1->__get((this1->length - 2)).StaticCast<  ::h2d::col::Point >();
HXLINE( 184)		 ::h2d::col::Point p2 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
HXLINE( 185)		 ::h2d::col::Point p3 = this1->__get(0).StaticCast<  ::h2d::col::Point >();
HXLINE( 186)		bool s = ((((p2->x - p1->x) * (p3->y - p1->y)) - ((p2->y - p1->y) * (p3->x - p1->x))) > 0);
HXLINE( 187)		{
HXLINE( 187)			int _g = 1;
HXDLIN( 187)			int _g1 = this1->length;
HXDLIN( 187)			while((_g < _g1)){
HXLINE( 187)				_g = (_g + 1);
HXDLIN( 187)				int i = (_g - 1);
HXLINE( 188)				p1 = p2;
HXLINE( 189)				p2 = p3;
HXLINE( 190)				p3 = this1->__get(i).StaticCast<  ::h2d::col::Point >();
HXLINE( 191)				if ((((((p2->x - p1->x) * (p3->y - p1->y)) - ((p2->y - p1->y) * (p3->x - p1->x))) > 0) != s)) {
HXLINE( 192)					return false;
            				}
            			}
            		}
HXLINE( 194)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,isConvex,return )

void Polygon_Impl__obj::reverse(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_201_reverse)
HXDLIN( 201)		this1->reverse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,reverse,(void))

void Polygon_Impl__obj::transform(::Array< ::Dynamic> this1, ::h2d::col::Matrix mat){
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_208_transform)
HXDLIN( 208)		int _g = 0;
HXDLIN( 208)		int _g1 = this1->length;
HXDLIN( 208)		while((_g < _g1)){
HXDLIN( 208)			_g = (_g + 1);
HXDLIN( 208)			int i = (_g - 1);
HXLINE( 209)			 ::h2d::col::Point pt = this1->__get(i).StaticCast<  ::h2d::col::Point >();
HXDLIN( 209)			this1[i] =  ::h2d::col::Point_obj::__alloc( HX_CTX ,(((pt->x * mat->a) + (pt->y * mat->c)) + mat->x),(((pt->x * mat->b) + (pt->y * mat->d)) + mat->y));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygon_Impl__obj,transform,(void))

bool Polygon_Impl__obj::contains(::Array< ::Dynamic> this1, ::h2d::col::Point p,::hx::Null< bool >  __o_isConvex){
	bool isConvex = __o_isConvex.Default(false);
	if (isConvex) {
		 ::h2d::col::Point p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
		{
			int _g = 0;
			::Array< ::Dynamic> _g1 = this1;
			while((_g < _g1->length)){
				 ::h2d::col::Point p2 = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
				_g = (_g + 1);
				if (((((p2->x - p1->x) * (p->y - p1->y)) - ((p2->y - p1->y) * (p->x - p1->x))) < 0)) {
					return false;
				}
				p1 = p2;
			}
		}
		return true;
	}
	else {
		int w = 0;
		 ::h2d::col::Point p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
		{
			int _g = 0;
			::Array< ::Dynamic> _g1 = this1;
			while((_g < _g1->length)){
				 ::h2d::col::Point p2 = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
				_g = (_g + 1);
				if ((p2->y <= p->y)) {
					bool _hx_tmp;
					if ((p1->y > p->y)) {
						_hx_tmp = ((((p1->x - p2->x) * (p->y - p2->y)) - ((p1->y - p2->y) * (p->x - p2->x))) > 0);
					}
					else {
						_hx_tmp = false;
					}
					if (_hx_tmp) {
						w = (w + 1);
					}
				}
				else {
					bool _hx_tmp;
					if ((p1->y <= p->y)) {
						_hx_tmp = ((((p1->x - p2->x) * (p->y - p2->y)) - ((p1->y - p2->y) * (p->x - p2->x))) < 0);
					}
					else {
						_hx_tmp = false;
					}
					if (_hx_tmp) {
						w = (w - 1);
					}
				}
				p1 = p2;
			}
		}
		return (w != 0);
	}
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_Impl__obj,contains,return )

 ::h2d::col::Point Polygon_Impl__obj::findClosestPoint(::Array< ::Dynamic> this1, ::h2d::col::Point pt,Float maxDist){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_250_findClosestPoint)
HXLINE( 251)		 ::h2d::col::Point closest = null();
HXLINE( 252)		Float minDist = (maxDist * maxDist);
HXLINE( 253)		{
HXLINE( 253)			int _g = 0;
HXDLIN( 253)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 253)			while((_g < _g1->length)){
HXLINE( 253)				 ::h2d::col::Point cp = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN( 253)				_g = (_g + 1);
HXLINE( 254)				Float dx = (cp->x - pt->x);
HXDLIN( 254)				Float dy = (cp->y - pt->y);
HXDLIN( 254)				Float sqDist = ((dx * dx) + (dy * dy));
HXLINE( 255)				if ((sqDist < minDist)) {
HXLINE( 256)					closest = cp;
HXLINE( 257)					minDist = sqDist;
            				}
            			}
            		}
HXLINE( 260)		return closest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_Impl__obj,findClosestPoint,return )

 ::h2d::col::Point Polygon_Impl__obj::projectPoint(::Array< ::Dynamic> this1, ::h2d::col::Point pt){
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_266_projectPoint)
HXLINE( 267)		 ::h2d::col::Point p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
HXLINE( 268)		 ::h2d::col::Point closestProj = null();
HXLINE( 269)		Float minDistSq = ((Float)1e10);
HXLINE( 270)		{
HXLINE( 270)			int _g = 0;
HXDLIN( 270)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 270)			while((_g < _g1->length)){
HXLINE( 270)				 ::h2d::col::Point p2 = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN( 270)				_g = (_g + 1);
HXLINE( 271)				 ::h2d::col::Point p11 = p1;
HXDLIN( 271)				 ::h2d::col::Point p21 = p2;
HXDLIN( 271)				Float _this_x = p11->x;
HXDLIN( 271)				Float _this_y = p11->y;
HXDLIN( 271)				Float _this_dx = (p21->x - _this_x);
HXDLIN( 271)				Float _this_dy = (p21->y - _this_y);
HXDLIN( 271)				Float _this_lenSq = ((_this_dx * _this_dx) + (_this_dy * _this_dy));
HXDLIN( 271)				Float _this_invLenSq = (( (Float)(1) ) / _this_lenSq);
HXDLIN( 271)				Float px = (pt->x - _this_x);
HXDLIN( 271)				Float py = (pt->y - _this_y);
HXDLIN( 271)				Float t = ((px * _this_dx) + (py * _this_dy));
HXDLIN( 271)				 ::h2d::col::Point proj;
HXDLIN( 271)				if ((t < 0)) {
HXLINE( 271)					proj =  ::h2d::col::Point_obj::__alloc( HX_CTX ,_this_x,_this_y);
            				}
            				else {
HXLINE( 271)					if ((t > _this_lenSq)) {
HXLINE( 271)						proj =  ::h2d::col::Point_obj::__alloc( HX_CTX ,(_this_x + _this_dx),(_this_y + _this_dy));
            					}
            					else {
HXLINE( 271)						Float tl2 = (t * _this_invLenSq);
HXDLIN( 271)						proj =  ::h2d::col::Point_obj::__alloc( HX_CTX ,(_this_x + (tl2 * _this_dx)),(_this_y + (tl2 * _this_dy)));
            					}
            				}
HXLINE( 272)				Float dx = (proj->x - pt->x);
HXDLIN( 272)				Float dy = (proj->y - pt->y);
HXDLIN( 272)				Float distSq = ((dx * dx) + (dy * dy));
HXLINE( 273)				if ((distSq < minDistSq)) {
HXLINE( 274)					closestProj = proj;
HXLINE( 275)					minDistSq = distSq;
            				}
HXLINE( 277)				p1 = p2;
            			}
            		}
HXLINE( 279)		return closestProj;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygon_Impl__obj,projectPoint,return )

Float Polygon_Impl__obj::distance(::Array< ::Dynamic> this1, ::h2d::col::Point pt, ::Dynamic outside){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_288_distance)
HXDLIN( 288)		return ::Math_obj::sqrt(::h2d::col::_Polygon::Polygon_Impl__obj::distanceSq(this1,pt,outside));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_Impl__obj,distance,return )

Float Polygon_Impl__obj::distanceSq(::Array< ::Dynamic> this1, ::h2d::col::Point pt, ::Dynamic outside){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_294_distanceSq)
HXLINE( 295)		 ::h2d::col::Point p1 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
HXLINE( 296)		Float minDistSq = ((Float)1e10);
HXLINE( 297)		{
HXLINE( 297)			int _g = 0;
HXDLIN( 297)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 297)			while((_g < _g1->length)){
HXLINE( 297)				 ::h2d::col::Point p2 = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN( 297)				_g = (_g + 1);
HXLINE( 298)				 ::h2d::col::Point p11 = p1;
HXDLIN( 298)				 ::h2d::col::Point p21 = p2;
HXDLIN( 298)				Float s_x = p11->x;
HXDLIN( 298)				Float s_y = p11->y;
HXDLIN( 298)				Float s_dx = (p21->x - s_x);
HXDLIN( 298)				Float s_dy = (p21->y - s_y);
HXDLIN( 298)				Float s_lenSq = ((s_dx * s_dx) + (s_dy * s_dy));
HXDLIN( 298)				Float s_invLenSq = (( (Float)(1) ) / s_lenSq);
HXLINE( 299)				bool _hx_tmp;
HXDLIN( 299)				if (::hx::IsNotNull( outside )) {
HXLINE( 299)					_hx_tmp = ::hx::IsEq( (((s_dx * (pt->y - s_y)) - (s_dy * (pt->x - s_x))) < 0),outside );
            				}
            				else {
HXLINE( 299)					_hx_tmp = true;
            				}
HXDLIN( 299)				if (_hx_tmp) {
HXLINE( 300)					Float px = (pt->x - s_x);
HXDLIN( 300)					Float py = (pt->y - s_y);
HXDLIN( 300)					Float t = ((px * s_dx) + (py * s_dy));
HXDLIN( 300)					Float dist;
HXDLIN( 300)					if ((t < 0)) {
HXLINE( 300)						dist = ((px * px) + (py * py));
            					}
            					else {
HXLINE( 300)						if ((t > s_lenSq)) {
HXLINE( 300)							Float kx = (pt->x - (s_x + s_dx));
HXDLIN( 300)							Float ky = (pt->y - (s_y + s_dy));
HXDLIN( 300)							dist = ((kx * kx) + (ky * ky));
            						}
            						else {
HXLINE( 300)							Float tl2 = (t * s_invLenSq);
HXDLIN( 300)							Float pdx = ((s_x + (tl2 * s_dx)) - pt->x);
HXDLIN( 300)							Float pdy = ((s_y + (tl2 * s_dy)) - pt->y);
HXDLIN( 300)							dist = ((pdx * pdx) + (pdy * pdy));
            						}
            					}
HXLINE( 301)					if ((dist < minDistSq)) {
HXLINE( 302)						minDistSq = dist;
            					}
            				}
HXLINE( 304)				p1 = p2;
            			}
            		}
HXLINE( 306)		if ((minDistSq == ((Float)1e10))) {
HXLINE( 306)			return ((Float)0.);
            		}
            		else {
HXLINE( 306)			return minDistSq;
            		}
HXDLIN( 306)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_Impl__obj,distanceSq,return )

Float Polygon_Impl__obj::rayIntersection(::Array< ::Dynamic> this1, ::h2d::col::Ray r,bool bestMatch){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_309_rayIntersection)
HXLINE( 310)		Float dmin = ((Float)-1.);
HXLINE( 311)		 ::h2d::col::Point p0 = this1->__get((this1->length - 1)).StaticCast<  ::h2d::col::Point >();
HXLINE( 313)		{
HXLINE( 313)			int _g = 0;
HXDLIN( 313)			::Array< ::Dynamic> _g1 = this1;
HXDLIN( 313)			while((_g < _g1->length)){
HXLINE( 313)				 ::h2d::col::Point p = _g1->__get(_g).StaticCast<  ::h2d::col::Point >();
HXDLIN( 313)				_g = (_g + 1);
HXLINE( 314)				if (((((r->lx * (p0->y - r->py)) - (r->ly * (p0->x - r->px))) * ((r->lx * (p->y - r->py)) - (r->ly * (p->x - r->px)))) > 0)) {
HXLINE( 315)					p0 = p;
HXLINE( 316)					continue;
            				}
HXLINE( 319)				Float u = (((r->lx * (p0->y - r->py)) - (r->ly * (p0->x - r->px))) / ((r->ly * (p->x - p0->x)) - (r->lx * (p->y - p0->y))));
HXLINE( 320)				Float x = (p0->x + (u * (p->x - p0->x)));
HXLINE( 321)				Float y = (p0->y + (u * (p->y - p0->y)));
HXLINE( 322)				Float dx = (x - r->px);
HXDLIN( 322)				Float dy = (y - r->py);
HXDLIN( 322)				Float dz = ((Float)0.);
HXDLIN( 322)				Float d = (((dx * dx) + (dy * dy)) + (dz * dz));
HXLINE( 324)				bool _hx_tmp;
HXDLIN( 324)				if (!((d < dmin))) {
HXLINE( 324)					_hx_tmp = (dmin < 0);
            				}
            				else {
HXLINE( 324)					_hx_tmp = true;
            				}
HXDLIN( 324)				if (_hx_tmp) {
HXLINE( 325)					if (!(bestMatch)) {
HXLINE( 325)						return ::Math_obj::sqrt(d);
            					}
HXLINE( 326)					dmin = d;
            				}
HXLINE( 328)				p0 = p;
            			}
            		}
HXLINE( 331)		if ((dmin < 0)) {
HXLINE( 331)			return dmin;
            		}
            		else {
HXLINE( 331)			return ::Math_obj::sqrt(dmin);
            		}
HXDLIN( 331)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_Impl__obj,rayIntersection,return )

int Polygon_Impl__obj::orientation(::Array< ::Dynamic> this1, ::h2d::col::Point p, ::h2d::col::Point q, ::h2d::col::Point r){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_338_orientation)
HXLINE( 339)		Float v = (((q->x - p->x) * (r->y - p->y)) - ((q->y - p->y) * (r->x - p->x)));
HXLINE( 340)		if ((v == 0)) {
HXLINE( 340)			return 0;
            		}
HXLINE( 341)		if ((v > 0)) {
HXLINE( 341)			return 1;
            		}
            		else {
HXLINE( 341)			return -1;
            		}
HXDLIN( 341)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_Impl__obj,orientation,return )

bool Polygon_Impl__obj::onSegment(::Array< ::Dynamic> this1, ::h2d::col::Point p, ::h2d::col::Point q, ::h2d::col::Point r){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_348_onSegment)
HXLINE( 349)		Float a = p->x;
HXDLIN( 349)		Float b = q->x;
HXDLIN( 349)		Float _hx_tmp;
HXDLIN( 349)		if ((a < b)) {
HXLINE( 349)			_hx_tmp = b;
            		}
            		else {
HXLINE( 349)			_hx_tmp = a;
            		}
HXDLIN( 349)		if ((r->x > _hx_tmp)) {
HXLINE( 349)			return false;
            		}
HXLINE( 350)		Float a1 = p->x;
HXDLIN( 350)		Float b1 = q->x;
HXDLIN( 350)		Float _hx_tmp1;
HXDLIN( 350)		if ((a1 > b1)) {
HXLINE( 350)			_hx_tmp1 = b1;
            		}
            		else {
HXLINE( 350)			_hx_tmp1 = a1;
            		}
HXDLIN( 350)		if ((r->x < _hx_tmp1)) {
HXLINE( 350)			return false;
            		}
HXLINE( 351)		Float a2 = p->y;
HXDLIN( 351)		Float b2 = q->y;
HXDLIN( 351)		Float _hx_tmp2;
HXDLIN( 351)		if ((a2 < b2)) {
HXLINE( 351)			_hx_tmp2 = b2;
            		}
            		else {
HXLINE( 351)			_hx_tmp2 = a2;
            		}
HXDLIN( 351)		if ((r->y > _hx_tmp2)) {
HXLINE( 351)			return false;
            		}
HXLINE( 352)		Float a3 = p->y;
HXDLIN( 352)		Float b3 = q->y;
HXDLIN( 352)		Float _hx_tmp3;
HXDLIN( 352)		if ((a3 > b3)) {
HXLINE( 352)			_hx_tmp3 = b3;
            		}
            		else {
HXLINE( 352)			_hx_tmp3 = a3;
            		}
HXDLIN( 352)		if ((r->y < _hx_tmp3)) {
HXLINE( 352)			return false;
            		}
HXLINE( 353)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_Impl__obj,onSegment,return )

bool Polygon_Impl__obj::intersect(::Array< ::Dynamic> this1, ::h2d::col::Point p1, ::h2d::col::Point q1, ::h2d::col::Point p2, ::h2d::col::Point q2){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_359_intersect)
HXLINE( 360)		Float v = (((q1->x - p1->x) * (p2->y - p1->y)) - ((q1->y - p1->y) * (p2->x - p1->x)));
HXDLIN( 360)		int s1;
HXDLIN( 360)		if ((v == 0)) {
HXLINE( 360)			s1 = 0;
            		}
            		else {
HXLINE( 360)			if ((v > 0)) {
HXLINE( 360)				s1 = 1;
            			}
            			else {
HXLINE( 360)				s1 = -1;
            			}
            		}
HXLINE( 361)		Float v1 = (((q1->x - p1->x) * (q2->y - p1->y)) - ((q1->y - p1->y) * (q2->x - p1->x)));
HXDLIN( 361)		int s2;
HXDLIN( 361)		if ((v1 == 0)) {
HXLINE( 361)			s2 = 0;
            		}
            		else {
HXLINE( 361)			if ((v1 > 0)) {
HXLINE( 361)				s2 = 1;
            			}
            			else {
HXLINE( 361)				s2 = -1;
            			}
            		}
HXLINE( 362)		Float v2 = (((q2->x - p2->x) * (p1->y - p2->y)) - ((q2->y - p2->y) * (p1->x - p2->x)));
HXDLIN( 362)		int s3;
HXDLIN( 362)		if ((v2 == 0)) {
HXLINE( 362)			s3 = 0;
            		}
            		else {
HXLINE( 362)			if ((v2 > 0)) {
HXLINE( 362)				s3 = 1;
            			}
            			else {
HXLINE( 362)				s3 = -1;
            			}
            		}
HXLINE( 363)		Float v3 = (((q2->x - p2->x) * (q1->y - p2->y)) - ((q2->y - p2->y) * (q1->x - p2->x)));
HXDLIN( 363)		int s4;
HXDLIN( 363)		if ((v3 == 0)) {
HXLINE( 363)			s4 = 0;
            		}
            		else {
HXLINE( 363)			if ((v3 > 0)) {
HXLINE( 363)				s4 = 1;
            			}
            			else {
HXLINE( 363)				s4 = -1;
            			}
            		}
HXLINE( 365)		bool _hx_tmp;
HXDLIN( 365)		if ((s1 != s2)) {
HXLINE( 365)			_hx_tmp = (s3 != s4);
            		}
            		else {
HXLINE( 365)			_hx_tmp = false;
            		}
HXDLIN( 365)		if (_hx_tmp) {
HXLINE( 365)			return true;
            		}
HXLINE( 367)		bool _hx_tmp1;
HXDLIN( 367)		bool _hx_tmp2;
HXDLIN( 367)		bool _hx_tmp3;
HXDLIN( 367)		bool _hx_tmp4;
HXDLIN( 367)		if ((s1 == 0)) {
HXLINE( 367)			Float a = p1->x;
HXDLIN( 367)			Float b = q1->x;
HXDLIN( 367)			Float _hx_tmp;
HXDLIN( 367)			if ((a < b)) {
HXLINE( 367)				_hx_tmp = b;
            			}
            			else {
HXLINE( 367)				_hx_tmp = a;
            			}
HXDLIN( 367)			if ((p2->x > _hx_tmp)) {
HXLINE( 367)				_hx_tmp4 = false;
            			}
            			else {
HXLINE( 367)				Float a = p1->x;
HXDLIN( 367)				Float b = q1->x;
HXDLIN( 367)				Float _hx_tmp;
HXDLIN( 367)				if ((a > b)) {
HXLINE( 367)					_hx_tmp = b;
            				}
            				else {
HXLINE( 367)					_hx_tmp = a;
            				}
HXDLIN( 367)				if ((p2->x < _hx_tmp)) {
HXLINE( 367)					_hx_tmp4 = false;
            				}
            				else {
HXLINE( 367)					Float a = p1->y;
HXDLIN( 367)					Float b = q1->y;
HXDLIN( 367)					Float _hx_tmp;
HXDLIN( 367)					if ((a < b)) {
HXLINE( 367)						_hx_tmp = b;
            					}
            					else {
HXLINE( 367)						_hx_tmp = a;
            					}
HXDLIN( 367)					if ((p2->y > _hx_tmp)) {
HXLINE( 367)						_hx_tmp4 = false;
            					}
            					else {
HXLINE( 367)						Float a = p1->y;
HXDLIN( 367)						Float b = q1->y;
HXDLIN( 367)						Float _hx_tmp;
HXDLIN( 367)						if ((a > b)) {
HXLINE( 367)							_hx_tmp = b;
            						}
            						else {
HXLINE( 367)							_hx_tmp = a;
            						}
HXDLIN( 367)						if ((p2->y < _hx_tmp)) {
HXLINE( 367)							_hx_tmp4 = false;
            						}
            						else {
HXLINE( 367)							_hx_tmp4 = true;
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 367)			_hx_tmp4 = false;
            		}
HXDLIN( 367)		if (!(_hx_tmp4)) {
HXLINE( 368)			if ((s2 == 0)) {
HXLINE( 368)				Float a = p1->x;
HXDLIN( 368)				Float b = q1->x;
HXDLIN( 368)				Float _hx_tmp;
HXDLIN( 368)				if ((a < b)) {
HXLINE( 368)					_hx_tmp = b;
            				}
            				else {
HXLINE( 368)					_hx_tmp = a;
            				}
HXDLIN( 368)				if ((q2->x > _hx_tmp)) {
HXLINE( 367)					_hx_tmp3 = false;
            				}
            				else {
HXLINE( 368)					Float a = p1->x;
HXDLIN( 368)					Float b = q1->x;
HXDLIN( 368)					Float _hx_tmp;
HXDLIN( 368)					if ((a > b)) {
HXLINE( 368)						_hx_tmp = b;
            					}
            					else {
HXLINE( 368)						_hx_tmp = a;
            					}
HXDLIN( 368)					if ((q2->x < _hx_tmp)) {
HXLINE( 367)						_hx_tmp3 = false;
            					}
            					else {
HXLINE( 368)						Float a = p1->y;
HXDLIN( 368)						Float b = q1->y;
HXDLIN( 368)						Float _hx_tmp;
HXDLIN( 368)						if ((a < b)) {
HXLINE( 368)							_hx_tmp = b;
            						}
            						else {
HXLINE( 368)							_hx_tmp = a;
            						}
HXDLIN( 368)						if ((q2->y > _hx_tmp)) {
HXLINE( 367)							_hx_tmp3 = false;
            						}
            						else {
HXLINE( 368)							Float a = p1->y;
HXDLIN( 368)							Float b = q1->y;
HXDLIN( 368)							Float _hx_tmp;
HXDLIN( 368)							if ((a > b)) {
HXLINE( 368)								_hx_tmp = b;
            							}
            							else {
HXLINE( 368)								_hx_tmp = a;
            							}
HXDLIN( 368)							if ((q2->y < _hx_tmp)) {
HXLINE( 367)								_hx_tmp3 = false;
            							}
            							else {
HXLINE( 367)								_hx_tmp3 = true;
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 367)				_hx_tmp3 = false;
            			}
            		}
            		else {
HXLINE( 367)			_hx_tmp3 = true;
            		}
HXDLIN( 367)		if (!(_hx_tmp3)) {
HXLINE( 369)			if ((s3 == 0)) {
HXLINE( 369)				Float a = p2->x;
HXDLIN( 369)				Float b = q2->x;
HXDLIN( 369)				Float _hx_tmp;
HXDLIN( 369)				if ((a < b)) {
HXLINE( 369)					_hx_tmp = b;
            				}
            				else {
HXLINE( 369)					_hx_tmp = a;
            				}
HXDLIN( 369)				if ((p1->x > _hx_tmp)) {
HXLINE( 367)					_hx_tmp2 = false;
            				}
            				else {
HXLINE( 369)					Float a = p2->x;
HXDLIN( 369)					Float b = q2->x;
HXDLIN( 369)					Float _hx_tmp;
HXDLIN( 369)					if ((a > b)) {
HXLINE( 369)						_hx_tmp = b;
            					}
            					else {
HXLINE( 369)						_hx_tmp = a;
            					}
HXDLIN( 369)					if ((p1->x < _hx_tmp)) {
HXLINE( 367)						_hx_tmp2 = false;
            					}
            					else {
HXLINE( 369)						Float a = p2->y;
HXDLIN( 369)						Float b = q2->y;
HXDLIN( 369)						Float _hx_tmp;
HXDLIN( 369)						if ((a < b)) {
HXLINE( 369)							_hx_tmp = b;
            						}
            						else {
HXLINE( 369)							_hx_tmp = a;
            						}
HXDLIN( 369)						if ((p1->y > _hx_tmp)) {
HXLINE( 367)							_hx_tmp2 = false;
            						}
            						else {
HXLINE( 369)							Float a = p2->y;
HXDLIN( 369)							Float b = q2->y;
HXDLIN( 369)							Float _hx_tmp;
HXDLIN( 369)							if ((a > b)) {
HXLINE( 369)								_hx_tmp = b;
            							}
            							else {
HXLINE( 369)								_hx_tmp = a;
            							}
HXDLIN( 369)							if ((p1->y < _hx_tmp)) {
HXLINE( 367)								_hx_tmp2 = false;
            							}
            							else {
HXLINE( 367)								_hx_tmp2 = true;
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 367)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE( 367)			_hx_tmp2 = true;
            		}
HXDLIN( 367)		if (!(_hx_tmp2)) {
HXLINE( 370)			if ((s4 == 0)) {
HXLINE( 370)				Float a = p2->x;
HXDLIN( 370)				Float b = q2->x;
HXDLIN( 370)				Float _hx_tmp;
HXDLIN( 370)				if ((a < b)) {
HXLINE( 370)					_hx_tmp = b;
            				}
            				else {
HXLINE( 370)					_hx_tmp = a;
            				}
HXDLIN( 370)				if ((q1->x > _hx_tmp)) {
HXLINE( 367)					_hx_tmp1 = false;
            				}
            				else {
HXLINE( 370)					Float a = p2->x;
HXDLIN( 370)					Float b = q2->x;
HXDLIN( 370)					Float _hx_tmp;
HXDLIN( 370)					if ((a > b)) {
HXLINE( 370)						_hx_tmp = b;
            					}
            					else {
HXLINE( 370)						_hx_tmp = a;
            					}
HXDLIN( 370)					if ((q1->x < _hx_tmp)) {
HXLINE( 367)						_hx_tmp1 = false;
            					}
            					else {
HXLINE( 370)						Float a = p2->y;
HXDLIN( 370)						Float b = q2->y;
HXDLIN( 370)						Float _hx_tmp;
HXDLIN( 370)						if ((a < b)) {
HXLINE( 370)							_hx_tmp = b;
            						}
            						else {
HXLINE( 370)							_hx_tmp = a;
            						}
HXDLIN( 370)						if ((q1->y > _hx_tmp)) {
HXLINE( 367)							_hx_tmp1 = false;
            						}
            						else {
HXLINE( 370)							Float a = p2->y;
HXDLIN( 370)							Float b = q2->y;
HXDLIN( 370)							Float _hx_tmp;
HXDLIN( 370)							if ((a > b)) {
HXLINE( 370)								_hx_tmp = b;
            							}
            							else {
HXLINE( 370)								_hx_tmp = a;
            							}
HXDLIN( 370)							if ((q1->y < _hx_tmp)) {
HXLINE( 367)								_hx_tmp1 = false;
            							}
            							else {
HXLINE( 367)								_hx_tmp1 = true;
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 367)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 367)			_hx_tmp1 = true;
            		}
HXDLIN( 367)		if (_hx_tmp1) {
HXLINE( 371)			return true;
            		}
HXLINE( 373)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_Impl__obj,intersect,return )

bool Polygon_Impl__obj::selfIntersecting(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_379_selfIntersecting)
HXLINE( 380)		if ((this1->length < 4)) {
HXLINE( 380)			return false;
            		}
HXLINE( 382)		{
HXLINE( 382)			int _g = 0;
HXDLIN( 382)			int _g1 = (this1->length - 2);
HXDLIN( 382)			while((_g < _g1)){
HXLINE( 382)				_g = (_g + 1);
HXDLIN( 382)				int i = (_g - 1);
HXLINE( 383)				 ::h2d::col::Point p1 = this1->__get(i).StaticCast<  ::h2d::col::Point >();
HXLINE( 384)				 ::h2d::col::Point q1 = this1->__get((i + 1)).StaticCast<  ::h2d::col::Point >();
HXLINE( 385)				{
HXLINE( 385)					int _g1 = (i + 2);
HXDLIN( 385)					int _g2 = this1->length;
HXDLIN( 385)					while((_g1 < _g2)){
HXLINE( 385)						_g1 = (_g1 + 1);
HXDLIN( 385)						int j = (_g1 - 1);
HXLINE( 386)						 ::h2d::col::Point p2 = this1->__get(j).StaticCast<  ::h2d::col::Point >();
HXLINE( 387)						 ::h2d::col::Point q2 = this1->__get(::hx::Mod((j + 1),this1->length)).StaticCast<  ::h2d::col::Point >();
HXLINE( 388)						bool _hx_tmp;
HXDLIN( 388)						if (::hx::IsInstanceNotEq( q2,p1 )) {
HXLINE( 388)							_hx_tmp = ::h2d::col::_Polygon::Polygon_Impl__obj::intersect(this1,p1,q1,p2,q2);
            						}
            						else {
HXLINE( 388)							_hx_tmp = false;
            						}
HXDLIN( 388)						if (_hx_tmp) {
HXLINE( 389)							return true;
            						}
            					}
            				}
            			}
            		}
HXLINE( 393)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_Impl__obj,selfIntersecting,return )

::Array< ::Dynamic> Polygon_Impl__obj::optimize(::Array< ::Dynamic> this1,Float epsilon){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_399_optimize)
HXLINE( 400)		::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 401)		::h2d::col::_Polygon::Polygon_Impl__obj::optimizeRec(this1,0,(this1->length - 1),out,epsilon);
HXLINE( 402)		return out;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polygon_Impl__obj,optimize,return )

void Polygon_Impl__obj::optimizeRec(::Array< ::Dynamic> points,int start,int end,::Array< ::Dynamic> out,Float epsilon){
            	HX_STACKFRAME(&_hx_pos_fa6ae716b962582b_405_optimizeRec)
HXLINE( 406)		Float dmax = ((Float)0.);
HXLINE( 440)		 ::h2d::col::Point pfirst = points->__get(start).StaticCast<  ::h2d::col::Point >();
HXLINE( 441)		 ::h2d::col::Point plast = points->__get(end).StaticCast<  ::h2d::col::Point >();
HXLINE( 442)		int index = 0;
HXLINE( 443)		{
HXLINE( 443)			int _g = (start + 1);
HXDLIN( 443)			int _g1 = end;
HXDLIN( 443)			while((_g < _g1)){
HXLINE( 443)				_g = (_g + 1);
HXDLIN( 443)				int i = (_g - 1);
HXLINE( 444)				 ::h2d::col::Point p0 = points->__get(i).StaticCast<  ::h2d::col::Point >();
HXDLIN( 444)				Float A = (p0->x - pfirst->x);
HXDLIN( 444)				Float B = (p0->y - pfirst->y);
HXDLIN( 444)				Float C = (plast->x - pfirst->x);
HXDLIN( 444)				Float D = (plast->y - pfirst->y);
HXDLIN( 444)				Float dot = ((A * C) + (B * D));
HXDLIN( 444)				Float dist = ((C * C) + (D * D));
HXDLIN( 444)				Float param = ((Float)-1.);
HXDLIN( 444)				if ((dist != 0)) {
HXLINE( 444)					param = (dot / dist);
            				}
HXDLIN( 444)				Float xx;
HXDLIN( 444)				Float yy;
HXDLIN( 444)				if ((param < 0)) {
HXLINE( 444)					xx = pfirst->x;
HXDLIN( 444)					yy = pfirst->y;
            				}
            				else {
HXLINE( 444)					if ((param > 1)) {
HXLINE( 444)						xx = plast->x;
HXDLIN( 444)						yy = plast->y;
            					}
            					else {
HXLINE( 444)						xx = (pfirst->x + (param * C));
HXDLIN( 444)						yy = (pfirst->y + (param * D));
            					}
            				}
HXDLIN( 444)				Float dx = (p0->x - xx);
HXDLIN( 444)				Float dy = (p0->y - yy);
HXDLIN( 444)				Float d = ((dx * dx) + (dy * dy));
HXLINE( 445)				if ((d > dmax)) {
HXLINE( 446)					index = i;
HXLINE( 447)					dmax = d;
            				}
            			}
            		}
HXLINE( 451)		if ((dmax >= (epsilon * epsilon))) {
HXLINE( 452)			::h2d::col::_Polygon::Polygon_Impl__obj::optimizeRec(points,start,index,out,epsilon);
HXLINE( 453)			out->pop().StaticCast<  ::h2d::col::Point >();
HXLINE( 454)			::h2d::col::_Polygon::Polygon_Impl__obj::optimizeRec(points,index,end,out,epsilon);
            		}
            		else {
HXLINE( 456)			out->push(points->__get(start).StaticCast<  ::h2d::col::Point >());
HXLINE( 457)			out->push(points->__get(end).StaticCast<  ::h2d::col::Point >());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_Impl__obj,optimizeRec,(void))

::Array< ::Dynamic> Polygon_Impl__obj::makeCircle(Float x,Float y,Float radius,::hx::Null< int >  __o_npoints){
            		int npoints = __o_npoints.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_fa6ae716b962582b_461_makeCircle)
HXLINE( 462)		if ((npoints == 0)) {
HXLINE( 463)			Float f = (((radius * ((Float)3.14)) * ( (Float)(2) )) / ( (Float)(4) ));
HXDLIN( 463)			Float npoints1;
HXDLIN( 463)			if ((f < 0)) {
HXLINE( 463)				npoints1 = -(f);
            			}
            			else {
HXLINE( 463)				npoints1 = f;
            			}
HXDLIN( 463)			npoints = ::Math_obj::ceil(npoints1);
            		}
HXLINE( 464)		if ((npoints < 3)) {
HXLINE( 464)			npoints = 3;
            		}
HXLINE( 465)		Float angle = (((Float)6.28318530717958623) / ( (Float)(npoints) ));
HXLINE( 466)		::Array< ::Dynamic> points = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 467)		{
HXLINE( 467)			int _g = 0;
HXDLIN( 467)			int _g1 = npoints;
HXDLIN( 467)			while((_g < _g1)){
HXLINE( 467)				_g = (_g + 1);
HXDLIN( 467)				int i = (_g - 1);
HXLINE( 468)				Float a = (( (Float)(i) ) * angle);
HXLINE( 469)				points->push( ::h2d::col::Point_obj::__alloc( HX_CTX ,((::Math_obj::cos(a) * radius) + x),((::Math_obj::sin(a) * radius) + y)));
            			}
            		}
HXLINE( 471)		::Array< ::Dynamic> this1;
HXDLIN( 471)		if (::hx::IsNull( points )) {
HXLINE( 471)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 471)			this1 = points;
            		}
HXDLIN( 471)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_Impl__obj,makeCircle,return )


Polygon_Impl__obj::Polygon_Impl__obj()
{
}

bool Polygon_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"area") ) { outValue = area_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"side") ) { outValue = side_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xSort") ) { outValue = xSort_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"centroid") ) { outValue = centroid_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isConvex") ) { outValue = isConvex_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"optimize") ) { outValue = optimize_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { outValue = getBounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"transform") ) { outValue = transform_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onSegment") ) { outValue = onSegment_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"intersect") ) { outValue = intersect_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_points") ) { outValue = get_points_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toSegments") ) { outValue = toSegments_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toIPolygon") ) { outValue = toIPolygon_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"convexHull") ) { outValue = convexHull_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceSq") ) { outValue = distanceSq_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"makeCircle") ) { outValue = makeCircle_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getCollider") ) { outValue = getCollider_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isClockwise") ) { outValue = isClockwise_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"orientation") ) { outValue = orientation_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"optimizeRec") ) { outValue = optimizeRec_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"projectPoint") ) { outValue = projectPoint_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fastTriangulate") ) { outValue = fastTriangulate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { outValue = rayIntersection_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findClosestPoint") ) { outValue = findClosestPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"selfIntersecting") ) { outValue = selfIntersecting_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Polygon_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Polygon_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Polygon_Impl__obj::__mClass;

static ::String Polygon_Impl__obj_sStaticFields[] = {
	HX_("get_length",af,04,8f,8f),
	HX_("get_points",ec,81,b5,e7),
	HX_("_new",61,15,1f,3f),
	HX_("iterator",ee,49,9a,93),
	HX_("fastTriangulate",f0,47,f4,0d),
	HX_("toSegments",fb,81,43,c0),
	HX_("toIPolygon",ac,8d,af,c7),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getCollider",ea,a1,c9,ef),
	HX_("xSort",f6,ef,46,4f),
	HX_("convexHull",d4,39,1c,3c),
	HX_("isClockwise",a8,34,20,1b),
	HX_("area",8d,8b,74,40),
	HX_("centroid",40,e0,e5,97),
	HX_("side",97,8d,53,4c),
	HX_("isConvex",f1,12,48,20),
	HX_("reverse",22,39,fc,1a),
	HX_("transform",6c,2d,93,45),
	HX_("contains",1f,5a,7b,2c),
	HX_("findClosestPoint",10,35,e9,0d),
	HX_("projectPoint",b7,1e,e2,3f),
	HX_("distance",35,93,f9,6b),
	HX_("distanceSq",33,d3,ec,8b),
	HX_("rayIntersection",53,fb,28,64),
	HX_("orientation",d0,ee,fe,fd),
	HX_("onSegment",54,88,79,7e),
	HX_("intersect",df,00,75,42),
	HX_("selfIntersecting",0f,9b,2d,7e),
	HX_("optimize",dd,8c,18,1d),
	HX_("optimizeRec",73,ac,19,3e),
	HX_("makeCircle",9e,46,dd,a7),
	::String(null())
};

void Polygon_Impl__obj::__register()
{
	Polygon_Impl__obj _hx_dummy;
	Polygon_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col._Polygon.Polygon_Impl_",a9,8a,a7,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polygon_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Polygon_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Polygon_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polygon_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polygon_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
} // end namespace _Polygon
