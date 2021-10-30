#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_FbxProp
#include <hxd/fmt/fbx/FbxProp.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_Parser
#include <hxd/fmt/fbx/Parser.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx__Parser_Token
#include <hxd/fmt/fbx/_Parser/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_134b95376ac02d3e_28_new,"hxd.fmt.fbx.Parser","new",0x9abbabbe,"hxd.fmt.fbx.Parser.new","hxd/fmt/fbx/Parser.hx",28,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_31_parseText,"hxd.fmt.fbx.Parser","parseText",0xd7bfd45e,"hxd.fmt.fbx.Parser.parseText","hxd/fmt/fbx/Parser.hx",31,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_44_parseBytes,"hxd.fmt.fbx.Parser","parseBytes",0xa018bb9a,"hxd.fmt.fbx.Parser.parseBytes","hxd/fmt/fbx/Parser.hx",44,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_87_parseNodes,"hxd.fmt.fbx.Parser","parseNodes",0x823f6b60,"hxd.fmt.fbx.Parser.parseNodes","hxd/fmt/fbx/Parser.hx",87,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_100_parseNode,"hxd.fmt.fbx.Parser","parseNode",0xd3d011b3,"hxd.fmt.fbx.Parser.parseNode","hxd/fmt/fbx/Parser.hx",100,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_176_parseBinaryNodes,"hxd.fmt.fbx.Parser","parseBinaryNodes",0x832c08df,"hxd.fmt.fbx.Parser.parseBinaryNodes","hxd/fmt/fbx/Parser.hx",176,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_185_readBinaryString,"hxd.fmt.fbx.Parser","readBinaryString",0xb2b2f20a,"hxd.fmt.fbx.Parser.readBinaryString","hxd/fmt/fbx/Parser.hx",185,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_200_parseBinaryNode,"hxd.fmt.fbx.Parser","parseBinaryNode",0xa4bfe914,"hxd.fmt.fbx.Parser.parseBinaryNode","hxd/fmt/fbx/Parser.hx",200,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_225_readBinaryProperty,"hxd.fmt.fbx.Parser","readBinaryProperty",0xcaea91ce,"hxd.fmt.fbx.Parser.readBinaryProperty","hxd/fmt/fbx/Parser.hx",225,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_338_except,"hxd.fmt.fbx.Parser","except",0x5bb3467b,"hxd.fmt.fbx.Parser.except","hxd/fmt/fbx/Parser.hx",338,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_344_peek,"hxd.fmt.fbx.Parser","peek",0xcaccf87d,"hxd.fmt.fbx.Parser.peek","hxd/fmt/fbx/Parser.hx",344,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_350_next,"hxd.fmt.fbx.Parser","next",0xc97a9bd5,"hxd.fmt.fbx.Parser.next","hxd/fmt/fbx/Parser.hx",350,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_359_error,"hxd.fmt.fbx.Parser","error",0x5bc5baa6,"hxd.fmt.fbx.Parser.error","hxd/fmt/fbx/Parser.hx",359,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_364_unexpected,"hxd.fmt.fbx.Parser","unexpected",0x7e938233,"hxd.fmt.fbx.Parser.unexpected","hxd/fmt/fbx/Parser.hx",364,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_368_tokenStr,"hxd.fmt.fbx.Parser","tokenStr",0x39116f1a,"hxd.fmt.fbx.Parser.tokenStr","hxd/fmt/fbx/Parser.hx",368,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_383_nextChar,"hxd.fmt.fbx.Parser","nextChar",0xfb56354b,"hxd.fmt.fbx.Parser.nextChar","hxd/fmt/fbx/Parser.hx",383,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_386_getVersionedInt32,"hxd.fmt.fbx.Parser","getVersionedInt32",0xd303116b,"hxd.fmt.fbx.Parser.getVersionedInt32","hxd/fmt/fbx/Parser.hx",386,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_393_getInt32,"hxd.fmt.fbx.Parser","getInt32",0x2bc1d2ba,"hxd.fmt.fbx.Parser.getInt32","hxd/fmt/fbx/Parser.hx",393,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_399_getInt16,"hxd.fmt.fbx.Parser","getInt16",0x2bc1d100,"hxd.fmt.fbx.Parser.getInt16","hxd/fmt/fbx/Parser.hx",399,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_405_getFloat,"hxd.fmt.fbx.Parser","getFloat",0x70380508,"hxd.fmt.fbx.Parser.getFloat","hxd/fmt/fbx/Parser.hx",405,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_411_getDouble,"hxd.fmt.fbx.Parser","getDouble",0xb2416a25,"hxd.fmt.fbx.Parser.getDouble","hxd/fmt/fbx/Parser.hx",411,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_418_i64ToFloat,"hxd.fmt.fbx.Parser","i64ToFloat",0x50c2255c,"hxd.fmt.fbx.Parser.i64ToFloat","hxd/fmt/fbx/Parser.hx",418,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_423_getByte,"hxd.fmt.fbx.Parser","getByte",0x4e41b11c,"hxd.fmt.fbx.Parser.getByte","hxd/fmt/fbx/Parser.hx",423,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_427_getBuf,"hxd.fmt.fbx.Parser","getBuf",0x42ef0f9f,"hxd.fmt.fbx.Parser.getBuf","hxd/fmt/fbx/Parser.hx",427,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_431_isIdentChar,"hxd.fmt.fbx.Parser","isIdentChar",0xe86625fa,"hxd.fmt.fbx.Parser.isIdentChar","hxd/fmt/fbx/Parser.hx",431,0xf8c74f8f)
HX_LOCAL_STACK_FRAME(_hx_pos_134b95376ac02d3e_520_parse,"hxd.fmt.fbx.Parser","parse",0xa5f17f11,"hxd.fmt.fbx.Parser.parse","hxd/fmt/fbx/Parser.hx",520,0xf8c74f8f)
namespace hxd{
namespace fmt{
namespace fbx{

void Parser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_28_new)
            	}

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2023f7da;
}

 ::Dynamic Parser_obj::parseText(::String str){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_31_parseText)
HXLINE(  32)		this->buf = str;
HXLINE(  33)		this->pos = 0;
HXLINE(  34)		this->line = 1;
HXLINE(  35)		this->binary = false;
HXLINE(  36)		this->token = null();
HXLINE(  37)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("childs",57,bf,ba,bc),this->parseNodes())
            			->setFixed(1,HX_("props",70,e7,8f,c8),::Array_obj< ::Dynamic>::__new(3)->init(0,::hxd::fmt::fbx::FbxProp_obj::PInt(0))->init(1,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("Root",42,1a,88,36)))->init(2,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("Root",42,1a,88,36))))
            			->setFixed(2,HX_("name",4b,72,ff,48),HX_("Root",42,1a,88,36)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseText,return )

 ::Dynamic Parser_obj::parseBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_44_parseBytes)
HXLINE(  45)		this->bytes = bytes;
HXLINE(  46)		this->pos = 0;
HXLINE(  47)		this->line = 0;
HXLINE(  48)		bool _hx_tmp;
HXDLIN(  48)		if ((bytes->getString(0,20,null()) == HX_("Kaydara FBX Binary  ",36,22,8f,a8))) {
HXLINE(  48)			_hx_tmp = (bytes->b->__get(20) == 0);
            		}
            		else {
HXLINE(  48)			_hx_tmp = false;
            		}
HXDLIN(  48)		this->binary = _hx_tmp;
HXLINE(  50)		this->token = null();
HXLINE(  51)		if (this->binary) {
HXLINE(  53)			this->fbxVersion = (((( (int)(bytes->b->__get(23)) ) | (( (int)(bytes->b->__get(24)) ) << 8)) | (( (int)(bytes->b->__get(25)) ) << 16)) | (( (int)(bytes->b->__get(26)) ) << 24));
HXLINE(  55)			this->pos = 27;
HXLINE(  56)			 ::haxe::io::Bytes _this = this->bytes;
HXDLIN(  56)			int pos = this->pos;
HXDLIN(  56)			int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN(  56)			 ::hxd::fmt::fbx::Parser firstNode = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  56)			int firstNode1;
HXDLIN(  56)			if ((this->fbxVersion >= 7500)) {
HXLINE(  56)				firstNode1 = 8;
            			}
            			else {
HXLINE(  56)				firstNode1 = 4;
            			}
HXDLIN(  56)			firstNode->pos = (firstNode->pos + firstNode1);
HXDLIN(  56)			 ::Dynamic firstNode2 = this->parseBinaryNode(i);
HXLINE(  57)			if (::hx::IsNotEq( firstNode2->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),HX_("",00,00,00,00) )) {
HXLINE(  60)				::Array< ::Dynamic> nodes = ::Array_obj< ::Dynamic>::__new(1)->init(0,firstNode2);
HXLINE(  61)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN(  61)				int pos = this->pos;
HXDLIN(  61)				int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN(  61)				 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  61)				int _hx_tmp1;
HXDLIN(  61)				if ((this->fbxVersion >= 7500)) {
HXLINE(  61)					_hx_tmp1 = 8;
            				}
            				else {
HXLINE(  61)					_hx_tmp1 = 4;
            				}
