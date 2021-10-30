#ifndef INCLUDED_hxd_fmt_fbx_Parser
#define INCLUDED_hxd_fmt_fbx_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,fmt,fbx,FbxProp)
HX_DECLARE_CLASS3(hxd,fmt,fbx,Parser)
HX_DECLARE_CLASS4(hxd,fmt,fbx,_Parser,Token)

namespace hxd{
namespace fmt{
namespace fbx{


class HXCPP_CLASS_ATTRIBUTES Parser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();

	public:
		enum { _hx_ClassId = 0x2023f7da };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.fbx.Parser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.fbx.Parser"); }
		static ::hx::ObjectPtr< Parser_obj > __new();
		static ::hx::ObjectPtr< Parser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Parser",ff,10,1d,22); }

		static  ::Dynamic parse( ::haxe::io::Bytes data);
		static ::Dynamic parse_dyn();

		int line;
		::String buf;
		 ::haxe::io::Bytes bytes;
		int pos;
		 ::hxd::fmt::fbx::_Parser::Token token;
		bool binary;
		int fbxVersion;
		 ::Dynamic parseText(::String str);
		::Dynamic parseText_dyn();

		 ::Dynamic parseBytes( ::haxe::io::Bytes bytes);
		::Dynamic parseBytes_dyn();

		::Array< ::Dynamic> parseNodes();
		::Dynamic parseNodes_dyn();

		 ::Dynamic parseNode();
		::Dynamic parseNode_dyn();

		void parseBinaryNodes(::Array< ::Dynamic> output);
		::Dynamic parseBinaryNodes_dyn();

		::String readBinaryString(int length);
		::Dynamic readBinaryString_dyn();

		 ::Dynamic parseBinaryNode(int nextRecord);
		::Dynamic parseBinaryNode_dyn();

		 ::hxd::fmt::fbx::FbxProp readBinaryProperty();
		::Dynamic readBinaryProperty_dyn();

		void except( ::hxd::fmt::fbx::_Parser::Token except);
		::Dynamic except_dyn();

		 ::hxd::fmt::fbx::_Parser::Token peek();
		::Dynamic peek_dyn();

		 ::hxd::fmt::fbx::_Parser::Token next();
		::Dynamic next_dyn();

		 ::Dynamic error(::String msg);
		::Dynamic error_dyn();

		 ::Dynamic unexpected( ::hxd::fmt::fbx::_Parser::Token t);
		::Dynamic unexpected_dyn();

		::String tokenStr( ::hxd::fmt::fbx::_Parser::Token t);
		::Dynamic tokenStr_dyn();

		int nextChar();
		::Dynamic nextChar_dyn();

		int getVersionedInt32();
		::Dynamic getVersionedInt32_dyn();

		int getInt32();
		::Dynamic getInt32_dyn();

		int getInt16();
		::Dynamic getInt16_dyn();

		Float getFloat();
		::Dynamic getFloat_dyn();

		Float getDouble();
		::Dynamic getDouble_dyn();

		Float i64ToFloat( cpp::Int64Struct i64);
		::Dynamic i64ToFloat_dyn();

		int getByte();
		::Dynamic getByte_dyn();

		::String getBuf(int pos,int len);
		::Dynamic getBuf_dyn();

		bool isIdentChar(int c);
		::Dynamic isIdentChar_dyn();

		 ::hxd::fmt::fbx::_Parser::Token nextToken();
		::Dynamic nextToken_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx

#endif /* INCLUDED_hxd_fmt_fbx_Parser */ 
