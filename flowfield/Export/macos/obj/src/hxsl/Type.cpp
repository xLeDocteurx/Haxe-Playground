#include <hxcpp.h>

#ifndef INCLUDED_hxsl_SizeDecl
#include <hxsl/SizeDecl.h>
#endif
#ifndef INCLUDED_hxsl_Type
#include <hxsl/Type.h>
#endif
#ifndef INCLUDED_hxsl_VecType
#include <hxsl/VecType.h>
#endif
namespace hxsl{

::hxsl::Type Type_obj::TArray( ::hxsl::Type t, ::hxsl::SizeDecl size)
{
	return ::hx::CreateEnum< Type_obj >(HX_("TArray",a5,2c,b7,4e),15,2)->_hx_init(0,t)->_hx_init(1,size);
}

::hxsl::Type Type_obj::TBool;

::hxsl::Type Type_obj::TBuffer( ::hxsl::Type t, ::hxsl::SizeDecl size)
{
	return ::hx::CreateEnum< Type_obj >(HX_("TBuffer",74,28,34,aa),16,2)->_hx_init(0,t)->_hx_init(1,size);
}

::hxsl::Type Type_obj::TBytes(int size)
{
	return ::hx::CreateEnum< Type_obj >(HX_("TBytes",77,c7,bf,e6),9,1)->_hx_init(0,size);
}

::hxsl::Type Type_obj::TChannel(int size)
{
	return ::hx::CreateEnum< Type_obj >(HX_("TChannel",cf,9a,b0,5e),17,1)->_hx_init(0,size);
}

::hxsl::Type Type_obj::TFloat;

::hxsl::Type Type_obj::TFun(::Array< ::Dynamic> variants)
{
	return ::hx::CreateEnum< Type_obj >(HX_("TFun",4b,70,bb,37),14,1)->_hx_init(0,variants);
}

::hxsl::Type Type_obj::TInt;

::hxsl::Type Type_obj::TMat2;

::hxsl::Type Type_obj::TMat3;

::hxsl::Type Type_obj::TMat3x4;

::hxsl::Type Type_obj::TMat4;

::hxsl::Type Type_obj::TSampler2D;

::hxsl::Type Type_obj::TSampler2DArray;

::hxsl::Type Type_obj::TSamplerCube;

::hxsl::Type Type_obj::TString;

::hxsl::Type Type_obj::TStruct(::Array< ::Dynamic> vl)
{
	return ::hx::CreateEnum< Type_obj >(HX_("TStruct",c9,a5,d8,ea),13,1)->_hx_init(0,vl);
}

::hxsl::Type Type_obj::TVec(int size, ::hxsl::VecType t)
{
	return ::hx::CreateEnum< Type_obj >(HX_("TVec",60,86,c7,37),5,2)->_hx_init(0,size)->_hx_init(1,t);
}

::hxsl::Type Type_obj::TVoid;

bool Type_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TArray",a5,2c,b7,4e)) { outValue = Type_obj::TArray_dyn(); return true; }
	if (inName==HX_("TBool",9e,6a,9d,89)) { outValue = Type_obj::TBool; return true; }
	if (inName==HX_("TBuffer",74,28,34,aa)) { outValue = Type_obj::TBuffer_dyn(); return true; }
	if (inName==HX_("TBytes",77,c7,bf,e6)) { outValue = Type_obj::TBytes_dyn(); return true; }
	if (inName==HX_("TChannel",cf,9a,b0,5e)) { outValue = Type_obj::TChannel_dyn(); return true; }
	if (inName==HX_("TFloat",a8,84,be,2b)) { outValue = Type_obj::TFloat; return true; }
	if (inName==HX_("TFun",4b,70,bb,37)) { outValue = Type_obj::TFun_dyn(); return true; }
	if (inName==HX_("TInt",fb,b0,bd,37)) { outValue = Type_obj::TInt; return true; }
	if (inName==HX_("TMat2",06,28,d8,90)) { outValue = Type_obj::TMat2; return true; }
	if (inName==HX_("TMat3",07,28,d8,90)) { outValue = Type_obj::TMat3; return true; }
	if (inName==HX_("TMat3x4",83,e0,37,95)) { outValue = Type_obj::TMat3x4; return true; }
	if (inName==HX_("TMat4",08,28,d8,90)) { outValue = Type_obj::TMat4; return true; }
	if (inName==HX_("TSampler2D",e6,77,cd,17)) { outValue = Type_obj::TSampler2D; return true; }
	if (inName==HX_("TSampler2DArray",d3,03,d5,a7)) { outValue = Type_obj::TSampler2DArray; return true; }
	if (inName==HX_("TSamplerCube",29,e2,69,cb)) { outValue = Type_obj::TSamplerCube; return true; }
	if (inName==HX_("TString",45,94,cf,ea)) { outValue = Type_obj::TString; return true; }
	if (inName==HX_("TStruct",c9,a5,d8,ea)) { outValue = Type_obj::TStruct_dyn(); return true; }
	if (inName==HX_("TVec",60,86,c7,37)) { outValue = Type_obj::TVec_dyn(); return true; }
	if (inName==HX_("TVoid",c8,a9,d5,96)) { outValue = Type_obj::TVoid; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Type_obj)

int Type_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TArray",a5,2c,b7,4e)) return 15;
	if (inName==HX_("TBool",9e,6a,9d,89)) return 2;
	if (inName==HX_("TBuffer",74,28,34,aa)) return 16;
	if (inName==HX_("TBytes",77,c7,bf,e6)) return 9;
	if (inName==HX_("TChannel",cf,9a,b0,5e)) return 17;
	if (inName==HX_("TFloat",a8,84,be,2b)) return 3;
	if (inName==HX_("TFun",4b,70,bb,37)) return 14;
	if (inName==HX_("TInt",fb,b0,bd,37)) return 1;
	if (inName==HX_("TMat2",06,28,d8,90)) return 18;
	if (inName==HX_("TMat3",07,28,d8,90)) return 6;
	if (inName==HX_("TMat3x4",83,e0,37,95)) return 8;
	if (inName==HX_("TMat4",08,28,d8,90)) return 7;
	if (inName==HX_("TSampler2D",e6,77,cd,17)) return 10;
	if (inName==HX_("TSampler2DArray",d3,03,d5,a7)) return 11;
	if (inName==HX_("TSamplerCube",29,e2,69,cb)) return 12;
	if (inName==HX_("TString",45,94,cf,ea)) return 4;
	if (inName==HX_("TStruct",c9,a5,d8,ea)) return 13;
	if (inName==HX_("TVec",60,86,c7,37)) return 5;
	if (inName==HX_("TVoid",c8,a9,d5,96)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TBuffer,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TBytes,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TChannel,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TFun,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TStruct,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TVec,return)

int Type_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TArray",a5,2c,b7,4e)) return 2;
	if (inName==HX_("TBool",9e,6a,9d,89)) return 0;
	if (inName==HX_("TBuffer",74,28,34,aa)) return 2;
	if (inName==HX_("TBytes",77,c7,bf,e6)) return 1;
	if (inName==HX_("TChannel",cf,9a,b0,5e)) return 1;
	if (inName==HX_("TFloat",a8,84,be,2b)) return 0;
	if (inName==HX_("TFun",4b,70,bb,37)) return 1;
	if (inName==HX_("TInt",fb,b0,bd,37)) return 0;
	if (inName==HX_("TMat2",06,28,d8,90)) return 0;
	if (inName==HX_("TMat3",07,28,d8,90)) return 0;
	if (inName==HX_("TMat3x4",83,e0,37,95)) return 0;
	if (inName==HX_("TMat4",08,28,d8,90)) return 0;
	if (inName==HX_("TSampler2D",e6,77,cd,17)) return 0;
	if (inName==HX_("TSampler2DArray",d3,03,d5,a7)) return 0;
	if (inName==HX_("TSamplerCube",29,e2,69,cb)) return 0;
	if (inName==HX_("TString",45,94,cf,ea)) return 0;
	if (inName==HX_("TStruct",c9,a5,d8,ea)) return 1;
	if (inName==HX_("TVec",60,86,c7,37)) return 2;
	if (inName==HX_("TVoid",c8,a9,d5,96)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Type_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TArray",a5,2c,b7,4e)) return TArray_dyn();
	if (inName==HX_("TBool",9e,6a,9d,89)) return TBool;
	if (inName==HX_("TBuffer",74,28,34,aa)) return TBuffer_dyn();
	if (inName==HX_("TBytes",77,c7,bf,e6)) return TBytes_dyn();
	if (inName==HX_("TChannel",cf,9a,b0,5e)) return TChannel_dyn();
	if (inName==HX_("TFloat",a8,84,be,2b)) return TFloat;
	if (inName==HX_("TFun",4b,70,bb,37)) return TFun_dyn();
	if (inName==HX_("TInt",fb,b0,bd,37)) return TInt;
	if (inName==HX_("TMat2",06,28,d8,90)) return TMat2;
	if (inName==HX_("TMat3",07,28,d8,90)) return TMat3;
	if (inName==HX_("TMat3x4",83,e0,37,95)) return TMat3x4;
	if (inName==HX_("TMat4",08,28,d8,90)) return TMat4;
	if (inName==HX_("TSampler2D",e6,77,cd,17)) return TSampler2D;
	if (inName==HX_("TSampler2DArray",d3,03,d5,a7)) return TSampler2DArray;
	if (inName==HX_("TSamplerCube",29,e2,69,cb)) return TSamplerCube;
	if (inName==HX_("TString",45,94,cf,ea)) return TString;
	if (inName==HX_("TStruct",c9,a5,d8,ea)) return TStruct_dyn();
	if (inName==HX_("TVec",60,86,c7,37)) return TVec_dyn();
	if (inName==HX_("TVoid",c8,a9,d5,96)) return TVoid;
	return super::__Field(inName,inCallProp);
}

static ::String Type_obj_sStaticFields[] = {
	HX_("TVoid",c8,a9,d5,96),
	HX_("TInt",fb,b0,bd,37),
	HX_("TBool",9e,6a,9d,89),
	HX_("TFloat",a8,84,be,2b),
	HX_("TString",45,94,cf,ea),
	HX_("TVec",60,86,c7,37),
	HX_("TMat3",07,28,d8,90),
	HX_("TMat4",08,28,d8,90),
	HX_("TMat3x4",83,e0,37,95),
	HX_("TBytes",77,c7,bf,e6),
	HX_("TSampler2D",e6,77,cd,17),
	HX_("TSampler2DArray",d3,03,d5,a7),
	HX_("TSamplerCube",29,e2,69,cb),
	HX_("TStruct",c9,a5,d8,ea),
	HX_("TFun",4b,70,bb,37),
	HX_("TArray",a5,2c,b7,4e),
	HX_("TBuffer",74,28,34,aa),
	HX_("TChannel",cf,9a,b0,5e),
	HX_("TMat2",06,28,d8,90),
	::String(null())
};

::hx::Class Type_obj::__mClass;

Dynamic __Create_Type_obj() { return new Type_obj; }

void Type_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxsl.Type",bf,45,b8,12), ::hx::TCanCast< Type_obj >,Type_obj_sStaticFields,0,
	&__Create_Type_obj, &__Create,
	&super::__SGetClass(), &CreateType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
}

