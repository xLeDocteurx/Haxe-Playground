#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_clipper_PolyType
#include <hxd/clipper/PolyType.h>
#endif
#ifndef INCLUDED_hxd_clipper_Rect
#include <hxd/clipper/Rect.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_ClipperBase
#include <hxd/clipper/_Clipper/ClipperBase.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_EdgeSide
#include <hxd/clipper/_Clipper/EdgeSide.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_LocalMinima
#include <hxd/clipper/_Clipper/LocalMinima.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_OutPt
#include <hxd/clipper/_Clipper/OutPt.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_TEdge
#include <hxd/clipper/_Clipper/TEdge.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3389e5722a3b80ce_354_new,"hxd.clipper._Clipper.ClipperBase","new",0xff7dac6b,"hxd.clipper._Clipper.ClipperBase.new","hxd/clipper/Clipper.hx",354,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_296_isHorizontal,"hxd.clipper._Clipper.ClipperBase","isHorizontal",0x7dd0f003,"hxd.clipper._Clipper.ClipperBase.isHorizontal","hxd/clipper/Clipper.hx",296,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_300_abs,"hxd.clipper._Clipper.ClipperBase","abs",0xff73cc7d,"hxd.clipper._Clipper.ClipperBase.abs","hxd/clipper/Clipper.hx",300,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_309_PointIsVertex,"hxd.clipper._Clipper.ClipperBase","PointIsVertex",0xcc4b7f09,"hxd.clipper._Clipper.ClipperBase.PointIsVertex","hxd/clipper/Clipper.hx",309,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_320_PointOnLineSegment,"hxd.clipper._Clipper.ClipperBase","PointOnLineSegment",0x6db85945,"hxd.clipper._Clipper.ClipperBase.PointOnLineSegment","hxd/clipper/Clipper.hx",320,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_329_PointOnPolygon,"hxd.clipper._Clipper.ClipperBase","PointOnPolygon",0x5e68caa0,"hxd.clipper._Clipper.ClipperBase.PointOnPolygon","hxd/clipper/Clipper.hx",329,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_343_SlopesEqual,"hxd.clipper._Clipper.ClipperBase","SlopesEqual",0x23bdc497,"hxd.clipper._Clipper.ClipperBase.SlopesEqual","hxd/clipper/Clipper.hx",343,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_348_SlopesEqual3,"hxd.clipper._Clipper.ClipperBase","SlopesEqual3",0x224e3fbc,"hxd.clipper._Clipper.ClipperBase.SlopesEqual3","hxd/clipper/Clipper.hx",348,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_363_clear,"hxd.clipper._Clipper.ClipperBase","clear",0xcabca658,"hxd.clipper._Clipper.ClipperBase.clear","hxd/clipper/Clipper.hx",363,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_370_disposeLocalMinimaList,"hxd.clipper._Clipper.ClipperBase","disposeLocalMinimaList",0xcb4e65ea,"hxd.clipper._Clipper.ClipperBase.disposeLocalMinimaList","hxd/clipper/Clipper.hx",370,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_382_addPolygons,"hxd.clipper._Clipper.ClipperBase","addPolygons",0xb472bf05,"hxd.clipper._Clipper.ClipperBase.addPolygons","hxd/clipper/Clipper.hx",382,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_391_addPolygon,"hxd.clipper._Clipper.ClipperBase","addPolygon",0x714fb9ae,"hxd.clipper._Clipper.ClipperBase.addPolygon","hxd/clipper/Clipper.hx",391,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_518_InitEdge,"hxd.clipper._Clipper.ClipperBase","InitEdge",0x76fd4fa2,"hxd.clipper._Clipper.ClipperBase.InitEdge","hxd/clipper/Clipper.hx",518,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_526_InitEdge2,"hxd.clipper._Clipper.ClipperBase","InitEdge2",0xa6a85e50,"hxd.clipper._Clipper.ClipperBase.InitEdge2","hxd/clipper/Clipper.hx",526,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_545_RemoveEdge,"hxd.clipper._Clipper.ClipperBase","RemoveEdge",0xae139216,"hxd.clipper._Clipper.ClipperBase.RemoveEdge","hxd/clipper/Clipper.hx",545,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_556_FindNextLocMin,"hxd.clipper._Clipper.ClipperBase","FindNextLocMin",0xb8f399d3,"hxd.clipper._Clipper.ClipperBase.FindNextLocMin","hxd/clipper/Clipper.hx",556,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_574_ProcessBound,"hxd.clipper._Clipper.ClipperBase","ProcessBound",0xfcb16204,"hxd.clipper._Clipper.ClipperBase.ProcessBound","hxd/clipper/Clipper.hx",574,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_695_ReverseHorizontal,"hxd.clipper._Clipper.ClipperBase","ReverseHorizontal",0xf86531d1,"hxd.clipper._Clipper.ClipperBase.ReverseHorizontal","hxd/clipper/Clipper.hx",695,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_707_Pt2IsBetweenPt1AndPt3,"hxd.clipper._Clipper.ClipperBase","Pt2IsBetweenPt1AndPt3",0xfa9f89c0,"hxd.clipper._Clipper.ClipperBase.Pt2IsBetweenPt1AndPt3","hxd/clipper/Clipper.hx",707,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_715_SetDx,"hxd.clipper._Clipper.ClipperBase","SetDx",0x8fbe2881,"hxd.clipper._Clipper.ClipperBase.SetDx","hxd/clipper/Clipper.hx",715,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_726_InsertLocalMinima,"hxd.clipper._Clipper.ClipperBase","InsertLocalMinima",0xf18777e8,"hxd.clipper._Clipper.ClipperBase.InsertLocalMinima","hxd/clipper/Clipper.hx",726,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_745_PopLocalMinima,"hxd.clipper._Clipper.ClipperBase","PopLocalMinima",0x11b1c15a,"hxd.clipper._Clipper.ClipperBase.PopLocalMinima","hxd/clipper/Clipper.hx",745,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_752_SwapX,"hxd.clipper._Clipper.ClipperBase","SwapX",0x9b95bb10,"hxd.clipper._Clipper.ClipperBase.SwapX","hxd/clipper/Clipper.hx",752,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_764_equals,"hxd.clipper._Clipper.ClipperBase","equals",0x529feb14,"hxd.clipper._Clipper.ClipperBase.equals","hxd/clipper/Clipper.hx",764,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_768_Reset,"hxd.clipper._Clipper.ClipperBase","Reset",0xfc56ee7a,"hxd.clipper._Clipper.ClipperBase.Reset","hxd/clipper/Clipper.hx",768,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_304_nearZero,"hxd.clipper._Clipper.ClipperBase","nearZero",0xf940dc45,"hxd.clipper._Clipper.ClipperBase.nearZero","hxd/clipper/Clipper.hx",304,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_799_getBounds,"hxd.clipper._Clipper.ClipperBase","getBounds",0x61d705f6,"hxd.clipper._Clipper.ClipperBase.getBounds","hxd/clipper/Clipper.hx",799,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_283_boot,"hxd.clipper._Clipper.ClipperBase","boot",0x869231c7,"hxd.clipper._Clipper.ClipperBase.boot","hxd/clipper/Clipper.hx",283,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_284_boot,"hxd.clipper._Clipper.ClipperBase","boot",0x869231c7,"hxd.clipper._Clipper.ClipperBase.boot","hxd/clipper/Clipper.hx",284,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_285_boot,"hxd.clipper._Clipper.ClipperBase","boot",0x869231c7,"hxd.clipper._Clipper.ClipperBase.boot","hxd/clipper/Clipper.hx",285,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_3389e5722a3b80ce_286_boot,"hxd.clipper._Clipper.ClipperBase","boot",0x869231c7,"hxd.clipper._Clipper.ClipperBase.boot","hxd/clipper/Clipper.hx",286,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void ClipperBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_354_new)
HXLINE( 355)		this->m_edges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 356)		this->m_MinimaList = null();
HXLINE( 357)		this->m_CurrentLM = null();
            	}

