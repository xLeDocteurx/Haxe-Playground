#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Face
#include <h3d/mat/Face.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_prim_BigPrimitive
#include <h3d/prim/BigPrimitive.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_h3d_scene_Graphics
#include <h3d/scene/Graphics.h>
#endif
#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene__Graphics_GPoint
#include <h3d/scene/_Graphics/GPoint.h>
#endif
#ifndef INCLUDED_h3d_shader_LineShader
#include <h3d/shader/LineShader.h>
#endif
#ifndef INCLUDED_h3d_shader_VertexColorAlpha
#include <h3d/shader/VertexColorAlpha.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_23_new,"h3d.scene.Graphics","new",0x5fcd0fd4,"h3d.scene.Graphics.new","h3d/scene/Graphics.hx",23,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_58_onRemove,"h3d.scene.Graphics","onRemove",0xab3dcecf,"h3d.scene.Graphics.onRemove","h3d/scene/Graphics.hx",58,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_63_set_is3D,"h3d.scene.Graphics","set_is3D",0x3adf2824,"h3d.scene.Graphics.set_is3D","h3d/scene/Graphics.hx",63,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_76_flushLine,"h3d.scene.Graphics","flushLine",0x9e36a74c,"h3d.scene.Graphics.flushLine","h3d/scene/Graphics.hx",76,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_185_flush,"h3d.scene.Graphics","flush",0x227a6738,"h3d.scene.Graphics.flush","h3d/scene/Graphics.hx",185,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_194_sync,"h3d.scene.Graphics","sync",0x76fe0067,"h3d.scene.Graphics.sync","h3d/scene/Graphics.hx",194,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_200_draw,"h3d.scene.Graphics","draw",0x6d0e7210,"h3d.scene.Graphics.draw","h3d/scene/Graphics.hx",200,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_206_clear,"h3d.scene.Graphics","clear",0x683a7601,"h3d.scene.Graphics.clear","h3d/scene/Graphics.hx",206,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_211_lineStyle,"h3d.scene.Graphics","lineStyle",0x2b44f711,"h3d.scene.Graphics.lineStyle","h3d/scene/Graphics.hx",211,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_220_setColor,"h3d.scene.Graphics","setColor",0x1f99166d,"h3d.scene.Graphics.setColor","h3d/scene/Graphics.hx",220,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_227_drawLine,"h3d.scene.Graphics","drawLine",0x2324fe24,"h3d.scene.Graphics.drawLine","h3d/scene/Graphics.hx",227,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_233_moveTo,"h3d.scene.Graphics","moveTo",0x8ff1b3f8,"h3d.scene.Graphics.moveTo","h3d/scene/Graphics.hx",233,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_244_addVertex,"h3d.scene.Graphics","addVertex",0xb9985ed9,"h3d.scene.Graphics.addVertex","h3d/scene/Graphics.hx",244,0x4c88229a)
HX_LOCAL_STACK_FRAME(_hx_pos_347ff72d3b9d2ebf_247_lineTo,"h3d.scene.Graphics","lineTo",0xafe5279b,"h3d.scene.Graphics.lineTo","h3d/scene/Graphics.hx",247,0x4c88229a)
namespace h3d{
namespace scene{

void Graphics_obj::__construct( ::h3d::scene::Object parent){
            	HX_GC_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_23_new)
HXLINE(  33)		this->lineSize = ((Float)0.);
HXLINE(  29)		this->curR = ((Float)0.);
HXLINE(  28)		this->curZ = ((Float)0.);
HXLINE(  27)		this->curY = ((Float)0.);
HXLINE(  26)		this->curX = ((Float)0.);
HXLINE(  43)		this->bprim =  ::h3d::prim::BigPrimitive_obj::__alloc( HX_CTX ,12,null());
HXLINE(  44)		this->bprim->isStatic = false;
HXLINE(  45)		super::__construct(this->bprim,null(),parent);
HXLINE(  46)		this->tmpPoints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  47)		this->lineShader =  ::h3d::shader::LineShader_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  48)		this->lineShader->setPriority(-100);
HXLINE(  49)		{
HXLINE(  49)			 ::h3d::mat::Material _this = this->material;
HXDLIN(  49)			_this->set_castShadows(false);
HXDLIN(  49)			_this->set_receiveShadows(false);
            		}
HXLINE(  50)		this->material->passes->set_enableLights(false);
HXLINE(  51)		this->material->passes->addShader(this->lineShader).StaticCast<  ::h3d::shader::LineShader >();
HXLINE(  52)		 ::h3d::shader::VertexColorAlpha vcolor =  ::h3d::shader::VertexColorAlpha_obj::__alloc( HX_CTX );
HXLINE(  53)		vcolor->setPriority(-100);
HXLINE(  54)		this->material->passes->addShader(vcolor).StaticCast<  ::h3d::shader::VertexColorAlpha >();
HXLINE(  55)		this->material->passes->set_culling(::h3d::mat::Face_obj::None_dyn());
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
	if (inClassId<=(int)0x6aedc89e) {
		if (inClassId<=(int)0x1797ae36) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1797ae36;
		} else {
			return inClassId==(int)0x6aedc89e;
		}
	} else {
		return inClassId==(int)0x6cfff440;
	}
}

