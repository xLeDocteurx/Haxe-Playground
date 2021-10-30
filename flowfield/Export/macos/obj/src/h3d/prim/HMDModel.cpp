#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_anim_Skin
#include <h3d/anim/Skin.h>
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_OptimizedCollider
#include <h3d/col/OptimizedCollider.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_col_PolygonBuffer
#include <h3d/col/PolygonBuffer.h>
#endif
#ifndef INCLUDED_h3d_col_Sphere
#include <h3d/col/Sphere.h>
#endif
#ifndef INCLUDED_h3d_impl_ManagedBuffer
#include <h3d/impl/ManagedBuffer.h>
#endif
#ifndef INCLUDED_h3d_prim_HMDModel
#include <h3d/prim/HMDModel.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Data
#include <hxd/fmt/hmd/Data.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Geometry
#include <hxd/fmt/hmd/Geometry.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_GeometryBuffer
#include <hxd/fmt/hmd/GeometryBuffer.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_GeometryFormat
#include <hxd/fmt/hmd/GeometryFormat.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Library
#include <hxd/fmt/hmd/Library.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Model
#include <hxd/fmt/hmd/Model.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_hxsl_Globals
#include <hxsl/Globals.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_3_new,"h3d.prim.HMDModel","new",0xe2e6240f,"h3d.prim.HMDModel.new","h3d/prim/HMDModel.hx",3,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_22_triCount,"h3d.prim.HMDModel","triCount",0x6c092195,"h3d.prim.HMDModel.triCount","h3d/prim/HMDModel.hx",22,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_26_vertexCount,"h3d.prim.HMDModel","vertexCount",0x9b43297a,"h3d.prim.HMDModel.vertexCount","h3d/prim/HMDModel.hx",26,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_30_getBounds,"h3d.prim.HMDModel","getBounds",0xe132d09a,"h3d.prim.HMDModel.getBounds","h3d/prim/HMDModel.hx",30,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_34_selectMaterial,"h3d.prim.HMDModel","selectMaterial",0x2eec0c74,"h3d.prim.HMDModel.selectMaterial","h3d/prim/HMDModel.hx",34,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_38_getDataBuffers,"h3d.prim.HMDModel","getDataBuffers",0x602ebe24,"h3d.prim.HMDModel.getDataBuffers","h3d/prim/HMDModel.hx",38,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_42_loadSkin,"h3d.prim.HMDModel","loadSkin",0xe089d9b4,"h3d.prim.HMDModel.loadSkin","h3d/prim/HMDModel.hx",42,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_45_addAlias,"h3d.prim.HMDModel","addAlias",0xbe8369a0,"h3d.prim.HMDModel.addAlias","h3d/prim/HMDModel.hx",45,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_56_alloc,"h3d.prim.HMDModel","alloc",0x8c2581e4,"h3d.prim.HMDModel.alloc","h3d/prim/HMDModel.hx",56,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_99_allocAlias,"h3d.prim.HMDModel","allocAlias",0x3563e50c,"h3d.prim.HMDModel.allocAlias","h3d/prim/HMDModel.hx",99,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_107_recomputeNormals,"h3d.prim.HMDModel","recomputeNormals",0x14375f99,"h3d.prim.HMDModel.recomputeNormals","h3d/prim/HMDModel.hx",107,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_155_render,"h3d.prim.HMDModel","render",0xda394f07,"h3d.prim.HMDModel.render","h3d/prim/HMDModel.hx",155,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_166_initCollider,"h3d.prim.HMDModel","initCollider",0x417fa4d5,"h3d.prim.HMDModel.initCollider","h3d/prim/HMDModel.hx",166,0xb35991e1)
HX_LOCAL_STACK_FRAME(_hx_pos_3ecad3ce5e68baf3_175_getCollider,"h3d.prim.HMDModel","getCollider",0x2c6dbc99,"h3d.prim.HMDModel.getCollider","h3d/prim/HMDModel.hx",175,0xb35991e1)
namespace h3d{
namespace prim{

void HMDModel_obj::__construct( ::hxd::fmt::hmd::Geometry data,int dataPos, ::hxd::fmt::hmd::Library lib){
            	HX_GC_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_3_new)
HXLINE(  13)		this->bufferAliases =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  15)		super::__construct();
HXLINE(  16)		this->data = data;
HXLINE(  17)		this->dataPosition = dataPos;
HXLINE(  18)		this->lib = lib;
            	}