Dynamic ClipperBase_obj::__CreateEmpty() { return new ClipperBase_obj; }

void *ClipperBase_obj::_hx_vtable = 0;

Dynamic ClipperBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClipperBase_obj > _hx_result = new ClipperBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClipperBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1eae120f;
}

bool ClipperBase_obj::isHorizontal( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_296_isHorizontal)
HXDLIN( 296)		return (e->deltaY == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,isHorizontal,return )

int ClipperBase_obj::abs(int i){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_300_abs)
HXDLIN( 300)		if ((i < 0)) {
HXDLIN( 300)			return -(i);
            		}
            		else {
HXDLIN( 300)			return i;
            		}
HXDLIN( 300)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,abs,return )

bool ClipperBase_obj::PointIsVertex( ::h2d::col::IPoint pt, ::hxd::clipper::_Clipper::OutPt pp){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_309_PointIsVertex)
HXLINE( 310)		 ::hxd::clipper::_Clipper::OutPt pp2 = pp;
HXLINE( 311)		while(true){
HXLINE( 312)			 ::h2d::col::IPoint pt1 = pp2->pt;
HXDLIN( 312)			bool _hx_tmp;
HXDLIN( 312)			if ((pt1->x == pt->x)) {
HXLINE( 312)				_hx_tmp = (pt1->y == pt->y);
            			}
            			else {
HXLINE( 312)				_hx_tmp = false;
            			}
HXDLIN( 312)			if (_hx_tmp) {
HXLINE( 312)				return true;
            			}
HXLINE( 313)			pp2 = pp2->next;
HXLINE( 311)			if (!(::hx::IsInstanceNotEq( pp2,pp ))) {
HXLINE( 311)				goto _hx_goto_3;
            			}
            		}
            		_hx_goto_3:;
HXLINE( 315)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperBase_obj,PointIsVertex,return )

bool ClipperBase_obj::PointOnLineSegment( ::h2d::col::IPoint pt, ::h2d::col::IPoint linePt1, ::h2d::col::IPoint linePt2){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_320_PointOnLineSegment)
HXDLIN( 320)		bool _hx_tmp;
HXDLIN( 320)		bool _hx_tmp1;
HXDLIN( 320)		if ((pt->x == linePt1->x)) {
HXDLIN( 320)			_hx_tmp1 = (pt->y == linePt1->y);
            		}
            		else {
HXDLIN( 320)			_hx_tmp1 = false;
            		}
HXDLIN( 320)		if (!(_hx_tmp1)) {
HXLINE( 321)			if ((pt->x == linePt2->x)) {
HXDLIN( 320)				_hx_tmp = (pt->y == linePt2->y);
            			}
            			else {
HXDLIN( 320)				_hx_tmp = false;
            			}
            		}
            		else {
HXDLIN( 320)			_hx_tmp = true;
            		}
HXDLIN( 320)		if (!(_hx_tmp)) {
HXLINE( 322)			bool _hx_tmp;
HXDLIN( 322)			if (((pt->x > linePt1->x) == (pt->x < linePt2->x))) {
HXLINE( 322)				_hx_tmp = ((pt->y > linePt1->y) == (pt->y < linePt2->y));
            			}
            			else {
HXLINE( 322)				_hx_tmp = false;
            			}
HXDLIN( 322)			if (_hx_tmp) {
HXLINE( 324)				return (((pt->x - linePt1->x) * (linePt2->y - linePt1->y)) == ((linePt2->x - linePt1->x) * (pt->y - linePt1->y)));
            			}
            			else {
HXLINE( 322)				return false;
            			}
            		}
            		else {
HXDLIN( 320)			return true;
            		}
HXDLIN( 320)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ClipperBase_obj,PointOnLineSegment,return )

bool ClipperBase_obj::PointOnPolygon( ::h2d::col::IPoint pt, ::hxd::clipper::_Clipper::OutPt pp){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_329_PointOnPolygon)
HXLINE( 330)		 ::hxd::clipper::_Clipper::OutPt pp2 = pp;
HXLINE( 331)		while(true){
HXLINE( 332)			if (this->PointOnLineSegment(pt,pp2->pt,pp2->next->pt)) {
HXLINE( 333)				return true;
            			}
HXLINE( 334)			pp2 = pp2->next;
HXLINE( 335)			if (::hx::IsInstanceEq( pp2,pp )) {
HXLINE( 335)				goto _hx_goto_6;
            			}
            		}
            		_hx_goto_6:;
HXLINE( 337)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperBase_obj,PointOnPolygon,return )

bool ClipperBase_obj::SlopesEqual( ::hxd::clipper::_Clipper::TEdge e1, ::hxd::clipper::_Clipper::TEdge e2){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_343_SlopesEqual)
HXDLIN( 343)		return ((e1->deltaY * e2->deltaX) == (e1->deltaX * e2->deltaY));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperBase_obj,SlopesEqual,return )

bool ClipperBase_obj::SlopesEqual3( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2, ::h2d::col::IPoint pt3){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_348_SlopesEqual3)
HXDLIN( 348)		return ((((pt1->y - pt2->y) * (pt2->x - pt3->x)) - ((pt1->x - pt2->x) * (pt2->y - pt3->y))) == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ClipperBase_obj,SlopesEqual3,return )

void ClipperBase_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_363_clear)
HXLINE( 364)		this->disposeLocalMinimaList();
HXLINE( 365)		this->m_edges = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClipperBase_obj,clear,(void))

void ClipperBase_obj::disposeLocalMinimaList(){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_370_disposeLocalMinimaList)
HXLINE( 371)		while(::hx::IsNotNull( this->m_MinimaList )){
HXLINE( 373)			 ::hxd::clipper::_Clipper::LocalMinima tmpLm = this->m_MinimaList->next;
HXLINE( 374)			this->m_MinimaList = null();
HXLINE( 375)			this->m_MinimaList = tmpLm;
            		}
HXLINE( 377)		this->m_CurrentLM = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClipperBase_obj,disposeLocalMinimaList,(void))

bool ClipperBase_obj::addPolygons(::Array< ::Dynamic> ppg, ::hxd::clipper::PolyType polyType){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_382_addPolygons)
HXLINE( 383)		bool result = false;
HXLINE( 384)		{
HXLINE( 384)			int _g_i = 0;
HXDLIN( 384)			::Array< ::Dynamic> _g_a = ppg;
HXDLIN( 384)			int _g_l = _g_a->length;
HXDLIN( 384)			while((_g_i < _g_l)){
HXLINE( 384)				_g_i = (_g_i + 1);
HXDLIN( 384)				::Array< ::Dynamic> p = _g_a->__get((_g_i - 1)).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 385)				if (this->addPolygon(p,polyType)) {
HXLINE( 385)					result = true;
            				}
            			}
            		}
HXLINE( 386)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperBase_obj,addPolygons,return )

