#ifndef INCLUDED_h3d_pass_RenderMode
#define INCLUDED_h3d_pass_RenderMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,pass,RenderMode)
namespace h3d{
namespace pass{


class RenderMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef RenderMode_obj OBJ_;

	public:
		RenderMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.pass.RenderMode",41,6f,6a,7d); }
		::String __ToString() const { return HX_("RenderMode.",15,e8,3b,bc) + _hx_tag; }

		static ::h3d::pass::RenderMode Dynamic;
		static inline ::h3d::pass::RenderMode Dynamic_dyn() { return Dynamic; }
		static ::h3d::pass::RenderMode Mixed;
		static inline ::h3d::pass::RenderMode Mixed_dyn() { return Mixed; }
		static ::h3d::pass::RenderMode None;
		static inline ::h3d::pass::RenderMode None_dyn() { return None; }
		static ::h3d::pass::RenderMode Static;
		static inline ::h3d::pass::RenderMode Static_dyn() { return Static; }
};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_RenderMode */ 
