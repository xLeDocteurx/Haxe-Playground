#include <hxcpp.h>

#ifndef INCLUDED_h3d_mat_Operation
#include <h3d/mat/Operation.h>
#endif
namespace h3d{
namespace mat{

::h3d::mat::Operation Operation_obj::Add;

::h3d::mat::Operation Operation_obj::Max;

::h3d::mat::Operation Operation_obj::Min;

::h3d::mat::Operation Operation_obj::ReverseSub;

::h3d::mat::Operation Operation_obj::Sub;

bool Operation_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Add",01,aa,31,00)) { outValue = Operation_obj::Add; return true; }
	if (inName==HX_("Max",84,c2,3a,00)) { outValue = Operation_obj::Max; return true; }
	if (inName==HX_("Min",72,c9,3a,00)) { outValue = Operation_obj::Min; return true; }
	if (inName==HX_("ReverseSub",9e,0d,17,a5)) { outValue = Operation_obj::ReverseSub; return true; }
	if (inName==HX_("Sub",60,61,3f,00)) { outValue = Operation_obj::Sub; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Operation_obj)

int Operation_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Add",01,aa,31,00)) return 0;
	if (inName==HX_("Max",84,c2,3a,00)) return 4;
	if (inName==HX_("Min",72,c9,3a,00)) return 3;
	if (inName==HX_("ReverseSub",9e,0d,17,a5)) return 2;
	if (inName==HX_("Sub",60,61,3f,00)) return 1;
	return super::__FindIndex(inName);
}

int Operation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Add",01,aa,31,00)) return 0;
	if (inName==HX_("Max",84,c2,3a,00)) return 0;
	if (inName==HX_("Min",72,c9,3a,00)) return 0;
	if (inName==HX_("ReverseSub",9e,0d,17,a5)) return 0;
	if (inName==HX_("Sub",60,61,3f,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Operation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Add",01,aa,31,00)) return Add;
	if (inName==HX_("Max",84,c2,3a,00)) return Max;
	if (inName==HX_("Min",72,c9,3a,00)) return Min;
	if (inName==HX_("ReverseSub",9e,0d,17,a5)) return ReverseSub;
	if (inName==HX_("Sub",60,61,3f,00)) return Sub;
	return super::__Field(inName,inCallProp);
}

static ::String Operation_obj_sStaticFields[] = {
	HX_("Add",01,aa,31,00),
	HX_("Sub",60,61,3f,00),
	HX_("ReverseSub",9e,0d,17,a5),
	HX_("Min",72,c9,3a,00),
	HX_("Max",84,c2,3a,00),
	::String(null())
};

::hx::Class Operation_obj::__mClass;

Dynamic __Create_Operation_obj() { return new Operation_obj; }

void Operation_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.mat.Operation",c4,64,d0,df), ::hx::TCanCast< Operation_obj >,Operation_obj_sStaticFields,0,
	&__Create_Operation_obj, &__Create,
	&super::__SGetClass(), &CreateOperation_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Operation_obj::__GetStatic;
}

void Operation_obj::__boot()
{
Add = ::hx::CreateConstEnum< Operation_obj >(HX_("Add",01,aa,31,00),0);
Max = ::hx::CreateConstEnum< Operation_obj >(HX_("Max",84,c2,3a,00),4);
Min = ::hx::CreateConstEnum< Operation_obj >(HX_("Min",72,c9,3a,00),3);
ReverseSub = ::hx::CreateConstEnum< Operation_obj >(HX_("ReverseSub",9e,0d,17,a5),2);
Sub = ::hx::CreateConstEnum< Operation_obj >(HX_("Sub",60,61,3f,00),1);
}


} // end namespace h3d
} // end namespace mat
