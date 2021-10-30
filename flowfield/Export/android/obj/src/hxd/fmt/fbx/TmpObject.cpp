#include <hxcpp.h>

#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_TmpObject
#include <hxd/fmt/fbx/TmpObject.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d55f405f5b98301d_25_new,"hxd.fmt.fbx.TmpObject","new",0xeadad69b,"hxd.fmt.fbx.TmpObject.new","hxd/fmt/fbx/BaseLibrary.hx",25,0x92683fc4)
namespace hxd{
namespace fmt{
namespace fbx{

void TmpObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d55f405f5b98301d_25_new)
HXDLIN(  25)		this->childs = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic TmpObject_obj::__CreateEmpty() { return new TmpObject_obj; }

void *TmpObject_obj::_hx_vtable = 0;

Dynamic TmpObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TmpObject_obj > _hx_result = new TmpObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TmpObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5883ac13;
}


TmpObject_obj::TmpObject_obj()
{
}

void TmpObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmpObject);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(isJoint,"isJoint");
	HX_MARK_MEMBER_NAME(isMesh,"isMesh");
	HX_MARK_MEMBER_NAME(childs,"childs");
	HX_MARK_MEMBER_NAME(obj,"obj");
	HX_MARK_MEMBER_NAME(joint,"joint");
	HX_MARK_MEMBER_NAME(skin,"skin");
	HX_MARK_END_CLASS();
}

void TmpObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(isJoint,"isJoint");
	HX_VISIT_MEMBER_NAME(isMesh,"isMesh");
	HX_VISIT_MEMBER_NAME(childs,"childs");
	HX_VISIT_MEMBER_NAME(obj,"obj");
	HX_VISIT_MEMBER_NAME(joint,"joint");
	HX_VISIT_MEMBER_NAME(skin,"skin");
}

::hx::Val TmpObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"skin") ) { return ::hx::Val( skin ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		if (HX_FIELD_EQ(inName,"joint") ) { return ::hx::Val( joint ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"isMesh") ) { return ::hx::Val( isMesh ); }
		if (HX_FIELD_EQ(inName,"childs") ) { return ::hx::Val( childs ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isJoint") ) { return ::hx::Val( isJoint ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TmpObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { obj=inValue.Cast<  ::h3d::scene::Object >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"skin") ) { skin=inValue.Cast<  ::hxd::fmt::fbx::TmpObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joint") ) { joint=inValue.Cast<  ::h3d::anim::Joint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::hxd::fmt::fbx::TmpObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isMesh") ) { isMesh=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childs") ) { childs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isJoint") ) { isJoint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmpObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("model",a9,23,58,0c));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("isJoint",00,dd,ad,ee));
	outFields->push(HX_("isMesh",f7,0e,c0,65));
	outFields->push(HX_("childs",57,bf,ba,bc));
	outFields->push(HX_("obj",f7,8f,54,00));
	outFields->push(HX_("joint",4a,39,28,52));
	outFields->push(HX_("skin",7d,16,55,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TmpObject_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TmpObject_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TmpObject_obj,model),HX_("model",a9,23,58,0c)},
	{::hx::fsObject /*  ::hxd::fmt::fbx::TmpObject */ ,(int)offsetof(TmpObject_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsBool,(int)offsetof(TmpObject_obj,isJoint),HX_("isJoint",00,dd,ad,ee)},
	{::hx::fsBool,(int)offsetof(TmpObject_obj,isMesh),HX_("isMesh",f7,0e,c0,65)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TmpObject_obj,childs),HX_("childs",57,bf,ba,bc)},
	{::hx::fsObject /*  ::h3d::scene::Object */ ,(int)offsetof(TmpObject_obj,obj),HX_("obj",f7,8f,54,00)},
	{::hx::fsObject /*  ::h3d::anim::Joint */ ,(int)offsetof(TmpObject_obj,joint),HX_("joint",4a,39,28,52)},
	{::hx::fsObject /*  ::hxd::fmt::fbx::TmpObject */ ,(int)offsetof(TmpObject_obj,skin),HX_("skin",7d,16,55,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TmpObject_obj_sStaticStorageInfo = 0;
#endif

static ::String TmpObject_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("model",a9,23,58,0c),
	HX_("parent",2a,05,7e,ed),
	HX_("isJoint",00,dd,ad,ee),
	HX_("isMesh",f7,0e,c0,65),
	HX_("childs",57,bf,ba,bc),
	HX_("obj",f7,8f,54,00),
	HX_("joint",4a,39,28,52),
	HX_("skin",7d,16,55,4c),
	::String(null()) };

::hx::Class TmpObject_obj::__mClass;

void TmpObject_obj::__register()
{
	TmpObject_obj _hx_dummy;
	TmpObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.fbx.TmpObject",29,ed,36,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TmpObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TmpObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TmpObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TmpObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