Dynamic HMDModel_obj::__CreateEmpty() { return new HMDModel_obj; }

void *HMDModel_obj::_hx_vtable = 0;

Dynamic HMDModel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HMDModel_obj > _hx_result = new HMDModel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HMDModel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x52c84e9b) {
		if (inClassId<=(int)0x0948bf69) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0948bf69;
		} else {
			return inClassId==(int)0x52c84e9b;
		}
	} else {
		return inClassId==(int)0x566939c8;
	}
}

int HMDModel_obj::triCount(){
            	HX_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_22_triCount)
HXDLIN(  22)		return ::Std_obj::_hx_int((( (Float)(this->data->get_indexCount()) ) / ( (Float)(3) )));
            	}


int HMDModel_obj::vertexCount(){
            	HX_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_26_vertexCount)
HXDLIN(  26)		return this->data->vertexCount;
            	}


 ::h3d::col::Bounds HMDModel_obj::getBounds(){
            	HX_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_30_getBounds)
HXDLIN(  30)		return this->data->bounds;
            	}


void HMDModel_obj::selectMaterial(int i){
            	HX_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_34_selectMaterial)
HXDLIN(  34)		this->curMaterial = i;
            	}


 ::hxd::fmt::hmd::GeometryBuffer HMDModel_obj::getDataBuffers(::Array< ::Dynamic> fmt,::Array< ::Dynamic> defaults, ::Dynamic material){
            	HX_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_38_getDataBuffers)
HXDLIN(  38)		return this->lib->getBuffers(this->data,fmt,defaults,material);
            	}


HX_DEFINE_DYNAMIC_FUNC3(HMDModel_obj,getDataBuffers,return )

void HMDModel_obj::loadSkin( ::h3d::anim::Skin skin){
            	HX_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_42_loadSkin)
HXDLIN(  42)		this->lib->loadSkin(this->data,skin,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDModel_obj,loadSkin,(void))

void HMDModel_obj::addAlias(::String name,::String realName,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_45_addAlias)
HXLINE(  46)		 ::Dynamic old = this->bufferAliases->get(name);
HXLINE(  47)		if (::hx::IsNotNull( old )) {
HXLINE(  48)			bool _hx_tmp;
HXDLIN(  48)			if (::hx::IsEq( old->__Field(HX_("realName",c9,f0,2b,0c),::hx::paccDynamic),realName )) {
HXLINE(  48)				_hx_tmp = ::hx::IsNotEq( old->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic),offset );
            			}
            			else {
HXLINE(  48)				_hx_tmp = true;
            			}
HXDLIN(  48)			if (_hx_tmp) {
HXLINE(  48)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Conflicting alias ",00,a1,8c,0f) + name)));
            			}
HXLINE(  49)			return;
            		}
HXLINE(  51)		this->bufferAliases->set(name, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("realName",c9,f0,2b,0c),realName)
            			->setFixed(1,HX_("offset",93,97,3f,60),offset)));
HXLINE(  53)		if (::hx::IsNotNull( this->bufferCache )) {
HXLINE(  53)			this->allocAlias(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(HMDModel_obj,addAlias,(void))

void HMDModel_obj::alloc( ::h3d::Engine engine){
            	HX_GC_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_56_alloc)
HXLINE(  57)		this->dispose();
HXLINE(  58)		this->buffer =  ::h3d::Buffer_obj::__alloc( HX_CTX ,this->data->vertexCount,this->data->vertexStride,::Array_obj< ::Dynamic>::__new(1)->init(0,::h3d::BufferFlag_obj::LargeBuffer_dyn()));
HXLINE(  60)		 ::hxd::fs::FileEntry entry = this->lib->resource->entry;
HXLINE(  61)		entry->open();
HXLINE(  63)		entry->skip((this->dataPosition + this->data->vertexPosition));
HXLINE(  64)		int size = ((this->data->vertexCount * this->data->vertexStride) * 4);
HXLINE(  65)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(size);
HXLINE(  66)		entry->read(bytes,0,size);
HXLINE(  67)		this->buffer->uploadBytes(bytes,0,this->data->vertexCount);
HXLINE(  69)		this->indexCount = 0;
HXLINE(  70)		this->indexesTriPos = ::Array_obj< int >::__new(0);
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			::Array< int > _g1 = this->data->indexCounts;
HXDLIN(  71)			while((_g < _g1->length)){
HXLINE(  71)				int n = _g1->__get(_g);
HXDLIN(  71)				_g = (_g + 1);
HXLINE(  72)				::Array< int > _hx_tmp = this->indexesTriPos;
HXDLIN(  72)				_hx_tmp->push(::Std_obj::_hx_int((( (Float)(this->indexCount) ) / ( (Float)(3) ))));
HXLINE(  73)				 ::h3d::prim::HMDModel _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  73)				_hx_tmp1->indexCount = (_hx_tmp1->indexCount + n);
            			}
            		}
