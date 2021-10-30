#include <hxcpp.h>

#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
namespace hxd{

::hxd::PixelFormat PixelFormat_obj::ARGB;

::hxd::PixelFormat PixelFormat_obj::BGRA;

::hxd::PixelFormat PixelFormat_obj::R16F;

::hxd::PixelFormat PixelFormat_obj::R16U;

::hxd::PixelFormat PixelFormat_obj::R32F;

::hxd::PixelFormat PixelFormat_obj::R8;

::hxd::PixelFormat PixelFormat_obj::RG11B10UF;

::hxd::PixelFormat PixelFormat_obj::RG16F;

::hxd::PixelFormat PixelFormat_obj::RG32F;

::hxd::PixelFormat PixelFormat_obj::RG8;

::hxd::PixelFormat PixelFormat_obj::RGB10A2;

::hxd::PixelFormat PixelFormat_obj::RGB16F;

::hxd::PixelFormat PixelFormat_obj::RGB16U;

::hxd::PixelFormat PixelFormat_obj::RGB32F;

::hxd::PixelFormat PixelFormat_obj::RGB8;

::hxd::PixelFormat PixelFormat_obj::RGBA;

::hxd::PixelFormat PixelFormat_obj::RGBA16F;

::hxd::PixelFormat PixelFormat_obj::RGBA16U;

::hxd::PixelFormat PixelFormat_obj::RGBA32F;

::hxd::PixelFormat PixelFormat_obj::S3TC(int v)
{
	return ::hx::CreateEnum< PixelFormat_obj >(HX_("S3TC",ef,b1,03,37),21,1)->_hx_init(0,v);
}

::hxd::PixelFormat PixelFormat_obj::SRGB;

::hxd::PixelFormat PixelFormat_obj::SRGB_ALPHA;

bool PixelFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ARGB",4c,55,35,2b)) { outValue = PixelFormat_obj::ARGB; return true; }
	if (inName==HX_("BGRA",b4,3c,d6,2b)) { outValue = PixelFormat_obj::BGRA; return true; }
	if (inName==HX_("R16F",af,dc,58,36)) { outValue = PixelFormat_obj::R16F; return true; }
	if (inName==HX_("R16U",be,dc,58,36)) { outValue = PixelFormat_obj::R16U; return true; }
	if (inName==HX_("R32F",b5,5d,5a,36)) { outValue = PixelFormat_obj::R32F; return true; }
	if (inName==HX_("R8",a6,47,00,00)) { outValue = PixelFormat_obj::R8; return true; }
	if (inName==HX_("RG11B10UF",3d,26,64,1c)) { outValue = PixelFormat_obj::RG11B10UF; return true; }
	if (inName==HX_("RG16F",2c,15,ef,65)) { outValue = PixelFormat_obj::RG16F; return true; }
	if (inName==HX_("RG32F",32,96,f0,65)) { outValue = PixelFormat_obj::RG32F; return true; }
	if (inName==HX_("RG8",e3,76,3e,00)) { outValue = PixelFormat_obj::RG8; return true; }
	if (inName==HX_("RGB10A2",dd,0a,31,d6)) { outValue = PixelFormat_obj::RGB10A2; return true; }
	if (inName==HX_("RGB16F",f4,38,7c,d6)) { outValue = PixelFormat_obj::RGB16F; return true; }
	if (inName==HX_("RGB16U",03,39,7c,d6)) { outValue = PixelFormat_obj::RGB16U; return true; }
	if (inName==HX_("RGB32F",fa,b9,7d,d6)) { outValue = PixelFormat_obj::RGB32F; return true; }
	if (inName==HX_("RGB8",ab,98,69,36)) { outValue = PixelFormat_obj::RGB8; return true; }
	if (inName==HX_("RGBA",b4,98,69,36)) { outValue = PixelFormat_obj::RGBA; return true; }
	if (inName==HX_("RGBA16F",8d,2d,c5,e0)) { outValue = PixelFormat_obj::RGBA16F; return true; }
	if (inName==HX_("RGBA16U",9c,2d,c5,e0)) { outValue = PixelFormat_obj::RGBA16U; return true; }
	if (inName==HX_("RGBA32F",93,ae,c6,e0)) { outValue = PixelFormat_obj::RGBA32F; return true; }
	if (inName==HX_("S3TC",ef,b1,03,37)) { outValue = PixelFormat_obj::S3TC_dyn(); return true; }
	if (inName==HX_("SRGB",7a,2c,1b,37)) { outValue = PixelFormat_obj::SRGB; return true; }
	if (inName==HX_("SRGB_ALPHA",79,ea,6a,1a)) { outValue = PixelFormat_obj::SRGB_ALPHA; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(PixelFormat_obj)

int PixelFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ARGB",4c,55,35,2b)) return 0;
	if (inName==HX_("BGRA",b4,3c,d6,2b)) return 1;
	if (inName==HX_("R16F",af,dc,58,36)) return 6;
	if (inName==HX_("R16U",be,dc,58,36)) return 18;
	if (inName==HX_("R32F",b5,5d,5a,36)) return 7;
	if (inName==HX_("R8",a6,47,00,00)) return 5;
	if (inName==HX_("RG11B10UF",3d,26,64,1c)) return 17;
	if (inName==HX_("RG16F",2c,15,ef,65)) return 9;
	if (inName==HX_("RG32F",32,96,f0,65)) return 10;
	if (inName==HX_("RG8",e3,76,3e,00)) return 8;
	if (inName==HX_("RGB10A2",dd,0a,31,d6)) return 16;
	if (inName==HX_("RGB16F",f4,38,7c,d6)) return 12;
	if (inName==HX_("RGB16U",03,39,7c,d6)) return 19;
	if (inName==HX_("RGB32F",fa,b9,7d,d6)) return 13;
	if (inName==HX_("RGB8",ab,98,69,36)) return 11;
	if (inName==HX_("RGBA",b4,98,69,36)) return 2;
	if (inName==HX_("RGBA16F",8d,2d,c5,e0)) return 3;
	if (inName==HX_("RGBA16U",9c,2d,c5,e0)) return 20;
	if (inName==HX_("RGBA32F",93,ae,c6,e0)) return 4;
	if (inName==HX_("S3TC",ef,b1,03,37)) return 21;
	if (inName==HX_("SRGB",7a,2c,1b,37)) return 14;
	if (inName==HX_("SRGB_ALPHA",79,ea,6a,1a)) return 15;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelFormat_obj,S3TC,return)

int PixelFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ARGB",4c,55,35,2b)) return 0;
	if (inName==HX_("BGRA",b4,3c,d6,2b)) return 0;
	if (inName==HX_("R16F",af,dc,58,36)) return 0;
	if (inName==HX_("R16U",be,dc,58,36)) return 0;
	if (inName==HX_("R32F",b5,5d,5a,36)) return 0;
	if (inName==HX_("R8",a6,47,00,00)) return 0;
	if (inName==HX_("RG11B10UF",3d,26,64,1c)) return 0;
	if (inName==HX_("RG16F",2c,15,ef,65)) return 0;
	if (inName==HX_("RG32F",32,96,f0,65)) return 0;
	if (inName==HX_("RG8",e3,76,3e,00)) return 0;
	if (inName==HX_("RGB10A2",dd,0a,31,d6)) return 0;
	if (inName==HX_("RGB16F",f4,38,7c,d6)) return 0;
	if (inName==HX_("RGB16U",03,39,7c,d6)) return 0;
	if (inName==HX_("RGB32F",fa,b9,7d,d6)) return 0;
	if (inName==HX_("RGB8",ab,98,69,36)) return 0;
	if (inName==HX_("RGBA",b4,98,69,36)) return 0;
	if (inName==HX_("RGBA16F",8d,2d,c5,e0)) return 0;
	if (inName==HX_("RGBA16U",9c,2d,c5,e0)) return 0;
	if (inName==HX_("RGBA32F",93,ae,c6,e0)) return 0;
	if (inName==HX_("S3TC",ef,b1,03,37)) return 1;
	if (inName==HX_("SRGB",7a,2c,1b,37)) return 0;
	if (inName==HX_("SRGB_ALPHA",79,ea,6a,1a)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val PixelFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ARGB",4c,55,35,2b)) return ARGB;
	if (inName==HX_("BGRA",b4,3c,d6,2b)) return BGRA;
	if (inName==HX_("R16F",af,dc,58,36)) return R16F;
	if (inName==HX_("R16U",be,dc,58,36)) return R16U;
	if (inName==HX_("R32F",b5,5d,5a,36)) return R32F;
	if (inName==HX_("R8",a6,47,00,00)) return R8;
	if (inName==HX_("RG11B10UF",3d,26,64,1c)) return RG11B10UF;
	if (inName==HX_("RG16F",2c,15,ef,65)) return RG16F;
	if (inName==HX_("RG32F",32,96,f0,65)) return RG32F;
	if (inName==HX_("RG8",e3,76,3e,00)) return RG8;
	if (inName==HX_("RGB10A2",dd,0a,31,d6)) return RGB10A2;
	if (inName==HX_("RGB16F",f4,38,7c,d6)) return RGB16F;
	if (inName==HX_("RGB16U",03,39,7c,d6)) return RGB16U;
	if (inName==HX_("RGB32F",fa,b9,7d,d6)) return RGB32F;
	if (inName==HX_("RGB8",ab,98,69,36)) return RGB8;
	if (inName==HX_("RGBA",b4,98,69,36)) return RGBA;
	if (inName==HX_("RGBA16F",8d,2d,c5,e0)) return RGBA16F;
	if (inName==HX_("RGBA16U",9c,2d,c5,e0)) return RGBA16U;
	if (inName==HX_("RGBA32F",93,ae,c6,e0)) return RGBA32F;
	if (inName==HX_("S3TC",ef,b1,03,37)) return S3TC_dyn();
	if (inName==HX_("SRGB",7a,2c,1b,37)) return SRGB;
	if (inName==HX_("SRGB_ALPHA",79,ea,6a,1a)) return SRGB_ALPHA;
	return super::__Field(inName,inCallProp);
}

static ::String PixelFormat_obj_sStaticFields[] = {
	HX_("ARGB",4c,55,35,2b),
	HX_("BGRA",b4,3c,d6,2b),
	HX_("RGBA",b4,98,69,36),
	HX_("RGBA16F",8d,2d,c5,e0),
	HX_("RGBA32F",93,ae,c6,e0),
	HX_("R8",a6,47,00,00),
	HX_("R16F",af,dc,58,36),
	HX_("R32F",b5,5d,5a,36),
	HX_("RG8",e3,76,3e,00),
	HX_("RG16F",2c,15,ef,65),
	HX_("RG32F",32,96,f0,65),
	HX_("RGB8",ab,98,69,36),
	HX_("RGB16F",f4,38,7c,d6),
	HX_("RGB32F",fa,b9,7d,d6),
	HX_("SRGB",7a,2c,1b,37),
	HX_("SRGB_ALPHA",79,ea,6a,1a),
	HX_("RGB10A2",dd,0a,31,d6),
	HX_("RG11B10UF",3d,26,64,1c),
	HX_("R16U",be,dc,58,36),
	HX_("RGB16U",03,39,7c,d6),
	HX_("RGBA16U",9c,2d,c5,e0),
	HX_("S3TC",ef,b1,03,37),
	::String(null())
};

::hx::Class PixelFormat_obj::__mClass;

Dynamic __Create_PixelFormat_obj() { return new PixelFormat_obj; }

void PixelFormat_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.PixelFormat",23,be,5c,2a), ::hx::TCanCast< PixelFormat_obj >,PixelFormat_obj_sStaticFields,0,
	&__Create_PixelFormat_obj, &__Create,
	&super::__SGetClass(), &CreatePixelFormat_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &PixelFormat_obj::__GetStatic;
}