HXDLIN(  61)				_hx_tmp->pos = (_hx_tmp->pos + _hx_tmp1);
HXDLIN(  61)				int size = i;
HXLINE(  63)				while((size != 0)){
HXLINE(  64)					nodes->push(this->parseBinaryNode(size));
HXLINE(  65)					 ::haxe::io::Bytes _this = this->bytes;
HXDLIN(  65)					int pos = this->pos;
HXDLIN(  65)					int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN(  65)					 ::hxd::fmt::fbx::Parser size1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  65)					int size2;
HXDLIN(  65)					if ((this->fbxVersion >= 7500)) {
HXLINE(  65)						size2 = 8;
            					}
            					else {
HXLINE(  65)						size2 = 4;
            					}
HXDLIN(  65)					size1->pos = (size1->pos + size2);
HXDLIN(  65)					size = i;
            				}
HXLINE(  68)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("childs",57,bf,ba,bc),nodes)
            					->setFixed(1,HX_("props",70,e7,8f,c8),::Array_obj< ::Dynamic>::__new(3)->init(0,::hxd::fmt::fbx::FbxProp_obj::PInt(0))->init(1,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("Root",42,1a,88,36)))->init(2,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("Root",42,1a,88,36))))
            					->setFixed(2,HX_("name",4b,72,ff,48),HX_("Root",42,1a,88,36)));
            			}
            			else {
HXLINE(  76)				return firstNode2;
            			}
            		}
HXLINE(  80)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("childs",57,bf,ba,bc),this->parseNodes())
            			->setFixed(1,HX_("props",70,e7,8f,c8),::Array_obj< ::Dynamic>::__new(3)->init(0,::hxd::fmt::fbx::FbxProp_obj::PInt(0))->init(1,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("Root",42,1a,88,36)))->init(2,::hxd::fmt::fbx::FbxProp_obj::PString(HX_("Root",42,1a,88,36))))
            			->setFixed(2,HX_("name",4b,72,ff,48),HX_("Root",42,1a,88,36)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseBytes,return )

::Array< ::Dynamic> Parser_obj::parseNodes(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_87_parseNodes)
HXLINE(  88)		::Array< ::Dynamic> nodes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  89)		while(true){
HXLINE(  90)			{
HXLINE(  90)				 ::hxd::fmt::fbx::_Parser::Token _g = this->peek();
HXDLIN(  90)				if (::hx::IsNotNull( _g )) {
HXLINE(  90)					switch((int)(_g->_hx_getIndex())){
            						case (int)7: case (int)9: {
HXLINE(  92)							return nodes;
            						}
            						break;
            						default:{
            						}
            					}
            				}
            			}
HXLINE(  95)			nodes->push(this->parseNode());
            		}
HXLINE(  89)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseNodes,return )

 ::Dynamic Parser_obj::parseNode(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_100_parseNode)
HXLINE( 101)		 ::hxd::fmt::fbx::_Parser::Token t = this->next();
HXLINE( 102)		::String name;
HXDLIN( 102)		if ((t->_hx_getIndex() == 1)) {
HXLINE( 103)			::String n = t->_hx_getString(0);
HXLINE( 102)			name = n;
            		}
            		else {
HXLINE( 102)			name = ( (::String)(this->unexpected(t)) );
            		}
HXLINE( 106)		::Array< ::Dynamic> props = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 106)		::Array< ::Dynamic> childs = null();
HXLINE( 107)		while(true){
HXLINE( 108)			t = this->next();
HXLINE( 109)			switch((int)(t->_hx_getIndex())){
            				case (int)0: {
HXLINE( 116)					::String s = t->_hx_getString(0);
HXLINE( 117)					props->push(::hxd::fmt::fbx::FbxProp_obj::PIdent(s));
            				}
            				break;
            				case (int)1: {
HXLINE( 118)					::String _g = t->_hx_getString(0);
HXLINE( 119)					this->token = t;
            				}
            				break;
            				case (int)2: {
HXLINE( 112)					::String s = t->_hx_getString(0);
HXLINE( 113)					props->push(::hxd::fmt::fbx::FbxProp_obj::PInt(::Std_obj::parseInt(s)));
            				}
            				break;
            				case (int)3: {
HXLINE( 110)					::String s = t->_hx_getString(0);
HXLINE( 111)					props->push(::hxd::fmt::fbx::FbxProp_obj::PFloat(::Std_obj::parseFloat(s)));
            				}
            				break;
            				case (int)4: {
HXLINE( 114)					::String s = t->_hx_getString(0);
HXLINE( 115)					props->push(::hxd::fmt::fbx::FbxProp_obj::PString(s));
            				}
            				break;
            				case (int)5: {
HXLINE( 120)					int v = t->_hx_getInt(0);
HXLINE( 121)					this->except(::hxd::fmt::fbx::_Parser::Token_obj::TBraceOpen_dyn());
HXLINE( 122)					this->except(::hxd::fmt::fbx::_Parser::Token_obj::TNode(HX_("a",61,00,00,00)));
HXLINE( 123)					::Array< int > ints = ::Array_obj< int >::__new(0);
HXLINE( 124)					::Array< Float > floats = null();
HXLINE( 125)					int i = 0;
HXLINE( 126)					while((i < v)){
HXLINE( 127)						t = this->next();
HXLINE( 128)						switch((int)(t->_hx_getIndex())){
            							case (int)2: {
HXLINE( 131)								::String s = t->_hx_getString(0);
HXDLIN( 131)								{
HXLINE( 132)									i = (i + 1);
HXLINE( 133)									if (::hx::IsNull( floats )) {
HXLINE( 134)										ints->push(::Std_obj::parseInt(s));
            									}
            									else {
HXLINE( 136)										floats->push(::Std_obj::parseInt(s));
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 137)								::String s = t->_hx_getString(0);
HXDLIN( 137)								{
HXLINE( 138)									i = (i + 1);
HXLINE( 139)									if (::hx::IsNull( floats )) {
HXLINE( 140)										floats = ::Array_obj< Float >::__new(0);
HXLINE( 141)										{
HXLINE( 141)											int _g = 0;
HXDLIN( 141)											while((_g < ints->length)){
HXLINE( 141)												int i = ints->__get(_g);
HXDLIN( 141)												_g = (_g + 1);
HXLINE( 142)												floats->push(i);
            											}
            										}
HXLINE( 143)										ints = null();
            									}
HXLINE( 145)									floats->push(::Std_obj::parseFloat(s));
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 130)								continue;
            							}
            							break;
            							default:{
HXLINE( 147)								this->unexpected(t);
            							}
            						}
            					}
HXLINE( 150)					 ::hxd::fmt::fbx::FbxProp _hx_tmp;
HXDLIN( 150)					if (::hx::IsNull( floats )) {
HXLINE( 150)						_hx_tmp = ::hxd::fmt::fbx::FbxProp_obj::PInts(ints);
            					}
            					else {
HXLINE( 150)						_hx_tmp = ::hxd::fmt::fbx::FbxProp_obj::PFloats(floats);
            					}
HXDLIN( 150)					props->push(_hx_tmp);
HXLINE( 151)					if (::hx::IsPointerEq( this->peek(),::hxd::fmt::fbx::_Parser::Token_obj::TColon_dyn() )) {
HXLINE( 151)						this->except(::hxd::fmt::fbx::_Parser::Token_obj::TColon_dyn());
            					}
HXLINE( 152)					this->except(::hxd::fmt::fbx::_Parser::Token_obj::TBraceClose_dyn());
HXLINE( 153)					goto _hx_goto_6;
            				}
            				break;
            				case (int)6: case (int)7: {
HXLINE( 119)					this->token = t;
            				}
            				break;
            				default:{
HXLINE( 155)					this->unexpected(t);
            				}
            			}
HXLINE( 157)			t = this->next();
HXLINE( 158)			switch((int)(t->_hx_getIndex())){
            				case (int)1: {
HXLINE( 159)					::String _g = t->_hx_getString(0);
HXLINE( 160)					this->token = t;
HXLINE( 161)					goto _hx_goto_6;
            				}
            				break;
            				case (int)6: {
HXLINE( 165)					childs = this->parseNodes();
HXLINE( 166)					this->except(::hxd::fmt::fbx::_Parser::Token_obj::TBraceClose_dyn());
HXLINE( 167)					goto _hx_goto_6;
            				}
            				break;
            				case (int)7: {
HXLINE( 160)					this->token = t;
HXLINE( 161)					goto _hx_goto_6;
            				}
            				break;
            				case (int)8: {
            				}
            				break;
            				default:{
HXLINE( 169)					this->unexpected(t);
            				}
            			}
            		}
            		_hx_goto_6:;
HXLINE( 172)		if (::hx::IsNull( childs )) {
HXLINE( 172)			childs = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 173)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("childs",57,bf,ba,bc),childs)
            			->setFixed(1,HX_("props",70,e7,8f,c8),props)
            			->setFixed(2,HX_("name",4b,72,ff,48),name));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseNode,return )

