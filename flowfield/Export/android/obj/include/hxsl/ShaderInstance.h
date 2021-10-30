#ifndef INCLUDED_hxsl_ShaderInstance
#define INCLUDED_hxsl_ShaderInstance

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(hxsl,ShaderInstance)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES ShaderInstance_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderInstance_obj OBJ_;
		ShaderInstance_obj();

	public:
		enum { _hx_ClassId = 0x060a794f };

		void __construct( ::Dynamic shader);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.ShaderInstance")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.ShaderInstance"); }
		static ::hx::ObjectPtr< ShaderInstance_obj > __new( ::Dynamic shader);
		static ::hx::ObjectPtr< ShaderInstance_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic shader);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderInstance_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderInstance",fa,5b,44,b5); }

		int id;
		 ::Dynamic shader;
		 ::haxe::ds::IntMap params;
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_ShaderInstance */ 
