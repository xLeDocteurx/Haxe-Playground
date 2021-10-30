#ifndef INCLUDED_h3d_scene_Renderer
#define INCLUDED_h3d_scene_Renderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS2(h3d,impl,Feature)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,impl,RendererFX)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,scene,LightSystem)
HX_DECLARE_CLASS2(h3d,scene,PassObjects)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS2(h3d,scene,RenderMode)
HX_DECLARE_CLASS2(h3d,scene,Renderer)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hxd,PixelFormat)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Renderer_obj : public  ::hxd::impl::AnyProps_obj
{
	public:
		typedef  ::hxd::impl::AnyProps_obj super;
		typedef Renderer_obj OBJ_;
		Renderer_obj();

	public:
		enum { _hx_ClassId = 0x0b619516 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.Renderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.Renderer"); }
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

		 ::h3d::pass::Base defaultPass;
		 ::haxe::ds::StringMap passObjects;
		::Array< ::Dynamic> allPasses;
		 ::h3d::pass::PassList emptyPasses;
		 ::h3d::scene::RenderContext ctx;
		bool hasSetTarget;
		 ::Dynamic frontToBack;
		Dynamic frontToBack_dyn() { return frontToBack;}
		 ::Dynamic backToFront;
		Dynamic backToFront_dyn() { return backToFront;}
		::Array< ::Dynamic> effects;
		 ::h3d::scene::RenderMode renderMode;
		 ::Dynamic getEffect(::hx::Class cl);
		::Dynamic getEffect_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void mark(::String id);
		::Dynamic mark_dyn();

		void addShader( ::hxsl::Shader s);
		::Dynamic addShader_dyn();

		 ::Dynamic getPass(::hx::Class c);
		::Dynamic getPass_dyn();

		virtual  ::h3d::pass::Base getPassByName(::String name);
		::Dynamic getPassByName_dyn();

		 ::hxsl::RuntimeShader debugCompileShader( ::h3d::mat::Pass pass);
		::Dynamic debugCompileShader_dyn();

		bool hasFeature( ::h3d::impl::Feature f);
		::Dynamic hasFeature_dyn();

		 ::Dynamic getDefaultLight( ::Dynamic l);
		::Dynamic getDefaultLight_dyn();

		 ::h3d::scene::LightSystem getLightSystem();
		::Dynamic getLightSystem_dyn();

		void depthSort(bool frontToBack, ::h3d::pass::PassList passes);
		::Dynamic depthSort_dyn();

		void clear( ::Dynamic color, ::Dynamic depth, ::Dynamic stencil);
		::Dynamic clear_dyn();

		 ::h3d::mat::Texture allocTarget(::String name,::hx::Null< bool >  depth,::hx::Null< Float >  size, ::hxd::PixelFormat format);
		::Dynamic allocTarget_dyn();

		void copy( ::h3d::mat::Texture from, ::h3d::mat::Texture to, ::h2d::BlendMode blend);
		::Dynamic copy_dyn();

		void setTarget( ::h3d::mat::Texture tex);
		::Dynamic setTarget_dyn();

		void setTargets(::cpp::VirtualArray textures);
		::Dynamic setTargets_dyn();

		void resetTarget();
		::Dynamic resetTarget_dyn();

		bool has(::String name);
		::Dynamic has_dyn();

		 ::h3d::pass::PassList get(::String name);
		::Dynamic get_dyn();

		void draw(::String name);
		::Dynamic draw_dyn();

		virtual void render();
		::Dynamic render_dyn();

		void computeStatic();
		::Dynamic computeStatic_dyn();

		void start();
		::Dynamic start_dyn();

		void process(::Array< ::Dynamic> passes);
		::Dynamic process_dyn();

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_Renderer */ 
