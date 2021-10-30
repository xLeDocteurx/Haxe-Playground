#ifndef INCLUDED_h3d_shader_MinMaxShader
#define INCLUDED_h3d_shader_MinMaxShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
#endif
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,MinMaxShader)
HX_DECLARE_CLASS2(h3d,shader,ScreenShader)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES MinMaxShader_obj : public  ::h3d::shader::ScreenShader_obj
{
	public:
		typedef  ::h3d::shader::ScreenShader_obj super;
		typedef MinMaxShader_obj OBJ_;
		MinMaxShader_obj();

	public:
		enum { _hx_ClassId = 0x513d6dd1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.MinMaxShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.MinMaxShader"); }
		static ::hx::ObjectPtr< MinMaxShader_obj > __new();
		static ::hx::ObjectPtr< MinMaxShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MinMaxShader_obj();

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
		::String __ToString() const { return HX_("MinMaxShader",17,29,4c,30); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::mat::Texture texA__;
		 ::h3d::mat::Texture get_texA();
		::Dynamic get_texA_dyn();

		 ::h3d::mat::Texture set_texA( ::h3d::mat::Texture _v);
		::Dynamic set_texA_dyn();

		 ::h3d::mat::Texture texB__;
		 ::h3d::mat::Texture get_texB();
		::Dynamic get_texB_dyn();

		 ::h3d::mat::Texture set_texB( ::h3d::mat::Texture _v);
		::Dynamic set_texB_dyn();

		bool isMax__;
		bool get_isMax();
		::Dynamic get_isMax_dyn();

		bool set_isMax(bool _v);
		::Dynamic set_isMax_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_MinMaxShader */ 