bool ClipperBase_obj::addPolygon(::Array< ::Dynamic> pg, ::hxd::clipper::PolyType polyType){
            	HX_GC_STACKFRAME(&_hx_pos_3389e5722a3b80ce_391_addPolygon)
HXLINE( 392)		int highI = (pg->length - 1);
HXLINE( 393)		while(true){
HXLINE( 393)			bool _hx_tmp;
HXDLIN( 393)			if ((highI > 0)) {
HXLINE( 393)				_hx_tmp = ::hx::IsInstanceEq( pg->__get(highI).StaticCast<  ::h2d::col::IPoint >(),pg->__get(0).StaticCast<  ::h2d::col::IPoint >() );
            			}
            			else {
HXLINE( 393)				_hx_tmp = false;
            			}
HXDLIN( 393)			if (!(_hx_tmp)) {
HXLINE( 393)				goto _hx_goto_15;
            			}
HXDLIN( 393)			highI = (highI - 1);
            		}
            		_hx_goto_15:;
HXLINE( 394)		while(true){
HXLINE( 394)			bool _hx_tmp;
HXDLIN( 394)			if ((highI > 0)) {
HXLINE( 394)				_hx_tmp = ::hx::IsInstanceEq( pg->__get(highI).StaticCast<  ::h2d::col::IPoint >(),pg->__get((highI - 1)).StaticCast<  ::h2d::col::IPoint >() );
            			}
            			else {
HXLINE( 394)				_hx_tmp = false;
            			}
HXDLIN( 394)			if (!(_hx_tmp)) {
HXLINE( 394)				goto _hx_goto_16;
            			}
HXDLIN( 394)			highI = (highI - 1);
            		}
            		_hx_goto_16:;
HXLINE( 395)		if ((highI < 2)) {
HXLINE( 395)			return false;
            		}
HXLINE( 398)		::Array< ::Dynamic> edges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 399)		{
HXLINE( 399)			int _g = 0;
HXDLIN( 399)			int _g1 = (highI + 1);
HXDLIN( 399)			while((_g < _g1)){
HXLINE( 399)				_g = (_g + 1);
HXDLIN( 399)				int i = (_g - 1);
HXLINE( 400)				edges->push( ::hxd::clipper::_Clipper::TEdge_obj::__alloc( HX_CTX ));
            			}
            		}
HXLINE( 403)		bool isFlat = true;
HXLINE( 404)		{
HXLINE( 404)			 ::hxd::clipper::_Clipper::TEdge _this = edges->__get(1).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 404)			 ::h2d::col::IPoint p = pg->__get(1).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 404)			_this->currX = p->x;
HXDLIN( 404)			_this->currY = p->y;
            		}
HXLINE( 405)		{
HXLINE( 405)			 ::hxd::clipper::_Clipper::TEdge e = edges->__get(0).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 405)			 ::h2d::col::IPoint pt = pg->__get(0).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 405)			e->next = edges->__get(1).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 405)			e->prev = edges->__get(highI).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 405)			e->currX = pt->x;
HXDLIN( 405)			e->currY = pt->y;
HXDLIN( 405)			e->outIdx = -1;
            		}
HXLINE( 406)		{
HXLINE( 406)			 ::hxd::clipper::_Clipper::TEdge e1 = edges->__get(highI).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 406)			 ::h2d::col::IPoint pt1 = pg->__get(highI).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 406)			e1->next = edges->__get(0).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 406)			e1->prev = edges->__get((highI - 1)).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 406)			e1->currX = pt1->x;
HXDLIN( 406)			e1->currY = pt1->y;
HXDLIN( 406)			e1->outIdx = -1;
            		}
HXLINE( 407)		int i = (highI - 1);
HXLINE( 408)		while((i > 0)){
HXLINE( 409)			{
HXLINE( 409)				 ::hxd::clipper::_Clipper::TEdge e = edges->__get(i).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 409)				 ::h2d::col::IPoint pt = pg->__get(i).StaticCast<  ::h2d::col::IPoint >();
HXDLIN( 409)				e->next = edges->__get((i + 1)).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 409)				e->prev = edges->__get((i - 1)).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXDLIN( 409)				e->currX = pt->x;
HXDLIN( 409)				e->currY = pt->y;
HXDLIN( 409)				e->outIdx = -1;
            			}
HXLINE( 410)			i = (i - 1);
            		}
HXLINE( 414)		 ::hxd::clipper::_Clipper::TEdge eStart = edges->__get(0).StaticCast<  ::hxd::clipper::_Clipper::TEdge >();
HXLINE( 415)		 ::hxd::clipper::_Clipper::TEdge eStop = eStart;
HXLINE( 416)		 ::hxd::clipper::_Clipper::TEdge e2 = eStart;
HXLINE( 417)		while(true){
HXLINE( 418)			bool _hx_tmp;
HXDLIN( 418)			if ((e2->currX == e2->next->currX)) {
HXLINE( 418)				_hx_tmp = (e2->currY == e2->next->currY);
            			}
            			else {
HXLINE( 418)				_hx_tmp = false;
            			}
HXDLIN( 418)			if (_hx_tmp) {
HXLINE( 419)				if (::hx::IsInstanceEq( e2,e2->next )) {
HXLINE( 419)					goto _hx_goto_19;
            				}
HXLINE( 420)				if (::hx::IsInstanceEq( e2,eStart )) {
HXLINE( 420)					eStart = e2->next;
            				}
HXLINE( 421)				e2 = this->RemoveEdge(e2);
HXLINE( 422)				eStop = e2;
HXLINE( 423)				continue;
            			}
HXLINE( 426)			if (::hx::IsInstanceEq( e2->prev,e2->next )) {
HXLINE( 426)				goto _hx_goto_19;
            			}
HXLINE( 427)			bool _hx_tmp1;
HXDLIN( 427)			 ::hxd::clipper::_Clipper::TEdge _this = e2->prev;
HXDLIN( 427)			int pt1_x = _this->currX;
HXDLIN( 427)			int pt1_y = _this->currY;
HXDLIN( 427)			int pt2_x = e2->currX;
HXDLIN( 427)			int pt2_y = e2->currY;
HXDLIN( 427)			 ::hxd::clipper::_Clipper::TEdge _this1 = e2->next;
HXDLIN( 427)			int pt3_x = _this1->currX;
HXDLIN( 427)			int pt3_y = _this1->currY;
HXDLIN( 427)			if (((((pt1_y - pt2_y) * (pt2_x - pt3_x)) - ((pt1_x - pt2_x) * (pt2_y - pt3_y))) == 0)) {
HXLINE( 427)				if (this->preserveCollinear) {
HXLINE( 427)					 ::hxd::clipper::_Clipper::TEdge _this = e2->prev;
HXDLIN( 427)					 ::h2d::col::IPoint _hx_tmp =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,_this->currX,_this->currY);
HXDLIN( 427)					 ::h2d::col::IPoint _hx_tmp2 =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,e2->currX,e2->currY);
HXDLIN( 427)					 ::hxd::clipper::_Clipper::TEdge _this1 = e2->next;
HXDLIN( 427)					_hx_tmp1 = !(this->Pt2IsBetweenPt1AndPt3(_hx_tmp,_hx_tmp2, ::h2d::col::IPoint_obj::__alloc( HX_CTX ,_this1->currX,_this1->currY)));
            				}
            				else {
HXLINE( 427)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 427)				_hx_tmp1 = false;
            			}
HXDLIN( 427)			if (_hx_tmp1) {
HXLINE( 431)				if (::hx::IsInstanceEq( e2,eStart )) {
HXLINE( 431)					eStart = e2->next;
            				}
HXLINE( 432)				e2 = this->RemoveEdge(e2);
HXLINE( 433)				e2 = e2->prev;
HXLINE( 434)				eStop = e2;
HXLINE( 435)				continue;
            			}
HXLINE( 438)			e2 = e2->next;
HXLINE( 439)			if (::hx::IsInstanceEq( e2,eStop )) {
HXLINE( 439)				goto _hx_goto_19;
            			}
            		}
            		_hx_goto_19:;
HXLINE( 442)		if (::hx::IsInstanceEq( e2->prev,e2->next )) {
HXLINE( 443)			return false;
            		}
