#ifndef INCLUDED_hxsl_Dce
#define INCLUDED_hxsl_Dce

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(hxsl,Dce)
HX_DECLARE_CLASS2(hxsl,_Dce,VarDeps)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Dce_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Dce_obj OBJ_;
		Dce_obj();

	public:
		enum { _hx_ClassId = 0x5c39b439 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Dce")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Dce"); }
		static ::hx::ObjectPtr< Dce_obj > __new();
		static ::hx::ObjectPtr< Dce_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Dce_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Dce",e6,ef,33,00); }

		 ::haxe::ds::IntMap used;
		::Array< ::Dynamic> channelVars;
		bool markAsKeep;
		void debug(::String msg, ::Dynamic pos);
		::Dynamic debug_dyn();

		 ::Dynamic dce( ::Dynamic vertex, ::Dynamic fragment);
		::Dynamic dce_dyn();

		 ::hxsl::_Dce::VarDeps get( ::Dynamic v);
		::Dynamic get_dyn();

		void markRec( ::hxsl::_Dce::VarDeps v);
		::Dynamic markRec_dyn();

		void link( ::Dynamic v,::Array< ::Dynamic> writeTo);
		::Dynamic link_dyn();

		void check( ::Dynamic e,::Array< ::Dynamic> writeTo,::Array< ::Dynamic> isAffected);
		::Dynamic check_dyn();

		void checkBranches( ::Dynamic e);
		::Dynamic checkBranches_dyn();

		 ::Dynamic mapExpr( ::Dynamic e,bool isVar);
		::Dynamic mapExpr_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Dce */ 
