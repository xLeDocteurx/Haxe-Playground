#include <hxcpp.h>

#ifndef INCLUDED_hxd_BitmapData
#include <hxd/BitmapData.h>
#endif
#ifndef INCLUDED_hxd_fs__LoadedBitmap_LoadedBitmap_Impl_
#include <hxd/fs/_LoadedBitmap/LoadedBitmap_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_50a2c0eddc443fb9_13__new,"hxd.fs._LoadedBitmap.LoadedBitmap_Impl_","_new",0xd387c859,"hxd.fs._LoadedBitmap.LoadedBitmap_Impl_._new","hxd/fs/LoadedBitmap.hx",13,0xcc0ce263)
HX_LOCAL_STACK_FRAME(_hx_pos_50a2c0eddc443fb9_25_toBitmap,"hxd.fs._LoadedBitmap.LoadedBitmap_Impl_","toBitmap",0x1f5446c2,"hxd.fs._LoadedBitmap.LoadedBitmap_Impl_.toBitmap","hxd/fs/LoadedBitmap.hx",25,0xcc0ce263)
HX_LOCAL_STACK_FRAME(_hx_pos_50a2c0eddc443fb9_30_toNative,"hxd.fs._LoadedBitmap.LoadedBitmap_Impl_","toNative",0x5065006a,"hxd.fs._LoadedBitmap.LoadedBitmap_Impl_.toNative","hxd/fs/LoadedBitmap.hx",30,0xcc0ce263)
namespace hxd{
namespace fs{
namespace _LoadedBitmap{

void LoadedBitmap_Impl__obj::__construct() { }

Dynamic LoadedBitmap_Impl__obj::__CreateEmpty() { return new LoadedBitmap_Impl__obj; }

void *LoadedBitmap_Impl__obj::_hx_vtable = 0;

Dynamic LoadedBitmap_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadedBitmap_Impl__obj > _hx_result = new LoadedBitmap_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LoadedBitmap_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52aec44a;
}

 ::hxd::BitmapData LoadedBitmap_Impl__obj::_new( ::hxd::BitmapData data){
            	HX_STACKFRAME(&_hx_pos_50a2c0eddc443fb9_13__new)
HXDLIN(  13)		 ::hxd::BitmapData this1 = data;
HXDLIN(  13)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoadedBitmap_Impl__obj,_new,return )

 ::hxd::BitmapData LoadedBitmap_Impl__obj::toBitmap( ::hxd::BitmapData this1){
            	HX_STACKFRAME(&_hx_pos_50a2c0eddc443fb9_25_toBitmap)
HXDLIN(  25)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoadedBitmap_Impl__obj,toBitmap,return )

 ::hxd::BitmapData LoadedBitmap_Impl__obj::toNative( ::hxd::BitmapData this1){
            	HX_STACKFRAME(&_hx_pos_50a2c0eddc443fb9_30_toNative)
HXDLIN(  30)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoadedBitmap_Impl__obj,toNative,return )


LoadedBitmap_Impl__obj::LoadedBitmap_Impl__obj()
{
}

bool LoadedBitmap_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toBitmap") ) { outValue = toBitmap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toNative") ) { outValue = toNative_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LoadedBitmap_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LoadedBitmap_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class LoadedBitmap_Impl__obj::__mClass;

static ::String LoadedBitmap_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("toBitmap",ca,b7,4a,18),
	HX_("toNative",72,71,5b,49),
	::String(null())
};

void LoadedBitmap_Impl__obj::__register()
{
	LoadedBitmap_Impl__obj _hx_dummy;
	LoadedBitmap_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs._LoadedBitmap.LoadedBitmap_Impl_",76,90,18,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoadedBitmap_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LoadedBitmap_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LoadedBitmap_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadedBitmap_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadedBitmap_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fs
} // end namespace _LoadedBitmap
