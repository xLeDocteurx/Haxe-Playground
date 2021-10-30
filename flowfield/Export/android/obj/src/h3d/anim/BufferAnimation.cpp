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
#ifndef INCLUDED_h3d_anim_BufferAnimation
#include <h3d/anim/BufferAnimation.h>
#endif
#ifndef INCLUDED_h3d_anim_BufferObject
#include <h3d/anim/BufferObject.h>
#endif
#ifndef INCLUDED_h3d_anim_DataLayout
#include <h3d/anim/DataLayout.h>
#endif
#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_anim_Skin
#include <h3d/anim/Skin.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_53_new,"h3d.anim.BufferAnimation","new",0x414c87ae,"h3d.anim.BufferAnimation.new","h3d/anim/BufferAnimation.hx",53,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_58_setData,"h3d.anim.BufferAnimation","setData",0x62490d3a,"h3d.anim.BufferAnimation.setData","h3d/anim/BufferAnimation.hx",58,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_63_addObject,"h3d.anim.BufferAnimation","addObject",0x9bc9d98e,"h3d.anim.BufferAnimation.addObject","h3d/anim/BufferAnimation.hx",63,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_69_getPropValue,"h3d.anim.BufferAnimation","getPropValue",0x1881244a,"h3d.anim.BufferAnimation.getPropValue","h3d/anim/BufferAnimation.hx",69,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_77_getFrames,"h3d.anim.BufferAnimation","getFrames",0xf7425eaa,"h3d.anim.BufferAnimation.getFrames","h3d/anim/BufferAnimation.hx",77,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_80_clone,"h3d.anim.BufferAnimation","clone",0x4272ba2b,"h3d.anim.BufferAnimation.clone","h3d/anim/BufferAnimation.hx",80,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_90_endFrame,"h3d.anim.BufferAnimation","endFrame",0xbf671844,"h3d.anim.BufferAnimation.endFrame","h3d/anim/BufferAnimation.hx",90,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_95_initInstance,"h3d.anim.BufferAnimation","initInstance",0xb10095b7,"h3d.anim.BufferAnimation.initInstance","h3d/anim/BufferAnimation.hx",95,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_120_sortByFrameCountDesc,"h3d.anim.BufferAnimation","sortByFrameCountDesc",0x9586817a,"h3d.anim.BufferAnimation.sortByFrameCountDesc","h3d/anim/BufferAnimation.hx",120,0xf0b87be2)
HX_LOCAL_STACK_FRAME(_hx_pos_0d44ed40f11bdaff_123_uvLerp,"h3d.anim.BufferAnimation","uvLerp",0xbf3536ea,"h3d.anim.BufferAnimation.uvLerp","h3d/anim/BufferAnimation.hx",123,0xf0b87be2)
namespace h3d{
namespace anim{

void BufferAnimation_obj::__construct(::String name,int frame,Float sampling){
            	HX_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_53_new)
HXLINE(  54)		super::__construct(name,frame,sampling);
HXLINE(  55)		this->syncFrame = ( (Float)(-1) );
            	}

Dynamic BufferAnimation_obj::__CreateEmpty() { return new BufferAnimation_obj; }

void *BufferAnimation_obj::_hx_vtable = 0;

Dynamic BufferAnimation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BufferAnimation_obj > _hx_result = new BufferAnimation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BufferAnimation_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x042ba3ea) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x042ba3ea;
	} else {
		return inClassId==(int)0x70459dba;
	}
}

void BufferAnimation_obj::setData(::Array< Float > data,int stride){
            	HX_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_58_setData)
HXLINE(  59)		this->data = data;
HXLINE(  60)		this->stride = stride;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BufferAnimation_obj,setData,(void))

 ::h3d::anim::BufferObject BufferAnimation_obj::addObject(::String objName,int offset){
            	HX_GC_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_63_addObject)
