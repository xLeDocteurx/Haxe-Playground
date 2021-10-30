#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_prim_BigPrimitive
#include <h3d/prim/BigPrimitive.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_7_new,"h3d.prim.BigPrimitive","new",0xa1af526c,"h3d.prim.BigPrimitive.new","h3d/prim/BigPrimitive.hx",7,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_46_begin,"h3d.prim.BigPrimitive","begin",0x011f0735,"h3d.prim.BigPrimitive.begin","h3d/prim/BigPrimitive.hx",46,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_81_addPoint,"h3d.prim.BigPrimitive","addPoint",0x05e26ce3,"h3d.prim.BigPrimitive.addPoint","h3d/prim/BigPrimitive.hx",81,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_89_addBounds,"h3d.prim.BigPrimitive","addBounds",0x8f2c4e82,"h3d.prim.BigPrimitive.addBounds","h3d/prim/BigPrimitive.hx",89,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_93_addVertexValue,"h3d.prim.BigPrimitive","addVertexValue",0x1cf43240,"h3d.prim.BigPrimitive.addVertexValue","h3d/prim/BigPrimitive.hx",93,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_97_addIndex,"h3d.prim.BigPrimitive","addIndex",0xfd6753a5,"h3d.prim.BigPrimitive.addIndex","h3d/prim/BigPrimitive.hx",97,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_100_triCount,"h3d.prim.BigPrimitive","triCount",0x0e69c218,"h3d.prim.BigPrimitive.triCount","h3d/prim/BigPrimitive.hx",100,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_108_vertexCount,"h3d.prim.BigPrimitive","vertexCount",0xcd9d7cd7,"h3d.prim.BigPrimitive.vertexCount","h3d/prim/BigPrimitive.hx",108,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_121_flush,"h3d.prim.BigPrimitive","flush",0x53647fd0,"h3d.prim.BigPrimitive.flush","h3d/prim/BigPrimitive.hx",121,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_147_render,"h3d.prim.BigPrimitive","render",0x6459b8ca,"h3d.prim.BigPrimitive.render","h3d/prim/BigPrimitive.hx",147,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_154_getBounds,"h3d.prim.BigPrimitive","getBounds",0x535ea2b7,"h3d.prim.BigPrimitive.getBounds","h3d/prim/BigPrimitive.hx",154,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_158_dispose,"h3d.prim.BigPrimitive","dispose",0xa65ff8ab,"h3d.prim.BigPrimitive.dispose","h3d/prim/BigPrimitive.hx",158,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_161_clear,"h3d.prim.BigPrimitive","clear",0x99248e99,"h3d.prim.BigPrimitive.clear","h3d/prim/BigPrimitive.hx",161,0xa8136e24)
HX_LOCAL_STACK_FRAME(_hx_pos_a106a70ab27cc3a9_184_add,"h3d.prim.BigPrimitive","add",0xa1a5742d,"h3d.prim.BigPrimitive.add","h3d/prim/BigPrimitive.hx",184,0xa8136e24)
namespace h3d{
namespace prim{

void BigPrimitive_obj::__construct(int stride,::hx::Null< bool >  __o_isRaw){
            		bool isRaw = __o_isRaw.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_7_new)
HXLINE(  25)		this->isStatic = true;
HXLINE(  24)		this->hasTangents = false;
HXLINE(  18)		this->startIndex = 0;
HXLINE(  17)		this->idxPos = 0;
HXLINE(  16)		this->bufPos = 0;
HXLINE(  30)		super::__construct();
HXLINE(  31)		this->isRaw = isRaw;
HXLINE(  32)		this->buffers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  33)		this->allIndexes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  34)		this->bounds =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE(  35)		this->stride = stride;
HXLINE(  36)		if ((stride < 3)) {
HXLINE(  36)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Minimum stride = 3",3b,f7,24,85)));
            		}
            	}

Dynamic BigPrimitive_obj::__CreateEmpty() { return new BigPrimitive_obj; }

void *BigPrimitive_obj::_hx_vtable = 0;

Dynamic BigPrimitive_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BigPrimitive_obj > _hx_result = new BigPrimitive_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BigPrimitive_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4eff5c62) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4eff5c62;
	} else {
		return inClassId==(int)0x566939c8;
	}
}

void BigPrimitive_obj::begin(int vcount,int icount){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_46_begin)
HXLINE(  47)		this->startIndex = ::Std_obj::_hx_int((( (Float)(this->bufPos) ) / ( (Float)(this->stride) )));
HXLINE(  48)		if (((this->startIndex + vcount) >= 65535)) {
HXLINE(  49)			if ((vcount >= 65535)) {
HXLINE(  49)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Too many vertices in begin()",21,04,47,9c)));
            			}
HXLINE(  50)			this->flush();
            		}
