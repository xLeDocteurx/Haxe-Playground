#include <hxcpp.h>

#ifndef INCLUDED_format_tools_Deflate
#include <format/tools/Deflate.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4929a47542c6b4fd_34_run,"format.tools.Deflate","run",0x6ec402de,"format.tools.Deflate.run","format/tools/Deflate.hx",34,0x0ea6501f)
namespace format{
namespace tools{

void Deflate_obj::__construct() { }

Dynamic Deflate_obj::__CreateEmpty() { return new Deflate_obj; }

void *Deflate_obj::_hx_vtable = 0;

Dynamic Deflate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Deflate_obj > _hx_result = new Deflate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Deflate_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2efe2a2b;
}

 ::haxe::io::Bytes Deflate_obj::run( ::haxe::io::Bytes b, ::Dynamic __o_level){
            		 ::Dynamic level = __o_level;
            		if (::hx::IsNull(__o_level)) level = 9;
            	HX_STACKFRAME(&_hx_pos_4929a47542c6b4fd_34_run)
HXDLIN(  34)		return ::haxe::zip::Compress_obj::run(b,( (int)(level) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Deflate_obj,run,return )


Deflate_obj::Deflate_obj()
{
}

bool Deflate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Deflate_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Deflate_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Deflate_obj::__mClass;

static ::String Deflate_obj_sStaticFields[] = {
	HX_("run",4b,e7,56,00),
	::String(null())
};

void Deflate_obj::__register()
{
	Deflate_obj _hx_dummy;
	Deflate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.tools.Deflate",81,76,61,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Deflate_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Deflate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Deflate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Deflate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Deflate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace tools