void Parser_obj::parseBinaryNodes(::Array< ::Dynamic> output){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_176_parseBinaryNodes)
HXLINE( 177)		 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 177)		int pos = this->pos;
HXDLIN( 177)		int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 177)		 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)		int _hx_tmp1;
HXDLIN( 177)		if ((this->fbxVersion >= 7500)) {
HXLINE( 177)			_hx_tmp1 = 8;
            		}
            		else {
HXLINE( 177)			_hx_tmp1 = 4;
            		}
HXDLIN( 177)		_hx_tmp->pos = (_hx_tmp->pos + _hx_tmp1);
HXDLIN( 177)		int size = i;
HXLINE( 178)		while((size != 0)){
HXLINE( 180)			output->push(this->parseBinaryNode(size));
HXLINE( 181)			 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 181)			int pos = this->pos;
HXDLIN( 181)			int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 181)			 ::hxd::fmt::fbx::Parser size1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 181)			int size2;
HXDLIN( 181)			if ((this->fbxVersion >= 7500)) {
HXLINE( 181)				size2 = 8;
            			}
            			else {
HXLINE( 181)				size2 = 4;
            			}
HXDLIN( 181)			size1->pos = (size1->pos + size2);
HXDLIN( 181)			size = i;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseBinaryNodes,(void))

::String Parser_obj::readBinaryString(int length){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_185_readBinaryString)
HXLINE( 186)		if ((length == 0)) {
HXLINE( 186)			return HX_("",00,00,00,00);
            		}
HXLINE( 187)		::String str = this->bytes->getString(this->pos,length,null());
HXLINE( 188)		 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 188)		_hx_tmp->pos = (_hx_tmp->pos + length);
HXLINE( 191)		int len = str.length;
HXLINE( 192)		{
HXLINE( 192)			int _g = 0;
HXDLIN( 192)			int _g1 = len;
HXDLIN( 192)			while((_g < _g1)){
HXLINE( 192)				_g = (_g + 1);
HXDLIN( 192)				int i = (_g - 1);
HXLINE( 193)				if (::hx::IsEq( str.charCodeAt(i),0 )) {
HXLINE( 194)					return str.substr(0,i);
            				}
            			}
            		}
HXLINE( 197)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readBinaryString,return )

 ::Dynamic Parser_obj::parseBinaryNode(int nextRecord){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_200_parseBinaryNode)
HXLINE( 202)		 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 202)		int pos = this->pos;
HXDLIN( 202)		int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 202)		 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 202)		int _hx_tmp1;
HXDLIN( 202)		if ((this->fbxVersion >= 7500)) {
HXLINE( 202)			_hx_tmp1 = 8;
            		}
            		else {
HXLINE( 202)			_hx_tmp1 = 4;
            		}
HXDLIN( 202)		_hx_tmp->pos = (_hx_tmp->pos + _hx_tmp1);
HXDLIN( 202)		int numProperties = i;
HXLINE( 203)		 ::haxe::io::Bytes _this1 = this->bytes;
HXDLIN( 203)		int pos1 = this->pos;
HXDLIN( 203)		int i1 = (((( (int)(_this1->b->__get(pos1)) ) | (( (int)(_this1->b->__get((pos1 + 1))) ) << 8)) | (( (int)(_this1->b->__get((pos1 + 2))) ) << 16)) | (( (int)(_this1->b->__get((pos1 + 3))) ) << 24));
HXDLIN( 203)		 ::hxd::fmt::fbx::Parser _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)		int _hx_tmp3;
HXDLIN( 203)		if ((this->fbxVersion >= 7500)) {
HXLINE( 203)			_hx_tmp3 = 8;
            		}
            		else {
HXLINE( 203)			_hx_tmp3 = 4;
            		}
HXDLIN( 203)		_hx_tmp2->pos = (_hx_tmp2->pos + _hx_tmp3);
HXDLIN( 203)		int propertyListLength = i1;
HXLINE( 204)		::String name = this->readBinaryString(( (int)(this->bytes->b->__get(this->pos++)) ));
HXLINE( 206)		::Array< ::Dynamic> props = ::Array_obj< ::Dynamic>::__new();
HXLINE( 207)		::Array< ::Dynamic> childs = ::Array_obj< ::Dynamic>::__new();
HXLINE( 209)		int propStart = this->pos;
HXLINE( 211)		{
HXLINE( 211)			int _g = 0;
HXDLIN( 211)			int _g1 = numProperties;
HXDLIN( 211)			while((_g < _g1)){
HXLINE( 211)				_g = (_g + 1);
HXDLIN( 211)				int i = (_g - 1);
HXLINE( 212)				props->push(this->readBinaryProperty());
            			}
            		}
HXLINE( 215)		this->pos = (propStart + propertyListLength);
HXLINE( 217)		if ((this->pos < nextRecord)) {
HXLINE( 218)			this->parseBinaryNodes(childs);
            		}
HXLINE( 220)		this->pos = nextRecord;
HXLINE( 222)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("childs",57,bf,ba,bc),childs)
            			->setFixed(1,HX_("props",70,e7,8f,c8),props)
            			->setFixed(2,HX_("name",4b,72,ff,48),name));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseBinaryNode,return )

 ::hxd::fmt::fbx::FbxProp Parser_obj::readBinaryProperty(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_225_readBinaryProperty)
HXDLIN( 225)		 ::hxd::fmt::fbx::Parser _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 227)		int arrayLen = 0;
HXLINE( 228)		int arrayEncoding;
HXLINE( 229)		int arrayCompressedLen;
HXLINE( 230)		 ::haxe::io::Bytes arrayBytes = null();
HXLINE( 231)		int arrayBytesPos = 0;
HXLINE( 265)		int type = ( (int)(this->bytes->b->__get(this->pos++)) );
HXLINE( 266)		switch((int)(type)){
            			case (int)67: {
HXLINE( 270)				return ::hxd::fmt::fbx::FbxProp_obj::PInt(this->bytes->b->__get(this->pos++));
            			}
            			break;
            			case (int)68: {
HXLINE( 276)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 276)				int pos = this->pos;
HXDLIN( 276)				bool _hx_tmp;
HXDLIN( 276)				if ((pos >= 0)) {
HXLINE( 276)					_hx_tmp = ((pos + 8) > _this->length);
            				}
            				else {
HXLINE( 276)					_hx_tmp = true;
            				}
HXDLIN( 276)				if (_hx_tmp) {
HXLINE( 276)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            				}
HXDLIN( 276)				Float d =  ::__hxcpp_memory_get_double(_this->b,pos);
HXDLIN( 276)				 ::hxd::fmt::fbx::Parser _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 276)				_hx_tmp1->pos = (_hx_tmp1->pos + 8);
HXDLIN( 276)				return ::hxd::fmt::fbx::FbxProp_obj::PFloat(d);
            			}
            			break;
            			case (int)70: {
HXLINE( 274)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 274)				int pos = this->pos;
HXDLIN( 274)				bool _hx_tmp;
HXDLIN( 274)				if ((pos >= 0)) {
HXLINE( 274)					_hx_tmp = ((pos + 4) > _this->length);
            				}
            				else {
HXLINE( 274)					_hx_tmp = true;
            				}
HXDLIN( 274)				if (_hx_tmp) {
HXLINE( 274)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            				}
HXDLIN( 274)				Float f =  ::__hxcpp_memory_get_float(_this->b,pos);
HXDLIN( 274)				 ::hxd::fmt::fbx::Parser _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)				_hx_tmp1->pos = (_hx_tmp1->pos + 4);
HXDLIN( 274)				return ::hxd::fmt::fbx::FbxProp_obj::PFloat(f);
            			}
            			break;
            			case (int)73: {
HXLINE( 272)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 272)				int pos = this->pos;
HXDLIN( 272)				int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 272)				 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 272)				_hx_tmp->pos = (_hx_tmp->pos + 4);
HXDLIN( 272)				return ::hxd::fmt::fbx::FbxProp_obj::PInt(i);
            			}
            			break;
            			case (int)76: {
HXLINE( 278)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 278)				int pos = this->pos;
HXDLIN( 278)				int pos1 = (pos + 4);
HXDLIN( 278)				 cpp::Int64Struct i64 = _hx_int64_make((((( (int)(_this->b->__get(pos1)) ) | (( (int)(_this->b->__get((pos1 + 1))) ) << 8)) | (( (int)(_this->b->__get((pos1 + 2))) ) << 16)) | (( (int)(_this->b->__get((pos1 + 3))) ) << 24)),(((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24)));
HXLINE( 279)				 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 279)				_hx_tmp->pos = (_hx_tmp->pos + 8);
HXLINE( 280)				Float _hx_tmp1 = (( (Float)(_hx_int64_high(i64)) ) * ((Float)4294967296));
HXDLIN( 280)				Float _hx_tmp2;
HXDLIN( 280)				if (((_hx_int64_low(i64) & (int)-2147483648) != 0)) {
HXLINE( 280)					_hx_tmp2 = ((_hx_int64_low(i64) & (int)2147483647) + ((Float)2147483648));
            				}
            				else {
HXLINE( 280)					_hx_tmp2 = ( (Float)(_hx_int64_low(i64)) );
            				}
