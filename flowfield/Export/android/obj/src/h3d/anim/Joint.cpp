#include <hxcpp.h>

#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_anim_Joint
#include <h3d/anim/Joint.h>
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_519565266e5acf5e_23_new,"h3d.anim.Joint","new",0xfc9c7c14,"h3d.anim.Joint.new","h3d/anim/Skin.hx",23,0xee0056d9)
namespace h3d{
namespace anim{

void Joint_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_519565266e5acf5e_23_new)
HXLINE(  24)		this->bindIndex = -1;
HXLINE(  25)		this->splitIndex = -1;
HXLINE(  26)		this->subs = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic Joint_obj::__CreateEmpty() { return new Joint_obj; }

void *Joint_obj::_hx_vtable = 0;

Dynamic Joint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Joint_obj > _hx_result = new Joint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Joint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03ed5da0;
}


Joint_obj::Joint_obj()
{
}

void Joint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joint);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(bindIndex,"bindIndex");
	HX_MARK_MEMBER_NAME(splitIndex,"splitIndex");
	HX_MARK_MEMBER_NAME(defMat,"defMat");
	HX_MARK_MEMBER_NAME(transPos,"transPos");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(subs,"subs");
	HX_MARK_MEMBER_NAME(offsets,"offsets");
	HX_MARK_MEMBER_NAME(offsetRay,"offsetRay");
	HX_MARK_MEMBER_NAME(retargetAnim,"retargetAnim");
	HX_MARK_END_CLASS();
}

void Joint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(bindIndex,"bindIndex");
	HX_VISIT_MEMBER_NAME(splitIndex,"splitIndex");
	HX_VISIT_MEMBER_NAME(defMat,"defMat");
	HX_VISIT_MEMBER_NAME(transPos,"transPos");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(subs,"subs");
	HX_VISIT_MEMBER_NAME(offsets,"offsets");
	HX_VISIT_MEMBER_NAME(offsetRay,"offsetRay");
	HX_VISIT_MEMBER_NAME(retargetAnim,"retargetAnim");
}

::hx::Val Joint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"subs") ) { return ::hx::Val( subs ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"defMat") ) { return ::hx::Val( defMat ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsets") ) { return ::hx::Val( offsets ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"transPos") ) { return ::hx::Val( transPos ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bindIndex") ) { return ::hx::Val( bindIndex ); }
		if (HX_FIELD_EQ(inName,"offsetRay") ) { return ::hx::Val( offsetRay ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"splitIndex") ) { return ::hx::Val( splitIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"retargetAnim") ) { return ::hx::Val( retargetAnim ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Joint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subs") ) { subs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"defMat") ) { defMat=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::h3d::anim::Joint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsets") ) { offsets=inValue.Cast<  ::h3d::col::Bounds >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"transPos") ) { transPos=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bindIndex") ) { bindIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetRay") ) { offsetRay=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"splitIndex") ) { splitIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"retargetAnim") ) { retargetAnim=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Joint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("bindIndex",15,28,46,61));
	outFields->push(HX_("splitIndex",d8,89,4f,8d));
	outFields->push(HX_("defMat",db,31,cf,66));
	outFields->push(HX_("transPos",4c,06,5d,da));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("subs",f3,a6,5c,4c));
	outFields->push(HX_("offsets",80,09,65,d7));
	outFields->push(HX_("offsetRay",17,b4,c1,41));
	outFields->push(HX_("retargetAnim",75,43,a1,b9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Joint_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Joint_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsString,(int)offsetof(Joint_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Joint_obj,bindIndex),HX_("bindIndex",15,28,46,61)},
	{::hx::fsInt,(int)offsetof(Joint_obj,splitIndex),HX_("splitIndex",d8,89,4f,8d)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Joint_obj,defMat),HX_("defMat",db,31,cf,66)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Joint_obj,transPos),HX_("transPos",4c,06,5d,da)},
	{::hx::fsObject /*  ::h3d::anim::Joint */ ,(int)offsetof(Joint_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Joint_obj,subs),HX_("subs",f3,a6,5c,4c)},
	{::hx::fsObject /*  ::h3d::col::Bounds */ ,(int)offsetof(Joint_obj,offsets),HX_("offsets",80,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Joint_obj,offsetRay),HX_("offsetRay",17,b4,c1,41)},
	{::hx::fsBool,(int)offsetof(Joint_obj,retargetAnim),HX_("retargetAnim",75,43,a1,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Joint_obj_sStaticStorageInfo = 0;
#endif

static ::String Joint_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("name",4b,72,ff,48),
	HX_("bindIndex",15,28,46,61),
	HX_("splitIndex",d8,89,4f,8d),
	HX_("defMat",db,31,cf,66),
	HX_("transPos",4c,06,5d,da),
	HX_("parent",2a,05,7e,ed),
	HX_("subs",f3,a6,5c,4c),
	HX_("offsets",80,09,65,d7),
	HX_("offsetRay",17,b4,c1,41),
	HX_("retargetAnim",75,43,a1,b9),
	::String(null()) };

::hx::Class Joint_obj::__mClass;

void Joint_obj::__register()
{
	Joint_obj _hx_dummy;
	Joint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.anim.Joint",22,22,88,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Joint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Joint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Joint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Joint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace anim
