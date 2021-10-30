#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Animation
#include <hxd/fmt/hmd/Animation.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Data
#include <hxd/fmt/hmd/Data.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Geometry
#include <hxd/fmt/hmd/Geometry.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Material
#include <hxd/fmt/hmd/Material.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Model
#include <hxd/fmt/hmd/Model.h>
#endif
#ifndef INCLUDED_hxd_fmt_hmd_Property
#include <hxd/fmt/hmd/Property.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7bf42449fc6413c4_238_new,"hxd.fmt.hmd.Data","new",0x1f491ae6,"hxd.fmt.hmd.Data.new","hxd/fmt/hmd/Data.hx",238,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_7bf42449fc6413c4_227_boot,"hxd.fmt.hmd.Data","boot",0x38c76eec,"hxd.fmt.hmd.Data.boot","hxd/fmt/hmd/Data.hx",227,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{

void Data_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7bf42449fc6413c4_238_new)
            	}

Dynamic Data_obj::__CreateEmpty() { return new Data_obj; }

void *Data_obj::_hx_vtable = 0;

Dynamic Data_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Data_obj > _hx_result = new Data_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Data_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0916c470;
}

int Data_obj::CURRENT_VERSION;


Data_obj::Data_obj()
{
}

void Data_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Data);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(props,"props");
	HX_MARK_MEMBER_NAME(geometries,"geometries");
	HX_MARK_MEMBER_NAME(materials,"materials");
	HX_MARK_MEMBER_NAME(models,"models");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(dataPosition,"dataPosition");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Data_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(props,"props");
	HX_VISIT_MEMBER_NAME(geometries,"geometries");
	HX_VISIT_MEMBER_NAME(materials,"materials");
	HX_VISIT_MEMBER_NAME(models,"models");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(dataPosition,"dataPosition");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val Data_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { return ::hx::Val( props ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"models") ) { return ::hx::Val( models ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { return ::hx::Val( materials ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geometries") ) { return ::hx::Val( geometries ); }
		if (HX_FIELD_EQ(inName,"animations") ) { return ::hx::Val( animations ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataPosition") ) { return ::hx::Val( dataPosition ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Data_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { props=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"models") ) { models=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { materials=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geometries") ) { geometries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataPosition") ) { dataPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Data_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("props",70,e7,8f,c8));
	outFields->push(HX_("geometries",90,c7,e8,90));
	outFields->push(HX_("materials",ec,b5,0b,a0));
	outFields->push(HX_("models",aa,10,c7,c0));
	outFields->push(HX_("animations",ef,34,1c,83));
	outFields->push(HX_("dataPosition",f3,ec,f0,36));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Data_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Data_obj,version),HX_("version",18,e7,f1,7c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Data_obj,props),HX_("props",70,e7,8f,c8)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Data_obj,geometries),HX_("geometries",90,c7,e8,90)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Data_obj,materials),HX_("materials",ec,b5,0b,a0)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Data_obj,models),HX_("models",aa,10,c7,c0)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Data_obj,animations),HX_("animations",ef,34,1c,83)},
	{::hx::fsInt,(int)offsetof(Data_obj,dataPosition),HX_("dataPosition",f3,ec,f0,36)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Data_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Data_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Data_obj::CURRENT_VERSION,HX_("CURRENT_VERSION",92,c5,b8,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Data_obj_sMemberFields[] = {
	HX_("version",18,e7,f1,7c),
	HX_("props",70,e7,8f,c8),
	HX_("geometries",90,c7,e8,90),
	HX_("materials",ec,b5,0b,a0),
	HX_("models",aa,10,c7,c0),
	HX_("animations",ef,34,1c,83),
	HX_("dataPosition",f3,ec,f0,36),
	HX_("data",2a,56,63,42),
	::String(null()) };

static void Data_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Data_obj::CURRENT_VERSION,"CURRENT_VERSION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Data_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Data_obj::CURRENT_VERSION,"CURRENT_VERSION");
};

#endif

::hx::Class Data_obj::__mClass;

static ::String Data_obj_sStaticFields[] = {
	HX_("CURRENT_VERSION",92,c5,b8,c8),
	::String(null())
};

void Data_obj::__register()
{
	Data_obj _hx_dummy;
	Data_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd.Data",f4,6f,64,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Data_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Data_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Data_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Data_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Data_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Data_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Data_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Data_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7bf42449fc6413c4_227_boot)
HXDLIN( 227)		CURRENT_VERSION = 3;
            	}
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