HXDLIN( 280)				return ::hxd::fmt::fbx::FbxProp_obj::PFloat((_hx_tmp1 + _hx_tmp2));
            			}
            			break;
            			case (int)82: {
HXLINE( 328)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 328)				int pos = this->pos;
HXDLIN( 328)				int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 328)				 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 328)				_hx_tmp->pos = (_hx_tmp->pos + 4);
HXDLIN( 328)				int len = i;
HXLINE( 329)				 ::haxe::io::Bytes data = ::haxe::io::Bytes_obj::alloc(len);
HXLINE( 330)				data->blit(0,this->bytes,this->pos,len);
HXLINE( 331)				 ::hxd::fmt::fbx::Parser _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 331)				_hx_tmp1->pos = (_hx_tmp1->pos + len);
HXLINE( 332)				return ::hxd::fmt::fbx::FbxProp_obj::PBinary(data);
            			}
            			break;
            			case (int)83: {
HXLINE( 326)				 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 326)				int pos = this->pos;
HXDLIN( 326)				int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 326)				 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 326)				_hx_tmp->pos = (_hx_tmp->pos + 4);
HXDLIN( 326)				return ::hxd::fmt::fbx::FbxProp_obj::PString(this->readBinaryString(i));
            			}
            			break;
            			case (int)89: {
HXLINE( 268)				int i = (( (int)(this->bytes->b->__get(this->pos)) ) | (( (int)(this->bytes->b->__get((this->pos + 1))) ) << 8));
HXDLIN( 268)				 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 268)				return ::hxd::fmt::fbx::FbxProp_obj::PInt(i);
            			}
            			break;
            			case (int)98: {
HXLINE( 318)				{
HXLINE( 318)					 ::haxe::io::Bytes _this = _gthis->bytes;
HXDLIN( 318)					int pos = _gthis->pos;
HXDLIN( 318)					int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 318)					 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 318)					_gthis1->pos = (_gthis1->pos + 4);
HXDLIN( 318)					arrayLen = i;
HXDLIN( 318)					 ::haxe::io::Bytes _this1 = _gthis->bytes;
HXDLIN( 318)					int pos1 = _gthis->pos;
HXDLIN( 318)					int i1 = (((( (int)(_this1->b->__get(pos1)) ) | (( (int)(_this1->b->__get((pos1 + 1))) ) << 8)) | (( (int)(_this1->b->__get((pos1 + 2))) ) << 16)) | (( (int)(_this1->b->__get((pos1 + 3))) ) << 24));
HXDLIN( 318)					 ::hxd::fmt::fbx::Parser _gthis2 = _gthis;
HXDLIN( 318)					_gthis2->pos = (_gthis2->pos + 4);
HXDLIN( 318)					arrayEncoding = i1;
HXDLIN( 318)					 ::haxe::io::Bytes _this2 = _gthis->bytes;
HXDLIN( 318)					int pos2 = _gthis->pos;
HXDLIN( 318)					int i2 = (((( (int)(_this2->b->__get(pos2)) ) | (( (int)(_this2->b->__get((pos2 + 1))) ) << 8)) | (( (int)(_this2->b->__get((pos2 + 2))) ) << 16)) | (( (int)(_this2->b->__get((pos2 + 3))) ) << 24));
HXDLIN( 318)					 ::hxd::fmt::fbx::Parser _gthis3 = _gthis;
HXDLIN( 318)					_gthis3->pos = (_gthis3->pos + 4);
HXDLIN( 318)					arrayCompressedLen = i2;
HXDLIN( 318)					switch((int)(arrayEncoding)){
            						case (int)0: {
HXLINE( 318)							arrayBytes = _gthis->bytes;
HXDLIN( 318)							arrayBytesPos = _gthis->pos;
HXDLIN( 318)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 318)							_gthis1->pos = (_gthis1->pos + arrayLen);
            						}
            						break;
            						case (int)1: {
HXLINE( 318)							arrayBytesPos = 0;
HXDLIN( 318)							 ::haxe::io::Bytes buf = _gthis->bytes->sub(_gthis->pos,arrayCompressedLen);
HXDLIN( 318)							arrayBytes = ::haxe::zip::Uncompress_obj::run(buf,null());
HXDLIN( 318)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 318)							_gthis1->pos = (_gthis1->pos + arrayCompressedLen);
            						}
            						break;
            						default:{
HXLINE( 318)							_gthis->error((HX_("Unsupported array encoding: ",4b,5d,28,37) + arrayEncoding));
            						}
            					}
            				}
HXLINE( 319)				::Array< int > bools = ::Array_obj< int >::__new();
HXLINE( 320)				while((arrayLen > 0)){
HXLINE( 321)					arrayBytesPos = (arrayBytesPos + 1);
HXDLIN( 321)					bools->push(arrayBytes->b->__get((arrayBytesPos - 1)));
HXLINE( 322)					arrayLen = (arrayLen - 1);
            				}
HXLINE( 324)				return ::hxd::fmt::fbx::FbxProp_obj::PInts(bools);
            			}
            			break;
            			case (int)100: {
HXLINE( 291)				{
HXLINE( 291)					 ::haxe::io::Bytes _this = _gthis->bytes;
HXDLIN( 291)					int pos = _gthis->pos;
HXDLIN( 291)					int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 291)					 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 291)					_gthis1->pos = (_gthis1->pos + 4);
HXDLIN( 291)					arrayLen = i;
HXDLIN( 291)					 ::haxe::io::Bytes _this1 = _gthis->bytes;
HXDLIN( 291)					int pos1 = _gthis->pos;
HXDLIN( 291)					int i1 = (((( (int)(_this1->b->__get(pos1)) ) | (( (int)(_this1->b->__get((pos1 + 1))) ) << 8)) | (( (int)(_this1->b->__get((pos1 + 2))) ) << 16)) | (( (int)(_this1->b->__get((pos1 + 3))) ) << 24));
HXDLIN( 291)					 ::hxd::fmt::fbx::Parser _gthis2 = _gthis;
HXDLIN( 291)					_gthis2->pos = (_gthis2->pos + 4);
HXDLIN( 291)					arrayEncoding = i1;
HXDLIN( 291)					 ::haxe::io::Bytes _this2 = _gthis->bytes;
HXDLIN( 291)					int pos2 = _gthis->pos;
HXDLIN( 291)					int i2 = (((( (int)(_this2->b->__get(pos2)) ) | (( (int)(_this2->b->__get((pos2 + 1))) ) << 8)) | (( (int)(_this2->b->__get((pos2 + 2))) ) << 16)) | (( (int)(_this2->b->__get((pos2 + 3))) ) << 24));
HXDLIN( 291)					 ::hxd::fmt::fbx::Parser _gthis3 = _gthis;
HXDLIN( 291)					_gthis3->pos = (_gthis3->pos + 4);
HXDLIN( 291)					arrayCompressedLen = i2;
HXDLIN( 291)					switch((int)(arrayEncoding)){
            						case (int)0: {
HXLINE( 291)							arrayBytes = _gthis->bytes;
HXDLIN( 291)							arrayBytesPos = _gthis->pos;
HXDLIN( 291)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 291)							_gthis1->pos = (_gthis1->pos + (arrayLen * 8));
            						}
            						break;
            						case (int)1: {
HXLINE( 291)							arrayBytesPos = 0;
HXDLIN( 291)							 ::haxe::io::Bytes buf = _gthis->bytes->sub(_gthis->pos,arrayCompressedLen);
HXDLIN( 291)							arrayBytes = ::haxe::zip::Uncompress_obj::run(buf,null());
HXDLIN( 291)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 291)							_gthis1->pos = (_gthis1->pos + arrayCompressedLen);
            						}
            						break;
            						default:{
HXLINE( 291)							_gthis->error((HX_("Unsupported array encoding: ",4b,5d,28,37) + arrayEncoding));
            						}
            					}
            				}
HXLINE( 292)				::Array< Float > doubles = ::Array_obj< Float >::__new();
HXLINE( 293)				while((arrayLen > 0)){
HXLINE( 294)					bool _hx_tmp;
HXDLIN( 294)					if ((arrayBytesPos >= 0)) {
HXLINE( 294)						_hx_tmp = ((arrayBytesPos + 8) > arrayBytes->length);
            					}
            					else {
HXLINE( 294)						_hx_tmp = true;
            					}
HXDLIN( 294)					if (_hx_tmp) {
HXLINE( 294)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 294)					doubles->push( ::__hxcpp_memory_get_double(arrayBytes->b,arrayBytesPos));
HXLINE( 295)					arrayBytesPos = (arrayBytesPos + 8);
HXLINE( 296)					arrayLen = (arrayLen - 1);
            				}
