#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_Model
#include <hxd/fmt/hmd/Model.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Position
#include <hxd/fmt/hmd/Position.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Skin
#include <hxd/fmt/hmd/Skin.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f241215edd4578cd_171_new,"hxd.fmt.hmd.Model","new",0x54947711,"hxd.fmt.hmd.Model.new","hxd/fmt/hmd/Data.hx",171,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void Model_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f241215edd4578cd_171_new)
            	}

Dynamic Model_obj::__CreateEmpty() { return new Model_obj; }

void *Model_obj::_hx_vtable = 0;

Dynamic Model_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Model_obj > _hx_result = new Model_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Model_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x22a532a3;
}


Model_obj::Model_obj()
{
}

void Model_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Model);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(props,"props");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(follow,"follow");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(materials,"materials");
	HX_MARK_MEMBER_NAME(skin,"skin");
	HX_MARK_END_CLASS();
}

void Model_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(props,"props");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(follow,"follow");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(materials,"materials");
	HX_VISIT_MEMBER_NAME(skin,"skin");
}

::hx::Val Model_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"skin") ) { return ::hx::Val( skin ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { return ::hx::Val( props ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"follow") ) { return ::hx::Val( follow ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"geometry") ) { return ::hx::Val( geometry ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { return ::hx::Val( materials ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Model_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skin") ) { skin=inValue.Cast<  ::hxd::fmt::hmd::Skin >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { props=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"follow") ) { follow=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast<  ::hxd::fmt::hmd::Position >(); return inValue; }
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { materials=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Model_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("props",70,e7,8f,c8));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("follow",71,91,96,f9));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("geometry",b2,02,a9,d2));
	outFields->push(HX_("materials",ec,b5,0b,a0));
	outFields->push(HX_("skin",7d,16,55,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Model_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Model_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Model_obj,props),HX_("props",70,e7,8f,c8)},
	{::hx::fsInt,(int)offsetof(Model_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsString,(int)offsetof(Model_obj,follow),HX_("follow",71,91,96,f9)},
	{::hx::fsObject /*  ::hxd::fmt::hmd::Position */ ,(int)offsetof(Model_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsInt,(int)offsetof(Model_obj,geometry),HX_("geometry",b2,02,a9,d2)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Model_obj,materials),HX_("materials",ec,b5,0b,a0)},
	{::hx::fsObject /*  ::hxd::fmt::hmd::Skin */ ,(int)offsetof(Model_obj,skin),HX_("skin",7d,16,55,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Model_obj_sStaticStorageInfo = 0;
#endif

static ::String Model_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("props",70,e7,8f,c8),
	HX_("parent",2a,05,7e,ed),
	HX_("follow",71,91,96,f9),
	HX_("position",a9,a0,fa,ca),
	HX_("geometry",b2,02,a9,d2),
	HX_("materials",ec,b5,0b,a0),
	HX_("skin",7d,16,55,4c),
	::String(null()) };

::hx::Class Model_obj::__mClass;

void Model_obj::__register()
{
	Model_obj _hx_dummy;
	Model_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.Model",9f,9a,4d,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Model_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Model_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Model_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Model_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
