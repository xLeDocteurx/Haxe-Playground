#include <hxcpp.h>

#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
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
#ifndef INCLUDED_h3d_col_PolygonBuffer
#include <h3d/col/PolygonBuffer.h>
#endif
#ifndef INCLUDED_h3d_col_SkinCollider
#include <h3d/col/SkinCollider.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Compare
#include <h3d/mat/Compare.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_pass_PassObject
#include <h3d/pass/PassObject.h>
#endif
#ifndef INCLUDED_h3d_prim_HMDModel
#include <h3d/prim/HMDModel.h>
#endif
#ifndef INCLUDED_h3d_prim_MeshPrimitive
#include <h3d/prim/MeshPrimitive.h>
#endif
#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
#ifndef INCLUDED_h3d_scene_Graphics
#include <h3d/scene/Graphics.h>
#endif
#ifndef INCLUDED_h3d_scene_Joint
#include <h3d/scene/Joint.h>
#endif
#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
#ifndef INCLUDED_h3d_scene_MultiMaterial
#include <h3d/scene/MultiMaterial.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene_Skin
#include <h3d/scene/Skin.h>
#endif
#ifndef INCLUDED_h3d_shader_NormalMap
#include <h3d/shader/NormalMap.h>
#endif
#ifndef INCLUDED_h3d_shader_Skin
#include <h3d/shader/Skin.h>
#endif
#ifndef INCLUDED_h3d_shader_SkinBase
#include <h3d/shader/SkinBase.h>
#endif
#ifndef INCLUDED_h3d_shader_SkinTangent
#include <h3d/shader/SkinTangent.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_050a8b6f9b51142a_82_new,"h3d.scene.Skin","new",0x02761706,"h3d.scene.Skin.new","h3d/scene/Skin.hx",82,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_88_clone,"h3d.scene.Skin","clone",0xcca0cf83,"h3d.scene.Skin.clone","h3d/scene/Skin.hx",88,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_96_getBoundsRec,"h3d.scene.Skin","getBoundsRec",0x303412ff,"h3d.scene.Skin.getBoundsRec","h3d/scene/Skin.hx",96,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_120_getCurrentSkeletonBounds,"h3d.scene.Skin","getCurrentSkeletonBounds",0x7160fd5f,"h3d.scene.Skin.getCurrentSkeletonBounds","h3d/scene/Skin.hx",120,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_131_getObjectByName,"h3d.scene.Skin","getObjectByName",0x9587353d,"h3d.scene.Skin.getObjectByName","h3d/scene/Skin.hx",131,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_147_getLocalCollider,"h3d.scene.Skin","getLocalCollider",0x1ebefae3,"h3d.scene.Skin.getLocalCollider","h3d/scene/Skin.hx",147,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_151_getGlobalCollider,"h3d.scene.Skin","getGlobalCollider",0xaa9c7413,"h3d.scene.Skin.getGlobalCollider","h3d/scene/Skin.hx",151,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_157_calcAbsPos,"h3d.scene.Skin","calcAbsPos",0x7f1a9cd1,"h3d.scene.Skin.calcAbsPos","h3d/scene/Skin.hx",157,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_164_getSkinData,"h3d.scene.Skin","getSkinData",0x77413aa3,"h3d.scene.Skin.getSkinData","h3d/scene/Skin.hx",164,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_167_setSkinData,"h3d.scene.Skin","setSkinData",0x81ae41af,"h3d.scene.Skin.setSkinData","h3d/scene/Skin.hx",167,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_213_sync,"h3d.scene.Skin","sync",0x283b44f5,"h3d.scene.Skin.sync","h3d/scene/Skin.hx",213,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_243_emit,"h3d.scene.Skin","emit",0x1ef128ed,"h3d.scene.Skin.emit","h3d/scene/Skin.hx",243,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_280_draw,"h3d.scene.Skin","draw",0x1e4bb69e,"h3d.scene.Skin.draw","h3d/scene/Skin.hx",280,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_050a8b6f9b51142a_219_boot,"h3d.scene.Skin","boot",0x1cf70ecc,"h3d.scene.Skin.boot","h3d/scene/Skin.hx",219,0xc713f0a8)
namespace h3d{
namespace scene{

void Skin_obj::__construct( ::h3d::anim::Skin s,::Array< ::Dynamic> mat, ::h3d::scene::Object parent){
            	HX_STACKFRAME(&_hx_pos_050a8b6f9b51142a_82_new)
HXLINE(  83)		super::__construct(null(),mat,parent);
HXLINE(  84)		if (::hx::IsNotNull( s )) {
HXLINE(  85)			this->setSkinData(s,null());
            		}
            	}

Dynamic Skin_obj::__CreateEmpty() { return new Skin_obj; }

void *Skin_obj::_hx_vtable = 0;

Dynamic Skin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Skin_obj > _hx_result = new Skin_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Skin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6cfff440) {
		if (inClassId<=(int)0x1797ae36) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1797ae36;
		} else {
			return inClassId==(int)0x6cfff440;
		}
	} else {
		return inClassId==(int)0x70ba378d || inClassId==(int)0x70fbc0d0;
	}
}

 ::h3d::scene::Object Skin_obj::clone( ::h3d::scene::Object o){
            	HX_GC_STACKFRAME(&_hx_pos_050a8b6f9b51142a_88_clone)
HXLINE(  89)		 ::h3d::scene::Skin s;
HXDLIN(  89)		if (::hx::IsNull( o )) {
HXLINE(  89)			s =  ::h3d::scene::Skin_obj::__alloc( HX_CTX ,null(),this->materials->copy(),null());
            		}
            		else {
HXLINE(  89)			s = ( ( ::h3d::scene::Skin)(o) );
            		}
HXLINE(  90)		this->super::clone(s);
HXLINE(  91)		s->setSkinData(this->skinData,null());
HXLINE(  92)		s->currentRelPose = this->currentRelPose->copy();
HXLINE(  93)		return s;
            	}


 ::h3d::col::Bounds Skin_obj::getBoundsRec( ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_050a8b6f9b51142a_96_getBoundsRec)