HXLINE(  75)		bool is32 = (this->data->vertexCount > 65536);
HXLINE(  76)		this->indexes =  ::h3d::Indexes_obj::__alloc( HX_CTX ,this->indexCount,is32);
HXLINE(  78)		entry->skip((this->data->indexPosition - (this->data->vertexPosition + size)));
HXLINE(  79)		int imult;
HXDLIN(  79)		if (is32) {
HXLINE(  79)			imult = 4;
            		}
            		else {
HXLINE(  79)			imult = 2;
            		}
HXLINE(  80)		 ::haxe::io::Bytes bytes1 = ::haxe::io::Bytes_obj::alloc((this->indexCount * imult));
HXLINE(  81)		entry->read(bytes1,0,(this->indexCount * imult));
HXLINE(  82)		this->indexes->uploadBytes(bytes1,0,this->indexCount);
HXLINE(  84)		entry->close();
HXLINE(  86)		int pos = 0;
HXLINE(  87)		{
HXLINE(  87)			int _g2 = 0;
HXDLIN(  87)			::Array< ::Dynamic> _g3 = this->data->vertexFormat;
HXDLIN(  87)			while((_g2 < _g3->length)){
HXLINE(  87)				 ::hxd::fmt::hmd::GeometryFormat f = _g3->__get(_g2).StaticCast<  ::hxd::fmt::hmd::GeometryFormat >();
HXDLIN(  87)				_g2 = (_g2 + 1);
HXLINE(  88)				this->addBuffer(f->name,this->buffer,pos);
HXLINE(  89)				pos = (pos + (f->format & 7));
            			}
            		}
HXLINE(  92)		if (::hx::IsNotNull( this->normalsRecomputed )) {
HXLINE(  93)			this->recomputeNormals(this->normalsRecomputed);
            		}
HXLINE(  95)		{
HXLINE(  95)			 ::Dynamic name = this->bufferAliases->keys();
HXDLIN(  95)			while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  95)				::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  96)				this->allocAlias(name1);
            			}
            		}
            	}


void HMDModel_obj::allocAlias(::String name){
            	HX_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_99_allocAlias)
HXLINE( 100)		 ::Dynamic alias = this->bufferAliases->get(name);
HXLINE( 101)		::Dynamic this1 = this->bufferCache;
HXDLIN( 101)		 ::h3d::BufferOffset buffer = ( ( ::h3d::BufferOffset)(( ( ::haxe::ds::IntMap)(this1) )->get(::hxsl::Globals_obj::allocID(( (::String)(alias->__Field(HX_("realName",c9,f0,2b,0c),::hx::paccDynamic)) )))) );
HXLINE( 102)		if (::hx::IsNull( buffer )) {
HXLINE( 102)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((((HX_("Buffer ",00,cb,e1,7e) + alias->__Field(HX_("realName",c9,f0,2b,0c),::hx::paccDynamic)) + HX_(" not found for alias ",b2,bb,f9,c8)) + name))));
            		}
HXLINE( 103)		if (::hx::IsGreater( (buffer->offset + alias->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)),buffer->buffer->buffer->stride )) {
HXLINE( 103)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic(((((HX_("Alias ",b0,80,2a,72) + name) + HX_(" for buffer ",e9,12,36,b8)) + alias->__Field(HX_("realName",c9,f0,2b,0c),::hx::paccDynamic)) + HX_(" outside stride",d4,81,da,b1)))));
            		}
