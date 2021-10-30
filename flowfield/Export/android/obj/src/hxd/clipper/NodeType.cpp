#include <hxcpp.h>

#ifndef INCLUDED_hxd_clipper_NodeType
#include <hxd/clipper/NodeType.h>
#endif
namespace hxd{
namespace clipper{

::hxd::clipper::NodeType NodeType_obj::Any;

::hxd::clipper::NodeType NodeType_obj::Closed;

::hxd::clipper::NodeType NodeType_obj::Open;

bool NodeType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Any",cc,b2,31,00)) { outValue = NodeType_obj::Any; return true; }
	if (inName==HX_("Closed",cc,1d,e6,42)) { outValue = NodeType_obj::Closed; return true; }
	if (inName==HX_("Open",ea,2f,8d,34)) { outValue = NodeType_obj::Open; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(NodeType_obj)

int NodeType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Any",cc,b2,31,00)) return 0;
	if (inName==HX_("Closed",cc,1d,e6,42)) return 2;
	if (inName==HX_("Open",ea,2f,8d,34)) return 1;
	return super::__FindIndex(inName);
}

int NodeType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Any",cc,b2,31,00)) return 0;
	if (inName==HX_("Closed",cc,1d,e6,42)) return 0;
	if (inName==HX_("Open",ea,2f,8d,34)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val NodeType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Any",cc,b2,31,00)) return Any;
	if (inName==HX_("Closed",cc,1d,e6,42)) return Closed;
	if (inName==HX_("Open",ea,2f,8d,34)) return Open;
	return super::__Field(inName,inCallProp);
}

static ::String NodeType_obj_sStaticFields[] = {
	HX_("Any",cc,b2,31,00),
	HX_("Open",ea,2f,8d,34),
	HX_("Closed",cc,1d,e6,42),
	::String(null())
};

::hx::Class NodeType_obj::__mClass;

Dynamic __Create_NodeType_obj() { return new NodeType_obj; }

void NodeType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxd.clipper.NodeType",d7,64,35,e1), ::hx::TCanCast< NodeType_obj >,NodeType_obj_sStaticFields,0,
	&__Create_NodeType_obj, &__Create,
	&super::__SGetClass(), &CreateNodeType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &NodeType_obj::__GetStatic;
}

void NodeType_obj::__boot()
{
Any = ::hx::CreateConstEnum< NodeType_obj >(HX_("Any",cc,b2,31,00),0);
Closed = ::hx::CreateConstEnum< NodeType_obj >(HX_("Closed",cc,1d,e6,42),2);
Open = ::hx::CreateConstEnum< NodeType_obj >(HX_("Open",ea,2f,8d,34),1);
}


} // end namespace hxd
} // end namespace clipper
