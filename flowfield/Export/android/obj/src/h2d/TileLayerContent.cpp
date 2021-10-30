#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h2d_RenderContext
#include <h2d/RenderContext.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h2d_TileLayerContent
#include <h2d/TileLayerContent.h>
#endif
#ifndef INCLUDED_h2d_impl_BatchDrawState
#include <h2d/impl/BatchDrawState.h>
#endif
#ifndef INCLUDED_h2d_impl__BatchDrawState_StateEntry
#include <h2d/impl/_BatchDrawState/StateEntry.h>
#endif
#ifndef INCLUDED_h3d_Buffer
#include <h3d/Buffer.h>
#endif
#ifndef INCLUDED_h3d_BufferFlag
#include <h3d/BufferFlag.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
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
#ifndef INCLUDED_hxd_impl_Allocator
#include <hxd/impl/Allocator.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4521ff59aa0599ad_10_new,"h2d.TileLayerContent","new",0x110d7e5c,"h2d.TileLayerContent.new","h2d/TileGroup.hx",10,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_41_clear,"h2d.TileLayerContent","clear",0x3d599689,"h2d.TileLayerContent.clear","h2d/TileGroup.hx",41,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_56_isEmpty,"h2d.TileLayerContent","isEmpty",0xd8ee3a3f,"h2d.TileLayerContent.isEmpty","h2d/TileGroup.hx",56,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_60_triCount,"h2d.TileLayerContent","triCount",0x78765028,"h2d.TileLayerContent.triCount","h2d/TileGroup.hx",60,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_71_addColor,"h2d.TileLayerContent","addColor",0xf3bbb806,"h2d.TileLayerContent.addColor","h2d/TileGroup.hx",71,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_84_add,"h2d.TileLayerContent","add",0x1103a01d,"h2d.TileLayerContent.add","h2d/TileGroup.hx",84,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_142_addTransform,"h2d.TileLayerContent","addTransform",0x715e018f,"h2d.TileLayerContent.addTransform","h2d/TileGroup.hx",142,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_222_addPoint,"h2d.TileLayerContent","addPoint",0x6feefaf3,"h2d.TileLayerContent.addPoint","h2d/TileGroup.hx",222,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_234_insertColor,"h2d.TileLayerContent","insertColor",0x4d635966,"h2d.TileLayerContent.insertColor","h2d/TileGroup.hx",234,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_249_rectColor,"h2d.TileLayerContent","rectColor",0xa5fec49b,"h2d.TileLayerContent.rectColor","h2d/TileGroup.hx",249,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_292_rectGradient,"h2d.TileLayerContent","rectGradient",0x4196b9b8,"h2d.TileLayerContent.rectGradient","h2d/TileGroup.hx",292,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_333_fillArc,"h2d.TileLayerContent","fillArc",0xd06ff78b,"h2d.TileLayerContent.fillArc","h2d/TileGroup.hx",333,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_377_fillCircle,"h2d.TileLayerContent","fillCircle",0x26d64277,"h2d.TileLayerContent.fillCircle","h2d/TileGroup.hx",377,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_420_circle,"h2d.TileLayerContent","circle",0xbf6fa994,"h2d.TileLayerContent.circle","h2d/TileGroup.hx",420,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_462_arc,"h2d.TileLayerContent","arc",0x1103ac4e,"h2d.TileLayerContent.arc","h2d/TileGroup.hx",462,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_509_alloc,"h2d.TileLayerContent","alloc",0x1691c971,"h2d.TileLayerContent.alloc","h2d/TileGroup.hx",509,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_518_dispose,"h2d.TileLayerContent","dispose",0x87dadc9b,"h2d.TileLayerContent.dispose","h2d/TileGroup.hx",518,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_532_flush,"h2d.TileLayerContent","flush",0xf79987c0,"h2d.TileLayerContent.flush","h2d/TileGroup.hx",532,0x10ab1662)
HX_LOCAL_STACK_FRAME(_hx_pos_4521ff59aa0599ad_540_doRender,"h2d.TileLayerContent","doRender",0xc94311c5,"h2d.TileLayerContent.doRender","h2d/TileGroup.hx",540,0x10ab1662)
namespace h2d{

void TileLayerContent_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4521ff59aa0599ad_10_new)
HXLINE(  29)		this->useAllocator = false;
HXLINE(  33)		super::__construct();
HXLINE(  34)		this->state =  ::h2d::impl::BatchDrawState_obj::__alloc( HX_CTX );
HXLINE(  35)		this->clear();
            	}

Dynamic TileLayerContent_obj::__CreateEmpty() { return new TileLayerContent_obj; }

void *TileLayerContent_obj::_hx_vtable = 0;

Dynamic TileLayerContent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TileLayerContent_obj > _hx_result = new TileLayerContent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TileLayerContent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x566939c8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x566939c8;
	} else {
		return inClassId==(int)0x73643cb0;
	}
}

void TileLayerContent_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_41_clear)
HXLINE(  42)		int length = 0;
HXDLIN(  42)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN(  42)		if ((length > 0)) {
HXLINE(  42)			if ((length > this1->length)) {
HXLINE(  42)				this1[(length - 1)] = ((Float)0.);
            			}
            		}
HXDLIN(  42)		this->tmp = this1;
HXLINE(  43)		if (::hx::IsNotNull( this->buffer )) {
HXLINE(  44)			if (this->useAllocator) {
HXLINE(  44)				::hxd::impl::Allocator_obj::get()->disposeBuffer(this->buffer);
            			}
            			else {
HXLINE(  45)				this->buffer->dispose();
            			}
            		}
HXLINE(  47)		this->buffer = null();
HXLINE(  48)		this->xMin = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  49)		this->yMin = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  50)		this->xMax = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  51)		this->yMax = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  52)		this->state->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TileLayerContent_obj,clear,(void))

bool TileLayerContent_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_56_isEmpty)
HXDLIN(  56)		return (this->triCount() == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TileLayerContent_obj,isEmpty,return )

