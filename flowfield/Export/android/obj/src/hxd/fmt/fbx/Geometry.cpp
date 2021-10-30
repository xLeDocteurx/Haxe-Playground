#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_BaseLibrary
#include <hxd/fmt/fbx/BaseLibrary.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_FbxProp
#include <hxd/fmt/fbx/FbxProp.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_FbxTools
#include <hxd/fmt/fbx/FbxTools.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_Geometry
#include <hxd/fmt/fbx/Geometry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d433ae103b5a94fd_9_new,"hxd.fmt.fbx.Geometry","new",0xb77a2c51,"hxd.fmt.fbx.Geometry.new","hxd/fmt/fbx/Geometry.hx",9,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_15_getRoot,"hxd.fmt.fbx.Geometry","getRoot",0x9ab34649,"hxd.fmt.fbx.Geometry.getRoot","hxd/fmt/fbx/Geometry.hx",15,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_19_getVertices,"hxd.fmt.fbx.Geometry","getVertices",0x42c6b7a0,"hxd.fmt.fbx.Geometry.getVertices","hxd/fmt/fbx/Geometry.hx",19,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_23_getPolygons,"hxd.fmt.fbx.Geometry","getPolygons",0x05022060,"hxd.fmt.fbx.Geometry.getPolygons","hxd/fmt/fbx/Geometry.hx",23,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_26_getMaterials,"hxd.fmt.fbx.Geometry","getMaterials",0x62337065,"hxd.fmt.fbx.Geometry.getMaterials","hxd/fmt/fbx/Geometry.hx",26,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_31_getMaterialByTriangle,"hxd.fmt.fbx.Geometry","getMaterialByTriangle",0xfe9105ad,"hxd.fmt.fbx.Geometry.getMaterialByTriangle","hxd/fmt/fbx/Geometry.hx",31,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_48_merge,"hxd.fmt.fbx.Geometry","merge",0x98309ce9,"hxd.fmt.fbx.Geometry.merge","hxd/fmt/fbx/Geometry.hx",48,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_148_getIndexes,"hxd.fmt.fbx.Geometry","getIndexes",0x10c95639,"hxd.fmt.fbx.Geometry.getIndexes","hxd/fmt/fbx/Geometry.hx",148,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_173_getNormals,"hxd.fmt.fbx.Geometry","getNormals",0x5be46aa5,"hxd.fmt.fbx.Geometry.getNormals","hxd/fmt/fbx/Geometry.hx",173,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_177_getTangents,"hxd.fmt.fbx.Geometry","getTangents",0x11cc87b5,"hxd.fmt.fbx.Geometry.getTangents","hxd/fmt/fbx/Geometry.hx",177,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_181_getBinormals,"hxd.fmt.fbx.Geometry","getBinormals",0x241d2bfe,"hxd.fmt.fbx.Geometry.getBinormals","hxd/fmt/fbx/Geometry.hx",181,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_184_processVectors,"hxd.fmt.fbx.Geometry","processVectors",0x6cc2f350,"hxd.fmt.fbx.Geometry.processVectors","hxd/fmt/fbx/Geometry.hx",184,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_204_getColors,"hxd.fmt.fbx.Geometry","getColors",0x216eb597,"hxd.fmt.fbx.Geometry.getColors","hxd/fmt/fbx/Geometry.hx",204,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_212_getUVs,"hxd.fmt.fbx.Geometry","getUVs",0x2d793ccb,"hxd.fmt.fbx.Geometry.getUVs","hxd/fmt/fbx/Geometry.hx",212,0xdd35c39c)
HX_LOCAL_STACK_FRAME(_hx_pos_d433ae103b5a94fd_227_getGeomMatrix,"hxd.fmt.fbx.Geometry","getGeomMatrix",0x29afcd84,"hxd.fmt.fbx.Geometry.getGeomMatrix","hxd/fmt/fbx/Geometry.hx",227,0xdd35c39c)
namespace hxd{
namespace fmt{
namespace fbx{

void Geometry_obj::__construct( ::hxd::fmt::fbx::BaseLibrary l, ::Dynamic root){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_9_new)
HXLINE(  10)		this->lib = l;
HXLINE(  11)		this->root = root;
            	}

Dynamic Geometry_obj::__CreateEmpty() { return new Geometry_obj; }

void *Geometry_obj::_hx_vtable = 0;

Dynamic Geometry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Geometry_obj > _hx_result = new Geometry_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Geometry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x670d526d;
}