HXLINE( 298)				return ::hxd::fmt::fbx::FbxProp_obj::PFloats(doubles);
            			}
            			break;
            			case (int)102: {
HXLINE( 282)				{
HXLINE( 282)					 ::haxe::io::Bytes _this = _gthis->bytes;
HXDLIN( 282)					int pos = _gthis->pos;
HXDLIN( 282)					int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 282)					 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 282)					_gthis1->pos = (_gthis1->pos + 4);
HXDLIN( 282)					arrayLen = i;
HXDLIN( 282)					 ::haxe::io::Bytes _this1 = _gthis->bytes;
HXDLIN( 282)					int pos1 = _gthis->pos;
HXDLIN( 282)					int i1 = (((( (int)(_this1->b->__get(pos1)) ) | (( (int)(_this1->b->__get((pos1 + 1))) ) << 8)) | (( (int)(_this1->b->__get((pos1 + 2))) ) << 16)) | (( (int)(_this1->b->__get((pos1 + 3))) ) << 24));
HXDLIN( 282)					 ::hxd::fmt::fbx::Parser _gthis2 = _gthis;
HXDLIN( 282)					_gthis2->pos = (_gthis2->pos + 4);
HXDLIN( 282)					arrayEncoding = i1;
HXDLIN( 282)					 ::haxe::io::Bytes _this2 = _gthis->bytes;
HXDLIN( 282)					int pos2 = _gthis->pos;
HXDLIN( 282)					int i2 = (((( (int)(_this2->b->__get(pos2)) ) | (( (int)(_this2->b->__get((pos2 + 1))) ) << 8)) | (( (int)(_this2->b->__get((pos2 + 2))) ) << 16)) | (( (int)(_this2->b->__get((pos2 + 3))) ) << 24));
HXDLIN( 282)					 ::hxd::fmt::fbx::Parser _gthis3 = _gthis;
HXDLIN( 282)					_gthis3->pos = (_gthis3->pos + 4);
HXDLIN( 282)					arrayCompressedLen = i2;
HXDLIN( 282)					switch((int)(arrayEncoding)){
            						case (int)0: {
HXLINE( 282)							arrayBytes = _gthis->bytes;
HXDLIN( 282)							arrayBytesPos = _gthis->pos;
HXDLIN( 282)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 282)							_gthis1->pos = (_gthis1->pos + (arrayLen * 4));
            						}
            						break;
            						case (int)1: {
HXLINE( 282)							arrayBytesPos = 0;
HXDLIN( 282)							 ::haxe::io::Bytes buf = _gthis->bytes->sub(_gthis->pos,arrayCompressedLen);
HXDLIN( 282)							arrayBytes = ::haxe::zip::Uncompress_obj::run(buf,null());
HXDLIN( 282)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 282)							_gthis1->pos = (_gthis1->pos + arrayCompressedLen);
            						}
            						break;
            						default:{
HXLINE( 282)							_gthis->error((HX_("Unsupported array encoding: ",4b,5d,28,37) + arrayEncoding));
            						}
            					}
            				}
HXLINE( 283)				::Array< Float > floats = ::Array_obj< Float >::__new();
HXLINE( 284)				while((arrayLen > 0)){
HXLINE( 285)					bool _hx_tmp;
HXDLIN( 285)					if ((arrayBytesPos >= 0)) {
HXLINE( 285)						_hx_tmp = ((arrayBytesPos + 4) > arrayBytes->length);
            					}
            					else {
HXLINE( 285)						_hx_tmp = true;
            					}
HXDLIN( 285)					if (_hx_tmp) {
HXLINE( 285)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 285)					floats->push( ::__hxcpp_memory_get_float(arrayBytes->b,arrayBytesPos));
HXLINE( 286)					arrayBytesPos = (arrayBytesPos + 4);
HXLINE( 287)					arrayLen = (arrayLen - 1);
            				}
HXLINE( 289)				return ::hxd::fmt::fbx::FbxProp_obj::PFloats(floats);
            			}
            			break;
            			case (int)105: {
HXLINE( 309)				{
HXLINE( 309)					 ::haxe::io::Bytes _this = _gthis->bytes;
HXDLIN( 309)					int pos = _gthis->pos;
HXDLIN( 309)					int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 309)					 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 309)					_gthis1->pos = (_gthis1->pos + 4);
HXDLIN( 309)					arrayLen = i;
HXDLIN( 309)					 ::haxe::io::Bytes _this1 = _gthis->bytes;
HXDLIN( 309)					int pos1 = _gthis->pos;
HXDLIN( 309)					int i1 = (((( (int)(_this1->b->__get(pos1)) ) | (( (int)(_this1->b->__get((pos1 + 1))) ) << 8)) | (( (int)(_this1->b->__get((pos1 + 2))) ) << 16)) | (( (int)(_this1->b->__get((pos1 + 3))) ) << 24));
HXDLIN( 309)					 ::hxd::fmt::fbx::Parser _gthis2 = _gthis;
HXDLIN( 309)					_gthis2->pos = (_gthis2->pos + 4);
HXDLIN( 309)					arrayEncoding = i1;
HXDLIN( 309)					 ::haxe::io::Bytes _this2 = _gthis->bytes;
HXDLIN( 309)					int pos2 = _gthis->pos;
HXDLIN( 309)					int i2 = (((( (int)(_this2->b->__get(pos2)) ) | (( (int)(_this2->b->__get((pos2 + 1))) ) << 8)) | (( (int)(_this2->b->__get((pos2 + 2))) ) << 16)) | (( (int)(_this2->b->__get((pos2 + 3))) ) << 24));
HXDLIN( 309)					 ::hxd::fmt::fbx::Parser _gthis3 = _gthis;
HXDLIN( 309)					_gthis3->pos = (_gthis3->pos + 4);
HXDLIN( 309)					arrayCompressedLen = i2;
HXDLIN( 309)					switch((int)(arrayEncoding)){
            						case (int)0: {
HXLINE( 309)							arrayBytes = _gthis->bytes;
HXDLIN( 309)							arrayBytesPos = _gthis->pos;
HXDLIN( 309)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 309)							_gthis1->pos = (_gthis1->pos + (arrayLen * 4));
            						}
            						break;
            						case (int)1: {
HXLINE( 309)							arrayBytesPos = 0;
HXDLIN( 309)							 ::haxe::io::Bytes buf = _gthis->bytes->sub(_gthis->pos,arrayCompressedLen);
HXDLIN( 309)							arrayBytes = ::haxe::zip::Uncompress_obj::run(buf,null());
HXDLIN( 309)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 309)							_gthis1->pos = (_gthis1->pos + arrayCompressedLen);
            						}
            						break;
            						default:{
HXLINE( 309)							_gthis->error((HX_("Unsupported array encoding: ",4b,5d,28,37) + arrayEncoding));
            						}
            					}
            				}
HXLINE( 310)				::Array< int > ints = ::Array_obj< int >::__new();
HXLINE( 311)				while((arrayLen > 0)){
HXLINE( 312)					ints->push((((( (int)(arrayBytes->b->__get(arrayBytesPos)) ) | (( (int)(arrayBytes->b->__get((arrayBytesPos + 1))) ) << 8)) | (( (int)(arrayBytes->b->__get((arrayBytesPos + 2))) ) << 16)) | (( (int)(arrayBytes->b->__get((arrayBytesPos + 3))) ) << 24)));
HXLINE( 313)					arrayBytesPos = (arrayBytesPos + 4);
HXLINE( 314)					arrayLen = (arrayLen - 1);
            				}
HXLINE( 316)				return ::hxd::fmt::fbx::FbxProp_obj::PInts(ints);
            			}
            			break;
            			case (int)108: {
HXLINE( 300)				{
HXLINE( 300)					 ::haxe::io::Bytes _this = _gthis->bytes;
HXDLIN( 300)					int pos = _gthis->pos;
HXDLIN( 300)					int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXDLIN( 300)					 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 300)					_gthis1->pos = (_gthis1->pos + 4);
HXDLIN( 300)					arrayLen = i;
HXDLIN( 300)					 ::haxe::io::Bytes _this1 = _gthis->bytes;
HXDLIN( 300)					int pos1 = _gthis->pos;
HXDLIN( 300)					int i1 = (((( (int)(_this1->b->__get(pos1)) ) | (( (int)(_this1->b->__get((pos1 + 1))) ) << 8)) | (( (int)(_this1->b->__get((pos1 + 2))) ) << 16)) | (( (int)(_this1->b->__get((pos1 + 3))) ) << 24));
HXDLIN( 300)					 ::hxd::fmt::fbx::Parser _gthis2 = _gthis;
HXDLIN( 300)					_gthis2->pos = (_gthis2->pos + 4);
HXDLIN( 300)					arrayEncoding = i1;
HXDLIN( 300)					 ::haxe::io::Bytes _this2 = _gthis->bytes;
HXDLIN( 300)					int pos2 = _gthis->pos;
HXDLIN( 300)					int i2 = (((( (int)(_this2->b->__get(pos2)) ) | (( (int)(_this2->b->__get((pos2 + 1))) ) << 8)) | (( (int)(_this2->b->__get((pos2 + 2))) ) << 16)) | (( (int)(_this2->b->__get((pos2 + 3))) ) << 24));
HXDLIN( 300)					 ::hxd::fmt::fbx::Parser _gthis3 = _gthis;
HXDLIN( 300)					_gthis3->pos = (_gthis3->pos + 4);
HXDLIN( 300)					arrayCompressedLen = i2;
HXDLIN( 300)					switch((int)(arrayEncoding)){
            						case (int)0: {
HXLINE( 300)							arrayBytes = _gthis->bytes;
HXDLIN( 300)							arrayBytesPos = _gthis->pos;
HXDLIN( 300)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 300)							_gthis1->pos = (_gthis1->pos + (arrayLen * 8));
            						}
            						break;
            						case (int)1: {
HXLINE( 300)							arrayBytesPos = 0;
HXDLIN( 300)							 ::haxe::io::Bytes buf = _gthis->bytes->sub(_gthis->pos,arrayCompressedLen);
HXDLIN( 300)							arrayBytes = ::haxe::zip::Uncompress_obj::run(buf,null());
HXDLIN( 300)							 ::hxd::fmt::fbx::Parser _gthis1 = _gthis;
HXDLIN( 300)							_gthis1->pos = (_gthis1->pos + arrayCompressedLen);
            						}
            						break;
            						default:{
HXLINE( 300)							_gthis->error((HX_("Unsupported array encoding: ",4b,5d,28,37) + arrayEncoding));
            						}
            					}
            				}