HXLINE(  52)		if (::hx::IsNull( this->tmpBuf )) {
HXLINE(  53)			this->tmpBuf = ::h3d::prim::BigPrimitive_obj::PREV_BUFFER;
HXLINE(  54)			if (::hx::IsNull( this->tmpBuf )) {
HXLINE(  55)				int length = 0;
HXDLIN(  55)				::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN(  55)				if ((length > 0)) {
HXLINE(  55)					if ((length > this1->length)) {
HXLINE(  55)						this1[(length - 1)] = ((Float)0.);
            					}
            				}
HXDLIN(  55)				this->tmpBuf = this1;
            			}
            			else {
HXLINE(  57)				::h3d::prim::BigPrimitive_obj::PREV_BUFFER = null();
            			}
HXLINE(  58)			if (this->isStatic) {
HXLINE(  59)				::Array< Float > this1 = this->tmpBuf;
HXDLIN(  59)				int v = (65535 * this->stride);
HXDLIN(  59)				if ((v > this1->length)) {
HXLINE(  59)					this1[(v - 1)] = ((Float)0.);
            				}
            			}
            		}
HXLINE(  61)		if (!(this->isStatic)) {
HXLINE(  62)			::Array< Float > this1 = this->tmpBuf;
HXDLIN(  62)			int v = ((vcount * this->stride) + this->bufPos);
HXDLIN(  62)			if ((v > this1->length)) {
HXLINE(  62)				this1[(v - 1)] = ((Float)0.);
            			}
            		}
HXLINE(  63)		if (::hx::IsNull( this->tmpIdx )) {
HXLINE(  64)			this->tmpIdx = ::h3d::prim::BigPrimitive_obj::PREV_INDEX;
HXLINE(  65)			if (::hx::IsNull( this->tmpIdx )) {
HXLINE(  66)				int length = 0;
HXDLIN(  66)				::Array< int > this1 = ::Array_obj< int >::__new();
HXDLIN(  66)				if ((length > 0)) {
HXLINE(  66)					if ((length > this1->length)) {
HXLINE(  66)						this1[(length - 1)] = 0;
            					}
            				}
HXDLIN(  66)				this->tmpIdx = this1;
            			}
            			else {
HXLINE(  68)				::h3d::prim::BigPrimitive_obj::PREV_INDEX = null();
            			}
            		}
