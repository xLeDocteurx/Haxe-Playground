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
#ifndef INCLUDED_h3d_BufferOffset
#include <h3d/BufferOffset.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Indexes
#include <h3d/Indexes.h>
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
#ifndef INCLUDED_h3d_col_Polygon
#include <h3d/col/Polygon.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_impl_MemoryManager
#include <h3d/impl/MemoryManager.h>
#endif
#ifndef INCLUDED_h3d_prim_MeshPrimitive
#include <h3d/prim/MeshPrimitive.h>
#endif
#ifndef INCLUDED_h3d_prim_Polygon
#include <h3d/prim/Polygon.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_h3d_prim_UV
#include <h3d/prim/UV.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_49e644f640801405_4_new,"h3d.prim.Polygon","new",0x68f36b19,"h3d.prim.Polygon.new","h3d/prim/Polygon.hx",4,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_22_getBounds,"h3d.prim.Polygon","getBounds",0x02c5fb24,"h3d.prim.Polygon.getBounds","h3d/prim/Polygon.hx",22,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_29_alloc,"h3d.prim.Polygon","alloc",0xa55a1f6e,"h3d.prim.Polygon.alloc","h3d/prim/Polygon.hx",29,0x4ad2ced7)
static const ::String _hx_array_data_2b0feaa7_6[] = {
	HX_("position",a9,a0,fa,ca),
};
static const int _hx_array_data_2b0feaa7_7[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_100_unindex,"h3d.prim.Polygon","unindex",0x993b7d52,"h3d.prim.Polygon.unindex","h3d/prim/Polygon.hx",100,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_134_translate,"h3d.prim.Polygon","translate",0x69d1c2c7,"h3d.prim.Polygon.translate","h3d/prim/Polygon.hx",134,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_145_scale,"h3d.prim.Polygon","scale",0xfc954983,"h3d.prim.Polygon.scale","h3d/prim/Polygon.hx",145,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_154_addNormals,"h3d.prim.Polygon","addNormals",0xbac0bab2,"h3d.prim.Polygon.addNormals","h3d/prim/Polygon.hx",154,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_186_addTangents,"h3d.prim.Polygon","addTangents",0xb3b64308,"h3d.prim.Polygon.addTangents","h3d/prim/Polygon.hx",186,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_233_addUVs,"h3d.prim.Polygon","addUVs",0x68ef4258,"h3d.prim.Polygon.addUVs","h3d/prim/Polygon.hx",233,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_239_uvScale,"h3d.prim.Polygon","uvScale",0x19fe03a2,"h3d.prim.Polygon.uvScale","h3d/prim/Polygon.hx",239,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_251_triCount,"h3d.prim.Polygon","triCount",0x2d0c164b,"h3d.prim.Polygon.triCount","h3d/prim/Polygon.hx",251,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_259_vertexCount,"h3d.prim.Polygon","vertexCount",0xa7dd8a84,"h3d.prim.Polygon.vertexCount","h3d/prim/Polygon.hx",259,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_262_getCollider,"h3d.prim.Polygon","getCollider",0x39081da3,"h3d.prim.Polygon.getCollider","h3d/prim/Polygon.hx",262,0x4ad2ced7)
HX_LOCAL_STACK_FRAME(_hx_pos_49e644f640801405_278_render,"h3d.prim.Polygon","render",0xcf0e8a3d,"h3d.prim.Polygon.render","h3d/prim/Polygon.hx",278,0x4ad2ced7)
namespace h3d{
namespace prim{

void Polygon_obj::__construct(::Array< ::Dynamic> points,::Array< int > idx){
            	HX_STACKFRAME(&_hx_pos_49e644f640801405_4_new)
HXLINE(  15)		this->translatedZ = ((Float)0.);
HXLINE(  14)		this->translatedY = ((Float)0.);
HXLINE(  13)		this->translatedX = ((Float)0.);
HXLINE(  12)		this->scaled = ((Float)1.);
HXLINE(  17)		super::__construct();
HXLINE(  18)		this->points = points;
HXLINE(  19)		this->idx = idx;
            	}

Dynamic Polygon_obj::__CreateEmpty() { return new Polygon_obj; }

void *Polygon_obj::_hx_vtable = 0;

Dynamic Polygon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Polygon_obj > _hx_result = new Polygon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Polygon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x52c84e9b) {
		if (inClassId<=(int)0x1f6183bf) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1f6183bf;
		} else {
			return inClassId==(int)0x52c84e9b;
		}
	} else {
		return inClassId==(int)0x566939c8;
	}
}

 ::h3d::col::Bounds Polygon_obj::getBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_49e644f640801405_22_getBounds)
HXLINE(  23)		 ::h3d::col::Bounds b =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE(  24)		{
HXLINE(  24)			int _g = 0;
HXDLIN(  24)			::Array< ::Dynamic> _g1 = this->points;
HXDLIN(  24)			while((_g < _g1->length)){
HXLINE(  24)				 ::h3d::col::Point p = _g1->__get(_g).StaticCast<  ::h3d::col::Point >();
HXDLIN(  24)				_g = (_g + 1);
HXLINE(  25)				{
HXLINE(  25)					if ((p->x < b->xMin)) {
HXLINE(  25)						b->xMin = p->x;
            					}
HXDLIN(  25)					if ((p->x > b->xMax)) {
HXLINE(  25)						b->xMax = p->x;
            					}
HXDLIN(  25)					if ((p->y < b->yMin)) {
HXLINE(  25)						b->yMin = p->y;
            					}
HXDLIN(  25)					if ((p->y > b->yMax)) {
HXLINE(  25)						b->yMax = p->y;
            					}
HXDLIN(  25)					if ((p->z < b->zMin)) {
HXLINE(  25)						b->zMin = p->z;
            					}
HXDLIN(  25)					if ((p->z > b->zMax)) {
HXLINE(  25)						b->zMax = p->z;
            					}
            				}
            			}
            		}
