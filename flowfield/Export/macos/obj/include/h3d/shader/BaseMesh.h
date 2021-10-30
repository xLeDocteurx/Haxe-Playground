#ifndef INCLUDED_h3d_shader_BaseMesh
#define INCLUDED_h3d_shader_BaseMesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,shader,BaseMesh)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES BaseMesh_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef BaseMesh_obj OBJ_;
		BaseMesh_obj();

	public:
		enum { _hx_ClassId = 0x711f4a5c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.BaseMesh")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.BaseMesh"); }
		static ::hx::ObjectPtr< BaseMesh_obj > __new();
		static ::hx::ObjectPtr< BaseMesh_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseMesh_obj();

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
		::String __ToString() const { return HX_("BaseMesh",be,f6,58,d6); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::Vector color__;
		 ::h3d::Vector get_color();
		::Dynamic get_color_dyn();

		 ::h3d::Vector set_color( ::h3d::Vector _v);
		::Dynamic set_color_dyn();

		Float specularPower__;
		Float get_specularPower();
		::Dynamic get_specularPower_dyn();

		Float set_specularPower(Float _v);
		::Dynamic set_specularPower_dyn();

		Float specularAmount__;
		Float get_specularAmount();
		::Dynamic get_specularAmount_dyn();

		Float set_specularAmount(Float _v);
		::Dynamic set_specularAmount_dyn();

		 ::h3d::Vector specularColor__;
		 ::h3d::Vector get_specularColor();
		::Dynamic get_specularColor_dyn();

		 ::h3d::Vector set_specularColor( ::h3d::Vector _v);
		::Dynamic set_specularColor_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_BaseMesh */ 
