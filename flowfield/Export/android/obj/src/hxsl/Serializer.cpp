#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
#ifndef INCLUDED_hxsl_Const
#include <hxsl/Const.h>
#endif
#ifndef INCLUDED_hxsl_FunctionKind
#include <hxsl/FunctionKind.h>
#endif
#ifndef INCLUDED_hxsl_Prec
#include <hxsl/Prec.h>
#endif
#ifndef INCLUDED_hxsl_Serializer
#include <hxsl/Serializer.h>
#endif
#ifndef INCLUDED_hxsl_SizeDecl
#include <hxsl/SizeDecl.h>
#endif
#ifndef INCLUDED_hxsl_TExprDef
#include <hxsl/TExprDef.h>
#endif
#ifndef INCLUDED_hxsl_TGlobal
#include <hxsl/TGlobal.h>
#endif
#ifndef INCLUDED_hxsl_Tools
#include <hxsl/Tools.h>
#endif
#ifndef INCLUDED_hxsl_Type
#include <hxsl/Type.h>
#endif
#ifndef INCLUDED_hxsl_VarKind
#include <hxsl/VarKind.h>
#endif
#ifndef INCLUDED_hxsl_VarQualifier
#include <hxsl/VarQualifier.h>
#endif
#ifndef INCLUDED_hxsl_VecType
#include <hxsl/VecType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7063d07f46bc7d38_4_new,"hxsl.Serializer","new",0x584443c9,"hxsl.Serializer.new","hxsl/Serializer.hx",4,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_18_writeArr,"hxsl.Serializer","writeArr",0x0bf1eeb9,"hxsl.Serializer.writeArr","hxsl/Serializer.hx",18,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_24_readArr,"hxsl.Serializer","readArr",0x9c7c8094,"hxsl.Serializer.readArr","hxsl/Serializer.hx",24,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_27_readVarInt,"hxsl.Serializer","readVarInt",0xf20d8ff5,"hxsl.Serializer.readVarInt","hxsl/Serializer.hx",27,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_37_writeVarInt,"hxsl.Serializer","writeVarInt",0xa7a5c6f0,"hxsl.Serializer.writeVarInt","hxsl/Serializer.hx",37,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_51_writeID,"hxsl.Serializer","writeID",0x44eebe63,"hxsl.Serializer.writeID","hxsl/Serializer.hx",51,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_62_readID,"hxsl.Serializer","readID",0x839260e8,"hxsl.Serializer.readID","hxsl/Serializer.hx",62,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_65_writeTID,"hxsl.Serializer","writeTID",0x0c0035a7,"hxsl.Serializer.writeTID","hxsl/Serializer.hx",65,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_77_writeType,"hxsl.Serializer","writeType",0x74534f62,"hxsl.Serializer.writeType","hxsl/Serializer.hx",77,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_104_readType,"hxsl.Serializer","readType",0x5d085d27,"hxsl.Serializer.readType","hxsl/Serializer.hx",104,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_150_writeString,"hxsl.Serializer","writeString",0x6548ff79,"hxsl.Serializer.writeString","hxsl/Serializer.hx",150,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_156_readString,"hxsl.Serializer","readString",0xafb0c87e,"hxsl.Serializer.readString","hxsl/Serializer.hx",156,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_162_writeVar,"hxsl.Serializer","writeVar",0x0c01cf3f,"hxsl.Serializer.writeVar","hxsl/Serializer.hx",162,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_195_writeFun,"hxsl.Serializer","writeFun",0x0bf5bc97,"hxsl.Serializer.writeFun","hxsl/Serializer.hx",195,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_203_writeConst,"hxsl.Serializer","writeConst",0x8424afbb,"hxsl.Serializer.writeConst","hxsl/Serializer.hx",203,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_214_writeExpr,"hxsl.Serializer","writeExpr",0x6a6859dd,"hxsl.Serializer.writeExpr","hxsl/Serializer.hx",214,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_298_readConst,"hxsl.Serializer","readConst",0x39dbae56,"hxsl.Serializer.readConst","hxsl/Serializer.hx",298,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_318_readExpr,"hxsl.Serializer","readExpr",0x531d67a2,"hxsl.Serializer.readExpr","hxsl/Serializer.hx",318,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_371_readVar,"hxsl.Serializer","readVar",0x9c8c611a,"hxsl.Serializer.readVar","hxsl/Serializer.hx",371,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_417_readFun,"hxsl.Serializer","readFun",0x9c804e72,"hxsl.Serializer.readFun","hxsl/Serializer.hx",417,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_428_unserialize,"hxsl.Serializer","unserialize",0x39b868d0,"hxsl.Serializer.unserialize","hxsl/Serializer.hx",428,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_441_serialize,"hxsl.Serializer","serialize",0x1388c609,"hxsl.Serializer.serialize","hxsl/Serializer.hx",441,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_456_run,"hxsl.Serializer","run",0x58475ab4,"hxsl.Serializer.run","hxsl/Serializer.hx",456,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_101_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",101,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_308_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",308,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_313_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",313,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_314_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",314,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_315_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",315,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_316_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",316,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_368_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",368,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_369_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",369,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_414_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",414,0x14945b26)
HX_LOCAL_STACK_FRAME(_hx_pos_7063d07f46bc7d38_426_boot,"hxsl.Serializer","boot",0xdb900ca9,"hxsl.Serializer.boot","hxsl/Serializer.hx",426,0x14945b26)
namespace hxsl{

void Serializer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_4_new)
HXLINE(  13)		this->tid = 1;
HXLINE(  12)		this->uid = 1;
            	}

Dynamic Serializer_obj::__CreateEmpty() { return new Serializer_obj; }

void *Serializer_obj::_hx_vtable = 0;

Dynamic Serializer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Serializer_obj > _hx_result = new Serializer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Serializer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ead4a37;
}

void Serializer_obj::writeArr(::cpp::VirtualArray arr, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_18_writeArr)
HXLINE(  19)		this->writeVarInt(arr->get_length());
HXLINE(  20)		{
HXLINE(  20)			int _g = 0;
HXDLIN(  20)			while((_g < arr->get_length())){
HXLINE(  20)				 ::Dynamic v = arr->__get(_g);
HXDLIN(  20)				_g = (_g + 1);
HXDLIN(  20)				f(v);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Serializer_obj,writeArr,(void))

::cpp::VirtualArray Serializer_obj::readArr( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_24_readArr)
HXDLIN(  24)		::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  24)		{
HXDLIN(  24)			int _g1 = 0;
HXDLIN(  24)			int _g2 = this->readVarInt();
HXDLIN(  24)			while((_g1 < _g2)){
HXDLIN(  24)				_g1 = (_g1 + 1);
HXDLIN(  24)				int i = (_g1 - 1);
HXDLIN(  24)				_g->push(f());
            			}
            		}
HXDLIN(  24)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,readArr,return )

int Serializer_obj::readVarInt(){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_27_readVarInt)
HXLINE(  28)		int b = this->input->readByte();
HXLINE(  29)		if ((b < 128)) {
HXLINE(  30)			return b;
            		}
HXLINE(  31)		if ((b == 255)) {
HXLINE(  32)			return this->input->readInt32();
            		}
HXLINE(  33)		return (((b & 127) << 8) | this->input->readByte());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,readVarInt,return )

void Serializer_obj::writeVarInt(int id){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_37_writeVarInt)
HXDLIN(  37)		if ((id < 128)) {
HXLINE(  38)			this->out->b->push(id);
            		}
            		else {
HXLINE(  40)			int n = (id >> 8);
HXLINE(  41)			if ((n >= 127)) {
HXLINE(  42)				this->out->b->push(255);
HXLINE(  43)				this->out->addInt32(n);
            			}
            			else {
HXLINE(  45)				this->out->b->push((n | 128));
HXLINE(  46)				this->out->b->push((id & 255));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,writeVarInt,(void))

void Serializer_obj::writeID(int id){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_51_writeID)
HXLINE(  52)		 ::Dynamic id2 = this->idMap->get(id);
HXLINE(  53)		if (::hx::IsNull( id2 )) {
HXLINE(  54)			id2 = this->uid++;
HXLINE(  55)			this->idMap->set(id,id2);
            		}
HXLINE(  57)		this->writeVarInt(( (int)(id2) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,writeID,(void))

int Serializer_obj::readID(){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_62_readID)
HXDLIN(  62)		return this->readVarInt();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,readID,return )

bool Serializer_obj::writeTID( ::hxsl::Type t){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_65_writeTID)
HXLINE(  66)		 ::Dynamic tid = this->typeIdMap->get(t);
HXLINE(  67)		if (::hx::IsNotNull( tid )) {
HXLINE(  68)			this->writeVarInt(( (int)(tid) ));
HXLINE(  69)			return false;
            		}
HXLINE(  71)		tid = this->tid++;
HXLINE(  72)		this->typeIdMap->set(t,tid);
HXLINE(  73)		this->writeVarInt(( (int)(tid) ));
HXLINE(  74)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,writeTID,return )

