#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
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
#ifndef INCLUDED_h3d_anim_LinearAnimation
#include <h3d/anim/LinearAnimation.h>
#endif
#ifndef INCLUDED_h3d_anim_LinearFrame
#include <h3d/anim/LinearFrame.h>
#endif
#ifndef INCLUDED_h3d_anim_LinearObject
#include <h3d/anim/LinearObject.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
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
#ifndef INCLUDED_h3d_mat_Wrap
#include <h3d/mat/Wrap.h>
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
#ifndef INCLUDED_h3d_scene_Skin
#include <h3d/scene/Skin.h>
#endif
#ifndef INCLUDED_h3d_shader_BaseMesh
#include <h3d/shader/BaseMesh.h>
#endif
#ifndef INCLUDED_h3d_shader_UVDelta
#include <h3d/shader/UVDelta.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_336aaf58432cffab_55_new,"h3d.anim.LinearAnimation","new",0x93a007a9,"h3d.anim.LinearAnimation.new","h3d/anim/LinearAnimation.hx",55,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_60_addCurve,"h3d.anim.LinearAnimation","addCurve",0x91cf32e5,"h3d.anim.LinearAnimation.addCurve","h3d/anim/LinearAnimation.hx",60,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_69_addAlphaCurve,"h3d.anim.LinearAnimation","addAlphaCurve",0x8c0a767b,"h3d.anim.LinearAnimation.addAlphaCurve","h3d/anim/LinearAnimation.hx",69,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_75_addUVCurve,"h3d.anim.LinearAnimation","addUVCurve",0x812b6a64,"h3d.anim.LinearAnimation.addUVCurve","h3d/anim/LinearAnimation.hx",75,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_81_addPropCurve,"h3d.anim.LinearAnimation","addPropCurve",0xeae69f42,"h3d.anim.LinearAnimation.addPropCurve","h3d/anim/LinearAnimation.hx",81,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_88_getPropValue,"h3d.anim.LinearAnimation","getPropValue",0xde494cef,"h3d.anim.LinearAnimation.getPropValue","h3d/anim/LinearAnimation.hx",88,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_96_getFrames,"h3d.anim.LinearAnimation","getFrames",0x354a8ce5,"h3d.anim.LinearAnimation.getFrames","h3d/anim/LinearAnimation.hx",96,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_99_clone,"h3d.anim.LinearAnimation","clone",0x70a26ee6,"h3d.anim.LinearAnimation.clone","h3d/anim/LinearAnimation.hx",99,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_107_endFrame,"h3d.anim.LinearAnimation","endFrame",0xce9aca69,"h3d.anim.LinearAnimation.endFrame","h3d/anim/LinearAnimation.hx",107,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_112_initInstance,"h3d.anim.LinearAnimation","initInstance",0x76c8be5c,"h3d.anim.LinearAnimation.initInstance","h3d/anim/LinearAnimation.hx",112,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_131_sortByFrameCountDesc,"h3d.anim.LinearAnimation","sortByFrameCountDesc",0x114f571f,"h3d.anim.LinearAnimation.sortByFrameCountDesc","h3d/anim/LinearAnimation.hx",131,0x1f025447)
HX_LOCAL_STACK_FRAME(_hx_pos_336aaf58432cffab_134_uvLerp,"h3d.anim.LinearAnimation","uvLerp",0xfac3a5cf,"h3d.anim.LinearAnimation.uvLerp","h3d/anim/LinearAnimation.hx",134,0x1f025447)
namespace h3d{
namespace anim{

void LinearAnimation_obj::__construct(::String name,int frame,Float sampling){
            	HX_STACKFRAME(&_hx_pos_336aaf58432cffab_55_new)
HXLINE(  56)		super::__construct(name,frame,sampling);
HXLINE(  57)		this->syncFrame = ( (Float)(-1) );
            	}

Dynamic LinearAnimation_obj::__CreateEmpty() { return new LinearAnimation_obj; }

void *LinearAnimation_obj::_hx_vtable = 0;

Dynamic LinearAnimation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinearAnimation_obj > _hx_result = new LinearAnimation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LinearAnimation_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x042ba3ea) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x042ba3ea;
	} else {
		return inClassId==(int)0x0ac4c435;
	}
}

