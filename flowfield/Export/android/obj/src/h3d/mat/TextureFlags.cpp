#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::TextureFlags TextureFlags_obj::AlphaPremultiplied;

::h3d::mat::TextureFlags TextureFlags_obj::Cube;

::h3d::mat::TextureFlags TextureFlags_obj::Dynamic;

::h3d::mat::TextureFlags TextureFlags_obj::IsArray;

::h3d::mat::TextureFlags TextureFlags_obj::IsNPOT;

::h3d::mat::TextureFlags TextureFlags_obj::Loading;

::h3d::mat::TextureFlags TextureFlags_obj::ManualMipMapGen;

::h3d::mat::TextureFlags TextureFlags_obj::MipMapped;

::h3d::mat::TextureFlags TextureFlags_obj::NoAlloc;

::h3d::mat::TextureFlags TextureFlags_obj::Serialize;

::h3d::mat::TextureFlags TextureFlags_obj::Target;

::h3d::mat::TextureFlags TextureFlags_obj::WasCleared;

bool TextureFlags_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AlphaPremultiplied",38,fb,72,45)) { outValue = TextureFlags_obj::AlphaPremultiplied; return true; }
	if (inName==HX_("Cube",15,69,a2,2c)) { outValue = TextureFlags_obj::Cube; return true; }
	if (inName==HX_("Dynamic",5f,c7,66,03)) { outValue = TextureFlags_obj::Dynamic; return true; }
	if (inName==HX_("IsArray",2f,39,66,8f)) { outValue = TextureFlags_obj::IsArray; return true; }
	if (inName==HX_("IsNPOT",f1,aa,ed,9a)) { outValue = TextureFlags_obj::IsNPOT; return true; }
	if (inName==HX_("Loading",5c,f6,43,d6)) { outValue = TextureFlags_obj::Loading; return true; }
	if (inName==HX_("ManualMipMapGen",c2,64,88,93)) { outValue = TextureFlags_obj::ManualMipMapGen; return true; }
	if (inName==HX_("MipMapped",47,a0,67,07)) { outValue = TextureFlags_obj::MipMapped; return true; }
	if (inName==HX_("NoAlloc",54,50,e8,c1)) { outValue = TextureFlags_obj::NoAlloc; return true; }
	if (inName==HX_("Serialize",c0,3d,c5,96)) { outValue = TextureFlags_obj::Serialize; return true; }
	if (inName==HX_("Target",71,67,81,bb)) { outValue = TextureFlags_obj::Target; return true; }
	if (inName==HX_("WasCleared",23,f9,06,71)) { outValue = TextureFlags_obj::WasCleared; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TextureFlags_obj)

int TextureFlags_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AlphaPremultiplied",38,fb,72,45)) return 7;
	if (inName==HX_("Cube",15,69,a2,2c)) return 1;
	if (inName==HX_("Dynamic",5f,c7,66,03)) return 6;
	if (inName==HX_("IsArray",2f,39,66,8f)) return 11;
	if (inName==HX_("IsNPOT",f1,aa,ed,9a)) return 4;
	if (inName==HX_("Loading",5c,f6,43,d6)) return 9;
	if (inName==HX_("ManualMipMapGen",c2,64,88,93)) return 3;
	if (inName==HX_("MipMapped",47,a0,67,07)) return 2;
	if (inName==HX_("NoAlloc",54,50,e8,c1)) return 5;
	if (inName==HX_("Serialize",c0,3d,c5,96)) return 10;
	if (inName==HX_("Target",71,67,81,bb)) return 0;
	if (inName==HX_("WasCleared",23,f9,06,71)) return 8;
	return super::__FindIndex(inName);
}