HXLINE(  64)		 ::h3d::anim::BufferObject f =  ::h3d::anim::BufferObject_obj::__alloc( HX_CTX ,objName,offset);
HXLINE(  65)		this->objects->push(f);
HXLINE(  66)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BufferAnimation_obj,addObject,return )

 ::Dynamic BufferAnimation_obj::getPropValue(::String objName,::String propName){
            	HX_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_69_getPropValue)
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			::Array< ::Dynamic> _g1 = this->objects;
HXDLIN(  70)			while((_g < _g1->length)){
HXLINE(  70)				 ::h3d::anim::BufferObject o = _g1->__get(_g).StaticCast<  ::h3d::anim::BufferObject >();
HXDLIN(  70)				_g = (_g + 1);
HXLINE(  71)				bool _hx_tmp;
HXDLIN(  71)				if ((o->objectName == objName)) {
HXLINE(  71)					_hx_tmp = (o->propName == propName);
            				}
            				else {
HXLINE(  71)					_hx_tmp = false;
            				}
HXDLIN(  71)				if (_hx_tmp) {
HXLINE(  72)					return o->propCurrentValue;
            				}
            			}
            		}
HXLINE(  73)		return null();
            	}


::Array< ::Dynamic> BufferAnimation_obj::getFrames(){
            	HX_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_77_getFrames)
HXDLIN(  77)		return this->objects;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BufferAnimation_obj,getFrames,return )

 ::h3d::anim::Animation BufferAnimation_obj::clone( ::h3d::anim::Animation a){
            	HX_GC_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_80_clone)
HXLINE(  81)		if (::hx::IsNull( a )) {
HXLINE(  82)			a =  ::h3d::anim::BufferAnimation_obj::__alloc( HX_CTX ,this->name,this->frameCount,this->sampling);
            		}
HXLINE(  83)		this->super::clone(a);
HXLINE(  84)		 ::h3d::anim::BufferAnimation la = ( ( ::h3d::anim::BufferAnimation)(::Std_obj::downcast(a,::hx::ClassOf< ::h3d::anim::BufferAnimation >())) );
HXLINE(  85)		la->setData(this->data,this->stride);
HXLINE(  86)		return a;
            	}


int BufferAnimation_obj::endFrame(){
            	HX_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_90_endFrame)
HXDLIN(  90)		if (this->loop) {
HXDLIN(  90)			return this->frameCount;
            		}
            		else {
HXDLIN(  90)			return (this->frameCount - 1);
            		}
HXDLIN(  90)		return 0;
            	}


void BufferAnimation_obj::initInstance(){
            	HX_GC_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_95_initInstance)
HXLINE(  96)		this->super::initInstance();
HXLINE(  97)		::Array< ::Dynamic> frames = this->objects;
HXLINE(  98)		{
HXLINE(  98)			int _g = 0;
HXDLIN(  98)			while((_g < frames->length)){
HXLINE(  98)				 ::h3d::anim::BufferObject a = frames->__get(_g).StaticCast<  ::h3d::anim::BufferObject >();
HXDLIN(  98)				_g = (_g + 1);
HXLINE(  99)				int this1 = a->layout;
HXDLIN(  99)				if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Property_dyn()))) != 0)) {
HXLINE( 100)					a->propCurrentValue = ( (Float)(_hx_array_unsafe_get(this->data,a->dataOffset)) );
            				}
HXLINE( 101)				bool _hx_tmp;
HXDLIN( 101)				int this2 = a->layout;
HXDLIN( 101)				if (((this2 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Alpha_dyn()))) != 0)) {
HXLINE( 101)					if (::hx::IsNotNull( a->targetObject )) {
HXLINE( 101)						_hx_tmp = ::hx::IsNull( ( ( ::h3d::scene::Mesh)(::Std_obj::downcast(a->targetObject,::hx::ClassOf< ::h3d::scene::Mesh >())) ) );
            					}
            					else {
HXLINE( 101)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 101)					_hx_tmp = false;
            				}
HXDLIN( 101)				if (_hx_tmp) {
HXLINE( 102)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((a->objectName + HX_(" should be a mesh (for alpha animation)",e2,7e,71,dc))));
            				}
