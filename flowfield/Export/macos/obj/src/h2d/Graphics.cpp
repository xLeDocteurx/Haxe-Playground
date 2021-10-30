#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
#ifndef INCLUDED_h2d_GPoint
#include <h2d/GPoint.h>
#endif
#ifndef INCLUDED_h2d_Graphics
#include <h2d/Graphics.h>
#endif
#ifndef INCLUDED_h2d_Object
#include <h2d/Object.h>
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h2d__Graphics_GraphicsContent
#include <h2d/_Graphics/GraphicsContent.h>
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_earcut_Earcut
#include <hxd/earcut/Earcut.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7c81022049e3eaa4_157_new,"h2d.Graphics","new",0x93eaadf1,"h2d.Graphics.new","h2d/Graphics.hx",157,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_208_onRemove,"h2d.Graphics","onRemove",0x695ce792,"h2d.Graphics.onRemove","h2d/Graphics.hx",208,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_216_clear,"h2d.Graphics","clear",0x1591955e,"h2d.Graphics.clear","h2d/Graphics.hx",216,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_227_getBoundsRec,"h2d.Graphics","getBoundsRec",0xf6d8c6b4,"h2d.Graphics.getBoundsRec","h2d/Graphics.hx",227,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_232_isConvex,"h2d.Graphics","isConvex",0xa56f67c0,"h2d.Graphics.isConvex","h2d/Graphics.hx",232,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_248_flushLine,"h2d.Graphics","flushLine",0x3b4d3929,"h2d.Graphics.flushLine","h2d/Graphics.hx",248,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_376_flushFill,"h2d.Graphics","flushFill",0x3755efb8,"h2d.Graphics.flushFill","h2d/Graphics.hx",376,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_407_flush,"h2d.Graphics","flush",0xcfd18695,"h2d.Graphics.flush","h2d/Graphics.hx",407,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_432_beginFill,"h2d.Graphics","beginFill",0x89d88d9d,"h2d.Graphics.beginFill","h2d/Graphics.hx",432,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_455_beginTileFill,"h2d.Graphics","beginTileFill",0x831548eb,"h2d.Graphics.beginTileFill","h2d/Graphics.hx",455,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_497_drawTile,"h2d.Graphics","drawTile",0xe68dca21,"h2d.Graphics.drawTile","h2d/Graphics.hx",497,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_510_lineStyle,"h2d.Graphics","lineStyle",0xc85b88ee,"h2d.Graphics.lineStyle","h2d/Graphics.hx",510,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_522_moveTo,"h2d.Graphics","moveTo",0x8ed605fb,"h2d.Graphics.moveTo","h2d/Graphics.hx",522,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_530_endFill,"h2d.Graphics","endFill",0x47c4020f,"h2d.Graphics.endFill","h2d/Graphics.hx",530,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_542_setColor,"h2d.Graphics","setColor",0xddb82f30,"h2d.Graphics.setColor","h2d/Graphics.hx",542,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_556_drawRect,"h2d.Graphics","drawRect",0xe5384c17,"h2d.Graphics.drawRect","h2d/Graphics.hx",556,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_582_drawRoundedRect,"h2d.Graphics","drawRoundedRect",0x3ae5295e,"h2d.Graphics.drawRoundedRect","h2d/Graphics.hx",582,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_620_drawCircle,"h2d.Graphics","drawCircle",0x351253c3,"h2d.Graphics.drawCircle","h2d/Graphics.hx",620,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_642_drawEllipse,"h2d.Graphics","drawEllipse",0x50c6dbcb,"h2d.Graphics.drawEllipse","h2d/Graphics.hx",642,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_667_drawPie,"h2d.Graphics","drawPie",0x1db8b8b9,"h2d.Graphics.drawPie","h2d/Graphics.hx",667,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_695_drawPieInner,"h2d.Graphics","drawPieInner",0x1afbaa1d,"h2d.Graphics.drawPieInner","h2d/Graphics.hx",695,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_732_drawRectanglePie,"h2d.Graphics","drawRectanglePie",0xa7736d50,"h2d.Graphics.drawRectanglePie","h2d/Graphics.hx",732,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_762_curveTo,"h2d.Graphics","curveTo",0xf06bda1b,"h2d.Graphics.curveTo","h2d/Graphics.hx",762,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_780_cubicCurveTo,"h2d.Graphics","cubicCurveTo",0xabe3702f,"h2d.Graphics.cubicCurveTo","h2d/Graphics.hx",780,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_808_lineTo,"h2d.Graphics","lineTo",0xaec9799e,"h2d.Graphics.lineTo","h2d/Graphics.hx",808,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_822_addVertex,"h2d.Graphics","addVertex",0x56aef0b6,"h2d.Graphics.addVertex","h2d/Graphics.hx",822,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_834_draw,"h2d.Graphics","draw",0xd2db2d53,"h2d.Graphics.draw","h2d/Graphics.hx",834,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_839_sync,"h2d.Graphics","sync",0xdccabbaa,"h2d.Graphics.sync","h2d/Graphics.hx",839,0x5cd0883e)
HX_LOCAL_STACK_FRAME(_hx_pos_7c81022049e3eaa4_374_boot,"h2d.Graphics","boot",0xd1868581,"h2d.Graphics.boot","h2d/Graphics.hx",374,0x5cd0883e)
namespace h2d{

void Graphics_obj::__construct( ::h2d::Object parent){
            	HX_GC_STACKFRAME(&_hx_pos_7c81022049e3eaa4_157_new)
HXLINE( 195)		this->bevel = ((Float)0.25);
HXLINE( 183)		this->my = ((Float)0.);
HXLINE( 182)		this->mx = ((Float)0.);
HXLINE( 181)		this->md = ((Float)1.);
HXLINE( 180)		this->mc = ((Float)0.);
HXLINE( 179)		this->mb = ((Float)0.);
HXLINE( 178)		this->ma = ((Float)1.);
HXLINE( 202)		super::__construct(parent);
HXLINE( 203)		this->content =  ::h2d::_Graphics::GraphicsContent_obj::__alloc( HX_CTX );
HXLINE( 204)		this->tile = ::h2d::Tile_obj::fromColor(16777215,null(),null(),null());
HXLINE( 205)		this->clear();
            	}

Dynamic Graphics_obj::__CreateEmpty() { return new Graphics_obj; }

void *Graphics_obj::_hx_vtable = 0;

Dynamic Graphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Graphics_obj > _hx_result = new Graphics_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Graphics_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6c6b2aec) {
		if (inClassId<=(int)0x0af28419) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0af28419;
		} else {
			return inClassId==(int)0x6c6b2aec;
		}
	} else {
		return inClassId==(int)0x773a17e1;
	}
}

void Graphics_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_208_onRemove)
HXLINE( 209)		this->super::onRemove();
HXLINE( 210)		this->clear();
            	}


void Graphics_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_216_clear)
HXLINE( 217)		this->content->clear();
HXLINE( 218)		this->tmpPoints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 219)		this->pindex = 0;
HXLINE( 220)		this->lineSize = ( (Float)(0) );
HXLINE( 221)		this->xMin = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 222)		this->yMin = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 223)		this->yMax = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 224)		this->xMax = ::Math_obj::NEGATIVE_INFINITY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

void Graphics_obj::getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_227_getBoundsRec)
HXLINE( 228)		this->super::getBoundsRec(relativeTo,out,forSize);
HXLINE( 229)		if (::hx::IsNotNull( this->tile )) {
HXLINE( 229)			this->addBounds(relativeTo,out,this->xMin,this->yMin,(this->xMax - this->xMin),(this->yMax - this->yMin));
            		}
            	}


bool Graphics_obj::isConvex(::Array< ::Dynamic> points){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_232_isConvex)
HXLINE( 233)		bool first = true;
HXDLIN( 233)		bool sign = false;
HXLINE( 234)		{
HXLINE( 234)			int _g = 0;
HXDLIN( 234)			int _g1 = points->length;
HXDLIN( 234)			while((_g < _g1)){
HXLINE( 234)				_g = (_g + 1);
HXDLIN( 234)				int i = (_g - 1);
HXLINE( 235)				 ::h2d::GPoint p1 = points->__get(i).StaticCast<  ::h2d::GPoint >();
HXLINE( 236)				 ::h2d::GPoint p2 = points->__get(::hx::Mod((i + 1),points->length)).StaticCast<  ::h2d::GPoint >();
HXLINE( 237)				 ::h2d::GPoint p3 = points->__get(::hx::Mod((i + 2),points->length)).StaticCast<  ::h2d::GPoint >();
HXLINE( 238)				bool s = ((((p2->x - p1->x) * (p3->y - p1->y)) - ((p2->y - p1->y) * (p3->x - p1->x))) > 0);
HXLINE( 239)				if (first) {
HXLINE( 240)					first = false;
HXLINE( 241)					sign = s;
            				}
            				else {
HXLINE( 242)					if ((sign != s)) {
HXLINE( 243)						return false;
            					}
            				}
            			}
            		}
HXLINE( 245)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,isConvex,return )