HXLINE( 104)		this->addBuffer(name,buffer->buffer,(buffer->offset + alias->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDModel_obj,allocAlias,(void))

void HMDModel_obj::recomputeNormals(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_107_recomputeNormals)
HXLINE( 109)		if (::hx::IsNull( name )) {
HXLINE( 109)			name = HX_("normal",27,72,69,30);
            		}
HXLINE( 111)		 ::hxd::fmt::hmd::Library pos = this->lib;
HXDLIN( 111)		 ::hxd::fmt::hmd::Geometry pos1 = this->data;
HXDLIN( 111)		 ::hxd::fmt::hmd::GeometryBuffer pos2 = pos->getBuffers(pos1,::Array_obj< ::Dynamic>::__new(1)->init(0, ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,HX_("position",a9,a0,fa,ca),3)),null(),null());
HXLINE( 112)		::Array< int > ids = ::Array_obj< int >::__new();
HXLINE( 113)		::Array< ::Dynamic> pts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 115)		{
HXLINE( 115)			int _g = 0;
HXDLIN( 115)			int _g1 = this->data->vertexCount;
HXDLIN( 115)			while((_g < _g1)){
HXLINE( 115)				_g = (_g + 1);
HXDLIN( 115)				int i = (_g - 1);
HXLINE( 116)				bool added = false;
HXLINE( 117)				Float px = ( (Float)(_hx_array_unsafe_get(pos2->vertexes,(i * 3))) );
HXLINE( 118)				Float py = ( (Float)(_hx_array_unsafe_get(pos2->vertexes,((i * 3) + 1))) );
HXLINE( 119)				Float pz = ( (Float)(_hx_array_unsafe_get(pos2->vertexes,((i * 3) + 2))) );
HXLINE( 120)				{
HXLINE( 120)					int _g1 = 0;
HXDLIN( 120)					int _g2 = pts->length;
HXDLIN( 120)					while((_g1 < _g2)){
HXLINE( 120)						_g1 = (_g1 + 1);
HXDLIN( 120)						int i = (_g1 - 1);
HXLINE( 121)						 ::h3d::col::Point p = pts->__get(i).StaticCast<  ::h3d::col::Point >();
HXLINE( 122)						bool _hx_tmp;
HXDLIN( 122)						bool _hx_tmp1;
HXDLIN( 122)						if ((p->x == px)) {
HXLINE( 122)							_hx_tmp1 = (p->y == py);
            						}
            						else {
HXLINE( 122)							_hx_tmp1 = false;
            						}
HXDLIN( 122)						if (_hx_tmp1) {
HXLINE( 122)							_hx_tmp = (p->z == pz);
            						}
            						else {
HXLINE( 122)							_hx_tmp = false;
            						}
HXDLIN( 122)						if (_hx_tmp) {
HXLINE( 123)							ids->push(i);
HXLINE( 124)							added = true;
HXLINE( 125)							goto _hx_goto_14;
            						}
            					}
            					_hx_goto_14:;
            				}
HXLINE( 128)				if (!(added)) {
HXLINE( 129)					ids->push(pts->length);
HXLINE( 130)					pts->push( ::h3d::col::Point_obj::__alloc( HX_CTX ,px,py,pz));
            				}
            			}
            		}
HXLINE( 134)		int length = 0;
HXDLIN( 134)		::Array< int > this1 = ::Array_obj< int >::__new();
HXDLIN( 134)		if ((length > 0)) {
HXLINE( 134)			if ((length > this1->length)) {
HXLINE( 134)				this1[(length - 1)] = 0;
            			}
            		}
HXDLIN( 134)		::Array< int > idx = this1;
HXLINE( 135)		{
HXLINE( 135)			int _g2 = 0;
HXDLIN( 135)			::Array< int > _g3 = pos2->indexes;
HXDLIN( 135)			while((_g2 < _g3->length)){
HXLINE( 135)				int i = ( (int)(_hx_array_unsafe_get(_g3,_g2)) );
HXDLIN( 135)				_g2 = (_g2 + 1);
HXLINE( 136)				idx->push(ids->__get(i));
            			}
            		}
HXLINE( 138)		 ::h3d::prim::Polygon pol =  ::h3d::prim::Polygon_obj::__alloc( HX_CTX ,pts,idx);
HXLINE( 139)		pol->addNormals();
HXLINE( 141)		int length1 = 0;
HXDLIN( 141)		::Array< Float > this2 = ::Array_obj< Float >::__new();
HXDLIN( 141)		if ((length1 > 0)) {
HXLINE( 141)			if ((length1 > this2->length)) {
HXLINE( 141)				this2[(length1 - 1)] = ((Float)0.);
            			}
            		}
