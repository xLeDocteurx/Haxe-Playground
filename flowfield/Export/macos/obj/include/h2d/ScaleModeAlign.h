#ifndef INCLUDED_h2d_ScaleModeAlign
#define INCLUDED_h2d_ScaleModeAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,ScaleModeAlign)
namespace h2d{


class ScaleModeAlign_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ScaleModeAlign_obj OBJ_;

	public:
		ScaleModeAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h2d.ScaleModeAlign",2c,24,49,71); }
		::String __ToString() const { return HX_("ScaleModeAlign.",96,34,fc,17) + _hx_tag; }

		static ::h2d::ScaleModeAlign Bottom;
		static inline ::h2d::ScaleModeAlign Bottom_dyn() { return Bottom; }
		static ::h2d::ScaleModeAlign Center;
		static inline ::h2d::ScaleModeAlign Center_dyn() { return Center; }
		static ::h2d::ScaleModeAlign Left;
		static inline ::h2d::ScaleModeAlign Left_dyn() { return Left; }
		static ::h2d::ScaleModeAlign Right;
		static inline ::h2d::ScaleModeAlign Right_dyn() { return Right; }
		static ::h2d::ScaleModeAlign Top;
		static inline ::h2d::ScaleModeAlign Top_dyn() { return Top; }
};

} // end namespace h2d

#endif /* INCLUDED_h2d_ScaleModeAlign */ 
