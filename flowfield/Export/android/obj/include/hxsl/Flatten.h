#ifndef INCLUDED_hxsl_Flatten
#define INCLUDED_hxsl_Flatten

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(hxsl,ARead)
HX_DECLARE_CLASS1(hxsl,Flatten)
HX_DECLARE_CLASS1(hxsl,FunctionKind)
HX_DECLARE_CLASS1(hxsl,Type)
HX_DECLARE_CLASS1(hxsl,VarKind)
HX_DECLARE_CLASS1(hxsl,VecType)
HX_DECLARE_CLASS2(hxsl,_Flatten,Alloc)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Flatten_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Flatten_obj OBJ_;
		Flatten_obj();

	public:
		enum { _hx_ClassId = 0x7bf6ad5b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Flatten")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Flatten"); }
		static ::hx::ObjectPtr< Flatten_obj > __new();
		static ::hx::ObjectPtr< Flatten_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Flatten_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Flatten",a4,d3,4c,b4); }

		::Array< ::Dynamic> globals;
		::Array< ::Dynamic> params;
		::Array< ::Dynamic> outVars;
		 ::haxe::ds::ObjectMap varMap;
		 ::Dynamic econsts;
		::Array< Float > consts;
		 ::haxe::ds::ObjectMap allocData;
		 ::Dynamic flatten( ::Dynamic s, ::hxsl::FunctionKind kind,bool constsToGlobal);
		::Dynamic flatten_dyn();

		 ::Dynamic mapFun( ::Dynamic f, ::Dynamic mapExpr);
		::Dynamic mapFun_dyn();

		 ::Dynamic mapExpr( ::Dynamic e);
		::Dynamic mapExpr_dyn();

		 ::Dynamic mapConsts( ::Dynamic e);
		::Dynamic mapConsts_dyn();

		 ::Dynamic allocConst(Float v, ::Dynamic p);
		::Dynamic allocConst_dyn();

		 ::Dynamic allocConsts(::Array< Float > va, ::Dynamic p);
		::Dynamic allocConsts_dyn();

		 ::Dynamic mkInt(int v, ::Dynamic pos);
		::Dynamic mkInt_dyn();

		 ::Dynamic readIndex( ::hxsl::_Flatten::Alloc a,int index, ::Dynamic pos);
		::Dynamic readIndex_dyn();

		 ::Dynamic readOffset( ::hxsl::_Flatten::Alloc a,int stride, ::Dynamic delta,int index, ::Dynamic pos);
		::Dynamic readOffset_dyn();

		 ::Dynamic access( ::hxsl::_Flatten::Alloc a, ::hxsl::Type t, ::Dynamic pos, ::hxsl::ARead acc);
		::Dynamic access_dyn();

		 ::Dynamic toInt( ::Dynamic e);
		::Dynamic toInt_dyn();

		 ::Dynamic optimize( ::Dynamic e);
		::Dynamic optimize_dyn();

		::Array< ::Dynamic> packTextures(::String name,::Array< ::Dynamic> vars, ::hxsl::Type t);
		::Dynamic packTextures_dyn();

		void packBuffers(::Array< ::Dynamic> vars);
		::Dynamic packBuffers_dyn();

		 ::Dynamic pack(::String name, ::hxsl::VarKind kind,::Array< ::Dynamic> vars, ::hxsl::VecType t);
		::Dynamic pack_dyn();

		int varSize( ::hxsl::Type v, ::hxsl::VecType t);
		::Dynamic varSize_dyn();

		void gatherVar( ::Dynamic v);
		::Dynamic gatherVar_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Flatten */ 
