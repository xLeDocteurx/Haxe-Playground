#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_IntersectNode
#include <hxd/clipper/_Clipper/IntersectNode.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_TEdge
#include <hxd/clipper/_Clipper/TEdge.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a0c06d6562af23d2_228_new,"hxd.clipper._Clipper.IntersectNode","new",0x6f0d5a6e,"hxd.clipper._Clipper.IntersectNode.new","hxd/clipper/Clipper.hx",228,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void IntersectNode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a0c06d6562af23d2_228_new)
            	}

Dynamic IntersectNode_obj::__CreateEmpty() { return new IntersectNode_obj; }

void *IntersectNode_obj::_hx_vtable = 0;

Dynamic IntersectNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IntersectNode_obj > _hx_result = new IntersectNode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IntersectNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x75af2bda;
}


IntersectNode_obj::IntersectNode_obj()
{
}

void IntersectNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntersectNode);
	HX_MARK_MEMBER_NAME(edge1,"edge1");
	HX_MARK_MEMBER_NAME(edge2,"edge2");
	HX_MARK_MEMBER_NAME(pt,"pt");
	HX_MARK_END_CLASS();
}

void IntersectNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(edge1,"edge1");
	HX_VISIT_MEMBER_NAME(edge2,"edge2");
	HX_VISIT_MEMBER_NAME(pt,"pt");
}

::hx::Val IntersectNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { return ::hx::Val( pt ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"edge1") ) { return ::hx::Val( edge1 ); }
		if (HX_FIELD_EQ(inName,"edge2") ) { return ::hx::Val( edge2 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IntersectNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { pt=inValue.Cast<  ::h2d::col::IPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"edge1") ) { edge1=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"edge2") ) { edge2=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntersectNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("edge1",54,6d,e0,69));
	outFields->push(HX_("edge2",55,6d,e0,69));
	outFields->push(HX_("pt",04,62,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IntersectNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(IntersectNode_obj,edge1),HX_("edge1",54,6d,e0,69)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(IntersectNode_obj,edge2),HX_("edge2",55,6d,e0,69)},
	{::hx::fsObject /*  ::h2d::col::IPoint */ ,(int)offsetof(IntersectNode_obj,pt),HX_("pt",04,62,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IntersectNode_obj_sStaticStorageInfo = 0;
#endif

static ::String IntersectNode_obj_sMemberFields[] = {
	HX_("edge1",54,6d,e0,69),
	HX_("edge2",55,6d,e0,69),
	HX_("pt",04,62,00,00),
	::String(null()) };

::hx::Class IntersectNode_obj::__mClass;

void IntersectNode_obj::__register()
{
	IntersectNode_obj _hx_dummy;
	IntersectNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.IntersectNode",7c,4b,20,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IntersectNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IntersectNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntersectNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntersectNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
