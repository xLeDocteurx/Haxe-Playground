#include <hxcpp.h>

#ifndef INCLUDED_format_tools_Inflate
#include <format/tools/Inflate.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_929f2189b161c1a6_34_run,"format.tools.Inflate","run",0xb5ba51fa,"format.tools.Inflate.run","format/tools/Inflate.hx",34,0x3a975883)
namespace format{
namespace tools{

void Inflate_obj::__construct() { }

Dynamic Inflate_obj::__CreateEmpty() { return new Inflate_obj; }

void *Inflate_obj::_hx_vtable = 0;

Dynamic Inflate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Inflate_obj > _hx_result = new Inflate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Inflate_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x114caee3;
}

 ::haxe::io::Bytes Inflate_obj::run( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_929f2189b161c1a6_34_run)
HXDLIN(  34)		return ::haxe::zip::Uncompress_obj::run(bytes,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Inflate_obj,run,return )


Inflate_obj::Inflate_obj()
{
}

bool Inflate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Inflate_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Inflate_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Inflate_obj::__mClass;

static ::String Inflate_obj_sStaticFields[] = {
	HX_("run",4b,e7,56,00),
	::String(null())
};

void Inflate_obj::__register()
{
	Inflate_obj _hx_dummy;
	Inflate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.tools.Inflate",9d,07,83,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Inflate_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Inflate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Inflate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Inflate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Inflate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace tools