HXLINE( 301)				::Array< Float > i64s = ::Array_obj< Float >::__new();
HXLINE( 302)				while((arrayLen > 0)){
HXLINE( 303)					int pos = (arrayBytesPos + 4);
HXDLIN( 303)					 cpp::Int64Struct i64 = _hx_int64_make((((( (int)(arrayBytes->b->__get(pos)) ) | (( (int)(arrayBytes->b->__get((pos + 1))) ) << 8)) | (( (int)(arrayBytes->b->__get((pos + 2))) ) << 16)) | (( (int)(arrayBytes->b->__get((pos + 3))) ) << 24)),(((( (int)(arrayBytes->b->__get(arrayBytesPos)) ) | (( (int)(arrayBytes->b->__get((arrayBytesPos + 1))) ) << 8)) | (( (int)(arrayBytes->b->__get((arrayBytesPos + 2))) ) << 16)) | (( (int)(arrayBytes->b->__get((arrayBytesPos + 3))) ) << 24)));
HXDLIN( 303)					Float _hx_tmp = (( (Float)(_hx_int64_high(i64)) ) * ((Float)4294967296));
HXDLIN( 303)					Float _hx_tmp1;
HXDLIN( 303)					if (((_hx_int64_low(i64) & (int)-2147483648) != 0)) {
HXLINE( 303)						_hx_tmp1 = ((_hx_int64_low(i64) & (int)2147483647) + ((Float)2147483648));
            					}
            					else {
HXLINE( 303)						_hx_tmp1 = ( (Float)(_hx_int64_low(i64)) );
            					}
HXDLIN( 303)					i64s->push((_hx_tmp + _hx_tmp1));
HXLINE( 304)					arrayBytesPos = (arrayBytesPos + 8);
HXLINE( 305)					arrayLen = (arrayLen - 1);
            				}
HXLINE( 307)				return ::hxd::fmt::fbx::FbxProp_obj::PFloats(i64s);
            			}
            			break;
            			default:{
HXLINE( 334)				return this->error((((HX_("Unknown property type: ",95,9f,d2,16) + type) + HX_("/",2f,00,00,00)) + ::String::fromCharCode(type)));
            			}
            		}
HXLINE( 266)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readBinaryProperty,return )

void Parser_obj::except( ::hxd::fmt::fbx::_Parser::Token except){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_338_except)
HXLINE( 339)		 ::hxd::fmt::fbx::_Parser::Token t = this->next();
HXLINE( 340)		if (!(__hxcpp_enum_eq(t,except))) {
HXLINE( 341)			::String _hx_tmp = ((HX_("Unexpected '",38,54,94,03) + this->tokenStr(t)) + HX_("' (",ef,b3,1d,00));
HXDLIN( 341)			this->error(((_hx_tmp + this->tokenStr(except)) + HX_(" expected)",91,76,47,f3)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,except,(void))

 ::hxd::fmt::fbx::_Parser::Token Parser_obj::peek(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_344_peek)
HXLINE( 345)		if (::hx::IsNull( this->token )) {
HXLINE( 346)			this->token = this->nextToken();
            		}
HXLINE( 347)		return this->token;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,peek,return )

 ::hxd::fmt::fbx::_Parser::Token Parser_obj::next(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_350_next)
HXLINE( 351)		if (::hx::IsNull( this->token )) {
HXLINE( 352)			return this->nextToken();
            		}
HXLINE( 353)		 ::hxd::fmt::fbx::_Parser::Token tmp = this->token;
HXLINE( 354)		this->token = null();
HXLINE( 355)		return tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,next,return )

 ::Dynamic Parser_obj::error(::String msg){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_359_error)
HXDLIN( 359)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((msg + HX_(" (line ",a4,24,f7,a5)) + this->line) + HX_(")",29,00,00,00))));
HXDLIN( 359)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,error,return )

 ::Dynamic Parser_obj::unexpected( ::hxd::fmt::fbx::_Parser::Token t){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_364_unexpected)
HXDLIN( 364)		return this->error((HX_("Unexpected ",0f,99,d1,53) + this->tokenStr(t)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

::String Parser_obj::tokenStr( ::hxd::fmt::fbx::_Parser::Token t){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_368_tokenStr)
HXDLIN( 368)		switch((int)(t->_hx_getIndex())){
            			case (int)0: {
HXLINE( 372)				::String i = t->_hx_getString(0);
HXDLIN( 372)				return i;
            			}
            			break;
            			case (int)1: {
HXLINE( 373)				::String i = t->_hx_getString(0);
HXDLIN( 373)				return (i + HX_(":",3a,00,00,00));
            			}
            			break;
            			case (int)2: {
HXLINE( 375)				::String i = t->_hx_getString(0);
HXDLIN( 375)				return i;
            			}
            			break;
            			case (int)3: {
HXLINE( 374)				::String f = t->_hx_getString(0);
HXDLIN( 374)				return f;
            			}
            			break;
            			case (int)4: {
HXLINE( 376)				::String s = t->_hx_getString(0);
HXDLIN( 376)				return ((HX_("\"",22,00,00,00) + s) + HX_("\"",22,00,00,00));
            			}
            			break;
            			case (int)5: {
HXLINE( 378)				int l = t->_hx_getInt(0);
HXDLIN( 378)				return (HX_("*",2a,00,00,00) + l);
            			}
            			break;
            			case (int)6: {
HXLINE( 370)				return HX_("{",7b,00,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE( 371)				return HX_("}",7d,00,00,00);
            			}
            			break;
            			case (int)8: {
HXLINE( 377)				return HX_(",",2c,00,00,00);
            			}
            			break;
            			case (int)9: {
HXLINE( 369)				return HX_("<eof>",3e,ee,21,cf);
            			}
            			break;
            		}
HXLINE( 368)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenStr,return )

int Parser_obj::nextChar(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_383_nextChar)
HXDLIN( 383)		return this->buf.cca(this->pos++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,nextChar,return )

int Parser_obj::getVersionedInt32(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_386_getVersionedInt32)
HXLINE( 387)		 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 387)		int pos = this->pos;
HXDLIN( 387)		int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXLINE( 389)		 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 389)		int _hx_tmp1;
HXDLIN( 389)		if ((this->fbxVersion >= 7500)) {
HXLINE( 389)			_hx_tmp1 = 8;
            		}
            		else {
HXLINE( 389)			_hx_tmp1 = 4;
            		}
HXDLIN( 389)		_hx_tmp->pos = (_hx_tmp->pos + _hx_tmp1);
HXLINE( 390)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getVersionedInt32,return )

int Parser_obj::getInt32(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_393_getInt32)
HXLINE( 394)		 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 394)		int pos = this->pos;
HXDLIN( 394)		int i = (((( (int)(_this->b->__get(pos)) ) | (( (int)(_this->b->__get((pos + 1))) ) << 8)) | (( (int)(_this->b->__get((pos + 2))) ) << 16)) | (( (int)(_this->b->__get((pos + 3))) ) << 24));
HXLINE( 395)		 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 395)		_hx_tmp->pos = (_hx_tmp->pos + 4);
HXLINE( 396)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getInt32,return )

int Parser_obj::getInt16(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_399_getInt16)
HXLINE( 400)		int i = (( (int)(this->bytes->b->__get(this->pos)) ) | (( (int)(this->bytes->b->__get((this->pos + 1))) ) << 8));
HXLINE( 401)		 ::hxd::fmt::fbx::Parser _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 401)		_hx_tmp->pos = (_hx_tmp->pos + 2);
HXLINE( 402)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getInt16,return )

Float Parser_obj::getFloat(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_405_getFloat)
HXLINE( 406)		 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 406)		int pos = this->pos;
HXDLIN( 406)		bool _hx_tmp;
HXDLIN( 406)		if ((pos >= 0)) {
HXLINE( 406)			_hx_tmp = ((pos + 4) > _this->length);
            		}
            		else {
HXLINE( 406)			_hx_tmp = true;
            		}
HXDLIN( 406)		if (_hx_tmp) {
HXLINE( 406)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXDLIN( 406)		Float f =  ::__hxcpp_memory_get_float(_this->b,pos);
HXLINE( 407)		 ::hxd::fmt::fbx::Parser _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 407)		_hx_tmp1->pos = (_hx_tmp1->pos + 4);
HXLINE( 408)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getFloat,return )