 ::Dynamic Geometry_obj::getRoot(){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_15_getRoot)
HXDLIN(  15)		return this->root;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getRoot,return )

::Array< Float > Geometry_obj::getVertices(){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_19_getVertices)
HXDLIN(  19)		return ::hxd::fmt::fbx::FbxTools_obj::getFloats(::hxd::fmt::fbx::FbxTools_obj::get(this->root,HX_("Vertices",19,7c,c7,43),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getVertices,return )

::Array< int > Geometry_obj::getPolygons(){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_23_getPolygons)
HXDLIN(  23)		return ::hxd::fmt::fbx::FbxTools_obj::getInts(::hxd::fmt::fbx::FbxTools_obj::get(this->root,HX_("PolygonVertexIndex",d4,9c,29,83),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getPolygons,return )

::Array< int > Geometry_obj::getMaterials(){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_26_getMaterials)
HXLINE(  27)		 ::Dynamic mats = ::hxd::fmt::fbx::FbxTools_obj::get(this->root,HX_("LayerElementMaterial",d2,88,94,02),true);
HXLINE(  28)		if (::hx::IsNull( mats )) {
HXLINE(  28)			return null();
            		}
            		else {
HXLINE(  28)			return ::hxd::fmt::fbx::FbxTools_obj::getInts(::hxd::fmt::fbx::FbxTools_obj::get(mats,HX_("Materials",cc,95,de,41),null()));
            		}
HXDLIN(  28)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getMaterials,return )

::Array< int > Geometry_obj::getMaterialByTriangle(){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_31_getMaterialByTriangle)
HXLINE(  32)		::Array< int > mids = this->getMaterials();
HXLINE(  33)		int pos = 0;
HXLINE(  34)		int count = 0;
HXLINE(  35)		::Array< int > mats = ::Array_obj< int >::__new(0);
HXLINE(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			::Array< int > _g1 = this->getPolygons();
HXDLIN(  36)			while((_g < _g1->length)){
HXLINE(  36)				int p = _g1->__get(_g);
HXDLIN(  36)				_g = (_g + 1);
HXLINE(  37)				count = (count + 1);
HXLINE(  38)				if ((p >= 0)) {
HXLINE(  39)					continue;
            				}
HXLINE(  40)				pos = (pos + 1);
HXDLIN(  40)				int m = mids->__get((pos - 1));
HXLINE(  41)				{
HXLINE(  41)					int _g2 = 0;
HXDLIN(  41)					int _g3 = (count - 2);
HXDLIN(  41)					while((_g2 < _g3)){
HXLINE(  41)						_g2 = (_g2 + 1);
HXDLIN(  41)						int i = (_g2 - 1);
HXLINE(  42)						mats->push(m);
            					}
            				}
HXLINE(  43)				count = 0;
            			}
            		}
HXLINE(  45)		return mats;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getMaterialByTriangle,return )

void Geometry_obj::merge( ::hxd::fmt::fbx::Geometry g,::Array< int > materials){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_48_merge)
HXLINE(  49)		::Array< Float > vl = this->getVertices();
HXLINE(  50)		int vcount = ::Std_obj::_hx_int((( (Float)(vl->length) ) / ( (Float)(3) )));
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if (::hx::IsNull( g->getGeomMatrix() )) {
HXLINE(  51)			_hx_tmp = ::hx::IsNotNull( this->getGeomMatrix() );
            		}
            		else {
HXLINE(  51)			_hx_tmp = true;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  52)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot merge models with geometric transform",04,c5,9c,d9)));
            		}
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			::Array< Float > _g1 = g->getVertices();
HXDLIN(  55)			while((_g < _g1->length)){
HXLINE(  55)				Float v = _g1->__get(_g);
HXDLIN(  55)				_g = (_g + 1);
HXLINE(  56)				vl->push(v);
            			}
            		}
