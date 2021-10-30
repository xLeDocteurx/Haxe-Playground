#ifndef INCLUDED_h3d_pass_Shadows
#define INCLUDED_h3d_pass_Shadows

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_Default
#include <h3d/pass/Default.h>
#endif
HX_DECLARE_CLASS1(h3d,Camera)
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,Blur)
HX_DECLARE_CLASS2(h3d,pass,Default)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,pass,RenderMode)
HX_DECLARE_CLASS2(h3d,pass,ScreenFx)
HX_DECLARE_CLASS2(h3d,pass,ShadowSamplingKind)
HX_DECLARE_CLASS2(h3d,pass,Shadows)
HX_DECLARE_CLASS2(h3d,scene,Light)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(hxd,PixelFormat)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Output)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES Shadows_obj : public  ::h3d::pass::Default_obj
{
	public:
		typedef  ::h3d::pass::Default_obj super;
		typedef Shadows_obj OBJ_;
		Shadows_obj();

	public:
		enum { _hx_ClassId = 0x32234ba9 };

		void __construct( ::h3d::scene::Light light);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.Shadows")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.Shadows"); }
		static ::hx::ObjectPtr< Shadows_obj > __new( ::h3d::scene::Light light);
		static ::hx::ObjectPtr< Shadows_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Light light);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Shadows_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Shadows",73,44,df,2c); }

		 ::h3d::Camera lightCamera;
		 ::hxd::PixelFormat format;
		 ::h3d::mat::Texture staticTexture;
		 ::h3d::scene::Light light;
		bool enabled;
		 ::h3d::pass::RenderMode mode;
		int size;
		 ::hxsl::Shader shader;
		 ::h3d::pass::Blur blur;
		 ::h3d::pass::ShadowSamplingKind samplingKind;
		Float power;
		Float bias;
		int pcfQuality;
		Float pcfScale;
		virtual  ::h3d::pass::RenderMode set_mode( ::h3d::pass::RenderMode m);
		::Dynamic set_mode_dyn();

		virtual bool set_enabled(bool b);
		::Dynamic set_enabled_dyn();

		virtual int set_size(int s);
		::Dynamic set_size_dyn();

		virtual void dispose();

		 ::h3d::Matrix getShadowProj();
		::Dynamic getShadowProj_dyn();

		virtual  ::h3d::mat::Texture getShadowTex();
		::Dynamic getShadowTex_dyn();

		bool isUsingWorldDist();
		::Dynamic isUsingWorldDist_dyn();

		::Array< ::Dynamic> getOutputs();

		virtual bool loadStaticData( ::haxe::io::Bytes bytes);
		::Dynamic loadStaticData_dyn();

		virtual  ::haxe::io::Bytes saveStaticData();
		::Dynamic saveStaticData_dyn();

		virtual void computeStatic( ::h3d::pass::PassList passes);
		::Dynamic computeStatic_dyn();

		 ::h3d::mat::Texture createDefaultShadowMap();
		::Dynamic createDefaultShadowMap_dyn();

		virtual void syncShader( ::h3d::mat::Texture texture);
		::Dynamic syncShader_dyn();

		bool filterPasses( ::h3d::pass::PassList passes);
		::Dynamic filterPasses_dyn();

		void cullPasses( ::h3d::pass::PassList passes, ::Dynamic f);
		::Dynamic cullPasses_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_Shadows */ 