void Serializer_obj::writeType( ::hxsl::Type t){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_77_writeType)
HXLINE(  78)		{
HXLINE(  78)			 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN(  78)			int byte = _hx_getEnumValueIndex(t);
HXDLIN(  78)			_this->b->push(byte);
            		}
HXLINE(  79)		switch((int)(t->_hx_getIndex())){
            			case (int)0: case (int)1: case (int)2: case (int)3: case (int)4: case (int)6: case (int)7: case (int)8: case (int)10: case (int)11: case (int)12: case (int)18: {
            			}
            			break;
            			case (int)5: {
HXLINE(  80)				int size = t->_hx_getInt(0);
HXDLIN(  80)				 ::hxsl::VecType t1 = t->_hx_getObject(1).StaticCast<  ::hxsl::VecType >();
HXLINE(  81)				{
HXLINE(  81)					 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN(  81)					int byte = (size | (_hx_getEnumValueIndex(t1) << 3));
HXDLIN(  81)					_this->b->push(byte);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE(  82)				int size = t->_hx_getInt(0);
HXLINE(  83)				this->out->addInt32(size);
            			}
            			break;
            			case (int)13: {
HXLINE(  84)				::Array< ::Dynamic> vl = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  85)				if (this->writeTID(t)) {
HXLINE(  86)					 ::Dynamic f = this->writeVar_dyn();
HXDLIN(  86)					this->writeVarInt(vl->length);
HXDLIN(  86)					{
HXLINE(  86)						int _g = 0;
HXDLIN(  86)						while((_g < vl->length)){
HXLINE(  86)							 ::Dynamic v = vl->__get(_g);
HXDLIN(  86)							_g = (_g + 1);
HXDLIN(  86)							f(v);
            						}
            					}
            				}
            			}
            			break;
            			case (int)14: {
HXLINE(  87)				::Array< ::Dynamic> variants = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
            			}
            			break;
            			case (int)15: {
HXLINE(  89)				 ::hxsl::Type t1 = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  89)				 ::hxsl::SizeDecl size = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  89)				{
HXLINE(  90)					this->writeType(t1);
HXLINE(  91)					switch((int)(size->_hx_getIndex())){
            						case (int)0: {
HXLINE(  92)							int v = size->_hx_getInt(0);
HXDLIN(  92)							{
HXLINE(  92)								this->out->b->push(0);
HXDLIN(  92)								this->writeVarInt(v);
            							}
            						}
            						break;
            						case (int)1: {
HXLINE(  93)							 ::Dynamic v = size->_hx_getObject(0);
HXDLIN(  93)							this->writeVar(v);
            						}
            						break;
            					}
            				}
            			}
            			break;
            			case (int)16: {
HXLINE(  89)				 ::hxsl::Type t1 = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  89)				 ::hxsl::SizeDecl size = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  89)				{
HXLINE(  90)					this->writeType(t1);
HXLINE(  91)					switch((int)(size->_hx_getIndex())){
            						case (int)0: {
HXLINE(  92)							int v = size->_hx_getInt(0);
HXDLIN(  92)							{
HXLINE(  92)								this->out->b->push(0);
HXDLIN(  92)								this->writeVarInt(v);
            							}
            						}
            						break;
            						case (int)1: {
HXLINE(  93)							 ::Dynamic v = size->_hx_getObject(0);
HXDLIN(  93)							this->writeVar(v);
            						}
            						break;
            					}
            				}
            			}
            			break;
            			case (int)17: {
HXLINE(  95)				int size = t->_hx_getInt(0);
HXLINE(  96)				this->out->b->push(size);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,writeType,(void))

 ::hxsl::Type Serializer_obj::readType(){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_104_readType)
HXDLIN( 104)		switch((int)(this->input->readByte())){
            			case (int)0: {
HXLINE( 105)				return ::hxsl::Type_obj::TVoid_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE( 106)				return ::hxsl::Type_obj::TInt_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 107)				return ::hxsl::Type_obj::TBool_dyn();
            			}
            			break;
            			case (int)3: {
HXLINE( 108)				return ::hxsl::Type_obj::TFloat_dyn();
            			}
            			break;
            			case (int)4: {
HXLINE( 109)				return ::hxsl::Type_obj::TString_dyn();
            			}
            			break;
            			case (int)5: {
HXLINE( 111)				int bits = this->input->readByte();
HXLINE( 112)				 ::hxsl::Type v = ::hxsl::Serializer_obj::TVECS->get(bits);
HXLINE( 113)				if (::hx::IsNull( v )) {
HXLINE( 114)					::cpp::VirtualArray params = null();
HXDLIN( 114)					v = ::hxsl::Type_obj::TVec((bits & 7),::Type_obj::createEnumIndex(::hx::ClassOf< ::hxsl::VecType >(),(bits >> 3),params));
HXLINE( 115)					::hxsl::Serializer_obj::TVECS->set(bits,v);
            				}
HXLINE( 117)				return v;
            			}
            			break;
            			case (int)6: {
HXLINE( 118)				return ::hxsl::Type_obj::TMat3_dyn();
            			}
            			break;
            			case (int)7: {
HXLINE( 119)				return ::hxsl::Type_obj::TMat4_dyn();
            			}
            			break;
            			case (int)8: {
HXLINE( 120)				return ::hxsl::Type_obj::TMat3x4_dyn();
            			}
            			break;
            			case (int)9: {
HXLINE( 121)				return ::hxsl::Type_obj::TBytes(this->input->readInt32());
            			}
            			break;
            			case (int)10: {
HXLINE( 122)				return ::hxsl::Type_obj::TSampler2D_dyn();
            			}
            			break;
            			case (int)11: {
HXLINE( 123)				return ::hxsl::Type_obj::TSampler2DArray_dyn();
            			}
            			break;
            			case (int)12: {
HXLINE( 124)				return ::hxsl::Type_obj::TSamplerCube_dyn();
            			}
            			break;
            			case (int)13: {
HXLINE( 126)				int id = this->readVarInt();
HXLINE( 127)				 ::hxsl::Type t = this->types->__get(id).StaticCast<  ::hxsl::Type >();
HXLINE( 128)				if (::hx::IsNotNull( t )) {
HXLINE( 128)					return t;
            				}
HXLINE( 129)				 ::Dynamic f = this->readVar_dyn();
HXDLIN( 129)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 129)				{
HXLINE( 129)					int _g1 = 0;
HXDLIN( 129)					int _g2 = this->readVarInt();
HXDLIN( 129)					while((_g1 < _g2)){
HXLINE( 129)						_g1 = (_g1 + 1);
HXDLIN( 129)						int i = (_g1 - 1);
HXDLIN( 129)						_g->push(f());
            					}
            				}
HXDLIN( 129)				t = ::hxsl::Type_obj::TStruct(_g);
HXLINE( 130)				this->types[id] = t;
HXLINE( 131)				return t;
            			}
            			break;
            			case (int)14: {
HXLINE( 133)				return ::hxsl::Type_obj::TFun(null());
            			}
            			break;
            			case (int)15: {
HXLINE( 135)				 ::hxsl::Type t = this->readType();
HXLINE( 136)				 ::Dynamic v = this->readVar();
HXLINE( 137)				 ::hxsl::SizeDecl _hx_tmp;
HXDLIN( 137)				if (::hx::IsNull( v )) {
HXLINE( 137)					_hx_tmp = ::hxsl::SizeDecl_obj::SConst(this->readVarInt());
            				}
            				else {
HXLINE( 137)					_hx_tmp = ::hxsl::SizeDecl_obj::SVar(v);
            				}
HXDLIN( 137)				return ::hxsl::Type_obj::TArray(t,_hx_tmp);
            			}
            			break;
            			case (int)16: {
HXLINE( 139)				 ::hxsl::Type t = this->readType();
HXLINE( 140)				 ::Dynamic v = this->readVar();
HXLINE( 141)				 ::hxsl::SizeDecl _hx_tmp;
HXDLIN( 141)				if (::hx::IsNull( v )) {
HXLINE( 141)					_hx_tmp = ::hxsl::SizeDecl_obj::SConst(this->readVarInt());
            				}
            				else {
HXLINE( 141)					_hx_tmp = ::hxsl::SizeDecl_obj::SVar(v);
            				}
HXDLIN( 141)				return ::hxsl::Type_obj::TBuffer(t,_hx_tmp);
            			}
            			break;
            			case (int)17: {
HXLINE( 143)				return ::hxsl::Type_obj::TChannel(this->input->readByte());
            			}
            			break;
            			case (int)18: {
HXLINE( 144)				return ::hxsl::Type_obj::TMat2_dyn();
            			}
            			break;
            			default:{
HXLINE( 146)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE( 104)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,readType,return )

