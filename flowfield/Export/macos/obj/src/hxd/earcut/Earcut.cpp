#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_GPoint
#include <h2d/GPoint.h>
#endif
#ifndef INCLUDED_h2d_col_Point
#include <h2d/col/Point.h>
#endif
#ifndef INCLUDED_hxd_earcut_EarNode
#include <hxd/earcut/EarNode.h>
#endif
#ifndef INCLUDED_hxd_earcut_Earcut
#include <hxd/earcut/Earcut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_15e51383b16a04e2_31_new,"hxd.earcut.Earcut","new",0x0bdabca6,"hxd.earcut.Earcut.new","hxd/earcut/Earcut.hx",31,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_34_triangulate_h2d_GPoint,"hxd.earcut.Earcut","triangulate_h2d_GPoint",0x335b93fb,"hxd.earcut.Earcut.triangulate_h2d_GPoint","hxd/earcut/Earcut.hx",34,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_34_triangulate_h2d_col_Point,"hxd.earcut.Earcut","triangulate_h2d_col_Point",0x21f8bd7f,"hxd.earcut.Earcut.triangulate_h2d_col_Point","hxd/earcut/Earcut.hx",34,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_124_eliminateHoles_triangulate_T,"hxd.earcut.Earcut","eliminateHoles_triangulate_T",0xd24fbcad,"hxd.earcut.Earcut.eliminateHoles_triangulate_T","hxd/earcut/Earcut.hx",124,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_90_setLinkedList_eliminateHoles_T,"hxd.earcut.Earcut","setLinkedList_eliminateHoles_T",0xcf23e966,"hxd.earcut.Earcut.setLinkedList_eliminateHoles_T","hxd/earcut/Earcut.hx",90,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_90_setLinkedList_triangulate_T,"hxd.earcut.Earcut","setLinkedList_triangulate_T",0x64cfbda1,"hxd.earcut.Earcut.setLinkedList_triangulate_T","hxd/earcut/Earcut.hx",90,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_48_triangulateNode,"hxd.earcut.Earcut","triangulateNode",0x4113de94,"hxd.earcut.Earcut.triangulateNode","hxd/earcut/Earcut.hx",48,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_147_eliminateHole,"hxd.earcut.Earcut","eliminateHole",0xc6778b88,"hxd.earcut.Earcut.eliminateHole","hxd/earcut/Earcut.hx",147,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_156_findHoleBridge,"hxd.earcut.Earcut","findHoleBridge",0xcf9410fc,"hxd.earcut.Earcut.findHoleBridge","hxd/earcut/Earcut.hx",156,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_201_getLeftmost,"hxd.earcut.Earcut","getLeftmost",0xc6cc5d06,"hxd.earcut.Earcut.getLeftmost","hxd/earcut/Earcut.hx",201,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_213_compareX,"hxd.earcut.Earcut","compareX",0x1d694e0d,"hxd.earcut.Earcut.compareX","hxd/earcut/Earcut.hx",213,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_217_equals,"hxd.earcut.Earcut","equals",0x58cc71b9,"hxd.earcut.Earcut.equals","hxd/earcut/Earcut.hx",217,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_221_area,"hxd.earcut.Earcut","area",0x4afc5c87,"hxd.earcut.Earcut.area","hxd/earcut/Earcut.hx",221,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_225_intersects,"hxd.earcut.Earcut","intersects",0x1a258b2e,"hxd.earcut.Earcut.intersects","hxd/earcut/Earcut.hx",225,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_230_locallyInside,"hxd.earcut.Earcut","locallyInside",0x7161e69a,"hxd.earcut.Earcut.locallyInside","hxd/earcut/Earcut.hx",230,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_235_filterPoints,"hxd.earcut.Earcut","filterPoints",0x921e9af5,"hxd.earcut.Earcut.filterPoints","hxd/earcut/Earcut.hx",235,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_253_removeNode,"hxd.earcut.Earcut","removeNode",0xfc630ce0,"hxd.earcut.Earcut.removeNode","hxd/earcut/Earcut.hx",253,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_260_allocNode,"hxd.earcut.Earcut","allocNode",0xcc591ddd,"hxd.earcut.Earcut.allocNode","hxd/earcut/Earcut.hx",260,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_282_earcutLinked,"hxd.earcut.Earcut","earcutLinked",0xa4eb899f,"hxd.earcut.Earcut.earcutLinked","hxd/earcut/Earcut.hx",282,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_333_isEar,"hxd.earcut.Earcut","isEar",0xed9a2c92,"hxd.earcut.Earcut.isEar","hxd/earcut/Earcut.hx",333,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_352_isEarHashed,"hxd.earcut.Earcut","isEarHashed",0x74a3f1df,"hxd.earcut.Earcut.isEarHashed","hxd/earcut/Earcut.hx",352,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_393_cureLocalIntersections,"hxd.earcut.Earcut","cureLocalIntersections",0x6a8ec15e,"hxd.earcut.Earcut.cureLocalIntersections","hxd/earcut/Earcut.hx",393,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_419_splitEarcut,"hxd.earcut.Earcut","splitEarcut",0x483b2f6c,"hxd.earcut.Earcut.splitEarcut","hxd/earcut/Earcut.hx",419,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_446_splitPolygon,"hxd.earcut.Earcut","splitPolygon",0xe81209ba,"hxd.earcut.Earcut.splitPolygon","hxd/earcut/Earcut.hx",446,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_468_pointInTriangle,"hxd.earcut.Earcut","pointInTriangle",0x7b843d83,"hxd.earcut.Earcut.pointInTriangle","hxd/earcut/Earcut.hx",468,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_475_isValidDiagonal,"hxd.earcut.Earcut","isValidDiagonal",0xed16990d,"hxd.earcut.Earcut.isValidDiagonal","hxd/earcut/Earcut.hx",475,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_480_middleInside,"hxd.earcut.Earcut","middleInside",0x476c902b,"hxd.earcut.Earcut.middleInside","hxd/earcut/Earcut.hx",480,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_495_intersectsPolygon,"hxd.earcut.Earcut","intersectsPolygon",0x2f6480ec,"hxd.earcut.Earcut.intersectsPolygon","hxd/earcut/Earcut.hx",495,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_505_zOrder,"hxd.earcut.Earcut","zOrder",0x28b1e92e,"hxd.earcut.Earcut.zOrder","hxd/earcut/Earcut.hx",505,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_523_indexCurve,"hxd.earcut.Earcut","indexCurve",0x548588b7,"hxd.earcut.Earcut.indexCurve","hxd/earcut/Earcut.hx",523,0xef7e636a)
HX_LOCAL_STACK_FRAME(_hx_pos_15e51383b16a04e2_538_sortLinked,"hxd.earcut.Earcut","sortLinked",0x7fc42151,"hxd.earcut.Earcut.sortLinked","hxd/earcut/Earcut.hx",538,0xef7e636a)
namespace hxd{
namespace earcut{

void Earcut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_31_new)
            	}

Dynamic Earcut_obj::__CreateEmpty() { return new Earcut_obj; }

void *Earcut_obj::_hx_vtable = 0;

Dynamic Earcut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Earcut_obj > _hx_result = new Earcut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Earcut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1763238c;
}

::Array< int > Earcut_obj::triangulate_h2d_GPoint(::Array< ::Dynamic> points,::Array< int > holes){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_34_triangulate_h2d_GPoint)
HXLINE(  36)		bool hasHoles;
HXDLIN(  36)		if (::hx::IsNotNull( holes )) {
HXLINE(  36)			hasHoles = (holes->length > 0);
            		}
            		else {
HXLINE(  36)			hasHoles = false;
            		}
HXLINE(  37)		int outerLen;
HXDLIN(  37)		if (hasHoles) {
HXLINE(  37)			outerLen = holes->__get(0);
            		}
            		else {
HXLINE(  37)			outerLen = points->length;
            		}
HXLINE(  38)		if ((outerLen < 3)) {
HXLINE(  38)			return ::Array_obj< int >::__new(0);
            		}
HXLINE(  40)		 ::hxd::earcut::EarNode root = this->setLinkedList_triangulate_T(points,0,outerLen,true);
HXLINE(  42)		if (::hx::IsNotNull( holes )) {
HXLINE(  43)			root = this->eliminateHoles_triangulate_T(points,holes,root);
            		}
HXLINE(  45)		return this->triangulateNode(root,(points->length > 80));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,triangulate_h2d_GPoint,return )

::Array< int > Earcut_obj::triangulate_h2d_col_Point(::Array< ::Dynamic> points,::Array< int > holes){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_34_triangulate_h2d_col_Point)
HXLINE(  36)		bool hasHoles;
HXDLIN(  36)		if (::hx::IsNotNull( holes )) {
HXLINE(  36)			hasHoles = (holes->length > 0);
            		}
            		else {
HXLINE(  36)			hasHoles = false;
            		}
HXLINE(  37)		int outerLen;
HXDLIN(  37)		if (hasHoles) {
HXLINE(  37)			outerLen = holes->__get(0);
            		}
            		else {
HXLINE(  37)			outerLen = points->length;
            		}
HXLINE(  38)		if ((outerLen < 3)) {
HXLINE(  38)			return ::Array_obj< int >::__new(0);
            		}
HXLINE(  40)		 ::hxd::earcut::EarNode root = this->setLinkedList_triangulate_T(points,0,outerLen,true);
HXLINE(  42)		if (::hx::IsNotNull( holes )) {
HXLINE(  43)			root = this->eliminateHoles_triangulate_T(points,holes,root);
            		}
HXLINE(  45)		return this->triangulateNode(root,(points->length > 80));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,triangulate_h2d_col_Point,return )

 ::hxd::earcut::EarNode Earcut_obj::eliminateHoles_triangulate_T(::cpp::VirtualArray points,::Array< int > holes, ::hxd::earcut::EarNode root){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_124_eliminateHoles_triangulate_T)
HXLINE( 125)		::Array< ::Dynamic> queue = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 127)		{
HXLINE( 127)			int _g = 0;
HXDLIN( 127)			int _g1 = holes->length;
HXDLIN( 127)			while((_g < _g1)){
HXLINE( 127)				_g = (_g + 1);
HXDLIN( 127)				int i = (_g - 1);
HXLINE( 128)				int s = holes->__get(i);
HXLINE( 129)				int e;
HXDLIN( 129)				if ((i == (holes->length - 1))) {
HXLINE( 129)					e = points->get_length();
            				}
            				else {
HXLINE( 129)					e = holes->__get((i + 1));
            				}
HXLINE( 130)				 ::hxd::earcut::EarNode node = this->setLinkedList_eliminateHoles_T(points,s,e,false);
HXLINE( 131)				if (::hx::IsInstanceEq( node,node->next )) {
HXLINE( 131)					node->steiner = true;
            				}
HXLINE( 132)				queue->push(this->getLeftmost(node));
            			}
            		}
HXLINE( 135)		queue->sort(this->compareX_dyn());
HXLINE( 138)		{
HXLINE( 138)			int _g2 = 0;
HXDLIN( 138)			while((_g2 < queue->length)){
HXLINE( 138)				 ::hxd::earcut::EarNode q = queue->__get(_g2).StaticCast<  ::hxd::earcut::EarNode >();
HXDLIN( 138)				_g2 = (_g2 + 1);
HXLINE( 139)				this->eliminateHole(q,root);
HXLINE( 140)				root = this->filterPoints(root,root->next);
            			}
            		}