HXLINE(  26)		return b;
            	}


void Polygon_obj::alloc( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_49e644f640801405_29_alloc)
HXLINE(  30)		this->dispose();
HXLINE(  32)		int size = 3;
HXLINE(  33)		::Array< ::String > names = ::Array_obj< ::String >::fromData( _hx_array_data_2b0feaa7_6,1);
HXLINE(  34)		::Array< int > positions = ::Array_obj< int >::fromData( _hx_array_data_2b0feaa7_7,1);
HXLINE(  35)		if (::hx::IsNotNull( this->normals )) {
HXLINE(  36)			names->push(HX_("normal",27,72,69,30));
HXLINE(  37)			positions->push(size);
HXLINE(  38)			size = (size + 3);
            		}
HXLINE(  40)		if (::hx::IsNotNull( this->tangents )) {
HXLINE(  41)			names->push(HX_("tangent",c5,9c,cd,3a));
HXLINE(  42)			positions->push(size);
HXLINE(  43)			size = (size + 3);
            		}
HXLINE(  45)		if (::hx::IsNotNull( this->uvs )) {
HXLINE(  46)			names->push(HX_("uv",61,66,00,00));
HXLINE(  47)			positions->push(size);
HXLINE(  48)			size = (size + 2);
            		}
HXLINE(  50)		if (::hx::IsNotNull( this->colors )) {
HXLINE(  51)			names->push(HX_("color",63,71,5c,4a));
HXLINE(  52)			positions->push(size);
HXLINE(  53)			size = (size + 3);
            		}
HXLINE(  56)		int length = 0;
HXDLIN(  56)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN(  56)		if ((length > 0)) {
HXLINE(  56)			if ((length > this1->length)) {
HXLINE(  56)				this1[(length - 1)] = ((Float)0.);
            			}
            		}
HXDLIN(  56)		::Array< Float > buf = this1;
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			int _g1 = this->points->length;
HXDLIN(  57)			while((_g < _g1)){
HXLINE(  57)				_g = (_g + 1);
HXDLIN(  57)				int k = (_g - 1);
HXLINE(  58)				 ::h3d::col::Point p = this->points->__get(k).StaticCast<  ::h3d::col::Point >();
HXLINE(  59)				buf->push(p->x);
HXLINE(  60)				buf->push(p->y);
HXLINE(  61)				buf->push(p->z);
HXLINE(  62)				if (::hx::IsNotNull( this->normals )) {
HXLINE(  63)					 ::h3d::col::Point n = this->normals->__get(k).StaticCast<  ::h3d::col::Point >();
HXLINE(  64)					buf->push(n->x);
HXLINE(  65)					buf->push(n->y);
HXLINE(  66)					buf->push(n->z);
            				}
HXLINE(  68)				if (::hx::IsNotNull( this->tangents )) {
HXLINE(  69)					 ::h3d::col::Point t = this->tangents->__get(k).StaticCast<  ::h3d::col::Point >();
HXLINE(  70)					buf->push(t->x);
HXLINE(  71)					buf->push(t->y);
HXLINE(  72)					buf->push(t->z);
            				}
HXLINE(  74)				if (::hx::IsNotNull( this->uvs )) {
HXLINE(  75)					 ::h3d::prim::UV t = this->uvs->__get(k).StaticCast<  ::h3d::prim::UV >();
HXLINE(  76)					buf->push(t->u);
HXLINE(  77)					buf->push(t->v);
            				}
HXLINE(  79)				if (::hx::IsNotNull( this->colors )) {
HXLINE(  80)					 ::h3d::col::Point c = this->colors->__get(k).StaticCast<  ::h3d::col::Point >();
HXLINE(  81)					buf->push(c->x);
HXLINE(  82)					buf->push(c->y);
HXLINE(  83)					buf->push(c->z);
            				}
            			}
            		}
HXLINE(  86)		::Array< ::Dynamic> flags = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  87)		if (::hx::IsNull( this->idx )) {
HXLINE(  87)			flags->push(::h3d::BufferFlag_obj::Triangles_dyn());
            		}
HXLINE(  88)		bool _hx_tmp;
HXDLIN(  88)		if (::hx::IsNotNull( this->normals )) {
HXLINE(  88)			_hx_tmp = ::hx::IsNotNull( this->tangents );
            		}
            		else {
HXLINE(  88)			_hx_tmp = true;
            		}
HXDLIN(  88)		if (_hx_tmp) {
HXLINE(  88)			flags->push(::h3d::BufferFlag_obj::RawFormat_dyn());
            		}
HXLINE(  89)		this->buffer = ::h3d::Buffer_obj::ofFloats(buf,size,flags);
HXLINE(  91)		{
HXLINE(  91)			int _g2 = 0;
HXDLIN(  91)			int _g3 = names->length;
HXDLIN(  91)			while((_g2 < _g3)){
HXLINE(  91)				_g2 = (_g2 + 1);
HXDLIN(  91)				int i = (_g2 - 1);
HXLINE(  92)				this->addBuffer(names->__get(i),this->buffer,positions->__get(i));
            			}
            		}
HXLINE(  94)		if (::hx::IsNotNull( this->idx )) {
HXLINE(  95)			this->indexes = ::h3d::Indexes_obj::alloc(this->idx,null(),null());
            		}
            	}


