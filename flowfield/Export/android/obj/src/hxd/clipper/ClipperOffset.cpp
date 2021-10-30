#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_h2d_col__IPolygon_IPolygon_Impl_
#include <h2d/col/_IPolygon/IPolygon_Impl_.h>
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
#ifndef INCLUDED_hxd_clipper_Rect
#include <hxd/clipper/Rect.h>
#endif
#ifndef INCLUDED_hxd_clipper_ResultKind
#include <hxd/clipper/ResultKind.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_ClipperBase
#include <hxd/clipper/_Clipper/ClipperBase.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_PolyNode
#include <hxd/clipper/_Clipper/PolyNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3629_new,"hxd.clipper.ClipperOffset","new",0x7efab217,"hxd.clipper.ClipperOffset.new","hxd/clipper/Clipper.hx",3629,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3662_clear,"hxd.clipper.ClipperOffset","clear",0xe7c76f04,"hxd.clipper.ClipperOffset.clear","hxd/clipper/Clipper.hx",3662,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3669_addPolygon,"hxd.clipper.ClipperOffset","addPolygon",0xf5920182,"hxd.clipper.ClipperOffset.addPolygon","hxd/clipper/Clipper.hx",3669,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3708_addPolygons,"hxd.clipper.ClipperOffset","addPolygons",0xea2f50b1,"hxd.clipper.ClipperOffset.addPolygons","hxd/clipper/Clipper.hx",3708,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3718_fixOrientations,"hxd.clipper.ClipperOffset","fixOrientations",0xdb46194f,"hxd.clipper.ClipperOffset.fixOrientations","hxd/clipper/Clipper.hx",3718,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3735_getUnitNormal,"hxd.clipper.ClipperOffset","getUnitNormal",0xba079478,"hxd.clipper.ClipperOffset.getUnitNormal","hxd/clipper/Clipper.hx",3735,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3748_doOffset,"hxd.clipper.ClipperOffset","doOffset",0x136fa467,"hxd.clipper.ClipperOffset.doOffset","hxd/clipper/Clipper.hx",3748,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3909_execute,"hxd.clipper.ClipperOffset","execute",0x1c8c936c,"hxd.clipper.ClipperOffset.execute","hxd/clipper/Clipper.hx",3909,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3937_offsetPoint,"hxd.clipper.ClipperOffset","offsetPoint",0xeb922874,"hxd.clipper.ClipperOffset.offsetPoint","hxd/clipper/Clipper.hx",3937,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3982_doSquare,"hxd.clipper.ClipperOffset","doSquare",0x0c220d71,"hxd.clipper.ClipperOffset.doSquare","hxd/clipper/Clipper.hx",3982,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3990_doMiter,"hxd.clipper.ClipperOffset","doMiter",0x8c1969b1,"hxd.clipper.ClipperOffset.doMiter","hxd/clipper/Clipper.hx",3990,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_d03fb8c6d1579803_3997_doRound,"hxd.clipper.ClipperOffset","doRound",0x711261fa,"hxd.clipper.ClipperOffset.doRound","hxd/clipper/Clipper.hx",3997,0x0569880e)
namespace hxd{
namespace clipper{

void ClipperOffset_obj::__construct(::hx::Null< Float >  __o_miterLimit,::hx::Null< Float >  __o_arcTolerance){
            		Float miterLimit = __o_miterLimit.Default(((Float)2.0));
            		Float arcTolerance = __o_arcTolerance.Default(((Float)0.25));
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3629_new)
HXLINE(3650)		this->two_pi = ((Float)6.28318530717958623);
HXLINE(3649)		this->def_arc_tolerance = ((Float)0.25);
HXLINE(3653)		this->MiterLimit = miterLimit;
HXLINE(3654)		this->ArcTolerance = arcTolerance;
HXLINE(3655)		this->m_lowest =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,-1,0);
HXLINE(3656)		this->m_normals = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(3657)		this->m_polyNodes =  ::hxd::clipper::_Clipper::PolyNode_obj::__alloc( HX_CTX );
HXLINE(3658)		this->resultKind = ::hxd::clipper::ResultKind_obj::All_dyn();
            	}

Dynamic ClipperOffset_obj::__CreateEmpty() { return new ClipperOffset_obj; }

void *ClipperOffset_obj::_hx_vtable = 0;

Dynamic ClipperOffset_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClipperOffset_obj > _hx_result = new ClipperOffset_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ClipperOffset_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69b94687;
}

void ClipperOffset_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3662_clear)
HXLINE(3663)		this->m_polyNodes =  ::hxd::clipper::_Clipper::PolyNode_obj::__alloc( HX_CTX );
HXLINE(3664)		this->m_lowest =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,-1,0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClipperOffset_obj,clear,(void))

void ClipperOffset_obj::addPolygon(::Array< ::Dynamic> pol, ::hxd::clipper::JoinType joinType, ::hxd::clipper::EndType endType){
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3669_addPolygon)
HXLINE(3670)		int highI = (pol->length - 1);
HXLINE(3671)		if ((highI < 0)) {
HXLINE(3671)			return;
            		}
HXLINE(3672)		 ::hxd::clipper::_Clipper::PolyNode newNode =  ::hxd::clipper::_Clipper::PolyNode_obj::__alloc( HX_CTX );
HXLINE(3673)		newNode->jointype = joinType;
HXLINE(3674)		newNode->endtype = endType;
HXLINE(3677)		bool _hx_tmp;
HXDLIN(3677)		if (::hx::IsPointerNotEq( endType,::hxd::clipper::EndType_obj::ClosedLine_dyn() )) {
HXLINE(3677)			_hx_tmp = ::hx::IsPointerEq( endType,::hxd::clipper::EndType_obj::ClosedPol_dyn() );
            		}
            		else {
HXLINE(3677)			_hx_tmp = true;
            		}
HXDLIN(3677)		if (_hx_tmp) {
HXLINE(3678)			while(true){
HXLINE(3678)				bool _hx_tmp;
HXDLIN(3678)				if ((highI > 0)) {
HXLINE(3678)					_hx_tmp = ::hx::IsInstanceEq( pol->__get(0).StaticCast<  ::h2d::col::IPoint >(),pol->__get(highI).StaticCast<  ::h2d::col::IPoint >() );
            				}
            				else {
HXLINE(3678)					_hx_tmp = false;
            				}
HXDLIN(3678)				if (!(_hx_tmp)) {
HXLINE(3678)					goto _hx_goto_2;
            				}
HXLINE(3679)				highI = (highI - 1);
            			}
            			_hx_goto_2:;
            		}