void Graphics_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_58_onRemove)
HXLINE(  59)		this->super::onRemove();
HXLINE(  60)		this->bprim->clear();
            	}


bool Graphics_obj::set_is3D(bool v){
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_63_set_is3D)
HXLINE(  64)		if ((this->is3D == v)) {
HXLINE(  65)			return v;
            		}
HXLINE(  66)		if (v) {
HXLINE(  67)			this->material->passes->removeShader(this->lineShader);
            		}
            		else {
HXLINE(  69)			this->material->passes->addShader(this->lineShader).StaticCast<  ::h3d::shader::LineShader >();
            		}
HXLINE(  71)		this->bprim->clear();
HXLINE(  72)		this->tmpPoints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  73)		return (this->is3D = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set_is3D,return )

void Graphics_obj::flushLine(){
            	HX_GC_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_76_flushLine)
HXDLIN(  76)		 ::h3d::scene::Graphics _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  77)		::Array< ::Dynamic> pts = this->tmpPoints;
HXLINE(  79)		int last = (pts->length - 1);
HXLINE(  80)		 ::h3d::scene::_Graphics::GPoint prev = pts->__get(last).StaticCast<  ::h3d::scene::_Graphics::GPoint >();
HXLINE(  81)		 ::h3d::scene::_Graphics::GPoint p = pts->__get(0).StaticCast<  ::h3d::scene::_Graphics::GPoint >();
HXLINE(  83)		bool closed;
HXDLIN(  83)		bool closed1;
HXDLIN(  83)		if ((p->x == prev->x)) {
HXLINE(  83)			closed1 = (p->y == prev->y);
            		}
            		else {
HXLINE(  83)			closed1 = false;
            		}
HXDLIN(  83)		if (closed1) {
HXLINE(  83)			closed = (p->z == prev->z);
            		}
            		else {
HXLINE(  83)			closed = false;
            		}
HXLINE(  84)		int count = pts->length;
HXLINE(  85)		if (!(closed)) {
HXLINE(  86)			 ::h3d::scene::_Graphics::GPoint prevLast = pts->__get((last - 1)).StaticCast<  ::h3d::scene::_Graphics::GPoint >();
HXLINE(  87)			if (::hx::IsNull( prevLast )) {
HXLINE(  87)				prevLast = p;
            			}
HXLINE(  88)			pts->push( ::h3d::scene::_Graphics::GPoint_obj::__alloc( HX_CTX ,((prev->x * ( (Float)(2) )) - prevLast->x),((prev->y * ( (Float)(2) )) - prevLast->y),((prev->z * ( (Float)(2) )) - prevLast->z),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) )));
HXLINE(  89)			 ::h3d::scene::_Graphics::GPoint pNext = pts->__get(1).StaticCast<  ::h3d::scene::_Graphics::GPoint >();
HXLINE(  90)			if (::hx::IsNull( pNext )) {
HXLINE(  90)				pNext = p;
            			}
HXLINE(  91)			prev =  ::h3d::scene::_Graphics::GPoint_obj::__alloc( HX_CTX ,((p->x * ( (Float)(2) )) - pNext->x),((p->y * ( (Float)(2) )) - pNext->y),((p->z * ( (Float)(2) )) - pNext->z),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            		}
            		else {
HXLINE(  92)			if (::hx::IsInstanceNotEq( p,prev )) {
HXLINE(  93)				count = (count - 1);
HXLINE(  94)				last = (last - 1);
HXLINE(  95)				prev = pts->__get(last).StaticCast<  ::h3d::scene::_Graphics::GPoint >();
            			}
            		}
