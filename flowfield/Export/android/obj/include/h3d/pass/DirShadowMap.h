#ifndef INCLUDED_h3d_pass_DirShadowMap
#define INCLUDED_h3d_pass_DirShadowMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_Shadows
#include <h3d/pass/Shadows.h>
#endif
HX_DECLARE_CLASS1(h3d,Camera)
HX_DECLARE_CLASS2(h3d,mat,DepthBuffer)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,Border)
HX_DECLARE_CLASS2(h3d,pass,Default)
HX_DECLARE_CLASS2(h3d,pass,DirShadowMap)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,pass,RenderMode)
HX_DECLARE_CLASS2(h3d,pass,ScreenFx)
HX_DECLARE_CLASS2(h3d,pass,Shadows)
HX_DECLARE_CLASS2(h3d,scene,Light)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,shader,DirShadow)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES DirShadowMap_obj : public  ::h3d::pass::Shadows_obj
{
	public:
		typedef  ::h3d::pass::Shadows_obj super;
		typedef DirShadowMap_obj OBJ_;
		DirShadowMap_obj();

	public:
		enum { _hx_ClassId = 0x04b798b9 };

		void __construct( ::h3d::scene::Light light);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.DirShadowMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.DirShadowMap"); }
		static ::hx::ObjectPtr< DirShadowMap_obj > __new( ::h3d::scene::Light light);
		static ::hx::ObjectPtr< DirShadowMap_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Light light);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,DirShadowMap_obj *_hx_obj);
		//~DirShadowMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DirShadowMap",af,83,af,89); }

		bool customDepth;
		 ::h3d::mat::DepthBuffer depth;
		 ::h3d::shader::DirShadow dshader;
		 ::h3d::pass::Border border;
		 ::h3d::pass::ScreenFx mergePass;
		bool autoShrink;
		Float maxDist;
		Float minDist;
		 ::h3d::pass::RenderMode set_mode( ::h3d::pass::RenderMode m);

		bool set_enabled(bool b);

		int set_size(int s);

		void dispose();

		 ::h3d::mat::Texture getShadowTex();

		::Dynamic calcShadowBounds;
		inline ::Dynamic &calcShadowBounds_dyn() {return calcShadowBounds; }

		void setGlobals();

		void syncShader( ::h3d::mat::Texture texture);

		 ::haxe::io::Bytes saveStaticData();

		bool loadStaticData( ::haxe::io::Bytes bytes);

		virtual void draw( ::h3d::pass::PassList passes, ::Dynamic sort);

		void computeStatic( ::h3d::pass::PassList passes);

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_DirShadowMap */ 
