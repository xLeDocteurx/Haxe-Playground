#ifndef INCLUDED_h3d_scene_PassObjects
#define INCLUDED_h3d_scene_PassObjects

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,scene,PassObjects)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES PassObjects_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PassObjects_obj OBJ_;
		PassObjects_obj();

	public:
		enum { _hx_ClassId = 0x687fee10 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.PassObjects")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.PassObjects"); }
		static ::hx::ObjectPtr< PassObjects_obj > __new();
		static ::hx::ObjectPtr< PassObjects_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PassObjects_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PassObjects",e3,ef,74,e5); }

		::String name;
		 ::h3d::pass::PassList passes;
		bool rendered;
};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_PassObjects */ 
