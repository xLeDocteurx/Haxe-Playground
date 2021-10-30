#include <hxcpp.h>

#ifndef INCLUDED_hxd_earcut_EarNode
#include <hxd/earcut/EarNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c6d2d050dc4fb801_14_new,"hxd.earcut.EarNode","new",0xc3f36ea2,"hxd.earcut.EarNode.new","hxd/earcut/Earcut.hx",14,0xef7e636a)
namespace hxd{
namespace earcut{

void EarNode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c6d2d050dc4fb801_14_new)
            	}

Dynamic EarNode_obj::__CreateEmpty() { return new EarNode_obj; }

void *EarNode_obj::_hx_vtable = 0;

Dynamic EarNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EarNode_obj > _hx_result = new EarNode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EarNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5175e0d8;
}


EarNode_obj::EarNode_obj()
{
}

void EarNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EarNode);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(nextZ,"nextZ");
	HX_MARK_MEMBER_NAME(prevZ,"prevZ");
	HX_MARK_MEMBER_NAME(allocNext,"allocNext");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(steiner,"steiner");
	HX_MARK_END_CLASS();
}

void EarNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(nextZ,"nextZ");
	HX_VISIT_MEMBER_NAME(prevZ,"prevZ");
	HX_VISIT_MEMBER_NAME(allocNext,"allocNext");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(steiner,"steiner");
}

::hx::Val EarNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"prev") ) { return ::hx::Val( prev ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nextZ") ) { return ::hx::Val( nextZ ); }
		if (HX_FIELD_EQ(inName,"prevZ") ) { return ::hx::Val( prevZ ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"steiner") ) { return ::hx::Val( steiner ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocNext") ) { return ::hx::Val( allocNext ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EarNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxd::earcut::EarNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::hxd::earcut::EarNode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nextZ") ) { nextZ=inValue.Cast<  ::hxd::earcut::EarNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevZ") ) { prevZ=inValue.Cast<  ::hxd::earcut::EarNode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"steiner") ) { steiner=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocNext") ) { allocNext=inValue.Cast<  ::hxd::earcut::EarNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EarNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("prev",f3,be,5e,4a));
	outFields->push(HX_("nextZ",07,d0,31,99));
	outFields->push(HX_("prevZ",07,56,88,c8));
	outFields->push(HX_("allocNext",08,34,f3,2f));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("steiner",36,02,be,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EarNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::earcut::EarNode */ ,(int)offsetof(EarNode_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsObject /*  ::hxd::earcut::EarNode */ ,(int)offsetof(EarNode_obj,prev),HX_("prev",f3,be,5e,4a)},
	{::hx::fsObject /*  ::hxd::earcut::EarNode */ ,(int)offsetof(EarNode_obj,nextZ),HX_("nextZ",07,d0,31,99)},
	{::hx::fsObject /*  ::hxd::earcut::EarNode */ ,(int)offsetof(EarNode_obj,prevZ),HX_("prevZ",07,56,88,c8)},
	{::hx::fsObject /*  ::hxd::earcut::EarNode */ ,(int)offsetof(EarNode_obj,allocNext),HX_("allocNext",08,34,f3,2f)},
	{::hx::fsFloat,(int)offsetof(EarNode_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(EarNode_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(EarNode_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsInt,(int)offsetof(EarNode_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsBool,(int)offsetof(EarNode_obj,steiner),HX_("steiner",36,02,be,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EarNode_obj_sStaticStorageInfo = 0;
#endif

static ::String EarNode_obj_sMemberFields[] = {
	HX_("next",f3,84,02,49),
	HX_("prev",f3,be,5e,4a),
	HX_("nextZ",07,d0,31,99),
	HX_("prevZ",07,56,88,c8),
	HX_("allocNext",08,34,f3,2f),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("i",69,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("steiner",36,02,be,7c),
	::String(null()) };

::hx::Class EarNode_obj::__mClass;

void EarNode_obj::__register()
{
	EarNode_obj _hx_dummy;
	EarNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.earcut.EarNode",b0,35,73,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EarNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EarNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EarNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EarNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace earcut