HXLINE(  98)		 ::h3d::prim::Primitive old = this->primitive;
HXLINE(  99)		this->set_primitive(null());
HXLINE( 100)		b = this->super::getBoundsRec(b);
HXLINE( 101)		this->set_primitive(old);
HXLINE( 102)		if (((this->flags & 512) != 0)) {
HXLINE( 103)			return b;
            		}
HXLINE( 104)		this->syncJoints();
HXLINE( 105)		if (::hx::IsNull( this->skinData->vertexWeights )) {
HXLINE( 106)			::hx::TCast<  ::h3d::prim::HMDModel >::cast(this->primitive)->loadSkin(this->skinData);
            		}
HXLINE( 107)		{
HXLINE( 107)			int _g = 0;
HXDLIN( 107)			::Array< ::Dynamic> _g1 = this->skinData->allJoints;
HXDLIN( 107)			while((_g < _g1->length)){
HXLINE( 107)				 ::h3d::anim::Joint j = _g1->__get(_g).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 107)				_g = (_g + 1);
HXLINE( 108)				if ((j->offsetRay < 0)) {
HXLINE( 108)					continue;
            				}
HXLINE( 109)				 ::h3d::Matrix m = this->currentPalette->__get(j->bindIndex).StaticCast<  ::h3d::Matrix >();
HXLINE( 110)				 ::h3d::col::Bounds _this = j->offsets;
HXDLIN( 110)				Float pt_x = _this->xMin;
HXDLIN( 110)				Float pt_y = _this->yMin;
HXDLIN( 110)				Float pt_z = _this->zMin;
HXLINE( 111)				{
HXLINE( 111)					Float px = ((((pt_x * m->_11) + (pt_y * m->_21)) + (pt_z * m->_31)) + m->_41);
HXDLIN( 111)					Float py = ((((pt_x * m->_12) + (pt_y * m->_22)) + (pt_z * m->_32)) + m->_42);
HXDLIN( 111)					Float pz = ((((pt_x * m->_13) + (pt_y * m->_23)) + (pt_z * m->_33)) + m->_43);
HXDLIN( 111)					pt_x = px;
HXDLIN( 111)					pt_y = py;
HXDLIN( 111)					pt_z = pz;
            				}
HXLINE( 112)				{
HXLINE( 112)					Float x = pt_x;
HXDLIN( 112)					Float y = pt_y;
HXDLIN( 112)					Float z = pt_z;
HXDLIN( 112)					Float r = j->offsetRay;
HXDLIN( 112)					if (((x - r) < b->xMin)) {
HXLINE( 112)						b->xMin = (x - r);
            					}
HXDLIN( 112)					if (((x + r) > b->xMax)) {
HXLINE( 112)						b->xMax = (x + r);
            					}
HXDLIN( 112)					if (((y - r) < b->yMin)) {
HXLINE( 112)						b->yMin = (y - r);
            					}
HXDLIN( 112)					if (((y + r) > b->yMax)) {
HXLINE( 112)						b->yMax = (y + r);
            					}
HXDLIN( 112)					if (((z - r) < b->zMin)) {
HXLINE( 112)						b->zMin = (z - r);
            					}
HXDLIN( 112)					if (((z + r) > b->zMax)) {
HXLINE( 112)						b->zMax = (z + r);
            					}
            				}
HXLINE( 113)				 ::h3d::col::Bounds _this1 = j->offsets;
HXDLIN( 113)				Float pt_x1 = _this1->xMax;
HXDLIN( 113)				Float pt_y1 = _this1->yMax;
HXDLIN( 113)				Float pt_z1 = _this1->zMax;
HXLINE( 114)				{
HXLINE( 114)					Float px1 = ((((pt_x1 * m->_11) + (pt_y1 * m->_21)) + (pt_z1 * m->_31)) + m->_41);
HXDLIN( 114)					Float py1 = ((((pt_x1 * m->_12) + (pt_y1 * m->_22)) + (pt_z1 * m->_32)) + m->_42);
HXDLIN( 114)					Float pz1 = ((((pt_x1 * m->_13) + (pt_y1 * m->_23)) + (pt_z1 * m->_33)) + m->_43);
HXDLIN( 114)					pt_x1 = px1;
HXDLIN( 114)					pt_y1 = py1;
HXDLIN( 114)					pt_z1 = pz1;
            				}
HXLINE( 115)				{
HXLINE( 115)					Float x1 = pt_x1;
HXDLIN( 115)					Float y1 = pt_y1;
HXDLIN( 115)					Float z1 = pt_z1;
HXDLIN( 115)					Float r1 = j->offsetRay;
HXDLIN( 115)					if (((x1 - r1) < b->xMin)) {
HXLINE( 115)						b->xMin = (x1 - r1);
            					}
HXDLIN( 115)					if (((x1 + r1) > b->xMax)) {
HXLINE( 115)						b->xMax = (x1 + r1);
            					}
HXDLIN( 115)					if (((y1 - r1) < b->yMin)) {
HXLINE( 115)						b->yMin = (y1 - r1);
            					}
HXDLIN( 115)					if (((y1 + r1) > b->yMax)) {
HXLINE( 115)						b->yMax = (y1 + r1);
            					}
HXDLIN( 115)					if (((z1 - r1) < b->zMin)) {
HXLINE( 115)						b->zMin = (z1 - r1);
            					}
HXDLIN( 115)					if (((z1 + r1) > b->zMax)) {
HXLINE( 115)						b->zMax = (z1 + r1);
            					}
            				}
            			}
            		}
