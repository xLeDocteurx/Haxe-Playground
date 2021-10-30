#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Quat
#include <h3d/Quat.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_anim_AnimatedObject
#include <h3d/anim/AnimatedObject.h>
#endif
#ifndef INCLUDED_h3d_anim_Animation
#include <h3d/anim/Animation.h>
#endif
#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_anim_LinearFrame
#include <h3d/anim/LinearFrame.h>
#endif
#ifndef INCLUDED_h3d_anim_LinearObject
#include <h3d/anim/LinearObject.h>
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
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_BaseLibrary
#include <hxd/fmt/fbx/BaseLibrary.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_DefaultMatrixes
#include <hxd/fmt/fbx/DefaultMatrixes.h>
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
#ifndef INCLUDED_hxd_fmt_fbx_HMDOut
#include <hxd/fmt/fbx/HMDOut.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_TmpObject
#include <hxd/fmt/fbx/TmpObject.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Animation
#include <hxd/fmt/hmd/Animation.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationEvent
#include <hxd/fmt/hmd/AnimationEvent.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationFlag
#include <hxd/fmt/hmd/AnimationFlag.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationObject
#include <hxd/fmt/hmd/AnimationObject.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Data
#include <hxd/fmt/hmd/Data.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Geometry
#include <hxd/fmt/hmd/Geometry.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_GeometryFormat
#include <hxd/fmt/hmd/GeometryFormat.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Material
#include <hxd/fmt/hmd/Material.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Model
#include <hxd/fmt/hmd/Model.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Position
#include <hxd/fmt/hmd/Position.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Skin
#include <hxd/fmt/hmd/Skin.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_SkinJoint
#include <hxd/fmt/hmd/SkinJoint.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_SkinSplit
#include <hxd/fmt/hmd/SkinSplit.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_25729c66790247bd_6_new,"hxd.fmt.fbx.HMDOut","new",0x89f972ee,"hxd.fmt.fbx.HMDOut.new","hxd/fmt/fbx/HMDOut.hx",6,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_20_int32tof,"hxd.fmt.fbx.HMDOut","int32tof",0x2b80b2af,"hxd.fmt.fbx.HMDOut.int32tof","hxd/fmt/fbx/HMDOut.hx",20,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_28_keepJoint,"hxd.fmt.fbx.HMDOut","keepJoint",0x4a86d793,"hxd.fmt.fbx.HMDOut.keepJoint","hxd/fmt/fbx/HMDOut.hx",28,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_37_buildTangents,"hxd.fmt.fbx.HMDOut","buildTangents",0x590fa56a,"hxd.fmt.fbx.HMDOut.buildTangents","hxd/fmt/fbx/HMDOut.hx",37,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_131_buildGeom,"hxd.fmt.fbx.HMDOut","buildGeom",0x5e113618,"hxd.fmt.fbx.HMDOut.buildGeom","hxd/fmt/fbx/HMDOut.hx",131,0x43527e5f)
static const int _hx_array_data_98f623fc_27[] = {
	(int)1,(int)2,(int)3,(int)4,
};
static const int _hx_array_data_98f623fc_28[] = {
	(int)1,(int)2,(int)3,(int)4,
};
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_376_addModels,"hxd.fmt.fbx.HMDOut","addModels",0xf25e46b9,"hxd.fmt.fbx.HMDOut.addModels","hxd/fmt/fbx/HMDOut.hx",376,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_371_addModels,"hxd.fmt.fbx.HMDOut","addModels",0xf25e46b9,"hxd.fmt.fbx.HMDOut.addModels","hxd/fmt/fbx/HMDOut.hx",371,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_416_addModels,"hxd.fmt.fbx.HMDOut","addModels",0xf25e46b9,"hxd.fmt.fbx.HMDOut.addModels","hxd/fmt/fbx/HMDOut.hx",416,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_479_addModels,"hxd.fmt.fbx.HMDOut","addModels",0xf25e46b9,"hxd.fmt.fbx.HMDOut.addModels","hxd/fmt/fbx/HMDOut.hx",479,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_641_makeTexturePath,"hxd.fmt.fbx.HMDOut","makeTexturePath",0x9d240c60,"hxd.fmt.fbx.HMDOut.makeTexturePath","hxd/fmt/fbx/HMDOut.hx",641,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_663_makeSkin,"hxd.fmt.fbx.HMDOut","makeSkin",0x3a4f663d,"hxd.fmt.fbx.HMDOut.makeSkin","hxd/fmt/fbx/HMDOut.hx",663,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_702_makePosition,"hxd.fmt.fbx.HMDOut","makePosition",0x72b7d069,"hxd.fmt.fbx.HMDOut.makePosition","hxd/fmt/fbx/HMDOut.hx",702,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_722_writeFloat,"hxd.fmt.fbx.HMDOut","writeFloat",0x6286ab6f,"hxd.fmt.fbx.HMDOut.writeFloat","hxd/fmt/fbx/HMDOut.hx",722,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_725_writeFrame,"hxd.fmt.fbx.HMDOut","writeFrame",0x66735e00,"hxd.fmt.fbx.HMDOut.writeFrame","hxd/fmt/fbx/HMDOut.hx",725,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_769_makeAnimation,"hxd.fmt.fbx.HMDOut","makeAnimation",0x69018744,"hxd.fmt.fbx.HMDOut.makeAnimation","hxd/fmt/fbx/HMDOut.hx",769,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_757_makeAnimation,"hxd.fmt.fbx.HMDOut","makeAnimation",0x69018744,"hxd.fmt.fbx.HMDOut.makeAnimation","hxd/fmt/fbx/HMDOut.hx",757,0x43527e5f)
HX_LOCAL_STACK_FRAME(_hx_pos_25729c66790247bd_847_toHMD,"hxd.fmt.fbx.HMDOut","toHMD",0x8c4ec112,"hxd.fmt.fbx.HMDOut.toHMD","hxd/fmt/fbx/HMDOut.hx",847,0x43527e5f)
namespace hxd{
namespace fmt{
namespace fbx{

void HMDOut_obj::__construct(::String fileName){
            	HX_STACKFRAME(&_hx_pos_25729c66790247bd_6_new)
HXLINE(  18)		this->floatSkinIndexes = false;
HXLINE(  13)		this->optimizeSkin = true;
HXLINE(  11)		this->tmp = ::haxe::io::Bytes_obj::alloc(4);
HXLINE(   6)		super::__construct(fileName);
            	}

Dynamic HMDOut_obj::__CreateEmpty() { return new HMDOut_obj; }

void *HMDOut_obj::_hx_vtable = 0;

Dynamic HMDOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HMDOut_obj > _hx_result = new HMDOut_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HMDOut_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02fadaee) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02fadaee;
	} else {
		return inClassId==(int)0x37ade3ab;
	}
}

Float HMDOut_obj::int32tof(int v){
            	HX_STACKFRAME(&_hx_pos_25729c66790247bd_20_int32tof)
HXLINE(  21)		this->tmp->b[0] = ( (unsigned char)((v & 255)) );
HXLINE(  22)		this->tmp->b[1] = ( (unsigned char)(((v >> 8) & 255)) );
HXLINE(  23)		this->tmp->b[2] = ( (unsigned char)(((v >> 16) & 255)) );
HXLINE(  24)		this->tmp->b[3] = ( (unsigned char)(::hx::UShr(v,24)) );
HXLINE(  25)		 ::haxe::io::Bytes _this = this->tmp;
HXDLIN(  25)		if ((4 > _this->length)) {
HXLINE(  25)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXDLIN(  25)		return  ::__hxcpp_memory_get_float(_this->b,0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDOut_obj,int32tof,return )

bool HMDOut_obj::keepJoint( ::h3d::anim::Joint j){
            	HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_28_keepJoint)
HXLINE(  29)		if (!(this->optimizeSkin)) {
HXLINE(  30)			return true;
            		}
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^Bip00[0-9] ",8f,85,e6,2e),HX_("",00,00,00,00))->match(j->name))) {
HXLINE(  32)			_hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^Bone[0-9][0-9][0-9]$",ca,ce,78,b1),HX_("",00,00,00,00))->match(j->name);
            		}
            		else {
HXLINE(  32)			_hx_tmp = true;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  33)			return false;
            		}
HXLINE(  34)		return true;
            	}


::Array< Float > HMDOut_obj::buildTangents( ::hxd::fmt::fbx::Geometry geom){
            	HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_37_buildTangents)
HXLINE(  38)		::Array< Float > verts = geom->getVertices();
HXLINE(  39)		::Array< Float > normals = geom->getNormals();
HXLINE(  40)		::Array< ::Dynamic> uvs = geom->getUVs();
HXLINE(  41)		 ::Dynamic index = geom->getIndexes();
HXLINE(  82)		::String tmp = ::Sys_obj::getEnv(HX_("TMPDIR",d6,e4,e9,20));
HXLINE(  83)		if (::hx::IsNull( tmp )) {
HXLINE(  83)			tmp = ::Sys_obj::getEnv(HX_("TMP",b7,00,40,00));
            		}
HXLINE(  84)		if (::hx::IsNull( tmp )) {
HXLINE(  84)			tmp = ::Sys_obj::getEnv(HX_("TEMP",14,8b,ba,37));
            		}
HXLINE(  85)		if (::hx::IsNull( tmp )) {
HXLINE(  85)			tmp = HX_(".",2e,00,00,00);
            		}
HXLINE(  86)		::String fileName = (((tmp + HX_("/mikktspace_data",2c,7b,cd,a4)) + ::Date_obj::now()->getTime()) + HX_("_",5f,00,00,00));
HXDLIN(  86)		::String fileName1 = ((fileName + ::Std_obj::random(16777216)) + HX_(".bin",59,89,b2,1e));
HXLINE(  87)		::String outFile = (fileName1 + HX_(".out",20,71,bc,1e));
HXLINE(  88)		 ::haxe::io::BytesBuffer outputData =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  89)		outputData->addInt32(( (::Array< int >)(index->__Field(HX_("vidx",87,31,4f,4e),::hx::paccDynamic)) )->length);
HXLINE(  90)		outputData->addInt32(8);
HXLINE(  91)		outputData->addInt32(0);
HXLINE(  92)		outputData->addInt32(3);
HXLINE(  93)		outputData->addInt32(6);
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			int _g1 = ( (::Array< int >)(index->__Field(HX_("vidx",87,31,4f,4e),::hx::paccDynamic)) )->length;
HXDLIN(  94)			while((_g < _g1)){
HXLINE(  94)				_g = (_g + 1);
HXDLIN(  94)				int i = (_g - 1);
HXLINE(  96)				int vidx = ( (int)( ::Dynamic(index->__Field(HX_("vidx",87,31,4f,4e),::hx::paccDynamic))->__GetItem(i)) );
HXLINE(  97)				outputData->addInt32(::haxe::io::FPHelper_obj::floatToI32(verts->__get((vidx * 3))));
HXLINE(  98)				outputData->addInt32(::haxe::io::FPHelper_obj::floatToI32(verts->__get(((vidx * 3) + 1))));
HXLINE(  99)				outputData->addInt32(::haxe::io::FPHelper_obj::floatToI32(verts->__get(((vidx * 3) + 2))));
HXLINE( 101)				outputData->addInt32(::haxe::io::FPHelper_obj::floatToI32(normals->__get((i * 3))));
HXLINE( 102)				outputData->addInt32(::haxe::io::FPHelper_obj::floatToI32(normals->__get(((i * 3) + 1))));
HXLINE( 103)				outputData->addInt32(::haxe::io::FPHelper_obj::floatToI32(normals->__get(((i * 3) + 2))));
HXLINE( 104)				int uidx = ( (int)( ::Dynamic(uvs->__get(0)->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic))->__GetItem(i)) );
HXLINE( 106)				outputData->addInt32(::haxe::io::FPHelper_obj::floatToI32(( (Float)( ::Dynamic(uvs->__get(0)->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic))->__GetItem((uidx * 2))) )));
HXLINE( 107)				outputData->addInt32(::haxe::io::FPHelper_obj::floatToI32(( (Float)( ::Dynamic(uvs->__get(0)->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic))->__GetItem(((uidx * 2) + 1))) )));
            			}
            		}
HXLINE( 109)		outputData->addInt32(( (::Array< int >)(index->__Field(HX_("vidx",87,31,4f,4e),::hx::paccDynamic)) )->length);
HXLINE( 110)		{
HXLINE( 110)			int _g2 = 0;
HXDLIN( 110)			int _g3 = ( (::Array< int >)(index->__Field(HX_("vidx",87,31,4f,4e),::hx::paccDynamic)) )->length;
HXDLIN( 110)			while((_g2 < _g3)){
HXLINE( 110)				_g2 = (_g2 + 1);
HXDLIN( 110)				int i = (_g2 - 1);
HXLINE( 111)				outputData->addInt32(i);
            			}
            		}
HXLINE( 112)		::sys::io::File_obj::saveBytes(fileName1,outputData->getBytes());
HXLINE( 113)		int ret;
HXDLIN( 113)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 113)			ret = ::Sys_obj::command(HX_("mikktspace",ce,d8,13,91),::Array_obj< ::String >::__new(2)->init(0,fileName1)->init(1,outFile));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 113)				{
HXLINE( 113)					null();
            				}
HXDLIN( 113)				ret = -1;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 114)		if ((ret != 0)) {
HXLINE( 115)			::sys::FileSystem_obj::deleteFile(fileName1);
HXLINE( 116)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Failed to call 'mikktspace' executable required to generate tangent data. Please ensure it's in your PATH",7e,71,58,ec)));
            		}
HXLINE( 118)		 ::haxe::io::Bytes bytes = ::sys::io::File_obj::getBytes(outFile);
HXLINE( 119)		::Array< Float > arr = ::Array_obj< Float >::__new(0);
HXLINE( 120)		{
HXLINE( 120)			int _g4 = 0;
HXDLIN( 120)			int _g5 = (( (::Array< int >)(index->__Field(HX_("vidx",87,31,4f,4e),::hx::paccDynamic)) )->length * 4);
HXDLIN( 120)			while((_g4 < _g5)){
HXLINE( 120)				_g4 = (_g4 + 1);
HXDLIN( 120)				int i = (_g4 - 1);
HXLINE( 121)				int pos = (i << 2);
HXDLIN( 121)				bool _hx_tmp;
HXDLIN( 121)				if ((pos >= 0)) {
HXLINE( 121)					_hx_tmp = ((pos + 4) > bytes->length);
            				}
            				else {
HXLINE( 121)					_hx_tmp = true;
            				}
HXDLIN( 121)				if (_hx_tmp) {
HXLINE( 121)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            				}
HXDLIN( 121)				arr[i] =  ::__hxcpp_memory_get_float(bytes->b,pos);
            			}
            		}