void PixelFormat_obj::__boot()
{
ARGB = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("ARGB",4c,55,35,2b),0);
BGRA = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("BGRA",b4,3c,d6,2b),1);
R16F = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("R16F",af,dc,58,36),6);
R16U = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("R16U",be,dc,58,36),18);
R32F = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("R32F",b5,5d,5a,36),7);
R8 = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("R8",a6,47,00,00),5);
RG11B10UF = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RG11B10UF",3d,26,64,1c),17);
RG16F = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RG16F",2c,15,ef,65),9);
RG32F = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RG32F",32,96,f0,65),10);
RG8 = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RG8",e3,76,3e,00),8);
RGB10A2 = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RGB10A2",dd,0a,31,d6),16);
RGB16F = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RGB16F",f4,38,7c,d6),12);
RGB16U = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RGB16U",03,39,7c,d6),19);
RGB32F = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RGB32F",fa,b9,7d,d6),13);
RGB8 = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RGB8",ab,98,69,36),11);
RGBA = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RGBA",b4,98,69,36),2);
RGBA16F = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RGBA16F",8d,2d,c5,e0),3);
RGBA16U = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RGBA16U",9c,2d,c5,e0),20);
RGBA32F = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("RGBA32F",93,ae,c6,e0),4);
SRGB = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("SRGB",7a,2c,1b,37),14);
SRGB_ALPHA = ::hx::CreateConstEnum< PixelFormat_obj >(HX_("SRGB_ALPHA",79,ea,6a,1a),15);
}


} // end namespace hxd
