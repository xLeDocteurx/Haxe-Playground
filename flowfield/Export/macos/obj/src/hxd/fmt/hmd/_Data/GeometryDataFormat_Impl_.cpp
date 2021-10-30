#include <hxcpp.h>

#ifndef INCLUDED_hxd_fmt_hmd__Data_GeometryDataFormat_Impl_
#include <hxd/fmt/hmd/_Data/GeometryDataFormat_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_11__new,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","_new",0x4cd652ed,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_._new","hxd/fmt/hmd/Data.hx",11,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_16_getSize,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","getSize",0xec0d126b,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_.getSize","hxd/fmt/hmd/Data.hx",16,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_20_toInt,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","toInt",0x06b05b28,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_.toInt","hxd/fmt/hmd/Data.hx",20,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_24_toString,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","toString",0xfb21c438,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_.toString","hxd/fmt/hmd/Data.hx",24,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_34_fromInt,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","fromInt",0x25319f99,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_.fromInt","hxd/fmt/hmd/Data.hx",34,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_5_boot,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","boot",0x4ed2c1be,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_.boot","hxd/fmt/hmd/Data.hx",5,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_6_boot,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","boot",0x4ed2c1be,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_.boot","hxd/fmt/hmd/Data.hx",6,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_7_boot,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","boot",0x4ed2c1be,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_.boot","hxd/fmt/hmd/Data.hx",7,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_8_boot,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","boot",0x4ed2c1be,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_.boot","hxd/fmt/hmd/Data.hx",8,0x52584c27)
HX_LOCAL_STACK_FRAME(_hx_pos_df3014458c591922_9_boot,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_","boot",0x4ed2c1be,"hxd.fmt.hmd._Data.GeometryDataFormat_Impl_.boot","hxd/fmt/hmd/Data.hx",9,0x52584c27)
namespace hxd{
namespace fmt{
namespace hmd{
namespace _Data{

void GeometryDataFormat_Impl__obj::__construct() { }

Dynamic GeometryDataFormat_Impl__obj::__CreateEmpty() { return new GeometryDataFormat_Impl__obj; }

void *GeometryDataFormat_Impl__obj::_hx_vtable = 0;

Dynamic GeometryDataFormat_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GeometryDataFormat_Impl__obj > _hx_result = new GeometryDataFormat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GeometryDataFormat_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x237e1f16;
}

int GeometryDataFormat_Impl__obj::DFloat;

int GeometryDataFormat_Impl__obj::DVec2;

int GeometryDataFormat_Impl__obj::DVec3;

int GeometryDataFormat_Impl__obj::DVec4;

int GeometryDataFormat_Impl__obj::DBytes4;

int GeometryDataFormat_Impl__obj::_new(int v){
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_11__new)
HXDLIN(  11)		int this1 = v;
HXDLIN(  11)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeometryDataFormat_Impl__obj,_new,return )

int GeometryDataFormat_Impl__obj::getSize(int this1){
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_16_getSize)
HXDLIN(  16)		return (this1 & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeometryDataFormat_Impl__obj,getSize,return )

int GeometryDataFormat_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_20_toInt)
HXDLIN(  20)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeometryDataFormat_Impl__obj,toInt,return )

::String GeometryDataFormat_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_24_toString)
HXDLIN(  24)		int this2 = this1;
HXDLIN(  24)		switch((int)(this2)){
            			case (int)1: {
HXLINE(  25)				return HX_("DFloat",b8,be,08,c6);
            			}
            			break;
            			case (int)2: {
HXLINE(  26)				return HX_("DVec2",c2,c5,64,60);
            			}
            			break;
            			case (int)3: {
HXLINE(  27)				return HX_("DVec3",c3,c5,64,60);
            			}
            			break;
            			case (int)4: {
HXLINE(  28)				return HX_("DVec4",c4,c5,64,60);
            			}
            			break;
            			case (int)9: {
HXLINE(  29)				return HX_("DBytes4",cd,54,b7,67);
            			}
            			break;
            		}