HXLINE(  98)		int start = this->bprim->vertexCount();
HXLINE(  99)		int pindex = start;
HXLINE( 100)		Float v = ((Float)0.);
HXLINE( 101)		{
HXLINE( 101)			int _g = 0;
HXDLIN( 101)			int _g1 = count;
HXDLIN( 101)			while((_g < _g1)){
HXLINE( 101)				_g = (_g + 1);
HXDLIN( 101)				int i = (_g - 1);
HXLINE( 102)				 ::h3d::scene::_Graphics::GPoint next = pts->__get(::hx::Mod((i + 1),pts->length)).StaticCast<  ::h3d::scene::_Graphics::GPoint >();
HXLINE( 106)				Float nx1 = (prev->y - p->y);
HXLINE( 107)				Float ny1 = (p->x - prev->x);
HXLINE( 108)				Float ns1 = (((Float)1.) / ::Math_obj::sqrt(((nx1 * nx1) + (ny1 * ny1))));
HXLINE( 110)				Float nx2 = (p->y - next->y);
HXLINE( 111)				Float ny2 = (next->x - p->x);
HXLINE( 112)				Float ns2 = (((Float)1.) / ::Math_obj::sqrt(((nx2 * nx2) + (ny2 * ny2))));
HXLINE( 114)				Float nx = ((nx1 * ns1) + (nx2 * ns2));
HXLINE( 115)				Float ny = ((ny1 * ns1) + (ny2 * ns2));
HXLINE( 116)				Float ns = (((Float)1.) / ::Math_obj::sqrt(((nx * nx) + (ny * ny))));
HXLINE( 118)				nx = (nx * ns);
HXLINE( 119)				ny = (ny * ns);
HXLINE( 121)				Float size = (((nx * nx1) * ns1) + ((ny * ny1) * ns1));
HXLINE( 122)				Float d = ((this->lineSize * ((Float)0.5)) / size);
HXLINE( 123)				nx = (nx * d);
HXLINE( 124)				ny = (ny * d);
HXLINE( 130)				bool hasIndex;
HXDLIN( 130)				if ((i >= (count - 1))) {
HXLINE( 130)					hasIndex = closed;
            				}
            				else {
HXLINE( 130)					hasIndex = true;
            				}
HXLINE( 131)				int _hx_tmp;
HXDLIN( 131)				if (hasIndex) {
HXLINE( 131)					_hx_tmp = 6;
            				}
            				else {
HXLINE( 131)					_hx_tmp = 0;
            				}
HXDLIN( 131)				this->bprim->begin(2,_hx_tmp);
HXLINE( 133)				{
HXLINE( 133)					 ::h3d::prim::BigPrimitive _this = _gthis->bprim;
HXDLIN( 133)					_this->tmpBuf[_this->bufPos++] = (p->x + nx);
            				}
HXLINE( 134)				{
HXLINE( 134)					 ::h3d::prim::BigPrimitive _this1 = _gthis->bprim;
HXDLIN( 134)					_this1->tmpBuf[_this1->bufPos++] = (p->y + ny);
            				}
HXLINE( 135)				{
HXLINE( 135)					 ::h3d::prim::BigPrimitive _this2 = _gthis->bprim;
HXDLIN( 135)					_this2->tmpBuf[_this2->bufPos++] = p->z;
            				}
HXLINE( 137)				{
HXLINE( 137)					 ::h3d::prim::BigPrimitive _this3 = _gthis->bprim;
HXDLIN( 137)					_this3->tmpBuf[_this3->bufPos++] = ( (Float)(0) );
            				}
HXLINE( 138)				{
HXLINE( 138)					 ::h3d::prim::BigPrimitive _this4 = _gthis->bprim;
HXDLIN( 138)					_this4->tmpBuf[_this4->bufPos++] = ( (Float)(0) );
            				}
HXLINE( 139)				{
HXLINE( 139)					 ::h3d::prim::BigPrimitive _this5 = _gthis->bprim;
HXDLIN( 139)					_this5->tmpBuf[_this5->bufPos++] = ( (Float)(1) );
            				}
HXLINE( 141)				{
HXLINE( 141)					 ::h3d::prim::BigPrimitive _this6 = _gthis->bprim;
HXDLIN( 141)					_this6->tmpBuf[_this6->bufPos++] = ( (Float)(0) );
            				}
HXLINE( 142)				{
HXLINE( 142)					 ::h3d::prim::BigPrimitive _this7 = _gthis->bprim;
HXDLIN( 142)					_this7->tmpBuf[_this7->bufPos++] = v;
            				}
HXLINE( 144)				{
HXLINE( 144)					 ::h3d::prim::BigPrimitive _this8 = _gthis->bprim;
HXDLIN( 144)					_this8->tmpBuf[_this8->bufPos++] = p->r;
            				}
HXLINE( 145)				{
HXLINE( 145)					 ::h3d::prim::BigPrimitive _this9 = _gthis->bprim;
HXDLIN( 145)					_this9->tmpBuf[_this9->bufPos++] = p->g;
            				}
HXLINE( 146)				{
HXLINE( 146)					 ::h3d::prim::BigPrimitive _this10 = _gthis->bprim;
HXDLIN( 146)					_this10->tmpBuf[_this10->bufPos++] = p->b;
            				}
HXLINE( 147)				{
HXLINE( 147)					 ::h3d::prim::BigPrimitive _this11 = _gthis->bprim;
HXDLIN( 147)					_this11->tmpBuf[_this11->bufPos++] = p->a;
            				}
HXLINE( 149)				{
HXLINE( 149)					 ::h3d::prim::BigPrimitive _this12 = _gthis->bprim;
HXDLIN( 149)					_this12->tmpBuf[_this12->bufPos++] = (p->x - nx);
            				}
HXLINE( 150)				{
HXLINE( 150)					 ::h3d::prim::BigPrimitive _this13 = _gthis->bprim;
HXDLIN( 150)					_this13->tmpBuf[_this13->bufPos++] = (p->y - ny);
            				}
HXLINE( 151)				{
HXLINE( 151)					 ::h3d::prim::BigPrimitive _this14 = _gthis->bprim;
HXDLIN( 151)					_this14->tmpBuf[_this14->bufPos++] = p->z;
            				}
HXLINE( 153)				{
HXLINE( 153)					 ::h3d::prim::BigPrimitive _this15 = _gthis->bprim;
HXDLIN( 153)					_this15->tmpBuf[_this15->bufPos++] = ( (Float)(0) );
            				}
HXLINE( 154)				{
HXLINE( 154)					 ::h3d::prim::BigPrimitive _this16 = _gthis->bprim;
HXDLIN( 154)					_this16->tmpBuf[_this16->bufPos++] = ( (Float)(0) );
            				}
HXLINE( 155)				{
HXLINE( 155)					 ::h3d::prim::BigPrimitive _this17 = _gthis->bprim;
HXDLIN( 155)					_this17->tmpBuf[_this17->bufPos++] = ( (Float)(1) );
            				}
HXLINE( 157)				{
HXLINE( 157)					 ::h3d::prim::BigPrimitive _this18 = _gthis->bprim;
HXDLIN( 157)					_this18->tmpBuf[_this18->bufPos++] = ( (Float)(1) );
            				}
HXLINE( 158)				{
HXLINE( 158)					 ::h3d::prim::BigPrimitive _this19 = _gthis->bprim;
HXDLIN( 158)					_this19->tmpBuf[_this19->bufPos++] = v;
            				}
HXLINE( 160)				{
HXLINE( 160)					 ::h3d::prim::BigPrimitive _this20 = _gthis->bprim;
HXDLIN( 160)					_this20->tmpBuf[_this20->bufPos++] = p->r;
            				}
HXLINE( 161)				{
HXLINE( 161)					 ::h3d::prim::BigPrimitive _this21 = _gthis->bprim;
HXDLIN( 161)					_this21->tmpBuf[_this21->bufPos++] = p->g;
            				}
HXLINE( 162)				{
HXLINE( 162)					 ::h3d::prim::BigPrimitive _this22 = _gthis->bprim;
HXDLIN( 162)					_this22->tmpBuf[_this22->bufPos++] = p->b;
            				}
HXLINE( 163)				{
HXLINE( 163)					 ::h3d::prim::BigPrimitive _this23 = _gthis->bprim;
HXDLIN( 163)					_this23->tmpBuf[_this23->bufPos++] = p->a;
            				}
HXLINE( 165)				v = (( (Float)(1) ) - v);
HXLINE( 167)				if (hasIndex) {
HXLINE( 168)					int pnext;
HXDLIN( 168)					if ((i == last)) {
HXLINE( 168)						pnext = (start - pindex);
            					}
            					else {
HXLINE( 168)						pnext = 2;
            					}
HXLINE( 169)					{
HXLINE( 169)						 ::h3d::prim::BigPrimitive _this = this->bprim;
HXDLIN( 169)						_this->tmpIdx[_this->idxPos++] = _this->startIndex;
            					}
HXLINE( 170)					{
HXLINE( 170)						 ::h3d::prim::BigPrimitive _this1 = this->bprim;
HXDLIN( 170)						_this1->tmpIdx[_this1->idxPos++] = (1 + _this1->startIndex);
            					}
HXLINE( 171)					{
HXLINE( 171)						 ::h3d::prim::BigPrimitive _this2 = this->bprim;
HXDLIN( 171)						_this2->tmpIdx[_this2->idxPos++] = (pnext + _this2->startIndex);
            					}
HXLINE( 173)					{
HXLINE( 173)						 ::h3d::prim::BigPrimitive _this3 = this->bprim;
HXDLIN( 173)						_this3->tmpIdx[_this3->idxPos++] = (pnext + _this3->startIndex);
            					}
HXLINE( 174)					{
HXLINE( 174)						 ::h3d::prim::BigPrimitive _this4 = this->bprim;
HXDLIN( 174)						_this4->tmpIdx[_this4->idxPos++] = (1 + _this4->startIndex);
            					}
HXLINE( 175)					{
HXLINE( 175)						 ::h3d::prim::BigPrimitive _this5 = this->bprim;
HXDLIN( 175)						_this5->tmpIdx[_this5->idxPos++] = ((pnext + 1) + _this5->startIndex);
            					}
            				}
HXLINE( 178)				pindex = (pindex + 2);
HXLINE( 180)				prev = p;
HXLINE( 181)				p = next;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,flushLine,(void))

void Graphics_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_185_flush)
HXLINE( 186)		if ((this->tmpPoints->length == 0)) {
HXLINE( 187)			return;
            		}