void Serializer_obj::writeString(::String s){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_150_writeString)
HXLINE( 151)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s,null());
HXLINE( 152)		this->writeVarInt(bytes->length);
HXLINE( 153)		{
HXLINE( 153)			 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 153)			::Array< unsigned char > b1 = _this->b;
HXDLIN( 153)			::Array< unsigned char > b2 = bytes->b;
HXDLIN( 153)			{
HXLINE( 153)				int _g = 0;
HXDLIN( 153)				int _g1 = bytes->length;
HXDLIN( 153)				while((_g < _g1)){
HXLINE( 153)					_g = (_g + 1);
HXDLIN( 153)					int i = (_g - 1);
HXDLIN( 153)					_this->b->push(b2->__get(i));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,writeString,(void))

::String Serializer_obj::readString(){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_156_readString)
HXLINE( 157)		int len = this->readVarInt();
HXLINE( 158)		::String s = this->input->read(len)->getString(0,len,null());
HXLINE( 159)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,readString,return )

void Serializer_obj::writeVar( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_162_writeVar)
HXLINE( 163)		if (::hx::IsNull( v )) {
HXLINE( 164)			this->out->b->push(0);
HXLINE( 165)			return;
            		}
HXLINE( 167)		this->writeID(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
HXLINE( 168)		if (this->varMap->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ))) {
HXLINE( 168)			return;
            		}
HXLINE( 169)		this->varMap->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),v);
HXLINE( 170)		this->writeString(( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ));
HXLINE( 171)		this->writeType(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic));
HXLINE( 172)		{
HXLINE( 172)			 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 172)			int byte = _hx_getEnumValueIndex(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic));
HXDLIN( 172)			_this->b->push(byte);
            		}
HXLINE( 173)		this->writeVar(v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic));
HXLINE( 174)		if (::hx::IsNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 175)			this->out->b->push(0);
            		}
            		else {
HXLINE( 177)			this->out->b->push(( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) )->length);
HXLINE( 178)			{
HXLINE( 178)				int _g = 0;
HXDLIN( 178)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 178)				while((_g < _g1->length)){
HXLINE( 178)					 ::hxsl::VarQualifier q = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN( 178)					_g = (_g + 1);
HXLINE( 179)					{
HXLINE( 179)						 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 179)						int byte = _hx_getEnumValueIndex(q);
HXDLIN( 179)						_this->b->push(byte);
            					}
HXLINE( 180)					switch((int)(q->_hx_getIndex())){
            						case (int)0: {
HXLINE( 182)							 ::Dynamic max = q->_hx_getObject(0);
HXDLIN( 182)							int _hx_tmp;
HXDLIN( 182)							if (::hx::IsNull( max )) {
HXLINE( 182)								_hx_tmp = 0;
            							}
            							else {
HXLINE( 182)								_hx_tmp = ( (int)(max) );
            							}
HXDLIN( 182)							this->out->addInt32(_hx_tmp);
            						}
            						break;
            						case (int)4: {
HXLINE( 183)							::String n = q->_hx_getString(0);
HXDLIN( 183)							this->writeString(n);
            						}
            						break;
            						case (int)1: case (int)2: case (int)3: case (int)5: case (int)8: {
            						}
            						break;
            						case (int)6: {
HXLINE( 184)							 ::hxsl::Prec p = q->_hx_getObject(0).StaticCast<  ::hxsl::Prec >();
HXDLIN( 184)							{
HXLINE( 184)								 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 184)								int byte = _hx_getEnumValueIndex(p);
HXDLIN( 184)								_this->b->push(byte);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 185)							Float min = q->_hx_getFloat(0);
HXDLIN( 185)							Float max = q->_hx_getFloat(1);
HXDLIN( 185)							{
HXLINE( 185)								{
HXLINE( 185)									 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 185)									_this->addInt64(::haxe::io::FPHelper_obj::doubleToI64(min));
            								}
HXDLIN( 185)								{
HXLINE( 185)									 ::haxe::io::BytesBuffer _this1 = this->out;
HXDLIN( 185)									_this1->addInt64(::haxe::io::FPHelper_obj::doubleToI64(max));
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 186)							int v = q->_hx_getInt(0);
HXDLIN( 186)							this->out->addInt32(v);
            						}
            						break;
            						case (int)10: {
HXLINE( 187)							::String s = q->_hx_getString(0);
HXDLIN( 187)							this->writeString(s);
            						}
            						break;
            						case (int)11: {
HXLINE( 188)							::String s = q->_hx_getString(0);
HXDLIN( 188)							this->writeString(s);
            						}
            						break;
            						case (int)12: {
HXLINE( 189)							::String s = q->_hx_getString(0);
HXDLIN( 189)							this->writeString(s);
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,writeVar,(void))

void Serializer_obj::writeFun( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_195_writeFun)
HXLINE( 196)		{
HXLINE( 196)			 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 196)			int byte = _hx_getEnumValueIndex(f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic));
HXDLIN( 196)			_this->b->push(byte);
            		}
HXLINE( 197)		this->writeVar(f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic));
HXLINE( 198)		{
HXLINE( 198)			::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXDLIN( 198)			 ::Dynamic f1 = this->writeVar_dyn();
HXDLIN( 198)			this->writeVarInt(arr->length);
HXDLIN( 198)			{
HXLINE( 198)				int _g = 0;
HXDLIN( 198)				while((_g < arr->length)){
HXLINE( 198)					 ::Dynamic v = arr->__get(_g);
HXDLIN( 198)					_g = (_g + 1);
HXDLIN( 198)					f1(v);
            				}
            			}
            		}
HXLINE( 199)		this->writeType(f->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic));
HXLINE( 200)		this->writeExpr(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,writeFun,(void))

void Serializer_obj::writeConst( ::hxsl::Const c){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_203_writeConst)
HXLINE( 204)		{
HXLINE( 204)			 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 204)			int byte = _hx_getEnumValueIndex(c);
HXDLIN( 204)			_this->b->push(byte);
            		}
HXLINE( 205)		switch((int)(c->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE( 207)				bool b = c->_hx_getBool(0);
HXDLIN( 207)				{
HXLINE( 207)					int _hx_tmp;
HXDLIN( 207)					if (b) {
HXLINE( 207)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 207)						_hx_tmp = 0;
            					}
HXDLIN( 207)					this->out->b->push(_hx_tmp);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 208)				int v = c->_hx_getInt(0);
HXDLIN( 208)				this->out->addInt32(v);
            			}
            			break;
            			case (int)3: {
HXLINE( 209)				Float v = c->_hx_getFloat(0);
HXDLIN( 209)				{
HXLINE( 209)					 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 209)					_this->addInt64(::haxe::io::FPHelper_obj::doubleToI64(v));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 210)				::String v = c->_hx_getString(0);
HXDLIN( 210)				this->writeString(v);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,writeConst,(void))

void Serializer_obj::writeExpr( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_214_writeExpr)
HXDLIN( 214)		 ::hxsl::Serializer _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 215)		if (::hx::IsNull( e )) {
HXLINE( 216)			this->out->b->push(0);
HXLINE( 217)			return;
            		}
HXLINE( 219)		{
HXLINE( 219)			 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 219)			int byte = (_hx_getEnumValueIndex(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)) + 1);
HXDLIN( 219)			_this->b->push(byte);
            		}
