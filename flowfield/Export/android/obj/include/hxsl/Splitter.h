#ifndef INCLUDED_hxsl_Splitter
#define INCLUDED_hxsl_Splitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hxsl,Splitter)
HX_DECLARE_CLASS2(hxsl,_Splitter,VarProps)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Splitter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Splitter_obj OBJ_;
		Splitter_obj();

	public:
		enum { _hx_ClassId = 0x1010b2fc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Splitter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Splitter"); }
		static ::hx::ObjectPtr< Splitter_obj > __new();
		static ::hx::ObjectPtr< Splitter_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Splitter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Splitter",67,f3,61,ad); }

		 ::haxe::ds::IntMap vars;
		 ::haxe::ds::StringMap varNames;
		 ::haxe::ds::ObjectMap varMap;
		 ::Dynamic split( ::Dynamic s);
		::Dynamic split_dyn();

		void addExpr( ::Dynamic f, ::Dynamic e);
		::Dynamic addExpr_dyn();

		void checkVar( ::hxsl::_Splitter::VarProps v,bool vertex, ::haxe::ds::IntMap vvars, ::Dynamic p);
		::Dynamic checkVar_dyn();

		 ::Dynamic mapVars( ::Dynamic e);
		::Dynamic mapVars_dyn();

		 ::hxsl::_Splitter::VarProps get( ::Dynamic v);
		::Dynamic get_dyn();

		void uniqueName( ::Dynamic v);
		::Dynamic uniqueName_dyn();

		void checkExpr( ::Dynamic e);
		::Dynamic checkExpr_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Splitter */ 