HXLINE( 143)		return root;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Earcut_obj,eliminateHoles_triangulate_T,return )

 ::hxd::earcut::EarNode Earcut_obj::setLinkedList_eliminateHoles_T(::cpp::VirtualArray points,int start,int end,bool clockwise){
            	HX_GC_STACKFRAME(&_hx_pos_15e51383b16a04e2_90_setLinkedList_eliminateHoles_T)
HXLINE(  93)		Float sum = ((Float)0.);
HXLINE(  94)		int j = (end - 1);
HXLINE(  95)		{
HXLINE(  95)			int _g = start;
HXDLIN(  95)			int _g1 = end;
HXDLIN(  95)			while((_g < _g1)){
HXLINE(  95)				_g = (_g + 1);
HXDLIN(  95)				int i = (_g - 1);
HXLINE(  96)				sum = (sum + ((( (Float)(points->__get(j)->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ) - ( (Float)(points->__get(i)->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) )) * ( (Float)((points->__get(i)->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) + points->__get(j)->__Field(HX_("y",79,00,00,00),::hx::paccDynamic))) )));
HXLINE(  97)				j = i;
            			}
            		}
HXLINE( 101)		 ::hxd::earcut::EarNode last = null();
HXDLIN( 101)		 ::hxd::earcut::EarNode n = this->cache;
HXDLIN( 101)		if (::hx::IsNull( n )) {
HXLINE( 101)			n =  ::hxd::earcut::EarNode_obj::__alloc( HX_CTX );
HXDLIN( 101)			n->allocNext = this->allocated;
HXDLIN( 101)			this->allocated = n;
            		}
            		else {
HXLINE( 101)			this->cache = n->next;
            		}
HXDLIN( 101)		n->i = -1;
HXDLIN( 101)		n->z = -1;
HXDLIN( 101)		n->x = ( (Float)(0) );
HXDLIN( 101)		n->y = ( (Float)(0) );
HXDLIN( 101)		n->next = null();
HXDLIN( 101)		n->prev = last;
HXDLIN( 101)		n->steiner = false;
HXDLIN( 101)		n->prevZ = null();
HXDLIN( 101)		n->nextZ = null();
HXDLIN( 101)		if (::hx::IsNotNull( last )) {
HXLINE( 101)			last->next = n;
            		}
HXDLIN( 101)		 ::hxd::earcut::EarNode node = n;
HXLINE( 102)		 ::hxd::earcut::EarNode first = node;
HXLINE( 103)		if ((clockwise == (sum > 0))) {
HXLINE( 104)			int _g = start;
HXDLIN( 104)			int _g1 = end;
HXDLIN( 104)			while((_g < _g1)){
HXLINE( 104)				_g = (_g + 1);
HXDLIN( 104)				int i = (_g - 1);
HXLINE( 105)				 ::Dynamic p = points->__get(i);
HXLINE( 106)				Float x = ( (Float)(p->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 106)				Float y = ( (Float)(p->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 106)				 ::hxd::earcut::EarNode n = this->cache;
HXDLIN( 106)				if (::hx::IsNull( n )) {
HXLINE( 106)					n =  ::hxd::earcut::EarNode_obj::__alloc( HX_CTX );
HXDLIN( 106)					n->allocNext = this->allocated;
HXDLIN( 106)					this->allocated = n;
            				}
            				else {
HXLINE( 106)					this->cache = n->next;
            				}
HXDLIN( 106)				n->i = i;
HXDLIN( 106)				n->z = -1;
HXDLIN( 106)				n->x = x;
HXDLIN( 106)				n->y = y;
HXDLIN( 106)				n->next = null();
HXDLIN( 106)				n->prev = node;
HXDLIN( 106)				n->steiner = false;
HXDLIN( 106)				n->prevZ = null();
HXDLIN( 106)				n->nextZ = null();
HXDLIN( 106)				if (::hx::IsNotNull( node )) {
HXLINE( 106)					node->next = n;
            				}
HXDLIN( 106)				node = n;
            			}
            		}
            		else {
HXLINE( 110)			int i = (end - 1);
HXLINE( 111)			while((i >= start)){
HXLINE( 112)				 ::Dynamic p = points->__get(i);
HXLINE( 113)				Float x = ( (Float)(p->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 113)				Float y = ( (Float)(p->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 113)				 ::hxd::earcut::EarNode n = this->cache;
HXDLIN( 113)				if (::hx::IsNull( n )) {
HXLINE( 113)					n =  ::hxd::earcut::EarNode_obj::__alloc( HX_CTX );
HXDLIN( 113)					n->allocNext = this->allocated;
HXDLIN( 113)					this->allocated = n;
            				}
            				else {
HXLINE( 113)					this->cache = n->next;
            				}
HXDLIN( 113)				n->i = i;
HXDLIN( 113)				n->z = -1;
HXDLIN( 113)				n->x = x;
HXDLIN( 113)				n->y = y;
HXDLIN( 113)				n->next = null();
HXDLIN( 113)				n->prev = node;
HXDLIN( 113)				n->steiner = false;
HXDLIN( 113)				n->prevZ = null();
HXDLIN( 113)				n->nextZ = null();
HXDLIN( 113)				if (::hx::IsNotNull( node )) {
HXLINE( 113)					node->next = n;
            				}
HXDLIN( 113)				node = n;
HXLINE( 114)				i = (i - 1);
            			}
            		}
HXLINE( 118)		node->next = first->next;
HXLINE( 119)		node->next->prev = node;
HXLINE( 120)		return node;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Earcut_obj,setLinkedList_eliminateHoles_T,return )

 ::hxd::earcut::EarNode Earcut_obj::setLinkedList_triangulate_T(::cpp::VirtualArray points,int start,int end,bool clockwise){
            	HX_GC_STACKFRAME(&_hx_pos_15e51383b16a04e2_90_setLinkedList_triangulate_T)
HXLINE(  93)		Float sum = ((Float)0.);
HXLINE(  94)		int j = (end - 1);
HXLINE(  95)		{
HXLINE(  95)			int _g = start;
HXDLIN(  95)			int _g1 = end;
HXDLIN(  95)			while((_g < _g1)){
HXLINE(  95)				_g = (_g + 1);
HXDLIN(  95)				int i = (_g - 1);
HXLINE(  96)				sum = (sum + ((( (Float)(points->__get(j)->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ) - ( (Float)(points->__get(i)->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) )) * ( (Float)((points->__get(i)->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) + points->__get(j)->__Field(HX_("y",79,00,00,00),::hx::paccDynamic))) )));
HXLINE(  97)				j = i;
            			}
            		}
HXLINE( 101)		 ::hxd::earcut::EarNode last = null();
HXDLIN( 101)		 ::hxd::earcut::EarNode n = this->cache;
HXDLIN( 101)		if (::hx::IsNull( n )) {
HXLINE( 101)			n =  ::hxd::earcut::EarNode_obj::__alloc( HX_CTX );
HXDLIN( 101)			n->allocNext = this->allocated;
HXDLIN( 101)			this->allocated = n;
            		}
            		else {
HXLINE( 101)			this->cache = n->next;
            		}
HXDLIN( 101)		n->i = -1;
HXDLIN( 101)		n->z = -1;
HXDLIN( 101)		n->x = ( (Float)(0) );
HXDLIN( 101)		n->y = ( (Float)(0) );
HXDLIN( 101)		n->next = null();
HXDLIN( 101)		n->prev = last;
HXDLIN( 101)		n->steiner = false;
HXDLIN( 101)		n->prevZ = null();
HXDLIN( 101)		n->nextZ = null();
HXDLIN( 101)		if (::hx::IsNotNull( last )) {
HXLINE( 101)			last->next = n;
            		}
HXDLIN( 101)		 ::hxd::earcut::EarNode node = n;
HXLINE( 102)		 ::hxd::earcut::EarNode first = node;
HXLINE( 103)		if ((clockwise == (sum > 0))) {
HXLINE( 104)			int _g = start;
HXDLIN( 104)			int _g1 = end;
HXDLIN( 104)			while((_g < _g1)){
HXLINE( 104)				_g = (_g + 1);
HXDLIN( 104)				int i = (_g - 1);
HXLINE( 105)				 ::Dynamic p = points->__get(i);
HXLINE( 106)				Float x = ( (Float)(p->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 106)				Float y = ( (Float)(p->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 106)				 ::hxd::earcut::EarNode n = this->cache;
HXDLIN( 106)				if (::hx::IsNull( n )) {
HXLINE( 106)					n =  ::hxd::earcut::EarNode_obj::__alloc( HX_CTX );
HXDLIN( 106)					n->allocNext = this->allocated;
HXDLIN( 106)					this->allocated = n;
            				}
            				else {
HXLINE( 106)					this->cache = n->next;
            				}
HXDLIN( 106)				n->i = i;
HXDLIN( 106)				n->z = -1;
HXDLIN( 106)				n->x = x;
HXDLIN( 106)				n->y = y;
HXDLIN( 106)				n->next = null();
HXDLIN( 106)				n->prev = node;
HXDLIN( 106)				n->steiner = false;
HXDLIN( 106)				n->prevZ = null();
HXDLIN( 106)				n->nextZ = null();
HXDLIN( 106)				if (::hx::IsNotNull( node )) {
HXLINE( 106)					node->next = n;
            				}
HXDLIN( 106)				node = n;
            			}
            		}
            		else {
HXLINE( 110)			int i = (end - 1);
HXLINE( 111)			while((i >= start)){
HXLINE( 112)				 ::Dynamic p = points->__get(i);
HXLINE( 113)				Float x = ( (Float)(p->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 113)				Float y = ( (Float)(p->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 113)				 ::hxd::earcut::EarNode n = this->cache;
HXDLIN( 113)				if (::hx::IsNull( n )) {
HXLINE( 113)					n =  ::hxd::earcut::EarNode_obj::__alloc( HX_CTX );
HXDLIN( 113)					n->allocNext = this->allocated;
HXDLIN( 113)					this->allocated = n;
            				}
            				else {
HXLINE( 113)					this->cache = n->next;
            				}
HXDLIN( 113)				n->i = i;
HXDLIN( 113)				n->z = -1;
HXDLIN( 113)				n->x = x;
HXDLIN( 113)				n->y = y;
HXDLIN( 113)				n->next = null();
HXDLIN( 113)				n->prev = node;
HXDLIN( 113)				n->steiner = false;
HXDLIN( 113)				n->prevZ = null();
HXDLIN( 113)				n->nextZ = null();
HXDLIN( 113)				if (::hx::IsNotNull( node )) {
HXLINE( 113)					node->next = n;
            				}
HXDLIN( 113)				node = n;
HXLINE( 114)				i = (i - 1);
            			}
            		}
HXLINE( 118)		node->next = first->next;
HXLINE( 119)		node->next->prev = node;
HXLINE( 120)		return node;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Earcut_obj,setLinkedList_triangulate_T,return )

::Array< int > Earcut_obj::triangulateNode( ::hxd::earcut::EarNode root,bool useZOrder){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_48_triangulateNode)
HXLINE(  49)		this->triangles = ::Array_obj< int >::__new(0);
HXLINE(  50)		root = this->filterPoints(root,null());
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if (useZOrder) {
HXLINE(  51)			_hx_tmp = ::hx::IsNotNull( root );
            		}
            		else {
HXLINE(  51)			_hx_tmp = false;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  52)			Float maxX = root->x;
HXLINE(  53)			this->minX = maxX;
HXLINE(  52)			Float maxY = root->y;
HXLINE(  54)			this->minY = maxY;
HXLINE(  55)			 ::hxd::earcut::EarNode p = root->next;
HXLINE(  56)			while(::hx::IsInstanceNotEq( p,root )){
HXLINE(  57)				Float x = p->x;
HXLINE(  58)				Float y = p->y;
HXLINE(  59)				if ((x < this->minX)) {
HXLINE(  59)					this->minX = x;
            				}
HXLINE(  60)				if ((y < this->minY)) {
HXLINE(  60)					this->minY = y;
            				}
HXLINE(  61)				if ((x > maxX)) {
HXLINE(  61)					maxX = x;
            				}
HXLINE(  62)				if ((y > maxY)) {
HXLINE(  62)					maxY = y;
            				}
HXLINE(  63)				p = p->next;
            			}
HXLINE(  66)			Float a = (maxX - this->minX);
HXDLIN(  66)			Float b = (maxY - this->minY);
HXDLIN(  66)			Float _hx_tmp;
HXDLIN(  66)			if ((a < b)) {
HXLINE(  66)				_hx_tmp = b;
            			}
            			else {
HXLINE(  66)				_hx_tmp = a;
            			}
HXDLIN(  66)			this->size = _hx_tmp;
HXLINE(  67)			this->hasSize = true;
            		}
            		else {
HXLINE(  69)			this->hasSize = false;
            		}
HXLINE(  70)		this->earcutLinked(root,null());
HXLINE(  71)		::Array< int > result = this->triangles;
HXLINE(  72)		this->triangles = null();
HXLINE(  75)		 ::hxd::earcut::EarNode n = this->allocated;
HXLINE(  76)		if (::hx::IsNotNull( this->cache )) {
HXLINE(  77)			while(::hx::IsInstanceNotEq( n,this->cache )){
HXLINE(  78)				n = n->allocNext;
            			}
HXLINE(  79)			n = n->allocNext;
            		}
HXLINE(  81)		while(::hx::IsNotNull( n )){
HXLINE(  82)			n->next = this->cache;
HXLINE(  83)			this->cache = n;
HXLINE(  84)			n = n->allocNext;
            		}
HXLINE(  87)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,triangulateNode,return )

void Earcut_obj::eliminateHole( ::hxd::earcut::EarNode hole, ::hxd::earcut::EarNode root){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_147_eliminateHole)
HXLINE( 148)		root = this->findHoleBridge(hole,root);
HXLINE( 149)		if (::hx::IsNotNull( root )) {
HXLINE( 150)			 ::hxd::earcut::EarNode b = this->splitPolygon(root,hole);
HXLINE( 151)			this->filterPoints(b,b->next);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,eliminateHole,(void))

 ::hxd::earcut::EarNode Earcut_obj::findHoleBridge( ::hxd::earcut::EarNode hole, ::hxd::earcut::EarNode root){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_156_findHoleBridge)
HXLINE( 157)		 ::hxd::earcut::EarNode p = root;
HXLINE( 158)		Float hx = hole->x;
HXLINE( 159)		Float hy = hole->y;
HXLINE( 160)		Float qx = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 161)		 ::hxd::earcut::EarNode m = null();
HXLINE( 165)		while(true){
HXLINE( 166)			bool _hx_tmp;
HXDLIN( 166)			if ((hy <= p->y)) {
HXLINE( 166)				_hx_tmp = (hy >= p->next->y);
            			}
            			else {
HXLINE( 166)				_hx_tmp = false;
            			}
HXDLIN( 166)			if (_hx_tmp) {
HXLINE( 167)				Float x = (p->x + (((hy - p->y) * (p->next->x - p->x)) / (p->next->y - p->y)));
HXLINE( 168)				bool _hx_tmp;
HXDLIN( 168)				if ((x <= hx)) {
HXLINE( 168)					_hx_tmp = (x > qx);
            				}
            				else {
HXLINE( 168)					_hx_tmp = false;
            				}
HXDLIN( 168)				if (_hx_tmp) {
HXLINE( 169)					qx = x;
HXLINE( 170)					if ((p->x < p->next->x)) {
HXLINE( 170)						m = p;
            					}
            					else {
HXLINE( 170)						m = p->next;
            					}
            				}
            			}
HXLINE( 173)			p = p->next;
HXLINE( 165)			if (!(::hx::IsInstanceNotEq( p,root ))) {
HXLINE( 165)				goto _hx_goto_19;
            			}
            		}
            		_hx_goto_19:;
HXLINE( 176)		if (::hx::IsNull( m )) {
HXLINE( 176)			return null();
            		}
HXLINE( 181)		 ::hxd::earcut::EarNode stop = m;
HXLINE( 182)		Float tanMin = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 183)		Float tan;
HXLINE( 185)		p = m->next;
HXLINE( 186)		while(::hx::IsInstanceNotEq( p,stop )){
HXLINE( 187)			bool _hx_tmp;
HXDLIN( 187)			bool _hx_tmp1;
HXDLIN( 187)			if ((hx >= p->x)) {
HXLINE( 187)				_hx_tmp1 = (p->x >= m->x);
            			}
            			else {
HXLINE( 187)				_hx_tmp1 = false;
            			}
HXDLIN( 187)			if (_hx_tmp1) {
HXLINE( 187)				Float ax;
HXDLIN( 187)				if ((hy < m->y)) {
HXLINE( 187)					ax = hx;
            				}
            				else {
HXLINE( 187)					ax = qx;
            				}
HXDLIN( 187)				Float bx = m->x;
HXDLIN( 187)				Float by = m->y;
HXDLIN( 187)				Float cx;
HXDLIN( 187)				if ((hy < m->y)) {
HXLINE( 187)					cx = qx;
            				}
            				else {
HXLINE( 187)					cx = hx;
            				}
HXDLIN( 187)				Float px = p->x;
HXDLIN( 187)				Float py = p->y;
HXDLIN( 187)				bool _hx_tmp1;
HXDLIN( 187)				if (((((cx - px) * (hy - py)) - ((ax - px) * (hy - py))) >= 0)) {
HXLINE( 187)					_hx_tmp1 = ((((ax - px) * (by - py)) - ((bx - px) * (hy - py))) >= 0);
            				}
            				else {
HXLINE( 187)					_hx_tmp1 = false;
            				}
HXDLIN( 187)				if (_hx_tmp1) {
HXLINE( 187)					_hx_tmp = ((((bx - px) * (hy - py)) - ((cx - px) * (by - py))) >= 0);
            				}
            				else {
HXLINE( 187)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 187)				_hx_tmp = false;
            			}
HXDLIN( 187)			if (_hx_tmp) {
HXLINE( 188)				Float f = (hy - p->y);
HXDLIN( 188)				Float tan1;
HXDLIN( 188)				if ((f < 0)) {
HXLINE( 188)					tan1 = -(f);
            				}
            				else {
HXLINE( 188)					tan1 = f;
            				}
HXDLIN( 188)				tan = (tan1 / (hx - p->x));
HXLINE( 189)				bool _hx_tmp;
HXDLIN( 189)				bool _hx_tmp1;
HXDLIN( 189)				if (!((tan < tanMin))) {
HXLINE( 189)					if ((tan == tanMin)) {
HXLINE( 189)						_hx_tmp1 = (p->x > m->x);
            					}
            					else {
HXLINE( 189)						_hx_tmp1 = false;
            					}
            				}
            				else {
HXLINE( 189)					_hx_tmp1 = true;
            				}
HXDLIN( 189)				if (_hx_tmp1) {
HXLINE( 189)					 ::hxd::earcut::EarNode p1 = p->prev;
HXDLIN( 189)					 ::hxd::earcut::EarNode r = p->next;
HXDLIN( 189)					if (((((p->y - p1->y) * (r->x - p->x)) - ((p->x - p1->x) * (r->y - p->y))) < 0)) {
HXLINE( 189)						 ::hxd::earcut::EarNode r = p->next;
HXDLIN( 189)						if (((((hole->y - p->y) * (r->x - hole->x)) - ((hole->x - p->x) * (r->y - hole->y))) >= 0)) {
HXLINE( 189)							 ::hxd::earcut::EarNode q = p->prev;
HXDLIN( 189)							_hx_tmp = ((((q->y - p->y) * (hole->x - q->x)) - ((q->x - p->x) * (hole->y - q->y))) >= 0);
            						}
            						else {
HXLINE( 189)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 189)						 ::hxd::earcut::EarNode r = p->prev;
HXDLIN( 189)						if (!(((((hole->y - p->y) * (r->x - hole->x)) - ((hole->x - p->x) * (r->y - hole->y))) < 0))) {
HXLINE( 189)							 ::hxd::earcut::EarNode q = p->next;
HXDLIN( 189)							_hx_tmp = ((((q->y - p->y) * (hole->x - q->x)) - ((q->x - p->x) * (hole->y - q->y))) < 0);
            						}
            						else {
HXLINE( 189)							_hx_tmp = true;
            						}
            					}
            				}
            				else {
HXLINE( 189)					_hx_tmp = false;
            				}
HXDLIN( 189)				if (_hx_tmp) {
HXLINE( 190)					m = p;
HXLINE( 191)					tanMin = tan;
            				}
            			}
HXLINE( 194)			p = p->next;
            		}
HXLINE( 197)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,findHoleBridge,return )

 ::hxd::earcut::EarNode Earcut_obj::getLeftmost( ::hxd::earcut::EarNode node){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_201_getLeftmost)
HXLINE( 202)		 ::hxd::earcut::EarNode p = node;
HXDLIN( 202)		 ::hxd::earcut::EarNode leftmost = node;
HXLINE( 203)		while(true){
HXLINE( 204)			if ((p->x < leftmost->x)) {
HXLINE( 204)				leftmost = p;
            			}
HXLINE( 205)			p = p->next;
HXLINE( 203)			if (!(::hx::IsInstanceNotEq( p,node ))) {
HXLINE( 203)				goto _hx_goto_22;
            			}
            		}
            		_hx_goto_22:;
HXLINE( 208)		return leftmost;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Earcut_obj,getLeftmost,return )

int Earcut_obj::compareX( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_213_compareX)
HXDLIN( 213)		if (((a->x - b->x) > 0)) {
HXDLIN( 213)			return 1;
            		}
            		else {
HXDLIN( 213)			return -1;
            		}
HXDLIN( 213)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,compareX,return )

bool Earcut_obj::equals( ::hxd::earcut::EarNode p1, ::hxd::earcut::EarNode p2){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_217_equals)
HXDLIN( 217)		if ((p1->x == p2->x)) {
HXDLIN( 217)			return (p1->y == p2->y);
            		}
            		else {
HXDLIN( 217)			return false;
            		}
HXDLIN( 217)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,equals,return )