HXLINE( 117)		return b;
            	}


 ::h3d::col::Bounds Skin_obj::getCurrentSkeletonBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_050a8b6f9b51142a_120_getCurrentSkeletonBounds)
HXLINE( 121)		this->syncJoints();
HXLINE( 122)		 ::h3d::col::Bounds b =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
HXLINE( 123)		{
HXLINE( 123)			int _g = 0;
HXDLIN( 123)			::Array< ::Dynamic> _g1 = this->skinData->allJoints;
HXDLIN( 123)			while((_g < _g1->length)){
HXLINE( 123)				 ::h3d::anim::Joint j = _g1->__get(_g).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 123)				_g = (_g + 1);
HXLINE( 124)				if ((j->bindIndex < 0)) {
HXLINE( 124)					continue;
            				}
HXLINE( 125)				 ::h3d::Matrix r = this->currentAbsPose->__get(j->index).StaticCast<  ::h3d::Matrix >();
HXLINE( 126)				{
HXLINE( 126)					Float x = r->_41;
HXDLIN( 126)					Float y = r->_42;
HXDLIN( 126)					Float z = r->_43;
HXDLIN( 126)					if ((x < b->xMin)) {
HXLINE( 126)						b->xMin = x;
            					}
HXDLIN( 126)					if ((x > b->xMax)) {
HXLINE( 126)						b->xMax = x;
            					}
HXDLIN( 126)					if ((y < b->yMin)) {
HXLINE( 126)						b->yMin = y;
            					}
HXDLIN( 126)					if ((y > b->yMax)) {
HXLINE( 126)						b->yMax = y;
            					}
HXDLIN( 126)					if ((z < b->zMin)) {
HXLINE( 126)						b->zMin = z;
            					}
HXDLIN( 126)					if ((z > b->zMax)) {
HXLINE( 126)						b->zMax = z;
            					}
            				}
            			}
            		}
HXLINE( 128)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Skin_obj,getCurrentSkeletonBounds,return )

 ::h3d::scene::Object Skin_obj::getObjectByName(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_050a8b6f9b51142a_131_getObjectByName)
HXLINE( 133)		bool _hx_tmp;
HXDLIN( 133)		if (::hx::IsNotNull( this->skinData )) {
HXLINE( 133)			_hx_tmp = (this->skinData->name == name);
            		}
            		else {
HXLINE( 133)			_hx_tmp = false;
            		}
HXDLIN( 133)		if (_hx_tmp) {
HXLINE( 134)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 135)		 ::h3d::scene::Object o = this->super::getObjectByName(name);
HXLINE( 136)		if (::hx::IsNotNull( o )) {
HXLINE( 136)			return o;
            		}
HXLINE( 138)		if (::hx::IsNotNull( this->skinData )) {
HXLINE( 139)			 ::h3d::anim::Joint j = ( ( ::h3d::anim::Joint)(this->skinData->namedJoints->get(name)) );
HXLINE( 140)			if (::hx::IsNotNull( j )) {
HXLINE( 141)				return  ::h3d::scene::Joint_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),j);
            			}
            		}
HXLINE( 143)		return null();
            	}


::Dynamic Skin_obj::getLocalCollider(){
            	HX_STACKFRAME(&_hx_pos_050a8b6f9b51142a_147_getLocalCollider)
HXDLIN( 147)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not implemented",15,1e,32,34)));
HXDLIN( 147)		return null();
            	}


::Dynamic Skin_obj::getGlobalCollider(){
            	HX_GC_STACKFRAME(&_hx_pos_050a8b6f9b51142a_151_getGlobalCollider)
HXLINE( 152)		 ::h3d::col::OptimizedCollider col = ::hx::TCast<  ::h3d::col::OptimizedCollider >::cast(this->primitive->getCollider());
HXLINE( 153)		::hx::TCast<  ::h3d::prim::HMDModel >::cast(this->primitive)->loadSkin(this->skinData);
HXLINE( 154)		return  ::h3d::col::SkinCollider_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),::hx::TCast<  ::h3d::col::PolygonBuffer >::cast(col->b));
            	}


void Skin_obj::calcAbsPos(){
            	HX_STACKFRAME(&_hx_pos_050a8b6f9b51142a_157_calcAbsPos)
HXLINE( 158)		this->super::calcAbsPos();
HXLINE( 160)		this->jointsUpdated = true;
            	}


 ::h3d::anim::Skin Skin_obj::getSkinData(){
            	HX_STACKFRAME(&_hx_pos_050a8b6f9b51142a_164_getSkinData)
HXDLIN( 164)		return this->skinData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Skin_obj,getSkinData,return )

void Skin_obj::setSkinData( ::h3d::anim::Skin s,::hx::Null< bool >  __o_shaderInit){
            		bool shaderInit = __o_shaderInit.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_050a8b6f9b51142a_167_setSkinData)
