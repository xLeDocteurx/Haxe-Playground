#ifndef INCLUDED_h3d_scene_fwd_DepthPass
#define INCLUDED_h3d_scene_fwd_DepthPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_Default
#include <h3d/pass/Default.h>
#endif
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,Default)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS3(h3d,scene,fwd,DepthPass)
HX_DECLARE_CLASS1(hxsl,Output)

namespace h3d{
namespace scene{
namespace fwd{


class HXCPP_CLASS_ATTRIBUTES DepthPass_obj : public  ::h3d::pass::Default_obj
{
	public:
		typedef  ::h3d::pass::Default_obj super;
		typedef DepthPass_obj OBJ_;
		DepthPass_obj();

	public:
		enum { _hx_ClassId = 0x33625174 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.fwd.DepthPass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.fwd.DepthPass"); }
		static ::hx::ObjectPtr< DepthPass_obj > __new();
		static ::hx::ObjectPtr< DepthPass_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DepthPass_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DepthPass",54,1f,a8,42); }

		int depthMapId;
		bool enableSky;
		::Array< ::Dynamic> getOutputs();

		void draw( ::h3d::pass::PassList passes, ::Dynamic sort);

};

} // end namespace h3d
} // end namespace scene
} // end namespace fwd

#endif /* INCLUDED_h3d_scene_fwd_DepthPass */ 