int TileLayerContent_obj::triCount(){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_60_triCount)
HXDLIN(  60)		if (::hx::IsNull( this->buffer )) {
HXDLIN(  60)			return (this->tmp->length >> 4);
            		}
            		else {
HXDLIN(  60)			return (this->buffer->totalVertices() >> 1);
            		}
HXDLIN(  60)		return 0;
            	}


void TileLayerContent_obj::addColor(Float x,Float y, ::h3d::Vector color, ::h2d::Tile t){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_71_addColor)
HXDLIN(  71)		this->add(x,y,color->x,color->y,color->z,color->w,t);
            	}


HX_DEFINE_DYNAMIC_FUNC4(TileLayerContent_obj,addColor,(void))

void TileLayerContent_obj::add(Float x,Float y,Float r,Float g,Float b,Float a, ::h2d::Tile t){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_84_add)
HXLINE(  85)		Float sx = (x + t->dx);
HXLINE(  86)		Float sy = (y + t->dy);
HXLINE(  87)		this->tmp->push(sx);
HXLINE(  88)		this->tmp->push(sy);
HXLINE(  89)		this->tmp->push(t->u);
HXLINE(  90)		this->tmp->push(t->v);
HXLINE(  91)		this->tmp->push(r);
HXLINE(  92)		this->tmp->push(g);
HXLINE(  93)		this->tmp->push(b);
HXLINE(  94)		this->tmp->push(a);
HXLINE(  95)		this->tmp->push((sx + t->width));
HXLINE(  96)		this->tmp->push(sy);
HXLINE(  97)		this->tmp->push(t->u2);
HXLINE(  98)		this->tmp->push(t->v);
HXLINE(  99)		this->tmp->push(r);
HXLINE( 100)		this->tmp->push(g);
HXLINE( 101)		this->tmp->push(b);
HXLINE( 102)		this->tmp->push(a);
HXLINE( 103)		this->tmp->push(sx);
HXLINE( 104)		this->tmp->push((sy + t->height));
HXLINE( 105)		this->tmp->push(t->u);
HXLINE( 106)		this->tmp->push(t->v2);
HXLINE( 107)		this->tmp->push(r);
HXLINE( 108)		this->tmp->push(g);
HXLINE( 109)		this->tmp->push(b);
HXLINE( 110)		this->tmp->push(a);
HXLINE( 111)		this->tmp->push((sx + t->width));
HXLINE( 112)		this->tmp->push((sy + t->height));
HXLINE( 113)		this->tmp->push(t->u2);
HXLINE( 114)		this->tmp->push(t->v2);
HXLINE( 115)		this->tmp->push(r);
HXLINE( 116)		this->tmp->push(g);
HXLINE( 117)		this->tmp->push(b);
HXLINE( 118)		this->tmp->push(a);
HXLINE( 120)		Float x1 = (x + t->dx);
HXDLIN( 120)		Float y1 = (y + t->dy);
HXLINE( 121)		if ((x1 < this->xMin)) {
HXLINE( 121)			this->xMin = x1;
            		}
HXLINE( 122)		if ((y1 < this->yMin)) {
HXLINE( 122)			this->yMin = y1;
            		}
HXLINE( 123)		x1 = (x1 + t->width);
HXLINE( 124)		y1 = (y1 + t->height);
HXLINE( 125)		if ((x1 > this->xMax)) {
HXLINE( 125)			this->xMax = x1;
            		}
HXLINE( 126)		if ((y1 > this->yMax)) {
HXLINE( 126)			this->yMax = y1;
            		}
HXLINE( 128)		if (::hx::IsNotNull( t )) {
HXLINE( 128)			this->state->setTexture(t->innerTex);
            		}
HXLINE( 129)		{
HXLINE( 129)			 ::h2d::impl::BatchDrawState _this = this->state;
HXDLIN( 129)			 ::h2d::impl::_BatchDrawState::StateEntry fh = _this->tail;
HXDLIN( 129)			fh->count = (fh->count + 4);
HXDLIN( 129)			 ::h2d::impl::BatchDrawState _this1 = _this;
HXDLIN( 129)			_this1->totalCount = (_this1->totalCount + 4);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(TileLayerContent_obj,add,(void))

void TileLayerContent_obj::addTransform(Float x,Float y,Float sx,Float sy,Float r, ::h3d::Vector c, ::h2d::Tile t){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_142_addTransform)
HXDLIN( 142)		 ::h2d::TileLayerContent _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 144)		Float ca = ::Math_obj::cos(r);
HXDLIN( 144)		Float sa = ::Math_obj::sin(r);
HXLINE( 145)		Float hx = t->width;
HXDLIN( 145)		Float hy = t->height;
HXLINE( 154)		Float dx = (t->dx * sx);
HXDLIN( 154)		Float dy = (t->dy * sy);
HXLINE( 155)		Float px = (((dx * ca) - (dy * sa)) + x);
HXLINE( 156)		Float py = (((dy * ca) + (dx * sa)) + y);
HXLINE( 158)		this->tmp->push(px);
HXLINE( 159)		this->tmp->push(py);
HXLINE( 160)		this->tmp->push(t->u);
HXLINE( 161)		this->tmp->push(t->v);
HXLINE( 162)		this->tmp->push(c->x);
HXLINE( 163)		this->tmp->push(c->y);
HXLINE( 164)		this->tmp->push(c->z);
HXLINE( 165)		this->tmp->push(c->w);
HXLINE( 166)		{
HXLINE( 166)			if ((px < _gthis->xMin)) {
HXLINE( 166)				_gthis->xMin = px;
            			}
HXDLIN( 166)			if ((py < _gthis->yMin)) {
HXLINE( 166)				_gthis->yMin = py;
            			}
HXDLIN( 166)			if ((px > _gthis->xMax)) {
HXLINE( 166)				_gthis->xMax = px;
            			}
HXDLIN( 166)			if ((py > _gthis->yMax)) {
HXLINE( 166)				_gthis->yMax = py;
            			}
            		}