void Graphics_obj::flushLine(int start){
            	HX_GC_STACKFRAME(&_hx_pos_7c81022049e3eaa4_248_flushLine)
HXLINE( 249)		::Array< ::Dynamic> pts = this->tmpPoints;
HXLINE( 250)		int last = (pts->length - 1);
HXLINE( 251)		 ::h2d::GPoint prev = pts->__get(last).StaticCast<  ::h2d::GPoint >();
HXLINE( 252)		 ::h2d::GPoint p = pts->__get(0).StaticCast<  ::h2d::GPoint >();
HXLINE( 254)		bool closed;
HXDLIN( 254)		if ((p->x == prev->x)) {
HXLINE( 254)			closed = (p->y == prev->y);
            		}
            		else {
HXLINE( 254)			closed = false;
            		}
HXLINE( 255)		int count = pts->length;
HXLINE( 256)		if (!(closed)) {
HXLINE( 257)			 ::h2d::GPoint prevLast = pts->__get((last - 1)).StaticCast<  ::h2d::GPoint >();
HXLINE( 258)			if (::hx::IsNull( prevLast )) {
HXLINE( 258)				prevLast = p;
            			}
HXLINE( 259)			 ::h2d::GPoint gp =  ::h2d::GPoint_obj::__alloc( HX_CTX );
HXLINE( 260)			gp->load(((prev->x * ( (Float)(2) )) - prevLast->x),((prev->y * ( (Float)(2) )) - prevLast->y),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 261)			pts->push(gp);
HXLINE( 262)			 ::h2d::GPoint pNext = pts->__get(1).StaticCast<  ::h2d::GPoint >();
HXLINE( 263)			if (::hx::IsNull( pNext )) {
HXLINE( 263)				pNext = p;
            			}
HXLINE( 264)			 ::h2d::GPoint gp1 =  ::h2d::GPoint_obj::__alloc( HX_CTX );
HXLINE( 265)			gp1->load(((p->x * ( (Float)(2) )) - pNext->x),((p->y * ( (Float)(2) )) - pNext->y),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 266)			prev = gp1;
            		}
            		else {
HXLINE( 267)			if (::hx::IsInstanceNotEq( p,prev )) {
HXLINE( 268)				count = (count - 1);
HXLINE( 269)				last = (last - 1);
HXLINE( 270)				prev = pts->__get(last).StaticCast<  ::h2d::GPoint >();
            			}
            		}
HXLINE( 273)		{
HXLINE( 273)			int _g = 0;
HXDLIN( 273)			int _g1 = count;
HXDLIN( 273)			while((_g < _g1)){
HXLINE( 273)				_g = (_g + 1);
HXDLIN( 273)				int i = (_g - 1);
HXLINE( 274)				 ::h2d::GPoint next = pts->__get(::hx::Mod((i + 1),pts->length)).StaticCast<  ::h2d::GPoint >();
HXLINE( 276)				Float nx1 = (prev->y - p->y);
HXLINE( 277)				Float ny1 = (p->x - prev->x);
HXLINE( 278)				Float ns1 = (((Float)1.) / ::Math_obj::sqrt(((nx1 * nx1) + (ny1 * ny1))));
HXLINE( 280)				Float nx2 = (p->y - next->y);
HXLINE( 281)				Float ny2 = (next->x - p->x);
HXLINE( 282)				Float ns2 = (((Float)1.) / ::Math_obj::sqrt(((nx2 * nx2) + (ny2 * ny2))));
HXLINE( 284)				Float nx = ((nx1 * ns1) + (nx2 * ns2));
HXLINE( 285)				Float ny = ((ny1 * ns1) + (ny2 * ns2));
HXLINE( 286)				Float ns = (((Float)1.) / ::Math_obj::sqrt(((nx * nx) + (ny * ny))));
HXLINE( 288)				nx = (nx * ns);
HXLINE( 289)				ny = (ny * ns);
HXLINE( 291)				Float size = (((nx * nx1) * ns1) + ((ny * ny1) * ns1));
HXLINE( 295)				if ((size < ((Float)0.1))) {
HXLINE( 295)					size = ((Float)0.1);
            				}
HXLINE( 298)				Float d = ((this->lineSize * ((Float)0.5)) / size);
HXLINE( 299)				nx = (nx * d);
HXLINE( 300)				ny = (ny * d);
HXLINE( 302)				if ((size > this->bevel)) {
HXLINE( 303)					{
HXLINE( 303)						 ::h2d::_Graphics::GraphicsContent _this = this->content;
HXDLIN( 303)						Float y = (p->y + ny);
HXDLIN( 303)						Float r = p->r;
HXDLIN( 303)						Float g = p->g;
HXDLIN( 303)						Float b = p->b;
HXDLIN( 303)						Float a = p->a;
HXDLIN( 303)						_this->tmp->push((p->x + nx));
HXDLIN( 303)						_this->tmp->push(y);
HXDLIN( 303)						_this->tmp->push(0);
HXDLIN( 303)						_this->tmp->push(0);
HXDLIN( 303)						_this->tmp->push(r);
HXDLIN( 303)						_this->tmp->push(g);
HXDLIN( 303)						_this->tmp->push(b);
HXDLIN( 303)						_this->tmp->push(a);
HXDLIN( 303)						_this->bufferDirty = true;
            					}
HXLINE( 304)					{
HXLINE( 304)						 ::h2d::_Graphics::GraphicsContent _this1 = this->content;
HXDLIN( 304)						Float y1 = (p->y - ny);
HXDLIN( 304)						Float r1 = p->r;
HXDLIN( 304)						Float g1 = p->g;
HXDLIN( 304)						Float b1 = p->b;
HXDLIN( 304)						Float a1 = p->a;
HXDLIN( 304)						_this1->tmp->push((p->x - nx));
HXDLIN( 304)						_this1->tmp->push(y1);
HXDLIN( 304)						_this1->tmp->push(0);
HXDLIN( 304)						_this1->tmp->push(0);
HXDLIN( 304)						_this1->tmp->push(r1);
HXDLIN( 304)						_this1->tmp->push(g1);
HXDLIN( 304)						_this1->tmp->push(b1);
HXDLIN( 304)						_this1->tmp->push(a1);
HXDLIN( 304)						_this1->bufferDirty = true;
            					}
HXLINE( 306)					int pnext;
HXDLIN( 306)					if ((i == last)) {
HXLINE( 306)						pnext = start;
            					}
            					else {
HXLINE( 306)						pnext = (this->pindex + 2);
            					}
HXLINE( 308)					bool _hx_tmp;
HXDLIN( 308)					if ((i >= (count - 1))) {
HXLINE( 308)						_hx_tmp = closed;
            					}
            					else {
HXLINE( 308)						_hx_tmp = true;
            					}
HXDLIN( 308)					if (_hx_tmp) {
HXLINE( 309)						{
HXLINE( 309)							 ::h2d::_Graphics::GraphicsContent _this = this->content;
HXDLIN( 309)							_this->index->push(this->pindex);
HXDLIN( 309)							_this->indexDirty = true;
            						}
HXLINE( 310)						{
HXLINE( 310)							 ::h2d::_Graphics::GraphicsContent _this1 = this->content;
HXDLIN( 310)							_this1->index->push((this->pindex + 1));
HXDLIN( 310)							_this1->indexDirty = true;
            						}
HXLINE( 311)						{
HXLINE( 311)							 ::h2d::_Graphics::GraphicsContent _this2 = this->content;
HXDLIN( 311)							_this2->index->push(pnext);
HXDLIN( 311)							_this2->indexDirty = true;
            						}
HXLINE( 313)						{
HXLINE( 313)							 ::h2d::_Graphics::GraphicsContent _this3 = this->content;
HXDLIN( 313)							_this3->index->push((this->pindex + 1));
HXDLIN( 313)							_this3->indexDirty = true;
            						}
HXLINE( 314)						{
HXLINE( 314)							 ::h2d::_Graphics::GraphicsContent _this4 = this->content;
HXDLIN( 314)							_this4->index->push(pnext);
HXDLIN( 314)							_this4->indexDirty = true;
            						}
HXLINE( 315)						{
HXLINE( 315)							 ::h2d::_Graphics::GraphicsContent _this5 = this->content;
HXDLIN( 315)							_this5->index->push((pnext + 1));
HXDLIN( 315)							_this5->indexDirty = true;
            						}
            					}
HXLINE( 317)					 ::h2d::Graphics _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)					_hx_tmp1->pindex = (_hx_tmp1->pindex + 2);
            				}
            				else {
HXLINE( 321)					Float n0x = (next->x - p->x);
HXLINE( 322)					Float n0y = (next->y - p->y);
HXLINE( 323)					Float sign = ((n0x * nx) + (n0y * ny));
HXLINE( 325)					Float nnx = -(ny);
HXLINE( 326)					Float nny = nx;
HXLINE( 328)					Float size = (((nnx * nx1) * ns1) + ((nny * ny1) * ns1));
HXLINE( 329)					Float d = ((this->lineSize * ((Float)0.5)) / size);
HXLINE( 330)					nnx = (nnx * d);
HXLINE( 331)					nny = (nny * d);
HXLINE( 333)					int pnext;
HXDLIN( 333)					if ((i == last)) {
HXLINE( 333)						pnext = start;
            					}
            					else {
HXLINE( 333)						pnext = (this->pindex + 3);
            					}
HXLINE( 335)					if ((sign > 0)) {
HXLINE( 336)						{
HXLINE( 336)							 ::h2d::_Graphics::GraphicsContent _this = this->content;
HXDLIN( 336)							Float y = (p->y + ny);
HXDLIN( 336)							Float r = p->r;
HXDLIN( 336)							Float g = p->g;
HXDLIN( 336)							Float b = p->b;
HXDLIN( 336)							Float a = p->a;
HXDLIN( 336)							_this->tmp->push((p->x + nx));
HXDLIN( 336)							_this->tmp->push(y);
HXDLIN( 336)							_this->tmp->push(0);
HXDLIN( 336)							_this->tmp->push(0);
HXDLIN( 336)							_this->tmp->push(r);
HXDLIN( 336)							_this->tmp->push(g);
HXDLIN( 336)							_this->tmp->push(b);
HXDLIN( 336)							_this->tmp->push(a);
HXDLIN( 336)							_this->bufferDirty = true;
            						}
HXLINE( 337)						{
HXLINE( 337)							 ::h2d::_Graphics::GraphicsContent _this1 = this->content;
HXDLIN( 337)							Float y1 = (p->y - nny);
HXDLIN( 337)							Float r1 = p->r;
HXDLIN( 337)							Float g1 = p->g;
HXDLIN( 337)							Float b1 = p->b;
HXDLIN( 337)							Float a1 = p->a;
HXDLIN( 337)							_this1->tmp->push((p->x - nnx));
HXDLIN( 337)							_this1->tmp->push(y1);
HXDLIN( 337)							_this1->tmp->push(0);
HXDLIN( 337)							_this1->tmp->push(0);
HXDLIN( 337)							_this1->tmp->push(r1);
HXDLIN( 337)							_this1->tmp->push(g1);
HXDLIN( 337)							_this1->tmp->push(b1);
HXDLIN( 337)							_this1->tmp->push(a1);
HXDLIN( 337)							_this1->bufferDirty = true;
            						}
HXLINE( 338)						{
HXLINE( 338)							 ::h2d::_Graphics::GraphicsContent _this2 = this->content;
HXDLIN( 338)							Float y2 = (p->y + nny);
HXDLIN( 338)							Float r2 = p->r;
HXDLIN( 338)							Float g2 = p->g;
HXDLIN( 338)							Float b2 = p->b;
HXDLIN( 338)							Float a2 = p->a;
HXDLIN( 338)							_this2->tmp->push((p->x + nnx));
HXDLIN( 338)							_this2->tmp->push(y2);
HXDLIN( 338)							_this2->tmp->push(0);
HXDLIN( 338)							_this2->tmp->push(0);
HXDLIN( 338)							_this2->tmp->push(r2);
HXDLIN( 338)							_this2->tmp->push(g2);
HXDLIN( 338)							_this2->tmp->push(b2);
HXDLIN( 338)							_this2->tmp->push(a2);
HXDLIN( 338)							_this2->bufferDirty = true;
            						}
HXLINE( 340)						{
HXLINE( 340)							 ::h2d::_Graphics::GraphicsContent _this3 = this->content;
HXDLIN( 340)							_this3->index->push(this->pindex);
HXDLIN( 340)							_this3->indexDirty = true;
            						}
HXLINE( 341)						{
HXLINE( 341)							 ::h2d::_Graphics::GraphicsContent _this4 = this->content;
HXDLIN( 341)							_this4->index->push(pnext);
HXDLIN( 341)							_this4->indexDirty = true;
            						}
HXLINE( 342)						{
HXLINE( 342)							 ::h2d::_Graphics::GraphicsContent _this5 = this->content;
HXDLIN( 342)							_this5->index->push((this->pindex + 2));
HXDLIN( 342)							_this5->indexDirty = true;
            						}
HXLINE( 344)						{
HXLINE( 344)							 ::h2d::_Graphics::GraphicsContent _this6 = this->content;
HXDLIN( 344)							_this6->index->push((this->pindex + 2));
HXDLIN( 344)							_this6->indexDirty = true;
            						}
HXLINE( 345)						{
HXLINE( 345)							 ::h2d::_Graphics::GraphicsContent _this7 = this->content;
HXDLIN( 345)							_this7->index->push(pnext);
HXDLIN( 345)							_this7->indexDirty = true;
            						}
HXLINE( 346)						{
HXLINE( 346)							 ::h2d::_Graphics::GraphicsContent _this8 = this->content;
HXDLIN( 346)							_this8->index->push((pnext + 1));
HXDLIN( 346)							_this8->indexDirty = true;
            						}
            					}
            					else {
HXLINE( 349)						{
HXLINE( 349)							 ::h2d::_Graphics::GraphicsContent _this = this->content;
HXDLIN( 349)							Float y = (p->y + nny);
HXDLIN( 349)							Float r = p->r;
HXDLIN( 349)							Float g = p->g;
HXDLIN( 349)							Float b = p->b;
HXDLIN( 349)							Float a = p->a;
HXDLIN( 349)							_this->tmp->push((p->x + nnx));
HXDLIN( 349)							_this->tmp->push(y);
HXDLIN( 349)							_this->tmp->push(0);
HXDLIN( 349)							_this->tmp->push(0);
HXDLIN( 349)							_this->tmp->push(r);
HXDLIN( 349)							_this->tmp->push(g);
HXDLIN( 349)							_this->tmp->push(b);
HXDLIN( 349)							_this->tmp->push(a);
HXDLIN( 349)							_this->bufferDirty = true;
            						}
HXLINE( 350)						{
HXLINE( 350)							 ::h2d::_Graphics::GraphicsContent _this1 = this->content;
HXDLIN( 350)							Float y1 = (p->y - ny);
HXDLIN( 350)							Float r1 = p->r;
HXDLIN( 350)							Float g1 = p->g;
HXDLIN( 350)							Float b1 = p->b;
HXDLIN( 350)							Float a1 = p->a;
HXDLIN( 350)							_this1->tmp->push((p->x - nx));
HXDLIN( 350)							_this1->tmp->push(y1);
HXDLIN( 350)							_this1->tmp->push(0);
HXDLIN( 350)							_this1->tmp->push(0);
HXDLIN( 350)							_this1->tmp->push(r1);
HXDLIN( 350)							_this1->tmp->push(g1);
HXDLIN( 350)							_this1->tmp->push(b1);
HXDLIN( 350)							_this1->tmp->push(a1);
HXDLIN( 350)							_this1->bufferDirty = true;
            						}
HXLINE( 351)						{
HXLINE( 351)							 ::h2d::_Graphics::GraphicsContent _this2 = this->content;
HXDLIN( 351)							Float y2 = (p->y - nny);
HXDLIN( 351)							Float r2 = p->r;
HXDLIN( 351)							Float g2 = p->g;
HXDLIN( 351)							Float b2 = p->b;
HXDLIN( 351)							Float a2 = p->a;
HXDLIN( 351)							_this2->tmp->push((p->x - nnx));
HXDLIN( 351)							_this2->tmp->push(y2);
HXDLIN( 351)							_this2->tmp->push(0);
HXDLIN( 351)							_this2->tmp->push(0);
HXDLIN( 351)							_this2->tmp->push(r2);
HXDLIN( 351)							_this2->tmp->push(g2);
HXDLIN( 351)							_this2->tmp->push(b2);
HXDLIN( 351)							_this2->tmp->push(a2);
HXDLIN( 351)							_this2->bufferDirty = true;
            						}
HXLINE( 353)						{
HXLINE( 353)							 ::h2d::_Graphics::GraphicsContent _this3 = this->content;
HXDLIN( 353)							_this3->index->push((this->pindex + 1));
HXDLIN( 353)							_this3->indexDirty = true;
            						}
HXLINE( 354)						{
HXLINE( 354)							 ::h2d::_Graphics::GraphicsContent _this4 = this->content;
HXDLIN( 354)							_this4->index->push(pnext);
HXDLIN( 354)							_this4->indexDirty = true;
            						}
HXLINE( 355)						{
HXLINE( 355)							 ::h2d::_Graphics::GraphicsContent _this5 = this->content;
HXDLIN( 355)							_this5->index->push((this->pindex + 2));
HXDLIN( 355)							_this5->indexDirty = true;
            						}
HXLINE( 357)						{
HXLINE( 357)							 ::h2d::_Graphics::GraphicsContent _this6 = this->content;
HXDLIN( 357)							_this6->index->push((this->pindex + 1));
HXDLIN( 357)							_this6->indexDirty = true;
            						}
HXLINE( 358)						{
HXLINE( 358)							 ::h2d::_Graphics::GraphicsContent _this7 = this->content;
HXDLIN( 358)							_this7->index->push(pnext);
HXDLIN( 358)							_this7->indexDirty = true;
            						}
HXLINE( 359)						{
HXLINE( 359)							 ::h2d::_Graphics::GraphicsContent _this8 = this->content;
HXDLIN( 359)							_this8->index->push((pnext + 1));
HXDLIN( 359)							_this8->indexDirty = true;
            						}
            					}
HXLINE( 362)					{
HXLINE( 362)						 ::h2d::_Graphics::GraphicsContent _this = this->content;
HXDLIN( 362)						_this->index->push(this->pindex);
HXDLIN( 362)						_this->indexDirty = true;
            					}
HXLINE( 363)					{
HXLINE( 363)						 ::h2d::_Graphics::GraphicsContent _this1 = this->content;
HXDLIN( 363)						_this1->index->push((this->pindex + 1));
HXDLIN( 363)						_this1->indexDirty = true;
            					}
HXLINE( 364)					{
HXLINE( 364)						 ::h2d::_Graphics::GraphicsContent _this2 = this->content;
HXDLIN( 364)						_this2->index->push((this->pindex + 2));
HXDLIN( 364)						_this2->indexDirty = true;
            					}
HXLINE( 366)					 ::h2d::Graphics _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 366)					_hx_tmp->pindex = (_hx_tmp->pindex + 3);
            				}
HXLINE( 369)				prev = p;
HXLINE( 370)				p = next;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,flushLine,(void))

