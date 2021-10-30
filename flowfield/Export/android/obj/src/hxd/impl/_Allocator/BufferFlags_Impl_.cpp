#include <hxcpp.h>

#ifndef INCLUDED_hxd_impl__Allocator_BufferFlags_Impl_
#include <hxd/impl/_Allocator/BufferFlags_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a7dbeabd5af95403_9_toInt,"hxd.impl._Allocator.BufferFlags_Impl_","toInt",0x5f683f1f,"hxd.impl._Allocator.BufferFlags_Impl_.toInt","hxd/impl/Allocator.hx",9,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_a7dbeabd5af95403_4_boot,"hxd.impl._Allocator.BufferFlags_Impl_","boot",0x5741c9a7,"hxd.impl._Allocator.BufferFlags_Impl_.boot","hxd/impl/Allocator.hx",4,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_a7dbeabd5af95403_5_boot,"hxd.impl._Allocator.BufferFlags_Impl_","boot",0x5741c9a7,"hxd.impl._Allocator.BufferFlags_Impl_.boot","hxd/impl/Allocator.hx",5,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_a7dbeabd5af95403_6_boot,"hxd.impl._Allocator.BufferFlags_Impl_","boot",0x5741c9a7,"hxd.impl._Allocator.BufferFlags_Impl_.boot","hxd/impl/Allocator.hx",6,0x455b7707)
HX_LOCAL_STACK_FRAME(_hx_pos_a7dbeabd5af95403_7_boot,"hxd.impl._Allocator.BufferFlags_Impl_","boot",0x5741c9a7,"hxd.impl._Allocator.BufferFlags_Impl_.boot","hxd/impl/Allocator.hx",7,0x455b7707)
namespace hxd{
namespace impl{
namespace _Allocator{

void BufferFlags_Impl__obj::__construct() { }

Dynamic BufferFlags_Impl__obj::__CreateEmpty() { return new BufferFlags_Impl__obj; }

void *BufferFlags_Impl__obj::_hx_vtable = 0;

Dynamic BufferFlags_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BufferFlags_Impl__obj > _hx_result = new BufferFlags_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BufferFlags_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61c639c7;
}

int BufferFlags_Impl__obj::Dynamic;

int BufferFlags_Impl__obj::UniformDynamic;

int BufferFlags_Impl__obj::RawFormat;

int BufferFlags_Impl__obj::RawQuads;

int BufferFlags_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_a7dbeabd5af95403_9_toInt)
HXDLIN(   9)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BufferFlags_Impl__obj,toInt,return )


BufferFlags_Impl__obj::BufferFlags_Impl__obj()
{
}

bool BufferFlags_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BufferFlags_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo BufferFlags_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &BufferFlags_Impl__obj::Dynamic,HX_("Dynamic",5f,c7,66,03)},
	{::hx::fsInt,(void *) &BufferFlags_Impl__obj::UniformDynamic,HX_("UniformDynamic",cb,68,11,9a)},
	{::hx::fsInt,(void *) &BufferFlags_Impl__obj::RawFormat,HX_("RawFormat",1f,17,0e,c4)},
	{::hx::fsInt,(void *) &BufferFlags_Impl__obj::RawQuads,HX_("RawQuads",e4,62,57,99)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void BufferFlags_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BufferFlags_Impl__obj::Dynamic,"Dynamic");
	HX_MARK_MEMBER_NAME(BufferFlags_Impl__obj::UniformDynamic,"UniformDynamic");
	HX_MARK_MEMBER_NAME(BufferFlags_Impl__obj::RawFormat,"RawFormat");
	HX_MARK_MEMBER_NAME(BufferFlags_Impl__obj::RawQuads,"RawQuads");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BufferFlags_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BufferFlags_Impl__obj::Dynamic,"Dynamic");
	HX_VISIT_MEMBER_NAME(BufferFlags_Impl__obj::UniformDynamic,"UniformDynamic");
	HX_VISIT_MEMBER_NAME(BufferFlags_Impl__obj::RawFormat,"RawFormat");
	HX_VISIT_MEMBER_NAME(BufferFlags_Impl__obj::RawQuads,"RawQuads");
};

#endif

::hx::Class BufferFlags_Impl__obj::__mClass;

static ::String BufferFlags_Impl__obj_sStaticFields[] = {
	HX_("Dynamic",5f,c7,66,03),
	HX_("UniformDynamic",cb,68,11,9a),
	HX_("RawFormat",1f,17,0e,c4),
	HX_("RawQuads",e4,62,57,99),
	HX_("toInt",34,be,11,14),
	::String(null())
};

void BufferFlags_Impl__obj::__register()
{
	BufferFlags_Impl__obj _hx_dummy;
	BufferFlags_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.impl._Allocator.BufferFlags_Impl_",19,0f,de,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BufferFlags_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BufferFlags_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BufferFlags_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BufferFlags_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BufferFlags_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BufferFlags_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BufferFlags_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BufferFlags_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a7dbeabd5af95403_4_boot)
HXDLIN(   4)		Dynamic = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a7dbeabd5af95403_5_boot)
HXDLIN(   5)		UniformDynamic = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a7dbeabd5af95403_6_boot)
HXDLIN(   6)		RawFormat = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a7dbeabd5af95403_7_boot)
HXDLIN(   7)		RawQuads = 3;
            	}
}

} // end namespace hxd
} // end namespace impl
} // end namespace _Allocator
