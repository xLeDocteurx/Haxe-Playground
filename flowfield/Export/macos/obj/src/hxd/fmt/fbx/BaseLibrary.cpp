#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
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
#ifndef INCLUDED_h3d_anim_Animation
#include <h3d/anim/Animation.h>
#endif
#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_anim_LinearAnimation
#include <h3d/anim/LinearAnimation.h>
#endif
#ifndef INCLUDED_h3d_anim_LinearFrame
#include <h3d/anim/LinearFrame.h>
#endif
#ifndef INCLUDED_h3d_anim_Skin
#include <h3d/anim/Skin.h>
#endif
#ifndef INCLUDED_h3d_anim__Skin_Influence
#include <h3d/anim/_Skin/Influence.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_haxe_xml__Access_Access_Impl_
#include <haxe/xml/_Access/Access_Impl_.h>
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
#ifndef INCLUDED_hxd_fmt_fbx_Parser
#include <hxd/fmt/fbx/Parser.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_TmpObject
#include <hxd/fmt/fbx/TmpObject.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx__BaseLibrary_AnimCurve
#include <hxd/fmt/fbx/_BaseLibrary/AnimCurve.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_93_new,"hxd.fmt.fbx.BaseLibrary","new",0xaf025b4f,"hxd.fmt.fbx.BaseLibrary.new","hxd/fmt/fbx/BaseLibrary.hx",93,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_153_reset,"hxd.fmt.fbx.BaseLibrary","reset",0x8662ae7e,"hxd.fmt.fbx.BaseLibrary.reset","hxd/fmt/fbx/BaseLibrary.hx",153,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_162_loadFile,"hxd.fmt.fbx.BaseLibrary","loadFile",0xde041273,"hxd.fmt.fbx.BaseLibrary.loadFile","hxd/fmt/fbx/BaseLibrary.hx",162,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_165_load,"hxd.fmt.fbx.BaseLibrary","load",0x71c2a057,"hxd.fmt.fbx.BaseLibrary.load","hxd/fmt/fbx/BaseLibrary.hx",165,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_213_toFloats,"hxd.fmt.fbx.BaseLibrary","toFloats",0x923d3de3,"hxd.fmt.fbx.BaseLibrary.toFloats","hxd/fmt/fbx/BaseLibrary.hx",213,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_226_getAllModels,"hxd.fmt.fbx.BaseLibrary","getAllModels",0x54374866,"hxd.fmt.fbx.BaseLibrary.getAllModels","hxd/fmt/fbx/BaseLibrary.hx",226,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_230_getRootModels,"hxd.fmt.fbx.BaseLibrary","getRootModels",0x57e24051,"hxd.fmt.fbx.BaseLibrary.getRootModels","hxd/fmt/fbx/BaseLibrary.hx",230,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_234_isRootModel,"hxd.fmt.fbx.BaseLibrary","isRootModel",0xc24472cc,"hxd.fmt.fbx.BaseLibrary.isRootModel","hxd/fmt/fbx/BaseLibrary.hx",234,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_237_updateModelScale,"hxd.fmt.fbx.BaseLibrary","updateModelScale",0x05d5113b,"hxd.fmt.fbx.BaseLibrary.updateModelScale","hxd/fmt/fbx/BaseLibrary.hx",237,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_333_convertYupToZup,"hxd.fmt.fbx.BaseLibrary","convertYupToZup",0x8cddd568,"hxd.fmt.fbx.BaseLibrary.convertYupToZup","hxd/fmt/fbx/BaseLibrary.hx",333,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_363_convertPoints,"hxd.fmt.fbx.BaseLibrary","convertPoints",0x7c2d2825,"hxd.fmt.fbx.BaseLibrary.convertPoints","hxd/fmt/fbx/BaseLibrary.hx",363,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_371_leftHandConvert,"hxd.fmt.fbx.BaseLibrary","leftHandConvert",0x1a541aec,"hxd.fmt.fbx.BaseLibrary.leftHandConvert","hxd/fmt/fbx/BaseLibrary.hx",371,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_387_init,"hxd.fmt.fbx.BaseLibrary","init",0x6fc64141,"hxd.fmt.fbx.BaseLibrary.init","hxd/fmt/fbx/BaseLibrary.hx",387,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_436_getGeometry,"hxd.fmt.fbx.BaseLibrary","getGeometry",0x17465757,"hxd.fmt.fbx.BaseLibrary.getGeometry","hxd/fmt/fbx/BaseLibrary.hx",436,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_448_getParent,"hxd.fmt.fbx.BaseLibrary","getParent",0xb390768f,"hxd.fmt.fbx.BaseLibrary.getParent","hxd/fmt/fbx/BaseLibrary.hx",448,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_457_getChild,"hxd.fmt.fbx.BaseLibrary","getChild",0xcf392bd7,"hxd.fmt.fbx.BaseLibrary.getChild","hxd/fmt/fbx/BaseLibrary.hx",457,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_466_getSpecChild,"hxd.fmt.fbx.BaseLibrary","getSpecChild",0x63c4811c,"hxd.fmt.fbx.BaseLibrary.getSpecChild","hxd/fmt/fbx/BaseLibrary.hx",466,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_476_getChilds,"hxd.fmt.fbx.BaseLibrary","getChilds",0x82cd30bc,"hxd.fmt.fbx.BaseLibrary.getChilds","hxd/fmt/fbx/BaseLibrary.hx",476,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_489_getParents,"hxd.fmt.fbx.BaseLibrary","getParents",0x6ad74704,"hxd.fmt.fbx.BaseLibrary.getParents","hxd/fmt/fbx/BaseLibrary.hx",489,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_503_getRoot,"hxd.fmt.fbx.BaseLibrary","getRoot",0xa4b1cc47,"hxd.fmt.fbx.BaseLibrary.getRoot","hxd/fmt/fbx/BaseLibrary.hx",503,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_506_ignoreMissingObject,"hxd.fmt.fbx.BaseLibrary","ignoreMissingObject",0xb29aaf42,"hxd.fmt.fbx.BaseLibrary.ignoreMissingObject","hxd/fmt/fbx/BaseLibrary.hx",506,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_515_buildHierarchy,"hxd.fmt.fbx.BaseLibrary","buildHierarchy",0xec65c1d8,"hxd.fmt.fbx.BaseLibrary.buildHierarchy","hxd/fmt/fbx/BaseLibrary.hx",515,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_625_getObjectCurve,"hxd.fmt.fbx.BaseLibrary","getObjectCurve",0x6c06c9eb,"hxd.fmt.fbx.BaseLibrary.getObjectCurve","hxd/fmt/fbx/BaseLibrary.hx",625,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_661_mergeModels,"hxd.fmt.fbx.BaseLibrary","mergeModels",0x2ade9371,"hxd.fmt.fbx.BaseLibrary.mergeModels","hxd/fmt/fbx/BaseLibrary.hx",661,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_657_mergeModels,"hxd.fmt.fbx.BaseLibrary","mergeModels",0x2ade9371,"hxd.fmt.fbx.BaseLibrary.mergeModels","hxd/fmt/fbx/BaseLibrary.hx",657,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_735_addLink,"hxd.fmt.fbx.BaseLibrary","addLink",0x0a70892a,"hxd.fmt.fbx.BaseLibrary.addLink","hxd/fmt/fbx/BaseLibrary.hx",735,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_742_removeLink,"hxd.fmt.fbx.BaseLibrary","removeLink",0xff81934f,"hxd.fmt.fbx.BaseLibrary.removeLink","hxd/fmt/fbx/BaseLibrary.hx",742,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_749_checkData,"hxd.fmt.fbx.BaseLibrary","checkData",0xdfff0741,"hxd.fmt.fbx.BaseLibrary.checkData","hxd/fmt/fbx/BaseLibrary.hx",749,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_773_roundValues,"hxd.fmt.fbx.BaseLibrary","roundValues",0xa0af30bf,"hxd.fmt.fbx.BaseLibrary.roundValues","hxd/fmt/fbx/BaseLibrary.hx",773,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_789_getAnimationNames,"hxd.fmt.fbx.BaseLibrary","getAnimationNames",0x97520089,"hxd.fmt.fbx.BaseLibrary.getAnimationNames","hxd/fmt/fbx/BaseLibrary.hx",789,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1051_loadAnimation,"hxd.fmt.fbx.BaseLibrary","loadAnimation",0x173febad,"hxd.fmt.fbx.BaseLibrary.loadAnimation","hxd/fmt/fbx/BaseLibrary.hx",1051,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1053_loadAnimation,"hxd.fmt.fbx.BaseLibrary","loadAnimation",0x173febad,"hxd.fmt.fbx.BaseLibrary.loadAnimation","hxd/fmt/fbx/BaseLibrary.hx",1053,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_798_loadAnimation,"hxd.fmt.fbx.BaseLibrary","loadAnimation",0x173febad,"hxd.fmt.fbx.BaseLibrary.loadAnimation","hxd/fmt/fbx/BaseLibrary.hx",798,0x92683fc4)
static const Float _hx_array_data_ba2907dd_133[] = {
	-1.,
};
static const Float _hx_array_data_ba2907dd_134[] = {
	-1.,
};
static const Float _hx_array_data_ba2907dd_135[] = {
	-1.,
};
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1217_sortDistinctFloats,"hxd.fmt.fbx.BaseLibrary","sortDistinctFloats",0x5f7772a2,"hxd.fmt.fbx.BaseLibrary.sortDistinctFloats","hxd/fmt/fbx/BaseLibrary.hx",1217,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1220_isNullJoint,"hxd.fmt.fbx.BaseLibrary","isNullJoint",0x63e249e8,"hxd.fmt.fbx.BaseLibrary.isNullJoint","hxd/fmt/fbx/BaseLibrary.hx",1220,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1232_getModelPath,"hxd.fmt.fbx.BaseLibrary","getModelPath",0x679579a9,"hxd.fmt.fbx.BaseLibrary.getModelPath","hxd/fmt/fbx/BaseLibrary.hx",1232,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1240_autoMerge,"hxd.fmt.fbx.BaseLibrary","autoMerge",0x2d8dc8f8,"hxd.fmt.fbx.BaseLibrary.autoMerge","hxd/fmt/fbx/BaseLibrary.hx",1240,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1276_autoMerge,"hxd.fmt.fbx.BaseLibrary","autoMerge",0x2d8dc8f8,"hxd.fmt.fbx.BaseLibrary.autoMerge","hxd/fmt/fbx/BaseLibrary.hx",1276,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1291_keepJoint,"hxd.fmt.fbx.BaseLibrary","keepJoint",0x1acfbeb4,"hxd.fmt.fbx.BaseLibrary.keepJoint","hxd/fmt/fbx/BaseLibrary.hx",1291,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1296_createSkin,"hxd.fmt.fbx.BaseLibrary","createSkin",0x9992188a,"hxd.fmt.fbx.BaseLibrary.createSkin","hxd/fmt/fbx/BaseLibrary.hx",1296,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1294_createSkin,"hxd.fmt.fbx.BaseLibrary","createSkin",0x9992188a,"hxd.fmt.fbx.BaseLibrary.createSkin","hxd/fmt/fbx/BaseLibrary.hx",1294,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1363_round,"hxd.fmt.fbx.BaseLibrary","round",0x8d005cfd,"hxd.fmt.fbx.BaseLibrary.round","hxd/fmt/fbx/BaseLibrary.hx",1363,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1368_updateDefaultMatrix,"hxd.fmt.fbx.BaseLibrary","updateDefaultMatrix",0x654b9b08,"hxd.fmt.fbx.BaseLibrary.updateDefaultMatrix","hxd/fmt/fbx/BaseLibrary.hx",1368,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_1445_getDefaultMatrixes,"hxd.fmt.fbx.BaseLibrary","getDefaultMatrixes",0x33f9d8cb,"hxd.fmt.fbx.BaseLibrary.getDefaultMatrixes","hxd/fmt/fbx/BaseLibrary.hx",1445,0x92683fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_4c43ae5b6e363de9_131_boot,"hxd.fmt.fbx.BaseLibrary","boot",0x6b268a63,"hxd.fmt.fbx.BaseLibrary.boot","hxd/fmt/fbx/BaseLibrary.hx",131,0x92683fc4)
namespace hxd{
namespace fmt{
namespace fbx{

void BaseLibrary_obj::__construct(::String fileName){
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_93_new)
HXLINE( 143)		this->normalizeScaleOrient = true;
HXLINE( 138)		this->allowVertexColor = true;
HXLINE( 126)		this->bonesPerVertex = 3;
HXLINE( 111)		this->version = ((Float)0.);
HXLINE( 146)		this->fileName = fileName;
HXLINE( 147)		this->root =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("childs",57,bf,ba,bc),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(1,HX_("props",70,e7,8f,c8),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(2,HX_("name",4b,72,ff,48),HX_("Root",42,1a,88,36)));
HXLINE( 148)		this->keepJoints =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 149)		this->skipObjects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 150)		this->reset();
            	}

Dynamic BaseLibrary_obj::__CreateEmpty() { return new BaseLibrary_obj; }

void *BaseLibrary_obj::_hx_vtable = 0;

Dynamic BaseLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseLibrary_obj > _hx_result = new BaseLibrary_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BaseLibrary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37ade3ab;
}

void BaseLibrary_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_153_reset)
HXLINE( 154)		this->ids =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 155)		this->connect =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 156)		this->namedConnect =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 157)		this->invConnect =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 158)		this->defaultModelMatrixes =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseLibrary_obj,reset,(void))

void BaseLibrary_obj::loadFile( ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_162_loadFile)
HXDLIN( 162)		this->load(::hxd::fmt::fbx::Parser_obj::parse(data));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,loadFile,(void))

void BaseLibrary_obj::load( ::Dynamic root){
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_165_load)
HXLINE( 166)		this->reset();
HXLINE( 167)		this->root = root;
HXLINE( 169)		this->version = (( (Float)(::hxd::fmt::fbx::FbxTools_obj::toInt(Dynamic(  ::Dynamic(::hxd::fmt::fbx::FbxTools_obj::get(root,HX_("FBXHeaderExtension.FBXVersion",54,30,6f,7e),null())->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >())) ) / ( (Float)(1000) ));
HXLINE( 170)		if ((::Std_obj::_hx_int(this->version) != 7)) {
HXLINE( 171)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("FBX Version 7.x required : use FBX 2010 export",3e,1f,a5,4d)));
            		}
HXLINE( 173)		{
HXLINE( 173)			int _g = 0;
HXDLIN( 173)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(root,HX_("FBXHeaderExtension.SceneInfo.Properties70.P",fa,47,ef,12));
HXDLIN( 173)			while((_g < _g1->length)){
HXLINE( 173)				 ::Dynamic p = _g1->__get(_g);
HXDLIN( 173)				_g = (_g + 1);
HXLINE( 174)				if ((::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == HX_("Original|ApplicationName",10,c7,50,65))) {
HXLINE( 175)					this->isMaya = (::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()).toLowerCase().indexOf(HX_("maya",1c,46,56,48),null()) >= 0);
HXLINE( 176)					goto _hx_goto_3;
            				}
            			}
            			_hx_goto_3:;
            		}
HXLINE( 179)		{
HXLINE( 179)			int _g2 = 0;
HXDLIN( 179)			::Array< ::Dynamic> _g3 = ( (::Array< ::Dynamic>)(root->__Field(HX_("childs",57,bf,ba,bc),::hx::paccDynamic)) );
HXDLIN( 179)			while((_g2 < _g3->length)){
HXLINE( 179)				 ::Dynamic c = _g3->__get(_g2);
HXDLIN( 179)				_g2 = (_g2 + 1);
HXLINE( 180)				this->init(c);
            			}
            		}
HXLINE( 182)		if (this->normalizeScaleOrient) {
HXLINE( 183)			this->updateModelScale();
            		}
HXLINE( 186)		{
HXLINE( 186)			int _g4 = 0;
HXDLIN( 186)			::Array< ::Dynamic> _g5 = this->getAllModels();
HXDLIN( 186)			while((_g4 < _g5->length)){
HXLINE( 186)				 ::Dynamic m = _g5->__get(_g4);
HXDLIN( 186)				_g4 = (_g4 + 1);
HXLINE( 187)				{
HXLINE( 187)					int _g = 0;
HXDLIN( 187)					::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(m,HX_("Properties70.P",4e,56,dc,4c));
HXDLIN( 187)					while((_g < _g1->length)){
HXLINE( 187)						 ::Dynamic p = _g1->__get(_g);
HXDLIN( 187)						_g = (_g + 1);
HXLINE( 188)						::String _hx_switch_0 = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
            						if (  (_hx_switch_0==HX_("Events",39,c3,fe,ca)) ||  (_hx_switch_0==HX_("UDP3DSMAX",23,7f,cd,fc)) ){
HXLINE( 190)							::Array< ::String > userProps = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()).split(HX_("&cr;&lf;",61,a1,0d,39));
HXLINE( 191)							{
HXLINE( 191)								int _g = 0;
HXDLIN( 191)								while((_g < userProps->length)){
HXLINE( 191)									::String p = userProps->__get(_g);
HXDLIN( 191)									_g = (_g + 1);
HXLINE( 192)									::Array< ::String > pl = p.split(HX_("=",3d,00,00,00));
HXLINE( 193)									::String pname = ::StringTools_obj::trim(( (::String)(pl->shift()) ));
HXLINE( 194)									::String pval = ::StringTools_obj::trim(pl->join(HX_("=",3d,00,00,00)));
HXLINE( 195)									::String _hx_switch_1 = pname;
            									if (  (_hx_switch_1==HX_("Events",39,c3,fe,ca)) ){
HXLINE( 202)										 ::Xml xml;
HXDLIN( 202)										try {
            											HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 202)											xml = ::Xml_obj::parse(pval);
            										} catch( ::Dynamic _hx_e) {
            											if (_hx_e.IsClass<  ::Dynamic >() ){
            												HX_STACK_BEGIN_CATCH
            												 ::Dynamic _g = _hx_e;
HXLINE( 202)												{
HXLINE( 202)													null();
            												}
HXDLIN( 202)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid Events data in ",23,c6,6b,8a) + ::hxd::fmt::fbx::FbxTools_obj::getName(m))));
            											}
            											else {
            												HX_STACK_DO_THROW(_hx_e);
            											}
            										}
HXLINE( 203)										::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 203)										{
HXLINE( 203)											 ::Xml x = xml->firstElement();
HXDLIN( 203)											bool _hx_tmp;
HXDLIN( 203)											if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE( 203)												_hx_tmp = (x->nodeType != ::Xml_obj::Element);
            											}
            											else {
HXLINE( 203)												_hx_tmp = false;
            											}
HXDLIN( 203)											if (_hx_tmp) {
HXLINE( 203)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            											}
HXDLIN( 203)											 ::Xml this1 = x;
HXDLIN( 203)											 ::Dynamic f = this1->elements();
HXDLIN( 203)											while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 203)												 ::Xml f1 = ( ( ::Xml)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 203)												::Array< ::String > f2 = ::haxe::xml::_Access::Access_Impl__obj::get_innerData(f1).split(HX_(" ",20,00,00,00));
HXDLIN( 203)												 ::Dynamic _hx_tmp = ::Std_obj::parseInt(( (::String)(f2->shift()) ));
HXDLIN( 203)												_g->push( ::Dynamic(::hx::Anon_obj::Create(2)
            													->setFixed(0,HX_("frame",2d,78,83,06),_hx_tmp)
            													->setFixed(1,HX_("data",2a,56,63,42),::StringTools_obj::trim(f2->join(HX_(" ",20,00,00,00))))));
            											}
            										}
HXDLIN( 203)										this->animationEvents = _g;
HXLINE( 201)										goto _hx_goto_9;
            									}
            									if (  (_hx_switch_1==HX_("UV",61,4a,00,00)) ){
HXLINE( 196)										if ((pval != HX_("",00,00,00,00))) {
HXLINE( 197)											 ::Xml xml;
HXDLIN( 197)											try {
            												HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 197)												xml = ::Xml_obj::parse(pval);
            											} catch( ::Dynamic _hx_e) {
            												if (_hx_e.IsClass<  ::Dynamic >() ){
            													HX_STACK_BEGIN_CATCH
            													 ::Dynamic _g = _hx_e;
HXLINE( 197)													{
HXLINE( 197)														null();
            													}
HXDLIN( 197)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid UV data in ",7b,b2,c7,82) + ::hxd::fmt::fbx::FbxTools_obj::getName(m))));
            												}
            												else {
            													HX_STACK_DO_THROW(_hx_e);
            												}
            											}
HXLINE( 198)											::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 198)											{
HXLINE( 198)												 ::Xml x = xml->firstElement();
HXDLIN( 198)												bool _hx_tmp;
HXDLIN( 198)												if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE( 198)													_hx_tmp = (x->nodeType != ::Xml_obj::Element);
            												}
            												else {
HXLINE( 198)													_hx_tmp = false;
            												}
HXDLIN( 198)												if (_hx_tmp) {
HXLINE( 198)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            												}
HXDLIN( 198)												 ::Xml this1 = x;
HXDLIN( 198)												 ::Dynamic f = this1->elements();
HXDLIN( 198)												while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 198)													 ::Xml f1 = ( ( ::Xml)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 198)													::Array< ::String > f2 = ::haxe::xml::_Access::Access_Impl__obj::get_innerData(f1).split(HX_(" ",20,00,00,00));
HXDLIN( 198)													Float _hx_tmp = (::Std_obj::parseFloat(f2->__get(0)) * ((Float)9622116.25));
HXDLIN( 198)													Float _hx_tmp1 = ::Std_obj::parseFloat(f2->__get(1));
HXDLIN( 198)													_g->push( ::Dynamic(::hx::Anon_obj::Create(3)
            														->setFixed(0,HX_("t",74,00,00,00),_hx_tmp)
            														->setFixed(1,HX_("u",75,00,00,00),_hx_tmp1)
            														->setFixed(2,HX_("v",76,00,00,00),::Std_obj::parseFloat(f2->__get(2)))));
            												}
            											}
HXDLIN( 198)											::Array< ::Dynamic> frames = _g;
HXLINE( 199)											if (::hx::IsNull( this->uvAnims )) {
HXLINE( 199)												this->uvAnims =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            											}
HXLINE( 200)											{
HXLINE( 200)												::Dynamic this2 = this->uvAnims;
HXDLIN( 200)												( ( ::haxe::ds::StringMap)(this2) )->set(::hxd::fmt::fbx::FbxTools_obj::getName(m),frames);
            											}
            										}
HXLINE( 196)										goto _hx_goto_9;
            									}
            									/* default */{
            									}
            									_hx_goto_9:;
            								}
            							}
HXLINE( 189)							goto _hx_goto_7;
            						}
            						/* default */{
            						}
            						_hx_goto_7:;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,load,(void))