void Graphics_obj::flushFill(int i0){
            	HX_GC_STACKFRAME(&_hx_pos_7c81022049e3eaa4_376_flushFill)
HXLINE( 378)		if ((this->tmpPoints->length < 3)) {
HXLINE( 379)			return;
            		}
HXLINE( 381)		::Array< ::Dynamic> pts = this->tmpPoints;
HXLINE( 382)		 ::h2d::GPoint p0 = pts->__get(0).StaticCast<  ::h2d::GPoint >();
HXLINE( 383)		 ::h2d::GPoint p1 = pts->__get((pts->length - 1)).StaticCast<  ::h2d::GPoint >();
HXLINE( 384)		 ::h2d::GPoint last = null();
HXLINE( 386)		bool _hx_tmp;
HXDLIN( 386)		Float f = (p0->x - p1->x);
HXDLIN( 386)		Float _hx_tmp1;
HXDLIN( 386)		if ((f < 0)) {
HXLINE( 386)			_hx_tmp1 = -(f);
            		}
            		else {
HXLINE( 386)			_hx_tmp1 = f;
            		}
HXDLIN( 386)		if ((_hx_tmp1 < ((Float)1e-9))) {
HXLINE( 386)			Float f = (p0->y - p1->y);
HXDLIN( 386)			Float _hx_tmp1;
HXDLIN( 386)			if ((f < 0)) {
HXLINE( 386)				_hx_tmp1 = -(f);
            			}
            			else {
HXLINE( 386)				_hx_tmp1 = f;
            			}
HXDLIN( 386)			_hx_tmp = (_hx_tmp1 < ((Float)1e-9));
            		}
            		else {
HXLINE( 386)			_hx_tmp = false;
            		}
HXDLIN( 386)		if (_hx_tmp) {
HXLINE( 387)			last = pts->pop().StaticCast<  ::h2d::GPoint >();
            		}
HXLINE( 389)		if (this->isConvex(pts)) {
HXLINE( 390)			int _g = 1;
HXDLIN( 390)			int _g1 = (pts->length - 1);
HXDLIN( 390)			while((_g < _g1)){
HXLINE( 390)				_g = (_g + 1);
HXDLIN( 390)				int i = (_g - 1);
HXLINE( 391)				{
HXLINE( 391)					 ::h2d::_Graphics::GraphicsContent _this = this->content;
HXDLIN( 391)					_this->index->push(i0);
HXDLIN( 391)					_this->indexDirty = true;
            				}
HXLINE( 392)				{
HXLINE( 392)					 ::h2d::_Graphics::GraphicsContent _this1 = this->content;
HXDLIN( 392)					_this1->index->push((i0 + i));
HXDLIN( 392)					_this1->indexDirty = true;
            				}
HXLINE( 393)				{
HXLINE( 393)					 ::h2d::_Graphics::GraphicsContent _this2 = this->content;
HXDLIN( 393)					_this2->index->push(((i0 + i) + 1));
HXDLIN( 393)					_this2->indexDirty = true;
            				}
            			}
            		}
            		else {
HXLINE( 396)			 ::hxd::earcut::Earcut ear = ::h2d::Graphics_obj::EARCUT;
HXLINE( 397)			if (::hx::IsNull( ear )) {
HXLINE( 398)				ear =  ::hxd::earcut::Earcut_obj::__alloc( HX_CTX );
HXDLIN( 398)				::h2d::Graphics_obj::EARCUT = ear;
            			}
HXLINE( 399)			{
HXLINE( 399)				int _g = 0;
HXDLIN( 399)				::Array< int > _g1 = ear->triangulate_h2d_GPoint(pts,null());
HXDLIN( 399)				while((_g < _g1->length)){
HXLINE( 399)					int i = _g1->__get(_g);
HXDLIN( 399)					_g = (_g + 1);
HXLINE( 400)					{
HXLINE( 400)						 ::h2d::_Graphics::GraphicsContent _this = this->content;
HXDLIN( 400)						_this->index->push((i + i0));
HXDLIN( 400)						_this->indexDirty = true;
            					}
            				}
            			}
            		}
HXLINE( 403)		if (::hx::IsNotNull( last )) {
HXLINE( 404)			pts->push(last);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,flushFill,(void))

void Graphics_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_407_flush)
HXLINE( 408)		if ((this->tmpPoints->length == 0)) {
HXLINE( 409)			return;
            		}
