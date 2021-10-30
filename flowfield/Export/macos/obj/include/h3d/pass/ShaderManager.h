#ifndef INCLUDED_h3d_pass_ShaderManager
#define INCLUDED_h3d_pass_ShaderManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,pass,ShaderManager)
HX_DECLARE_CLASS2(h3d,shader,Buffers)
HX_DECLARE_CLASS1(hxsl,AllocParam)
HX_DECLARE_CLASS1(hxsl,Cache)
HX_DECLARE_CLASS1(hxsl,Globals)
HX_DECLARE_CLASS1(hxsl,Output)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)
HX_DECLARE_CLASS1(hxsl,ShaderList)
HX_DECLARE_CLASS1(hxsl,Type)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES ShaderManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderManager_obj OBJ_;
		ShaderManager_obj();

	public:
		enum { _hx_ClassId = 0x035cfd5e };

		void __construct(::Array< ::Dynamic> output);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.ShaderManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.ShaderManager"); }
		static ::hx::ObjectPtr< ShaderManager_obj > __new(::Array< ::Dynamic> output);
		static ::hx::ObjectPtr< ShaderManager_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> output);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderManager_obj();

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
		::String __ToString() const { return HX_("ShaderManager",a8,a9,52,d7); }

		static void __boot();
		static bool STRICT;
		 ::hxsl::Globals globals;
		 ::hxsl::Cache shaderCache;
		 ::hxsl::ShaderList currentOutput;
		void setOutput(::Array< ::Dynamic> output);
		::Dynamic setOutput_dyn();

		int fillRec( ::Dynamic v, ::hxsl::Type type,::Array< Float > out,int pos);
		::Dynamic fillRec_dyn();

		::String shaderInfo( ::hxsl::ShaderList shaders,::String path);
		::Dynamic shaderInfo_dyn();

		::Array< Float > getPtr(::Array< Float > data);
		::Dynamic getPtr_dyn();

		 ::Dynamic getParamValue( ::hxsl::AllocParam p, ::hxsl::ShaderList shaders,::hx::Null< bool >  opt);
		::Dynamic getParamValue_dyn();

		void fillGlobals( ::h3d::shader::Buffers buf, ::hxsl::RuntimeShader s);
		::Dynamic fillGlobals_dyn();

		void fillParams( ::h3d::shader::Buffers buf, ::hxsl::RuntimeShader s, ::hxsl::ShaderList shaders);
		::Dynamic fillParams_dyn();

		 ::hxsl::RuntimeShader compileShaders( ::hxsl::ShaderList shaders,::hx::Null< bool >  batchMode);
		::Dynamic compileShaders_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_ShaderManager */ 