void LinearAnimation_obj::addCurve(::String objName,::Array< ::Dynamic> frames,bool hasPos,bool hasRot,bool hasScale){
            	HX_GC_STACKFRAME(&_hx_pos_336aaf58432cffab_60_addCurve)
HXLINE(  61)		 ::h3d::anim::LinearObject f =  ::h3d::anim::LinearObject_obj::__alloc( HX_CTX ,objName);
HXLINE(  62)		f->frames = frames;
HXLINE(  63)		f->hasPosition = hasPos;
HXLINE(  64)		f->hasRotation = hasRot;
HXLINE(  65)		f->hasScale = hasScale;
HXLINE(  66)		this->objects->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC5(LinearAnimation_obj,addCurve,(void))

void LinearAnimation_obj::addAlphaCurve(::String objName,::Array< Float > alphas){
            	HX_GC_STACKFRAME(&_hx_pos_336aaf58432cffab_69_addAlphaCurve)
HXLINE(  70)		 ::h3d::anim::LinearObject f =  ::h3d::anim::LinearObject_obj::__alloc( HX_CTX ,objName);
HXLINE(  71)		f->alphas = alphas;
HXLINE(  72)		this->objects->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LinearAnimation_obj,addAlphaCurve,(void))

void LinearAnimation_obj::addUVCurve(::String objName,::Array< Float > uvs){
            	HX_GC_STACKFRAME(&_hx_pos_336aaf58432cffab_75_addUVCurve)
HXLINE(  76)		 ::h3d::anim::LinearObject f =  ::h3d::anim::LinearObject_obj::__alloc( HX_CTX ,objName);
HXLINE(  77)		f->uvs = uvs;
HXLINE(  78)		this->objects->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LinearAnimation_obj,addUVCurve,(void))

void LinearAnimation_obj::addPropCurve(::String objName,::String propName,::Array< Float > values){
            	HX_GC_STACKFRAME(&_hx_pos_336aaf58432cffab_81_addPropCurve)
HXLINE(  82)		 ::h3d::anim::LinearObject f =  ::h3d::anim::LinearObject_obj::__alloc( HX_CTX ,objName);
HXLINE(  83)		f->propName = propName;
HXLINE(  84)		f->propValues = values;
HXLINE(  85)		this->objects->push(f);
            	}


HX_DEFINE_DYNAMIC_FUNC3(LinearAnimation_obj,addPropCurve,(void))

 ::Dynamic LinearAnimation_obj::getPropValue(::String objName,::String propName){
            	HX_STACKFRAME(&_hx_pos_336aaf58432cffab_88_getPropValue)
HXLINE(  89)		{
HXLINE(  89)			int _g = 0;
HXDLIN(  89)			::Array< ::Dynamic> _g1 = this->objects;
HXDLIN(  89)			while((_g < _g1->length)){
HXLINE(  89)				 ::h3d::anim::LinearObject o = _g1->__get(_g).StaticCast<  ::h3d::anim::LinearObject >();
HXDLIN(  89)				_g = (_g + 1);
HXLINE(  90)				bool _hx_tmp;
HXDLIN(  90)				if ((o->objectName == objName)) {
HXLINE(  90)					_hx_tmp = (o->propName == propName);
            				}
            				else {
HXLINE(  90)					_hx_tmp = false;
            				}
HXDLIN(  90)				if (_hx_tmp) {
HXLINE(  91)					return o->propCurrentValue;
            				}
            			}
            		}
HXLINE(  92)		return null();
            	}


::Array< ::Dynamic> LinearAnimation_obj::getFrames(){
            	HX_STACKFRAME(&_hx_pos_336aaf58432cffab_96_getFrames)
HXDLIN(  96)		return this->objects;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LinearAnimation_obj,getFrames,return )

 ::h3d::anim::Animation LinearAnimation_obj::clone( ::h3d::anim::Animation a){
            	HX_GC_STACKFRAME(&_hx_pos_336aaf58432cffab_99_clone)
HXLINE( 100)		if (::hx::IsNull( a )) {
HXLINE( 101)			a =  ::h3d::anim::LinearAnimation_obj::__alloc( HX_CTX ,this->name,this->frameCount,this->sampling);
            		}
HXLINE( 102)		this->super::clone(a);
HXLINE( 103)		return a;
            	}


int LinearAnimation_obj::endFrame(){
            	HX_STACKFRAME(&_hx_pos_336aaf58432cffab_107_endFrame)
HXDLIN( 107)		if (this->loop) {
HXDLIN( 107)			return this->frameCount;
            		}
            		else {
HXDLIN( 107)			return (this->frameCount - 1);
            		}
HXDLIN( 107)		return 0;
            	}


void LinearAnimation_obj::initInstance(){
            	HX_GC_STACKFRAME(&_hx_pos_336aaf58432cffab_112_initInstance)
HXLINE( 113)		this->super::initInstance();
HXLINE( 114)		::Array< ::Dynamic> frames = this->objects;
HXLINE( 115)		{
HXLINE( 115)			int _g = 0;
HXDLIN( 115)			while((_g < frames->length)){
HXLINE( 115)				 ::h3d::anim::LinearObject a = frames->__get(_g).StaticCast<  ::h3d::anim::LinearObject >();
HXDLIN( 115)				_g = (_g + 1);
HXLINE( 116)				if (::hx::IsNotNull( a->propValues )) {
HXLINE( 117)					a->propCurrentValue = ( (Float)(_hx_array_unsafe_get(a->propValues,0)) );
HXLINE( 118)					continue;
            				}
HXLINE( 120)				bool _hx_tmp;
HXDLIN( 120)				if (::hx::IsNotNull( a->alphas )) {
HXLINE( 120)					if (::hx::IsNotNull( a->targetObject )) {
HXLINE( 120)						_hx_tmp = ::hx::IsNull( ( ( ::h3d::scene::Mesh)(::Std_obj::downcast(a->targetObject,::hx::ClassOf< ::h3d::scene::Mesh >())) ) );
            					}
            					else {
HXLINE( 120)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 120)					_hx_tmp = false;
            				}
HXDLIN( 120)				if (_hx_tmp) {
HXLINE( 121)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((a->objectName + HX_(" should be a mesh (for alpha animation)",e2,7e,71,dc))));
            				}
HXLINE( 122)				bool _hx_tmp1;
HXDLIN( 122)				if (::hx::IsNull( a->uvs )) {
HXLINE( 122)					_hx_tmp1 = ::hx::IsNotNull( a->alphas );
            				}
            				else {
HXLINE( 122)					_hx_tmp1 = true;
            				}
HXDLIN( 122)				if (_hx_tmp1) {
HXLINE( 122)					continue;
            				}
HXLINE( 123)				a->matrix =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 124)				a->matrix->identity();
            			}
            		}