HXLINE( 220)		{
HXLINE( 220)			 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 220)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 221)					 ::hxsl::Const c = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 222)					this->writeConst(c);
            				}
            				break;
            				case (int)1: {
HXLINE( 223)					 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 224)					this->writeVar(v);
            				}
            				break;
            				case (int)2: {
HXLINE( 225)					 ::hxsl::TGlobal g = _g->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >();
HXLINE( 226)					{
HXLINE( 226)						 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 226)						int byte = _hx_getEnumValueIndex(g);
HXDLIN( 226)						_this->b->push(byte);
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 227)					 ::Dynamic e = _g->_hx_getObject(0);
HXLINE( 228)					this->writeExpr(e);
            				}
            				break;
            				case (int)4: {
HXLINE( 229)					::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 230)					{
HXLINE( 230)						 ::Dynamic f = this->writeExpr_dyn();
HXDLIN( 230)						this->writeVarInt(el->length);
HXDLIN( 230)						{
HXLINE( 230)							int _g1 = 0;
HXDLIN( 230)							while((_g1 < el->length)){
HXLINE( 230)								 ::Dynamic v = el->__get(_g1);
HXDLIN( 230)								_g1 = (_g1 + 1);
HXDLIN( 230)								f(v);
            							}
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 231)					 ::haxe::macro::Binop op = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 231)					 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 231)					 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 231)					{
HXLINE( 232)						if ((op->_hx_getIndex() == 20)) {
HXLINE( 233)							 ::haxe::macro::Binop op1 = op->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXLINE( 234)							{
HXLINE( 234)								 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 234)								int byte = (_hx_getEnumValueIndex(op1) | 128);
HXDLIN( 234)								_this->b->push(byte);
            							}
            						}
            						else {
HXLINE( 236)							 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 236)							int byte = _hx_getEnumValueIndex(op);
HXDLIN( 236)							_this->b->push(byte);
            						}
HXLINE( 238)						this->writeExpr(e1);
HXLINE( 239)						this->writeExpr(e2);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 240)					 ::haxe::macro::Unop op = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Unop >();
HXDLIN( 240)					 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 240)					{
HXLINE( 241)						{
HXLINE( 241)							 ::haxe::io::BytesBuffer _this = this->out;
HXDLIN( 241)							int byte = _hx_getEnumValueIndex(op);
HXDLIN( 241)							_this->b->push(byte);
            						}
HXLINE( 242)						this->writeExpr(e1);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 243)					 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 243)					 ::Dynamic init = _g->_hx_getObject(1);
HXDLIN( 243)					{
HXLINE( 244)						this->writeVar(v);
HXLINE( 245)						this->writeExpr(init);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 246)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 246)					::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 246)					{
HXLINE( 247)						this->writeExpr(e);
HXLINE( 248)						{
HXLINE( 248)							 ::Dynamic f = this->writeExpr_dyn();
HXDLIN( 248)							this->writeVarInt(args->length);
HXDLIN( 248)							{
HXLINE( 248)								int _g1 = 0;
HXDLIN( 248)								while((_g1 < args->length)){
HXLINE( 248)									 ::Dynamic v = args->__get(_g1);
HXDLIN( 248)									_g1 = (_g1 + 1);
HXDLIN( 248)									f(v);
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 249)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 249)					::Array< ::Dynamic> regs = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 249)					{
HXLINE( 250)						this->writeExpr(e);
HXLINE( 251)						if ((regs->length == 0)) {
HXLINE( 251)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            						}
HXLINE( 252)						int bits = (regs->length - 1);
HXDLIN( 252)						int k = 2;
HXLINE( 253)						{
HXLINE( 253)							int _g1 = 0;
HXDLIN( 253)							while((_g1 < regs->length)){
HXLINE( 253)								 ::hxsl::Component r = regs->__get(_g1).StaticCast<  ::hxsl::Component >();
HXDLIN( 253)								_g1 = (_g1 + 1);
HXLINE( 254)								bits = (bits | (_hx_getEnumValueIndex(r) << k));
HXLINE( 255)								k = (k + 2);
            							}
            						}
HXLINE( 257)						this->out->b->push((bits & 255));
HXLINE( 258)						this->out->b->push((bits >> 8));
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 259)					 ::Dynamic econd = _g->_hx_getObject(0);
HXDLIN( 259)					 ::Dynamic eif = _g->_hx_getObject(1);
HXDLIN( 259)					 ::Dynamic eelse = _g->_hx_getObject(2);
HXDLIN( 259)					{
HXLINE( 260)						this->writeExpr(econd);
HXLINE( 261)						this->writeExpr(eif);
HXLINE( 262)						this->writeExpr(eelse);
            					}
            				}
            				break;
            				case (int)11: {
            				}
            				break;
            				case (int)12: {
HXLINE( 264)					 ::Dynamic e = _g->_hx_getObject(0);
HXLINE( 265)					this->writeExpr(e);
            				}
            				break;
            				case (int)13: {
HXLINE( 266)					 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 266)					 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 266)					 ::Dynamic loop = _g->_hx_getObject(2);
HXDLIN( 266)					{
HXLINE( 267)						this->writeVar(v);
HXLINE( 268)						this->writeExpr(it);
HXLINE( 269)						this->writeExpr(loop);
            					}
            				}
            				break;
            				case (int)14: {
            				}
            				break;
            				case (int)15: {
            				}
            				break;
            				case (int)16: {
HXLINE( 272)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 272)					 ::Dynamic index = _g->_hx_getObject(1);
HXDLIN( 272)					{
HXLINE( 273)						this->writeExpr(e);
HXLINE( 274)						this->writeExpr(index);
            					}
            				}
            				break;
            				case (int)17: {
HXLINE( 275)					::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 276)					{
HXLINE( 276)						 ::Dynamic f = this->writeExpr_dyn();
HXDLIN( 276)						this->writeVarInt(el->length);
HXDLIN( 276)						{
HXLINE( 276)							int _g1 = 0;
HXDLIN( 276)							while((_g1 < el->length)){
HXLINE( 276)								 ::Dynamic v = el->__get(_g1);
HXDLIN( 276)								_g1 = (_g1 + 1);
HXDLIN( 276)								f(v);
            							}
            						}
            					}
            				}
            				break;
            				case (int)18: {
HXLINE( 277)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 277)					::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 277)					 ::Dynamic def = _g->_hx_getObject(2);
HXDLIN( 277)					{
HXLINE( 278)						this->writeExpr(e);
HXLINE( 279)						{
HXLINE( 279)							this->writeVarInt(cases->length);
HXDLIN( 279)							{
HXLINE( 279)								int _g1 = 0;
HXDLIN( 279)								while((_g1 < cases->length)){
HXLINE( 279)									 ::Dynamic v = cases->__get(_g1);
HXDLIN( 279)									_g1 = (_g1 + 1);
HXDLIN( 279)									{
HXLINE( 280)										{
HXLINE( 280)											::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(v->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 280)											 ::Dynamic f = _gthis->writeExpr_dyn();
HXDLIN( 280)											_gthis->writeVarInt(arr->length);
HXDLIN( 280)											{
HXLINE( 280)												int _g = 0;
HXDLIN( 280)												while((_g < arr->length)){
HXLINE( 280)													 ::Dynamic v = arr->__get(_g);
HXDLIN( 280)													_g = (_g + 1);
HXDLIN( 280)													f(v);
            												}
            											}
            										}
HXLINE( 281)										_gthis->writeExpr(v->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic));
            									}
            								}
            							}
            						}
HXLINE( 283)						this->writeExpr(def);
            					}
            				}
            				break;
            				case (int)19: {
HXLINE( 284)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 284)					 ::Dynamic loop = _g->_hx_getObject(1);
HXDLIN( 284)					bool normalWhile = _g->_hx_getBool(2);
HXDLIN( 284)					{
HXLINE( 285)						this->writeExpr(e);
HXLINE( 286)						this->writeExpr(loop);
HXLINE( 287)						{
HXLINE( 287)							int _hx_tmp;
HXDLIN( 287)							if (normalWhile) {
HXLINE( 287)								_hx_tmp = 1;
            							}
            							else {
HXLINE( 287)								_hx_tmp = 0;
            							}
HXDLIN( 287)							this->out->b->push(_hx_tmp);
            						}
            					}
            				}
            				break;
            				case (int)20: {
HXLINE( 288)					::String m = _g->_hx_getString(0);
HXDLIN( 288)					::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 288)					 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 288)					{
HXLINE( 289)						this->writeString(m);
HXLINE( 290)						{
HXLINE( 290)							 ::Dynamic f = this->writeConst_dyn();
HXDLIN( 290)							this->writeVarInt(args->length);
HXDLIN( 290)							{
HXLINE( 290)								int _g1 = 0;
HXDLIN( 290)								while((_g1 < args->length)){
HXLINE( 290)									 ::hxsl::Const v = args->__get(_g1).StaticCast<  ::hxsl::Const >();
HXDLIN( 290)									_g1 = (_g1 + 1);
HXDLIN( 290)									f(v);
            								}
            							}
            						}
HXLINE( 291)						this->writeExpr(e);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 293)		this->writeType(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,writeExpr,(void))

 ::hxsl::Const Serializer_obj::readConst(){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_298_readConst)
