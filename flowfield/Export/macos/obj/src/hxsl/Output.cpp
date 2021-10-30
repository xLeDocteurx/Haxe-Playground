#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
namespace hxsl{

::hxsl::Output Output_obj::Const(Float v)
{
	return ::hx::CreateEnum< Output_obj >(HX_("Const",43,69,8b,dd),0,1)->_hx_init(0,v);
}

::hxsl::Output Output_obj::PackFloat( ::hxsl::Output v)
{
	return ::hx::CreateEnum< Output_obj >(HX_("PackFloat",e3,cb,4e,0a),3,1)->_hx_init(0,v);
}

::hxsl::Output Output_obj::PackNormal( ::hxsl::Output v)
{
	return ::hx::CreateEnum< Output_obj >(HX_("PackNormal",00,ea,b6,e9),2,1)->_hx_init(0,v);
}

::hxsl::Output Output_obj::Swiz( ::hxsl::Output a,::Array< ::Dynamic> swiz)
{
	return ::hx::CreateEnum< Output_obj >(HX_("Swiz",b5,5d,37,37),7,2)->_hx_init(0,a)->_hx_init(1,swiz);
}

::hxsl::Output Output_obj::Value(::String v, ::Dynamic size)
{
	return ::hx::CreateEnum< Output_obj >(HX_("Value",51,ef,e5,c4),1,2)->_hx_init(0,v)->_hx_init(1,size);
}

::hxsl::Output Output_obj::Vec2(::Array< ::Dynamic> a)
{
	return ::hx::CreateEnum< Output_obj >(HX_("Vec2",7e,53,25,39),4,1)->_hx_init(0,a);
}

::hxsl::Output Output_obj::Vec3(::Array< ::Dynamic> a)
{
	return ::hx::CreateEnum< Output_obj >(HX_("Vec3",7f,53,25,39),5,1)->_hx_init(0,a);
}

::hxsl::Output Output_obj::Vec4(::Array< ::Dynamic> a)
{
	return ::hx::CreateEnum< Output_obj >(HX_("Vec4",80,53,25,39),6,1)->_hx_init(0,a);
}

bool Output_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Const",43,69,8b,dd)) { outValue = Output_obj::Const_dyn(); return true; }
	if (inName==HX_("PackFloat",e3,cb,4e,0a)) { outValue = Output_obj::PackFloat_dyn(); return true; }
	if (inName==HX_("PackNormal",00,ea,b6,e9)) { outValue = Output_obj::PackNormal_dyn(); return true; }
	if (inName==HX_("Swiz",b5,5d,37,37)) { outValue = Output_obj::Swiz_dyn(); return true; }
	if (inName==HX_("Value",51,ef,e5,c4)) { outValue = Output_obj::Value_dyn(); return true; }
	if (inName==HX_("Vec2",7e,53,25,39)) { outValue = Output_obj::Vec2_dyn(); return true; }
	if (inName==HX_("Vec3",7f,53,25,39)) { outValue = Output_obj::Vec3_dyn(); return true; }
	if (inName==HX_("Vec4",80,53,25,39)) { outValue = Output_obj::Vec4_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Output_obj)

int Output_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Const",43,69,8b,dd)) return 0;
	if (inName==HX_("PackFloat",e3,cb,4e,0a)) return 3;
	if (inName==HX_("PackNormal",00,ea,b6,e9)) return 2;
	if (inName==HX_("Swiz",b5,5d,37,37)) return 7;
	if (inName==HX_("Value",51,ef,e5,c4)) return 1;
	if (inName==HX_("Vec2",7e,53,25,39)) return 4;
	if (inName==HX_("Vec3",7f,53,25,39)) return 5;
	if (inName==HX_("Vec4",80,53,25,39)) return 6;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,Const,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,PackFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,PackNormal,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Output_obj,Swiz,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Output_obj,Value,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,Vec2,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,Vec3,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,Vec4,return)

int Output_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Const",43,69,8b,dd)) return 1;
	if (inName==HX_("PackFloat",e3,cb,4e,0a)) return 1;
	if (inName==HX_("PackNormal",00,ea,b6,e9)) return 1;
	if (inName==HX_("Swiz",b5,5d,37,37)) return 2;
	if (inName==HX_("Value",51,ef,e5,c4)) return 2;
	if (inName==HX_("Vec2",7e,53,25,39)) return 1;
	if (inName==HX_("Vec3",7f,53,25,39)) return 1;
	if (inName==HX_("Vec4",80,53,25,39)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Output_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Const",43,69,8b,dd)) return Const_dyn();
	if (inName==HX_("PackFloat",e3,cb,4e,0a)) return PackFloat_dyn();
	if (inName==HX_("PackNormal",00,ea,b6,e9)) return PackNormal_dyn();
	if (inName==HX_("Swiz",b5,5d,37,37)) return Swiz_dyn();
	if (inName==HX_("Value",51,ef,e5,c4)) return Value_dyn();
	if (inName==HX_("Vec2",7e,53,25,39)) return Vec2_dyn();
	if (inName==HX_("Vec3",7f,53,25,39)) return Vec3_dyn();
	if (inName==HX_("Vec4",80,53,25,39)) return Vec4_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Output_obj_sStaticFields[] = {
	HX_("Const",43,69,8b,dd),
	HX_("Value",51,ef,e5,c4),
	HX_("PackNormal",00,ea,b6,e9),
	HX_("PackFloat",e3,cb,4e,0a),
	HX_("Vec2",7e,53,25,39),
	HX_("Vec3",7f,53,25,39),
	HX_("Vec4",80,53,25,39),
	HX_("Swiz",b5,5d,37,37),
	::String(null())
};

::hx::Class Output_obj::__mClass;

Dynamic __Create_Output_obj() { return new Output_obj; }

void Output_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.Output",46,ed,ee,1a), ::hx::TCanCast< Output_obj >,Output_obj_sStaticFields,0,
	&__Create_Output_obj, &__Create,
	&super::__SGetClass(), &CreateOutput_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Output_obj::__GetStatic;
}

void Output_obj::__boot()
{
}


} // end namespace hxsl