HXLINE( 122)		::sys::FileSystem_obj::deleteFile(fileName1);
HXLINE( 123)		::sys::FileSystem_obj::deleteFile(outFile);
HXLINE( 124)		return arr;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDOut_obj,buildTangents,return )

 ::Dynamic HMDOut_obj::buildGeom( ::hxd::fmt::fbx::Geometry geom, ::h3d::anim::Skin skin, ::haxe::io::BytesOutput dataOut,bool genTangents){
            	HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_131_buildGeom)
HXLINE( 132)		 ::hxd::fmt::hmd::Geometry g =  ::hxd::fmt::hmd::Geometry_obj::__alloc( HX_CTX );
HXLINE( 134)		::Array< Float > verts = geom->getVertices();
HXLINE( 135)		::Array< Float > normals = geom->getNormals();
HXLINE( 136)		::Array< ::Dynamic> uvs = geom->getUVs();
HXLINE( 137)		 ::Dynamic colors = geom->getColors();
HXLINE( 138)		::Array< int > mats = geom->getMaterials();
HXLINE( 141)		if (::hx::IsNotNull( colors )) {
HXLINE( 142)			bool hasData = false;
HXLINE( 143)			{
HXLINE( 143)				int _g = 0;
HXDLIN( 143)				::Array< Float > _g1 = ( (::Array< Float >)(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 143)				while((_g < _g1->length)){
HXLINE( 143)					Float v = _g1->__get(_g);
HXDLIN( 143)					_g = (_g + 1);
HXLINE( 144)					if ((v < ((Float)0.99))) {
HXLINE( 145)						hasData = true;
HXLINE( 146)						goto _hx_goto_7;
            					}
            				}
            				_hx_goto_7:;
            			}
HXLINE( 148)			if (!(hasData)) {
HXLINE( 149)				colors = null();
            			}
            		}
HXLINE( 153)		::Array< Float > tangents;
HXDLIN( 153)		if (genTangents) {
HXLINE( 153)			tangents = this->buildTangents(geom);
            		}
            		else {
HXLINE( 153)			tangents = null();
            		}
HXLINE( 156)		g->vertexFormat = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,HX_("position",a9,a0,fa,ca),3));
HXLINE( 159)		if (::hx::IsNotNull( normals )) {
HXLINE( 160)			::Array< ::Dynamic> g1 = g->vertexFormat;
HXDLIN( 160)			g1->push( ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,HX_("normal",27,72,69,30),3));
            		}
HXLINE( 161)		if (::hx::IsNotNull( tangents )) {
HXLINE( 162)			::Array< ::Dynamic> g1 = g->vertexFormat;
HXDLIN( 162)			g1->push( ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,HX_("tangent",c5,9c,cd,3a),3));
            		}
HXLINE( 163)		{
HXLINE( 163)			int _g = 0;
HXDLIN( 163)			int _g1 = uvs->length;
HXDLIN( 163)			while((_g < _g1)){
HXLINE( 163)				_g = (_g + 1);
HXDLIN( 163)				int i = (_g - 1);
HXLINE( 164)				::Array< ::Dynamic> g1 = g->vertexFormat;
HXDLIN( 164)				::String _hx_tmp;
HXDLIN( 164)				if ((i == 0)) {
HXLINE( 164)					_hx_tmp = HX_("",00,00,00,00);
            				}
            				else {
HXLINE( 164)					_hx_tmp = (HX_("",00,00,00,00) + (i + 1));
            				}
HXDLIN( 164)				g1->push( ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,(HX_("uv",61,66,00,00) + _hx_tmp),2));
            			}
            		}
HXLINE( 165)		if (::hx::IsNotNull( colors )) {
HXLINE( 166)			::Array< ::Dynamic> g1 = g->vertexFormat;
HXDLIN( 166)			g1->push( ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,HX_("color",63,71,5c,4a),3));
            		}
HXLINE( 168)		if (::hx::IsNotNull( skin )) {
HXLINE( 169)			bool _hx_tmp;
HXDLIN( 169)			if ((this->bonesPerVertex > 0)) {
HXLINE( 169)				_hx_tmp = (this->bonesPerVertex > 4);
            			}
            			else {
HXLINE( 169)				_hx_tmp = true;
            			}
HXDLIN( 169)			if (_hx_tmp) {
HXLINE( 169)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
HXLINE( 170)			::Array< ::Dynamic> g1 = g->vertexFormat;
HXDLIN( 170)			g1->push( ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,HX_("weights",fb,d7,fc,6f),::Array_obj< int >::fromData( _hx_array_data_98f623fc_27,4)->__get((this->bonesPerVertex - 1))));
HXLINE( 171)			::Array< ::Dynamic> g2 = g->vertexFormat;
HXDLIN( 171)			int _hx_tmp1;
HXDLIN( 171)			if (this->floatSkinIndexes) {
HXLINE( 171)				_hx_tmp1 = ::Array_obj< int >::fromData( _hx_array_data_98f623fc_28,4)->__get((this->bonesPerVertex - 1));
            			}
            			else {
HXLINE( 171)				_hx_tmp1 = 9;
            			}
HXDLIN( 171)			g2->push( ::hxd::fmt::hmd::GeometryFormat_obj::__alloc( HX_CTX ,HX_("indexes",00,5c,bf,e0),_hx_tmp1));
            		}
HXLINE( 173)		int stride = 0;
HXLINE( 174)		{
HXLINE( 174)			int _g2 = 0;
HXDLIN( 174)			::Array< ::Dynamic> _g3 = g->vertexFormat;
HXDLIN( 174)			while((_g2 < _g3->length)){
HXLINE( 174)				 ::hxd::fmt::hmd::GeometryFormat f = _g3->__get(_g2).StaticCast<  ::hxd::fmt::hmd::GeometryFormat >();
HXDLIN( 174)				_g2 = (_g2 + 1);
HXLINE( 175)				stride = (stride + (f->format & 7));
            			}
            		}
HXLINE( 176)		g->vertexStride = stride;
HXLINE( 177)		g->vertexCount = 0;
HXLINE( 180)		 ::h3d::Matrix gm = geom->getGeomMatrix();
HXLINE( 181)		int length = 0;
HXDLIN( 181)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN( 181)		if ((length > 0)) {
HXLINE( 181)			if ((length > this1->length)) {
HXLINE( 181)				this1[(length - 1)] = ((Float)0.);
            			}
            		}
HXDLIN( 181)		::Array< Float > vbuf = this1;
HXLINE( 182)		::Array< ::Dynamic> ibufs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 184)		bool _hx_tmp;
HXDLIN( 184)		if (::hx::IsNotNull( skin )) {
HXLINE( 184)			_hx_tmp = ::hx::IsNotNull( skin->splitJoints );
            		}
            		else {
HXLINE( 184)			_hx_tmp = false;
            		}
HXDLIN( 184)		if (_hx_tmp) {
HXLINE( 185)			int _g = 0;
HXDLIN( 185)			::Array< ::Dynamic> _g1 = skin->splitJoints;
HXDLIN( 185)			while((_g < _g1->length)){
HXLINE( 185)				 ::Dynamic _ = _g1->__get(_g);
HXDLIN( 185)				_g = (_g + 1);
HXLINE( 186)				ibufs->push(::Array_obj< int >::__new(0));
            			}
            		}
HXLINE( 189)		g->bounds =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 190)		::Array< Float > this2 = ::Array_obj< Float >::__new(stride);
HXDLIN( 190)		::Array< Float > tmpBuf = this2;
HXLINE( 191)		::Array< int > vertexRemap = ::Array_obj< int >::__new();
HXLINE( 192)		::Array< int > index = geom->getPolygons();
HXLINE( 193)		int count = 0;
HXDLIN( 193)		int matPos = 0;
HXDLIN( 193)		int stri = 0;
HXLINE( 194)		 ::haxe::ds::IntMap lookup =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 195)		Float tmp_x = ((Float)0.);
HXDLIN( 195)		Float tmp_y = ((Float)0.);
HXDLIN( 195)		Float tmp_z = ((Float)0.);
HXLINE( 196)		{
HXLINE( 196)			int _g4 = 0;
HXDLIN( 196)			int _g5 = index->length;
HXDLIN( 196)			while((_g4 < _g5)){
HXLINE( 196)				_g4 = (_g4 + 1);
HXDLIN( 196)				int pos = (_g4 - 1);
HXLINE( 197)				int i = index->__get(pos);
HXLINE( 198)				count = (count + 1);
HXLINE( 199)				if ((i >= 0)) {
HXLINE( 200)					continue;
            				}
HXLINE( 201)				index[pos] = (-(i) - 1);
HXLINE( 202)				int start = ((pos - count) + 1);
HXLINE( 203)				{
HXLINE( 203)					int _g = 0;
HXDLIN( 203)					int _g1 = count;
HXDLIN( 203)					while((_g < _g1)){
HXLINE( 203)						_g = (_g + 1);
HXDLIN( 203)						int n = (_g - 1);
HXLINE( 204)						int k = (n + start);
HXLINE( 205)						int vidx = index->__get(k);
HXLINE( 206)						int p = 0;
HXLINE( 208)						Float x = verts->__get((vidx * 3));
HXLINE( 209)						Float y = verts->__get(((vidx * 3) + 1));
HXLINE( 210)						Float z = verts->__get(((vidx * 3) + 2));
HXLINE( 211)						if (::hx::IsNotNull( gm )) {
HXLINE( 212)							{
HXLINE( 212)								tmp_x = x;
HXDLIN( 212)								tmp_y = y;
HXDLIN( 212)								tmp_z = z;
            							}
HXLINE( 213)							{
HXLINE( 213)								Float px = ((((tmp_x * gm->_11) + (tmp_y * gm->_21)) + (tmp_z * gm->_31)) + gm->_41);
HXDLIN( 213)								Float py = ((((tmp_x * gm->_12) + (tmp_y * gm->_22)) + (tmp_z * gm->_32)) + gm->_42);
HXDLIN( 213)								Float pz = ((((tmp_x * gm->_13) + (tmp_y * gm->_23)) + (tmp_z * gm->_33)) + gm->_43);
HXDLIN( 213)								tmp_x = px;
HXDLIN( 213)								tmp_y = py;
HXDLIN( 213)								tmp_z = pz;
            							}
HXLINE( 214)							x = tmp_x;
HXLINE( 215)							y = tmp_y;
HXLINE( 216)							z = tmp_z;
            						}
HXLINE( 218)						{
HXLINE( 218)							p = (p + 1);
HXDLIN( 218)							tmpBuf->__unsafe_set((p - 1),x);
            						}
HXLINE( 219)						{
HXLINE( 219)							p = (p + 1);
HXDLIN( 219)							tmpBuf->__unsafe_set((p - 1),y);
            						}
HXLINE( 220)						{
HXLINE( 220)							p = (p + 1);
HXDLIN( 220)							tmpBuf->__unsafe_set((p - 1),z);
            						}
HXLINE( 221)						{
HXLINE( 221)							 ::h3d::col::Bounds _this = g->bounds;
HXDLIN( 221)							if ((x < _this->xMin)) {
HXLINE( 221)								_this->xMin = x;
            							}
HXDLIN( 221)							if ((x > _this->xMax)) {
HXLINE( 221)								_this->xMax = x;
            							}
HXDLIN( 221)							if ((y < _this->yMin)) {
HXLINE( 221)								_this->yMin = y;
            							}
HXDLIN( 221)							if ((y > _this->yMax)) {
HXLINE( 221)								_this->yMax = y;
            							}
HXDLIN( 221)							if ((z < _this->zMin)) {
HXLINE( 221)								_this->zMin = z;
            							}
HXDLIN( 221)							if ((z > _this->zMax)) {
HXLINE( 221)								_this->zMax = z;
            							}
            						}
HXLINE( 223)						if (::hx::IsNotNull( normals )) {
HXLINE( 224)							Float nx = normals->__get((k * 3));
HXLINE( 225)							Float ny = normals->__get(((k * 3) + 1));
HXLINE( 226)							Float nz = normals->__get(((k * 3) + 2));
HXLINE( 227)							{
HXLINE( 227)								p = (p + 1);
HXDLIN( 227)								tmpBuf->__unsafe_set((p - 1),nx);
            							}
HXLINE( 228)							{
HXLINE( 228)								p = (p + 1);
HXDLIN( 228)								tmpBuf->__unsafe_set((p - 1),ny);
            							}
HXLINE( 229)							{
HXLINE( 229)								p = (p + 1);
HXDLIN( 229)								tmpBuf->__unsafe_set((p - 1),nz);
            							}
            						}
HXLINE( 232)						if (::hx::IsNotNull( tangents )) {
HXLINE( 233)							{
HXLINE( 233)								p = (p + 1);
HXDLIN( 233)								Float val = this->round(tangents->__get((k * 4)));
HXDLIN( 233)								tmpBuf->__unsafe_set((p - 1),val);
            							}
HXLINE( 234)							{
HXLINE( 234)								p = (p + 1);
HXDLIN( 234)								Float val1 = this->round(tangents->__get(((k * 4) + 1)));
HXDLIN( 234)								tmpBuf->__unsafe_set((p - 1),val1);
            							}
HXLINE( 235)							{
HXLINE( 235)								p = (p + 1);
HXDLIN( 235)								Float val2 = this->round(tangents->__get(((k * 4) + 2)));
HXDLIN( 235)								tmpBuf->__unsafe_set((p - 1),val2);
            							}
HXLINE( 236)							if ((tangents->__get(((k * 4) + 3)) < 0)) {
HXLINE( 237)								{
HXLINE( 237)									int _g = (p - 3);
HXDLIN( 237)									::Array< Float > _g1 = tmpBuf;
HXDLIN( 237)									{
HXLINE( 237)										Float val = (( (Float)(_hx_array_unsafe_get(_g1,_g)) ) * ((Float)0.5));
HXDLIN( 237)										_g1->__unsafe_set(_g,val);
            									}
            								}
HXLINE( 238)								{
HXLINE( 238)									int _g2 = (p - 2);
HXDLIN( 238)									::Array< Float > _g3 = tmpBuf;
HXDLIN( 238)									{
HXLINE( 238)										Float val1 = (( (Float)(_hx_array_unsafe_get(_g3,_g2)) ) * ((Float)0.5));
HXDLIN( 238)										_g3->__unsafe_set(_g2,val1);
            									}
            								}
HXLINE( 239)								{
HXLINE( 239)									int _g4 = (p - 1);
HXDLIN( 239)									::Array< Float > _g5 = tmpBuf;
HXDLIN( 239)									{
HXLINE( 239)										Float val2 = (( (Float)(_hx_array_unsafe_get(_g5,_g4)) ) * ((Float)0.5));
HXDLIN( 239)										_g5->__unsafe_set(_g4,val2);
            									}
            								}
            							}
            						}
HXLINE( 243)						{
HXLINE( 243)							int _g1 = 0;
HXDLIN( 243)							while((_g1 < uvs->length)){
HXLINE( 243)								 ::Dynamic tuvs = uvs->__get(_g1);
HXDLIN( 243)								_g1 = (_g1 + 1);
HXLINE( 244)								int iuv = ( (int)( ::Dynamic(tuvs->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic))->__GetItem(k)) );
HXLINE( 245)								{
HXLINE( 245)									p = (p + 1);
HXDLIN( 245)									tmpBuf->__unsafe_set((p - 1), ::Dynamic(tuvs->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic))->__GetItem((iuv * 2)));
            								}
HXLINE( 246)								{
HXLINE( 246)									p = (p + 1);
HXDLIN( 246)									tmpBuf->__unsafe_set((p - 1),(( (Float)(1) ) - ( (Float)( ::Dynamic(tuvs->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic))->__GetItem(((iuv * 2) + 1))) )));
            								}
            							}
            						}
HXLINE( 249)						if (::hx::IsNotNull( colors )) {
HXLINE( 250)							int icol = ( (int)( ::Dynamic(colors->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic))->__GetItem(k)) );
HXLINE( 251)							{
HXLINE( 251)								p = (p + 1);
HXDLIN( 251)								tmpBuf->__unsafe_set((p - 1), ::Dynamic(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic))->__GetItem((icol * 4)));
            							}