HXLINE(  70)		if (((this->idxPos + icount) > this->tmpIdx->length)) {
HXLINE(  71)			int size;
HXDLIN(  71)			if ((this->tmpIdx->length == 0)) {
HXLINE(  71)				size = 1024;
            			}
            			else {
HXLINE(  71)				size = this->tmpIdx->length;
            			}
HXLINE(  72)			int req = (this->idxPos + icount);
HXLINE(  73)			while((size < req)){
HXLINE(  73)				size = (size << 1);
            			}
HXLINE(  74)			{
HXLINE(  74)				::Array< int > this1 = this->tmpIdx;
HXDLIN(  74)				if ((size > this1->length)) {
HXLINE(  74)					this1[(size - 1)] = 0;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(BigPrimitive_obj,begin,(void))

void BigPrimitive_obj::addPoint(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_81_addPoint)
HXLINE(  82)		this->tmpBuf[this->bufPos++] = x;
HXLINE(  83)		this->tmpBuf[this->bufPos++] = y;
HXLINE(  84)		this->tmpBuf[this->bufPos++] = z;
HXLINE(  85)		{
HXLINE(  85)			 ::h3d::col::Bounds _this = this->bounds;
HXDLIN(  85)			if ((x < _this->xMin)) {
HXLINE(  85)				_this->xMin = x;
            			}
HXDLIN(  85)			if ((x > _this->xMax)) {
HXLINE(  85)				_this->xMax = x;
            			}
HXDLIN(  85)			if ((y < _this->yMin)) {
HXLINE(  85)				_this->yMin = y;
            			}
HXDLIN(  85)			if ((y > _this->yMax)) {
HXLINE(  85)				_this->yMax = y;
            			}
HXDLIN(  85)			if ((z < _this->zMin)) {
HXLINE(  85)				_this->zMin = z;
            			}
HXDLIN(  85)			if ((z > _this->zMax)) {
HXLINE(  85)				_this->zMax = z;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(BigPrimitive_obj,addPoint,(void))

void BigPrimitive_obj::addBounds(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_89_addBounds)
HXDLIN(  89)		 ::h3d::col::Bounds _this = this->bounds;
HXDLIN(  89)		if ((x < _this->xMin)) {
HXDLIN(  89)			_this->xMin = x;
            		}
HXDLIN(  89)		if ((x > _this->xMax)) {
HXDLIN(  89)			_this->xMax = x;
            		}
HXDLIN(  89)		if ((y < _this->yMin)) {
HXDLIN(  89)			_this->yMin = y;
            		}
HXDLIN(  89)		if ((y > _this->yMax)) {
HXDLIN(  89)			_this->yMax = y;
            		}
HXDLIN(  89)		if ((z < _this->zMin)) {
HXDLIN(  89)			_this->zMin = z;
            		}
HXDLIN(  89)		if ((z > _this->zMax)) {
HXDLIN(  89)			_this->zMax = z;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(BigPrimitive_obj,addBounds,(void))

void BigPrimitive_obj::addVertexValue(Float v){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_93_addVertexValue)
HXDLIN(  93)		this->tmpBuf[this->bufPos++] = v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BigPrimitive_obj,addVertexValue,(void))

void BigPrimitive_obj::addIndex(int i){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_97_addIndex)
HXDLIN(  97)		this->tmpIdx[this->idxPos++] = (i + this->startIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BigPrimitive_obj,addIndex,(void))

int BigPrimitive_obj::triCount(){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_100_triCount)
HXLINE( 101)		int count = 0;
HXLINE( 102)		{
HXLINE( 102)			int _g = 0;
HXDLIN( 102)			::Array< ::Dynamic> _g1 = this->allIndexes;
HXDLIN( 102)			while((_g < _g1->length)){
HXLINE( 102)				 ::h3d::Indexes i = _g1->__get(_g).StaticCast<  ::h3d::Indexes >();
HXDLIN( 102)				_g = (_g + 1);
HXLINE( 103)				count = (count + i->count);
            			}
            		}
HXLINE( 104)		count = (count + this->idxPos);
HXLINE( 105)		return ::Std_obj::_hx_int((( (Float)(count) ) / ( (Float)(3) )));
            	}


int BigPrimitive_obj::vertexCount(){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_108_vertexCount)
HXLINE( 109)		int count = 0;
HXLINE( 110)		{
HXLINE( 110)			int _g = 0;
HXDLIN( 110)			::Array< ::Dynamic> _g1 = this->buffers;
HXDLIN( 110)			while((_g < _g1->length)){
HXLINE( 110)				 ::h3d::Buffer b = _g1->__get(_g).StaticCast<  ::h3d::Buffer >();
HXDLIN( 110)				_g = (_g + 1);
HXLINE( 111)				count = (count + b->vertices);
            			}
            		}
HXLINE( 112)		count = (count + ::Std_obj::_hx_int((( (Float)(this->bufPos) ) / ( (Float)(this->stride) ))));
HXLINE( 113)		return count;
            	}


void BigPrimitive_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_121_flush)
HXDLIN( 121)		if (::hx::IsNotNull( this->tmpBuf )) {
HXLINE( 122)			bool _hx_tmp;
HXDLIN( 122)			if ((this->bufPos > 0)) {
HXLINE( 122)				_hx_tmp = (this->idxPos > 0);
            			}
            			else {
HXLINE( 122)				_hx_tmp = false;
            			}
HXDLIN( 122)			if (_hx_tmp) {
HXLINE( 123)				this->flushing = true;
HXLINE( 124)				::Array< Float > b = this->tmpBuf;
HXDLIN( 124)				int b1 = this->stride;
HXDLIN( 124)				 ::h3d::Buffer b2 = ::h3d::Buffer_obj::ofSubFloats(b,b1,::Std_obj::_hx_int((( (Float)(this->bufPos) ) / ( (Float)(this->stride) ))),null());
HXLINE( 125)				if (this->isRaw) {
HXLINE( 125)					 ::h3d::Buffer b = b2;
HXDLIN( 125)					int b1 = b->flags;
HXDLIN( 125)					b->flags = (b1 | (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::RawFormat_dyn())));
            				}
HXLINE( 126)				this->buffers->push(b2);
HXLINE( 127)				 ::h3d::Indexes idx = ::h3d::Indexes_obj::alloc(this->tmpIdx,0,this->idxPos);
HXLINE( 128)				this->allIndexes->push(idx);
HXLINE( 129)				this->flushing = false;
            			}
HXLINE( 135)			bool _hx_tmp1;
HXDLIN( 135)			if (::hx::IsNotNull( ::h3d::prim::BigPrimitive_obj::PREV_BUFFER )) {
HXLINE( 135)				_hx_tmp1 = (::h3d::prim::BigPrimitive_obj::PREV_BUFFER->length < this->tmpBuf->length);
            			}
            			else {
HXLINE( 135)				_hx_tmp1 = true;
            			}
HXDLIN( 135)			if (_hx_tmp1) {
HXLINE( 136)				::h3d::prim::BigPrimitive_obj::PREV_BUFFER = this->tmpBuf;
            			}
HXLINE( 137)			bool _hx_tmp2;
HXDLIN( 137)			if (::hx::IsNotNull( ::h3d::prim::BigPrimitive_obj::PREV_INDEX )) {
HXLINE( 137)				_hx_tmp2 = (::h3d::prim::BigPrimitive_obj::PREV_INDEX->length < this->tmpIdx->length);
            			}
            			else {
HXLINE( 137)				_hx_tmp2 = true;
            			}
HXDLIN( 137)			if (_hx_tmp2) {
HXLINE( 138)				::h3d::prim::BigPrimitive_obj::PREV_INDEX = this->tmpIdx;
            			}
HXLINE( 139)			this->tmpBuf = null();
HXLINE( 140)			this->tmpIdx = null();
HXLINE( 141)			this->bufPos = 0;
HXLINE( 142)			this->idxPos = 0;
HXLINE( 143)			this->startIndex = 0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BigPrimitive_obj,flush,(void))

void BigPrimitive_obj::render( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_147_render)
HXLINE( 148)		if (::hx::IsNotNull( this->tmpBuf )) {
HXLINE( 148)			this->flush();
            		}
HXLINE( 149)		{
HXLINE( 149)			int _g = 0;
HXDLIN( 149)			int _g1 = this->buffers->length;
HXDLIN( 149)			while((_g < _g1)){
HXLINE( 149)				_g = (_g + 1);
HXDLIN( 149)				int i = (_g - 1);
HXLINE( 150)				engine->renderIndexed(this->buffers->__get(i).StaticCast<  ::h3d::Buffer >(),this->allIndexes->__get(i).StaticCast<  ::h3d::Indexes >(),null(),null());
            			}
            		}
            	}


 ::h3d::col::Bounds BigPrimitive_obj::getBounds(){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_154_getBounds)