HXLINE( 127)		frames->sort(this->sortByFrameCountDesc_dyn());
            	}


int LinearAnimation_obj::sortByFrameCountDesc( ::h3d::anim::LinearObject o1, ::h3d::anim::LinearObject o2){
            	HX_STACKFRAME(&_hx_pos_336aaf58432cffab_131_sortByFrameCountDesc)
HXDLIN( 131)		int _hx_tmp;
HXDLIN( 131)		if (::hx::IsNull( o2->frames )) {
HXDLIN( 131)			_hx_tmp = 10;
            		}
            		else {
HXDLIN( 131)			_hx_tmp = o2->frames->length;
            		}
HXDLIN( 131)		int _hx_tmp1;
HXDLIN( 131)		if (::hx::IsNull( o1->frames )) {
HXDLIN( 131)			_hx_tmp1 = 10;
            		}
            		else {
HXDLIN( 131)			_hx_tmp1 = o1->frames->length;
            		}
HXDLIN( 131)		return (_hx_tmp - _hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LinearAnimation_obj,sortByFrameCountDesc,return )

Float LinearAnimation_obj::uvLerp(Float v1,Float v2,Float k){
            	HX_STACKFRAME(&_hx_pos_336aaf58432cffab_134_uvLerp)
HXLINE( 135)		v1 = ::hx::Mod(v1,((Float)1.));
HXLINE( 136)		v2 = ::hx::Mod(v2,((Float)1.));
HXLINE( 137)		if ((v1 < (v2 - ((Float)0.5)))) {
HXLINE( 138)			v1 = (v1 + 1);
            		}
            		else {
HXLINE( 139)			if ((v1 > (v2 + ((Float)0.5)))) {
HXLINE( 140)				v1 = (v1 - ( (Float)(1) ));
            			}
            		}
HXLINE( 141)		return ((v1 * (( (Float)(1) ) - k)) + (v2 * k));
            	}


HX_DEFINE_DYNAMIC_FUNC3(LinearAnimation_obj,uvLerp,return )

void LinearAnimation_obj::sync(::hx::Null< bool >  __o_decompose){
	bool decompose = __o_decompose.Default(false);
	HX_JUST_GC_STACKFRAME
	bool _hx_tmp;
	if ((this->frame == this->syncFrame)) {
		_hx_tmp = !(decompose);
	}
	else {
		_hx_tmp = false;
	}
	if (_hx_tmp) {
		return;
	}
	int f = ::Std_obj::_hx_int(this->frame);
	int max = this->endFrame();
	if ((f == max)) {
		f = (f - 1);
	}
	int frame1 = f;
	int frame2 = ::hx::Mod((frame1 + 1),this->frameCount);
	Float k2 = (this->frame - ( (Float)(frame1) ));
	Float k1 = (( (Float)(1) ) - k2);
	if ((frame1 < 0)) {
		frame2 = 0;
		frame1 = frame2;
	}
	else {
		if ((this->frame >= this->frameCount)) {
			frame2 = (this->frameCount - 1);
			frame1 = frame2;
		}
		else {
			bool _hx_tmp;
			if (!(this->loop)) {
				_hx_tmp = (frame2 == 0);
			}
			else {
				_hx_tmp = false;
			}
			if (_hx_tmp) {
				frame2 = (this->frameCount - 1);
			}
		}
	}
	this->syncFrame = this->frame;
	if (decompose) {
		this->isSync = false;
	}
	{
		int _g = 0;
		::Array< ::Dynamic> _g1 = this->objects;
		while((_g < _g1->length)){
			 ::h3d::anim::LinearObject o = _g1->__get(_g).StaticCast<  ::h3d::anim::LinearObject >();
			_g = (_g + 1);
			bool _hx_tmp;
			if (::hx::IsNull( o->targetObject )) {
				_hx_tmp = ::hx::IsNull( o->targetSkin );
			}
			else {
				_hx_tmp = false;
			}
			if (_hx_tmp) {
				continue;
			}
			if (::hx::IsNotNull( o->alphas )) {
				 ::h3d::mat::Material mat = o->targetObject->toMesh()->material;
				if (::hx::IsPointerEq( mat->blendMode,::h2d::BlendMode_obj::None_dyn() )) {
					mat->set_blendMode(::h2d::BlendMode_obj::Alpha_dyn());
				}
				Float _hx_tmp = (( (Float)(_hx_array_unsafe_get(o->alphas,frame1)) ) * k1);
				Float _hx_tmp1 = (( (Float)(_hx_array_unsafe_get(o->alphas,frame2)) ) * k2);
				mat->mshader->color__->w = (_hx_tmp + _hx_tmp1);
				continue;
			}
			if (::hx::IsNotNull( o->uvs )) {
				 ::h3d::mat::Material mat = o->targetObject->toMesh()->material;
				 ::h3d::shader::UVDelta s = mat->passes->getShader(::hx::ClassOf< ::h3d::shader::UVDelta >()).StaticCast<  ::h3d::shader::UVDelta >();
				if (::hx::IsNull( s )) {
					 ::h3d::mat::Pass mat1 = mat->passes;
					s = mat1->addShader( ::h3d::shader::UVDelta_obj::__alloc( HX_CTX ,null(),null(),null(),null())).StaticCast<  ::h3d::shader::UVDelta >();
					mat->get_texture()->set_wrap(::h3d::mat::Wrap_obj::Repeat_dyn());
				}
				Float v1 = ( (Float)(_hx_array_unsafe_get(o->uvs,(frame1 << 1))) );
				Float v2 = ( (Float)(_hx_array_unsafe_get(o->uvs,(frame2 << 1))) );
				v1 = ::hx::Mod(v1,((Float)1.));
				v2 = ::hx::Mod(v2,((Float)1.));
				if ((v1 < (v2 - ((Float)0.5)))) {
					v1 = (v1 + 1);
				}
				else {
					if ((v1 > (v2 + ((Float)0.5)))) {
						v1 = (v1 - ( (Float)(1) ));
					}
				}
				s->uvDelta__->x = ((v1 * (( (Float)(1) ) - k2)) + (v2 * k2));
				Float v11 = ( (Float)(_hx_array_unsafe_get(o->uvs,((frame1 << 1) | 1))) );
				Float v21 = ( (Float)(_hx_array_unsafe_get(o->uvs,((frame2 << 1) | 1))) );
				v11 = ::hx::Mod(v11,((Float)1.));
				v21 = ::hx::Mod(v21,((Float)1.));
				if ((v11 < (v21 - ((Float)0.5)))) {
					v11 = (v11 + 1);
				}
				else {
					if ((v11 > (v21 + ((Float)0.5)))) {
						v11 = (v11 - ( (Float)(1) ));
					}
				}
				s->uvDelta__->y = ((v11 * (( (Float)(1) ) - k2)) + (v21 * k2));
				continue;
			}
			if (::hx::IsNotNull( o->propValues )) {
				Float _hx_tmp = (( (Float)(_hx_array_unsafe_get(o->propValues,frame1)) ) * k1);
				o->propCurrentValue = (_hx_tmp + (( (Float)(_hx_array_unsafe_get(o->propValues,frame2)) ) * k2));
				continue;
			}
			int frame11 = frame1;
			int frame21 = frame2;
			if ((o->frames->length == 1)) {
				if (this->isSync) {
					goto _hx_goto_14;
				}
				frame21 = 0;
				frame11 = frame21;
			}
			 ::h3d::anim::LinearFrame f1 = ( ( ::h3d::anim::LinearFrame)(_hx_array_unsafe_get(o->frames,frame11)) );
			 ::h3d::anim::LinearFrame f2 = ( ( ::h3d::anim::LinearFrame)(_hx_array_unsafe_get(o->frames,frame21)) );
			 ::h3d::Matrix m = o->matrix;
			m->_41 = ((f1->tx * k1) + (f2->tx * k2));
			m->_42 = ((f1->ty * k1) + (f2->ty * k2));
			m->_43 = ((f1->tz * k1) + (f2->tz * k2));
			if (o->hasRotation) {
				Float dot = ((((f1->qx * f2->qx) + (f1->qy * f2->qy)) + (f1->qz * f2->qz)) + (f1->qw * f2->qw));
				Float q2;
				if ((dot < 0)) {
					q2 = -(k2);
				}
				else {
					q2 = k2;
				}
				Float qx = ((f1->qx * k1) + (f2->qx * q2));
				Float qy = ((f1->qy * k1) + (f2->qy * q2));
				Float qz = ((f1->qz * k1) + (f2->qz * q2));
				Float qw = ((f1->qw * k1) + (f2->qw * q2));
				Float ql = (( (Float)(1) ) / ::Math_obj::sqrt(((((qx * qx) + (qy * qy)) + (qz * qz)) + (qw * qw))));
				qx = (qx * ql);
				qy = (qy * ql);
				qz = (qz * ql);
				qw = (qw * ql);
				if (decompose) {
					m->_12 = qx;
					m->_13 = qy;
					m->_21 = qz;
					m->_23 = qw;
					if (o->hasScale) {
						m->_11 = ((f1->sx * k1) + (f2->sx * k2));
						m->_22 = ((f1->sy * k1) + (f2->sy * k2));
						m->_33 = ((f1->sz * k1) + (f2->sz * k2));
					}
					else {
						m->_11 = ( (Float)(1) );
						m->_22 = ( (Float)(1) );
						m->_33 = ( (Float)(1) );
					}
				}
				else {
					Float xx = (qx * qx);
					Float xy = (qx * qy);
					Float xz = (qx * qz);
					Float xw = (qx * qw);
					Float yy = (qy * qy);
					Float yz = (qy * qz);
					Float yw = (qy * qw);
					Float zz = (qz * qz);
					Float zw = (qz * qw);
					m->_11 = (( (Float)(1) ) - (( (Float)(2) ) * (yy + zz)));
					m->_12 = (( (Float)(2) ) * (xy + zw));
					m->_13 = (( (Float)(2) ) * (xz - yw));
					m->_21 = (( (Float)(2) ) * (xy - zw));
					m->_22 = (( (Float)(1) ) - (( (Float)(2) ) * (xx + zz)));
					m->_23 = (( (Float)(2) ) * (yz + xw));
					m->_31 = (( (Float)(2) ) * (xz + yw));
					m->_32 = (( (Float)(2) ) * (yz - xw));
					m->_33 = (( (Float)(1) ) - (( (Float)(2) ) * (xx + yy)));
					if (o->hasScale) {
						Float sx = ((f1->sx * k1) + (f2->sx * k2));
						Float sy = ((f1->sy * k1) + (f2->sy * k2));
						Float sz = ((f1->sz * k1) + (f2->sz * k2));
						 ::h3d::Matrix m1 = m;
						m1->_11 = (m1->_11 * sx);
						 ::h3d::Matrix m2 = m;
						m2->_12 = (m2->_12 * sx);
						 ::h3d::Matrix m3 = m;
						m3->_13 = (m3->_13 * sx);
						 ::h3d::Matrix m4 = m;
						m4->_21 = (m4->_21 * sy);
						 ::h3d::Matrix m5 = m;
						m5->_22 = (m5->_22 * sy);
						 ::h3d::Matrix m6 = m;
						m6->_23 = (m6->_23 * sy);
						 ::h3d::Matrix m7 = m;
						m7->_31 = (m7->_31 * sz);
						 ::h3d::Matrix m8 = m;
						m8->_32 = (m8->_32 * sz);
						 ::h3d::Matrix m9 = m;
						m9->_33 = (m9->_33 * sz);
					}
				}
			}
			else {
				m->_12 = ( (Float)(0) );
				m->_13 = ( (Float)(0) );
				m->_21 = ( (Float)(0) );
				Float _hx_tmp;
				if (decompose) {
					_hx_tmp = ( (Float)(1) );
				}
				else {
					_hx_tmp = ( (Float)(0) );
				}
				m->_23 = _hx_tmp;
				if (o->hasScale) {
					m->_11 = ((f1->sx * k1) + (f2->sx * k2));
					m->_22 = ((f1->sy * k1) + (f2->sy * k2));
					m->_33 = ((f1->sz * k1) + (f2->sz * k2));
				}
				else {
					m->_11 = ( (Float)(1) );
					m->_22 = ( (Float)(1) );
					m->_33 = ( (Float)(1) );
				}
			}
			if (::hx::IsNotNull( o->targetSkin )) {
				o->targetSkin->currentRelPose[o->targetJoint] = o->matrix;
				o->targetSkin->jointsUpdated = true;
			}
			else {
				 ::h3d::scene::Object _this = o->targetObject;
				 ::h3d::Matrix v = o->matrix;
				_this->defaultTransform = v;
				{
					int f = 1;
					bool b = true;
					if (b) {
						 ::h3d::scene::Object _this1 = _this;
						_this1->flags = (_this1->flags | f);
					}
					else {
						 ::h3d::scene::Object _this1 = _this;
						_this1->flags = (_this1->flags & ~(f));
					}
				}
			}
		}
		_hx_goto_14:;
	}
	if (!(decompose)) {
		this->isSync = true;
	}
}



::hx::ObjectPtr< LinearAnimation_obj > LinearAnimation_obj::__new(::String name,int frame,Float sampling) {
	::hx::ObjectPtr< LinearAnimation_obj > __this = new LinearAnimation_obj();
	__this->__construct(name,frame,sampling);
	return __this;
}

::hx::ObjectPtr< LinearAnimation_obj > LinearAnimation_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,int frame,Float sampling) {
	LinearAnimation_obj *__this = (LinearAnimation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinearAnimation_obj), true, "h3d.anim.LinearAnimation"));
	*(void **)__this = LinearAnimation_obj::_hx_vtable;
	__this->__construct(name,frame,sampling);
	return __this;
}

