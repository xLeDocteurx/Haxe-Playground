#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_fbx_DefaultMatrixes
#include <hxd/fmt/fbx/DefaultMatrixes.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx__BaseLibrary_AnimCurve
#include <hxd/fmt/fbx/_BaseLibrary/AnimCurve.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2f90ecb3cca9caab_39_new,"hxd.fmt.fbx._BaseLibrary.AnimCurve","new",0x467b721a,"hxd.fmt.fbx._BaseLibrary.AnimCurve.new","hxd/fmt/fbx/BaseLibrary.hx",39,0x92683fc4)
namespace hxd{
namespace fmt{
namespace fbx{
namespace _BaseLibrary{

void AnimCurve_obj::__construct( ::hxd::fmt::fbx::DefaultMatrixes def,::String object){
            	HX_STACKFRAME(&_hx_pos_2f90ecb3cca9caab_39_new)
HXLINE(  40)		this->def = def;
HXLINE(  41)		this->object = object;
            	}

Dynamic AnimCurve_obj::__CreateEmpty() { return new AnimCurve_obj; }

void *AnimCurve_obj::_hx_vtable = 0;

Dynamic AnimCurve_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimCurve_obj > _hx_result = new AnimCurve_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AnimCurve_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0fd82510;
}


::hx::ObjectPtr< AnimCurve_obj > AnimCurve_obj::__new( ::hxd::fmt::fbx::DefaultMatrixes def,::String object) {
	::hx::ObjectPtr< AnimCurve_obj > __this = new AnimCurve_obj();
	__this->__construct(def,object);
	return __this;
}

::hx::ObjectPtr< AnimCurve_obj > AnimCurve_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fmt::fbx::DefaultMatrixes def,::String object) {
	AnimCurve_obj *__this = (AnimCurve_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimCurve_obj), true, "hxd.fmt.fbx._BaseLibrary.AnimCurve"));
	*(void **)__this = AnimCurve_obj::_hx_vtable;
	__this->__construct(def,object);
	return __this;
}

AnimCurve_obj::AnimCurve_obj()
{
}

void AnimCurve_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimCurve);
	HX_MARK_MEMBER_NAME(def,"def");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(fov,"fov");
	HX_MARK_MEMBER_NAME(roll,"roll");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_END_CLASS();
}

void AnimCurve_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(def,"def");
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(fov,"fov");
	HX_VISIT_MEMBER_NAME(roll,"roll");
	HX_VISIT_MEMBER_NAME(uv,"uv");
}

::hx::Val AnimCurve_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return ::hx::Val( t ); }
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return ::hx::Val( uv ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"def") ) { return ::hx::Val( def ); }
		if (HX_FIELD_EQ(inName,"fov") ) { return ::hx::Val( fov ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"roll") ) { return ::hx::Val( roll ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return ::hx::Val( object ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimCurve_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"def") ) { def=inValue.Cast<  ::hxd::fmt::fbx::DefaultMatrixes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fov") ) { fov=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"roll") ) { roll=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimCurve_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("def",c5,39,4c,00));
	outFields->push(HX_("object",bf,7e,3f,15));
	outFields->push(HX_("t",74,00,00,00));
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("s",73,00,00,00));
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("fov",0d,c7,4d,00));
	outFields->push(HX_("roll",7d,eb,ae,4b));
	outFields->push(HX_("uv",61,66,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimCurve_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::fmt::fbx::DefaultMatrixes */ ,(int)offsetof(AnimCurve_obj,def),HX_("def",c5,39,4c,00)},
	{::hx::fsString,(int)offsetof(AnimCurve_obj,object),HX_("object",bf,7e,3f,15)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimCurve_obj,t),HX_("t",74,00,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimCurve_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimCurve_obj,s),HX_("s",73,00,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimCurve_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimCurve_obj,fov),HX_("fov",0d,c7,4d,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimCurve_obj,roll),HX_("roll",7d,eb,ae,4b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimCurve_obj,uv),HX_("uv",61,66,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimCurve_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimCurve_obj_sMemberFields[] = {
	HX_("def",c5,39,4c,00),
	HX_("object",bf,7e,3f,15),
	HX_("t",74,00,00,00),
	HX_("r",72,00,00,00),
	HX_("s",73,00,00,00),
	HX_("a",61,00,00,00),
	HX_("fov",0d,c7,4d,00),
	HX_("roll",7d,eb,ae,4b),
	HX_("uv",61,66,00,00),
	::String(null()) };

::hx::Class AnimCurve_obj::__mClass;

void AnimCurve_obj::__register()
{
	AnimCurve_obj _hx_dummy;
	AnimCurve_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.fbx._BaseLibrary.AnimCurve",28,1d,e6,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimCurve_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimCurve_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimCurve_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimCurve_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
} // end namespace _BaseLibrary
