#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_hxd_clipper_PolyType
#include <hxd/clipper/PolyType.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_EdgeSide
#include <hxd/clipper/_Clipper/EdgeSide.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_TEdge
#include <hxd/clipper/_Clipper/TEdge.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb3ab51998363ff3_220_new,"hxd.clipper._Clipper.TEdge","new",0x281cfbbe,"hxd.clipper._Clipper.TEdge.new","hxd/clipper/Clipper.hx",220,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3ab51998363ff3_200_get_top,"hxd.clipper._Clipper.TEdge","get_top",0xc1b2618a,"hxd.clipper._Clipper.TEdge.get_top","hxd/clipper/Clipper.hx",200,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3ab51998363ff3_201_get_bot,"hxd.clipper._Clipper.TEdge","get_bot",0xc1a4b8fc,"hxd.clipper._Clipper.TEdge.get_bot","hxd/clipper/Clipper.hx",201,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3ab51998363ff3_202_get_curr,"hxd.clipper._Clipper.TEdge","get_curr",0xaf2ae65d,"hxd.clipper._Clipper.TEdge.get_curr","hxd/clipper/Clipper.hx",202,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3ab51998363ff3_204_set_top,"hxd.clipper._Clipper.TEdge","set_top",0xb4b3f296,"hxd.clipper._Clipper.TEdge.set_top","hxd/clipper/Clipper.hx",204,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3ab51998363ff3_209_set_bot,"hxd.clipper._Clipper.TEdge","set_bot",0xb4a64a08,"hxd.clipper._Clipper.TEdge.set_bot","hxd/clipper/Clipper.hx",209,0x0569880e)
HX_LOCAL_STACK_FRAME(_hx_pos_bb3ab51998363ff3_214_set_curr,"hxd.clipper._Clipper.TEdge","set_curr",0x5d883fd1,"hxd.clipper._Clipper.TEdge.set_curr","hxd/clipper/Clipper.hx",214,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void TEdge_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bb3ab51998363ff3_220_new)
            	}

Dynamic TEdge_obj::__CreateEmpty() { return new TEdge_obj; }

void *TEdge_obj::_hx_vtable = 0;

Dynamic TEdge_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TEdge_obj > _hx_result = new TEdge_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TEdge_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1519572a;
}

 ::h2d::col::IPoint TEdge_obj::get_top(){
            	HX_GC_STACKFRAME(&_hx_pos_bb3ab51998363ff3_200_get_top)
HXDLIN( 200)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,this->topX,this->topY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TEdge_obj,get_top,return )

 ::h2d::col::IPoint TEdge_obj::get_bot(){
            	HX_GC_STACKFRAME(&_hx_pos_bb3ab51998363ff3_201_get_bot)
HXDLIN( 201)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,this->botX,this->botY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TEdge_obj,get_bot,return )

 ::h2d::col::IPoint TEdge_obj::get_curr(){
            	HX_GC_STACKFRAME(&_hx_pos_bb3ab51998363ff3_202_get_curr)
HXDLIN( 202)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,this->currX,this->currY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TEdge_obj,get_curr,return )

 ::h2d::col::IPoint TEdge_obj::set_top( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_bb3ab51998363ff3_204_set_top)
HXLINE( 205)		this->topX = p->x;
HXLINE( 206)		this->topY = p->y;
HXLINE( 207)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TEdge_obj,set_top,return )

 ::h2d::col::IPoint TEdge_obj::set_bot( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_bb3ab51998363ff3_209_set_bot)
HXLINE( 210)		this->botX = p->x;
HXLINE( 211)		this->botY = p->y;
HXLINE( 212)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TEdge_obj,set_bot,return )

 ::h2d::col::IPoint TEdge_obj::set_curr( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_bb3ab51998363ff3_214_set_curr)
HXLINE( 215)		this->currX = p->x;
HXLINE( 216)		this->currY = p->y;
HXLINE( 217)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TEdge_obj,set_curr,return )