void Polygon_obj::unindex(){
            	HX_GC_STACKFRAME(&_hx_pos_49e644f640801405_100_unindex)
HXDLIN( 100)		bool _hx_tmp;
HXDLIN( 100)		if (::hx::IsNotNull( this->idx )) {
HXDLIN( 100)			_hx_tmp = (this->points->length != this->idx->length);
            		}
            		else {
HXDLIN( 100)			_hx_tmp = false;
            		}
HXDLIN( 100)		if (_hx_tmp) {
HXLINE( 101)			::Array< ::Dynamic> p = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 103)			{
HXLINE( 103)				int _g = 0;
HXDLIN( 103)				int _g1 = this->idx->length;
HXDLIN( 103)				while((_g < _g1)){
HXLINE( 103)					_g = (_g + 1);
HXDLIN( 103)					int i = (_g - 1);
HXLINE( 104)					 ::h3d::col::Point _this = this->points->__get(this->idx->__get(i)).StaticCast<  ::h3d::col::Point >();
HXDLIN( 104)					p->push( ::h3d::col::Point_obj::__alloc( HX_CTX ,_this->x,_this->y,_this->z));
            				}
            			}
HXLINE( 105)			if (::hx::IsNotNull( this->normals )) {
HXLINE( 106)				::Array< ::Dynamic> n = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 107)				{
HXLINE( 107)					int _g = 0;
HXDLIN( 107)					int _g1 = this->idx->length;
HXDLIN( 107)					while((_g < _g1)){
HXLINE( 107)						_g = (_g + 1);
HXDLIN( 107)						int i = (_g - 1);
HXLINE( 108)						 ::h3d::col::Point _this = this->normals->__get(this->idx->__get(i)).StaticCast<  ::h3d::col::Point >();
HXDLIN( 108)						n->push( ::h3d::col::Point_obj::__alloc( HX_CTX ,_this->x,_this->y,_this->z));
            					}
            				}
HXLINE( 109)				this->normals = n;
            			}
HXLINE( 111)			if (::hx::IsNotNull( this->tangents )) {
HXLINE( 112)				::Array< ::Dynamic> t = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 113)				{
HXLINE( 113)					int _g = 0;
HXDLIN( 113)					int _g1 = this->idx->length;
HXDLIN( 113)					while((_g < _g1)){
HXLINE( 113)						_g = (_g + 1);
HXDLIN( 113)						int i = (_g - 1);
HXLINE( 114)						 ::h3d::col::Point _this = this->tangents->__get(this->idx->__get(i)).StaticCast<  ::h3d::col::Point >();
HXDLIN( 114)						t->push( ::h3d::col::Point_obj::__alloc( HX_CTX ,_this->x,_this->y,_this->z));
            					}
            				}
HXLINE( 115)				this->tangents = t;
            			}
HXLINE( 117)			if (::hx::IsNotNull( this->colors )) {
HXLINE( 118)				::Array< ::Dynamic> n = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 119)				{
HXLINE( 119)					int _g = 0;
HXDLIN( 119)					int _g1 = this->idx->length;
HXDLIN( 119)					while((_g < _g1)){
HXLINE( 119)						_g = (_g + 1);
HXDLIN( 119)						int i = (_g - 1);
HXLINE( 120)						 ::h3d::col::Point _this = this->colors->__get(this->idx->__get(i)).StaticCast<  ::h3d::col::Point >();
HXDLIN( 120)						n->push( ::h3d::col::Point_obj::__alloc( HX_CTX ,_this->x,_this->y,_this->z));
            					}
            				}
HXLINE( 121)				this->colors = n;
            			}
HXLINE( 123)			if (::hx::IsNotNull( this->uvs )) {
HXLINE( 124)				::Array< ::Dynamic> t = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 125)				{
HXLINE( 125)					int _g = 0;
HXDLIN( 125)					int _g1 = this->idx->length;
HXDLIN( 125)					while((_g < _g1)){
HXLINE( 125)						_g = (_g + 1);
HXDLIN( 125)						int i = (_g - 1);
HXLINE( 126)						t->push(this->uvs->__get(this->idx->__get(i)).StaticCast<  ::h3d::prim::UV >()->clone());
            					}
            				}
HXLINE( 127)				this->uvs = t;
            			}
HXLINE( 129)			this->points = p;
HXLINE( 130)			this->idx = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,unindex,(void))

