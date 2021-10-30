#ifndef INCLUDED_h3d_scene_fwd_Renderer
#define INCLUDED_h3d_scene_fwd_Renderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_scene_Renderer
#include <h3d/scene/Renderer.h>
#endif
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,Default)
HX_DECLARE_CLASS2(h3d,pass,DefaultShadowMap)
HX_DECLARE_CLASS2(h3d,pass,DirShadowMap)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,pass,Shadows)
HX_DECLARE_CLASS2(h3d,scene,Renderer)
HX_DECLARE_CLASS3(h3d,scene,fwd,Renderer)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)

namespace h3d{
namespace scene{
namespace fwd{


class HXCPP_CLASS_ATTRIBUTES Renderer_obj : public  ::h3d::scene::Renderer_obj
{
	public:
		typedef  ::h3d::scene::Renderer_obj super;
		typedef Renderer_obj OBJ_;
		Renderer_obj();

	public:
		enum { _hx_ClassId = 0x3416f343 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.fwd.Renderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.fwd.Renderer"); }
		static ::hx::ObjectPtr< Renderer_obj > __new();
		static ::hx::ObjectPtr< Renderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Renderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Renderer",63,81,8d,8c); }

		 ::h3d::pass::Base depth;
		 ::h3d::pass::Base normal;
		 ::h3d::pass::DefaultShadowMap shadow;
		 ::h3d::pass::Base get_def();
		::Dynamic get_def_dyn();

		void renderPass( ::h3d::pass::Base p, ::h3d::pass::PassList passes, ::Dynamic sort);
		::Dynamic renderPass_dyn();

		 ::h3d::pass::Base getPassByName(::String name);

		void render();

};

} // end namespace h3d
} // end namespace scene
} // end namespace fwd

#endif /* INCLUDED_h3d_scene_fwd_Renderer */ 
