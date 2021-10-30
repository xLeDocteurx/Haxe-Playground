#include <hxcpp.h>

#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_Join
#include <hxd/clipper/_Clipper/Join.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_OutPt
#include <hxd/clipper/_Clipper/OutPt.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9efed363e261ca83_272_new,"hxd.clipper._Clipper.Join","new",0x019dfac1,"hxd.clipper._Clipper.Join.new","hxd/clipper/Clipper.hx",272,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void Join_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9efed363e261ca83_272_new)
            	}

Dynamic Join_obj::__CreateEmpty() { return new Join_obj; }

void *Join_obj::_hx_vtable = 0;

Dynamic Join_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Join_obj > _hx_result = new Join_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Join_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x468629b1;
}


Join_obj::Join_obj()
{
}

void Join_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Join);
	HX_MARK_MEMBER_NAME(outPt1,"outPt1");
	HX_MARK_MEMBER_NAME(outPt2,"outPt2");
	HX_MARK_MEMBER_NAME(offPt,"offPt");
	HX_MARK_END_CLASS();
}

void Join_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outPt1,"outPt1");
	HX_VISIT_MEMBER_NAME(outPt2,"outPt2");
	HX_VISIT_MEMBER_NAME(offPt,"offPt");
}

::hx::Val Join_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"offPt") ) { return ::hx::Val( offPt ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"outPt1") ) { return ::hx::Val( outPt1 ); }
		if (HX_FIELD_EQ(inName,"outPt2") ) { return ::hx::Val( outPt2 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Join_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"offPt") ) { offPt=inValue.Cast<  ::h2d::col::IPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"outPt1") ) { outPt1=inValue.Cast<  ::hxd::clipper::_Clipper::OutPt >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outPt2") ) { outPt2=inValue.Cast<  ::hxd::clipper::_Clipper::OutPt >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Join_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("outPt1",bf,c5,68,0c));
	outFields->push(HX_("outPt2",c0,c5,68,0c));
	outFields->push(HX_("offPt",53,d3,33,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Join_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::OutPt */ ,(int)offsetof(Join_obj,outPt1),HX_("outPt1",bf,c5,68,0c)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::OutPt */ ,(int)offsetof(Join_obj,outPt2),HX_("outPt2",c0,c5,68,0c)},
	{::hx::fsObject /*  ::h2d::col::IPoint */ ,(int)offsetof(Join_obj,offPt),HX_("offPt",53,d3,33,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Join_obj_sStaticStorageInfo = 0;
#endif

static ::String Join_obj_sMemberFields[] = {
	HX_("outPt1",bf,c5,68,0c),
	HX_("outPt2",c0,c5,68,0c),
	HX_("offPt",53,d3,33,2d),
	::String(null()) };

::hx::Class Join_obj::__mClass;

void Join_obj::__register()
{
	Join_obj _hx_dummy;
	Join_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.Join",4f,86,ff,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Join_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Join_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Join_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Join_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
