#ifndef INCLUDED_h3d_scene_RenderContext
#define INCLUDED_h3d_scene_RenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
HX_DECLARE_CLASS1(h3d,Camera)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Material)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,pass,PassObject)
HX_DECLARE_CLASS2(h3d,pass,ShaderManager)
HX_DECLARE_CLASS2(h3d,scene,Light)
HX_DECLARE_CLASS2(h3d,scene,LightSystem)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,PassObjects)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS2(h3d,scene,Scene)
HX_DECLARE_CLASS3(h3d,scene,_RenderContext,SharedGlobal)
HX_DECLARE_CLASS2(h3d,shader,Buffers)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderList)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES RenderContext_obj : public  ::h3d::impl::RenderContext_obj
{
	public:
		typedef  ::h3d::impl::RenderContext_obj super;
		typedef RenderContext_obj OBJ_;
		RenderContext_obj();

	public:
		enum { _hx_ClassId = 0x6773c6a2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.RenderContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.RenderContext"); }
		static ::hx::ObjectPtr< RenderContext_obj > __new();
		static ::hx::ObjectPtr< RenderContext_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderContext",19,59,55,5d); }

		 ::h3d::Camera camera;
		 ::h3d::scene::Scene scene;
		 ::h3d::pass::PassObject drawPass;
		 ::h3d::mat::Pass pbrLightPass;
		bool computingStatic;
		::Array< ::Dynamic> sharedGlobals;
		 ::h3d::scene::LightSystem lightSystem;
		 ::hxsl::ShaderList extraShaders;
		bool visibleFlag;
		 ::h3d::shader::Buffers shaderBuffers;
		::Dynamic cullingCollider;
		 ::h3d::pass::PassObject allocPool;
		 ::h3d::pass::PassObject allocFirst;
		::Array< ::Dynamic> cachedShaderList;
		::Array< ::Dynamic> cachedPassObjects;
		int cachedPos;
		 ::h3d::pass::PassObject passes;
		 ::h3d::scene::Light lights;
		 ::h3d::pass::ShaderManager currentManager;
		void emit( ::h3d::mat::Material mat, ::h3d::scene::Object obj,::hx::Null< int >  index);
		::Dynamic emit_dyn();

		void start();
		::Dynamic start_dyn();

		void nextPass();
		::Dynamic nextPass_dyn();

		 ::Dynamic getGlobal(::String name);
		::Dynamic getGlobal_dyn();

		void setGlobal(::String name, ::Dynamic value);
		::Dynamic setGlobal_dyn();

		void setGlobalID(int gid, ::Dynamic value);
		::Dynamic setGlobalID_dyn();

		 ::h3d::pass::PassObject emitPass( ::h3d::mat::Pass pass, ::h3d::scene::Object obj);
		::Dynamic emitPass_dyn();

		 ::hxsl::ShaderList allocShaderList( ::hxsl::Shader s, ::hxsl::ShaderList next);
		::Dynamic allocShaderList_dyn();

		void emitLight( ::h3d::scene::Light l);
		::Dynamic emitLight_dyn();

		void uploadParams();
		::Dynamic uploadParams_dyn();

		void done();
		::Dynamic done_dyn();

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_RenderContext */ 
