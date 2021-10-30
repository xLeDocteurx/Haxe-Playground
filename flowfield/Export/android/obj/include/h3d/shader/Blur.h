#ifndef INCLUDED_h3d_shader_Blur
#define INCLUDED_h3d_shader_Blur

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,Blur)
HX_DECLARE_CLASS2(h3d,shader,ScreenShader)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES Blur_obj : public  ::h3d::shader::ScreenShader_obj
{
	public:
		typedef  ::h3d::shader::ScreenShader_obj super;
		typedef Blur_obj OBJ_;
		Blur_obj();

	public:
		enum { _hx_ClassId = 0x49a31b65 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.Blur")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.Blur"); }
		static ::hx::ObjectPtr< Blur_obj > __new();
		static ::hx::ObjectPtr< Blur_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Blur_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Blur",c7,6e,f2,2b); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::Matrix cameraInverseViewProj__;
		 ::h3d::Matrix get_cameraInverseViewProj();
		::Dynamic get_cameraInverseViewProj_dyn();

		 ::h3d::Matrix set_cameraInverseViewProj( ::h3d::Matrix _v);
		::Dynamic set_cameraInverseViewProj_dyn();

		 ::h3d::mat::Texture texture__;
		 ::h3d::mat::Texture get_texture();
		::Dynamic get_texture_dyn();

		 ::h3d::mat::Texture set_texture( ::h3d::mat::Texture _v);
		::Dynamic set_texture_dyn();

		 ::h3d::mat::Texture depthTexture__;
		 ::h3d::mat::Texture get_depthTexture();
		::Dynamic get_depthTexture_dyn();

		 ::h3d::mat::Texture set_depthTexture( ::h3d::mat::Texture _v);
		::Dynamic set_depthTexture_dyn();

		int Quality__;
		int get_Quality();
		::Dynamic get_Quality_dyn();

		int set_Quality(int _v);
		::Dynamic set_Quality_dyn();

		bool isDepth__;
		bool get_isDepth();
		::Dynamic get_isDepth_dyn();

		bool set_isDepth(bool _v);
		::Dynamic set_isDepth_dyn();

		::Array< Float > values__;
		::Array< Float > get_values();
		::Dynamic get_values_dyn();

		::Array< Float > set_values(::Array< Float > _v);
		::Dynamic set_values_dyn();

		::Array< Float > offsets__;
		::Array< Float > get_offsets();
		::Dynamic get_offsets_dyn();

		::Array< Float > set_offsets(::Array< Float > _v);
		::Dynamic set_offsets_dyn();

		 ::h3d::Vector pixel__;
		 ::h3d::Vector get_pixel();
		::Dynamic get_pixel_dyn();

		 ::h3d::Vector set_pixel( ::h3d::Vector _v);
		::Dynamic set_pixel_dyn();

		bool hasFixedColor__;
		bool get_hasFixedColor();
		::Dynamic get_hasFixedColor_dyn();

		bool set_hasFixedColor(bool _v);
		::Dynamic set_hasFixedColor_dyn();

		bool smoothFixedColor__;
		bool get_smoothFixedColor();
		::Dynamic get_smoothFixedColor_dyn();

		bool set_smoothFixedColor(bool _v);
		::Dynamic set_smoothFixedColor_dyn();

		 ::h3d::Vector fixedColor__;
		 ::h3d::Vector get_fixedColor();
		::Dynamic get_fixedColor_dyn();

		 ::h3d::Vector set_fixedColor( ::h3d::Vector _v);
		::Dynamic set_fixedColor_dyn();

		bool isDepthDependant__;
		bool get_isDepthDependant();
		::Dynamic get_isDepthDependant_dyn();

		bool set_isDepthDependant(bool _v);
		::Dynamic set_isDepthDependant_dyn();

		bool hasNormal__;
		bool get_hasNormal();
		::Dynamic get_hasNormal_dyn();

		bool set_hasNormal(bool _v);
		::Dynamic set_hasNormal_dyn();

		 ::h3d::mat::Texture normalTexture__;
		 ::h3d::mat::Texture get_normalTexture();
		::Dynamic get_normalTexture_dyn();

		 ::h3d::mat::Texture set_normalTexture( ::h3d::mat::Texture _v);
		::Dynamic set_normalTexture_dyn();

		bool isCube__;
		bool get_isCube();
		::Dynamic get_isCube_dyn();

		bool set_isCube(bool _v);
		::Dynamic set_isCube_dyn();

		 ::h3d::mat::Texture cubeTexture__;
		 ::h3d::mat::Texture get_cubeTexture();
		::Dynamic get_cubeTexture_dyn();

		 ::h3d::mat::Texture set_cubeTexture( ::h3d::mat::Texture _v);
		::Dynamic set_cubeTexture_dyn();

		 ::h3d::Matrix cubeDir__;
		 ::h3d::Matrix get_cubeDir();
		::Dynamic get_cubeDir_dyn();

		 ::h3d::Matrix set_cubeDir( ::h3d::Matrix _v);
		::Dynamic set_cubeDir_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_Blur */ 