HXDLIN( 154)		return this->bounds;
            	}


void BigPrimitive_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_158_dispose)
HXDLIN( 158)		this->clear();
            	}


void BigPrimitive_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_161_clear)
HXLINE( 163)		if (this->flushing) {
HXLINE( 164)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot clear() BigPrimitive while it's flushing",8e,4a,c4,b7)));
            		}
HXLINE( 166)		{
HXLINE( 166)			 ::h3d::col::Bounds _this = this->bounds;
HXDLIN( 166)			_this->xMin = ((Float)1e20);
HXDLIN( 166)			_this->xMax = ((Float)-1e20);
HXDLIN( 166)			_this->yMin = ((Float)1e20);
HXDLIN( 166)			_this->yMax = ((Float)-1e20);
HXDLIN( 166)			_this->zMin = ((Float)1e20);
HXDLIN( 166)			_this->zMax = ((Float)-1e20);
            		}
HXLINE( 167)		{
HXLINE( 167)			int _g = 0;
HXDLIN( 167)			::Array< ::Dynamic> _g1 = this->buffers;
HXDLIN( 167)			while((_g < _g1->length)){
HXLINE( 167)				 ::h3d::Buffer b = _g1->__get(_g).StaticCast<  ::h3d::Buffer >();
HXDLIN( 167)				_g = (_g + 1);
HXLINE( 168)				b->dispose();
            			}
            		}
HXLINE( 169)		{
HXLINE( 169)			int _g2 = 0;
HXDLIN( 169)			::Array< ::Dynamic> _g3 = this->allIndexes;
HXDLIN( 169)			while((_g2 < _g3->length)){
HXLINE( 169)				 ::h3d::Indexes i = _g3->__get(_g2).StaticCast<  ::h3d::Indexes >();
HXDLIN( 169)				_g2 = (_g2 + 1);
HXLINE( 170)				i->dispose();
            			}
            		}
HXLINE( 171)		this->buffers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 172)		this->allIndexes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 173)		this->bufPos = 0;
HXLINE( 174)		this->idxPos = 0;
HXLINE( 175)		this->tmpBuf = null();
HXLINE( 176)		this->tmpIdx = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BigPrimitive_obj,clear,(void))

