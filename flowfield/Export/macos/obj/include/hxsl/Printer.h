#ifndef INCLUDED_hxsl_Printer
#define INCLUDED_hxsl_Printer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(haxe,macro,Binop)
HX_DECLARE_CLASS1(hxsl,Const)
HX_DECLARE_CLASS1(hxsl,Printer)
HX_DECLARE_CLASS1(hxsl,VarKind)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Printer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Printer_obj OBJ_;
		Printer_obj();

	public:
		enum { _hx_ClassId = 0x192ed771 };

		void __construct(::hx::Null< bool >  __o_varId);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Printer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Printer"); }
		static ::hx::ObjectPtr< Printer_obj > __new(::hx::Null< bool >  __o_varId);
		static ::hx::ObjectPtr< Printer_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_varId);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Printer_obj();

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
		::String __ToString() const { return HX_("Printer",ba,fd,84,51); }

		static void __boot();
		static ::Array< ::String > SWIZ;
		static ::String opStr( ::haxe::macro::Binop op);
		static ::Dynamic opStr_dyn();

		static ::String toString( ::Dynamic e,::hx::Null< bool >  varId);
		static ::Dynamic toString_dyn();

		static ::String shaderToString( ::Dynamic s,::hx::Null< bool >  varId);
		static ::Dynamic shaderToString_dyn();

		static void check( ::Dynamic s,::Array< ::Dynamic> from);
		static ::Dynamic check_dyn();

		 ::StringBuf buffer;
		bool varId;
		void add( ::Dynamic v);
		::Dynamic add_dyn();

		::String shaderString( ::Dynamic s);
		::Dynamic shaderString_dyn();

		::String varString( ::Dynamic v);
		::Dynamic varString_dyn();

		::String funString( ::Dynamic f);
		::Dynamic funString_dyn();

		::String exprString( ::Dynamic e);
		::Dynamic exprString_dyn();

		void addVar( ::Dynamic v, ::hxsl::VarKind defKind,::String tabs, ::Dynamic parent);
		::Dynamic addVar_dyn();

		void addFun( ::Dynamic f);
		::Dynamic addFun_dyn();

		void addVarName( ::Dynamic v);
		::Dynamic addVarName_dyn();

		void addConst( ::hxsl::Const c);
		::Dynamic addConst_dyn();

		void addExpr( ::Dynamic e,::String tabs);
		::Dynamic addExpr_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Printer */ 
