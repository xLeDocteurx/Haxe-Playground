#ifndef INCLUDED_h3d_scene_fwd_NormalPass
#define INCLUDED_h3d_scene_fwd_NormalPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_Default
#include <h3d/pass/Default.h>
#endif
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,Default)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS3(h3d,scene,fwd,NormalPass)
HX_DECLARE_CLASS1(hxsl,Output)

namespace h3d{
namespace scene{
namespace fwd{


class HXCPP_CLASS_ATTRIBUTES NormalPass_obj : public  ::h3d::pass::Default_obj
{
	public:
		typedef  ::h3d::pass::Default_obj super;
		typedef NormalPass_obj OBJ_;
		NormalPass_obj();

	public:
		enum { _hx_ClassId = 0x19b8d098 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.fwd.NormalPass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.fwd.NormalPass"); }
		static ::hx::ObjectPtr< NormalPass_obj > __new();
		static ::hx::ObjectPtr< NormalPass_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NormalPass_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NormalPass",b8,26,87,67); }

		int normalMapId;
		::Array< ::Dynamic> getOutputs();

		void draw( ::h3d::pass::PassList passes, ::Dynamic sort);

};

} // end namespace h3d
} // end namespace scene
} // end namespace fwd

#endif /* INCLUDED_h3d_scene_fwd_NormalPass */ 
