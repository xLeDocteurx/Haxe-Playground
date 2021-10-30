#ifndef INCLUDED_hxd_fmt_hmd_AnimationFlag
#define INCLUDED_hxd_fmt_hmd_AnimationFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,fmt,hmd,AnimationFlag)
namespace hxd{
namespace fmt{
namespace hmd{


class AnimationFlag_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef AnimationFlag_obj OBJ_;

	public:
		AnimationFlag_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxd.fmt.hmd.AnimationFlag",c6,55,60,6a); }
		::String __ToString() const { return HX_("AnimationFlag.",7e,51,05,bd) + _hx_tag; }

		static ::hxd::fmt::hmd::AnimationFlag HasAlpha;
		static inline ::hxd::fmt::hmd::AnimationFlag HasAlpha_dyn() { return HasAlpha; }
		static ::hxd::fmt::hmd::AnimationFlag HasPosition;
		static inline ::hxd::fmt::hmd::AnimationFlag HasPosition_dyn() { return HasPosition; }
		static ::hxd::fmt::hmd::AnimationFlag HasProps;
		static inline ::hxd::fmt::hmd::AnimationFlag HasProps_dyn() { return HasProps; }
		static ::hxd::fmt::hmd::AnimationFlag HasRotation;
		static inline ::hxd::fmt::hmd::AnimationFlag HasRotation_dyn() { return HasRotation; }
		static ::hxd::fmt::hmd::AnimationFlag HasScale;
		static inline ::hxd::fmt::hmd::AnimationFlag HasScale_dyn() { return HasScale; }
		static ::hxd::fmt::hmd::AnimationFlag HasUV;
		static inline ::hxd::fmt::hmd::AnimationFlag HasUV_dyn() { return HasUV; }
		static ::hxd::fmt::hmd::AnimationFlag Reserved;
		static inline ::hxd::fmt::hmd::AnimationFlag Reserved_dyn() { return Reserved; }
		static ::hxd::fmt::hmd::AnimationFlag SingleFrame;
		static inline ::hxd::fmt::hmd::AnimationFlag SingleFrame_dyn() { return SingleFrame; }
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_AnimationFlag */ 