int TextureFlags_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AlphaPremultiplied",38,fb,72,45)) return 0;
	if (inName==HX_("Cube",15,69,a2,2c)) return 0;
	if (inName==HX_("Dynamic",5f,c7,66,03)) return 0;
	if (inName==HX_("IsArray",2f,39,66,8f)) return 0;
	if (inName==HX_("IsNPOT",f1,aa,ed,9a)) return 0;
	if (inName==HX_("Loading",5c,f6,43,d6)) return 0;
	if (inName==HX_("ManualMipMapGen",c2,64,88,93)) return 0;
	if (inName==HX_("MipMapped",47,a0,67,07)) return 0;
	if (inName==HX_("NoAlloc",54,50,e8,c1)) return 0;
	if (inName==HX_("Serialize",c0,3d,c5,96)) return 0;
	if (inName==HX_("Target",71,67,81,bb)) return 0;
	if (inName==HX_("WasCleared",23,f9,06,71)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val TextureFlags_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AlphaPremultiplied",38,fb,72,45)) return AlphaPremultiplied;
	if (inName==HX_("Cube",15,69,a2,2c)) return Cube;
	if (inName==HX_("Dynamic",5f,c7,66,03)) return Dynamic;
	if (inName==HX_("IsArray",2f,39,66,8f)) return IsArray;
	if (inName==HX_("IsNPOT",f1,aa,ed,9a)) return IsNPOT;
	if (inName==HX_("Loading",5c,f6,43,d6)) return Loading;
	if (inName==HX_("ManualMipMapGen",c2,64,88,93)) return ManualMipMapGen;
	if (inName==HX_("MipMapped",47,a0,67,07)) return MipMapped;
	if (inName==HX_("NoAlloc",54,50,e8,c1)) return NoAlloc;
	if (inName==HX_("Serialize",c0,3d,c5,96)) return Serialize;
	if (inName==HX_("Target",71,67,81,bb)) return Target;
	if (inName==HX_("WasCleared",23,f9,06,71)) return WasCleared;
	return super::__Field(inName,inCallProp);
}

static ::String TextureFlags_obj_sStaticFields[] = {
	HX_("Target",71,67,81,bb),
	HX_("Cube",15,69,a2,2c),
	HX_("MipMapped",47,a0,67,07),
	HX_("ManualMipMapGen",c2,64,88,93),
	HX_("IsNPOT",f1,aa,ed,9a),
	HX_("NoAlloc",54,50,e8,c1),
	HX_("Dynamic",5f,c7,66,03),
	HX_("AlphaPremultiplied",38,fb,72,45),
	HX_("WasCleared",23,f9,06,71),
	HX_("Loading",5c,f6,43,d6),
	HX_("Serialize",c0,3d,c5,96),
	HX_("IsArray",2f,39,66,8f),
	::String(null())
};

::hx::Class TextureFlags_obj::__mClass;

Dynamic __Create_TextureFlags_obj() { return new TextureFlags_obj; }

void TextureFlags_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.TextureFlags",ef,77,8e,16), ::hx::TCanCast< TextureFlags_obj >,TextureFlags_obj_sStaticFields,0,
	&__Create_TextureFlags_obj, &__Create,
	&super::__SGetClass(), &CreateTextureFlags_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TextureFlags_obj::__GetStatic;
}

void TextureFlags_obj::__boot()
{
AlphaPremultiplied = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("AlphaPremultiplied",38,fb,72,45),7);
Cube = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("Cube",15,69,a2,2c),1);
Dynamic = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("Dynamic",5f,c7,66,03),6);
IsArray = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("IsArray",2f,39,66,8f),11);
IsNPOT = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("IsNPOT",f1,aa,ed,9a),4);
Loading = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("Loading",5c,f6,43,d6),9);
ManualMipMapGen = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("ManualMipMapGen",c2,64,88,93),3);
MipMapped = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("MipMapped",47,a0,67,07),2);
NoAlloc = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("NoAlloc",54,50,e8,c1),5);
Serialize = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("Serialize",c0,3d,c5,96),10);
Target = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("Target",71,67,81,bb),0);
WasCleared = ::hx::CreateConstEnum< TextureFlags_obj >(HX_("WasCleared",23,f9,06,71),8);
}


} // end namespace h3d
} // end namespace mat
