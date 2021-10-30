#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_OutPt
#include <hxd/clipper/_Clipper/OutPt.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a637ca8844ad1cd_264_new,"hxd.clipper._Clipper.OutPt","new",0xcd00279f,"hxd.clipper._Clipper.OutPt.new","hxd/clipper/Clipper.hx",264,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void OutPt_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5a637ca8844ad1cd_264_new)
            	}

Dynamic OutPt_obj::__CreateEmpty() { return new OutPt_obj; }

void *OutPt_obj::_hx_vtable = 0;

Dynamic OutPt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutPt_obj > _hx_result = new OutPt_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OutPt_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x53debe8b;
}


OutPt_obj::OutPt_obj()
{
}

void OutPt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OutPt);
	HX_MARK_MEMBER_NAME(idx,"idx");
	HX_MARK_MEMBER_NAME(pt,"pt");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_END_CLASS();
}

void OutPt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(idx,"idx");
	HX_VISIT_MEMBER_NAME(pt,"pt");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
}

::hx::Val OutPt_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { return ::hx::Val( pt ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"idx") ) { return ::hx::Val( idx ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"prev") ) { return ::hx::Val( prev ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OutPt_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { pt=inValue.Cast<  ::h2d::col::IPoint >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"idx") ) { idx=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxd::clipper::_Clipper::OutPt >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::hxd::clipper::_Clipper::OutPt >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OutPt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("idx",3d,04,50,00));
	outFields->push(HX_("pt",04,62,00,00));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("prev",f3,be,5e,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OutPt_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OutPt_obj,idx),HX_("idx",3d,04,50,00)},
	{::hx::fsObject /*  ::h2d::col::IPoint */ ,(int)offsetof(OutPt_obj,pt),HX_("pt",04,62,00,00)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::OutPt */ ,(int)offsetof(OutPt_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::OutPt */ ,(int)offsetof(OutPt_obj,prev),HX_("prev",f3,be,5e,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OutPt_obj_sStaticStorageInfo = 0;
#endif

static ::String OutPt_obj_sMemberFields[] = {
	HX_("idx",3d,04,50,00),
	HX_("pt",04,62,00,00),
	HX_("next",f3,84,02,49),
	HX_("prev",f3,be,5e,4a),
	::String(null()) };

::hx::Class OutPt_obj::__mClass;

void OutPt_obj::__register()
{
	OutPt_obj _hx_dummy;
	OutPt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.OutPt",2d,6c,96,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OutPt_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OutPt_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutPt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutPt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
