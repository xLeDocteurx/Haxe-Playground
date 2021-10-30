#include <hxcpp.h>

#ifndef INCLUDED_hxd_fs_NotFound
#include <hxd/fs/NotFound.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45884c9f6ba2e5a4_6_new,"hxd.fs.NotFound","new",0x2b854b68,"hxd.fs.NotFound.new","hxd/fs/NotFound.hx",6,0x41b02668)
HX_LOCAL_STACK_FRAME(_hx_pos_45884c9f6ba2e5a4_9_toString,"hxd.fs.NotFound","toString",0xf3da58a4,"hxd.fs.NotFound.toString","hxd/fs/NotFound.hx",9,0x41b02668)
namespace hxd{
namespace fs{

void NotFound_obj::__construct(::String path){
            	HX_STACKFRAME(&_hx_pos_45884c9f6ba2e5a4_6_new)
HXDLIN(   6)		this->path = path;
            	}

Dynamic NotFound_obj::__CreateEmpty() { return new NotFound_obj; }

void *NotFound_obj::_hx_vtable = 0;

Dynamic NotFound_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotFound_obj > _hx_result = new NotFound_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NotFound_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fd895b4;
}

::String NotFound_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_45884c9f6ba2e5a4_9_toString)
HXDLIN(   9)		return ((HX_("Resource file not found '",8a,22,34,59) + this->path) + HX_("'",27,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NotFound_obj,toString,return )


NotFound_obj::NotFound_obj()
{
}

void NotFound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotFound);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_END_CLASS();
}

void NotFound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
}

::hx::Val NotFound_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NotFound_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NotFound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("path",a5,e5,51,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NotFound_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(NotFound_obj,path),HX_("path",a5,e5,51,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NotFound_obj_sStaticStorageInfo = 0;
#endif

static ::String NotFound_obj_sMemberFields[] = {
	HX_("path",a5,e5,51,4a),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class NotFound_obj::__mClass;

void NotFound_obj::__register()
{
	NotFound_obj _hx_dummy;
	NotFound_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.NotFound",76,b7,d9,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotFound_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotFound_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotFound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotFound_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fs
