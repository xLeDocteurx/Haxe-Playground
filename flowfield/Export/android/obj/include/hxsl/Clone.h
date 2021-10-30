#ifndef INCLUDED_hxsl_Clone
#define INCLUDED_hxsl_Clone

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(hxsl,Clone)
HX_DECLARE_CLASS1(hxsl,Type)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Clone_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Clone_obj OBJ_;
		Clone_obj();

	public:
		enum { _hx_ClassId = 0x01275c4c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Clone")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Clone"); }
		static ::hx::ObjectPtr< Clone_obj > __new();
		static ::hx::ObjectPtr< Clone_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Clone_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Clone",3d,83,90,db); }

		static  ::Dynamic shaderData( ::Dynamic s);
		static ::Dynamic shaderData_dyn();

		 ::haxe::ds::IntMap varMap;
		 ::Dynamic tvar( ::Dynamic v);
		::Dynamic tvar_dyn();

		 ::Dynamic tfun( ::Dynamic f);
		::Dynamic tfun_dyn();

		 ::hxsl::Type ttype( ::hxsl::Type t);
		::Dynamic ttype_dyn();

		 ::Dynamic texpr( ::Dynamic e);
		::Dynamic texpr_dyn();

		 ::Dynamic shader( ::Dynamic s);
		::Dynamic shader_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Clone */ 