HXLINE( 103)				bool _hx_tmp1;
HXDLIN( 103)				bool _hx_tmp2;
HXDLIN( 103)				int this3 = a->layout;
HXDLIN( 103)				if (((this3 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Position_dyn()))) == 0)) {
HXLINE( 103)					int this1 = a->layout;
HXDLIN( 103)					_hx_tmp2 = ((this1 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Rotation_dyn()))) != 0);
            				}
            				else {
HXLINE( 103)					_hx_tmp2 = true;
            				}
HXDLIN( 103)				if (!(_hx_tmp2)) {
HXLINE( 103)					int this1 = a->layout;
HXDLIN( 103)					_hx_tmp1 = ((this1 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Scale_dyn()))) != 0);
            				}
            				else {
HXLINE( 103)					_hx_tmp1 = true;
            				}
HXDLIN( 103)				if (_hx_tmp1) {
HXLINE( 104)					a->matrix =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 105)					a->matrix->identity();
HXLINE( 107)					bool _hx_tmp;
HXDLIN( 107)					int this1 = a->layout;
HXDLIN( 107)					if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Position_dyn()))) == 0)) {
HXLINE( 107)						_hx_tmp = ::hx::IsNotNull( a->targetSkin );
            					}
            					else {
HXLINE( 107)						_hx_tmp = false;
            					}
HXDLIN( 107)					if (_hx_tmp) {
HXLINE( 108)						 ::h3d::Matrix m2 = a->targetSkin->getSkinData()->allJoints->__get(a->targetJoint).StaticCast<  ::h3d::anim::Joint >()->defMat;
HXLINE( 109)						a->matrix->_14 = m2->_41;
HXLINE( 110)						a->matrix->_24 = m2->_42;
HXLINE( 111)						a->matrix->_34 = m2->_43;
            					}
            				}
            			}
            		}
HXLINE( 116)		frames->sort(this->sortByFrameCountDesc_dyn());
            	}


int BufferAnimation_obj::sortByFrameCountDesc( ::h3d::anim::BufferObject o1, ::h3d::anim::BufferObject o2){
            	HX_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_120_sortByFrameCountDesc)
HXDLIN( 120)		int _hx_tmp;
HXDLIN( 120)		int this1 = o2->layout;
HXDLIN( 120)		if (((this1 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::SingleFrame_dyn()))) != 0)) {
HXDLIN( 120)			_hx_tmp = 0;
            		}
            		else {
HXDLIN( 120)			_hx_tmp = 1;
            		}
HXDLIN( 120)		int _hx_tmp1;
HXDLIN( 120)		int this2 = o1->layout;
HXDLIN( 120)		if (((this2 & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::SingleFrame_dyn()))) != 0)) {
HXDLIN( 120)			_hx_tmp1 = 0;
            		}
            		else {
HXDLIN( 120)			_hx_tmp1 = 1;
            		}
HXDLIN( 120)		return (_hx_tmp - _hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BufferAnimation_obj,sortByFrameCountDesc,return )

Float BufferAnimation_obj::uvLerp(Float v1,Float v2,Float k){
            	HX_STACKFRAME(&_hx_pos_0d44ed40f11bdaff_123_uvLerp)
HXLINE( 124)		v1 = ::hx::Mod(v1,((Float)1.));
HXLINE( 125)		v2 = ::hx::Mod(v2,((Float)1.));
HXLINE( 126)		if ((v1 < (v2 - ((Float)0.5)))) {
HXLINE( 127)			v1 = (v1 + 1);
            		}
            		else {
HXLINE( 128)			if ((v1 > (v2 + ((Float)0.5)))) {
HXLINE( 129)				v1 = (v1 - ( (Float)(1) ));
            			}
            		}
HXLINE( 130)		return ((v1 * (( (Float)(1) ) - k)) + (v2 * k));
            	}


HX_DEFINE_DYNAMIC_FUNC3(BufferAnimation_obj,uvLerp,return )

