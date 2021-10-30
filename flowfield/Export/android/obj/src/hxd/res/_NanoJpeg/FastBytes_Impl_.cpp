#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_res__NanoJpeg_FastBytes_Impl_
#include <hxd/res/_NanoJpeg/FastBytes_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_469e9c2a4f47ae00_27__new,"hxd.res._NanoJpeg.FastBytes_Impl_","_new",0xf1e4d43b,"hxd.res._NanoJpeg.FastBytes_Impl_._new","hxd/res/NanoJpeg.hx",27,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_469e9c2a4f47ae00_31_get,"hxd.res._NanoJpeg.FastBytes_Impl_","get",0x89b7dafc,"hxd.res._NanoJpeg.FastBytes_Impl_.get","hxd/res/NanoJpeg.hx",31,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_469e9c2a4f47ae00_34_set,"hxd.res._NanoJpeg.FastBytes_Impl_","set",0x89c0f608,"hxd.res._NanoJpeg.FastBytes_Impl_.set","hxd/res/NanoJpeg.hx",34,0xbcbe95b8)
namespace hxd{
namespace res{
namespace _NanoJpeg{

void FastBytes_Impl__obj::__construct() { }

Dynamic FastBytes_Impl__obj::__CreateEmpty() { return new FastBytes_Impl__obj; }

void *FastBytes_Impl__obj::_hx_vtable = 0;

Dynamic FastBytes_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FastBytes_Impl__obj > _hx_result = new FastBytes_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FastBytes_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e8637a0;
}

 ::haxe::io::Bytes FastBytes_Impl__obj::_new( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_469e9c2a4f47ae00_27__new)
HXDLIN(  27)		 ::haxe::io::Bytes this1 = b;
HXDLIN(  27)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FastBytes_Impl__obj,_new,return )

int FastBytes_Impl__obj::get( ::haxe::io::Bytes this1,int i){
            	HX_STACKFRAME(&_hx_pos_469e9c2a4f47ae00_31_get)
HXDLIN(  31)		return ( (int)(this1->b->__get(i)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FastBytes_Impl__obj,get,return )

void FastBytes_Impl__obj::set( ::haxe::io::Bytes this1,int i,int v){
            	HX_STACKFRAME(&_hx_pos_469e9c2a4f47ae00_34_set)
HXDLIN(  34)		this1->b[i] = ( (unsigned char)(v) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FastBytes_Impl__obj,set,(void))


FastBytes_Impl__obj::FastBytes_Impl__obj()
{
}

bool FastBytes_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FastBytes_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FastBytes_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FastBytes_Impl__obj::__mClass;

static ::String FastBytes_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null())
};

void FastBytes_Impl__obj::__register()
{
	FastBytes_Impl__obj _hx_dummy;
	FastBytes_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res._NanoJpeg.FastBytes_Impl_",d4,0f,db,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FastBytes_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FastBytes_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FastBytes_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FastBytes_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FastBytes_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace res
} // end namespace _NanoJpeg