HXLINE( 252)							{
HXLINE( 252)								p = (p + 1);
HXDLIN( 252)								tmpBuf->__unsafe_set((p - 1), ::Dynamic(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic))->__GetItem(((icol * 4) + 1)));
            							}
HXLINE( 253)							{
HXLINE( 253)								p = (p + 1);
HXDLIN( 253)								tmpBuf->__unsafe_set((p - 1), ::Dynamic(colors->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic))->__GetItem(((icol * 4) + 2)));
            							}
            						}
HXLINE( 256)						if (::hx::IsNotNull( skin )) {
HXLINE( 257)							int k = (vidx * skin->bonesPerVertex);
HXLINE( 258)							int idx = 0;
HXLINE( 259)							{
HXLINE( 259)								int _g = 0;
HXDLIN( 259)								int _g1 = skin->bonesPerVertex;
HXDLIN( 259)								while((_g < _g1)){
HXLINE( 259)									_g = (_g + 1);
HXDLIN( 259)									int i = (_g - 1);
HXLINE( 260)									{
HXLINE( 260)										p = (p + 1);
HXDLIN( 260)										Float val = ( (Float)(_hx_array_unsafe_get(skin->vertexWeights,(k + i))) );
HXDLIN( 260)										tmpBuf->__unsafe_set((p - 1),val);
            									}
HXLINE( 261)									idx = ((( (int)(_hx_array_unsafe_get(skin->vertexJoints,(k + i))) ) << (8 * i)) | idx);
            								}
            							}
HXLINE( 263)							if (this->floatSkinIndexes) {
HXLINE( 264)								int _g = 0;
HXDLIN( 264)								int _g1 = skin->bonesPerVertex;
HXDLIN( 264)								while((_g < _g1)){
HXLINE( 264)									_g = (_g + 1);
HXDLIN( 264)									int i = (_g - 1);
HXLINE( 265)									{
HXLINE( 265)										p = (p + 1);
HXDLIN( 265)										Float val = ( (Float)((( (int)(_hx_array_unsafe_get(skin->vertexJoints,(k + i))) ) * 3)) );
HXDLIN( 265)										tmpBuf->__unsafe_set((p - 1),val);
            									}
            								}
            							}
            							else {
HXLINE( 267)								p = (p + 1);
HXDLIN( 267)								Float val = this->int32tof(idx);
HXDLIN( 267)								tmpBuf->__unsafe_set((p - 1),val);
            							}
            						}
HXLINE( 270)						Float total = ((Float)0.);
HXLINE( 271)						{
HXLINE( 271)							int _g2 = 0;
HXDLIN( 271)							int _g3 = stride;
HXDLIN( 271)							while((_g2 < _g3)){
HXLINE( 271)								_g2 = (_g2 + 1);
HXDLIN( 271)								int i = (_g2 - 1);
HXLINE( 272)								total = (total + ( (Float)(_hx_array_unsafe_get(tmpBuf,i)) ));
            							}
            						}
HXLINE( 273)						int itotal = ::Std_obj::_hx_int(::hx::Mod((total * ( (Float)(100) )),268435455));
HXLINE( 276)						 ::Dynamic found = null();
HXLINE( 277)						::Array< int > vids = ( (::Array< int >)(lookup->get(itotal)) );
HXLINE( 278)						if (::hx::IsNull( vids )) {
HXLINE( 279)							vids = ::Array_obj< int >::__new(0);
HXLINE( 280)							lookup->set(itotal,vids);
            						}
HXLINE( 282)						{
HXLINE( 282)							int _g4 = 0;
HXDLIN( 282)							while((_g4 < vids->length)){
HXLINE( 282)								int vid = vids->__get(_g4);
HXDLIN( 282)								_g4 = (_g4 + 1);
HXLINE( 283)								bool same = true;
HXLINE( 284)								int p = (vid * stride);
HXLINE( 285)								{
HXLINE( 285)									int _g = 0;
HXDLIN( 285)									int _g1 = stride;
HXDLIN( 285)									while((_g < _g1)){
HXLINE( 285)										_g = (_g + 1);
HXDLIN( 285)										int i = (_g - 1);
HXLINE( 286)										p = (p + 1);
HXDLIN( 286)										Float _hx_tmp = vbuf->__get((p - 1));
HXDLIN( 286)										if ((_hx_tmp != ( (Float)(_hx_array_unsafe_get(tmpBuf,i)) ))) {
HXLINE( 287)											same = false;
HXLINE( 288)											goto _hx_goto_18;
            										}
            									}
            									_hx_goto_18:;
            								}
HXLINE( 290)								if (same) {
HXLINE( 291)									found = vid;
HXLINE( 292)									goto _hx_goto_17;
            								}
            							}
            							_hx_goto_17:;
            						}
HXLINE( 295)						if (::hx::IsNull( found )) {
HXLINE( 296)							found = g->vertexCount;
HXLINE( 297)							g->vertexCount++;
HXLINE( 298)							{
HXLINE( 298)								int _g = 0;
HXDLIN( 298)								int _g1 = stride;
HXDLIN( 298)								while((_g < _g1)){
HXLINE( 298)									_g = (_g + 1);
HXDLIN( 298)									int i = (_g - 1);
HXLINE( 299)									vbuf->push(( (Float)(_hx_array_unsafe_get(tmpBuf,i)) ));
            								}
            							}
HXLINE( 300)							vids->push(found);
            						}
HXLINE( 302)						vertexRemap->push(found);
            					}
            				}
HXLINE( 306)				bool _hx_tmp;
HXDLIN( 306)				if (::hx::IsNotNull( skin )) {
HXLINE( 306)					_hx_tmp = ::hx::IsNotNull( skin->splitJoints );
            				}
            				else {
HXLINE( 306)					_hx_tmp = false;
            				}
HXDLIN( 306)				if (_hx_tmp) {
HXLINE( 307)					int _g = 0;
HXDLIN( 307)					int _g1 = (count - 2);
HXDLIN( 307)					while((_g < _g1)){
HXLINE( 307)						_g = (_g + 1);
HXDLIN( 307)						int n = (_g - 1);
HXLINE( 308)						stri = (stri + 1);
HXDLIN( 308)						::Array< int > idx = ibufs->__get(( (int)(_hx_array_unsafe_get(skin->triangleGroups,(stri - 1))) )).StaticCast< ::Array< int > >();
HXLINE( 309)						idx->push(vertexRemap->__get((start + n)));
HXLINE( 310)						idx->push(vertexRemap->__get(((start + count) - 1)));
HXLINE( 311)						idx->push(vertexRemap->__get(((start + n) + 1)));
            					}
            				}
            				else {
HXLINE( 316)					int mid;
HXLINE( 317)					if (::hx::IsNull( mats )) {
HXLINE( 318)						mid = 0;
            					}
            					else {
HXLINE( 320)						mid = mats->__get(matPos);
HXLINE( 321)						if ((mats->length > 1)) {
HXLINE( 321)							matPos = (matPos + 1);
            						}
            					}
HXLINE( 323)					::Array< int > idx = ibufs->__get(mid).StaticCast< ::Array< int > >();
HXLINE( 324)					if (::hx::IsNull( idx )) {
HXLINE( 325)						idx = ::Array_obj< int >::__new(0);
HXLINE( 326)						ibufs[mid] = idx;
            					}
HXLINE( 328)					{
HXLINE( 328)						int _g = 0;
HXDLIN( 328)						int _g1 = (count - 2);
HXDLIN( 328)						while((_g < _g1)){
HXLINE( 328)							_g = (_g + 1);
HXDLIN( 328)							int n = (_g - 1);
HXLINE( 329)							idx->push(vertexRemap->__get((start + n)));
HXLINE( 330)							idx->push(vertexRemap->__get(((start + count) - 1)));
HXLINE( 331)							idx->push(vertexRemap->__get(((start + n) + 1)));
            						}
            					}
            				}
HXLINE( 335)				index[pos] = i;
HXLINE( 336)				count = 0;
            			}
            		}
HXLINE( 340)		g->vertexPosition = dataOut->b->b->length;
HXLINE( 341)		{
HXLINE( 341)			int _g6 = 0;
HXDLIN( 341)			int _g7 = vbuf->length;
HXDLIN( 341)			while((_g6 < _g7)){
HXLINE( 341)				_g6 = (_g6 + 1);
HXDLIN( 341)				int i = (_g6 - 1);
HXLINE( 342)				{
HXLINE( 342)					Float f = vbuf->__get(i);
HXDLIN( 342)					Float _hx_tmp;
HXDLIN( 342)					if ((f == 0)) {
HXLINE( 342)						_hx_tmp = ( (Float)(0) );
            					}
            					else {
HXLINE( 342)						_hx_tmp = f;
            					}
HXDLIN( 342)					this->dataOut->writeFloat(_hx_tmp);
            				}
            			}
            		}
HXLINE( 343)		g->indexPosition = dataOut->b->b->length;
HXLINE( 344)		g->indexCounts = ::Array_obj< int >::__new(0);
HXLINE( 346)		::Array< int > matMap = ::Array_obj< int >::__new(0);
HXDLIN( 346)		int matCount = 0;
HXLINE( 347)		bool is32 = (g->vertexCount > 65536);
HXLINE( 349)		{
HXLINE( 349)			int _g8 = 0;
HXDLIN( 349)			while((_g8 < ibufs->length)){
HXLINE( 349)				::Array< int > idx = ibufs->__get(_g8).StaticCast< ::Array< int > >();
HXDLIN( 349)				_g8 = (_g8 + 1);
HXLINE( 350)				if (::hx::IsNull( idx )) {
HXLINE( 351)					matCount = (matCount + 1);
HXLINE( 352)					continue;
            				}
HXLINE( 354)				matCount = (matCount + 1);
HXDLIN( 354)				matMap->push((matCount - 1));
HXLINE( 355)				g->indexCounts->push(idx->length);
HXLINE( 356)				if (is32) {
HXLINE( 357)					int _g = 0;
HXDLIN( 357)					while((_g < idx->length)){
HXLINE( 357)						int i = idx->__get(_g);
HXDLIN( 357)						_g = (_g + 1);
HXLINE( 358)						dataOut->writeInt32(i);
            					}
            				}
            				else {
HXLINE( 360)					int _g = 0;
HXDLIN( 360)					while((_g < idx->length)){
HXLINE( 360)						int i = idx->__get(_g);
HXDLIN( 360)						_g = (_g + 1);
HXLINE( 361)						dataOut->writeUInt16(i);
            					}
            				}
            			}
            		}
HXLINE( 365)		bool _hx_tmp1;
HXDLIN( 365)		if (::hx::IsNotNull( skin )) {
HXLINE( 365)			_hx_tmp1 = ::hx::IsNotNull( skin->splitJoints );
            		}
            		else {
HXLINE( 365)			_hx_tmp1 = false;
            		}
HXDLIN( 365)		if (_hx_tmp1) {
HXLINE( 366)			matMap = null();
            		}
HXLINE( 368)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("materials",ec,b5,0b,a0),matMap)
            			->setFixed(1,HX_("g",67,00,00,00),g));
            	}


HX_DEFINE_DYNAMIC_FUNC4(HMDOut_obj,buildGeom,return )

void HMDOut_obj::addModels(bool includeGeometry){
            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,indexRec,::Array< ::Dynamic>,joints,::Array< ::Dynamic>,foundSkin,::Array< ::Dynamic>,skins,::Array< ::Dynamic>,objects) HXARGC(1)
            		void _hx_run( ::hxd::fmt::fbx::TmpObject t){
            			HX_STACKFRAME(&_hx_pos_25729c66790247bd_376_addModels)
HXLINE( 377)			if (t->isJoint) {
HXLINE( 378)				joints->push(t);
            			}
            			else {
HXLINE( 380)				bool isSkin = false;
HXLINE( 381)				if (::hx::IsNull( foundSkin->__get(0).StaticCast< ::Array< ::Dynamic> >() )) {
HXLINE( 382)					int _g = 0;
HXDLIN( 382)					::Array< ::Dynamic> _g1 = t->childs;
HXDLIN( 382)					while((_g < _g1->length)){
HXLINE( 382)						 ::hxd::fmt::fbx::TmpObject c = _g1->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 382)						_g = (_g + 1);
HXLINE( 383)						if (c->isJoint) {
HXLINE( 384)							isSkin = true;
HXLINE( 385)							goto _hx_goto_29;
            						}
            					}
            					_hx_goto_29:;
            				}
            				else {
HXLINE( 388)					isSkin = (foundSkin->__get(0).StaticCast< ::Array< ::Dynamic> >()->indexOf(t,null()) >= 0);
            				}
HXLINE( 389)				if (isSkin) {
HXLINE( 390)					skins->push(t);
            				}
            				else {
HXLINE( 392)					objects->__get(0).StaticCast< ::Array< ::Dynamic> >()->push(t);
            				}
            			}