HXLINE( 168)		Float dx1 = ((t->dx + hx) * sx);
HXDLIN( 168)		Float dy1 = (t->dy * sy);
HXLINE( 169)		Float px1 = (((dx1 * ca) - (dy1 * sa)) + x);
HXLINE( 170)		Float py1 = (((dy1 * ca) + (dx1 * sa)) + y);
HXLINE( 172)		this->tmp->push(px1);
HXLINE( 173)		this->tmp->push(py1);
HXLINE( 174)		this->tmp->push(t->u2);
HXLINE( 175)		this->tmp->push(t->v);
HXLINE( 176)		this->tmp->push(c->x);
HXLINE( 177)		this->tmp->push(c->y);
HXLINE( 178)		this->tmp->push(c->z);
HXLINE( 179)		this->tmp->push(c->w);
HXLINE( 180)		{
HXLINE( 180)			if ((px1 < _gthis->xMin)) {
HXLINE( 180)				_gthis->xMin = px1;
            			}
HXDLIN( 180)			if ((py1 < _gthis->yMin)) {
HXLINE( 180)				_gthis->yMin = py1;
            			}
HXDLIN( 180)			if ((px1 > _gthis->xMax)) {
HXLINE( 180)				_gthis->xMax = px1;
            			}
HXDLIN( 180)			if ((py1 > _gthis->yMax)) {
HXLINE( 180)				_gthis->yMax = py1;
            			}
            		}
HXLINE( 182)		Float dx2 = (t->dx * sx);
HXDLIN( 182)		Float dy2 = ((t->dy + hy) * sy);
HXLINE( 183)		Float px2 = (((dx2 * ca) - (dy2 * sa)) + x);
HXLINE( 184)		Float py2 = (((dy2 * ca) + (dx2 * sa)) + y);
HXLINE( 186)		this->tmp->push(px2);
HXLINE( 187)		this->tmp->push(py2);
HXLINE( 188)		this->tmp->push(t->u);
HXLINE( 189)		this->tmp->push(t->v2);
HXLINE( 190)		this->tmp->push(c->x);
HXLINE( 191)		this->tmp->push(c->y);
HXLINE( 192)		this->tmp->push(c->z);
HXLINE( 193)		this->tmp->push(c->w);
HXLINE( 194)		{
HXLINE( 194)			if ((px2 < _gthis->xMin)) {
HXLINE( 194)				_gthis->xMin = px2;
            			}
HXDLIN( 194)			if ((py2 < _gthis->yMin)) {
HXLINE( 194)				_gthis->yMin = py2;
            			}
HXDLIN( 194)			if ((px2 > _gthis->xMax)) {
HXLINE( 194)				_gthis->xMax = px2;
            			}
HXDLIN( 194)			if ((py2 > _gthis->yMax)) {
HXLINE( 194)				_gthis->yMax = py2;
            			}
            		}
HXLINE( 196)		Float dx3 = ((t->dx + hx) * sx);
HXDLIN( 196)		Float dy3 = ((t->dy + hy) * sy);
HXLINE( 197)		Float px3 = (((dx3 * ca) - (dy3 * sa)) + x);
HXLINE( 198)		Float py3 = (((dy3 * ca) + (dx3 * sa)) + y);
HXLINE( 200)		this->tmp->push(px3);
HXLINE( 201)		this->tmp->push(py3);
HXLINE( 202)		this->tmp->push(t->u2);
HXLINE( 203)		this->tmp->push(t->v2);
HXLINE( 204)		this->tmp->push(c->x);
HXLINE( 205)		this->tmp->push(c->y);
HXLINE( 206)		this->tmp->push(c->z);
HXLINE( 207)		this->tmp->push(c->w);
HXLINE( 208)		{
HXLINE( 208)			if ((px3 < _gthis->xMin)) {
HXLINE( 208)				_gthis->xMin = px3;
            			}
HXDLIN( 208)			if ((py3 < _gthis->yMin)) {
HXLINE( 208)				_gthis->yMin = py3;
            			}
HXDLIN( 208)			if ((px3 > _gthis->xMax)) {
HXLINE( 208)				_gthis->xMax = px3;
            			}
HXDLIN( 208)			if ((py3 > _gthis->yMax)) {
HXLINE( 208)				_gthis->yMax = py3;
            			}
            		}
HXLINE( 210)		if (::hx::IsNotNull( t )) {
HXLINE( 210)			this->state->setTexture(t->innerTex);
            		}