HXLINE( 410)		if (this->doFill) {
HXLINE( 411)			this->flushFill(this->pindex);
HXLINE( 412)			 ::h2d::Graphics _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 412)			_hx_tmp->pindex = (_hx_tmp->pindex + this->tmpPoints->length);
HXLINE( 413)			if (this->content->next()) {
HXLINE( 414)				this->pindex = 0;
            			}
            		}
HXLINE( 416)		if ((this->lineSize > 0)) {
HXLINE( 417)			this->flushLine(this->pindex);
HXLINE( 418)			if (this->content->next()) {
HXLINE( 419)				this->pindex = 0;
            			}
            		}
HXLINE( 421)		this->tmpPoints = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,flush,(void))

void Graphics_obj::beginFill(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha){
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_432_beginFill)
HXLINE( 433)		this->flush();
HXLINE( 434)		{
HXLINE( 434)			this->curA = alpha;
HXDLIN( 434)			this->curR = (( (Float)(((color >> 16) & 255)) ) / ((Float)255.));
HXDLIN( 434)			this->curG = (( (Float)(((color >> 8) & 255)) ) / ((Float)255.));
HXDLIN( 434)			this->curB = (( (Float)((color & 255)) ) / ((Float)255.));
            		}
HXLINE( 435)		this->doFill = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

void Graphics_obj::beginTileFill( ::Dynamic dx, ::Dynamic dy, ::Dynamic scaleX, ::Dynamic scaleY, ::h2d::Tile tile){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_455_beginTileFill)
HXLINE( 456)		this->beginFill(16777215,null());
HXLINE( 457)		if (::hx::IsNull( dx )) {
HXLINE( 457)			dx = 0;
            		}
HXLINE( 458)		if (::hx::IsNull( dy )) {
HXLINE( 458)			dy = 0;
            		}
HXLINE( 459)		if (::hx::IsNotNull( tile )) {
HXLINE( 460)			bool _hx_tmp;
HXDLIN( 460)			if (::hx::IsNotNull( this->tile )) {
HXLINE( 460)				_hx_tmp = ::hx::IsInstanceNotEq( tile->innerTex,this->tile->innerTex );
            			}
            			else {
HXLINE( 460)				_hx_tmp = false;
            			}
HXDLIN( 460)			if (_hx_tmp) {
HXLINE( 461)				 ::h3d::mat::Texture tex = this->tile->innerTex;
HXLINE( 462)				bool _hx_tmp;
HXDLIN( 462)				if ((tex->width == 1)) {
HXLINE( 462)					_hx_tmp = (tex->height != 1);
            				}
            				else {
HXLINE( 462)					_hx_tmp = true;
            				}
HXDLIN( 462)				if (_hx_tmp) {
HXLINE( 463)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("All tiles must be of the same texture",b9,b2,58,62)));
            				}
HXLINE( 464)				this->tile = tile;
            			}
HXLINE( 466)			if (::hx::IsNull( this->tile )) {
HXLINE( 467)				this->tile = tile;
            			}
            		}
            		else {
HXLINE( 469)			tile = this->tile;
            		}
HXLINE( 470)		if (::hx::IsNull( tile )) {
HXLINE( 471)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Tile not specified",91,b7,7a,4b)));
            		}
HXLINE( 472)		if (::hx::IsNull( scaleX )) {
HXLINE( 472)			scaleX = 1;
            		}
HXLINE( 473)		if (::hx::IsNull( scaleY )) {
HXLINE( 473)			scaleY = 1;
            		}
HXLINE( 474)		dx = (dx - tile->x);
HXLINE( 475)		dy = (dy - tile->y);
HXLINE( 477)		 ::h3d::mat::Texture tex = tile->innerTex;
HXLINE( 478)		Float pixWidth = (( (Float)(1) ) / ( (Float)(tex->width) ));
HXLINE( 479)		Float pixHeight = (( (Float)(1) ) / ( (Float)(tex->height) ));
HXLINE( 480)		this->ma = (pixWidth / ( (Float)(scaleX) ));
HXLINE( 481)		this->mb = ( (Float)(0) );
HXLINE( 482)		this->mc = ( (Float)(0) );
HXLINE( 483)		this->md = (pixHeight / ( (Float)(scaleY) ));
HXLINE( 484)		this->mx = (-(dx) * this->ma);
HXLINE( 485)		this->my = (-(dy) * this->md);
            	}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,beginTileFill,(void))

void Graphics_obj::drawTile(Float x,Float y, ::h2d::Tile tile){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_497_drawTile)
HXLINE( 498)		this->beginTileFill(x,y,null(),null(),tile);
HXLINE( 499)		this->drawRect(x,y,tile->width,tile->height);
HXLINE( 500)		this->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawTile,(void))

void Graphics_obj::lineStyle(::hx::Null< Float >  __o_size,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha){
            		Float size = __o_size.Default(0);
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_510_lineStyle)
HXLINE( 511)		this->flush();
HXLINE( 512)		this->lineSize = size;
HXLINE( 513)		this->lineA = alpha;
HXLINE( 514)		this->lineR = (( (Float)(((color >> 16) & 255)) ) / ((Float)255.));
HXLINE( 515)		this->lineG = (( (Float)(((color >> 8) & 255)) ) / ((Float)255.));
HXLINE( 516)		this->lineB = (( (Float)((color & 255)) ) / ((Float)255.));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,lineStyle,(void))

void Graphics_obj::moveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_522_moveTo)
HXLINE( 523)		this->flush();
HXLINE( 524)		this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

void Graphics_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_530_endFill)
HXLINE( 531)		this->flush();
HXLINE( 532)		this->doFill = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

void Graphics_obj::setColor(int color,::hx::Null< Float >  __o_alpha){
            		Float alpha = __o_alpha.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_542_setColor)
HXLINE( 543)		this->curA = alpha;
HXLINE( 544)		this->curR = (( (Float)(((color >> 16) & 255)) ) / ((Float)255.));
HXLINE( 545)		this->curG = (( (Float)(((color >> 8) & 255)) ) / ((Float)255.));
HXLINE( 546)		this->curB = (( (Float)((color & 255)) ) / ((Float)255.));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setColor,(void))

void Graphics_obj::drawRect(Float x,Float y,Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_556_drawRect)
HXLINE( 557)		this->flush();
HXLINE( 558)		this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
HXLINE( 559)		{
HXLINE( 559)			Float x1 = (x + w);
HXDLIN( 559)			this->addVertex(x1,y,this->curR,this->curG,this->curB,this->curA,(((x1 * this->ma) + (y * this->mc)) + this->mx),(((x1 * this->mb) + (y * this->md)) + this->my));
            		}
HXLINE( 560)		{
HXLINE( 560)			Float x2 = (x + w);
HXDLIN( 560)			Float y1 = (y + h);
HXDLIN( 560)			this->addVertex(x2,y1,this->curR,this->curG,this->curB,this->curA,(((x2 * this->ma) + (y1 * this->mc)) + this->mx),(((x2 * this->mb) + (y1 * this->md)) + this->my));
            		}
HXLINE( 561)		{
HXLINE( 561)			Float y2 = (y + h);
HXDLIN( 561)			this->addVertex(x,y2,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y2 * this->mc)) + this->mx),(((x * this->mb) + (y2 * this->md)) + this->my));
            		}
HXLINE( 562)		this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
HXLINE( 563)		Float e = ((Float)0.01);
HXLINE( 564)		 ::h2d::GPoint fh = this->tmpPoints->__get(0).StaticCast<  ::h2d::GPoint >();
HXDLIN( 564)		fh->x = (fh->x + e);
HXLINE( 565)		 ::h2d::GPoint fh1 = this->tmpPoints->__get(0).StaticCast<  ::h2d::GPoint >();
HXDLIN( 565)		fh1->y = (fh1->y + e);
HXLINE( 566)		 ::h2d::GPoint fh2 = this->tmpPoints->__get(1).StaticCast<  ::h2d::GPoint >();
HXDLIN( 566)		fh2->y = (fh2->y + e);
HXLINE( 567)		 ::h2d::GPoint fh3 = this->tmpPoints->__get(3).StaticCast<  ::h2d::GPoint >();
HXDLIN( 567)		fh3->x = (fh3->x + e);
HXLINE( 568)		 ::h2d::GPoint fh4 = this->tmpPoints->__get(4).StaticCast<  ::h2d::GPoint >();
HXDLIN( 568)		fh4->x = (fh4->x + e);
HXLINE( 569)		 ::h2d::GPoint fh5 = this->tmpPoints->__get(4).StaticCast<  ::h2d::GPoint >();
HXDLIN( 569)		fh5->y = (fh5->y + e);
HXLINE( 570)		this->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

void Graphics_obj::drawRoundedRect(Float x,Float y,Float w,Float h,Float radius,::hx::Null< int >  __o_nsegments){
            		int nsegments = __o_nsegments.Default(0);
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_582_drawRoundedRect)
HXDLIN( 582)		 ::h2d::Graphics _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 583)		if ((radius <= 0)) {
HXLINE( 584)			this->drawRect(x,y,w,h);
HXDLIN( 584)			return;
            		}
HXLINE( 586)		x = (x + radius);
HXLINE( 587)		y = (y + radius);
HXLINE( 588)		w = (w - (radius * ( (Float)(2) )));
HXLINE( 589)		h = (h - (radius * ( (Float)(2) )));
HXLINE( 590)		this->flush();
HXLINE( 591)		if ((nsegments == 0)) {
HXLINE( 592)			Float f = ((radius * ((Float)1.57079632679489656)) / ( (Float)(4) ));
HXDLIN( 592)			Float nsegments1;
HXDLIN( 592)			if ((f < 0)) {
HXLINE( 592)				nsegments1 = -(f);
            			}
            			else {
HXLINE( 592)				nsegments1 = f;
            			}
HXDLIN( 592)			nsegments = ::Math_obj::ceil(nsegments1);
            		}
HXLINE( 593)		if ((nsegments < 3)) {
HXLINE( 593)			nsegments = 3;
            		}
