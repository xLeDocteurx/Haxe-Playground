#include <hxcpp.h>

#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
#ifndef INCLUDED_hxd_fs_ConvertWAV2MP3
#include <hxd/fs/ConvertWAV2MP3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e9bfbbbcdad0cc7_114_new,"hxd.fs.ConvertWAV2MP3","new",0x98bed270,"hxd.fs.ConvertWAV2MP3.new","hxd/fs/Convert.hx",114,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_8e9bfbbbcdad0cc7_118_convert,"hxd.fs.ConvertWAV2MP3","convert",0xc8474803,"hxd.fs.ConvertWAV2MP3.convert","hxd/fs/Convert.hx",118,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_8e9bfbbbcdad0cc7_121_boot,"hxd.fs.ConvertWAV2MP3","boot",0x06525022,"hxd.fs.ConvertWAV2MP3.boot","hxd/fs/Convert.hx",121,0x59888052)
namespace hxd{
namespace fs{

void ConvertWAV2MP3_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8e9bfbbbcdad0cc7_114_new)
HXDLIN( 114)		super::__construct(HX_("wav",2c,a1,5a,00),HX_("mp3",70,17,53,00));
            	}

Dynamic ConvertWAV2MP3_obj::__CreateEmpty() { return new ConvertWAV2MP3_obj; }

void *ConvertWAV2MP3_obj::_hx_vtable = 0;

Dynamic ConvertWAV2MP3_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConvertWAV2MP3_obj > _hx_result = new ConvertWAV2MP3_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConvertWAV2MP3_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x47d11f78) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x47d11f78;
	} else {
		return inClassId==(int)0x7a5db4d6;
	}
}

void ConvertWAV2MP3_obj::convert(){
            	HX_STACKFRAME(&_hx_pos_8e9bfbbbcdad0cc7_118_convert)
HXDLIN( 118)		this->command(HX_("lame",0d,05,ad,47),::Array_obj< ::String >::__new(6)->init(0,HX_("--resample",7d,93,3f,df))->init(1,HX_("44100",f1,9a,5a,13))->init(2,HX_("--silent",f5,65,f1,14))->init(3,HX_("-h",9b,27,00,00))->init(4,this->srcPath)->init(5,this->dstPath));
            	}


int ConvertWAV2MP3_obj::_;


::hx::ObjectPtr< ConvertWAV2MP3_obj > ConvertWAV2MP3_obj::__new() {
	::hx::ObjectPtr< ConvertWAV2MP3_obj > __this = new ConvertWAV2MP3_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ConvertWAV2MP3_obj > ConvertWAV2MP3_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ConvertWAV2MP3_obj *__this = (ConvertWAV2MP3_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConvertWAV2MP3_obj), true, "hxd.fs.ConvertWAV2MP3"));
	*(void **)__this = ConvertWAV2MP3_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConvertWAV2MP3_obj::ConvertWAV2MP3_obj()
{
}

::hx::Val ConvertWAV2MP3_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConvertWAV2MP3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { outValue = ( _ ); return true; }
	}
	return false;
}

bool ConvertWAV2MP3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { _=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ConvertWAV2MP3_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ConvertWAV2MP3_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ConvertWAV2MP3_obj::_,HX_("_",5f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ConvertWAV2MP3_obj_sMemberFields[] = {
	HX_("convert",f3,fd,c9,1a),
	::String(null()) };

static void ConvertWAV2MP3_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvertWAV2MP3_obj::_,"_");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConvertWAV2MP3_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvertWAV2MP3_obj::_,"_");
};

#endif

::hx::Class ConvertWAV2MP3_obj::__mClass;

static ::String ConvertWAV2MP3_obj_sStaticFields[] = {
	HX_("_",5f,00,00,00),
	::String(null())
};

void ConvertWAV2MP3_obj::__register()
{
	ConvertWAV2MP3_obj _hx_dummy;
	ConvertWAV2MP3_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.ConvertWAV2MP3",7e,1a,f1,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConvertWAV2MP3_obj::__GetStatic;
	__mClass->mSetStaticField = &ConvertWAV2MP3_obj::__SetStatic;
	__mClass->mMarkFunc = ConvertWAV2MP3_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConvertWAV2MP3_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConvertWAV2MP3_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConvertWAV2MP3_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConvertWAV2MP3_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvertWAV2MP3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvertWAV2MP3_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConvertWAV2MP3_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_8e9bfbbbcdad0cc7_121_boot)
HXDLIN( 121)		_ = ::hxd::fs::Convert_obj::_hx_register( ::hxd::fs::ConvertWAV2MP3_obj::__alloc( HX_CTX ));
            	}
}

} // end namespace hxd
} // end namespace fs
