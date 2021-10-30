#include <hxcpp.h>

#ifndef INCLUDED_hxsl__Splitter_VarProps
#include <hxsl/_Splitter/VarProps.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7179c891d0f5d20d_10_new,"hxsl._Splitter.VarProps","new",0x58cb5b68,"hxsl._Splitter.VarProps.new","hxsl/Splitter.hx",10,0xbd0a4711)
namespace hxsl{
namespace _Splitter{

void VarProps_obj::__construct( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_7179c891d0f5d20d_10_new)
HXLINE(  11)		this->v = v;
HXLINE(  12)		this->read = 0;
HXLINE(  13)		this->write = 0;
            	}

Dynamic VarProps_obj::__CreateEmpty() { return new VarProps_obj; }

void *VarProps_obj::_hx_vtable = 0;

Dynamic VarProps_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VarProps_obj > _hx_result = new VarProps_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VarProps_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4633fa82;
}


VarProps_obj::VarProps_obj()
{
}

void VarProps_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VarProps);
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(read,"read");
	HX_MARK_MEMBER_NAME(write,"write");
	HX_MARK_MEMBER_NAME(local,"local");
	HX_MARK_MEMBER_NAME(requireInit,"requireInit");
	HX_MARK_END_CLASS();
}

void VarProps_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(read,"read");
	HX_VISIT_MEMBER_NAME(write,"write");
	HX_VISIT_MEMBER_NAME(local,"local");
	HX_VISIT_MEMBER_NAME(requireInit,"requireInit");
}

::hx::Val VarProps_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return ::hx::Val( v ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write ); }
		if (HX_FIELD_EQ(inName,"local") ) { return ::hx::Val( local ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"requireInit") ) { return ::hx::Val( requireInit ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VarProps_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { read=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { write=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"local") ) { local=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"requireInit") ) { requireInit=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VarProps_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("v",76,00,00,00));
	outFields->push(HX_("read",56,4b,a7,4b));
	outFields->push(HX_("write",df,6c,59,d0));
	outFields->push(HX_("local",6b,c9,f0,78));
	outFields->push(HX_("requireInit",15,65,14,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VarProps_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VarProps_obj,v),HX_("v",76,00,00,00)},
	{::hx::fsInt,(int)offsetof(VarProps_obj,read),HX_("read",56,4b,a7,4b)},
	{::hx::fsInt,(int)offsetof(VarProps_obj,write),HX_("write",df,6c,59,d0)},
	{::hx::fsBool,(int)offsetof(VarProps_obj,local),HX_("local",6b,c9,f0,78)},
	{::hx::fsBool,(int)offsetof(VarProps_obj,requireInit),HX_("requireInit",15,65,14,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VarProps_obj_sStaticStorageInfo = 0;
#endif

static ::String VarProps_obj_sMemberFields[] = {
	HX_("v",76,00,00,00),
	HX_("read",56,4b,a7,4b),
	HX_("write",df,6c,59,d0),
	HX_("local",6b,c9,f0,78),
	HX_("requireInit",15,65,14,7c),
	::String(null()) };

::hx::Class VarProps_obj::__mClass;

void VarProps_obj::__register()
{
	VarProps_obj _hx_dummy;
	VarProps_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl._Splitter.VarProps",76,c7,d7,53);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VarProps_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VarProps_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VarProps_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VarProps_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
} // end namespace _Splitter