HXLINE( 594)		Float angle = (((Float)1.57079632679489656) / ( (Float)((nsegments - 1)) ));
HXLINE( 601)		{
HXLINE( 601)			Float y1 = (y - radius);
HXDLIN( 601)			this->addVertex(x,y1,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y1 * this->mc)) + this->mx),(((x * this->mb) + (y1 * this->md)) + this->my));
            		}
HXLINE( 602)		{
HXLINE( 602)			Float x1 = (x + w);
HXDLIN( 602)			Float y2 = (y - radius);
HXDLIN( 602)			this->addVertex(x1,y2,this->curR,this->curG,this->curB,this->curA,(((x1 * this->ma) + (y2 * this->mc)) + this->mx),(((x1 * this->mb) + (y2 * this->md)) + this->my));
            		}
HXLINE( 603)		{
HXLINE( 603)			Float x2 = (x + w);
HXDLIN( 603)			{
HXLINE( 603)				int _g = 0;
HXDLIN( 603)				int _g1 = nsegments;
HXDLIN( 603)				while((_g < _g1)){
HXLINE( 603)					_g = (_g + 1);
HXDLIN( 603)					int i = (_g - 1);
HXDLIN( 603)					Float a = ((( (Float)(i) ) * angle) + ((Float)4.71238898038469));
HXDLIN( 603)					{
HXLINE( 603)						Float x = (x2 + (::Math_obj::cos(a) * radius));
HXDLIN( 603)						Float y1 = (y + (::Math_obj::sin(a) * radius));
HXDLIN( 603)						_gthis->addVertex(x,y1,_gthis->curR,_gthis->curG,_gthis->curB,_gthis->curA,(((x * _gthis->ma) + (y1 * _gthis->mc)) + _gthis->mx),(((x * _gthis->mb) + (y1 * _gthis->md)) + _gthis->my));
            					}
            				}
            			}
            		}
HXLINE( 604)		{
HXLINE( 604)			Float x3 = ((x + w) + radius);
HXDLIN( 604)			Float y3 = (y + h);
HXDLIN( 604)			this->addVertex(x3,y3,this->curR,this->curG,this->curB,this->curA,(((x3 * this->ma) + (y3 * this->mc)) + this->mx),(((x3 * this->mb) + (y3 * this->md)) + this->my));
            		}
HXLINE( 605)		{
HXLINE( 605)			Float x4 = (x + w);
HXDLIN( 605)			Float y4 = (y + h);
HXDLIN( 605)			{
HXLINE( 605)				int _g2 = 0;
HXDLIN( 605)				int _g3 = nsegments;
HXDLIN( 605)				while((_g2 < _g3)){
HXLINE( 605)					_g2 = (_g2 + 1);
HXDLIN( 605)					int i = (_g2 - 1);
HXDLIN( 605)					Float a = (( (Float)(i) ) * angle);
HXDLIN( 605)					{
HXLINE( 605)						Float x = (x4 + (::Math_obj::cos(a) * radius));
HXDLIN( 605)						Float y = (y4 + (::Math_obj::sin(a) * radius));
HXDLIN( 605)						_gthis->addVertex(x,y,_gthis->curR,_gthis->curG,_gthis->curB,_gthis->curA,(((x * _gthis->ma) + (y * _gthis->mc)) + _gthis->mx),(((x * _gthis->mb) + (y * _gthis->md)) + _gthis->my));
            					}
            				}
            			}
            		}
HXLINE( 606)		{
HXLINE( 606)			Float y5 = ((y + h) + radius);
HXDLIN( 606)			this->addVertex(x,y5,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y5 * this->mc)) + this->mx),(((x * this->mb) + (y5 * this->md)) + this->my));
            		}
HXLINE( 607)		{
HXLINE( 607)			Float y6 = (y + h);
HXDLIN( 607)			{
HXLINE( 607)				int _g4 = 0;
HXDLIN( 607)				int _g5 = nsegments;
HXDLIN( 607)				while((_g4 < _g5)){
HXLINE( 607)					_g4 = (_g4 + 1);
HXDLIN( 607)					int i = (_g4 - 1);
HXDLIN( 607)					Float a = ((( (Float)(i) ) * angle) + ((Float)1.57079632679489656));
HXDLIN( 607)					{
HXLINE( 607)						Float x1 = (x + (::Math_obj::cos(a) * radius));
HXDLIN( 607)						Float y = (y6 + (::Math_obj::sin(a) * radius));
HXDLIN( 607)						_gthis->addVertex(x1,y,_gthis->curR,_gthis->curG,_gthis->curB,_gthis->curA,(((x1 * _gthis->ma) + (y * _gthis->mc)) + _gthis->mx),(((x1 * _gthis->mb) + (y * _gthis->md)) + _gthis->my));
            					}
            				}
            			}
            		}
HXLINE( 608)		{
HXLINE( 608)			Float x5 = (x - radius);
HXDLIN( 608)			this->addVertex(x5,y,this->curR,this->curG,this->curB,this->curA,(((x5 * this->ma) + (y * this->mc)) + this->mx),(((x5 * this->mb) + (y * this->md)) + this->my));
            		}
HXLINE( 609)		{
HXLINE( 609)			int _g6 = 0;
HXDLIN( 609)			int _g7 = nsegments;
HXDLIN( 609)			while((_g6 < _g7)){
HXLINE( 609)				_g6 = (_g6 + 1);
HXDLIN( 609)				int i = (_g6 - 1);
HXDLIN( 609)				Float a = ((( (Float)(i) ) * angle) + ((Float)3.14159265358979312));
HXDLIN( 609)				{
HXLINE( 609)					Float x1 = (x + (::Math_obj::cos(a) * radius));
HXDLIN( 609)					Float y1 = (y + (::Math_obj::sin(a) * radius));
HXDLIN( 609)					_gthis->addVertex(x1,y1,_gthis->curR,_gthis->curG,_gthis->curB,_gthis->curA,(((x1 * _gthis->ma) + (y1 * _gthis->mc)) + _gthis->mx),(((x1 * _gthis->mb) + (y1 * _gthis->md)) + _gthis->my));
            				}
            			}
            		}
HXLINE( 610)		this->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundedRect,(void))

void Graphics_obj::drawCircle(Float cx,Float cy,Float radius,::hx::Null< int >  __o_nsegments){
            		int nsegments = __o_nsegments.Default(0);
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_620_drawCircle)
HXLINE( 621)		this->flush();
HXLINE( 622)		if ((nsegments == 0)) {
HXLINE( 623)			Float f = (((radius * ((Float)3.14)) * ( (Float)(2) )) / ( (Float)(4) ));
HXDLIN( 623)			Float nsegments1;
HXDLIN( 623)			if ((f < 0)) {
HXLINE( 623)				nsegments1 = -(f);
            			}
            			else {
HXLINE( 623)				nsegments1 = f;
            			}
HXDLIN( 623)			nsegments = ::Math_obj::ceil(nsegments1);
            		}
HXLINE( 624)		if ((nsegments < 3)) {
HXLINE( 624)			nsegments = 3;
            		}
HXLINE( 625)		Float angle = (((Float)6.28318530717958623) / ( (Float)(nsegments) ));
HXLINE( 626)		{
HXLINE( 626)			int _g = 0;
HXDLIN( 626)			int _g1 = (nsegments + 1);
HXDLIN( 626)			while((_g < _g1)){
HXLINE( 626)				_g = (_g + 1);
HXDLIN( 626)				int i = (_g - 1);
HXLINE( 627)				Float a = (( (Float)(i) ) * angle);
HXLINE( 628)				{
HXLINE( 628)					Float x = (cx + (::Math_obj::cos(a) * radius));
HXDLIN( 628)					Float y = (cy + (::Math_obj::sin(a) * radius));
HXDLIN( 628)					this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            				}
            			}
            		}
HXLINE( 630)		this->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawCircle,(void))

void Graphics_obj::drawEllipse(Float cx,Float cy,Float radiusX,Float radiusY,::hx::Null< Float >  __o_rotationAngle,::hx::Null< int >  __o_nsegments){
            		Float rotationAngle = __o_rotationAngle.Default(0);
            		int nsegments = __o_nsegments.Default(0);
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_642_drawEllipse)
HXLINE( 643)		this->flush();
HXLINE( 644)		if ((nsegments == 0)) {
HXLINE( 645)			Float f = (((radiusY * ((Float)3.14)) * ( (Float)(2) )) / ( (Float)(4) ));
HXDLIN( 645)			Float nsegments1;
HXDLIN( 645)			if ((f < 0)) {
HXLINE( 645)				nsegments1 = -(f);
            			}
            			else {
HXLINE( 645)				nsegments1 = f;
            			}
HXDLIN( 645)			nsegments = ::Math_obj::ceil(nsegments1);
            		}
HXLINE( 646)		if ((nsegments < 3)) {
HXLINE( 646)			nsegments = 3;
            		}
HXLINE( 647)		Float angle = (((Float)6.28318530717958623) / ( (Float)(nsegments) ));
HXLINE( 648)		Float x1;
HXDLIN( 648)		Float y1;
HXLINE( 649)		{
HXLINE( 649)			int _g = 0;
HXDLIN( 649)			int _g1 = (nsegments + 1);
HXDLIN( 649)			while((_g < _g1)){
HXLINE( 649)				_g = (_g + 1);
HXDLIN( 649)				int i = (_g - 1);
HXLINE( 650)				Float a = (( (Float)(i) ) * angle);
HXLINE( 651)				x1 = (((::Math_obj::cos(a) * ::Math_obj::cos(rotationAngle)) * radiusX) - ((::Math_obj::sin(a) * ::Math_obj::sin(rotationAngle)) * radiusY));
HXLINE( 652)				y1 = (((::Math_obj::cos(rotationAngle) * ::Math_obj::sin(a)) * radiusY) + ((::Math_obj::cos(a) * ::Math_obj::sin(rotationAngle)) * radiusX));
HXLINE( 653)				{
HXLINE( 653)					Float x = (cx + x1);
HXDLIN( 653)					Float y = (cy + y1);
HXDLIN( 653)					this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            				}
            			}
            		}
HXLINE( 655)		this->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawEllipse,(void))

void Graphics_obj::drawPie(Float cx,Float cy,Float radius,Float angleStart,Float angleLength,::hx::Null< int >  __o_nsegments){
            		int nsegments = __o_nsegments.Default(0);
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_667_drawPie)
HXLINE( 668)		Float _hx_tmp;
HXDLIN( 668)		if ((angleLength < 0)) {
HXLINE( 668)			_hx_tmp = -(angleLength);
            		}
            		else {
HXLINE( 668)			_hx_tmp = angleLength;
            		}