Float Parser_obj::getDouble(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_411_getDouble)
HXLINE( 412)		 ::haxe::io::Bytes _this = this->bytes;
HXDLIN( 412)		int pos = this->pos;
HXDLIN( 412)		bool _hx_tmp;
HXDLIN( 412)		if ((pos >= 0)) {
HXLINE( 412)			_hx_tmp = ((pos + 8) > _this->length);
            		}
            		else {
HXLINE( 412)			_hx_tmp = true;
            		}
HXDLIN( 412)		if (_hx_tmp) {
HXLINE( 412)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXDLIN( 412)		Float d =  ::__hxcpp_memory_get_double(_this->b,pos);
HXLINE( 413)		 ::hxd::fmt::fbx::Parser _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 413)		_hx_tmp1->pos = (_hx_tmp1->pos + 8);
HXLINE( 414)		return d;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getDouble,return )

Float Parser_obj::i64ToFloat( cpp::Int64Struct i64){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_418_i64ToFloat)
HXDLIN( 418)		Float _hx_tmp = (( (Float)(_hx_int64_high(i64)) ) * ((Float)4294967296));
HXLINE( 419)		Float _hx_tmp1;
HXDLIN( 419)		if (((_hx_int64_low(i64) & (int)-2147483648) != 0)) {
HXLINE( 419)			_hx_tmp1 = ((_hx_int64_low(i64) & (int)2147483647) + ((Float)2147483648));
            		}
            		else {
HXLINE( 419)			_hx_tmp1 = ( (Float)(_hx_int64_low(i64)) );
            		}
HXLINE( 418)		return (_hx_tmp + _hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,i64ToFloat,return )

int Parser_obj::getByte(){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_423_getByte)
HXDLIN( 423)		return ( (int)(this->bytes->b->__get(this->pos++)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getByte,return )

::String Parser_obj::getBuf(int pos,int len){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_427_getBuf)
HXDLIN( 427)		return this->buf.substr(pos,len);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,getBuf,return )

bool Parser_obj::isIdentChar(int c){
            	HX_STACKFRAME(&_hx_pos_134b95376ac02d3e_431_isIdentChar)
HXDLIN( 431)		bool _hx_tmp;
HXDLIN( 431)		bool _hx_tmp1;
HXDLIN( 431)		bool _hx_tmp2;
HXDLIN( 431)		bool _hx_tmp3;
HXDLIN( 431)		if ((c >= 97)) {
HXDLIN( 431)			_hx_tmp3 = (c <= 122);
            		}
            		else {
HXDLIN( 431)			_hx_tmp3 = false;
            		}
HXDLIN( 431)		if (!(_hx_tmp3)) {
HXDLIN( 431)			if ((c >= 65)) {
HXDLIN( 431)				_hx_tmp2 = (c <= 90);
            			}
            			else {
HXDLIN( 431)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXDLIN( 431)			_hx_tmp2 = true;
            		}
HXDLIN( 431)		if (!(_hx_tmp2)) {
HXDLIN( 431)			if ((c >= 48)) {
HXDLIN( 431)				_hx_tmp1 = (c <= 57);
            			}
            			else {
HXDLIN( 431)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXDLIN( 431)			_hx_tmp1 = true;
            		}
HXDLIN( 431)		if (!(_hx_tmp1)) {
HXDLIN( 431)			_hx_tmp = (c == 95);
            		}
            		else {
HXDLIN( 431)			_hx_tmp = true;
            		}
HXDLIN( 431)		if (!(_hx_tmp)) {
HXDLIN( 431)			return (c == 45);
            		}
            		else {
HXDLIN( 431)			return true;
            		}
HXDLIN( 431)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isIdentChar,return )

 ::hxd::fmt::fbx::_Parser::Token Parser_obj::nextToken(){
	int start = this->pos;
	while(true){
		int c = this->buf.cca(this->pos++);
		switch((int)(c)){
			case (int)10: {
				this->line++;
				start = (start + 1);
			}
			break;
			case (int)9: case (int)13: case (int)32: {
				start = (start + 1);
			}
			break;
			case (int)34: {
				start = this->pos;
				while(true){
					c = this->buf.cca(this->pos++);
					if ((c == 34)) {
						goto _hx_goto_43;
					}
					bool _hx_tmp;
					if ((c != 0)) {
						_hx_tmp = (c == 10);
					}
					else {
						_hx_tmp = true;
					}
					if (_hx_tmp) {
						this->error(HX_("Unclosed string",ac,02,ef,ea));
					}
				}
				_hx_goto_43:;
				return ::hxd::fmt::fbx::_Parser::Token_obj::TString(this->buf.substr(start,((this->pos - start) - 1)));
			}
			break;
			case (int)42: {
				start = this->pos;
				while(true){
					c = this->buf.cca(this->pos++);
					bool _hx_tmp;
					if ((c >= 48)) {
						_hx_tmp = (c <= 57);
					}
					else {
						_hx_tmp = false;
					}
					if (!(_hx_tmp)) {
						goto _hx_goto_44;
					}
				}
				_hx_goto_44:;
				this->pos--;
				return ::hxd::fmt::fbx::_Parser::Token_obj::TLength(::Std_obj::parseInt(this->buf.substr(start,(this->pos - start))));
			}
			break;
			case (int)44: {
				return ::hxd::fmt::fbx::_Parser::Token_obj::TColon_dyn();
			}
			break;
			case (int)59: {
				while(true){
					int c = this->buf.cca(this->pos++);
					bool _hx_tmp;
					if ((c != 0)) {
						_hx_tmp = (c == 10);
					}
					else {
						_hx_tmp = true;
					}
					if (_hx_tmp) {
						this->pos--;
						goto _hx_goto_45;
					}
				}
				_hx_goto_45:;
				start = this->pos;
			}
			break;
			case (int)123: {
				return ::hxd::fmt::fbx::_Parser::Token_obj::TBraceOpen_dyn();
			}
			break;
			case (int)125: {
				return ::hxd::fmt::fbx::_Parser::Token_obj::TBraceClose_dyn();
			}
			break;
			default:{
				bool _hx_tmp;
				bool _hx_tmp1;
				bool _hx_tmp2;
				if ((c >= 97)) {
					_hx_tmp2 = (c <= 122);
				}
				else {
					_hx_tmp2 = false;
				}
				if (!(_hx_tmp2)) {
					if ((c >= 65)) {
						_hx_tmp1 = (c <= 90);
					}
					else {
						_hx_tmp1 = false;
					}
				}
				else {
					_hx_tmp1 = true;
				}
				if (!(_hx_tmp1)) {
					_hx_tmp = (c == 95);
				}
				else {
					_hx_tmp = true;
				}
				if (_hx_tmp) {
					while(true){
						c = this->buf.cca(this->pos++);
						bool _hx_tmp;
						bool _hx_tmp1;
						bool _hx_tmp2;
						bool _hx_tmp3;
						bool _hx_tmp4;
						if ((c >= 97)) {
							_hx_tmp4 = (c <= 122);
						}
						else {
							_hx_tmp4 = false;
						}
						if (!(_hx_tmp4)) {
							if ((c >= 65)) {
								_hx_tmp3 = (c <= 90);
							}
							else {
								_hx_tmp3 = false;
							}
						}
						else {
							_hx_tmp3 = true;
						}
						if (!(_hx_tmp3)) {
							if ((c >= 48)) {
								_hx_tmp2 = (c <= 57);
							}
							else {
								_hx_tmp2 = false;
							}
						}
						else {
							_hx_tmp2 = true;
						}
						if (!(_hx_tmp2)) {
							_hx_tmp1 = (c == 95);
						}
						else {
							_hx_tmp1 = true;
						}
						if (!(_hx_tmp1)) {
							_hx_tmp = (c == 45);
						}
						else {
							_hx_tmp = true;
						}
						if (!(_hx_tmp)) {
							goto _hx_goto_39;
						}
					}
					_hx_goto_39:;
					if ((c == 58)) {
						return ::hxd::fmt::fbx::_Parser::Token_obj::TNode(this->buf.substr(start,((this->pos - start) - 1)));
					}
					this->pos--;
					return ::hxd::fmt::fbx::_Parser::Token_obj::TIdent(this->buf.substr(start,(this->pos - start)));
				}
				bool _hx_tmp3;
				bool _hx_tmp4;
				if ((c >= 48)) {
					_hx_tmp4 = (c <= 57);
				}
				else {
					_hx_tmp4 = false;
				}
				if (!(_hx_tmp4)) {
					_hx_tmp3 = (c == 45);
				}
				else {
					_hx_tmp3 = true;
				}
				if (_hx_tmp3) {
					while(true){
						c = this->buf.cca(this->pos++);
						bool _hx_tmp;
						if ((c >= 48)) {
							_hx_tmp = (c <= 57);
						}
						else {
							_hx_tmp = false;
						}
						if (!(_hx_tmp)) {
							goto _hx_goto_40;
						}
					}
					_hx_goto_40:;
					bool _hx_tmp;
					bool _hx_tmp1;
					bool _hx_tmp2;
					if ((c != 46)) {
						_hx_tmp2 = (c != 69);
					}
					else {
						_hx_tmp2 = false;
					}
					if (_hx_tmp2) {
						_hx_tmp1 = (c != 101);
					}
					else {
						_hx_tmp1 = false;
					}
					if (_hx_tmp1) {
						_hx_tmp = ((this->pos - start) < 10);
					}
					else {
						_hx_tmp = false;
					}
					if (_hx_tmp) {
						this->pos--;
						return ::hxd::fmt::fbx::_Parser::Token_obj::TInt(this->buf.substr(start,(this->pos - start)));
					}
					if ((c == 46)) {
						while(true){
							c = this->buf.cca(this->pos++);
							bool _hx_tmp;
							if ((c >= 48)) {
								_hx_tmp = (c <= 57);
							}
							else {
								_hx_tmp = false;
							}
							if (!(_hx_tmp)) {
								goto _hx_goto_41;
							}
						}
						_hx_goto_41:;
					}
					bool _hx_tmp3;
					if ((c != 101)) {
						_hx_tmp3 = (c == 69);
					}
					else {
						_hx_tmp3 = true;
					}
					if (_hx_tmp3) {
						c = this->buf.cca(this->pos++);
						bool _hx_tmp;
						if ((c != 45)) {
							_hx_tmp = (c != 43);
						}
						else {
							_hx_tmp = false;
						}
						if (_hx_tmp) {
							this->pos--;
						}
						while(true){
							c = this->buf.cca(this->pos++);
							bool _hx_tmp;
							if ((c >= 48)) {
								_hx_tmp = (c <= 57);
							}
							else {
								_hx_tmp = false;
							}
							if (!(_hx_tmp)) {
								goto _hx_goto_42;
							}
						}
						_hx_goto_42:;
					}
					this->pos--;
					return ::hxd::fmt::fbx::_Parser::Token_obj::TFloat(this->buf.substr(start,(this->pos - start)));
				}
				if ((c == 0)) {
					this->pos--;
					return ::hxd::fmt::fbx::_Parser::Token_obj::TEof_dyn();
				}
				this->error(((HX_("Unexpected char '",ac,aa,c1,01) + ::String::fromCharCode(c)) + HX_("'",27,00,00,00)));
			}
		}
	}
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,nextToken,return )

 ::Dynamic Parser_obj::parse( ::haxe::io::Bytes data){
            	HX_GC_STACKFRAME(&_hx_pos_134b95376ac02d3e_520_parse)
HXLINE( 521)		bool _hx_tmp;
HXDLIN( 521)		if ((data->length > 20)) {
HXLINE( 521)			_hx_tmp = (data->getString(0,20,null()) == HX_("Kaydara FBX Binary  ",36,22,8f,a8));
            		}
            		else {
HXLINE( 521)			_hx_tmp = false;
            		}
HXDLIN( 521)		if (_hx_tmp) {
HXLINE( 522)			return  ::hxd::fmt::fbx::Parser_obj::__alloc( HX_CTX )->parseBytes(data);
            		}
HXLINE( 524)		 ::hxd::fmt::fbx::Parser _hx_tmp1 =  ::hxd::fmt::fbx::Parser_obj::__alloc( HX_CTX );
HXDLIN( 524)		return _hx_tmp1->parseText(data->toString());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )


::hx::ObjectPtr< Parser_obj > Parser_obj::__new() {
	::hx::ObjectPtr< Parser_obj > __this = new Parser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Parser_obj > Parser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Parser_obj *__this = (Parser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Parser_obj), true, "hxd.fmt.fbx.Parser"));
	*(void **)__this = Parser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(token,"token");
	HX_MARK_MEMBER_NAME(binary,"binary");
	HX_MARK_MEMBER_NAME(fbxVersion,"fbxVersion");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(token,"token");
	HX_VISIT_MEMBER_NAME(binary,"binary");
	HX_VISIT_MEMBER_NAME(fbxVersion,"fbxVersion");
}

