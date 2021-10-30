#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_Animation
#include <hxd/fmt/hmd/Animation.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationEvent
#include <hxd/fmt/hmd/AnimationEvent.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationObject
#include <hxd/fmt/hmd/AnimationObject.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b79802d9ff193469_221_new,"hxd.fmt.hmd.Animation","new",0x5a84beec,"hxd.fmt.hmd.Animation.new","hxd/fmt/hmd/Data.hx",221,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void Animation_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b79802d9ff193469_221_new)
            	}

Dynamic Animation_obj::__CreateEmpty() { return new Animation_obj; }

void *Animation_obj::_hx_vtable = 0;

Dynamic Animation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Animation_obj > _hx_result = new Animation_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Animation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b3bcb2a;
}


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(props,"props");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(sampling,"sampling");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(dataPosition,"dataPosition");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(props,"props");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(sampling,"sampling");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(dataPosition,"dataPosition");
}

::hx::Val Animation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"loop") ) { return ::hx::Val( loop ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { return ::hx::Val( props ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"events") ) { return ::hx::Val( events ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return ::hx::Val( objects ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sampling") ) { return ::hx::Val( sampling ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataPosition") ) { return ::hx::Val( dataPosition ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Animation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { props=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sampling") ) { sampling=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataPosition") ) { dataPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("props",70,e7,8f,c8));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("sampling",e7,a7,c5,cc));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("loop",64,a6,b7,47));
	outFields->push(HX_("objects",d4,68,4f,82));
	outFields->push(HX_("events",19,4f,6a,96));
	outFields->push(HX_("dataPosition",f3,ec,f0,36));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Animation_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Animation_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Animation_obj,props),HX_("props",70,e7,8f,c8)},
	{::hx::fsInt,(int)offsetof(Animation_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsFloat,(int)offsetof(Animation_obj,sampling),HX_("sampling",e7,a7,c5,cc)},
	{::hx::fsFloat,(int)offsetof(Animation_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsBool,(int)offsetof(Animation_obj,loop),HX_("loop",64,a6,b7,47)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Animation_obj,objects),HX_("objects",d4,68,4f,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Animation_obj,events),HX_("events",19,4f,6a,96)},
	{::hx::fsInt,(int)offsetof(Animation_obj,dataPosition),HX_("dataPosition",f3,ec,f0,36)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Animation_obj_sStaticStorageInfo = 0;
#endif

static ::String Animation_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("props",70,e7,8f,c8),
	HX_("frames",a6,af,85,ac),
	HX_("sampling",e7,a7,c5,cc),
	HX_("speed",87,97,69,81),
	HX_("loop",64,a6,b7,47),
	HX_("objects",d4,68,4f,82),
	HX_("events",19,4f,6a,96),
	HX_("dataPosition",f3,ec,f0,36),
	::String(null()) };

::hx::Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	Animation_obj _hx_dummy;
	Animation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.Animation",fa,18,b0,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Animation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Animation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Animation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Animation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
