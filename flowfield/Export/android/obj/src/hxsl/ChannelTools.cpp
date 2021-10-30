#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxsl_ChannelTools
#include <hxsl/ChannelTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c807e552fc69a6b7_16_isPackedFormat,"hxsl.ChannelTools","isPackedFormat",0x3af0caca,"hxsl.ChannelTools.isPackedFormat","hxsl/Types.hx",16,0x8d5fc66b)
namespace hxsl{

void ChannelTools_obj::__construct() { }

Dynamic ChannelTools_obj::__CreateEmpty() { return new ChannelTools_obj; }

void *ChannelTools_obj::_hx_vtable = 0;

Dynamic ChannelTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChannelTools_obj > _hx_result = new ChannelTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChannelTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x51463961;
}

bool ChannelTools_obj::isPackedFormat( ::h3d::mat::Texture c){
            	HX_STACKFRAME(&_hx_pos_c807e552fc69a6b7_16_isPackedFormat)
HXDLIN(  16)		return ::hx::IsPointerEq( c->format,::h3d::mat::Texture_obj::nativeFormat );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ChannelTools_obj,isPackedFormat,return )


ChannelTools_obj::ChannelTools_obj()
{
}

bool ChannelTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"isPackedFormat") ) { outValue = isPackedFormat_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ChannelTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ChannelTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ChannelTools_obj::__mClass;

static ::String ChannelTools_obj_sStaticFields[] = {
	HX_("isPackedFormat",d9,23,c8,17),
	::String(null())
};

void ChannelTools_obj::__register()
{
	ChannelTools_obj _hx_dummy;
	ChannelTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.ChannelTools",5d,be,52,09);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ChannelTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ChannelTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ChannelTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChannelTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChannelTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
