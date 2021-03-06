#include <hxcpp.h>

#ifndef INCLUDED_format_png_Chunk
#include <format/png/Chunk.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace format{
namespace png{

::format::png::Chunk Chunk_obj::CData( ::haxe::io::Bytes b)
{
	return ::hx::CreateEnum< Chunk_obj >(HX_("CData",0d,60,15,c1),2,1)->_hx_init(0,b);
}

::format::png::Chunk Chunk_obj::CEnd;

::format::png::Chunk Chunk_obj::CHeader( ::Dynamic h)
{
	return ::hx::CreateEnum< Chunk_obj >(HX_("CHeader",30,92,b2,13),1,1)->_hx_init(0,h);
}

::format::png::Chunk Chunk_obj::CPalette( ::haxe::io::Bytes b)
{
	return ::hx::CreateEnum< Chunk_obj >(HX_("CPalette",78,98,e8,31),3,1)->_hx_init(0,b);
}

::format::png::Chunk Chunk_obj::CUnknown(::String id, ::haxe::io::Bytes data)
{
	return ::hx::CreateEnum< Chunk_obj >(HX_("CUnknown",87,29,00,a7),4,2)->_hx_init(0,id)->_hx_init(1,data);
}

bool Chunk_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CData",0d,60,15,c1)) { outValue = Chunk_obj::CData_dyn(); return true; }
	if (inName==HX_("CEnd",58,07,7e,2c)) { outValue = Chunk_obj::CEnd; return true; }
	if (inName==HX_("CHeader",30,92,b2,13)) { outValue = Chunk_obj::CHeader_dyn(); return true; }
	if (inName==HX_("CPalette",78,98,e8,31)) { outValue = Chunk_obj::CPalette_dyn(); return true; }
	if (inName==HX_("CUnknown",87,29,00,a7)) { outValue = Chunk_obj::CUnknown_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Chunk_obj)

int Chunk_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CData",0d,60,15,c1)) return 2;
	if (inName==HX_("CEnd",58,07,7e,2c)) return 0;
	if (inName==HX_("CHeader",30,92,b2,13)) return 1;
	if (inName==HX_("CPalette",78,98,e8,31)) return 3;
	if (inName==HX_("CUnknown",87,29,00,a7)) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_obj,CData,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_obj,CHeader,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Chunk_obj,CPalette,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Chunk_obj,CUnknown,return)

int Chunk_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CData",0d,60,15,c1)) return 1;
	if (inName==HX_("CEnd",58,07,7e,2c)) return 0;
	if (inName==HX_("CHeader",30,92,b2,13)) return 1;
	if (inName==HX_("CPalette",78,98,e8,31)) return 1;
	if (inName==HX_("CUnknown",87,29,00,a7)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val Chunk_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CData",0d,60,15,c1)) return CData_dyn();
	if (inName==HX_("CEnd",58,07,7e,2c)) return CEnd;
	if (inName==HX_("CHeader",30,92,b2,13)) return CHeader_dyn();
	if (inName==HX_("CPalette",78,98,e8,31)) return CPalette_dyn();
	if (inName==HX_("CUnknown",87,29,00,a7)) return CUnknown_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Chunk_obj_sStaticFields[] = {
	HX_("CEnd",58,07,7e,2c),
	HX_("CHeader",30,92,b2,13),
	HX_("CData",0d,60,15,c1),
	HX_("CPalette",78,98,e8,31),
	HX_("CUnknown",87,29,00,a7),
	::String(null())
};

::hx::Class Chunk_obj::__mClass;

Dynamic __Create_Chunk_obj() { return new Chunk_obj; }

void Chunk_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.png.Chunk",d1,74,ea,0b), ::hx::TCanCast< Chunk_obj >,Chunk_obj_sStaticFields,0,
	&__Create_Chunk_obj, &__Create,
	&super::__SGetClass(), &CreateChunk_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Chunk_obj::__GetStatic;
}

void Chunk_obj::__boot()
{
CEnd = ::hx::CreateConstEnum< Chunk_obj >(HX_("CEnd",58,07,7e,2c),0);
}


} // end namespace format
} // end namespace png
