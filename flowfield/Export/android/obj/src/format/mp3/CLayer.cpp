#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_CLayer
#include <format/mp3/CLayer.h>
#endif
#ifndef INCLUDED_format_mp3_Layer
#include <format/mp3/Layer.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_409baf75496b5610_183_enum2Num,"format.mp3.CLayer","enum2Num",0x021842e0,"format.mp3.CLayer.enum2Num","format/mp3/Constants.hx",183,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_409baf75496b5610_192_num2Enum,"format.mp3.CLayer","num2Enum",0x091cbe78,"format.mp3.CLayer.num2Enum","format/mp3/Constants.hx",192,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_409baf75496b5610_177_boot,"format.mp3.CLayer","boot",0x6a6fd4dd,"format.mp3.CLayer.boot","format/mp3/Constants.hx",177,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_409baf75496b5610_178_boot,"format.mp3.CLayer","boot",0x6a6fd4dd,"format.mp3.CLayer.boot","format/mp3/Constants.hx",178,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_409baf75496b5610_179_boot,"format.mp3.CLayer","boot",0x6a6fd4dd,"format.mp3.CLayer.boot","format/mp3/Constants.hx",179,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_409baf75496b5610_180_boot,"format.mp3.CLayer","boot",0x6a6fd4dd,"format.mp3.CLayer.boot","format/mp3/Constants.hx",180,0x7e2fda06)
namespace format{
namespace mp3{

void CLayer_obj::__construct() { }

Dynamic CLayer_obj::__CreateEmpty() { return new CLayer_obj; }

void *CLayer_obj::_hx_vtable = 0;

Dynamic CLayer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CLayer_obj > _hx_result = new CLayer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CLayer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20a0ada7;
}

int CLayer_obj::LReserved;

int CLayer_obj::LLayer3;

int CLayer_obj::LLayer2;

int CLayer_obj::LLayer1;

int CLayer_obj::enum2Num( ::format::mp3::Layer l){
            	HX_STACKFRAME(&_hx_pos_409baf75496b5610_183_enum2Num)
HXDLIN( 183)		switch((int)(l->_hx_getIndex())){
            			case (int)0: {
HXLINE( 187)				return ::format::mp3::CLayer_obj::LReserved;
            			}
            			break;
            			case (int)1: {
HXLINE( 184)				return ::format::mp3::CLayer_obj::LLayer3;
            			}
            			break;
            			case (int)2: {
HXLINE( 185)				return ::format::mp3::CLayer_obj::LLayer2;
            			}
            			break;
            			case (int)3: {
HXLINE( 186)				return ::format::mp3::CLayer_obj::LLayer1;
            			}
            			break;
            		}
HXLINE( 183)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CLayer_obj,enum2Num,return )

 ::format::mp3::Layer CLayer_obj::num2Enum(int l){
            	HX_STACKFRAME(&_hx_pos_409baf75496b5610_192_num2Enum)
HXDLIN( 192)		switch((int)(l)){
            			case (int)1: {
HXLINE( 193)				return ::format::mp3::Layer_obj::Layer3_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 194)				return ::format::mp3::Layer_obj::Layer2_dyn();
            			}
            			break;
            			case (int)3: {
HXLINE( 195)				return ::format::mp3::Layer_obj::Layer1_dyn();
            			}
            			break;
            			default:{
HXLINE( 196)				return ::format::mp3::Layer_obj::LayerReserved_dyn();
            			}
            		}
HXLINE( 192)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CLayer_obj,num2Enum,return )


CLayer_obj::CLayer_obj()
{
}

bool CLayer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"LLayer3") ) { outValue = ( LLayer3 ); return true; }
		if (HX_FIELD_EQ(inName,"LLayer2") ) { outValue = ( LLayer2 ); return true; }
		if (HX_FIELD_EQ(inName,"LLayer1") ) { outValue = ( LLayer1 ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"enum2Num") ) { outValue = enum2Num_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"num2Enum") ) { outValue = num2Enum_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LReserved") ) { outValue = ( LReserved ); return true; }
	}
	return false;
}

bool CLayer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"LLayer3") ) { LLayer3=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"LLayer2") ) { LLayer2=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"LLayer1") ) { LLayer1=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LReserved") ) { LReserved=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CLayer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CLayer_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CLayer_obj::LReserved,HX_("LReserved",14,df,02,c8)},
	{::hx::fsInt,(void *) &CLayer_obj::LLayer3,HX_("LLayer3",ae,ca,a4,e5)},
	{::hx::fsInt,(void *) &CLayer_obj::LLayer2,HX_("LLayer2",ad,ca,a4,e5)},
	{::hx::fsInt,(void *) &CLayer_obj::LLayer1,HX_("LLayer1",ac,ca,a4,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CLayer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CLayer_obj::LReserved,"LReserved");
	HX_MARK_MEMBER_NAME(CLayer_obj::LLayer3,"LLayer3");
	HX_MARK_MEMBER_NAME(CLayer_obj::LLayer2,"LLayer2");
	HX_MARK_MEMBER_NAME(CLayer_obj::LLayer1,"LLayer1");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CLayer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CLayer_obj::LReserved,"LReserved");
	HX_VISIT_MEMBER_NAME(CLayer_obj::LLayer3,"LLayer3");
	HX_VISIT_MEMBER_NAME(CLayer_obj::LLayer2,"LLayer2");
	HX_VISIT_MEMBER_NAME(CLayer_obj::LLayer1,"LLayer1");
};

#endif

::hx::Class CLayer_obj::__mClass;

static ::String CLayer_obj_sStaticFields[] = {
	HX_("LReserved",14,df,02,c8),
	HX_("LLayer3",ae,ca,a4,e5),
	HX_("LLayer2",ad,ca,a4,e5),
	HX_("LLayer1",ac,ca,a4,e5),
	HX_("enum2Num",b5,c0,d6,1a),
	HX_("num2Enum",4d,3c,db,21),
	::String(null())
};

void CLayer_obj::__register()
{
	CLayer_obj _hx_dummy;
	CLayer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.mp3.CLayer",a3,cf,97,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CLayer_obj::__GetStatic;
	__mClass->mSetStaticField = &CLayer_obj::__SetStatic;
	__mClass->mMarkFunc = CLayer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CLayer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CLayer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CLayer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CLayer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CLayer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CLayer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_409baf75496b5610_177_boot)
HXDLIN( 177)		LReserved = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_409baf75496b5610_178_boot)
HXDLIN( 178)		LLayer3 = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_409baf75496b5610_179_boot)
HXDLIN( 179)		LLayer2 = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_409baf75496b5610_180_boot)
HXDLIN( 180)		LLayer1 = 3;
            	}
}

} // end namespace format
} // end namespace mp3