HXDLIN( 298)		switch((int)(this->input->readByte())){
            			case (int)0: {
HXLINE( 299)				return ::hxsl::Const_obj::CNull_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE( 300)				return ::hxsl::Const_obj::CBool((this->input->readByte() != 0));
            			}
            			break;
            			case (int)2: {
HXLINE( 301)				return ::hxsl::Const_obj::CInt(this->input->readInt32());
            			}
            			break;
            			case (int)3: {
HXLINE( 302)				return ::hxsl::Const_obj::CFloat(this->input->readDouble());
            			}
            			break;
            			case (int)4: {
HXLINE( 303)				return ::hxsl::Const_obj::CString(this->readString());
            			}
            			break;
            			default:{
HXLINE( 304)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE( 298)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,readConst,return )

 ::Dynamic Serializer_obj::readExpr(){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_318_readExpr)
HXDLIN( 318)		 ::hxsl::Serializer _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 319)		int k = this->input->readByte();
HXLINE( 320)		k = (k - 1);
HXDLIN( 320)		if (((k + 1) == 0)) {
HXLINE( 321)			return null();
            		}
HXLINE( 322)		 ::hxsl::TExprDef e;
HXDLIN( 322)		switch((int)(k)){
            			case (int)0: {
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TConst(this->readConst());
            			}
            			break;
            			case (int)1: {
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TVar(this->readVar());
            			}
            			break;
            			case (int)2: {
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TGlobal(::hxsl::Serializer_obj::TGLOBALS->__get(this->input->readByte()).StaticCast<  ::hxsl::TGlobal >());
            			}
            			break;
            			case (int)3: {
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TParenthesis(this->readExpr());
            			}
            			break;
            			case (int)4: {
HXLINE( 327)				 ::Dynamic f = this->readExpr_dyn();
HXDLIN( 327)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 327)				{
HXLINE( 327)					int _g1 = 0;
HXDLIN( 327)					int _g2 = this->readVarInt();
HXDLIN( 327)					while((_g1 < _g2)){
HXLINE( 327)						_g1 = (_g1 + 1);
HXDLIN( 327)						int i = (_g1 - 1);
HXDLIN( 327)						_g->push(f());
            					}
            				}
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TBlock(_g);
            			}
            			break;
            			case (int)5: {
HXLINE( 329)				int op = this->input->readByte();
HXLINE( 330)				 ::haxe::macro::Binop e1;
HXDLIN( 330)				if ((op >= 128)) {
HXLINE( 330)					e1 = ::haxe::macro::Binop_obj::OpAssignOp(::hxsl::Serializer_obj::BOPS->__get((op & 127)).StaticCast<  ::haxe::macro::Binop >());
            				}
            				else {
HXLINE( 330)					e1 = ::hxsl::Serializer_obj::BOPS->__get(op).StaticCast<  ::haxe::macro::Binop >();
            				}
HXDLIN( 330)				 ::Dynamic e2 = this->readExpr();
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TBinop(e1,e2,this->readExpr());
            			}
            			break;
            			case (int)6: {
HXLINE( 331)				 ::haxe::macro::Unop e1 = ::hxsl::Serializer_obj::UNOPS->__get(this->input->readByte()).StaticCast<  ::haxe::macro::Unop >();
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TUnop(e1,this->readExpr());
            			}
            			break;
            			case (int)7: {
HXLINE( 332)				 ::Dynamic e1 = this->readVar();
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TVarDecl(e1,this->readExpr());
            			}
            			break;
            			case (int)8: {
HXLINE( 333)				 ::Dynamic e1 = this->readExpr();
HXDLIN( 333)				 ::Dynamic f = this->readExpr_dyn();
HXDLIN( 333)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 333)				{
HXLINE( 333)					int _g1 = 0;
HXDLIN( 333)					int _g2 = this->readVarInt();
HXDLIN( 333)					while((_g1 < _g2)){
HXLINE( 333)						_g1 = (_g1 + 1);
HXDLIN( 333)						int i = (_g1 - 1);
HXDLIN( 333)						_g->push(f());
            					}
            				}
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TCall(e1,_g);
            			}
            			break;
            			case (int)9: {
HXLINE( 335)				 ::Dynamic e1 = this->readExpr();
HXLINE( 336)				int bits = this->input->readUInt16();
HXLINE( 337)				::Array< ::Dynamic> swiz = ( (::Array< ::Dynamic>)(::hxsl::Serializer_obj::TSWIZ->get(bits)) );
HXLINE( 338)				if (::hx::IsNull( swiz )) {
HXLINE( 339)					::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 339)					{
HXLINE( 339)						int _g1 = 0;
HXDLIN( 339)						int _g2 = ((bits & 3) + 1);
HXDLIN( 339)						while((_g1 < _g2)){
HXLINE( 339)							_g1 = (_g1 + 1);
HXDLIN( 339)							int i = (_g1 - 1);
HXDLIN( 339)							_g->push(::hxsl::Serializer_obj::REGS->__get(((bits >> ((i * 2) + 2)) & 3)).StaticCast<  ::hxsl::Component >());
            						}
            					}
HXDLIN( 339)					swiz = _g;
HXLINE( 340)					::hxsl::Serializer_obj::TSWIZ->set(bits,swiz);
            				}
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TSwiz(e1,swiz);
            			}
            			break;
            			case (int)10: {
HXLINE( 343)				 ::Dynamic e1 = this->readExpr();
HXDLIN( 343)				 ::Dynamic e2 = this->readExpr();
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TIf(e1,e2,this->readExpr());
            			}
            			break;
            			case (int)11: {
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TDiscard_dyn();
            			}
            			break;
            			case (int)12: {
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TReturn(this->readExpr());
            			}
            			break;
            			case (int)13: {
HXLINE( 346)				 ::Dynamic e1 = this->readVar();
HXDLIN( 346)				 ::Dynamic e2 = this->readExpr();
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TFor(e1,e2,this->readExpr());
            			}
            			break;
            			case (int)14: {
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TContinue_dyn();
            			}
            			break;
            			case (int)15: {
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TBreak_dyn();
            			}
            			break;
            			case (int)16: {
HXLINE( 349)				 ::Dynamic e1 = this->readExpr();
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TArray(e1,this->readExpr());
            			}
            			break;
            			case (int)17: {
HXLINE( 350)				 ::Dynamic f = this->readExpr_dyn();
HXDLIN( 350)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 350)				{
HXLINE( 350)					int _g1 = 0;
HXDLIN( 350)					int _g2 = this->readVarInt();
HXDLIN( 350)					while((_g1 < _g2)){
HXLINE( 350)						_g1 = (_g1 + 1);
HXDLIN( 350)						int i = (_g1 - 1);
HXDLIN( 350)						_g->push(f());
            					}
            				}
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TArrayDecl(_g);
            			}
            			break;
            			case (int)18: {
HXLINE( 351)				 ::Dynamic e1 = this->readExpr();
HXDLIN( 351)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 351)				{
HXLINE( 351)					int _g1 = 0;
HXDLIN( 351)					int _g2 = this->readVarInt();
HXDLIN( 351)					while((_g1 < _g2)){
HXLINE( 351)						_g1 = (_g1 + 1);
HXDLIN( 351)						int i = (_g1 - 1);
HXLINE( 353)						 ::Dynamic f = _gthis->readExpr_dyn();
HXDLIN( 353)						::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 353)						{
HXLINE( 353)							int _g3 = 0;
HXDLIN( 353)							int _g4 = _gthis->readVarInt();
HXDLIN( 353)							while((_g3 < _g4)){
HXLINE( 353)								_g3 = (_g3 + 1);
HXDLIN( 353)								int i = (_g3 - 1);
HXDLIN( 353)								_g2->push(f());
            							}
            						}
HXLINE( 351)						_g->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("expr",35,fd,1d,43),_gthis->readExpr())
            							->setFixed(1,HX_("values",e2,03,b7,4f),_g2)));
            					}
            				}
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TSwitch(e1,_g,this->readExpr());
            			}
            			break;
            			case (int)19: {
HXLINE( 357)				 ::Dynamic e1 = this->readExpr();
HXDLIN( 357)				 ::Dynamic e2 = this->readExpr();
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TWhile(e1,e2,(this->input->readByte() != 0));
            			}
            			break;
            			case (int)20: {
HXLINE( 358)				::String e1 = this->readString();
HXDLIN( 358)				 ::Dynamic f = this->readConst_dyn();
HXDLIN( 358)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 358)				{
HXLINE( 358)					int _g1 = 0;
HXDLIN( 358)					int _g2 = this->readVarInt();
HXDLIN( 358)					while((_g1 < _g2)){
HXLINE( 358)						_g1 = (_g1 + 1);
HXDLIN( 358)						int i = (_g1 - 1);
HXDLIN( 358)						_g->push(f());
            					}
            				}