void Type_obj::__boot()
{
TBool = ::hx::CreateConstEnum< Type_obj >(HX_("TBool",9e,6a,9d,89),2);
TFloat = ::hx::CreateConstEnum< Type_obj >(HX_("TFloat",a8,84,be,2b),3);
TInt = ::hx::CreateConstEnum< Type_obj >(HX_("TInt",fb,b0,bd,37),1);
TMat2 = ::hx::CreateConstEnum< Type_obj >(HX_("TMat2",06,28,d8,90),18);
TMat3 = ::hx::CreateConstEnum< Type_obj >(HX_("TMat3",07,28,d8,90),6);
TMat3x4 = ::hx::CreateConstEnum< Type_obj >(HX_("TMat3x4",83,e0,37,95),8);
TMat4 = ::hx::CreateConstEnum< Type_obj >(HX_("TMat4",08,28,d8,90),7);
TSampler2D = ::hx::CreateConstEnum< Type_obj >(HX_("TSampler2D",e6,77,cd,17),10);
TSampler2DArray = ::hx::CreateConstEnum< Type_obj >(HX_("TSampler2DArray",d3,03,d5,a7),11);
TSamplerCube = ::hx::CreateConstEnum< Type_obj >(HX_("TSamplerCube",29,e2,69,cb),12);
TString = ::hx::CreateConstEnum< Type_obj >(HX_("TString",45,94,cf,ea),4);
TVoid = ::hx::CreateConstEnum< Type_obj >(HX_("TVoid",c8,a9,d5,96),0);
}


} // end namespace hxsl