Float Earcut_obj::area( ::hxd::earcut::EarNode p, ::hxd::earcut::EarNode q, ::hxd::earcut::EarNode r){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_221_area)
HXDLIN( 221)		return (((q->y - p->y) * (r->x - q->x)) - ((q->x - p->x) * (r->y - q->y)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Earcut_obj,area,return )

bool Earcut_obj::intersects( ::hxd::earcut::EarNode p1, ::hxd::earcut::EarNode q1, ::hxd::earcut::EarNode p2, ::hxd::earcut::EarNode q2){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_225_intersects)
HXDLIN( 225)		if ((((((q1->y - p1->y) * (p2->x - q1->x)) - ((q1->x - p1->x) * (p2->y - q1->y))) > 0) != ((((q1->y - p1->y) * (q2->x - q1->x)) - ((q1->x - p1->x) * (q2->y - q1->y))) > 0))) {
HXDLIN( 225)			return (((((q2->y - p2->y) * (p1->x - q2->x)) - ((q2->x - p2->x) * (p1->y - q2->y))) > 0) != ((((q2->y - p2->y) * (q1->x - q2->x)) - ((q2->x - p2->x) * (q1->y - q2->y))) > 0));
            		}
            		else {
HXDLIN( 225)			return false;
            		}
HXDLIN( 225)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Earcut_obj,intersects,return )