HXDLIN( 141)		::Array< Float > v = this2;
HXLINE( 142)		{
HXLINE( 142)			int v1 = (this->data->vertexCount * 3);
HXDLIN( 142)			if ((v1 > v->length)) {
HXLINE( 142)				v[(v1 - 1)] = ((Float)0.);
            			}
            		}
HXLINE( 143)		int k = 0;
HXLINE( 144)		{
HXLINE( 144)			int _g4 = 0;
HXDLIN( 144)			int _g5 = this->data->vertexCount;
HXDLIN( 144)			while((_g4 < _g5)){
HXLINE( 144)				_g4 = (_g4 + 1);
HXDLIN( 144)				int i = (_g4 - 1);
HXLINE( 145)				 ::h3d::col::Point n = pol->normals->__get(ids->__get(i)).StaticCast<  ::h3d::col::Point >();
HXLINE( 146)				{
HXLINE( 146)					k = (k + 1);
HXDLIN( 146)					v[(k - 1)] = n->x;
            				}
HXLINE( 147)				{
HXLINE( 147)					k = (k + 1);
HXDLIN( 147)					v[(k - 1)] = n->y;
            				}
HXLINE( 148)				{
HXLINE( 148)					k = (k + 1);
HXDLIN( 148)					v[(k - 1)] = n->z;
            				}
            			}
            		}
HXLINE( 150)		 ::h3d::Buffer buf = ::h3d::Buffer_obj::ofFloats(v,3,null());
HXLINE( 151)		this->addBuffer(name,buf,0);
HXLINE( 152)		this->normalsRecomputed = name;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDModel_obj,recomputeNormals,(void))

void HMDModel_obj::render( ::h3d::Engine engine){
            	HX_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_155_render)
HXLINE( 156)		if ((this->curMaterial < 0)) {
HXLINE( 157)			this->super::render(engine);
HXLINE( 158)			return;
            		}
HXLINE( 160)		bool _hx_tmp;
HXDLIN( 160)		if (::hx::IsNotNull( this->indexes )) {
HXLINE( 160)			_hx_tmp = this->indexes->isDisposed();
            		}
            		else {
HXLINE( 160)			_hx_tmp = true;
            		}
HXDLIN( 160)		if (_hx_tmp) {
HXLINE( 161)			this->alloc(engine);
            		}
HXLINE( 162)		 ::h3d::BufferOffset _hx_tmp1 = this->getBuffers(engine);
HXDLIN( 162)		 ::h3d::Indexes _hx_tmp2 = this->indexes;
HXDLIN( 162)		int _hx_tmp3 = this->indexesTriPos->__get(this->curMaterial);
HXDLIN( 162)		engine->renderMultiBuffers(_hx_tmp1,_hx_tmp2,_hx_tmp3,::Std_obj::_hx_int((( (Float)(this->data->indexCounts->__get(this->curMaterial)) ) / ( (Float)(3) ))));
HXLINE( 163)		this->curMaterial = -1;
            	}


void HMDModel_obj::initCollider( ::h3d::col::PolygonBuffer poly){
            	HX_GC_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_166_initCollider)
HXLINE( 167)		 ::hxd::fmt::hmd::Library buf = this->lib;
HXDLIN( 167)		 ::hxd::fmt::hmd::Geometry buf1 = this->data;
HXDLIN( 167)		 ::hxd::fmt::hmd::GeometryBuffer buf2 = buf->getBuffers(buf1,::Array_obj< ::Dynamic>::__new(1)->init(0, ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,HX_("position",a9,a0,fa,ca),3)),null(),null());
HXLINE( 168)		poly->setData(buf2->vertexes,buf2->indexes,null(),null());
HXLINE( 169)		if (::hx::IsNull( this->collider )) {
HXLINE( 170)			 ::h3d::col::Bounds _this = this->data->bounds;
HXDLIN( 170)			Float dx = (_this->xMax - _this->xMin);
HXDLIN( 170)			Float dy = (_this->yMax - _this->yMin);
HXDLIN( 170)			Float dz = (_this->zMax - _this->zMin);
HXDLIN( 170)			 ::h3d::col::Sphere sphere =  ::h3d::col::Sphere_obj::__alloc( HX_CTX ,((_this->xMin + _this->xMax) * ((Float)0.5)),((_this->yMin + _this->yMax) * ((Float)0.5)),((_this->zMin + _this->zMax) * ((Float)0.5)),(::Math_obj::sqrt((((dx * dx) + (dy * dy)) + (dz * dz))) * ((Float)0.5)));
HXLINE( 171)			this->collider =  ::h3d::col::OptimizedCollider_obj::__alloc( HX_CTX ,sphere,poly);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDModel_obj,initCollider,(void))