::hx::Val Parser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return ::hx::Val( buf ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line ); }
		if (HX_FIELD_EQ(inName,"peek") ) { return ::hx::Val( peek_dyn() ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return ::hx::Val( bytes ); }
		if (HX_FIELD_EQ(inName,"token") ) { return ::hx::Val( token ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"binary") ) { return ::hx::Val( binary ); }
		if (HX_FIELD_EQ(inName,"except") ) { return ::hx::Val( except_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBuf") ) { return ::hx::Val( getBuf_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByte") ) { return ::hx::Val( getByte_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tokenStr") ) { return ::hx::Val( tokenStr_dyn() ); }
		if (HX_FIELD_EQ(inName,"nextChar") ) { return ::hx::Val( nextChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return ::hx::Val( getInt32_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInt16") ) { return ::hx::Val( getInt16_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFloat") ) { return ::hx::Val( getFloat_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseText") ) { return ::hx::Val( parseText_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseNode") ) { return ::hx::Val( parseNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDouble") ) { return ::hx::Val( getDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"nextToken") ) { return ::hx::Val( nextToken_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fbxVersion") ) { return ::hx::Val( fbxVersion ); }
		if (HX_FIELD_EQ(inName,"parseBytes") ) { return ::hx::Val( parseBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseNodes") ) { return ::hx::Val( parseNodes_dyn() ); }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return ::hx::Val( unexpected_dyn() ); }
		if (HX_FIELD_EQ(inName,"i64ToFloat") ) { return ::hx::Val( i64ToFloat_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isIdentChar") ) { return ::hx::Val( isIdentChar_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseBinaryNode") ) { return ::hx::Val( parseBinaryNode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"parseBinaryNodes") ) { return ::hx::Val( parseBinaryNodes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readBinaryString") ) { return ::hx::Val( readBinaryString_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getVersionedInt32") ) { return ::hx::Val( getVersionedInt32_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readBinaryProperty") ) { return ::hx::Val( readBinaryProperty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Parser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

::hx::Val Parser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"token") ) { token=inValue.Cast<  ::hxd::fmt::fbx::_Parser::Token >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"binary") ) { binary=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fbxVersion") ) { fbxVersion=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("line",f4,17,b3,47));
	outFields->push(HX_("buf",33,c3,4a,00));
	outFields->push(HX_("bytes",6b,08,98,bd));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("token",f9,82,2b,14));
	outFields->push(HX_("binary",01,bc,0b,ed));
	outFields->push(HX_("fbxVersion",bc,82,fe,77));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Parser_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Parser_obj,line),HX_("line",f4,17,b3,47)},
	{::hx::fsString,(int)offsetof(Parser_obj,buf),HX_("buf",33,c3,4a,00)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Parser_obj,bytes),HX_("bytes",6b,08,98,bd)},
	{::hx::fsInt,(int)offsetof(Parser_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsObject /*  ::hxd::fmt::fbx::_Parser::Token */ ,(int)offsetof(Parser_obj,token),HX_("token",f9,82,2b,14)},
	{::hx::fsBool,(int)offsetof(Parser_obj,binary),HX_("binary",01,bc,0b,ed)},
	{::hx::fsInt,(int)offsetof(Parser_obj,fbxVersion),HX_("fbxVersion",bc,82,fe,77)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Parser_obj_sStaticStorageInfo = 0;
#endif

static ::String Parser_obj_sMemberFields[] = {
	HX_("line",f4,17,b3,47),
	HX_("buf",33,c3,4a,00),
	HX_("bytes",6b,08,98,bd),
	HX_("pos",94,5d,55,00),
	HX_("token",f9,82,2b,14),
	HX_("binary",01,bc,0b,ed),
	HX_("fbxVersion",bc,82,fe,77),
	HX_("parseText",80,1e,a0,d4),
	HX_("parseBytes",38,4f,79,e7),
	HX_("parseNodes",fe,fe,9f,c9),
	HX_("parseNode",d5,5b,b0,d0),
	HX_("parseBinaryNodes",fd,26,fc,0f),
	HX_("readBinaryString",28,10,83,3f),
	HX_("parseBinaryNode",b6,78,cd,43),
	HX_("readBinaryProperty",6c,f3,94,42),
	HX_("except",19,33,de,bb),
	HX_("peek",9b,e1,54,4a),
	HX_("next",f3,84,02,49),
	HX_("error",c8,cb,29,73),
	HX_("unexpected",d1,15,f4,c5),
	HX_("tokenStr",38,3f,47,2b),
	HX_("nextChar",69,05,8c,ed),
	HX_("getVersionedInt32",8d,4d,4d,7c),
	HX_("getInt32",d8,a2,f7,1d),
	HX_("getInt16",1e,a1,f7,1d),
	HX_("getFloat",26,d5,6d,62),
	HX_("getDouble",47,b4,21,af),
	HX_("i64ToFloat",fa,b8,22,98),
	HX_("getByte",be,ce,a5,13),
	HX_("getBuf",3d,fc,19,a3),
	HX_("isIdentChar",9c,bc,86,15),
	HX_("nextToken",06,9d,70,bb),
	::String(null()) };

::hx::Class Parser_obj::__mClass;

static ::String Parser_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void Parser_obj::__register()
{
	Parser_obj _hx_dummy;
	Parser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.fbx.Parser",cc,b4,57,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Parser_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Parser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Parser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Parser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
