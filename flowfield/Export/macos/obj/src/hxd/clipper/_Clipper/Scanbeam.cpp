#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper__Clipper_Scanbeam
#include <hxd/clipper/_Clipper/Scanbeam.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c68ff28cf4567391_244_new,"hxd.clipper._Clipper.Scanbeam","new",0x0fbd67c3,"hxd.clipper._Clipper.Scanbeam.new","hxd/clipper/Clipper.hx",244,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void Scanbeam_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c68ff28cf4567391_244_new)
            	}

Dynamic Scanbeam_obj::__CreateEmpty() { return new Scanbeam_obj; }

void *Scanbeam_obj::_hx_vtable = 0;

Dynamic Scanbeam_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scanbeam_obj > _hx_result = new Scanbeam_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Scanbeam_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7738c6b3;
}


Scanbeam_obj::Scanbeam_obj()
{
}

void Scanbeam_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scanbeam);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void Scanbeam_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val Scanbeam_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Scanbeam_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxd::clipper::_Clipper::Scanbeam >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scanbeam_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Scanbeam_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Scanbeam_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::Scanbeam */ ,(int)offsetof(Scanbeam_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Scanbeam_obj_sStaticStorageInfo = 0;
#endif

static ::String Scanbeam_obj_sMemberFields[] = {
	HX_("y",79,00,00,00),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class Scanbeam_obj::__mClass;

void Scanbeam_obj::__register()
{
	Scanbeam_obj _hx_dummy;
	Scanbeam_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.Scanbeam",51,ca,df,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Scanbeam_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Scanbeam_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scanbeam_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scanbeam_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