void BigPrimitive_obj::add(::Array< Float > buf,::Array< int > idx,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_dz,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_scale,::hx::Null< int >  __o_stride){
            		Float dx = __o_dx.Default(((Float)0.));
            		Float dy = __o_dy.Default(((Float)0.));
            		Float dz = __o_dz.Default(((Float)0.));
            		Float rotation = __o_rotation.Default(((Float)0.));
            		Float scale = __o_scale.Default(((Float)1.));
            		int stride = __o_stride.Default(-1);
            	HX_STACKFRAME(&_hx_pos_a106a70ab27cc3a9_184_add)
HXDLIN( 184)		int _hx_tmp;
HXDLIN( 184)		if ((stride < 0)) {
HXDLIN( 184)			_hx_tmp = this->stride;
            		}
            		else {
HXDLIN( 184)			_hx_tmp = stride;
            		}
HXDLIN( 184)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(buf->length) ) / ( (Float)(_hx_tmp) )));
HXDLIN( 184)		this->addSub(buf,idx,0,0,_hx_tmp1,::Std_obj::_hx_int((( (Float)(idx->length) ) / ( (Float)(3) ))),dx,dy,dz,rotation,scale,stride,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC8(BigPrimitive_obj,add,(void))

void BigPrimitive_obj::addSub(::Array< Float > buf,::Array< int > idx,int startVert,int startTri,int nvert,int triCount,::hx::Null< Float >  __o_dx,::hx::Null< Float >  __o_dy,::hx::Null< Float >  __o_dz,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_scale,::hx::Null< int >  __o_stride,::hx::Null< Float >  __o_deltaU,::hx::Null< Float >  __o_deltaV,::hx::Null< Float >  __o_color, ::h3d::Matrix mat){
	Float dx = __o_dx.Default(((Float)0.));
	Float dy = __o_dy.Default(((Float)0.));
	Float dz = __o_dz.Default(((Float)0.));
	Float rotation = __o_rotation.Default(((Float)0.));
	Float scale = __o_scale.Default(((Float)1.));
	int stride = __o_stride.Default(-1);
	Float deltaU = __o_deltaU.Default(((Float)0.));
	Float deltaV = __o_deltaV.Default(((Float)0.));
	Float color = __o_color.Default(((Float)1.));
	if ((stride < 0)) {
		stride = this->stride;
	}
	if ((stride < this->stride)) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("only stride >= ",ae,f7,2b,92) + this->stride) + HX_(" allowed",08,35,7b,8f))));
	}
	this->begin(nvert,(triCount * 3));
	int start = this->startIndex;
	Float cr = ::Math_obj::cos(rotation);
	Float sr = ::Math_obj::sin(rotation);
	int pos = this->bufPos;
	::Array< Float > tmpBuf = this->tmpBuf;
	{
		int _g = 0;
		int _g1 = nvert;
		while((_g < _g1)){
			_g = (_g + 1);
			int i = (_g - 1);
			int p = ((i + startVert) * stride);
			p = (p + 1);
			Float x = buf->__get((p - 1));
			p = (p + 1);
			Float y = buf->__get((p - 1));
			p = (p + 1);
			Float z = buf->__get((p - 1));
			if (::hx::IsNotNull( mat )) {
				Float pt_x = x;
				Float pt_y = y;
				Float pt_z = z;
				{
					Float px = ((((pt_x * mat->_11) + (pt_y * mat->_21)) + (pt_z * mat->_31)) + mat->_41);
					Float py = ((((pt_x * mat->_12) + (pt_y * mat->_22)) + (pt_z * mat->_32)) + mat->_42);
					Float pz = ((((pt_x * mat->_13) + (pt_y * mat->_23)) + (pt_z * mat->_33)) + mat->_43);
					pt_x = px;
					pt_y = py;
					pt_z = pz;
				}
				{
					pos = (pos + 1);
					tmpBuf[(pos - 1)] = pt_x;
				}
				{
					pos = (pos + 1);
					tmpBuf[(pos - 1)] = pt_y;
				}
				{
					pos = (pos + 1);
					tmpBuf[(pos - 1)] = pt_z;
				}
				{
					 ::h3d::col::Bounds _this = this->bounds;
					if ((pt_x < _this->xMin)) {
						_this->xMin = pt_x;
					}
					if ((pt_x > _this->xMax)) {
						_this->xMax = pt_x;
					}
					if ((pt_y < _this->yMin)) {
						_this->yMin = pt_y;
					}
					if ((pt_y > _this->yMax)) {
						_this->yMax = pt_y;
					}
					if ((pt_z < _this->zMin)) {
						_this->zMin = pt_z;
					}
					if ((pt_z > _this->zMax)) {
						_this->zMax = pt_z;
					}
				}
			}
			else {
				Float tx = (((x * cr) - (y * sr)) * scale);
				Float ty = (((x * sr) + (y * cr)) * scale);
				Float vx = (dx + tx);
				Float vy = (dy + ty);
				Float vz = (dz + (z * scale));
				{
					pos = (pos + 1);
					tmpBuf[(pos - 1)] = vx;
				}
				{
					pos = (pos + 1);
					tmpBuf[(pos - 1)] = vy;
				}
				{
					pos = (pos + 1);
					tmpBuf[(pos - 1)] = vz;
				}
				{
					 ::h3d::col::Bounds _this = this->bounds;
					if ((vx < _this->xMin)) {
						_this->xMin = vx;
					}
					if ((vx > _this->xMax)) {
						_this->xMax = vx;
					}
					if ((vy < _this->yMin)) {
						_this->yMin = vy;
					}
					if ((vy > _this->yMax)) {
						_this->yMax = vy;
					}
					if ((vz < _this->zMin)) {
						_this->zMin = vz;
					}
					if ((vz > _this->zMax)) {
						_this->zMax = vz;
					}
				}
			}
			if ((this->stride >= 6)) {
				p = (p + 1);
				Float nx = buf->__get((p - 1));
				p = (p + 1);
				Float ny = buf->__get((p - 1));
				p = (p + 1);
				Float nz = buf->__get((p - 1));
				if (::hx::IsNotNull( mat )) {
					Float pt_x = nx;
					Float pt_y = ny;
					Float pt_z = nz;
					{
						Float px = (((pt_x * mat->_11) + (pt_y * mat->_21)) + (pt_z * mat->_31));
						Float py = (((pt_x * mat->_12) + (pt_y * mat->_22)) + (pt_z * mat->_32));
						Float pz = (((pt_x * mat->_13) + (pt_y * mat->_23)) + (pt_z * mat->_33));
						pt_x = px;
						pt_y = py;
						pt_z = pz;
					}
					{
						Float k = (((pt_x * pt_x) + (pt_y * pt_y)) + (pt_z * pt_z));
						if ((k < ((Float)1e-10))) {
							k = ( (Float)(0) );
						}
						else {
							k = (((Float)1.) / ::Math_obj::sqrt(k));
						}
						pt_x = (pt_x * k);
						pt_y = (pt_y * k);
						pt_z = (pt_z * k);
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = pt_x;
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = pt_y;
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = pt_z;
					}
				}
				else {
					Float tnx = ((nx * cr) - (ny * sr));
					Float tny = ((nx * sr) + (ny * cr));
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = tnx;
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = tny;
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = nz;
					}
				}
			}
			int stride1 = this->stride;
			if (this->hasTangents) {
				p = (p + 1);
				Float tx = buf->__get((p - 1));
				p = (p + 1);
				Float ty = buf->__get((p - 1));
				p = (p + 1);
				Float tz = buf->__get((p - 1));
				if (::hx::IsNotNull( mat )) {
					Float pt_x = tx;
					Float pt_y = ty;
					Float pt_z = tz;
					Float len = (((pt_x * pt_x) + (pt_y * pt_y)) + (pt_z * pt_z));
					{
						Float px = (((pt_x * mat->_11) + (pt_y * mat->_21)) + (pt_z * mat->_31));
						Float py = (((pt_x * mat->_12) + (pt_y * mat->_22)) + (pt_z * mat->_32));
						Float pz = (((pt_x * mat->_13) + (pt_y * mat->_23)) + (pt_z * mat->_33));
						pt_x = px;
						pt_y = py;
						pt_z = pz;
					}
					{
						Float k = (((pt_x * pt_x) + (pt_y * pt_y)) + (pt_z * pt_z));
						if ((k < ((Float)1e-10))) {
							k = ( (Float)(0) );
						}
						else {
							k = (((Float)1.) / ::Math_obj::sqrt(k));
						}
						pt_x = (pt_x * k);
						pt_y = (pt_y * k);
						pt_z = (pt_z * k);
					}
					if ((len < ((Float)0.5))) {
						pt_x = (pt_x * ((Float)0.5));
						pt_y = (pt_y * ((Float)0.5));
						pt_z = (pt_z * ((Float)0.5));
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = pt_x;
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = pt_y;
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = pt_z;
					}
				}
				else {
					Float tnx = ((tx * cr) - (ty * sr));
					Float tny = ((tx * sr) + (ty * cr));
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = tnx;
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = tny;
					}
					{
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = tz;
					}
				}
				stride1 = (stride1 - 3);
			}
			switch((int)(stride1)){
				case (int)3: case (int)6: {
					continue;
				}
				break;
				case (int)4: case (int)7: {
					p = (p + 1);
					pos = (pos + 1);
					tmpBuf[(pos - 1)] = (buf->__get((p - 1)) + deltaU);
				}
				break;
				case (int)5: case (int)8: case (int)9: case (int)10: {
					{
						p = (p + 1);
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = (buf->__get((p - 1)) + deltaU);
					}
					{
						p = (p + 1);
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = (buf->__get((p - 1)) + deltaV);
					}
					{
						int _g = 8;
						int _g1 = stride1;
						while((_g < _g1)){
							_g = (_g + 1);
							int i = (_g - 1);
							{
								p = (p + 1);
								pos = (pos + 1);
								tmpBuf[(pos - 1)] = buf->__get((p - 1));
							}
						}
					}
				}
				break;
				default:{
					{
						p = (p + 1);
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = (buf->__get((p - 1)) + deltaU);
					}
					{
						p = (p + 1);
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = (buf->__get((p - 1)) + deltaV);
					}
					{
						p = (p + 1);
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = (buf->__get((p - 1)) * color);
					}
					{
						p = (p + 1);
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = (buf->__get((p - 1)) * color);
					}
					{
						p = (p + 1);
						pos = (pos + 1);
						tmpBuf[(pos - 1)] = (buf->__get((p - 1)) * color);
					}
					{
						int _g = 11;
						int _g1 = stride1;
						while((_g < _g1)){
							_g = (_g + 1);
							int i = (_g - 1);
							{
								p = (p + 1);
								pos = (pos + 1);
								tmpBuf[(pos - 1)] = buf->__get((p - 1));
							}
						}
					}
				}
			}
		}
	}
	this->bufPos = pos;
	start = (start - startVert);
	{
		int _g2 = 0;
		int _g3 = (triCount * 3);
		while((_g2 < _g3)){
			_g2 = (_g2 + 1);
			int i = (_g2 - 1);
			{
				int _hx_tmp = (idx->__get((i + (startTri * 3))) + start);
				this->tmpIdx[this->idxPos++] = _hx_tmp;
			}
		}
	}
}