HXLINE( 394)			{
HXLINE( 394)				int _g = 0;
HXDLIN( 394)				::Array< ::Dynamic> _g1 = t->childs;
HXDLIN( 394)				while((_g < _g1->length)){
HXLINE( 394)					 ::hxd::fmt::fbx::TmpObject c = _g1->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 394)					_g = (_g + 1);
HXLINE( 395)					indexRec->__get(0)(c);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_371_addModels)
HXDLIN( 371)		 ::hxd::fmt::fbx::HMDOut _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 373)		 ::hxd::fmt::fbx::TmpObject root = ( ( ::hxd::fmt::fbx::TmpObject)(this->buildHierarchy()->__Field(HX_("root",22,ee,ae,4b),::hx::paccDynamic)) );
HXLINE( 374)		::Array< ::Dynamic> objects = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< ::Dynamic>::__new(0));
HXDLIN( 374)		::Array< ::Dynamic> joints = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 374)		::Array< ::Dynamic> skins = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 374)		::Array< ::Dynamic> foundSkin = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 375)		int uid = 0;
HXLINE( 376)		::Array< ::Dynamic> indexRec = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 376)		indexRec[0] =  ::Dynamic(new _hx_Closure_0(indexRec,joints,foundSkin,skins,objects));
HXLINE( 397)		indexRec->__get(0)(root);
HXLINE( 400)		{
HXLINE( 400)			int _g = 0;
HXDLIN( 400)			while((_g < joints->length)){
HXLINE( 400)				 ::hxd::fmt::fbx::TmpObject o = joints->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 400)				_g = (_g + 1);
HXLINE( 401)				if (o->isMesh) {
HXLINE( 401)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
HXLINE( 402)				 ::h3d::anim::Joint j =  ::h3d::anim::Joint_obj::__alloc( HX_CTX );
HXLINE( 403)				this->getDefaultMatrixes(o->model);
HXLINE( 404)				j->index = ::hxd::fmt::fbx::FbxTools_obj::getId(o->model);
HXLINE( 405)				j->name = ::hxd::fmt::fbx::FbxTools_obj::getName(o->model);
HXLINE( 406)				o->joint = j;
HXLINE( 407)				if (::hx::IsNotNull( o->parent )) {
HXLINE( 408)					j->parent = o->parent->joint;
HXLINE( 409)					if (o->parent->isJoint) {
HXLINE( 409)						o->parent->joint->subs->push(j);
            					}
            				}
            			}
            		}
HXLINE( 414)		foundSkin[0] = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 415)		{
HXLINE( 415)			int _g1 = 0;
HXDLIN( 415)			while((_g1 < skins->length)){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::hxd::fmt::fbx::HMDOut,_gthis,::Array< ::Dynamic>,loopRec) HXARGC(1)
            				 ::Dynamic _hx_run( ::hxd::fmt::fbx::TmpObject o){
            					HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_416_addModels)
HXLINE( 417)					{
HXLINE( 417)						int _g = 0;
HXDLIN( 417)						::Array< ::Dynamic> _g1 = o->childs;
HXDLIN( 417)						while((_g < _g1->length)){
HXLINE( 417)							 ::hxd::fmt::fbx::TmpObject j = _g1->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 417)							_g = (_g + 1);
HXLINE( 418)							if (!(j->isJoint)) {
HXLINE( 418)								continue;
            							}
HXLINE( 419)							 ::Dynamic s = _gthis->getParent(j->model,HX_("Deformer",12,bd,ec,96),true);
HXLINE( 420)							if (::hx::IsNotNull( s )) {
HXLINE( 420)								return s;
            							}
HXLINE( 421)							s = loopRec->__get(0)(j);
HXLINE( 422)							if (::hx::IsNotNull( s )) {
HXLINE( 422)								return s;
            							}
            						}
            					}
HXLINE( 424)					return null();
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 415)				 ::hxd::fmt::fbx::TmpObject o = skins->__get(_g1).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 415)				_g1 = (_g1 + 1);
HXLINE( 416)				::Array< ::Dynamic> loopRec = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 416)				loopRec[0] =  ::Dynamic(new _hx_Closure_1(_gthis,loopRec));
HXLINE( 426)				 ::Dynamic subDef = loopRec->__get(0)(o);
HXLINE( 428)				if (::hx::IsNull( subDef )) {
HXLINE( 429)					continue;
            				}
HXLINE( 430)				 ::Dynamic def = this->getParent(subDef,HX_("Deformer",12,bd,ec,96),null());
HXLINE( 431)				::Array< ::Dynamic> geoms = this->getParents(def,HX_("Geometry",d2,be,5a,ac));
HXLINE( 432)				if ((geoms->length == 0)) {
HXLINE( 432)					continue;
            				}
HXLINE( 433)				if ((geoms->length > 1)) {
HXLINE( 433)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Single skin applied to multiple geometries not supported",4a,a8,86,84)));
            				}
HXLINE( 434)				::Array< ::Dynamic> models = this->getParents(geoms->__get(0),HX_("Model",89,93,85,9f));
HXLINE( 435)				if ((models->length == 0)) {
HXLINE( 435)					continue;
            				}
HXLINE( 436)				if ((models->length > 1)) {
HXLINE( 436)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Single skin applied to multiple models not supported",64,3a,4d,89)));
            				}
HXLINE( 437)				 ::Dynamic m = models->__get(0);
HXLINE( 438)				{
HXLINE( 438)					int _g = 0;
HXDLIN( 438)					while((_g < objects->__get(0).StaticCast< ::Array< ::Dynamic> >()->length)){
HXLINE( 438)						 ::hxd::fmt::fbx::TmpObject o2 = objects->__get(0).StaticCast< ::Array< ::Dynamic> >()->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 438)						_g = (_g + 1);
HXLINE( 439)						if (::hx::IsEq( o2->model,m )) {
HXLINE( 440)							foundSkin->__get(0).StaticCast< ::Array< ::Dynamic> >()->push(o);
HXLINE( 441)							o2->skin = o;
HXLINE( 442)							if (::hx::IsNull( o->model )) {
HXLINE( 442)								o->model = m;
            							}
HXLINE( 443)							this->ignoreMissingObject(::hxd::fmt::fbx::FbxTools_obj::getId(m));
HXLINE( 445)							 ::hxd::fmt::fbx::TmpObject p = o->parent;
HXLINE( 446)							if (::hx::IsInstanceNotEq( p,o2 )) {
HXLINE( 447)								o2->parent->childs->remove(o2);
HXLINE( 448)								o2->parent = p;
HXLINE( 449)								if (::hx::IsNotNull( p )) {
HXLINE( 449)									p->childs->push(o2);
            								}
            								else {
HXLINE( 449)									root = o2;
            								}
            							}
HXLINE( 452)							if (::hx::IsNotNull( p )) {
HXLINE( 452)								p->childs->remove(o);
            							}
HXLINE( 455)							{
HXLINE( 455)								int _g = 0;
HXDLIN( 455)								::Array< ::Dynamic> _g1 = o->childs->copy();
HXDLIN( 455)								while((_g < _g1->length)){
HXLINE( 455)									 ::hxd::fmt::fbx::TmpObject c = _g1->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 455)									_g = (_g + 1);
HXLINE( 456)									if (!(c->isJoint)) {
HXLINE( 457)										o->childs->remove(c);
HXLINE( 458)										o2->childs->push(c);
HXLINE( 459)										c->parent = o2;
            									}
            								}
            							}
HXLINE( 461)							goto _hx_goto_34;
            						}
            					}
            					_hx_goto_34:;
            				}
            			}
            		}
HXLINE( 466)		if (!(includeGeometry)) {
HXLINE( 467)			return;
            		}
HXLINE( 469)		objects[0] = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 470)		bool _hx_tmp;
HXDLIN( 470)		if ((root->childs->length <= 1)) {
HXLINE( 470)			_hx_tmp = ::hx::IsNull( root->model );
            		}
            		else {
HXLINE( 470)			_hx_tmp = false;
            		}
HXDLIN( 470)		if (_hx_tmp) {
HXLINE( 471)			root = root->childs->__get(0).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXLINE( 472)			root->parent = null();
            		}
HXLINE( 474)		if (::hx::IsNotNull( root )) {
HXLINE( 474)			indexRec->__get(0)(root);
            		}
HXLINE( 476)		 ::haxe::ds::IntMap hskins =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN( 476)		 ::haxe::ds::IntMap tmpGeom =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 478)		{
HXLINE( 478)			int _g2 = 0;
HXDLIN( 478)			::Array< ::Dynamic> _g3 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("Objects.Geometry",cc,55,e5,67));
HXDLIN( 478)			while((_g2 < _g3->length)){
HXLINE( 478)				 ::Dynamic g = _g3->__get(_g2);
HXDLIN( 478)				_g2 = (_g2 + 1);
HXLINE( 479)				{
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            					void _hx_run( ::h3d::anim::Skin _){
            						HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_479_addModels)
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::hxd::fmt::fbx::HMDOut,_gthis, ::Dynamic,g) HXARGC(0)
            					int _hx_run(){
            						HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_479_addModels)
HXLINE( 479)						return ::Std_obj::_hx_int((( (Float)( ::hxd::fmt::fbx::Geometry_obj::__alloc( HX_CTX ,_gthis,g)->getVertices()->length) ) / ( (Float)(3) )));
            					}
            					HX_END_LOCAL_FUNC0(return)

HXLINE( 479)					int key = ::hxd::fmt::fbx::FbxTools_obj::getId(g);
HXDLIN( 479)					tmpGeom->set(key, ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("setSkin",3f,57,d9,11), ::Dynamic(new _hx_Closure_2()))
            						->setFixed(1,HX_("vertexCount",cb,0e,9f,5e), ::Dynamic(new _hx_Closure_3(_gthis,g)))));
            				}
            			}
            		}
HXLINE( 481)		 ::haxe::ds::IntMap hgeom =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 482)		 ::haxe::ds::IntMap hmat =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 483)		int index = 0;
HXLINE( 484)		{
HXLINE( 484)			int _g4 = 0;
HXDLIN( 484)			while((_g4 < objects->__get(0).StaticCast< ::Array< ::Dynamic> >()->length)){
HXLINE( 484)				 ::hxd::fmt::fbx::TmpObject o = objects->__get(0).StaticCast< ::Array< ::Dynamic> >()->__get(_g4).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 484)				_g4 = (_g4 + 1);
HXLINE( 486)				index = (index + 1);
HXDLIN( 486)				o->index = (index - 1);
HXLINE( 488)				 ::hxd::fmt::hmd::Model model =  ::hxd::fmt::hmd::Model_obj::__alloc( HX_CTX );
HXLINE( 489)				 ::hxd::fmt::fbx::TmpObject ref;
HXDLIN( 489)				if (::hx::IsNull( o->skin )) {
HXLINE( 489)					ref = o;
            				}
            				else {
HXLINE( 489)					ref = o->skin;
            				}
HXLINE( 491)				::String _hx_tmp;
HXDLIN( 491)				if (::hx::IsNull( o->model )) {
HXLINE( 491)					_hx_tmp = null();
            				}
            				else {
HXLINE( 491)					_hx_tmp = ::hxd::fmt::fbx::FbxTools_obj::getName(o->model);
            				}
HXDLIN( 491)				model->name = _hx_tmp;
HXLINE( 492)				int _hx_tmp1;
HXDLIN( 492)				bool _hx_tmp2;
HXDLIN( 492)				if (::hx::IsNotNull( o->parent )) {
HXLINE( 492)					_hx_tmp2 = o->parent->isJoint;
            				}
            				else {
HXLINE( 492)					_hx_tmp2 = true;
            				}
HXDLIN( 492)				if (_hx_tmp2) {
HXLINE( 492)					_hx_tmp1 = -1;
            				}
            				else {
HXLINE( 492)					_hx_tmp1 = o->parent->index;
            				}
HXDLIN( 492)				model->parent = _hx_tmp1;
HXLINE( 493)				::String _hx_tmp3;
HXDLIN( 493)				bool _hx_tmp4;
HXDLIN( 493)				if (::hx::IsNotNull( o->parent )) {
HXLINE( 493)					_hx_tmp4 = o->parent->isJoint;
            				}
            				else {
HXLINE( 493)					_hx_tmp4 = false;
            				}
HXDLIN( 493)				if (_hx_tmp4) {
HXLINE( 493)					_hx_tmp3 = ::hxd::fmt::fbx::FbxTools_obj::getName(o->parent->model);
            				}
            				else {
HXLINE( 493)					_hx_tmp3 = null();
            				}
HXDLIN( 493)				model->follow = _hx_tmp3;
HXLINE( 494)				 ::hxd::fmt::fbx::DefaultMatrixes m;
HXDLIN( 494)				if (::hx::IsNull( ref->model )) {
HXLINE( 494)					m =  ::hxd::fmt::fbx::DefaultMatrixes_obj::__alloc( HX_CTX );
            				}
            				else {
HXLINE( 494)					m = this->getDefaultMatrixes(ref->model);
            				}
HXLINE( 495)				 ::hxd::fmt::hmd::Position p =  ::hxd::fmt::hmd::Position_obj::__alloc( HX_CTX );
HXLINE( 496)				Float _hx_tmp5;
HXDLIN( 496)				if (::hx::IsNull( m->trans )) {
HXLINE( 496)					_hx_tmp5 = ( (Float)(0) );
            				}
            				else {
HXLINE( 496)					_hx_tmp5 = -(m->trans->x);
            				}
HXDLIN( 496)				p->x = _hx_tmp5;
HXLINE( 497)				Float _hx_tmp6;
HXDLIN( 497)				if (::hx::IsNull( m->trans )) {
HXLINE( 497)					_hx_tmp6 = ( (Float)(0) );
            				}
            				else {
HXLINE( 497)					_hx_tmp6 = m->trans->y;
            				}
HXDLIN( 497)				p->y = _hx_tmp6;
HXLINE( 498)				Float _hx_tmp7;
HXDLIN( 498)				if (::hx::IsNull( m->trans )) {
HXLINE( 498)					_hx_tmp7 = ( (Float)(0) );
            				}
            				else {
HXLINE( 498)					_hx_tmp7 = m->trans->z;
            				}
HXDLIN( 498)				p->z = _hx_tmp7;
HXLINE( 499)				Float _hx_tmp8;
HXDLIN( 499)				if (::hx::IsNull( m->scale )) {
HXLINE( 499)					_hx_tmp8 = ( (Float)(1) );
            				}
            				else {
HXLINE( 499)					_hx_tmp8 = m->scale->x;
            				}
HXDLIN( 499)				p->sx = _hx_tmp8;
HXLINE( 500)				Float _hx_tmp9;
HXDLIN( 500)				if (::hx::IsNull( m->scale )) {
HXLINE( 500)					_hx_tmp9 = ( (Float)(1) );
            				}
            				else {
HXLINE( 500)					_hx_tmp9 = m->scale->y;
            				}
HXDLIN( 500)				p->sy = _hx_tmp9;
HXLINE( 501)				Float _hx_tmp10;
HXDLIN( 501)				if (::hx::IsNull( m->scale )) {
HXLINE( 501)					_hx_tmp10 = ( (Float)(1) );
            				}
            				else {
HXLINE( 501)					_hx_tmp10 = m->scale->z;
            				}
HXDLIN( 501)				p->sz = _hx_tmp10;
HXLINE( 503)				bool _hx_tmp11;
HXDLIN( 503)				if (::hx::IsNotNull( o->model )) {
HXLINE( 503)					_hx_tmp11 = (::hxd::fmt::fbx::FbxTools_obj::getType(o->model) == HX_("Camera",c5,ba,20,ec));
            				}
            				else {
HXLINE( 503)					_hx_tmp11 = false;
            				}
HXDLIN( 503)				if (_hx_tmp11) {
HXLINE( 504)					 ::Dynamic props = this->getChild(o->model,HX_("NodeAttribute",9a,45,ad,93),null());
HXLINE( 505)					Float fov = ((Float)45.);
HXDLIN( 505)					Float ratio = ((Float)1.77777777777777768);
HXLINE( 506)					{
HXLINE( 506)						int _g = 0;
HXDLIN( 506)						::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(props,HX_("Properties70.P",4e,56,dc,4c));
HXDLIN( 506)						while((_g < _g1->length)){
HXLINE( 506)							 ::Dynamic p = _g1->__get(_g);
HXDLIN( 506)							_g = (_g + 1);
HXLINE( 507)							::String _hx_switch_0 = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
            							if (  (_hx_switch_0==HX_("FieldOfView",56,7f,7e,3e)) ){
HXLINE( 511)								fov = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 511)								goto _hx_goto_39;
            							}
            							if (  (_hx_switch_0==HX_("FilmAspectRatio",cf,f7,91,e3)) ){
HXLINE( 509)								ratio = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 509)								goto _hx_goto_39;
            							}
            							/* default */{
            							}
            							_hx_goto_39:;
            						}
            					}
