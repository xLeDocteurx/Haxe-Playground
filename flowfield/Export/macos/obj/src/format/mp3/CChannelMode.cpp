#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_CChannelMode
#include <format/mp3/CChannelMode.h>
#endif
#ifndef INCLUDED_format_mp3_ChannelMode
#include <format/mp3/ChannelMode.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2c76481a1a4afba6_215_enum2Num,"format.mp3.CChannelMode","enum2Num",0x553ea6cb,"format.mp3.CChannelMode.enum2Num","format/mp3/Constants.hx",215,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_2c76481a1a4afba6_224_num2Enum,"format.mp3.CChannelMode","num2Enum",0x5c432263,"format.mp3.CChannelMode.num2Enum","format/mp3/Constants.hx",224,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_2c76481a1a4afba6_209_boot,"format.mp3.CChannelMode","boot",0x07a52748,"format.mp3.CChannelMode.boot","format/mp3/Constants.hx",209,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_2c76481a1a4afba6_210_boot,"format.mp3.CChannelMode","boot",0x07a52748,"format.mp3.CChannelMode.boot","format/mp3/Constants.hx",210,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_2c76481a1a4afba6_211_boot,"format.mp3.CChannelMode","boot",0x07a52748,"format.mp3.CChannelMode.boot","format/mp3/Constants.hx",211,0x7e2fda06)
HX_LOCAL_STACK_FRAME(_hx_pos_2c76481a1a4afba6_212_boot,"format.mp3.CChannelMode","boot",0x07a52748,"format.mp3.CChannelMode.boot","format/mp3/Constants.hx",212,0x7e2fda06)
namespace format{
namespace mp3{

void CChannelMode_obj::__construct() { }

Dynamic CChannelMode_obj::__CreateEmpty() { return new CChannelMode_obj; }

void *CChannelMode_obj::_hx_vtable = 0;

Dynamic CChannelMode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CChannelMode_obj > _hx_result = new CChannelMode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CChannelMode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6e5e6254;
}

int CChannelMode_obj::CStereo;

int CChannelMode_obj::CJointStereo;

int CChannelMode_obj::CDualChannel;

int CChannelMode_obj::CMono;

int CChannelMode_obj::enum2Num( ::format::mp3::ChannelMode c){
            	HX_STACKFRAME(&_hx_pos_2c76481a1a4afba6_215_enum2Num)
HXDLIN( 215)		switch((int)(c->_hx_getIndex())){
            			case (int)0: {
HXLINE( 216)				return 0;
            			}
            			break;
            			case (int)1: {
HXLINE( 217)				return 1;
            			}
            			break;
            			case (int)2: {
HXLINE( 218)				return 2;
            			}
            			break;
            			case (int)3: {
HXLINE( 219)				return 3;
            			}
            			break;
            		}
HXLINE( 215)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CChannelMode_obj,enum2Num,return )

 ::format::mp3::ChannelMode CChannelMode_obj::num2Enum(int c){
            	HX_STACKFRAME(&_hx_pos_2c76481a1a4afba6_224_num2Enum)
HXDLIN( 224)		switch((int)(c)){
            			case (int)0: {
HXLINE( 225)				return ::format::mp3::ChannelMode_obj::Stereo_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE( 226)				return ::format::mp3::ChannelMode_obj::JointStereo_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 227)				return ::format::mp3::ChannelMode_obj::DualChannel_dyn();
            			}
            			break;
            			case (int)3: {
HXLINE( 228)				return ::format::mp3::ChannelMode_obj::Mono_dyn();
            			}
            			break;
            			default:{
HXLINE( 229)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE( 224)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CChannelMode_obj,num2Enum,return )


CChannelMode_obj::CChannelMode_obj()
{
}

bool CChannelMode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"enum2Num") ) { outValue = enum2Num_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"num2Enum") ) { outValue = num2Enum_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CChannelMode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CChannelMode_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CChannelMode_obj::CStereo,HX_("CStereo",db,b7,51,1f)},
	{::hx::fsInt,(void *) &CChannelMode_obj::CJointStereo,HX_("CJointStereo",9f,38,4d,03)},
	{::hx::fsInt,(void *) &CChannelMode_obj::CDualChannel,HX_("CDualChannel",e4,0d,1b,fb)},
	{::hx::fsInt,(void *) &CChannelMode_obj::CMono,HX_("CMono",06,e6,12,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CChannelMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CChannelMode_obj::CStereo,"CStereo");
	HX_MARK_MEMBER_NAME(CChannelMode_obj::CJointStereo,"CJointStereo");
	HX_MARK_MEMBER_NAME(CChannelMode_obj::CDualChannel,"CDualChannel");
	HX_MARK_MEMBER_NAME(CChannelMode_obj::CMono,"CMono");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CChannelMode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CChannelMode_obj::CStereo,"CStereo");
	HX_VISIT_MEMBER_NAME(CChannelMode_obj::CJointStereo,"CJointStereo");
	HX_VISIT_MEMBER_NAME(CChannelMode_obj::CDualChannel,"CDualChannel");
	HX_VISIT_MEMBER_NAME(CChannelMode_obj::CMono,"CMono");
};

#endif

::hx::Class CChannelMode_obj::__mClass;

static ::String CChannelMode_obj_sStaticFields[] = {
	HX_("CStereo",db,b7,51,1f),
	HX_("CJointStereo",9f,38,4d,03),
	HX_("CDualChannel",e4,0d,1b,fb),
	HX_("CMono",06,e6,12,c7),
	HX_("enum2Num",b5,c0,d6,1a),
	HX_("num2Enum",4d,3c,db,21),
	::String(null())
};

void CChannelMode_obj::__register()
{
	CChannelMode_obj _hx_dummy;
	CChannelMode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.mp3.CChannelMode",18,95,99,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CChannelMode_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CChannelMode_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CChannelMode_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CChannelMode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CChannelMode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CChannelMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CChannelMode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CChannelMode_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2c76481a1a4afba6_209_boot)
HXDLIN( 209)		CStereo = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2c76481a1a4afba6_210_boot)
HXDLIN( 210)		CJointStereo = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2c76481a1a4afba6_211_boot)
HXDLIN( 211)		CDualChannel = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2c76481a1a4afba6_212_boot)
HXDLIN( 212)		CMono = 3;
            	}
}

} // end namespace format
} // end namespace mp3
