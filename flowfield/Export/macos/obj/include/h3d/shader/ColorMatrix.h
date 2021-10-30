#ifndef INCLUDED_h3d_shader_ColorMatrix
#define INCLUDED_h3d_shader_ColorMatrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,shader,ColorMatrix)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES ColorMatrix_obj : public  ::hxsl::Shader_obj
{
	public:
		typedef  ::hxsl::Shader_obj super;
		typedef ColorMatrix_obj OBJ_;
		ColorMatrix_obj();

	public:
		enum { _hx_ClassId = 0x05306b32 };

		void __construct(::Array< Float > m);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.ColorMatrix")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.ColorMatrix"); }
		static ::hx::ObjectPtr< ColorMatrix_obj > __new(::Array< Float > m);
		static ::hx::ObjectPtr< ColorMatrix_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< Float > m);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorMatrix_obj();

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
		::String __ToString() const { return HX_("ColorMatrix",e4,5f,23,5a); }

		static void __boot();
		static ::String SRC;
		static  ::hxsl::SharedShader _SHADER;
		 ::h3d::Matrix matrix__;
		 ::h3d::Matrix get_matrix();
		::Dynamic get_matrix_dyn();

		 ::h3d::Matrix set_matrix( ::h3d::Matrix _v);
		::Dynamic set_matrix_dyn();

		void updateConstants( ::hxsl::Globals globals);

		 ::Dynamic getParamValue(int index);

		Float getParamFloatValue(int index);

		 ::hxsl::Shader clone();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_ColorMatrix */ 