bool Earcut_obj::locallyInside( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_230_locallyInside)
HXDLIN( 230)		 ::hxd::earcut::EarNode p = a->prev;
HXDLIN( 230)		 ::hxd::earcut::EarNode r = a->next;
HXDLIN( 230)		if (((((a->y - p->y) * (r->x - a->x)) - ((a->x - p->x) * (r->y - a->y))) < 0)) {
HXLINE( 231)			 ::hxd::earcut::EarNode r = a->next;
HXDLIN( 231)			if (((((b->y - a->y) * (r->x - b->x)) - ((b->x - a->x) * (r->y - b->y))) >= 0)) {
HXLINE( 231)				 ::hxd::earcut::EarNode q = a->prev;
HXDLIN( 231)				return ((((q->y - a->y) * (b->x - q->x)) - ((q->x - a->x) * (b->y - q->y))) >= 0);
            			}
            			else {
HXLINE( 231)				return false;
            			}
            		}
            		else {
HXLINE( 232)			 ::hxd::earcut::EarNode r = a->prev;
HXDLIN( 232)			if (!(((((b->y - a->y) * (r->x - b->x)) - ((b->x - a->x) * (r->y - b->y))) < 0))) {
HXLINE( 232)				 ::hxd::earcut::EarNode q = a->next;
HXDLIN( 232)				return ((((q->y - a->y) * (b->x - q->x)) - ((q->x - a->x) * (b->y - q->y))) < 0);
            			}
            			else {
HXLINE( 232)				return true;
            			}
            		}
HXLINE( 230)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,locallyInside,return )

 ::hxd::earcut::EarNode Earcut_obj::filterPoints( ::hxd::earcut::EarNode start, ::hxd::earcut::EarNode end){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_235_filterPoints)
HXLINE( 236)		if (::hx::IsNull( start )) {
HXLINE( 236)			return start;
            		}
HXLINE( 237)		if (::hx::IsNull( end )) {
HXLINE( 237)			end = start;
            		}
HXLINE( 238)		 ::hxd::earcut::EarNode p = start;
HXDLIN( 238)		bool again;
HXLINE( 239)		while(true){
HXLINE( 240)			again = false;
HXLINE( 241)			bool _hx_tmp;
HXDLIN( 241)			if (!(p->steiner)) {
HXLINE( 241)				 ::hxd::earcut::EarNode p2 = p->next;
HXDLIN( 241)				bool _hx_tmp1;
HXDLIN( 241)				if ((p->x == p2->x)) {
HXLINE( 241)					_hx_tmp1 = (p->y == p2->y);
            				}
            				else {
HXLINE( 241)					_hx_tmp1 = false;
            				}
HXDLIN( 241)				if (!(_hx_tmp1)) {
HXLINE( 241)					 ::hxd::earcut::EarNode p1 = p->prev;
HXDLIN( 241)					 ::hxd::earcut::EarNode r = p->next;
HXDLIN( 241)					_hx_tmp = ((((p->y - p1->y) * (r->x - p->x)) - ((p->x - p1->x) * (r->y - p->y))) == 0);
            				}
            				else {
HXLINE( 241)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 241)				_hx_tmp = false;
            			}
HXDLIN( 241)			if (_hx_tmp) {
HXLINE( 242)				{
HXLINE( 242)					p->next->prev = p->prev;
HXDLIN( 242)					p->prev->next = p->next;
HXDLIN( 242)					if (::hx::IsNotNull( p->prevZ )) {
HXLINE( 242)						p->prevZ->nextZ = p->nextZ;
            					}
HXDLIN( 242)					if (::hx::IsNotNull( p->nextZ )) {
HXLINE( 242)						p->nextZ->prevZ = p->prevZ;
            					}
            				}
HXLINE( 243)				end = p->prev;
HXDLIN( 243)				p = end;
HXLINE( 244)				if (::hx::IsInstanceEq( p,p->next )) {
HXLINE( 244)					return null();
            				}
HXLINE( 245)				again = true;
            			}
            			else {
HXLINE( 247)				p = p->next;
            			}
HXLINE( 249)			bool _hx_tmp1;
HXDLIN( 249)			if (!(again)) {
HXLINE( 249)				_hx_tmp1 = ::hx::IsInstanceNotEq( p,end );
            			}
            			else {
HXLINE( 249)				_hx_tmp1 = true;
            			}
HXLINE( 239)			if (!(_hx_tmp1)) {
HXLINE( 239)				goto _hx_goto_29;
            			}
            		}
            		_hx_goto_29:;
HXLINE( 250)		return end;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,filterPoints,return )

void Earcut_obj::removeNode( ::hxd::earcut::EarNode p){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_253_removeNode)
HXLINE( 254)		p->next->prev = p->prev;
HXLINE( 255)		p->prev->next = p->next;
HXLINE( 256)		if (::hx::IsNotNull( p->prevZ )) {
HXLINE( 256)			p->prevZ->nextZ = p->nextZ;
            		}
HXLINE( 257)		if (::hx::IsNotNull( p->nextZ )) {
HXLINE( 257)			p->nextZ->prevZ = p->prevZ;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Earcut_obj,removeNode,(void))

 ::hxd::earcut::EarNode Earcut_obj::allocNode(int i,Float x,Float y, ::hxd::earcut::EarNode last){
            	HX_GC_STACKFRAME(&_hx_pos_15e51383b16a04e2_260_allocNode)
HXLINE( 261)		 ::hxd::earcut::EarNode n = this->cache;
HXLINE( 262)		if (::hx::IsNull( n )) {
HXLINE( 263)			n =  ::hxd::earcut::EarNode_obj::__alloc( HX_CTX );
HXLINE( 264)			n->allocNext = this->allocated;
HXLINE( 265)			this->allocated = n;
            		}
            		else {
HXLINE( 267)			this->cache = n->next;
            		}
HXLINE( 268)		n->i = i;
HXLINE( 269)		n->z = -1;
HXLINE( 270)		n->x = x;
HXLINE( 271)		n->y = y;
HXLINE( 272)		n->next = null();
HXLINE( 273)		n->prev = last;
HXLINE( 274)		n->steiner = false;
HXLINE( 275)		n->prevZ = null();
HXLINE( 276)		n->nextZ = null();
HXLINE( 277)		if (::hx::IsNotNull( last )) {
HXLINE( 278)			last->next = n;
            		}
HXLINE( 279)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Earcut_obj,allocNode,return )

void Earcut_obj::earcutLinked( ::hxd::earcut::EarNode ear,::hx::Null< int >  __o_pass){
            		int pass = __o_pass.Default(0);
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_282_earcutLinked)
HXLINE( 283)		if (::hx::IsNull( ear )) {
HXLINE( 283)			return;
            		}
HXLINE( 286)		bool _hx_tmp;
HXDLIN( 286)		if ((pass == 0)) {
HXLINE( 286)			_hx_tmp = this->hasSize;
            		}
            		else {
HXLINE( 286)			_hx_tmp = false;
            		}
HXDLIN( 286)		if (_hx_tmp) {
HXLINE( 286)			this->indexCurve(ear);
            		}
HXLINE( 288)		 ::hxd::earcut::EarNode stop = ear;
HXDLIN( 288)		 ::hxd::earcut::EarNode prev;
HXDLIN( 288)		 ::hxd::earcut::EarNode next;
HXLINE( 292)		while(::hx::IsInstanceNotEq( ear->prev,ear->next )){
HXLINE( 293)			prev = ear->prev;
HXLINE( 294)			next = ear->next;
HXLINE( 296)			bool _hx_tmp;
HXDLIN( 296)			if (this->hasSize) {
HXLINE( 296)				_hx_tmp = this->isEarHashed(ear);
            			}
            			else {
HXLINE( 296)				_hx_tmp = this->isEar(ear);
            			}
HXDLIN( 296)			if (_hx_tmp) {
HXLINE( 298)				this->triangles->push(prev->i);
HXLINE( 299)				this->triangles->push(ear->i);
HXLINE( 300)				this->triangles->push(next->i);
HXLINE( 302)				{
HXLINE( 302)					ear->next->prev = ear->prev;
HXDLIN( 302)					ear->prev->next = ear->next;
HXDLIN( 302)					if (::hx::IsNotNull( ear->prevZ )) {
HXLINE( 302)						ear->prevZ->nextZ = ear->nextZ;
            					}
HXDLIN( 302)					if (::hx::IsNotNull( ear->nextZ )) {
HXLINE( 302)						ear->nextZ->prevZ = ear->prevZ;
            					}
            				}
HXLINE( 305)				ear = next->next;
HXLINE( 306)				stop = next->next;
HXLINE( 308)				continue;
            			}
HXLINE( 311)			ear = next;
HXLINE( 314)			if (::hx::IsInstanceEq( ear,stop )) {
HXLINE( 316)				switch((int)(pass)){
            					case (int)0: {
HXLINE( 318)						this->earcutLinked(this->filterPoints(ear,null()),1);
            					}
            					break;
            					case (int)1: {
HXLINE( 321)						ear = this->cureLocalIntersections(ear);
HXLINE( 322)						this->earcutLinked(ear,2);
            					}
            					break;
            					case (int)2: {
HXLINE( 325)						this->splitEarcut(ear);
            					}
            					break;
            				}
HXLINE( 327)				goto _hx_goto_33;
            			}
            		}
            		_hx_goto_33:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,earcutLinked,(void))

bool Earcut_obj::isEar( ::hxd::earcut::EarNode ear){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_333_isEar)
HXLINE( 334)		 ::hxd::earcut::EarNode a = ear->prev;
HXDLIN( 334)		 ::hxd::earcut::EarNode b = ear;
HXDLIN( 334)		 ::hxd::earcut::EarNode c = ear->next;
HXLINE( 338)		if (((((b->y - a->y) * (c->x - b->x)) - ((b->x - a->x) * (c->y - b->y))) >= 0)) {
HXLINE( 338)			return false;
            		}
HXLINE( 341)		 ::hxd::earcut::EarNode p = ear->next->next;
HXLINE( 343)		while(::hx::IsInstanceNotEq( p,ear->prev )){
HXLINE( 344)			bool _hx_tmp;
HXDLIN( 344)			Float ax = a->x;
HXDLIN( 344)			Float ay = a->y;
HXDLIN( 344)			Float bx = b->x;
HXDLIN( 344)			Float by = b->y;
HXDLIN( 344)			Float cx = c->x;
HXDLIN( 344)			Float cy = c->y;
HXDLIN( 344)			Float px = p->x;
HXDLIN( 344)			Float py = p->y;
HXDLIN( 344)			bool _hx_tmp1;
HXDLIN( 344)			bool _hx_tmp2;
HXDLIN( 344)			if (((((cx - px) * (ay - py)) - ((ax - px) * (cy - py))) >= 0)) {
HXLINE( 344)				_hx_tmp2 = ((((ax - px) * (by - py)) - ((bx - px) * (ay - py))) >= 0);
            			}
            			else {
HXLINE( 344)				_hx_tmp2 = false;
            			}
HXDLIN( 344)			if (_hx_tmp2) {
HXLINE( 344)				_hx_tmp1 = ((((bx - px) * (cy - py)) - ((cx - px) * (by - py))) >= 0);
            			}
            			else {
HXLINE( 344)				_hx_tmp1 = false;
            			}
HXDLIN( 344)			if (_hx_tmp1) {
HXLINE( 345)				 ::hxd::earcut::EarNode p1 = p->prev;
HXDLIN( 345)				 ::hxd::earcut::EarNode r = p->next;
HXLINE( 344)				_hx_tmp = ((((p->y - p1->y) * (r->x - p->x)) - ((p->x - p1->x) * (r->y - p->y))) >= 0);
            			}
            			else {
HXLINE( 344)				_hx_tmp = false;
            			}
HXDLIN( 344)			if (_hx_tmp) {
HXLINE( 345)				return false;
            			}
HXLINE( 346)			p = p->next;
            		}