HXLINE( 168)		this->skinData = s;
HXLINE( 169)		this->jointsUpdated = true;
HXLINE( 170)		this->set_primitive(s->primitive);
HXLINE( 171)		if (shaderInit) {
HXLINE( 172)			bool hasNormalMap = false;
HXLINE( 173)			{
HXLINE( 173)				int _g = 0;
HXDLIN( 173)				::Array< ::Dynamic> _g1 = this->materials;
HXDLIN( 173)				while((_g < _g1->length)){
HXLINE( 173)					 ::h3d::mat::Material m = _g1->__get(_g).StaticCast<  ::h3d::mat::Material >();
HXDLIN( 173)					_g = (_g + 1);
HXLINE( 174)					bool _hx_tmp;
HXDLIN( 174)					if (::hx::IsNotNull( m )) {
HXLINE( 174)						_hx_tmp = ::hx::IsNotNull( m->get_normalMap() );
            					}
            					else {
HXLINE( 174)						_hx_tmp = false;
            					}
HXDLIN( 174)					if (_hx_tmp) {
HXLINE( 175)						hasNormalMap = true;
HXLINE( 176)						goto _hx_goto_11;
            					}
            				}
            				_hx_goto_11:;
            			}
HXLINE( 178)			 ::h3d::shader::SkinBase _hx_tmp;
HXDLIN( 178)			if (hasNormalMap) {
HXLINE( 178)				_hx_tmp =  ::h3d::shader::SkinTangent_obj::__alloc( HX_CTX );
            			}
            			else {
HXLINE( 178)				_hx_tmp =  ::h3d::shader::Skin_obj::__alloc( HX_CTX );
            			}
HXDLIN( 178)			this->skinShader = _hx_tmp;
HXLINE( 179)			int maxBones = 0;
HXLINE( 180)			if (::hx::IsNotNull( this->skinData->splitJoints )) {
HXLINE( 181)				int _g = 0;
HXDLIN( 181)				::Array< ::Dynamic> _g1 = this->skinData->splitJoints;
HXDLIN( 181)				while((_g < _g1->length)){
HXLINE( 181)					 ::Dynamic s = _g1->__get(_g);
HXDLIN( 181)					_g = (_g + 1);
HXLINE( 182)					if ((( (::Array< ::Dynamic>)(s->__Field(HX_("joints",e9,e7,09,91),::hx::paccDynamic)) )->length > maxBones)) {
HXLINE( 183)						maxBones = ( (::Array< ::Dynamic>)(s->__Field(HX_("joints",e9,e7,09,91),::hx::paccDynamic)) )->length;
            					}
            				}
            			}
            			else {
HXLINE( 185)				maxBones = this->skinData->boundJoints->length;
            			}
HXLINE( 186)			if ((this->skinShader->MaxBones__ < maxBones)) {
HXLINE( 187)				 ::h3d::shader::SkinBase _this = this->skinShader;
HXDLIN( 187)				_this->constModified = true;
HXDLIN( 187)				_this->MaxBones__ = maxBones;
            			}
HXLINE( 188)			{
HXLINE( 188)				int _g2 = 0;
HXDLIN( 188)				::Array< ::Dynamic> _g3 = this->materials;
HXDLIN( 188)				while((_g2 < _g3->length)){
HXLINE( 188)					 ::h3d::mat::Material m = _g3->__get(_g2).StaticCast<  ::h3d::mat::Material >();
HXDLIN( 188)					_g2 = (_g2 + 1);
HXLINE( 189)					if (::hx::IsNotNull( m )) {
HXLINE( 190)						if (::hx::IsNotNull( m->get_normalMap() )) {
HXLINE( 191)							 ::h3d::mat::Pass m1 = m->passes;
HXDLIN( 191)							 ::h3d::shader::SkinBase _hx_tmp = this->skinShader;
HXDLIN( 191)							m1->addShaderAtIndex(_hx_tmp,(m->passes->getShaderIndex(m->normalShader) + 1)).StaticCast<  ::h3d::shader::SkinBase >();
            						}
            						else {
HXLINE( 193)							m->passes->addShader(this->skinShader).StaticCast<  ::h3d::shader::SkinBase >();
            						}
HXLINE( 194)						if (::hx::IsNotNull( this->skinData->splitJoints )) {
HXLINE( 194)							m->passes->set_dynamicParameters(true);
            						}
            					}
            				}
            			}
            		}
HXLINE( 197)		this->currentRelPose = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 198)		this->currentAbsPose = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 199)		this->currentPalette = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 200)		this->paletteChanged = true;
HXLINE( 201)		{
HXLINE( 201)			int _g = 0;
HXDLIN( 201)			::Array< ::Dynamic> _g1 = this->skinData->allJoints;
HXDLIN( 201)			while((_g < _g1->length)){
HXLINE( 201)				 ::h3d::anim::Joint j = _g1->__get(_g).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 201)				_g = (_g + 1);
HXLINE( 202)				::Array< ::Dynamic> _hx_tmp = this->currentAbsPose;
HXDLIN( 202)				_hx_tmp->push(::h3d::Matrix_obj::I());
            			}
            		}
HXLINE( 203)		{
HXLINE( 203)			int _g2 = 0;
HXDLIN( 203)			int _g3 = this->skinData->boundJoints->length;
HXDLIN( 203)			while((_g2 < _g3)){
HXLINE( 203)				_g2 = (_g2 + 1);
HXDLIN( 203)				int i = (_g2 - 1);
HXLINE( 204)				::Array< ::Dynamic> _hx_tmp = this->currentPalette;
HXDLIN( 204)				_hx_tmp->push(::h3d::Matrix_obj::I());
            			}
            		}
HXLINE( 205)		if (::hx::IsNotNull( this->skinData->splitJoints )) {
HXLINE( 206)			this->splitPalette = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 207)			{
HXLINE( 207)				int _g = 0;
HXDLIN( 207)				::Array< ::Dynamic> _g1 = this->skinData->splitJoints;
HXDLIN( 207)				while((_g < _g1->length)){
HXLINE( 207)					 ::Dynamic a = _g1->__get(_g);
HXDLIN( 207)					_g = (_g + 1);
HXLINE( 208)					::Array< ::Dynamic> _hx_tmp = this->splitPalette;
HXDLIN( 208)					::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 208)					{
HXLINE( 208)						int _g3 = 0;
HXDLIN( 208)						::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(a->__Field(HX_("joints",e9,e7,09,91),::hx::paccDynamic)) );
HXDLIN( 208)						while((_g3 < _g4->length)){
HXLINE( 208)							 ::h3d::anim::Joint j = _g4->__get(_g3).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 208)							_g3 = (_g3 + 1);
HXDLIN( 208)							_g2->push(this->currentPalette->__get(j->bindIndex).StaticCast<  ::h3d::Matrix >());
            						}
            					}
HXDLIN( 208)					_hx_tmp->push(_g2);
            				}
            			}
            		}
            		else {
HXLINE( 210)			this->splitPalette = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,setSkinData,(void))