HXLINE( 446)		e2 = eStart;
HXLINE( 447)		while(true){
HXLINE( 448)			{
HXLINE( 448)				if ((e2->currY >= e2->next->currY)) {
HXLINE( 448)					e2->botX = e2->currX;
HXDLIN( 448)					e2->botY = e2->currY;
HXDLIN( 448)					e2->topX = e2->next->currX;
HXDLIN( 448)					e2->topY = e2->next->currY;
            				}
            				else {
HXLINE( 448)					e2->topX = e2->currX;
HXDLIN( 448)					e2->topY = e2->currY;
HXDLIN( 448)					e2->botX = e2->next->currX;
HXDLIN( 448)					e2->botY = e2->next->currY;
            				}
HXDLIN( 448)				this->SetDx(e2);
HXDLIN( 448)				e2->polyType = polyType;
            			}
HXLINE( 449)			e2 = e2->next;
HXLINE( 450)			if ((e2->currY != eStart->currY)) {
HXLINE( 451)				isFlat = false;
            			}
HXLINE( 447)			if (!(::hx::IsInstanceNotEq( e2,eStart ))) {
HXLINE( 447)				goto _hx_goto_20;
            			}
            		}
            		_hx_goto_20:;
HXLINE( 455)		if (isFlat) {
HXLINE( 456)			return false;
            		}
HXLINE( 459)		this->m_edges->push(edges);
HXLINE( 460)		bool leftBoundIsForward;
HXLINE( 461)		 ::hxd::clipper::_Clipper::TEdge eMin = null();
HXLINE( 465)		bool _hx_tmp;
HXDLIN( 465)		if ((e2->prev->botX == e2->prev->topX)) {
HXLINE( 465)			_hx_tmp = (e2->prev->botY == e2->prev->topY);
            		}
            		else {
HXLINE( 465)			_hx_tmp = false;
            		}
HXDLIN( 465)		if (_hx_tmp) {
HXLINE( 465)			e2 = e2->next;
            		}
HXLINE( 467)		 ::hxd::clipper::_Clipper::TEdge old = null();
HXLINE( 468)		while(true){
HXLINE( 469)			e2 = this->FindNextLocMin(e2);
HXLINE( 470)			if (::hx::IsInstanceEq( e2,eMin )) {
HXLINE( 470)				goto _hx_goto_21;
            			}
            			else {
HXLINE( 471)				if (::hx::IsNull( eMin )) {
HXLINE( 471)					eMin = e2;
            				}
            			}
HXLINE( 473)			if (::hx::IsInstanceEq( e2,old )) {
HXLINE( 473)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("!",21,00,00,00)));
            			}
HXLINE( 474)			old = e2;
HXLINE( 478)			 ::hxd::clipper::_Clipper::LocalMinima locMin =  ::hxd::clipper::_Clipper::LocalMinima_obj::__alloc( HX_CTX );
HXLINE( 479)			locMin->next = null();
HXLINE( 480)			locMin->y = e2->botY;
HXLINE( 481)			if ((e2->dx < e2->prev->dx)) {
HXLINE( 482)				locMin->leftBound = e2->prev;
HXLINE( 483)				locMin->rightBound = e2;
HXLINE( 484)				leftBoundIsForward = false;
            			}
            			else {
HXLINE( 487)				locMin->leftBound = e2;
HXLINE( 488)				locMin->rightBound = e2->prev;
HXLINE( 489)				leftBoundIsForward = true;
            			}
HXLINE( 492)			locMin->leftBound->side = ::hxd::clipper::_Clipper::EdgeSide_obj::Left_dyn();
HXLINE( 493)			locMin->rightBound->side = ::hxd::clipper::_Clipper::EdgeSide_obj::Right_dyn();
HXLINE( 494)			if (::hx::IsInstanceEq( locMin->leftBound->next,locMin->rightBound )) {
HXLINE( 495)				locMin->leftBound->windDelta = -1;
            			}
            			else {
HXLINE( 496)				locMin->leftBound->windDelta = 1;
            			}
HXLINE( 497)			locMin->rightBound->windDelta = -(locMin->leftBound->windDelta);
HXLINE( 499)			e2 = this->ProcessBound(locMin->leftBound,leftBoundIsForward);
HXLINE( 500)			if ((e2->outIdx == -2)) {
HXLINE( 500)				e2 = this->ProcessBound(e2,leftBoundIsForward);
            			}
HXLINE( 502)			 ::hxd::clipper::_Clipper::TEdge e21 = this->ProcessBound(locMin->rightBound,!(leftBoundIsForward));
HXLINE( 503)			if ((e21->outIdx == -2)) {
HXLINE( 503)				e21 = this->ProcessBound(e21,!(leftBoundIsForward));
            			}
HXLINE( 505)			if ((locMin->leftBound->outIdx == -2)) {
HXLINE( 506)				locMin->leftBound = null();
            			}
            			else {
HXLINE( 507)				if ((locMin->rightBound->outIdx == -2)) {
HXLINE( 508)					locMin->rightBound = null();
            				}
            			}
HXLINE( 509)			this->InsertLocalMinima(locMin);
HXLINE( 510)			if (!(leftBoundIsForward)) {
HXLINE( 511)				e2 = e21;
            			}
            		}
            		_hx_goto_21:;
HXLINE( 514)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperBase_obj,addPolygon,return )

void ClipperBase_obj::InitEdge( ::hxd::clipper::_Clipper::TEdge e, ::hxd::clipper::_Clipper::TEdge eNext, ::hxd::clipper::_Clipper::TEdge ePrev, ::h2d::col::IPoint pt){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_518_InitEdge)
HXLINE( 519)		e->next = eNext;
HXLINE( 520)		e->prev = ePrev;
HXLINE( 521)		e->currX = pt->x;
HXLINE( 522)		e->currY = pt->y;
HXLINE( 523)		e->outIdx = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC4(ClipperBase_obj,InitEdge,(void))

void ClipperBase_obj::InitEdge2( ::hxd::clipper::_Clipper::TEdge e, ::hxd::clipper::PolyType polyType){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_526_InitEdge2)
HXLINE( 527)		if ((e->currY >= e->next->currY)) {
HXLINE( 528)			e->botX = e->currX;
HXLINE( 529)			e->botY = e->currY;
HXLINE( 530)			e->topX = e->next->currX;
HXLINE( 531)			e->topY = e->next->currY;
            		}
            		else {
HXLINE( 534)			e->topX = e->currX;
HXLINE( 535)			e->topY = e->currY;
HXLINE( 536)			e->botX = e->next->currX;
HXLINE( 537)			e->botY = e->next->currY;
            		}
HXLINE( 539)		this->SetDx(e);
HXLINE( 540)		e->polyType = polyType;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperBase_obj,InitEdge2,(void))

 ::hxd::clipper::_Clipper::TEdge ClipperBase_obj::RemoveEdge( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_545_RemoveEdge)
HXLINE( 547)		e->prev->next = e->next;
HXLINE( 548)		e->next->prev = e->prev;
HXLINE( 549)		 ::hxd::clipper::_Clipper::TEdge result = e->next;
HXLINE( 550)		e->prev = null();
HXLINE( 551)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,RemoveEdge,return )

 ::hxd::clipper::_Clipper::TEdge ClipperBase_obj::FindNextLocMin( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_556_FindNextLocMin)