HXLINE( 349)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Earcut_obj,isEar,return )

bool Earcut_obj::isEarHashed( ::hxd::earcut::EarNode ear){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_352_isEarHashed)
HXLINE( 353)		 ::hxd::earcut::EarNode a = ear->prev;
HXDLIN( 353)		 ::hxd::earcut::EarNode b = ear;
HXDLIN( 353)		 ::hxd::earcut::EarNode c = ear->next;
HXLINE( 357)		if (((((b->y - a->y) * (c->x - b->x)) - ((b->x - a->x) * (c->y - b->y))) >= 0)) {
HXLINE( 357)			return false;
            		}
HXLINE( 360)		Float minTX;
HXDLIN( 360)		if ((a->x < b->x)) {
HXLINE( 360)			if ((a->x < c->x)) {
HXLINE( 360)				minTX = a->x;
            			}
            			else {
HXLINE( 360)				minTX = c->x;
            			}
            		}
            		else {
HXLINE( 360)			if ((b->x < c->x)) {
HXLINE( 360)				minTX = b->x;
            			}
            			else {
HXLINE( 360)				minTX = c->x;
            			}
            		}
HXDLIN( 360)		Float minTY;
HXLINE( 361)		if ((a->y < b->y)) {
HXLINE( 361)			if ((a->y < c->y)) {
HXLINE( 360)				minTY = a->y;
            			}
            			else {
HXLINE( 360)				minTY = c->y;
            			}
            		}
            		else {
HXLINE( 361)			if ((b->y < c->y)) {
HXLINE( 360)				minTY = b->y;
            			}
            			else {
HXLINE( 360)				minTY = c->y;
            			}
            		}
HXDLIN( 360)		Float maxTX;
HXLINE( 362)		if ((a->x > b->x)) {
HXLINE( 362)			if ((a->x > c->x)) {
HXLINE( 360)				maxTX = a->x;
            			}
            			else {
HXLINE( 360)				maxTX = c->x;
            			}
            		}
            		else {
HXLINE( 362)			if ((b->x > c->x)) {
HXLINE( 360)				maxTX = b->x;
            			}
            			else {
HXLINE( 360)				maxTX = c->x;
            			}
            		}
HXDLIN( 360)		Float maxTY;
HXLINE( 363)		if ((a->y > b->y)) {
HXLINE( 363)			if ((a->y > c->y)) {
HXLINE( 360)				maxTY = a->y;
            			}
            			else {
HXLINE( 360)				maxTY = c->y;
            			}
            		}
            		else {
HXLINE( 363)			if ((b->y > c->y)) {
HXLINE( 360)				maxTY = b->y;
            			}
            			else {
HXLINE( 360)				maxTY = c->y;
            			}
            		}
HXLINE( 366)		int x = ::Std_obj::_hx_int(((( (Float)(32767) ) * (minTX - this->minX)) / this->size));
HXDLIN( 366)		int y = ::Std_obj::_hx_int(((( (Float)(32767) ) * (minTY - this->minY)) / this->size));
HXDLIN( 366)		x = ((x | (x << 8)) & 16711935);
HXDLIN( 366)		x = ((x | (x << 4)) & 252645135);
HXDLIN( 366)		x = ((x | (x << 2)) & 858993459);
HXDLIN( 366)		x = ((x | (x << 1)) & (int)1431655765);
HXDLIN( 366)		y = ((y | (y << 8)) & 16711935);
HXDLIN( 366)		y = ((y | (y << 4)) & 252645135);
HXDLIN( 366)		y = ((y | (y << 2)) & 858993459);
HXDLIN( 366)		y = ((y | (y << 1)) & (int)1431655765);
HXDLIN( 366)		int minZ = (x | (y << 1));
HXLINE( 367)		int x1 = ::Std_obj::_hx_int(((( (Float)(32767) ) * (maxTX - this->minX)) / this->size));
HXDLIN( 367)		int y1 = ::Std_obj::_hx_int(((( (Float)(32767) ) * (maxTY - this->minY)) / this->size));
HXDLIN( 367)		x1 = ((x1 | (x1 << 8)) & 16711935);
HXDLIN( 367)		x1 = ((x1 | (x1 << 4)) & 252645135);
HXDLIN( 367)		x1 = ((x1 | (x1 << 2)) & 858993459);
HXDLIN( 367)		x1 = ((x1 | (x1 << 1)) & (int)1431655765);
HXDLIN( 367)		y1 = ((y1 | (y1 << 8)) & 16711935);
HXDLIN( 367)		y1 = ((y1 | (y1 << 4)) & 252645135);
HXDLIN( 367)		y1 = ((y1 | (y1 << 2)) & 858993459);
HXDLIN( 367)		y1 = ((y1 | (y1 << 1)) & (int)1431655765);
HXLINE( 366)		int maxZ = (x1 | (y1 << 1));
HXLINE( 370)		 ::hxd::earcut::EarNode p = ear->nextZ;
HXLINE( 372)		while(true){
HXLINE( 372)			bool _hx_tmp;
HXDLIN( 372)			if (::hx::IsNotNull( p )) {
HXLINE( 372)				_hx_tmp = (p->z <= maxZ);
            			}
            			else {
HXLINE( 372)				_hx_tmp = false;
            			}
HXDLIN( 372)			if (!(_hx_tmp)) {
HXLINE( 372)				goto _hx_goto_37;
            			}
HXLINE( 373)			bool _hx_tmp1;
HXDLIN( 373)			bool _hx_tmp2;
HXDLIN( 373)			bool _hx_tmp3;
HXDLIN( 373)			if (::hx::IsInstanceNotEq( p,ear->prev )) {
HXLINE( 373)				_hx_tmp3 = ::hx::IsInstanceNotEq( p,ear->next );
            			}
            			else {
HXLINE( 373)				_hx_tmp3 = false;
            			}
HXDLIN( 373)			if (_hx_tmp3) {
HXLINE( 374)				Float ax = a->x;
HXDLIN( 374)				Float ay = a->y;
HXDLIN( 374)				Float bx = b->x;
HXDLIN( 374)				Float by = b->y;
HXDLIN( 374)				Float cx = c->x;
HXDLIN( 374)				Float cy = c->y;
HXDLIN( 374)				Float px = p->x;
HXDLIN( 374)				Float py = p->y;
HXDLIN( 374)				bool _hx_tmp;
HXDLIN( 374)				if (((((cx - px) * (ay - py)) - ((ax - px) * (cy - py))) >= 0)) {
HXLINE( 374)					_hx_tmp = ((((ax - px) * (by - py)) - ((bx - px) * (ay - py))) >= 0);
            				}
            				else {
HXLINE( 374)					_hx_tmp = false;
            				}
HXDLIN( 374)				if (_hx_tmp) {
HXLINE( 373)					_hx_tmp2 = ((((bx - px) * (cy - py)) - ((cx - px) * (by - py))) >= 0);
            				}
            				else {
HXLINE( 373)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE( 373)				_hx_tmp2 = false;
            			}
HXDLIN( 373)			if (_hx_tmp2) {
HXLINE( 375)				 ::hxd::earcut::EarNode p1 = p->prev;
HXDLIN( 375)				 ::hxd::earcut::EarNode r = p->next;
HXLINE( 373)				_hx_tmp1 = ((((p->y - p1->y) * (r->x - p->x)) - ((p->x - p1->x) * (r->y - p->y))) >= 0);
            			}
            			else {
HXLINE( 373)				_hx_tmp1 = false;
            			}
HXDLIN( 373)			if (_hx_tmp1) {
HXLINE( 375)				return false;
            			}
HXLINE( 376)			p = p->nextZ;
            		}
            		_hx_goto_37:;
HXLINE( 380)		p = ear->prevZ;
HXLINE( 382)		while(true){
HXLINE( 382)			bool _hx_tmp;
HXDLIN( 382)			if (::hx::IsNotNull( p )) {
HXLINE( 382)				_hx_tmp = (p->z >= minZ);
            			}
            			else {
HXLINE( 382)				_hx_tmp = false;
            			}
HXDLIN( 382)			if (!(_hx_tmp)) {
HXLINE( 382)				goto _hx_goto_38;
            			}
HXLINE( 383)			bool _hx_tmp1;
HXDLIN( 383)			bool _hx_tmp2;
HXDLIN( 383)			bool _hx_tmp3;
HXDLIN( 383)			if (::hx::IsInstanceNotEq( p,ear->prev )) {
HXLINE( 383)				_hx_tmp3 = ::hx::IsInstanceNotEq( p,ear->next );
            			}
            			else {
HXLINE( 383)				_hx_tmp3 = false;
            			}
HXDLIN( 383)			if (_hx_tmp3) {
HXLINE( 384)				Float ax = a->x;
HXDLIN( 384)				Float ay = a->y;
HXDLIN( 384)				Float bx = b->x;
HXDLIN( 384)				Float by = b->y;
HXDLIN( 384)				Float cx = c->x;
HXDLIN( 384)				Float cy = c->y;
HXDLIN( 384)				Float px = p->x;
HXDLIN( 384)				Float py = p->y;
HXDLIN( 384)				bool _hx_tmp;
HXDLIN( 384)				if (((((cx - px) * (ay - py)) - ((ax - px) * (cy - py))) >= 0)) {
HXLINE( 384)					_hx_tmp = ((((ax - px) * (by - py)) - ((bx - px) * (ay - py))) >= 0);
            				}
            				else {
HXLINE( 384)					_hx_tmp = false;
            				}
HXDLIN( 384)				if (_hx_tmp) {
HXLINE( 383)					_hx_tmp2 = ((((bx - px) * (cy - py)) - ((cx - px) * (by - py))) >= 0);
            				}
            				else {
HXLINE( 383)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE( 383)				_hx_tmp2 = false;
            			}
HXDLIN( 383)			if (_hx_tmp2) {
HXLINE( 385)				 ::hxd::earcut::EarNode p1 = p->prev;
HXDLIN( 385)				 ::hxd::earcut::EarNode r = p->next;
HXLINE( 383)				_hx_tmp1 = ((((p->y - p1->y) * (r->x - p->x)) - ((p->x - p1->x) * (r->y - p->y))) >= 0);
            			}
            			else {
HXLINE( 383)				_hx_tmp1 = false;
            			}
HXDLIN( 383)			if (_hx_tmp1) {
HXLINE( 385)				return false;
            			}
HXLINE( 386)			p = p->prevZ;
            		}
            		_hx_goto_38:;
HXLINE( 389)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Earcut_obj,isEarHashed,return )

 ::hxd::earcut::EarNode Earcut_obj::cureLocalIntersections( ::hxd::earcut::EarNode start){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_393_cureLocalIntersections)
HXLINE( 394)		 ::hxd::earcut::EarNode p = start;
HXLINE( 395)		while(true){
HXLINE( 396)			 ::hxd::earcut::EarNode a = p->prev;
HXDLIN( 396)			 ::hxd::earcut::EarNode b = p->next->next;
HXLINE( 400)			bool _hx_tmp;
HXDLIN( 400)			bool _hx_tmp1;
HXDLIN( 400)			 ::hxd::earcut::EarNode p2 = p->next;
HXDLIN( 400)			bool _hx_tmp2;
HXDLIN( 400)			if ((((((p->y - a->y) * (p2->x - p->x)) - ((p->x - a->x) * (p2->y - p->y))) > 0) != ((((p->y - a->y) * (b->x - p->x)) - ((p->x - a->x) * (b->y - p->y))) > 0))) {
HXLINE( 400)				_hx_tmp2 = (((((b->y - p2->y) * (a->x - b->x)) - ((b->x - p2->x) * (a->y - b->y))) > 0) != ((((b->y - p2->y) * (p->x - b->x)) - ((b->x - p2->x) * (p->y - b->y))) > 0));
            			}
            			else {
HXLINE( 400)				_hx_tmp2 = false;
            			}
HXDLIN( 400)			if (_hx_tmp2) {
HXLINE( 400)				 ::hxd::earcut::EarNode p = a->prev;
HXDLIN( 400)				 ::hxd::earcut::EarNode r = a->next;
HXDLIN( 400)				if (((((a->y - p->y) * (r->x - a->x)) - ((a->x - p->x) * (r->y - a->y))) < 0)) {
HXLINE( 400)					 ::hxd::earcut::EarNode r = a->next;
HXDLIN( 400)					if (((((b->y - a->y) * (r->x - b->x)) - ((b->x - a->x) * (r->y - b->y))) >= 0)) {
HXLINE( 400)						 ::hxd::earcut::EarNode q = a->prev;
HXDLIN( 400)						_hx_tmp1 = ((((q->y - a->y) * (b->x - q->x)) - ((q->x - a->x) * (b->y - q->y))) >= 0);
            					}
            					else {
HXLINE( 400)						_hx_tmp1 = false;
            					}
            				}
            				else {
HXLINE( 400)					 ::hxd::earcut::EarNode r = a->prev;
HXDLIN( 400)					if (!(((((b->y - a->y) * (r->x - b->x)) - ((b->x - a->x) * (r->y - b->y))) < 0))) {
HXLINE( 400)						 ::hxd::earcut::EarNode q = a->next;
HXDLIN( 400)						_hx_tmp1 = ((((q->y - a->y) * (b->x - q->x)) - ((q->x - a->x) * (b->y - q->y))) < 0);
            					}
            					else {
HXLINE( 400)						_hx_tmp1 = true;
            					}
            				}
            			}
            			else {
HXLINE( 400)				_hx_tmp1 = false;
            			}
HXDLIN( 400)			if (_hx_tmp1) {
HXLINE( 400)				 ::hxd::earcut::EarNode p = b->prev;
HXDLIN( 400)				 ::hxd::earcut::EarNode r = b->next;
HXDLIN( 400)				if (((((b->y - p->y) * (r->x - b->x)) - ((b->x - p->x) * (r->y - b->y))) < 0)) {
HXLINE( 400)					 ::hxd::earcut::EarNode r = b->next;
HXDLIN( 400)					if (((((a->y - b->y) * (r->x - a->x)) - ((a->x - b->x) * (r->y - a->y))) >= 0)) {
HXLINE( 400)						 ::hxd::earcut::EarNode q = b->prev;
HXDLIN( 400)						_hx_tmp = ((((q->y - b->y) * (a->x - q->x)) - ((q->x - b->x) * (a->y - q->y))) >= 0);
            					}
            					else {
HXLINE( 400)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 400)					 ::hxd::earcut::EarNode r = b->prev;
HXDLIN( 400)					if (!(((((a->y - b->y) * (r->x - a->x)) - ((a->x - b->x) * (r->y - a->y))) < 0))) {
HXLINE( 400)						 ::hxd::earcut::EarNode q = b->next;
HXDLIN( 400)						_hx_tmp = ((((q->y - b->y) * (a->x - q->x)) - ((q->x - b->x) * (a->y - q->y))) < 0);
            					}
            					else {
HXLINE( 400)						_hx_tmp = true;
            					}
            				}
            			}
            			else {
HXLINE( 400)				_hx_tmp = false;
            			}
HXDLIN( 400)			if (_hx_tmp) {
HXLINE( 402)				this->triangles->push(a->i);
HXLINE( 403)				this->triangles->push(p->i);
HXLINE( 404)				this->triangles->push(b->i);
HXLINE( 407)				{
HXLINE( 407)					p->next->prev = p->prev;
HXDLIN( 407)					p->prev->next = p->next;
HXDLIN( 407)					if (::hx::IsNotNull( p->prevZ )) {
HXLINE( 407)						p->prevZ->nextZ = p->nextZ;
            					}
HXDLIN( 407)					if (::hx::IsNotNull( p->nextZ )) {
HXLINE( 407)						p->nextZ->prevZ = p->prevZ;
            					}
            				}
HXLINE( 408)				{
HXLINE( 408)					 ::hxd::earcut::EarNode p1 = p->next;
HXDLIN( 408)					p1->next->prev = p1->prev;
HXDLIN( 408)					p1->prev->next = p1->next;
HXDLIN( 408)					if (::hx::IsNotNull( p1->prevZ )) {
HXLINE( 408)						p1->prevZ->nextZ = p1->nextZ;
            					}
HXDLIN( 408)					if (::hx::IsNotNull( p1->nextZ )) {
HXLINE( 408)						p1->nextZ->prevZ = p1->prevZ;
            					}
            				}
HXLINE( 410)				start = b;
HXDLIN( 410)				p = start;
            			}
HXLINE( 412)			p = p->next;
HXLINE( 395)			if (!(::hx::IsInstanceNotEq( p,start ))) {
HXLINE( 395)				goto _hx_goto_40;
            			}
            		}
            		_hx_goto_40:;
HXLINE( 415)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Earcut_obj,cureLocalIntersections,return )