HXLINE(  58)		::Array< int > poly = this->getPolygons();
HXLINE(  59)		::Array< int > mats = this->getMaterials();
HXLINE(  62)		bool _hx_tmp1;
HXDLIN(  62)		if ((mats->length == 1)) {
HXLINE(  62)			_hx_tmp1 = (::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(::hxd::fmt::fbx::FbxTools_obj::get(this->root,HX_("LayerElementMaterial.MappingInformationType",14,24,50,55),null())->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == HX_("AllSame",07,75,eb,23));
            		}
            		else {
HXLINE(  62)			_hx_tmp1 = false;
            		}
HXDLIN(  62)		if (_hx_tmp1) {
HXLINE(  63)			int polyCount = 0;
HXLINE(  64)			{
HXLINE(  64)				int _g = 0;
HXDLIN(  64)				while((_g < poly->length)){
HXLINE(  64)					int p = poly->__get(_g);
HXDLIN(  64)					_g = (_g + 1);
HXLINE(  65)					if ((p < 0)) {
HXLINE(  65)						polyCount = (polyCount + 1);
            					}
            				}
            			}
HXLINE(  66)			int m0 = mats->__get(0);
HXLINE(  67)			{
HXLINE(  67)				int _g1 = 1;
HXDLIN(  67)				int _g2 = polyCount;
HXDLIN(  67)				while((_g1 < _g2)){
HXLINE(  67)					_g1 = (_g1 + 1);
HXDLIN(  67)					int i = (_g1 - 1);
HXLINE(  68)					mats->push(m0);
            				}
            			}
            		}
HXLINE(  72)		int polyCount = 0;
HXLINE(  73)		{
HXLINE(  73)			int _g2 = 0;
HXDLIN(  73)			::Array< int > _g3 = g->getPolygons();
HXDLIN(  73)			while((_g2 < _g3->length)){
HXLINE(  73)				int p = _g3->__get(_g2);
HXDLIN(  73)				_g2 = (_g2 + 1);
HXLINE(  74)				int p1 = p;
HXLINE(  75)				if ((p1 < 0)) {
HXLINE(  76)					polyCount = (polyCount + 1);
HXLINE(  77)					p1 = (p1 - vcount);
            				}
            				else {
HXLINE(  79)					p1 = (p1 + vcount);
            				}
HXLINE(  81)				poly->push(p1);
            			}
            		}
HXLINE(  85)		::Array< Float > normals = this->getNormals();
HXLINE(  86)		{
HXLINE(  86)			int _g4 = 0;
HXDLIN(  86)			::Array< Float > _g5 = g->getNormals();
HXDLIN(  86)			while((_g4 < _g5->length)){
HXLINE(  86)				Float n = _g5->__get(_g4);
HXDLIN(  86)				_g4 = (_g4 + 1);
HXLINE(  87)				normals->push(n);
            			}
            		}
HXLINE(  90)		::Array< ::Dynamic> uv = this->getUVs();
HXLINE(  91)		::Array< ::Dynamic> uv2 = g->getUVs();
HXLINE(  92)		if ((uv->length != uv2->length)) {
HXLINE(  93)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Different UV layer (",c1,f0,22,80) + uv2->length) + HX_(" should be ",b0,2e,91,d5)) + uv->length) + HX_(")",29,00,00,00))));
            		}
HXLINE(  94)		{
HXLINE(  94)			int _g6 = 0;
HXDLIN(  94)			int _g7 = uv->length;
HXDLIN(  94)			while((_g6 < _g7)){
HXLINE(  94)				_g6 = (_g6 + 1);
HXDLIN(  94)				int i = (_g6 - 1);
HXLINE(  95)				 ::Dynamic uv1 = uv->__get(i);
HXLINE(  96)				 ::Dynamic uv21 = uv2->__get(i);
HXLINE(  97)				int count = (( (::Array< Float >)(uv1->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->length >> 1);
HXLINE(  98)				{
HXLINE(  98)					int _g = 0;
HXDLIN(  98)					::Array< Float > _g1 = ( (::Array< Float >)(uv21->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN(  98)					while((_g < _g1->length)){
HXLINE(  98)						Float v = _g1->__get(_g);
HXDLIN(  98)						_g = (_g + 1);
HXLINE(  99)						( (::Array< Float >)(uv1->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(v);
            					}
            				}
HXLINE( 100)				{
HXLINE( 100)					int _g2 = 0;
HXDLIN( 100)					::Array< int > _g3 = ( (::Array< int >)(uv21->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) );
HXDLIN( 100)					while((_g2 < _g3->length)){
HXLINE( 100)						int i = _g3->__get(_g2);
HXDLIN( 100)						_g2 = (_g2 + 1);
HXLINE( 101)						( (::Array< int >)(uv1->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) )->push((i + count));
            					}
            				}
            			}
            		}
HXLINE( 105)		 ::Dynamic colors = this->getColors();
HXLINE( 106)		 ::Dynamic colors2 = g->getColors();
HXLINE( 107)		if (::hx::IsNotNull( colors )) {
HXLINE( 108)			if (::hx::IsNotNull( colors2 )) {
HXLINE( 109)				int count = (( (::Array< Float >)(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->length >> 2);
HXLINE( 110)				{
HXLINE( 110)					int _g = 0;
HXDLIN( 110)					::Array< Float > _g1 = ( (::Array< Float >)(colors2->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 110)					while((_g < _g1->length)){
HXLINE( 110)						Float v = _g1->__get(_g);
HXDLIN( 110)						_g = (_g + 1);
HXLINE( 111)						( (::Array< Float >)(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(v);
            					}
            				}
HXLINE( 112)				{
HXLINE( 112)					int _g2 = 0;
HXDLIN( 112)					::Array< int > _g3 = ( (::Array< int >)(colors2->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) );
HXDLIN( 112)					while((_g2 < _g3->length)){
HXLINE( 112)						int i = _g3->__get(_g2);
HXDLIN( 112)						_g2 = (_g2 + 1);
HXLINE( 113)						( (::Array< int >)(colors->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) )->push((i + count));
            					}
            				}
            			}
            			else {
HXLINE( 115)				int count = (( (::Array< Float >)(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->length >> 2);
HXLINE( 116)				int count2 = ::Std_obj::_hx_int((( (Float)(g->getNormals()->length) ) / ( (Float)(3) )));
HXLINE( 117)				( (::Array< Float >)(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(1);
HXLINE( 118)				( (::Array< Float >)(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(1);
HXLINE( 119)				( (::Array< Float >)(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(1);
HXLINE( 120)				( (::Array< Float >)(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(1);
HXLINE( 121)				{
HXLINE( 121)					int _g = 0;
HXDLIN( 121)					int _g1 = count2;
HXDLIN( 121)					while((_g < _g1)){
HXLINE( 121)						_g = (_g + 1);
HXDLIN( 121)						int i = (_g - 1);
HXLINE( 122)						( (::Array< int >)(colors->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) )->push(count);
            					}
            				}
            			}
            		}
            		else {
HXLINE( 124)			bool _hx_tmp = ::hx::IsNotNull( colors2 );
            		}
HXLINE( 129)		::Array< int > m2 = g->getMaterials();
HXLINE( 130)		if (::hx::IsNull( m2 )) {
HXLINE( 131)			int mid = materials->__get(0);
HXLINE( 132)			{
HXLINE( 132)				int _g = 0;
HXDLIN( 132)				int _g1 = polyCount;
HXDLIN( 132)				while((_g < _g1)){
HXLINE( 132)					_g = (_g + 1);
HXDLIN( 132)					int i = (_g - 1);
HXLINE( 133)					mats->push(mid);
            				}
            			}
            		}
            		else {
HXLINE( 134)			bool _hx_tmp;
HXDLIN( 134)			if ((polyCount > 1)) {
HXLINE( 134)				_hx_tmp = (m2->length == 1);
            			}
            			else {
HXLINE( 134)				_hx_tmp = false;
            			}
HXDLIN( 134)			if (_hx_tmp) {
HXLINE( 135)				int m = m2->__get(0);
HXLINE( 136)				{
HXLINE( 136)					int _g = 0;
HXDLIN( 136)					int _g1 = polyCount;
HXDLIN( 136)					while((_g < _g1)){
HXLINE( 136)						_g = (_g + 1);
HXDLIN( 136)						int i = (_g - 1);
HXLINE( 137)						mats->push(materials->__get(m));
            					}
            				}
            			}
            			else {
HXLINE( 139)				int _g = 0;
HXDLIN( 139)				while((_g < m2->length)){
HXLINE( 139)					int m = m2->__get(_g);
HXDLIN( 139)					_g = (_g + 1);
HXLINE( 140)					mats->push(materials->__get(m));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Geometry_obj,merge,(void))

 ::Dynamic Geometry_obj::getIndexes(){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_148_getIndexes)
HXLINE( 149)		int count = 0;
HXDLIN( 149)		int pos = 0;
HXLINE( 150)		::Array< int > index = this->getPolygons();
HXLINE( 151)		::Array< int > vout = ::Array_obj< int >::__new(0);
HXDLIN( 151)		::Array< int > iout = ::Array_obj< int >::__new(0);
HXLINE( 152)		{
HXLINE( 152)			int _g = 0;
HXDLIN( 152)			while((_g < index->length)){
HXLINE( 152)				int i = index->__get(_g);
HXDLIN( 152)				_g = (_g + 1);
HXLINE( 153)				count = (count + 1);
HXLINE( 154)				if ((i < 0)) {
HXLINE( 155)					index[pos] = (-(i) - 1);
HXLINE( 156)					int start = ((pos - count) + 1);
HXLINE( 157)					{
HXLINE( 157)						int _g = 0;
HXDLIN( 157)						int _g1 = count;
HXDLIN( 157)						while((_g < _g1)){
HXLINE( 157)							_g = (_g + 1);
HXDLIN( 157)							int n = (_g - 1);
HXLINE( 158)							vout->push(index->__get((n + start)));
            						}
            					}
HXLINE( 159)					{
HXLINE( 159)						int _g2 = 0;
HXDLIN( 159)						int _g3 = (count - 2);
HXDLIN( 159)						while((_g2 < _g3)){
HXLINE( 159)							_g2 = (_g2 + 1);
HXDLIN( 159)							int n = (_g2 - 1);
HXLINE( 160)							iout->push((start + n));
HXLINE( 161)							iout->push(((start + count) - 1));
HXLINE( 162)							iout->push(((start + n) + 1));
            						}
            					}
HXLINE( 164)					index[pos] = i;
HXLINE( 165)					count = 0;
            				}
HXLINE( 167)				pos = (pos + 1);
            			}
            		}
HXLINE( 169)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("idx",3d,04,50,00),iout)
            			->setFixed(1,HX_("vidx",87,31,4f,4e),vout));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getIndexes,return )

::Array< Float > Geometry_obj::getNormals(){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_173_getNormals)
HXDLIN( 173)		return this->processVectors(HX_("LayerElementNormal",92,ad,02,fd),HX_("Normals",4c,98,2b,f9),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getNormals,return )

::Array< Float > Geometry_obj::getTangents(::hx::Null< bool >  __o_opt){
            		bool opt = __o_opt.Default(false);
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_177_getTangents)
HXDLIN( 177)		return this->processVectors(HX_("LayerElementTangent",fa,5e,48,74),HX_("Tangents",2e,4c,cd,12),opt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,getTangents,return )

::Array< Float > Geometry_obj::getBinormals(::hx::Null< bool >  __o_opt){
            		bool opt = __o_opt.Default(false);
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_181_getBinormals)
HXDLIN( 181)		return this->processVectors(HX_("LayerElementBinormal",59,03,f6,35),HX_("Binormals",65,51,c8,03),opt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,getBinormals,return )

::Array< Float > Geometry_obj::processVectors(::String layer,::String name,::hx::Null< bool >  __o_opt){
            		bool opt = __o_opt.Default(false);
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_184_processVectors)
HXLINE( 185)		 ::Dynamic vect = ::hxd::fmt::fbx::FbxTools_obj::get(this->root,((layer + HX_(".",2e,00,00,00)) + name),opt);
HXLINE( 186)		if (::hx::IsNull( vect )) {
HXLINE( 186)			return null();
            		}
HXLINE( 187)		::Array< Float > nrm = ::hxd::fmt::fbx::FbxTools_obj::getFloats(vect);
HXLINE( 190)		if ((::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(::hxd::fmt::fbx::FbxTools_obj::get(this->root,(layer + HX_(".MappingInformationType",a6,d2,63,e4)),null())->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == HX_("ByVertice",03,3e,01,b6))) {
HXLINE( 191)			::Array< Float > nout = ::Array_obj< Float >::__new(0);
HXLINE( 192)			{
HXLINE( 192)				int _g = 0;
HXDLIN( 192)				::Array< int > _g1 = this->getPolygons();
HXDLIN( 192)				while((_g < _g1->length)){
HXLINE( 192)					int i = _g1->__get(_g);
HXDLIN( 192)					_g = (_g + 1);
HXLINE( 193)					int vid = i;
HXLINE( 194)					if ((vid < 0)) {
HXLINE( 194)						vid = (-(vid) - 1);
            					}
HXLINE( 195)					nout->push(nrm->__get((vid * 3)));
HXLINE( 196)					nout->push(nrm->__get(((vid * 3) + 1)));
HXLINE( 197)					nout->push(nrm->__get(((vid * 3) + 2)));
            				}
            			}
HXLINE( 199)			nrm = nout;
            		}
HXLINE( 201)		return nrm;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Geometry_obj,processVectors,return )

 ::Dynamic Geometry_obj::getColors(){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_204_getColors)
HXLINE( 205)		 ::Dynamic color = ::hxd::fmt::fbx::FbxTools_obj::get(this->root,HX_("LayerElementColor",58,cc,52,15),true);
HXLINE( 206)		if (::hx::IsNull( color )) {
HXLINE( 206)			return null();
            		}
HXLINE( 207)		 ::Dynamic index = ::hxd::fmt::fbx::FbxTools_obj::get(color,HX_("ColorIndex",cf,b6,31,d9),true);
HXLINE( 208)		if (::hx::IsNull( index )) {
HXLINE( 208)			return null();
            		}
HXLINE( 209)		::Array< Float > _hx_tmp = ::hxd::fmt::fbx::FbxTools_obj::getFloats(::hxd::fmt::fbx::FbxTools_obj::get(color,HX_("Colors",d0,39,1b,fb),null()));
HXDLIN( 209)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("index",12,9b,14,be),::hxd::fmt::fbx::FbxTools_obj::getInts(index))
            			->setFixed(1,HX_("values",e2,03,b7,4f),_hx_tmp));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getColors,return )

::Array< ::Dynamic> Geometry_obj::getUVs(){
            	HX_STACKFRAME(&_hx_pos_d433ae103b5a94fd_212_getUVs)
HXLINE( 213)		::Array< ::Dynamic> uvs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 214)		{
HXLINE( 214)			int _g = 0;
HXDLIN( 214)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("LayerElementUV",2c,d0,86,2f));
HXDLIN( 214)			while((_g < _g1->length)){
HXLINE( 214)				 ::Dynamic v = _g1->__get(_g);
HXDLIN( 214)				_g = (_g + 1);
HXLINE( 215)				 ::Dynamic index = ::hxd::fmt::fbx::FbxTools_obj::get(v,HX_("UVIndex",f1,80,93,82),true);
HXLINE( 216)				::Array< Float > values = ::hxd::fmt::fbx::FbxTools_obj::getFloats(::hxd::fmt::fbx::FbxTools_obj::get(v,HX_("UV",61,4a,00,00),null()));
HXLINE( 217)				::Array< int > index1;
HXDLIN( 217)				if (::hx::IsNull( index )) {
HXLINE( 219)					::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN( 219)					{
HXLINE( 219)						int _g1 = 0;
HXDLIN( 219)						::Array< int > _g2 = this->getPolygons();
HXDLIN( 219)						while((_g1 < _g2->length)){
HXLINE( 219)							int i = _g2->__get(_g1);
HXDLIN( 219)							_g1 = (_g1 + 1);
HXDLIN( 219)							if ((i < 0)) {
HXLINE( 219)								_g->push((-(i) - 1));
            							}
            							else {
HXLINE( 219)								_g->push(i);
            							}
            						}
            					}
HXLINE( 217)					index1 = _g;
            				}
            				else {
HXLINE( 217)					index1 = ::hxd::fmt::fbx::FbxTools_obj::getInts(index);
            				}
HXLINE( 221)				uvs->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("index",12,9b,14,be),index1)
            					->setFixed(1,HX_("values",e2,03,b7,4f),values)));
            			}
            		}
HXLINE( 223)		return uvs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getUVs,return )

 ::h3d::Matrix Geometry_obj::getGeomMatrix(){
            	HX_GC_STACKFRAME(&_hx_pos_d433ae103b5a94fd_227_getGeomMatrix)
HXLINE( 228)		 ::h3d::col::Point rot = null();
HXDLIN( 228)		 ::h3d::col::Point trans = null();
HXLINE( 229)		{
HXLINE( 229)			int _g = 0;
HXDLIN( 229)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->lib->getParent(this->root,HX_("Model",89,93,85,9f),null()),HX_("Properties70.P",4e,56,dc,4c));
HXDLIN( 229)			while((_g < _g1->length)){
HXLINE( 229)				 ::Dynamic p = _g1->__get(_g);
HXDLIN( 229)				_g = (_g + 1);
HXLINE( 230)				::String _hx_switch_0 = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
            				if (  (_hx_switch_0==HX_("GeometricRotation",bf,ed,5f,6b)) ){
HXLINE( 234)					Float rot1 = ((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * ((Float)3.14159265358979323)) / ( (Float)(180) ));
HXDLIN( 234)					Float rot2 = ((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(5)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * ((Float)3.14159265358979323)) / ( (Float)(180) ));
HXDLIN( 234)					rot =  ::h3d::col::Point_obj::__alloc( HX_CTX ,rot1,rot2,((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(6)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * ((Float)3.14159265358979323)) / ( (Float)(180) )));
HXDLIN( 234)					goto _hx_goto_37;
            				}
            				if (  (_hx_switch_0==HX_("GeometricTranslation",10,07,3b,60)) ){
HXLINE( 232)					Float trans1 = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 232)					int trans2;
HXDLIN( 232)					if (this->lib->leftHand) {
HXLINE( 232)						trans2 = -1;
            					}
            					else {
HXLINE( 232)						trans2 = 1;
            					}
HXDLIN( 232)					Float trans3 = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(5)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 232)					trans =  ::h3d::col::Point_obj::__alloc( HX_CTX ,(trans1 * ( (Float)(trans2) )),trans3,::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(6)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()));
HXDLIN( 232)					goto _hx_goto_37;
            				}
            				/* default */{
            				}
            				_hx_goto_37:;
            			}
            		}
HXLINE( 237)		bool _hx_tmp;
HXDLIN( 237)		if (::hx::IsNull( rot )) {
HXLINE( 237)			_hx_tmp = ::hx::IsNull( trans );
            		}
            		else {
HXLINE( 237)			_hx_tmp = false;
            		}
HXDLIN( 237)		if (_hx_tmp) {
HXLINE( 238)			return null();
            		}
HXLINE( 239)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 240)		if (::hx::IsNull( rot )) {
HXLINE( 241)			m->identity();
            		}
            		else {
HXLINE( 243)			m->initRotation(rot->x,rot->y,rot->z);
            		}
HXLINE( 244)		if (::hx::IsNotNull( trans )) {
HXLINE( 245)			m->_41 = (m->_41 + trans->x);
HXLINE( 246)			m->_42 = (m->_42 + trans->y);
HXLINE( 247)			m->_43 = (m->_43 + trans->z);
            		}
HXLINE( 249)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,getGeomMatrix,return )


::hx::ObjectPtr< Geometry_obj > Geometry_obj::__new( ::hxd::fmt::fbx::BaseLibrary l, ::Dynamic root) {
	::hx::ObjectPtr< Geometry_obj > __this = new Geometry_obj();
	__this->__construct(l,root);
	return __this;
}

::hx::ObjectPtr< Geometry_obj > Geometry_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fmt::fbx::BaseLibrary l, ::Dynamic root) {
	Geometry_obj *__this = (Geometry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Geometry_obj), true, "hxd.fmt.fbx.Geometry"));
	*(void **)__this = Geometry_obj::_hx_vtable;
	__this->__construct(l,root);
	return __this;
}

Geometry_obj::Geometry_obj()
{
}

void Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geometry);
	HX_MARK_MEMBER_NAME(lib,"lib");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lib,"lib");
	HX_VISIT_MEMBER_NAME(root,"root");
}

::hx::Val Geometry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { return ::hx::Val( lib ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return ::hx::Val( root ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getUVs") ) { return ::hx::Val( getUVs_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getRoot") ) { return ::hx::Val( getRoot_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getColors") ) { return ::hx::Val( getColors_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getIndexes") ) { return ::hx::Val( getIndexes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNormals") ) { return ::hx::Val( getNormals_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getVertices") ) { return ::hx::Val( getVertices_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPolygons") ) { return ::hx::Val( getPolygons_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTangents") ) { return ::hx::Val( getTangents_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMaterials") ) { return ::hx::Val( getMaterials_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBinormals") ) { return ::hx::Val( getBinormals_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getGeomMatrix") ) { return ::hx::Val( getGeomMatrix_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processVectors") ) { return ::hx::Val( processVectors_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getMaterialByTriangle") ) { return ::hx::Val( getMaterialByTriangle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Geometry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=inValue.Cast<  ::hxd::fmt::fbx::BaseLibrary >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lib",45,4f,52,00));
	outFields->push(HX_("root",22,ee,ae,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Geometry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::fmt::fbx::BaseLibrary */ ,(int)offsetof(Geometry_obj,lib),HX_("lib",45,4f,52,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Geometry_obj,root),HX_("root",22,ee,ae,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Geometry_obj_sStaticStorageInfo = 0;
#endif

static ::String Geometry_obj_sMemberFields[] = {
	HX_("lib",45,4f,52,00),
	HX_("root",22,ee,ae,4b),
	HX_("getRoot",d8,9d,31,1e),
	HX_("getVertices",af,82,09,90),
	HX_("getPolygons",6f,eb,44,52),
	HX_("getMaterials",76,52,62,af),
	HX_("getMaterialByTriangle",7c,d9,67,1e),
	HX_("merge",b8,a2,c6,05),
	HX_("getIndexes",0a,e2,20,30),
	HX_("getNormals",76,f6,3b,7b),
	HX_("getTangents",c4,52,0f,5f),
	HX_("getBinormals",0f,0e,4c,71),
	HX_("processVectors",a1,3b,fb,8c),
	HX_("getColors",e6,4e,dd,42),
	HX_("getUVs",1c,4c,28,a3),
	HX_("getGeomMatrix",53,ba,86,65),
	::String(null()) };

::hx::Class Geometry_obj::__mClass;

void Geometry_obj::__register()
{
	Geometry_obj _hx_dummy;
	Geometry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.fbx.Geometry",df,af,5f,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Geometry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Geometry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Geometry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Geometry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