HX_DEFINE_DYNAMIC_FUNC16(BigPrimitive_obj,addSub,(void))

::Array< Float > BigPrimitive_obj::PREV_BUFFER;

::Array< int > BigPrimitive_obj::PREV_INDEX;


::hx::ObjectPtr< BigPrimitive_obj > BigPrimitive_obj::__new(int stride,::hx::Null< bool >  __o_isRaw) {
	::hx::ObjectPtr< BigPrimitive_obj > __this = new BigPrimitive_obj();
	__this->__construct(stride,__o_isRaw);
	return __this;
}

::hx::ObjectPtr< BigPrimitive_obj > BigPrimitive_obj::__alloc(::hx::Ctx *_hx_ctx,int stride,::hx::Null< bool >  __o_isRaw) {
	BigPrimitive_obj *__this = (BigPrimitive_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BigPrimitive_obj), true, "h3d.prim.BigPrimitive"));
	*(void **)__this = BigPrimitive_obj::_hx_vtable;
	__this->__construct(stride,__o_isRaw);
	return __this;
}

BigPrimitive_obj::BigPrimitive_obj()
{
}

void BigPrimitive_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BigPrimitive);
	HX_MARK_MEMBER_NAME(isRaw,"isRaw");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(allIndexes,"allIndexes");
	HX_MARK_MEMBER_NAME(tmpBuf,"tmpBuf");
	HX_MARK_MEMBER_NAME(tmpIdx,"tmpIdx");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(bufPos,"bufPos");
	HX_MARK_MEMBER_NAME(idxPos,"idxPos");
	HX_MARK_MEMBER_NAME(startIndex,"startIndex");
	HX_MARK_MEMBER_NAME(flushing,"flushing");
	HX_MARK_MEMBER_NAME(hasTangents,"hasTangents");
	HX_MARK_MEMBER_NAME(isStatic,"isStatic");
	 ::h3d::prim::Primitive_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BigPrimitive_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isRaw,"isRaw");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(allIndexes,"allIndexes");
	HX_VISIT_MEMBER_NAME(tmpBuf,"tmpBuf");
	HX_VISIT_MEMBER_NAME(tmpIdx,"tmpIdx");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(bufPos,"bufPos");
	HX_VISIT_MEMBER_NAME(idxPos,"idxPos");
	HX_VISIT_MEMBER_NAME(startIndex,"startIndex");
	HX_VISIT_MEMBER_NAME(flushing,"flushing");
	HX_VISIT_MEMBER_NAME(hasTangents,"hasTangents");
	HX_VISIT_MEMBER_NAME(isStatic,"isStatic");
	 ::h3d::prim::Primitive_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BigPrimitive_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isRaw") ) { return ::hx::Val( isRaw ); }
		if (HX_FIELD_EQ(inName,"begin") ) { return ::hx::Val( begin_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { return ::hx::Val( stride ); }
		if (HX_FIELD_EQ(inName,"tmpBuf") ) { return ::hx::Val( tmpBuf ); }
		if (HX_FIELD_EQ(inName,"tmpIdx") ) { return ::hx::Val( tmpIdx ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"bufPos") ) { return ::hx::Val( bufPos ); }
		if (HX_FIELD_EQ(inName,"idxPos") ) { return ::hx::Val( idxPos ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"addSub") ) { return ::hx::Val( addSub_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flushing") ) { return ::hx::Val( flushing ); }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return ::hx::Val( isStatic ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"addIndex") ) { return ::hx::Val( addIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"triCount") ) { return ::hx::Val( triCount_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBounds") ) { return ::hx::Val( addBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allIndexes") ) { return ::hx::Val( allIndexes ); }
		if (HX_FIELD_EQ(inName,"startIndex") ) { return ::hx::Val( startIndex ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasTangents") ) { return ::hx::Val( hasTangents ); }
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return ::hx::Val( vertexCount_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addVertexValue") ) { return ::hx::Val( addVertexValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BigPrimitive_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"PREV_INDEX") ) { outValue = ( PREV_INDEX ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"PREV_BUFFER") ) { outValue = ( PREV_BUFFER ); return true; }
	}
	return false;
}

::hx::Val BigPrimitive_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isRaw") ) { isRaw=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tmpBuf") ) { tmpBuf=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tmpIdx") ) { tmpIdx=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::h3d::col::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufPos") ) { bufPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idxPos") ) { idxPos=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flushing") ) { flushing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { isStatic=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allIndexes") ) { allIndexes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startIndex") ) { startIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasTangents") ) { hasTangents=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BigPrimitive_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"PREV_INDEX") ) { PREV_INDEX=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"PREV_BUFFER") ) { PREV_BUFFER=ioValue.Cast< ::Array< Float > >(); return true; }
	}
	return false;
}