HXLINE(3680)		newNode->polygon->push(pol->__get(0).StaticCast<  ::h2d::col::IPoint >());
HXLINE(3681)		int j = 0;
HXDLIN(3681)		int k = 0;
HXLINE(3682)		{
HXLINE(3682)			int _g = 1;
HXDLIN(3682)			int _g1 = (highI + 1);
HXDLIN(3682)			while((_g < _g1)){
HXLINE(3682)				_g = (_g + 1);
HXDLIN(3682)				int i = (_g - 1);
HXLINE(3683)				if (::hx::IsInstanceNotEq( newNode->polygon->__get(j).StaticCast<  ::h2d::col::IPoint >(),pol->__get(i).StaticCast<  ::h2d::col::IPoint >() )) {
HXLINE(3684)					j = (j + 1);
HXLINE(3685)					newNode->polygon->push(pol->__get(i).StaticCast<  ::h2d::col::IPoint >());
HXLINE(3686)					bool _hx_tmp;
HXDLIN(3686)					if ((pol->__get(i).StaticCast<  ::h2d::col::IPoint >()->y <= newNode->polygon->__get(k).StaticCast<  ::h2d::col::IPoint >()->y)) {
HXLINE(3686)						if ((pol->__get(i).StaticCast<  ::h2d::col::IPoint >()->y == newNode->polygon->__get(k).StaticCast<  ::h2d::col::IPoint >()->y)) {
HXLINE(3686)							_hx_tmp = (pol->__get(i).StaticCast<  ::h2d::col::IPoint >()->x < newNode->polygon->__get(k).StaticCast<  ::h2d::col::IPoint >()->x);
            						}
            						else {
HXLINE(3686)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE(3686)						_hx_tmp = true;
            					}
HXDLIN(3686)					if (_hx_tmp) {
HXLINE(3687)						k = j;
            					}
            				}
            			}
            		}
HXLINE(3689)		bool _hx_tmp1;
HXDLIN(3689)		if (::hx::IsPointerEq( endType,::hxd::clipper::EndType_obj::ClosedPol_dyn() )) {
HXLINE(3689)			_hx_tmp1 = (j < 2);
            		}
            		else {
HXLINE(3689)			_hx_tmp1 = false;
            		}
HXDLIN(3689)		if (_hx_tmp1) {
HXLINE(3689)			return;
            		}
HXLINE(3691)		this->m_polyNodes->addChild(newNode);
HXLINE(3694)		if (::hx::IsPointerNotEq( endType,::hxd::clipper::EndType_obj::ClosedPol_dyn() )) {
HXLINE(3694)			return;
            		}
HXLINE(3695)		if ((this->m_lowest->x < 0)) {
HXLINE(3696)			this->m_lowest =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(this->m_polyNodes->childs->length - 1),k);
            		}
            		else {
HXLINE(3699)			 ::h2d::col::IPoint ip = this->m_polyNodes->childs->__get(this->m_lowest->x).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >()->polygon->__get(this->m_lowest->y).StaticCast<  ::h2d::col::IPoint >();
HXLINE(3700)			bool _hx_tmp;
HXDLIN(3700)			if ((newNode->polygon->__get(k).StaticCast<  ::h2d::col::IPoint >()->y <= ip->y)) {
HXLINE(3700)				if ((newNode->polygon->__get(k).StaticCast<  ::h2d::col::IPoint >()->y == ip->y)) {
HXLINE(3700)					_hx_tmp = (newNode->polygon->__get(k).StaticCast<  ::h2d::col::IPoint >()->x < ip->x);
            				}
            				else {
HXLINE(3700)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(3700)				_hx_tmp = true;
            			}
HXDLIN(3700)			if (_hx_tmp) {
HXLINE(3701)				this->m_lowest =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(this->m_polyNodes->childs->length - 1),k);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ClipperOffset_obj,addPolygon,(void))

void ClipperOffset_obj::addPolygons(::Array< ::Dynamic> pols, ::hxd::clipper::JoinType joinType, ::hxd::clipper::EndType endType){
            	HX_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3708_addPolygons)
HXDLIN(3708)		int _g_i = 0;
HXDLIN(3708)		::Array< ::Dynamic> _g_a = pols;
HXDLIN(3708)		int _g_l = _g_a->length;
HXDLIN(3708)		while((_g_i < _g_l)){
HXDLIN(3708)			_g_i = (_g_i + 1);
HXDLIN(3708)			::Array< ::Dynamic> p = _g_a->__get((_g_i - 1)).StaticCast< ::Array< ::Dynamic> >();
HXLINE(3709)			this->addPolygon(p,joinType,endType);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ClipperOffset_obj,addPolygons,(void))

void ClipperOffset_obj::fixOrientations(){
            	HX_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3718_fixOrientations)
HXDLIN(3718)		bool _hx_tmp;
HXDLIN(3718)		if ((this->m_lowest->x >= 0)) {
HXDLIN(3718)			_hx_tmp = !((::hxd::clipper::Clipper_obj::polArea(this->m_polyNodes->childs->__get(this->m_lowest->x).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >()->polygon) >= 0));
            		}
            		else {
HXDLIN(3718)			_hx_tmp = false;
            		}
HXDLIN(3718)		if (_hx_tmp) {
HXLINE(3719)			int _g = 0;
HXDLIN(3719)			::Array< ::Dynamic> _g1 = this->m_polyNodes->childs;
HXDLIN(3719)			while((_g < _g1->length)){
HXLINE(3719)				 ::hxd::clipper::_Clipper::PolyNode node = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >();
HXDLIN(3719)				_g = (_g + 1);
HXLINE(3720)				bool _hx_tmp;
HXDLIN(3720)				if (::hx::IsPointerNotEq( node->endtype,::hxd::clipper::EndType_obj::ClosedPol_dyn() )) {
HXLINE(3720)					if (::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::ClosedLine_dyn() )) {
HXLINE(3720)						_hx_tmp = (::hxd::clipper::Clipper_obj::polArea(node->polygon) >= 0);
            					}
            					else {
HXLINE(3720)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(3720)					_hx_tmp = true;
            				}
HXDLIN(3720)				if (_hx_tmp) {
HXLINE(3721)					::h2d::col::_IPolygon::IPolygon_Impl__obj::reverse(node->polygon);
            				}
            			}
            		}
            		else {
HXLINE(3725)			int _g = 0;
HXDLIN(3725)			::Array< ::Dynamic> _g1 = this->m_polyNodes->childs;
HXDLIN(3725)			while((_g < _g1->length)){
HXLINE(3725)				 ::hxd::clipper::_Clipper::PolyNode node = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >();
HXDLIN(3725)				_g = (_g + 1);
HXLINE(3727)				bool _hx_tmp;
HXDLIN(3727)				if (::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::ClosedLine_dyn() )) {
HXLINE(3727)					_hx_tmp = !((::hxd::clipper::Clipper_obj::polArea(node->polygon) >= 0));
            				}
            				else {
HXLINE(3727)					_hx_tmp = false;
            				}
HXDLIN(3727)				if (_hx_tmp) {
HXLINE(3728)					::h2d::col::_IPolygon::IPolygon_Impl__obj::reverse(node->polygon);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClipperOffset_obj,fixOrientations,(void))

 ::h2d::col::Point ClipperOffset_obj::getUnitNormal( ::h2d::col::IPoint pt1, ::h2d::col::IPoint pt2){
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3735_getUnitNormal)
HXLINE(3736)		Float dx = ( (Float)((pt2->x - pt1->x)) );
HXLINE(3737)		Float dy = ( (Float)((pt2->y - pt1->y)) );
HXLINE(3738)		bool _hx_tmp;
HXDLIN(3738)		if ((dx == 0)) {
HXLINE(3738)			_hx_tmp = (dy == 0);
            		}
            		else {
HXLINE(3738)			_hx_tmp = false;
            		}
HXDLIN(3738)		if (_hx_tmp) {
HXLINE(3738)			return  ::h2d::col::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE(3740)		Float dz = ((Float)0.);
HXDLIN(3740)		Float f = (( (Float)(1) ) / ::Math_obj::sqrt((((dx * dx) + (dy * dy)) + (dz * dz))));
HXLINE(3741)		dx = (dx * f);
HXLINE(3742)		dy = (dy * f);
HXLINE(3744)		return  ::h2d::col::Point_obj::__alloc( HX_CTX ,dy,-(dx));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperOffset_obj,getUnitNormal,return )

void ClipperOffset_obj::doOffset(Float delta){
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3748_doOffset)
HXLINE(3749)		::Array< ::Dynamic> polygons = null();
HXDLIN(3749)		::Array< ::Dynamic> this1;
HXDLIN(3749)		if (::hx::IsNull( polygons )) {
HXLINE(3749)			this1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(3749)			this1 = polygons;
            		}
HXDLIN(3749)		this->m_destPolys = this1;
HXLINE(3750)		this->m_delta = delta;
HXLINE(3753)		bool _hx_tmp;
HXDLIN(3753)		if ((delta > ((Float)-1e-20))) {
HXLINE(3753)			_hx_tmp = (delta < ((Float)1E-20));
            		}
            		else {
HXLINE(3753)			_hx_tmp = false;
            		}
HXDLIN(3753)		if (_hx_tmp) {
HXLINE(3754)			{
HXLINE(3754)				int _g = 0;
HXDLIN(3754)				::Array< ::Dynamic> _g1 = this->m_polyNodes->childs;
HXDLIN(3754)				while((_g < _g1->length)){
HXLINE(3754)					 ::hxd::clipper::_Clipper::PolyNode node = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >();
HXDLIN(3754)					_g = (_g + 1);
HXLINE(3755)					if (::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::ClosedPol_dyn() )) {
HXLINE(3756)						this->m_destPolys->push(node->polygon);
            					}
            				}
            			}
HXLINE(3758)			return;
            		}
HXLINE(3762)		if ((this->MiterLimit > 2)) {
HXLINE(3762)			this->m_miterLim = (( (Float)(2) ) / (this->MiterLimit * this->MiterLimit));
            		}
            		else {
HXLINE(3763)			this->m_miterLim = ((Float)0.5);
            		}
HXLINE(3765)		Float y;
HXLINE(3766)		if ((this->ArcTolerance <= ((Float)0.0))) {
HXLINE(3767)			y = this->def_arc_tolerance;
            		}
            		else {
HXLINE(3768)			Float _hx_tmp;
HXDLIN(3768)			if ((delta < 0)) {
HXLINE(3768)				_hx_tmp = -(delta);
            			}
            			else {
HXLINE(3768)				_hx_tmp = delta;
            			}
HXDLIN(3768)			if ((this->ArcTolerance > (_hx_tmp * this->def_arc_tolerance))) {
HXLINE(3769)				Float y1;
HXDLIN(3769)				if ((delta < 0)) {
HXLINE(3769)					y1 = -(delta);
            				}
            				else {
HXLINE(3769)					y1 = delta;
            				}
HXDLIN(3769)				y = (y1 * this->def_arc_tolerance);
            			}
            			else {
HXLINE(3771)				y = this->ArcTolerance;
            			}
            		}
HXLINE(3773)		Float steps;
HXDLIN(3773)		if ((delta < 0)) {
HXLINE(3773)			steps = -(delta);
            		}
            		else {
HXLINE(3773)			steps = delta;
            		}
HXDLIN(3773)		int steps1 = ::Std_obj::_hx_int((((Float)3.14159265358979323) / ::Math_obj::acos((( (Float)(1) ) - (y / steps)))));
HXLINE(3774)		this->m_sin = ::Math_obj::sin((this->two_pi / ( (Float)(steps1) )));
HXLINE(3775)		this->m_cos = ::Math_obj::cos((this->two_pi / ( (Float)(steps1) )));
HXLINE(3776)		this->m_StepsPerRad = (( (Float)(steps1) ) / this->two_pi);
HXLINE(3777)		if ((delta < ((Float)0.))) {
HXLINE(3777)			this->m_sin = -(this->m_sin);
            		}
HXLINE(3779)		{
HXLINE(3779)			int _g = 0;
HXDLIN(3779)			::Array< ::Dynamic> _g1 = this->m_polyNodes->childs;
HXDLIN(3779)			while((_g < _g1->length)){
HXLINE(3779)				 ::hxd::clipper::_Clipper::PolyNode node = _g1->__get(_g).StaticCast<  ::hxd::clipper::_Clipper::PolyNode >();
HXDLIN(3779)				_g = (_g + 1);
HXLINE(3781)				this->m_srcPoly = node->polygon;
HXLINE(3782)				int len = this->m_srcPoly->length;
HXLINE(3784)				bool _hx_tmp;
HXDLIN(3784)				if ((len != 0)) {
HXLINE(3784)					if ((delta <= 0)) {
HXLINE(3784)						if ((len >= 3)) {
HXLINE(3784)							_hx_tmp = ::hx::IsPointerNotEq( node->endtype,::hxd::clipper::EndType_obj::ClosedPol_dyn() );
            						}
            						else {
HXLINE(3784)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE(3784)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(3784)					_hx_tmp = true;
            				}
HXDLIN(3784)				if (_hx_tmp) {
HXLINE(3785)					continue;
            				}
HXLINE(3787)				::Array< ::Dynamic> points = null();
HXDLIN(3787)				::Array< ::Dynamic> this1;
HXDLIN(3787)				if (::hx::IsNull( points )) {
HXLINE(3787)					this1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(3787)					this1 = points;
            				}
HXDLIN(3787)				this->m_destPoly = this1;
HXLINE(3789)				if ((len == 1)) {
HXLINE(3790)					if (::hx::IsPointerEq( node->jointype,::hxd::clipper::JoinType_obj::Round_dyn() )) {
HXLINE(3791)						Float X = ((Float)1.);
HXDLIN(3791)						Float Y = ((Float)0.);
HXLINE(3792)						{
HXLINE(3792)							int _g = 1;
HXDLIN(3792)							int _g1 = (steps1 + 1);
HXDLIN(3792)							while((_g < _g1)){
HXLINE(3792)								_g = (_g + 1);
HXDLIN(3792)								int j = (_g - 1);
HXLINE(3793)								::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3793)								_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (X * delta))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (Y * delta)))));
HXLINE(3794)								Float X2 = X;
HXLINE(3795)								X = ((X * this->m_cos) - (this->m_sin * Y));
HXLINE(3796)								Y = ((X2 * this->m_sin) + (Y * this->m_cos));
            							}
            						}
            					}
            					else {
HXLINE(3800)						Float X = ((Float)-1.);
HXDLIN(3800)						Float Y = ((Float)-1.);
HXLINE(3801)						{
HXLINE(3801)							{
HXLINE(3802)								::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3802)								_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (X * delta))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (Y * delta)))));
HXLINE(3803)								if ((X < 0)) {
HXLINE(3803)									X = ( (Float)(1) );
            								}
            								else {
HXLINE(3804)									if ((Y < 0)) {
HXLINE(3804)										Y = ( (Float)(1) );
            									}
            									else {
HXLINE(3805)										X = ( (Float)(-1) );
            									}
            								}
            							}