::Dynamic HMDModel_obj::getCollider(){
            	HX_GC_STACKFRAME(&_hx_pos_3ecad3ce5e68baf3_175_getCollider)
HXLINE( 176)		if (::hx::IsNotNull( this->collider )) {
HXLINE( 177)			return this->collider;
            		}
HXLINE( 178)		 ::h3d::col::PolygonBuffer poly =  ::h3d::col::PolygonBuffer_obj::__alloc( HX_CTX );
HXLINE( 179)		poly->source =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("geometryName",1d,e2,7d,59),null())
            			->setFixed(1,HX_("entry",72,78,86,70),this->lib->resource->entry));
HXLINE( 183)		{
HXLINE( 183)			int _g = 0;
HXDLIN( 183)			::Array< ::Dynamic> _g1 = this->lib->header->models;
HXDLIN( 183)			while((_g < _g1->length)){
HXLINE( 183)				 ::hxd::fmt::hmd::Model h = _g1->__get(_g).StaticCast<  ::hxd::fmt::hmd::Model >();
HXDLIN( 183)				_g = (_g + 1);
HXLINE( 184)				if (::hx::IsInstanceEq( this->lib->header->geometries->__get(h->geometry).StaticCast<  ::hxd::fmt::hmd::Geometry >(),this->data )) {
HXLINE( 185)					poly->source->__SetField(HX_("geometryName",1d,e2,7d,59),h->name,::hx::paccDynamic);
HXLINE( 186)					goto _hx_goto_20;
            				}
            			}
            			_hx_goto_20:;
            		}
HXLINE( 188)		this->initCollider(poly);
HXLINE( 189)		return this->collider;
            	}



::hx::ObjectPtr< HMDModel_obj > HMDModel_obj::__new( ::hxd::fmt::hmd::Geometry data,int dataPos, ::hxd::fmt::hmd::Library lib) {
	::hx::ObjectPtr< HMDModel_obj > __this = new HMDModel_obj();
	__this->__construct(data,dataPos,lib);
	return __this;
}

::hx::ObjectPtr< HMDModel_obj > HMDModel_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fmt::hmd::Geometry data,int dataPos, ::hxd::fmt::hmd::Library lib) {
	HMDModel_obj *__this = (HMDModel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HMDModel_obj), true, "h3d.prim.HMDModel"));
	*(void **)__this = HMDModel_obj::_hx_vtable;
	__this->__construct(data,dataPos,lib);
	return __this;
}

HMDModel_obj::HMDModel_obj()
{
}