HXLINE( 322)				e = ::hxsl::TExprDef_obj::TMeta(e1,_g,this->readExpr());
            			}
            			break;
            			default:{
HXLINE( 359)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE( 361)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),e)
            			->setFixed(1,HX_("p",70,00,00,00),null())
            			->setFixed(2,HX_("t",74,00,00,00),this->readType()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,readExpr,return )

 ::Dynamic Serializer_obj::readVar(){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_371_readVar)
HXLINE( 372)		int id = this->readVarInt();
HXLINE( 373)		if ((id == 0)) {
HXLINE( 374)			return null();
            		}
HXLINE( 375)		 ::Dynamic v = this->varMap->get(id);
HXLINE( 376)		if (::hx::IsNotNull( v )) {
HXLINE( 376)			return v;
            		}
HXLINE( 378)		int v1 = ::hxsl::Tools_obj::allocVarId();
HXLINE( 377)		v =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),v1)
            			->setFixed(1,HX_("kind",54,e1,09,47),null())
            			->setFixed(2,HX_("name",4b,72,ff,48),this->readString())
            			->setFixed(3,HX_("type",ba,f2,08,4d),null()));
HXLINE( 383)		this->varMap->set(id,v);
HXLINE( 384)		v->__SetField(HX_("type",ba,f2,08,4d),this->readType(),::hx::paccDynamic);
HXLINE( 385)		v->__SetField(HX_("kind",54,e1,09,47),::hxsl::Serializer_obj::VKINDS->__get(this->input->readByte()).StaticCast<  ::hxsl::VarKind >(),::hx::paccDynamic);
HXLINE( 386)		v->__SetField(HX_("parent",2a,05,7e,ed),this->readVar(),::hx::paccDynamic);
HXLINE( 387)		int nq = this->input->readByte();
HXLINE( 388)		if ((nq > 0)) {
HXLINE( 389)			v->__SetField(HX_("qualifiers",09,bb,6b,7c),::Array_obj< ::Dynamic>::__new(0),::hx::paccDynamic);
HXLINE( 390)			{
HXLINE( 390)				int _g = 0;
HXDLIN( 390)				int _g1 = nq;
HXDLIN( 390)				while((_g < _g1)){
HXLINE( 390)					_g = (_g + 1);
HXDLIN( 390)					int i = (_g - 1);
HXLINE( 391)					int qid = this->input->readByte();
HXLINE( 392)					 ::hxsl::VarQualifier q;
HXDLIN( 392)					switch((int)(qid)){
            						case (int)0: {
HXLINE( 393)							int n = this->input->readInt32();
HXDLIN( 393)							 ::Dynamic q1;
HXDLIN( 393)							if ((n == 0)) {
HXLINE( 393)								q1 = null();
            							}
            							else {
HXLINE( 393)								q1 = n;
            							}
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Const(q1);
            						}
            						break;
            						case (int)1: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Private_dyn();
            						}
            						break;
            						case (int)2: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Nullable_dyn();
            						}
            						break;
            						case (int)3: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::PerObject_dyn();
            						}
            						break;
            						case (int)4: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Name(this->readString());
            						}
            						break;
            						case (int)5: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Shared_dyn();
            						}
            						break;
            						case (int)6: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Precision(::hxsl::Serializer_obj::PRECS->__get(this->input->readByte()).StaticCast<  ::hxsl::Prec >());
            						}
            						break;
            						case (int)7: {
HXLINE( 400)							Float q1 = this->input->readDouble();
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Range(q1,this->input->readDouble());
            						}
            						break;
            						case (int)8: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Ignore_dyn();
            						}
            						break;
            						case (int)9: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::PerInstance(this->input->readInt32());
            						}
            						break;
            						case (int)10: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Doc(this->readString());
            						}
            						break;
            						case (int)11: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Borrow(this->readString());
            						}
            						break;
            						case (int)12: {
HXLINE( 392)							q = ::hxsl::VarQualifier_obj::Sampler(this->readString());
            						}
            						break;
            						default:{
HXLINE( 406)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            						}
            					}
HXLINE( 408)					( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) )->push(q);
            				}
            			}
            		}
HXLINE( 411)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,readVar,return )

 ::Dynamic Serializer_obj::readFun(){
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_417_readFun)
HXLINE( 418)		 ::hxsl::FunctionKind _hx_tmp = ::hxsl::Serializer_obj::FKIND->__get(this->input->readByte()).StaticCast<  ::hxsl::FunctionKind >();
HXLINE( 419)		 ::Dynamic _hx_tmp1 = this->readVar();
HXLINE( 420)		 ::Dynamic f = this->readVar_dyn();
HXDLIN( 420)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 420)		{
HXLINE( 420)			int _g1 = 0;
HXDLIN( 420)			int _g2 = this->readVarInt();
HXDLIN( 420)			while((_g1 < _g2)){
HXLINE( 420)				_g1 = (_g1 + 1);
HXDLIN( 420)				int i = (_g1 - 1);
HXDLIN( 420)				_g->push(f());
            			}
            		}
HXLINE( 421)		 ::hxsl::Type _hx_tmp2 = this->readType();
HXLINE( 417)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("ref",53,d9,56,00),_hx_tmp1)
            			->setFixed(1,HX_("ret",61,d9,56,00),_hx_tmp2)
            			->setFixed(2,HX_("args",5d,8d,74,40),_g)
            			->setFixed(3,HX_("expr",35,fd,1d,43),this->readExpr())
            			->setFixed(4,HX_("kind",54,e1,09,47),_hx_tmp));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,readFun,return )

 ::Dynamic Serializer_obj::unserialize(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_7063d07f46bc7d38_428_unserialize)
HXLINE( 429)		this->input =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,::haxe::crypto::Base64_obj::decode(data,false),null(),null());
HXLINE( 430)		bool _hx_tmp;
HXDLIN( 430)		bool _hx_tmp1;
HXDLIN( 430)		int _hx_tmp2 = this->input->readByte();
HXDLIN( 430)		if ((_hx_tmp2 == (::hxsl::Serializer_obj::SIGN & 255))) {
HXLINE( 430)			int _hx_tmp = this->input->readByte();
HXDLIN( 430)			_hx_tmp1 = (_hx_tmp != ((::hxsl::Serializer_obj::SIGN >> 8) & 255));
            		}
            		else {
HXLINE( 430)			_hx_tmp1 = true;
            		}
HXDLIN( 430)		if (!(_hx_tmp1)) {
HXLINE( 430)			int _hx_tmp1 = this->input->readByte();
HXDLIN( 430)			_hx_tmp = (_hx_tmp1 != ((::hxsl::Serializer_obj::SIGN >> 16) & 255));
            		}
            		else {
HXLINE( 430)			_hx_tmp = true;
            		}
HXDLIN( 430)		if (_hx_tmp) {
HXLINE( 431)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid HXSL data",78,27,d2,ad)));
            		}
HXLINE( 432)		this->varMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 433)		this->types = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 435)		::String _hx_tmp3 = this->readString();
HXLINE( 436)		 ::Dynamic f = this->readVar_dyn();
HXDLIN( 436)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 436)		{
HXLINE( 436)			int _g1 = 0;
HXDLIN( 436)			int _g2 = this->readVarInt();
HXDLIN( 436)			while((_g1 < _g2)){
HXLINE( 436)				_g1 = (_g1 + 1);
HXDLIN( 436)				int i = (_g1 - 1);
HXDLIN( 436)				_g->push(f());
            			}
            		}