HXLINE(3801)							{
HXLINE(3802)								::Array< ::Dynamic> _hx_tmp1 = this->m_destPoly;
HXDLIN(3802)								_hx_tmp1->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (X * delta))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (Y * delta)))));
HXLINE(3803)								if ((X < 0)) {
HXLINE(3803)									X = ( (Float)(1) );
            								}
            								else {
HXLINE(3804)									if ((Y < 0)) {
HXLINE(3804)										Y = ( (Float)(1) );
            									}
            									else {
HXLINE(3805)										X = ( (Float)(-1) );
            									}
            								}
            							}
HXLINE(3801)							{
HXLINE(3802)								::Array< ::Dynamic> _hx_tmp2 = this->m_destPoly;
HXDLIN(3802)								_hx_tmp2->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (X * delta))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (Y * delta)))));
HXLINE(3803)								if ((X < 0)) {
HXLINE(3803)									X = ( (Float)(1) );
            								}
            								else {
HXLINE(3804)									if ((Y < 0)) {
HXLINE(3804)										Y = ( (Float)(1) );
            									}
            									else {
HXLINE(3805)										X = ( (Float)(-1) );
            									}
            								}
            							}
HXLINE(3801)							{
HXLINE(3802)								::Array< ::Dynamic> _hx_tmp3 = this->m_destPoly;
HXDLIN(3802)								_hx_tmp3->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (X * delta))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (Y * delta)))));
HXLINE(3803)								if ((X < 0)) {
HXLINE(3803)									X = ( (Float)(1) );
            								}
            								else {
HXLINE(3804)									if ((Y < 0)) {
HXLINE(3804)										Y = ( (Float)(1) );
            									}
            									else {
HXLINE(3805)										X = ( (Float)(-1) );
            									}
            								}
            							}
            						}
            					}
