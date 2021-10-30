#ifndef INCLUDED_hxsl_Serializer
#define INCLUDED_hxsl_Serializer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,BytesBuffer)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,macro,Binop)
HX_DECLARE_CLASS2(haxe,macro,Unop)
HX_DECLARE_CLASS1(hxsl,Component)
HX_DECLARE_CLASS1(hxsl,Const)
HX_DECLARE_CLASS1(hxsl,FunctionKind)
HX_DECLARE_CLASS1(hxsl,Prec)
HX_DECLARE_CLASS1(hxsl,Serializer)
HX_DECLARE_CLASS1(hxsl,TGlobal)
HX_DECLARE_CLASS1(hxsl,Type)
HX_DECLARE_CLASS1(hxsl,VarKind)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Serializer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Serializer_obj OBJ_;
		Serializer_obj();

	public:
		enum { _hx_ClassId = 0x7ead4a37 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Serializer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Serializer"); }
		static ::hx::ObjectPtr< Serializer_obj > __new();
		static ::hx::ObjectPtr< Serializer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Serializer_obj();

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
		::String __ToString() const { return HX_("Serializer",b2,ca,d0,55); }

		static void __boot();
		static  ::haxe::ds::IntMap TVECS;
		static ::Array< ::Dynamic> BOPS;
		static ::Array< ::Dynamic> UNOPS;
		static ::Array< ::Dynamic> TGLOBALS;
		static  ::haxe::ds::IntMap TSWIZ;
		static ::Array< ::Dynamic> REGS;
		static ::Array< ::Dynamic> VKINDS;
		static ::Array< ::Dynamic> PRECS;
		static ::Array< ::Dynamic> FKIND;
		static int SIGN;
		static ::String run( ::Dynamic s);
		static ::Dynamic run_dyn();

		 ::haxe::io::BytesBuffer out;
		 ::haxe::io::BytesInput input;
		 ::haxe::ds::IntMap varMap;
		 ::haxe::ds::IntMap idMap;
		 ::haxe::ds::EnumValueMap typeIdMap;
		::Array< ::Dynamic> types;
		int uid;
		int tid;
		void writeArr(::cpp::VirtualArray arr, ::Dynamic f);
		::Dynamic writeArr_dyn();

		::cpp::VirtualArray readArr( ::Dynamic f);
		::Dynamic readArr_dyn();

		int readVarInt();
		::Dynamic readVarInt_dyn();

		void writeVarInt(int id);
		::Dynamic writeVarInt_dyn();

		void writeID(int id);
		::Dynamic writeID_dyn();

		int readID();
		::Dynamic readID_dyn();

		bool writeTID( ::hxsl::Type t);
		::Dynamic writeTID_dyn();

		void writeType( ::hxsl::Type t);
		::Dynamic writeType_dyn();

		 ::hxsl::Type readType();
		::Dynamic readType_dyn();

		void writeString(::String s);
		::Dynamic writeString_dyn();

		::String readString();
		::Dynamic readString_dyn();

		void writeVar( ::Dynamic v);
		::Dynamic writeVar_dyn();

		void writeFun( ::Dynamic f);
		::Dynamic writeFun_dyn();

		void writeConst( ::hxsl::Const c);
		::Dynamic writeConst_dyn();

		void writeExpr( ::Dynamic e);
		::Dynamic writeExpr_dyn();

		 ::hxsl::Const readConst();
		::Dynamic readConst_dyn();

		 ::Dynamic readExpr();
		::Dynamic readExpr_dyn();

		 ::Dynamic readVar();
		::Dynamic readVar_dyn();

		 ::Dynamic readFun();
		::Dynamic readFun_dyn();

		 ::Dynamic unserialize(::String data);
		::Dynamic unserialize_dyn();

		::String serialize( ::Dynamic s);
		::Dynamic serialize_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Serializer */ 
