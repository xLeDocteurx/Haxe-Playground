#ifndef INCLUDED_hxsl__Dce_VarDeps
#define INCLUDED_hxsl__Dce_VarDeps

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(hxsl,_Dce,VarDeps)

namespace hxsl{
namespace _Dce{


class HXCPP_CLASS_ATTRIBUTES VarDeps_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VarDeps_obj OBJ_;
		VarDeps_obj();

	public:
		enum { _hx_ClassId = 0x3678269b };

		void __construct( ::Dynamic v);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl._Dce.VarDeps")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl._Dce.VarDeps"); }
		static ::hx::ObjectPtr< VarDeps_obj > __new( ::Dynamic v);
		static ::hx::ObjectPtr< VarDeps_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic v);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VarDeps_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VarDeps",2b,8e,c1,91); }

		 ::Dynamic v;
		bool keep;
		bool used;
		 ::haxe::ds::IntMap deps;
};

} // end namespace hxsl
} // end namespace _Dce

#endif /* INCLUDED_hxsl__Dce_VarDeps */ 
