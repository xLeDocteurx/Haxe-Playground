#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_AnimationEvent
#include <hxd/fmt/hmd/AnimationEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa5a68f3382e5cb0_207_new,"hxd.fmt.hmd.AnimationEvent","new",0x3f0855b2,"hxd.fmt.hmd.AnimationEvent.new","hxd/fmt/hmd/Data.hx",207,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void AnimationEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aa5a68f3382e5cb0_207_new)
            	}

Dynamic AnimationEvent_obj::__CreateEmpty() { return new AnimationEvent_obj; }

void *AnimationEvent_obj::_hx_vtable = 0;

Dynamic AnimationEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationEvent_obj > _hx_result = new AnimationEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimationEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ec43650;
}


AnimationEvent_obj::AnimationEvent_obj()
{
}

void AnimationEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationEvent);
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void AnimationEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val AnimationEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimationEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimationEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AnimationEvent_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsString,(int)offsetof(AnimationEvent_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimationEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationEvent_obj_sMemberFields[] = {
	HX_("frame",2d,78,83,06),
	HX_("data",2a,56,63,42),
	::String(null()) };

::hx::Class AnimationEvent_obj::__mClass;

void AnimationEvent_obj::__register()
{
	AnimationEvent_obj _hx_dummy;
	AnimationEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.AnimationEvent",c0,54,23,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimationEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimationEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
