#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_impl__UncheckedBytes_UncheckedBytes_Impl_
#include <hxd/impl/_UncheckedBytes/UncheckedBytes_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_65d964636e2d39b5_7__new,"hxd.impl._UncheckedBytes.UncheckedBytes_Impl_","_new",0x97517d8c,"hxd.impl._UncheckedBytes.UncheckedBytes_Impl_._new","hxd/impl/UncheckedBytes.hx",7,0x7f2ce78d)
HX_LOCAL_STACK_FRAME(_hx_pos_65d964636e2d39b5_15_get,"hxd.impl._UncheckedBytes.UncheckedBytes_Impl_","get",0x8cc186cb,"hxd.impl._UncheckedBytes.UncheckedBytes_Impl_.get","hxd/impl/UncheckedBytes.hx",15,0x7f2ce78d)
HX_LOCAL_STACK_FRAME(_hx_pos_65d964636e2d39b5_19_set,"hxd.impl._UncheckedBytes.UncheckedBytes_Impl_","set",0x8ccaa1d7,"hxd.impl._UncheckedBytes.UncheckedBytes_Impl_.set","hxd/impl/UncheckedBytes.hx",19,0x7f2ce78d)
HX_LOCAL_STACK_FRAME(_hx_pos_65d964636e2d39b5_34_fromBytes,"hxd.impl._UncheckedBytes.UncheckedBytes_Impl_","fromBytes",0x738e0e96,"hxd.impl._UncheckedBytes.UncheckedBytes_Impl_.fromBytes","hxd/impl/UncheckedBytes.hx",34,0x7f2ce78d)
namespace hxd{
namespace impl{
namespace _UncheckedBytes{

void UncheckedBytes_Impl__obj::__construct() { }

Dynamic UncheckedBytes_Impl__obj::__CreateEmpty() { return new UncheckedBytes_Impl__obj; }

void *UncheckedBytes_Impl__obj::_hx_vtable = 0;

Dynamic UncheckedBytes_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UncheckedBytes_Impl__obj > _hx_result = new UncheckedBytes_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UncheckedBytes_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16f492c5;
}

::Array< unsigned char > UncheckedBytes_Impl__obj::_new(::Array< unsigned char > v){
            	HX_STACKFRAME(&_hx_pos_65d964636e2d39b5_7__new)
HXDLIN(   7)		::Array< unsigned char > this1 = v;
HXDLIN(   7)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UncheckedBytes_Impl__obj,_new,return )

int UncheckedBytes_Impl__obj::get(::Array< unsigned char > this1,int i){
            	HX_STACKFRAME(&_hx_pos_65d964636e2d39b5_15_get)
HXDLIN(  15)		return ( (int)(this1->__get(i)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UncheckedBytes_Impl__obj,get,return )

int UncheckedBytes_Impl__obj::set(::Array< unsigned char > this1,int i,int v){
            	HX_STACKFRAME(&_hx_pos_65d964636e2d39b5_19_set)
HXLINE(  23)		this1[i] = ( (unsigned char)(v) );
HXLINE(  25)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UncheckedBytes_Impl__obj,set,return )

::Array< unsigned char > UncheckedBytes_Impl__obj::fromBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_65d964636e2d39b5_34_fromBytes)
HXDLIN(  34)		::Array< unsigned char > this1 = b->b;
HXDLIN(  34)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UncheckedBytes_Impl__obj,fromBytes,return )


UncheckedBytes_Impl__obj::UncheckedBytes_Impl__obj()
{
}

bool UncheckedBytes_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UncheckedBytes_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *UncheckedBytes_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class UncheckedBytes_Impl__obj::__mClass;

static ::String UncheckedBytes_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("fromBytes",a1,f2,20,72),
	::String(null())
};

void UncheckedBytes_Impl__obj::__register()
{
	UncheckedBytes_Impl__obj _hx_dummy;
	UncheckedBytes_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.impl._UncheckedBytes.UncheckedBytes_Impl_",23,e8,70,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UncheckedBytes_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UncheckedBytes_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< UncheckedBytes_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UncheckedBytes_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UncheckedBytes_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace impl
} // end namespace _UncheckedBytes
