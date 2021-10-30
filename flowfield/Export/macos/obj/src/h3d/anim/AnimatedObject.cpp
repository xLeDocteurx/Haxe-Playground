#include <hxcpp.h>

#ifndef INCLUDED_h3d_anim_AnimatedObject
#include <h3d/anim/AnimatedObject.h>
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
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab56984047475848_13_new,"h3d.anim.AnimatedObject","new",0x03ac9bdc,"h3d.anim.AnimatedObject.new","h3d/anim/Animation.hx",13,0x61b45cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_ab56984047475848_17_clone,"h3d.anim.AnimatedObject","clone",0x6c22b5d9,"h3d.anim.AnimatedObject.clone","h3d/anim/Animation.hx",17,0x61b45cc2)
namespace h3d{
namespace anim{

void AnimatedObject_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_ab56984047475848_13_new)
HXDLIN(  13)		this->objectName = name;
            	}

Dynamic AnimatedObject_obj::__CreateEmpty() { return new AnimatedObject_obj; }

void *AnimatedObject_obj::_hx_vtable = 0;

Dynamic AnimatedObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimatedObject_obj > _hx_result = new AnimatedObject_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AnimatedObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c82ecc8;
}

 ::h3d::anim::AnimatedObject AnimatedObject_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_ab56984047475848_17_clone)
HXDLIN(  17)		return  ::h3d::anim::AnimatedObject_obj::__alloc( HX_CTX ,this->objectName);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatedObject_obj,clone,return )


AnimatedObject_obj::AnimatedObject_obj()
{
}

void AnimatedObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimatedObject);
	HX_MARK_MEMBER_NAME(objectName,"objectName");
	HX_MARK_MEMBER_NAME(targetObject,"targetObject");
	HX_MARK_MEMBER_NAME(targetSkin,"targetSkin");
	HX_MARK_MEMBER_NAME(targetJoint,"targetJoint");
	HX_MARK_END_CLASS();
}

void AnimatedObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectName,"objectName");
	HX_VISIT_MEMBER_NAME(targetObject,"targetObject");
	HX_VISIT_MEMBER_NAME(targetSkin,"targetSkin");
	HX_VISIT_MEMBER_NAME(targetJoint,"targetJoint");
}

::hx::Val AnimatedObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectName") ) { return ::hx::Val( objectName ); }
		if (HX_FIELD_EQ(inName,"targetSkin") ) { return ::hx::Val( targetSkin ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"targetJoint") ) { return ::hx::Val( targetJoint ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetObject") ) { return ::hx::Val( targetObject ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimatedObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"objectName") ) { objectName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetSkin") ) { targetSkin=inValue.Cast<  ::h3d::scene::Skin >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"targetJoint") ) { targetJoint=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetObject") ) { targetObject=inValue.Cast<  ::h3d::scene::Object >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimatedObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("objectName",aa,e8,37,cb));
	outFields->push(HX_("targetObject",f0,b8,c3,d1));
	outFields->push(HX_("targetSkin",6e,b2,85,a6));
	outFields->push(HX_("targetJoint",39,10,80,e2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimatedObject_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AnimatedObject_obj,objectName),HX_("objectName",aa,e8,37,cb)},
	{::hx::fsObject /*  ::h3d::scene::Object */ ,(int)offsetof(AnimatedObject_obj,targetObject),HX_("targetObject",f0,b8,c3,d1)},
	{::hx::fsObject /*  ::h3d::scene::Skin */ ,(int)offsetof(AnimatedObject_obj,targetSkin),HX_("targetSkin",6e,b2,85,a6)},
	{::hx::fsInt,(int)offsetof(AnimatedObject_obj,targetJoint),HX_("targetJoint",39,10,80,e2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimatedObject_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimatedObject_obj_sMemberFields[] = {
	HX_("objectName",aa,e8,37,cb),
	HX_("targetObject",f0,b8,c3,d1),
	HX_("targetSkin",6e,b2,85,a6),
	HX_("targetJoint",39,10,80,e2),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class AnimatedObject_obj::__mClass;

void AnimatedObject_obj::__register()
{
	AnimatedObject_obj _hx_dummy;
	AnimatedObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim.AnimatedObject",ea,bd,8a,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimatedObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimatedObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimatedObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimatedObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