::Array< Float > BaseLibrary_obj::toFloats( ::Dynamic n){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_213_toFloats)
HXDLIN( 213)		 ::hxd::fmt::fbx::FbxProp _g = Dynamic(  ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >();
HXDLIN( 213)		switch((int)(_g->_hx_getIndex())){
            			case (int)4: {
HXLINE( 214)				::Array< int > vl = _g->_hx_getObject(0).StaticCast< ::Array< int > >();
HXLINE( 215)				::Array< Float > _g1 = ::Array_obj< Float >::__new(0);
HXDLIN( 215)				{
HXLINE( 215)					int _g2 = 0;
HXDLIN( 215)					while((_g2 < vl->length)){
HXLINE( 215)						int v = vl->__get(_g2);
HXDLIN( 215)						_g2 = (_g2 + 1);
HXDLIN( 215)						_g1->push(( (Float)(v) ));
            					}
            				}
HXDLIN( 215)				::Array< Float > vl1 = _g1;
HXLINE( 216)				 ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(0,::hxd::fmt::fbx::FbxProp_obj::PFloats(vl1));
HXLINE( 217)				return vl1;
            			}
            			break;
            			case (int)5: {
HXLINE( 218)				::Array< Float > vl = _g->_hx_getObject(0).StaticCast< ::Array< Float > >();
HXLINE( 219)				return vl;
            			}
            			break;
            			default:{
HXLINE( 221)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((::Std_obj::string(Dynamic(  ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) + HX_(" should be floats ",39,d0,c7,bb))));
            			}
            		}
HXLINE( 213)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,toFloats,return )

::Array< ::Dynamic> BaseLibrary_obj::getAllModels(){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_226_getAllModels)
HXDLIN( 226)		return ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("Objects.Model",4f,3c,74,1b));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseLibrary_obj,getAllModels,return )

::Array< ::Dynamic> BaseLibrary_obj::getRootModels(){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_230_getRootModels)
HXDLIN( 230)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 230)		{
HXDLIN( 230)			int _g1 = 0;
HXDLIN( 230)			::Array< ::Dynamic> _g2 = this->getAllModels();
HXDLIN( 230)			while((_g1 < _g2->length)){
HXDLIN( 230)				 ::Dynamic m = _g2->__get(_g1);
HXDLIN( 230)				_g1 = (_g1 + 1);
HXDLIN( 230)				if (this->isRootModel(m)) {
HXDLIN( 230)					_g->push(m);
            				}
            			}
            		}
HXDLIN( 230)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseLibrary_obj,getRootModels,return )

bool BaseLibrary_obj::isRootModel( ::Dynamic m){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_234_isRootModel)
HXDLIN( 234)		return ::hx::IsNull( this->getParent(m,HX_("Model",89,93,85,9f),true) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,isRootModel,return )

void BaseLibrary_obj::updateModelScale(){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_237_updateModelScale)
HXLINE( 238)		int unitScale = 1;
HXLINE( 239)		int originScale = 1;
HXLINE( 240)		int upAxis = 1;
HXLINE( 241)		int originalUpAxis = 2;
HXLINE( 242)		{
HXLINE( 242)			int _g = 0;
HXDLIN( 242)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("GlobalSettings.Properties70.P",36,18,d1,ec));
HXDLIN( 242)			while((_g < _g1->length)){
HXLINE( 242)				 ::Dynamic p = _g1->__get(_g);
HXDLIN( 242)				_g = (_g + 1);
HXLINE( 243)				::String _hx_switch_0 = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
            				if (  (_hx_switch_0==HX_("OriginalUnitScaleFactor",64,31,51,65)) ){
HXLINE( 245)					originScale = ::hxd::fmt::fbx::FbxTools_obj::toInt(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 245)					goto _hx_goto_20;
            				}
            				if (  (_hx_switch_0==HX_("OriginalUpAxis",ed,47,30,52)) ){
HXLINE( 247)					originalUpAxis = ::hxd::fmt::fbx::FbxTools_obj::toInt(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 247)					goto _hx_goto_20;
            				}
            				if (  (_hx_switch_0==HX_("UnitScaleFactor",b5,fa,fa,38)) ){
HXLINE( 244)					unitScale = ::hxd::fmt::fbx::FbxTools_obj::toInt(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 244)					goto _hx_goto_20;
            				}
            				if (  (_hx_switch_0==HX_("UpAxis",bc,ec,88,a4)) ){
HXLINE( 246)					upAxis = ::hxd::fmt::fbx::FbxTools_obj::toInt(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 246)					goto _hx_goto_20;
            				}
            				/* default */{
            				}
            				_hx_goto_20:;
            			}
            		}
HXLINE( 251)		Float scaleFactor;
HXDLIN( 251)		bool scaleFactor1;
HXDLIN( 251)		if ((unitScale == 100)) {
HXLINE( 251)			scaleFactor1 = (originScale == 1);
            		}
            		else {
HXLINE( 251)			scaleFactor1 = false;
            		}
HXDLIN( 251)		if (scaleFactor1) {
HXLINE( 251)			scaleFactor = ( (Float)(100) );
            		}
            		else {
HXLINE( 251)			scaleFactor = ( (Float)(1) );
            		}
HXLINE( 252)		Float geometryScaleFactor = scaleFactor;
HXLINE( 254)		if ((upAxis == 1)) {
HXLINE( 255)			this->convertYupToZup(originalUpAxis);
            		}
HXLINE( 257)		::String app = HX_("",00,00,00,00);
HXLINE( 258)		{
HXLINE( 258)			int _g2 = 0;
HXDLIN( 258)			::Array< ::Dynamic> _g3 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("FBXHeaderExtension.SceneInfo.Properties70.P",fa,47,ef,12));
HXDLIN( 258)			while((_g2 < _g3->length)){
HXLINE( 258)				 ::Dynamic p = _g3->__get(_g2);
HXDLIN( 258)				_g2 = (_g2 + 1);
HXLINE( 259)				if ((::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == HX_("LastSaved|ApplicationName",d0,ae,1e,e5))) {
HXLINE( 260)					app = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
            				}
            			}
            		}
HXLINE( 263)		bool _hx_tmp;
HXDLIN( 263)		if ((app.indexOf(HX_("Blender",de,de,8d,57),null()) >= 0)) {
HXLINE( 263)			_hx_tmp = (unitScale == originScale);
            		}
            		else {
HXLINE( 263)			_hx_tmp = false;
            		}
HXDLIN( 263)		if (_hx_tmp) {
HXLINE( 264)			scaleFactor = (( (Float)(unitScale) ) / ( (Float)(100) ));
            		}
HXLINE( 266)		bool _hx_tmp1;
HXDLIN( 266)		if ((scaleFactor == 1)) {
HXLINE( 266)			_hx_tmp1 = (geometryScaleFactor == 1);
            		}
            		else {
HXLINE( 266)			_hx_tmp1 = false;
            		}
HXDLIN( 266)		if (_hx_tmp1) {
HXLINE( 267)			return;
            		}
HXLINE( 270)		if ((geometryScaleFactor != 1)) {
HXLINE( 271)			int _g = 0;
HXDLIN( 271)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("Objects.Geometry.Vertices",fb,ea,c7,13));
HXDLIN( 271)			while((_g < _g1->length)){
HXLINE( 271)				 ::Dynamic g = _g1->__get(_g);
HXDLIN( 271)				_g = (_g + 1);
HXLINE( 272)				::Array< Float > v = this->toFloats(g);
HXLINE( 273)				{
HXLINE( 273)					int _g2 = 0;
HXDLIN( 273)					int _g3 = v->length;
HXDLIN( 273)					while((_g2 < _g3)){
HXLINE( 273)						_g2 = (_g2 + 1);
HXDLIN( 273)						int i = (_g2 - 1);
HXLINE( 274)						v[i] = (v->__get(i) / geometryScaleFactor);
            					}
            				}
            			}
            		}
HXLINE( 278)		if ((scaleFactor == 1)) {
HXLINE( 279)			return;
            		}
HXLINE( 282)		{
HXLINE( 282)			int _g4 = 0;
HXDLIN( 282)			::Array< ::Dynamic> _g5 = this->getAllModels();
HXDLIN( 282)			while((_g4 < _g5->length)){
HXLINE( 282)				 ::Dynamic m = _g5->__get(_g4);
HXDLIN( 282)				_g4 = (_g4 + 1);
HXLINE( 283)				bool isRoot = this->isRootModel(m);
HXLINE( 284)				{
HXLINE( 284)					int _g = 0;
HXDLIN( 284)					::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(m,HX_("Properties70.P",4e,56,dc,4c));
HXDLIN( 284)					while((_g < _g1->length)){
HXLINE( 284)						 ::Dynamic p = _g1->__get(_g);
HXDLIN( 284)						_g = (_g + 1);
HXLINE( 285)						::String _hx_switch_1 = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
            						if (  (_hx_switch_1==HX_("GeometricTranslation",10,07,3b,60)) ||  (_hx_switch_1==HX_("Lcl Translation",26,1a,b2,97)) ){
HXLINE( 291)							if (!(isRoot)) {
HXLINE( 292)								{
HXLINE( 292)									int idx = 4;
HXLINE( 293)									Float v = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(idx)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 294)									 ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(idx,::hxd::fmt::fbx::FbxProp_obj::PFloat((v / scaleFactor)));
            								}
HXLINE( 292)								{
HXLINE( 292)									int idx1 = 5;
HXLINE( 293)									Float v1 = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(idx1)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 294)									 ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(idx1,::hxd::fmt::fbx::FbxProp_obj::PFloat((v1 / scaleFactor)));
            								}
HXLINE( 292)								{
HXLINE( 292)									int idx2 = 6;
HXLINE( 293)									Float v2 = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(idx2)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 294)									 ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(idx2,::hxd::fmt::fbx::FbxProp_obj::PFloat((v2 / scaleFactor)));
            								}
            							}
HXLINE( 291)							goto _hx_goto_26;
            						}
            						if (  (_hx_switch_1==HX_("Lcl Scaling",fc,58,56,f5)) ){
HXLINE( 286)							if (isRoot) {
HXLINE( 287)								{
HXLINE( 287)									int idx = 4;
HXLINE( 288)									Float v = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(idx)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 289)									 ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(idx,::hxd::fmt::fbx::FbxProp_obj::PFloat((v * scaleFactor)));
            								}
HXLINE( 287)								{
HXLINE( 287)									int idx1 = 5;
HXLINE( 288)									Float v1 = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(idx1)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 289)									 ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(idx1,::hxd::fmt::fbx::FbxProp_obj::PFloat((v1 * scaleFactor)));
            								}
HXLINE( 287)								{
HXLINE( 287)									int idx2 = 6;
HXLINE( 288)									Float v2 = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(idx2)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 289)									 ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(idx2,::hxd::fmt::fbx::FbxProp_obj::PFloat((v2 * scaleFactor)));
            								}
            							}
HXLINE( 286)							goto _hx_goto_26;
            						}
            						/* default */{
            						}
            						_hx_goto_26:;
            					}
            				}
            			}
            		}
HXLINE( 300)		{
HXLINE( 300)			int _g6 = 0;
HXDLIN( 300)			::Array< ::Dynamic> _g7 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("Objects.Deformer.Transform",6a,f2,9c,27));
HXDLIN( 300)			while((_g6 < _g7->length)){
HXLINE( 300)				 ::Dynamic t = _g7->__get(_g6);
HXDLIN( 300)				_g6 = (_g6 + 1);
HXLINE( 301)				::Array< Float > m = this->toFloats(t);
HXLINE( 302)				::Array< Float > m1 = m;
HXDLIN( 302)				int _hx_tmp = 12;
HXDLIN( 302)				m1[_hx_tmp] = (m1->__get(_hx_tmp) / scaleFactor);
HXLINE( 303)				::Array< Float > m2 = m;
HXDLIN( 303)				int _hx_tmp1 = 13;
HXDLIN( 303)				m2[_hx_tmp1] = (m2->__get(_hx_tmp1) / scaleFactor);
HXLINE( 304)				::Array< Float > m3 = m;
HXDLIN( 304)				int _hx_tmp2 = 14;
HXDLIN( 304)				m3[_hx_tmp2] = (m3->__get(_hx_tmp2) / scaleFactor);
            			}
            		}
HXLINE( 307)		{
HXLINE( 307)			int _g8 = 0;
HXDLIN( 307)			::Array< ::Dynamic> _g9 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("Objects.AnimationCurveNode",47,ee,3b,c8));
HXDLIN( 307)			while((_g8 < _g9->length)){
HXLINE( 307)				 ::Dynamic n = _g9->__get(_g8);
HXDLIN( 307)				_g8 = (_g8 + 1);
HXLINE( 308)				::String name = ::hxd::fmt::fbx::FbxTools_obj::getName(n);
HXLINE( 309)				 ::Dynamic model = this->getParent(n,HX_("Model",89,93,85,9f),true);
HXLINE( 310)				bool isRoot;
HXDLIN( 310)				if (::hx::IsNotNull( model )) {
HXLINE( 310)					isRoot = ::hx::IsNull( this->getParent(model,HX_("Model",89,93,85,9f),true) );
            				}
            				else {
HXLINE( 310)					isRoot = false;
            				}
HXLINE( 311)				{
HXLINE( 311)					int _g = 0;
HXDLIN( 311)					::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(n,HX_("Properties70.P",4e,56,dc,4c));
HXDLIN( 311)					while((_g < _g1->length)){
HXLINE( 311)						 ::Dynamic p = _g1->__get(_g);
HXDLIN( 311)						_g = (_g + 1);
HXLINE( 312)						::String _hx_switch_2 = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
            						if (  (_hx_switch_2==HX_("d|X",c0,4d,4c,00)) ||  (_hx_switch_2==HX_("d|Y",c1,4d,4c,00)) ||  (_hx_switch_2==HX_("d|Z",c2,4d,4c,00)) ){
HXLINE( 313)							bool _hx_tmp;
HXDLIN( 313)							if ((name == HX_("T",54,00,00,00))) {
HXLINE( 313)								_hx_tmp = !(isRoot);
            							}
            							else {
HXLINE( 313)								_hx_tmp = false;
            							}
HXDLIN( 313)							if (_hx_tmp) {
HXLINE( 313)								 ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(4,::hxd::fmt::fbx::FbxProp_obj::PFloat((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) / scaleFactor)));
            							}
            							else {
HXLINE( 314)								bool _hx_tmp;
HXDLIN( 314)								if ((name == HX_("S",53,00,00,00))) {
HXLINE( 314)									_hx_tmp = isRoot;
            								}
            								else {
HXLINE( 314)									_hx_tmp = false;
            								}
HXDLIN( 314)								if (_hx_tmp) {
HXLINE( 314)									 ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(4,::hxd::fmt::fbx::FbxProp_obj::PFloat((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * scaleFactor)));
            								}
            							}
HXLINE( 313)							goto _hx_goto_30;
            						}
            						/* default */{
            						}
            						_hx_goto_30:;
            					}
            				}
HXLINE( 317)				{
HXLINE( 317)					int _g2 = 0;
HXDLIN( 317)					::Array< ::Dynamic> _g3 = this->getChilds(n,HX_("AnimationCurve",2b,73,d1,08));
HXDLIN( 317)					while((_g2 < _g3->length)){
HXLINE( 317)						 ::Dynamic c = _g3->__get(_g2);
HXDLIN( 317)						_g2 = (_g2 + 1);
HXLINE( 318)						::Array< Float > vl = this->toFloats(::hxd::fmt::fbx::FbxTools_obj::get(c,HX_("KeyValueFloat",ca,d6,ef,e9),null()));
HXLINE( 319)						if (::hx::IsNotNull( name )) {
HXLINE( 319)							::String _hx_switch_3 = name;
            							if (  (_hx_switch_3==HX_("S",53,00,00,00)) ){
HXLINE( 323)								if (isRoot) {
HXLINE( 324)									int _g = 0;
HXDLIN( 324)									int _g1 = vl->length;
HXDLIN( 324)									while((_g < _g1)){
HXLINE( 324)										_g = (_g + 1);
HXDLIN( 324)										int i = (_g - 1);
HXLINE( 325)										vl[i] = (vl->__get(i) * scaleFactor);
            									}
            								}
HXLINE( 323)								goto _hx_goto_32;
            							}
            							if (  (_hx_switch_3==HX_("T",54,00,00,00)) ){
HXLINE( 320)								if (!(isRoot)) {
HXLINE( 321)									int _g = 0;
HXDLIN( 321)									int _g1 = vl->length;
HXDLIN( 321)									while((_g < _g1)){
HXLINE( 321)										_g = (_g + 1);
HXDLIN( 321)										int i = (_g - 1);
HXLINE( 322)										vl[i] = (vl->__get(i) / scaleFactor);
            									}
            								}
HXLINE( 320)								goto _hx_goto_32;
            							}
            							/* default */{
            							}
            							_hx_goto_32:;
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseLibrary_obj,updateModelScale,(void))

void BaseLibrary_obj::convertYupToZup(int originalUpAxis){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_333_convertYupToZup)
HXDLIN( 333)		switch((int)(originalUpAxis)){
            			case (int)-1: case (int)1: {
HXLINE( 345)				int _g = 0;
HXDLIN( 345)				::Array< ::Dynamic> _g1 = this->getRootModels();
HXDLIN( 345)				while((_g < _g1->length)){
HXLINE( 345)					 ::Dynamic m = _g1->__get(_g);
HXDLIN( 345)					_g = (_g + 1);
HXLINE( 346)					bool needPreRot = true;
HXLINE( 347)					{
HXLINE( 347)						int _g2 = 0;
HXDLIN( 347)						::Array< ::Dynamic> _g3 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("GlobalSettings.Properties70.P",36,18,d1,ec));
HXDLIN( 347)						while((_g2 < _g3->length)){
HXLINE( 347)							 ::Dynamic c = _g3->__get(_g2);
HXDLIN( 347)							_g2 = (_g2 + 1);
HXLINE( 348)							bool _hx_tmp;
HXDLIN( 348)							bool _hx_tmp1;
HXDLIN( 348)							bool _hx_tmp2;
HXDLIN( 348)							if ((::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == HX_("PreRotation",61,4c,21,02))) {
HXLINE( 348)								_hx_tmp2 = (::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == 90);
            							}
            							else {
HXLINE( 348)								_hx_tmp2 = false;
            							}
HXDLIN( 348)							if (_hx_tmp2) {
HXLINE( 348)								_hx_tmp1 = (::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(5)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == 0);
            							}
            							else {
HXLINE( 348)								_hx_tmp1 = false;
            							}
HXDLIN( 348)							if (_hx_tmp1) {
HXLINE( 348)								_hx_tmp = (::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(6)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == 0);
            							}
            							else {
HXLINE( 348)								_hx_tmp = false;
            							}
HXDLIN( 348)							if (_hx_tmp) {
HXLINE( 349)								needPreRot = false;
HXLINE( 350)								goto _hx_goto_37;
            							}
            						}
            						_hx_goto_37:;
            					}
HXLINE( 353)					if (needPreRot) {
HXLINE( 354)						 ::Dynamic preRotProp =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("childs",57,bf,ba,bc),::Array_obj< ::Dynamic>::__new(0))
            							->setFixed(1,HX_("props",70,e7,8f,c8),::Array_obj< ::Dynamic>::__new(7)->init(0,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("PreRotation",61,4c,21,02)))->init(1,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("Vector3D",54,90,6f,48)))->init(2,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("Vector",e3,24,f2,cb)))->init(3,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("",00,00,00,00)))->init(4,::hxd::fmt::fbx::FbxProp_obj::PFloat(90))->init(5,::hxd::fmt::fbx::FbxProp_obj::PFloat(0))->init(6,::hxd::fmt::fbx::FbxProp_obj::PFloat(0)))
            							->setFixed(2,HX_("name",4b,72,ff,48),HX_("P",50,00,00,00)));
HXLINE( 355)						( (::Array< ::Dynamic>)(::hxd::fmt::fbx::FbxTools_obj::get(m,HX_("Properties70",ec,9a,ce,c7),null())->__Field(HX_("childs",57,bf,ba,bc),::hx::paccDynamic)) )->insert(0,preRotProp);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 335)				int _g = 0;
HXDLIN( 335)				::Array< ::Dynamic> _g1 = this->getRootModels();
HXDLIN( 335)				while((_g < _g1->length)){
HXLINE( 335)					 ::Dynamic rootObject = _g1->__get(_g);
HXDLIN( 335)					_g = (_g + 1);
HXLINE( 336)					 ::Dynamic props = ::hxd::fmt::fbx::FbxTools_obj::get(rootObject,HX_("Properties70",ec,9a,ce,c7),null());
HXLINE( 337)					{
HXLINE( 337)						int _g2 = 0;
HXDLIN( 337)						::Array< ::Dynamic> _g3 = ( (::Array< ::Dynamic>)(props->__Field(HX_("childs",57,bf,ba,bc),::hx::paccDynamic)) );
HXDLIN( 337)						while((_g2 < _g3->length)){
HXLINE( 337)							 ::Dynamic c = _g3->__get(_g2);
HXDLIN( 337)							_g2 = (_g2 + 1);
HXLINE( 338)							bool _hx_tmp;
HXDLIN( 338)							bool _hx_tmp1;
HXDLIN( 338)							bool _hx_tmp2;
HXDLIN( 338)							if ((::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == HX_("PreRotation",61,4c,21,02))) {
HXLINE( 338)								_hx_tmp2 = (::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == -90);
            							}
            							else {
HXLINE( 338)								_hx_tmp2 = false;
            							}
HXDLIN( 338)							if (_hx_tmp2) {
HXLINE( 338)								_hx_tmp1 = (::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(5)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == 0);
            							}
            							else {
HXLINE( 338)								_hx_tmp1 = false;
            							}
HXDLIN( 338)							if (_hx_tmp1) {
HXLINE( 338)								_hx_tmp = (::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(6)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) == 0);
            							}
            							else {
HXLINE( 338)								_hx_tmp = false;
            							}
HXDLIN( 338)							if (_hx_tmp) {
HXLINE( 339)								( (::Array< ::Dynamic>)(props->__Field(HX_("childs",57,bf,ba,bc),::hx::paccDynamic)) )->remove(c);
HXLINE( 340)								goto _hx_goto_39;
            							}
            						}
            						_hx_goto_39:;
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 359)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("From Y-up to Z-up with orginalUpAxis = ",a5,05,33,40) + originalUpAxis) + HX_(" not implemented.",79,98,27,bc))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,convertYupToZup,(void))

