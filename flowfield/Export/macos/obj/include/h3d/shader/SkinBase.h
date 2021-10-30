#ifndef INCLUDED_h3d_shader_SkinBase
#define INCLUDED_h3d_shader_SkinBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,shader,SkinBase)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES SkinBase_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef SkinBase_obj OBJ_;
		SkinBase_obj();

	public:
		enum { _hx_ClassId = 0x0510bcec };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.SkinBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.SkinBase"); }
		static ::hx::ObjectPtr< SkinBase_obj > __new();
		static ::hx::ObjectPtr< SkinBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SkinBase_obj();

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
		::String __ToString() const { return HX_("SkinBase",4e,69,4a,6a); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		int MaxBones__;
		int get_MaxBones();
		::Dynamic get_MaxBones_dyn();

		int set_MaxBones(int _v);
		::Dynamic set_MaxBones_dyn();

		::Array< ::Dynamic> bonesMatrixes__;
		::Array< ::Dynamic> get_bonesMatrixes();
		::Dynamic get_bonesMatrixes_dyn();

		::Array< ::Dynamic> set_bonesMatrixes(::Array< ::Dynamic> _v);
		::Dynamic set_bonesMatrixes_dyn();

		virtual void updateConstants( ::hxsl::Globals globals);

		virtual  ::Dynamic getParamValue(int index);

		virtual Float getParamFloatValue(int index);

		virtual  ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_SkinBase */ 