HXLINE( 557)		 ::hxd::clipper::_Clipper::TEdge e2;
HXLINE( 559)		while(true){
HXLINE( 560)			while(true){
HXLINE( 560)				bool _hx_tmp;
HXDLIN( 560)				bool _hx_tmp1;
HXDLIN( 560)				if ((e->botX == e->prev->botX)) {
HXLINE( 560)					_hx_tmp1 = (e->botY != e->prev->botY);
            				}
            				else {
HXLINE( 560)					_hx_tmp1 = true;
            				}
HXDLIN( 560)				if (!(_hx_tmp1)) {
HXLINE( 560)					if ((e->currX == e->topX)) {
HXLINE( 560)						_hx_tmp = (e->currY == e->topY);
            					}
            					else {
HXLINE( 560)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 560)					_hx_tmp = true;
            				}
HXDLIN( 560)				if (!(_hx_tmp)) {
HXLINE( 560)					goto _hx_goto_27;
            				}
HXDLIN( 560)				e = e->next;
            			}
            			_hx_goto_27:;
HXLINE( 561)			bool _hx_tmp;
HXDLIN( 561)			if ((e->dx != ((Float)-9007199254740992.))) {
HXLINE( 561)				_hx_tmp = (e->prev->dx != ((Float)-9007199254740992.));
            			}
            			else {
HXLINE( 561)				_hx_tmp = false;
            			}
HXDLIN( 561)			if (_hx_tmp) {
HXLINE( 561)				goto _hx_goto_26;
            			}
HXLINE( 562)			while((e->prev->dx == ((Float)-9007199254740992.))){
HXLINE( 562)				e = e->prev;
            			}
HXLINE( 563)			e2 = e;
HXLINE( 564)			while((e->dx == ((Float)-9007199254740992.))){
HXLINE( 564)				e = e->next;
            			}
HXLINE( 565)			if ((e->topY == e->prev->botY)) {
HXLINE( 565)				continue;
            			}
HXLINE( 566)			if ((e2->prev->botX < e->botX)) {
HXLINE( 566)				e = e2;
            			}
HXLINE( 567)			goto _hx_goto_26;
            		}
            		_hx_goto_26:;
HXLINE( 569)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,FindNextLocMin,return )

 ::hxd::clipper::_Clipper::TEdge ClipperBase_obj::ProcessBound( ::hxd::clipper::_Clipper::TEdge E,bool LeftBoundIsForward){
            	HX_GC_STACKFRAME(&_hx_pos_3389e5722a3b80ce_574_ProcessBound)
HXLINE( 575)		 ::hxd::clipper::_Clipper::TEdge EStart;
HXLINE( 576)		 ::hxd::clipper::_Clipper::TEdge Horz;
HXLINE( 577)		 ::hxd::clipper::_Clipper::TEdge Result = E;
HXLINE( 579)		if ((Result->outIdx == -2)) {
HXLINE( 583)			E = Result;
HXLINE( 584)			if (LeftBoundIsForward) {
HXLINE( 585)				while((E->topY == E->next->botY)){
HXLINE( 585)					E = E->next;
            				}
HXLINE( 586)				while(true){
HXLINE( 586)					bool _hx_tmp;
HXDLIN( 586)					if (::hx::IsInstanceNotEq( E,Result )) {
HXLINE( 586)						_hx_tmp = (E->dx == ((Float)-9007199254740992.));
            					}
            					else {
HXLINE( 586)						_hx_tmp = false;
            					}
HXDLIN( 586)					if (!(_hx_tmp)) {
HXLINE( 586)						goto _hx_goto_32;
            					}
HXDLIN( 586)					E = E->prev;
            				}
            				_hx_goto_32:;
            			}
            			else {
HXLINE( 589)				while((E->topY == E->prev->botY)){
HXLINE( 589)					E = E->prev;
            				}
HXLINE( 590)				while(true){
HXLINE( 590)					bool _hx_tmp;
HXDLIN( 590)					if (::hx::IsInstanceNotEq( E,Result )) {
HXLINE( 590)						_hx_tmp = (E->dx == ((Float)-9007199254740992.));
            					}
            					else {
HXLINE( 590)						_hx_tmp = false;
            					}
HXDLIN( 590)					if (!(_hx_tmp)) {
HXLINE( 590)						goto _hx_goto_34;
            					}
HXDLIN( 590)					E = E->next;
            				}
            				_hx_goto_34:;
            			}
HXLINE( 592)			if (::hx::IsInstanceEq( E,Result )) {
HXLINE( 594)				if (LeftBoundIsForward) {
HXLINE( 594)					Result = E->next;
            				}
            				else {
HXLINE( 595)					Result = E->prev;
            				}
            			}
            			else {
HXLINE( 600)				if (LeftBoundIsForward) {
HXLINE( 601)					E = Result->next;
            				}
            				else {
HXLINE( 602)					E = Result->prev;
            				}
HXLINE( 603)				 ::hxd::clipper::_Clipper::LocalMinima locMin =  ::hxd::clipper::_Clipper::LocalMinima_obj::__alloc( HX_CTX );
HXLINE( 604)				locMin->next = null();
HXLINE( 605)				locMin->y = E->botY;
HXLINE( 606)				locMin->leftBound = null();
HXLINE( 607)				locMin->rightBound = E;
HXLINE( 608)				E->windDelta = 0;
HXLINE( 609)				Result = this->ProcessBound(E,LeftBoundIsForward);
HXLINE( 610)				this->InsertLocalMinima(locMin);
            			}
HXLINE( 612)			return Result;
            		}
HXLINE( 615)		if ((E->dx == ((Float)-9007199254740992.))) {
HXLINE( 620)			if (LeftBoundIsForward) {
HXLINE( 620)				EStart = E->prev;
            			}
            			else {
HXLINE( 621)				EStart = E->next;
            			}
HXLINE( 622)			if ((EStart->outIdx != -2)) {
HXLINE( 624)				if ((EStart->dx == ((Float)-9007199254740992.))) {
HXLINE( 626)					bool _hx_tmp;
HXDLIN( 626)					if ((EStart->botX != E->botX)) {
HXLINE( 626)						_hx_tmp = (EStart->topX != E->botX);
            					}
            					else {
HXLINE( 626)						_hx_tmp = false;
            					}
HXDLIN( 626)					if (_hx_tmp) {
HXLINE( 627)						this->ReverseHorizontal(E);
            					}
            				}
            				else {
HXLINE( 629)					if ((EStart->botX != E->botX)) {
HXLINE( 630)						this->ReverseHorizontal(E);
            					}
            				}
            			}
            		}
HXLINE( 634)		EStart = E;
HXLINE( 635)		if (LeftBoundIsForward) {
HXLINE( 637)			while(true){
HXLINE( 637)				bool _hx_tmp;
HXDLIN( 637)				if ((Result->topY == Result->next->botY)) {
HXLINE( 637)					_hx_tmp = (Result->next->outIdx != -2);
            				}
            				else {
HXLINE( 637)					_hx_tmp = false;
            				}
HXDLIN( 637)				if (!(_hx_tmp)) {
HXLINE( 637)					goto _hx_goto_35;
            				}
HXLINE( 638)				Result = Result->next;
            			}
            			_hx_goto_35:;
HXLINE( 639)			bool _hx_tmp;
HXDLIN( 639)			if ((Result->dx == ((Float)-9007199254740992.))) {
HXLINE( 639)				_hx_tmp = (Result->next->outIdx != -2);
            			}
            			else {
HXLINE( 639)				_hx_tmp = false;
            			}
HXDLIN( 639)			if (_hx_tmp) {
HXLINE( 644)				Horz = Result;
HXLINE( 645)				while((Horz->prev->dx == ((Float)-9007199254740992.))){
HXLINE( 645)					Horz = Horz->prev;
            				}
HXLINE( 646)				if ((Horz->prev->topX == Result->next->topX)) {
HXLINE( 648)					if (!(LeftBoundIsForward)) {
HXLINE( 648)						Result = Horz->prev;
            					}
            				}
            				else {
HXLINE( 650)					if ((Horz->prev->topX > Result->next->topX)) {
HXLINE( 650)						Result = Horz->prev;
            					}
            				}
            			}
HXLINE( 652)			while(::hx::IsInstanceNotEq( E,Result )){
HXLINE( 654)				E->nextInLML = E->next;
HXLINE( 655)				bool _hx_tmp;
HXDLIN( 655)				bool _hx_tmp1;
HXDLIN( 655)				if ((E->dx == ((Float)-9007199254740992.))) {
HXLINE( 655)					_hx_tmp1 = ::hx::IsInstanceNotEq( E,EStart );
            				}
            				else {
HXLINE( 655)					_hx_tmp1 = false;
            				}
HXDLIN( 655)				if (_hx_tmp1) {
HXLINE( 655)					_hx_tmp = (E->botX != E->prev->topX);
            				}
            				else {
HXLINE( 655)					_hx_tmp = false;
            				}
HXDLIN( 655)				if (_hx_tmp) {
HXLINE( 656)					this->ReverseHorizontal(E);
            				}
HXLINE( 657)				E = E->next;
            			}
HXLINE( 659)			bool _hx_tmp1;
HXDLIN( 659)			bool _hx_tmp2;
HXDLIN( 659)			if ((E->dx == ((Float)-9007199254740992.))) {
HXLINE( 659)				_hx_tmp2 = ::hx::IsInstanceNotEq( E,EStart );
            			}
            			else {
HXLINE( 659)				_hx_tmp2 = false;
            			}
HXDLIN( 659)			if (_hx_tmp2) {
HXLINE( 659)				_hx_tmp1 = (E->botX != E->prev->topX);
            			}
            			else {
HXLINE( 659)				_hx_tmp1 = false;
            			}
HXDLIN( 659)			if (_hx_tmp1) {
HXLINE( 660)				this->ReverseHorizontal(E);
            			}
HXLINE( 661)			Result = Result->next;
            		}
            		else {
HXLINE( 665)			while(true){
HXLINE( 665)				bool _hx_tmp;
HXDLIN( 665)				if ((Result->topY == Result->prev->botY)) {
HXLINE( 665)					_hx_tmp = (Result->prev->outIdx != -2);
            				}
            				else {
HXLINE( 665)					_hx_tmp = false;
            				}
HXDLIN( 665)				if (!(_hx_tmp)) {
HXLINE( 665)					goto _hx_goto_38;
            				}
HXLINE( 666)				Result = Result->prev;
            			}
            			_hx_goto_38:;
HXLINE( 667)			bool _hx_tmp;
HXDLIN( 667)			if ((Result->dx == ((Float)-9007199254740992.))) {
HXLINE( 667)				_hx_tmp = (Result->prev->outIdx != -2);
            			}
            			else {
HXLINE( 667)				_hx_tmp = false;
            			}
HXDLIN( 667)			if (_hx_tmp) {
HXLINE( 669)				Horz = Result;
HXLINE( 670)				while((Horz->next->dx == ((Float)-9007199254740992.))){
HXLINE( 670)					Horz = Horz->next;
            				}
HXLINE( 671)				if ((Horz->next->topX == Result->prev->topX)) {
HXLINE( 673)					if (!(LeftBoundIsForward)) {
HXLINE( 673)						Result = Horz->next;
            					}
            				}
            				else {
HXLINE( 675)					if ((Horz->next->topX > Result->prev->topX)) {
HXLINE( 675)						Result = Horz->next;
            					}
            				}
            			}
HXLINE( 678)			while(::hx::IsInstanceNotEq( E,Result )){
HXLINE( 680)				E->nextInLML = E->prev;
HXLINE( 681)				bool _hx_tmp;
HXDLIN( 681)				bool _hx_tmp1;
HXDLIN( 681)				if ((E->dx == ((Float)-9007199254740992.))) {
HXLINE( 681)					_hx_tmp1 = ::hx::IsInstanceNotEq( E,EStart );
            				}
            				else {
HXLINE( 681)					_hx_tmp1 = false;
            				}
HXDLIN( 681)				if (_hx_tmp1) {
HXLINE( 681)					_hx_tmp = (E->botX != E->next->topX);
            				}
            				else {
HXLINE( 681)					_hx_tmp = false;
            				}
HXDLIN( 681)				if (_hx_tmp) {
HXLINE( 682)					this->ReverseHorizontal(E);
            				}
HXLINE( 683)				E = E->prev;
            			}
HXLINE( 685)			bool _hx_tmp1;
HXDLIN( 685)			bool _hx_tmp2;
HXDLIN( 685)			if ((E->dx == ((Float)-9007199254740992.))) {
HXLINE( 685)				_hx_tmp2 = ::hx::IsInstanceNotEq( E,EStart );
            			}
            			else {
HXLINE( 685)				_hx_tmp2 = false;
            			}
HXDLIN( 685)			if (_hx_tmp2) {
HXLINE( 685)				_hx_tmp1 = (E->botX != E->next->topX);
            			}
            			else {
HXLINE( 685)				_hx_tmp1 = false;
            			}
HXDLIN( 685)			if (_hx_tmp1) {
HXLINE( 686)				this->ReverseHorizontal(E);
            			}
HXLINE( 687)			Result = Result->prev;
            		}
HXLINE( 689)		return Result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperBase_obj,ProcessBound,return )

