#ifndef INCLUDED_hxsl_RuntimeShader
#define INCLUDED_hxsl_RuntimeShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(hxsl,RuntimeShader)
HX_DECLARE_CLASS1(hxsl,RuntimeShaderData)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES RuntimeShader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RuntimeShader_obj OBJ_;
		RuntimeShader_obj();

	public:
		enum { _hx_ClassId = 0x568be6f4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.RuntimeShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.RuntimeShader"); }
		static ::hx::ObjectPtr< RuntimeShader_obj > __new();
		static ::hx::ObjectPtr< RuntimeShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RuntimeShader_obj();

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
		::String __ToString() const { return HX_("RuntimeShader",fd,69,a1,7e); }

		static void __boot();
		static int UID;
		int id;
		 ::hxsl::RuntimeShaderData vertex;
		 ::hxsl::RuntimeShaderData fragment;
		 ::haxe::ds::IntMap globals;
		::String signature;
		bool batchMode;
		 ::Dynamic spec;
		bool hasGlobal(int gid);
		::Dynamic hasGlobal_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_RuntimeShader */ 
