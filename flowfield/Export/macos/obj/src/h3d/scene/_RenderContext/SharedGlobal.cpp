#include <hxcpp.h>

#ifndef INCLUDED_h3d_scene__RenderContext_SharedGlobal
#include <h3d/scene/_RenderContext/SharedGlobal.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1a70052587bed873_6_new,"h3d.scene._RenderContext.SharedGlobal","new",0x3e080a77,"h3d.scene._RenderContext.SharedGlobal.new","h3d/scene/RenderContext.hx",6,0x10fee9fe)
namespace h3d{
namespace scene{
namespace _RenderContext{

void SharedGlobal_obj::__construct(int gid, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_1a70052587bed873_6_new)
HXLINE(   7)		this->gid = gid;
HXLINE(   8)		this->value = value;
            	}

Dynamic SharedGlobal_obj::__CreateEmpty() { return new SharedGlobal_obj; }

void *SharedGlobal_obj::_hx_vtable = 0;

Dynamic SharedGlobal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SharedGlobal_obj > _hx_result = new SharedGlobal_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SharedGlobal_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12c91ed5;
}


SharedGlobal_obj::SharedGlobal_obj()
{
}

void SharedGlobal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SharedGlobal);
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void SharedGlobal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val SharedGlobal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { return ::hx::Val( gid ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SharedGlobal_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SharedGlobal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gid",02,84,4e,00));
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SharedGlobal_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SharedGlobal_obj,gid),HX_("gid",02,84,4e,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SharedGlobal_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SharedGlobal_obj_sStaticStorageInfo = 0;
#endif

static ::String SharedGlobal_obj_sMemberFields[] = {
	HX_("gid",02,84,4e,00),
	HX_("value",71,7f,b8,31),
	::String(null()) };

::hx::Class SharedGlobal_obj::__mClass;

void SharedGlobal_obj::__register()
{
	SharedGlobal_obj _hx_dummy;
	SharedGlobal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene._RenderContext.SharedGlobal",05,03,8e,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SharedGlobal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SharedGlobal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SharedGlobal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SharedGlobal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace scene
} // end namespace _RenderContext
