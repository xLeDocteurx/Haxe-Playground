#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationFlag
#include <hxd/fmt/hmd/AnimationFlag.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_AnimationObject
#include <hxd/fmt/hmd/AnimationObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_673d33affb70065c_190_new,"hxd.fmt.hmd.AnimationObject","new",0xefbec4cb,"hxd.fmt.hmd.AnimationObject.new","hxd/fmt/hmd/Data.hx",190,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_673d33affb70065c_192_getStride,"hxd.fmt.hmd.AnimationObject","getStride",0xbf193ffa,"hxd.fmt.hmd.AnimationObject.getStride","hxd/fmt/hmd/Data.hx",192,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void AnimationObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_673d33affb70065c_190_new)
            	}

Dynamic AnimationObject_obj::__CreateEmpty() { return new AnimationObject_obj; }

void *AnimationObject_obj::_hx_vtable = 0;

Dynamic AnimationObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationObject_obj > _hx_result = new AnimationObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimationObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5aff7989;
}

int AnimationObject_obj::getStride(){
            	HX_STACKFRAME(&_hx_pos_673d33affb70065c_192_getStride)
HXLINE( 193)		int stride = 0;
HXLINE( 194)		int this1 = this->flags;
HXDLIN( 194)		if (((this1 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasPosition_dyn()))) != 0)) {
HXLINE( 194)			stride = (stride + 3);
            		}
HXLINE( 195)		int this2 = this->flags;
HXDLIN( 195)		if (((this2 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasRotation_dyn()))) != 0)) {
HXLINE( 195)			stride = (stride + 3);
            		}
HXLINE( 196)		int this3 = this->flags;
HXDLIN( 196)		if (((this3 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasScale_dyn()))) != 0)) {
HXLINE( 196)			stride = (stride + 3);
            		}
HXLINE( 197)		int this4 = this->flags;
HXDLIN( 197)		if (((this4 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasUV_dyn()))) != 0)) {
HXLINE( 197)			stride = (stride + 2);
            		}
HXLINE( 198)		int this5 = this->flags;
HXDLIN( 198)		if (((this5 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasAlpha_dyn()))) != 0)) {
HXLINE( 198)			stride = (stride + 1);
            		}
HXLINE( 199)		int this6 = this->flags;
HXDLIN( 199)		if (((this6 & (1 << _hx_getEnumValueIndex(::hxd::fmt::hmd::AnimationFlag_obj::HasProps_dyn()))) != 0)) {
HXLINE( 199)			stride = (stride + this->props->length);
            		}
HXLINE( 200)		return stride;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationObject_obj,getStride,return )


::hx::ObjectPtr< AnimationObject_obj > AnimationObject_obj::__new() {
	::hx::ObjectPtr< AnimationObject_obj > __this = new AnimationObject_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AnimationObject_obj > AnimationObject_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AnimationObject_obj *__this = (AnimationObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimationObject_obj), true, "hxd.fmt.hmd.AnimationObject"));
	*(void **)__this = AnimationObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimationObject_obj::AnimationObject_obj()
{
}

void AnimationObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationObject);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(props,"props");
	HX_MARK_END_CLASS();
}

void AnimationObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(props,"props");
}

::hx::Val AnimationObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		if (HX_FIELD_EQ(inName,"props") ) { return ::hx::Val( props ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getStride") ) { return ::hx::Val( getStride_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimationObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"props") ) { props=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("props",70,e7,8f,c8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimationObject_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AnimationObject_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(AnimationObject_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(AnimationObject_obj,props),HX_("props",70,e7,8f,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimationObject_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationObject_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("flags",47,2b,8c,02),
	HX_("props",70,e7,8f,c8),
	HX_("getStride",4f,a9,86,8d),
	::String(null()) };

::hx::Class AnimationObject_obj::__mClass;

void AnimationObject_obj::__register()
{
	AnimationObject_obj _hx_dummy;
	AnimationObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.AnimationObject",59,03,9c,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimationObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimationObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