void Skin_obj::sync( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_050a8b6f9b51142a_213_sync)
HXLINE( 214)		bool _hx_tmp;
HXDLIN( 214)		if (!(ctx->visibleFlag)) {
HXLINE( 214)			_hx_tmp = ((this->flags & 64) == 0);
            		}
            		else {
HXLINE( 214)			_hx_tmp = false;
            		}
HXDLIN( 214)		if (_hx_tmp) {
HXLINE( 215)			return;
            		}
HXLINE( 216)		this->syncJoints();
            	}


void Skin_obj::syncJoints(){
	if (!(this->jointsUpdated)) {
		return;
	}
	 ::h3d::Matrix tmpMat = ::h3d::scene::Skin_obj::TMP_MAT;
	{
		int _g = 0;
		::Array< ::Dynamic> _g1 = this->skinData->allJoints;
		while((_g < _g1->length)){
			 ::h3d::anim::Joint j = _g1->__get(_g).StaticCast<  ::h3d::anim::Joint >();
			_g = (_g + 1);
			int id = j->index;
			 ::h3d::Matrix m = this->currentAbsPose->__get(id).StaticCast<  ::h3d::Matrix >();
			 ::h3d::Matrix r = this->currentRelPose->__get(id).StaticCast<  ::h3d::Matrix >();
			int bid = j->bindIndex;
			if (::hx::IsNull( r )) {
				r = j->defMat;
			}
			else {
				if (j->retargetAnim) {
					tmpMat->load(r);
					r = tmpMat;
					r->_41 = j->defMat->_41;
					r->_42 = j->defMat->_42;
					r->_43 = j->defMat->_43;
				}
			}
			if (::hx::IsNull( j->parent )) {
				 ::h3d::Matrix b = this->absPos;
				Float m11 = r->_11;
				Float m12 = r->_12;
				Float m13 = r->_13;
				Float m21 = r->_21;
				Float m22 = r->_22;
				Float m23 = r->_23;
				Float a31 = r->_31;
				Float a32 = r->_32;
				Float a33 = r->_33;
				Float a41 = r->_41;
				Float a42 = r->_42;
				Float a43 = r->_43;
				Float b11 = b->_11;
				Float b12 = b->_12;
				Float b13 = b->_13;
				Float b21 = b->_21;
				Float b22 = b->_22;
				Float b23 = b->_23;
				Float b31 = b->_31;
				Float b32 = b->_32;
				Float b33 = b->_33;
				Float b41 = b->_41;
				Float b42 = b->_42;
				Float b43 = b->_43;
				m->_11 = (((m11 * b11) + (m12 * b21)) + (m13 * b31));
				m->_12 = (((m11 * b12) + (m12 * b22)) + (m13 * b32));
				m->_13 = (((m11 * b13) + (m12 * b23)) + (m13 * b33));
				m->_14 = ( (Float)(0) );
				m->_21 = (((m21 * b11) + (m22 * b21)) + (m23 * b31));
				m->_22 = (((m21 * b12) + (m22 * b22)) + (m23 * b32));
				m->_23 = (((m21 * b13) + (m22 * b23)) + (m23 * b33));
				m->_24 = ( (Float)(0) );
				m->_31 = (((a31 * b11) + (a32 * b21)) + (a33 * b31));
				m->_32 = (((a31 * b12) + (a32 * b22)) + (a33 * b32));
				m->_33 = (((a31 * b13) + (a32 * b23)) + (a33 * b33));
				m->_34 = ( (Float)(0) );
				m->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + b41);
				m->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + b42);
				m->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + b43);
				m->_44 = ( (Float)(1) );
			}
			else {
				 ::h3d::Matrix b = this->currentAbsPose->__get(j->parent->index).StaticCast<  ::h3d::Matrix >();
				Float m11 = r->_11;
				Float m12 = r->_12;
				Float m13 = r->_13;
				Float m21 = r->_21;
				Float m22 = r->_22;
				Float m23 = r->_23;
				Float a31 = r->_31;
				Float a32 = r->_32;
				Float a33 = r->_33;
				Float a41 = r->_41;
				Float a42 = r->_42;
				Float a43 = r->_43;
				Float b11 = b->_11;
				Float b12 = b->_12;
				Float b13 = b->_13;
				Float b21 = b->_21;
				Float b22 = b->_22;
				Float b23 = b->_23;
				Float b31 = b->_31;
				Float b32 = b->_32;
				Float b33 = b->_33;
				Float b41 = b->_41;
				Float b42 = b->_42;
				Float b43 = b->_43;
				m->_11 = (((m11 * b11) + (m12 * b21)) + (m13 * b31));
				m->_12 = (((m11 * b12) + (m12 * b22)) + (m13 * b32));
				m->_13 = (((m11 * b13) + (m12 * b23)) + (m13 * b33));
				m->_14 = ( (Float)(0) );
				m->_21 = (((m21 * b11) + (m22 * b21)) + (m23 * b31));
				m->_22 = (((m21 * b12) + (m22 * b22)) + (m23 * b32));
				m->_23 = (((m21 * b13) + (m22 * b23)) + (m23 * b33));
				m->_24 = ( (Float)(0) );
				m->_31 = (((a31 * b11) + (a32 * b21)) + (a33 * b31));
				m->_32 = (((a31 * b12) + (a32 * b22)) + (a33 * b32));
				m->_33 = (((a31 * b13) + (a32 * b23)) + (a33 * b33));
				m->_34 = ( (Float)(0) );
				m->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + b41);
				m->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + b42);
				m->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + b43);
				m->_44 = ( (Float)(1) );
			}
			if ((bid >= 0)) {
				 ::h3d::Matrix _this = this->currentPalette->__get(bid).StaticCast<  ::h3d::Matrix >();
				 ::h3d::Matrix a = j->transPos;
				Float m11 = a->_11;
				Float m12 = a->_12;
				Float m13 = a->_13;
				Float m21 = a->_21;
				Float m22 = a->_22;
				Float m23 = a->_23;
				Float a31 = a->_31;
				Float a32 = a->_32;
				Float a33 = a->_33;
				Float a41 = a->_41;
				Float a42 = a->_42;
				Float a43 = a->_43;
				Float b11 = m->_11;
				Float b12 = m->_12;
				Float b13 = m->_13;
				Float b21 = m->_21;
				Float b22 = m->_22;
				Float b23 = m->_23;
				Float b31 = m->_31;
				Float b32 = m->_32;
				Float b33 = m->_33;
				Float b41 = m->_41;
				Float b42 = m->_42;
				Float b43 = m->_43;
				_this->_11 = (((m11 * b11) + (m12 * b21)) + (m13 * b31));
				_this->_12 = (((m11 * b12) + (m12 * b22)) + (m13 * b32));
				_this->_13 = (((m11 * b13) + (m12 * b23)) + (m13 * b33));
				_this->_14 = ( (Float)(0) );
				_this->_21 = (((m21 * b11) + (m22 * b21)) + (m23 * b31));
				_this->_22 = (((m21 * b12) + (m22 * b22)) + (m23 * b32));
				_this->_23 = (((m21 * b13) + (m22 * b23)) + (m23 * b33));
				_this->_24 = ( (Float)(0) );
				_this->_31 = (((a31 * b11) + (a32 * b21)) + (a33 * b31));
				_this->_32 = (((a31 * b12) + (a32 * b22)) + (a33 * b32));
				_this->_33 = (((a31 * b13) + (a32 * b23)) + (a33 * b33));
				_this->_34 = ( (Float)(0) );
				_this->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + b41);
				_this->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + b42);
				_this->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + b43);
				_this->_44 = ( (Float)(1) );
			}
		}
	}
	this->skinShader->bonesMatrixes__ = this->currentPalette;
	if (::hx::IsNotNull( this->jointsAbsPosInv )) {
		this->jointsAbsPosInv->_44 = ( (Float)(0) );
	}
	this->jointsUpdated = false;
}


