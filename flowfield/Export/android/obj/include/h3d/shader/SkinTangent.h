#ifndef INCLUDED_h3d_shader_SkinTangent
#define INCLUDED_h3d_shader_SkinTangent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_shader_SkinBase
#include <h3d/shader/SkinBase.h>
#endif
HX_DECLARE_CLASS2(h3d,shader,SkinBase)
HX_DECLARE_CLASS2(h3d,shader,SkinTangent)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES SkinTangent_obj : public  ::h3d::shader::SkinBase_obj
{
	public:
		typedef  ::h3d::shader::SkinBase_obj super;
		typedef SkinTangent_obj OBJ_;
		SkinTangent_obj();

	public:
		enum { _hx_ClassId = 0x722c02ca };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.SkinTangent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.SkinTangent"); }
		static ::hx::ObjectPtr< SkinTangent_obj > __new();
		static ::hx::ObjectPtr< SkinTangent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SkinTangent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SkinTangent",a8,bf,0c,48); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_SkinTangent */ 
