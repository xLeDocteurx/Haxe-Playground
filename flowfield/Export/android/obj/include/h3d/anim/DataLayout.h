#ifndef INCLUDED_h3d_anim_DataLayout
#define INCLUDED_h3d_anim_DataLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,anim,DataLayout)
namespace h3d{
namespace anim{


class DataLayout_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DataLayout_obj OBJ_;

	public:
		DataLayout_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.anim.DataLayout",9c,7c,67,c0); }
		::String __ToString() const { return HX_("DataLayout.",1a,09,fe,6e) + _hx_tag; }

		static ::h3d::anim::DataLayout Alpha;
		static inline ::h3d::anim::DataLayout Alpha_dyn() { return Alpha; }
		static ::h3d::anim::DataLayout Position;
		static inline ::h3d::anim::DataLayout Position_dyn() { return Position; }
		static ::h3d::anim::DataLayout Property;
		static inline ::h3d::anim::DataLayout Property_dyn() { return Property; }
		static ::h3d::anim::DataLayout Rotation;
		static inline ::h3d::anim::DataLayout Rotation_dyn() { return Rotation; }
		static ::h3d::anim::DataLayout Scale;
		static inline ::h3d::anim::DataLayout Scale_dyn() { return Scale; }
		static ::h3d::anim::DataLayout SingleFrame;
		static inline ::h3d::anim::DataLayout SingleFrame_dyn() { return SingleFrame; }
		static ::h3d::anim::DataLayout UV;
		static inline ::h3d::anim::DataLayout UV_dyn() { return UV; }
};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_DataLayout */ 
