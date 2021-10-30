#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_CEmphasis
#include <format/mp3/CEmphasis.h>
#endif
#ifndef INCLUDED_format_mp3_Emphasis
#include <format/mp3/Emphasis.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1369b9198572d589_246_enum2Num,"format.mp3.CEmphasis","enum2Num",0x84042279,"format.mp3.CEmphasis.enum2Num","format/mp3/Constants.hx",246,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_1369b9198572d589_255_num2Enum,"format.mp3.CEmphasis","num2Enum",0x8b089e11,"format.mp3.CEmphasis.num2Enum","format/mp3/Constants.hx",255,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_1369b9198572d589_240_boot,"format.mp3.CEmphasis","boot",0xca7bb3f6,"format.mp3.CEmphasis.boot","format/mp3/Constants.hx",240,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_1369b9198572d589_241_boot,"format.mp3.CEmphasis","boot",0xca7bb3f6,"format.mp3.CEmphasis.boot","format/mp3/Constants.hx",241,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_1369b9198572d589_242_boot,"format.mp3.CEmphasis","boot",0xca7bb3f6,"format.mp3.CEmphasis.boot","format/mp3/Constants.hx",242,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_1369b9198572d589_243_boot,"format.mp3.CEmphasis","boot",0xca7bb3f6,"format.mp3.CEmphasis.boot","format/mp3/Constants.hx",243,0x7e2fda06)
namespace format{
namespace mp3{

void CEmphasis_obj::__construct() { }

Dynamic CEmphasis_obj::__CreateEmpty() { return new CEmphasis_obj; }

void *CEmphasis_obj::_hx_vtable = 0;

Dynamic CEmphasis_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CEmphasis_obj > _hx_result = new CEmphasis_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CEmphasis_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x446503a6;
}

int CEmphasis_obj::ENone;

int CEmphasis_obj::EMs50_15;

int CEmphasis_obj::EReserved;

int CEmphasis_obj::ECCIT_J17;

int CEmphasis_obj::enum2Num( ::format::mp3::Emphasis c){
            	HX_STACKFRAME(&_hx_pos_1369b9198572d589_246_enum2Num)
HXDLIN( 246)		switch((int)(c->_hx_getIndex())){
            			case (int)0: {
HXLINE( 247)				return 0;
            			}
            			break;
            			case (int)1: {
HXLINE( 248)				return 1;
            			}
            			break;
            			case (int)2: {
HXLINE( 249)				return 3;
            			}
            			break;
            			case (int)3: {
HXLINE( 250)				return 2;
            			}
            			break;
            		}
HXLINE( 246)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CEmphasis_obj,enum2Num,return )

 ::format::mp3::Emphasis CEmphasis_obj::num2Enum(int c){
            	HX_STACKFRAME(&_hx_pos_1369b9198572d589_255_num2Enum)
HXDLIN( 255)		switch((int)(c)){
            			case (int)0: {
HXLINE( 256)				return ::format::mp3::Emphasis_obj::NoEmphasis_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE( 257)				return ::format::mp3::Emphasis_obj::Ms50_15_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 259)				return ::format::mp3::Emphasis_obj::InvalidEmphasis_dyn();
            			}
            			break;
            			case (int)3: {
HXLINE( 258)				return ::format::mp3::Emphasis_obj::CCIT_J17_dyn();
            			}
            			break;
            			default:{
HXLINE( 260)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE( 255)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CEmphasis_obj,num2Enum,return )


CEmphasis_obj::CEmphasis_obj()
{
}

bool CEmphasis_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"enum2Num") ) { outValue = enum2Num_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"num2Enum") ) { outValue = num2Enum_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CEmphasis_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CEmphasis_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CEmphasis_obj::ENone,HX_("ENone",9d,45,89,ee)},
	{::hx::fsInt,(void *) &CEmphasis_obj::EMs50_15,HX_("EMs50_15",9d,36,d7,8b)},
	{::hx::fsInt,(void *) &CEmphasis_obj::EReserved,HX_("EReserved",0d,00,69,03)},
	{::hx::fsInt,(void *) &CEmphasis_obj::ECCIT_J17,HX_("ECCIT_J17",01,e8,1c,82)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CEmphasis_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CEmphasis_obj::ENone,"ENone");
	HX_MARK_MEMBER_NAME(CEmphasis_obj::EMs50_15,"EMs50_15");
	HX_MARK_MEMBER_NAME(CEmphasis_obj::EReserved,"EReserved");
	HX_MARK_MEMBER_NAME(CEmphasis_obj::ECCIT_J17,"ECCIT_J17");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CEmphasis_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CEmphasis_obj::ENone,"ENone");
	HX_VISIT_MEMBER_NAME(CEmphasis_obj::EMs50_15,"EMs50_15");
	HX_VISIT_MEMBER_NAME(CEmphasis_obj::EReserved,"EReserved");
	HX_VISIT_MEMBER_NAME(CEmphasis_obj::ECCIT_J17,"ECCIT_J17");
};

#endif

::hx::Class CEmphasis_obj::__mClass;

static ::String CEmphasis_obj_sStaticFields[] = {
	HX_("ENone",9d,45,89,ee),
	HX_("EMs50_15",9d,36,d7,8b),
	HX_("EReserved",0d,00,69,03),
	HX_("ECCIT_J17",01,e8,1c,82),
	HX_("enum2Num",b5,c0,d6,1a),
	HX_("num2Enum",4d,3c,db,21),
	::String(null())
};

void CEmphasis_obj::__register()
{
	CEmphasis_obj _hx_dummy;
	CEmphasis_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.mp3.CEmphasis",2a,47,6a,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CEmphasis_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CEmphasis_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CEmphasis_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CEmphasis_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CEmphasis_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CEmphasis_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CEmphasis_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CEmphasis_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1369b9198572d589_240_boot)
HXDLIN( 240)		ENone = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1369b9198572d589_241_boot)
HXDLIN( 241)		EMs50_15 = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1369b9198572d589_242_boot)
HXDLIN( 242)		EReserved = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1369b9198572d589_243_boot)
HXDLIN( 243)		ECCIT_J17 = 3;
            	}
}

} // end namespace format
} // end namespace mp3