::hx::ObjectPtr< TEdge_obj > TEdge_obj::__new() {
	::hx::ObjectPtr< TEdge_obj > __this = new TEdge_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TEdge_obj > TEdge_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TEdge_obj *__this = (TEdge_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TEdge_obj), true, "hxd.clipper._Clipper.TEdge"));
	*(void **)__this = TEdge_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TEdge_obj::TEdge_obj()
{
}

void TEdge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TEdge);
	HX_MARK_MEMBER_NAME(botX,"botX");
	HX_MARK_MEMBER_NAME(botY,"botY");
	HX_MARK_MEMBER_NAME(currX,"currX");
	HX_MARK_MEMBER_NAME(currY,"currY");
	HX_MARK_MEMBER_NAME(topX,"topX");
	HX_MARK_MEMBER_NAME(topY,"topY");
	HX_MARK_MEMBER_NAME(deltaX,"deltaX");
	HX_MARK_MEMBER_NAME(deltaY,"deltaY");
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(polyType,"polyType");
	HX_MARK_MEMBER_NAME(side,"side");
	HX_MARK_MEMBER_NAME(windDelta,"windDelta");
	HX_MARK_MEMBER_NAME(windCnt,"windCnt");
	HX_MARK_MEMBER_NAME(windCnt2,"windCnt2");
	HX_MARK_MEMBER_NAME(outIdx,"outIdx");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(nextInLML,"nextInLML");
	HX_MARK_MEMBER_NAME(nextInAEL,"nextInAEL");
	HX_MARK_MEMBER_NAME(prevInAEL,"prevInAEL");
	HX_MARK_MEMBER_NAME(nextInSEL,"nextInSEL");
	HX_MARK_MEMBER_NAME(prevInSEL,"prevInSEL");
	HX_MARK_END_CLASS();
}

void TEdge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(botX,"botX");
	HX_VISIT_MEMBER_NAME(botY,"botY");
	HX_VISIT_MEMBER_NAME(currX,"currX");
	HX_VISIT_MEMBER_NAME(currY,"currY");
	HX_VISIT_MEMBER_NAME(topX,"topX");
	HX_VISIT_MEMBER_NAME(topY,"topY");
	HX_VISIT_MEMBER_NAME(deltaX,"deltaX");
	HX_VISIT_MEMBER_NAME(deltaY,"deltaY");
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(polyType,"polyType");
	HX_VISIT_MEMBER_NAME(side,"side");
	HX_VISIT_MEMBER_NAME(windDelta,"windDelta");
	HX_VISIT_MEMBER_NAME(windCnt,"windCnt");
	HX_VISIT_MEMBER_NAME(windCnt2,"windCnt2");
	HX_VISIT_MEMBER_NAME(outIdx,"outIdx");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(nextInLML,"nextInLML");
	HX_VISIT_MEMBER_NAME(nextInAEL,"nextInAEL");
	HX_VISIT_MEMBER_NAME(prevInAEL,"prevInAEL");
	HX_VISIT_MEMBER_NAME(nextInSEL,"nextInSEL");
	HX_VISIT_MEMBER_NAME(prevInSEL,"prevInSEL");
}

