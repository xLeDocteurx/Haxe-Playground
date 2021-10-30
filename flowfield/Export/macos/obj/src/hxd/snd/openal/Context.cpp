#include <hxcpp.h>

#ifndef INCLUDED_hxd_snd_openal_Context
#include <hxd/snd/openal/Context.h>
#endif
#ifndef INCLUDED_hxd_snd_openal_Device
#include <hxd/snd/openal/Device.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2624dcd5fadfde84_732_new,"hxd.snd.openal.Context","new",0x364f8f47,"hxd.snd.openal.Context.new","hxd/snd/openal/Emulator.hx",732,0x857ad050)
namespace hxd{
namespace snd{
namespace openal{

void Context_obj::__construct( ::hxd::snd::openal::Device d){
            	HX_STACKFRAME(&_hx_pos_2624dcd5fadfde84_732_new)
HXDLIN( 732)		this->device = d;
            	}

Dynamic Context_obj::__CreateEmpty() { return new Context_obj; }

void *Context_obj::_hx_vtable = 0;

Dynamic Context_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context_obj > _hx_result = new Context_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Context_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x65d34b45;
}


::hx::ObjectPtr< Context_obj > Context_obj::__new( ::hxd::snd::openal::Device d) {
	::hx::ObjectPtr< Context_obj > __this = new Context_obj();
	__this->__construct(d);
	return __this;
}

::hx::ObjectPtr< Context_obj > Context_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::snd::openal::Device d) {
	Context_obj *__this = (Context_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context_obj), true, "hxd.snd.openal.Context"));
	*(void **)__this = Context_obj::_hx_vtable;
	__this->__construct(d);
	return __this;
}

Context_obj::Context_obj()
{
}

void Context_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context);
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_END_CLASS();
}

void Context_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
}

::hx::Val Context_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return ::hx::Val( device ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Context_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast<  ::hxd::snd::openal::Device >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("device",96,dc,77,71));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Context_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::snd::openal::Device */ ,(int)offsetof(Context_obj,device),HX_("device",96,dc,77,71)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Context_obj_sStaticStorageInfo = 0;
#endif

static ::String Context_obj_sMemberFields[] = {
	HX_("device",96,dc,77,71),
	::String(null()) };

::hx::Class Context_obj::__mClass;

void Context_obj::__register()
{
	Context_obj _hx_dummy;
	Context_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.snd.openal.Context",d5,df,de,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Context_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Context_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace snd
} // end namespace openal