LinearAnimation_obj::LinearAnimation_obj()
{
}

::hx::Val LinearAnimation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"uvLerp") ) { return ::hx::Val( uvLerp_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addCurve") ) { return ::hx::Val( addCurve_dyn() ); }
		if (HX_FIELD_EQ(inName,"endFrame") ) { return ::hx::Val( endFrame_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"syncFrame") ) { return ::hx::Val( syncFrame ); }
		if (HX_FIELD_EQ(inName,"getFrames") ) { return ::hx::Val( getFrames_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addUVCurve") ) { return ::hx::Val( addUVCurve_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addPropCurve") ) { return ::hx::Val( addPropCurve_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPropValue") ) { return ::hx::Val( getPropValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"initInstance") ) { return ::hx::Val( initInstance_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addAlphaCurve") ) { return ::hx::Val( addAlphaCurve_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sortByFrameCountDesc") ) { return ::hx::Val( sortByFrameCountDesc_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LinearAnimation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"syncFrame") ) { syncFrame=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("syncFrame",d2,c3,88,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LinearAnimation_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(LinearAnimation_obj,syncFrame),HX_("syncFrame",d2,c3,88,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LinearAnimation_obj_sStaticStorageInfo = 0;
#endif

static ::String LinearAnimation_obj_sMemberFields[] = {
	HX_("syncFrame",d2,c3,88,d8),
	HX_("addCurve",ce,72,b5,c7),
	HX_("addAlphaCurve",f2,e9,46,d9),
	HX_("addUVCurve",8d,36,10,ad),
	HX_("addPropCurve",ab,87,b5,72),
	HX_("getPropValue",58,35,18,66),
	HX_("getFrames",dc,38,dc,28),
	HX_("clone",5d,13,63,48),
	HX_("endFrame",52,0a,81,04),
	HX_("initInstance",c5,a6,97,fe),
	HX_("sortByFrameCountDesc",88,50,4a,63),
	HX_("uvLerp",78,e9,92,eb),
	HX_("sync",5b,ba,5f,4c),
	::String(null()) };

::hx::Class LinearAnimation_obj::__mClass;

void LinearAnimation_obj::__register()
{
	LinearAnimation_obj _hx_dummy;
	LinearAnimation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim.LinearAnimation",37,ff,ee,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinearAnimation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinearAnimation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinearAnimation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinearAnimation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
