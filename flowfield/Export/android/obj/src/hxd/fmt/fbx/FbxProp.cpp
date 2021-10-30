#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_FbxProp
#include <hxd/fmt/fbx/FbxProp.h>
#endif
namespace hxd{
namespace fmt{
namespace fbx{

::hxd::fmt::fbx::FbxProp FbxProp_obj::PBinary( ::haxe::io::Bytes v)
{
	return ::hx::CreateEnum< FbxProp_obj >(HX_("PBinary",71,4c,55,20),6,1)->_hx_init(0,v);
}

::hxd::fmt::fbx::FbxProp FbxProp_obj::PFloat(Float v)
{
	return ::hx::CreateEnum< FbxProp_obj >(HX_("PFloat",2c,13,51,92),1,1)->_hx_init(0,v);
}

::hxd::fmt::fbx::FbxProp FbxProp_obj::PFloats(::Array< Float > v)
{
	return ::hx::CreateEnum< FbxProp_obj >(HX_("PFloats",c7,b3,9f,74),5,1)->_hx_init(0,v);
}

::hxd::fmt::fbx::FbxProp FbxProp_obj::PIdent(::String i)
{
	return ::hx::CreateEnum< FbxProp_obj >(HX_("PIdent",80,90,33,47),3,1)->_hx_init(0,i);
}

::hxd::fmt::fbx::FbxProp FbxProp_obj::PInt(int v)
{
	return ::hx::CreateEnum< FbxProp_obj >(HX_("PInt",7f,d6,18,35),0,1)->_hx_init(0,v);
}

::hxd::fmt::fbx::FbxProp FbxProp_obj::PInts(::Array< int > v)
{
	return ::hx::CreateEnum< FbxProp_obj >(HX_("PInts",14,d9,a2,40),4,1)->_hx_init(0,v);
}

::hxd::fmt::fbx::FbxProp FbxProp_obj::PString(::String v)
{
	return ::hx::CreateEnum< FbxProp_obj >(HX_("PString",41,b9,79,44),2,1)->_hx_init(0,v);
}

bool FbxProp_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("PBinary",71,4c,55,20)) { outValue = FbxProp_obj::PBinary_dyn(); return true; }
	if (inName==HX_("PFloat",2c,13,51,92)) { outValue = FbxProp_obj::PFloat_dyn(); return true; }
	if (inName==HX_("PFloats",c7,b3,9f,74)) { outValue = FbxProp_obj::PFloats_dyn(); return true; }
	if (inName==HX_("PIdent",80,90,33,47)) { outValue = FbxProp_obj::PIdent_dyn(); return true; }
	if (inName==HX_("PInt",7f,d6,18,35)) { outValue = FbxProp_obj::PInt_dyn(); return true; }
	if (inName==HX_("PInts",14,d9,a2,40)) { outValue = FbxProp_obj::PInts_dyn(); return true; }
	if (inName==HX_("PString",41,b9,79,44)) { outValue = FbxProp_obj::PString_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FbxProp_obj)

int FbxProp_obj::__FindIndex(::String inName)
{
	if (inName==HX_("PBinary",71,4c,55,20)) return 6;
	if (inName==HX_("PFloat",2c,13,51,92)) return 1;
	if (inName==HX_("PFloats",c7,b3,9f,74)) return 5;
	if (inName==HX_("PIdent",80,90,33,47)) return 3;
	if (inName==HX_("PInt",7f,d6,18,35)) return 0;
	if (inName==HX_("PInts",14,d9,a2,40)) return 4;
	if (inName==HX_("PString",41,b9,79,44)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxProp_obj,PBinary,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxProp_obj,PFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxProp_obj,PFloats,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxProp_obj,PIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxProp_obj,PInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxProp_obj,PInts,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxProp_obj,PString,return)

int FbxProp_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("PBinary",71,4c,55,20)) return 1;
	if (inName==HX_("PFloat",2c,13,51,92)) return 1;
	if (inName==HX_("PFloats",c7,b3,9f,74)) return 1;
	if (inName==HX_("PIdent",80,90,33,47)) return 1;
	if (inName==HX_("PInt",7f,d6,18,35)) return 1;
	if (inName==HX_("PInts",14,d9,a2,40)) return 1;
	if (inName==HX_("PString",41,b9,79,44)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val FbxProp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("PBinary",71,4c,55,20)) return PBinary_dyn();
	if (inName==HX_("PFloat",2c,13,51,92)) return PFloat_dyn();
	if (inName==HX_("PFloats",c7,b3,9f,74)) return PFloats_dyn();
	if (inName==HX_("PIdent",80,90,33,47)) return PIdent_dyn();
	if (inName==HX_("PInt",7f,d6,18,35)) return PInt_dyn();
	if (inName==HX_("PInts",14,d9,a2,40)) return PInts_dyn();
	if (inName==HX_("PString",41,b9,79,44)) return PString_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FbxProp_obj_sStaticFields[] = {
	HX_("PInt",7f,d6,18,35),
	HX_("PFloat",2c,13,51,92),
	HX_("PString",41,b9,79,44),
	HX_("PIdent",80,90,33,47),
	HX_("PInts",14,d9,a2,40),
	HX_("PFloats",c7,b3,9f,74),
	HX_("PBinary",71,4c,55,20),
	::String(null())
};

::hx::Class FbxProp_obj::__mClass;

Dynamic __Create_FbxProp_obj() { return new FbxProp_obj; }

void FbxProp_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.fmt.fbx.FbxProp",f2,14,3a,42), ::hx::TCanCast< FbxProp_obj >,FbxProp_obj_sStaticFields,0,
	&__Create_FbxProp_obj, &__Create,
	&super::__SGetClass(), &CreateFbxProp_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FbxProp_obj::__GetStatic;
}

void FbxProp_obj::__boot()
{
}


} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
