#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_Blend
#include <h3d/mat/Blend.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::Blend Blend_obj::ConstantAlpha;

::h3d::mat::Blend Blend_obj::ConstantColor;

::h3d::mat::Blend Blend_obj::DstAlpha;

::h3d::mat::Blend Blend_obj::DstColor;

::h3d::mat::Blend Blend_obj::One;

::h3d::mat::Blend Blend_obj::OneMinusConstantAlpha;

::h3d::mat::Blend Blend_obj::OneMinusConstantColor;

::h3d::mat::Blend Blend_obj::OneMinusDstAlpha;

::h3d::mat::Blend Blend_obj::OneMinusDstColor;

::h3d::mat::Blend Blend_obj::OneMinusSrcAlpha;

::h3d::mat::Blend Blend_obj::OneMinusSrcColor;

::h3d::mat::Blend Blend_obj::SrcAlpha;

::h3d::mat::Blend Blend_obj::SrcAlphaSaturate;

::h3d::mat::Blend Blend_obj::SrcColor;

::h3d::mat::Blend Blend_obj::Zero;

bool Blend_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ConstantAlpha",3a,1b,4b,ba)) { outValue = Blend_obj::ConstantAlpha; return true; }
	if (inName==HX_("ConstantColor",3f,e5,10,e3)) { outValue = Blend_obj::ConstantColor; return true; }
	if (inName==HX_("DstAlpha",39,9b,b4,f5)) { outValue = Blend_obj::DstAlpha; return true; }
	if (inName==HX_("DstColor",3e,65,7a,1e)) { outValue = Blend_obj::DstColor; return true; }
	if (inName==HX_("One",46,52,3c,00)) { outValue = Blend_obj::One; return true; }
	if (inName==HX_("OneMinusConstantAlpha",b0,94,35,6b)) { outValue = Blend_obj::OneMinusConstantAlpha; return true; }
	if (inName==HX_("OneMinusConstantColor",b5,5e,fb,93)) { outValue = Blend_obj::OneMinusConstantColor; return true; }
	if (inName==HX_("OneMinusDstAlpha",83,95,88,36)) { outValue = Blend_obj::OneMinusDstAlpha; return true; }
	if (inName==HX_("OneMinusDstColor",88,5f,4e,5f)) { outValue = Blend_obj::OneMinusDstColor; return true; }
	if (inName==HX_("OneMinusSrcAlpha",44,ac,d6,9a)) { outValue = Blend_obj::OneMinusSrcAlpha; return true; }
	if (inName==HX_("OneMinusSrcColor",49,76,9c,c3)) { outValue = Blend_obj::OneMinusSrcColor; return true; }
	if (inName==HX_("SrcAlpha",fa,b1,02,5a)) { outValue = Blend_obj::SrcAlpha; return true; }
	if (inName==HX_("SrcAlphaSaturate",09,48,45,6d)) { outValue = Blend_obj::SrcAlphaSaturate; return true; }
	if (inName==HX_("SrcColor",ff,7b,c8,82)) { outValue = Blend_obj::SrcColor; return true; }
	if (inName==HX_("Zero",48,3b,ca,3b)) { outValue = Blend_obj::Zero; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Blend_obj)

int Blend_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ConstantAlpha",3a,1b,4b,ba)) return 11;
	if (inName==HX_("ConstantColor",3f,e5,10,e3)) return 10;
	if (inName==HX_("DstAlpha",39,9b,b4,f5)) return 4;
	if (inName==HX_("DstColor",3e,65,7a,1e)) return 5;
	if (inName==HX_("One",46,52,3c,00)) return 0;
	if (inName==HX_("OneMinusConstantAlpha",b0,94,35,6b)) return 13;
	if (inName==HX_("OneMinusConstantColor",b5,5e,fb,93)) return 12;
	if (inName==HX_("OneMinusDstAlpha",83,95,88,36)) return 8;
	if (inName==HX_("OneMinusDstColor",88,5f,4e,5f)) return 9;
	if (inName==HX_("OneMinusSrcAlpha",44,ac,d6,9a)) return 6;
	if (inName==HX_("OneMinusSrcColor",49,76,9c,c3)) return 7;
	if (inName==HX_("SrcAlpha",fa,b1,02,5a)) return 2;
	if (inName==HX_("SrcAlphaSaturate",09,48,45,6d)) return 14;
	if (inName==HX_("SrcColor",ff,7b,c8,82)) return 3;
	if (inName==HX_("Zero",48,3b,ca,3b)) return 1;
	return super::__FindIndex(inName);
}

