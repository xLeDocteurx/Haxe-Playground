#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper_EndType
#include <hxd/clipper/EndType.h>
#endif
namespace hxd{
namespace clipper{

::hxd::clipper::EndType EndType_obj::ClosedLine;

::hxd::clipper::EndType EndType_obj::ClosedPol;

::hxd::clipper::EndType EndType_obj::OpenButt;

::hxd::clipper::EndType EndType_obj::OpenRound;

::hxd::clipper::EndType EndType_obj::OpenSquare;

bool EndType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ClosedLine",e0,37,03,f5)) { outValue = EndType_obj::ClosedLine; return true; }
	if (inName==HX_("ClosedPol",21,9f,1e,c3)) { outValue = EndType_obj::ClosedPol; return true; }
	if (inName==HX_("OpenButt",1d,af,0d,bc)) { outValue = EndType_obj::OpenButt; return true; }
	if (inName==HX_("OpenRound",04,48,5e,02)) { outValue = EndType_obj::OpenRound; return true; }
	if (inName==HX_("OpenSquare",27,70,3f,9d)) { outValue = EndType_obj::OpenSquare; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(EndType_obj)

int EndType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ClosedLine",e0,37,03,f5)) return 1;
	if (inName==HX_("ClosedPol",21,9f,1e,c3)) return 0;
	if (inName==HX_("OpenButt",1d,af,0d,bc)) return 2;
	if (inName==HX_("OpenRound",04,48,5e,02)) return 4;
	if (inName==HX_("OpenSquare",27,70,3f,9d)) return 3;
	return super::__FindIndex(inName);
}

int EndType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ClosedLine",e0,37,03,f5)) return 0;
	if (inName==HX_("ClosedPol",21,9f,1e,c3)) return 0;
	if (inName==HX_("OpenButt",1d,af,0d,bc)) return 0;
	if (inName==HX_("OpenRound",04,48,5e,02)) return 0;
	if (inName==HX_("OpenSquare",27,70,3f,9d)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val EndType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ClosedLine",e0,37,03,f5)) return ClosedLine;
	if (inName==HX_("ClosedPol",21,9f,1e,c3)) return ClosedPol;
	if (inName==HX_("OpenButt",1d,af,0d,bc)) return OpenButt;
	if (inName==HX_("OpenRound",04,48,5e,02)) return OpenRound;
	if (inName==HX_("OpenSquare",27,70,3f,9d)) return OpenSquare;
	return super::__Field(inName,inCallProp);
}

static ::String EndType_obj_sStaticFields[] = {
	HX_("ClosedPol",21,9f,1e,c3),
	HX_("ClosedLine",e0,37,03,f5),
	HX_("OpenButt",1d,af,0d,bc),
	HX_("OpenSquare",27,70,3f,9d),
	HX_("OpenRound",04,48,5e,02),
	::String(null())
};

::hx::Class EndType_obj::__mClass;

Dynamic __Create_EndType_obj() { return new EndType_obj; }

void EndType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.clipper.EndType",9a,51,ef,2d), ::hx::TCanCast< EndType_obj >,EndType_obj_sStaticFields,0,
	&__Create_EndType_obj, &__Create,
	&super::__SGetClass(), &CreateEndType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &EndType_obj::__GetStatic;
}

void EndType_obj::__boot()
{
ClosedLine = ::hx::CreateConstEnum< EndType_obj >(HX_("ClosedLine",e0,37,03,f5),1);
ClosedPol = ::hx::CreateConstEnum< EndType_obj >(HX_("ClosedPol",21,9f,1e,c3),0);
OpenButt = ::hx::CreateConstEnum< EndType_obj >(HX_("OpenButt",1d,af,0d,bc),2);
OpenRound = ::hx::CreateConstEnum< EndType_obj >(HX_("OpenRound",04,48,5e,02),4);
OpenSquare = ::hx::CreateConstEnum< EndType_obj >(HX_("OpenSquare",27,70,3f,9d),3);
}


} // end namespace hxd
} // end namespace clipper
