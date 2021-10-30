#include <hxcpp.h>

#ifndef INCLUDED_h3d_scene__Object_ObjectFlags_Impl_
#include <h3d/scene/_Object/ObjectFlags_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_17__new,"h3d.scene._Object.ObjectFlags_Impl_","_new",0x14ee4d2e,"h3d.scene._Object.ObjectFlags_Impl_._new","h3d/scene/Object.hx",17,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_20_toInt,"h3d.scene._Object.ObjectFlags_Impl_","toInt",0x539359c7,"h3d.scene._Object.ObjectFlags_Impl_.toInt","h3d/scene/Object.hx",20,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_21_has,"h3d.scene._Object.ObjectFlags_Impl_","has",0x3bd0c02d,"h3d.scene._Object.ObjectFlags_Impl_.has","h3d/scene/Object.hx",21,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_22_set,"h3d.scene._Object.ObjectFlags_Impl_","set",0x3bd91c75,"h3d.scene._Object.ObjectFlags_Impl_.set","h3d/scene/Object.hx",22,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_4_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",4,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_5_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",5,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_6_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",6,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_7_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",7,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_8_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",8,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_9_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",9,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_10_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",10,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_11_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",11,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_12_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",12,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_13_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",13,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_14_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",14,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_15_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",15,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_1efbe2094258b518_16_boot,"h3d.scene._Object.ObjectFlags_Impl_","boot",0x16eabbff,"h3d.scene._Object.ObjectFlags_Impl_.boot","h3d/scene/Object.hx",16,0x76367d66)
namespace h3d{
namespace scene{
namespace _Object{

void ObjectFlags_Impl__obj::__construct() { }

Dynamic ObjectFlags_Impl__obj::__CreateEmpty() { return new ObjectFlags_Impl__obj; }

void *ObjectFlags_Impl__obj::_hx_vtable = 0;

Dynamic ObjectFlags_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ObjectFlags_Impl__obj > _hx_result = new ObjectFlags_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ObjectFlags_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42e12e7d;
}

int ObjectFlags_Impl__obj::FPosChanged;

int ObjectFlags_Impl__obj::FVisible;

int ObjectFlags_Impl__obj::FCulled;

int ObjectFlags_Impl__obj::FFollowPositionOnly;

int ObjectFlags_Impl__obj::FLightCameraCenter;

int ObjectFlags_Impl__obj::FAllocated;

int ObjectFlags_Impl__obj::FAlwaysSync;

int ObjectFlags_Impl__obj::FInheritCulled;

int ObjectFlags_Impl__obj::FNoSerialize;

int ObjectFlags_Impl__obj::FIgnoreBounds;

int ObjectFlags_Impl__obj::FIgnoreCollide;

int ObjectFlags_Impl__obj::FIgnoreParentTransform;

int ObjectFlags_Impl__obj::FCullingColliderInherited;

int ObjectFlags_Impl__obj::_new(int value){
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_17__new)
HXDLIN(  17)		int this1 = value;
HXDLIN(  17)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ObjectFlags_Impl__obj,_new,return )

int ObjectFlags_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_20_toInt)
HXDLIN(  20)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ObjectFlags_Impl__obj,toInt,return )

bool ObjectFlags_Impl__obj::has(int this1,int f){
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_21_has)
HXDLIN(  21)		return ((this1 & f) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectFlags_Impl__obj,has,return )

bool ObjectFlags_Impl__obj::set(int this1,int f,bool b){
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_22_set)
HXLINE(  23)		if (b) {
HXLINE(  23)			this1 = (this1 | f);
            		}
            		else {
HXLINE(  23)			this1 = (this1 & ~(f));
            		}
HXLINE(  24)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectFlags_Impl__obj,set,return )


ObjectFlags_Impl__obj::ObjectFlags_Impl__obj()
{
}