void Polygon_obj::translate(Float dx,Float dy,Float dz){
            	HX_STACKFRAME(&_hx_pos_49e644f640801405_134_translate)
HXLINE( 135)		 ::h3d::prim::Polygon _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 135)		_hx_tmp->translatedX = (_hx_tmp->translatedX + dx);
HXLINE( 136)		 ::h3d::prim::Polygon _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 136)		_hx_tmp1->translatedY = (_hx_tmp1->translatedY + dy);
HXLINE( 137)		 ::h3d::prim::Polygon _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 137)		_hx_tmp2->translatedZ = (_hx_tmp2->translatedZ + dz);
HXLINE( 138)		{
HXLINE( 138)			int _g = 0;
HXDLIN( 138)			::Array< ::Dynamic> _g1 = this->points;
HXDLIN( 138)			while((_g < _g1->length)){
HXLINE( 138)				 ::h3d::col::Point p = _g1->__get(_g).StaticCast<  ::h3d::col::Point >();
HXDLIN( 138)				_g = (_g + 1);
HXLINE( 139)				 ::h3d::col::Point p1 = p;
HXDLIN( 139)				p1->x = (p1->x + dx);
HXLINE( 140)				 ::h3d::col::Point p2 = p;
HXDLIN( 140)				p2->y = (p2->y + dy);
HXLINE( 141)				 ::h3d::col::Point p3 = p;
HXDLIN( 141)				p3->z = (p3->z + dz);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,translate,(void))

void Polygon_obj::scale(Float s){
            	HX_STACKFRAME(&_hx_pos_49e644f640801405_145_scale)
HXLINE( 146)		 ::h3d::prim::Polygon _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 146)		_hx_tmp->scaled = (_hx_tmp->scaled * s);
HXLINE( 147)		{
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			::Array< ::Dynamic> _g1 = this->points;
HXDLIN( 147)			while((_g < _g1->length)){
HXLINE( 147)				 ::h3d::col::Point p = _g1->__get(_g).StaticCast<  ::h3d::col::Point >();
HXDLIN( 147)				_g = (_g + 1);
HXLINE( 148)				 ::h3d::col::Point p1 = p;
HXDLIN( 148)				p1->x = (p1->x * s);
HXLINE( 149)				 ::h3d::col::Point p2 = p;
HXDLIN( 149)				p2->y = (p2->y * s);
HXLINE( 150)				 ::h3d::col::Point p3 = p;
HXDLIN( 150)				p3->z = (p3->z * s);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,scale,(void))

void Polygon_obj::addNormals(){
            	HX_GC_STACKFRAME(&_hx_pos_49e644f640801405_154_addNormals)
HXLINE( 156)		this->normals = ::Array_obj< ::Dynamic>::__new();
HXLINE( 157)		{
HXLINE( 157)			int _g = 0;
HXDLIN( 157)			int _g1 = this->points->length;
HXDLIN( 157)			while((_g < _g1)){
HXLINE( 157)				_g = (_g + 1);
HXDLIN( 157)				int i = (_g - 1);
HXLINE( 158)				this->normals[i] =  ::h3d::col::Point_obj::__alloc( HX_CTX ,null(),null(),null());
            			}
            		}
HXLINE( 159)		int pos = 0;
HXLINE( 160)		{
HXLINE( 160)			int _g2 = 0;
HXDLIN( 160)			int _g3 = this->triCount();
HXDLIN( 160)			while((_g2 < _g3)){
HXLINE( 160)				_g2 = (_g2 + 1);
HXDLIN( 160)				int i = (_g2 - 1);
HXLINE( 161)				int i0;
HXDLIN( 161)				int i1;
HXDLIN( 161)				int i2;
HXLINE( 162)				if (::hx::IsNull( this->idx )) {
HXLINE( 163)					pos = (pos + 1);
HXDLIN( 163)					i0 = (pos - 1);
HXLINE( 164)					pos = (pos + 1);
HXDLIN( 164)					i1 = (pos - 1);
HXLINE( 165)					pos = (pos + 1);
HXDLIN( 165)					i2 = (pos - 1);
            				}
            				else {
HXLINE( 167)					pos = (pos + 1);
HXDLIN( 167)					i0 = this->idx->__get((pos - 1));
HXLINE( 168)					pos = (pos + 1);
HXDLIN( 168)					i1 = this->idx->__get((pos - 1));
HXLINE( 169)					pos = (pos + 1);
HXDLIN( 169)					i2 = this->idx->__get((pos - 1));
            				}
HXLINE( 171)				 ::h3d::col::Point p0 = this->points->__get(i0).StaticCast<  ::h3d::col::Point >();
HXLINE( 172)				 ::h3d::col::Point p1 = this->points->__get(i1).StaticCast<  ::h3d::col::Point >();
HXLINE( 173)				 ::h3d::col::Point p2 = this->points->__get(i2).StaticCast<  ::h3d::col::Point >();
HXLINE( 175)				Float _this_x = (p1->x - p0->x);
HXDLIN( 175)				Float _this_y = (p1->y - p0->y);
HXDLIN( 175)				Float _this_z = (p1->z - p0->z);
HXDLIN( 175)				Float p_x = (p2->x - p0->x);
HXDLIN( 175)				Float p_y = (p2->y - p0->y);
HXDLIN( 175)				Float p_z = (p2->z - p0->z);
HXDLIN( 175)				Float n_x = ((_this_y * p_z) - (_this_z * p_y));
HXDLIN( 175)				Float n_y = ((_this_z * p_x) - (_this_x * p_z));
HXDLIN( 175)				Float n_z = ((_this_x * p_y) - (_this_y * p_x));
HXLINE( 177)				 ::h3d::col::Point fh = this->normals->__get(i0).StaticCast<  ::h3d::col::Point >();
HXDLIN( 177)				fh->x = (fh->x + n_x);
HXDLIN( 177)				 ::h3d::col::Point fh1 = this->normals->__get(i0).StaticCast<  ::h3d::col::Point >();
HXDLIN( 177)				fh1->y = (fh1->y + n_y);
HXDLIN( 177)				 ::h3d::col::Point fh2 = this->normals->__get(i0).StaticCast<  ::h3d::col::Point >();
HXDLIN( 177)				fh2->z = (fh2->z + n_z);
HXLINE( 178)				 ::h3d::col::Point fh3 = this->normals->__get(i1).StaticCast<  ::h3d::col::Point >();
HXDLIN( 178)				fh3->x = (fh3->x + n_x);
HXDLIN( 178)				 ::h3d::col::Point fh4 = this->normals->__get(i1).StaticCast<  ::h3d::col::Point >();
HXDLIN( 178)				fh4->y = (fh4->y + n_y);
HXDLIN( 178)				 ::h3d::col::Point fh5 = this->normals->__get(i1).StaticCast<  ::h3d::col::Point >();
HXDLIN( 178)				fh5->z = (fh5->z + n_z);
HXLINE( 179)				 ::h3d::col::Point fh6 = this->normals->__get(i2).StaticCast<  ::h3d::col::Point >();
HXDLIN( 179)				fh6->x = (fh6->x + n_x);
HXDLIN( 179)				 ::h3d::col::Point fh7 = this->normals->__get(i2).StaticCast<  ::h3d::col::Point >();
HXDLIN( 179)				fh7->y = (fh7->y + n_y);
HXDLIN( 179)				 ::h3d::col::Point fh8 = this->normals->__get(i2).StaticCast<  ::h3d::col::Point >();
HXDLIN( 179)				fh8->z = (fh8->z + n_z);
            			}
            		}
HXLINE( 182)		{
HXLINE( 182)			int _g4 = 0;
HXDLIN( 182)			::Array< ::Dynamic> _g5 = this->normals;
HXDLIN( 182)			while((_g4 < _g5->length)){
HXLINE( 182)				 ::h3d::col::Point n = _g5->__get(_g4).StaticCast<  ::h3d::col::Point >();
HXDLIN( 182)				_g4 = (_g4 + 1);
HXLINE( 183)				{
HXLINE( 183)					Float k = (((n->x * n->x) + (n->y * n->y)) + (n->z * n->z));
HXDLIN( 183)					if ((k < ((Float)1e-10))) {
HXLINE(  75)						k = ( (Float)(0) );
            					}
            					else {
HXLINE(  75)						k = (((Float)1.) / ::Math_obj::sqrt(k));
            					}
HXLINE( 183)					 ::h3d::col::Point n1 = n;
HXDLIN( 183)					n1->x = (n1->x * k);
HXDLIN( 183)					 ::h3d::col::Point n2 = n;
HXDLIN( 183)					n2->y = (n2->y * k);
HXDLIN( 183)					 ::h3d::col::Point n3 = n;
HXDLIN( 183)					n3->z = (n3->z * k);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,addNormals,(void))

void Polygon_obj::addTangents(){
            	HX_GC_STACKFRAME(&_hx_pos_49e644f640801405_186_addTangents)
HXLINE( 187)		if (::hx::IsNull( this->normals )) {
HXLINE( 188)			this->addNormals();
            		}
HXLINE( 189)		if (::hx::IsNull( this->uvs )) {
HXLINE( 190)			this->addUVs();
            		}
HXLINE( 191)		this->tangents = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 192)		{
HXLINE( 192)			int _g = 0;
HXDLIN( 192)			int _g1 = this->points->length;
HXDLIN( 192)			while((_g < _g1)){
HXLINE( 192)				_g = (_g + 1);
HXDLIN( 192)				int i = (_g - 1);
HXLINE( 193)				this->tangents[i] =  ::h3d::col::Point_obj::__alloc( HX_CTX ,null(),null(),null());
            			}
            		}
HXLINE( 194)		int pos = 0;
HXLINE( 195)		{
HXLINE( 195)			int _g2 = 0;
HXDLIN( 195)			int _g3 = this->triCount();
HXDLIN( 195)			while((_g2 < _g3)){
HXLINE( 195)				_g2 = (_g2 + 1);
HXDLIN( 195)				int i = (_g2 - 1);
HXLINE( 196)				int i0;
HXDLIN( 196)				int i1;
HXDLIN( 196)				int i2;
HXLINE( 197)				if (::hx::IsNull( this->idx )) {
HXLINE( 198)					pos = (pos + 1);
HXDLIN( 198)					i0 = (pos - 1);
HXLINE( 199)					pos = (pos + 1);
HXDLIN( 199)					i1 = (pos - 1);
HXLINE( 200)					pos = (pos + 1);
HXDLIN( 200)					i2 = (pos - 1);
            				}
            				else {
HXLINE( 202)					pos = (pos + 1);
HXDLIN( 202)					i0 = this->idx->__get((pos - 1));
HXLINE( 203)					pos = (pos + 1);
HXDLIN( 203)					i1 = this->idx->__get((pos - 1));
HXLINE( 204)					pos = (pos + 1);
HXDLIN( 204)					i2 = this->idx->__get((pos - 1));
            				}
HXLINE( 206)				 ::h3d::col::Point p0 = this->points->__get(i0).StaticCast<  ::h3d::col::Point >();
HXLINE( 207)				 ::h3d::col::Point p1 = this->points->__get(i1).StaticCast<  ::h3d::col::Point >();
HXLINE( 208)				 ::h3d::col::Point p2 = this->points->__get(i2).StaticCast<  ::h3d::col::Point >();
HXLINE( 209)				 ::h3d::prim::UV uv0 = this->uvs->__get(i0).StaticCast<  ::h3d::prim::UV >();
HXLINE( 210)				 ::h3d::prim::UV uv1 = this->uvs->__get(i1).StaticCast<  ::h3d::prim::UV >();
HXLINE( 211)				 ::h3d::prim::UV uv2 = this->uvs->__get(i2).StaticCast<  ::h3d::prim::UV >();
HXLINE( 212)				 ::h3d::col::Point n = this->normals->__get(i0).StaticCast<  ::h3d::col::Point >();
HXLINE( 214)				Float k0_x = (p1->x - p0->x);
HXDLIN( 214)				Float k0_y = (p1->y - p0->y);
HXDLIN( 214)				Float k0_z = (p1->z - p0->z);
HXLINE( 215)				Float k1_x = (p2->x - p0->x);
HXDLIN( 215)				Float k1_y = (p2->y - p0->y);
HXDLIN( 215)				Float k1_z = (p2->z - p0->z);
HXLINE( 216)				{
HXLINE( 216)					Float v = (uv2->v - uv0->v);
HXDLIN( 216)					k0_x = (k0_x * v);
HXDLIN( 216)					k0_y = (k0_y * v);
HXDLIN( 216)					k0_z = (k0_z * v);
            				}
HXLINE( 217)				{
HXLINE( 217)					Float v1 = (uv1->v - uv0->v);
HXDLIN( 217)					k1_x = (k1_x * v1);
HXDLIN( 217)					k1_y = (k1_y * v1);
HXDLIN( 217)					k1_z = (k1_z * v1);
            				}
HXLINE( 218)				 ::h3d::col::Point t =  ::h3d::col::Point_obj::__alloc( HX_CTX ,(k0_x - k1_x),(k0_y - k1_y),(k0_z - k1_z));
HXLINE( 219)				Float b_x = ((n->y * t->z) - (n->z * t->y));
HXDLIN( 219)				Float b_y = ((n->z * t->x) - (n->x * t->z));
HXDLIN( 219)				Float b_z = ((n->x * t->y) - (n->y * t->x));
HXLINE( 220)				{
HXLINE( 220)					Float k = (((b_x * b_x) + (b_y * b_y)) + (b_z * b_z));
HXDLIN( 220)					if ((k < ((Float)1e-10))) {
HXLINE(  75)						k = ( (Float)(0) );
            					}
            					else {
HXLINE(  75)						k = (((Float)1.) / ::Math_obj::sqrt(k));
            					}
HXLINE( 220)					b_x = (b_x * k);
HXDLIN( 220)					b_y = (b_y * k);
HXDLIN( 220)					b_z = (b_z * k);
            				}
HXLINE( 221)				t =  ::h3d::col::Point_obj::__alloc( HX_CTX ,((b_y * n->z) - (b_z * n->y)),((b_z * n->x) - (b_x * n->z)),((b_x * n->y) - (b_y * n->x)));
HXLINE( 222)				{
HXLINE( 222)					Float k1 = (((t->x * t->x) + (t->y * t->y)) + (t->z * t->z));
HXDLIN( 222)					if ((k1 < ((Float)1e-10))) {
HXLINE(  75)						k1 = ( (Float)(0) );
            					}
            					else {
HXLINE(  75)						k1 = (((Float)1.) / ::Math_obj::sqrt(k1));
            					}
HXLINE( 222)					 ::h3d::col::Point t1 = t;
HXDLIN( 222)					t1->x = (t1->x * k1);
HXDLIN( 222)					 ::h3d::col::Point t2 = t;
HXDLIN( 222)					t2->y = (t2->y * k1);
HXDLIN( 222)					 ::h3d::col::Point t3 = t;
HXDLIN( 222)					t3->z = (t3->z * k1);
            				}
HXLINE( 225)				 ::h3d::col::Point fh = this->tangents->__get(i0).StaticCast<  ::h3d::col::Point >();
HXDLIN( 225)				fh->x = (fh->x + t->x);
HXDLIN( 225)				 ::h3d::col::Point fh1 = this->tangents->__get(i0).StaticCast<  ::h3d::col::Point >();
HXDLIN( 225)				fh1->y = (fh1->y + t->y);
HXDLIN( 225)				 ::h3d::col::Point fh2 = this->tangents->__get(i0).StaticCast<  ::h3d::col::Point >();
HXDLIN( 225)				fh2->z = (fh2->z + t->z);
HXLINE( 226)				 ::h3d::col::Point fh3 = this->tangents->__get(i1).StaticCast<  ::h3d::col::Point >();
HXDLIN( 226)				fh3->x = (fh3->x + t->x);
HXDLIN( 226)				 ::h3d::col::Point fh4 = this->tangents->__get(i1).StaticCast<  ::h3d::col::Point >();
HXDLIN( 226)				fh4->y = (fh4->y + t->y);
HXDLIN( 226)				 ::h3d::col::Point fh5 = this->tangents->__get(i1).StaticCast<  ::h3d::col::Point >();
HXDLIN( 226)				fh5->z = (fh5->z + t->z);
HXLINE( 227)				 ::h3d::col::Point fh6 = this->tangents->__get(i2).StaticCast<  ::h3d::col::Point >();
HXDLIN( 227)				fh6->x = (fh6->x + t->x);
HXDLIN( 227)				 ::h3d::col::Point fh7 = this->tangents->__get(i2).StaticCast<  ::h3d::col::Point >();
HXDLIN( 227)				fh7->y = (fh7->y + t->y);
HXDLIN( 227)				 ::h3d::col::Point fh8 = this->tangents->__get(i2).StaticCast<  ::h3d::col::Point >();
HXDLIN( 227)				fh8->z = (fh8->z + t->z);
            			}
            		}
HXLINE( 229)		{
HXLINE( 229)			int _g4 = 0;
HXDLIN( 229)			::Array< ::Dynamic> _g5 = this->tangents;
HXDLIN( 229)			while((_g4 < _g5->length)){
HXLINE( 229)				 ::h3d::col::Point t = _g5->__get(_g4).StaticCast<  ::h3d::col::Point >();
HXDLIN( 229)				_g4 = (_g4 + 1);
HXLINE( 230)				{
HXLINE( 230)					Float k = (((t->x * t->x) + (t->y * t->y)) + (t->z * t->z));
HXDLIN( 230)					if ((k < ((Float)1e-10))) {
HXLINE(  75)						k = ( (Float)(0) );
            					}
            					else {
HXLINE(  75)						k = (((Float)1.) / ::Math_obj::sqrt(k));
            					}
HXLINE( 230)					 ::h3d::col::Point t1 = t;
HXDLIN( 230)					t1->x = (t1->x * k);
HXDLIN( 230)					 ::h3d::col::Point t2 = t;
HXDLIN( 230)					t2->y = (t2->y * k);
HXDLIN( 230)					 ::h3d::col::Point t3 = t;
HXDLIN( 230)					t3->z = (t3->z * k);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,addTangents,(void))

void Polygon_obj::addUVs(){
            	HX_GC_STACKFRAME(&_hx_pos_49e644f640801405_233_addUVs)
HXLINE( 234)		this->uvs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 235)		{
HXLINE( 235)			int _g = 0;
HXDLIN( 235)			int _g1 = this->points->length;
HXDLIN( 235)			while((_g < _g1)){
HXLINE( 235)				_g = (_g + 1);
HXDLIN( 235)				int i = (_g - 1);
HXLINE( 236)				this->uvs[i] =  ::h3d::prim::UV_obj::__alloc( HX_CTX ,this->points->__get(i).StaticCast<  ::h3d::col::Point >()->x,this->points->__get(i).StaticCast<  ::h3d::col::Point >()->y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,addUVs,(void))

void Polygon_obj::uvScale(Float su,Float sv){
            	HX_GC_STACKFRAME(&_hx_pos_49e644f640801405_239_uvScale)
HXLINE( 240)		if (::hx::IsNull( this->uvs )) {
HXLINE( 241)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Missing UVs",18,a1,c9,82)));
            		}
HXLINE( 242)		 ::haxe::ds::ObjectMap m =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 243)		{
HXLINE( 243)			int _g = 0;
HXDLIN( 243)			::Array< ::Dynamic> _g1 = this->uvs;
HXDLIN( 243)			while((_g < _g1->length)){
HXLINE( 243)				 ::h3d::prim::UV t = _g1->__get(_g).StaticCast<  ::h3d::prim::UV >();
HXDLIN( 243)				_g = (_g + 1);
HXLINE( 244)				if (m->exists(t)) {
HXLINE( 244)					continue;
            				}
HXLINE( 245)				m->set(t,true);
HXLINE( 246)				 ::h3d::prim::UV t1 = t;
HXDLIN( 246)				t1->u = (t1->u * su);
HXLINE( 247)				 ::h3d::prim::UV t2 = t;
HXDLIN( 247)				t2->v = (t2->v * sv);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Polygon_obj,uvScale,(void))

int Polygon_obj::triCount(){
            	HX_STACKFRAME(&_hx_pos_49e644f640801405_251_triCount)
HXLINE( 252)		int n = this->super::triCount();
HXLINE( 253)		if ((n != 0)) {
HXLINE( 254)			return n;
            		}
HXLINE( 255)		int _hx_tmp;
HXDLIN( 255)		if (::hx::IsNull( this->idx )) {
HXLINE( 255)			_hx_tmp = this->points->length;
            		}
            		else {
HXLINE( 255)			_hx_tmp = this->idx->length;
            		}
HXDLIN( 255)		return ::Std_obj::_hx_int((( (Float)(_hx_tmp) ) / ( (Float)(3) )));
            	}


int Polygon_obj::vertexCount(){
            	HX_STACKFRAME(&_hx_pos_49e644f640801405_259_vertexCount)
HXDLIN( 259)		return this->points->length;
            	}


::Dynamic Polygon_obj::getCollider(){
            	HX_GC_STACKFRAME(&_hx_pos_49e644f640801405_262_getCollider)
HXLINE( 263)		::Array< Float > this1 = ::Array_obj< Float >::__new((this->points->length * 3));
HXDLIN( 263)		::Array< Float > vertexes = this1;
HXLINE( 264)		::Array< int > this2 = ::Array_obj< int >::__new(this->idx->length);
HXDLIN( 264)		::Array< int > indexes = this2;
HXLINE( 265)		int vid = 0;
HXLINE( 266)		{
HXLINE( 266)			int _g = 0;
HXDLIN( 266)			::Array< ::Dynamic> _g1 = this->points;
HXDLIN( 266)			while((_g < _g1->length)){
HXLINE( 266)				 ::h3d::col::Point p = _g1->__get(_g).StaticCast<  ::h3d::col::Point >();
HXDLIN( 266)				_g = (_g + 1);
HXLINE( 267)				{
HXLINE( 267)					vid = (vid + 1);
HXDLIN( 267)					vertexes->__unsafe_set((vid - 1),p->x);
            				}
HXLINE( 268)				{
HXLINE( 268)					vid = (vid + 1);
HXDLIN( 268)					vertexes->__unsafe_set((vid - 1),p->y);
            				}
HXLINE( 269)				{
HXLINE( 269)					vid = (vid + 1);
HXDLIN( 269)					vertexes->__unsafe_set((vid - 1),p->z);
            				}
            			}
            		}
HXLINE( 271)		{
HXLINE( 271)			int _g2 = 0;
HXDLIN( 271)			int _g3 = this->idx->length;
HXDLIN( 271)			while((_g2 < _g3)){
HXLINE( 271)				_g2 = (_g2 + 1);
HXDLIN( 271)				int i = (_g2 - 1);
HXLINE( 272)				indexes->__unsafe_set(i,this->idx->__get(i));
            			}
            		}
HXLINE( 273)		 ::h3d::col::Polygon poly =  ::h3d::col::Polygon_obj::__alloc( HX_CTX );
HXLINE( 274)		poly->addBuffers(vertexes,indexes,null());
HXLINE( 275)		return poly;
            	}


void Polygon_obj::render( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_49e644f640801405_278_render)
HXLINE( 279)		bool _hx_tmp;
HXDLIN( 279)		if (::hx::IsNotNull( this->buffer )) {
HXLINE( 279)			 ::h3d::Buffer _this = this->buffer;
HXDLIN( 279)			if (::hx::IsNotNull( _this->buffer )) {
HXLINE( 279)				_hx_tmp = ::hx::IsNull( _this->buffer->vbuf );
            			}
            			else {
HXLINE( 279)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 279)			_hx_tmp = true;
            		}
HXDLIN( 279)		if (_hx_tmp) {
HXLINE( 280)			this->alloc(engine);
            		}
HXLINE( 281)		 ::h3d::BufferOffset bufs = this->getBuffers(engine);
HXLINE( 282)		if (::hx::IsNotNull( this->indexes )) {
HXLINE( 283)			engine->renderMultiBuffers(bufs,this->indexes,null(),null());
            		}
            		else {
HXLINE( 284)			int this1 = this->buffer->flags;
HXDLIN( 284)			if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::BufferFlag_obj::Quads_dyn()))) != 0)) {
HXLINE( 285)				 ::h3d::Indexes engine1 = engine->mem->quadIndexes;
HXDLIN( 285)				engine->renderMultiBuffers(bufs,engine1,0,this->triCount());
            			}
            			else {
HXLINE( 287)				 ::h3d::Indexes engine1 = engine->mem->triIndexes;
HXDLIN( 287)				engine->renderMultiBuffers(bufs,engine1,0,this->triCount());
            			}
            		}
            	}



::hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(::Array< ::Dynamic> points,::Array< int > idx) {
	::hx::ObjectPtr< Polygon_obj > __this = new Polygon_obj();
	__this->__construct(points,idx);
	return __this;
}

::hx::ObjectPtr< Polygon_obj > Polygon_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> points,::Array< int > idx) {
	Polygon_obj *__this = (Polygon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Polygon_obj), true, "h3d.prim.Polygon"));
	*(void **)__this = Polygon_obj::_hx_vtable;
	__this->__construct(points,idx);
	return __this;
}

Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(normals,"normals");
	HX_MARK_MEMBER_NAME(tangents,"tangents");
	HX_MARK_MEMBER_NAME(uvs,"uvs");
	HX_MARK_MEMBER_NAME(idx,"idx");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(scaled,"scaled");
	HX_MARK_MEMBER_NAME(translatedX,"translatedX");
	HX_MARK_MEMBER_NAME(translatedY,"translatedY");
	HX_MARK_MEMBER_NAME(translatedZ,"translatedZ");
	 ::h3d::prim::MeshPrimitive_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(normals,"normals");
	HX_VISIT_MEMBER_NAME(tangents,"tangents");
	HX_VISIT_MEMBER_NAME(uvs,"uvs");
	HX_VISIT_MEMBER_NAME(idx,"idx");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(scaled,"scaled");
	HX_VISIT_MEMBER_NAME(translatedX,"translatedX");
	HX_VISIT_MEMBER_NAME(translatedY,"translatedY");
	HX_VISIT_MEMBER_NAME(translatedZ,"translatedZ");
	 ::h3d::prim::MeshPrimitive_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Polygon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { return ::hx::Val( uvs ); }
		if (HX_FIELD_EQ(inName,"idx") ) { return ::hx::Val( idx ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return ::hx::Val( points ); }
		if (HX_FIELD_EQ(inName,"colors") ) { return ::hx::Val( colors ); }
		if (HX_FIELD_EQ(inName,"scaled") ) { return ::hx::Val( scaled ); }
		if (HX_FIELD_EQ(inName,"addUVs") ) { return ::hx::Val( addUVs_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normals") ) { return ::hx::Val( normals ); }
		if (HX_FIELD_EQ(inName,"unindex") ) { return ::hx::Val( unindex_dyn() ); }
		if (HX_FIELD_EQ(inName,"uvScale") ) { return ::hx::Val( uvScale_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tangents") ) { return ::hx::Val( tangents ); }
		if (HX_FIELD_EQ(inName,"triCount") ) { return ::hx::Val( triCount_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"translate") ) { return ::hx::Val( translate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addNormals") ) { return ::hx::Val( addNormals_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"translatedX") ) { return ::hx::Val( translatedX ); }
		if (HX_FIELD_EQ(inName,"translatedY") ) { return ::hx::Val( translatedY ); }
		if (HX_FIELD_EQ(inName,"translatedZ") ) { return ::hx::Val( translatedZ ); }
		if (HX_FIELD_EQ(inName,"addTangents") ) { return ::hx::Val( addTangents_dyn() ); }
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return ::hx::Val( vertexCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCollider") ) { return ::hx::Val( getCollider_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Polygon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { uvs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idx") ) { idx=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaled") ) { scaled=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normals") ) { normals=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tangents") ) { tangents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"translatedX") ) { translatedX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"translatedY") ) { translatedY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"translatedZ") ) { translatedZ=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("points",23,12,2e,f7));
	outFields->push(HX_("normals",6c,70,da,2b));
	outFields->push(HX_("tangents",0e,90,1b,39));
	outFields->push(HX_("uvs",f2,2e,59,00));
	outFields->push(HX_("idx",3d,04,50,00));
	outFields->push(HX_("colors",b0,c5,86,c6));
	outFields->push(HX_("scaled",9a,ea,25,3c));
	outFields->push(HX_("translatedX",42,1e,9f,8a));
	outFields->push(HX_("translatedY",43,1e,9f,8a));
	outFields->push(HX_("translatedZ",44,1e,9f,8a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Polygon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Polygon_obj,points),HX_("points",23,12,2e,f7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Polygon_obj,normals),HX_("normals",6c,70,da,2b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Polygon_obj,tangents),HX_("tangents",0e,90,1b,39)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Polygon_obj,uvs),HX_("uvs",f2,2e,59,00)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Polygon_obj,idx),HX_("idx",3d,04,50,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Polygon_obj,colors),HX_("colors",b0,c5,86,c6)},
	{::hx::fsFloat,(int)offsetof(Polygon_obj,scaled),HX_("scaled",9a,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Polygon_obj,translatedX),HX_("translatedX",42,1e,9f,8a)},
	{::hx::fsFloat,(int)offsetof(Polygon_obj,translatedY),HX_("translatedY",43,1e,9f,8a)},
	{::hx::fsFloat,(int)offsetof(Polygon_obj,translatedZ),HX_("translatedZ",44,1e,9f,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Polygon_obj_sStaticStorageInfo = 0;
#endif

static ::String Polygon_obj_sMemberFields[] = {
	HX_("points",23,12,2e,f7),
	HX_("normals",6c,70,da,2b),
	HX_("tangents",0e,90,1b,39),
	HX_("uvs",f2,2e,59,00),
	HX_("idx",3d,04,50,00),
	HX_("colors",b0,c5,86,c6),
	HX_("scaled",9a,ea,25,3c),
	HX_("translatedX",42,1e,9f,8a),
	HX_("translatedY",43,1e,9f,8a),
	HX_("translatedZ",44,1e,9f,8a),
	HX_("getBounds",ab,0f,74,e2),
	HX_("alloc",75,a4,93,21),
	HX_("unindex",19,92,a5,ba),
	HX_("translate",4e,d7,7f,49),
	HX_("scale",8a,ce,ce,78),
	HX_("addNormals",4b,9c,64,93),
	HX_("addTangents",4f,c7,77,6a),
	HX_("addUVs",71,23,0a,9f),
	HX_("uvScale",69,18,68,3b),
	HX_("triCount",a4,2f,74,48),
	HX_("vertexCount",cb,0e,9f,5e),
	HX_("getCollider",ea,a1,c9,ef),
	HX_("render",56,6b,29,05),
	::String(null()) };

::hx::Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	Polygon_obj _hx_dummy;
	Polygon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.prim.Polygon",a7,ea,0f,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Polygon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Polygon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polygon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polygon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace prim