HX_DEFINE_DYNAMIC_FUNC0(Skin_obj,syncJoints,(void))

void Skin_obj::emit( ::h3d::scene::RenderContext ctx){
            	HX_GC_STACKFRAME(&_hx_pos_050a8b6f9b51142a_243_emit)
HXLINE( 244)		if (::hx::IsNull( this->splitPalette )) {
HXLINE( 245)			this->super::emit(ctx);
            		}
            		else {
HXLINE( 247)			int _g = 0;
HXDLIN( 247)			int _g1 = this->splitPalette->length;
HXDLIN( 247)			while((_g < _g1)){
HXLINE( 247)				_g = (_g + 1);
HXDLIN( 247)				int i = (_g - 1);
HXLINE( 248)				 ::h3d::mat::Material m = this->materials->__get(( (int)(this->skinData->splitJoints->__get(i)->__Field(HX_("material",a7,5c,a5,f0),::hx::paccDynamic)) )).StaticCast<  ::h3d::mat::Material >();
HXLINE( 249)				if (::hx::IsNotNull( m )) {
HXLINE( 250)					 ::h3d::mat::Pass p = m->passes;
HXDLIN( 250)					while(::hx::IsNotNull( p )){
HXLINE( 250)						ctx->emitPass(p,::hx::ObjectPtr<OBJ_>(this))->index = i;
HXDLIN( 250)						p = p->nextPass;
            					}
            				}
            			}
            		}
HXLINE( 253)		if (this->showJoints) {
HXLINE( 254)			if (::hx::IsNull( this->jointsGraphics )) {
HXLINE( 255)				this->jointsGraphics =  ::h3d::scene::Graphics_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 256)				this->jointsGraphics->material->passes->depth(false,::h3d::mat::Compare_obj::Always_dyn());
HXLINE( 257)				this->jointsGraphics->material->passes->setPassName(HX_("add",21,f2,49,00));
            			}
HXLINE( 259)			 ::h3d::scene::Object topParent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 260)			while(::hx::IsNotNull( topParent->parent )){
HXLINE( 261)				topParent = topParent->parent;
            			}
HXLINE( 262)			this->jointsGraphics->set_follow(topParent);
HXLINE( 264)			 ::h3d::scene::Graphics g = this->jointsGraphics;
HXLINE( 265)			g->clear();
HXLINE( 266)			{
HXLINE( 266)				int _g = 0;
HXDLIN( 266)				::Array< ::Dynamic> _g1 = this->skinData->allJoints;
HXDLIN( 266)				while((_g < _g1->length)){
HXLINE( 266)					 ::h3d::anim::Joint j = _g1->__get(_g).StaticCast<  ::h3d::anim::Joint >();
HXDLIN( 266)					_g = (_g + 1);
HXLINE( 267)					 ::h3d::Matrix m = this->currentAbsPose->__get(j->index).StaticCast<  ::h3d::Matrix >();
HXLINE( 268)					 ::h3d::Matrix mp;
HXDLIN( 268)					if (::hx::IsNull( j->parent )) {
HXLINE( 268)						mp = this->absPos;
            					}
            					else {
HXLINE( 268)						mp = this->currentAbsPose->__get(j->parent->index).StaticCast<  ::h3d::Matrix >();
            					}
HXLINE( 269)					int _hx_tmp;
HXDLIN( 269)					if (::hx::IsNull( j->parent )) {
HXLINE( 269)						_hx_tmp = -16776961;
            					}
            					else {
HXLINE( 269)						_hx_tmp = -256;
            					}
HXDLIN( 269)					g->lineStyle(1,_hx_tmp,null());
HXLINE( 270)					g->moveTo(mp->_41,mp->_42,mp->_43);
HXLINE( 271)					g->lineTo(m->_41,m->_42,m->_43);
            				}
            			}
            		}
            		else {
HXLINE( 273)			if (::hx::IsNotNull( this->jointsGraphics )) {
HXLINE( 274)				{
HXLINE( 274)					 ::h3d::scene::Graphics _this = this->jointsGraphics;
HXDLIN( 274)					bool _hx_tmp;
HXDLIN( 274)					if (::hx::IsNotNull( _this )) {
HXLINE( 274)						_hx_tmp = ::hx::IsNotNull( _this->parent );
            					}
            					else {
HXLINE( 274)						_hx_tmp = false;
            					}
HXDLIN( 274)					if (_hx_tmp) {
HXLINE( 274)						_this->parent->removeChild(_this);
            					}
            				}
HXLINE( 275)				this->jointsGraphics = null();
            			}
            		}
            	}