bool ObjectFlags_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ObjectFlags_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ObjectFlags_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FPosChanged,HX_("FPosChanged",a6,6d,8a,16)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FVisible,HX_("FVisible",cc,d4,40,14)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FCulled,HX_("FCulled",77,db,5e,ce)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FFollowPositionOnly,HX_("FFollowPositionOnly",ac,cb,d9,20)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FLightCameraCenter,HX_("FLightCameraCenter",2a,c1,32,d4)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FAllocated,HX_("FAllocated",e1,39,bd,72)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FAlwaysSync,HX_("FAlwaysSync",b0,60,23,35)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FInheritCulled,HX_("FInheritCulled",c6,50,b2,43)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FNoSerialize,HX_("FNoSerialize",b9,de,2b,35)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FIgnoreBounds,HX_("FIgnoreBounds",8d,6a,82,3d)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FIgnoreCollide,HX_("FIgnoreCollide",66,60,46,8e)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FIgnoreParentTransform,HX_("FIgnoreParentTransform",ca,eb,90,d0)},
	{::hx::fsInt,(void *) &ObjectFlags_Impl__obj::FCullingColliderInherited,HX_("FCullingColliderInherited",1c,69,e2,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ObjectFlags_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FPosChanged,"FPosChanged");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FVisible,"FVisible");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FCulled,"FCulled");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FFollowPositionOnly,"FFollowPositionOnly");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FLightCameraCenter,"FLightCameraCenter");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FAllocated,"FAllocated");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FAlwaysSync,"FAlwaysSync");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FInheritCulled,"FInheritCulled");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FNoSerialize,"FNoSerialize");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FIgnoreBounds,"FIgnoreBounds");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FIgnoreCollide,"FIgnoreCollide");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FIgnoreParentTransform,"FIgnoreParentTransform");
	HX_MARK_MEMBER_NAME(ObjectFlags_Impl__obj::FCullingColliderInherited,"FCullingColliderInherited");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectFlags_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FPosChanged,"FPosChanged");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FVisible,"FVisible");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FCulled,"FCulled");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FFollowPositionOnly,"FFollowPositionOnly");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FLightCameraCenter,"FLightCameraCenter");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FAllocated,"FAllocated");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FAlwaysSync,"FAlwaysSync");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FInheritCulled,"FInheritCulled");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FNoSerialize,"FNoSerialize");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FIgnoreBounds,"FIgnoreBounds");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FIgnoreCollide,"FIgnoreCollide");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FIgnoreParentTransform,"FIgnoreParentTransform");
	HX_VISIT_MEMBER_NAME(ObjectFlags_Impl__obj::FCullingColliderInherited,"FCullingColliderInherited");
};

#endif

::hx::Class ObjectFlags_Impl__obj::__mClass;

static ::String ObjectFlags_Impl__obj_sStaticFields[] = {
	HX_("FPosChanged",a6,6d,8a,16),
	HX_("FVisible",cc,d4,40,14),
	HX_("FCulled",77,db,5e,ce),
	HX_("FFollowPositionOnly",ac,cb,d9,20),
	HX_("FLightCameraCenter",2a,c1,32,d4),
	HX_("FAllocated",e1,39,bd,72),
	HX_("FAlwaysSync",b0,60,23,35),
	HX_("FInheritCulled",c6,50,b2,43),
	HX_("FNoSerialize",b9,de,2b,35),
	HX_("FIgnoreBounds",8d,6a,82,3d),
	HX_("FIgnoreCollide",66,60,46,8e),
	HX_("FIgnoreParentTransform",ca,eb,90,d0),
	HX_("FCullingColliderInherited",1c,69,e2,c6),
	HX_("_new",61,15,1f,3f),
	HX_("toInt",34,be,11,14),
	HX_("has",5a,3f,4f,00),
	HX_("set",a2,9b,57,00),
	::String(null())
};

void ObjectFlags_Impl__obj::__register()
{
	ObjectFlags_Impl__obj _hx_dummy;
	ObjectFlags_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene._Object.ObjectFlags_Impl_",c1,3b,8a,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ObjectFlags_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectFlags_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ObjectFlags_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ObjectFlags_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectFlags_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectFlags_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectFlags_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ObjectFlags_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_4_boot)
HXDLIN(   4)		FPosChanged = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_5_boot)
HXDLIN(   5)		FVisible = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_6_boot)
HXDLIN(   6)		FCulled = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_7_boot)
HXDLIN(   7)		FFollowPositionOnly = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_8_boot)
HXDLIN(   8)		FLightCameraCenter = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_9_boot)
HXDLIN(   9)		FAllocated = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_10_boot)
HXDLIN(  10)		FAlwaysSync = 64;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_11_boot)
HXDLIN(  11)		FInheritCulled = 128;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_12_boot)
HXDLIN(  12)		FNoSerialize = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_13_boot)
HXDLIN(  13)		FIgnoreBounds = 512;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_14_boot)
HXDLIN(  14)		FIgnoreCollide = 1024;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_15_boot)
HXDLIN(  15)		FIgnoreParentTransform = 2048;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1efbe2094258b518_16_boot)
HXDLIN(  16)		FCullingColliderInherited = 4096;
            	}
}

} // end namespace h3d
} // end namespace scene
} // end namespace _Object