HXDLIN( 436)		::Array< ::Dynamic> _hx_tmp4 = _g;
HXLINE( 437)		 ::Dynamic f1 = this->readFun_dyn();
HXDLIN( 437)		::Array< ::Dynamic> _g3 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 437)		{
HXLINE( 437)			int _g4 = 0;
HXDLIN( 437)			int _g5 = this->readVarInt();
HXDLIN( 437)			while((_g4 < _g5)){
HXLINE( 437)				_g4 = (_g4 + 1);
HXDLIN( 437)				int i = (_g4 - 1);
HXDLIN( 437)				_g3->push(f1());
            			}
            		}
HXLINE( 434)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("funs",54,eb,c4,43),_g3)
            			->setFixed(1,HX_("name",4b,72,ff,48),_hx_tmp3)
            			->setFixed(2,HX_("vars",ac,2b,49,4e),_hx_tmp4));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,unserialize,return )

::String Serializer_obj::serialize( ::Dynamic s){
            	HX_GC_STACKFRAME(&_hx_pos_7063d07f46bc7d38_441_serialize)
HXLINE( 442)		this->varMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 443)		this->idMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 444)		this->typeIdMap =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 445)		this->out =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 446)		this->out->b->push((::hxsl::Serializer_obj::SIGN & 255));
HXLINE( 447)		this->out->b->push(((::hxsl::Serializer_obj::SIGN >> 8) & 255));
HXLINE( 448)		this->out->b->push(((::hxsl::Serializer_obj::SIGN >> 16) & 255));
HXLINE( 449)		this->writeString(( (::String)(s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ));
HXLINE( 450)		{
HXLINE( 450)			::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN( 450)			 ::Dynamic f = this->writeVar_dyn();
HXDLIN( 450)			this->writeVarInt(arr->length);
HXDLIN( 450)			{
HXLINE( 450)				int _g = 0;
HXDLIN( 450)				while((_g < arr->length)){
HXLINE( 450)					 ::Dynamic v = arr->__get(_g);
HXDLIN( 450)					_g = (_g + 1);
HXDLIN( 450)					f(v);
            				}
            			}
            		}
HXLINE( 451)		{
HXLINE( 451)			::Array< ::Dynamic> arr1 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN( 451)			 ::Dynamic f1 = this->writeFun_dyn();
HXDLIN( 451)			this->writeVarInt(arr1->length);
HXDLIN( 451)			{
HXLINE( 451)				int _g1 = 0;
HXDLIN( 451)				while((_g1 < arr1->length)){
HXLINE( 451)					 ::Dynamic v = arr1->__get(_g1);
HXDLIN( 451)					_g1 = (_g1 + 1);
HXDLIN( 451)					f1(v);
            				}
            			}
            		}
HXLINE( 452)		return ::haxe::crypto::Base64_obj::encode(this->out->getBytes(),false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,serialize,return )

 ::haxe::ds::IntMap Serializer_obj::TVECS;

::Array< ::Dynamic> Serializer_obj::BOPS;

::Array< ::Dynamic> Serializer_obj::UNOPS;

::Array< ::Dynamic> Serializer_obj::TGLOBALS;

 ::haxe::ds::IntMap Serializer_obj::TSWIZ;

::Array< ::Dynamic> Serializer_obj::REGS;

::Array< ::Dynamic> Serializer_obj::VKINDS;

::Array< ::Dynamic> Serializer_obj::PRECS;

::Array< ::Dynamic> Serializer_obj::FKIND;

int Serializer_obj::SIGN;

::String Serializer_obj::run( ::Dynamic s){
            	HX_GC_STACKFRAME(&_hx_pos_7063d07f46bc7d38_456_run)
HXDLIN( 456)		return  ::hxsl::Serializer_obj::__alloc( HX_CTX )->serialize(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,run,return )


::hx::ObjectPtr< Serializer_obj > Serializer_obj::__new() {
	::hx::ObjectPtr< Serializer_obj > __this = new Serializer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Serializer_obj > Serializer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Serializer_obj *__this = (Serializer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Serializer_obj), true, "hxsl.Serializer"));
	*(void **)__this = Serializer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Serializer_obj::Serializer_obj()
{
}

void Serializer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Serializer);
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(varMap,"varMap");
	HX_MARK_MEMBER_NAME(idMap,"idMap");
	HX_MARK_MEMBER_NAME(typeIdMap,"typeIdMap");
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(tid,"tid");
	HX_MARK_END_CLASS();
}

void Serializer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out,"out");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(varMap,"varMap");
	HX_VISIT_MEMBER_NAME(idMap,"idMap");
	HX_VISIT_MEMBER_NAME(typeIdMap,"typeIdMap");
	HX_VISIT_MEMBER_NAME(types,"types");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(tid,"tid");
}

