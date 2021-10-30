#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_openal_Buffer
#include <hxd/snd/openal/Buffer.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_BufferHandle
#include <hxd/snd/openal/BufferHandle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d01190deaa64f6f9_16_new,"hxd.snd.openal.BufferHandle","new",0x72cb6314,"hxd.snd.openal.BufferHandle.new","hxd/snd/openal/AudioTypes.hx",16,0x057d4e22)
namespace hxd{
namespace snd{
namespace openal{

void BufferHandle_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d01190deaa64f6f9_16_new)
            	}

Dynamic BufferHandle_obj::__CreateEmpty() { return new BufferHandle_obj; }

void *BufferHandle_obj::_hx_vtable = 0;

Dynamic BufferHandle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BufferHandle_obj > _hx_result = new BufferHandle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BufferHandle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x53afc87a;
}


BufferHandle_obj::BufferHandle_obj()
{
}

void BufferHandle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BufferHandle);
	HX_MARK_MEMBER_NAME(inst,"inst");
	HX_MARK_MEMBER_NAME(isEnd,"isEnd");
	HX_MARK_END_CLASS();
}

void BufferHandle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inst,"inst");
	HX_VISIT_MEMBER_NAME(isEnd,"isEnd");
}

::hx::Val BufferHandle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { return ::hx::Val( inst ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isEnd") ) { return ::hx::Val( isEnd ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BufferHandle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=inValue.Cast<  ::hxd::snd::openal::Buffer >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isEnd") ) { isEnd=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BufferHandle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("inst",c6,43,bb,45));
	outFields->push(HX_("isEnd",11,2e,4b,c1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BufferHandle_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::openal::Buffer */ ,(int)offsetof(BufferHandle_obj,inst),HX_("inst",c6,43,bb,45)},
	{::hx::fsBool,(int)offsetof(BufferHandle_obj,isEnd),HX_("isEnd",11,2e,4b,c1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BufferHandle_obj_sStaticStorageInfo = 0;
#endif

static ::String BufferHandle_obj_sMemberFields[] = {
	HX_("inst",c6,43,bb,45),
	HX_("isEnd",11,2e,4b,c1),
	::String(null()) };

::hx::Class BufferHandle_obj::__mClass;

void BufferHandle_obj::__register()
{
	BufferHandle_obj _hx_dummy;
	BufferHandle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.BufferHandle",22,89,77,53);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BufferHandle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BufferHandle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BufferHandle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BufferHandle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