HXLINE( 211)		{
HXLINE( 211)			 ::h2d::impl::BatchDrawState _this = this->state;
HXDLIN( 211)			 ::h2d::impl::_BatchDrawState::StateEntry fh = _this->tail;
HXDLIN( 211)			fh->count = (fh->count + 4);
HXDLIN( 211)			 ::h2d::impl::BatchDrawState _this1 = _this;
HXDLIN( 211)			_this1->totalCount = (_this1->totalCount + 4);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(TileLayerContent_obj,addTransform,(void))

void TileLayerContent_obj::addPoint(Float x,Float y,int color){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_222_addPoint)
HXLINE( 223)		this->tmp->push(x);
HXLINE( 224)		this->tmp->push(y);
HXLINE( 225)		this->tmp->push(0);
HXLINE( 226)		this->tmp->push(0);
HXLINE( 227)		{
HXLINE( 227)			this->tmp->push((( (Float)(((color >> 16) & 255)) ) / ((Float)255.)));
HXDLIN( 227)			this->tmp->push((( (Float)(((color >> 8) & 255)) ) / ((Float)255.)));
HXDLIN( 227)			this->tmp->push((( (Float)((color & 255)) ) / ((Float)255.)));
HXDLIN( 227)			this->tmp->push((( (Float)(::hx::UShr(color,24)) ) / ((Float)255.)));
            		}
HXLINE( 228)		if ((x < this->xMin)) {
HXLINE( 228)			this->xMin = x;
            		}
HXLINE( 229)		if ((y < this->yMin)) {
HXLINE( 229)			this->yMin = y;
            		}
HXLINE( 230)		if ((x > this->xMax)) {
HXLINE( 230)			this->xMax = x;
            		}
HXLINE( 231)		if ((y > this->yMax)) {
HXLINE( 231)			this->yMax = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(TileLayerContent_obj,addPoint,(void))

void TileLayerContent_obj::insertColor(int c){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_234_insertColor)
HXLINE( 235)		this->tmp->push((( (Float)(((c >> 16) & 255)) ) / ((Float)255.)));
HXLINE( 236)		this->tmp->push((( (Float)(((c >> 8) & 255)) ) / ((Float)255.)));
HXLINE( 237)		this->tmp->push((( (Float)((c & 255)) ) / ((Float)255.)));
HXLINE( 238)		this->tmp->push((( (Float)(::hx::UShr(c,24)) ) / ((Float)255.)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileLayerContent_obj,insertColor,(void))

void TileLayerContent_obj::rectColor(Float x,Float y,Float w,Float h,int color){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_249_rectColor)
HXLINE( 250)		this->tmp->push(x);
HXLINE( 251)		this->tmp->push(y);
HXLINE( 252)		this->tmp->push(0);
HXLINE( 253)		this->tmp->push(0);
HXLINE( 254)		{
HXLINE( 254)			this->tmp->push((( (Float)(((color >> 16) & 255)) ) / ((Float)255.)));
HXDLIN( 254)			this->tmp->push((( (Float)(((color >> 8) & 255)) ) / ((Float)255.)));
HXDLIN( 254)			this->tmp->push((( (Float)((color & 255)) ) / ((Float)255.)));
HXDLIN( 254)			this->tmp->push((( (Float)(::hx::UShr(color,24)) ) / ((Float)255.)));
            		}
HXLINE( 255)		this->tmp->push((x + w));
HXLINE( 256)		this->tmp->push(y);
HXLINE( 257)		this->tmp->push(1);
HXLINE( 258)		this->tmp->push(0);
HXLINE( 259)		{
HXLINE( 259)			this->tmp->push((( (Float)(((color >> 16) & 255)) ) / ((Float)255.)));
HXDLIN( 259)			this->tmp->push((( (Float)(((color >> 8) & 255)) ) / ((Float)255.)));
HXDLIN( 259)			this->tmp->push((( (Float)((color & 255)) ) / ((Float)255.)));
HXDLIN( 259)			this->tmp->push((( (Float)(::hx::UShr(color,24)) ) / ((Float)255.)));
            		}
HXLINE( 260)		this->tmp->push(x);
HXLINE( 261)		this->tmp->push((y + h));
HXLINE( 262)		this->tmp->push(0);
HXLINE( 263)		this->tmp->push(1);
HXLINE( 264)		{
HXLINE( 264)			this->tmp->push((( (Float)(((color >> 16) & 255)) ) / ((Float)255.)));
HXDLIN( 264)			this->tmp->push((( (Float)(((color >> 8) & 255)) ) / ((Float)255.)));
HXDLIN( 264)			this->tmp->push((( (Float)((color & 255)) ) / ((Float)255.)));
HXDLIN( 264)			this->tmp->push((( (Float)(::hx::UShr(color,24)) ) / ((Float)255.)));
            		}
HXLINE( 265)		this->tmp->push((x + w));
HXLINE( 266)		this->tmp->push((y + h));
HXLINE( 267)		this->tmp->push(1);
HXLINE( 268)		this->tmp->push(1);
HXLINE( 269)		{
HXLINE( 269)			this->tmp->push((( (Float)(((color >> 16) & 255)) ) / ((Float)255.)));
HXDLIN( 269)			this->tmp->push((( (Float)(((color >> 8) & 255)) ) / ((Float)255.)));
HXDLIN( 269)			this->tmp->push((( (Float)((color & 255)) ) / ((Float)255.)));
HXDLIN( 269)			this->tmp->push((( (Float)(::hx::UShr(color,24)) ) / ((Float)255.)));
            		}
HXLINE( 271)		if ((x < this->xMin)) {
HXLINE( 271)			this->xMin = x;
            		}
HXLINE( 272)		if ((y < this->yMin)) {
HXLINE( 272)			this->yMin = y;
            		}
HXLINE( 273)		x = (x + w);
HXLINE( 274)		y = (y + h);
HXLINE( 275)		if ((x > this->xMax)) {
HXLINE( 275)			this->xMax = x;
            		}
HXLINE( 276)		if ((y > this->yMax)) {
HXLINE( 276)			this->yMax = y;
            		}
HXLINE( 278)		{
HXLINE( 278)			 ::h2d::impl::BatchDrawState _this = this->state;
HXDLIN( 278)			 ::h2d::impl::_BatchDrawState::StateEntry fh = _this->tail;
HXDLIN( 278)			fh->count = (fh->count + 4);
HXDLIN( 278)			 ::h2d::impl::BatchDrawState _this1 = _this;
HXDLIN( 278)			_this1->totalCount = (_this1->totalCount + 4);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(TileLayerContent_obj,rectColor,(void))

void TileLayerContent_obj::rectGradient(Float x,Float y,Float w,Float h,int ctl,int ctr,int cbl,int cbr){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_292_rectGradient)
HXLINE( 293)		this->tmp->push(x);
HXLINE( 294)		this->tmp->push(y);
HXLINE( 295)		this->tmp->push(0);
HXLINE( 296)		this->tmp->push(0);
HXLINE( 297)		{
HXLINE( 297)			this->tmp->push((( (Float)(((ctl >> 16) & 255)) ) / ((Float)255.)));
HXDLIN( 297)			this->tmp->push((( (Float)(((ctl >> 8) & 255)) ) / ((Float)255.)));
HXDLIN( 297)			this->tmp->push((( (Float)((ctl & 255)) ) / ((Float)255.)));
HXDLIN( 297)			this->tmp->push((( (Float)(::hx::UShr(ctl,24)) ) / ((Float)255.)));
            		}
HXLINE( 298)		this->tmp->push((x + w));
HXLINE( 299)		this->tmp->push(y);
HXLINE( 300)		this->tmp->push(1);
HXLINE( 301)		this->tmp->push(0);
HXLINE( 302)		{
HXLINE( 302)			this->tmp->push((( (Float)(((ctr >> 16) & 255)) ) / ((Float)255.)));
HXDLIN( 302)			this->tmp->push((( (Float)(((ctr >> 8) & 255)) ) / ((Float)255.)));
HXDLIN( 302)			this->tmp->push((( (Float)((ctr & 255)) ) / ((Float)255.)));
HXDLIN( 302)			this->tmp->push((( (Float)(::hx::UShr(ctr,24)) ) / ((Float)255.)));
            		}
HXLINE( 303)		this->tmp->push(x);
HXLINE( 304)		this->tmp->push((y + h));
HXLINE( 305)		this->tmp->push(0);
HXLINE( 306)		this->tmp->push(1);
HXLINE( 307)		{
HXLINE( 307)			this->tmp->push((( (Float)(((cbl >> 16) & 255)) ) / ((Float)255.)));
HXDLIN( 307)			this->tmp->push((( (Float)(((cbl >> 8) & 255)) ) / ((Float)255.)));
HXDLIN( 307)			this->tmp->push((( (Float)((cbl & 255)) ) / ((Float)255.)));
HXDLIN( 307)			this->tmp->push((( (Float)(::hx::UShr(cbl,24)) ) / ((Float)255.)));
            		}
HXLINE( 308)		this->tmp->push((x + w));
HXLINE( 309)		this->tmp->push((y + h));
HXLINE( 310)		this->tmp->push(1);
HXLINE( 311)		this->tmp->push(1);
HXLINE( 312)		{
HXLINE( 312)			this->tmp->push((( (Float)(((cbr >> 16) & 255)) ) / ((Float)255.)));
HXDLIN( 312)			this->tmp->push((( (Float)(((cbr >> 8) & 255)) ) / ((Float)255.)));
HXDLIN( 312)			this->tmp->push((( (Float)((cbr & 255)) ) / ((Float)255.)));
HXDLIN( 312)			this->tmp->push((( (Float)(::hx::UShr(cbr,24)) ) / ((Float)255.)));
            		}
HXLINE( 314)		if ((x < this->xMin)) {
HXLINE( 314)			this->xMin = x;
            		}
HXLINE( 315)		if ((y < this->yMin)) {
HXLINE( 315)			this->yMin = y;
            		}
HXLINE( 316)		x = (x + w);
HXLINE( 317)		y = (y + h);
HXLINE( 318)		if ((x > this->xMax)) {
HXLINE( 318)			this->xMax = x;
            		}
HXLINE( 319)		if ((y > this->yMax)) {
HXLINE( 319)			this->yMax = y;
            		}
HXLINE( 321)		{
HXLINE( 321)			 ::h2d::impl::BatchDrawState _this = this->state;
HXDLIN( 321)			 ::h2d::impl::_BatchDrawState::StateEntry fh = _this->tail;
HXDLIN( 321)			fh->count = (fh->count + 4);
HXDLIN( 321)			 ::h2d::impl::BatchDrawState _this1 = _this;
HXDLIN( 321)			_this1->totalCount = (_this1->totalCount + 4);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(TileLayerContent_obj,rectGradient,(void))

void TileLayerContent_obj::fillArc(Float x,Float y,Float ray,int c,Float start,Float end){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_333_fillArc)
HXLINE( 334)		if ((end <= start)) {
HXLINE( 334)			return;
            		}
HXLINE( 335)		Float arcLength = (end - start);
HXLINE( 336)		int nsegments = ::Math_obj::ceil((((ray * ((Float)3.14)) * ( (Float)(2) )) / ( (Float)(4) )));
HXLINE( 337)		if ((nsegments < 4)) {
HXLINE( 337)			nsegments = 4;
            		}
HXLINE( 338)		Float angle = (arcLength / ( (Float)(nsegments) ));
HXLINE( 339)		Float prevX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 340)		Float prevY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 341)		Float _x = ((Float)0.);
HXLINE( 342)		Float _y = ((Float)0.);
HXLINE( 343)		int i = 0;
HXLINE( 344)		int count = 0;
HXLINE( 345)		while((i < nsegments)){
HXLINE( 346)			Float a = (start + (( (Float)(i) ) * angle));
HXLINE( 347)			_x = (x + (::Math_obj::cos(a) * ray));
HXLINE( 348)			_y = (y + (::Math_obj::sin(a) * ray));
HXLINE( 349)			if ((prevX != ::Math_obj::NEGATIVE_INFINITY)) {
HXLINE( 350)				this->addPoint(x,y,c);
HXLINE( 351)				this->addPoint(_x,_y,c);
HXLINE( 352)				this->addPoint(prevX,prevY,c);
HXLINE( 353)				this->addPoint(prevX,prevY,c);
HXLINE( 354)				count = (count + 4);
            			}
HXLINE( 356)			prevX = _x;
HXLINE( 357)			prevY = _y;
HXLINE( 358)			i = (i + 1);
            		}
HXLINE( 360)		Float a = end;
HXLINE( 361)		_x = (x + (::Math_obj::cos(a) * ray));
HXLINE( 362)		_y = (y + (::Math_obj::sin(a) * ray));
HXLINE( 363)		this->addPoint(x,y,c);
HXLINE( 364)		this->addPoint(_x,_y,c);
HXLINE( 365)		this->addPoint(prevX,prevY,c);
HXLINE( 366)		this->addPoint(prevX,prevY,c);
HXLINE( 367)		{
HXLINE( 367)			 ::h2d::impl::BatchDrawState _this = this->state;
HXDLIN( 367)			int count1 = (count + 4);
HXDLIN( 367)			 ::h2d::impl::_BatchDrawState::StateEntry fh = _this->tail;
HXDLIN( 367)			fh->count = (fh->count + count1);
HXDLIN( 367)			 ::h2d::impl::BatchDrawState _this1 = _this;
HXDLIN( 367)			_this1->totalCount = (_this1->totalCount + count1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(TileLayerContent_obj,fillArc,(void))

void TileLayerContent_obj::fillCircle(Float x,Float y,Float radius,int c){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_377_fillCircle)
HXLINE( 378)		int nsegments = ::Math_obj::ceil((((radius * ((Float)3.14)) * ( (Float)(2) )) / ( (Float)(2) )));
HXLINE( 379)		if ((nsegments < 3)) {
HXLINE( 379)			nsegments = 3;
            		}
HXLINE( 380)		Float angle = ((::Math_obj::PI * ( (Float)(2) )) / ( (Float)(nsegments) ));
HXLINE( 381)		Float prevX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 382)		Float prevY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 383)		Float firstX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 384)		Float firstY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 385)		Float curX = ((Float)0.);
HXDLIN( 385)		Float curY = ((Float)0.);
HXLINE( 386)		int count = 0;
HXLINE( 387)		{
HXLINE( 387)			int _g = 0;
HXDLIN( 387)			int _g1 = nsegments;
HXDLIN( 387)			while((_g < _g1)){
HXLINE( 387)				_g = (_g + 1);
HXDLIN( 387)				int i = (_g - 1);
HXLINE( 388)				Float a = (( (Float)(i) ) * angle);
HXLINE( 389)				curX = (x + (::Math_obj::cos(a) * radius));
HXLINE( 390)				curY = (y + (::Math_obj::sin(a) * radius));
HXLINE( 391)				if ((prevX != ::Math_obj::NEGATIVE_INFINITY)) {
HXLINE( 392)					this->addPoint(x,y,c);
HXLINE( 393)					this->addPoint(curX,curY,c);
HXLINE( 394)					this->addPoint(prevX,prevY,c);
HXLINE( 395)					this->addPoint(x,y,c);
HXLINE( 396)					count = (count + 4);
            				}
HXLINE( 398)				if ((firstX == ::Math_obj::NEGATIVE_INFINITY)) {
HXLINE( 399)					firstX = curX;
HXLINE( 400)					firstY = curY;
            				}
HXLINE( 402)				prevX = curX;
HXLINE( 403)				prevY = curY;
            			}
            		}
HXLINE( 405)		this->addPoint(x,y,c);
HXLINE( 406)		this->addPoint(curX,curY,c);
HXLINE( 407)		this->addPoint(firstX,firstY,c);
HXLINE( 408)		this->addPoint(x,y,c);
HXLINE( 409)		{
HXLINE( 409)			 ::h2d::impl::BatchDrawState _this = this->state;
HXDLIN( 409)			int count1 = (count + 4);
HXDLIN( 409)			 ::h2d::impl::_BatchDrawState::StateEntry fh = _this->tail;
HXDLIN( 409)			fh->count = (fh->count + count1);
HXDLIN( 409)			 ::h2d::impl::BatchDrawState _this1 = _this;
HXDLIN( 409)			_this1->totalCount = (_this1->totalCount + count1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(TileLayerContent_obj,fillCircle,(void))

void TileLayerContent_obj::circle(Float x,Float y,Float ray,Float size,int c){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_420_circle)
HXLINE( 421)		if ((size > ray)) {
HXLINE( 421)			return;
            		}
HXLINE( 422)		int nsegments = ::Math_obj::ceil((((ray * ((Float)3.14)) * ( (Float)(2) )) / ( (Float)(2) )));
HXLINE( 423)		if ((nsegments < 3)) {
HXLINE( 423)			nsegments = 3;
            		}
HXLINE( 424)		Float ray1 = (ray - size);
HXLINE( 425)		Float angle = ((::Math_obj::PI * ( (Float)(2) )) / ( (Float)(nsegments) ));
HXLINE( 426)		Float prevX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 427)		Float prevY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 428)		Float prevX1 = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 429)		Float prevY1 = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 430)		int count = 0;
HXLINE( 431)		{
HXLINE( 431)			int _g = 0;
HXDLIN( 431)			int _g1 = nsegments;
HXDLIN( 431)			while((_g < _g1)){
HXLINE( 431)				_g = (_g + 1);
HXDLIN( 431)				int i = (_g - 1);
HXLINE( 432)				Float a = (( (Float)(i) ) * angle);
HXLINE( 433)				Float _x = (x + (::Math_obj::cos(a) * ray));
HXLINE( 434)				Float _y = (y + (::Math_obj::sin(a) * ray));
HXLINE( 435)				Float _x1 = (x + (::Math_obj::cos(a) * ray1));
HXLINE( 436)				Float _y1 = (y + (::Math_obj::sin(a) * ray1));
HXLINE( 437)				if ((prevX != ::Math_obj::NEGATIVE_INFINITY)) {
HXLINE( 438)					this->addPoint(_x,_y,c);
HXLINE( 439)					this->addPoint(prevX,prevY,c);
HXLINE( 440)					this->addPoint(_x1,_y1,c);
HXLINE( 441)					this->addPoint(prevX1,prevY1,c);
HXLINE( 442)					count = (count + 4);
            				}
HXLINE( 444)				prevX = _x;
HXLINE( 445)				prevY = _y;
HXLINE( 446)				prevX1 = _x1;
HXLINE( 447)				prevY1 = _y1;
            			}
            		}
