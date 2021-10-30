#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_ChannelBase
#include <hxd/snd/ChannelBase.h>
#endif
#ifndef INCLUDED_hxd_snd_ChannelGroup
#include <hxd/snd/ChannelGroup.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d7e2a277671de145_7_new,"hxd.snd.ChannelGroup","new",0x8dd1bc8d,"hxd.snd.ChannelGroup.new","hxd/snd/ChannelGroup.hx",7,0x9a20a141)
namespace hxd{
namespace snd{

void ChannelGroup_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_d7e2a277671de145_7_new)
HXLINE(   8)		super::__construct();
HXLINE(   9)		this->name = name;
            	}

Dynamic ChannelGroup_obj::__CreateEmpty() { return new ChannelGroup_obj; }

void *ChannelGroup_obj::_hx_vtable = 0;

Dynamic ChannelGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChannelGroup_obj > _hx_result = new ChannelGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChannelGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x431c9717) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x431c9717;
	} else {
		return inClassId==(int)0x547c10b1;
	}
}


::hx::ObjectPtr< ChannelGroup_obj > ChannelGroup_obj::__new(::String name) {
	::hx::ObjectPtr< ChannelGroup_obj > __this = new ChannelGroup_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< ChannelGroup_obj > ChannelGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	ChannelGroup_obj *__this = (ChannelGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChannelGroup_obj), true, "hxd.snd.ChannelGroup"));
	*(void **)__this = ChannelGroup_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

ChannelGroup_obj::ChannelGroup_obj()
{
}

void ChannelGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChannelGroup);
	HX_MARK_MEMBER_NAME(name,"name");
	 ::hxd::snd::ChannelBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChannelGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	 ::hxd::snd::ChannelBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ChannelGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChannelGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChannelGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChannelGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ChannelGroup_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChannelGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String ChannelGroup_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	::String(null()) };

::hx::Class ChannelGroup_obj::__mClass;

void ChannelGroup_obj::__register()
{
	ChannelGroup_obj _hx_dummy;
	ChannelGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.ChannelGroup",1b,72,a3,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChannelGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChannelGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChannelGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChannelGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