void Earcut_obj::splitEarcut( ::hxd::earcut::EarNode start){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_419_splitEarcut)
HXLINE( 421)		 ::hxd::earcut::EarNode a = start;
HXLINE( 422)		while(true){
HXLINE( 423)			 ::hxd::earcut::EarNode b = a->next->next;
HXLINE( 424)			while(::hx::IsInstanceNotEq( b,a->prev )){
HXLINE( 425)				bool _hx_tmp;
HXDLIN( 425)				if ((a->i != b->i)) {
HXLINE( 425)					_hx_tmp = this->isValidDiagonal(a,b);
            				}
            				else {
HXLINE( 425)					_hx_tmp = false;
            				}
HXDLIN( 425)				if (_hx_tmp) {
HXLINE( 427)					 ::hxd::earcut::EarNode c = this->splitPolygon(a,b);
HXLINE( 430)					a = this->filterPoints(a,a->next);
HXLINE( 431)					c = this->filterPoints(c,c->next);
HXLINE( 434)					this->earcutLinked(a,null());
HXLINE( 435)					this->earcutLinked(c,null());
HXLINE( 436)					return;
            				}
HXLINE( 438)				b = b->next;
            			}
HXLINE( 440)			a = a->next;
HXLINE( 422)			if (!(::hx::IsInstanceNotEq( a,start ))) {
HXLINE( 422)				goto _hx_goto_42;
            			}
            		}
            		_hx_goto_42:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Earcut_obj,splitEarcut,(void))

 ::hxd::earcut::EarNode Earcut_obj::splitPolygon( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b){
            	HX_GC_STACKFRAME(&_hx_pos_15e51383b16a04e2_446_splitPolygon)
HXLINE( 447)		int i = a->i;
HXDLIN( 447)		Float x = a->x;
HXDLIN( 447)		Float y = a->y;
HXDLIN( 447)		 ::hxd::earcut::EarNode last = null();
HXDLIN( 447)		 ::hxd::earcut::EarNode n = this->cache;
HXDLIN( 447)		if (::hx::IsNull( n )) {
HXLINE( 447)			n =  ::hxd::earcut::EarNode_obj::__alloc( HX_CTX );
HXDLIN( 447)			n->allocNext = this->allocated;
HXDLIN( 447)			this->allocated = n;
            		}
            		else {
HXLINE( 447)			this->cache = n->next;
            		}
HXDLIN( 447)		n->i = i;
HXDLIN( 447)		n->z = -1;
HXDLIN( 447)		n->x = x;
HXDLIN( 447)		n->y = y;
HXDLIN( 447)		n->next = null();
HXDLIN( 447)		n->prev = last;
HXDLIN( 447)		n->steiner = false;
HXDLIN( 447)		n->prevZ = null();
HXDLIN( 447)		n->nextZ = null();
HXDLIN( 447)		if (::hx::IsNotNull( last )) {
HXLINE( 447)			last->next = n;
            		}
HXDLIN( 447)		 ::hxd::earcut::EarNode a2 = n;
HXLINE( 448)		int i1 = b->i;
HXDLIN( 448)		Float x1 = b->x;
HXDLIN( 448)		Float y1 = b->y;
HXDLIN( 448)		 ::hxd::earcut::EarNode last1 = null();
HXDLIN( 448)		 ::hxd::earcut::EarNode n1 = this->cache;
HXDLIN( 448)		if (::hx::IsNull( n1 )) {
HXLINE( 448)			n1 =  ::hxd::earcut::EarNode_obj::__alloc( HX_CTX );
HXDLIN( 448)			n1->allocNext = this->allocated;
HXDLIN( 448)			this->allocated = n1;
            		}
            		else {
HXLINE( 448)			this->cache = n1->next;
            		}
HXDLIN( 448)		n1->i = i1;
HXDLIN( 448)		n1->z = -1;
HXDLIN( 448)		n1->x = x1;
HXDLIN( 448)		n1->y = y1;
HXDLIN( 448)		n1->next = null();
HXDLIN( 448)		n1->prev = last1;
HXDLIN( 448)		n1->steiner = false;
HXDLIN( 448)		n1->prevZ = null();
HXDLIN( 448)		n1->nextZ = null();
HXDLIN( 448)		if (::hx::IsNotNull( last1 )) {
HXLINE( 448)			last1->next = n1;
            		}
HXLINE( 447)		 ::hxd::earcut::EarNode b2 = n1;
HXDLIN( 447)		 ::hxd::earcut::EarNode an = a->next;
HXDLIN( 447)		 ::hxd::earcut::EarNode bp = b->prev;
HXLINE( 452)		a->next = b;
HXLINE( 453)		b->prev = a;
HXLINE( 455)		a2->next = an;
HXLINE( 456)		an->prev = a2;
HXLINE( 458)		b2->next = a2;
HXLINE( 459)		a2->prev = b2;
HXLINE( 461)		bp->next = b2;
HXLINE( 462)		b2->prev = bp;
HXLINE( 464)		return b2;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,splitPolygon,return )

bool Earcut_obj::pointInTriangle(Float ax,Float ay,Float bx,Float by,Float cx,Float cy,Float px,Float py){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_468_pointInTriangle)
HXDLIN( 468)		bool _hx_tmp;
HXDLIN( 468)		if (((((cx - px) * (ay - py)) - ((ax - px) * (cy - py))) >= 0)) {
HXDLIN( 468)			_hx_tmp = ((((ax - px) * (by - py)) - ((bx - px) * (ay - py))) >= 0);
            		}
            		else {
HXDLIN( 468)			_hx_tmp = false;
            		}
HXDLIN( 468)		if (_hx_tmp) {
HXLINE( 470)			return ((((bx - px) * (cy - py)) - ((cx - px) * (by - py))) >= 0);
            		}
            		else {
HXDLIN( 468)			return false;
            		}