void BaseLibrary_obj::convertPoints(::Array< Float > a){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_363_convertPoints)
HXLINE( 364)		int p = 0;
HXLINE( 365)		{
HXLINE( 365)			int _g = 0;
HXDLIN( 365)			int _g1 = ::Std_obj::_hx_int((( (Float)(a->length) ) / ( (Float)(3) )));
HXDLIN( 365)			while((_g < _g1)){
HXLINE( 365)				_g = (_g + 1);
HXDLIN( 365)				int i = (_g - 1);
HXLINE( 366)				a[p] = -(a->__get(p));
HXLINE( 367)				p = (p + 3);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,convertPoints,(void))

void BaseLibrary_obj::leftHandConvert(){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_371_leftHandConvert)
HXLINE( 372)		if (this->leftHand) {
HXLINE( 372)			return;
            		}
HXLINE( 373)		this->leftHand = true;
HXLINE( 374)		{
HXLINE( 374)			int _g = 0;
HXDLIN( 374)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("Objects.Geometry",cc,55,e5,67));
HXDLIN( 374)			while((_g < _g1->length)){
HXLINE( 374)				 ::Dynamic g = _g1->__get(_g);
HXDLIN( 374)				_g = (_g + 1);
HXLINE( 375)				{
HXLINE( 375)					int _g2 = 0;
HXDLIN( 375)					::Array< ::Dynamic> _g3 = ::hxd::fmt::fbx::FbxTools_obj::getAll(g,HX_("Vertices",19,7c,c7,43));
HXDLIN( 375)					while((_g2 < _g3->length)){
HXLINE( 375)						 ::Dynamic v = _g3->__get(_g2);
HXDLIN( 375)						_g2 = (_g2 + 1);
HXLINE( 376)						this->convertPoints(::hxd::fmt::fbx::FbxTools_obj::getFloats(v));
            					}
            				}
HXLINE( 377)				{
HXLINE( 377)					int _g4 = 0;
HXDLIN( 377)					::Array< ::Dynamic> _g5 = ::hxd::fmt::fbx::FbxTools_obj::getAll(g,HX_("LayerElementNormal.Normals",70,a9,e1,80));
HXDLIN( 377)					while((_g4 < _g5->length)){
HXLINE( 377)						 ::Dynamic v = _g5->__get(_g4);
HXDLIN( 377)						_g4 = (_g4 + 1);
HXLINE( 378)						this->convertPoints(::hxd::fmt::fbx::FbxTools_obj::getFloats(v));
            					}
            				}
HXLINE( 379)				{
HXLINE( 379)					int _g6 = 0;
HXDLIN( 379)					::Array< ::Dynamic> _g7 = ::hxd::fmt::fbx::FbxTools_obj::getAll(g,HX_("LayerElementTangent.Tangents",22,1c,a3,dd));
HXDLIN( 379)					while((_g6 < _g7->length)){
HXLINE( 379)						 ::Dynamic v = _g7->__get(_g6);
HXDLIN( 379)						_g6 = (_g6 + 1);
HXLINE( 380)						this->convertPoints(::hxd::fmt::fbx::FbxTools_obj::getFloats(v));
            					}
            				}
HXLINE( 381)				{
HXLINE( 381)					int _g8 = 0;
HXDLIN( 381)					::Array< ::Dynamic> _g9 = ::hxd::fmt::fbx::FbxTools_obj::getAll(g,HX_("LayerElementBinormal.Binormals",10,e8,34,7f));
HXDLIN( 381)					while((_g8 < _g9->length)){
HXLINE( 381)						 ::Dynamic v = _g9->__get(_g8);
HXDLIN( 381)						_g8 = (_g8 + 1);
HXLINE( 382)						this->convertPoints(::hxd::fmt::fbx::FbxTools_obj::getFloats(v));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseLibrary_obj,leftHandConvert,(void))

void BaseLibrary_obj::init( ::Dynamic n){
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_387_init)
HXDLIN( 387)		::String _hx_switch_0 = ( (::String)(n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("Connections",75,12,6c,5f)) ){
HXLINE( 389)			int _g = 0;
HXDLIN( 389)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(n->__Field(HX_("childs",57,bf,ba,bc),::hx::paccDynamic)) );
HXDLIN( 389)			while((_g < _g1->length)){
HXLINE( 389)				 ::Dynamic c = _g1->__get(_g);
HXDLIN( 389)				_g = (_g + 1);
HXLINE( 390)				if (::hx::IsNotEq( c->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),HX_("C",43,00,00,00) )) {
HXLINE( 391)					continue;
            				}
HXLINE( 392)				int child = ::hxd::fmt::fbx::FbxTools_obj::toInt(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(1)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 393)				int parent = ::hxd::fmt::fbx::FbxTools_obj::toInt(Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(2)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXLINE( 396)				bool _hx_tmp;
HXDLIN( 396)				if (::hx::IsNotNull( this->ids->get(child) )) {
HXLINE( 396)					_hx_tmp = ::hx::IsNull( this->ids->get(parent) );
            				}
            				else {
HXLINE( 396)					_hx_tmp = true;
            				}
HXDLIN( 396)				if (_hx_tmp) {
HXLINE( 396)					continue;
            				}
HXLINE( 398)				 ::hxd::fmt::fbx::FbxProp name = Dynamic(  ::Dynamic(c->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(3)).StaticCast<  ::hxd::fmt::fbx::FbxProp >();
HXLINE( 400)				if (::hx::IsNotNull( name )) {
HXLINE( 401)					::String name1 = ::hxd::fmt::fbx::FbxTools_obj::toString(name);
HXLINE( 402)					 ::haxe::ds::StringMap nc = ( ( ::haxe::ds::StringMap)(this->namedConnect->get(parent)) );
HXLINE( 403)					if (::hx::IsNull( nc )) {
HXLINE( 404)						nc =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 405)						this->namedConnect->set(parent,nc);
            					}
HXLINE( 407)					nc->set(name1,child);
HXLINE( 409)					if ((name1 == HX_("LookAtProperty",c7,8f,18,57))) {
HXLINE( 409)						continue;
            					}
            				}
HXLINE( 412)				::Array< int > c1 = ( (::Array< int >)(this->connect->get(parent)) );
HXLINE( 413)				if (::hx::IsNull( c1 )) {
HXLINE( 414)					c1 = ::Array_obj< int >::__new(0);
HXLINE( 415)					this->connect->set(parent,c1);
            				}
HXLINE( 417)				c1->push(child);
HXLINE( 419)				if ((parent == 0)) {
HXLINE( 420)					continue;
            				}
HXLINE( 422)				::Array< int > c2 = ( (::Array< int >)(this->invConnect->get(child)) );
HXLINE( 423)				if (::hx::IsNull( c2 )) {
HXLINE( 424)					c2 = ::Array_obj< int >::__new(0);
HXLINE( 425)					this->invConnect->set(child,c2);
            				}
HXLINE( 427)				c2->push(parent);
            			}
HXLINE( 389)			goto _hx_goto_49;
            		}
            		if (  (_hx_switch_0==HX_("Objects",b4,90,a0,4f)) ){
HXLINE( 430)			int _g = 0;
HXDLIN( 430)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(n->__Field(HX_("childs",57,bf,ba,bc),::hx::paccDynamic)) );
HXDLIN( 430)			while((_g < _g1->length)){
HXLINE( 430)				 ::Dynamic c = _g1->__get(_g);
HXDLIN( 430)				_g = (_g + 1);
HXLINE( 431)				{
HXLINE( 431)					::Dynamic this1 = this->ids;
HXDLIN( 431)					( ( ::haxe::ds::IntMap)(this1) )->set(::hxd::fmt::fbx::FbxTools_obj::getId(c),c);
            				}
            			}
HXLINE( 430)			goto _hx_goto_49;
            		}
            		/* default */{
            		}
            		_hx_goto_49:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,init,(void))

 ::hxd::fmt::fbx::Geometry BaseLibrary_obj::getGeometry(::String __o_name){
            		::String name = __o_name;
            		if (::hx::IsNull(__o_name)) name = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_436_getGeometry)
HXLINE( 437)		 ::Dynamic geom = null();
HXLINE( 438)		{
HXLINE( 438)			int _g = 0;
HXDLIN( 438)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("Objects.Geometry",cc,55,e5,67));
HXDLIN( 438)			while((_g < _g1->length)){
HXLINE( 438)				 ::Dynamic g = _g1->__get(_g);
HXDLIN( 438)				_g = (_g + 1);
HXLINE( 439)				if (::hxd::fmt::fbx::FbxTools_obj::hasProp(g,::hxd::fmt::fbx::FbxProp_obj::PString((HX_("Geometry::",12,ca,a5,87) + name)))) {
HXLINE( 440)					geom = g;
HXLINE( 441)					goto _hx_goto_53;
            				}
            			}
            			_hx_goto_53:;
            		}
HXLINE( 443)		if (::hx::IsNull( geom )) {
HXLINE( 444)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Geometry ",0e,39,0c,23) + name) + HX_(" not found",55,f3,a5,21))));
            		}
HXLINE( 445)		return  ::hxd::fmt::fbx::Geometry_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),geom);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,getGeometry,return )

 ::Dynamic BaseLibrary_obj::getParent( ::Dynamic node,::String nodeName, ::Dynamic opt){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_448_getParent)
HXLINE( 449)		::Array< ::Dynamic> p = this->getParents(node,nodeName);
HXLINE( 450)		if ((p->length > 1)) {
HXLINE( 451)			::String _hx_tmp = (::hxd::fmt::fbx::FbxTools_obj::getName(node) + HX_(" has ",a6,bf,da,b1));
HXDLIN( 451)			::String _hx_tmp1 = ((((_hx_tmp + p->length) + HX_(" ",20,00,00,00)) + nodeName) + HX_(" parents ",17,a8,16,2b));
HXDLIN( 451)			::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 451)			{
HXLINE( 451)				int _g1 = 0;
HXDLIN( 451)				while((_g1 < p->length)){
HXLINE( 451)					 ::Dynamic o = p->__get(_g1);
HXDLIN( 451)					_g1 = (_g1 + 1);
HXDLIN( 451)					_g->push(::hxd::fmt::fbx::FbxTools_obj::getName(o));
            				}
            			}
HXDLIN( 451)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp1 + _g->join(HX_(",",2c,00,00,00)))));
            		}
HXLINE( 452)		bool _hx_tmp;
HXDLIN( 452)		if ((p->length == 0)) {
HXLINE( 452)			_hx_tmp = !(( (bool)(opt) ));
            		}
            		else {
HXLINE( 452)			_hx_tmp = false;
            		}
HXDLIN( 452)		if (_hx_tmp) {
HXLINE( 453)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Missing ",1a,76,54,ba) + ::hxd::fmt::fbx::FbxTools_obj::getName(node)) + HX_(" ",20,00,00,00)) + nodeName) + HX_(" parent",4a,dd,2c,20))));
            		}
HXLINE( 454)		return p->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC3(BaseLibrary_obj,getParent,return )

 ::Dynamic BaseLibrary_obj::getChild( ::Dynamic node,::String nodeName, ::Dynamic opt){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_457_getChild)
HXLINE( 458)		::Array< ::Dynamic> c = this->getChilds(node,nodeName);
HXLINE( 459)		if ((c->length > 1)) {
HXLINE( 460)			::String _hx_tmp = (::hxd::fmt::fbx::FbxTools_obj::getName(node) + HX_(" has ",a6,bf,da,b1));
HXDLIN( 460)			::String _hx_tmp1 = ((((_hx_tmp + c->length) + HX_(" ",20,00,00,00)) + nodeName) + HX_(" childs ",c9,f0,fa,8c));
HXDLIN( 460)			::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 460)			{
HXLINE( 460)				int _g1 = 0;
HXDLIN( 460)				while((_g1 < c->length)){
HXLINE( 460)					 ::Dynamic o = c->__get(_g1);
HXDLIN( 460)					_g1 = (_g1 + 1);
HXDLIN( 460)					_g->push(::hxd::fmt::fbx::FbxTools_obj::getName(o));
            				}
            			}
HXDLIN( 460)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp1 + _g->join(HX_(",",2c,00,00,00)))));
            		}
HXLINE( 461)		bool _hx_tmp;
HXDLIN( 461)		if ((c->length == 0)) {
HXLINE( 461)			_hx_tmp = !(( (bool)(opt) ));
            		}
            		else {
HXLINE( 461)			_hx_tmp = false;
            		}
HXDLIN( 461)		if (_hx_tmp) {
HXLINE( 462)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Missing ",1a,76,54,ba) + ::hxd::fmt::fbx::FbxTools_obj::getName(node)) + HX_(" ",20,00,00,00)) + nodeName) + HX_(" child",7c,35,25,11))));
            		}
HXLINE( 463)		return c->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC3(BaseLibrary_obj,getChild,return )

 ::Dynamic BaseLibrary_obj::getSpecChild( ::Dynamic node,::String name){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_466_getSpecChild)
HXLINE( 467)		::Dynamic this1 = this->namedConnect;
HXDLIN( 467)		 ::haxe::ds::StringMap nc = ( ( ::haxe::ds::StringMap)(( ( ::haxe::ds::IntMap)(this1) )->get(::hxd::fmt::fbx::FbxTools_obj::getId(node))) );
HXLINE( 468)		if (::hx::IsNull( nc )) {
HXLINE( 469)			return null();
            		}
HXLINE( 470)		 ::Dynamic id = nc->get(name);
HXLINE( 471)		if (::hx::IsNull( id )) {
HXLINE( 472)			return null();
            		}
HXLINE( 473)		return this->ids->get(id);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseLibrary_obj,getSpecChild,return )

::Array< ::Dynamic> BaseLibrary_obj::getChilds( ::Dynamic node,::String nodeName){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_476_getChilds)
HXLINE( 477)		::Dynamic this1 = this->connect;
HXDLIN( 477)		::Array< int > c = ( (::Array< int >)(( ( ::haxe::ds::IntMap)(this1) )->get(::hxd::fmt::fbx::FbxTools_obj::getId(node))) );
HXLINE( 478)		::Array< ::Dynamic> subs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 479)		if (::hx::IsNotNull( c )) {
HXLINE( 480)			int _g = 0;
HXDLIN( 480)			while((_g < c->length)){
HXLINE( 480)				int id = c->__get(_g);
HXDLIN( 480)				_g = (_g + 1);
HXLINE( 481)				 ::Dynamic n = this->ids->get(id);
HXLINE( 482)				if (::hx::IsNull( n )) {
HXLINE( 482)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((id + HX_(" not found",55,f3,a5,21))));
            				}
HXLINE( 483)				bool _hx_tmp;
HXDLIN( 483)				if (::hx::IsNotNull( nodeName )) {
HXLINE( 483)					_hx_tmp = ::hx::IsNotEq( n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),nodeName );
            				}
            				else {
HXLINE( 483)					_hx_tmp = false;
            				}
HXDLIN( 483)				if (_hx_tmp) {
HXLINE( 483)					continue;
            				}
HXLINE( 484)				subs->push(n);
            			}
            		}
HXLINE( 486)		return subs;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseLibrary_obj,getChilds,return )

::Array< ::Dynamic> BaseLibrary_obj::getParents( ::Dynamic node,::String nodeName){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_489_getParents)
HXLINE( 490)		::Dynamic this1 = this->invConnect;
HXDLIN( 490)		::Array< int > c = ( (::Array< int >)(( ( ::haxe::ds::IntMap)(this1) )->get(::hxd::fmt::fbx::FbxTools_obj::getId(node))) );
HXLINE( 491)		::Array< ::Dynamic> pl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 492)		if (::hx::IsNotNull( c )) {
HXLINE( 493)			int _g = 0;
HXDLIN( 493)			while((_g < c->length)){
HXLINE( 493)				int id = c->__get(_g);
HXDLIN( 493)				_g = (_g + 1);
HXLINE( 494)				 ::Dynamic n = this->ids->get(id);
HXLINE( 495)				if (::hx::IsNull( n )) {
HXLINE( 495)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((id + HX_(" not found",55,f3,a5,21))));
            				}
HXLINE( 496)				bool _hx_tmp;
HXDLIN( 496)				if (::hx::IsNotNull( nodeName )) {
HXLINE( 496)					_hx_tmp = ::hx::IsNotEq( n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),nodeName );
            				}
            				else {
HXLINE( 496)					_hx_tmp = false;
            				}
HXDLIN( 496)				if (_hx_tmp) {
HXLINE( 496)					continue;
            				}
HXLINE( 497)				pl->push(n);
            			}
            		}
HXLINE( 499)		return pl;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseLibrary_obj,getParents,return )

 ::Dynamic BaseLibrary_obj::getRoot(){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_503_getRoot)
HXDLIN( 503)		return this->root;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseLibrary_obj,getRoot,return )

void BaseLibrary_obj::ignoreMissingObject(int id){
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_506_ignoreMissingObject)
HXLINE( 507)		 ::hxd::fmt::fbx::DefaultMatrixes def = ( ( ::hxd::fmt::fbx::DefaultMatrixes)(this->defaultModelMatrixes->get(id)) );
HXLINE( 508)		if (::hx::IsNull( def )) {
HXLINE( 509)			def =  ::hxd::fmt::fbx::DefaultMatrixes_obj::__alloc( HX_CTX );
HXLINE( 510)			def->wasRemoved = -2;
HXLINE( 511)			this->defaultModelMatrixes->set(id,def);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,ignoreMissingObject,(void))

 ::Dynamic BaseLibrary_obj::buildHierarchy(){
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_515_buildHierarchy)
HXLINE( 517)		 ::hxd::fmt::fbx::TmpObject oroot =  ::hxd::fmt::fbx::TmpObject_obj::__alloc( HX_CTX );
HXLINE( 518)		::Array< ::Dynamic> objects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 519)		 ::haxe::ds::IntMap hobjects =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 521)		hobjects->set(0,oroot);
HXLINE( 522)		{
HXLINE( 522)			int _g = 0;
HXDLIN( 522)			::Array< ::Dynamic> _g1 = this->getAllModels();
HXDLIN( 522)			while((_g < _g1->length)){
HXLINE( 522)				 ::Dynamic model = _g1->__get(_g);
HXDLIN( 522)				_g = (_g + 1);
HXLINE( 523)				::Dynamic this1 = this->skipObjects;
HXDLIN( 523)				if (( ( ::haxe::ds::StringMap)(this1) )->get_bool(::hxd::fmt::fbx::FbxTools_obj::getName(model))) {
HXLINE( 524)					continue;
            				}
HXLINE( 525)				::String mtype = ::hxd::fmt::fbx::FbxTools_obj::getType(model);
HXLINE( 526)				bool isJoint;
HXDLIN( 526)				if ((mtype == HX_("LimbNode",54,fa,55,3f))) {
HXLINE( 526)					if (this->unskinnedJointsAsObjects) {
HXLINE( 526)						isJoint = !(this->isNullJoint(model));
            					}
            					else {
HXLINE( 526)						isJoint = true;
            					}
            				}
            				else {
HXLINE( 526)					isJoint = false;
            				}
HXLINE( 527)				 ::hxd::fmt::fbx::TmpObject o =  ::hxd::fmt::fbx::TmpObject_obj::__alloc( HX_CTX );
HXLINE( 528)				o->model = model;
HXLINE( 529)				o->isJoint = isJoint;
HXLINE( 530)				o->isMesh = (mtype == HX_("Mesh",0d,76,32,33));
HXLINE( 531)				hobjects->set(::hxd::fmt::fbx::FbxTools_obj::getId(model),o);
HXLINE( 532)				objects->push(o);
            			}
            		}
HXLINE( 536)		{
HXLINE( 536)			int _g2 = 0;
HXDLIN( 536)			while((_g2 < objects->length)){
HXLINE( 536)				 ::hxd::fmt::fbx::TmpObject o = objects->__get(_g2).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 536)				_g2 = (_g2 + 1);
HXLINE( 537)				 ::Dynamic p = this->getParent(o->model,HX_("Model",89,93,85,9f),true);
HXLINE( 538)				int pid;
HXDLIN( 538)				if (::hx::IsNull( p )) {
HXLINE( 538)					pid = 0;
            				}
            				else {
HXLINE( 538)					pid = ::hxd::fmt::fbx::FbxTools_obj::getId(p);
            				}
HXLINE( 539)				 ::hxd::fmt::fbx::TmpObject op = ( ( ::hxd::fmt::fbx::TmpObject)(hobjects->get(pid)) );
HXLINE( 540)				if (::hx::IsNull( op )) {
HXLINE( 540)					op = oroot;
            				}
HXLINE( 541)				op->childs->push(o);
HXLINE( 542)				o->parent = op;
            			}
            		}
HXLINE( 555)		{
HXLINE( 555)			int _g3 = 0;
HXDLIN( 555)			while((_g3 < objects->length)){
HXLINE( 555)				 ::hxd::fmt::fbx::TmpObject o = objects->__get(_g3).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 555)				_g3 = (_g3 + 1);
HXLINE( 556)				if (!(o->isMesh)) {
HXLINE( 556)					continue;
            				}
HXLINE( 557)				 ::Dynamic g = this->getChild(o->model,HX_("Geometry",d2,be,5a,ac),null());
HXLINE( 558)				 ::Dynamic def = this->getChild(g,HX_("Deformer",12,bd,ec,96),true);
HXLINE( 559)				if (::hx::IsNull( def )) {
HXLINE( 559)					continue;
            				}
HXLINE( 560)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 560)				{
HXLINE( 560)					int _g1 = 0;
HXDLIN( 560)					::Array< ::Dynamic> _g2 = this->getChilds(def,HX_("Deformer",12,bd,ec,96));
HXDLIN( 560)					while((_g1 < _g2->length)){
HXLINE( 560)						 ::Dynamic d = _g2->__get(_g1);
HXDLIN( 560)						_g1 = (_g1 + 1);
HXDLIN( 560)						_g->push(hobjects->get(::hxd::fmt::fbx::FbxTools_obj::getId(this->getChild(d,HX_("Model",89,93,85,9f),null()))));
            					}
            				}
HXDLIN( 560)				::Array< ::Dynamic> bones = _g;
HXLINE( 561)				if ((bones->length == 0)) {
HXLINE( 561)					continue;
            				}
HXLINE( 565)				 ::hxd::fmt::fbx::TmpObject o1 = bones->__get(0).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 565)				int k = 0;
HXDLIN( 565)				while(::hx::IsInstanceNotEq( o1,oroot )){
HXLINE( 565)					o1 = o1->parent;
HXDLIN( 565)					k = (k + 1);
            				}
