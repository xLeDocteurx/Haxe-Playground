#include <hxcpp.h>

#ifndef INCLUDED_hxd_BitmapInnerDataImpl
#include <hxd/BitmapInnerDataImpl.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_993a4754fada68f8_19_new,"hxd.BitmapInnerDataImpl","new",0xdcee92a9,"hxd.BitmapInnerDataImpl.new","hxd/BitmapData.hx",19,0x8bf7c34a)
namespace hxd{

void BitmapInnerDataImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_993a4754fada68f8_19_new)
            	}

Dynamic BitmapInnerDataImpl_obj::__CreateEmpty() { return new BitmapInnerDataImpl_obj; }

void *BitmapInnerDataImpl_obj::_hx_vtable = 0;

Dynamic BitmapInnerDataImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapInnerDataImpl_obj > _hx_result = new BitmapInnerDataImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapInnerDataImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04a50745;
}


BitmapInnerDataImpl_obj::BitmapInnerDataImpl_obj()
{
}

void BitmapInnerDataImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapInnerDataImpl);
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void BitmapInnerDataImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

::hx::Val BitmapInnerDataImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return ::hx::Val( pixels ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BitmapInnerDataImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapInnerDataImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapInnerDataImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(BitmapInnerDataImpl_obj,pixels),HX_("pixels",2d,ef,a9,8c)},
	{::hx::fsInt,(int)offsetof(BitmapInnerDataImpl_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(BitmapInnerDataImpl_obj,height),HX_("height",e7,07,4c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitmapInnerDataImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapInnerDataImpl_obj_sMemberFields[] = {
	HX_("pixels",2d,ef,a9,8c),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	::String(null()) };

::hx::Class BitmapInnerDataImpl_obj::__mClass;

void BitmapInnerDataImpl_obj::__register()
{
	BitmapInnerDataImpl_obj _hx_dummy;
	BitmapInnerDataImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.BitmapInnerDataImpl",37,0a,5c,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapInnerDataImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapInnerDataImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapInnerDataImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapInnerDataImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