void Skin_obj::draw( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_050a8b6f9b51142a_280_draw)
HXDLIN( 280)		if (::hx::IsNull( this->splitPalette )) {
HXLINE( 281)			this->super::draw(ctx);
            		}
            		else {
HXLINE( 283)			int i = ctx->drawPass->index;
HXLINE( 284)			this->skinShader->bonesMatrixes__ = this->splitPalette->__get(i).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 285)			this->primitive->selectMaterial(i);
HXLINE( 286)			ctx->uploadParams();
HXLINE( 287)			this->primitive->render(ctx->engine);
            		}
            	}


 ::h3d::Matrix Skin_obj::TMP_MAT;


::hx::ObjectPtr< Skin_obj > Skin_obj::__new( ::h3d::anim::Skin s,::Array< ::Dynamic> mat, ::h3d::scene::Object parent) {
	::hx::ObjectPtr< Skin_obj > __this = new Skin_obj();
	__this->__construct(s,mat,parent);
	return __this;
}

::hx::ObjectPtr< Skin_obj > Skin_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::anim::Skin s,::Array< ::Dynamic> mat, ::h3d::scene::Object parent) {
	Skin_obj *__this = (Skin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Skin_obj), true, "h3d.scene.Skin"));
	*(void **)__this = Skin_obj::_hx_vtable;
	__this->__construct(s,mat,parent);
	return __this;
}

Skin_obj::Skin_obj()
{
}

void Skin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Skin);
	HX_MARK_MEMBER_NAME(skinData,"skinData");
	HX_MARK_MEMBER_NAME(currentRelPose,"currentRelPose");
	HX_MARK_MEMBER_NAME(currentAbsPose,"currentAbsPose");
	HX_MARK_MEMBER_NAME(currentPalette,"currentPalette");
	HX_MARK_MEMBER_NAME(splitPalette,"splitPalette");
	HX_MARK_MEMBER_NAME(jointsUpdated,"jointsUpdated");
	HX_MARK_MEMBER_NAME(jointsAbsPosInv,"jointsAbsPosInv");
	HX_MARK_MEMBER_NAME(paletteChanged,"paletteChanged");
	HX_MARK_MEMBER_NAME(skinShader,"skinShader");
	HX_MARK_MEMBER_NAME(jointsGraphics,"jointsGraphics");
	HX_MARK_MEMBER_NAME(showJoints,"showJoints");
	 ::h3d::scene::MultiMaterial_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Skin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skinData,"skinData");
	HX_VISIT_MEMBER_NAME(currentRelPose,"currentRelPose");
	HX_VISIT_MEMBER_NAME(currentAbsPose,"currentAbsPose");
	HX_VISIT_MEMBER_NAME(currentPalette,"currentPalette");
	HX_VISIT_MEMBER_NAME(splitPalette,"splitPalette");
	HX_VISIT_MEMBER_NAME(jointsUpdated,"jointsUpdated");
	HX_VISIT_MEMBER_NAME(jointsAbsPosInv,"jointsAbsPosInv");
	HX_VISIT_MEMBER_NAME(paletteChanged,"paletteChanged");
	HX_VISIT_MEMBER_NAME(skinShader,"skinShader");
	HX_VISIT_MEMBER_NAME(jointsGraphics,"jointsGraphics");
	HX_VISIT_MEMBER_NAME(showJoints,"showJoints");
	 ::h3d::scene::MultiMaterial_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Skin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		if (HX_FIELD_EQ(inName,"emit") ) { return ::hx::Val( emit_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"skinData") ) { return ::hx::Val( skinData ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"skinShader") ) { return ::hx::Val( skinShader ); }
		if (HX_FIELD_EQ(inName,"showJoints") ) { return ::hx::Val( showJoints ); }
		if (HX_FIELD_EQ(inName,"calcAbsPos") ) { return ::hx::Val( calcAbsPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncJoints") ) { return ::hx::Val( syncJoints_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getSkinData") ) { return ::hx::Val( getSkinData_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSkinData") ) { return ::hx::Val( setSkinData_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"splitPalette") ) { return ::hx::Val( splitPalette ); }
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"jointsUpdated") ) { return ::hx::Val( jointsUpdated ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentRelPose") ) { return ::hx::Val( currentRelPose ); }
		if (HX_FIELD_EQ(inName,"currentAbsPose") ) { return ::hx::Val( currentAbsPose ); }
		if (HX_FIELD_EQ(inName,"currentPalette") ) { return ::hx::Val( currentPalette ); }
		if (HX_FIELD_EQ(inName,"paletteChanged") ) { return ::hx::Val( paletteChanged ); }
		if (HX_FIELD_EQ(inName,"jointsGraphics") ) { return ::hx::Val( jointsGraphics ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"jointsAbsPosInv") ) { return ::hx::Val( jointsAbsPosInv ); }
		if (HX_FIELD_EQ(inName,"getObjectByName") ) { return ::hx::Val( getObjectByName_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getLocalCollider") ) { return ::hx::Val( getLocalCollider_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getGlobalCollider") ) { return ::hx::Val( getGlobalCollider_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getCurrentSkeletonBounds") ) { return ::hx::Val( getCurrentSkeletonBounds_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Skin_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TMP_MAT") ) { outValue = ( TMP_MAT ); return true; }
	}
	return false;
}

