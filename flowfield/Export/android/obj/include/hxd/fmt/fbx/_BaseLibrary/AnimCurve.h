#ifndef INCLUDED_hxd_fmt_fbx__BaseLibrary_AnimCurve
#define INCLUDED_hxd_fmt_fbx__BaseLibrary_AnimCurve

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxd,fmt,fbx,DefaultMatrixes)
HX_DECLARE_CLASS4(hxd,fmt,fbx,_BaseLibrary,AnimCurve)

namespace hxd{
namespace fmt{
namespace fbx{
namespace _BaseLibrary{


class HXCPP_CLASS_ATTRIBUTES AnimCurve_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimCurve_obj OBJ_;
		AnimCurve_obj();

	public:
		enum { _hx_ClassId = 0x0fd82510 };

		void __construct( ::hxd::fmt::fbx::DefaultMatrixes def,::String object);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.fbx._BaseLibrary.AnimCurve")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.fbx._BaseLibrary.AnimCurve"); }
		static ::hx::ObjectPtr< AnimCurve_obj > __new( ::hxd::fmt::fbx::DefaultMatrixes def,::String object);
		static ::hx::ObjectPtr< AnimCurve_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxd::fmt::fbx::DefaultMatrixes def,::String object);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimCurve_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimCurve",be,78,b2,a7); }

		 ::hxd::fmt::fbx::DefaultMatrixes def;
		::String object;
		 ::Dynamic t;
		 ::Dynamic r;
		 ::Dynamic s;
		 ::Dynamic a;
		 ::Dynamic fov;
		 ::Dynamic roll;
		::Array< ::Dynamic> uv;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
} // end namespace _BaseLibrary

#endif /* INCLUDED_hxd_fmt_fbx__BaseLibrary_AnimCurve */ 