HXLINE( 188)		if (this->is3D) {
HXLINE( 189)			this->flushLine();
HXLINE( 190)			this->tmpPoints = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,flush,(void))

void Graphics_obj::sync( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_194_sync)
HXLINE( 195)		this->super::sync(ctx);
HXLINE( 196)		this->flush();
HXLINE( 197)		this->bprim->flush();
            	}


void Graphics_obj::draw( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_200_draw)
HXLINE( 201)		this->flush();
HXLINE( 202)		this->bprim->flush();
HXLINE( 203)		this->super::draw(ctx);
            	}


void Graphics_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_206_clear)
HXLINE( 207)		this->flush();
HXLINE( 208)		this->bprim->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

void Graphics_obj::lineStyle(::hx::Null< Float >  __o_size,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha){
            		Float size = __o_size.Default(((Float)0.));
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_211_lineStyle)
HXLINE( 212)		this->flush();
HXLINE( 213)		bool _hx_tmp;
HXDLIN( 213)		if ((size > 0)) {
HXLINE( 213)			_hx_tmp = (this->lineSize != size);
            		}
            		else {
HXLINE( 213)			_hx_tmp = false;
            		}
HXDLIN( 213)		if (_hx_tmp) {
HXLINE( 214)			this->lineSize = size;
HXLINE( 215)			if (!(this->is3D)) {
HXLINE( 215)				this->lineShader->width__ = this->lineSize;
            			}
            		}
HXLINE( 217)		this->setColor(color,alpha);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,lineStyle,(void))