HXLINE(3808)					this->m_destPolys->push(this->m_destPoly);
HXLINE(3809)					continue;
            				}
HXLINE(3813)				this->m_normals = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(3814)				{
HXLINE(3814)					int _g2 = 0;
HXDLIN(3814)					int _g3 = (len - 1);
HXDLIN(3814)					while((_g2 < _g3)){
HXLINE(3814)						_g2 = (_g2 + 1);
HXDLIN(3814)						int j = (_g2 - 1);
HXLINE(3815)						::Array< ::Dynamic> _hx_tmp = this->m_normals;
HXDLIN(3815)						_hx_tmp->push(this->getUnitNormal(this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >(),this->m_srcPoly->__get((j + 1)).StaticCast<  ::h2d::col::IPoint >()));
            					}
            				}
HXLINE(3816)				bool _hx_tmp1;
HXDLIN(3816)				if (::hx::IsPointerNotEq( node->endtype,::hxd::clipper::EndType_obj::ClosedLine_dyn() )) {
HXLINE(3816)					_hx_tmp1 = ::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::ClosedPol_dyn() );
            				}
            				else {
HXLINE(3816)					_hx_tmp1 = true;
            				}
HXDLIN(3816)				if (_hx_tmp1) {
HXLINE(3817)					::Array< ::Dynamic> _hx_tmp = this->m_normals;
HXDLIN(3817)					_hx_tmp->push(this->getUnitNormal(this->m_srcPoly->__get((len - 1)).StaticCast<  ::h2d::col::IPoint >(),this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()));
            				}
            				else {
HXLINE(3819)					this->m_normals->push(this->m_normals->__get((len - 2)).StaticCast<  ::h2d::col::Point >());
            				}
HXLINE(3821)				if (::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::ClosedPol_dyn() )) {
HXLINE(3822)					int k = (len - 1);
HXLINE(3823)					{
HXLINE(3823)						int _g = 0;
HXDLIN(3823)						int _g1 = len;
HXDLIN(3823)						while((_g < _g1)){
HXLINE(3823)							_g = (_g + 1);
HXDLIN(3823)							int j = (_g - 1);
HXLINE(3824)							k = this->offsetPoint(j,k,node->jointype);
            						}
            					}
HXLINE(3825)					this->m_destPolys->push(this->m_destPoly);
            				}
            				else {
HXLINE(3827)					if (::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::ClosedLine_dyn() )) {
HXLINE(3828)						int k = (len - 1);
HXLINE(3829)						{
HXLINE(3829)							int _g = 0;
HXDLIN(3829)							int _g1 = len;
HXDLIN(3829)							while((_g < _g1)){
HXLINE(3829)								_g = (_g + 1);
HXDLIN(3829)								int j = (_g - 1);
HXLINE(3830)								k = this->offsetPoint(j,k,node->jointype);
            							}
            						}
HXLINE(3831)						this->m_destPolys->push(this->m_destPoly);
HXLINE(3832)						::Array< ::Dynamic> points = null();
HXDLIN(3832)						::Array< ::Dynamic> this1;
HXDLIN(3832)						if (::hx::IsNull( points )) {
HXLINE(3832)							this1 = ::Array_obj< ::Dynamic>::__new(0);
            						}
            						else {
HXLINE(3832)							this1 = points;
            						}
HXDLIN(3832)						this->m_destPoly = this1;
HXLINE(3834)						 ::h2d::col::Point n = this->m_normals->__get((len - 1)).StaticCast<  ::h2d::col::Point >();
HXLINE(3835)						int j = (len - 1);
HXLINE(3836)						while((j > 0)){
HXLINE(3837)							this->m_normals[j] =  ::h2d::col::Point_obj::__alloc( HX_CTX ,-(this->m_normals->__get((j - 1)).StaticCast<  ::h2d::col::Point >()->x),-(this->m_normals->__get((j - 1)).StaticCast<  ::h2d::col::Point >()->y));
HXLINE(3838)							j = (j - 1);
            						}
HXLINE(3840)						this->m_normals[0] =  ::h2d::col::Point_obj::__alloc( HX_CTX ,-(n->x),-(n->y));
HXLINE(3841)						k = 0;
HXLINE(3842)						int j1 = (len - 1);
HXLINE(3843)						while((j1 > 0)){
HXLINE(3844)							k = this->offsetPoint(j1,k,node->jointype);
HXLINE(3845)							j1 = (j1 - 1);
            						}
HXLINE(3847)						this->m_destPolys->push(this->m_destPoly);
            					}
            					else {
HXLINE(3850)						int k = 0;
HXLINE(3851)						{
HXLINE(3851)							int _g = 1;
HXDLIN(3851)							int _g1 = (len - 1);
HXDLIN(3851)							while((_g < _g1)){
HXLINE(3851)								_g = (_g + 1);
HXDLIN(3851)								int j = (_g - 1);
HXLINE(3852)								k = this->offsetPoint(j,k,node->jointype);
            							}
            						}
HXLINE(3854)						 ::h2d::col::IPoint pt1;
HXLINE(3855)						if (::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::OpenButt_dyn() )) {
HXLINE(3856)							int j = (len - 1);
HXLINE(3857)							pt1 =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * delta))));
HXLINE(3858)							this->m_destPoly->push(pt1);
HXLINE(3859)							pt1 =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((( (Float)(this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x) ) - (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * delta))),::Math_obj::round((( (Float)(this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y) ) - (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * delta))));
HXLINE(3860)							this->m_destPoly->push(pt1);
            						}
            						else {
HXLINE(3863)							int j = (len - 1);
HXLINE(3864)							k = (len - 2);
HXLINE(3865)							this->m_sinA = ( (Float)(0) );
HXLINE(3866)							this->m_normals[j] =  ::h2d::col::Point_obj::__alloc( HX_CTX ,-(this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x),-(this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y));
HXLINE(3867)							if (::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::OpenSquare_dyn() )) {
HXLINE(3868)								Float dx = ::Math_obj::tan((::Math_obj::atan2(this->m_sinA,((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y))) * ((Float)0.25)));
HXDLIN(3868)								::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3868)								_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x - (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
HXDLIN(3868)								::Array< ::Dynamic> _hx_tmp1 = this->m_destPoly;
HXDLIN(3868)								_hx_tmp1->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y - (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
            							}
            							else {
HXLINE(3870)								Float a = ::Math_obj::atan2(this->m_sinA,((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y)));
HXDLIN(3870)								Float f;
HXDLIN(3870)								if ((a < 0)) {
HXLINE(3870)									f = -(a);
            								}
            								else {
HXLINE(3870)									f = a;
            								}
HXDLIN(3870)								int a1 = ::Math_obj::round((this->m_StepsPerRad * f));
HXDLIN(3870)								int steps;
HXDLIN(3870)								if ((a1 < 1)) {
HXLINE(3870)									steps = 1;
            								}
            								else {
HXLINE(3870)									steps = a1;
            								}
HXDLIN(3870)								Float X = this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x;
HXDLIN(3870)								Float Y = this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y;
HXDLIN(3870)								Float X2;
HXDLIN(3870)								{
HXLINE(3870)									int _g = 0;
HXDLIN(3870)									int _g1 = steps;
HXDLIN(3870)									while((_g < _g1)){
HXLINE(3870)										_g = (_g + 1);
HXDLIN(3870)										int i = (_g - 1);
HXDLIN(3870)										::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3870)										_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (X * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (Y * this->m_delta)))));
HXDLIN(3870)										X2 = X;
HXDLIN(3870)										X = ((X * this->m_cos) - (this->m_sin * Y));
HXDLIN(3870)										Y = ((X2 * this->m_sin) + (Y * this->m_cos));
            									}
            								}