void BufferAnimation_obj::sync(::hx::Null< bool >  __o_decompose){
	bool decompose = __o_decompose.Default(false);
	HX_JUST_GC_STACKFRAME
	 ::h3d::anim::BufferAnimation _gthis = ::hx::ObjectPtr<OBJ_>(this);
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
			 ::h3d::anim::BufferObject o = _g1->__get(_g).StaticCast<  ::h3d::anim::BufferObject >();
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
			int layout = o->layout;
			int offset1 = ((this->stride * frame1) + o->dataOffset);
			int offset2 = ((this->stride * frame2) + o->dataOffset);
			int frame11 = frame1;
			int frame21 = frame2;
			if (((layout & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::SingleFrame_dyn()))) != 0)) {
				if (this->isSync) {
					goto _hx_goto_12;
				}
				frame21 = 0;
				frame11 = frame21;
				offset2 = o->dataOffset;
				offset1 = offset2;
			}
			 ::h3d::Matrix m = o->matrix;
			if (::hx::IsNotNull( m )) {
				if (((layout & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Position_dyn()))) != 0)) {
					offset1 = (offset1 + 1);
					Float _hx_tmp = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
					offset2 = (offset2 + 1);
					m->_41 = (_hx_tmp + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
					offset1 = (offset1 + 1);
					Float _hx_tmp1 = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
					offset2 = (offset2 + 1);
					m->_42 = (_hx_tmp1 + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
					offset1 = (offset1 + 1);
					Float _hx_tmp2 = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
					offset2 = (offset2 + 1);
					m->_43 = (_hx_tmp2 + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
				}
				else {
					m->_41 = m->_14;
					m->_42 = m->_24;
					m->_43 = m->_34;
				}
				if (((layout & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Rotation_dyn()))) != 0)) {
					offset1 = (offset1 + 1);
					Float q1x = ( (Float)(_hx_array_unsafe_get(this->data,(offset1 - 1))) );
					offset1 = (offset1 + 1);
					Float q1y = ( (Float)(_hx_array_unsafe_get(this->data,(offset1 - 1))) );
					offset1 = (offset1 + 1);
					Float q1z = ( (Float)(_hx_array_unsafe_get(this->data,(offset1 - 1))) );
					Float f = (( (Float)(1) ) - (((q1x * q1x) + (q1y * q1y)) + (q1z * q1z)));
					Float q1w;
					if ((f < 0)) {
						q1w = -(f);
					}
					else {
						q1w = f;
					}
					Float q1w1 = ::Math_obj::sqrt(q1w);
					offset2 = (offset2 + 1);
					Float q2x = ( (Float)(_hx_array_unsafe_get(this->data,(offset2 - 1))) );
					offset2 = (offset2 + 1);
					Float q2y = ( (Float)(_hx_array_unsafe_get(this->data,(offset2 - 1))) );
					offset2 = (offset2 + 1);
					Float q2z = ( (Float)(_hx_array_unsafe_get(this->data,(offset2 - 1))) );
					Float f1 = (( (Float)(1) ) - (((q2x * q2x) + (q2y * q2y)) + (q2z * q2z)));
					Float q2w;
					if ((f1 < 0)) {
						q2w = -(f1);
					}
					else {
						q2w = f1;
					}
					Float q2w1 = ::Math_obj::sqrt(q2w);
					Float dot = ((((q1x * q2x) + (q1y * q2y)) + (q1z * q2z)) + (q1w1 * q2w1));
					Float q2;
					if ((dot < 0)) {
						q2 = -(k2);
					}
					else {
						q2 = k2;
					}
					Float qx = ((q1x * k1) + (q2x * q2));
					Float qy = ((q1y * k1) + (q2y * q2));
					Float qz = ((q1z * k1) + (q2z * q2));
					Float qw = ((q1w1 * k1) + (q2w1 * q2));
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
						if (((layout & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Scale_dyn()))) != 0)) {
							offset1 = (offset1 + 1);
							Float _hx_tmp = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
							offset2 = (offset2 + 1);
							m->_11 = (_hx_tmp + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
							offset1 = (offset1 + 1);
							Float _hx_tmp1 = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
							offset2 = (offset2 + 1);
							m->_22 = (_hx_tmp1 + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
							offset1 = (offset1 + 1);
							Float _hx_tmp2 = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
							offset2 = (offset2 + 1);
							m->_33 = (_hx_tmp2 + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
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
						if (((layout & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Scale_dyn()))) != 0)) {
							offset1 = (offset1 + 1);
							Float sx = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
							offset2 = (offset2 + 1);
							Float sx1 = (sx + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
							offset1 = (offset1 + 1);
							Float sy = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
							offset2 = (offset2 + 1);
							Float sy1 = (sy + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
							offset1 = (offset1 + 1);
							Float sz = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
							offset2 = (offset2 + 1);
							Float sz1 = (sz + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
							 ::h3d::Matrix m1 = m;
							m1->_11 = (m1->_11 * sx1);
							 ::h3d::Matrix m2 = m;
							m2->_12 = (m2->_12 * sx1);
							 ::h3d::Matrix m3 = m;
							m3->_13 = (m3->_13 * sx1);
							 ::h3d::Matrix m4 = m;
							m4->_21 = (m4->_21 * sy1);
							 ::h3d::Matrix m5 = m;
							m5->_22 = (m5->_22 * sy1);
							 ::h3d::Matrix m6 = m;
							m6->_23 = (m6->_23 * sy1);
							 ::h3d::Matrix m7 = m;
							m7->_31 = (m7->_31 * sz1);
							 ::h3d::Matrix m8 = m;
							m8->_32 = (m8->_32 * sz1);
							 ::h3d::Matrix m9 = m;
							m9->_33 = (m9->_33 * sz1);
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
					if (((layout & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Scale_dyn()))) != 0)) {
						offset1 = (offset1 + 1);
						Float _hx_tmp = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
						offset2 = (offset2 + 1);
						m->_11 = (_hx_tmp + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
						offset1 = (offset1 + 1);
						Float _hx_tmp1 = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
						offset2 = (offset2 + 1);
						m->_22 = (_hx_tmp1 + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
						offset1 = (offset1 + 1);
						Float _hx_tmp2 = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
						offset2 = (offset2 + 1);
						m->_33 = (_hx_tmp2 + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
					}
					else {
						m->_11 = ( (Float)(1) );
						m->_22 = ( (Float)(1) );
						m->_33 = ( (Float)(1) );
					}
				}
				if (::hx::IsNotNull( o->targetSkin )) {
					o->targetSkin->currentRelPose[o->targetJoint] = m;
					o->targetSkin->jointsUpdated = true;
				}
				else {
					 ::h3d::scene::Object _this = o->targetObject;
					_this->defaultTransform = m;
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
			if (((layout & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::UV_dyn()))) != 0)) {
				 ::h3d::mat::Material mat = o->targetObject->toMesh()->material;
				 ::h3d::shader::UVDelta s = mat->passes->getShader(::hx::ClassOf< ::h3d::shader::UVDelta >()).StaticCast<  ::h3d::shader::UVDelta >();
				if (::hx::IsNull( s )) {
					 ::h3d::mat::Pass mat1 = mat->passes;
					s = mat1->addShader( ::h3d::shader::UVDelta_obj::__alloc( HX_CTX ,null(),null(),null(),null())).StaticCast<  ::h3d::shader::UVDelta >();
					mat->get_texture()->set_wrap(::h3d::mat::Wrap_obj::Repeat_dyn());
				}
				offset1 = (offset1 + 1);
				Float v1 = ( (Float)(_hx_array_unsafe_get(this->data,(offset1 - 1))) );
				offset2 = (offset2 + 1);
				Float v2 = ( (Float)(_hx_array_unsafe_get(this->data,(offset2 - 1))) );
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
				offset1 = (offset1 + 1);
				Float v11 = ( (Float)(_hx_array_unsafe_get(this->data,(offset1 - 1))) );
				offset2 = (offset2 + 1);
				Float v21 = ( (Float)(_hx_array_unsafe_get(this->data,(offset2 - 1))) );
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
			}
			if (((layout & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Alpha_dyn()))) != 0)) {
				 ::h3d::mat::Material mat = o->targetObject->toMesh()->material;
				if (::hx::IsPointerEq( mat->blendMode,::h2d::BlendMode_obj::None_dyn() )) {
					mat->set_blendMode(::h2d::BlendMode_obj::Alpha_dyn());
				}
				offset1 = (offset1 + 1);
				Float _hx_tmp = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
				offset2 = (offset2 + 1);
				Float _hx_tmp1 = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2);
				mat->mshader->color__->w = (_hx_tmp + _hx_tmp1);
			}
			if (((layout & (1 << _hx_getEnumValueIndex(::h3d::anim::DataLayout_obj::Property_dyn()))) != 0)) {
				offset1 = (offset1 + 1);
				Float _hx_tmp = (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset1 - 1))) ) * k1);
				offset2 = (offset2 + 1);
				o->propCurrentValue = (_hx_tmp + (( (Float)(_hx_array_unsafe_get(_gthis->data,(offset2 - 1))) ) * k2));
			}
		}
		_hx_goto_12:;
	}
	if (!(decompose)) {
		this->isSync = true;
	}
}



