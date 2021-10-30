#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper__Clipper_OutPt
#include <hxd/clipper/_Clipper/OutPt.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_OutRec
#include <hxd/clipper/_Clipper/OutRec.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_PolyNode
#include <hxd/clipper/_Clipper/PolyNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb8e823014ef8906_255_new,"hxd.clipper._Clipper.OutRec","new",0x40e8e379,"hxd.clipper._Clipper.OutRec.new","hxd/clipper/Clipper.hx",255,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void OutRec_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_eb8e823014ef8906_255_new)
            	}

Dynamic OutRec_obj::__CreateEmpty() { return new OutRec_obj; }

void *OutRec_obj::_hx_vtable = 0;

Dynamic OutRec_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutRec_obj > _hx_result = new OutRec_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OutRec_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f0972e9;
}


OutRec_obj::OutRec_obj()
{
}

void OutRec_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OutRec);
	HX_MARK_MEMBER_NAME(idx,"idx");
	HX_MARK_MEMBER_NAME(isHole,"isHole");
	HX_MARK_MEMBER_NAME(firstLeft,"firstLeft");
	HX_MARK_MEMBER_NAME(pts,"pts");
	HX_MARK_MEMBER_NAME(bottomPt,"bottomPt");
	HX_MARK_MEMBER_NAME(polyNode,"polyNode");
	HX_MARK_END_CLASS();
}

void OutRec_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(idx,"idx");
	HX_VISIT_MEMBER_NAME(isHole,"isHole");
	HX_VISIT_MEMBER_NAME(firstLeft,"firstLeft");
	HX_VISIT_MEMBER_NAME(pts,"pts");
	HX_VISIT_MEMBER_NAME(bottomPt,"bottomPt");
	HX_VISIT_MEMBER_NAME(polyNode,"polyNode");
}

::hx::Val OutRec_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"idx") ) { return ::hx::Val( idx ); }
		if (HX_FIELD_EQ(inName,"pts") ) { return ::hx::Val( pts ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isHole") ) { return ::hx::Val( isHole ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bottomPt") ) { return ::hx::Val( bottomPt ); }
		if (HX_FIELD_EQ(inName,"polyNode") ) { return ::hx::Val( polyNode ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstLeft") ) { return ::hx::Val( firstLeft ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OutRec_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"idx") ) { idx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pts") ) { pts=inValue.Cast<  ::hxd::clipper::_Clipper::OutPt >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isHole") ) { isHole=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bottomPt") ) { bottomPt=inValue.Cast<  ::hxd::clipper::_Clipper::OutPt >(); return inValue; }
		if (HX_FIELD_EQ(inName,"polyNode") ) { polyNode=inValue.Cast<  ::hxd::clipper::_Clipper::PolyNode >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstLeft") ) { firstLeft=inValue.Cast<  ::hxd::clipper::_Clipper::OutRec >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OutRec_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("idx",3d,04,50,00));
	outFields->push(HX_("isHole",4a,8e,79,62));
	outFields->push(HX_("firstLeft",57,84,7e,fe));
	outFields->push(HX_("pts",ef,61,55,00));
	outFields->push(HX_("bottomPt",cf,fd,b0,62));
	outFields->push(HX_("polyNode",6e,ca,ca,1b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OutRec_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OutRec_obj,idx),HX_("idx",3d,04,50,00)},
	{::hx::fsBool,(int)offsetof(OutRec_obj,isHole),HX_("isHole",4a,8e,79,62)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::OutRec */ ,(int)offsetof(OutRec_obj,firstLeft),HX_("firstLeft",57,84,7e,fe)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::OutPt */ ,(int)offsetof(OutRec_obj,pts),HX_("pts",ef,61,55,00)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::OutPt */ ,(int)offsetof(OutRec_obj,bottomPt),HX_("bottomPt",cf,fd,b0,62)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::PolyNode */ ,(int)offsetof(OutRec_obj,polyNode),HX_("polyNode",6e,ca,ca,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OutRec_obj_sStaticStorageInfo = 0;
#endif

static ::String OutRec_obj_sMemberFields[] = {
	HX_("idx",3d,04,50,00),
	HX_("isHole",4a,8e,79,62),
	HX_("firstLeft",57,84,7e,fe),
	HX_("pts",ef,61,55,00),
	HX_("bottomPt",cf,fd,b0,62),
	HX_("polyNode",6e,ca,ca,1b),
	::String(null()) };

::hx::Class OutRec_obj::__mClass;

void OutRec_obj::__register()
{
	OutRec_obj _hx_dummy;
	OutRec_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.OutRec",07,b3,09,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OutRec_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OutRec_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutRec_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutRec_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
