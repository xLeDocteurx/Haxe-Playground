#ifndef INCLUDED_h3d_pass_ScreenFx
#define INCLUDED_h3d_pass_ScreenFx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,pass,ScreenFx)
HX_DECLARE_CLASS2(h3d,pass,ShaderManager)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS2(h3d,shader,Buffers)
HX_DECLARE_CLASS2(h3d,shader,ScreenShader)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Output)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderList)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES ScreenFx_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ScreenFx_obj OBJ_;
		ScreenFx_obj();

	public:
		enum { _hx_ClassId = 0x35a83008 };

		void __construct( ::Dynamic shader,::Array< ::Dynamic> output);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.ScreenFx")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.ScreenFx"); }
		static ::hx::ObjectPtr< ScreenFx_obj > __new( ::Dynamic shader,::Array< ::Dynamic> output);
		static ::hx::ObjectPtr< ScreenFx_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic shader,::Array< ::Dynamic> output);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScreenFx_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScreenFx",fe,e7,65,9f); }

		static void run( ::h3d::shader::ScreenShader shader, ::h3d::mat::Texture output, ::Dynamic layer);
		static ::Dynamic run_dyn();

		 ::Dynamic shader;
		 ::h3d::mat::Pass pass;
		 ::h3d::prim::Primitive primitive;
		 ::h3d::pass::ShaderManager manager;
		 ::h3d::Engine _engine;
		 ::hxsl::ShaderList shaders;
		 ::h3d::shader::Buffers buffers;
		 ::h3d::Engine get_engine();
		::Dynamic get_engine_dyn();

		void copy( ::h3d::mat::Texture src, ::h3d::mat::Texture dst);
		::Dynamic copy_dyn();

		void setGlobals( ::h3d::scene::RenderContext ctx);
		::Dynamic setGlobals_dyn();

		 ::Dynamic addShader( ::Dynamic s);
		::Dynamic addShader_dyn();

		bool removeShader( ::hxsl::Shader s);
		::Dynamic removeShader_dyn();

		 ::Dynamic getShader(::hx::Class cl);
		::Dynamic getShader_dyn();

		void render();
		::Dynamic render_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_ScreenFx */ 
