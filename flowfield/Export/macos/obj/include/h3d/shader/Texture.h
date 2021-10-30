#ifndef INCLUDED_h3d_shader_Texture
#define INCLUDED_h3d_shader_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,Texture)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES Texture_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();

	public:
		enum { _hx_ClassId = 0x15a47add };

		void __construct( ::h3d::mat::Texture tex);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.Texture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.Texture"); }
		static ::hx::ObjectPtr< Texture_obj > __new( ::h3d::mat::Texture tex);
		static ::hx::ObjectPtr< Texture_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture tex);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Texture_obj();

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
		::String __ToString() const { return HX_("Texture",bb,f0,31,6c); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		bool additive__;
		bool get_additive();
		::Dynamic get_additive_dyn();

		bool set_additive(bool _v);
		::Dynamic set_additive_dyn();

		bool killAlpha__;
		bool get_killAlpha();
		::Dynamic get_killAlpha_dyn();

		bool set_killAlpha(bool _v);
		::Dynamic set_killAlpha_dyn();

		bool specularAlpha__;
		bool get_specularAlpha();
		::Dynamic get_specularAlpha_dyn();

		bool set_specularAlpha(bool _v);
		::Dynamic set_specularAlpha_dyn();

		Float killAlphaThreshold__;
		Float get_killAlphaThreshold();
		::Dynamic get_killAlphaThreshold_dyn();

		Float set_killAlphaThreshold(Float _v);
		::Dynamic set_killAlphaThreshold_dyn();

		 ::h3d::mat::Texture texture__;
		 ::h3d::mat::Texture get_texture();
		::Dynamic get_texture_dyn();

		 ::h3d::mat::Texture set_texture( ::h3d::mat::Texture _v);
		::Dynamic set_texture_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_Texture */ 