HXDLIN( 565)				int minDepth = k;
HXLINE( 566)				{
HXLINE( 566)					int _g4 = 1;
HXDLIN( 566)					int _g5 = bones->length;
HXDLIN( 566)					while((_g4 < _g5)){
HXLINE( 566)						_g4 = (_g4 + 1);
HXDLIN( 566)						int i = (_g4 - 1);
HXLINE( 567)						 ::hxd::fmt::fbx::TmpObject o = bones->__get(i).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 567)						int k = 0;
HXDLIN( 567)						while(::hx::IsInstanceNotEq( o,oroot )){
HXLINE( 567)							o = o->parent;
HXDLIN( 567)							k = (k + 1);
            						}
HXDLIN( 567)						int d = k;
HXLINE( 568)						if ((d < minDepth)) {
HXLINE( 568)							minDepth = d;
            						}
            					}
            				}
HXLINE( 570)				::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 571)				{
HXLINE( 571)					int _g6 = 0;
HXDLIN( 571)					int _g7 = bones->length;
HXDLIN( 571)					while((_g6 < _g7)){
HXLINE( 571)						_g6 = (_g6 + 1);
HXDLIN( 571)						int i = (_g6 - 1);
HXLINE( 572)						 ::hxd::fmt::fbx::TmpObject b = bones->__get(i).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXLINE( 573)						 ::hxd::fmt::fbx::TmpObject o = b;
HXDLIN( 573)						int k = 0;
HXDLIN( 573)						while(::hx::IsInstanceNotEq( o,oroot )){
HXLINE( 573)							o = o->parent;
HXDLIN( 573)							k = (k + 1);
            						}
HXDLIN( 573)						int n = (k - minDepth);
HXLINE( 574)						{
HXLINE( 574)							int _g = 0;
HXDLIN( 574)							int _g1 = n;
HXDLIN( 574)							while((_g < _g1)){
HXLINE( 574)								_g = (_g + 1);
HXDLIN( 574)								int i = (_g - 1);
HXLINE( 575)								b->isJoint = true;
HXLINE( 576)								b = b->parent;
            							}
            						}
HXLINE( 578)						out->remove(b);
HXLINE( 579)						out->push(b);
            					}
            				}
HXLINE( 581)				bones = out;
HXLINE( 583)				while((bones->length > 1)){
HXLINE( 584)					{
HXLINE( 584)						int _g = 0;
HXDLIN( 584)						while((_g < bones->length)){
HXLINE( 584)							 ::hxd::fmt::fbx::TmpObject b = bones->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 584)							_g = (_g + 1);
HXLINE( 585)							b->isJoint = true;
            						}
            					}
HXLINE( 586)					::Array< ::Dynamic> parents = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 587)					{
HXLINE( 587)						int _g1 = 0;
HXDLIN( 587)						while((_g1 < bones->length)){
HXLINE( 587)							 ::hxd::fmt::fbx::TmpObject b = bones->__get(_g1).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 587)							_g1 = (_g1 + 1);
HXLINE( 588)							bool _hx_tmp;
HXDLIN( 588)							if (::hx::IsInstanceNotEq( b->parent,oroot )) {
HXLINE( 588)								_hx_tmp = b->parent->isMesh;
            							}
            							else {
HXLINE( 588)								_hx_tmp = true;
            							}
HXDLIN( 588)							if (_hx_tmp) {
HXLINE( 588)								continue;
            							}
HXLINE( 589)							parents->remove(b->parent);
HXLINE( 590)							parents->push(b->parent);
            						}
            					}
HXLINE( 592)					bones = parents;
            				}
            			}
            		}
HXLINE( 597)		bool changed = true;
HXLINE( 598)		while(changed){
HXLINE( 599)			changed = false;
HXLINE( 600)			{
HXLINE( 600)				int _g = 0;
HXDLIN( 600)				while((_g < objects->length)){
HXLINE( 600)					 ::hxd::fmt::fbx::TmpObject o = objects->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 600)					_g = (_g + 1);
HXLINE( 601)					bool _hx_tmp;
HXDLIN( 601)					if (!(o->isJoint)) {
HXLINE( 601)						_hx_tmp = o->isMesh;
            					}
            					else {
HXLINE( 601)						_hx_tmp = true;
            					}
HXDLIN( 601)					if (_hx_tmp) {
HXLINE( 601)						continue;
            					}
HXLINE( 602)					if (o->parent->isJoint) {
HXLINE( 603)						o->isJoint = true;
HXLINE( 604)						changed = true;
HXLINE( 605)						continue;
            					}
HXLINE( 607)					bool hasJoint = false;
HXLINE( 608)					{
HXLINE( 608)						int _g1 = 0;
HXDLIN( 608)						::Array< ::Dynamic> _g2 = o->childs;
HXDLIN( 608)						while((_g1 < _g2->length)){
HXLINE( 608)							 ::hxd::fmt::fbx::TmpObject c = _g2->__get(_g1).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 608)							_g1 = (_g1 + 1);
HXLINE( 609)							if (c->isJoint) {
HXLINE( 610)								hasJoint = true;
HXLINE( 611)								goto _hx_goto_81;
            							}
            						}
            						_hx_goto_81:;
            					}
HXLINE( 613)					if (hasJoint) {
HXLINE( 614)						int _g = 0;
HXDLIN( 614)						::Array< ::Dynamic> _g1 = o->parent->childs;
HXDLIN( 614)						while((_g < _g1->length)){
HXLINE( 614)							 ::hxd::fmt::fbx::TmpObject c = _g1->__get(_g).StaticCast<  ::hxd::fmt::fbx::TmpObject >();
HXDLIN( 614)							_g = (_g + 1);
HXLINE( 615)							if (c->isJoint) {
HXLINE( 616)								o->isJoint = true;
HXLINE( 617)								changed = true;
HXLINE( 618)								goto _hx_goto_82;
            							}
            						}
            						_hx_goto_82:;
            					}
            				}
            			}
            		}
HXLINE( 622)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("objects",d4,68,4f,82),objects)
            			->setFixed(1,HX_("root",22,ee,ae,4b),oroot));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseLibrary_obj,buildHierarchy,return )

 ::hxd::fmt::fbx::_BaseLibrary::AnimCurve BaseLibrary_obj::getObjectCurve( ::haxe::ds::IntMap curves, ::Dynamic model,::String curveName,::String animName){
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_625_getObjectCurve)
HXLINE( 626)		 ::hxd::fmt::fbx::_BaseLibrary::AnimCurve c = ( ( ::hxd::fmt::fbx::_BaseLibrary::AnimCurve)(curves->get(::hxd::fmt::fbx::FbxTools_obj::getId(model))) );
HXLINE( 627)		if (::hx::IsNotNull( c )) {
HXLINE( 628)			return c;
            		}
HXLINE( 629)		::String name = ::hxd::fmt::fbx::FbxTools_obj::getName(model);
HXLINE( 630)		if (this->skipObjects->get_bool(name)) {
HXLINE( 631)			return null();
            		}
HXLINE( 632)		 ::hxd::fmt::fbx::DefaultMatrixes def = this->getDefaultMatrixes(model);
HXLINE( 633)		if (::hx::IsNull( def )) {
HXLINE( 634)			return null();
            		}
HXLINE( 636)		bool isMove;
HXDLIN( 636)		if ((curveName != HX_("Visibility",f2,b1,be,c9))) {
HXLINE( 636)			isMove = (curveName != HX_("UV",61,4a,00,00));
            		}
            		else {
HXLINE( 636)			isMove = false;
            		}
HXLINE( 637)		bool _hx_tmp;
HXDLIN( 637)		if (::hx::IsNotNull( def->wasRemoved )) {
HXLINE( 637)			if (!(isMove)) {
HXLINE( 637)				_hx_tmp = ::hx::IsEq( def->wasRemoved,-1 );
            			}
            			else {
HXLINE( 637)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 637)			_hx_tmp = false;
            		}
HXDLIN( 637)		if (_hx_tmp) {
HXLINE( 638)			return null();
            		}
HXLINE( 640)		bool _hx_tmp1;
HXDLIN( 640)		if (::hx::IsNotNull( def->wasRemoved )) {
HXLINE( 640)			_hx_tmp1 = ::hx::IsNotEq( def->wasRemoved,-2 );
            		}
            		else {
HXLINE( 640)			_hx_tmp1 = false;
            		}
HXDLIN( 640)		if (_hx_tmp1) {
HXLINE( 642)			model = this->ids->get(( (int)(def->wasRemoved) ));
HXLINE( 643)			name = ::hxd::fmt::fbx::FbxTools_obj::getName(model);
HXLINE( 644)			c = ( ( ::hxd::fmt::fbx::_BaseLibrary::AnimCurve)(curves->get(( (int)(def->wasRemoved) ))) );
HXLINE( 645)			def = this->getDefaultMatrixes(model);
HXLINE( 647)			if (::hx::IsNull( def )) {
HXLINE( 647)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE( 649)		if (::hx::IsNull( c )) {
HXLINE( 650)			c =  ::hxd::fmt::fbx::_BaseLibrary::AnimCurve_obj::__alloc( HX_CTX ,def,name);
HXLINE( 651)			curves->set(::hxd::fmt::fbx::FbxTools_obj::getId(model),c);
            		}
HXLINE( 653)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC4(BaseLibrary_obj,getObjectCurve,return )

void BaseLibrary_obj::mergeModels(::Array< ::String > modelNames){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,models) HXARGC(1)
            		 ::Dynamic _hx_run(::String name){
            			HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_661_mergeModels)
HXLINE( 662)			{
HXLINE( 662)				int _g = 0;
HXDLIN( 662)				while((_g < models->length)){
HXLINE( 662)					 ::Dynamic m = models->__get(_g);
HXDLIN( 662)					_g = (_g + 1);
HXLINE( 663)					if ((::hxd::fmt::fbx::FbxTools_obj::getName(m) == name)) {
HXLINE( 664)						return m;
            					}
            				}
            			}
HXLINE( 665)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Model not found ",42,ee,8d,1f) + name)));
HXDLIN( 665)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_657_mergeModels)
HXLINE( 658)		if ((modelNames->length <= 1)) {
HXLINE( 659)			return;
            		}
HXLINE( 660)		::Array< ::Dynamic> models = this->getAllModels();
HXLINE( 661)		 ::Dynamic getModel =  ::Dynamic(new _hx_Closure_0(models));
HXLINE( 668)		 ::Dynamic m = getModel(modelNames->__get(0));
HXLINE( 669)		 ::hxd::fmt::fbx::Geometry geom =  ::hxd::fmt::fbx::Geometry_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),this->getChild(m,HX_("Geometry",d2,be,5a,ac),null()));
HXLINE( 670)		 ::Dynamic def = this->getChild(geom->getRoot(),HX_("Deformer",12,bd,ec,96),true);
HXLINE( 671)		::Array< ::Dynamic> subDefs = this->getChilds(def,HX_("Deformer",12,bd,ec,96));
HXLINE( 672)		{
HXLINE( 672)			int _g = 1;
HXDLIN( 672)			int _g1 = modelNames->length;
HXDLIN( 672)			while((_g < _g1)){
HXLINE( 672)				_g = (_g + 1);
HXDLIN( 672)				int i = (_g - 1);
HXLINE( 673)				::String name = modelNames->__get(i);
HXLINE( 674)				 ::Dynamic m2 = getModel(name);
HXLINE( 675)				 ::hxd::fmt::fbx::Geometry geom2 =  ::hxd::fmt::fbx::Geometry_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),this->getChild(m2,HX_("Geometry",d2,be,5a,ac),null()));
HXLINE( 676)				int vcount = ::Std_obj::_hx_int((( (Float)(geom->getVertices()->length) ) / ( (Float)(3) )));
HXLINE( 678)				this->skipObjects->set(name,true);
HXLINE( 681)				::Array< int > mindex = ::Array_obj< int >::__new(0);
HXLINE( 682)				::Array< ::Dynamic> materials = this->getChilds(m,HX_("Material",c7,18,57,ca));
HXLINE( 683)				{
HXLINE( 683)					int _g1 = 0;
HXDLIN( 683)					::Array< ::Dynamic> _g2 = this->getChilds(m2,HX_("Material",c7,18,57,ca));
HXDLIN( 683)					while((_g1 < _g2->length)){
HXLINE( 683)						 ::Dynamic mat = _g2->__get(_g1);
HXDLIN( 683)						_g1 = (_g1 + 1);
HXLINE( 684)						int idx = materials->indexOf(mat,null());
HXLINE( 685)						if ((idx < 0)) {
HXLINE( 686)							idx = materials->length;
HXLINE( 687)							materials->push(mat);
HXLINE( 688)							this->addLink(m,mat);
            						}
HXLINE( 690)						mindex->push(idx);
            					}
            				}
HXLINE( 694)				geom->merge(geom2,mindex);
HXLINE( 697)				 ::Dynamic def2 = this->getChild(geom2->getRoot(),HX_("Deformer",12,bd,ec,96),true);
HXLINE( 698)				if (::hx::IsNotNull( def2 )) {
HXLINE( 699)					if (::hx::IsNull( def )) {
HXLINE( 699)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((::hxd::fmt::fbx::FbxTools_obj::getName(m) + HX_(" does not have a deformer but ",4a,b0,93,63)) + name) + HX_(" has one",80,a6,34,20))));
            					}
HXLINE( 700)					{
HXLINE( 700)						int _g = 0;
HXDLIN( 700)						::Array< ::Dynamic> _g1 = this->getChilds(def2,HX_("Deformer",12,bd,ec,96));
HXDLIN( 700)						while((_g < _g1->length)){
HXLINE( 700)							 ::Dynamic subDef = _g1->__get(_g);
HXDLIN( 700)							_g = (_g + 1);
HXLINE( 701)							 ::Dynamic subModel = this->getChild(subDef,HX_("Model",89,93,85,9f),null());
HXLINE( 702)							 ::Dynamic prevDef = null();
HXLINE( 703)							{
HXLINE( 703)								int _g2 = 0;
HXDLIN( 703)								while((_g2 < subDefs->length)){
HXLINE( 703)									 ::Dynamic s = subDefs->__get(_g2);
HXDLIN( 703)									_g2 = (_g2 + 1);
HXLINE( 704)									if (::hx::IsEq( this->getChild(s,HX_("Model",89,93,85,9f),null()),subModel )) {
HXLINE( 705)										prevDef = s;
HXLINE( 706)										goto _hx_goto_89;
            									}
            								}
            								_hx_goto_89:;
            							}
HXLINE( 709)							if (::hx::IsNotNull( prevDef )) {
HXLINE( 710)								this->removeLink(subDef,subModel);
            							}
HXLINE( 712)							 ::Dynamic idx = ::hxd::fmt::fbx::FbxTools_obj::get(subDef,HX_("Indexes",e0,83,10,ae),true);
HXLINE( 713)							if (::hx::IsNull( idx )) {
HXLINE( 713)								continue;
            							}
HXLINE( 715)							if (::hx::IsNull( prevDef )) {
HXLINE( 716)								this->addLink(def,subDef);
HXLINE( 717)								this->removeLink(def2,subDef);
HXLINE( 718)								subDefs->push(subDef);
HXLINE( 719)								::Array< int > idx1 = ::hxd::fmt::fbx::FbxTools_obj::getInts(idx);
HXLINE( 720)								{
HXLINE( 720)									int _g = 0;
HXDLIN( 720)									int _g1 = idx1->length;
HXDLIN( 720)									while((_g < _g1)){
HXLINE( 720)										_g = (_g + 1);
HXDLIN( 720)										int i = (_g - 1);
HXLINE( 721)										::Array< int > idx = idx1;
HXDLIN( 721)										int i1 = i;
HXDLIN( 721)										idx[i1] = (idx->__get(i1) + vcount);
            									}
            								}
            							}
            							else {
HXLINE( 723)								::Array< int > pidx = ::hxd::fmt::fbx::FbxTools_obj::getInts(::hxd::fmt::fbx::FbxTools_obj::get(prevDef,HX_("Indexes",e0,83,10,ae),null()));
HXLINE( 724)								{
HXLINE( 724)									int _g = 0;
HXDLIN( 724)									::Array< int > _g1 = ::hxd::fmt::fbx::FbxTools_obj::getInts(idx);
HXDLIN( 724)									while((_g < _g1->length)){
HXLINE( 724)										int i = _g1->__get(_g);
HXDLIN( 724)										_g = (_g + 1);
HXLINE( 725)										pidx->push((i + vcount));
            									}
            								}
HXLINE( 726)								::Array< Float > weights = ::hxd::fmt::fbx::FbxTools_obj::getFloats(::hxd::fmt::fbx::FbxTools_obj::get(prevDef,HX_("Weights",db,ff,4d,3d),null()));
HXLINE( 727)								{
HXLINE( 727)									int _g2 = 0;
HXDLIN( 727)									::Array< Float > _g3 = ::hxd::fmt::fbx::FbxTools_obj::getFloats(::hxd::fmt::fbx::FbxTools_obj::get(subDef,HX_("Weights",db,ff,4d,3d),null()));
HXDLIN( 727)									while((_g2 < _g3->length)){
HXLINE( 727)										Float w = _g3->__get(_g2);
HXDLIN( 727)										_g2 = (_g2 + 1);
HXLINE( 728)										weights->push(w);
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,mergeModels,(void))

void BaseLibrary_obj::addLink( ::Dynamic parent, ::Dynamic child){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_735_addLink)
HXLINE( 736)		int pid = ::hxd::fmt::fbx::FbxTools_obj::getId(parent);
HXLINE( 737)		int nid = ::hxd::fmt::fbx::FbxTools_obj::getId(child);
HXLINE( 738)		( (::Array< int >)(this->connect->get(pid)) )->push(nid);
HXLINE( 739)		( (::Array< int >)(this->invConnect->get(nid)) )->push(pid);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseLibrary_obj,addLink,(void))

void BaseLibrary_obj::removeLink( ::Dynamic parent, ::Dynamic child){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_742_removeLink)
HXLINE( 743)		int pid = ::hxd::fmt::fbx::FbxTools_obj::getId(parent);
HXLINE( 744)		int nid = ::hxd::fmt::fbx::FbxTools_obj::getId(child);
HXLINE( 745)		( (::Array< int >)(this->connect->get(pid)) )->remove(nid);
HXLINE( 746)		( (::Array< int >)(this->invConnect->get(nid)) )->remove(pid);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseLibrary_obj,removeLink,(void))

bool BaseLibrary_obj::checkData( ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_749_checkData)
HXLINE( 750)		if (::hx::IsNull( t )) {
HXLINE( 751)			return true;
            		}
HXLINE( 752)		if (::hx::IsNotNull( t->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) )) {
HXLINE( 753)			Float v = ( (Float)( ::Dynamic(t->__Field(HX_("x",78,00,00,00),::hx::paccDynamic))->__GetItem(0)) );
HXLINE( 754)			{
HXLINE( 754)				int _g = 0;
HXDLIN( 754)				::Array< Float > _g1 = ( (::Array< Float >)(t->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 754)				while((_g < _g1->length)){
HXLINE( 754)					Float v2 = _g1->__get(_g);
HXDLIN( 754)					_g = (_g + 1);
HXLINE( 755)					if ((v != v2)) {
HXLINE( 756)						return false;
            					}
            				}
            			}
            		}
HXLINE( 758)		if (::hx::IsNotNull( t->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) )) {
HXLINE( 759)			Float v = ( (Float)( ::Dynamic(t->__Field(HX_("y",79,00,00,00),::hx::paccDynamic))->__GetItem(0)) );
HXLINE( 760)			{
HXLINE( 760)				int _g = 0;
HXDLIN( 760)				::Array< Float > _g1 = ( (::Array< Float >)(t->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 760)				while((_g < _g1->length)){
HXLINE( 760)					Float v2 = _g1->__get(_g);
HXDLIN( 760)					_g = (_g + 1);
HXLINE( 761)					if ((v != v2)) {
HXLINE( 762)						return false;
            					}
            				}
            			}
            		}
HXLINE( 764)		if (::hx::IsNotNull( t->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic) )) {
HXLINE( 765)			Float v = ( (Float)( ::Dynamic(t->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic))->__GetItem(0)) );
HXLINE( 766)			{
HXLINE( 766)				int _g = 0;
HXDLIN( 766)				::Array< Float > _g1 = ( (::Array< Float >)(t->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) );
HXDLIN( 766)				while((_g < _g1->length)){
HXLINE( 766)					Float v2 = _g1->__get(_g);
HXDLIN( 766)					_g = (_g + 1);
HXLINE( 767)					if ((v != v2)) {
HXLINE( 768)						return false;
            					}
            				}
            			}
            		}
HXLINE( 770)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,checkData,return )

bool BaseLibrary_obj::roundValues(::Array< Float > data,Float def,::hx::Null< Float >  __o_mult){
            		Float mult = __o_mult.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_773_roundValues)
HXLINE( 774)		bool hasValue = false;
HXLINE( 775)		{
HXLINE( 775)			int _g = 0;
HXDLIN( 775)			int _g1 = data->length;
HXDLIN( 775)			while((_g < _g1)){
HXLINE( 775)				_g = (_g + 1);
HXDLIN( 775)				int i = (_g - 1);
HXLINE( 776)				Float v = (data->__get(i) * mult);
HXLINE( 777)				Float f = (v - def);
HXDLIN( 777)				Float _hx_tmp;
HXDLIN( 777)				if ((f < 0)) {
HXLINE( 777)					_hx_tmp = -(f);
            				}
            				else {
HXLINE( 777)					_hx_tmp = f;
            				}
HXDLIN( 777)				if ((_hx_tmp > ((Float)1e-3))) {
HXLINE( 778)					hasValue = true;
            				}
            				else {
HXLINE( 780)					v = def;
            				}
HXLINE( 781)				data[i] = this->round(v);
            			}
            		}
HXLINE( 783)		return hasValue;
            	}


HX_DEFINE_DYNAMIC_FUNC3(BaseLibrary_obj,roundValues,return )

::Array< ::String > BaseLibrary_obj::getAnimationNames(){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_789_getAnimationNames)
HXLINE( 790)		::Array< ::String > names = ::Array_obj< ::String >::__new(0);
HXLINE( 791)		{
HXLINE( 791)			int _g = 0;
HXDLIN( 791)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("Objects.AnimationStack",3e,9c,19,6d));
HXDLIN( 791)			while((_g < _g1->length)){
HXLINE( 791)				 ::Dynamic a = _g1->__get(_g);
HXDLIN( 791)				_g = (_g + 1);
HXLINE( 792)				if ((this->getChilds(a,HX_("AnimationLayer",4d,a8,39,2a))->length > 0)) {
HXLINE( 793)					names->push(::hxd::fmt::fbx::FbxTools_obj::getName(a));
            				}
            			}
            		}
