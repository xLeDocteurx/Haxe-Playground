#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_GeometryBuffer
#include <hxd/fmt/hmd/GeometryBuffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d07a03ab2333360_20_new,"hxd.fmt.hmd.GeometryBuffer","new",0x77f0de8e,"hxd.fmt.hmd.GeometryBuffer.new","hxd/fmt/hmd/Library.hx",20,0x88e81730)
namespace hxd{
namespace fmt{
namespace hmd{

void GeometryBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0d07a03ab2333360_20_new)
            	}

Dynamic GeometryBuffer_obj::__CreateEmpty() { return new GeometryBuffer_obj; }

void *GeometryBuffer_obj::_hx_vtable = 0;

Dynamic GeometryBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GeometryBuffer_obj > _hx_result = new GeometryBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GeometryBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7efbd714;
}


GeometryBuffer_obj::GeometryBuffer_obj()
{
}

void GeometryBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryBuffer);
	HX_MARK_MEMBER_NAME(vertexes,"vertexes");
	HX_MARK_MEMBER_NAME(indexes,"indexes");
	HX_MARK_END_CLASS();
}

void GeometryBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertexes,"vertexes");
	HX_VISIT_MEMBER_NAME(indexes,"indexes");
}

::hx::Val GeometryBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { return ::hx::Val( indexes ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertexes") ) { return ::hx::Val( vertexes ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GeometryBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { indexes=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertexes") ) { vertexes=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeometryBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vertexes",d2,d4,80,67));
	outFields->push(HX_("indexes",00,5c,bf,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GeometryBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(GeometryBuffer_obj,vertexes),HX_("vertexes",d2,d4,80,67)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(GeometryBuffer_obj,indexes),HX_("indexes",00,5c,bf,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GeometryBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String GeometryBuffer_obj_sMemberFields[] = {
	HX_("vertexes",d2,d4,80,67),
	HX_("indexes",00,5c,bf,e0),
	::String(null()) };

::hx::Class GeometryBuffer_obj::__mClass;

void GeometryBuffer_obj::__register()
{
	GeometryBuffer_obj _hx_dummy;
	GeometryBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.GeometryBuffer",9c,3f,a7,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GeometryBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GeometryBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GeometryBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GeometryBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
