#include <hxcpp.h>

#ifndef INCLUDED_format_jpg__Writer_BitString
#include <format/jpg/_Writer/BitString.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cfc383ae01af4196_647_new,"format.jpg._Writer.BitString","new",0x75a65510,"format.jpg._Writer.BitString.new","format/jpg/Writer.hx",647,0x7ff4c3c5)
namespace format{
namespace jpg{
namespace _Writer{

void BitString_obj::__construct(int l,int v){
            	HX_STACKFRAME(&_hx_pos_cfc383ae01af4196_647_new)
HXLINE( 648)		this->len = l;
HXLINE( 649)		this->val = v;
            	}

Dynamic BitString_obj::__CreateEmpty() { return new BitString_obj; }

void *BitString_obj::_hx_vtable = 0;

Dynamic BitString_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitString_obj > _hx_result = new BitString_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BitString_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x276b7ff6;
}


BitString_obj::BitString_obj()
{
}

::hx::Val BitString_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { return ::hx::Val( len ); }
		if (HX_FIELD_EQ(inName,"val") ) { return ::hx::Val( val ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BitString_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"val") ) { val=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitString_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("len",d5,4b,52,00));
	outFields->push(HX_("val",e1,de,59,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitString_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BitString_obj,len),HX_("len",d5,4b,52,00)},
	{::hx::fsInt,(int)offsetof(BitString_obj,val),HX_("val",e1,de,59,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitString_obj_sStaticStorageInfo = 0;
#endif

static ::String BitString_obj_sMemberFields[] = {
	HX_("len",d5,4b,52,00),
	HX_("val",e1,de,59,00),
	::String(null()) };

::hx::Class BitString_obj::__mClass;

void BitString_obj::__register()
{
	BitString_obj _hx_dummy;
	BitString_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.jpg._Writer.BitString",1e,cd,fa,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitString_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitString_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitString_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitString_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace jpg
} // end namespace _Writer
