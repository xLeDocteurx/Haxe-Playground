#ifndef INCLUDED_hxsl_SharedShader
#define INCLUDED_hxsl_SharedShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(hxsl,Eval)
HX_DECLARE_CLASS1(hxsl,ShaderConst)
HX_DECLARE_CLASS1(hxsl,ShaderGlobal)
HX_DECLARE_CLASS1(hxsl,ShaderInstance)
HX_DECLARE_CLASS1(hxsl,SharedShader)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES SharedShader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SharedShader_obj OBJ_;
		SharedShader_obj();

	public:
		enum { _hx_ClassId = 0x087576b3 };

		void __construct(::String src);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.SharedShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.SharedShader"); }
		static ::hx::ObjectPtr< SharedShader_obj > __new(::String src);
		static ::hx::ObjectPtr< SharedShader_obj > __alloc(::hx::Ctx *_hx_ctx,::String src);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SharedShader_obj();

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
		::String __ToString() const { return HX_("SharedShader",ca,e7,22,98); }

		static void __boot();
		static bool UNROLL_LOOPS;
		 ::Dynamic data;
		::Array< ::Dynamic> globals;
		 ::hxsl::ShaderConst consts;
		 ::haxe::ds::IntMap instanceCache;
		int paramsCount;
		void initialize();
		::Dynamic initialize_dyn();

		 ::hxsl::ShaderInstance getInstance(int constBits);
		::Dynamic getInstance_dyn();

		 ::hxsl::ShaderInstance makeInstance(int constBits);
		::Dynamic makeInstance_dyn();

		void addSelfParam( ::hxsl::ShaderInstance i, ::Dynamic v);
		::Dynamic addSelfParam_dyn();

		void addParam( ::hxsl::Eval eval, ::hxsl::ShaderInstance i, ::Dynamic v);
		::Dynamic addParam_dyn();

		void browseVar( ::Dynamic v,::String path);
		::Dynamic browseVar_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_SharedShader */ 
