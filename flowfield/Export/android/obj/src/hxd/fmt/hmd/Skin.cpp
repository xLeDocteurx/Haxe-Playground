#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Skin
#include <hxd/fmt/hmd/Skin.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_SkinJoint
#include <hxd/fmt/hmd/SkinJoint.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_SkinSplit
#include <hxd/fmt/hmd/SkinSplit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d1693ea01e926e67_158_new,"hxd.fmt.hmd.Skin","new",0x2f5d00b9,"hxd.fmt.hmd.Skin.new","hxd/fmt/hmd/Data.hx",158,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void Skin_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d1693ea01e926e67_158_new)
            	}

Dynamic Skin_obj::__CreateEmpty() { return new Skin_obj; }

void *Skin_obj::_hx_vtable = 0;

Dynamic Skin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Skin_obj > _hx_result = new Skin_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Skin_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x130884c3;
}


Skin_obj::Skin_obj()
{
}

void Skin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Skin);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(props,"props");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(split,"split");
	HX_MARK_END_CLASS();
}

void Skin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(props,"props");
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(split,"split");
}

::hx::Val Skin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { return ::hx::Val( props ); }
		if (HX_FIELD_EQ(inName,"split") ) { return ::hx::Val( split ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { return ::hx::Val( joints ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Skin_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { props=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"split") ) { split=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Skin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("props",70,e7,8f,c8));
	outFields->push(HX_("joints",e9,e7,09,91));
	outFields->push(HX_("split",da,ea,6e,81));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Skin_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Skin_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,props),HX_("props",70,e7,8f,c8)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,joints),HX_("joints",e9,e7,09,91)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Skin_obj,split),HX_("split",da,ea,6e,81)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Skin_obj_sStaticStorageInfo = 0;
#endif

static ::String Skin_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("props",70,e7,8f,c8),
	HX_("joints",e9,e7,09,91),
	HX_("split",da,ea,6e,81),
	::String(null()) };

::hx::Class Skin_obj::__mClass;

void Skin_obj::__register()
{
	Skin_obj _hx_dummy;
	Skin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.Skin",47,30,56,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Skin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Skin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Skin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Skin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