HXLINE( 515)					Float fovY = (((( (Float)(2) ) * ::Math_obj::atan((::Math_obj::tan((((fov * ((Float)0.5)) * ((Float)3.14159265358979323)) / ( (Float)(180) ))) / ratio))) * ( (Float)(180) )) / ((Float)3.14159265358979323));
HXLINE( 516)					if (::hx::IsNull( model->props )) {
HXLINE( 516)						model->props = ::Array_obj< ::Dynamic>::__new(0);
            					}
HXLINE( 517)					model->props->push(::hxd::fmt::hmd::Property_obj::CameraFOVY(fovY));
            				}
HXLINE( 520)				 ::h3d::Quat q = m->toQuaternion(true);
HXLINE( 521)				q->normalize();
HXLINE( 522)				if ((q->w < 0)) {
HXLINE( 522)					q->x = -(q->x);
HXDLIN( 522)					q->y = -(q->y);
HXDLIN( 522)					q->z = -(q->z);
HXDLIN( 522)					q->w = -(q->w);
            				}
HXLINE( 523)				p->qx = q->x;
HXLINE( 524)				p->qy = q->y;
HXLINE( 525)				p->qz = q->z;
HXLINE( 526)				model->position = p;
HXLINE( 527)				model->geometry = -1;
HXLINE( 528)				this->d->models->push(model);
HXLINE( 530)				if (!(o->isMesh)) {
HXLINE( 530)					continue;
            				}
HXLINE( 532)				::Array< int > mids = ::Array_obj< int >::__new(0);
HXLINE( 533)				bool hasNormalMap = false;
HXLINE( 534)				{
HXLINE( 534)					int _g = 0;
HXDLIN( 534)					::Array< ::Dynamic> _g1 = this->getChilds(o->model,HX_("Material",c7,18,57,ca));
HXDLIN( 534)					while((_g < _g1->length)){
HXLINE( 534)						 ::Dynamic m = _g1->__get(_g);
HXDLIN( 534)						_g = (_g + 1);
HXLINE( 535)						 ::Dynamic mid = hmat->get(::hxd::fmt::fbx::FbxTools_obj::getId(m));
HXLINE( 536)						if (::hx::IsNotNull( mid )) {
HXLINE( 537)							mids->push(mid);
HXLINE( 538)							 ::hxd::fmt::hmd::Material m = this->d->materials->__get(( (int)(mid) )).StaticCast<  ::hxd::fmt::hmd::Material >();
HXLINE( 539)							hasNormalMap = ::hx::IsNotNull( m->normalMap );
HXLINE( 540)							continue;
            						}
HXLINE( 542)						 ::hxd::fmt::hmd::Material mat =  ::hxd::fmt::hmd::Material_obj::__alloc( HX_CTX );
HXLINE( 543)						mid = this->d->materials->length;
HXLINE( 544)						mids->push(mid);
HXLINE( 545)						hmat->set(::hxd::fmt::fbx::FbxTools_obj::getId(m),mid);
HXLINE( 546)						this->d->materials->push(mat);
HXLINE( 548)						mat->name = ::hxd::fmt::fbx::FbxTools_obj::getName(m);
HXLINE( 549)						mat->blendMode = null();
HXLINE( 553)						{
HXLINE( 553)							int _g2 = 0;
HXDLIN( 553)							::Array< ::Dynamic> _g3 = ::hxd::fmt::fbx::FbxTools_obj::getAll(m,HX_("Properties70.P",4e,56,dc,4c));
HXDLIN( 553)							while((_g2 < _g3->length)){
HXLINE( 553)								 ::Dynamic p = _g3->__get(_g2);
HXDLIN( 553)								_g2 = (_g2 + 1);
HXLINE( 554)								 ::hxd::fmt::fbx::FbxProp pval = Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >();
HXLINE( 555)								if ((::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == HX_("Opacity",ab,85,b6,b8))) {
HXLINE( 557)									Float v = ::hxd::fmt::fbx::FbxTools_obj::toFloat(pval);
HXLINE( 558)									bool _hx_tmp;
HXDLIN( 558)									bool _hx_tmp1;
HXDLIN( 558)									if ((v < 1)) {
HXLINE( 558)										_hx_tmp1 = (v > ((Float)0.98));
            									}
            									else {
HXLINE( 558)										_hx_tmp1 = false;
            									}
HXDLIN( 558)									if (_hx_tmp1) {
HXLINE( 558)										_hx_tmp = ::hx::IsNull( mat->blendMode );
            									}
            									else {
HXLINE( 558)										_hx_tmp = false;
            									}
HXDLIN( 558)									if (_hx_tmp) {
HXLINE( 558)										mat->blendMode = ::h2d::BlendMode_obj::Add_dyn();
            									}
            								}
            							}
            						}
HXLINE( 564)						 ::Dynamic texture = this->getSpecChild(m,HX_("DiffuseColor",c1,88,b6,0d));
HXLINE( 565)						if (::hx::IsNotNull( texture )) {
HXLINE( 566)							::String path = this->makeTexturePath(texture);
HXLINE( 567)							if (::hx::IsNotNull( path )) {
HXLINE( 567)								mat->diffuseTexture = path;
            							}
            						}
HXLINE( 571)						mat->normalMap = this->makeTexturePath(this->getSpecChild(m,HX_("NormalMap",95,c2,5e,4d)));
HXLINE( 572)						if (::hx::IsNotNull( mat->normalMap )) {
HXLINE( 573)							hasNormalMap = true;
            						}
HXLINE( 574)						 ::Dynamic spec = this->getSpecChild(m,HX_("SpecularFactor",12,ec,21,92));
HXLINE( 575)						if (::hx::IsNull( spec )) {
HXLINE( 575)							spec = this->getSpecChild(m,HX_("SpecularColor",80,77,2d,53));
            						}
HXLINE( 576)						mat->specularTexture = this->makeTexturePath(spec);
HXLINE( 577)						bool _hx_tmp;
HXDLIN( 577)						if (::hx::IsNull( mat->normalMap )) {
HXLINE( 577)							_hx_tmp = ::hx::IsNotNull( mat->specularTexture );
            						}
            						else {
HXLINE( 577)							_hx_tmp = true;
            						}
HXDLIN( 577)						if (_hx_tmp) {
HXLINE( 578)							if (::hx::IsNull( mat->props )) {
HXLINE( 578)								mat->props = ::Array_obj< ::Dynamic>::__new(0);
            							}
HXLINE( 579)							mat->props->push(::hxd::fmt::hmd::Property_obj::HasExtraTextures_dyn());
            						}
HXLINE( 583)						 ::Dynamic transp = this->getSpecChild(m,HX_("TransparentColor",d1,48,52,d4));
HXLINE( 584)						if (::hx::IsNotNull( transp )) {
HXLINE( 585)							::String path = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(::hxd::fmt::fbx::FbxTools_obj::get(transp,HX_("FileName",07,17,f5,3b),null())->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 586)							if ((path != HX_("",00,00,00,00))) {
HXLINE( 587)								path = path.toLowerCase();
HXLINE( 588)								::String ext = ( (::String)(path.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE( 589)								bool _hx_tmp;
HXDLIN( 589)								if (::hx::IsNotNull( texture )) {
HXLINE( 589)									_hx_tmp = (path == ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(::hxd::fmt::fbx::FbxTools_obj::get(texture,HX_("FileName",07,17,f5,3b),null())->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()).toLowerCase());
            								}
            								else {
HXLINE( 589)									_hx_tmp = false;
            								}
HXDLIN( 589)								if (_hx_tmp) {
HXLINE( 591)									bool _hx_tmp;
HXDLIN( 591)									bool _hx_tmp1;
HXDLIN( 591)									if (::hx::IsNull( mat->blendMode )) {
HXLINE( 591)										_hx_tmp1 = (ext != HX_("jpg",e1,d0,50,00));
            									}
            									else {
HXLINE( 591)										_hx_tmp1 = false;
            									}
HXDLIN( 591)									if (_hx_tmp1) {
HXLINE( 591)										_hx_tmp = (ext != HX_("jpeg",a8,f2,65,46));
            									}
            									else {
HXLINE( 591)										_hx_tmp = false;
            									}
HXDLIN( 591)									if (_hx_tmp) {
HXLINE( 591)										mat->blendMode = ::h2d::BlendMode_obj::Alpha_dyn();
            									}
            								}
            								else {
HXLINE( 593)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Alpha texture that is different from diffuse is not supported in HMD",90,bd,8a,1d)));
            								}
            							}
            						}
HXLINE( 597)						if (::hx::IsNull( mat->blendMode )) {
HXLINE( 597)							mat->blendMode = ::h2d::BlendMode_obj::None_dyn();
            						}
            					}
            				}
HXLINE( 600)				 ::Dynamic g = this->getChild(o->model,HX_("Geometry",d2,be,5a,ac),null());
HXLINE( 602)				 ::h3d::anim::Skin skin = null();
HXLINE( 603)				if (::hx::IsNotNull( o->skin )) {
HXLINE( 604)					::Array< ::Dynamic> rootJoints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 605)					{
HXLINE( 605)						int _g = 0;
HXDLIN( 605)						::Array< ::Dynamic> _g1 = o->skin->childs;
HXDLIN( 605)						while((_g < _g1->length)){
HXLINE( 605)							 ::hxd::fmt::fbx::TmpObject c = _g1->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 605)							_g = (_g + 1);
HXLINE( 606)							if (c->isJoint) {
HXLINE( 607)								rootJoints->push(c->joint);
            							}
            						}
            					}
HXLINE( 608)					skin = this->createSkin(hskins,tmpGeom,rootJoints,this->bonesPerVertex);
HXLINE( 609)					if ((skin->boundJoints->length > ::hxd::fmt::fbx::BaseLibrary_obj::maxBonesPerSkin)) {
HXLINE( 610)						 ::hxd::fmt::fbx::Geometry g1 =  ::hxd::fmt::fbx::Geometry_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),g);
HXLINE( 611)						 ::Dynamic idx = g1->getIndexes();
HXLINE( 612)						int _hx_tmp = ::hxd::fmt::fbx::BaseLibrary_obj::maxBonesPerSkin;
HXDLIN( 612)						::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN( 612)						{
HXLINE( 612)							int _g1 = 0;
HXDLIN( 612)							::Array< int > _g2 = ( (::Array< int >)(idx->__Field(HX_("idx",3d,04,50,00),::hx::paccDynamic)) );
HXDLIN( 612)							while((_g1 < _g2->length)){
HXLINE( 612)								int i = _g2->__get(_g1);
HXDLIN( 612)								_g1 = (_g1 + 1);
HXDLIN( 612)								_g->push( ::Dynamic(idx->__Field(HX_("vidx",87,31,4f,4e),::hx::paccDynamic))->__GetItem(i));
            							}
            						}
HXDLIN( 612)						::Array< int > _hx_tmp1;
HXDLIN( 612)						if ((mids->length > 1)) {
HXLINE( 612)							_hx_tmp1 = g1->getMaterialByTriangle();
            						}
            						else {
HXLINE( 612)							_hx_tmp1 = null();
            						}
HXDLIN( 612)						skin->split(_hx_tmp,_g,_hx_tmp1);
            					}
HXLINE( 614)					model->skin = this->makeSkin(skin,o->skin);
            				}
HXLINE( 617)				 ::Dynamic gdata = hgeom->get(::hxd::fmt::fbx::FbxTools_obj::getId(g));
HXLINE( 618)				if (::hx::IsNull( gdata )) {
HXLINE( 619)					 ::Dynamic geom = this->buildGeom( ::hxd::fmt::fbx::Geometry_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),g),skin,this->dataOut,hasNormalMap);
HXLINE( 620)					gdata =  ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("materials",ec,b5,0b,a0), ::Dynamic(geom->__Field(HX_("materials",ec,b5,0b,a0),::hx::paccDynamic)))
            						->setFixed(1,HX_("gid",02,84,4e,00),this->d->geometries->length));
HXLINE( 621)					this->d->geometries->push( ::Dynamic(geom->__Field(HX_("g",67,00,00,00),::hx::paccDynamic)));
HXLINE( 622)					hgeom->set(::hxd::fmt::fbx::FbxTools_obj::getId(g),gdata);
            				}