void Graphics_obj::setColor(int color,::hx::Null< Float >  __o_alpha){
            		Float alpha = __o_alpha.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_220_setColor)
HXLINE( 221)		this->curA = alpha;
HXLINE( 222)		this->curR = (( (Float)(((color >> 16) & 255)) ) / ((Float)255.));
HXLINE( 223)		this->curG = (( (Float)(((color >> 8) & 255)) ) / ((Float)255.));
HXLINE( 224)		this->curB = (( (Float)((color & 255)) ) / ((Float)255.));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setColor,(void))

void Graphics_obj::drawLine( ::h3d::col::Point p1, ::h3d::col::Point p2){
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_227_drawLine)
HXLINE( 228)		this->moveTo(p1->x,p1->y,p1->z);
HXLINE( 229)		this->lineTo(p2->x,p2->y,p2->z);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,drawLine,(void))

void Graphics_obj::moveTo(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_233_moveTo)
HXDLIN( 233)		if (this->is3D) {
HXLINE( 234)			this->flush();
HXLINE( 235)			this->lineTo(x,y,z);
            		}
            		else {
HXLINE( 237)			this->curX = x;
HXLINE( 238)			this->curY = y;
HXLINE( 239)			this->curZ = z;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,moveTo,(void))

void Graphics_obj::addVertex(Float x,Float y,Float z,Float r,Float g,Float b,Float a){
            	HX_GC_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_244_addVertex)
HXDLIN( 244)		::Array< ::Dynamic> _hx_tmp = this->tmpPoints;
HXDLIN( 244)		_hx_tmp->push( ::h3d::scene::_Graphics::GPoint_obj::__alloc( HX_CTX ,x,y,z,r,g,b,a));
            	}


HX_DEFINE_DYNAMIC_FUNC7(Graphics_obj,addVertex,(void))

void Graphics_obj::lineTo(Float x,Float y,Float z){
            	HX_GC_STACKFRAME(&_hx_pos_347ff72d3b9d2ebf_247_lineTo)
HXDLIN( 247)		 ::h3d::scene::Graphics _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 248)		if (this->is3D) {
HXLINE( 249)			{
HXLINE( 249)				::Array< ::Dynamic> _hx_tmp = this->tmpPoints;
HXDLIN( 249)				_hx_tmp->push( ::h3d::scene::_Graphics::GPoint_obj::__alloc( HX_CTX ,x,y,z,this->curR,this->curG,this->curB,this->curA));
            			}
HXLINE( 250)			return;
            		}
HXLINE( 253)		this->bprim->begin(4,6);
HXLINE( 254)		Float nx = (x - this->curX);
HXLINE( 255)		Float ny = (y - this->curY);
HXLINE( 256)		Float nz = (z - this->curZ);
HXLINE( 258)		{
HXLINE( 258)			Float x1 = this->curX;
HXDLIN( 258)			Float y1 = this->curY;
HXDLIN( 258)			Float z1 = this->curZ;
HXDLIN( 258)			{
HXLINE( 258)				 ::h3d::col::Bounds _this = this->bprim->bounds;
HXDLIN( 258)				if ((x1 < _this->xMin)) {
HXLINE( 258)					_this->xMin = x1;
            				}
HXDLIN( 258)				if ((x1 > _this->xMax)) {
HXLINE( 258)					_this->xMax = x1;
            				}
HXDLIN( 258)				if ((y1 < _this->yMin)) {
HXLINE( 258)					_this->yMin = y1;
            				}
HXDLIN( 258)				if ((y1 > _this->yMax)) {
HXLINE( 258)					_this->yMax = y1;
            				}
HXDLIN( 258)				if ((z1 < _this->zMin)) {
HXLINE( 258)					_this->zMin = z1;
            				}
HXDLIN( 258)				if ((z1 > _this->zMax)) {
HXLINE( 258)					_this->zMax = z1;
            				}
            			}
            		}
HXLINE( 259)		{
HXLINE( 259)			 ::h3d::col::Bounds _this1 = this->bprim->bounds;
HXDLIN( 259)			if ((x < _this1->xMin)) {
HXLINE( 259)				_this1->xMin = x;
            			}
HXDLIN( 259)			if ((x > _this1->xMax)) {
HXLINE( 259)				_this1->xMax = x;
            			}
HXDLIN( 259)			if ((y < _this1->yMin)) {
HXLINE( 259)				_this1->yMin = y;
            			}
HXDLIN( 259)			if ((y > _this1->yMax)) {
HXLINE( 259)				_this1->yMax = y;
            			}
HXDLIN( 259)			if ((z < _this1->zMin)) {
HXLINE( 259)				_this1->zMin = z;
            			}
HXDLIN( 259)			if ((z > _this1->zMax)) {
HXLINE( 259)				_this1->zMax = z;
            			}
            		}
