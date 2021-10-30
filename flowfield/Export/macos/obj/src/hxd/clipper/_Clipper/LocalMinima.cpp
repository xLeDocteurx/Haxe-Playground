#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper__Clipper_LocalMinima
#include <hxd/clipper/_Clipper/LocalMinima.h>
#endif
#ifndef INCLUDED_hxd_clipper__Clipper_TEdge
#include <hxd/clipper/_Clipper/TEdge.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f809a8a4aed1595_237_new,"hxd.clipper._Clipper.LocalMinima","new",0x004b2323,"hxd.clipper._Clipper.LocalMinima.new","hxd/clipper/Clipper.hx",237,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void LocalMinima_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1f809a8a4aed1595_237_new)
            	}

Dynamic LocalMinima_obj::__CreateEmpty() { return new LocalMinima_obj; }

void *LocalMinima_obj::_hx_vtable = 0;

Dynamic LocalMinima_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocalMinima_obj > _hx_result = new LocalMinima_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LocalMinima_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1187c28f;
}


LocalMinima_obj::LocalMinima_obj()
{
}

void LocalMinima_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocalMinima);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(leftBound,"leftBound");
	HX_MARK_MEMBER_NAME(rightBound,"rightBound");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void LocalMinima_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(leftBound,"leftBound");
	HX_VISIT_MEMBER_NAME(rightBound,"rightBound");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val LocalMinima_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftBound") ) { return ::hx::Val( leftBound ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightBound") ) { return ::hx::Val( rightBound ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LocalMinima_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::hxd::clipper::_Clipper::LocalMinima >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftBound") ) { leftBound=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightBound") ) { rightBound=inValue.Cast<  ::hxd::clipper::_Clipper::TEdge >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LocalMinima_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("leftBound",b7,9e,dc,cb));
	outFields->push(HX_("rightBound",c2,96,c1,b9));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocalMinima_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(LocalMinima_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(LocalMinima_obj,leftBound),HX_("leftBound",b7,9e,dc,cb)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::TEdge */ ,(int)offsetof(LocalMinima_obj,rightBound),HX_("rightBound",c2,96,c1,b9)},
	{::hx::fsObject /*  ::hxd::clipper::_Clipper::LocalMinima */ ,(int)offsetof(LocalMinima_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LocalMinima_obj_sStaticStorageInfo = 0;
#endif

static ::String LocalMinima_obj_sMemberFields[] = {
	HX_("y",79,00,00,00),
	HX_("leftBound",b7,9e,dc,cb),
	HX_("rightBound",c2,96,c1,b9),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class LocalMinima_obj::__mClass;

void LocalMinima_obj::__register()
{
	LocalMinima_obj _hx_dummy;
	LocalMinima_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.LocalMinima",b1,55,54,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocalMinima_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocalMinima_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocalMinima_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocalMinima_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
