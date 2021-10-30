#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper__Clipper_Ref
#include <hxd/clipper/_Clipper/Ref.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c30a43b174ced3a8_168_new,"hxd.clipper._Clipper.Ref","new",0xd01c9a80,"hxd.clipper._Clipper.Ref.new","hxd/clipper/Clipper.hx",168,0x0569880e)
namespace hxd{
namespace clipper{
namespace _Clipper{

void Ref_obj::__construct( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_c30a43b174ced3a8_168_new)
HXDLIN( 168)		this->val = v;
            	}

Dynamic Ref_obj::__CreateEmpty() { return new Ref_obj; }

void *Ref_obj::_hx_vtable = 0;

Dynamic Ref_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ref_obj > _hx_result = new Ref_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Ref_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08e694c0;
}


Ref_obj::Ref_obj()
{
}

void Ref_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ref);
	HX_MARK_MEMBER_NAME(val,"val");
	HX_MARK_END_CLASS();
}

void Ref_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(val,"val");
}

::hx::Val Ref_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"val") ) { return ::hx::Val( val ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Ref_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"val") ) { val=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ref_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("val",e1,de,59,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Ref_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Ref_obj,val),HX_("val",e1,de,59,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Ref_obj_sStaticStorageInfo = 0;
#endif

static ::String Ref_obj_sMemberFields[] = {
	HX_("val",e1,de,59,00),
	::String(null()) };

::hx::Class Ref_obj::__mClass;

void Ref_obj::__register()
{
	Ref_obj _hx_dummy;
	Ref_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.clipper._Clipper.Ref",8e,9a,a5,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Ref_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Ref_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ref_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ref_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
