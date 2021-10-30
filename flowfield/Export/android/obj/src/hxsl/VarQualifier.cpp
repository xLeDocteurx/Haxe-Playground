#include <hxcpp.h>

#ifndef INCLUDED_hxsl_Prec
#include <hxsl/Prec.h>
#endif
#ifndef INCLUDED_hxsl_VarQualifier
#include <hxsl/VarQualifier.h>
#endif
namespace hxsl{

::hxsl::VarQualifier VarQualifier_obj::Borrow(::String source)
{
	return ::hx::CreateEnum< VarQualifier_obj >(HX_("Borrow",55,69,b9,98),11,1)->_hx_init(0,source);
}

::hxsl::VarQualifier VarQualifier_obj::Const( ::Dynamic max)
{
	return ::hx::CreateEnum< VarQualifier_obj >(HX_("Const",43,69,8b,dd),0,1)->_hx_init(0,max);
}

::hxsl::VarQualifier VarQualifier_obj::Doc(::String s)
{
	return ::hx::CreateEnum< VarQualifier_obj >(HX_("Doc",58,fa,33,00),10,1)->_hx_init(0,s);
}

::hxsl::VarQualifier VarQualifier_obj::Ignore;

::hxsl::VarQualifier VarQualifier_obj::Name(::String n)
{
	return ::hx::CreateEnum< VarQualifier_obj >(HX_("Name",6b,9e,d8,33),4,1)->_hx_init(0,n);
}

::hxsl::VarQualifier VarQualifier_obj::Nullable;

::hxsl::VarQualifier VarQualifier_obj::PerInstance(int v)
{
	return ::hx::CreateEnum< VarQualifier_obj >(HX_("PerInstance",72,6d,f6,45),9,1)->_hx_init(0,v);
}

::hxsl::VarQualifier VarQualifier_obj::PerObject;

::hxsl::VarQualifier VarQualifier_obj::Precision( ::hxsl::Prec p)
{
	return ::hx::CreateEnum< VarQualifier_obj >(HX_("Precision",1e,b5,9a,22),6,1)->_hx_init(0,p);
}

::hxsl::VarQualifier VarQualifier_obj::Private;

::hxsl::VarQualifier VarQualifier_obj::Range(Float min,Float max)
{
	return ::hx::CreateEnum< VarQualifier_obj >(HX_("Range",9d,15,4d,77),7,2)->_hx_init(0,min)->_hx_init(1,max);
}

::hxsl::VarQualifier VarQualifier_obj::Sampler(::String name)
{
	return ::hx::CreateEnum< VarQualifier_obj >(HX_("Sampler",e8,ec,1a,51),12,1)->_hx_init(0,name);
}

::hxsl::VarQualifier VarQualifier_obj::Shared;

bool VarQualifier_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Borrow",55,69,b9,98)) { outValue = VarQualifier_obj::Borrow_dyn(); return true; }
	if (inName==HX_("Const",43,69,8b,dd)) { outValue = VarQualifier_obj::Const_dyn(); return true; }
	if (inName==HX_("Doc",58,fa,33,00)) { outValue = VarQualifier_obj::Doc_dyn(); return true; }
	if (inName==HX_("Ignore",32,2d,5d,c7)) { outValue = VarQualifier_obj::Ignore; return true; }
	if (inName==HX_("Name",6b,9e,d8,33)) { outValue = VarQualifier_obj::Name_dyn(); return true; }
	if (inName==HX_("Nullable",c1,17,e8,0c)) { outValue = VarQualifier_obj::Nullable; return true; }
	if (inName==HX_("PerInstance",72,6d,f6,45)) { outValue = VarQualifier_obj::PerInstance_dyn(); return true; }
	if (inName==HX_("PerObject",5c,ab,ba,4a)) { outValue = VarQualifier_obj::PerObject; return true; }
	if (inName==HX_("Precision",1e,b5,9a,22)) { outValue = VarQualifier_obj::Precision_dyn(); return true; }
	if (inName==HX_("Private",e3,54,c0,56)) { outValue = VarQualifier_obj::Private; return true; }
	if (inName==HX_("Range",9d,15,4d,77)) { outValue = VarQualifier_obj::Range_dyn(); return true; }
	if (inName==HX_("Sampler",e8,ec,1a,51)) { outValue = VarQualifier_obj::Sampler_dyn(); return true; }
	if (inName==HX_("Shared",c5,d2,bf,51)) { outValue = VarQualifier_obj::Shared; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(VarQualifier_obj)

int VarQualifier_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Borrow",55,69,b9,98)) return 11;
	if (inName==HX_("Const",43,69,8b,dd)) return 0;
	if (inName==HX_("Doc",58,fa,33,00)) return 10;
	if (inName==HX_("Ignore",32,2d,5d,c7)) return 8;
	if (inName==HX_("Name",6b,9e,d8,33)) return 4;
	if (inName==HX_("Nullable",c1,17,e8,0c)) return 2;
	if (inName==HX_("PerInstance",72,6d,f6,45)) return 9;
	if (inName==HX_("PerObject",5c,ab,ba,4a)) return 3;
	if (inName==HX_("Precision",1e,b5,9a,22)) return 6;
	if (inName==HX_("Private",e3,54,c0,56)) return 1;
	if (inName==HX_("Range",9d,15,4d,77)) return 7;
	if (inName==HX_("Sampler",e8,ec,1a,51)) return 12;
	if (inName==HX_("Shared",c5,d2,bf,51)) return 5;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarQualifier_obj,Borrow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarQualifier_obj,Const,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarQualifier_obj,Doc,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarQualifier_obj,Name,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarQualifier_obj,PerInstance,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarQualifier_obj,Precision,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(VarQualifier_obj,Range,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarQualifier_obj,Sampler,return)

int VarQualifier_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Borrow",55,69,b9,98)) return 1;
	if (inName==HX_("Const",43,69,8b,dd)) return 1;
	if (inName==HX_("Doc",58,fa,33,00)) return 1;
	if (inName==HX_("Ignore",32,2d,5d,c7)) return 0;
	if (inName==HX_("Name",6b,9e,d8,33)) return 1;
	if (inName==HX_("Nullable",c1,17,e8,0c)) return 0;
	if (inName==HX_("PerInstance",72,6d,f6,45)) return 1;
	if (inName==HX_("PerObject",5c,ab,ba,4a)) return 0;
	if (inName==HX_("Precision",1e,b5,9a,22)) return 1;
	if (inName==HX_("Private",e3,54,c0,56)) return 0;
	if (inName==HX_("Range",9d,15,4d,77)) return 2;
	if (inName==HX_("Sampler",e8,ec,1a,51)) return 1;
	if (inName==HX_("Shared",c5,d2,bf,51)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val VarQualifier_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Borrow",55,69,b9,98)) return Borrow_dyn();
	if (inName==HX_("Const",43,69,8b,dd)) return Const_dyn();
	if (inName==HX_("Doc",58,fa,33,00)) return Doc_dyn();
	if (inName==HX_("Ignore",32,2d,5d,c7)) return Ignore;
	if (inName==HX_("Name",6b,9e,d8,33)) return Name_dyn();
	if (inName==HX_("Nullable",c1,17,e8,0c)) return Nullable;
	if (inName==HX_("PerInstance",72,6d,f6,45)) return PerInstance_dyn();
	if (inName==HX_("PerObject",5c,ab,ba,4a)) return PerObject;
	if (inName==HX_("Precision",1e,b5,9a,22)) return Precision_dyn();
	if (inName==HX_("Private",e3,54,c0,56)) return Private;
	if (inName==HX_("Range",9d,15,4d,77)) return Range_dyn();
	if (inName==HX_("Sampler",e8,ec,1a,51)) return Sampler_dyn();
	if (inName==HX_("Shared",c5,d2,bf,51)) return Shared;
	return super::__Field(inName,inCallProp);
}

static ::String VarQualifier_obj_sStaticFields[] = {
	HX_("Const",43,69,8b,dd),
	HX_("Private",e3,54,c0,56),
	HX_("Nullable",c1,17,e8,0c),
	HX_("PerObject",5c,ab,ba,4a),
	HX_("Name",6b,9e,d8,33),
	HX_("Shared",c5,d2,bf,51),
	HX_("Precision",1e,b5,9a,22),
	HX_("Range",9d,15,4d,77),
	HX_("Ignore",32,2d,5d,c7),
	HX_("PerInstance",72,6d,f6,45),
	HX_("Doc",58,fa,33,00),
	HX_("Borrow",55,69,b9,98),
	HX_("Sampler",e8,ec,1a,51),
	::String(null())
};

::hx::Class VarQualifier_obj::__mClass;

Dynamic __Create_VarQualifier_obj() { return new VarQualifier_obj; }

void VarQualifier_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.VarQualifier",48,f6,89,3f), ::hx::TCanCast< VarQualifier_obj >,VarQualifier_obj_sStaticFields,0,
	&__Create_VarQualifier_obj, &__Create,
	&super::__SGetClass(), &CreateVarQualifier_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &VarQualifier_obj::__GetStatic;
}

void VarQualifier_obj::__boot()
{
Ignore = ::hx::CreateConstEnum< VarQualifier_obj >(HX_("Ignore",32,2d,5d,c7),8);
Nullable = ::hx::CreateConstEnum< VarQualifier_obj >(HX_("Nullable",c1,17,e8,0c),2);
PerObject = ::hx::CreateConstEnum< VarQualifier_obj >(HX_("PerObject",5c,ab,ba,4a),3);
Private = ::hx::CreateConstEnum< VarQualifier_obj >(HX_("Private",e3,54,c0,56),1);
Shared = ::hx::CreateConstEnum< VarQualifier_obj >(HX_("Shared",c5,d2,bf,51),5);
}


} // end namespace hxsl