HXDLIN( 468)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC8(Earcut_obj,pointInTriangle,return )

bool Earcut_obj::isValidDiagonal( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_475_isValidDiagonal)
HXDLIN( 475)		bool _hx_tmp;
HXDLIN( 475)		if ((a->x == b->x)) {
HXDLIN( 475)			_hx_tmp = (a->y == b->y);
            		}
            		else {
HXDLIN( 475)			_hx_tmp = false;
            		}
HXDLIN( 475)		if (!(_hx_tmp)) {
HXDLIN( 475)			bool _hx_tmp;
HXDLIN( 475)			bool _hx_tmp1;
HXDLIN( 475)			bool _hx_tmp2;
HXDLIN( 475)			bool _hx_tmp3;
HXDLIN( 475)			if ((a->next->i != b->i)) {
HXDLIN( 475)				_hx_tmp3 = (a->prev->i != b->i);
            			}
            			else {
HXDLIN( 475)				_hx_tmp3 = false;
            			}
HXDLIN( 475)			if (_hx_tmp3) {
HXDLIN( 475)				_hx_tmp2 = !(this->intersectsPolygon(a,b));
            			}
            			else {
HXDLIN( 475)				_hx_tmp2 = false;
            			}
HXDLIN( 475)			if (_hx_tmp2) {
HXLINE( 476)				 ::hxd::earcut::EarNode p = a->prev;
HXDLIN( 476)				 ::hxd::earcut::EarNode r = a->next;
HXDLIN( 476)				if (((((a->y - p->y) * (r->x - a->x)) - ((a->x - p->x) * (r->y - a->y))) < 0)) {
HXLINE( 476)					 ::hxd::earcut::EarNode r = a->next;
HXDLIN( 476)					if (((((b->y - a->y) * (r->x - b->x)) - ((b->x - a->x) * (r->y - b->y))) >= 0)) {
HXLINE( 476)						 ::hxd::earcut::EarNode q = a->prev;
HXLINE( 475)						_hx_tmp1 = ((((q->y - a->y) * (b->x - q->x)) - ((q->x - a->x) * (b->y - q->y))) >= 0);
            					}
            					else {
HXDLIN( 475)						_hx_tmp1 = false;
            					}
            				}
            				else {
HXLINE( 476)					 ::hxd::earcut::EarNode r = a->prev;
HXDLIN( 476)					if (!(((((b->y - a->y) * (r->x - b->x)) - ((b->x - a->x) * (r->y - b->y))) < 0))) {
HXLINE( 476)						 ::hxd::earcut::EarNode q = a->next;
HXLINE( 475)						_hx_tmp1 = ((((q->y - a->y) * (b->x - q->x)) - ((q->x - a->x) * (b->y - q->y))) < 0);
            					}
            					else {
HXDLIN( 475)						_hx_tmp1 = true;
            					}
            				}
            			}
            			else {
HXDLIN( 475)				_hx_tmp1 = false;
            			}
HXDLIN( 475)			if (_hx_tmp1) {
HXLINE( 476)				 ::hxd::earcut::EarNode p = b->prev;
HXDLIN( 476)				 ::hxd::earcut::EarNode r = b->next;
HXDLIN( 476)				if (((((b->y - p->y) * (r->x - b->x)) - ((b->x - p->x) * (r->y - b->y))) < 0)) {
HXLINE( 476)					 ::hxd::earcut::EarNode r = b->next;
HXDLIN( 476)					if (((((a->y - b->y) * (r->x - a->x)) - ((a->x - b->x) * (r->y - a->y))) >= 0)) {
HXLINE( 476)						 ::hxd::earcut::EarNode q = b->prev;
HXLINE( 475)						_hx_tmp = ((((q->y - b->y) * (a->x - q->x)) - ((q->x - b->x) * (a->y - q->y))) >= 0);
            					}
            					else {
HXDLIN( 475)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 476)					 ::hxd::earcut::EarNode r = b->prev;
HXDLIN( 476)					if (!(((((a->y - b->y) * (r->x - a->x)) - ((a->x - b->x) * (r->y - a->y))) < 0))) {
HXLINE( 476)						 ::hxd::earcut::EarNode q = b->next;
HXLINE( 475)						_hx_tmp = ((((q->y - b->y) * (a->x - q->x)) - ((q->x - b->x) * (a->y - q->y))) < 0);
            					}
            					else {
HXDLIN( 475)						_hx_tmp = true;
            					}
            				}
            			}
            			else {
HXDLIN( 475)				_hx_tmp = false;
            			}
HXDLIN( 475)			if (_hx_tmp) {
HXLINE( 476)				return this->middleInside(a,b);
            			}
            			else {
HXDLIN( 475)				return false;
            			}
            		}
            		else {
HXDLIN( 475)			return true;
            		}
HXDLIN( 475)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,isValidDiagonal,return )

bool Earcut_obj::middleInside( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_480_middleInside)
HXLINE( 481)		 ::hxd::earcut::EarNode p = a;
HXDLIN( 481)		bool inside = false;
HXDLIN( 481)		Float px = ((a->x + b->x) / ( (Float)(2) ));
HXDLIN( 481)		Float py = ((a->y + b->y) / ( (Float)(2) ));
HXLINE( 485)		while(true){
HXLINE( 486)			bool _hx_tmp;
HXDLIN( 486)			if (((p->y > py) != (p->next->y > py))) {
HXLINE( 486)				_hx_tmp = (px < ((((p->next->x - p->x) * (py - p->y)) / (p->next->y - p->y)) + p->x));
            			}
            			else {
HXLINE( 486)				_hx_tmp = false;
            			}
HXDLIN( 486)			if (_hx_tmp) {
HXLINE( 487)				inside = !(inside);
            			}
HXLINE( 488)			p = p->next;
HXLINE( 485)			if (!(::hx::IsInstanceNotEq( p,a ))) {
HXLINE( 485)				goto _hx_goto_48;
            			}
            		}
            		_hx_goto_48:;
HXLINE( 491)		return inside;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,middleInside,return )

bool Earcut_obj::intersectsPolygon( ::hxd::earcut::EarNode a, ::hxd::earcut::EarNode b){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_495_intersectsPolygon)
HXLINE( 496)		 ::hxd::earcut::EarNode p = a;
HXLINE( 497)		while(true){
HXLINE( 498)			bool _hx_tmp;
HXDLIN( 498)			bool _hx_tmp1;
HXDLIN( 498)			bool _hx_tmp2;
HXDLIN( 498)			bool _hx_tmp3;
HXDLIN( 498)			if ((p->i != a->i)) {
HXLINE( 498)				_hx_tmp3 = (p->next->i != a->i);
            			}
            			else {
HXLINE( 498)				_hx_tmp3 = false;
            			}
HXDLIN( 498)			if (_hx_tmp3) {
HXLINE( 498)				_hx_tmp2 = (p->i != b->i);
            			}
            			else {
HXLINE( 498)				_hx_tmp2 = false;
            			}
HXDLIN( 498)			if (_hx_tmp2) {
HXLINE( 498)				_hx_tmp1 = (p->next->i != b->i);
            			}
            			else {
HXLINE( 498)				_hx_tmp1 = false;
            			}
HXDLIN( 498)			if (_hx_tmp1) {
HXLINE( 499)				 ::hxd::earcut::EarNode q1 = p->next;
HXDLIN( 499)				if ((((((q1->y - p->y) * (a->x - q1->x)) - ((q1->x - p->x) * (a->y - q1->y))) > 0) != ((((q1->y - p->y) * (b->x - q1->x)) - ((q1->x - p->x) * (b->y - q1->y))) > 0))) {
HXLINE( 498)					_hx_tmp = (((((b->y - a->y) * (p->x - b->x)) - ((b->x - a->x) * (p->y - b->y))) > 0) != ((((b->y - a->y) * (q1->x - b->x)) - ((b->x - a->x) * (q1->y - b->y))) > 0));
            				}
            				else {
HXLINE( 498)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 498)				_hx_tmp = false;
            			}
HXDLIN( 498)			if (_hx_tmp) {
HXLINE( 499)				return true;
            			}
HXLINE( 500)			p = p->next;
HXLINE( 497)			if (!(::hx::IsInstanceNotEq( p,a ))) {
HXLINE( 497)				goto _hx_goto_50;
            			}
            		}
            		_hx_goto_50:;
HXLINE( 502)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,intersectsPolygon,return )

int Earcut_obj::zOrder(Float px,Float py){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_505_zOrder)
HXLINE( 507)		int x = ::Std_obj::_hx_int(((( (Float)(32767) ) * (px - this->minX)) / this->size));
HXLINE( 508)		int y = ::Std_obj::_hx_int(((( (Float)(32767) ) * (py - this->minY)) / this->size));
HXLINE( 510)		x = ((x | (x << 8)) & 16711935);
HXLINE( 511)		x = ((x | (x << 4)) & 252645135);
HXLINE( 512)		x = ((x | (x << 2)) & 858993459);
HXLINE( 513)		x = ((x | (x << 1)) & (int)1431655765);
HXLINE( 515)		y = ((y | (y << 8)) & 16711935);
HXLINE( 516)		y = ((y | (y << 4)) & 252645135);
HXLINE( 517)		y = ((y | (y << 2)) & 858993459);
HXLINE( 518)		y = ((y | (y << 1)) & (int)1431655765);
HXLINE( 520)		return (x | (y << 1));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Earcut_obj,zOrder,return )

void Earcut_obj::indexCurve( ::hxd::earcut::EarNode start){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_523_indexCurve)
HXLINE( 524)		 ::hxd::earcut::EarNode p = start;
HXLINE( 525)		while(true){
HXLINE( 526)			if ((p->z < 0)) {
HXLINE( 526)				Float py = p->y;
HXDLIN( 526)				int x = ::Std_obj::_hx_int(((( (Float)(32767) ) * (p->x - this->minX)) / this->size));
HXDLIN( 526)				int y = ::Std_obj::_hx_int(((( (Float)(32767) ) * (py - this->minY)) / this->size));
HXDLIN( 526)				x = ((x | (x << 8)) & 16711935);
HXDLIN( 526)				x = ((x | (x << 4)) & 252645135);
HXDLIN( 526)				x = ((x | (x << 2)) & 858993459);
HXDLIN( 526)				x = ((x | (x << 1)) & (int)1431655765);
HXDLIN( 526)				y = ((y | (y << 8)) & 16711935);
HXDLIN( 526)				y = ((y | (y << 4)) & 252645135);
HXDLIN( 526)				y = ((y | (y << 2)) & 858993459);
HXDLIN( 526)				y = ((y | (y << 1)) & (int)1431655765);
HXDLIN( 526)				p->z = (x | (y << 1));
            			}
HXLINE( 527)			p->prevZ = p->prev;
HXLINE( 528)			p->nextZ = p->next;
HXLINE( 529)			p = p->next;
HXLINE( 525)			if (!(::hx::IsInstanceNotEq( p,start ))) {
HXLINE( 525)				goto _hx_goto_53;
            			}
            		}
            		_hx_goto_53:;
