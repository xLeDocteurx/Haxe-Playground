#ifndef INCLUDED_h3d_shader_Buffers
#define INCLUDED_h3d_shader_Buffers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,shader,Buffers)
HX_DECLARE_CLASS2(h3d,shader,ShaderBuffers)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)

namespace h3d{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES Buffers_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Buffers_obj OBJ_;
		Buffers_obj();

	public:
		enum { _hx_ClassId = 0x28545575 };

		void __construct( ::hxsl::RuntimeShader s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.shader.Buffers")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.shader.Buffers"); }
		static ::hx::ObjectPtr< Buffers_obj > __new( ::hxsl::RuntimeShader s);
		static ::hx::ObjectPtr< Buffers_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxsl::RuntimeShader s);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Buffers_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Buffers",53,cb,e1,7e); }

		 ::h3d::shader::ShaderBuffers vertex;
		 ::h3d::shader::ShaderBuffers fragment;
		void grow( ::hxsl::RuntimeShader s);
		::Dynamic grow_dyn();

};

} // end namespace h3d
} // end namespace shader

#endif /* INCLUDED_h3d_shader_Buffers */ 