void ClipperBase_obj::ReverseHorizontal( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_695_ReverseHorizontal)
HXLINE( 699)		int tmp = e->topX;
HXLINE( 700)		e->topX = e->botX;
HXLINE( 701)		e->botX = tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,ReverseHorizontal,(void))

bool ClipperBase_obj::Pt2IsBetweenPt1AndPt3( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2, ::h2d::col::IPoint pt3){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_707_Pt2IsBetweenPt1AndPt3)
HXDLIN( 707)		bool _hx_tmp;
HXDLIN( 707)		bool _hx_tmp1;
HXDLIN( 707)		bool _hx_tmp2;
HXDLIN( 707)		if ((pt1->x == pt3->x)) {
HXDLIN( 707)			_hx_tmp2 = (pt1->y == pt3->y);
            		}
            		else {
HXDLIN( 707)			_hx_tmp2 = false;
            		}
HXDLIN( 707)		if (!(_hx_tmp2)) {
HXDLIN( 707)			if ((pt1->x == pt2->x)) {
HXDLIN( 707)				_hx_tmp1 = (pt1->y == pt2->y);
            			}
            			else {
HXDLIN( 707)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXDLIN( 707)			_hx_tmp1 = true;
            		}
HXDLIN( 707)		if (!(_hx_tmp1)) {
HXDLIN( 707)			if ((pt3->x == pt2->x)) {
HXDLIN( 707)				_hx_tmp = (pt3->y == pt2->y);
            			}
            			else {
HXDLIN( 707)				_hx_tmp = false;
            			}
            		}
            		else {
HXDLIN( 707)			_hx_tmp = true;
            		}
HXDLIN( 707)		if (_hx_tmp) {
HXDLIN( 707)			return false;
            		}
            		else {
HXLINE( 708)			if ((pt1->x != pt3->x)) {
HXLINE( 708)				return ((pt2->x > pt1->x) == (pt2->x < pt3->x));
            			}
            			else {
HXLINE( 709)				return ((pt2->y > pt1->y) == (pt2->y < pt3->y));
            			}
            		}
HXLINE( 707)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ClipperBase_obj,Pt2IsBetweenPt1AndPt3,return )