HXLINE( 283)		{
HXLINE( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this2 = _gthis->bprim;
HXDLIN( 283)				_this2->tmpBuf[_this2->bufPos++] = _gthis->curX;
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this3 = _gthis->bprim;
HXDLIN( 283)				_this3->tmpBuf[_this3->bufPos++] = _gthis->curY;
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this4 = _gthis->bprim;
HXDLIN( 283)				_this4->tmpBuf[_this4->bufPos++] = _gthis->curZ;
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this5 = _gthis->bprim;
HXDLIN( 283)				_this5->tmpBuf[_this5->bufPos++] = nx;
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this6 = _gthis->bprim;
HXDLIN( 283)				_this6->tmpBuf[_this6->bufPos++] = ny;
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this7 = _gthis->bprim;
HXDLIN( 283)				_this7->tmpBuf[_this7->bufPos++] = nz;
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this8 = _gthis->bprim;
HXDLIN( 283)				_this8->tmpBuf[_this8->bufPos++] = ( (Float)(0) );
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this9 = _gthis->bprim;
HXDLIN( 283)				_this9->tmpBuf[_this9->bufPos++] = ( (Float)(0) );
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this10 = _gthis->bprim;
HXDLIN( 283)				_this10->tmpBuf[_this10->bufPos++] = _gthis->curR;
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this11 = _gthis->bprim;
HXDLIN( 283)				_this11->tmpBuf[_this11->bufPos++] = _gthis->curG;
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this12 = _gthis->bprim;
HXDLIN( 283)				_this12->tmpBuf[_this12->bufPos++] = _gthis->curB;
            			}
HXDLIN( 283)			{
HXLINE( 283)				 ::h3d::prim::BigPrimitive _this13 = _gthis->bprim;
HXDLIN( 283)				_this13->tmpBuf[_this13->bufPos++] = _gthis->curA;
            			}
            		}
HXLINE( 284)		{
HXLINE( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this14 = _gthis->bprim;
HXDLIN( 284)				_this14->tmpBuf[_this14->bufPos++] = _gthis->curX;
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this15 = _gthis->bprim;
HXDLIN( 284)				_this15->tmpBuf[_this15->bufPos++] = _gthis->curY;
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this16 = _gthis->bprim;
HXDLIN( 284)				_this16->tmpBuf[_this16->bufPos++] = _gthis->curZ;
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this17 = _gthis->bprim;
HXDLIN( 284)				_this17->tmpBuf[_this17->bufPos++] = nx;
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this18 = _gthis->bprim;
HXDLIN( 284)				_this18->tmpBuf[_this18->bufPos++] = ny;
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this19 = _gthis->bprim;
HXDLIN( 284)				_this19->tmpBuf[_this19->bufPos++] = nz;
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this20 = _gthis->bprim;
HXDLIN( 284)				_this20->tmpBuf[_this20->bufPos++] = ( (Float)(0) );
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this21 = _gthis->bprim;
HXDLIN( 284)				_this21->tmpBuf[_this21->bufPos++] = ( (Float)(1) );
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this22 = _gthis->bprim;
HXDLIN( 284)				_this22->tmpBuf[_this22->bufPos++] = _gthis->curR;
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this23 = _gthis->bprim;
HXDLIN( 284)				_this23->tmpBuf[_this23->bufPos++] = _gthis->curG;
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this24 = _gthis->bprim;
HXDLIN( 284)				_this24->tmpBuf[_this24->bufPos++] = _gthis->curB;
            			}
HXDLIN( 284)			{
HXLINE( 284)				 ::h3d::prim::BigPrimitive _this25 = _gthis->bprim;
HXDLIN( 284)				_this25->tmpBuf[_this25->bufPos++] = _gthis->curA;
            			}
            		}
HXLINE( 285)		{
HXLINE( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this26 = _gthis->bprim;
HXDLIN( 285)				_this26->tmpBuf[_this26->bufPos++] = _gthis->curX;
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this27 = _gthis->bprim;
HXDLIN( 285)				_this27->tmpBuf[_this27->bufPos++] = _gthis->curY;
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this28 = _gthis->bprim;
HXDLIN( 285)				_this28->tmpBuf[_this28->bufPos++] = _gthis->curZ;
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this29 = _gthis->bprim;
HXDLIN( 285)				_this29->tmpBuf[_this29->bufPos++] = nx;
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this30 = _gthis->bprim;
HXDLIN( 285)				_this30->tmpBuf[_this30->bufPos++] = ny;
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this31 = _gthis->bprim;
HXDLIN( 285)				_this31->tmpBuf[_this31->bufPos++] = nz;
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this32 = _gthis->bprim;
HXDLIN( 285)				_this32->tmpBuf[_this32->bufPos++] = ( (Float)(1) );
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this33 = _gthis->bprim;
HXDLIN( 285)				_this33->tmpBuf[_this33->bufPos++] = ( (Float)(0) );
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this34 = _gthis->bprim;
HXDLIN( 285)				_this34->tmpBuf[_this34->bufPos++] = _gthis->curR;
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this35 = _gthis->bprim;
HXDLIN( 285)				_this35->tmpBuf[_this35->bufPos++] = _gthis->curG;
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this36 = _gthis->bprim;
HXDLIN( 285)				_this36->tmpBuf[_this36->bufPos++] = _gthis->curB;
            			}
HXDLIN( 285)			{
HXLINE( 285)				 ::h3d::prim::BigPrimitive _this37 = _gthis->bprim;
HXDLIN( 285)				_this37->tmpBuf[_this37->bufPos++] = _gthis->curA;
            			}
            		}