HXLINE( 795)		return names;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseLibrary_obj,getAnimationNames,return )

 ::h3d::anim::Animation BaseLibrary_obj::loadAnimation(::String animName, ::Dynamic root, ::hxd::fmt::fbx::BaseLibrary lib){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::String _hx_run( ::Dynamic c){
            			HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1051_loadAnimation)
HXLINE(1051)			if (::hx::IsNotNull( c->__Field(HX_("roll",7d,eb,ae,4b),::hx::paccDynamic) )) {
HXLINE(1051)				return HX_("roll",7d,eb,ae,4b);
            			}
            			else {
HXLINE(1051)				if (::hx::IsNotNull( c->__Field(HX_("fov",0d,c7,4d,00),::hx::paccDynamic) )) {
HXLINE(1051)					return HX_("fov",0d,c7,4d,00);
            				}
            				else {
HXLINE(1051)					if (::hx::IsNotNull( c->__Field(HX_("uv",61,66,00,00),::hx::paccDynamic) )) {
HXLINE(1051)						return HX_("uv",61,66,00,00);
            					}
            					else {
HXLINE(1051)						return HX_("position",a9,a0,fa,ca);
            					}
            				}
            			}
HXDLIN(1051)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,curveName) HXARGC(2)
            		int _hx_run( ::hxd::fmt::fbx::_BaseLibrary::AnimCurve c1, ::hxd::fmt::fbx::_BaseLibrary::AnimCurve c2){
            			HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1053_loadAnimation)
HXLINE(1054)			int r = ::Reflect_obj::compare(c1->object,c2->object);
HXLINE(1055)			if ((r != 0)) {
HXLINE(1055)				return r;
            			}
HXLINE(1056)			::String _hx_tmp = ( (::String)(curveName(c1)) );
HXDLIN(1056)			return ::Reflect_obj::compare(_hx_tmp,curveName(c2));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_798_loadAnimation)
HXLINE( 799)		if (::hx::IsNotNull( lib )) {
HXLINE( 800)			lib->defaultModelMatrixes = this->defaultModelMatrixes;
HXLINE( 801)			return lib->loadAnimation(animName,null(),null());
            		}
HXLINE( 803)		if (::hx::IsNotNull( root )) {
HXLINE( 804)			 ::hxd::fmt::fbx::BaseLibrary l =  ::hxd::fmt::fbx::BaseLibrary_obj::__alloc( HX_CTX ,this->fileName);
HXLINE( 805)			l->normalizeScaleOrient = this->normalizeScaleOrient;
HXLINE( 806)			l->load(root);
HXLINE( 807)			if (this->leftHand) {
HXLINE( 807)				l->leftHandConvert();
            			}
HXLINE( 808)			l->defaultModelMatrixes = this->defaultModelMatrixes;
HXLINE( 809)			return l->loadAnimation(animName,null(),null());
            		}
HXLINE( 811)		 ::Dynamic defNode = null();
HXLINE( 812)		::Array< ::Dynamic> animNodes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 813)		{
HXLINE( 813)			int _g = 0;
HXDLIN( 813)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->root,HX_("Objects.AnimationStack",3e,9c,19,6d));
HXDLIN( 813)			while((_g < _g1->length)){
HXLINE( 813)				 ::Dynamic a = _g1->__get(_g);
HXDLIN( 813)				_g = (_g + 1);
HXLINE( 814)				bool _hx_tmp;
HXDLIN( 814)				if (::hx::IsNotNull( animName )) {
HXLINE( 814)					_hx_tmp = (::hxd::fmt::fbx::FbxTools_obj::getName(a) == animName);
            				}
            				else {
HXLINE( 814)					_hx_tmp = true;
            				}
HXDLIN( 814)				if (_hx_tmp) {
HXLINE( 815)					int _g = 0;
HXDLIN( 815)					::Array< ::Dynamic> _g1 = this->getChilds(a,HX_("AnimationLayer",4d,a8,39,2a));
HXDLIN( 815)					while((_g < _g1->length)){
HXLINE( 815)						 ::Dynamic n = _g1->__get(_g);
HXDLIN( 815)						_g = (_g + 1);
HXLINE( 816)						defNode = n;
HXLINE( 817)						if ((this->getChilds(n,HX_("AnimationCurveNode",cd,1a,25,50))->length > 0)) {
HXLINE( 818)							animNodes->push(n);
            						}
            					}
            				}
            			}
            		}
HXLINE( 821)		 ::Dynamic animNode;
HXDLIN( 821)		switch((int)(animNodes->length)){
            			case (int)0: {
HXLINE( 821)				animNode = defNode;
            			}
            			break;
            			case (int)1: {
HXLINE( 821)				animNode = animNodes->__get(0);
            			}
            			break;
            			default:{
HXLINE( 827)				::haxe::Log_obj::trace(HX_("Multiple animation layers curves are currently not supported",11,3d,92,0a),::hx::SourceInfo(HX_("hxd/fmt/fbx/BaseLibrary.hx",c4,3f,68,92),827,HX_("hxd.fmt.fbx.BaseLibrary",dd,07,29,ba),HX_("loadAnimation",fe,bf,9a,cd)));
HXLINE( 821)				animNode = animNodes->__get(0);
            			}
            		}
HXLINE( 831)		if (::hx::IsNull( animNode )) {
HXLINE( 832)			if (::hx::IsNotNull( animName )) {
HXLINE( 833)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Animation not found ",c7,8a,9b,1a) + animName)));
            			}
HXLINE( 834)			if (::hx::IsNull( this->uvAnims )) {
HXLINE( 835)				return null();
            			}
            		}
HXLINE( 838)		if (::hx::IsNull( animName )) {
HXLINE( 838)			animName = ::hxd::fmt::fbx::FbxTools_obj::getName(this->getParent(animNode,HX_("AnimationStack",c4,8d,84,3e),null()));
            		}
HXLINE( 840)		 ::haxe::ds::IntMap curves =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 841)		 ::h3d::col::Point P0 =  ::h3d::col::Point_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 842)		 ::h3d::col::Point P1 =  ::h3d::col::Point_obj::__alloc( HX_CTX ,1,1,1);
HXLINE( 843)		Float F = ((Float)0.0174532925199432955);
HXLINE( 844)		 ::haxe::ds::IntMap allTimes =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 846)		if (::hx::IsNotNull( animNode )) {
HXLINE( 846)			int _g = 0;
HXDLIN( 846)			::Array< ::Dynamic> _g1 = this->getChilds(animNode,HX_("AnimationCurveNode",cd,1a,25,50));
HXDLIN( 846)			while((_g < _g1->length)){
HXLINE( 846)				 ::Dynamic cn = _g1->__get(_g);
HXDLIN( 846)				_g = (_g + 1);
HXLINE( 847)				 ::Dynamic model = this->getParent(cn,HX_("Model",89,93,85,9f),true);
HXLINE( 848)				if (::hx::IsNull( model )) {
HXLINE( 849)					::String _g = ::hxd::fmt::fbx::FbxTools_obj::getName(cn);
HXDLIN( 849)					if (::hx::IsNull( _g )) {
HXLINE( 856)						continue;
            					}
            					else {
HXLINE( 849)						::String _hx_switch_0 = _g;
            						if (  (_hx_switch_0==HX_("FieldOfView",56,7f,7e,3e)) ||  (_hx_switch_0==HX_("Roll",9d,17,88,36)) ){
HXLINE( 852)							 ::Dynamic nattr = this->getParent(cn,HX_("NodeAttribute",9a,45,ad,93),true);
HXLINE( 853)							if (::hx::IsNull( nattr )) {
HXLINE( 853)								model = null();
            							}
            							else {
HXLINE( 853)								model = this->getParent(nattr,HX_("Model",89,93,85,9f),true);
            							}
HXLINE( 854)							if (::hx::IsNull( model )) {
HXLINE( 854)								continue;
            							}
HXLINE( 850)							goto _hx_goto_108;
            						}
            						/* default */{
HXLINE( 856)							continue;
            						}
            						_hx_goto_108:;
            					}
            				}
HXLINE( 860)				 ::hxd::fmt::fbx::_BaseLibrary::AnimCurve c = this->getObjectCurve(curves,model,::hxd::fmt::fbx::FbxTools_obj::getName(cn),animName);
HXLINE( 861)				if (::hx::IsNull( c )) {
HXLINE( 862)					continue;
            				}
HXLINE( 864)				::Array< ::Dynamic> dataCurves = this->getChilds(cn,HX_("AnimationCurve",2b,73,d1,08));
HXLINE( 865)				if ((dataCurves->length == 0)) {
HXLINE( 865)					continue;
            				}
HXLINE( 867)				::String cname = ::hxd::fmt::fbx::FbxTools_obj::getName(cn);
HXLINE( 869)				::Array< Float > times = ::hxd::fmt::fbx::FbxTools_obj::getFloats(::hxd::fmt::fbx::FbxTools_obj::get(dataCurves->__get(0),HX_("KeyTime",2c,65,27,74),null()));
HXLINE( 870)				{
HXLINE( 870)					int _g2 = 0;
HXDLIN( 870)					int _g3 = times->length;
HXDLIN( 870)					while((_g2 < _g3)){
HXLINE( 870)						_g2 = (_g2 + 1);
HXDLIN( 870)						int i = (_g2 - 1);
HXLINE( 871)						Float t = times->__get(i);
HXLINE( 873)						if ((::hx::Mod(t,100) != 0)) {
HXLINE( 874)							t = (t + (( (Float)(100) ) - ::hx::Mod(t,100)));
HXLINE( 875)							times[i] = t;
            						}
HXLINE( 878)						int it = ::Std_obj::_hx_int((t / ( (Float)(200000) )));
HXLINE( 879)						allTimes->set(it,t);
            					}
            				}
HXLINE( 883)				if ((dataCurves->length != 3)) {
HXLINE( 884)					::Array< Float > values = ::hxd::fmt::fbx::FbxTools_obj::getFloats(::hxd::fmt::fbx::FbxTools_obj::get(dataCurves->__get(0),HX_("KeyValueFloat",ca,d6,ef,e9),null()));
HXLINE( 885)					if (::hx::IsNotNull( cname )) {
HXLINE( 885)						::String _hx_switch_1 = cname;
            						if (  (_hx_switch_1==HX_("FieldOfView",56,7f,7e,3e)) ){
HXLINE( 903)							Float ratio = ((Float)1.77777777777777768);
HXDLIN( 903)							Float fov = ((Float)45.);
HXLINE( 904)							{
HXLINE( 904)								int _g = 0;
HXDLIN( 904)								::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(this->getChild(model,HX_("NodeAttribute",9a,45,ad,93),null()),HX_("Properties70.P",4e,56,dc,4c));
HXDLIN( 904)								while((_g < _g1->length)){
HXLINE( 904)									 ::Dynamic p = _g1->__get(_g);
HXDLIN( 904)									_g = (_g + 1);
HXLINE( 905)									::String _hx_switch_2 = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
            									if (  (_hx_switch_2==HX_("FieldOfView",56,7f,7e,3e)) ){
HXLINE( 907)										fov = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 907)										goto _hx_goto_112;
            									}
            									if (  (_hx_switch_2==HX_("FilmAspectRatio",cf,f7,91,e3)) ){
HXLINE( 906)										ratio = ::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
HXDLIN( 906)										goto _hx_goto_112;
            									}
            									/* default */{
            									}
            									_hx_goto_112:;
            								}
            							}
HXLINE( 914)							{
HXLINE( 914)								int _g2 = 0;
HXDLIN( 914)								int _g3 = values->length;
HXDLIN( 914)								while((_g2 < _g3)){
HXLINE( 914)									_g2 = (_g2 + 1);
HXDLIN( 914)									int i = (_g2 - 1);
HXLINE( 915)									values[i] = (((( (Float)(2) ) * ::Math_obj::atan((::Math_obj::tan((((values->__get(i) * ((Float)0.5)) * ((Float)3.14159265358979323)) / ( (Float)(180) ))) / ratio))) * ( (Float)(180) )) / ((Float)3.14159265358979323));
            								}
            							}
HXLINE( 916)							if (!(this->roundValues(values,(((( (Float)(2) ) * ::Math_obj::atan((::Math_obj::tan((((fov * ((Float)0.5)) * ((Float)3.14159265358979323)) / ( (Float)(180) ))) / ratio))) * ( (Float)(180) )) / ((Float)3.14159265358979323)),null()))) {
HXLINE( 917)								continue;
            							}
HXLINE( 918)							c->fov =  ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("t",74,00,00,00),times)
            								->setFixed(1,HX_("v",76,00,00,00),values));
HXLINE( 922)							continue;
HXLINE( 902)							goto _hx_goto_110;
            						}
            						if (  (_hx_switch_1==HX_("Roll",9d,17,88,36)) ){
HXLINE( 895)							if (!(this->roundValues(values,( (Float)(0) ),null()))) {
HXLINE( 896)								continue;
            							}
HXLINE( 897)							c->roll =  ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("t",74,00,00,00),times)
            								->setFixed(1,HX_("v",76,00,00,00),values));
HXLINE( 901)							continue;
HXLINE( 894)							goto _hx_goto_110;
            						}
            						if (  (_hx_switch_1==HX_("Visibility",f2,b1,be,c9)) ){
HXLINE( 887)							if (!(this->roundValues(values,( (Float)(1) ),null()))) {
HXLINE( 888)								continue;
            							}
HXLINE( 889)							c->a =  ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("t",74,00,00,00),times)
            								->setFixed(1,HX_("v",76,00,00,00),values));
HXLINE( 893)							continue;
HXLINE( 886)							goto _hx_goto_110;
            						}
            						/* default */{
            						}
            						_hx_goto_110:;
            					}
            				}
HXLINE( 927)				 ::Dynamic data =  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("t",74,00,00,00),times)
            					->setFixed(1,HX_("x",78,00,00,00),null())
            					->setFixed(2,HX_("y",79,00,00,00),null())
            					->setFixed(3,HX_("z",7a,00,00,00),null()));
HXLINE( 934)				::Dynamic this1 = this->namedConnect;
HXDLIN( 934)				 ::haxe::ds::StringMap curves1 = ( ( ::haxe::ds::StringMap)(( ( ::haxe::ds::IntMap)(this1) )->get(::hxd::fmt::fbx::FbxTools_obj::getId(cn))) );
HXLINE( 935)				{
HXLINE( 935)					 ::Dynamic cname1 = curves1->keys();
HXDLIN( 935)					while(( (bool)(cname1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 935)						::String cname = ( (::String)(cname1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 936)						::Dynamic this1 = this->ids;
HXDLIN( 936)						::Array< Float > values = ::hxd::fmt::fbx::FbxTools_obj::getFloats(::hxd::fmt::fbx::FbxTools_obj::get(( ( ::haxe::ds::IntMap)(this1) )->get(curves1->get_int(cname)),HX_("KeyValueFloat",ca,d6,ef,e9),null()));
HXLINE( 937)						::String _hx_switch_3 = cname;
            						if (  (_hx_switch_3==HX_("d|X",c0,4d,4c,00)) ){
HXLINE( 938)							data->__SetField(HX_("x",78,00,00,00),values,::hx::paccDynamic);
HXDLIN( 938)							goto _hx_goto_115;
            						}
            						if (  (_hx_switch_3==HX_("d|Y",c1,4d,4c,00)) ){
HXLINE( 939)							data->__SetField(HX_("y",79,00,00,00),values,::hx::paccDynamic);
HXDLIN( 939)							goto _hx_goto_115;
            						}
            						if (  (_hx_switch_3==HX_("d|Z",c2,4d,4c,00)) ){
HXLINE( 940)							data->__SetField(HX_("z",7a,00,00,00),values,::hx::paccDynamic);
HXDLIN( 940)							goto _hx_goto_115;
            						}
            						/* default */{
HXLINE( 942)							::haxe::Log_obj::trace((HX_("Unsupported key name ",e9,72,0e,95) + cname),::hx::SourceInfo(HX_("hxd/fmt/fbx/BaseLibrary.hx",c4,3f,68,92),942,HX_("hxd.fmt.fbx.BaseLibrary",dd,07,29,ba),HX_("loadAnimation",fe,bf,9a,cd)));
            						}
            						_hx_goto_115:;
            					}
            				}
HXLINE( 950)				Float M = ((Float)1.0);
HXLINE( 951)				 ::h3d::col::Point def;
HXDLIN( 951)				if (::hx::IsNull( cname )) {
HXLINE( 969)					 ::Dynamic def = ::haxe::Log_obj::trace;
HXDLIN( 969)					::String def1 = (((HX_("Unknown curve ",87,fa,9f,ea) + ::hxd::fmt::fbx::FbxTools_obj::getName(model)) + HX_(".",2e,00,00,00)) + cname);
HXDLIN( 969)					def(def1,::hx::SourceInfo(HX_("hxd/fmt/fbx/BaseLibrary.hx",c4,3f,68,92),969,HX_("hxd.fmt.fbx.BaseLibrary",dd,07,29,ba),HX_("loadAnimation",fe,bf,9a,cd)));
HXLINE( 970)					continue;
            				}
            				else {
HXLINE( 951)					::String _hx_switch_4 = cname;
            					if (  (_hx_switch_4==HX_("R",52,00,00,00)) ){
HXLINE( 955)						M = F;
HXLINE( 956)						bool def1;
HXDLIN( 956)						if (::hx::IsNull( c->def->rotate )) {
HXLINE( 956)							def1 = ::hx::IsNull( c->def->preRot );
            						}
            						else {
HXLINE( 956)							def1 = false;
            						}
HXDLIN( 956)						if (def1) {
HXLINE( 951)							def = P0;
            						}
            						else {
HXLINE( 957)							if (::hx::IsNull( c->def->rotate )) {
HXLINE( 951)								def = c->def->preRot;
            							}
            							else {
HXLINE( 958)								if (::hx::IsNull( c->def->preRot )) {
HXLINE( 951)									def = c->def->rotate;
            								}
            								else {
HXLINE( 960)									 ::h3d::Quat q =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN( 960)									 ::h3d::Quat q2 =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 961)									q2->initRotation(c->def->preRot->x,c->def->preRot->y,c->def->preRot->z);
HXLINE( 962)									q->initRotation(c->def->rotate->x,c->def->rotate->y,c->def->rotate->z);
HXLINE( 963)									q->multiply(q2,q);
HXLINE( 964)									 ::h3d::Vector _this = q->toEuler();
HXLINE( 951)									def =  ::h3d::col::Point_obj::__alloc( HX_CTX ,_this->x,_this->y,_this->z);
            								}
            							}
            						}
HXLINE( 954)						goto _hx_goto_116;
            					}
            					if (  (_hx_switch_4==HX_("S",53,00,00,00)) ){
HXLINE( 967)						if (::hx::IsNull( c->def->scale )) {
HXLINE( 951)							def = P1;
            						}
            						else {
HXLINE( 951)							def = c->def->scale;
            						}
HXLINE( 967)						goto _hx_goto_116;
            					}
            					if (  (_hx_switch_4==HX_("T",54,00,00,00)) ){
HXLINE( 953)						if (::hx::IsNull( c->def->trans )) {
HXLINE( 951)							def = P0;
            						}
            						else {
HXLINE( 951)							def = c->def->trans;
            						}
HXLINE( 953)						goto _hx_goto_116;
            					}
            					/* default */{
HXLINE( 969)						 ::Dynamic def = ::haxe::Log_obj::trace;
HXDLIN( 969)						::String def1 = (((HX_("Unknown curve ",87,fa,9f,ea) + ::hxd::fmt::fbx::FbxTools_obj::getName(model)) + HX_(".",2e,00,00,00)) + cname);
HXDLIN( 969)						def(def1,::hx::SourceInfo(HX_("hxd/fmt/fbx/BaseLibrary.hx",c4,3f,68,92),969,HX_("hxd.fmt.fbx.BaseLibrary",dd,07,29,ba),HX_("loadAnimation",fe,bf,9a,cd)));
HXLINE( 970)						continue;
            					}
            					_hx_goto_116:;
            				}
HXLINE( 972)				bool hasValue = false;
HXLINE( 973)				bool _hx_tmp;
HXDLIN( 973)				if (::hx::IsNotNull( data->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) )) {
HXLINE( 973)					_hx_tmp = this->roundValues(( (::Array< Float >)(data->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ),def->x,M);
            				}
            				else {
HXLINE( 973)					_hx_tmp = false;
            				}
HXDLIN( 973)				if (_hx_tmp) {
HXLINE( 974)					hasValue = true;
            				}
HXLINE( 975)				bool _hx_tmp1;
HXDLIN( 975)				if (::hx::IsNotNull( data->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) )) {
HXLINE( 975)					_hx_tmp1 = this->roundValues(( (::Array< Float >)(data->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ),def->y,M);
            				}
            				else {
HXLINE( 975)					_hx_tmp1 = false;
            				}
HXDLIN( 975)				if (_hx_tmp1) {
HXLINE( 976)					hasValue = true;
            				}
HXLINE( 977)				bool _hx_tmp2;
HXDLIN( 977)				if (::hx::IsNotNull( data->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic) )) {
HXLINE( 977)					_hx_tmp2 = this->roundValues(( (::Array< Float >)(data->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) ),def->z,M);
            				}
            				else {
HXLINE( 977)					_hx_tmp2 = false;
            				}
HXDLIN( 977)				if (_hx_tmp2) {
HXLINE( 978)					hasValue = true;
            				}
HXLINE( 980)				if (!(hasValue)) {
HXLINE( 981)					continue;
            				}
HXLINE( 982)				int keyCount = 0;
HXLINE( 983)				if (::hx::IsNotNull( data->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) )) {
HXLINE( 983)					keyCount = ( (::Array< Float >)(data->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) )->length;
            				}
HXLINE( 984)				if (::hx::IsNotNull( data->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) )) {
HXLINE( 984)					keyCount = ( (::Array< Float >)(data->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) )->length;
            				}
HXLINE( 985)				if (::hx::IsNotNull( data->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic) )) {
HXLINE( 985)					keyCount = ( (::Array< Float >)(data->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) )->length;
            				}
HXLINE( 986)				if (::hx::IsNull( data->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) )) {
HXLINE( 986)					::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 986)					{
HXLINE( 986)						int _g1 = 0;
HXDLIN( 986)						int _g2 = keyCount;
HXDLIN( 986)						while((_g1 < _g2)){
HXLINE( 986)							_g1 = (_g1 + 1);
HXDLIN( 986)							int i = (_g1 - 1);
HXDLIN( 986)							_g->push(def->x);
            						}
            					}
HXDLIN( 986)					data->__SetField(HX_("x",78,00,00,00),_g,::hx::paccDynamic);
            				}
HXLINE( 987)				if (::hx::IsNull( data->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) )) {
HXLINE( 987)					::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 987)					{
HXLINE( 987)						int _g1 = 0;
HXDLIN( 987)						int _g2 = keyCount;
HXDLIN( 987)						while((_g1 < _g2)){
HXLINE( 987)							_g1 = (_g1 + 1);
HXDLIN( 987)							int i = (_g1 - 1);
HXDLIN( 987)							_g->push(def->y);
            						}
            					}
