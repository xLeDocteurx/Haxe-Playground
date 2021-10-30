#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_anim_Skin
#include <h3d/anim/Skin.h>
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
#ifndef INCLUDED_h3d_scene_Skin
#include <h3d/scene/Skin.h>
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
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_03ae53a2aa832a93_7_new,"h3d.scene.Joint","new",0xc2f0de45,"h3d.scene.Joint.new","h3d/scene/Skin.hx",7,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_03ae53a2aa832a93_16_getObjectByName,"h3d.scene.Joint","getObjectByName",0xf0ef5efc,"h3d.scene.Joint.getObjectByName","h3d/scene/Skin.hx",16,0xc713f0a8)
HX_LOCAL_STACK_FRAME(_hx_pos_03ae53a2aa832a93_36_syncPos,"h3d.scene.Joint","syncPos",0x8c7e6a5e,"h3d.scene.Joint.syncPos","h3d/scene/Skin.hx",36,0xc713f0a8)
namespace h3d{
namespace scene{

void Joint_obj::__construct( ::h3d::scene::Skin skin, ::h3d::anim::Joint j){
            	HX_STACKFRAME(&_hx_pos_03ae53a2aa832a93_7_new)
HXLINE(   8)		super::__construct(null());
HXLINE(   9)		this->name = j->name;
HXLINE(  10)		this->skin = skin;
HXLINE(  12)		this->parent = skin;
HXLINE(  13)		this->index = j->index;
            	}

Dynamic Joint_obj::__CreateEmpty() { return new Joint_obj; }

void *Joint_obj::_hx_vtable = 0;

Dynamic Joint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Joint_obj > _hx_result = new Joint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Joint_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1797ae36) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1797ae36;
	} else {
		return inClassId==(int)0x3f569797;
	}
}

 ::h3d::scene::Object Joint_obj::getObjectByName(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_03ae53a2aa832a93_16_getObjectByName)
HXLINE(  17)		 ::h3d::anim::Skin sk = this->skin->getSkinData();
HXLINE(  18)		 ::h3d::anim::Joint j = ( ( ::h3d::anim::Joint)(sk->namedJoints->get(name)) );
HXLINE(  19)		if (::hx::IsNull( j )) {
HXLINE(  20)			return null();
            		}
HXLINE(  21)		 ::h3d::anim::Joint cur = sk->allJoints->__get(this->index).StaticCast<  ::h3d::anim::Joint >();
HXLINE(  22)		if ((cur->index != this->index)) {
HXLINE(  22)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            		}
HXLINE(  23)		 ::h3d::anim::Joint jp = j->parent;
HXLINE(  24)		while(::hx::IsNotNull( jp )){
HXLINE(  25)			if (::hx::IsInstanceEq( jp,cur )) {
HXLINE(  26)				 ::h3d::scene::Joint jo =  ::h3d::scene::Joint_obj::__alloc( HX_CTX ,this->skin,j);
HXLINE(  27)				jo->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  28)				return jo;
            			}
HXLINE(  30)			jp = jp->parent;
            		}
HXLINE(  32)		return null();
            	}


void Joint_obj::syncPos(){
            	HX_GC_STACKFRAME(&_hx_pos_03ae53a2aa832a93_36_syncPos)
HXLINE(  40)		 ::h3d::scene::Object p = this->parent;
HXLINE(  41)		while(::hx::IsNotNull( p )){
HXLINE(  42)			if (((p->flags & 1) != 0)) {
HXLINE(  44)				if (::hx::IsNull( this->skin->jointsAbsPosInv )) {
HXLINE(  45)					this->skin->jointsAbsPosInv =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE(  46)					this->skin->jointsAbsPosInv->zero();
            				}
HXLINE(  48)				if ((this->skin->jointsAbsPosInv->_44 == 0)) {
HXLINE(  49)					this->skin->jointsAbsPosInv->inverse3x4(this->parent->absPos);
            				}
HXLINE(  50)				this->parent->syncPos();
HXLINE(  51)				this->lastFrame = -1;
HXLINE(  52)				goto _hx_goto_3;
            			}
HXLINE(  54)			p = p->parent;
            		}
            		_hx_goto_3:;
HXLINE(  56)		if ((this->lastFrame != this->skin->lastFrame)) {
HXLINE(  57)			this->lastFrame = this->skin->lastFrame;
HXLINE(  58)			this->absPos->load(this->skin->currentAbsPose->__get(this->index).StaticCast<  ::h3d::Matrix >());
HXLINE(  59)			bool _hx_tmp;
HXDLIN(  59)			if (::hx::IsNotNull( this->skin->jointsAbsPosInv )) {
HXLINE(  59)				_hx_tmp = (this->skin->jointsAbsPosInv->_44 != 0);
            			}
            			else {
HXLINE(  59)				_hx_tmp = false;
            			}
HXDLIN(  59)			if (_hx_tmp) {
HXLINE(  60)				this->absPos->multiply3x4(this->absPos,this->skin->jointsAbsPosInv);
HXLINE(  61)				this->absPos->multiply3x4(this->absPos,this->parent->absPos);
            			}
            		}
            	}



::hx::ObjectPtr< Joint_obj > Joint_obj::__new( ::h3d::scene::Skin skin, ::h3d::anim::Joint j) {
	::hx::ObjectPtr< Joint_obj > __this = new Joint_obj();
	__this->__construct(skin,j);
	return __this;
}

::hx::ObjectPtr< Joint_obj > Joint_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Skin skin, ::h3d::anim::Joint j) {
	Joint_obj *__this = (Joint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Joint_obj), true, "h3d.scene.Joint"));
	*(void **)__this = Joint_obj::_hx_vtable;
	__this->__construct(skin,j);
	return __this;
}

Joint_obj::Joint_obj()
{
}

void Joint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joint);
	HX_MARK_MEMBER_NAME(skin,"skin");
	HX_MARK_MEMBER_NAME(index,"index");
	 ::h3d::scene::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Joint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skin,"skin");
	HX_VISIT_MEMBER_NAME(index,"index");
	 ::h3d::scene::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Joint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"skin") ) { return ::hx::Val( skin ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"syncPos") ) { return ::hx::Val( syncPos_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getObjectByName") ) { return ::hx::Val( getObjectByName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Joint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"skin") ) { skin=inValue.Cast<  ::h3d::scene::Skin >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Joint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("skin",7d,16,55,4c));
	outFields->push(HX_("index",12,9b,14,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Joint_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h3d::scene::Skin */ ,(int)offsetof(Joint_obj,skin),HX_("skin",7d,16,55,4c)},
	{::hx::fsInt,(int)offsetof(Joint_obj,index),HX_("index",12,9b,14,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Joint_obj_sStaticStorageInfo = 0;
#endif

static ::String Joint_obj_sMemberFields[] = {
	HX_("skin",7d,16,55,4c),
	HX_("index",12,9b,14,be),
	HX_("getObjectByName",97,8d,42,0b),
	HX_("syncPos",f9,05,14,a7),
	::String(null()) };

::hx::Class Joint_obj::__mClass;

void Joint_obj::__register()
{
	Joint_obj _hx_dummy;
	Joint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.Joint",d3,57,b1,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Joint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Joint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Joint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Joint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