HXLINE( 449)		{
HXLINE( 449)			 ::h2d::impl::BatchDrawState _this = this->state;
HXDLIN( 449)			 ::h2d::impl::_BatchDrawState::StateEntry fh = _this->tail;
HXDLIN( 449)			fh->count = (fh->count + count);
HXDLIN( 449)			 ::h2d::impl::BatchDrawState _this1 = _this;
HXDLIN( 449)			_this1->totalCount = (_this1->totalCount + count);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(TileLayerContent_obj,circle,(void))

void TileLayerContent_obj::arc(Float x,Float y,Float ray,Float size,Float start,Float end,int c){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_462_arc)
HXLINE( 463)		if ((size > ray)) {
HXLINE( 463)			return;
            		}
HXLINE( 464)		if ((end <= start)) {
HXLINE( 464)			return;
            		}
HXLINE( 465)		Float arcLength = (end - start);
HXLINE( 466)		int nsegments = ::Math_obj::ceil((((ray * ((Float)3.14)) * ( (Float)(2) )) / ( (Float)(4) )));
HXLINE( 467)		if ((nsegments < 3)) {
HXLINE( 467)			nsegments = 3;
            		}
HXLINE( 468)		Float ray1 = (ray - size);
HXLINE( 469)		Float angle = (arcLength / ( (Float)(nsegments) ));
HXLINE( 470)		Float prevX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 471)		Float prevY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 472)		Float prevX1 = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 473)		Float prevY1 = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 474)		Float _x = ((Float)0.);
HXLINE( 475)		Float _y = ((Float)0.);
HXLINE( 476)		Float _x1 = ((Float)0.);
HXLINE( 477)		Float _y1 = ((Float)0.);
HXLINE( 478)		int count = 0;
HXLINE( 479)		{
HXLINE( 479)			int _g = 0;
HXDLIN( 479)			int _g1 = nsegments;
HXDLIN( 479)			while((_g < _g1)){
HXLINE( 479)				_g = (_g + 1);
HXDLIN( 479)				int i = (_g - 1);
HXLINE( 480)				Float a = (start + (( (Float)(i) ) * angle));
HXLINE( 481)				_x = (x + (::Math_obj::cos(a) * ray));
HXLINE( 482)				_y = (y + (::Math_obj::sin(a) * ray));
HXLINE( 483)				_x1 = (x + (::Math_obj::cos(a) * ray1));
HXLINE( 484)				_y1 = (y + (::Math_obj::sin(a) * ray1));
HXLINE( 485)				if ((prevX != ::Math_obj::NEGATIVE_INFINITY)) {
HXLINE( 486)					this->addPoint(_x,_y,c);
HXLINE( 487)					this->addPoint(prevX,prevY,c);
HXLINE( 488)					this->addPoint(_x1,_y1,c);
HXLINE( 489)					this->addPoint(prevX1,prevY1,c);
HXLINE( 490)					count = (count + 4);
            				}
HXLINE( 492)				prevX = _x;
HXLINE( 493)				prevY = _y;
HXLINE( 494)				prevX1 = _x1;
HXLINE( 495)				prevY1 = _y1;
            			}
            		}
