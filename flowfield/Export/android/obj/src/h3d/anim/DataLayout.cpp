#include <hxcpp.h>

#ifndef INCLUDED_h3d_anim_DataLayout
#include <h3d/anim/DataLayout.h>
#endif
namespace h3d{
namespace anim{

::h3d::anim::DataLayout DataLayout_obj::Alpha;

::h3d::anim::DataLayout DataLayout_obj::Position;

::h3d::anim::DataLayout DataLayout_obj::Property;

::h3d::anim::DataLayout DataLayout_obj::Rotation;

::h3d::anim::DataLayout DataLayout_obj::Scale;

::h3d::anim::DataLayout DataLayout_obj::SingleFrame;

::h3d::anim::DataLayout DataLayout_obj::UV;

bool DataLayout_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Alpha",3e,17,c4,b4)) { outValue = DataLayout_obj::Alpha; return true; }
	if (inName==HX_("Position",c9,5c,ac,a4)) { outValue = DataLayout_obj::Position; return true; }
	if (inName==HX_("Property",75,04,ea,85)) { outValue = DataLayout_obj::Property; return true; }
	if (inName==HX_("Rotation",5e,f9,37,e2)) { outValue = DataLayout_obj::Rotation; return true; }
	if (inName==HX_("Scale",6a,3e,fc,0b)) { outValue = DataLayout_obj::Scale; return true; }
	if (inName==HX_("SingleFrame",65,6c,79,d4)) { outValue = DataLayout_obj::SingleFrame; return true; }
	if (inName==HX_("UV",61,4a,00,00)) { outValue = DataLayout_obj::UV; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DataLayout_obj)

int DataLayout_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Alpha",3e,17,c4,b4)) return 4;
	if (inName==HX_("Position",c9,5c,ac,a4)) return 0;
	if (inName==HX_("Property",75,04,ea,85)) return 5;
	if (inName==HX_("Rotation",5e,f9,37,e2)) return 1;
	if (inName==HX_("Scale",6a,3e,fc,0b)) return 2;
	if (inName==HX_("SingleFrame",65,6c,79,d4)) return 6;
	if (inName==HX_("UV",61,4a,00,00)) return 3;
	return super::__FindIndex(inName);
}

int DataLayout_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Alpha",3e,17,c4,b4)) return 0;
	if (inName==HX_("Position",c9,5c,ac,a4)) return 0;
	if (inName==HX_("Property",75,04,ea,85)) return 0;
	if (inName==HX_("Rotation",5e,f9,37,e2)) return 0;
	if (inName==HX_("Scale",6a,3e,fc,0b)) return 0;
	if (inName==HX_("SingleFrame",65,6c,79,d4)) return 0;
	if (inName==HX_("UV",61,4a,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DataLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Alpha",3e,17,c4,b4)) return Alpha;
	if (inName==HX_("Position",c9,5c,ac,a4)) return Position;
	if (inName==HX_("Property",75,04,ea,85)) return Property;
	if (inName==HX_("Rotation",5e,f9,37,e2)) return Rotation;
	if (inName==HX_("Scale",6a,3e,fc,0b)) return Scale;
	if (inName==HX_("SingleFrame",65,6c,79,d4)) return SingleFrame;
	if (inName==HX_("UV",61,4a,00,00)) return UV;
	return super::__Field(inName,inCallProp);
}

static ::String DataLayout_obj_sStaticFields[] = {
	HX_("Position",c9,5c,ac,a4),
	HX_("Rotation",5e,f9,37,e2),
	HX_("Scale",6a,3e,fc,0b),
	HX_("UV",61,4a,00,00),
	HX_("Alpha",3e,17,c4,b4),
	HX_("Property",75,04,ea,85),
	HX_("SingleFrame",65,6c,79,d4),
	::String(null())
};

::hx::Class DataLayout_obj::__mClass;

Dynamic __Create_DataLayout_obj() { return new DataLayout_obj; }

void DataLayout_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.anim.DataLayout",9c,7c,67,c0), ::hx::TCanCast< DataLayout_obj >,DataLayout_obj_sStaticFields,0,
	&__Create_DataLayout_obj, &__Create,
	&super::__SGetClass(), &CreateDataLayout_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DataLayout_obj::__GetStatic;
}

void DataLayout_obj::__boot()
{
Alpha = ::hx::CreateConstEnum< DataLayout_obj >(HX_("Alpha",3e,17,c4,b4),4);
Position = ::hx::CreateConstEnum< DataLayout_obj >(HX_("Position",c9,5c,ac,a4),0);
Property = ::hx::CreateConstEnum< DataLayout_obj >(HX_("Property",75,04,ea,85),5);
Rotation = ::hx::CreateConstEnum< DataLayout_obj >(HX_("Rotation",5e,f9,37,e2),1);
Scale = ::hx::CreateConstEnum< DataLayout_obj >(HX_("Scale",6a,3e,fc,0b),2);
SingleFrame = ::hx::CreateConstEnum< DataLayout_obj >(HX_("SingleFrame",65,6c,79,d4),6);
UV = ::hx::CreateConstEnum< DataLayout_obj >(HX_("UV",61,4a,00,00),3);
}


} // end namespace h3d
} // end namespace anim