HXDLIN(3870)								::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3870)								_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * this->m_delta)))));
            							}
            						}
HXLINE(3874)						int j = (len - 1);
HXLINE(3875)						while((j > 0)){
HXLINE(3876)							this->m_normals[j] =  ::h2d::col::Point_obj::__alloc( HX_CTX ,-(this->m_normals->__get((j - 1)).StaticCast<  ::h2d::col::Point >()->x),-(this->m_normals->__get((j - 1)).StaticCast<  ::h2d::col::Point >()->y));
HXLINE(3877)							j = (j - 1);
            						}
HXLINE(3880)						this->m_normals[0] =  ::h2d::col::Point_obj::__alloc( HX_CTX ,-(this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->x),-(this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->y));
HXLINE(3882)						k = (len - 1);
HXLINE(3883)						int j1 = (k - 1);
HXLINE(3884)						while((j1 > 0)){
HXLINE(3885)							k = this->offsetPoint(j1,k,node->jointype);
HXLINE(3886)							j1 = (j1 - 1);
            						}
HXLINE(3889)						if (::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::OpenButt_dyn() )) {
HXLINE(3890)							pt1 =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((( (Float)(this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x) ) - (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->x * delta))),::Math_obj::round((( (Float)(this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y) ) - (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->y * delta))));
HXLINE(3891)							this->m_destPoly->push(pt1);
HXLINE(3892)							pt1 =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->x * delta))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->y * delta))));
HXLINE(3893)							this->m_destPoly->push(pt1);
            						}
            						else {
HXLINE(3896)							k = 1;
HXLINE(3897)							this->m_sinA = ( (Float)(0) );
HXLINE(3898)							if (::hx::IsPointerEq( node->endtype,::hxd::clipper::EndType_obj::OpenSquare_dyn() )) {
HXLINE(3899)								Float dx = ::Math_obj::tan((::Math_obj::atan2(this->m_sinA,((this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->y))) * ((Float)0.25)));
HXDLIN(3899)								::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3899)								_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->x - (this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->y + (this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
HXDLIN(3899)								::Array< ::Dynamic> _hx_tmp1 = this->m_destPoly;
HXDLIN(3899)								_hx_tmp1->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->x + (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->y - (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
            							}
            							else {
HXLINE(3901)								Float a = ::Math_obj::atan2(this->m_sinA,((this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->y)));
HXDLIN(3901)								Float f;
HXDLIN(3901)								if ((a < 0)) {
HXLINE(3901)									f = -(a);
            								}
            								else {
HXLINE(3901)									f = a;
            								}
HXDLIN(3901)								int a1 = ::Math_obj::round((this->m_StepsPerRad * f));
HXDLIN(3901)								int steps;
HXDLIN(3901)								if ((a1 < 1)) {
HXLINE(3901)									steps = 1;
            								}
            								else {
HXLINE(3901)									steps = a1;
            								}
HXDLIN(3901)								Float X = this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->x;
HXDLIN(3901)								Float Y = this->m_normals->__get(1).StaticCast<  ::h2d::col::Point >()->y;
HXDLIN(3901)								Float X2;
HXDLIN(3901)								{
HXLINE(3901)									int _g = 0;
HXDLIN(3901)									int _g1 = steps;
HXDLIN(3901)									while((_g < _g1)){
HXLINE(3901)										_g = (_g + 1);
HXDLIN(3901)										int i = (_g - 1);
HXDLIN(3901)										::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3901)										_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (X * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (Y * this->m_delta)))));
HXDLIN(3901)										X2 = X;
HXDLIN(3901)										X = ((X * this->m_cos) - (this->m_sin * Y));
HXDLIN(3901)										Y = ((X2 * this->m_sin) + (Y * this->m_cos));
            									}
            								}
HXDLIN(3901)								::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3901)								_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->x * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(0).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_normals->__get(0).StaticCast<  ::h2d::col::Point >()->y * this->m_delta)))));
            							}
            						}
HXLINE(3903)						this->m_destPolys->push(this->m_destPoly);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperOffset_obj,doOffset,(void))

