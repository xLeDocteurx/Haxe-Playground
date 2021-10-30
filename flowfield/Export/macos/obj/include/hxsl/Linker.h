#ifndef INCLUDED_hxsl_Linker
#define INCLUDED_hxsl_Linker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hxsl,Linker)
HX_DECLARE_CLASS2(hxsl,_Linker,AllocatedVar)
HX_DECLARE_CLASS2(hxsl,_Linker,ShaderInfos)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Linker_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Linker_obj OBJ_;
		Linker_obj();

	public:
		enum { _hx_ClassId = 0x1b02c894 };

		void __construct(::hx::Null< bool >  __o_batchMode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Linker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Linker"); }
		static ::hx::ObjectPtr< Linker_obj > __new(::hx::Null< bool >  __o_batchMode);
		static ::hx::ObjectPtr< Linker_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_batchMode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Linker_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Linker",07,57,39,21); }

		::Array< ::Dynamic> allVars;
		 ::haxe::ds::StringMap varMap;
		 ::hxsl::_Linker::ShaderInfos curShader;
		::Array< ::Dynamic> shaders;
		 ::haxe::ds::IntMap varIdMap;
		 ::haxe::ds::IntMap locals;
		int curInstance;
		bool batchMode;
		bool isBatchShader;
		int debugDepth;
		void debug(::String msg, ::Dynamic pos);
		::Dynamic debug_dyn();

		 ::Dynamic error(::String msg, ::Dynamic p);
		::Dynamic error_dyn();

		void mergeVar(::String path, ::Dynamic v, ::Dynamic v2, ::Dynamic p,::String shaderName);
		::Dynamic mergeVar_dyn();

		 ::hxsl::_Linker::AllocatedVar allocVar( ::Dynamic v, ::Dynamic p,::String shaderName,::String path, ::hxsl::_Linker::AllocatedVar parent);
		::Dynamic allocVar_dyn();

		 ::Dynamic mapExprVar( ::Dynamic e);
		::Dynamic mapExprVar_dyn();

		 ::hxsl::_Linker::ShaderInfos addShader(::String name, ::Dynamic vertex, ::Dynamic e,int p);
		::Dynamic addShader_dyn();

		int sortByPriorityDesc( ::hxsl::_Linker::ShaderInfos s1, ::hxsl::_Linker::ShaderInfos s2);
		::Dynamic sortByPriorityDesc_dyn();

		void buildDependency( ::hxsl::_Linker::ShaderInfos s, ::hxsl::_Linker::AllocatedVar v,bool isWritten);
		::Dynamic buildDependency_dyn();

		void initDependencies( ::hxsl::_Linker::ShaderInfos s);
		::Dynamic initDependencies_dyn();

		void collect( ::hxsl::_Linker::ShaderInfos cur,::Array< ::Dynamic> out,bool vertex);
		::Dynamic collect_dyn();

		void uniqueLocals( ::Dynamic expr, ::haxe::ds::StringMap locals);
		::Dynamic uniqueLocals_dyn();

		 ::Dynamic link(::Array< ::Dynamic> shadersData);
		::Dynamic link_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Linker */ 
