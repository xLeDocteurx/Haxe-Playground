#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper__Clipper_EdgeSide
#include <hxd/clipper/_Clipper/EdgeSide.h>
#endif
namespace hxd{
namespace clipper{
namespace _Clipper{

::hxd::clipper::_Clipper::EdgeSide EdgeSide_obj::Left;

::hxd::clipper::_Clipper::EdgeSide EdgeSide_obj::Right;

bool EdgeSide_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Left",27,34,89,32)) { outValue = EdgeSide_obj::Left; return true; }
	if (inName==HX_("Right",bc,7b,91,7c)) { outValue = EdgeSide_obj::Right; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(EdgeSide_obj)

int EdgeSide_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("Right",bc,7b,91,7c)) return 1;
	return super::__FindIndex(inName);
}

int EdgeSide_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("Right",bc,7b,91,7c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val EdgeSide_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Left",27,34,89,32)) return Left;
	if (inName==HX_("Right",bc,7b,91,7c)) return Right;
	return super::__Field(inName,inCallProp);
}

static ::String EdgeSide_obj_sStaticFields[] = {
	HX_("Left",27,34,89,32),
	HX_("Right",bc,7b,91,7c),
	::String(null())
};

::hx::Class EdgeSide_obj::__mClass;

Dynamic __Create_EdgeSide_obj() { return new EdgeSide_obj; }

void EdgeSide_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.clipper._Clipper.EdgeSide",59,cd,54,37), ::hx::TCanCast< EdgeSide_obj >,EdgeSide_obj_sStaticFields,0,
	&__Create_EdgeSide_obj, &__Create,
	&super::__SGetClass(), &CreateEdgeSide_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &EdgeSide_obj::__GetStatic;
}

void EdgeSide_obj::__boot()
{
Left = ::hx::CreateConstEnum< EdgeSide_obj >(HX_("Left",27,34,89,32),0);
Right = ::hx::CreateConstEnum< EdgeSide_obj >(HX_("Right",bc,7b,91,7c),1);
}


} // end namespace hxd
} // end namespace clipper
} // end namespace _Clipper