HXLINE(  24)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeometryDataFormat_Impl__obj,toString,return )

int GeometryDataFormat_Impl__obj::fromInt(int v){
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_34_fromInt)
HXDLIN(  34)		int this1 = v;
HXDLIN(  34)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeometryDataFormat_Impl__obj,fromInt,return )


GeometryDataFormat_Impl__obj::GeometryDataFormat_Impl__obj()
{
}

bool GeometryDataFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getSize") ) { outValue = getSize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GeometryDataFormat_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GeometryDataFormat_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &GeometryDataFormat_Impl__obj::DFloat,HX_("DFloat",b8,be,08,c6)},
	{::hx::fsInt,(void *) &GeometryDataFormat_Impl__obj::DVec2,HX_("DVec2",c2,c5,64,60)},
	{::hx::fsInt,(void *) &GeometryDataFormat_Impl__obj::DVec3,HX_("DVec3",c3,c5,64,60)},
	{::hx::fsInt,(void *) &GeometryDataFormat_Impl__obj::DVec4,HX_("DVec4",c4,c5,64,60)},
	{::hx::fsInt,(void *) &GeometryDataFormat_Impl__obj::DBytes4,HX_("DBytes4",cd,54,b7,67)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GeometryDataFormat_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryDataFormat_Impl__obj::DFloat,"DFloat");
	HX_MARK_MEMBER_NAME(GeometryDataFormat_Impl__obj::DVec2,"DVec2");
	HX_MARK_MEMBER_NAME(GeometryDataFormat_Impl__obj::DVec3,"DVec3");
	HX_MARK_MEMBER_NAME(GeometryDataFormat_Impl__obj::DVec4,"DVec4");
	HX_MARK_MEMBER_NAME(GeometryDataFormat_Impl__obj::DBytes4,"DBytes4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GeometryDataFormat_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryDataFormat_Impl__obj::DFloat,"DFloat");
	HX_VISIT_MEMBER_NAME(GeometryDataFormat_Impl__obj::DVec2,"DVec2");
	HX_VISIT_MEMBER_NAME(GeometryDataFormat_Impl__obj::DVec3,"DVec3");
	HX_VISIT_MEMBER_NAME(GeometryDataFormat_Impl__obj::DVec4,"DVec4");
	HX_VISIT_MEMBER_NAME(GeometryDataFormat_Impl__obj::DBytes4,"DBytes4");
};

#endif

::hx::Class GeometryDataFormat_Impl__obj::__mClass;

static ::String GeometryDataFormat_Impl__obj_sStaticFields[] = {
	HX_("DFloat",b8,be,08,c6),
	HX_("DVec2",c2,c5,64,60),
	HX_("DVec3",c3,c5,64,60),
	HX_("DVec4",c4,c5,64,60),
	HX_("DBytes4",cd,54,b7,67),
	HX_("_new",61,15,1f,3f),
	HX_("getSize",77,50,d6,1e),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	HX_("fromInt",a5,dd,fa,57),
	::String(null())
};

void GeometryDataFormat_Impl__obj::__register()
{
	GeometryDataFormat_Impl__obj _hx_dummy;
	GeometryDataFormat_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hmd._Data.GeometryDataFormat_Impl_",62,0e,fe,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GeometryDataFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GeometryDataFormat_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GeometryDataFormat_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GeometryDataFormat_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GeometryDataFormat_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GeometryDataFormat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GeometryDataFormat_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GeometryDataFormat_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_5_boot)
HXDLIN(   5)		DFloat = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_6_boot)
HXDLIN(   6)		DVec2 = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_7_boot)
HXDLIN(   7)		DVec3 = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_8_boot)
HXDLIN(   8)		DVec4 = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_df3014458c591922_9_boot)
HXDLIN(   9)		DBytes4 = 9;
            	}
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd
} // end namespace _Data