HXLINE( 497)		Float a = end;
HXLINE( 498)		_x = (x + (::Math_obj::cos(a) * ray));
HXLINE( 499)		_y = (y + (::Math_obj::sin(a) * ray));
HXLINE( 500)		_x1 = (x + (::Math_obj::cos(a) * ray1));
HXLINE( 501)		_y1 = (y + (::Math_obj::sin(a) * ray1));
HXLINE( 502)		this->addPoint(_x,_y,c);
HXLINE( 503)		this->addPoint(prevX,prevY,c);
HXLINE( 504)		this->addPoint(_x1,_y1,c);
HXLINE( 505)		this->addPoint(prevX1,prevY1,c);
HXLINE( 506)		{
HXLINE( 506)			 ::h2d::impl::BatchDrawState _this = this->state;
HXDLIN( 506)			int count1 = (count + 4);
HXDLIN( 506)			 ::h2d::impl::_BatchDrawState::StateEntry fh = _this->tail;
HXDLIN( 506)			fh->count = (fh->count + count1);
HXDLIN( 506)			 ::h2d::impl::BatchDrawState _this1 = _this;
HXDLIN( 506)			_this1->totalCount = (_this1->totalCount + count1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(TileLayerContent_obj,arc,(void))

void TileLayerContent_obj::alloc( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_509_alloc)
HXLINE( 510)		if (::hx::IsNull( this->tmp )) {
HXLINE( 510)			this->clear();
            		}
HXLINE( 511)		if ((this->tmp->length > 0)) {
HXLINE( 512)			 ::h3d::Buffer _hx_tmp;
HXDLIN( 512)			if (this->useAllocator) {
HXLINE( 512)				_hx_tmp = ::hxd::impl::Allocator_obj::get()->ofFloats(this->tmp,8,3);
            			}
            			else {
HXLINE( 512)				_hx_tmp = ::h3d::Buffer_obj::ofFloats(this->tmp,8,::Array_obj< ::Dynamic>::__new(2)->init(0,::h3d::BufferFlag_obj::Quads_dyn())->init(1,::h3d::BufferFlag_obj::RawFormat_dyn()));
            			}
HXDLIN( 512)			this->buffer = _hx_tmp;
            		}
            	}


void TileLayerContent_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_518_dispose)
HXLINE( 519)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 520)			if (this->useAllocator) {
HXLINE( 520)				::hxd::impl::Allocator_obj::get()->disposeBuffer(this->buffer);
            			}
            			else {
HXLINE( 521)				this->buffer->dispose();
            			}
