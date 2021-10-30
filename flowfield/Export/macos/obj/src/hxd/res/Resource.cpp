#include <hxcpp.h>

#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ddb07df0294c462a_11_new,"hxd.res.Resource","new",0x68608b08,"hxd.res.Resource.new","hxd/res/Resource.hx",11,0x80cb4426)
HX_LOCAL_STACK_FRAME(_hx_pos_ddb07df0294c462a_15_get_name,"hxd.res.Resource","get_name",0x423fd22c,"hxd.res.Resource.get_name","hxd/res/Resource.hx",15,0x80cb4426)
HX_LOCAL_STACK_FRAME(_hx_pos_ddb07df0294c462a_19_toString,"hxd.res.Resource","toString",0xb1f47504,"hxd.res.Resource.toString","hxd/res/Resource.hx",19,0x80cb4426)
HX_LOCAL_STACK_FRAME(_hx_pos_ddb07df0294c462a_23_watch,"hxd.res.Resource","watch",0xd5d3caf7,"hxd.res.Resource.watch","hxd/res/Resource.hx",23,0x80cb4426)
HX_LOCAL_STACK_FRAME(_hx_pos_ddb07df0294c462a_5_boot,"hxd.res.Resource","boot",0xe4321c8a,"hxd.res.Resource.boot","hxd/res/Resource.hx",5,0x80cb4426)
namespace hxd{
namespace res{

void Resource_obj::__construct( ::hxd::fs::FileEntry entry){
            	HX_STACKFRAME(&_hx_pos_ddb07df0294c462a_11_new)
HXDLIN(  11)		this->entry = entry;
            	}

Dynamic Resource_obj::__CreateEmpty() { return new Resource_obj; }

void *Resource_obj::_hx_vtable = 0;

Dynamic Resource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Resource_obj > _hx_result = new Resource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Resource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09c9e03a;
}

::String Resource_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_ddb07df0294c462a_15_get_name)
HXDLIN(  15)		return this->entry->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,get_name,return )

::String Resource_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ddb07df0294c462a_19_toString)
HXDLIN(  19)		return this->entry->get_path();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,toString,return )

void Resource_obj::watch( ::Dynamic onChanged){
            	HX_STACKFRAME(&_hx_pos_ddb07df0294c462a_23_watch)
HXDLIN(  23)		if (::hxd::res::Resource_obj::LIVE_UPDATE) {
HXDLIN(  23)			this->entry->watch(onChanged);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,watch,(void))

bool Resource_obj::LIVE_UPDATE;


::hx::ObjectPtr< Resource_obj > Resource_obj::__new( ::hxd::fs::FileEntry entry) {
	::hx::ObjectPtr< Resource_obj > __this = new Resource_obj();
	__this->__construct(entry);
	return __this;
}

::hx::ObjectPtr< Resource_obj > Resource_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry) {
	Resource_obj *__this = (Resource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Resource_obj), true, "hxd.res.Resource"));
	*(void **)__this = Resource_obj::_hx_vtable;
	__this->__construct(entry);
	return __this;
}

Resource_obj::Resource_obj()
{
}

void Resource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Resource);
	HX_MARK_MEMBER_NAME(entry,"entry");
	HX_MARK_END_CLASS();
}

void Resource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entry,"entry");
}

::hx::Val Resource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"entry") ) { return ::hx::Val( entry ); }
		if (HX_FIELD_EQ(inName,"watch") ) { return ::hx::Val( watch_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Resource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LIVE_UPDATE") ) { outValue = ( LIVE_UPDATE ); return true; }
	}
	return false;
}

::hx::Val Resource_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"entry") ) { entry=inValue.Cast<  ::hxd::fs::FileEntry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Resource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LIVE_UPDATE") ) { LIVE_UPDATE=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Resource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("entry",72,78,86,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Resource_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::fs::FileEntry */ ,(int)offsetof(Resource_obj,entry),HX_("entry",72,78,86,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Resource_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Resource_obj::LIVE_UPDATE,HX_("LIVE_UPDATE",3c,52,f5,06)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Resource_obj_sMemberFields[] = {
	HX_("entry",72,78,86,70),
	HX_("get_name",d4,2d,ba,c8),
	HX_("toString",ac,d0,6e,38),
	HX_("watch",4f,16,25,c5),
	::String(null()) };

static void Resource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resource_obj::LIVE_UPDATE,"LIVE_UPDATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Resource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resource_obj::LIVE_UPDATE,"LIVE_UPDATE");
};

#endif

::hx::Class Resource_obj::__mClass;

static ::String Resource_obj_sStaticFields[] = {
	HX_("LIVE_UPDATE",3c,52,f5,06),
	::String(null())
};

void Resource_obj::__register()
{
	Resource_obj _hx_dummy;
	Resource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.Resource",16,a7,f4,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Resource_obj::__GetStatic;
	__mClass->mSetStaticField = &Resource_obj::__SetStatic;
	__mClass->mMarkFunc = Resource_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Resource_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Resource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Resource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Resource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Resource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Resource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Resource_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ddb07df0294c462a_5_boot)
HXDLIN(   5)		LIVE_UPDATE = false;
            	}
}

} // end namespace hxd
} // end namespace res