HXDLIN( 987)					data->__SetField(HX_("y",79,00,00,00),_g,::hx::paccDynamic);
            				}
HXLINE( 988)				if (::hx::IsNull( data->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic) )) {
HXLINE( 988)					::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 988)					{
HXLINE( 988)						int _g1 = 0;
HXDLIN( 988)						int _g2 = keyCount;
HXDLIN( 988)						while((_g1 < _g2)){
HXLINE( 988)							_g1 = (_g1 + 1);
HXDLIN( 988)							int i = (_g1 - 1);
HXDLIN( 988)							_g->push(def->z);
            						}
            					}
HXDLIN( 988)					data->__SetField(HX_("z",7a,00,00,00),_g,::hx::paccDynamic);
            				}
HXLINE( 989)				if (::hx::IsNull( cname )) {
HXLINE( 993)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
            				else {
HXLINE( 989)					::String _hx_switch_5 = cname;
            					if (  (_hx_switch_5==HX_("R",52,00,00,00)) ){
HXLINE( 991)						c->r = data;
HXDLIN( 991)						goto _hx_goto_120;
            					}
            					if (  (_hx_switch_5==HX_("S",53,00,00,00)) ){
HXLINE( 992)						c->s = data;
HXDLIN( 992)						goto _hx_goto_120;
            					}
            					if (  (_hx_switch_5==HX_("T",54,00,00,00)) ){
HXLINE( 990)						c->t = data;
HXDLIN( 990)						goto _hx_goto_120;
            					}
            					/* default */{
HXLINE( 993)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
            					_hx_goto_120:;
            				}
            			}
            		}