::Array< ::Dynamic> ClipperOffset_obj::execute(Float delta){
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3909_execute)
HXLINE(3910)		this->fixOrientations();
HXLINE(3911)		this->doOffset(delta);
HXLINE(3914)		 ::hxd::clipper::Clipper clpr =  ::hxd::clipper::Clipper_obj::__alloc( HX_CTX );
HXLINE(3915)		clpr->resultKind = this->resultKind;
HXLINE(3916)		clpr->addPolygons(this->m_destPolys,::hxd::clipper::PolyType_obj::Subject_dyn());
HXLINE(3917)		if ((delta > 0)) {
HXLINE(3917)			return clpr->execute(::hxd::clipper::ClipType_obj::Union_dyn(),::hxd::clipper::PolyFillType_obj::Positive_dyn(),::hxd::clipper::PolyFillType_obj::Positive_dyn());
            		}
            		else {
HXLINE(3919)			 ::hxd::clipper::Rect r = ::hxd::clipper::_Clipper::ClipperBase_obj::getBounds(this->m_destPolys);
HXLINE(3920)			::Array< ::Dynamic> points = null();
HXDLIN(3920)			::Array< ::Dynamic> this1;
HXDLIN(3920)			if (::hx::IsNull( points )) {
HXLINE(3920)				this1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(3920)				this1 = points;
            			}
HXDLIN(3920)			::Array< ::Dynamic> outer = this1;
HXLINE(3922)			outer->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(r->left - 10),(r->bottom + 10)));
HXLINE(3923)			outer->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(r->right + 10),(r->bottom + 10)));
HXLINE(3924)			outer->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(r->right + 10),(r->top - 10)));
HXLINE(3925)			outer->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(r->left - 10),(r->top - 10)));
HXLINE(3927)			clpr->addPolygon(outer,::hxd::clipper::PolyType_obj::Subject_dyn());
HXLINE(3928)			clpr->reverseSolution = true;
HXLINE(3929)			::Array< ::Dynamic> out = clpr->execute(::hxd::clipper::ClipType_obj::Union_dyn(),::hxd::clipper::PolyFillType_obj::Negative_dyn(),::hxd::clipper::PolyFillType_obj::Negative_dyn());
HXLINE(3930)			if ((out->length > 0)) {
HXLINE(3930)				out->shift();
            			}
HXLINE(3931)			return out;
            		}
HXLINE(3917)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClipperOffset_obj,execute,return )

int ClipperOffset_obj::offsetPoint(int j,int k, ::hxd::clipper::JoinType jointype){
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3937_offsetPoint)
HXLINE(3939)		this->m_sinA = ((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y) - (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y));
HXLINE(3941)		Float f = (this->m_sinA * this->m_delta);
HXDLIN(3941)		Float _hx_tmp;
HXDLIN(3941)		if ((f < 0)) {
HXLINE(3941)			_hx_tmp = -(f);
            		}
            		else {
HXLINE(3941)			_hx_tmp = f;
            		}
HXDLIN(3941)		if ((_hx_tmp < ((Float)1.0))) {
HXLINE(3944)			Float cosA = ((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y));
HXLINE(3945)			if ((cosA > 0)) {
HXLINE(3947)				::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3947)				_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * this->m_delta)))));
HXLINE(3948)				return k;
            			}
            		}
            		else {
HXLINE(3952)			if ((this->m_sinA > ((Float)1.0))) {
HXLINE(3952)				this->m_sinA = ((Float)1.0);
            			}
            			else {
HXLINE(3953)				if ((this->m_sinA < ((Float)-1.0))) {
HXLINE(3953)					this->m_sinA = ((Float)-1.0);
            				}
            			}
            		}
HXLINE(3955)		if (((this->m_sinA * this->m_delta) < 0)) {
HXLINE(3957)			 ::h2d::col::IPoint p1 =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * this->m_delta))));
HXLINE(3958)			 ::h2d::col::IPoint p2 =  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * this->m_delta))));
HXLINE(3959)			this->m_destPoly->push(p1);
HXLINE(3960)			Float dx = ( (Float)((p1->x - p2->x)) );
HXDLIN(3960)			Float dy = ( (Float)((p1->y - p2->y)) );
HXDLIN(3960)			Float dz = ((Float)0.);
HXDLIN(3960)			if (((((dx * dx) + (dy * dy)) + (dz * dz)) > 1)) {
HXLINE(3961)				this->m_destPoly->push(this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >());
HXLINE(3962)				this->m_destPoly->push(p2);
            			}
            		}
            		else {
HXLINE(3966)			switch((int)(jointype->_hx_getIndex())){
            				case (int)0: {
HXLINE(3973)					Float dx = ::Math_obj::tan((::Math_obj::atan2(this->m_sinA,((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y))) * ((Float)0.25)));
HXDLIN(3973)					::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3973)					_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x - (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
HXDLIN(3973)					::Array< ::Dynamic> _hx_tmp1 = this->m_destPoly;
HXDLIN(3973)					_hx_tmp1->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y - (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
            				}
            				break;
            				case (int)1: {
HXLINE(3974)					Float a = ::Math_obj::atan2(this->m_sinA,((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y)));
HXDLIN(3974)					Float f;
HXDLIN(3974)					if ((a < 0)) {
HXLINE(3974)						f = -(a);
            					}
            					else {
HXLINE(3974)						f = a;
            					}
HXDLIN(3974)					int a1 = ::Math_obj::round((this->m_StepsPerRad * f));
HXDLIN(3974)					int steps;
HXDLIN(3974)					if ((a1 < 1)) {
HXLINE(3974)						steps = 1;
            					}
            					else {
HXLINE(3974)						steps = a1;
            					}
HXDLIN(3974)					Float X = this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x;
HXDLIN(3974)					Float Y = this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y;
HXDLIN(3974)					Float X2;
HXDLIN(3974)					{
HXLINE(3974)						int _g = 0;
HXDLIN(3974)						int _g1 = steps;
HXDLIN(3974)						while((_g < _g1)){
HXLINE(3974)							_g = (_g + 1);
HXDLIN(3974)							int i = (_g - 1);
HXDLIN(3974)							::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3974)							_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (X * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (Y * this->m_delta)))));
HXDLIN(3974)							X2 = X;
HXDLIN(3974)							X = ((X * this->m_cos) - (this->m_sin * Y));
HXDLIN(3974)							Y = ((X2 * this->m_sin) + (Y * this->m_cos));
            						}
            					}
HXDLIN(3974)					::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3974)					_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * this->m_delta)))));
            				}
            				break;
            				case (int)2: {
HXLINE(3969)					Float r = (1 + ((this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y)));
HXLINE(3970)					if ((r >= this->m_miterLim)) {
HXLINE(3971)						Float q = (this->m_delta / r);
HXDLIN(3971)						::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3971)						_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + ((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x + this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) * q))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + ((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y + this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y) * q)))));
            					}
            					else {
HXLINE(3972)						Float dx = ::Math_obj::tan((::Math_obj::atan2(this->m_sinA,((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y))) * ((Float)0.25)));
HXDLIN(3972)						::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3972)						_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x - (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
HXDLIN(3972)						::Array< ::Dynamic> _hx_tmp1 = this->m_destPoly;
HXDLIN(3972)						_hx_tmp1->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y - (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
            					}
            				}
            				break;
            			}
            		}
HXLINE(3977)		return j;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ClipperOffset_obj,offsetPoint,return )

void ClipperOffset_obj::doSquare(int j,int k){
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3982_doSquare)
HXLINE(3983)		Float dx = ::Math_obj::tan((::Math_obj::atan2(this->m_sinA,((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y))) * ((Float)0.25)));
HXLINE(3984)		::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3984)		_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x - (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
HXLINE(3985)		::Array< ::Dynamic> _hx_tmp1 = this->m_destPoly;
HXDLIN(3985)		_hx_tmp1->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_delta * (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * dx))))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_delta * (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y - (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * dx)))))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperOffset_obj,doSquare,(void))