::hx::Val Serializer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return ::hx::Val( out ); }
		if (HX_FIELD_EQ(inName,"uid") ) { return ::hx::Val( uid ); }
		if (HX_FIELD_EQ(inName,"tid") ) { return ::hx::Val( tid ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"idMap") ) { return ::hx::Val( idMap ); }
		if (HX_FIELD_EQ(inName,"types") ) { return ::hx::Val( types ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { return ::hx::Val( varMap ); }
		if (HX_FIELD_EQ(inName,"readID") ) { return ::hx::Val( readID_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readArr") ) { return ::hx::Val( readArr_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeID") ) { return ::hx::Val( writeID_dyn() ); }
		if (HX_FIELD_EQ(inName,"readVar") ) { return ::hx::Val( readVar_dyn() ); }
		if (HX_FIELD_EQ(inName,"readFun") ) { return ::hx::Val( readFun_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"writeArr") ) { return ::hx::Val( writeArr_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeTID") ) { return ::hx::Val( writeTID_dyn() ); }
		if (HX_FIELD_EQ(inName,"readType") ) { return ::hx::Val( readType_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeVar") ) { return ::hx::Val( writeVar_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeFun") ) { return ::hx::Val( writeFun_dyn() ); }
		if (HX_FIELD_EQ(inName,"readExpr") ) { return ::hx::Val( readExpr_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeIdMap") ) { return ::hx::Val( typeIdMap ); }
		if (HX_FIELD_EQ(inName,"writeType") ) { return ::hx::Val( writeType_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeExpr") ) { return ::hx::Val( writeExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"readConst") ) { return ::hx::Val( readConst_dyn() ); }
		if (HX_FIELD_EQ(inName,"serialize") ) { return ::hx::Val( serialize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readVarInt") ) { return ::hx::Val( readVarInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return ::hx::Val( readString_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeConst") ) { return ::hx::Val( writeConst_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeVarInt") ) { return ::hx::Val( writeVarInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeString") ) { return ::hx::Val( writeString_dyn() ); }
		if (HX_FIELD_EQ(inName,"unserialize") ) { return ::hx::Val( unserialize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Serializer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BOPS") ) { outValue = ( BOPS ); return true; }
		if (HX_FIELD_EQ(inName,"REGS") ) { outValue = ( REGS ); return true; }
		if (HX_FIELD_EQ(inName,"SIGN") ) { outValue = ( SIGN ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"TVECS") ) { outValue = ( TVECS ); return true; }
		if (HX_FIELD_EQ(inName,"UNOPS") ) { outValue = ( UNOPS ); return true; }
		if (HX_FIELD_EQ(inName,"TSWIZ") ) { outValue = ( TSWIZ ); return true; }
		if (HX_FIELD_EQ(inName,"PRECS") ) { outValue = ( PRECS ); return true; }
		if (HX_FIELD_EQ(inName,"FKIND") ) { outValue = ( FKIND ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"VKINDS") ) { outValue = ( VKINDS ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TGLOBALS") ) { outValue = ( TGLOBALS ); return true; }
	}
	return false;
}

::hx::Val Serializer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast<  ::haxe::io::BytesBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tid") ) { tid=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::haxe::io::BytesInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idMap") ) { idMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { varMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeIdMap") ) { typeIdMap=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Serializer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BOPS") ) { BOPS=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"REGS") ) { REGS=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"SIGN") ) { SIGN=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"TVECS") ) { TVECS=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		if (HX_FIELD_EQ(inName,"UNOPS") ) { UNOPS=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"TSWIZ") ) { TSWIZ=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		if (HX_FIELD_EQ(inName,"PRECS") ) { PRECS=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"FKIND") ) { FKIND=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"VKINDS") ) { VKINDS=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TGLOBALS") ) { TGLOBALS=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void Serializer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("out",8e,a0,54,00));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("varMap",f5,ed,8f,53));
	outFields->push(HX_("idMap",81,01,67,b7));
	outFields->push(HX_("typeIdMap",67,5c,3f,7c));
	outFields->push(HX_("types",79,70,cb,1a));
	outFields->push(HX_("uid",90,23,59,00));
	outFields->push(HX_("tid",4f,61,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Serializer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::BytesBuffer */ ,(int)offsetof(Serializer_obj,out),HX_("out",8e,a0,54,00)},
	{::hx::fsObject /*  ::haxe::io::BytesInput */ ,(int)offsetof(Serializer_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Serializer_obj,varMap),HX_("varMap",f5,ed,8f,53)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Serializer_obj,idMap),HX_("idMap",81,01,67,b7)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(Serializer_obj,typeIdMap),HX_("typeIdMap",67,5c,3f,7c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Serializer_obj,types),HX_("types",79,70,cb,1a)},
	{::hx::fsInt,(int)offsetof(Serializer_obj,uid),HX_("uid",90,23,59,00)},
	{::hx::fsInt,(int)offsetof(Serializer_obj,tid),HX_("tid",4f,61,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Serializer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Serializer_obj::TVECS,HX_("TVECS",f3,a9,b5,96)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Serializer_obj::BOPS,HX_("BOPS",10,4d,dc,2b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Serializer_obj::UNOPS,HX_("UNOPS",59,2b,da,24)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Serializer_obj::TGLOBALS,HX_("TGLOBALS",bc,4b,9a,58)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Serializer_obj::TSWIZ,HX_("TSWIZ",e9,b3,c7,94)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Serializer_obj::REGS,HX_("REGS",9f,18,68,36)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Serializer_obj::VKINDS,HX_("VKINDS",69,88,3a,c2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Serializer_obj::PRECS,HX_("PRECS",73,7d,76,46)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Serializer_obj::FKIND,HX_("FKIND",9a,44,d7,7f)},
	{::hx::fsInt,(void *) &Serializer_obj::SIGN,HX_("SIGN",3d,58,14,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Serializer_obj_sMemberFields[] = {
	HX_("out",8e,a0,54,00),
	HX_("input",0a,c4,1d,be),
	HX_("varMap",f5,ed,8f,53),
	HX_("idMap",81,01,67,b7),
	HX_("typeIdMap",67,5c,3f,7c),
	HX_("types",79,70,cb,1a),
	HX_("uid",90,23,59,00),
	HX_("tid",4f,61,58,00),
	HX_("writeArr",c2,5e,ea,23),
	HX_("readArr",ab,a4,c3,02),
	HX_("readVarInt",3e,d4,08,4d),
	HX_("writeVarInt",87,42,86,e8),
	HX_("writeID",7a,e2,35,ab),
	HX_("readID",b1,8c,91,fc),
	HX_("writeTID",b0,a5,f8,23),
	HX_("writeType",39,e7,bc,55),
	HX_("readType",30,cd,00,75),
	HX_("writeString",10,7b,29,a6),
	HX_("readString",c7,0c,ac,0a),
	HX_("writeVar",48,3f,fa,23),
	HX_("writeFun",a0,2c,ee,23),
	HX_("writeConst",04,f4,1f,df),
	HX_("writeExpr",b4,f1,d1,4b),
	HX_("readConst",2d,46,45,1b),
	HX_("readExpr",ab,d7,15,6b),
	HX_("readVar",31,85,d3,02),
	HX_("readFun",89,72,c7,02),
	HX_("unserialize",67,e4,98,7a),
	HX_("serialize",e0,5d,f2,f4),
	::String(null()) };

static void Serializer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Serializer_obj::TVECS,"TVECS");
	HX_MARK_MEMBER_NAME(Serializer_obj::BOPS,"BOPS");
	HX_MARK_MEMBER_NAME(Serializer_obj::UNOPS,"UNOPS");
	HX_MARK_MEMBER_NAME(Serializer_obj::TGLOBALS,"TGLOBALS");
	HX_MARK_MEMBER_NAME(Serializer_obj::TSWIZ,"TSWIZ");
	HX_MARK_MEMBER_NAME(Serializer_obj::REGS,"REGS");
	HX_MARK_MEMBER_NAME(Serializer_obj::VKINDS,"VKINDS");
	HX_MARK_MEMBER_NAME(Serializer_obj::PRECS,"PRECS");
	HX_MARK_MEMBER_NAME(Serializer_obj::FKIND,"FKIND");
	HX_MARK_MEMBER_NAME(Serializer_obj::SIGN,"SIGN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Serializer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Serializer_obj::TVECS,"TVECS");
	HX_VISIT_MEMBER_NAME(Serializer_obj::BOPS,"BOPS");
	HX_VISIT_MEMBER_NAME(Serializer_obj::UNOPS,"UNOPS");
	HX_VISIT_MEMBER_NAME(Serializer_obj::TGLOBALS,"TGLOBALS");
	HX_VISIT_MEMBER_NAME(Serializer_obj::TSWIZ,"TSWIZ");
	HX_VISIT_MEMBER_NAME(Serializer_obj::REGS,"REGS");
	HX_VISIT_MEMBER_NAME(Serializer_obj::VKINDS,"VKINDS");
	HX_VISIT_MEMBER_NAME(Serializer_obj::PRECS,"PRECS");
	HX_VISIT_MEMBER_NAME(Serializer_obj::FKIND,"FKIND");
	HX_VISIT_MEMBER_NAME(Serializer_obj::SIGN,"SIGN");
};

#endif

::hx::Class Serializer_obj::__mClass;

static ::String Serializer_obj_sStaticFields[] = {
	HX_("TVECS",f3,a9,b5,96),
	HX_("BOPS",10,4d,dc,2b),
	HX_("UNOPS",59,2b,da,24),
	HX_("TGLOBALS",bc,4b,9a,58),
	HX_("TSWIZ",e9,b3,c7,94),
	HX_("REGS",9f,18,68,36),
	HX_("VKINDS",69,88,3a,c2),
	HX_("PRECS",73,7d,76,46),
	HX_("FKIND",9a,44,d7,7f),
	HX_("SIGN",3d,58,14,37),
	HX_("run",4b,e7,56,00),
	::String(null())
};

void Serializer_obj::__register()
{
	Serializer_obj _hx_dummy;
	Serializer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Serializer",57,ab,7a,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Serializer_obj::__GetStatic;
	__mClass->mSetStaticField = &Serializer_obj::__SetStatic;
	__mClass->mMarkFunc = Serializer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Serializer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Serializer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Serializer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Serializer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Serializer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Serializer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Serializer_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_7063d07f46bc7d38_101_boot)
HXDLIN( 101)		TVECS =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::Array< ::Dynamic> _hx_run(){
            			HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_308_boot)
HXLINE( 309)			::Array< ::Dynamic> ops = ::Type_obj::allEnums(::hx::ClassOf< ::haxe::macro::Binop >());
HXLINE( 310)			ops->insert(_hx_getEnumValueIndex(::haxe::macro::Binop_obj::OpAssignOp(null())),null());
HXLINE( 311)			return ops;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_308_boot)
HXDLIN( 308)		BOPS = ( (::Array< ::Dynamic>)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_313_boot)
HXDLIN( 313)		UNOPS = ::Type_obj::allEnums(::hx::ClassOf< ::haxe::macro::Unop >());
            	}
{
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_314_boot)
HXDLIN( 314)		TGLOBALS = ::Type_obj::allEnums(::hx::ClassOf< ::hxsl::TGlobal >());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7063d07f46bc7d38_315_boot)
HXDLIN( 315)		TSWIZ =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_316_boot)
HXDLIN( 316)		REGS = ::Array_obj< ::Dynamic>::__new(4)->init(0,::hxsl::Component_obj::X_dyn())->init(1,::hxsl::Component_obj::Y_dyn())->init(2,::hxsl::Component_obj::Z_dyn())->init(3,::hxsl::Component_obj::W_dyn());
            	}
{
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_368_boot)
HXDLIN( 368)		VKINDS = ::Type_obj::allEnums(::hx::ClassOf< ::hxsl::VarKind >());
            	}
{
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_369_boot)
HXDLIN( 369)		PRECS = ::Type_obj::allEnums(::hx::ClassOf< ::hxsl::Prec >());
            	}
{
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_414_boot)
HXDLIN( 414)		FKIND = ::Type_obj::allEnums(::hx::ClassOf< ::hxsl::FunctionKind >());
            	}
{
            	HX_STACKFRAME(&_hx_pos_7063d07f46bc7d38_426_boot)
HXDLIN( 426)		SIGN = 9139229;
            	}
}

} // end namespace hxsl