HXLINE( 998)		if (::hx::IsNotNull( this->uvAnims )) {
HXLINE( 999)			 ::haxe::ds::StringMap modelByName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(1000)			{
HXLINE(1000)				int _g = 0;
HXDLIN(1000)				::Array< ::Dynamic> _g1 = this->getAllModels();
HXDLIN(1000)				while((_g < _g1->length)){
HXLINE(1000)					 ::Dynamic obj = _g1->__get(_g);
HXDLIN(1000)					_g = (_g + 1);
HXLINE(1001)					modelByName->set(::hxd::fmt::fbx::FbxTools_obj::getName(obj),obj);
            				}
            			}
HXLINE(1002)			{
HXLINE(1002)				 ::Dynamic obj = this->uvAnims->keys();
HXDLIN(1002)				while(( (bool)(obj->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1002)					::String obj1 = ( (::String)(obj->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1003)					::Array< ::Dynamic> frames = ( (::Array< ::Dynamic>)(this->uvAnims->get(obj1)) );
HXLINE(1004)					 ::Dynamic model = modelByName->get(obj1);
HXLINE(1005)					if (::hx::IsNull( model )) {
HXLINE(1005)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Missing model '",16,1d,4d,f5) + obj1) + HX_("' required by UV animation",c6,20,7a,be))));
            					}
HXLINE(1006)					 ::hxd::fmt::fbx::_BaseLibrary::AnimCurve c = this->getObjectCurve(curves,model,HX_("UV",61,4a,00,00),animName);
HXLINE(1007)					if (::hx::IsNull( c )) {
HXLINE(1007)						continue;
            					}
HXLINE(1008)					c->uv = frames;
HXLINE(1009)					{
HXLINE(1009)						int _g = 0;
HXDLIN(1009)						while((_g < frames->length)){
HXLINE(1009)							 ::Dynamic f = frames->__get(_g);
HXDLIN(1009)							_g = (_g + 1);
HXLINE(1010)							{
HXLINE(1010)								int key = ::Std_obj::_hx_int((( (Float)(f->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)) ) / ( (Float)(200000) )));
HXDLIN(1010)								allTimes->set(key, ::Dynamic(f->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(1014)		::Array< Float > _g2 = ::Array_obj< Float >::__new(0);
HXDLIN(1014)		{
HXLINE(1014)			 ::Dynamic a = allTimes->iterator();
HXDLIN(1014)			while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1014)				Float a1 = ( (Float)(a->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(1014)				_g2->push(a1);
            			}
            		}
HXDLIN(1014)		::Array< Float > allTimes1 = _g2;
HXLINE(1017)		if ((allTimes1->length == 0)) {
HXLINE(1018)			return null();
            		}
HXLINE(1020)		allTimes1->sort(this->sortDistinctFloats_dyn());
HXLINE(1021)		Float maxTime = allTimes1->__get((allTimes1->length - 1));
HXLINE(1022)		Float minDT = maxTime;
HXLINE(1023)		Float curT = allTimes1->__get(0);
HXLINE(1024)		{
HXLINE(1024)			int _g3 = 1;
HXDLIN(1024)			int _g4 = allTimes1->length;
HXDLIN(1024)			while((_g3 < _g4)){
HXLINE(1024)				_g3 = (_g3 + 1);
HXDLIN(1024)				int i = (_g3 - 1);
HXLINE(1025)				Float t = allTimes1->__get(i);
HXLINE(1026)				Float dt = (t - curT);
HXLINE(1027)				if ((dt < minDT)) {
HXLINE(1027)					minDT = dt;
            				}
HXLINE(1028)				curT = t;
            			}
            		}
HXLINE(1030)		int numFrames;
HXDLIN(1030)		if ((maxTime == 0)) {
HXLINE(1030)			numFrames = 1;
            		}
            		else {
HXLINE(1030)			numFrames = (1 + ::Std_obj::_hx_int(((maxTime - allTimes1->__get(0)) / minDT)));
            		}
HXLINE(1031)		Float sampling = (((Float)15.0) / (minDT / ((Float)3079077200)));
HXLINE(1034)		if ((allTimes1->length < numFrames)) {
HXLINE(1035)			Float t = allTimes1->__get(0);
HXLINE(1036)			while((t < maxTime)){
HXLINE(1037)				if ((allTimes1->indexOf(t,null()) < 0)) {
HXLINE(1038)					allTimes1->push(t);
            				}
HXLINE(1039)				t = (t + minDT);
            			}
HXLINE(1041)			allTimes1->sort(::Reflect_obj::compare_dyn());
HXLINE(1042)			if ((allTimes1->length > numFrames)) {
HXLINE(1042)				::String _hx_tmp = ((((HX_("Animation ",bc,38,cd,79) + animName) + HX_("(",28,00,00,00)) + this->fileName) + HX_(") is not baked on a fixed framerate (detected ",f4,4a,b8,3d));
HXDLIN(1042)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + ::Std_obj::_hx_int(sampling)) + HX_(")",29,00,00,00))));
            			}
HXLINE(1043)			if ((allTimes1->length < numFrames)) {
HXLINE(1043)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE(1046)		 ::h3d::anim::LinearAnimation anim =  ::h3d::anim::LinearAnimation_obj::__alloc( HX_CTX ,animName,numFrames,sampling);
HXLINE(1047)		 ::h3d::Quat q =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXDLIN(1047)		 ::h3d::Quat q2 =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(1049)		::Array< ::Dynamic> _g5 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1049)		{
HXLINE(1049)			 ::Dynamic c = curves->iterator();
HXDLIN(1049)			while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1049)				 ::hxd::fmt::fbx::_BaseLibrary::AnimCurve c1 = ( ( ::hxd::fmt::fbx::_BaseLibrary::AnimCurve)(c->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(1049)				_g5->push(c1);
            			}
            		}
HXDLIN(1049)		::Array< ::Dynamic> sortedCurves = _g5;
HXLINE(1050)		 ::Dynamic curveName =  ::Dynamic(new _hx_Closure_0());
HXLINE(1053)		sortedCurves->sort( ::Dynamic(new _hx_Closure_1(curveName)));
HXLINE(1058)		{
HXLINE(1058)			int _g6 = 0;
HXDLIN(1058)			while((_g6 < sortedCurves->length)){
HXLINE(1058)				 ::hxd::fmt::fbx::_BaseLibrary::AnimCurve c = sortedCurves->__get(_g6).StaticCast<  ::hxd::fmt::fbx::_BaseLibrary::AnimCurve >();
HXDLIN(1058)				_g6 = (_g6 + 1);
HXLINE(1059)				int numFrames1 = numFrames;
HXLINE(1060)				bool sameData = true;
HXLINE(1061)				bool _hx_tmp;
HXDLIN(1061)				bool _hx_tmp1;
HXDLIN(1061)				bool _hx_tmp2;
HXDLIN(1061)				bool _hx_tmp3;
HXDLIN(1061)				bool _hx_tmp4;
HXDLIN(1061)				bool _hx_tmp5;
HXDLIN(1061)				if (::hx::IsNull( c->t )) {
HXLINE(1061)					_hx_tmp5 = ::hx::IsNull( c->r );
            				}
            				else {
HXLINE(1061)					_hx_tmp5 = false;
            				}
HXDLIN(1061)				if (_hx_tmp5) {
HXLINE(1061)					_hx_tmp4 = ::hx::IsNull( c->s );
            				}
            				else {
HXLINE(1061)					_hx_tmp4 = false;
            				}
HXDLIN(1061)				if (_hx_tmp4) {
HXLINE(1061)					_hx_tmp3 = ::hx::IsNull( c->a );
            				}
            				else {
HXLINE(1061)					_hx_tmp3 = false;
            				}
HXDLIN(1061)				if (_hx_tmp3) {
HXLINE(1061)					_hx_tmp2 = ::hx::IsNull( c->uv );
            				}
            				else {
HXLINE(1061)					_hx_tmp2 = false;
            				}
HXDLIN(1061)				if (_hx_tmp2) {
HXLINE(1061)					_hx_tmp1 = ::hx::IsNull( c->roll );
            				}
            				else {
HXLINE(1061)					_hx_tmp1 = false;
            				}
HXDLIN(1061)				if (_hx_tmp1) {
HXLINE(1061)					_hx_tmp = ::hx::IsNull( c->fov );
            				}
            				else {
HXLINE(1061)					_hx_tmp = false;
            				}
HXDLIN(1061)				if (_hx_tmp) {
HXLINE(1062)					numFrames1 = 1;
            				}
            				else {
HXLINE(1064)					if (sameData) {
HXLINE(1065)						sameData = this->checkData(c->t);
            					}
HXLINE(1066)					if (sameData) {
HXLINE(1067)						sameData = this->checkData(c->r);
            					}
HXLINE(1068)					if (sameData) {
HXLINE(1069)						sameData = this->checkData(c->s);
            					}
            				}
HXLINE(1071)				int this1;
HXDLIN(1071)				if (sameData) {
HXLINE(1071)					this1 = 1;
            				}
            				else {
HXLINE(1071)					this1 = numFrames1;
            				}
HXDLIN(1071)				::Array< ::Dynamic> this2 = ::Array_obj< ::Dynamic>::__new(this1);
HXDLIN(1071)				::Array< ::Dynamic> frames = this2;
HXLINE(1072)				::Array< Float > alpha;
HXDLIN(1072)				if (::hx::IsNull( c->a )) {
HXLINE(1072)					alpha = null();
            				}
            				else {
HXLINE(1072)					::Array< Float > this1 = ::Array_obj< Float >::__new(numFrames1);
HXDLIN(1072)					alpha = this1;
            				}
HXLINE(1073)				::Array< Float > uvs;
HXDLIN(1073)				if (::hx::IsNull( c->uv )) {
HXLINE(1073)					uvs = null();
            				}
            				else {
HXLINE(1073)					::Array< Float > this1 = ::Array_obj< Float >::__new((numFrames1 * 2));
HXDLIN(1073)					uvs = this1;
            				}
HXLINE(1074)				::Array< Float > roll;
HXDLIN(1074)				if (::hx::IsNull( c->roll )) {
HXLINE(1074)					roll = null();
            				}
            				else {
HXLINE(1074)					::Array< Float > this1 = ::Array_obj< Float >::__new(numFrames1);
HXDLIN(1074)					roll = this1;
            				}
HXLINE(1075)				::Array< Float > fov;
HXDLIN(1075)				if (::hx::IsNull( c->fov )) {
HXLINE(1075)					fov = null();
            				}
            				else {
HXLINE(1075)					::Array< Float > this1 = ::Array_obj< Float >::__new(numFrames1);
HXDLIN(1075)					fov = this1;
            				}
HXLINE(1077)				bool _hx_tmp6;
HXDLIN(1077)				bool _hx_tmp7;
HXDLIN(1077)				bool _hx_tmp8;
HXDLIN(1077)				bool _hx_tmp9;
HXDLIN(1077)				if (::hx::IsNull( frames )) {
HXLINE(1077)					_hx_tmp9 = ::hx::IsNull( alpha );
            				}
            				else {
HXLINE(1077)					_hx_tmp9 = false;
            				}
HXDLIN(1077)				if (_hx_tmp9) {
HXLINE(1077)					_hx_tmp8 = ::hx::IsNull( uvs );
            				}
            				else {
HXLINE(1077)					_hx_tmp8 = false;
            				}
HXDLIN(1077)				if (_hx_tmp8) {
HXLINE(1077)					_hx_tmp7 = ::hx::IsNull( roll );
            				}
            				else {
HXLINE(1077)					_hx_tmp7 = false;
            				}
HXDLIN(1077)				if (_hx_tmp7) {
HXLINE(1077)					_hx_tmp6 = ::hx::IsNull( fov );
            				}
            				else {
HXLINE(1077)					_hx_tmp6 = false;
            				}
HXDLIN(1077)				if (_hx_tmp6) {
HXLINE(1078)					continue;
            				}
HXLINE(1079)				::Array< Float > ctx;
HXDLIN(1079)				if (::hx::IsNull( c->t )) {
HXLINE(1079)					ctx = null();
            				}
            				else {
HXLINE(1079)					ctx = ( (::Array< Float >)(c->t->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1080)				::Array< Float > cty;
HXDLIN(1080)				if (::hx::IsNull( c->t )) {
HXLINE(1080)					cty = null();
            				}
            				else {
HXLINE(1080)					cty = ( (::Array< Float >)(c->t->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1081)				::Array< Float > ctz;
HXDLIN(1081)				if (::hx::IsNull( c->t )) {
HXLINE(1081)					ctz = null();
            				}
            				else {
HXLINE(1081)					ctz = ( (::Array< Float >)(c->t->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1082)				::Array< Float > ctt;
HXDLIN(1082)				if (::hx::IsNull( c->t )) {
HXLINE(1082)					ctt = ::Array_obj< Float >::fromData( _hx_array_data_ba2907dd_133,1);
            				}
            				else {
HXLINE(1082)					ctt = ( (::Array< Float >)(c->t->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1083)				::Array< Float > crx;
HXDLIN(1083)				if (::hx::IsNull( c->r )) {
HXLINE(1083)					crx = null();
            				}
            				else {
HXLINE(1083)					crx = ( (::Array< Float >)(c->r->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1084)				::Array< Float > cry;
HXDLIN(1084)				if (::hx::IsNull( c->r )) {
HXLINE(1084)					cry = null();
            				}
            				else {
HXLINE(1084)					cry = ( (::Array< Float >)(c->r->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1085)				::Array< Float > crz;
HXDLIN(1085)				if (::hx::IsNull( c->r )) {
HXLINE(1085)					crz = null();
            				}
            				else {
HXLINE(1085)					crz = ( (::Array< Float >)(c->r->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1086)				::Array< Float > crt;
HXDLIN(1086)				if (::hx::IsNull( c->r )) {
HXLINE(1086)					crt = ::Array_obj< Float >::fromData( _hx_array_data_ba2907dd_134,1);
            				}
            				else {
HXLINE(1086)					crt = ( (::Array< Float >)(c->r->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1087)				::Array< Float > csx;
HXDLIN(1087)				if (::hx::IsNull( c->s )) {
HXLINE(1087)					csx = null();
            				}
            				else {
HXLINE(1087)					csx = ( (::Array< Float >)(c->s->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1088)				::Array< Float > csy;
HXDLIN(1088)				if (::hx::IsNull( c->s )) {
HXLINE(1088)					csy = null();
            				}
            				else {
HXLINE(1088)					csy = ( (::Array< Float >)(c->s->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1089)				::Array< Float > csz;
HXDLIN(1089)				if (::hx::IsNull( c->s )) {
HXLINE(1089)					csz = null();
            				}
            				else {
HXLINE(1089)					csz = ( (::Array< Float >)(c->s->__Field(HX_("z",7a,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1090)				::Array< Float > cst;
HXDLIN(1090)				if (::hx::IsNull( c->s )) {
HXLINE(1090)					cst = ::Array_obj< Float >::fromData( _hx_array_data_ba2907dd_135,1);
            				}
            				else {
HXLINE(1090)					cst = ( (::Array< Float >)(c->s->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1091)				::Array< Float > cav;
HXDLIN(1091)				if (::hx::IsNull( c->a )) {
HXLINE(1091)					cav = null();
            				}
            				else {
HXLINE(1091)					cav = ( (::Array< Float >)(c->a->__Field(HX_("v",76,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1092)				::Array< Float > cat;
HXDLIN(1092)				if (::hx::IsNull( c->a )) {
HXLINE(1092)					cat = null();
            				}
            				else {
HXLINE(1092)					cat = ( (::Array< Float >)(c->a->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)) );
            				}
HXLINE(1093)				::Array< ::Dynamic> cuv = c->uv;
HXLINE(1094)				 ::hxd::fmt::fbx::DefaultMatrixes def = c->def;
HXLINE(1095)				int tp = 0;
HXDLIN(1095)				int rp = 0;
HXDLIN(1095)				int sp = 0;
HXDLIN(1095)				int ap = 0;
HXDLIN(1095)				int uvp = 0;
HXDLIN(1095)				int fovp = 0;
HXDLIN(1095)				int rollp = 0;
HXLINE(1096)				 ::h3d::anim::LinearFrame curFrame = null();
HXLINE(1097)				{
HXLINE(1097)					int _g = 0;
HXDLIN(1097)					int _g1 = numFrames1;
HXDLIN(1097)					while((_g < _g1)){
HXLINE(1097)						_g = (_g + 1);
HXDLIN(1097)						int f = (_g - 1);
HXLINE(1098)						bool changed = ::hx::IsNull( curFrame );
HXLINE(1099)						if ((allTimes1->__get(f) == ctt->__get(tp))) {
HXLINE(1100)							changed = true;
HXLINE(1101)							tp = (tp + 1);
            						}
HXLINE(1103)						if ((allTimes1->__get(f) == crt->__get(rp))) {
HXLINE(1104)							changed = true;
HXLINE(1105)							rp = (rp + 1);
            						}
HXLINE(1107)						if ((allTimes1->__get(f) == cst->__get(sp))) {
HXLINE(1108)							changed = true;
HXLINE(1109)							sp = (sp + 1);
            						}
HXLINE(1111)						if (changed) {
HXLINE(1112)							 ::h3d::anim::LinearFrame f =  ::h3d::anim::LinearFrame_obj::__alloc( HX_CTX );
HXLINE(1113)							bool _hx_tmp;
HXDLIN(1113)							if (::hx::IsNotNull( c->s )) {
HXLINE(1113)								_hx_tmp = (sp == 0);
            							}
            							else {
HXLINE(1113)								_hx_tmp = true;
            							}
HXDLIN(1113)							if (_hx_tmp) {
HXLINE(1114)								if (::hx::IsNotNull( def->scale )) {
HXLINE(1115)									f->sx = def->scale->x;
HXLINE(1116)									f->sy = def->scale->y;
HXLINE(1117)									f->sz = def->scale->z;
            								}
            								else {
HXLINE(1119)									f->sx = ( (Float)(1) );
HXLINE(1120)									f->sy = ( (Float)(1) );
HXLINE(1121)									f->sz = ( (Float)(1) );
            								}
            							}
            							else {
HXLINE(1124)								f->sx = csx->__get((sp - 1));
HXLINE(1125)								f->sy = csy->__get((sp - 1));
HXLINE(1126)								f->sz = csz->__get((sp - 1));
            							}
HXLINE(1129)							bool _hx_tmp1;
HXDLIN(1129)							if (::hx::IsNotNull( c->r )) {
HXLINE(1129)								_hx_tmp1 = (rp == 0);
            							}
            							else {
HXLINE(1129)								_hx_tmp1 = true;
            							}
HXDLIN(1129)							if (_hx_tmp1) {
HXLINE(1130)								if (::hx::IsNotNull( def->rotate )) {
HXLINE(1131)									q->initRotation(def->rotate->x,def->rotate->y,def->rotate->z);
            								}
            								else {
HXLINE(1133)									q->x = (q->y = (q->z = ( (Float)(0) )));
HXDLIN(1133)									q->w = ( (Float)(1) );
            								}
            							}
            							else {
HXLINE(1135)								q->initRotation(crx->__get((rp - 1)),cry->__get((rp - 1)),crz->__get((rp - 1)));
            							}
HXLINE(1137)							if (::hx::IsNotNull( def->preRot )) {
HXLINE(1138)								q2->initRotation(def->preRot->x,def->preRot->y,def->preRot->z);
HXLINE(1139)								q->multiply(q2,q);
            							}
HXLINE(1142)							f->qx = q->x;
HXLINE(1143)							f->qy = q->y;
HXLINE(1144)							f->qz = q->z;
HXLINE(1145)							f->qw = q->w;
HXLINE(1147)							bool _hx_tmp2;
HXDLIN(1147)							if (::hx::IsNotNull( c->t )) {
HXLINE(1147)								_hx_tmp2 = (tp == 0);
            							}
            							else {
HXLINE(1147)								_hx_tmp2 = true;
            							}
HXDLIN(1147)							if (_hx_tmp2) {
HXLINE(1148)								if (::hx::IsNotNull( def->trans )) {
HXLINE(1149)									f->tx = def->trans->x;
HXLINE(1150)									f->ty = def->trans->y;
HXLINE(1151)									f->tz = def->trans->z;
            								}
            								else {
HXLINE(1153)									f->tx = ( (Float)(0) );
HXLINE(1154)									f->ty = ( (Float)(0) );
HXLINE(1155)									f->tz = ( (Float)(0) );
            								}
            							}
            							else {
HXLINE(1158)								f->tx = ctx->__get((tp - 1));
HXLINE(1159)								f->ty = cty->__get((tp - 1));
HXLINE(1160)								f->tz = ctz->__get((tp - 1));
            							}
HXLINE(1163)							if (this->leftHand) {
HXLINE(1164)								f->tx = -(f->tx);
HXLINE(1165)								f->qy = -(f->qy);
HXLINE(1166)								f->qz = -(f->qz);
            							}
HXLINE(1169)							curFrame = f;
            						}
HXLINE(1171)						bool _hx_tmp;
HXDLIN(1171)						if (::hx::IsNotNull( frames )) {
HXLINE(1171)							_hx_tmp = (f < frames->length);
            						}
            						else {
HXLINE(1171)							_hx_tmp = false;
            						}
HXDLIN(1171)						if (_hx_tmp) {
HXLINE(1172)							frames->__unsafe_set(f,curFrame);
            						}
HXLINE(1173)						if (::hx::IsNotNull( alpha )) {
HXLINE(1174)							if ((allTimes1->__get(f) == cat->__get(ap))) {
HXLINE(1175)								ap = (ap + 1);
            							}
HXLINE(1176)							alpha->__unsafe_set(f,cav->__get((ap - 1)));
            						}
HXLINE(1178)						if (::hx::IsNotNull( uvs )) {
HXLINE(1179)							bool _hx_tmp;
HXDLIN(1179)							if ((uvp < cuv->length)) {
HXLINE(1179)								_hx_tmp = ::hx::IsEq( allTimes1->__get(f),cuv->__get(uvp)->__Field(HX_("t",74,00,00,00),::hx::paccDynamic) );
            							}
            							else {
HXLINE(1179)								_hx_tmp = false;
            							}
HXDLIN(1179)							if (_hx_tmp) {
HXLINE(1180)								uvp = (uvp + 1);
            							}
HXLINE(1181)							uvs->__unsafe_set((f << 1), ::Dynamic(cuv->__get((uvp - 1))->__Field(HX_("u",75,00,00,00),::hx::paccDynamic)));
HXLINE(1182)							uvs->__unsafe_set(((f << 1) | 1), ::Dynamic(cuv->__get((uvp - 1))->__Field(HX_("v",76,00,00,00),::hx::paccDynamic)));
            						}
HXLINE(1184)						if (::hx::IsNotNull( roll )) {
HXLINE(1185)							if (::hx::IsEq( allTimes1->__get(f), ::Dynamic(c->roll->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))->__GetItem(rollp) )) {
HXLINE(1186)								rollp = (rollp + 1);
            							}
HXLINE(1187)							roll->__unsafe_set(f, ::Dynamic(c->roll->__Field(HX_("v",76,00,00,00),::hx::paccDynamic))->__GetItem((rollp - 1)));
            						}
HXLINE(1189)						if (::hx::IsNotNull( fov )) {
HXLINE(1190)							if (::hx::IsEq( allTimes1->__get(f), ::Dynamic(c->fov->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))->__GetItem(fovp) )) {
HXLINE(1191)								fovp = (fovp + 1);
            							}
HXLINE(1192)							fov->__unsafe_set(f, ::Dynamic(c->fov->__Field(HX_("v",76,00,00,00),::hx::paccDynamic))->__GetItem((fovp - 1)));
            						}
            					}
            				}
HXLINE(1195)				if (::hx::IsNotNull( frames )) {
HXLINE(1196)					bool hasTrans = ::hx::IsNotNull( c->t );
HXLINE(1197)					bool hasRot;
HXDLIN(1197)					bool hasRot1;
HXDLIN(1197)					if (::hx::IsNull( c->r )) {
HXLINE(1197)						hasRot1 = ::hx::IsNotNull( def->rotate );
            					}
            					else {
HXLINE(1197)						hasRot1 = true;
            					}
HXDLIN(1197)					if (!(hasRot1)) {
HXLINE(1197)						hasRot = ::hx::IsNotNull( def->preRot );
            					}
            					else {
HXLINE(1197)						hasRot = true;
            					}
HXLINE(1198)					bool hasScale;
HXDLIN(1198)					if (::hx::IsNull( c->s )) {
HXLINE(1198)						hasScale = ::hx::IsNotNull( def->scale );
            					}
            					else {
HXLINE(1198)						hasScale = true;
            					}
HXLINE(1200)					bool _hx_tmp;
HXDLIN(1200)					if (!(hasTrans)) {
HXLINE(1200)						_hx_tmp = ::hx::IsNull( def->transPos );
            					}
            					else {
HXLINE(1200)						_hx_tmp = false;
            					}
HXDLIN(1200)					if (_hx_tmp) {
HXLINE(1201)						hasTrans = true;
            					}
HXLINE(1202)					anim->addCurve(c->object,frames,hasTrans,hasRot,hasScale);
            				}
HXLINE(1204)				if (::hx::IsNotNull( alpha )) {
HXLINE(1205)					anim->addAlphaCurve(c->object,alpha);
            				}
HXLINE(1206)				if (::hx::IsNotNull( uvs )) {
HXLINE(1207)					anim->addUVCurve(c->object,uvs);
            				}
HXLINE(1208)				if (::hx::IsNotNull( roll )) {
HXLINE(1209)					anim->addPropCurve(c->object,HX_("Roll",9d,17,88,36),roll);
            				}
HXLINE(1210)				if (::hx::IsNotNull( fov )) {
HXLINE(1211)					anim->addPropCurve(c->object,HX_("FOVY",cc,2c,81,2e),fov);
            				}
            			}
            		}
HXLINE(1213)		return anim;
            	}


HX_DEFINE_DYNAMIC_FUNC3(BaseLibrary_obj,loadAnimation,return )

int BaseLibrary_obj::sortDistinctFloats(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1217_sortDistinctFloats)
HXDLIN(1217)		if ((a > b)) {
HXDLIN(1217)			return 1;
            		}
            		else {
HXDLIN(1217)			return -1;
            		}
HXDLIN(1217)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseLibrary_obj,sortDistinctFloats,return )

bool BaseLibrary_obj::isNullJoint( ::Dynamic model){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1220_isNullJoint)
HXLINE(1221)		if ((this->getParents(model,HX_("Deformer",12,bd,ec,96))->length > 0)) {
HXLINE(1222)			return false;
            		}
HXLINE(1223)		 ::Dynamic parent = this->getParent(model,HX_("Model",89,93,85,9f),true);
HXLINE(1224)		if (::hx::IsNull( parent )) {
HXLINE(1225)			return true;
            		}
HXLINE(1226)		::String t = ::hxd::fmt::fbx::FbxTools_obj::getType(parent);
HXLINE(1227)		bool _hx_tmp;
HXDLIN(1227)		if ((t != HX_("LimbNode",54,fa,55,3f))) {
HXLINE(1227)			_hx_tmp = (t == HX_("Root",42,1a,88,36));
            		}
            		else {
HXLINE(1227)			_hx_tmp = true;
            		}
HXDLIN(1227)		if (_hx_tmp) {
HXLINE(1228)			return false;
            		}
HXLINE(1229)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,isNullJoint,return )

::String BaseLibrary_obj::getModelPath( ::Dynamic model){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1232_getModelPath)
HXLINE(1233)		 ::Dynamic parent = this->getParent(model,HX_("Model",89,93,85,9f),true);
HXLINE(1234)		::String name = ::hxd::fmt::fbx::FbxTools_obj::getName(model);
HXLINE(1235)		if (::hx::IsNull( parent )) {
HXLINE(1236)			return name;
            		}
HXLINE(1237)		return ((this->getModelPath(parent) + HX_(".",2e,00,00,00)) + name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,getModelPath,return )

void BaseLibrary_obj::autoMerge(){
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1240_autoMerge)
HXLINE(1242)		::Array< ::Dynamic> toMerge = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1242)		 ::haxe::ds::IntMap mergeGroups =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(1243)		{
HXLINE(1243)			int _g = 0;
HXDLIN(1243)			::Array< ::Dynamic> _g1 = this->getAllModels();
HXDLIN(1243)			while((_g < _g1->length)){
HXLINE(1243)				 ::Dynamic model = _g1->__get(_g);
HXDLIN(1243)				_g = (_g + 1);
HXLINE(1244)				::Dynamic this1 = this->skipObjects;
HXDLIN(1244)				if (( ( ::haxe::ds::StringMap)(this1) )->get_bool(::hxd::fmt::fbx::FbxTools_obj::getName(model))) {
HXLINE(1245)					continue;
            				}
HXLINE(1246)				::String mtype = ::hxd::fmt::fbx::FbxTools_obj::getType(model);
HXLINE(1247)				bool isJoint;
HXDLIN(1247)				if ((mtype == HX_("LimbNode",54,fa,55,3f))) {
HXLINE(1247)					if (this->unskinnedJointsAsObjects) {
HXLINE(1247)						isJoint = !(this->isNullJoint(model));
            					}
            					else {
HXLINE(1247)						isJoint = true;
            					}
            				}
            				else {
HXLINE(1247)					isJoint = false;
            				}
HXLINE(1248)				if (!(isJoint)) {
HXLINE(1248)					continue;
            				}
HXLINE(1249)				::Array< ::Dynamic> deformers = this->getParents(model,HX_("Deformer",12,bd,ec,96));
HXLINE(1250)				if ((deformers->length <= 1)) {
HXLINE(1250)					continue;
            				}
HXLINE(1251)				::Array< ::Dynamic> group = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1252)				{
HXLINE(1252)					int _g2 = 0;
HXDLIN(1252)					while((_g2 < deformers->length)){
HXLINE(1252)						 ::Dynamic d = deformers->__get(_g2);
HXDLIN(1252)						_g2 = (_g2 + 1);
HXLINE(1253)						 ::Dynamic def = this->getParent(d,HX_("Deformer",12,bd,ec,96),null());
HXLINE(1254)						if (::hx::IsNull( def )) {
HXLINE(1254)							continue;
            						}
HXLINE(1255)						 ::Dynamic geom = this->getParent(def,HX_("Geometry",d2,be,5a,ac),null());
HXLINE(1256)						if (::hx::IsNull( geom )) {
HXLINE(1256)							continue;
            						}
HXLINE(1257)						 ::Dynamic model2 = this->getParent(geom,HX_("Model",89,93,85,9f),null());
HXLINE(1258)						if (::hx::IsNull( model2 )) {
HXLINE(1258)							continue;
            						}
HXLINE(1260)						int id = ::hxd::fmt::fbx::FbxTools_obj::getId(model2);
HXLINE(1261)						::Array< ::Dynamic> g = ( (::Array< ::Dynamic>)(mergeGroups->get(id)) );
HXLINE(1262)						if (::hx::IsNotNull( g )) {
HXLINE(1263)							{
HXLINE(1263)								int _g = 0;
HXDLIN(1263)								while((_g < g->length)){
HXLINE(1263)									 ::Dynamic g1 = g->__get(_g);
HXDLIN(1263)									_g = (_g + 1);
HXLINE(1264)									group->remove(g1);
HXLINE(1265)									group->push(g1);
            								}
            							}
HXLINE(1267)							toMerge->remove(g);
            						}
HXLINE(1269)						group->remove(model2);
HXLINE(1270)						group->push(model2);
HXLINE(1271)						mergeGroups->set(id,group);
            					}
            				}
HXLINE(1273)				toMerge->push(group);
            			}
            		}
HXLINE(1275)		{
HXLINE(1275)			int _g2 = 0;
HXDLIN(1275)			while((_g2 < toMerge->length)){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            				int _hx_run( ::Dynamic m1, ::Dynamic m2){
            					HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1276_autoMerge)
HXLINE(1276)					::String _hx_tmp = ::hxd::fmt::fbx::FbxTools_obj::getName(m1);
HXDLIN(1276)					return ::Reflect_obj::compare(_hx_tmp,::hxd::fmt::fbx::FbxTools_obj::getName(m2));
            				}
            				HX_END_LOCAL_FUNC2(return)

HXLINE(1275)				::Array< ::Dynamic> group = toMerge->__get(_g2).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(1275)				_g2 = (_g2 + 1);
HXLINE(1276)				group->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE(1277)				{
HXLINE(1277)					int _g = 0;
HXDLIN(1277)					while((_g < toMerge->length)){
HXLINE(1277)						::Array< ::Dynamic> g = toMerge->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(1277)						_g = (_g + 1);
HXLINE(1278)						if (::hx::IsPointerNotEq( g,group )) {
HXLINE(1279)							bool found = false;
HXLINE(1280)							{
HXLINE(1280)								int _g = 0;
HXDLIN(1280)								while((_g < group->length)){
HXLINE(1280)									 ::Dynamic m = group->__get(_g);
HXDLIN(1280)									_g = (_g + 1);
HXLINE(1281)									if (g->remove(m)) {
HXLINE(1282)										found = true;
            									}
            								}
            							}
HXLINE(1283)							if (found) {
HXLINE(1284)								g->push(group->__get(0));
            							}
            						}
            					}
            				}
HXLINE(1286)				::Array< ::String > _g1 = ::Array_obj< ::String >::__new(0);
HXDLIN(1286)				{
HXLINE(1286)					int _g3 = 0;
HXDLIN(1286)					while((_g3 < group->length)){
HXLINE(1286)						 ::Dynamic g = group->__get(_g3);
HXDLIN(1286)						_g3 = (_g3 + 1);
HXDLIN(1286)						_g1->push(::hxd::fmt::fbx::FbxTools_obj::getName(g));
            					}
            				}
HXDLIN(1286)				this->mergeModels(_g1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseLibrary_obj,autoMerge,(void))

bool BaseLibrary_obj::keepJoint( ::h3d::anim::Joint j){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1291_keepJoint)
HXDLIN(1291)		return this->keepJoints->get_bool(j->name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,keepJoint,return )

 ::h3d::anim::Skin BaseLibrary_obj::createSkin( ::haxe::ds::IntMap hskins, ::haxe::ds::IntMap hgeom,::Array< ::Dynamic> rootJoints,int bonesPerVertex){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,allJoints,::Array< ::Dynamic>,collectJoints) HXARGC(1)
            		void _hx_run( ::h3d::anim::Joint j){
            			HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1296_createSkin)
HXLINE(1298)			{
HXLINE(1298)				int _g = 0;
HXDLIN(1298)				::Array< ::Dynamic> _g1 = j->subs;
HXDLIN(1298)				while((_g < _g1->length)){
HXLINE(1298)					 ::h3d::anim::Joint j = _g1->__get(_g).StaticCast<  ::h3d::anim::Joint >();
HXDLIN(1298)					_g = (_g + 1);
HXLINE(1299)					collectJoints->__get(0)(j);
            				}
            			}
HXLINE(1300)			allJoints->push(j);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1294_createSkin)
HXLINE(1295)		::Array< ::Dynamic> allJoints = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1296)		::Array< ::Dynamic> collectJoints = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN(1296)		collectJoints[0] =  ::Dynamic(new _hx_Closure_0(allJoints,collectJoints));
HXLINE(1302)		{
HXLINE(1302)			int _g = 0;
HXDLIN(1302)			while((_g < rootJoints->length)){
HXLINE(1302)				 ::h3d::anim::Joint j = rootJoints->__get(_g).StaticCast<  ::h3d::anim::Joint >();
HXDLIN(1302)				_g = (_g + 1);
HXLINE(1303)				collectJoints->__get(0)(j);
            			}
            		}
HXLINE(1304)		 ::h3d::anim::Skin skin = null();
HXLINE(1305)		 ::Dynamic geomTrans = null();
HXLINE(1306)		::Array< ::Dynamic> iterJoints = allJoints->copy();
HXLINE(1307)		{
HXLINE(1307)			int _g1 = 0;
HXDLIN(1307)			while((_g1 < iterJoints->length)){
HXLINE(1307)				 ::h3d::anim::Joint j = iterJoints->__get(_g1).StaticCast<  ::h3d::anim::Joint >();
HXDLIN(1307)				_g1 = (_g1 + 1);
HXLINE(1308)				 ::Dynamic jModel = this->ids->get(j->index);
HXLINE(1309)				 ::Dynamic subDef = this->getParent(jModel,HX_("Deformer",12,bd,ec,96),true);
HXLINE(1310)				::Dynamic this1 = this->defaultModelMatrixes;
HXDLIN(1310)				 ::hxd::fmt::fbx::DefaultMatrixes defMat = ( ( ::hxd::fmt::fbx::DefaultMatrixes)(( ( ::haxe::ds::IntMap)(this1) )->get(::hxd::fmt::fbx::FbxTools_obj::getId(jModel))) );
HXLINE(1311)				j->defMat = defMat->toMatrix(this->leftHand);
HXLINE(1313)				if (::hx::IsNull( subDef )) {
HXLINE(1315)					bool _hx_tmp;
HXDLIN(1315)					if ((j->subs->length <= 0)) {
HXLINE(1315)						_hx_tmp = this->keepJoint(j);
            					}
            					else {
HXLINE(1315)						_hx_tmp = true;
            					}
HXDLIN(1315)					if (_hx_tmp) {
HXLINE(1316)						continue;
            					}
HXLINE(1318)					if (::hx::IsNull( j->parent )) {
HXLINE(1319)						rootJoints->remove(j);
            					}
            					else {
HXLINE(1321)						j->parent->subs->remove(j);
            					}
HXLINE(1322)					allJoints->remove(j);
HXLINE(1324)					defMat->wasRemoved = -1;
HXLINE(1325)					continue;
            				}
HXLINE(1328)				if (::hx::IsNull( skin )) {
HXLINE(1329)					 ::Dynamic def = this->getParent(subDef,HX_("Deformer",12,bd,ec,96),null());
HXLINE(1330)					skin = ( ( ::h3d::anim::Skin)(hskins->get(::hxd::fmt::fbx::FbxTools_obj::getId(def))) );
HXLINE(1332)					if (::hx::IsNotNull( skin )) {
HXLINE(1333)						return skin;
            					}
HXLINE(1334)					 ::Dynamic geom = hgeom->get(::hxd::fmt::fbx::FbxTools_obj::getId(this->getParent(def,HX_("Geometry",d2,be,5a,ac),null())));
HXLINE(1335)					skin =  ::h3d::anim::Skin_obj::__alloc( HX_CTX ,null(),( (int)(geom->__Field(HX_("vertexCount",cb,0e,9f,5e),::hx::paccDynamic)()) ),bonesPerVertex);
HXLINE(1336)					geom->__Field(HX_("setSkin",3f,57,d9,11),::hx::paccDynamic)(skin);
HXLINE(1337)					hskins->set(::hxd::fmt::fbx::FbxTools_obj::getId(def),skin);
            				}
HXLINE(1339)				j->transPos = defMat->transPos;
HXLINE(1341)				::Array< ::Dynamic> weights = ::hxd::fmt::fbx::FbxTools_obj::getAll(subDef,HX_("Weights",db,ff,4d,3d));
HXLINE(1342)				if ((weights->length > 0)) {
HXLINE(1343)					::Array< Float > weights1 = ::hxd::fmt::fbx::FbxTools_obj::getFloats(weights->__get(0));
HXLINE(1344)					::Array< int > vertex = ::hxd::fmt::fbx::FbxTools_obj::getInts(::hxd::fmt::fbx::FbxTools_obj::get(subDef,HX_("Indexes",e0,83,10,ae),null()));
HXLINE(1345)					{
HXLINE(1345)						int _g = 0;
HXDLIN(1345)						int _g1 = vertex->length;
HXDLIN(1345)						while((_g < _g1)){
HXLINE(1345)							_g = (_g + 1);
HXDLIN(1345)							int i = (_g - 1);
HXLINE(1346)							Float w = weights1->__get(i);
HXLINE(1347)							if ((w < ((Float)0.01))) {
HXLINE(1348)								continue;
            							}
HXLINE(1349)							{
HXLINE(1349)								int vid = vertex->__get(i);
HXDLIN(1349)								::Array< ::Dynamic> il = skin->envelop->__get(vid).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(1349)								if (::hx::IsNull( il )) {
HXLINE(1349)									il = (skin->envelop[vid] = ::Array_obj< ::Dynamic>::__new(0));
            								}
HXDLIN(1349)								il->push( ::h3d::anim::_Skin::Influence_obj::__alloc( HX_CTX ,j,w));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(1353)		if (::hx::IsNull( skin )) {
HXLINE(1354)			::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(1354)			{
HXLINE(1354)				int _g1 = 0;
HXDLIN(1354)				while((_g1 < iterJoints->length)){
HXLINE(1354)					 ::h3d::anim::Joint j = iterJoints->__get(_g1).StaticCast<  ::h3d::anim::Joint >();
HXDLIN(1354)					_g1 = (_g1 + 1);
HXDLIN(1354)					_g->push(j->name);
            				}
            			}
HXDLIN(1354)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("No joint is skinned (",37,d3,07,66) + _g->join(HX_(",",2c,00,00,00))) + HX_(")",29,00,00,00))));
            		}
HXLINE(1355)		allJoints->reverse();
HXLINE(1356)		{
HXLINE(1356)			int _g2 = 0;
HXDLIN(1356)			int _g3 = allJoints->length;
HXDLIN(1356)			while((_g2 < _g3)){
HXLINE(1356)				_g2 = (_g2 + 1);
HXDLIN(1356)				int i = (_g2 - 1);
HXLINE(1357)				allJoints->__get(i).StaticCast<  ::h3d::anim::Joint >()->index = i;
            			}
            		}
HXLINE(1358)		skin->setJoints(allJoints,rootJoints);
HXLINE(1359)		skin->initWeights();
HXLINE(1360)		return skin;
            	}


HX_DEFINE_DYNAMIC_FUNC4(BaseLibrary_obj,createSkin,return )

Float BaseLibrary_obj::round(Float v){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1363_round)
HXLINE(1364)		if ((v != v)) {
HXLINE(1364)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("NaN found",fd,f8,37,6d)));
            		}
HXLINE(1365)		return (::Math_obj::fround((v * ( (Float)(131072) ))) / ( (Float)(131072) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,round,return )

void BaseLibrary_obj::updateDefaultMatrix( ::Dynamic model, ::hxd::fmt::fbx::DefaultMatrixes d){
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1368_updateDefaultMatrix)
HXLINE(1370)		 ::Dynamic subDef = this->getParent(model,HX_("Deformer",12,bd,ec,96),true);
HXLINE(1371)		if (::hx::IsNull( subDef )) {
HXLINE(1372)			return;
            		}
HXLINE(1374)		 ::h3d::Matrix transPos = ::h3d::Matrix_obj::L(::hxd::fmt::fbx::FbxTools_obj::getFloats(::hxd::fmt::fbx::FbxTools_obj::get(subDef,HX_("Transform",4c,0d,66,e7),null())));
HXLINE(1375)		if (this->leftHand) {
HXLINE(1375)			transPos->_12 = -(transPos->_12);
HXDLIN(1375)			transPos->_13 = -(transPos->_13);
HXDLIN(1375)			transPos->_21 = -(transPos->_21);
HXDLIN(1375)			transPos->_31 = -(transPos->_31);
HXDLIN(1375)			transPos->_41 = -(transPos->_41);
            		}
HXLINE(1376)		d->transPos = transPos;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseLibrary_obj,updateDefaultMatrix,(void))

 ::hxd::fmt::fbx::DefaultMatrixes BaseLibrary_obj::getDefaultMatrixes( ::Dynamic model){
            	HX_GC_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_1445_getDefaultMatrixes)
HXLINE(1446)		int id = ::hxd::fmt::fbx::FbxTools_obj::getId(model);
HXLINE(1447)		 ::hxd::fmt::fbx::DefaultMatrixes d = ( ( ::hxd::fmt::fbx::DefaultMatrixes)(this->defaultModelMatrixes->get(id)) );
HXLINE(1448)		if (::hx::IsNotNull( d )) {
HXLINE(1449)			return d;
            		}
HXLINE(1450)		d =  ::hxd::fmt::fbx::DefaultMatrixes_obj::__alloc( HX_CTX );
HXLINE(1451)		Float F = ((Float)0.0174532925199432955);
HXLINE(1452)		{
HXLINE(1452)			int _g = 0;
HXDLIN(1452)			::Array< ::Dynamic> _g1 = ::hxd::fmt::fbx::FbxTools_obj::getAll(model,HX_("Properties70.P",4e,56,dc,4c));
HXDLIN(1452)			while((_g < _g1->length)){
HXLINE(1452)				 ::Dynamic p = _g1->__get(_g);
HXDLIN(1452)				_g = (_g + 1);
HXLINE(1453)				::String _hx_switch_0 = ::hxd::fmt::fbx::FbxTools_obj::toString(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >());
            				if (  (_hx_switch_0==HX_("GeometricTranslation",10,07,3b,60)) ){
HXLINE(1454)					goto _hx_goto_160;
            				}
            				if (  (_hx_switch_0==HX_("Lcl Rotation",e9,b0,a7,ba)) ){
HXLINE(1461)					Float _hx_tmp = this->round((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * F));
HXDLIN(1461)					Float _hx_tmp1 = this->round((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(5)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * F));
HXDLIN(1461)					d->rotate =  ::h3d::col::Point_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->round((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(6)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * F)));
HXLINE(1462)					bool _hx_tmp2;
HXDLIN(1462)					bool _hx_tmp3;
HXDLIN(1462)					if ((d->rotate->x == 0)) {
HXLINE(1462)						_hx_tmp3 = (d->rotate->y == 0);
            					}
            					else {
HXLINE(1462)						_hx_tmp3 = false;
            					}
HXDLIN(1462)					if (_hx_tmp3) {
HXLINE(1462)						_hx_tmp2 = (d->rotate->z == 0);
            					}
            					else {
HXLINE(1462)						_hx_tmp2 = false;
            					}
HXDLIN(1462)					if (_hx_tmp2) {
HXLINE(1463)						d->rotate = null();
            					}
HXLINE(1460)					goto _hx_goto_160;
            				}
            				if (  (_hx_switch_0==HX_("Lcl Scaling",fc,58,56,f5)) ){
HXLINE(1469)					Float _hx_tmp = this->round(::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()));
HXDLIN(1469)					Float _hx_tmp1 = this->round(::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(5)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()));
HXDLIN(1469)					d->scale =  ::h3d::col::Point_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->round(::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(6)).StaticCast<  ::hxd::fmt::fbx::FbxProp >())));
HXLINE(1470)					bool _hx_tmp2;
HXDLIN(1470)					bool _hx_tmp3;
HXDLIN(1470)					if ((d->scale->x == 1)) {
HXLINE(1470)						_hx_tmp3 = (d->scale->y == 1);
            					}
            					else {
HXLINE(1470)						_hx_tmp3 = false;
            					}
HXDLIN(1470)					if (_hx_tmp3) {
HXLINE(1470)						_hx_tmp2 = (d->scale->z == 1);
            					}
            					else {
HXLINE(1470)						_hx_tmp2 = false;
            					}
HXDLIN(1470)					if (_hx_tmp2) {
HXLINE(1471)						d->scale = null();
            					}
HXLINE(1468)					goto _hx_goto_160;
            				}
            				if (  (_hx_switch_0==HX_("Lcl Translation",26,1a,b2,97)) ){
HXLINE(1465)					Float _hx_tmp = this->round(::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()));
HXDLIN(1465)					Float _hx_tmp1 = this->round(::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(5)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()));
HXDLIN(1465)					d->trans =  ::h3d::col::Point_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->round(::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(6)).StaticCast<  ::hxd::fmt::fbx::FbxProp >())));
HXLINE(1466)					bool _hx_tmp2;
HXDLIN(1466)					bool _hx_tmp3;
HXDLIN(1466)					if ((d->trans->x == 0)) {
HXLINE(1466)						_hx_tmp3 = (d->trans->y == 0);
            					}
            					else {
HXLINE(1466)						_hx_tmp3 = false;
            					}
HXDLIN(1466)					if (_hx_tmp3) {
HXLINE(1466)						_hx_tmp2 = (d->trans->z == 0);
            					}
            					else {
HXLINE(1466)						_hx_tmp2 = false;
            					}
HXDLIN(1466)					if (_hx_tmp2) {
HXLINE(1467)						d->trans = null();
            					}
HXLINE(1464)					goto _hx_goto_160;
            				}
            				if (  (_hx_switch_0==HX_("PreRotation",61,4c,21,02)) ){
HXLINE(1457)					Float _hx_tmp = this->round((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(4)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * F));
HXDLIN(1457)					Float _hx_tmp1 = this->round((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(5)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * F));
HXDLIN(1457)					d->preRot =  ::h3d::col::Point_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->round((::hxd::fmt::fbx::FbxTools_obj::toFloat(Dynamic(  ::Dynamic(p->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(6)).StaticCast<  ::hxd::fmt::fbx::FbxProp >()) * F)));
HXLINE(1458)					bool _hx_tmp2;
HXDLIN(1458)					bool _hx_tmp3;
HXDLIN(1458)					if ((d->preRot->x == 0)) {
HXLINE(1458)						_hx_tmp3 = (d->preRot->y == 0);
            					}
            					else {
HXLINE(1458)						_hx_tmp3 = false;
            					}
HXDLIN(1458)					if (_hx_tmp3) {
HXLINE(1458)						_hx_tmp2 = (d->preRot->z == 0);
            					}
            					else {
HXLINE(1458)						_hx_tmp2 = false;
            					}
HXDLIN(1458)					if (_hx_tmp2) {
HXLINE(1459)						d->preRot = null();
            					}
HXLINE(1456)					goto _hx_goto_160;
            				}
            				/* default */{
            				}
            				_hx_goto_160:;
            			}
            		}
HXLINE(1474)		if ((::hxd::fmt::fbx::FbxTools_obj::getType(model) == HX_("LimbNode",54,fa,55,3f))) {
HXLINE(1475)			this->updateDefaultMatrix(model,d);
            		}
HXLINE(1477)		this->defaultModelMatrixes->set(id,d);
HXLINE(1478)		return d;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseLibrary_obj,getDefaultMatrixes,return )

int BaseLibrary_obj::maxBonesPerSkin;


::hx::ObjectPtr< BaseLibrary_obj > BaseLibrary_obj::__new(::String fileName) {
	::hx::ObjectPtr< BaseLibrary_obj > __this = new BaseLibrary_obj();
	__this->__construct(fileName);
	return __this;
}

::hx::ObjectPtr< BaseLibrary_obj > BaseLibrary_obj::__alloc(::hx::Ctx *_hx_ctx,::String fileName) {
	BaseLibrary_obj *__this = (BaseLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseLibrary_obj), true, "hxd.fmt.fbx.BaseLibrary"));
	*(void **)__this = BaseLibrary_obj::_hx_vtable;
	__this->__construct(fileName);
	return __this;
}

BaseLibrary_obj::BaseLibrary_obj()
{
}

void BaseLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseLibrary);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(ids,"ids");
	HX_MARK_MEMBER_NAME(connect,"connect");
	HX_MARK_MEMBER_NAME(namedConnect,"namedConnect");
	HX_MARK_MEMBER_NAME(invConnect,"invConnect");
	HX_MARK_MEMBER_NAME(leftHand,"leftHand");
	HX_MARK_MEMBER_NAME(defaultModelMatrixes,"defaultModelMatrixes");
	HX_MARK_MEMBER_NAME(uvAnims,"uvAnims");
	HX_MARK_MEMBER_NAME(animationEvents,"animationEvents");
	HX_MARK_MEMBER_NAME(isMaya,"isMaya");
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(keepJoints,"keepJoints");
	HX_MARK_MEMBER_NAME(skipObjects,"skipObjects");
	HX_MARK_MEMBER_NAME(bonesPerVertex,"bonesPerVertex");
	HX_MARK_MEMBER_NAME(unskinnedJointsAsObjects,"unskinnedJointsAsObjects");
	HX_MARK_MEMBER_NAME(allowVertexColor,"allowVertexColor");
	HX_MARK_MEMBER_NAME(normalizeScaleOrient,"normalizeScaleOrient");
	HX_MARK_END_CLASS();
}

void BaseLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(ids,"ids");
	HX_VISIT_MEMBER_NAME(connect,"connect");
	HX_VISIT_MEMBER_NAME(namedConnect,"namedConnect");
	HX_VISIT_MEMBER_NAME(invConnect,"invConnect");
	HX_VISIT_MEMBER_NAME(leftHand,"leftHand");
	HX_VISIT_MEMBER_NAME(defaultModelMatrixes,"defaultModelMatrixes");
	HX_VISIT_MEMBER_NAME(uvAnims,"uvAnims");
	HX_VISIT_MEMBER_NAME(animationEvents,"animationEvents");
	HX_VISIT_MEMBER_NAME(isMaya,"isMaya");
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(keepJoints,"keepJoints");
	HX_VISIT_MEMBER_NAME(skipObjects,"skipObjects");
	HX_VISIT_MEMBER_NAME(bonesPerVertex,"bonesPerVertex");
	HX_VISIT_MEMBER_NAME(unskinnedJointsAsObjects,"unskinnedJointsAsObjects");
	HX_VISIT_MEMBER_NAME(allowVertexColor,"allowVertexColor");
	HX_VISIT_MEMBER_NAME(normalizeScaleOrient,"normalizeScaleOrient");
}

::hx::Val BaseLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ids") ) { return ::hx::Val( ids ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return ::hx::Val( root ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"round") ) { return ::hx::Val( round_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isMaya") ) { return ::hx::Val( isMaya ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return ::hx::Val( connect ); }
		if (HX_FIELD_EQ(inName,"uvAnims") ) { return ::hx::Val( uvAnims ); }
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		if (HX_FIELD_EQ(inName,"getRoot") ) { return ::hx::Val( getRoot_dyn() ); }
		if (HX_FIELD_EQ(inName,"addLink") ) { return ::hx::Val( addLink_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftHand") ) { return ::hx::Val( leftHand ); }
		if (HX_FIELD_EQ(inName,"fileName") ) { return ::hx::Val( fileName ); }
		if (HX_FIELD_EQ(inName,"loadFile") ) { return ::hx::Val( loadFile_dyn() ); }
		if (HX_FIELD_EQ(inName,"toFloats") ) { return ::hx::Val( toFloats_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChild") ) { return ::hx::Val( getChild_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getParent") ) { return ::hx::Val( getParent_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChilds") ) { return ::hx::Val( getChilds_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkData") ) { return ::hx::Val( checkData_dyn() ); }
		if (HX_FIELD_EQ(inName,"autoMerge") ) { return ::hx::Val( autoMerge_dyn() ); }
		if (HX_FIELD_EQ(inName,"keepJoint") ) { return ::hx::Val( keepJoint_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invConnect") ) { return ::hx::Val( invConnect ); }
		if (HX_FIELD_EQ(inName,"keepJoints") ) { return ::hx::Val( keepJoints ); }
		if (HX_FIELD_EQ(inName,"getParents") ) { return ::hx::Val( getParents_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeLink") ) { return ::hx::Val( removeLink_dyn() ); }
		if (HX_FIELD_EQ(inName,"createSkin") ) { return ::hx::Val( createSkin_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"skipObjects") ) { return ::hx::Val( skipObjects ); }
		if (HX_FIELD_EQ(inName,"isRootModel") ) { return ::hx::Val( isRootModel_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGeometry") ) { return ::hx::Val( getGeometry_dyn() ); }
		if (HX_FIELD_EQ(inName,"mergeModels") ) { return ::hx::Val( mergeModels_dyn() ); }
		if (HX_FIELD_EQ(inName,"roundValues") ) { return ::hx::Val( roundValues_dyn() ); }
		if (HX_FIELD_EQ(inName,"isNullJoint") ) { return ::hx::Val( isNullJoint_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"namedConnect") ) { return ::hx::Val( namedConnect ); }
		if (HX_FIELD_EQ(inName,"getAllModels") ) { return ::hx::Val( getAllModels_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSpecChild") ) { return ::hx::Val( getSpecChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"getModelPath") ) { return ::hx::Val( getModelPath_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRootModels") ) { return ::hx::Val( getRootModels_dyn() ); }
		if (HX_FIELD_EQ(inName,"convertPoints") ) { return ::hx::Val( convertPoints_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadAnimation") ) { return ::hx::Val( loadAnimation_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bonesPerVertex") ) { return ::hx::Val( bonesPerVertex ); }
		if (HX_FIELD_EQ(inName,"buildHierarchy") ) { return ::hx::Val( buildHierarchy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getObjectCurve") ) { return ::hx::Val( getObjectCurve_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationEvents") ) { return ::hx::Val( animationEvents ); }
		if (HX_FIELD_EQ(inName,"convertYupToZup") ) { return ::hx::Val( convertYupToZup_dyn() ); }
		if (HX_FIELD_EQ(inName,"leftHandConvert") ) { return ::hx::Val( leftHandConvert_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowVertexColor") ) { return ::hx::Val( allowVertexColor ); }
		if (HX_FIELD_EQ(inName,"updateModelScale") ) { return ::hx::Val( updateModelScale_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAnimationNames") ) { return ::hx::Val( getAnimationNames_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sortDistinctFloats") ) { return ::hx::Val( sortDistinctFloats_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDefaultMatrixes") ) { return ::hx::Val( getDefaultMatrixes_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ignoreMissingObject") ) { return ::hx::Val( ignoreMissingObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateDefaultMatrix") ) { return ::hx::Val( updateDefaultMatrix_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"defaultModelMatrixes") ) { return ::hx::Val( defaultModelMatrixes ); }
		if (HX_FIELD_EQ(inName,"normalizeScaleOrient") ) { return ::hx::Val( normalizeScaleOrient ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"unskinnedJointsAsObjects") ) { return ::hx::Val( unskinnedJointsAsObjects ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BaseLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"maxBonesPerSkin") ) { outValue = ( maxBonesPerSkin ); return true; }
	}
	return false;
}

::hx::Val BaseLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ids") ) { ids=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isMaya") ) { isMaya=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { connect=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvAnims") ) { uvAnims=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftHand") ) { leftHand=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invConnect") ) { invConnect=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keepJoints") ) { keepJoints=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"skipObjects") ) { skipObjects=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"namedConnect") ) { namedConnect=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bonesPerVertex") ) { bonesPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationEvents") ) { animationEvents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowVertexColor") ) { allowVertexColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"defaultModelMatrixes") ) { defaultModelMatrixes=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalizeScaleOrient") ) { normalizeScaleOrient=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"unskinnedJointsAsObjects") ) { unskinnedJointsAsObjects=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BaseLibrary_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"maxBonesPerSkin") ) { maxBonesPerSkin=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void BaseLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("root",22,ee,ae,4b));
	outFields->push(HX_("ids",38,04,50,00));
	outFields->push(HX_("connect",ea,3b,80,15));
	outFields->push(HX_("namedConnect",31,2d,01,68));
	outFields->push(HX_("invConnect",f9,46,58,c2));
	outFields->push(HX_("leftHand",16,6f,03,4c));
	outFields->push(HX_("defaultModelMatrixes",37,e4,07,f9));
	outFields->push(HX_("uvAnims",21,13,7d,e5));
	outFields->push(HX_("animationEvents",3d,cd,66,a5));
	outFields->push(HX_("isMaya",26,0b,bd,65));
	outFields->push(HX_("fileName",e7,5a,43,62));
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("keepJoints",4e,de,47,20));
	outFields->push(HX_("skipObjects",15,d8,c0,1d));
	outFields->push(HX_("bonesPerVertex",72,a1,08,15));
	outFields->push(HX_("unskinnedJointsAsObjects",e2,91,36,77));
	outFields->push(HX_("allowVertexColor",56,59,c3,85));
	outFields->push(HX_("normalizeScaleOrient",62,81,31,98));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseLibrary_obj,root),HX_("root",22,ee,ae,4b)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(BaseLibrary_obj,ids),HX_("ids",38,04,50,00)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(BaseLibrary_obj,connect),HX_("connect",ea,3b,80,15)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(BaseLibrary_obj,namedConnect),HX_("namedConnect",31,2d,01,68)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(BaseLibrary_obj,invConnect),HX_("invConnect",f9,46,58,c2)},
	{::hx::fsBool,(int)offsetof(BaseLibrary_obj,leftHand),HX_("leftHand",16,6f,03,4c)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(BaseLibrary_obj,defaultModelMatrixes),HX_("defaultModelMatrixes",37,e4,07,f9)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(BaseLibrary_obj,uvAnims),HX_("uvAnims",21,13,7d,e5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BaseLibrary_obj,animationEvents),HX_("animationEvents",3d,cd,66,a5)},
	{::hx::fsBool,(int)offsetof(BaseLibrary_obj,isMaya),HX_("isMaya",26,0b,bd,65)},
	{::hx::fsString,(int)offsetof(BaseLibrary_obj,fileName),HX_("fileName",e7,5a,43,62)},
	{::hx::fsFloat,(int)offsetof(BaseLibrary_obj,version),HX_("version",18,e7,f1,7c)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(BaseLibrary_obj,keepJoints),HX_("keepJoints",4e,de,47,20)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(BaseLibrary_obj,skipObjects),HX_("skipObjects",15,d8,c0,1d)},
	{::hx::fsInt,(int)offsetof(BaseLibrary_obj,bonesPerVertex),HX_("bonesPerVertex",72,a1,08,15)},
	{::hx::fsBool,(int)offsetof(BaseLibrary_obj,unskinnedJointsAsObjects),HX_("unskinnedJointsAsObjects",e2,91,36,77)},
	{::hx::fsBool,(int)offsetof(BaseLibrary_obj,allowVertexColor),HX_("allowVertexColor",56,59,c3,85)},
	{::hx::fsBool,(int)offsetof(BaseLibrary_obj,normalizeScaleOrient),HX_("normalizeScaleOrient",62,81,31,98)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BaseLibrary_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &BaseLibrary_obj::maxBonesPerSkin,HX_("maxBonesPerSkin",cf,59,59,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BaseLibrary_obj_sMemberFields[] = {
	HX_("root",22,ee,ae,4b),
	HX_("ids",38,04,50,00),
	HX_("connect",ea,3b,80,15),
	HX_("namedConnect",31,2d,01,68),
	HX_("invConnect",f9,46,58,c2),
	HX_("leftHand",16,6f,03,4c),
	HX_("defaultModelMatrixes",37,e4,07,f9),
	HX_("uvAnims",21,13,7d,e5),
	HX_("animationEvents",3d,cd,66,a5),
	HX_("isMaya",26,0b,bd,65),
	HX_("fileName",e7,5a,43,62),
	HX_("version",18,e7,f1,7c),
	HX_("keepJoints",4e,de,47,20),
	HX_("skipObjects",15,d8,c0,1d),
	HX_("bonesPerVertex",72,a1,08,15),
	HX_("unskinnedJointsAsObjects",e2,91,36,77),
	HX_("allowVertexColor",56,59,c3,85),
	HX_("normalizeScaleOrient",62,81,31,98),
	HX_("reset",cf,49,c8,e6),
	HX_("loadFile",c2,9f,5b,b4),
	HX_("load",26,9a,b7,47),
	HX_("toFloats",32,cb,94,68),
	HX_("getAllModels",35,29,81,9e),
	HX_("getRootModels",a2,14,3d,0e),
	HX_("isRootModel",dd,e0,9a,a3),
	HX_("updateModelScale",8a,05,81,9a),
	HX_("convertYupToZup",f9,1f,d3,ae),
	HX_("convertPoints",76,fc,87,32),
	HX_("leftHandConvert",7d,65,49,3c),
	HX_("init",10,3b,bb,45),
	HX_("getGeometry",68,c5,9c,f8),
	HX_("getParent",60,8e,d4,69),
	HX_("getChild",26,b9,90,a5),
	HX_("getSpecChild",eb,61,0e,ae),
	HX_("getChilds",8d,48,11,39),
	HX_("getParents",13,06,28,30),
	HX_("getRoot",d8,9d,31,1e),
	HX_("ignoreMissingObject",53,16,17,97),
	HX_("buildHierarchy",67,b4,84,c5),
	HX_("getObjectCurve",7a,bc,25,45),
	HX_("mergeModels",82,01,35,0c),
	HX_("addLink",bb,5a,f0,83),
	HX_("removeLink",5e,52,d2,c4),
	HX_("checkData",12,1f,43,96),
	HX_("roundValues",d0,9e,05,82),
	HX_("getAnimationNames",5a,d1,1b,19),
	HX_("loadAnimation",fe,bf,9a,cd),
	HX_("sortDistinctFloats",b1,58,44,6e),
	HX_("isNullJoint",f9,b7,38,45),
	HX_("getModelPath",78,5a,df,b1),
	HX_("autoMerge",c9,e0,d1,e3),
	HX_("keepJoint",85,d6,13,d1),
	HX_("createSkin",99,d7,e2,5e),
	HX_("round",4e,f8,65,ed),
	HX_("updateDefaultMatrix",19,02,c8,49),
	HX_("getDefaultMatrixes",da,be,c6,42),
	::String(null()) };

static void BaseLibrary_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseLibrary_obj::maxBonesPerSkin,"maxBonesPerSkin");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BaseLibrary_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseLibrary_obj::maxBonesPerSkin,"maxBonesPerSkin");
};

#endif

::hx::Class BaseLibrary_obj::__mClass;

static ::String BaseLibrary_obj_sStaticFields[] = {
	HX_("maxBonesPerSkin",cf,59,59,7f),
	::String(null())
};

void BaseLibrary_obj::__register()
{
	BaseLibrary_obj _hx_dummy;
	BaseLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.fbx.BaseLibrary",dd,07,29,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BaseLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &BaseLibrary_obj::__SetStatic;
	__mClass->mMarkFunc = BaseLibrary_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BaseLibrary_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseLibrary_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BaseLibrary_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BaseLibrary_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4c43ae5b6e363de9_131_boot)
HXDLIN( 131)		maxBonesPerSkin = 34;
            	}
}

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
