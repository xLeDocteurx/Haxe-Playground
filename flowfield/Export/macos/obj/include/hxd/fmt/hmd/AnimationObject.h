#ifndef INCLUDED_hxd_fmt_hmd_AnimationObject
#define INCLUDED_hxd_fmt_hmd_AnimationObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,fmt,hmd,AnimationObject)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES AnimationObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimationObject_obj OBJ_;
		AnimationObject_obj();

	public:
		enum { _hx_ClassId = 0x5aff7989 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.AnimationObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.AnimationObject"); }
		static ::hx::ObjectPtr< AnimationObject_obj > __new();
		static ::hx::ObjectPtr< AnimationObject_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimationObject",c3,04,c8,84); }

		::String name;
		int flags;
		::Array< ::String > props;
		int getStride();
		::Dynamic getStride_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_AnimationObject */ 
