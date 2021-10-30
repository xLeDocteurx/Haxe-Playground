#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
#ifndef INCLUDED_hxd_fs_DummyConvert
#include <hxd/fs/DummyConvert.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_516a4285a5a938bb_273_new,"hxd.fs.DummyConvert","new",0x5fa98164,"hxd.fs.DummyConvert.new","hxd/fs/Convert.hx",273,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_516a4285a5a938bb_276_convert,"hxd.fs.DummyConvert","convert",0x82e680f7,"hxd.fs.DummyConvert.convert","hxd/fs/Convert.hx",276,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_516a4285a5a938bb_279_boot,"hxd.fs.DummyConvert","boot",0x4cc0b6ae,"hxd.fs.DummyConvert.boot","hxd/fs/Convert.hx",279,0x59888052)
namespace hxd{
namespace fs{

void DummyConvert_obj::__construct( ::Dynamic sourceExts,::String destExt){
            	HX_STACKFRAME(&_hx_pos_516a4285a5a938bb_273_new)
HXDLIN( 273)		super::__construct(sourceExts,destExt);
            	}

Dynamic DummyConvert_obj::__CreateEmpty() { return new DummyConvert_obj; }

void *DummyConvert_obj::_hx_vtable = 0;

Dynamic DummyConvert_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DummyConvert_obj > _hx_result = new DummyConvert_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DummyConvert_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41a64a24) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x41a64a24;
	} else {
		return inClassId==(int)0x7a5db4d6;
	}
}

void DummyConvert_obj::convert(){
            	HX_STACKFRAME(&_hx_pos_516a4285a5a938bb_276_convert)
HXDLIN( 276)		this->save(::haxe::io::Bytes_obj::alloc(0));
            	}


::Array< int > DummyConvert_obj::_;


::hx::ObjectPtr< DummyConvert_obj > DummyConvert_obj::__new( ::Dynamic sourceExts,::String destExt) {
	::hx::ObjectPtr< DummyConvert_obj > __this = new DummyConvert_obj();
	__this->__construct(sourceExts,destExt);
	return __this;
}

::hx::ObjectPtr< DummyConvert_obj > DummyConvert_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic sourceExts,::String destExt) {
	DummyConvert_obj *__this = (DummyConvert_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DummyConvert_obj), true, "hxd.fs.DummyConvert"));
	*(void **)__this = DummyConvert_obj::_hx_vtable;
	__this->__construct(sourceExts,destExt);
	return __this;
}

DummyConvert_obj::DummyConvert_obj()
{
}

::hx::Val DummyConvert_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DummyConvert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { outValue = ( _ ); return true; }
	}
	return false;
}

bool DummyConvert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { _=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DummyConvert_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DummyConvert_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &DummyConvert_obj::_,HX_("_",5f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DummyConvert_obj_sMemberFields[] = {
	HX_("convert",f3,fd,c9,1a),
	::String(null()) };

static void DummyConvert_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DummyConvert_obj::_,"_");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DummyConvert_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DummyConvert_obj::_,"_");
};

#endif

::hx::Class DummyConvert_obj::__mClass;

static ::String DummyConvert_obj_sStaticFields[] = {
	HX_("_",5f,00,00,00),
	::String(null())
};

void DummyConvert_obj::__register()
{
	DummyConvert_obj _hx_dummy;
	DummyConvert_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.DummyConvert",72,3f,b4,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DummyConvert_obj::__GetStatic;
	__mClass->mSetStaticField = &DummyConvert_obj::__SetStatic;
	__mClass->mMarkFunc = DummyConvert_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DummyConvert_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DummyConvert_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DummyConvert_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DummyConvert_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DummyConvert_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DummyConvert_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DummyConvert_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::Array< int > _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_516a4285a5a938bb_279_boot)
HXLINE( 280)			int _hx_tmp = ::hxd::fs::Convert_obj::_hx_register( ::hxd::fs::DummyConvert_obj::__alloc( HX_CTX ,null(),HX_("dummy",28,0e,bb,e1)));
HXLINE( 279)			return ::Array_obj< int >::__new(2)->init(0,_hx_tmp)->init(1,::hxd::fs::Convert_obj::_hx_register( ::hxd::fs::DummyConvert_obj::__alloc( HX_CTX ,null(),HX_("remove",44,9c,88,04))));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_516a4285a5a938bb_279_boot)
HXDLIN( 279)		_ = ( (::Array< int >)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace hxd
} // end namespace fs