HXLINE( 286)		{
HXLINE( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this38 = _gthis->bprim;
HXDLIN( 286)				_this38->tmpBuf[_this38->bufPos++] = _gthis->curX;
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this39 = _gthis->bprim;
HXDLIN( 286)				_this39->tmpBuf[_this39->bufPos++] = _gthis->curY;
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this40 = _gthis->bprim;
HXDLIN( 286)				_this40->tmpBuf[_this40->bufPos++] = _gthis->curZ;
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this41 = _gthis->bprim;
HXDLIN( 286)				_this41->tmpBuf[_this41->bufPos++] = nx;
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this42 = _gthis->bprim;
HXDLIN( 286)				_this42->tmpBuf[_this42->bufPos++] = ny;
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this43 = _gthis->bprim;
HXDLIN( 286)				_this43->tmpBuf[_this43->bufPos++] = nz;
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this44 = _gthis->bprim;
HXDLIN( 286)				_this44->tmpBuf[_this44->bufPos++] = ( (Float)(1) );
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this45 = _gthis->bprim;
HXDLIN( 286)				_this45->tmpBuf[_this45->bufPos++] = ( (Float)(1) );
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this46 = _gthis->bprim;
HXDLIN( 286)				_this46->tmpBuf[_this46->bufPos++] = _gthis->curR;
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this47 = _gthis->bprim;
HXDLIN( 286)				_this47->tmpBuf[_this47->bufPos++] = _gthis->curG;
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this48 = _gthis->bprim;
HXDLIN( 286)				_this48->tmpBuf[_this48->bufPos++] = _gthis->curB;
            			}
HXDLIN( 286)			{
HXLINE( 286)				 ::h3d::prim::BigPrimitive _this49 = _gthis->bprim;
HXDLIN( 286)				_this49->tmpBuf[_this49->bufPos++] = _gthis->curA;
            			}
            		}
HXLINE( 288)		{
HXLINE( 288)			 ::h3d::prim::BigPrimitive _this50 = this->bprim;
HXDLIN( 288)			_this50->tmpIdx[_this50->idxPos++] = _this50->startIndex;
            		}
HXLINE( 289)		{
HXLINE( 289)			 ::h3d::prim::BigPrimitive _this51 = this->bprim;
HXDLIN( 289)			_this51->tmpIdx[_this51->idxPos++] = (1 + _this51->startIndex);
            		}
HXLINE( 290)		{
HXLINE( 290)			 ::h3d::prim::BigPrimitive _this52 = this->bprim;
HXDLIN( 290)			_this52->tmpIdx[_this52->idxPos++] = (2 + _this52->startIndex);
            		}
HXLINE( 291)		{
HXLINE( 291)			 ::h3d::prim::BigPrimitive _this53 = this->bprim;
HXDLIN( 291)			_this53->tmpIdx[_this53->idxPos++] = (2 + _this53->startIndex);
            		}
HXLINE( 292)		{
HXLINE( 292)			 ::h3d::prim::BigPrimitive _this54 = this->bprim;
HXDLIN( 292)			_this54->tmpIdx[_this54->idxPos++] = (3 + _this54->startIndex);
            		}
HXLINE( 293)		{
HXLINE( 293)			 ::h3d::prim::BigPrimitive _this55 = this->bprim;
HXDLIN( 293)			_this55->tmpIdx[_this55->idxPos++] = (1 + _this55->startIndex);
            		}
HXLINE( 295)		this->curX = x;
HXLINE( 296)		this->curY = y;
HXLINE( 297)		this->curZ = z;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,lineTo,(void))


