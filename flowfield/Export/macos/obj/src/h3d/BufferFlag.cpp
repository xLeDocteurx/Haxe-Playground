#include <hxcpp.h>

#ifndef INCLUDED_h3d_BufferFlag
#include <h3d/BufferFlag.h>
#endif
namespace h3d{

::h3d::BufferFlag BufferFlag_obj::Dynamic;

::h3d::BufferFlag BufferFlag_obj::LargeBuffer;

::h3d::BufferFlag BufferFlag_obj::Managed;

::h3d::BufferFlag BufferFlag_obj::NoAlloc;

::h3d::BufferFlag BufferFlag_obj::Quads;

::h3d::BufferFlag BufferFlag_obj::RawFormat;

::h3d::BufferFlag BufferFlag_obj::Triangles;

::h3d::BufferFlag BufferFlag_obj::UniformBuffer;

bool BufferFlag_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Dynamic",5f,c7,66,03)) { outValue = BufferFlag_obj::Dynamic; return true; }
	if (inName==HX_("LargeBuffer",fb,fa,2c,7e)) { outValue = BufferFlag_obj::LargeBuffer; return true; }
	if (inName==HX_("Managed",3f,ba,12,e1)) { outValue = BufferFlag_obj::Managed; return true; }
	if (inName==HX_("NoAlloc",54,50,e8,c1)) { outValue = BufferFlag_obj::NoAlloc; return true; }
	if (inName==HX_("Quads",ac,e5,14,f1)) { outValue = BufferFlag_obj::Quads; return true; }
	if (inName==HX_("RawFormat",1f,17,0e,c4)) { outValue = BufferFlag_obj::RawFormat; return true; }
	if (inName==HX_("Triangles",8b,10,14,21)) { outValue = BufferFlag_obj::Triangles; return true; }
	if (inName==HX_("UniformBuffer",34,a1,00,8b)) { outValue = BufferFlag_obj::UniformBuffer; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BufferFlag_obj)

int BufferFlag_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Dynamic",5f,c7,66,03)) return 0;
	if (inName==HX_("LargeBuffer",fb,fa,2c,7e)) return 7;
	if (inName==HX_("Managed",3f,ba,12,e1)) return 3;
	if (inName==HX_("NoAlloc",54,50,e8,c1)) return 5;
	if (inName==HX_("Quads",ac,e5,14,f1)) return 2;
	if (inName==HX_("RawFormat",1f,17,0e,c4)) return 4;
	if (inName==HX_("Triangles",8b,10,14,21)) return 1;
	if (inName==HX_("UniformBuffer",34,a1,00,8b)) return 6;
	return super::__FindIndex(inName);
}

int BufferFlag_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Dynamic",5f,c7,66,03)) return 0;
	if (inName==HX_("LargeBuffer",fb,fa,2c,7e)) return 0;
	if (inName==HX_("Managed",3f,ba,12,e1)) return 0;
	if (inName==HX_("NoAlloc",54,50,e8,c1)) return 0;
	if (inName==HX_("Quads",ac,e5,14,f1)) return 0;
	if (inName==HX_("RawFormat",1f,17,0e,c4)) return 0;
	if (inName==HX_("Triangles",8b,10,14,21)) return 0;
	if (inName==HX_("UniformBuffer",34,a1,00,8b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val BufferFlag_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Dynamic",5f,c7,66,03)) return Dynamic;
	if (inName==HX_("LargeBuffer",fb,fa,2c,7e)) return LargeBuffer;
	if (inName==HX_("Managed",3f,ba,12,e1)) return Managed;
	if (inName==HX_("NoAlloc",54,50,e8,c1)) return NoAlloc;
	if (inName==HX_("Quads",ac,e5,14,f1)) return Quads;
	if (inName==HX_("RawFormat",1f,17,0e,c4)) return RawFormat;
	if (inName==HX_("Triangles",8b,10,14,21)) return Triangles;
	if (inName==HX_("UniformBuffer",34,a1,00,8b)) return UniformBuffer;
	return super::__Field(inName,inCallProp);
}

static ::String BufferFlag_obj_sStaticFields[] = {
	HX_("Dynamic",5f,c7,66,03),
	HX_("Triangles",8b,10,14,21),
	HX_("Quads",ac,e5,14,f1),
	HX_("Managed",3f,ba,12,e1),
	HX_("RawFormat",1f,17,0e,c4),
	HX_("NoAlloc",54,50,e8,c1),
	HX_("UniformBuffer",34,a1,00,8b),
	HX_("LargeBuffer",fb,fa,2c,7e),
	::String(null())
};

::hx::Class BufferFlag_obj::__mClass;

Dynamic __Create_BufferFlag_obj() { return new BufferFlag_obj; }

void BufferFlag_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("h3d.BufferFlag",01,70,00,5e), ::hx::TCanCast< BufferFlag_obj >,BufferFlag_obj_sStaticFields,0,
	&__Create_BufferFlag_obj, &__Create,
	&super::__SGetClass(), &CreateBufferFlag_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BufferFlag_obj::__GetStatic;
}

void BufferFlag_obj::__boot()
{
Dynamic = ::hx::CreateConstEnum< BufferFlag_obj >(HX_("Dynamic",5f,c7,66,03),0);
LargeBuffer = ::hx::CreateConstEnum< BufferFlag_obj >(HX_("LargeBuffer",fb,fa,2c,7e),7);
Managed = ::hx::CreateConstEnum< BufferFlag_obj >(HX_("Managed",3f,ba,12,e1),3);
NoAlloc = ::hx::CreateConstEnum< BufferFlag_obj >(HX_("NoAlloc",54,50,e8,c1),5);
Quads = ::hx::CreateConstEnum< BufferFlag_obj >(HX_("Quads",ac,e5,14,f1),2);
RawFormat = ::hx::CreateConstEnum< BufferFlag_obj >(HX_("RawFormat",1f,17,0e,c4),4);
Triangles = ::hx::CreateConstEnum< BufferFlag_obj >(HX_("Triangles",8b,10,14,21),1);
UniformBuffer = ::hx::CreateConstEnum< BufferFlag_obj >(HX_("UniformBuffer",34,a1,00,8b),6);
}


} // end namespace h3d
