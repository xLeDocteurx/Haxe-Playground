#ifndef INCLUDED_h3d_mat_Material
#define INCLUDED_h3d_mat_Material

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Material)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,BaseMesh)
HX_DECLARE_CLASS2(h3d,shader,NormalMap)
HX_DECLARE_CLASS2(h3d,shader,SpecularTexture)
HX_DECLARE_CLASS2(h3d,shader,Texture)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS2(hxd,res,Resource)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES Material_obj : public  ::h3d::mat::BaseMaterial_obj
{
	public:
		typedef  ::h3d::mat::BaseMaterial_obj super;
		typedef Material_obj OBJ_;
		Material_obj();

	public:
		enum { _hx_ClassId = 0x20299172 };

		void __construct( ::h3d::mat::Texture texture);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.mat.Material")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.mat.Material"); }
		static ::hx::ObjectPtr< Material_obj > __new( ::h3d::mat::Texture texture);
		static ::hx::ObjectPtr< Material_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture texture);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Material_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Material",c7,18,57,ca); }

		static  ::h3d::mat::Material create( ::h3d::mat::Texture tex);
		static ::Dynamic create_dyn();

		 ::h3d::shader::BaseMesh mshader;
		 ::h3d::shader::NormalMap normalShader;
		 ::hxd::res::Resource model;
		bool castShadows;
		bool receiveShadows;
		bool staticShadows;
		 ::h3d::shader::Texture textureShader;
		 ::h3d::shader::SpecularTexture specularShader;
		 ::h2d::BlendMode blendMode;
		Float get_specularPower();
		::Dynamic get_specularPower_dyn();

		Float set_specularPower(Float v);
		::Dynamic set_specularPower_dyn();

		Float get_specularAmount();
		::Dynamic get_specularAmount_dyn();

		Float set_specularAmount(Float v);
		::Dynamic set_specularAmount_dyn();

		 ::h3d::Vector get_color();
		::Dynamic get_color_dyn();

		 ::h3d::Vector set_color( ::h3d::Vector v);
		::Dynamic set_color_dyn();

		bool get_shadows();
		::Dynamic get_shadows_dyn();

		bool set_shadows(bool v);
		::Dynamic set_shadows_dyn();

		bool set_castShadows(bool v);
		::Dynamic set_castShadows_dyn();

		bool set_receiveShadows(bool v);
		::Dynamic set_receiveShadows_dyn();

		bool set_staticShadows(bool v);
		::Dynamic set_staticShadows_dyn();

		 ::h3d::mat::BaseMaterial clone( ::h3d::mat::BaseMaterial m);

		 ::h2d::BlendMode set_blendMode( ::h2d::BlendMode v);
		::Dynamic set_blendMode_dyn();

		 ::h3d::mat::Texture get_specularTexture();
		::Dynamic get_specularTexture_dyn();

		 ::h3d::mat::Texture get_texture();
		::Dynamic get_texture_dyn();

		 ::h3d::mat::Texture set_texture( ::h3d::mat::Texture t);
		::Dynamic set_texture_dyn();

		 ::h3d::mat::Texture get_normalMap();
		::Dynamic get_normalMap_dyn();

		 ::h3d::mat::Texture set_normalMap( ::h3d::mat::Texture t);
		::Dynamic set_normalMap_dyn();

		 ::h3d::mat::Texture set_specularTexture( ::h3d::mat::Texture t);
		::Dynamic set_specularTexture_dyn();

		 ::Dynamic getDefaultModelProps();
		::Dynamic getDefaultModelProps_dyn();

		 ::Dynamic getDefaultProps(::String type);

		void refreshProps();

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_Material */ 
