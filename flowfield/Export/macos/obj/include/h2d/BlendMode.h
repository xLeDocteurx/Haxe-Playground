#ifndef INCLUDED_h2d_BlendMode
#define INCLUDED_h2d_BlendMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h2d,BlendMode)
namespace h2d{


class BlendMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef BlendMode_obj OBJ_;

	public:
		BlendMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h2d.BlendMode",20,99,e4,bf); }
		::String __ToString() const { return HX_("BlendMode.",7a,e9,60,9b) + _hx_tag; }

		static ::h2d::BlendMode Add;
		static inline ::h2d::BlendMode Add_dyn() { return Add; }
		static ::h2d::BlendMode Alpha;
		static inline ::h2d::BlendMode Alpha_dyn() { return Alpha; }
		static ::h2d::BlendMode AlphaAdd;
		static inline ::h2d::BlendMode AlphaAdd_dyn() { return AlphaAdd; }
		static ::h2d::BlendMode AlphaMultiply;
		static inline ::h2d::BlendMode AlphaMultiply_dyn() { return AlphaMultiply; }
		static ::h2d::BlendMode Erase;
		static inline ::h2d::BlendMode Erase_dyn() { return Erase; }
		static ::h2d::BlendMode Max;
		static inline ::h2d::BlendMode Max_dyn() { return Max; }
		static ::h2d::BlendMode Min;
		static inline ::h2d::BlendMode Min_dyn() { return Min; }
		static ::h2d::BlendMode Multiply;
		static inline ::h2d::BlendMode Multiply_dyn() { return Multiply; }
		static ::h2d::BlendMode None;
		static inline ::h2d::BlendMode None_dyn() { return None; }
		static ::h2d::BlendMode Screen;
		static inline ::h2d::BlendMode Screen_dyn() { return Screen; }
		static ::h2d::BlendMode SoftAdd;
		static inline ::h2d::BlendMode SoftAdd_dyn() { return SoftAdd; }
		static ::h2d::BlendMode Sub;
		static inline ::h2d::BlendMode Sub_dyn() { return Sub; }
};

} // end namespace h2d

#endif /* INCLUDED_h2d_BlendMode */ 
