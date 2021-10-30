#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_StencilOp
#include <h3d/mat/StencilOp.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::StencilOp StencilOp_obj::Decrement;

::h3d::mat::StencilOp StencilOp_obj::DecrementWrap;

::h3d::mat::StencilOp StencilOp_obj::Increment;

::h3d::mat::StencilOp StencilOp_obj::IncrementWrap;

::h3d::mat::StencilOp StencilOp_obj::Invert;

::h3d::mat::StencilOp StencilOp_obj::Keep;

::h3d::mat::StencilOp StencilOp_obj::Replace;

::h3d::mat::StencilOp StencilOp_obj::Zero;

bool StencilOp_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Decrement",f3,d5,54,b2)) { outValue = StencilOp_obj::Decrement; return true; }
	if (inName==HX_("DecrementWrap",5d,b1,1a,ea)) { outValue = StencilOp_obj::DecrementWrap; return true; }
	if (inName==HX_("Increment",0f,e6,d1,d3)) { outValue = StencilOp_obj::Increment; return true; }
	if (inName==HX_("IncrementWrap",79,ff,97,96)) { outValue = StencilOp_obj::IncrementWrap; return true; }
	if (inName==HX_("Invert",36,5b,6d,d4)) { outValue = StencilOp_obj::Invert; return true; }
	if (inName==HX_("Keep",a5,fc,df,31)) { outValue = StencilOp_obj::Keep; return true; }
	if (inName==HX_("Replace",14,70,79,78)) { outValue = StencilOp_obj::Replace; return true; }
	if (inName==HX_("Zero",48,3b,ca,3b)) { outValue = StencilOp_obj::Zero; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(StencilOp_obj)

int StencilOp_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Decrement",f3,d5,54,b2)) return 5;
	if (inName==HX_("DecrementWrap",5d,b1,1a,ea)) return 6;
	if (inName==HX_("Increment",0f,e6,d1,d3)) return 3;
	if (inName==HX_("IncrementWrap",79,ff,97,96)) return 4;
	if (inName==HX_("Invert",36,5b,6d,d4)) return 7;
	if (inName==HX_("Keep",a5,fc,df,31)) return 0;
	if (inName==HX_("Replace",14,70,79,78)) return 2;
	if (inName==HX_("Zero",48,3b,ca,3b)) return 1;
	return super::__FindIndex(inName);
}

int StencilOp_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Decrement",f3,d5,54,b2)) return 0;
	if (inName==HX_("DecrementWrap",5d,b1,1a,ea)) return 0;
	if (inName==HX_("Increment",0f,e6,d1,d3)) return 0;
	if (inName==HX_("IncrementWrap",79,ff,97,96)) return 0;
	if (inName==HX_("Invert",36,5b,6d,d4)) return 0;
	if (inName==HX_("Keep",a5,fc,df,31)) return 0;
	if (inName==HX_("Replace",14,70,79,78)) return 0;
	if (inName==HX_("Zero",48,3b,ca,3b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val StencilOp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Decrement",f3,d5,54,b2)) return Decrement;
	if (inName==HX_("DecrementWrap",5d,b1,1a,ea)) return DecrementWrap;
	if (inName==HX_("Increment",0f,e6,d1,d3)) return Increment;
	if (inName==HX_("IncrementWrap",79,ff,97,96)) return IncrementWrap;
	if (inName==HX_("Invert",36,5b,6d,d4)) return Invert;
	if (inName==HX_("Keep",a5,fc,df,31)) return Keep;
	if (inName==HX_("Replace",14,70,79,78)) return Replace;
	if (inName==HX_("Zero",48,3b,ca,3b)) return Zero;
	return super::__Field(inName,inCallProp);
}

static ::String StencilOp_obj_sStaticFields[] = {
	HX_("Keep",a5,fc,df,31),
	HX_("Zero",48,3b,ca,3b),
	HX_("Replace",14,70,79,78),
	HX_("Increment",0f,e6,d1,d3),
	HX_("IncrementWrap",79,ff,97,96),
	HX_("Decrement",f3,d5,54,b2),
	HX_("DecrementWrap",5d,b1,1a,ea),
	HX_("Invert",36,5b,6d,d4),
	::String(null())
};

::hx::Class StencilOp_obj::__mClass;

Dynamic __Create_StencilOp_obj() { return new StencilOp_obj; }

void StencilOp_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.StencilOp",da,5a,7c,96), ::hx::TCanCast< StencilOp_obj >,StencilOp_obj_sStaticFields,0,
	&__Create_StencilOp_obj, &__Create,
	&super::__SGetClass(), &CreateStencilOp_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &StencilOp_obj::__GetStatic;
}

void StencilOp_obj::__boot()
{
Decrement = ::hx::CreateConstEnum< StencilOp_obj >(HX_("Decrement",f3,d5,54,b2),5);
DecrementWrap = ::hx::CreateConstEnum< StencilOp_obj >(HX_("DecrementWrap",5d,b1,1a,ea),6);
Increment = ::hx::CreateConstEnum< StencilOp_obj >(HX_("Increment",0f,e6,d1,d3),3);
IncrementWrap = ::hx::CreateConstEnum< StencilOp_obj >(HX_("IncrementWrap",79,ff,97,96),4);
Invert = ::hx::CreateConstEnum< StencilOp_obj >(HX_("Invert",36,5b,6d,d4),7);
Keep = ::hx::CreateConstEnum< StencilOp_obj >(HX_("Keep",a5,fc,df,31),0);
Replace = ::hx::CreateConstEnum< StencilOp_obj >(HX_("Replace",14,70,79,78),2);
Zero = ::hx::CreateConstEnum< StencilOp_obj >(HX_("Zero",48,3b,ca,3b),1);
}


} // end namespace h3d
} // end namespace mat