HXLINE( 522)			this->buffer = null();
            		}
HXLINE( 524)		this->super::dispose();
            	}


void TileLayerContent_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_532_flush)
HXDLIN( 532)		bool _hx_tmp;
HXDLIN( 532)		if (::hx::IsNotNull( this->buffer )) {
HXDLIN( 532)			 ::h3d::Buffer _this = this->buffer;
HXDLIN( 532)			if (::hx::IsNotNull( _this->buffer )) {
HXDLIN( 532)				_hx_tmp = ::hx::IsNull( _this->buffer->vbuf );
            			}
            			else {
HXDLIN( 532)				_hx_tmp = true;
            			}
            		}
            		else {
HXDLIN( 532)			_hx_tmp = true;
            		}
HXDLIN( 532)		if (_hx_tmp) {
HXDLIN( 532)			this->alloc(::h3d::Engine_obj::CURRENT);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TileLayerContent_obj,flush,(void))

void TileLayerContent_obj::doRender( ::h2d::RenderContext ctx,int min,int len){
            	HX_STACKFRAME(&_hx_pos_4521ff59aa0599ad_540_doRender)
HXLINE( 541)		bool _hx_tmp;
HXDLIN( 541)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 541)			 ::h3d::Buffer _this = this->buffer;
HXDLIN( 541)			if (::hx::IsNotNull( _this->buffer )) {
HXLINE( 541)				_hx_tmp = ::hx::IsNull( _this->buffer->vbuf );
            			}
            			else {
HXLINE( 541)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 541)			_hx_tmp = true;
            		}
HXDLIN( 541)		if (_hx_tmp) {
HXLINE( 541)			this->alloc(::h3d::Engine_obj::CURRENT);
            		}
HXLINE( 542)		this->state->drawQuads(ctx,this->buffer,min,len);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TileLayerContent_obj,doRender,(void))