void ClipperBase_obj::SetDx( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_715_SetDx)
HXLINE( 716)		e->deltaX = (e->topX - e->botX);
HXLINE( 717)		e->deltaY = (e->topY - e->botY);
HXLINE( 718)		if ((e->deltaY == 0)) {
HXLINE( 718)			e->dx = ((Float)-9007199254740992.);
            		}
            		else {
HXLINE( 719)			e->dx = (( (Float)(e->deltaX) ) / ( (Float)(e->deltaY) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,SetDx,(void))

void ClipperBase_obj::InsertLocalMinima( ::hxd::clipper::_Clipper::LocalMinima newLm){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_726_InsertLocalMinima)
HXDLIN( 726)		if (::hx::IsNull( this->m_MinimaList )) {
HXLINE( 728)			this->m_MinimaList = newLm;
            		}
            		else {
HXLINE( 730)			if ((newLm->y >= this->m_MinimaList->y)) {
HXLINE( 732)				newLm->next = this->m_MinimaList;
HXLINE( 733)				this->m_MinimaList = newLm;
            			}
            			else {
HXLINE( 736)				 ::hxd::clipper::_Clipper::LocalMinima tmpLm = this->m_MinimaList;
HXLINE( 737)				while(true){
HXLINE( 737)					bool _hx_tmp;
HXDLIN( 737)					if (::hx::IsNotNull( tmpLm->next )) {
HXLINE( 737)						_hx_tmp = (newLm->y < tmpLm->next->y);
            					}
            					else {
HXLINE( 737)						_hx_tmp = false;
            					}
HXDLIN( 737)					if (!(_hx_tmp)) {
HXLINE( 737)						goto _hx_goto_45;
            					}
HXLINE( 738)					tmpLm = tmpLm->next;
            				}
            				_hx_goto_45:;
HXLINE( 739)				newLm->next = tmpLm->next;
HXLINE( 740)				tmpLm->next = newLm;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,InsertLocalMinima,(void))

void ClipperBase_obj::PopLocalMinima(){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_745_PopLocalMinima)
HXLINE( 746)		if (::hx::IsNull( this->m_CurrentLM )) {
HXLINE( 746)			return;
            		}
HXLINE( 747)		this->m_CurrentLM = this->m_CurrentLM->next;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClipperBase_obj,PopLocalMinima,(void))

void ClipperBase_obj::SwapX( ::hxd::clipper::_Clipper::TEdge e){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_752_SwapX)
HXLINE( 756)		e->currX = e->topX;
HXLINE( 757)		e->topX = e->botX;
HXLINE( 758)		e->botX = e->currX;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,SwapX,(void))

bool ClipperBase_obj::equals( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_764_equals)
HXDLIN( 764)		if ((pt1->x == pt2->x)) {
HXDLIN( 764)			return (pt1->y == pt2->y);
            		}
            		else {
HXDLIN( 764)			return false;
            		}
HXDLIN( 764)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperBase_obj,equals,return )

void ClipperBase_obj::Reset(){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_768_Reset)
HXLINE( 769)		this->m_CurrentLM = this->m_MinimaList;
HXLINE( 772)		 ::hxd::clipper::_Clipper::LocalMinima lm = this->m_MinimaList;
HXLINE( 773)		while(::hx::IsNotNull( lm )){
HXLINE( 775)			 ::hxd::clipper::_Clipper::TEdge e = lm->leftBound;
HXLINE( 776)			if (::hx::IsNotNull( e )) {
HXLINE( 778)				e->currX = e->botX;
HXLINE( 779)				e->currY = e->botY;
HXLINE( 780)				e->side = ::hxd::clipper::_Clipper::EdgeSide_obj::Left_dyn();
HXLINE( 781)				e->outIdx = -1;
HXLINE( 782)				e = e->nextInLML;
            			}
HXLINE( 784)			e = lm->rightBound;
HXLINE( 785)			if (::hx::IsNotNull( e )) {
HXLINE( 787)				e->currX = e->botX;
HXLINE( 788)				e->currY = e->botY;
HXLINE( 789)				e->side = ::hxd::clipper::_Clipper::EdgeSide_obj::Right_dyn();
HXLINE( 790)				e->outIdx = -1;
HXLINE( 791)				e = e->nextInLML;
            			}
HXLINE( 793)			lm = lm->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClipperBase_obj,Reset,(void))

Float ClipperBase_obj::HORIZONTAL;

Float ClipperBase_obj::TOLERANCE;

int ClipperBase_obj::SKIP;

int ClipperBase_obj::UNASSIGNED;

bool ClipperBase_obj::nearZero(Float v){
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_304_nearZero)
HXDLIN( 304)		if ((v > ((Float)-1e-20))) {
HXDLIN( 304)			return (v < ((Float)1E-20));
            		}
            		else {
HXDLIN( 304)			return false;
            		}
HXDLIN( 304)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,nearZero,return )

 ::hxd::clipper::Rect ClipperBase_obj::getBounds(::Array< ::Dynamic> pols){
            	HX_GC_STACKFRAME(&_hx_pos_3389e5722a3b80ce_799_getBounds)
HXLINE( 800)		 ::hxd::clipper::Rect result =  ::hxd::clipper::Rect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 801)		int i = 0;
HXLINE( 802)		int count = pols->length;
HXLINE( 803)		while(true){
HXLINE( 803)			bool _hx_tmp;
HXDLIN( 803)			if ((i < count)) {
HXLINE( 803)				_hx_tmp = (pols->__get(i).StaticCast< ::Array< ::Dynamic> >()->length == 0);
            			}
            			else {
HXLINE( 803)				_hx_tmp = false;
            			}
HXDLIN( 803)			if (!(_hx_tmp)) {
HXLINE( 803)				goto _hx_goto_53;
            			}
HXDLIN( 803)			i = (i + 1);
            		}
            		_hx_goto_53:;
HXLINE( 804)		bool _hx_tmp = (i == count);
HXLINE( 806)		result->left = (result->right = pols->__get(i).StaticCast< ::Array< ::Dynamic> >()->__get(0).StaticCast<  ::h2d::col::IPoint >()->x);
HXLINE( 807)		result->top = (result->bottom = pols->__get(i).StaticCast< ::Array< ::Dynamic> >()->__get(0).StaticCast<  ::h2d::col::IPoint >()->y);
HXLINE( 808)		{
HXLINE( 808)			int _g = 0;
HXDLIN( 808)			int _g1 = count;
HXDLIN( 808)			while((_g < _g1)){
HXLINE( 808)				_g = (_g + 1);
HXDLIN( 808)				int i = (_g - 1);
HXLINE( 809)				{
HXLINE( 809)					int _g_i = 0;
HXDLIN( 809)					::Array< ::Dynamic> _g_a = pols->__get(i).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 809)					int _g_l = _g_a->length;
HXDLIN( 809)					while((_g_i < _g_l)){
HXLINE( 809)						_g_i = (_g_i + 1);
HXDLIN( 809)						 ::h2d::col::IPoint p = _g_a->__get((_g_i - 1)).StaticCast<  ::h2d::col::IPoint >();
HXLINE( 810)						if ((p->x < result->left)) {
HXLINE( 810)							result->left = p->x;
            						}
            						else {
HXLINE( 811)							if ((p->x > result->right)) {
HXLINE( 811)								result->right = p->x;
            							}
            						}
HXLINE( 812)						if ((p->y < result->top)) {
HXLINE( 812)							result->top = p->y;
            						}
            						else {
HXLINE( 813)							if ((p->y > result->bottom)) {
HXLINE( 813)								result->bottom = p->y;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 816)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClipperBase_obj,getBounds,return )


::hx::ObjectPtr< ClipperBase_obj > ClipperBase_obj::__new() {
	::hx::ObjectPtr< ClipperBase_obj > __this = new ClipperBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ClipperBase_obj > ClipperBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ClipperBase_obj *__this = (ClipperBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClipperBase_obj), true, "hxd.clipper._Clipper.ClipperBase"));
	*(void **)__this = ClipperBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ClipperBase_obj::ClipperBase_obj()
{
}

void ClipperBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClipperBase);
	HX_MARK_MEMBER_NAME(preserveCollinear,"preserveCollinear");
	HX_MARK_MEMBER_NAME(m_MinimaList,"m_MinimaList");
	HX_MARK_MEMBER_NAME(m_CurrentLM,"m_CurrentLM");
	HX_MARK_MEMBER_NAME(m_edges,"m_edges");
	HX_MARK_END_CLASS();
}

void ClipperBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(preserveCollinear,"preserveCollinear");
	HX_VISIT_MEMBER_NAME(m_MinimaList,"m_MinimaList");
	HX_VISIT_MEMBER_NAME(m_CurrentLM,"m_CurrentLM");
	HX_VISIT_MEMBER_NAME(m_edges,"m_edges");
}