void BigPrimitive_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isRaw",1e,00,55,c1));
	outFields->push(HX_("stride",19,20,30,11));
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("allIndexes",df,60,68,a9));
	outFields->push(HX_("tmpBuf",9c,76,4d,6e));
	outFields->push(HX_("tmpIdx",a6,b7,52,6e));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("bufPos",21,14,84,d0));
	outFields->push(HX_("idxPos",57,95,19,df));
	outFields->push(HX_("startIndex",50,73,2b,da));
	outFields->push(HX_("flushing",9e,bc,0b,99));
	outFields->push(HX_("hasTangents",88,75,d2,0b));
	outFields->push(HX_("isStatic",38,78,65,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BigPrimitive_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BigPrimitive_obj,isRaw),HX_("isRaw",1e,00,55,c1)},
	{::hx::fsInt,(int)offsetof(BigPrimitive_obj,stride),HX_("stride",19,20,30,11)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BigPrimitive_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BigPrimitive_obj,allIndexes),HX_("allIndexes",df,60,68,a9)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(BigPrimitive_obj,tmpBuf),HX_("tmpBuf",9c,76,4d,6e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(BigPrimitive_obj,tmpIdx),HX_("tmpIdx",a6,b7,52,6e)},
	{::hx::fsObject /*  ::h3d::col::Bounds */ ,(int)offsetof(BigPrimitive_obj,bounds),HX_("bounds",75,86,1d,66)},
	{::hx::fsInt,(int)offsetof(BigPrimitive_obj,bufPos),HX_("bufPos",21,14,84,d0)},
	{::hx::fsInt,(int)offsetof(BigPrimitive_obj,idxPos),HX_("idxPos",57,95,19,df)},
	{::hx::fsInt,(int)offsetof(BigPrimitive_obj,startIndex),HX_("startIndex",50,73,2b,da)},
	{::hx::fsBool,(int)offsetof(BigPrimitive_obj,flushing),HX_("flushing",9e,bc,0b,99)},
	{::hx::fsBool,(int)offsetof(BigPrimitive_obj,hasTangents),HX_("hasTangents",88,75,d2,0b)},
	{::hx::fsBool,(int)offsetof(BigPrimitive_obj,isStatic),HX_("isStatic",38,78,65,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BigPrimitive_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &BigPrimitive_obj::PREV_BUFFER,HX_("PREV_BUFFER",0c,08,ee,e0)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &BigPrimitive_obj::PREV_INDEX,HX_("PREV_INDEX",66,d9,51,43)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BigPrimitive_obj_sMemberFields[] = {
	HX_("isRaw",1e,00,55,c1),
	HX_("stride",19,20,30,11),
	HX_("buffers",73,a3,90,b1),
	HX_("allIndexes",df,60,68,a9),
	HX_("tmpBuf",9c,76,4d,6e),
	HX_("tmpIdx",a6,b7,52,6e),
	HX_("bounds",75,86,1d,66),
	HX_("bufPos",21,14,84,d0),
	HX_("idxPos",57,95,19,df),
	HX_("startIndex",50,73,2b,da),
	HX_("flushing",9e,bc,0b,99),
	HX_("hasTangents",88,75,d2,0b),
	HX_("isStatic",38,78,65,5e),
	HX_("begin",29,ea,55,b0),
	HX_("addPoint",6f,da,ec,3f),
	HX_("addBounds",76,bb,41,1e),
	HX_("addVertexValue",cc,50,cb,db),
	HX_("addIndex",31,c1,71,37),
	HX_("triCount",a4,2f,74,48),
	HX_("vertexCount",cb,0e,9f,5e),
	HX_("flush",c4,62,9b,02),
	HX_("render",56,6b,29,05),
	HX_("getBounds",ab,0f,74,e2),
	HX_("dispose",9f,80,4c,bb),
	HX_("clear",8d,71,5b,48),
	HX_("add",21,f2,49,00),
	HX_("addSub",df,b9,08,9f),
	::String(null()) };

static void BigPrimitive_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BigPrimitive_obj::PREV_BUFFER,"PREV_BUFFER");
	HX_MARK_MEMBER_NAME(BigPrimitive_obj::PREV_INDEX,"PREV_INDEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BigPrimitive_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BigPrimitive_obj::PREV_BUFFER,"PREV_BUFFER");
	HX_VISIT_MEMBER_NAME(BigPrimitive_obj::PREV_INDEX,"PREV_INDEX");
};

#endif

::hx::Class BigPrimitive_obj::__mClass;

static ::String BigPrimitive_obj_sStaticFields[] = {
	HX_("PREV_BUFFER",0c,08,ee,e0),
	HX_("PREV_INDEX",66,d9,51,43),
	::String(null())
};

void BigPrimitive_obj::__register()
{
	BigPrimitive_obj _hx_dummy;
	BigPrimitive_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.prim.BigPrimitive",7a,ec,2a,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BigPrimitive_obj::__GetStatic;
	__mClass->mSetStaticField = &BigPrimitive_obj::__SetStatic;
	__mClass->mMarkFunc = BigPrimitive_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BigPrimitive_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BigPrimitive_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BigPrimitive_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BigPrimitive_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BigPrimitive_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BigPrimitive_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace prim
