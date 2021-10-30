#ifndef INCLUDED_hxsl__Linker_ShaderInfos
#define INCLUDED_hxsl__Linker_ShaderInfos

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(hxsl,_Linker,ShaderInfos)

namespace hxsl{
namespace _Linker{


class HXCPP_CLASS_ATTRIBUTES ShaderInfos_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderInfos_obj OBJ_;
		ShaderInfos_obj();

	public:
		enum { _hx_ClassId = 0x2d4c7783 };

		void __construct(::String n, ::Dynamic v);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl._Linker.ShaderInfos")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl._Linker.ShaderInfos"); }
		static ::hx::ObjectPtr< ShaderInfos_obj > __new(::String n, ::Dynamic v);
		static ::hx::ObjectPtr< ShaderInfos_obj > __alloc(::hx::Ctx *_hx_ctx,::String n, ::Dynamic v);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderInfos_obj();

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
		::String __ToString() const { return HX_("ShaderInfos",c0,6a,75,79); }

		static void __boot();
		static int UID;
		int uid;
		::String name;
		int priority;
		 ::Dynamic body;
		::Array< ::Dynamic> usedFunctions;
		 ::haxe::ds::ObjectMap deps;
		 ::haxe::ds::IntMap read;
		 ::haxe::ds::IntMap write;
		 ::haxe::ds::IntMap processed;
		 ::Dynamic vertex;
		bool onStack;
		bool hasDiscard;
		 ::Dynamic marked;
};

} // end namespace hxsl
} // end namespace _Linker

#endif /* INCLUDED_hxsl__Linker_ShaderInfos */ 
