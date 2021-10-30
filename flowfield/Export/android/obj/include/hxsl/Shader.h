#ifndef INCLUDED_hxsl_Shader
#define INCLUDED_hxsl_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderInstance)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Shader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();

	public:
		enum { _hx_ClassId = 0x19343d6e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Shader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Shader"); }
		static ::hx::ObjectPtr< Shader_obj > __new();
		static ::hx::ObjectPtr< Shader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Shader",45,33,b5,51); }

		int priority;
		 ::hxsl::SharedShader shader;
		 ::hxsl::ShaderInstance instance;
		int constBits;
		bool constModified;
		void initialize();
		::Dynamic initialize_dyn();

		void setPriority(int v);
		::Dynamic setPriority_dyn();

		virtual  ::Dynamic getParamValue(int index);
		::Dynamic getParamValue_dyn();

		virtual Float getParamFloatValue(int index);
		::Dynamic getParamFloatValue_dyn();

		virtual void updateConstants( ::hxsl::Globals globals);
		::Dynamic updateConstants_dyn();

		void updateConstantsFinal( ::hxsl::Globals globals);
		::Dynamic updateConstantsFinal_dyn();

		virtual  ::hxsl::Shader clone();
		::Dynamic clone_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Shader */ 
