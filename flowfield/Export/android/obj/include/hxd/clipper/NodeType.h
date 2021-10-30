#ifndef INCLUDED_hxd_clipper_NodeType
#define INCLUDED_hxd_clipper_NodeType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxd,clipper,NodeType)
namespace hxd{
namespace clipper{


class NodeType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef NodeType_obj OBJ_;

	public:
		NodeType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.clipper.NodeType",d7,64,35,e1); }
		::String __ToString() const { return HX_("NodeType.",b2,2e,d4,60) + _hx_tag; }

		static ::hxd::clipper::NodeType Any;
		static inline ::hxd::clipper::NodeType Any_dyn() { return Any; }
		static ::hxd::clipper::NodeType Closed;
		static inline ::hxd::clipper::NodeType Closed_dyn() { return Closed; }
		static ::hxd::clipper::NodeType Open;
		static inline ::hxd::clipper::NodeType Open_dyn() { return Open; }
};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_NodeType */ 