::hx::Val TEdge_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return ::hx::Val( dx ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		if (HX_FIELD_EQ(inName,"bot") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bot() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"botX") ) { return ::hx::Val( botX ); }
		if (HX_FIELD_EQ(inName,"botY") ) { return ::hx::Val( botY ); }
		if (HX_FIELD_EQ(inName,"topX") ) { return ::hx::Val( topX ); }
		if (HX_FIELD_EQ(inName,"topY") ) { return ::hx::Val( topY ); }
		if (HX_FIELD_EQ(inName,"side") ) { return ::hx::Val( side ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"prev") ) { return ::hx::Val( prev ); }
		if (HX_FIELD_EQ(inName,"curr") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_curr() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"currX") ) { return ::hx::Val( currX ); }
		if (HX_FIELD_EQ(inName,"currY") ) { return ::hx::Val( currY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"deltaX") ) { return ::hx::Val( deltaX ); }
		if (HX_FIELD_EQ(inName,"deltaY") ) { return ::hx::Val( deltaY ); }
		if (HX_FIELD_EQ(inName,"outIdx") ) { return ::hx::Val( outIdx ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"windCnt") ) { return ::hx::Val( windCnt ); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bot") ) { return ::hx::Val( get_bot_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bot") ) { return ::hx::Val( set_bot_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"polyType") ) { return ::hx::Val( polyType ); }
		if (HX_FIELD_EQ(inName,"windCnt2") ) { return ::hx::Val( windCnt2 ); }
		if (HX_FIELD_EQ(inName,"get_curr") ) { return ::hx::Val( get_curr_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_curr") ) { return ::hx::Val( set_curr_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"windDelta") ) { return ::hx::Val( windDelta ); }
		if (HX_FIELD_EQ(inName,"nextInLML") ) { return ::hx::Val( nextInLML ); }
		if (HX_FIELD_EQ(inName,"nextInAEL") ) { return ::hx::Val( nextInAEL ); }
		if (HX_FIELD_EQ(inName,"prevInAEL") ) { return ::hx::Val( prevInAEL ); }
		if (HX_FIELD_EQ(inName,"nextInSEL") ) { return ::hx::Val( nextInSEL ); }
		if (HX_FIELD_EQ(inName,"prevInSEL") ) { return ::hx::Val( prevInSEL ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TEdge_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast<  ::h2d::col::IPoint >()) ); }
		if (HX_FIELD_EQ(inName,"bot") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bot(inValue.Cast<  ::h2d::col::IPoint >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"botX") ) { botX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"botY") ) { botY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"topX") ) { topX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"topY") ) { topY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"side") ) { side=inValue.Cast<  ::hxd::clipper::_Clipper::EdgeSide >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curr") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_curr(inValue.Cast<  ::h2d::col::IPoint >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"currX") ) { currX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currY") ) { currY=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"deltaX") ) { deltaX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deltaY") ) { deltaY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outIdx") ) { outIdx=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"windCnt") ) { windCnt=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"polyType") ) { polyType=inValue.Cast<  ::hxd::clipper::PolyType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windCnt2") ) { windCnt2=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"windDelta") ) { windDelta=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextInLML") ) { nextInLML=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextInAEL") ) { nextInAEL=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevInAEL") ) { prevInAEL=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextInSEL") ) { nextInSEL=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevInSEL") ) { prevInSEL=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TEdge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("botX",71,88,1b,41));
	outFields->push(HX_("botY",72,88,1b,41));
	outFields->push(HX_("currX",26,49,58,4e));
	outFields->push(HX_("currY",27,49,58,4e));
	outFields->push(HX_("topX",23,5c,01,4d));
	outFields->push(HX_("topY",24,5c,01,4d));
	outFields->push(HX_("deltaX",60,11,e4,6a));
	outFields->push(HX_("deltaY",61,11,e4,6a));
	outFields->push(HX_("dx",94,57,00,00));
	outFields->push(HX_("polyType",26,b3,c9,1f));
	outFields->push(HX_("side",97,8d,53,4c));
	outFields->push(HX_("windDelta",10,12,26,c8));
	outFields->push(HX_("windCnt",81,73,53,e8));
	outFields->push(HX_("windCnt2",91,9d,b1,60));
	outFields->push(HX_("outIdx",4f,68,63,0c));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("prev",f3,be,5e,4a));
	outFields->push(HX_("nextInLML",f3,69,47,65));
	outFields->push(HX_("nextInAEL",30,0a,3f,65));
	outFields->push(HX_("prevInAEL",30,90,50,a9));
	outFields->push(HX_("nextInSEL",c2,b2,4c,65));
	outFields->push(HX_("prevInSEL",c2,38,5e,a9));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("bot",07,be,4a,00));
	outFields->push(HX_("curr",f2,4a,c9,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TEdge_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TEdge_obj,botX),HX_("botX",71,88,1b,41)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,botY),HX_("botY",72,88,1b,41)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,currX),HX_("currX",26,49,58,4e)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,currY),HX_("currY",27,49,58,4e)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,topX),HX_("topX",23,5c,01,4d)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,topY),HX_("topY",24,5c,01,4d)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,deltaX),HX_("deltaX",60,11,e4,6a)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,deltaY),HX_("deltaY",61,11,e4,6a)},
	{::hx::fsFloat,(int)offsetof(TEdge_obj,dx),HX_("dx",94,57,00,00)},
	{::hx::fsObject /*  ::hxd::clipper::PolyType */ ,(int)offsetof(TEdge_obj,polyType),HX_("polyType",26,b3,c9,1f)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::EdgeSide */ ,(int)offsetof(TEdge_obj,side),HX_("side",97,8d,53,4c)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,windDelta),HX_("windDelta",10,12,26,c8)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,windCnt),HX_("windCnt",81,73,53,e8)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,windCnt2),HX_("windCnt2",91,9d,b1,60)},
	{::hx::fsInt,(int)offsetof(TEdge_obj,outIdx),HX_("outIdx",4f,68,63,0c)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(TEdge_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(TEdge_obj,prev),HX_("prev",f3,be,5e,4a)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(TEdge_obj,nextInLML),HX_("nextInLML",f3,69,47,65)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(TEdge_obj,nextInAEL),HX_("nextInAEL",30,0a,3f,65)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(TEdge_obj,prevInAEL),HX_("prevInAEL",30,90,50,a9)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(TEdge_obj,nextInSEL),HX_("nextInSEL",c2,b2,4c,65)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(TEdge_obj,prevInSEL),HX_("prevInSEL",c2,38,5e,a9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TEdge_obj_sStaticStorageInfo = 0;
#endif

static ::String TEdge_obj_sMemberFields[] = {
	HX_("botX",71,88,1b,41),
	HX_("botY",72,88,1b,41),
	HX_("currX",26,49,58,4e),
	HX_("currY",27,49,58,4e),
	HX_("topX",23,5c,01,4d),
	HX_("topY",24,5c,01,4d),
	HX_("deltaX",60,11,e4,6a),
	HX_("deltaY",61,11,e4,6a),
	HX_("dx",94,57,00,00),
	HX_("polyType",26,b3,c9,1f),
	HX_("side",97,8d,53,4c),
	HX_("windDelta",10,12,26,c8),
	HX_("windCnt",81,73,53,e8),
	HX_("windCnt2",91,9d,b1,60),
	HX_("outIdx",4f,68,63,0c),
	HX_("next",f3,84,02,49),
	HX_("prev",f3,be,5e,4a),
	HX_("nextInLML",f3,69,47,65),
	HX_("nextInAEL",30,0a,3f,65),
	HX_("prevInAEL",30,90,50,a9),
	HX_("nextInSEL",c2,b2,4c,65),
	HX_("prevInSEL",c2,38,5e,a9),
	HX_("get_top",2c,2f,cd,26),
	HX_("get_bot",9e,86,bf,26),
	HX_("get_curr",7b,06,84,c1),
	HX_("set_top",38,c0,ce,19),
	HX_("set_bot",aa,17,c1,19),
	HX_("set_curr",ef,5f,e1,6f),
	::String(null()) };

::hx::Class TEdge_obj::__mClass;

void TEdge_obj::__register()
{
	TEdge_obj _hx_dummy;
	TEdge_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.TEdge",cc,04,d1,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TEdge_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TEdge_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TEdge_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TEdge_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
