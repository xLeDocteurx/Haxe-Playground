#include <hxcpp.h>

#ifndef INCLUDED_format_mp3_Bitrate
#include <format/mp3/Bitrate.h>
#endif
namespace format{
namespace mp3{

::format::mp3::Bitrate Bitrate_obj::BR_112;

::format::mp3::Bitrate Bitrate_obj::BR_128;

::format::mp3::Bitrate Bitrate_obj::BR_144;

::format::mp3::Bitrate Bitrate_obj::BR_16;

::format::mp3::Bitrate Bitrate_obj::BR_160;

::format::mp3::Bitrate Bitrate_obj::BR_176;

::format::mp3::Bitrate Bitrate_obj::BR_192;

::format::mp3::Bitrate Bitrate_obj::BR_224;

::format::mp3::Bitrate Bitrate_obj::BR_24;

::format::mp3::Bitrate Bitrate_obj::BR_256;

::format::mp3::Bitrate Bitrate_obj::BR_288;

::format::mp3::Bitrate Bitrate_obj::BR_32;

::format::mp3::Bitrate Bitrate_obj::BR_320;

::format::mp3::Bitrate Bitrate_obj::BR_352;

::format::mp3::Bitrate Bitrate_obj::BR_384;

::format::mp3::Bitrate Bitrate_obj::BR_40;

::format::mp3::Bitrate Bitrate_obj::BR_416;

::format::mp3::Bitrate Bitrate_obj::BR_448;

::format::mp3::Bitrate Bitrate_obj::BR_48;

::format::mp3::Bitrate Bitrate_obj::BR_56;

::format::mp3::Bitrate Bitrate_obj::BR_64;

::format::mp3::Bitrate Bitrate_obj::BR_8;

::format::mp3::Bitrate Bitrate_obj::BR_80;

::format::mp3::Bitrate Bitrate_obj::BR_96;

::format::mp3::Bitrate Bitrate_obj::BR_Bad;

::format::mp3::Bitrate Bitrate_obj::BR_Free;

bool Bitrate_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BR_112",23,00,5a,d9)) { outValue = Bitrate_obj::BR_112; return true; }
	if (inName==HX_("BR_128",08,01,5a,d9)) { outValue = Bitrate_obj::BR_128; return true; }
	if (inName==HX_("BR_144",c2,02,5a,d9)) { outValue = Bitrate_obj::BR_144; return true; }
	if (inName==HX_("BR_16",34,09,ee,36)) { outValue = Bitrate_obj::BR_16; return true; }
	if (inName==HX_("BR_160",7c,04,5a,d9)) { outValue = Bitrate_obj::BR_160; return true; }
	if (inName==HX_("BR_176",61,05,5a,d9)) { outValue = Bitrate_obj::BR_176; return true; }
	if (inName==HX_("BR_192",1b,07,5a,d9)) { outValue = Bitrate_obj::BR_192; return true; }
	if (inName==HX_("BR_224",45,c3,5a,d9)) { outValue = Bitrate_obj::BR_224; return true; }
	if (inName==HX_("BR_24",11,0a,ee,36)) { outValue = Bitrate_obj::BR_24; return true; }
	if (inName==HX_("BR_256",e4,c5,5a,d9)) { outValue = Bitrate_obj::BR_256; return true; }
	if (inName==HX_("BR_288",83,c8,5a,d9)) { outValue = Bitrate_obj::BR_288; return true; }
	if (inName==HX_("BR_32",ee,0a,ee,36)) { outValue = Bitrate_obj::BR_32; return true; }
	if (inName==HX_("BR_320",82,85,5b,d9)) { outValue = Bitrate_obj::BR_320; return true; }
	if (inName==HX_("BR_352",21,88,5b,d9)) { outValue = Bitrate_obj::BR_352; return true; }
	if (inName==HX_("BR_384",c0,8a,5b,d9)) { outValue = Bitrate_obj::BR_384; return true; }
	if (inName==HX_("BR_40",cb,0b,ee,36)) { outValue = Bitrate_obj::BR_40; return true; }
	if (inName==HX_("BR_416",ea,46,5c,d9)) { outValue = Bitrate_obj::BR_416; return true; }
	if (inName==HX_("BR_448",89,49,5c,d9)) { outValue = Bitrate_obj::BR_448; return true; }
	if (inName==HX_("BR_48",d3,0b,ee,36)) { outValue = Bitrate_obj::BR_48; return true; }
	if (inName==HX_("BR_56",b0,0c,ee,36)) { outValue = Bitrate_obj::BR_56; return true; }
	if (inName==HX_("BR_64",8d,0d,ee,36)) { outValue = Bitrate_obj::BR_64; return true; }
	if (inName==HX_("BR_8",c9,a0,de,2b)) { outValue = Bitrate_obj::BR_8; return true; }
	if (inName==HX_("BR_80",47,0f,ee,36)) { outValue = Bitrate_obj::BR_80; return true; }
	if (inName==HX_("BR_96",2c,10,ee,36)) { outValue = Bitrate_obj::BR_96; return true; }
	if (inName==HX_("BR_Bad",76,10,67,d9)) { outValue = Bitrate_obj::BR_Bad; return true; }
	if (inName==HX_("BR_Free",db,18,79,63)) { outValue = Bitrate_obj::BR_Free; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Bitrate_obj)

int Bitrate_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BR_112",23,00,5a,d9)) return 10;
	if (inName==HX_("BR_128",08,01,5a,d9)) return 11;
	if (inName==HX_("BR_144",c2,02,5a,d9)) return 12;
	if (inName==HX_("BR_16",34,09,ee,36)) return 1;
	if (inName==HX_("BR_160",7c,04,5a,d9)) return 13;
	if (inName==HX_("BR_176",61,05,5a,d9)) return 14;
	if (inName==HX_("BR_192",1b,07,5a,d9)) return 15;
	if (inName==HX_("BR_224",45,c3,5a,d9)) return 16;
	if (inName==HX_("BR_24",11,0a,ee,36)) return 2;
	if (inName==HX_("BR_256",e4,c5,5a,d9)) return 17;
	if (inName==HX_("BR_288",83,c8,5a,d9)) return 18;
	if (inName==HX_("BR_32",ee,0a,ee,36)) return 3;
	if (inName==HX_("BR_320",82,85,5b,d9)) return 19;
	if (inName==HX_("BR_352",21,88,5b,d9)) return 20;
	if (inName==HX_("BR_384",c0,8a,5b,d9)) return 21;
	if (inName==HX_("BR_40",cb,0b,ee,36)) return 4;
	if (inName==HX_("BR_416",ea,46,5c,d9)) return 22;
	if (inName==HX_("BR_448",89,49,5c,d9)) return 23;
	if (inName==HX_("BR_48",d3,0b,ee,36)) return 5;
	if (inName==HX_("BR_56",b0,0c,ee,36)) return 6;
	if (inName==HX_("BR_64",8d,0d,ee,36)) return 7;
	if (inName==HX_("BR_8",c9,a0,de,2b)) return 0;
	if (inName==HX_("BR_80",47,0f,ee,36)) return 8;
	if (inName==HX_("BR_96",2c,10,ee,36)) return 9;
	if (inName==HX_("BR_Bad",76,10,67,d9)) return 25;
	if (inName==HX_("BR_Free",db,18,79,63)) return 24;
	return super::__FindIndex(inName);
}

int Bitrate_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BR_112",23,00,5a,d9)) return 0;
	if (inName==HX_("BR_128",08,01,5a,d9)) return 0;
	if (inName==HX_("BR_144",c2,02,5a,d9)) return 0;
	if (inName==HX_("BR_16",34,09,ee,36)) return 0;
	if (inName==HX_("BR_160",7c,04,5a,d9)) return 0;
	if (inName==HX_("BR_176",61,05,5a,d9)) return 0;
	if (inName==HX_("BR_192",1b,07,5a,d9)) return 0;
	if (inName==HX_("BR_224",45,c3,5a,d9)) return 0;
	if (inName==HX_("BR_24",11,0a,ee,36)) return 0;
	if (inName==HX_("BR_256",e4,c5,5a,d9)) return 0;
	if (inName==HX_("BR_288",83,c8,5a,d9)) return 0;
	if (inName==HX_("BR_32",ee,0a,ee,36)) return 0;
	if (inName==HX_("BR_320",82,85,5b,d9)) return 0;
	if (inName==HX_("BR_352",21,88,5b,d9)) return 0;
	if (inName==HX_("BR_384",c0,8a,5b,d9)) return 0;
	if (inName==HX_("BR_40",cb,0b,ee,36)) return 0;
	if (inName==HX_("BR_416",ea,46,5c,d9)) return 0;
	if (inName==HX_("BR_448",89,49,5c,d9)) return 0;
	if (inName==HX_("BR_48",d3,0b,ee,36)) return 0;
	if (inName==HX_("BR_56",b0,0c,ee,36)) return 0;
	if (inName==HX_("BR_64",8d,0d,ee,36)) return 0;
	if (inName==HX_("BR_8",c9,a0,de,2b)) return 0;
	if (inName==HX_("BR_80",47,0f,ee,36)) return 0;
	if (inName==HX_("BR_96",2c,10,ee,36)) return 0;
	if (inName==HX_("BR_Bad",76,10,67,d9)) return 0;
	if (inName==HX_("BR_Free",db,18,79,63)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Bitrate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BR_112",23,00,5a,d9)) return BR_112;
	if (inName==HX_("BR_128",08,01,5a,d9)) return BR_128;
	if (inName==HX_("BR_144",c2,02,5a,d9)) return BR_144;
	if (inName==HX_("BR_16",34,09,ee,36)) return BR_16;
	if (inName==HX_("BR_160",7c,04,5a,d9)) return BR_160;
	if (inName==HX_("BR_176",61,05,5a,d9)) return BR_176;
	if (inName==HX_("BR_192",1b,07,5a,d9)) return BR_192;
	if (inName==HX_("BR_224",45,c3,5a,d9)) return BR_224;
	if (inName==HX_("BR_24",11,0a,ee,36)) return BR_24;
	if (inName==HX_("BR_256",e4,c5,5a,d9)) return BR_256;
	if (inName==HX_("BR_288",83,c8,5a,d9)) return BR_288;
	if (inName==HX_("BR_32",ee,0a,ee,36)) return BR_32;
	if (inName==HX_("BR_320",82,85,5b,d9)) return BR_320;
	if (inName==HX_("BR_352",21,88,5b,d9)) return BR_352;
	if (inName==HX_("BR_384",c0,8a,5b,d9)) return BR_384;
	if (inName==HX_("BR_40",cb,0b,ee,36)) return BR_40;
	if (inName==HX_("BR_416",ea,46,5c,d9)) return BR_416;
	if (inName==HX_("BR_448",89,49,5c,d9)) return BR_448;
	if (inName==HX_("BR_48",d3,0b,ee,36)) return BR_48;
	if (inName==HX_("BR_56",b0,0c,ee,36)) return BR_56;
	if (inName==HX_("BR_64",8d,0d,ee,36)) return BR_64;
	if (inName==HX_("BR_8",c9,a0,de,2b)) return BR_8;
	if (inName==HX_("BR_80",47,0f,ee,36)) return BR_80;
	if (inName==HX_("BR_96",2c,10,ee,36)) return BR_96;
	if (inName==HX_("BR_Bad",76,10,67,d9)) return BR_Bad;
	if (inName==HX_("BR_Free",db,18,79,63)) return BR_Free;
	return super::__Field(inName,inCallProp);
}

static ::String Bitrate_obj_sStaticFields[] = {
	HX_("BR_8",c9,a0,de,2b),
	HX_("BR_16",34,09,ee,36),
	HX_("BR_24",11,0a,ee,36),
	HX_("BR_32",ee,0a,ee,36),
	HX_("BR_40",cb,0b,ee,36),
	HX_("BR_48",d3,0b,ee,36),
	HX_("BR_56",b0,0c,ee,36),
	HX_("BR_64",8d,0d,ee,36),
	HX_("BR_80",47,0f,ee,36),
	HX_("BR_96",2c,10,ee,36),
	HX_("BR_112",23,00,5a,d9),
	HX_("BR_128",08,01,5a,d9),
	HX_("BR_144",c2,02,5a,d9),
	HX_("BR_160",7c,04,5a,d9),
	HX_("BR_176",61,05,5a,d9),
	HX_("BR_192",1b,07,5a,d9),
	HX_("BR_224",45,c3,5a,d9),
	HX_("BR_256",e4,c5,5a,d9),
	HX_("BR_288",83,c8,5a,d9),
	HX_("BR_320",82,85,5b,d9),
	HX_("BR_352",21,88,5b,d9),
	HX_("BR_384",c0,8a,5b,d9),
	HX_("BR_416",ea,46,5c,d9),
	HX_("BR_448",89,49,5c,d9),
	HX_("BR_Free",db,18,79,63),
	HX_("BR_Bad",76,10,67,d9),
	::String(null())
};

::hx::Class Bitrate_obj::__mClass;

Dynamic __Create_Bitrate_obj() { return new Bitrate_obj; }

void Bitrate_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("format.mp3.Bitrate",58,5f,fb,83), ::hx::TCanCast< Bitrate_obj >,Bitrate_obj_sStaticFields,0,
	&__Create_Bitrate_obj, &__Create,
	&super::__SGetClass(), &CreateBitrate_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Bitrate_obj::__GetStatic;
}

