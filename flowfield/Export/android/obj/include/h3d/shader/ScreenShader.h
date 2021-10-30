#ifndef INCLUDED_h3d_shader_ScreenShader
#define INCLUDED_h3d_shader_ScreenShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS2(h3d,shader,ScreenShader)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES ScreenShader_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef ScreenShader_obj OBJ_;
		ScreenShader_obj();

	public:
		enum { _hx_ClassId = 0x738c8e6f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.ScreenShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.ScreenShader"); }
		static ::hx::ObjectPtr< ScreenShader_obj > __new();
		static ::hx::ObjectPtr< ScreenShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScreenShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScreenShader",d1,13,51,c2); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		Float flipY__;
		Float get_flipY();
		::Dynamic get_flipY_dyn();

		Float set_flipY(Float _v);
		::Dynamic set_flipY_dyn();

		virtual void updateConstants( ::hxsl::Globals globals);

		virtual  ::Dynamic getParamValue(int index);

		virtual Float getParamFloatValue(int index);

		virtual  ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_ScreenShader */ 