HXDLIN( 668)		if ((_hx_tmp >= ((Float)6.28318530717958623))) {
HXLINE( 669)			this->drawCircle(cx,cy,radius,nsegments);
HXDLIN( 669)			return;
            		}
HXLINE( 671)		this->flush();
HXLINE( 672)		this->addVertex(cx,cy,this->curR,this->curG,this->curB,this->curA,(((cx * this->ma) + (cy * this->mc)) + this->mx),(((cx * this->mb) + (cy * this->md)) + this->my));
HXLINE( 673)		if ((nsegments == 0)) {
HXLINE( 674)			Float f = ((radius * angleLength) / ( (Float)(4) ));
HXDLIN( 674)			Float nsegments1;
HXDLIN( 674)			if ((f < 0)) {
HXLINE( 674)				nsegments1 = -(f);
            			}
            			else {
HXLINE( 674)				nsegments1 = f;
            			}
HXDLIN( 674)			nsegments = ::Math_obj::ceil(nsegments1);
            		}
HXLINE( 675)		if ((nsegments < 3)) {
HXLINE( 675)			nsegments = 3;
            		}
HXLINE( 676)		Float angle = (angleLength / ( (Float)((nsegments - 1)) ));
HXLINE( 677)		{
HXLINE( 677)			int _g = 0;
HXDLIN( 677)			int _g1 = nsegments;
HXDLIN( 677)			while((_g < _g1)){
HXLINE( 677)				_g = (_g + 1);
HXDLIN( 677)				int i = (_g - 1);
HXLINE( 678)				Float a = ((( (Float)(i) ) * angle) + angleStart);
HXLINE( 679)				{
HXLINE( 679)					Float x = (cx + (::Math_obj::cos(a) * radius));
HXDLIN( 679)					Float y = (cy + (::Math_obj::sin(a) * radius));
HXDLIN( 679)					this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            				}
            			}
            		}
HXLINE( 681)		this->addVertex(cx,cy,this->curR,this->curG,this->curB,this->curA,(((cx * this->ma) + (cy * this->mc)) + this->mx),(((cx * this->mb) + (cy * this->md)) + this->my));
HXLINE( 682)		this->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawPie,(void))

void Graphics_obj::drawPieInner(Float cx,Float cy,Float radius,Float innerRadius,Float angleStart,Float angleLength,::hx::Null< int >  __o_nsegments){
            		int nsegments = __o_nsegments.Default(0);
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_695_drawPieInner)
HXLINE( 696)		this->flush();
HXLINE( 697)		Float _hx_tmp;
HXDLIN( 697)		if ((angleLength < 0)) {
HXLINE( 697)			_hx_tmp = -(angleLength);
            		}
            		else {
HXLINE( 697)			_hx_tmp = angleLength;
            		}
HXDLIN( 697)		if ((_hx_tmp >= ((Float)6.28418530717958657))) {
HXLINE( 697)			angleLength = ((Float)6.28418530717958657);
            		}
HXLINE( 699)		Float cs = ::Math_obj::cos(angleStart);
HXLINE( 700)		Float ss = ::Math_obj::sin(angleStart);
HXLINE( 701)		Float ce = ::Math_obj::cos((angleStart + angleLength));
HXLINE( 702)		Float se = ::Math_obj::sin((angleStart + angleLength));
HXLINE( 704)		{
HXLINE( 704)			Float x = (cx + (cs * innerRadius));
HXDLIN( 704)			Float y = (cy + (ss * innerRadius));
HXDLIN( 704)			this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            		}
HXLINE( 706)		if ((nsegments == 0)) {
HXLINE( 707)			Float f = ((radius * angleLength) / ( (Float)(4) ));
HXDLIN( 707)			Float nsegments1;
HXDLIN( 707)			if ((f < 0)) {
HXLINE( 707)				nsegments1 = -(f);
            			}
            			else {
HXLINE( 707)				nsegments1 = f;
            			}
HXDLIN( 707)			nsegments = ::Math_obj::ceil(nsegments1);
            		}
HXLINE( 708)		if ((nsegments < 3)) {
HXLINE( 708)			nsegments = 3;
            		}
HXLINE( 709)		Float angle = (angleLength / ( (Float)((nsegments - 1)) ));
HXLINE( 710)		{
HXLINE( 710)			int _g = 0;
HXDLIN( 710)			int _g1 = nsegments;
HXDLIN( 710)			while((_g < _g1)){
HXLINE( 710)				_g = (_g + 1);
HXDLIN( 710)				int i = (_g - 1);
HXLINE( 711)				Float a = ((( (Float)(i) ) * angle) + angleStart);
HXLINE( 712)				{
HXLINE( 712)					Float x = (cx + (::Math_obj::cos(a) * radius));
HXDLIN( 712)					Float y = (cy + (::Math_obj::sin(a) * radius));
HXDLIN( 712)					this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            				}
            			}
            		}
HXLINE( 714)		{
HXLINE( 714)			Float x1 = (cx + (ce * innerRadius));
HXDLIN( 714)			Float y1 = (cy + (se * innerRadius));
HXDLIN( 714)			this->addVertex(x1,y1,this->curR,this->curG,this->curB,this->curA,(((x1 * this->ma) + (y1 * this->mc)) + this->mx),(((x1 * this->mb) + (y1 * this->md)) + this->my));
            		}
HXLINE( 715)		{
HXLINE( 715)			int _g2 = 0;
HXDLIN( 715)			int _g3 = nsegments;
HXDLIN( 715)			while((_g2 < _g3)){
HXLINE( 715)				_g2 = (_g2 + 1);
HXDLIN( 715)				int i = (_g2 - 1);
HXLINE( 716)				Float a = ((( (Float)(((nsegments - 1) - i)) ) * angle) + angleStart);
HXLINE( 717)				{
HXLINE( 717)					Float x = (cx + (::Math_obj::cos(a) * innerRadius));
HXDLIN( 717)					Float y = (cy + (::Math_obj::sin(a) * innerRadius));
HXDLIN( 717)					this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            				}
            			}
            		}
HXLINE( 719)		this->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC7(Graphics_obj,drawPieInner,(void))

void Graphics_obj::drawRectanglePie(Float cx,Float cy,Float width,Float height,Float angleStart,Float angleLength,::hx::Null< int >  __o_nsegments){
            		int nsegments = __o_nsegments.Default(0);
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_732_drawRectanglePie)
HXLINE( 733)		Float _hx_tmp;
HXDLIN( 733)		if ((angleLength < 0)) {
HXLINE( 733)			_hx_tmp = -(angleLength);
            		}
            		else {
HXLINE( 733)			_hx_tmp = angleLength;
            		}
HXDLIN( 733)		if ((_hx_tmp >= ((Float)6.28318530717958623))) {
HXLINE( 734)			this->drawRect((cx - (width / ( (Float)(2) ))),(cy - (height / ( (Float)(2) ))),width,height);
HXDLIN( 734)			return;
            		}
HXLINE( 736)		this->flush();
HXLINE( 737)		this->addVertex(cx,cy,this->curR,this->curG,this->curB,this->curA,(((cx * this->ma) + (cy * this->mc)) + this->mx),(((cx * this->mb) + (cy * this->md)) + this->my));
HXLINE( 738)		if ((nsegments == 0)) {
HXLINE( 739)			Float f;
HXDLIN( 739)			if ((width < height)) {
HXLINE( 739)				f = height;
            			}
            			else {
HXLINE( 739)				f = width;
            			}
HXDLIN( 739)			Float f1 = ((f * angleLength) / ( (Float)(4) ));
HXDLIN( 739)			Float nsegments1;
HXDLIN( 739)			if ((f1 < 0)) {
HXLINE( 739)				nsegments1 = -(f1);
            			}
            			else {
HXLINE( 739)				nsegments1 = f1;
            			}
HXDLIN( 739)			nsegments = ::Math_obj::ceil(nsegments1);
            		}
HXLINE( 740)		if ((nsegments < 3)) {
HXLINE( 740)			nsegments = 3;
            		}
HXLINE( 741)		Float angle = (angleLength / ( (Float)((nsegments - 1)) ));
HXLINE( 742)		Float square2 = ::Math_obj::sqrt(( (Float)(2) ));
HXLINE( 743)		{
HXLINE( 743)			int _g = 0;
HXDLIN( 743)			int _g1 = nsegments;
HXDLIN( 743)			while((_g < _g1)){
HXLINE( 743)				_g = (_g + 1);
HXDLIN( 743)				int i = (_g - 1);
HXLINE( 744)				Float a = ((( (Float)(i) ) * angle) + angleStart);
HXLINE( 746)				Float _width = ((::Math_obj::cos(a) * ((width / ( (Float)(2) )) + 1)) * square2);
HXLINE( 747)				Float _height = ((::Math_obj::sin(a) * ((height / ( (Float)(2) )) + 1)) * square2);
HXLINE( 749)				Float _width1;
HXDLIN( 749)				if ((_width < 0)) {
HXLINE( 749)					_width1 = -(_width);
            				}
            				else {
HXLINE( 749)					_width1 = _width;
            				}
HXDLIN( 749)				if ((_width1 >= (width / ( (Float)(2) )))) {
HXLINE( 749)					if ((::Math_obj::cos(a) < 0)) {
HXLINE( 749)						_width = ((width / ( (Float)(2) )) * ( (Float)(-1) ));
            					}
            					else {
HXLINE( 749)						_width = (width / ( (Float)(2) ));
            					}
            				}
HXLINE( 750)				Float _height1;
HXDLIN( 750)				if ((_height < 0)) {
HXLINE( 750)					_height1 = -(_height);
            				}
            				else {
HXLINE( 750)					_height1 = _height;
            				}
HXDLIN( 750)				if ((_height1 >= (height / ( (Float)(2) )))) {
HXLINE( 750)					if ((::Math_obj::sin(a) < 0)) {
HXLINE( 750)						_height = ((height / ( (Float)(2) )) * ( (Float)(-1) ));
            					}
            					else {
HXLINE( 750)						_height = (height / ( (Float)(2) ));
            					}
            				}
HXLINE( 752)				{
HXLINE( 752)					Float x = (cx + _width);
HXDLIN( 752)					Float y = (cy + _height);
HXDLIN( 752)					this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            				}
            			}
            		}
HXLINE( 754)		this->addVertex(cx,cy,this->curR,this->curG,this->curB,this->curA,(((cx * this->ma) + (cy * this->mc)) + this->mx),(((cx * this->mb) + (cy * this->md)) + this->my));
HXLINE( 755)		this->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC7(Graphics_obj,drawRectanglePie,(void))