void Bitrate_obj::__boot()
{
BR_112 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_112",23,00,5a,d9),10);
BR_128 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_128",08,01,5a,d9),11);
BR_144 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_144",c2,02,5a,d9),12);
BR_16 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_16",34,09,ee,36),1);
BR_160 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_160",7c,04,5a,d9),13);
BR_176 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_176",61,05,5a,d9),14);
BR_192 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_192",1b,07,5a,d9),15);
BR_224 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_224",45,c3,5a,d9),16);
BR_24 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_24",11,0a,ee,36),2);
BR_256 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_256",e4,c5,5a,d9),17);
BR_288 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_288",83,c8,5a,d9),18);
BR_32 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_32",ee,0a,ee,36),3);
BR_320 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_320",82,85,5b,d9),19);
BR_352 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_352",21,88,5b,d9),20);
BR_384 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_384",c0,8a,5b,d9),21);
BR_40 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_40",cb,0b,ee,36),4);
BR_416 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_416",ea,46,5c,d9),22);
BR_448 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_448",89,49,5c,d9),23);
BR_48 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_48",d3,0b,ee,36),5);
BR_56 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_56",b0,0c,ee,36),6);
BR_64 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_64",8d,0d,ee,36),7);
BR_8 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_8",c9,a0,de,2b),0);
BR_80 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_80",47,0f,ee,36),8);
BR_96 = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_96",2c,10,ee,36),9);
BR_Bad = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_Bad",76,10,67,d9),25);
BR_Free = ::hx::CreateConstEnum< Bitrate_obj >(HX_("BR_Free",db,18,79,63),24);
}


} // end namespace format
} // end namespace mp3
