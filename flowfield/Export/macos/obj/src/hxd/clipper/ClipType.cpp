#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper_ClipType
#include <hxd/clipper/ClipType.h>
#endif
namespace hxd{
namespace clipper{

::hxd::clipper::ClipType ClipType_obj::Difference;

::hxd::clipper::ClipType ClipType_obj::Intersection;

::hxd::clipper::ClipType ClipType_obj::Union;

::hxd::clipper::ClipType ClipType_obj::Xor;

bool ClipType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Difference",1d,a0,42,3d)) { outValue = ClipType_obj::Difference; return true; }
	if (inName==HX_("Intersection",69,ee,73,50)) { outValue = ClipType_obj::Intersection; return true; }
	if (inName==HX_("Union",ef,d4,14,3a)) { outValue = ClipType_obj::Union; return true; }
	if (inName==HX_("Xor",7b,27,43,00)) { outValue = ClipType_obj::Xor; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ClipType_obj)

int ClipType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Difference",1d,a0,42,3d)) return 2;
	if (inName==HX_("Intersection",69,ee,73,50)) return 0;
	if (inName==HX_("Union",ef,d4,14,3a)) return 1;
	if (inName==HX_("Xor",7b,27,43,00)) return 3;
	return super::__FindIndex(inName);
}

int ClipType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Difference",1d,a0,42,3d)) return 0;
	if (inName==HX_("Intersection",69,ee,73,50)) return 0;
	if (inName==HX_("Union",ef,d4,14,3a)) return 0;
	if (inName==HX_("Xor",7b,27,43,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ClipType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Difference",1d,a0,42,3d)) return Difference;
	if (inName==HX_("Intersection",69,ee,73,50)) return Intersection;
	if (inName==HX_("Union",ef,d4,14,3a)) return Union;
	if (inName==HX_("Xor",7b,27,43,00)) return Xor;
	return super::__Field(inName,inCallProp);
}

static ::String ClipType_obj_sStaticFields[] = {
	HX_("Intersection",69,ee,73,50),
	HX_("Union",ef,d4,14,3a),
	HX_("Difference",1d,a0,42,3d),
	HX_("Xor",7b,27,43,00),
	::String(null())
};

::hx::Class ClipType_obj::__mClass;

Dynamic __Create_ClipType_obj() { return new ClipType_obj; }

void ClipType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.clipper.ClipType",a5,48,7b,44), ::hx::TCanCast< ClipType_obj >,ClipType_obj_sStaticFields,0,
	&__Create_ClipType_obj, &__Create,
	&super::__SGetClass(), &CreateClipType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ClipType_obj::__GetStatic;
}

void ClipType_obj::__boot()
{
Difference = ::hx::CreateConstEnum< ClipType_obj >(HX_("Difference",1d,a0,42,3d),2);
Intersection = ::hx::CreateConstEnum< ClipType_obj >(HX_("Intersection",69,ee,73,50),0);
Union = ::hx::CreateConstEnum< ClipType_obj >(HX_("Union",ef,d4,14,3a),1);
Xor = ::hx::CreateConstEnum< ClipType_obj >(HX_("Xor",7b,27,43,00),3);
}


} // end namespace hxd
} // end namespace clipper