void Graphics_obj::curveTo(Float bx,Float by,Float cx,Float cy){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_762_curveTo)
HXLINE( 763)		Float ax;
HXDLIN( 763)		if ((this->tmpPoints->length == 0)) {
HXLINE( 763)			ax = ( (Float)(0) );
            		}
            		else {
HXLINE( 763)			ax = this->tmpPoints->__get((this->tmpPoints->length - 1)).StaticCast<  ::h2d::GPoint >()->x;
            		}
HXLINE( 764)		Float ay;
HXDLIN( 764)		if ((this->tmpPoints->length == 0)) {
HXLINE( 764)			ay = ( (Float)(0) );
            		}
            		else {
HXLINE( 764)			ay = this->tmpPoints->__get((this->tmpPoints->length - 1)).StaticCast<  ::h2d::GPoint >()->y;
            		}
HXLINE( 765)		Float t = ((Float)0.66666666666666663);
HXLINE( 766)		this->cubicCurveTo((ax + (t * (bx - ax))),(ay + (t * (by - ay))),(cx + (t * (bx - cx))),(cy + (t * (by - cy))),cx,cy,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

void Graphics_obj::cubicCurveTo(Float bx,Float by,Float cx,Float cy,Float dx,Float dy,::hx::Null< int >  __o_nsegments){
            		int nsegments = __o_nsegments.Default(40);
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_780_cubicCurveTo)
HXLINE( 781)		Float ax;
HXDLIN( 781)		if ((this->tmpPoints->length == 0)) {
HXLINE( 781)			ax = ( (Float)(0) );
            		}
            		else {
HXLINE( 781)			ax = this->tmpPoints->__get((this->tmpPoints->length - 1)).StaticCast<  ::h2d::GPoint >()->x;
            		}
HXLINE( 782)		Float ay;
HXDLIN( 782)		if ((this->tmpPoints->length == 0)) {
HXLINE( 782)			ay = ( (Float)(0) );
            		}
            		else {
HXLINE( 782)			ay = this->tmpPoints->__get((this->tmpPoints->length - 1)).StaticCast<  ::h2d::GPoint >()->y;
            		}
HXLINE( 783)		Float tobx = (bx - ax);
HXDLIN( 783)		Float toby = (by - ay);
HXLINE( 784)		Float tocx = (cx - bx);
HXDLIN( 784)		Float tocy = (cy - by);
HXLINE( 785)		Float todx = (dx - cx);
HXDLIN( 785)		Float tody = (dy - cy);
HXLINE( 786)		Float step = (( (Float)(1) ) / ( (Float)(nsegments) ));
HXLINE( 788)		{
HXLINE( 788)			int _g = 1;
HXDLIN( 788)			int _g1 = nsegments;
HXDLIN( 788)			while((_g < _g1)){
HXLINE( 788)				_g = (_g + 1);
HXDLIN( 788)				int i = (_g - 1);
HXLINE( 789)				Float d = (( (Float)(i) ) * step);
HXLINE( 790)				Float px = (ax + (d * tobx));
HXDLIN( 790)				Float py = (ay + (d * toby));
HXLINE( 791)				Float qx = (bx + (d * tocx));
HXDLIN( 791)				Float qy = (by + (d * tocy));
HXLINE( 792)				Float rx = (cx + (d * todx));
HXDLIN( 792)				Float ry = (cy + (d * tody));
HXLINE( 793)				Float toqx = (qx - px);
HXDLIN( 793)				Float toqy = (qy - py);
HXLINE( 794)				Float torx = (rx - qx);
HXDLIN( 794)				Float tory = (ry - qy);
HXLINE( 796)				Float sx = (px + (d * toqx));
HXDLIN( 796)				Float sy = (py + (d * toqy));
HXLINE( 797)				Float tx = (qx + (d * torx));
HXDLIN( 797)				Float ty = (qy + (d * tory));
HXLINE( 798)				Float totx = (tx - sx);
HXDLIN( 798)				Float toty = (ty - sy);
HXLINE( 799)				{
HXLINE( 799)					Float x = (sx + (d * totx));
HXDLIN( 799)					Float y = (sy + (d * toty));
HXDLIN( 799)					this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            				}
            			}
            		}
HXLINE( 801)		this->addVertex(dx,dy,this->curR,this->curG,this->curB,this->curA,(((dx * this->ma) + (dy * this->mc)) + this->mx),(((dx * this->mb) + (dy * this->md)) + this->my));
            	}


HX_DEFINE_DYNAMIC_FUNC7(Graphics_obj,cubicCurveTo,(void))

void Graphics_obj::lineTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_808_lineTo)
HXDLIN( 808)		this->addVertex(x,y,this->curR,this->curG,this->curB,this->curA,(((x * this->ma) + (y * this->mc)) + this->mx),(((x * this->mb) + (y * this->md)) + this->my));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

void Graphics_obj::addVertex(Float x,Float y,Float r,Float g,Float b,Float a,::hx::Null< Float >  __o_u,::hx::Null< Float >  __o_v){
            		Float u = __o_u.Default(((Float)0.));
            		Float v = __o_v.Default(((Float)0.));
            	HX_GC_STACKFRAME(&_hx_pos_7c81022049e3eaa4_822_addVertex)
HXLINE( 823)		if ((x < this->xMin)) {
HXLINE( 823)			this->xMin = x;
            		}
HXLINE( 824)		if ((y < this->yMin)) {
HXLINE( 824)			this->yMin = y;
            		}
HXLINE( 825)		if ((x > this->xMax)) {
HXLINE( 825)			this->xMax = x;
            		}
HXLINE( 826)		if ((y > this->yMax)) {
HXLINE( 826)			this->yMax = y;
            		}
HXLINE( 827)		if (this->doFill) {
HXLINE( 828)			 ::h2d::_Graphics::GraphicsContent _this = this->content;
HXDLIN( 828)			_this->tmp->push(x);
HXDLIN( 828)			_this->tmp->push(y);
HXDLIN( 828)			_this->tmp->push(u);
HXDLIN( 828)			_this->tmp->push(v);
HXDLIN( 828)			_this->tmp->push(r);
HXDLIN( 828)			_this->tmp->push(g);
HXDLIN( 828)			_this->tmp->push(b);
HXDLIN( 828)			_this->tmp->push(a);
HXDLIN( 828)			_this->bufferDirty = true;
            		}
HXLINE( 829)		 ::h2d::GPoint gp =  ::h2d::GPoint_obj::__alloc( HX_CTX );
HXLINE( 830)		gp->load(x,y,this->lineR,this->lineG,this->lineB,this->lineA);
HXLINE( 831)		this->tmpPoints->push(gp);
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,addVertex,(void))

void Graphics_obj::draw( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_834_draw)
HXLINE( 835)		if (!(ctx->beginDrawObject(::hx::ObjectPtr<OBJ_>(this),this->tile->innerTex))) {
HXLINE( 835)			return;
            		}
HXLINE( 836)		this->content->render(ctx->engine);
            	}


void Graphics_obj::sync( ::h2d::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_839_sync)
HXLINE( 840)		this->super::sync(ctx);
HXLINE( 841)		this->flush();
HXLINE( 842)		this->content->flush();
            	}


 ::hxd::earcut::Earcut Graphics_obj::EARCUT;