HXLINE( 624)				model->geometry = ( (int)(gdata->__Field(HX_("gid",02,84,4e,00),::hx::paccDynamic)) );
HXLINE( 626)				if ((mids->length == 0)) {
HXLINE( 627)					 ::hxd::fmt::hmd::Material mat =  ::hxd::fmt::hmd::Material_obj::__alloc( HX_CTX );
HXLINE( 628)					mat->blendMode = ::h2d::BlendMode_obj::None_dyn();
HXLINE( 629)					mat->name = HX_("default",c1,d8,c3,9b);
HXLINE( 630)					int mid = this->d->materials->length;
HXLINE( 631)					this->d->materials->push(mat);
HXLINE( 632)					mids = ::Array_obj< int >::__new(1)->init(0,mid);
            				}
HXLINE( 634)				if (::hx::IsNull( gdata->__Field(HX_("materials",ec,b5,0b,a0),::hx::paccDynamic) )) {
HXLINE( 635)					model->materials = mids;
            				}
            				else {
HXLINE( 637)					::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN( 637)					{
HXLINE( 637)						int _g1 = 0;
HXDLIN( 637)						::Array< int > _g2 = ( (::Array< int >)(gdata->__Field(HX_("materials",ec,b5,0b,a0),::hx::paccDynamic)) );
HXDLIN( 637)						while((_g1 < _g2->length)){
HXLINE( 637)							int id = _g2->__get(_g1);
HXDLIN( 637)							_g1 = (_g1 + 1);
HXDLIN( 637)							_g->push(mids->__get(id));
            						}
            					}
HXDLIN( 637)					model->materials = _g;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDOut_obj,addModels,(void))

::String HMDOut_obj::makeTexturePath( ::Dynamic tex){
            	HX_STACKFRAME(&_hx_pos_25729c66790247bd_641_makeTexturePath)
HXLINE( 642)		if (::hx::IsNull( tex )) {
HXLINE( 643)			return null();
            		}
HXLINE( 644)		::String path = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(::hxd::fmt::fbx::FbxTools_obj::get(tex,HX_("FileName",07,17,f5,3b),null())->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 645)		if ((path == HX_("",00,00,00,00))) {
HXLINE( 646)			return null();
            		}
HXLINE( 647)		path = path.split(HX_("\\",5c,00,00,00))->join(HX_("/",2f,00,00,00));
HXLINE( 648)		if (!(this->absoluteTexturePath)) {
HXLINE( 649)			bool _hx_tmp;
HXDLIN( 649)			if (::hx::IsNotNull( this->filePath )) {
HXLINE( 649)				::String _hx_tmp1 = path.toLowerCase();
HXDLIN( 649)				_hx_tmp = ::StringTools_obj::startsWith(_hx_tmp1,this->filePath);
            			}
            			else {
HXLINE( 649)				_hx_tmp = false;
            			}
HXDLIN( 649)			if (_hx_tmp) {
HXLINE( 650)				path = path.substr(this->filePath.length,null());
            			}
            			else {
HXLINE( 653)				::Array< ::String > k = path.split(HX_("/res/",7e,9e,7c,5b));
HXLINE( 654)				if ((k->length > 1)) {
HXLINE( 655)					k->shift();
HXLINE( 656)					path = k->join(HX_("/res/",7e,9e,7c,5b));
            				}
            			}
            		}
HXLINE( 660)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDOut_obj,makeTexturePath,return )

 ::hxd::fmt::hmd::Skin HMDOut_obj::makeSkin( ::h3d::anim::Skin skin, ::hxd::fmt::fbx::TmpObject obj){
            	HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_663_makeSkin)
HXLINE( 664)		 ::hxd::fmt::hmd::Skin s =  ::hxd::fmt::hmd::Skin_obj::__alloc( HX_CTX );
HXLINE( 665)		s->name = ::hxd::fmt::fbx::FbxTools_obj::getName(obj->model);
HXLINE( 666)		s->joints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 667)		{
HXLINE( 667)			int _g = 0;
HXDLIN( 667)			::Array< ::Dynamic> _g1 = skin->allJoints;
HXDLIN( 667)			while((_g < _g1->length)){
HXLINE( 667)				 ::h3d::anim::Joint jo = _g1->__get(_g).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 667)				_g = (_g + 1);
HXLINE( 668)				 ::hxd::fmt::hmd::SkinJoint j =  ::hxd::fmt::hmd::SkinJoint_obj::__alloc( HX_CTX );
HXLINE( 669)				j->name = jo->name;
HXLINE( 670)				int _hx_tmp;
HXDLIN( 670)				if (::hx::IsNull( jo->parent )) {
HXLINE( 670)					_hx_tmp = -1;
            				}
            				else {
HXLINE( 670)					_hx_tmp = jo->parent->index;
            				}
HXDLIN( 670)				j->parent = _hx_tmp;
HXLINE( 671)				j->bind = jo->bindIndex;
HXLINE( 672)				j->position = this->makePosition(jo->defMat);
HXLINE( 673)				if (::hx::IsNotNull( jo->transPos )) {
HXLINE( 674)					j->transpos = this->makePosition(jo->transPos);
HXLINE( 675)					bool _hx_tmp;
HXDLIN( 675)					bool _hx_tmp1;
HXDLIN( 675)					if ((j->transpos->sx == 1)) {
HXLINE( 675)						_hx_tmp1 = (j->transpos->sy != 1);
            					}
            					else {
HXLINE( 675)						_hx_tmp1 = true;
            					}
HXDLIN( 675)					if (!(_hx_tmp1)) {
HXLINE( 675)						_hx_tmp = (j->transpos->sz != 1);
            					}
            					else {
HXLINE( 675)						_hx_tmp = true;
            					}
HXDLIN( 675)					if (_hx_tmp) {
HXLINE( 677)						 ::h3d::Matrix tmp = jo->transPos->clone();
HXLINE( 678)						tmp->transpose();
HXLINE( 679)						 ::h3d::Vector v = null();
HXDLIN( 679)						if (::hx::IsNull( v )) {
HXLINE( 679)							v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            						}
HXDLIN( 679)						v->x = ::Math_obj::sqrt((((tmp->_11 * tmp->_11) + (tmp->_12 * tmp->_12)) + (tmp->_13 * tmp->_13)));
HXDLIN( 679)						v->y = ::Math_obj::sqrt((((tmp->_21 * tmp->_21) + (tmp->_22 * tmp->_22)) + (tmp->_23 * tmp->_23)));
HXDLIN( 679)						v->z = ::Math_obj::sqrt((((tmp->_31 * tmp->_31) + (tmp->_32 * tmp->_32)) + (tmp->_33 * tmp->_33)));
HXDLIN( 679)						if (((((tmp->_11 * ((tmp->_22 * tmp->_33) - (tmp->_23 * tmp->_32))) + (tmp->_12 * ((tmp->_23 * tmp->_31) - (tmp->_21 * tmp->_33)))) + (tmp->_13 * ((tmp->_21 * tmp->_32) - (tmp->_22 * tmp->_31)))) < 0)) {
HXLINE( 679)							 ::h3d::Vector v1 = v;
HXDLIN( 679)							v1->x = (v1->x * ( (Float)(-1) ));
HXDLIN( 679)							 ::h3d::Vector v2 = v;
HXDLIN( 679)							v2->y = (v2->y * ( (Float)(-1) ));
HXDLIN( 679)							 ::h3d::Vector v3 = v;
HXDLIN( 679)							v3->z = (v3->z * ( (Float)(-1) ));
            						}
HXDLIN( 679)						 ::h3d::Vector s = v;
HXLINE( 680)						tmp->prependScale((( (Float)(1) ) / s->x),(( (Float)(1) ) / s->y),(( (Float)(1) ) / s->z));
HXLINE( 681)						tmp->transpose();
HXLINE( 682)						j->transpos = this->makePosition(tmp);
HXLINE( 683)						j->transpos->sx = this->round(s->x);
HXLINE( 684)						j->transpos->sy = this->round(s->y);
HXLINE( 685)						j->transpos->sz = this->round(s->z);
            					}
            				}
HXLINE( 688)				s->joints->push(j);
            			}
            		}
HXLINE( 690)		if (::hx::IsNotNull( skin->splitJoints )) {
HXLINE( 691)			s->split = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 692)			{
HXLINE( 692)				int _g = 0;
HXDLIN( 692)				::Array< ::Dynamic> _g1 = skin->splitJoints;
HXDLIN( 692)				while((_g < _g1->length)){
HXLINE( 692)					 ::Dynamic sp = _g1->__get(_g);
HXDLIN( 692)					_g = (_g + 1);
HXLINE( 693)					 ::hxd::fmt::hmd::SkinSplit ss =  ::hxd::fmt::hmd::SkinSplit_obj::__alloc( HX_CTX );
HXLINE( 694)					ss->materialIndex = ( (int)(sp->__Field(HX_("material",a7,5c,a5,f0),::hx::paccDynamic)) );
HXLINE( 695)					::Array< int > _g2 = ::Array_obj< int >::__new(0);
HXDLIN( 695)					{
HXLINE( 695)						int _g3 = 0;
HXDLIN( 695)						::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(sp->__Field(HX_("joints",e9,e7,09,91),::hx::paccDynamic)) );
HXDLIN( 695)						while((_g3 < _g4->length)){
HXLINE( 695)							 ::h3d::anim::Joint j = _g4->__get(_g3).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 695)							_g3 = (_g3 + 1);
HXDLIN( 695)							_g2->push(j->index);
            						}
            					}
HXDLIN( 695)					ss->joints = _g2;
HXLINE( 696)					s->split->push(ss);
            				}
            			}
            		}
HXLINE( 699)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC2(HMDOut_obj,makeSkin,return )

 ::hxd::fmt::hmd::Position HMDOut_obj::makePosition( ::h3d::Matrix m){
            	HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_702_makePosition)
HXLINE( 703)		 ::hxd::fmt::hmd::Position p =  ::hxd::fmt::hmd::Position_obj::__alloc( HX_CTX );
HXLINE( 704)		 ::h3d::Vector v = null();
HXDLIN( 704)		if (::hx::IsNull( v )) {
HXLINE( 704)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXDLIN( 704)		v->x = ::Math_obj::sqrt((((m->_11 * m->_11) + (m->_12 * m->_12)) + (m->_13 * m->_13)));
HXDLIN( 704)		v->y = ::Math_obj::sqrt((((m->_21 * m->_21) + (m->_22 * m->_22)) + (m->_23 * m->_23)));
HXDLIN( 704)		v->z = ::Math_obj::sqrt((((m->_31 * m->_31) + (m->_32 * m->_32)) + (m->_33 * m->_33)));
HXDLIN( 704)		if (((((m->_11 * ((m->_22 * m->_33) - (m->_23 * m->_32))) + (m->_12 * ((m->_23 * m->_31) - (m->_21 * m->_33)))) + (m->_13 * ((m->_21 * m->_32) - (m->_22 * m->_31)))) < 0)) {
HXLINE( 704)			 ::h3d::Vector v1 = v;
HXDLIN( 704)			v1->x = (v1->x * ( (Float)(-1) ));
HXDLIN( 704)			 ::h3d::Vector v2 = v;
HXDLIN( 704)			v2->y = (v2->y * ( (Float)(-1) ));
HXDLIN( 704)			 ::h3d::Vector v3 = v;
HXDLIN( 704)			v3->z = (v3->z * ( (Float)(-1) ));
            		}
HXDLIN( 704)		 ::h3d::Vector s = v;
HXLINE( 705)		 ::h3d::Quat q =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 706)		q->initRotateMatrix(m);
HXLINE( 707)		q->normalize();
HXLINE( 708)		if ((q->w < 0)) {
HXLINE( 708)			q->x = -(q->x);
HXDLIN( 708)			q->y = -(q->y);
HXDLIN( 708)			q->z = -(q->z);
HXDLIN( 708)			q->w = -(q->w);
            		}
HXLINE( 709)		p->sx = this->round(s->x);
HXLINE( 710)		p->sy = this->round(s->y);
HXLINE( 711)		p->sz = this->round(s->z);
HXLINE( 712)		p->qx = this->round(q->x);
HXLINE( 713)		p->qy = this->round(q->y);
HXLINE( 714)		p->qz = this->round(q->z);
HXLINE( 715)		p->x = this->round(m->_41);
HXLINE( 716)		p->y = this->round(m->_42);
HXLINE( 717)		p->z = this->round(m->_43);
HXLINE( 718)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDOut_obj,makePosition,return )

