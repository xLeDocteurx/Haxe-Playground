#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_Position
#include <hxd/fmt/hmd/Position.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_SkinJoint
#include <hxd/fmt/hmd/SkinJoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3850d6010f556a7_142_new,"hxd.fmt.hmd.SkinJoint","new",0x397935f5,"hxd.fmt.hmd.SkinJoint.new","hxd/fmt/hmd/Data.hx",142,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void SkinJoint_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f3850d6010f556a7_142_new)
            	}

Dynamic SkinJoint_obj::__CreateEmpty() { return new SkinJoint_obj; }

void *SkinJoint_obj::_hx_vtable = 0;

Dynamic SkinJoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SkinJoint_obj > _hx_result = new SkinJoint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SkinJoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x137feeeb;
}


SkinJoint_obj::SkinJoint_obj()
{
}

void SkinJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinJoint);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(props,"props");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(bind,"bind");
	HX_MARK_MEMBER_NAME(transpos,"transpos");
	HX_MARK_END_CLASS();
}

void SkinJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(props,"props");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(bind,"bind");
	HX_VISIT_MEMBER_NAME(transpos,"transpos");
}

::hx::Val SkinJoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { return ::hx::Val( props ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"transpos") ) { return ::hx::Val( transpos ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SkinJoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bind") ) { bind=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { props=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast<  ::hxd::fmt::hmd::Position >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transpos") ) { transpos=inValue.Cast<  ::hxd::fmt::hmd::Position >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkinJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("props",70,e7,8f,c8));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("bind",bd,f5,16,41));
	outFields->push(HX_("transpos",6c,4e,75,da));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SkinJoint_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SkinJoint_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SkinJoint_obj,props),HX_("props",70,e7,8f,c8)},
	{::hx::fsInt,(int)offsetof(SkinJoint_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /*  ::hxd::fmt::hmd::Position */ ,(int)offsetof(SkinJoint_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsInt,(int)offsetof(SkinJoint_obj,bind),HX_("bind",bd,f5,16,41)},
	{::hx::fsObject /*  ::hxd::fmt::hmd::Position */ ,(int)offsetof(SkinJoint_obj,transpos),HX_("transpos",6c,4e,75,da)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SkinJoint_obj_sStaticStorageInfo = 0;
#endif

static ::String SkinJoint_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("props",70,e7,8f,c8),
	HX_("parent",2a,05,7e,ed),
	HX_("position",a9,a0,fa,ca),
	HX_("bind",bd,f5,16,41),
	HX_("transpos",6c,4e,75,da),
	::String(null()) };

::hx::Class SkinJoint_obj::__mClass;

void SkinJoint_obj::__register()
{
	SkinJoint_obj _hx_dummy;
	SkinJoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.SkinJoint",83,17,e8,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SkinJoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SkinJoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SkinJoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SkinJoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
