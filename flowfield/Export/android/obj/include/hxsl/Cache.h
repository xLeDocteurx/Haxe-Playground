#ifndef INCLUDED_hxsl_Cache
#define INCLUDED_hxsl_Cache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hxsl,BatchShader)
HX_DECLARE_CLASS1(hxsl,Cache)
HX_DECLARE_CLASS1(hxsl,FunctionKind)
HX_DECLARE_CLASS1(hxsl,Output)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)
HX_DECLARE_CLASS1(hxsl,RuntimeShaderData)
HX_DECLARE_CLASS1(hxsl,SearchMap)
HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderList)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Cache_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Cache_obj OBJ_;
		Cache_obj();

	public:
		enum { _hx_ClassId = 0x058d744d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Cache")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Cache"); }
		static ::hx::ObjectPtr< Cache_obj > __new();
		static ::hx::ObjectPtr< Cache_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Cache_obj();

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
		::String __ToString() const { return HX_("Cache",22,0a,42,d4); }

		static  ::hxsl::Cache INST;
		static  ::hxsl::Cache get();
		static ::Dynamic get_dyn();

		static void set( ::hxsl::Cache c);
		static ::Dynamic set_dyn();

		static void clear();
		static ::Dynamic clear_dyn();

		 ::hxsl::SearchMap linkCache;
		 ::haxe::ds::StringMap linkShaders;
		 ::haxe::ds::IntMap batchShaders;
		 ::haxe::ds::StringMap byID;
		bool constsToGlobal;
		 ::hxsl::Shader getLinkShader(::Array< ::Dynamic> vars);
		::Dynamic getLinkShader_dyn();

		 ::hxsl::RuntimeShader link( ::hxsl::ShaderList shaders,bool batchMode);
		::Dynamic link_dyn();

		 ::hxsl::RuntimeShader compileRuntimeShader( ::hxsl::ShaderList shaders,bool batchMode);
		::Dynamic compileRuntimeShader_dyn();

		 ::hxsl::RuntimeShader buildRuntimeShader( ::Dynamic vertex, ::Dynamic fragment, ::haxe::ds::IntMap paramVars);
		::Dynamic buildRuntimeShader_dyn();

		void initGlobals( ::hxsl::RuntimeShader r, ::hxsl::RuntimeShaderData s);
		::Dynamic initGlobals_dyn();

		::String getPath( ::Dynamic v);
		::Dynamic getPath_dyn();

		 ::hxsl::RuntimeShaderData flattenShader( ::Dynamic s, ::hxsl::FunctionKind kind, ::haxe::ds::IntMap params);
		::Dynamic flattenShader_dyn();

		 ::hxsl::BatchShader makeBatchShader( ::hxsl::RuntimeShader rt);
		::Dynamic makeBatchShader_dyn();

		 ::hxsl::SharedShader createBatchShader( ::hxsl::RuntimeShader rt);
		::Dynamic createBatchShader_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Cache */ 