void HMDOut_obj::writeFloat(Float f){
            	HX_STACKFRAME(&_hx_pos_25729c66790247bd_722_writeFloat)
HXDLIN( 722)		Float _hx_tmp;
HXDLIN( 722)		if ((f == 0)) {
HXDLIN( 722)			_hx_tmp = ( (Float)(0) );
            		}
            		else {
HXDLIN( 722)			_hx_tmp = f;
            		}
HXDLIN( 722)		this->dataOut->writeFloat(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDOut_obj,writeFloat,(void))

void HMDOut_obj::writeFrame( ::h3d::anim::LinearObject o,int fid){
            	HX_STACKFRAME(&_hx_pos_25729c66790247bd_725_writeFrame)
HXLINE( 726)		if ((this->d->version < 3)) {
HXLINE( 726)			return;
            		}
HXLINE( 727)		if (::hx::IsNotNull( o->frames )) {
HXLINE( 728)			 ::h3d::anim::LinearFrame f = ( ( ::h3d::anim::LinearFrame)(_hx_array_unsafe_get(o->frames,fid)) );
HXLINE( 729)			if (o->hasPosition) {
HXLINE( 730)				{
HXLINE( 730)					Float f1 = f->tx;
HXDLIN( 730)					Float _hx_tmp;
HXDLIN( 730)					if ((f1 == 0)) {
HXLINE( 730)						_hx_tmp = ( (Float)(0) );
            					}
            					else {
HXLINE( 730)						_hx_tmp = f1;
            					}
HXDLIN( 730)					this->dataOut->writeFloat(_hx_tmp);
            				}
HXLINE( 731)				{
HXLINE( 731)					Float f2 = f->ty;
HXDLIN( 731)					Float _hx_tmp1;
HXDLIN( 731)					if ((f2 == 0)) {
HXLINE( 731)						_hx_tmp1 = ( (Float)(0) );
            					}
            					else {
HXLINE( 731)						_hx_tmp1 = f2;
            					}
HXDLIN( 731)					this->dataOut->writeFloat(_hx_tmp1);
            				}
HXLINE( 732)				{
HXLINE( 732)					Float f3 = f->tz;
HXDLIN( 732)					Float _hx_tmp2;
HXDLIN( 732)					if ((f3 == 0)) {
HXLINE( 732)						_hx_tmp2 = ( (Float)(0) );
            					}
            					else {
HXLINE( 732)						_hx_tmp2 = f3;
            					}
HXDLIN( 732)					this->dataOut->writeFloat(_hx_tmp2);
            				}
            			}
HXLINE( 734)			if (o->hasRotation) {
HXLINE( 735)				Float ql = ::Math_obj::sqrt(((((f->qx * f->qx) + (f->qy * f->qy)) + (f->qz * f->qz)) + (f->qw * f->qw)));
HXLINE( 736)				if (((ql * f->qw) < 0)) {
HXLINE( 736)					ql = -(ql);
            				}
HXLINE( 737)				{
HXLINE( 737)					Float f1 = this->round((f->qx / ql));
HXDLIN( 737)					Float _hx_tmp;
HXDLIN( 737)					if ((f1 == 0)) {
HXLINE( 737)						_hx_tmp = ( (Float)(0) );
            					}
            					else {
HXLINE( 737)						_hx_tmp = f1;
            					}
HXDLIN( 737)					this->dataOut->writeFloat(_hx_tmp);
            				}
HXLINE( 738)				{
HXLINE( 738)					Float f2 = this->round((f->qy / ql));
HXDLIN( 738)					Float _hx_tmp1;
HXDLIN( 738)					if ((f2 == 0)) {
HXLINE( 738)						_hx_tmp1 = ( (Float)(0) );
            					}
            					else {
HXLINE( 738)						_hx_tmp1 = f2;
            					}
HXDLIN( 738)					this->dataOut->writeFloat(_hx_tmp1);
            				}
HXLINE( 739)				{
HXLINE( 739)					Float f3 = this->round((f->qz / ql));
HXDLIN( 739)					Float _hx_tmp2;
HXDLIN( 739)					if ((f3 == 0)) {
HXLINE( 739)						_hx_tmp2 = ( (Float)(0) );
            					}
            					else {
HXLINE( 739)						_hx_tmp2 = f3;
            					}
HXDLIN( 739)					this->dataOut->writeFloat(_hx_tmp2);
            				}
            			}
HXLINE( 741)			if (o->hasScale) {
HXLINE( 742)				{
HXLINE( 742)					Float f1 = f->sx;
HXDLIN( 742)					Float _hx_tmp;
HXDLIN( 742)					if ((f1 == 0)) {
HXLINE( 742)						_hx_tmp = ( (Float)(0) );
            					}
            					else {
HXLINE( 742)						_hx_tmp = f1;
            					}
HXDLIN( 742)					this->dataOut->writeFloat(_hx_tmp);
            				}
HXLINE( 743)				{
HXLINE( 743)					Float f2 = f->sy;
HXDLIN( 743)					Float _hx_tmp1;
HXDLIN( 743)					if ((f2 == 0)) {
HXLINE( 743)						_hx_tmp1 = ( (Float)(0) );
            					}
            					else {
HXLINE( 743)						_hx_tmp1 = f2;
            					}
HXDLIN( 743)					this->dataOut->writeFloat(_hx_tmp1);
            				}
HXLINE( 744)				{
HXLINE( 744)					Float f3 = f->sz;
HXDLIN( 744)					Float _hx_tmp2;
HXDLIN( 744)					if ((f3 == 0)) {
HXLINE( 744)						_hx_tmp2 = ( (Float)(0) );
            					}
            					else {
HXLINE( 744)						_hx_tmp2 = f3;
            					}
HXDLIN( 744)					this->dataOut->writeFloat(_hx_tmp2);
            				}
            			}
            		}
HXLINE( 747)		if (::hx::IsNotNull( o->uvs )) {
HXLINE( 748)			{
HXLINE( 748)				Float f = ( (Float)(_hx_array_unsafe_get(o->uvs,(fid << 1))) );
HXDLIN( 748)				Float _hx_tmp;
HXDLIN( 748)				if ((f == 0)) {
HXLINE( 748)					_hx_tmp = ( (Float)(0) );
            				}
            				else {
HXLINE( 748)					_hx_tmp = f;
            				}
HXDLIN( 748)				this->dataOut->writeFloat(_hx_tmp);
            			}
HXLINE( 749)			{
HXLINE( 749)				Float f1 = ( (Float)(_hx_array_unsafe_get(o->uvs,((fid << 1) + 1))) );
HXDLIN( 749)				Float _hx_tmp1;
HXDLIN( 749)				if ((f1 == 0)) {
HXLINE( 749)					_hx_tmp1 = ( (Float)(0) );
            				}
            				else {
HXLINE( 749)					_hx_tmp1 = f1;
            				}
HXDLIN( 749)				this->dataOut->writeFloat(_hx_tmp1);
            			}
            		}
HXLINE( 751)		if (::hx::IsNotNull( o->alphas )) {
HXLINE( 752)			Float f = ( (Float)(_hx_array_unsafe_get(o->alphas,fid)) );
HXDLIN( 752)			Float _hx_tmp;
HXDLIN( 752)			if ((f == 0)) {
HXLINE( 752)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 752)				_hx_tmp = f;
            			}
HXDLIN( 752)			this->dataOut->writeFloat(_hx_tmp);
            		}
HXLINE( 753)		if (::hx::IsNotNull( o->propValues )) {
HXLINE( 754)			Float f = ( (Float)(_hx_array_unsafe_get(o->propValues,fid)) );
HXDLIN( 754)			Float _hx_tmp;
HXDLIN( 754)			if ((f == 0)) {
HXLINE( 754)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 754)				_hx_tmp = f;
            			}
HXDLIN( 754)			this->dataOut->writeFloat(_hx_tmp);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(HMDOut_obj,writeFrame,(void))

 ::hxd::fmt::hmd::Animation HMDOut_obj::makeAnimation( ::h3d::anim::Animation anim){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::h3d::anim::LinearObject o1, ::h3d::anim::LinearObject o2){
            			HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_769_makeAnimation)
HXLINE( 769)			return ::Reflect_obj::compare(o1->objectName,o2->objectName);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_757_makeAnimation)
HXLINE( 758)		 ::hxd::fmt::hmd::Animation a =  ::hxd::fmt::hmd::Animation_obj::__alloc( HX_CTX );
HXLINE( 759)		a->name = anim->name;
HXLINE( 760)		a->loop = true;
HXLINE( 761)		a->speed = ( (Float)(1) );
HXLINE( 762)		a->sampling = anim->sampling;
HXLINE( 763)		a->frames = anim->frameCount;
HXLINE( 764)		a->objects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 765)		a->dataPosition = this->dataOut->b->b->length;
HXLINE( 766)		if (::hx::IsNotNull( this->animationEvents )) {
HXLINE( 767)			::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 767)			{
HXLINE( 767)				int _g1 = 0;
HXDLIN( 767)				::Array< ::Dynamic> _g2 = this->animationEvents;
HXDLIN( 767)				while((_g1 < _g2->length)){
HXLINE( 767)					 ::Dynamic a = _g2->__get(_g1);
HXDLIN( 767)					_g1 = (_g1 + 1);
HXDLIN( 767)					 ::hxd::fmt::hmd::AnimationEvent e =  ::hxd::fmt::hmd::AnimationEvent_obj::__alloc( HX_CTX );
HXDLIN( 767)					e->frame = ( (int)(a->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic)) );
HXDLIN( 767)					e->data = ( (::String)(a->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) );
HXDLIN( 767)					_g->push(e);
            				}
            			}
HXDLIN( 767)			a->events = _g;
            		}
HXLINE( 768)		::Array< ::Dynamic> objects = anim->objects;
HXLINE( 769)		objects->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 771)		::Array< ::Dynamic> animatedObjects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 772)		{
HXLINE( 772)			int _g = 0;
HXDLIN( 772)			while((_g < objects->length)){
HXLINE( 772)				 ::h3d::anim::LinearObject obj = objects->__get(_g).StaticCast<  ::h3d::anim::LinearObject >();
HXDLIN( 772)				_g = (_g + 1);
HXLINE( 773)				 ::hxd::fmt::hmd::AnimationObject o =  ::hxd::fmt::hmd::AnimationObject_obj::__alloc( HX_CTX );
HXLINE( 774)				int count = 0;
HXLINE( 775)				o->name = obj->objectName;
HXLINE( 776)				int this1 = 0;
HXDLIN( 776)				o->flags = this1;
HXLINE( 777)				o->props = ::Array_obj< ::String >::__new(0);
HXLINE( 778)				if (::hx::IsNotNull( obj->frames )) {
HXLINE( 779)					count = obj->frames->length;
HXLINE( 780)					bool _hx_tmp;
HXDLIN( 780)					if (!(obj->hasPosition)) {
HXLINE( 780)						_hx_tmp = (this->d->version < 3);
            					}
            					else {
HXLINE( 780)						_hx_tmp = true;
            					}
HXDLIN( 780)					if (_hx_tmp) {
HXLINE( 781)						 ::hxd::fmt::hmd::AnimationObject o1 = o;
HXDLIN( 781)						int o2 = o1->flags;
HXDLIN( 781)						o1->flags = (o2 | (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasPosition_dyn())));
            					}
HXLINE( 782)					if (obj->hasRotation) {
HXLINE( 783)						 ::hxd::fmt::hmd::AnimationObject o1 = o;
HXDLIN( 783)						int o2 = o1->flags;
HXDLIN( 783)						o1->flags = (o2 | (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasRotation_dyn())));
            					}
HXLINE( 784)					if (obj->hasScale) {
HXLINE( 785)						 ::hxd::fmt::hmd::AnimationObject o1 = o;
HXDLIN( 785)						int o2 = o1->flags;
HXDLIN( 785)						o1->flags = (o2 | (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasScale_dyn())));
            					}
HXLINE( 786)					if ((this->d->version < 3)) {
HXLINE( 787)						int _g = 0;
HXDLIN( 787)						::Array< ::Dynamic> _g1 = obj->frames;
HXDLIN( 787)						while((_g < _g1->length)){
HXLINE( 787)							 ::h3d::anim::LinearFrame f = ( ( ::h3d::anim::LinearFrame)(_hx_array_unsafe_get(_g1,_g)) );
HXDLIN( 787)							_g = (_g + 1);
HXLINE( 788)							int this1 = o->flags;
HXDLIN( 788)							if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasPosition_dyn()))) != 0)) {
HXLINE( 789)								{
HXLINE( 789)									Float f1 = f->tx;
HXDLIN( 789)									Float _hx_tmp;
HXDLIN( 789)									if ((f1 == 0)) {
HXLINE( 789)										_hx_tmp = ( (Float)(0) );
            									}
            									else {
HXLINE( 789)										_hx_tmp = f1;
            									}
HXDLIN( 789)									this->dataOut->writeFloat(_hx_tmp);
            								}
HXLINE( 790)								{
HXLINE( 790)									Float f2 = f->ty;
HXDLIN( 790)									Float _hx_tmp1;
HXDLIN( 790)									if ((f2 == 0)) {
HXLINE( 790)										_hx_tmp1 = ( (Float)(0) );
            									}
            									else {
HXLINE( 790)										_hx_tmp1 = f2;
            									}
HXDLIN( 790)									this->dataOut->writeFloat(_hx_tmp1);
            								}
HXLINE( 791)								{
HXLINE( 791)									Float f3 = f->tz;
HXDLIN( 791)									Float _hx_tmp2;
HXDLIN( 791)									if ((f3 == 0)) {
HXLINE( 791)										_hx_tmp2 = ( (Float)(0) );
            									}
            									else {
HXLINE( 791)										_hx_tmp2 = f3;
            									}
HXDLIN( 791)									this->dataOut->writeFloat(_hx_tmp2);
            								}
            							}
HXLINE( 793)							int this2 = o->flags;
HXDLIN( 793)							if (((this2 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasRotation_dyn()))) != 0)) {
HXLINE( 794)								Float ql = ::Math_obj::sqrt(((((f->qx * f->qx) + (f->qy * f->qy)) + (f->qz * f->qz)) + (f->qw * f->qw)));
HXLINE( 795)								if ((f->qw < 0)) {
HXLINE( 795)									ql = -(ql);
            								}
HXLINE( 796)								{
HXLINE( 796)									Float f1 = this->round((f->qx / ql));
HXDLIN( 796)									Float _hx_tmp;
HXDLIN( 796)									if ((f1 == 0)) {
HXLINE( 796)										_hx_tmp = ( (Float)(0) );
            									}
            									else {
HXLINE( 796)										_hx_tmp = f1;
            									}
HXDLIN( 796)									this->dataOut->writeFloat(_hx_tmp);
            								}
HXLINE( 797)								{
HXLINE( 797)									Float f2 = this->round((f->qy / ql));
HXDLIN( 797)									Float _hx_tmp1;
HXDLIN( 797)									if ((f2 == 0)) {
HXLINE( 797)										_hx_tmp1 = ( (Float)(0) );
            									}
            									else {
HXLINE( 797)										_hx_tmp1 = f2;
            									}
HXDLIN( 797)									this->dataOut->writeFloat(_hx_tmp1);
            								}
HXLINE( 798)								{
HXLINE( 798)									Float f3 = this->round((f->qz / ql));
HXDLIN( 798)									Float _hx_tmp2;
HXDLIN( 798)									if ((f3 == 0)) {
HXLINE( 798)										_hx_tmp2 = ( (Float)(0) );
            									}
            									else {
HXLINE( 798)										_hx_tmp2 = f3;
            									}
HXDLIN( 798)									this->dataOut->writeFloat(_hx_tmp2);
            								}
            							}
HXLINE( 800)							int this3 = o->flags;
HXDLIN( 800)							if (((this3 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasScale_dyn()))) != 0)) {
HXLINE( 801)								{
HXLINE( 801)									Float f1 = f->sx;
HXDLIN( 801)									Float _hx_tmp;
HXDLIN( 801)									if ((f1 == 0)) {
HXLINE( 801)										_hx_tmp = ( (Float)(0) );
            									}
            									else {
HXLINE( 801)										_hx_tmp = f1;
            									}
HXDLIN( 801)									this->dataOut->writeFloat(_hx_tmp);
            								}
HXLINE( 802)								{
HXLINE( 802)									Float f2 = f->sy;
HXDLIN( 802)									Float _hx_tmp1;
HXDLIN( 802)									if ((f2 == 0)) {
HXLINE( 802)										_hx_tmp1 = ( (Float)(0) );
            									}
            									else {
HXLINE( 802)										_hx_tmp1 = f2;
            									}
HXDLIN( 802)									this->dataOut->writeFloat(_hx_tmp1);
            								}
HXLINE( 803)								{
HXLINE( 803)									Float f3 = f->sz;
HXDLIN( 803)									Float _hx_tmp2;
HXDLIN( 803)									if ((f3 == 0)) {
HXLINE( 803)										_hx_tmp2 = ( (Float)(0) );
            									}
            									else {
HXLINE( 803)										_hx_tmp2 = f3;
            									}
HXDLIN( 803)									this->dataOut->writeFloat(_hx_tmp2);
            								}
            							}
            						}
            					}
            				}
