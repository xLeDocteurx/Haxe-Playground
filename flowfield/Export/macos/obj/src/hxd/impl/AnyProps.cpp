#include <hxcpp.h>

#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2bb2eba5236bef77_7_set_props,"hxd.impl.AnyProps","set_props",0xaf7a8d9d,"hxd.impl.AnyProps.set_props","hxd/impl/AnyProps.hx",7,0x996e67a6)
HX_LOCAL_STACK_FRAME(_hx_pos_2bb2eba5236bef77_14_setDefaultProps,"hxd.impl.AnyProps","setDefaultProps",0x0ca4c6fb,"hxd.impl.AnyProps.setDefaultProps","hxd/impl/AnyProps.hx",14,0x996e67a6)
HX_LOCAL_STACK_FRAME(_hx_pos_2bb2eba5236bef77_18_getDefaultProps,"hxd.impl.AnyProps","getDefaultProps",0x10d949ef,"hxd.impl.AnyProps.getDefaultProps","hxd/impl/AnyProps.hx",18,0x996e67a6)
HX_LOCAL_STACK_FRAME(_hx_pos_2bb2eba5236bef77_21_refreshProps,"hxd.impl.AnyProps","refreshProps",0xb07ec00b,"hxd.impl.AnyProps.refreshProps","hxd/impl/AnyProps.hx",21,0x996e67a6)
namespace hxd{
namespace impl{

void AnyProps_obj::__construct() { }

Dynamic AnyProps_obj::__CreateEmpty() { return new AnyProps_obj; }

void *AnyProps_obj::_hx_vtable = 0;

Dynamic AnyProps_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnyProps_obj > _hx_result = new AnyProps_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnyProps_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x531b0df8;
}

 ::Dynamic AnyProps_obj::set_props( ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_2bb2eba5236bef77_7_set_props)
HXLINE(   8)		this->props = p;
HXLINE(   9)		this->refreshProps();
HXLINE(  10)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnyProps_obj,set_props,return )

void AnyProps_obj::setDefaultProps(::String kind){
            	HX_STACKFRAME(&_hx_pos_2bb2eba5236bef77_14_setDefaultProps)
HXDLIN(  14)		this->set_props(this->getDefaultProps(kind));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnyProps_obj,setDefaultProps,(void))

 ::Dynamic AnyProps_obj::getDefaultProps(::String kind){
            	HX_STACKFRAME(&_hx_pos_2bb2eba5236bef77_18_getDefaultProps)
HXDLIN(  18)		return  ::Dynamic(::hx::Anon_obj::Create(0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnyProps_obj,getDefaultProps,return )

void AnyProps_obj::refreshProps(){
            	HX_STACKFRAME(&_hx_pos_2bb2eba5236bef77_21_refreshProps)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnyProps_obj,refreshProps,(void))


AnyProps_obj::AnyProps_obj()
{
}

void AnyProps_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnyProps);
	HX_MARK_MEMBER_NAME(props,"props");
	HX_MARK_END_CLASS();
}

void AnyProps_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(props,"props");
}

::hx::Val AnyProps_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { return ::hx::Val( props ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_props") ) { return ::hx::Val( set_props_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"refreshProps") ) { return ::hx::Val( refreshProps_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setDefaultProps") ) { return ::hx::Val( setDefaultProps_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDefaultProps") ) { return ::hx::Val( getDefaultProps_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnyProps_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"props") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_props(inValue.Cast<  ::Dynamic >()) );props=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnyProps_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("props",70,e7,8f,c8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnyProps_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnyProps_obj,props),HX_("props",70,e7,8f,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnyProps_obj_sStaticStorageInfo = 0;
#endif

static ::String AnyProps_obj_sMemberFields[] = {
	HX_("props",70,e7,8f,c8),
	HX_("set_props",d3,2f,8a,ef),
	HX_("setDefaultProps",b1,f5,a0,9c),
	HX_("getDefaultProps",a5,78,d5,a0),
	HX_("refreshProps",95,e3,11,dc),
	::String(null()) };

::hx::Class AnyProps_obj::__mClass;

void AnyProps_obj::__register()
{
	AnyProps_obj _hx_dummy;
	AnyProps_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.impl.AnyProps",b8,7d,93,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnyProps_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnyProps_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnyProps_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnyProps_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace impl