int Blend_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ConstantAlpha",3a,1b,4b,ba)) return 0;
	if (inName==HX_("ConstantColor",3f,e5,10,e3)) return 0;
	if (inName==HX_("DstAlpha",39,9b,b4,f5)) return 0;
	if (inName==HX_("DstColor",3e,65,7a,1e)) return 0;
	if (inName==HX_("One",46,52,3c,00)) return 0;
	if (inName==HX_("OneMinusConstantAlpha",b0,94,35,6b)) return 0;
	if (inName==HX_("OneMinusConstantColor",b5,5e,fb,93)) return 0;
	if (inName==HX_("OneMinusDstAlpha",83,95,88,36)) return 0;
	if (inName==HX_("OneMinusDstColor",88,5f,4e,5f)) return 0;
	if (inName==HX_("OneMinusSrcAlpha",44,ac,d6,9a)) return 0;
	if (inName==HX_("OneMinusSrcColor",49,76,9c,c3)) return 0;
	if (inName==HX_("SrcAlpha",fa,b1,02,5a)) return 0;
	if (inName==HX_("SrcAlphaSaturate",09,48,45,6d)) return 0;
	if (inName==HX_("SrcColor",ff,7b,c8,82)) return 0;
	if (inName==HX_("Zero",48,3b,ca,3b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Blend_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ConstantAlpha",3a,1b,4b,ba)) return ConstantAlpha;
	if (inName==HX_("ConstantColor",3f,e5,10,e3)) return ConstantColor;
	if (inName==HX_("DstAlpha",39,9b,b4,f5)) return DstAlpha;
	if (inName==HX_("DstColor",3e,65,7a,1e)) return DstColor;
	if (inName==HX_("One",46,52,3c,00)) return One;
	if (inName==HX_("OneMinusConstantAlpha",b0,94,35,6b)) return OneMinusConstantAlpha;
	if (inName==HX_("OneMinusConstantColor",b5,5e,fb,93)) return OneMinusConstantColor;
	if (inName==HX_("OneMinusDstAlpha",83,95,88,36)) return OneMinusDstAlpha;
	if (inName==HX_("OneMinusDstColor",88,5f,4e,5f)) return OneMinusDstColor;
	if (inName==HX_("OneMinusSrcAlpha",44,ac,d6,9a)) return OneMinusSrcAlpha;
	if (inName==HX_("OneMinusSrcColor",49,76,9c,c3)) return OneMinusSrcColor;
	if (inName==HX_("SrcAlpha",fa,b1,02,5a)) return SrcAlpha;
	if (inName==HX_("SrcAlphaSaturate",09,48,45,6d)) return SrcAlphaSaturate;
	if (inName==HX_("SrcColor",ff,7b,c8,82)) return SrcColor;
	if (inName==HX_("Zero",48,3b,ca,3b)) return Zero;
	return super::__Field(inName,inCallProp);
}

static ::String Blend_obj_sStaticFields[] = {
	HX_("One",46,52,3c,00),
	HX_("Zero",48,3b,ca,3b),
	HX_("SrcAlpha",fa,b1,02,5a),
	HX_("SrcColor",ff,7b,c8,82),
	HX_("DstAlpha",39,9b,b4,f5),
	HX_("DstColor",3e,65,7a,1e),
	HX_("OneMinusSrcAlpha",44,ac,d6,9a),
	HX_("OneMinusSrcColor",49,76,9c,c3),
	HX_("OneMinusDstAlpha",83,95,88,36),
	HX_("OneMinusDstColor",88,5f,4e,5f),
	HX_("ConstantColor",3f,e5,10,e3),
	HX_("ConstantAlpha",3a,1b,4b,ba),
	HX_("OneMinusConstantColor",b5,5e,fb,93),
	HX_("OneMinusConstantAlpha",b0,94,35,6b),
	HX_("SrcAlphaSaturate",09,48,45,6d),
	::String(null())
};

::hx::Class Blend_obj::__mClass;

Dynamic __Create_Blend_obj() { return new Blend_obj; }

void Blend_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.Blend",6e,f6,c6,54), ::hx::TCanCast< Blend_obj >,Blend_obj_sStaticFields,0,
	&__Create_Blend_obj, &__Create,
	&super::__SGetClass(), &CreateBlend_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Blend_obj::__GetStatic;
}

void Blend_obj::__boot()
{
ConstantAlpha = ::hx::CreateConstEnum< Blend_obj >(HX_("ConstantAlpha",3a,1b,4b,ba),11);
ConstantColor = ::hx::CreateConstEnum< Blend_obj >(HX_("ConstantColor",3f,e5,10,e3),10);
DstAlpha = ::hx::CreateConstEnum< Blend_obj >(HX_("DstAlpha",39,9b,b4,f5),4);
DstColor = ::hx::CreateConstEnum< Blend_obj >(HX_("DstColor",3e,65,7a,1e),5);
One = ::hx::CreateConstEnum< Blend_obj >(HX_("One",46,52,3c,00),0);
OneMinusConstantAlpha = ::hx::CreateConstEnum< Blend_obj >(HX_("OneMinusConstantAlpha",b0,94,35,6b),13);
OneMinusConstantColor = ::hx::CreateConstEnum< Blend_obj >(HX_("OneMinusConstantColor",b5,5e,fb,93),12);
OneMinusDstAlpha = ::hx::CreateConstEnum< Blend_obj >(HX_("OneMinusDstAlpha",83,95,88,36),8);
OneMinusDstColor = ::hx::CreateConstEnum< Blend_obj >(HX_("OneMinusDstColor",88,5f,4e,5f),9);
OneMinusSrcAlpha = ::hx::CreateConstEnum< Blend_obj >(HX_("OneMinusSrcAlpha",44,ac,d6,9a),6);
OneMinusSrcColor = ::hx::CreateConstEnum< Blend_obj >(HX_("OneMinusSrcColor",49,76,9c,c3),7);
SrcAlpha = ::hx::CreateConstEnum< Blend_obj >(HX_("SrcAlpha",fa,b1,02,5a),2);
SrcAlphaSaturate = ::hx::CreateConstEnum< Blend_obj >(HX_("SrcAlphaSaturate",09,48,45,6d),14);
SrcColor = ::hx::CreateConstEnum< Blend_obj >(HX_("SrcColor",ff,7b,c8,82),3);
Zero = ::hx::CreateConstEnum< Blend_obj >(HX_("Zero",48,3b,ca,3b),1);
}


} // end namespace h3d
} // end namespace mat