void HMDModel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HMDModel);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataPosition,"dataPosition");
	HX_MARK_MEMBER_NAME(indexCount,"indexCount");
	HX_MARK_MEMBER_NAME(indexesTriPos,"indexesTriPos");
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_MEMBER_NAME(curMaterial,"curMaterial");
	HX_MARK_MEMBER_NAME(collider,"collider");
	HX_MARK_MEMBER_NAME(normalsRecomputed,"normalsRecomputed");
	HX_MARK_MEMBER_NAME(bufferAliases,"bufferAliases");
	 ::h3d::prim::MeshPrimitive_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HMDModel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataPosition,"dataPosition");
	HX_VISIT_MEMBER_NAME(indexCount,"indexCount");
	HX_VISIT_MEMBER_NAME(indexesTriPos,"indexesTriPos");
	HX_VISIT_MEMBER_NAME(lib,"lib");
	HX_VISIT_MEMBER_NAME(curMaterial,"curMaterial");
	HX_VISIT_MEMBER_NAME(collider,"collider");
	HX_VISIT_MEMBER_NAME(normalsRecomputed,"normalsRecomputed");
	HX_VISIT_MEMBER_NAME(bufferAliases,"bufferAliases");
	 ::h3d::prim::MeshPrimitive_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HMDModel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return ::hx::Val( lib ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return ::hx::Val( collider ); }
		if (HX_FIELD_EQ(inName,"triCount") ) { return ::hx::Val( triCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadSkin") ) { return ::hx::Val( loadSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAlias") ) { return ::hx::Val( addAlias_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexCount") ) { return ::hx::Val( indexCount ); }
		if (HX_FIELD_EQ(inName,"allocAlias") ) { return ::hx::Val( allocAlias_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curMaterial") ) { return ::hx::Val( curMaterial ); }
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return ::hx::Val( vertexCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCollider") ) { return ::hx::Val( getCollider_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataPosition") ) { return ::hx::Val( dataPosition ); }
		if (HX_FIELD_EQ(inName,"initCollider") ) { return ::hx::Val( initCollider_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexesTriPos") ) { return ::hx::Val( indexesTriPos ); }
		if (HX_FIELD_EQ(inName,"bufferAliases") ) { return ::hx::Val( bufferAliases ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectMaterial") ) { return ::hx::Val( selectMaterial_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDataBuffers") ) { return ::hx::Val( getDataBuffers_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"recomputeNormals") ) { return ::hx::Val( recomputeNormals_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"normalsRecomputed") ) { return ::hx::Val( normalsRecomputed ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HMDModel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast<  ::hxd::fmt::hmd::Library >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::hxd::fmt::hmd::Geometry >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexCount") ) { indexCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curMaterial") ) { curMaterial=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataPosition") ) { dataPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexesTriPos") ) { indexesTriPos=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferAliases") ) { bufferAliases=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"normalsRecomputed") ) { normalsRecomputed=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HMDModel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("dataPosition",f3,ec,f0,36));
	outFields->push(HX_("indexCount",5d,b8,56,1a));
	outFields->push(HX_("indexesTriPos",49,49,f9,af));
	outFields->push(HX_("lib",45,4f,52,00));
	outFields->push(HX_("curMaterial",47,1e,e4,71));
	outFields->push(HX_("collider",34,df,d5,c9));
	outFields->push(HX_("normalsRecomputed",4c,c3,fa,43));
	outFields->push(HX_("bufferAliases",de,38,33,db));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HMDModel_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::fmt::hmd::Geometry */ ,(int)offsetof(HMDModel_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(HMDModel_obj,dataPosition),HX_("dataPosition",f3,ec,f0,36)},
	{::hx::fsInt,(int)offsetof(HMDModel_obj,indexCount),HX_("indexCount",5d,b8,56,1a)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(HMDModel_obj,indexesTriPos),HX_("indexesTriPos",49,49,f9,af)},
	{::hx::fsObject /*  ::hxd::fmt::hmd::Library */ ,(int)offsetof(HMDModel_obj,lib),HX_("lib",45,4f,52,00)},
	{::hx::fsInt,(int)offsetof(HMDModel_obj,curMaterial),HX_("curMaterial",47,1e,e4,71)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(HMDModel_obj,collider),HX_("collider",34,df,d5,c9)},
	{::hx::fsString,(int)offsetof(HMDModel_obj,normalsRecomputed),HX_("normalsRecomputed",4c,c3,fa,43)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(HMDModel_obj,bufferAliases),HX_("bufferAliases",de,38,33,db)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HMDModel_obj_sStaticStorageInfo = 0;
#endif

static ::String HMDModel_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("dataPosition",f3,ec,f0,36),
	HX_("indexCount",5d,b8,56,1a),
	HX_("indexesTriPos",49,49,f9,af),
	HX_("lib",45,4f,52,00),
	HX_("curMaterial",47,1e,e4,71),
	HX_("collider",34,df,d5,c9),
	HX_("normalsRecomputed",4c,c3,fa,43),
	HX_("bufferAliases",de,38,33,db),
	HX_("triCount",a4,2f,74,48),
	HX_("vertexCount",cb,0e,9f,5e),
	HX_("getBounds",ab,0f,74,e2),
	HX_("selectMaterial",c3,8f,d7,49),
	HX_("getDataBuffers",73,41,1a,7b),
	HX_("loadSkin",c3,e7,f4,bc),
	HX_("addAlias",af,77,ee,9a),
	HX_("alloc",75,a4,93,21),
	HX_("allocAlias",db,d4,39,4d),
	HX_("recomputeNormals",a8,94,85,63),
	HX_("render",56,6b,29,05),
	HX_("initCollider",64,66,8c,6e),
	HX_("getCollider",ea,a1,c9,ef),
	::String(null()) };

::hx::Class HMDModel_obj::__mClass;

void HMDModel_obj::__register()
{
	HMDModel_obj _hx_dummy;
	HMDModel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.prim.HMDModel",9d,70,c9,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HMDModel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HMDModel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HMDModel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HMDModel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace prim
