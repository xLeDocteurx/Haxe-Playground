#ifndef INCLUDED_h3d_shader_Base2d
#define INCLUDED_h3d_shader_Base2d

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,Base2d)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES Base2d_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef Base2d_obj OBJ_;
		Base2d_obj();

	public:
		enum { _hx_ClassId = 0x539218b9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.Base2d")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.Base2d"); }
		static ::hx::ObjectPtr< Base2d_obj > __new();
		static ::hx::ObjectPtr< Base2d_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Base2d_obj();

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
		::String __ToString() const { return HX_("Base2d",63,6e,bc,89); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		Float zValue__;
		Float get_zValue();
		::Dynamic get_zValue_dyn();

		Float set_zValue(Float _v);
		::Dynamic set_zValue_dyn();

		 ::h3d::mat::Texture texture__;
		 ::h3d::mat::Texture get_texture();
		::Dynamic get_texture_dyn();

		 ::h3d::mat::Texture set_texture( ::h3d::mat::Texture _v);
		::Dynamic set_texture_dyn();

		bool isRelative__;
		bool get_isRelative();
		::Dynamic get_isRelative_dyn();

		bool set_isRelative(bool _v);
		::Dynamic set_isRelative_dyn();

		 ::h3d::Vector color__;
		 ::h3d::Vector get_color();
		::Dynamic get_color_dyn();

		 ::h3d::Vector set_color( ::h3d::Vector _v);
		::Dynamic set_color_dyn();

		 ::h3d::Vector absoluteMatrixA__;
		 ::h3d::Vector get_absoluteMatrixA();
		::Dynamic get_absoluteMatrixA_dyn();

		 ::h3d::Vector set_absoluteMatrixA( ::h3d::Vector _v);
		::Dynamic set_absoluteMatrixA_dyn();

		 ::h3d::Vector absoluteMatrixB__;
		 ::h3d::Vector get_absoluteMatrixB();
		::Dynamic get_absoluteMatrixB_dyn();

		 ::h3d::Vector set_absoluteMatrixB( ::h3d::Vector _v);
		::Dynamic set_absoluteMatrixB_dyn();

		 ::h3d::Vector filterMatrixA__;
		 ::h3d::Vector get_filterMatrixA();
		::Dynamic get_filterMatrixA_dyn();

		 ::h3d::Vector set_filterMatrixA( ::h3d::Vector _v);
		::Dynamic set_filterMatrixA_dyn();

		 ::h3d::Vector filterMatrixB__;
		 ::h3d::Vector get_filterMatrixB();
		::Dynamic get_filterMatrixB_dyn();

		 ::h3d::Vector set_filterMatrixB( ::h3d::Vector _v);
		::Dynamic set_filterMatrixB_dyn();

		bool hasUVPos__;
		bool get_hasUVPos();
		::Dynamic get_hasUVPos_dyn();

		bool set_hasUVPos(bool _v);
		::Dynamic set_hasUVPos_dyn();

		 ::h3d::Vector uvPos__;
		 ::h3d::Vector get_uvPos();
		::Dynamic get_uvPos_dyn();

		 ::h3d::Vector set_uvPos( ::h3d::Vector _v);
		::Dynamic set_uvPos_dyn();

		bool killAlpha__;
		bool get_killAlpha();
		::Dynamic get_killAlpha_dyn();

		bool set_killAlpha(bool _v);
		::Dynamic set_killAlpha_dyn();

		bool pixelAlign__;
		bool get_pixelAlign();
		::Dynamic get_pixelAlign_dyn();

		bool set_pixelAlign(bool _v);
		::Dynamic set_pixelAlign_dyn();

		 ::h3d::Vector halfPixelInverse__;
		 ::h3d::Vector get_halfPixelInverse();
		::Dynamic get_halfPixelInverse_dyn();

		 ::h3d::Vector set_halfPixelInverse( ::h3d::Vector _v);
		::Dynamic set_halfPixelInverse_dyn();

		 ::h3d::Vector viewportA__;
		 ::h3d::Vector get_viewportA();
		::Dynamic get_viewportA_dyn();

		 ::h3d::Vector set_viewportA( ::h3d::Vector _v);
		::Dynamic set_viewportA_dyn();

		 ::h3d::Vector viewportB__;
		 ::h3d::Vector get_viewportB();
		::Dynamic get_viewportB_dyn();

		 ::h3d::Vector set_viewportB( ::h3d::Vector _v);
		::Dynamic set_viewportB_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_Base2d */ 
