#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd_GeometryFormat
#include <hxd/fmt/hmd/GeometryFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fbb9c19686c72d8c_97_new,"hxd.fmt.hmd.GeometryFormat","new",0xe6459845,"hxd.fmt.hmd.GeometryFormat.new","hxd/fmt/hmd/Data.hx",97,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void GeometryFormat_obj::__construct(::String name,int format){
            	HX_STACKFRAME(&_hx_pos_fbb9c19686c72d8c_97_new)
HXLINE(  98)		this->name = name;
HXLINE(  99)		this->format = format;
            	}

Dynamic GeometryFormat_obj::__CreateEmpty() { return new GeometryFormat_obj; }

void *GeometryFormat_obj::_hx_vtable = 0;

Dynamic GeometryFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GeometryFormat_obj > _hx_result = new GeometryFormat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GeometryFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11c0594f;
}


GeometryFormat_obj::GeometryFormat_obj()
{
}

void GeometryFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryFormat);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void GeometryFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(format,"format");
}

::hx::Val GeometryFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GeometryFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeometryFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("format",37,8f,8e,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GeometryFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(GeometryFormat_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(GeometryFormat_obj,format),HX_("format",37,8f,8e,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GeometryFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String GeometryFormat_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("format",37,8f,8e,fd),
	::String(null()) };

::hx::Class GeometryFormat_obj::__mClass;

void GeometryFormat_obj::__register()
{
	GeometryFormat_obj _hx_dummy;
	GeometryFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.GeometryFormat",d3,11,a1,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GeometryFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GeometryFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GeometryFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GeometryFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