::hx::ObjectPtr< TileLayerContent_obj > TileLayerContent_obj::__new() {
	::hx::ObjectPtr< TileLayerContent_obj > __this = new TileLayerContent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TileLayerContent_obj > TileLayerContent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TileLayerContent_obj *__this = (TileLayerContent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TileLayerContent_obj), true, "h2d.TileLayerContent"));
	*(void **)__this = TileLayerContent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TileLayerContent_obj::TileLayerContent_obj()
{
}

void TileLayerContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileLayerContent);
	HX_MARK_MEMBER_NAME(tmp,"tmp");
	HX_MARK_MEMBER_NAME(xMin,"xMin");
	HX_MARK_MEMBER_NAME(yMin,"yMin");
	HX_MARK_MEMBER_NAME(xMax,"xMax");
	HX_MARK_MEMBER_NAME(yMax,"yMax");
	HX_MARK_MEMBER_NAME(useAllocator,"useAllocator");
	HX_MARK_MEMBER_NAME(state,"state");
	 ::h3d::prim::Primitive_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileLayerContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tmp,"tmp");
	HX_VISIT_MEMBER_NAME(xMin,"xMin");
	HX_VISIT_MEMBER_NAME(yMin,"yMin");
	HX_VISIT_MEMBER_NAME(xMax,"xMax");
	HX_VISIT_MEMBER_NAME(yMax,"yMax");
	HX_VISIT_MEMBER_NAME(useAllocator,"useAllocator");
	HX_VISIT_MEMBER_NAME(state,"state");
	 ::h3d::prim::Primitive_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TileLayerContent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { return ::hx::Val( tmp ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"arc") ) { return ::hx::Val( arc_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { return ::hx::Val( xMin ); }
		if (HX_FIELD_EQ(inName,"yMin") ) { return ::hx::Val( yMin ); }
		if (HX_FIELD_EQ(inName,"xMax") ) { return ::hx::Val( xMax ); }
		if (HX_FIELD_EQ(inName,"yMax") ) { return ::hx::Val( yMax ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return ::hx::Val( circle_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		if (HX_FIELD_EQ(inName,"fillArc") ) { return ::hx::Val( fillArc_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triCount") ) { return ::hx::Val( triCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"addColor") ) { return ::hx::Val( addColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"doRender") ) { return ::hx::Val( doRender_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rectColor") ) { return ::hx::Val( rectColor_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fillCircle") ) { return ::hx::Val( fillCircle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"insertColor") ) { return ::hx::Val( insertColor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useAllocator") ) { return ::hx::Val( useAllocator ); }
		if (HX_FIELD_EQ(inName,"addTransform") ) { return ::hx::Val( addTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"rectGradient") ) { return ::hx::Val( rectGradient_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TileLayerContent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { tmp=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { xMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMin") ) { yMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xMax") ) { xMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMax") ) { yMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::h2d::impl::BatchDrawState >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useAllocator") ) { useAllocator=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileLayerContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tmp",d7,64,58,00));
	outFields->push(HX_("xMin",fa,63,8c,4f));
	outFields->push(HX_("yMin",99,9a,35,50));
	outFields->push(HX_("xMax",0c,5d,8c,4f));
	outFields->push(HX_("yMax",ab,93,35,50));
	outFields->push(HX_("useAllocator",84,0e,29,ac));
	outFields->push(HX_("state",11,76,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TileLayerContent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(TileLayerContent_obj,tmp),HX_("tmp",d7,64,58,00)},
	{::hx::fsFloat,(int)offsetof(TileLayerContent_obj,xMin),HX_("xMin",fa,63,8c,4f)},
	{::hx::fsFloat,(int)offsetof(TileLayerContent_obj,yMin),HX_("yMin",99,9a,35,50)},
	{::hx::fsFloat,(int)offsetof(TileLayerContent_obj,xMax),HX_("xMax",0c,5d,8c,4f)},
	{::hx::fsFloat,(int)offsetof(TileLayerContent_obj,yMax),HX_("yMax",ab,93,35,50)},
	{::hx::fsBool,(int)offsetof(TileLayerContent_obj,useAllocator),HX_("useAllocator",84,0e,29,ac)},
	{::hx::fsObject /*  ::h2d::impl::BatchDrawState */ ,(int)offsetof(TileLayerContent_obj,state),HX_("state",11,76,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TileLayerContent_obj_sStaticStorageInfo = 0;
#endif

static ::String TileLayerContent_obj_sMemberFields[] = {
	HX_("tmp",d7,64,58,00),
	HX_("xMin",fa,63,8c,4f),
	HX_("yMin",99,9a,35,50),
	HX_("xMax",0c,5d,8c,4f),
	HX_("yMax",ab,93,35,50),
	HX_("useAllocator",84,0e,29,ac),
	HX_("state",11,76,0b,84),
	HX_("clear",8d,71,5b,48),
	HX_("isEmpty",43,de,5f,0c),
	HX_("triCount",a4,2f,74,48),
	HX_("addColor",82,97,b9,c3),
	HX_("add",21,f2,49,00),
	HX_("addTransform",0b,4f,e7,44),
	HX_("addPoint",6f,da,ec,3f),
	HX_("insertColor",6a,4f,11,92),
	HX_("rectColor",9f,71,24,d4),
	HX_("rectGradient",34,07,20,15),
	HX_("fillArc",8f,9b,e1,03),
	HX_("fillCircle",f3,f8,a7,59),
	HX_("circle",10,72,0d,56),
	HX_("arc",52,fe,49,00),
	HX_("alloc",75,a4,93,21),
	HX_("dispose",9f,80,4c,bb),
	HX_("flush",c4,62,9b,02),
	HX_("doRender",41,f1,40,99),
	::String(null()) };

::hx::Class TileLayerContent_obj::__mClass;

void TileLayerContent_obj::__register()
{
	TileLayerContent_obj _hx_dummy;
	TileLayerContent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.TileLayerContent",6a,60,28,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TileLayerContent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TileLayerContent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TileLayerContent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TileLayerContent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