::hx::ObjectPtr< Graphics_obj > Graphics_obj::__new( ::h3d::scene::Object parent) {
	::hx::ObjectPtr< Graphics_obj > __this = new Graphics_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< Graphics_obj > Graphics_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Object parent) {
	Graphics_obj *__this = (Graphics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Graphics_obj), true, "h3d.scene.Graphics"));
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
	HX_MARK_MEMBER_NAME(bprim,"bprim");
	HX_MARK_MEMBER_NAME(curX,"curX");
	HX_MARK_MEMBER_NAME(curY,"curY");
	HX_MARK_MEMBER_NAME(curZ,"curZ");
	HX_MARK_MEMBER_NAME(curR,"curR");
	HX_MARK_MEMBER_NAME(curG,"curG");
	HX_MARK_MEMBER_NAME(curB,"curB");
	HX_MARK_MEMBER_NAME(curA,"curA");
	HX_MARK_MEMBER_NAME(lineSize,"lineSize");
	HX_MARK_MEMBER_NAME(lineShader,"lineShader");
	HX_MARK_MEMBER_NAME(tmpPoints,"tmpPoints");
	HX_MARK_MEMBER_NAME(is3D,"is3D");
	 ::h3d::scene::Mesh_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bprim,"bprim");
	HX_VISIT_MEMBER_NAME(curX,"curX");
	HX_VISIT_MEMBER_NAME(curY,"curY");
	HX_VISIT_MEMBER_NAME(curZ,"curZ");
	HX_VISIT_MEMBER_NAME(curR,"curR");
	HX_VISIT_MEMBER_NAME(curG,"curG");
	HX_VISIT_MEMBER_NAME(curB,"curB");
	HX_VISIT_MEMBER_NAME(curA,"curA");
	HX_VISIT_MEMBER_NAME(lineSize,"lineSize");
	HX_VISIT_MEMBER_NAME(lineShader,"lineShader");
	HX_VISIT_MEMBER_NAME(tmpPoints,"tmpPoints");
	HX_VISIT_MEMBER_NAME(is3D,"is3D");
	 ::h3d::scene::Mesh_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Graphics_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curX") ) { return ::hx::Val( curX ); }
		if (HX_FIELD_EQ(inName,"curY") ) { return ::hx::Val( curY ); }
		if (HX_FIELD_EQ(inName,"curZ") ) { return ::hx::Val( curZ ); }
		if (HX_FIELD_EQ(inName,"curR") ) { return ::hx::Val( curR ); }
		if (HX_FIELD_EQ(inName,"curG") ) { return ::hx::Val( curG ); }
		if (HX_FIELD_EQ(inName,"curB") ) { return ::hx::Val( curB ); }
		if (HX_FIELD_EQ(inName,"curA") ) { return ::hx::Val( curA ); }
		if (HX_FIELD_EQ(inName,"is3D") ) { return ::hx::Val( is3D ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bprim") ) { return ::hx::Val( bprim ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lineSize") ) { return ::hx::Val( lineSize ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_is3D") ) { return ::hx::Val( set_is3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return ::hx::Val( drawLine_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tmpPoints") ) { return ::hx::Val( tmpPoints ); }
		if (HX_FIELD_EQ(inName,"flushLine") ) { return ::hx::Val( flushLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return ::hx::Val( lineStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"addVertex") ) { return ::hx::Val( addVertex_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineShader") ) { return ::hx::Val( lineShader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Graphics_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curX") ) { curX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curY") ) { curY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curZ") ) { curZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curR") ) { curR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curG") ) { curG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curB") ) { curB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curA") ) { curA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"is3D") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_is3D(inValue.Cast< bool >()) );is3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bprim") ) { bprim=inValue.Cast<  ::h3d::prim::BigPrimitive >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lineSize") ) { lineSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tmpPoints") ) { tmpPoints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineShader") ) { lineShader=inValue.Cast<  ::h3d::shader::LineShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bprim",c8,9b,a3,b7));
	outFields->push(HX_("curX",d8,4a,c9,41));
	outFields->push(HX_("curY",d9,4a,c9,41));
	outFields->push(HX_("curZ",da,4a,c9,41));
	outFields->push(HX_("curR",d2,4a,c9,41));
	outFields->push(HX_("curG",c7,4a,c9,41));
	outFields->push(HX_("curB",c2,4a,c9,41));
	outFields->push(HX_("curA",c1,4a,c9,41));
	outFields->push(HX_("lineSize",d5,ee,7c,89));
	outFields->push(HX_("lineShader",39,ba,c8,f1));
	outFields->push(HX_("tmpPoints",5a,a6,04,4d));
	outFields->push(HX_("is3D",1b,d7,be,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Graphics_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::prim::BigPrimitive */ ,(int)offsetof(Graphics_obj,bprim),HX_("bprim",c8,9b,a3,b7)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curX),HX_("curX",d8,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curY),HX_("curY",d9,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curZ),HX_("curZ",da,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curR),HX_("curR",d2,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curG),HX_("curG",c7,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curB),HX_("curB",c2,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,curA),HX_("curA",c1,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,lineSize),HX_("lineSize",d5,ee,7c,89)},
	{::hx::fsObject /*  ::h3d::shader::LineShader */ ,(int)offsetof(Graphics_obj,lineShader),HX_("lineShader",39,ba,c8,f1)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Graphics_obj,tmpPoints),HX_("tmpPoints",5a,a6,04,4d)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,is3D),HX_("is3D",1b,d7,be,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Graphics_obj_sStaticStorageInfo = 0;
#endif

static ::String Graphics_obj_sMemberFields[] = {
	HX_("bprim",c8,9b,a3,b7),
	HX_("curX",d8,4a,c9,41),
	HX_("curY",d9,4a,c9,41),
	HX_("curZ",da,4a,c9,41),
	HX_("curR",d2,4a,c9,41),
	HX_("curG",c7,4a,c9,41),
	HX_("curB",c2,4a,c9,41),
	HX_("curA",c1,4a,c9,41),
	HX_("lineSize",d5,ee,7c,89),
	HX_("lineShader",39,ba,c8,f1),
	HX_("tmpPoints",5a,a6,04,4d),
	HX_("is3D",1b,d7,be,45),
	HX_("onRemove",c3,92,35,e4),
	HX_("set_is3D",18,ec,d6,73),
	HX_("flushLine",d8,58,0a,3e),
	HX_("flush",c4,62,9b,02),
	HX_("sync",5b,ba,5f,4c),
	HX_("draw",04,2c,70,42),
	HX_("clear",8d,71,5b,48),
	HX_("lineStyle",9d,a8,18,cb),
	HX_("setColor",61,da,90,58),
	HX_("drawLine",18,c2,1c,5c),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("addVertex",65,10,6c,59),
	HX_("lineTo",8f,46,a0,ec),
	::String(null()) };

::hx::Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	Graphics_obj _hx_dummy;
	Graphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.Graphics",e2,d5,73,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Graphics_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Graphics_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Graphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Graphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
