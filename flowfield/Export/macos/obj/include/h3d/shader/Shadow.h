#ifndef INCLUDED_h3d_shader_Shadow
#define INCLUDED_h3d_shader_Shadow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS2(h3d,shader,Shadow)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES Shadow_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef Shadow_obj OBJ_;
		Shadow_obj();

	public:
		enum { _hx_ClassId = 0x6cf5d93a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.Shadow")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.Shadow"); }
		static ::hx::ObjectPtr< Shadow_obj > __new();
		static ::hx::ObjectPtr< Shadow_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Shadow_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Shadow",00,3c,b5,51); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_Shadow */ 