void ClipperOffset_obj::doMiter(int j,int k,Float r){
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3990_doMiter)
HXLINE(3991)		Float q = (this->m_delta / r);
HXLINE(3992)		::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(3992)		_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + ((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x + this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) * q))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + ((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y + this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y) * q)))));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ClipperOffset_obj,doMiter,(void))

void ClipperOffset_obj::doRound(int j,int k){
            	HX_GC_STACKFRAME(&_hx_pos_d03fb8c6d1579803_3997_doRound)
HXLINE(3998)		Float a = ::Math_obj::atan2(this->m_sinA,((this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x) + (this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y * this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y)));
HXLINE(3999)		Float f;
HXDLIN(3999)		if ((a < 0)) {
HXLINE(3999)			f = -(a);
            		}
            		else {
HXLINE(3999)			f = a;
            		}
HXDLIN(3999)		int a1 = ::Math_obj::round((this->m_StepsPerRad * f));
HXDLIN(3999)		int steps;
HXDLIN(3999)		if ((a1 < 1)) {
HXLINE(3999)			steps = 1;
            		}
            		else {
HXLINE(3999)			steps = a1;
            		}
HXLINE(4001)		Float X = this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->x;
HXDLIN(4001)		Float Y = this->m_normals->__get(k).StaticCast<  ::h2d::col::Point >()->y;
HXDLIN(4001)		Float X2;
HXLINE(4002)		{
HXLINE(4002)			int _g = 0;
HXDLIN(4002)			int _g1 = steps;
HXDLIN(4002)			while((_g < _g1)){
HXLINE(4002)				_g = (_g + 1);
HXDLIN(4002)				int i = (_g - 1);
HXLINE(4003)				::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(4003)				_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (X * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (Y * this->m_delta)))));
HXLINE(4004)				X2 = X;
HXLINE(4005)				X = ((X * this->m_cos) - (this->m_sin * Y));
HXLINE(4006)				Y = ((X2 * this->m_sin) + (Y * this->m_cos));
            			}
            		}
HXLINE(4008)		::Array< ::Dynamic> _hx_tmp = this->m_destPoly;
HXDLIN(4008)		_hx_tmp->push( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->x + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->x * this->m_delta))),::Math_obj::round((this->m_srcPoly->__get(j).StaticCast<  ::h2d::col::IPoint >()->y + (this->m_normals->__get(j).StaticCast<  ::h2d::col::Point >()->y * this->m_delta)))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClipperOffset_obj,doRound,(void))


::hx::ObjectPtr< ClipperOffset_obj > ClipperOffset_obj::__new(::hx::Null< Float >  __o_miterLimit,::hx::Null< Float >  __o_arcTolerance) {
	::hx::ObjectPtr< ClipperOffset_obj > __this = new ClipperOffset_obj();
	__this->__construct(__o_miterLimit,__o_arcTolerance);
	return __this;
}

::hx::ObjectPtr< ClipperOffset_obj > ClipperOffset_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_miterLimit,::hx::Null< Float >  __o_arcTolerance) {
	ClipperOffset_obj *__this = (ClipperOffset_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClipperOffset_obj), true, "hxd.clipper.ClipperOffset"));
	*(void **)__this = ClipperOffset_obj::_hx_vtable;
	__this->__construct(__o_miterLimit,__o_arcTolerance);
	return __this;
}

ClipperOffset_obj::ClipperOffset_obj()
{
}

void ClipperOffset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClipperOffset);
	HX_MARK_MEMBER_NAME(m_destPolys,"m_destPolys");
	HX_MARK_MEMBER_NAME(m_srcPoly,"m_srcPoly");
	HX_MARK_MEMBER_NAME(m_destPoly,"m_destPoly");
	HX_MARK_MEMBER_NAME(m_normals,"m_normals");
	HX_MARK_MEMBER_NAME(m_delta,"m_delta");
	HX_MARK_MEMBER_NAME(m_sinA,"m_sinA");
	HX_MARK_MEMBER_NAME(m_sin,"m_sin");
	HX_MARK_MEMBER_NAME(m_cos,"m_cos");
	HX_MARK_MEMBER_NAME(m_miterLim,"m_miterLim");
	HX_MARK_MEMBER_NAME(m_StepsPerRad,"m_StepsPerRad");
	HX_MARK_MEMBER_NAME(m_lowest,"m_lowest");
	HX_MARK_MEMBER_NAME(m_polyNodes,"m_polyNodes");
	HX_MARK_MEMBER_NAME(ArcTolerance,"ArcTolerance");
	HX_MARK_MEMBER_NAME(MiterLimit,"MiterLimit");
	HX_MARK_MEMBER_NAME(resultKind,"resultKind");
	HX_MARK_MEMBER_NAME(def_arc_tolerance,"def_arc_tolerance");
	HX_MARK_MEMBER_NAME(two_pi,"two_pi");
	HX_MARK_END_CLASS();
}

void ClipperOffset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_destPolys,"m_destPolys");
	HX_VISIT_MEMBER_NAME(m_srcPoly,"m_srcPoly");
	HX_VISIT_MEMBER_NAME(m_destPoly,"m_destPoly");
	HX_VISIT_MEMBER_NAME(m_normals,"m_normals");
	HX_VISIT_MEMBER_NAME(m_delta,"m_delta");
	HX_VISIT_MEMBER_NAME(m_sinA,"m_sinA");
	HX_VISIT_MEMBER_NAME(m_sin,"m_sin");
	HX_VISIT_MEMBER_NAME(m_cos,"m_cos");
	HX_VISIT_MEMBER_NAME(m_miterLim,"m_miterLim");
	HX_VISIT_MEMBER_NAME(m_StepsPerRad,"m_StepsPerRad");
	HX_VISIT_MEMBER_NAME(m_lowest,"m_lowest");
	HX_VISIT_MEMBER_NAME(m_polyNodes,"m_polyNodes");
	HX_VISIT_MEMBER_NAME(ArcTolerance,"ArcTolerance");
	HX_VISIT_MEMBER_NAME(MiterLimit,"MiterLimit");
	HX_VISIT_MEMBER_NAME(resultKind,"resultKind");
	HX_VISIT_MEMBER_NAME(def_arc_tolerance,"def_arc_tolerance");
	HX_VISIT_MEMBER_NAME(two_pi,"two_pi");
}

