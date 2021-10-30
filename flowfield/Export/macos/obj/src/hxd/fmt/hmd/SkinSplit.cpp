#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_SkinSplit
#include <hxd/fmt/hmd/SkinSplit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b47d39a925e15d6b_149_new,"hxd.fmt.hmd.SkinSplit","new",0x5a1fef85,"hxd.fmt.hmd.SkinSplit.new","hxd/fmt/hmd/Data.hx",149,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void SkinSplit_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b47d39a925e15d6b_149_new)
            	}

Dynamic SkinSplit_obj::__CreateEmpty() { return new SkinSplit_obj; }

void *SkinSplit_obj::_hx_vtable = 0;

Dynamic SkinSplit_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SkinSplit_obj > _hx_result = new SkinSplit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SkinSplit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17ccb317;
}


SkinSplit_obj::SkinSplit_obj()
{
}

void SkinSplit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinSplit);
	HX_MARK_MEMBER_NAME(materialIndex,"materialIndex");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_END_CLASS();
}

void SkinSplit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(materialIndex,"materialIndex");
	HX_VISIT_MEMBER_NAME(joints,"joints");
}

::hx::Val SkinSplit_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { return ::hx::Val( joints ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"materialIndex") ) { return ::hx::Val( materialIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SkinSplit_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"materialIndex") ) { materialIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkinSplit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("materialIndex",eb,70,48,85));
	outFields->push(HX_("joints",e9,e7,09,91));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SkinSplit_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SkinSplit_obj,materialIndex),HX_("materialIndex",eb,70,48,85)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(SkinSplit_obj,joints),HX_("joints",e9,e7,09,91)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SkinSplit_obj_sStaticStorageInfo = 0;
#endif

static ::String SkinSplit_obj_sMemberFields[] = {
	HX_("materialIndex",eb,70,48,85),
	HX_("joints",e9,e7,09,91),
	::String(null()) };

::hx::Class SkinSplit_obj::__mClass;

void SkinSplit_obj::__register()
{
	SkinSplit_obj _hx_dummy;
	SkinSplit_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.SkinSplit",13,c9,2e,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SkinSplit_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SkinSplit_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SkinSplit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SkinSplit_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