::hx::Val ClipperBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"abs") ) { return ::hx::Val( abs_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"SetDx") ) { return ::hx::Val( SetDx_dyn() ); }
		if (HX_FIELD_EQ(inName,"SwapX") ) { return ::hx::Val( SwapX_dyn() ); }
		if (HX_FIELD_EQ(inName,"Reset") ) { return ::hx::Val( Reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_edges") ) { return ::hx::Val( m_edges ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"InitEdge") ) { return ::hx::Val( InitEdge_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"InitEdge2") ) { return ::hx::Val( InitEdge2_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addPolygon") ) { return ::hx::Val( addPolygon_dyn() ); }
		if (HX_FIELD_EQ(inName,"RemoveEdge") ) { return ::hx::Val( RemoveEdge_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_CurrentLM") ) { return ::hx::Val( m_CurrentLM ); }
		if (HX_FIELD_EQ(inName,"SlopesEqual") ) { return ::hx::Val( SlopesEqual_dyn() ); }
		if (HX_FIELD_EQ(inName,"addPolygons") ) { return ::hx::Val( addPolygons_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_MinimaList") ) { return ::hx::Val( m_MinimaList ); }
		if (HX_FIELD_EQ(inName,"isHorizontal") ) { return ::hx::Val( isHorizontal_dyn() ); }
		if (HX_FIELD_EQ(inName,"SlopesEqual3") ) { return ::hx::Val( SlopesEqual3_dyn() ); }
		if (HX_FIELD_EQ(inName,"ProcessBound") ) { return ::hx::Val( ProcessBound_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PointIsVertex") ) { return ::hx::Val( PointIsVertex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PointOnPolygon") ) { return ::hx::Val( PointOnPolygon_dyn() ); }
		if (HX_FIELD_EQ(inName,"FindNextLocMin") ) { return ::hx::Val( FindNextLocMin_dyn() ); }
		if (HX_FIELD_EQ(inName,"PopLocalMinima") ) { return ::hx::Val( PopLocalMinima_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"preserveCollinear") ) { return ::hx::Val( preserveCollinear ); }
		if (HX_FIELD_EQ(inName,"ReverseHorizontal") ) { return ::hx::Val( ReverseHorizontal_dyn() ); }
		if (HX_FIELD_EQ(inName,"InsertLocalMinima") ) { return ::hx::Val( InsertLocalMinima_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PointOnLineSegment") ) { return ::hx::Val( PointOnLineSegment_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"Pt2IsBetweenPt1AndPt3") ) { return ::hx::Val( Pt2IsBetweenPt1AndPt3_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"disposeLocalMinimaList") ) { return ::hx::Val( disposeLocalMinimaList_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ClipperBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"nearZero") ) { outValue = nearZero_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { outValue = getBounds_dyn(); return true; }
	}
	return false;
}

::hx::Val ClipperBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_edges") ) { m_edges=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_CurrentLM") ) { m_CurrentLM=inValue.Cast<  ::hxd::clipper::_Clipper::LocalMinima >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_MinimaList") ) { m_MinimaList=inValue.Cast<  ::hxd::clipper::_Clipper::LocalMinima >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"preserveCollinear") ) { preserveCollinear=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClipperBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("preserveCollinear",b9,1c,14,c3));
	outFields->push(HX_("m_MinimaList",9b,39,c1,6f));
	outFields->push(HX_("m_CurrentLM",48,25,57,1d));
	outFields->push(HX_("m_edges",04,45,6b,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClipperBase_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ClipperBase_obj,preserveCollinear),HX_("preserveCollinear",b9,1c,14,c3)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::LocalMinima */ ,(int)offsetof(ClipperBase_obj,m_MinimaList),HX_("m_MinimaList",9b,39,c1,6f)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::LocalMinima */ ,(int)offsetof(ClipperBase_obj,m_CurrentLM),HX_("m_CurrentLM",48,25,57,1d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ClipperBase_obj,m_edges),HX_("m_edges",04,45,6b,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ClipperBase_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &ClipperBase_obj::HORIZONTAL,HX_("HORIZONTAL",e4,70,cd,07)},
	{::hx::fsFloat,(void *) &ClipperBase_obj::TOLERANCE,HX_("TOLERANCE",ed,ac,d4,2e)},
	{::hx::fsInt,(void *) &ClipperBase_obj::SKIP,HX_("SKIP",7f,de,15,37)},
	{::hx::fsInt,(void *) &ClipperBase_obj::UNASSIGNED,HX_("UNASSIGNED",a7,23,95,86)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ClipperBase_obj_sMemberFields[] = {
	HX_("preserveCollinear",b9,1c,14,c3),
	HX_("m_MinimaList",9b,39,c1,6f),
	HX_("m_CurrentLM",48,25,57,1d),
	HX_("m_edges",04,45,6b,1a),
	HX_("isHorizontal",6e,25,e3,e7),
	HX_("abs",72,f0,49,00),
	HX_("PointIsVertex",3e,07,28,32),
	HX_("PointOnLineSegment",f0,f0,58,04),
	HX_("PointOnPolygon",cb,70,83,19),
	HX_("SlopesEqual",8c,65,f8,cc),
	HX_("SlopesEqual3",27,75,60,8c),
	HX_("clear",8d,71,5b,48),
	HX_("disposeLocalMinimaList",15,af,0b,29),
	HX_("addPolygons",fa,5f,ad,5d),
	HX_("addPolygon",59,2e,1b,7a),
	HX_("InitEdge",8d,b3,77,21),
	HX_("InitEdge2",05,68,45,27),
	HX_("RemoveEdge",c1,06,df,b6),
	HX_("FindNextLocMin",fe,3f,0e,74),
	HX_("ProcessBound",6f,97,c3,66),
	HX_("ReverseHorizontal",86,78,62,7f),
	HX_("Pt2IsBetweenPt1AndPt3",f5,ce,3e,88),
	HX_("SetDx",b6,f3,5c,0d),
	HX_("InsertLocalMinima",9d,be,84,78),
	HX_("PopLocalMinima",85,67,cc,cc),
	HX_("SwapX",45,86,34,19),
	HX_("equals",3f,ee,f2,bf),
	HX_("Reset",af,b9,f5,79),
	::String(null()) };

static void ClipperBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClipperBase_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(ClipperBase_obj::TOLERANCE,"TOLERANCE");
	HX_MARK_MEMBER_NAME(ClipperBase_obj::SKIP,"SKIP");
	HX_MARK_MEMBER_NAME(ClipperBase_obj::UNASSIGNED,"UNASSIGNED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClipperBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClipperBase_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(ClipperBase_obj::TOLERANCE,"TOLERANCE");
	HX_VISIT_MEMBER_NAME(ClipperBase_obj::SKIP,"SKIP");
	HX_VISIT_MEMBER_NAME(ClipperBase_obj::UNASSIGNED,"UNASSIGNED");
};

#endif

::hx::Class ClipperBase_obj::__mClass;

static ::String ClipperBase_obj_sStaticFields[] = {
	HX_("HORIZONTAL",e4,70,cd,07),
	HX_("TOLERANCE",ed,ac,d4,2e),
	HX_("SKIP",7f,de,15,37),
	HX_("UNASSIGNED",a7,23,95,86),
	HX_("nearZero",30,40,bb,a3),
	HX_("getBounds",ab,0f,74,e2),
	::String(null())
};

void ClipperBase_obj::__register()
{
	ClipperBase_obj _hx_dummy;
	ClipperBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.ClipperBase",f9,9a,a6,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ClipperBase_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ClipperBase_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ClipperBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClipperBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClipperBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClipperBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClipperBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClipperBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ClipperBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_283_boot)
HXDLIN( 283)		HORIZONTAL = ((Float)-9007199254740992.);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_284_boot)
HXDLIN( 284)		TOLERANCE = ((Float)1E-20);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_285_boot)
HXDLIN( 285)		SKIP = -2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3389e5722a3b80ce_286_boot)
HXDLIN( 286)		UNASSIGNED = -1;
            	}
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