::hx::Val ClipperOffset_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"m_sin") ) { return ::hx::Val( m_sin ); }
		if (HX_FIELD_EQ(inName,"m_cos") ) { return ::hx::Val( m_cos ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_sinA") ) { return ::hx::Val( m_sinA ); }
		if (HX_FIELD_EQ(inName,"two_pi") ) { return ::hx::Val( two_pi ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_delta") ) { return ::hx::Val( m_delta ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		if (HX_FIELD_EQ(inName,"doMiter") ) { return ::hx::Val( doMiter_dyn() ); }
		if (HX_FIELD_EQ(inName,"doRound") ) { return ::hx::Val( doRound_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_lowest") ) { return ::hx::Val( m_lowest ); }
		if (HX_FIELD_EQ(inName,"doOffset") ) { return ::hx::Val( doOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"doSquare") ) { return ::hx::Val( doSquare_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_srcPoly") ) { return ::hx::Val( m_srcPoly ); }
		if (HX_FIELD_EQ(inName,"m_normals") ) { return ::hx::Val( m_normals ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_destPoly") ) { return ::hx::Val( m_destPoly ); }
		if (HX_FIELD_EQ(inName,"m_miterLim") ) { return ::hx::Val( m_miterLim ); }
		if (HX_FIELD_EQ(inName,"MiterLimit") ) { return ::hx::Val( MiterLimit ); }
		if (HX_FIELD_EQ(inName,"resultKind") ) { return ::hx::Val( resultKind ); }
		if (HX_FIELD_EQ(inName,"addPolygon") ) { return ::hx::Val( addPolygon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_destPolys") ) { return ::hx::Val( m_destPolys ); }
		if (HX_FIELD_EQ(inName,"m_polyNodes") ) { return ::hx::Val( m_polyNodes ); }
		if (HX_FIELD_EQ(inName,"addPolygons") ) { return ::hx::Val( addPolygons_dyn() ); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return ::hx::Val( offsetPoint_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ArcTolerance") ) { return ::hx::Val( ArcTolerance ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_StepsPerRad") ) { return ::hx::Val( m_StepsPerRad ); }
		if (HX_FIELD_EQ(inName,"getUnitNormal") ) { return ::hx::Val( getUnitNormal_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fixOrientations") ) { return ::hx::Val( fixOrientations_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"def_arc_tolerance") ) { return ::hx::Val( def_arc_tolerance ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClipperOffset_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"m_sin") ) { m_sin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_cos") ) { m_cos=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_sinA") ) { m_sinA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"two_pi") ) { two_pi=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_delta") ) { m_delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_lowest") ) { m_lowest=inValue.Cast<  ::h2d::col::IPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_srcPoly") ) { m_srcPoly=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_normals") ) { m_normals=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_destPoly") ) { m_destPoly=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_miterLim") ) { m_miterLim=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MiterLimit") ) { MiterLimit=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resultKind") ) { resultKind=inValue.Cast<  ::hxd::clipper::ResultKind >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_destPolys") ) { m_destPolys=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_polyNodes") ) { m_polyNodes=inValue.Cast<  ::hxd::clipper::_Clipper::PolyNode >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ArcTolerance") ) { ArcTolerance=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_StepsPerRad") ) { m_StepsPerRad=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"def_arc_tolerance") ) { def_arc_tolerance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClipperOffset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("m_destPolys",53,d9,d3,9a));
	outFields->push(HX_("m_srcPoly",3e,a2,36,83));
	outFields->push(HX_("m_destPoly",20,e3,b2,e1));
	outFields->push(HX_("m_normals",5a,7f,5c,36));
	outFields->push(HX_("m_delta",66,bf,b1,87));
	outFields->push(HX_("m_sinA",7b,06,4b,94));
	outFields->push(HX_("m_sin",06,1f,d0,01));
	outFields->push(HX_("m_cos",35,00,c4,01));
	outFields->push(HX_("m_miterLim",9d,19,86,64));
	outFields->push(HX_("m_StepsPerRad",cd,3d,ed,5f));
	outFields->push(HX_("m_lowest",04,71,ec,2f));
	outFields->push(HX_("m_polyNodes",b3,7c,fc,6f));
	outFields->push(HX_("ArcTolerance",7b,10,c2,46));
	outFields->push(HX_("MiterLimit",16,61,1b,4b));
	outFields->push(HX_("resultKind",d1,a8,49,b8));
	outFields->push(HX_("def_arc_tolerance",66,6a,22,72));
	outFields->push(HX_("two_pi",0c,0a,bc,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClipperOffset_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ClipperOffset_obj,m_destPolys),HX_("m_destPolys",53,d9,d3,9a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ClipperOffset_obj,m_srcPoly),HX_("m_srcPoly",3e,a2,36,83)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ClipperOffset_obj,m_destPoly),HX_("m_destPoly",20,e3,b2,e1)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ClipperOffset_obj,m_normals),HX_("m_normals",5a,7f,5c,36)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,m_delta),HX_("m_delta",66,bf,b1,87)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,m_sinA),HX_("m_sinA",7b,06,4b,94)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,m_sin),HX_("m_sin",06,1f,d0,01)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,m_cos),HX_("m_cos",35,00,c4,01)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,m_miterLim),HX_("m_miterLim",9d,19,86,64)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,m_StepsPerRad),HX_("m_StepsPerRad",cd,3d,ed,5f)},
	{::hx::fsObject /*  ::h2d::col::IPoint */ ,(int)offsetof(ClipperOffset_obj,m_lowest),HX_("m_lowest",04,71,ec,2f)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::PolyNode */ ,(int)offsetof(ClipperOffset_obj,m_polyNodes),HX_("m_polyNodes",b3,7c,fc,6f)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,ArcTolerance),HX_("ArcTolerance",7b,10,c2,46)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,MiterLimit),HX_("MiterLimit",16,61,1b,4b)},
	{::hx::fsObject /*  ::hxd::clipper::ResultKind */ ,(int)offsetof(ClipperOffset_obj,resultKind),HX_("resultKind",d1,a8,49,b8)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,def_arc_tolerance),HX_("def_arc_tolerance",66,6a,22,72)},
	{::hx::fsFloat,(int)offsetof(ClipperOffset_obj,two_pi),HX_("two_pi",0c,0a,bc,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClipperOffset_obj_sStaticStorageInfo = 0;
#endif

static ::String ClipperOffset_obj_sMemberFields[] = {
	HX_("m_destPolys",53,d9,d3,9a),
	HX_("m_srcPoly",3e,a2,36,83),
	HX_("m_destPoly",20,e3,b2,e1),
	HX_("m_normals",5a,7f,5c,36),
	HX_("m_delta",66,bf,b1,87),
	HX_("m_sinA",7b,06,4b,94),
	HX_("m_sin",06,1f,d0,01),
	HX_("m_cos",35,00,c4,01),
	HX_("m_miterLim",9d,19,86,64),
	HX_("m_StepsPerRad",cd,3d,ed,5f),
	HX_("m_lowest",04,71,ec,2f),
	HX_("m_polyNodes",b3,7c,fc,6f),
	HX_("ArcTolerance",7b,10,c2,46),
	HX_("MiterLimit",16,61,1b,4b),
	HX_("resultKind",d1,a8,49,b8),
	HX_("def_arc_tolerance",66,6a,22,72),
	HX_("two_pi",0c,0a,bc,2f),
	HX_("clear",8d,71,5b,48),
	HX_("addPolygon",59,2e,1b,7a),
	HX_("addPolygons",fa,5f,ad,5d),
	HX_("fixOrientations",18,01,b8,f0),
	HX_("getUnitNormal",01,c8,9e,94),
	HX_("doOffset",7e,1d,57,f4),
	HX_("execute",35,0a,0d,cc),
	HX_("offsetPoint",bd,37,10,5f),
	HX_("doSquare",88,86,09,ed),
	HX_("doMiter",7a,e0,99,3b),
	HX_("doRound",c3,d8,92,20),
	::String(null()) };

::hx::Class ClipperOffset_obj::__mClass;

void ClipperOffset_obj::__register()
{
	ClipperOffset_obj _hx_dummy;
	ClipperOffset_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper.ClipperOffset",a5,5a,ec,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClipperOffset_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClipperOffset_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClipperOffset_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClipperOffset_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