HXLINE( 532)		p->prevZ->nextZ = null();
HXLINE( 533)		p->prevZ = null();
HXLINE( 535)		this->sortLinked(p);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Earcut_obj,indexCurve,(void))

 ::hxd::earcut::EarNode Earcut_obj::sortLinked( ::hxd::earcut::EarNode list){
            	HX_STACKFRAME(&_hx_pos_15e51383b16a04e2_538_sortLinked)
HXLINE( 539)		 ::hxd::earcut::EarNode p;
HXDLIN( 539)		 ::hxd::earcut::EarNode q;
HXDLIN( 539)		 ::hxd::earcut::EarNode e;
HXDLIN( 539)		 ::hxd::earcut::EarNode tail;
HXDLIN( 539)		int numMerges;
HXDLIN( 539)		int pSize;
HXDLIN( 539)		int qSize;
HXDLIN( 539)		int inSize = 1;
HXLINE( 542)		while(true){
HXLINE( 543)			p = list;
HXLINE( 544)			list = null();
HXLINE( 545)			tail = null();
HXLINE( 546)			numMerges = 0;
HXLINE( 548)			while(::hx::IsNotNull( p )){
HXLINE( 549)				numMerges = (numMerges + 1);
HXLINE( 550)				q = p;
HXLINE( 551)				pSize = 0;
HXLINE( 552)				{
HXLINE( 552)					int _g = 0;
HXDLIN( 552)					int _g1 = inSize;
HXDLIN( 552)					while((_g < _g1)){
HXLINE( 552)						_g = (_g + 1);
HXDLIN( 552)						int i = (_g - 1);
HXLINE( 553)						pSize = (pSize + 1);
HXLINE( 554)						q = q->nextZ;
HXLINE( 555)						if (::hx::IsNull( q )) {
HXLINE( 555)							goto _hx_goto_57;
            						}
            					}
            					_hx_goto_57:;
            				}
HXLINE( 558)				qSize = inSize;
HXLINE( 560)				while(true){
HXLINE( 560)					bool _hx_tmp;
HXDLIN( 560)					if ((pSize <= 0)) {
HXLINE( 560)						if ((qSize > 0)) {
HXLINE( 560)							_hx_tmp = ::hx::IsNotNull( q );
            						}
            						else {
HXLINE( 560)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 560)						_hx_tmp = true;
            					}
HXDLIN( 560)					if (!(_hx_tmp)) {
HXLINE( 560)						goto _hx_goto_58;
            					}
HXLINE( 562)					if ((pSize == 0)) {
HXLINE( 563)						e = q;
HXLINE( 564)						q = q->nextZ;
HXLINE( 565)						qSize = (qSize - 1);
            					}
            					else {
HXLINE( 566)						bool _hx_tmp;
HXDLIN( 566)						if ((qSize != 0)) {
HXLINE( 566)							_hx_tmp = ::hx::IsNull( q );
            						}
            						else {
HXLINE( 566)							_hx_tmp = true;
            						}
HXDLIN( 566)						if (_hx_tmp) {
HXLINE( 567)							e = p;
HXLINE( 568)							p = p->nextZ;
HXLINE( 569)							pSize = (pSize - 1);
            						}
            						else {
HXLINE( 570)							if ((p->z <= q->z)) {
HXLINE( 571)								e = p;
HXLINE( 572)								p = p->nextZ;
HXLINE( 573)								pSize = (pSize - 1);
            							}
            							else {
HXLINE( 575)								e = q;
HXLINE( 576)								q = q->nextZ;
HXLINE( 577)								qSize = (qSize - 1);
            							}
            						}
            					}
HXLINE( 580)					if (::hx::IsNotNull( tail )) {
HXLINE( 580)						tail->nextZ = e;
            					}
            					else {
HXLINE( 581)						list = e;
            					}
HXLINE( 583)					e->prevZ = tail;
HXLINE( 584)					tail = e;
            				}
            				_hx_goto_58:;
HXLINE( 587)				p = q;
            			}
HXLINE( 590)			tail->nextZ = null();
HXLINE( 591)			inSize = (inSize * 2);
HXLINE( 542)			if (!((numMerges > 1))) {
HXLINE( 542)				goto _hx_goto_55;
            			}
            		}
            		_hx_goto_55:;
HXLINE( 595)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Earcut_obj,sortLinked,return )


::hx::ObjectPtr< Earcut_obj > Earcut_obj::__new() {
	::hx::ObjectPtr< Earcut_obj > __this = new Earcut_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Earcut_obj > Earcut_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Earcut_obj *__this = (Earcut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Earcut_obj), true, "hxd.earcut.Earcut"));
	*(void **)__this = Earcut_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Earcut_obj::Earcut_obj()
{
}

void Earcut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Earcut);
	HX_MARK_MEMBER_NAME(triangles,"triangles");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(allocated,"allocated");
	HX_MARK_MEMBER_NAME(minX,"minX");
	HX_MARK_MEMBER_NAME(minY,"minY");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(hasSize,"hasSize");
	HX_MARK_END_CLASS();
}

void Earcut_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(triangles,"triangles");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(allocated,"allocated");
	HX_VISIT_MEMBER_NAME(minX,"minX");
	HX_VISIT_MEMBER_NAME(minY,"minY");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(hasSize,"hasSize");
}

::hx::Val Earcut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { return ::hx::Val( minX ); }
		if (HX_FIELD_EQ(inName,"minY") ) { return ::hx::Val( minY ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"area") ) { return ::hx::Val( area_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache ); }
		if (HX_FIELD_EQ(inName,"isEar") ) { return ::hx::Val( isEar_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"zOrder") ) { return ::hx::Val( zOrder_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasSize") ) { return ::hx::Val( hasSize ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compareX") ) { return ::hx::Val( compareX_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"triangles") ) { return ::hx::Val( triangles ); }
		if (HX_FIELD_EQ(inName,"allocated") ) { return ::hx::Val( allocated ); }
		if (HX_FIELD_EQ(inName,"allocNode") ) { return ::hx::Val( allocNode_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return ::hx::Val( intersects_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeNode") ) { return ::hx::Val( removeNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"indexCurve") ) { return ::hx::Val( indexCurve_dyn() ); }
		if (HX_FIELD_EQ(inName,"sortLinked") ) { return ::hx::Val( sortLinked_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLeftmost") ) { return ::hx::Val( getLeftmost_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEarHashed") ) { return ::hx::Val( isEarHashed_dyn() ); }
		if (HX_FIELD_EQ(inName,"splitEarcut") ) { return ::hx::Val( splitEarcut_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterPoints") ) { return ::hx::Val( filterPoints_dyn() ); }
		if (HX_FIELD_EQ(inName,"earcutLinked") ) { return ::hx::Val( earcutLinked_dyn() ); }
		if (HX_FIELD_EQ(inName,"splitPolygon") ) { return ::hx::Val( splitPolygon_dyn() ); }
		if (HX_FIELD_EQ(inName,"middleInside") ) { return ::hx::Val( middleInside_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"eliminateHole") ) { return ::hx::Val( eliminateHole_dyn() ); }
		if (HX_FIELD_EQ(inName,"locallyInside") ) { return ::hx::Val( locallyInside_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findHoleBridge") ) { return ::hx::Val( findHoleBridge_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"triangulateNode") ) { return ::hx::Val( triangulateNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"pointInTriangle") ) { return ::hx::Val( pointInTriangle_dyn() ); }
		if (HX_FIELD_EQ(inName,"isValidDiagonal") ) { return ::hx::Val( isValidDiagonal_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"intersectsPolygon") ) { return ::hx::Val( intersectsPolygon_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"triangulate_h2d_GPoint") ) { return ::hx::Val( triangulate_h2d_GPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"cureLocalIntersections") ) { return ::hx::Val( cureLocalIntersections_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"triangulate_h2d_col_Point") ) { return ::hx::Val( triangulate_h2d_col_Point_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setLinkedList_triangulate_T") ) { return ::hx::Val( setLinkedList_triangulate_T_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"eliminateHoles_triangulate_T") ) { return ::hx::Val( eliminateHoles_triangulate_T_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"setLinkedList_eliminateHoles_T") ) { return ::hx::Val( setLinkedList_eliminateHoles_T_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Earcut_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { minX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minY") ) { minY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast<  ::hxd::earcut::EarNode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasSize") ) { hasSize=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"triangles") ) { triangles=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allocated") ) { allocated=inValue.Cast<  ::hxd::earcut::EarNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Earcut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("triangles",ab,30,41,7f));
	outFields->push(HX_("cache",42,9a,14,41));
	outFields->push(HX_("allocated",07,93,8d,3c));
	outFields->push(HX_("minX",86,4e,5c,48));
	outFields->push(HX_("minY",87,4e,5c,48));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("hasSize",3b,c1,97,1b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Earcut_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Earcut_obj,triangles),HX_("triangles",ab,30,41,7f)},
	{::hx::fsObject /*  ::hxd::earcut::EarNode */ ,(int)offsetof(Earcut_obj,cache),HX_("cache",42,9a,14,41)},
	{::hx::fsObject /*  ::hxd::earcut::EarNode */ ,(int)offsetof(Earcut_obj,allocated),HX_("allocated",07,93,8d,3c)},
	{::hx::fsFloat,(int)offsetof(Earcut_obj,minX),HX_("minX",86,4e,5c,48)},
	{::hx::fsFloat,(int)offsetof(Earcut_obj,minY),HX_("minY",87,4e,5c,48)},
	{::hx::fsFloat,(int)offsetof(Earcut_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsBool,(int)offsetof(Earcut_obj,hasSize),HX_("hasSize",3b,c1,97,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Earcut_obj_sStaticStorageInfo = 0;
#endif

static ::String Earcut_obj_sMemberFields[] = {
	HX_("triangulate_h2d_GPoint",81,fc,d9,6b),
	HX_("triangulate_h2d_col_Point",b9,ec,fd,e2),
	HX_("eliminateHoles_triangulate_T",b3,4d,c8,f9),
	HX_("setLinkedList_eliminateHoles_T",ec,47,a7,32),
	HX_("setLinkedList_triangulate_T",5b,af,ea,54),
	HX_("triangles",ab,30,41,7f),
	HX_("cache",42,9a,14,41),
	HX_("allocated",07,93,8d,3c),
	HX_("minX",86,4e,5c,48),
	HX_("minY",87,4e,5c,48),
	HX_("size",c1,a0,53,4c),
	HX_("hasSize",3b,c1,97,1b),
	HX_("triangulateNode",4e,a1,38,7e),
	HX_("eliminateHole",c2,4b,c0,8f),
	HX_("findHoleBridge",82,83,f3,25),
	HX_("getLeftmost",c0,ba,76,8a),
	HX_("compareX",13,78,8c,78),
	HX_("equals",3f,ee,f2,bf),
	HX_("area",8d,8b,74,40),
	HX_("intersects",b4,c2,eb,e3),
	HX_("locallyInside",d4,a6,aa,3a),
	HX_("filterPoints",fb,3f,86,03),
	HX_("removeNode",66,44,29,c6),
	HX_("allocNode",17,b9,fa,2f),
	HX_("earcutLinked",a5,2e,53,16),
	HX_("isEar",cc,22,4b,c1),
	HX_("isEarHashed",99,4f,4e,38),
	HX_("cureLocalIntersections",e4,29,0d,a3),
	HX_("splitEarcut",26,8d,e5,0b),
	HX_("splitPolygon",c0,ae,79,59),
	HX_("pointInTriangle",3d,00,a9,b8),
	HX_("isValidDiagonal",c7,5b,3b,2a),
	HX_("middleInside",31,35,d4,b8),
	HX_("intersectsPolygon",26,e6,4a,91),
	HX_("zOrder",b4,65,d8,8f),
	HX_("indexCurve",3d,c0,4b,1e),
	HX_("sortLinked",d7,58,8a,49),
	::String(null()) };

::hx::Class Earcut_obj::__mClass;

void Earcut_obj::__register()
{
	Earcut_obj _hx_dummy;
	Earcut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.earcut.Earcut",b4,31,92,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Earcut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Earcut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Earcut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Earcut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace earcut
