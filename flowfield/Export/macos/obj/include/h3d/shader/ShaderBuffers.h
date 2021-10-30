#ifndef INCLUDED_h3d_shader_ShaderBuffers
#define INCLUDED_h3d_shader_ShaderBuffers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,shader,ShaderBuffers)
HX_DECLARE_CLASS1(hxsl,RuntimeShaderData)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES ShaderBuffers_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderBuffers_obj OBJ_;
		ShaderBuffers_obj();

	public:
		enum { _hx_ClassId = 0x274c98b4 };

		void __construct( ::hxsl::RuntimeShaderData s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.ShaderBuffers")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.ShaderBuffers"); }
		static ::hx::ObjectPtr< ShaderBuffers_obj > __new( ::hxsl::RuntimeShaderData s);
		static ::hx::ObjectPtr< ShaderBuffers_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxsl::RuntimeShaderData s);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderBuffers_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderBuffers",ae,ba,21,75); }

		::Array< Float > globals;
		::Array< Float > params;
		::Array< ::Dynamic> tex;
		::Array< ::Dynamic> buffers;
		void grow( ::hxsl::RuntimeShaderData s);
		::Dynamic grow_dyn();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_ShaderBuffers */ 
