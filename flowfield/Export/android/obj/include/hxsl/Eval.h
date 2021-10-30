#ifndef INCLUDED_hxsl_Eval
#define INCLUDED_hxsl_Eval

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(hxsl,Const)
HX_DECLARE_CLASS1(hxsl,Eval)
HX_DECLARE_CLASS1(hxsl,TExprDef)
HX_DECLARE_CLASS1(hxsl,TGlobal)
HX_DECLARE_CLASS1(hxsl,Type)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Eval_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Eval_obj OBJ_;
		Eval_obj();

	public:
		enum { _hx_ClassId = 0x17ca95a5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Eval")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Eval"); }
		static ::hx::ObjectPtr< Eval_obj > __new();
		static ::hx::ObjectPtr< Eval_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Eval_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Eval",bc,97,f5,2d); }

		 ::haxe::ds::ObjectMap varMap;
		bool inlineCalls;
		bool unrollLoops;
		bool eliminateConditionals;
		 ::haxe::ds::IntMap constants;
		 ::haxe::ds::ObjectMap funMap;
		 ::Dynamic curFun;
		void setConstant( ::Dynamic v, ::hxsl::Const c);
		::Dynamic setConstant_dyn();

		 ::Dynamic mapVar( ::Dynamic v);
		::Dynamic mapVar_dyn();

		bool checkSamplerRec( ::hxsl::Type t);
		::Dynamic checkSamplerRec_dyn();

		bool needsInline( ::Dynamic f);
		::Dynamic needsInline_dyn();

		 ::Dynamic eval( ::Dynamic s);
		::Dynamic eval_dyn();

		bool markReturn;
		bool hasReturn( ::Dynamic e);
		::Dynamic hasReturn_dyn();

		void hasReturnLoop( ::Dynamic e);
		::Dynamic hasReturnLoop_dyn();

		 ::Dynamic handleReturn( ::Dynamic e,::hx::Null< bool >  isFinal);
		::Dynamic handleReturn_dyn();

		 ::Dynamic handleReturnDef( ::Dynamic e);
		::Dynamic handleReturnDef_dyn();

		 ::hxsl::TExprDef evalCall( ::hxsl::TGlobal g,::Array< ::Dynamic> args,::Array< ::Dynamic> oldArgs, ::Dynamic pos);
		::Dynamic evalCall_dyn();

		::String constantsToString();
		::Dynamic constantsToString_dyn();

		 ::Dynamic ifBlock( ::Dynamic e);
		::Dynamic ifBlock_dyn();

		 ::Dynamic evalExpr( ::Dynamic e,::hx::Null< bool >  isVal);
		::Dynamic evalExpr_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Eval */ 