::hx::ObjectPtr< Graphics_obj > Graphics_obj::__new( ::h2d::Object parent) {
	::hx::ObjectPtr< Graphics_obj > __this = new Graphics_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< Graphics_obj > Graphics_obj::__alloc(::hx::Ctx *_hx_ctx, ::h2d::Object parent) {
	Graphics_obj *__this = (Graphics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Graphics_obj), true, "h2d.Graphics"));
	*(void **)__this = Graphics_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(tmpPoints,"tmpPoints");
	HX_MARK_MEMBER_NAME(pindex,"pindex");
	HX_MARK_MEMBER_NAME(curR,"curR");
	HX_MARK_MEMBER_NAME(curG,"curG");
	HX_MARK_MEMBER_NAME(curB,"curB");
	HX_MARK_MEMBER_NAME(curA,"curA");
	HX_MARK_MEMBER_NAME(lineSize,"lineSize");
	HX_MARK_MEMBER_NAME(lineR,"lineR");
	HX_MARK_MEMBER_NAME(lineG,"lineG");
	HX_MARK_MEMBER_NAME(lineB,"lineB");
	HX_MARK_MEMBER_NAME(lineA,"lineA");
	HX_MARK_MEMBER_NAME(doFill,"doFill");
	HX_MARK_MEMBER_NAME(xMin,"xMin");
	HX_MARK_MEMBER_NAME(yMin,"yMin");
	HX_MARK_MEMBER_NAME(xMax,"xMax");
	HX_MARK_MEMBER_NAME(yMax,"yMax");
	HX_MARK_MEMBER_NAME(ma,"ma");
	HX_MARK_MEMBER_NAME(mb,"mb");
	HX_MARK_MEMBER_NAME(mc,"mc");
	HX_MARK_MEMBER_NAME(md,"md");
	HX_MARK_MEMBER_NAME(mx,"mx");
	HX_MARK_MEMBER_NAME(my,"my");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(bevel,"bevel");
	 ::h2d::Drawable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(tmpPoints,"tmpPoints");
	HX_VISIT_MEMBER_NAME(pindex,"pindex");
	HX_VISIT_MEMBER_NAME(curR,"curR");
	HX_VISIT_MEMBER_NAME(curG,"curG");
	HX_VISIT_MEMBER_NAME(curB,"curB");
	HX_VISIT_MEMBER_NAME(curA,"curA");
	HX_VISIT_MEMBER_NAME(lineSize,"lineSize");
	HX_VISIT_MEMBER_NAME(lineR,"lineR");
	HX_VISIT_MEMBER_NAME(lineG,"lineG");
	HX_VISIT_MEMBER_NAME(lineB,"lineB");
	HX_VISIT_MEMBER_NAME(lineA,"lineA");
	HX_VISIT_MEMBER_NAME(doFill,"doFill");
	HX_VISIT_MEMBER_NAME(xMin,"xMin");
	HX_VISIT_MEMBER_NAME(yMin,"yMin");
	HX_VISIT_MEMBER_NAME(xMax,"xMax");
	HX_VISIT_MEMBER_NAME(yMax,"yMax");
	HX_VISIT_MEMBER_NAME(ma,"ma");
	HX_VISIT_MEMBER_NAME(mb,"mb");
	HX_VISIT_MEMBER_NAME(mc,"mc");
	HX_VISIT_MEMBER_NAME(md,"md");
	HX_VISIT_MEMBER_NAME(mx,"mx");
	HX_VISIT_MEMBER_NAME(my,"my");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(bevel,"bevel");
	 ::h2d::Drawable_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Graphics_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ma") ) { return ::hx::Val( ma ); }
		if (HX_FIELD_EQ(inName,"mb") ) { return ::hx::Val( mb ); }
		if (HX_FIELD_EQ(inName,"mc") ) { return ::hx::Val( mc ); }
		if (HX_FIELD_EQ(inName,"md") ) { return ::hx::Val( md ); }
		if (HX_FIELD_EQ(inName,"mx") ) { return ::hx::Val( mx ); }
		if (HX_FIELD_EQ(inName,"my") ) { return ::hx::Val( my ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"curR") ) { return ::hx::Val( curR ); }
		if (HX_FIELD_EQ(inName,"curG") ) { return ::hx::Val( curG ); }
		if (HX_FIELD_EQ(inName,"curB") ) { return ::hx::Val( curB ); }
		if (HX_FIELD_EQ(inName,"curA") ) { return ::hx::Val( curA ); }
		if (HX_FIELD_EQ(inName,"xMin") ) { return ::hx::Val( xMin ); }
		if (HX_FIELD_EQ(inName,"yMin") ) { return ::hx::Val( yMin ); }
		if (HX_FIELD_EQ(inName,"xMax") ) { return ::hx::Val( xMax ); }
		if (HX_FIELD_EQ(inName,"yMax") ) { return ::hx::Val( yMax ); }
		if (HX_FIELD_EQ(inName,"tile") ) { return ::hx::Val( tile ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lineR") ) { return ::hx::Val( lineR ); }
		if (HX_FIELD_EQ(inName,"lineG") ) { return ::hx::Val( lineG ); }
		if (HX_FIELD_EQ(inName,"lineB") ) { return ::hx::Val( lineB ); }
		if (HX_FIELD_EQ(inName,"lineA") ) { return ::hx::Val( lineA ); }
		if (HX_FIELD_EQ(inName,"bevel") ) { return ::hx::Val( bevel ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pindex") ) { return ::hx::Val( pindex ); }
		if (HX_FIELD_EQ(inName,"doFill") ) { return ::hx::Val( doFill ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return ::hx::Val( content ); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return ::hx::Val( endFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawPie") ) { return ::hx::Val( drawPie_dyn() ); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lineSize") ) { return ::hx::Val( lineSize ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"isConvex") ) { return ::hx::Val( isConvex_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTile") ) { return ::hx::Val( drawTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return ::hx::Val( drawRect_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tmpPoints") ) { return ::hx::Val( tmpPoints ); }
		if (HX_FIELD_EQ(inName,"flushLine") ) { return ::hx::Val( flushLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"flushFill") ) { return ::hx::Val( flushFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return ::hx::Val( beginFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return ::hx::Val( lineStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"addVertex") ) { return ::hx::Val( addVertex_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return ::hx::Val( drawCircle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return ::hx::Val( drawEllipse_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawPieInner") ) { return ::hx::Val( drawPieInner_dyn() ); }
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return ::hx::Val( cubicCurveTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"beginTileFill") ) { return ::hx::Val( beginTileFill_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawRoundedRect") ) { return ::hx::Val( drawRoundedRect_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawRectanglePie") ) { return ::hx::Val( drawRectanglePie_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Graphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"EARCUT") ) { outValue = ( EARCUT ); return true; }
	}
	return false;
}

::hx::Val Graphics_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ma") ) { ma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mb") ) { mb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mc") ) { mc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"md") ) { md=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mx") ) { mx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"my") ) { my=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"curR") ) { curR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curG") ) { curG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curB") ) { curB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curA") ) { curA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xMin") ) { xMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMin") ) { yMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xMax") ) { xMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMax") ) { yMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast<  ::h2d::Tile >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lineR") ) { lineR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineG") ) { lineG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineB") ) { lineB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineA") ) { lineA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bevel") ) { bevel=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pindex") ) { pindex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doFill") ) { doFill=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast<  ::h2d::_Graphics::GraphicsContent >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lineSize") ) { lineSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tmpPoints") ) { tmpPoints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"EARCUT") ) { EARCUT=ioValue.Cast<  ::hxd::earcut::Earcut >(); return true; }
	}
	return false;
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("content",39,8d,77,19));
	outFields->push(HX_("tmpPoints",5a,a6,04,4d));
	outFields->push(HX_("pindex",a2,04,0d,86));
	outFields->push(HX_("curR",d2,4a,c9,41));
	outFields->push(HX_("curG",c7,4a,c9,41));
	outFields->push(HX_("curB",c2,4a,c9,41));
	outFields->push(HX_("curA",c1,4a,c9,41));
	outFields->push(HX_("lineSize",d5,ee,7c,89));
	outFields->push(HX_("lineR",de,dd,01,75));
	outFields->push(HX_("lineG",d3,dd,01,75));
	outFields->push(HX_("lineB",ce,dd,01,75));
	outFields->push(HX_("lineA",cd,dd,01,75));
	outFields->push(HX_("doFill",ae,73,bf,13));
	outFields->push(HX_("xMin",fa,63,8c,4f));
	outFields->push(HX_("yMin",99,9a,35,50));
	outFields->push(HX_("xMax",0c,5d,8c,4f));
	outFields->push(HX_("yMax",ab,93,35,50));
	outFields->push(HX_("ma",54,5f,00,00));
	outFields->push(HX_("mb",55,5f,00,00));
	outFields->push(HX_("mc",56,5f,00,00));
	outFields->push(HX_("md",57,5f,00,00));
	outFields->push(HX_("mx",6b,5f,00,00));
	outFields->push(HX_("my",6c,5f,00,00));
	outFields->push(HX_("tile",2e,cb,fc,4c));
	outFields->push(HX_("bevel",7a,48,61,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Graphics_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h2d::_Graphics::GraphicsContent */ ,(int)offsetof(Graphics_obj,content),HX_("content",39,8d,77,19)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Graphics_obj,tmpPoints),HX_("tmpPoints",5a,a6,04,4d)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,pindex),HX_("pindex",a2,04,0d,86)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curR),HX_("curR",d2,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curG),HX_("curG",c7,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curB),HX_("curB",c2,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curA),HX_("curA",c1,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,lineSize),HX_("lineSize",d5,ee,7c,89)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,lineR),HX_("lineR",de,dd,01,75)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,lineG),HX_("lineG",d3,dd,01,75)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,lineB),HX_("lineB",ce,dd,01,75)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,lineA),HX_("lineA",cd,dd,01,75)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,doFill),HX_("doFill",ae,73,bf,13)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,xMin),HX_("xMin",fa,63,8c,4f)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,yMin),HX_("yMin",99,9a,35,50)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,xMax),HX_("xMax",0c,5d,8c,4f)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,yMax),HX_("yMax",ab,93,35,50)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,ma),HX_("ma",54,5f,00,00)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,mb),HX_("mb",55,5f,00,00)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,mc),HX_("mc",56,5f,00,00)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,md),HX_("md",57,5f,00,00)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,mx),HX_("mx",6b,5f,00,00)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,my),HX_("my",6c,5f,00,00)},
	{::hx::fsObject /*  ::h2d::Tile */ ,(int)offsetof(Graphics_obj,tile),HX_("tile",2e,cb,fc,4c)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,bevel),HX_("bevel",7a,48,61,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Graphics_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::earcut::Earcut */ ,(void *) &Graphics_obj::EARCUT,HX_("EARCUT",ac,3a,12,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Graphics_obj_sMemberFields[] = {
	HX_("content",39,8d,77,19),
	HX_("tmpPoints",5a,a6,04,4d),
	HX_("pindex",a2,04,0d,86),
	HX_("curR",d2,4a,c9,41),
	HX_("curG",c7,4a,c9,41),
	HX_("curB",c2,4a,c9,41),
	HX_("curA",c1,4a,c9,41),
	HX_("lineSize",d5,ee,7c,89),
	HX_("lineR",de,dd,01,75),
	HX_("lineG",d3,dd,01,75),
	HX_("lineB",ce,dd,01,75),
	HX_("lineA",cd,dd,01,75),
	HX_("doFill",ae,73,bf,13),
	HX_("xMin",fa,63,8c,4f),
	HX_("yMin",99,9a,35,50),
	HX_("xMax",0c,5d,8c,4f),
	HX_("yMax",ab,93,35,50),
	HX_("ma",54,5f,00,00),
	HX_("mb",55,5f,00,00),
	HX_("mc",56,5f,00,00),
	HX_("md",57,5f,00,00),
	HX_("mx",6b,5f,00,00),
	HX_("my",6c,5f,00,00),
	HX_("tile",2e,cb,fc,4c),
	HX_("bevel",7a,48,61,b0),
	HX_("onRemove",c3,92,35,e4),
	HX_("clear",8d,71,5b,48),
	HX_("getBoundsRec",65,5e,85,79),
	HX_("isConvex",f1,12,48,20),
	HX_("flushLine",d8,58,0a,3e),
	HX_("flushFill",67,0f,13,3a),
	HX_("flush",c4,62,9b,02),
	HX_("beginFill",4c,ad,95,8c),
	HX_("beginTileFill",1a,6c,6d,57),
	HX_("drawTile",52,75,66,61),
	HX_("lineStyle",9d,a8,18,cb),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("endFill",fe,87,e0,25),
	HX_("setColor",61,da,90,58),
	HX_("drawRect",48,f7,10,60),
	HX_("drawRoundedRect",4d,b6,ef,ef),
	HX_("drawCircle",34,ed,d0,97),
	HX_("drawEllipse",3a,85,ce,54),
	HX_("drawPie",a8,3e,d5,fb),
	HX_("drawPieInner",ce,41,a8,9d),
	HX_("drawRectanglePie",81,31,a4,5b),
	HX_("curveTo",0a,60,88,ce),
	HX_("cubicCurveTo",e0,07,90,2e),
	HX_("lineTo",8f,46,a0,ec),
	HX_("addVertex",65,10,6c,59),
	HX_("draw",04,2c,70,42),
	HX_("sync",5b,ba,5f,4c),
	::String(null()) };

static void Graphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::EARCUT,"EARCUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Graphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::EARCUT,"EARCUT");
};

#endif

::hx::Class Graphics_obj::__mClass;

static ::String Graphics_obj_sStaticFields[] = {
	HX_("EARCUT",ac,3a,12,3a),
	::String(null())
};

void Graphics_obj::__register()
{
	Graphics_obj _hx_dummy;
	Graphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.Graphics",7f,e1,c6,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Graphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Graphics_obj::__SetStatic;
	__mClass->mMarkFunc = Graphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Graphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Graphics_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Graphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Graphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Graphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Graphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Graphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7c81022049e3eaa4_374_boot)
HXDLIN( 374)		EARCUT = null();
            	}
}

} // end namespace h2d