HXLINE( 808)				if (::hx::IsNotNull( obj->uvs )) {
HXLINE( 809)					 ::hxd::fmt::hmd::AnimationObject o1 = o;
HXDLIN( 809)					int o2 = o1->flags;
HXDLIN( 809)					o1->flags = (o2 | (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasUV_dyn())));
HXLINE( 810)					if ((count == 0)) {
HXLINE( 810)						count = (obj->uvs->length >> 1);
            					}
            					else {
HXLINE( 810)						if ((count != (obj->uvs->length >> 1))) {
HXLINE( 810)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            						}
            					}
HXLINE( 811)					if ((this->d->version < 3)) {
HXLINE( 812)						int _g = 0;
HXDLIN( 812)						::Array< Float > _g1 = obj->uvs;
HXDLIN( 812)						while((_g < _g1->length)){
HXLINE( 812)							Float f = ( (Float)(_hx_array_unsafe_get(_g1,_g)) );
HXDLIN( 812)							_g = (_g + 1);
HXLINE( 813)							Float _hx_tmp;
HXDLIN( 813)							if ((f == 0)) {
HXLINE( 813)								_hx_tmp = ( (Float)(0) );
            							}
            							else {
HXLINE( 813)								_hx_tmp = f;
            							}
HXDLIN( 813)							this->dataOut->writeFloat(_hx_tmp);
            						}
            					}
            				}
HXLINE( 815)				if (::hx::IsNotNull( obj->alphas )) {
HXLINE( 816)					 ::hxd::fmt::hmd::AnimationObject o1 = o;
HXDLIN( 816)					int o2 = o1->flags;
HXDLIN( 816)					o1->flags = (o2 | (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasAlpha_dyn())));
HXLINE( 817)					if ((count == 0)) {
HXLINE( 817)						count = obj->alphas->length;
            					}
            					else {
HXLINE( 817)						if ((count != obj->alphas->length)) {
HXLINE( 817)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            						}
            					}
HXLINE( 818)					if ((this->d->version < 3)) {
HXLINE( 819)						int _g = 0;
HXDLIN( 819)						::Array< Float > _g1 = obj->alphas;
HXDLIN( 819)						while((_g < _g1->length)){
HXLINE( 819)							Float f = ( (Float)(_hx_array_unsafe_get(_g1,_g)) );
HXDLIN( 819)							_g = (_g + 1);
HXLINE( 820)							Float _hx_tmp;
HXDLIN( 820)							if ((f == 0)) {
HXLINE( 820)								_hx_tmp = ( (Float)(0) );
            							}
            							else {
HXLINE( 820)								_hx_tmp = f;
            							}
HXDLIN( 820)							this->dataOut->writeFloat(_hx_tmp);
            						}
            					}
            				}
HXLINE( 822)				if (::hx::IsNotNull( obj->propValues )) {
HXLINE( 823)					 ::hxd::fmt::hmd::AnimationObject o1 = o;
HXDLIN( 823)					int o2 = o1->flags;
HXDLIN( 823)					o1->flags = (o2 | (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasProps_dyn())));
HXLINE( 824)					o->props->push(obj->propName);
HXLINE( 825)					if ((count == 0)) {
HXLINE( 825)						count = obj->propValues->length;
            					}
            					else {
HXLINE( 825)						if ((count != obj->propValues->length)) {
HXLINE( 825)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            						}
            					}
HXLINE( 826)					if ((this->d->version < 3)) {
HXLINE( 827)						int _g = 0;
HXDLIN( 827)						::Array< Float > _g1 = obj->propValues;
HXDLIN( 827)						while((_g < _g1->length)){
HXLINE( 827)							Float f = ( (Float)(_hx_array_unsafe_get(_g1,_g)) );
HXDLIN( 827)							_g = (_g + 1);
HXLINE( 828)							Float _hx_tmp;
HXDLIN( 828)							if ((f == 0)) {
HXLINE( 828)								_hx_tmp = ( (Float)(0) );
            							}
            							else {
HXLINE( 828)								_hx_tmp = f;
            							}
HXDLIN( 828)							this->dataOut->writeFloat(_hx_tmp);
            						}
            					}
            				}
HXLINE( 830)				if ((count == 0)) {
HXLINE( 831)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
HXLINE( 832)				if ((count == 1)) {
HXLINE( 833)					 ::hxd::fmt::hmd::AnimationObject o1 = o;
HXDLIN( 833)					int o2 = o1->flags;
HXDLIN( 833)					o1->flags = (o2 | (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::SingleFrame_dyn())));
HXLINE( 834)					this->writeFrame(obj,0);
            				}
            				else {
HXLINE( 836)					if ((count != anim->frameCount)) {
HXLINE( 836)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
HXLINE( 837)					animatedObjects->push(obj);
            				}
HXLINE( 839)				a->objects->push(o);
            			}
            		}
HXLINE( 841)		{
HXLINE( 841)			int _g1 = 0;
HXDLIN( 841)			int _g2 = anim->frameCount;
HXDLIN( 841)			while((_g1 < _g2)){
HXLINE( 841)				_g1 = (_g1 + 1);
HXDLIN( 841)				int i = (_g1 - 1);
HXLINE( 842)				{
HXLINE( 842)					int _g = 0;
HXDLIN( 842)					while((_g < animatedObjects->length)){
HXLINE( 842)						 ::h3d::anim::LinearObject obj = animatedObjects->__get(_g).StaticCast<  ::h3d::anim::LinearObject >();
HXDLIN( 842)						_g = (_g + 1);
HXLINE( 843)						this->writeFrame(obj,i);
            					}
            				}
            			}
            		}
HXLINE( 844)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HMDOut_obj,makeAnimation,return )

 ::hxd::fmt::hmd::Data HMDOut_obj::toHMD(::String filePath,bool includeGeometry){
            	HX_GC_STACKFRAME(&_hx_pos_25729c66790247bd_847_toHMD)
HXLINE( 851)		if (!(includeGeometry)) {
HXLINE( 852)			this->optimizeSkin = false;
            		}
HXLINE( 854)		this->leftHandConvert();
HXLINE( 855)		this->autoMerge();
HXLINE( 857)		if (::hx::IsNotNull( filePath )) {
HXLINE( 858)			filePath = filePath.split(HX_("\\",5c,00,00,00))->join(HX_("/",2f,00,00,00)).toLowerCase();
HXLINE( 859)			if (!(::StringTools_obj::endsWith(filePath,HX_("/",2f,00,00,00)))) {
HXLINE( 860)				filePath = (filePath + HX_("/",2f,00,00,00));
            			}
            		}
HXLINE( 862)		this->filePath = filePath;
HXLINE( 864)		this->d =  ::hxd::fmt::hmd::Data_obj::__alloc( HX_CTX );
HXLINE( 868)		this->d->version = 3;
HXLINE( 870)		this->d->geometries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 871)		this->d->materials = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 872)		this->d->models = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 873)		this->d->animations = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 875)		this->dataOut =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE( 877)		this->addModels(includeGeometry);
HXLINE( 879)		::Array< ::String > names = this->getAnimationNames();
HXLINE( 880)		{
HXLINE( 880)			int _g = 0;
HXDLIN( 880)			while((_g < names->length)){
HXLINE( 880)				::String animName = names->__get(_g);
HXDLIN( 880)				_g = (_g + 1);
HXLINE( 881)				 ::h3d::anim::Animation anim = this->loadAnimation(animName,null(),null());
HXLINE( 882)				if (::hx::IsNotNull( anim )) {
HXLINE( 883)					::Array< ::Dynamic> _hx_tmp = this->d->animations;
HXDLIN( 883)					_hx_tmp->push(this->makeAnimation(anim));
            				}
            			}
            		}
HXLINE( 886)		this->d->data = this->dataOut->getBytes();
HXLINE( 887)		return this->d;
            	}


HX_DEFINE_DYNAMIC_FUNC2(HMDOut_obj,toHMD,return )


::hx::ObjectPtr< HMDOut_obj > HMDOut_obj::__new(::String fileName) {
	::hx::ObjectPtr< HMDOut_obj > __this = new HMDOut_obj();
	__this->__construct(fileName);
	return __this;
}

::hx::ObjectPtr< HMDOut_obj > HMDOut_obj::__alloc(::hx::Ctx *_hx_ctx,::String fileName) {
	HMDOut_obj *__this = (HMDOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HMDOut_obj), true, "hxd.fmt.fbx.HMDOut"));
	*(void **)__this = HMDOut_obj::_hx_vtable;
	__this->__construct(fileName);
	return __this;
}

HMDOut_obj::HMDOut_obj()
{
}

void HMDOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HMDOut);
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(dataOut,"dataOut");
	HX_MARK_MEMBER_NAME(filePath,"filePath");
	HX_MARK_MEMBER_NAME(tmp,"tmp");
	HX_MARK_MEMBER_NAME(absoluteTexturePath,"absoluteTexturePath");
	HX_MARK_MEMBER_NAME(optimizeSkin,"optimizeSkin");
	HX_MARK_MEMBER_NAME(floatSkinIndexes,"floatSkinIndexes");
	 ::hxd::fmt::fbx::BaseLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HMDOut_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(dataOut,"dataOut");
	HX_VISIT_MEMBER_NAME(filePath,"filePath");
	HX_VISIT_MEMBER_NAME(tmp,"tmp");
	HX_VISIT_MEMBER_NAME(absoluteTexturePath,"absoluteTexturePath");
	HX_VISIT_MEMBER_NAME(optimizeSkin,"optimizeSkin");
	HX_VISIT_MEMBER_NAME(floatSkinIndexes,"floatSkinIndexes");
	 ::hxd::fmt::fbx::BaseLibrary_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HMDOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { return ::hx::Val( tmp ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toHMD") ) { return ::hx::Val( toHMD_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dataOut") ) { return ::hx::Val( dataOut ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"filePath") ) { return ::hx::Val( filePath ); }
		if (HX_FIELD_EQ(inName,"int32tof") ) { return ::hx::Val( int32tof_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeSkin") ) { return ::hx::Val( makeSkin_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keepJoint") ) { return ::hx::Val( keepJoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"buildGeom") ) { return ::hx::Val( buildGeom_dyn() ); }
		if (HX_FIELD_EQ(inName,"addModels") ) { return ::hx::Val( addModels_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return ::hx::Val( writeFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeFrame") ) { return ::hx::Val( writeFrame_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optimizeSkin") ) { return ::hx::Val( optimizeSkin ); }
		if (HX_FIELD_EQ(inName,"makePosition") ) { return ::hx::Val( makePosition_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildTangents") ) { return ::hx::Val( buildTangents_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeAnimation") ) { return ::hx::Val( makeAnimation_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"makeTexturePath") ) { return ::hx::Val( makeTexturePath_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"floatSkinIndexes") ) { return ::hx::Val( floatSkinIndexes ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"absoluteTexturePath") ) { return ::hx::Val( absoluteTexturePath ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HMDOut_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast<  ::hxd::fmt::hmd::Data >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tmp") ) { tmp=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dataOut") ) { dataOut=inValue.Cast<  ::haxe::io::BytesOutput >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"filePath") ) { filePath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optimizeSkin") ) { optimizeSkin=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"floatSkinIndexes") ) { floatSkinIndexes=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"absoluteTexturePath") ) { absoluteTexturePath=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HMDOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("dataOut",84,b8,d5,11));
	outFields->push(HX_("filePath",41,ce,95,63));
	outFields->push(HX_("tmp",d7,64,58,00));
	outFields->push(HX_("absoluteTexturePath",e9,62,c0,69));
	outFields->push(HX_("optimizeSkin",fa,01,0b,19));
	outFields->push(HX_("floatSkinIndexes",c7,a6,2a,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HMDOut_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::fmt::hmd::Data */ ,(int)offsetof(HMDOut_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsObject /*  ::haxe::io::BytesOutput */ ,(int)offsetof(HMDOut_obj,dataOut),HX_("dataOut",84,b8,d5,11)},
	{::hx::fsString,(int)offsetof(HMDOut_obj,filePath),HX_("filePath",41,ce,95,63)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(HMDOut_obj,tmp),HX_("tmp",d7,64,58,00)},
	{::hx::fsBool,(int)offsetof(HMDOut_obj,absoluteTexturePath),HX_("absoluteTexturePath",e9,62,c0,69)},
	{::hx::fsBool,(int)offsetof(HMDOut_obj,optimizeSkin),HX_("optimizeSkin",fa,01,0b,19)},
	{::hx::fsBool,(int)offsetof(HMDOut_obj,floatSkinIndexes),HX_("floatSkinIndexes",c7,a6,2a,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HMDOut_obj_sStaticStorageInfo = 0;
#endif

static ::String HMDOut_obj_sMemberFields[] = {
	HX_("d",64,00,00,00),
	HX_("dataOut",84,b8,d5,11),
	HX_("filePath",41,ce,95,63),
	HX_("tmp",d7,64,58,00),
	HX_("absoluteTexturePath",e9,62,c0,69),
	HX_("optimizeSkin",fa,01,0b,19),
	HX_("floatSkinIndexes",c7,a6,2a,c7),
	HX_("int32tof",fd,57,24,34),
	HX_("keepJoint",85,d6,13,d1),
	HX_("buildTangents",5c,05,ec,33),
	HX_("buildGeom",0a,35,9e,e4),
	HX_("addModels",ab,45,eb,78),
	HX_("makeTexturePath",d2,cc,cd,2f),
	HX_("makeSkin",8b,0b,f3,42),
	HX_("makePosition",b7,34,d3,0f),
	HX_("writeFloat",3d,c0,58,97),
	HX_("writeFrame",ce,72,45,9b),
	HX_("makeAnimation",36,e7,dd,43),
	HX_("toHMD",04,df,10,14),
	::String(null()) };

::hx::Class HMDOut_obj::__mClass;

void HMDOut_obj::__register()
{
	HMDOut_obj _hx_dummy;
	HMDOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.fbx.HMDOut",fc,23,f6,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HMDOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HMDOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HMDOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HMDOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