::hx::ObjectPtr< BufferAnimation_obj > BufferAnimation_obj::__new(::String name,int frame,Float sampling) {
	::hx::ObjectPtr< BufferAnimation_obj > __this = new BufferAnimation_obj();
	__this->__construct(name,frame,sampling);
	return __this;
}

::hx::ObjectPtr< BufferAnimation_obj > BufferAnimation_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,int frame,Float sampling) {
	BufferAnimation_obj *__this = (BufferAnimation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BufferAnimation_obj), true, "h3d.anim.BufferAnimation"));
	*(void **)__this = BufferAnimation_obj::_hx_vtable;
	__this->__construct(name,frame,sampling);
	return __this;
}

BufferAnimation_obj::BufferAnimation_obj()
{
}

void BufferAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BufferAnimation);
	HX_MARK_MEMBER_NAME(syncFrame,"syncFrame");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(stride,"stride");
	 ::h3d::anim::Animation_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BufferAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(syncFrame,"syncFrame");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	 ::h3d::anim::Animation_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BufferAnimation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { return ::hx::Val( stride ); }
		if (HX_FIELD_EQ(inName,"uvLerp") ) { return ::hx::Val( uvLerp_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setData") ) { return ::hx::Val( setData_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endFrame") ) { return ::hx::Val( endFrame_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"syncFrame") ) { return ::hx::Val( syncFrame ); }
		if (HX_FIELD_EQ(inName,"addObject") ) { return ::hx::Val( addObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrames") ) { return ::hx::Val( getFrames_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getPropValue") ) { return ::hx::Val( getPropValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"initInstance") ) { return ::hx::Val( initInstance_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sortByFrameCountDesc") ) { return ::hx::Val( sortByFrameCountDesc_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BufferAnimation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"syncFrame") ) { syncFrame=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BufferAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("syncFrame",d2,c3,88,d8));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("stride",19,20,30,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BufferAnimation_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(BufferAnimation_obj,syncFrame),HX_("syncFrame",d2,c3,88,d8)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(BufferAnimation_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(BufferAnimation_obj,stride),HX_("stride",19,20,30,11)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BufferAnimation_obj_sStaticStorageInfo = 0;
#endif

static ::String BufferAnimation_obj_sMemberFields[] = {
	HX_("syncFrame",d2,c3,88,d8),
	HX_("data",2a,56,63,42),
	HX_("stride",19,20,30,11),
	HX_("setData",ec,96,e7,07),
	HX_("addObject",c0,b3,63,cd),
	HX_("getPropValue",58,35,18,66),
	HX_("getFrames",dc,38,dc,28),
	HX_("clone",5d,13,63,48),
	HX_("endFrame",52,0a,81,04),
	HX_("initInstance",c5,a6,97,fe),
	HX_("sortByFrameCountDesc",88,50,4a,63),
	HX_("uvLerp",78,e9,92,eb),
	HX_("sync",5b,ba,5f,4c),
	::String(null()) };

::hx::Class BufferAnimation_obj::__mClass;

void BufferAnimation_obj::__register()
{
	BufferAnimation_obj _hx_dummy;
	BufferAnimation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim.BufferAnimation",bc,d8,6f,f2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BufferAnimation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BufferAnimation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BufferAnimation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BufferAnimation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