::hx::Val Skin_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"skinData") ) { skinData=inValue.Cast<  ::h3d::anim::Skin >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"skinShader") ) { skinShader=inValue.Cast<  ::h3d::shader::SkinBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showJoints") ) { showJoints=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"splitPalette") ) { splitPalette=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"jointsUpdated") ) { jointsUpdated=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentRelPose") ) { currentRelPose=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentAbsPose") ) { currentAbsPose=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentPalette") ) { currentPalette=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paletteChanged") ) { paletteChanged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointsGraphics") ) { jointsGraphics=inValue.Cast<  ::h3d::scene::Graphics >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"jointsAbsPosInv") ) { jointsAbsPosInv=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Skin_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TMP_MAT") ) { TMP_MAT=ioValue.Cast<  ::h3d::Matrix >(); return true; }
	}
	return false;
}

void Skin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("skinData",47,1b,eb,91));
	outFields->push(HX_("currentRelPose",11,1f,ab,58));
	outFields->push(HX_("currentAbsPose",aa,36,7a,6a));
	outFields->push(HX_("currentPalette",42,07,f8,79));
	outFields->push(HX_("splitPalette",c1,3e,4c,b3));
	outFields->push(HX_("jointsUpdated",52,c1,1b,91));
	outFields->push(HX_("jointsAbsPosInv",a6,94,ca,10));
	outFields->push(HX_("paletteChanged",b9,5b,6d,10));
	outFields->push(HX_("skinShader",82,c5,f9,31));
	outFields->push(HX_("jointsGraphics",d4,2d,9b,01));
	outFields->push(HX_("showJoints",c6,8c,7e,fa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Skin_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::anim::Skin */ ,(int)offsetof(Skin_obj,skinData),HX_("skinData",47,1b,eb,91)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,currentRelPose),HX_("currentRelPose",11,1f,ab,58)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,currentAbsPose),HX_("currentAbsPose",aa,36,7a,6a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,currentPalette),HX_("currentPalette",42,07,f8,79)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,splitPalette),HX_("splitPalette",c1,3e,4c,b3)},
	{::hx::fsBool,(int)offsetof(Skin_obj,jointsUpdated),HX_("jointsUpdated",52,c1,1b,91)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Skin_obj,jointsAbsPosInv),HX_("jointsAbsPosInv",a6,94,ca,10)},
	{::hx::fsBool,(int)offsetof(Skin_obj,paletteChanged),HX_("paletteChanged",b9,5b,6d,10)},
	{::hx::fsObject /*  ::h3d::shader::SkinBase */ ,(int)offsetof(Skin_obj,skinShader),HX_("skinShader",82,c5,f9,31)},
	{::hx::fsObject /*  ::h3d::scene::Graphics */ ,(int)offsetof(Skin_obj,jointsGraphics),HX_("jointsGraphics",d4,2d,9b,01)},
	{::hx::fsBool,(int)offsetof(Skin_obj,showJoints),HX_("showJoints",c6,8c,7e,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Skin_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::Matrix */ ,(void *) &Skin_obj::TMP_MAT,HX_("TMP_MAT",b8,13,9a,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Skin_obj_sMemberFields[] = {
	HX_("skinData",47,1b,eb,91),
	HX_("currentRelPose",11,1f,ab,58),
	HX_("currentAbsPose",aa,36,7a,6a),
	HX_("currentPalette",42,07,f8,79),
	HX_("splitPalette",c1,3e,4c,b3),
	HX_("jointsUpdated",52,c1,1b,91),
	HX_("jointsAbsPosInv",a6,94,ca,10),
	HX_("paletteChanged",b9,5b,6d,10),
	HX_("skinShader",82,c5,f9,31),
	HX_("jointsGraphics",d4,2d,9b,01),
	HX_("showJoints",c6,8c,7e,fa),
	HX_("clone",5d,13,63,48),
	HX_("getBoundsRec",65,5e,85,79),
	HX_("getCurrentSkeletonBounds",c5,c9,a8,1f),
	HX_("getObjectByName",97,8d,42,0b),
	HX_("getLocalCollider",49,f1,f0,ac),
	HX_("getGlobalCollider",ed,16,22,88),
	HX_("calcAbsPos",b7,22,12,37),
	HX_("getSkinData",fd,dd,de,b7),
	HX_("setSkinData",09,e5,4b,c2),
	HX_("sync",5b,ba,5f,4c),
	HX_("syncJoints",a4,cc,a6,83),
	HX_("emit",53,9e,15,43),
	HX_("draw",04,2c,70,42),
	::String(null()) };

static void Skin_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Skin_obj::TMP_MAT,"TMP_MAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Skin_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Skin_obj::TMP_MAT,"TMP_MAT");
};

#endif

::hx::Class Skin_obj::__mClass;

static ::String Skin_obj_sStaticFields[] = {
	HX_("TMP_MAT",b8,13,9a,bd),
	::String(null())
};

void Skin_obj::__register()
{
	Skin_obj _hx_dummy;
	Skin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.Skin",14,dc,18,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Skin_obj::__GetStatic;
	__mClass->mSetStaticField = &Skin_obj::__SetStatic;
	__mClass->mMarkFunc = Skin_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Skin_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Skin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Skin_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Skin_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Skin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Skin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Skin_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_050a8b6f9b51142a_219_boot)
HXDLIN( 219)		TMP_MAT =  ::h3d::Matrix_obj::__alloc( HX_CTX );
            	}
}

} // end namespace h3d
} // end namespace scene
