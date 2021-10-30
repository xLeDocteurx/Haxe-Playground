#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
#ifndef INCLUDED_hxsl_Channel
#include <hxsl/Channel.h>
#endif
#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
#ifndef INCLUDED_hxsl_Const
#include <hxsl/Const.h>
#endif
#ifndef INCLUDED_hxsl_Error
#include <hxsl/Error.h>
#endif
#ifndef INCLUDED_hxsl_Eval
#include <hxsl/Eval.h>
#endif
#ifndef INCLUDED_hxsl_FunctionKind
#include <hxsl/FunctionKind.h>
#endif
#ifndef INCLUDED_hxsl_Printer
#include <hxsl/Printer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_93539d952bd1dc4c_19_new,"hxsl.Eval","new",0xbec1c413,"hxsl.Eval.new","hxsl/Eval.hx",19,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_26_setConstant,"hxsl.Eval","setConstant",0xeee3e9d9,"hxsl.Eval.setConstant","hxsl/Eval.hx",26,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_29_mapVar,"hxsl.Eval","mapVar",0x11eb33d8,"hxsl.Eval.mapVar","hxsl/Eval.hx",29,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_73_checkSamplerRec,"hxsl.Eval","checkSamplerRec",0xa0673c43,"hxsl.Eval.checkSamplerRec","hxsl/Eval.hx",73,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_91_needsInline,"hxsl.Eval","needsInline",0x62c45849,"hxsl.Eval.needsInline","hxsl/Eval.hx",91,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_98_eval,"hxsl.Eval","eval",0x24e3b489,"hxsl.Eval.eval","hxsl/Eval.hx",98,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_126_hasReturn,"hxsl.Eval","hasReturn",0x0b7e939d,"hxsl.Eval.hasReturn","hxsl/Eval.hx",126,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_133_hasReturnLoop,"hxsl.Eval","hasReturnLoop",0x223df8a1,"hxsl.Eval.hasReturnLoop","hxsl/Eval.hx",133,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_142_handleReturn,"hxsl.Eval","handleReturn",0x07274865,"hxsl.Eval.handleReturn","hxsl/Eval.hx",142,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_182_handleReturnDef,"hxsl.Eval","handleReturnDef",0x858c3660,"hxsl.Eval.handleReturnDef","hxsl/Eval.hx",182,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_186_evalCall,"hxsl.Eval","evalCall",0x014671c7,"hxsl.Eval.evalCall","hxsl/Eval.hx",186,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_239_constantsToString,"hxsl.Eval","constantsToString",0x9c8d914e,"hxsl.Eval.constantsToString","hxsl/Eval.hx",239,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_242_ifBlock,"hxsl.Eval","ifBlock",0x877bb163,"hxsl.Eval.ifBlock","hxsl/Eval.hx",242,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_248_evalExpr,"hxsl.Eval","evalExpr",0x02aa565e,"hxsl.Eval.evalExpr","hxsl/Eval.hx",248,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_291_evalExpr,"hxsl.Eval","evalExpr",0x02aa565e,"hxsl.Eval.evalExpr","hxsl/Eval.hx",291,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_296_evalExpr,"hxsl.Eval","evalExpr",0x02aa565e,"hxsl.Eval.evalExpr","hxsl/Eval.hx",296,0x826010dc)
HX_LOCAL_STACK_FRAME(_hx_pos_93539d952bd1dc4c_299_evalExpr,"hxsl.Eval","evalExpr",0x02aa565e,"hxsl.Eval.evalExpr","hxsl/Eval.hx",299,0x826010dc)
namespace hxsl{

void Eval_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_93539d952bd1dc4c_19_new)
HXLINE(  20)		this->varMap =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  21)		this->funMap =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  22)		this->constants =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic Eval_obj::__CreateEmpty() { return new Eval_obj; }

void *Eval_obj::_hx_vtable = 0;

Dynamic Eval_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Eval_obj > _hx_result = new Eval_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Eval_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17ca95a5;
}

void Eval_obj::setConstant( ::Dynamic v, ::hxsl::Const c){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_26_setConstant)
HXDLIN(  26)		this->constants->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),::hxsl::TExprDef_obj::TConst(c));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Eval_obj,setConstant,(void))

 ::Dynamic Eval_obj::mapVar( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_29_mapVar)
HXLINE(  30)		 ::Dynamic v2 = this->varMap->get(v);
HXLINE(  31)		if (::hx::IsNotNull( v2 )) {
HXLINE(  32)			if (::hx::IsEq( v,v2 )) {
HXLINE(  32)				return v2;
            			}
            			else {
HXLINE(  32)				return this->mapVar(v2);
            			}
            		}
HXLINE(  34)		if (::hx::IsNotNull( v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) )) {
HXLINE(  35)			this->mapVar(v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic));
HXLINE(  36)			v2 = this->varMap->get(v);
HXLINE(  37)			if (::hx::IsNotNull( v2 )) {
HXLINE(  38)				if (::hx::IsEq( v,v2 )) {
HXLINE(  38)					return v2;
            				}
            				else {
HXLINE(  38)					return this->mapVar(v2);
            				}
            			}
            		}
HXLINE(  42)		int v21;
HXDLIN(  42)		 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  42)		bool v22;
HXDLIN(  42)		if ((_g->_hx_getIndex() == 17)) {
HXLINE(  42)			int _g1 = _g->_hx_getInt(0);
HXDLIN(  42)			v22 = true;
            		}
            		else {
HXLINE(  42)			v22 = false;
            		}
HXDLIN(  42)		if (v22) {
HXLINE(  42)			v21 = ( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  42)			v21 = ::hxsl::Tools_obj::allocVarId();
            		}
HXLINE(  41)		v2 =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),v21)
            			->setFixed(1,HX_("kind",54,e1,09,47), ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)))
            			->setFixed(2,HX_("name",4b,72,ff,48), ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))
            			->setFixed(3,HX_("type",ba,f2,08,4d), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXLINE(  48)		if (::hx::IsNotNull( v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) )) {
HXLINE(  48)			v2->__SetField(HX_("parent",2a,05,7e,ed),this->mapVar(v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic)),::hx::paccDynamic);
            		}
HXLINE(  49)		if (::hx::IsNotNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE(  49)			v2->__SetField(HX_("qualifiers",09,bb,6b,7c),( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) )->copy(),::hx::paccDynamic);
            		}
HXLINE(  50)		this->varMap->set(v,v2);
HXLINE(  51)		this->varMap->set(v2,v2);
HXLINE(  52)		{
HXLINE(  52)			 ::hxsl::Type _g1 = v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  52)			switch((int)(_g1->_hx_getIndex())){
            				case (int)13: {
HXLINE(  53)					::Array< ::Dynamic> vl = _g1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  54)					::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  54)					{
HXLINE(  54)						int _g2 = 0;
HXDLIN(  54)						while((_g2 < vl->length)){
HXLINE(  54)							 ::Dynamic v = vl->__get(_g2);
HXDLIN(  54)							_g2 = (_g2 + 1);
HXDLIN(  54)							_g->push(this->mapVar(v));
            						}
            					}
HXDLIN(  54)					v2->__SetField(HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TStruct(_g),::hx::paccDynamic);
            				}
            				break;
            				case (int)15: {
HXLINE(  55)					 ::hxsl::SizeDecl _g = _g1->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  55)					if ((_g->_hx_getIndex() == 1)) {
HXLINE(  55)						 ::Dynamic vs = _g->_hx_getObject(0);
HXDLIN(  55)						 ::hxsl::Type t = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  55)						{
HXLINE(  56)							 ::hxsl::TExprDef c = this->constants->get( ::Dynamic(vs->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
HXLINE(  57)							if (::hx::IsNotNull( c )) {
HXLINE(  58)								if (::hx::IsNull( c )) {
HXLINE(  62)									::hxsl::Error_obj::t(( (::String)((HX_("Integer value expected for array size constant ",f2,d2,7f,f3) + vs->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) ),null());
            								}
            								else {
HXLINE(  58)									if ((c->_hx_getIndex() == 0)) {
HXLINE(  59)										 ::hxsl::Const _g = c->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN(  59)										if ((_g->_hx_getIndex() == 2)) {
HXLINE(  59)											int v = _g->_hx_getInt(0);
HXLINE(  60)											 ::hxsl::Type _hx_tmp;
HXDLIN(  60)											 ::hxsl::Type _g1 = v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  60)											bool _hx_tmp1;
HXDLIN(  60)											if ((_g1->_hx_getIndex() == 15)) {
HXLINE(  60)												 ::hxsl::Type _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  60)												 ::hxsl::SizeDecl _g2 = _g1->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  60)												_hx_tmp1 = true;
            											}
            											else {
HXLINE(  60)												_hx_tmp1 = false;
            											}
HXDLIN(  60)											if (_hx_tmp1) {
HXLINE(  60)												_hx_tmp = ::hxsl::Type_obj::TArray(t,::hxsl::SizeDecl_obj::SConst(v));
            											}
            											else {
HXLINE(  60)												_hx_tmp = ::hxsl::Type_obj::TBuffer(t,::hxsl::SizeDecl_obj::SConst(v));
            											}
HXDLIN(  60)											v2->__SetField(HX_("type",ba,f2,08,4d),_hx_tmp,::hx::paccDynamic);
            										}
            										else {
HXLINE(  62)											::hxsl::Error_obj::t(( (::String)((HX_("Integer value expected for array size constant ",f2,d2,7f,f3) + vs->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) ),null());
            										}
            									}
            									else {
HXLINE(  62)										::hxsl::Error_obj::t(( (::String)((HX_("Integer value expected for array size constant ",f2,d2,7f,f3) + vs->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) ),null());
            									}
            								}
            							}
            							else {
HXLINE(  65)								 ::Dynamic vs2 = this->mapVar(vs);
HXLINE(  66)								 ::hxsl::Type _hx_tmp;
HXDLIN(  66)								 ::hxsl::Type _g = v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  66)								bool _hx_tmp1;
HXDLIN(  66)								if ((_g->_hx_getIndex() == 15)) {
HXLINE(  66)									 ::hxsl::Type _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  66)									 ::hxsl::SizeDecl _g2 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  66)									_hx_tmp1 = true;
            								}
            								else {
HXLINE(  66)									_hx_tmp1 = false;
            								}
HXDLIN(  66)								if (_hx_tmp1) {
HXLINE(  66)									_hx_tmp = ::hxsl::Type_obj::TArray(t,::hxsl::SizeDecl_obj::SVar(vs2));
            								}
            								else {
HXLINE(  66)									_hx_tmp = ::hxsl::Type_obj::TBuffer(t,::hxsl::SizeDecl_obj::SVar(vs2));
            								}
HXDLIN(  66)								v2->__SetField(HX_("type",ba,f2,08,4d),_hx_tmp,::hx::paccDynamic);
            							}
            						}
            					}
            				}
            				break;
            				case (int)16: {
HXLINE(  55)					 ::hxsl::SizeDecl _g = _g1->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  55)					if ((_g->_hx_getIndex() == 1)) {
HXLINE(  55)						 ::Dynamic vs = _g->_hx_getObject(0);
HXDLIN(  55)						 ::hxsl::Type t = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  55)						{
HXLINE(  56)							 ::hxsl::TExprDef c = this->constants->get( ::Dynamic(vs->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
HXLINE(  57)							if (::hx::IsNotNull( c )) {
HXLINE(  58)								if (::hx::IsNull( c )) {
HXLINE(  62)									::hxsl::Error_obj::t(( (::String)((HX_("Integer value expected for array size constant ",f2,d2,7f,f3) + vs->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) ),null());
            								}
            								else {
HXLINE(  58)									if ((c->_hx_getIndex() == 0)) {
HXLINE(  59)										 ::hxsl::Const _g = c->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN(  59)										if ((_g->_hx_getIndex() == 2)) {
HXLINE(  59)											int v = _g->_hx_getInt(0);
HXLINE(  60)											 ::hxsl::Type _hx_tmp;
HXDLIN(  60)											 ::hxsl::Type _g1 = v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  60)											bool _hx_tmp1;
HXDLIN(  60)											if ((_g1->_hx_getIndex() == 15)) {
HXLINE(  60)												 ::hxsl::Type _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  60)												 ::hxsl::SizeDecl _g2 = _g1->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  60)												_hx_tmp1 = true;
            											}
            											else {
HXLINE(  60)												_hx_tmp1 = false;
            											}
HXDLIN(  60)											if (_hx_tmp1) {
HXLINE(  60)												_hx_tmp = ::hxsl::Type_obj::TArray(t,::hxsl::SizeDecl_obj::SConst(v));
            											}
            											else {
HXLINE(  60)												_hx_tmp = ::hxsl::Type_obj::TBuffer(t,::hxsl::SizeDecl_obj::SConst(v));
            											}
HXDLIN(  60)											v2->__SetField(HX_("type",ba,f2,08,4d),_hx_tmp,::hx::paccDynamic);
            										}
            										else {
HXLINE(  62)											::hxsl::Error_obj::t(( (::String)((HX_("Integer value expected for array size constant ",f2,d2,7f,f3) + vs->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) ),null());
            										}
            									}
            									else {
HXLINE(  62)										::hxsl::Error_obj::t(( (::String)((HX_("Integer value expected for array size constant ",f2,d2,7f,f3) + vs->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) ),null());
            									}
            								}
            							}
            							else {
HXLINE(  65)								 ::Dynamic vs2 = this->mapVar(vs);
HXLINE(  66)								 ::hxsl::Type _hx_tmp;
HXDLIN(  66)								 ::hxsl::Type _g = v2->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  66)								bool _hx_tmp1;
HXDLIN(  66)								if ((_g->_hx_getIndex() == 15)) {
HXLINE(  66)									 ::hxsl::Type _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  66)									 ::hxsl::SizeDecl _g2 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  66)									_hx_tmp1 = true;
            								}
            								else {
HXLINE(  66)									_hx_tmp1 = false;
            								}
HXDLIN(  66)								if (_hx_tmp1) {
HXLINE(  66)									_hx_tmp = ::hxsl::Type_obj::TArray(t,::hxsl::SizeDecl_obj::SVar(vs2));
            								}
            								else {
HXLINE(  66)									_hx_tmp = ::hxsl::Type_obj::TBuffer(t,::hxsl::SizeDecl_obj::SVar(vs2));
            								}
HXDLIN(  66)								v2->__SetField(HX_("type",ba,f2,08,4d),_hx_tmp,::hx::paccDynamic);
            							}
            						}
            					}
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE(  70)		return v2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eval_obj,mapVar,return )

bool Eval_obj::checkSamplerRec( ::hxsl::Type t){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_73_checkSamplerRec)
HXLINE(  74)		if (::hxsl::Tools_obj::isSampler(t)) {
HXLINE(  75)			return true;
            		}
HXLINE(  76)		switch((int)(t->_hx_getIndex())){
            			case (int)13: {
HXLINE(  77)				::Array< ::Dynamic> vl = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  78)				{
HXLINE(  78)					int _g = 0;
HXDLIN(  78)					while((_g < vl->length)){
HXLINE(  78)						 ::Dynamic v = vl->__get(_g);
HXDLIN(  78)						_g = (_g + 1);
HXLINE(  79)						if (this->checkSamplerRec(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))) {
HXLINE(  80)							return true;
            						}
            					}
            				}
HXLINE(  81)				return false;
            			}
            			break;
            			case (int)15: {
HXLINE(  82)				 ::hxsl::SizeDecl _g = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN(  82)				 ::hxsl::Type t1 = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXLINE(  83)				return this->checkSamplerRec(t1);
            			}
            			break;
            			case (int)16: {
HXLINE(  84)				 ::hxsl::Type _g = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN(  84)				 ::hxsl::SizeDecl size = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXLINE(  85)				return true;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE(  88)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eval_obj,checkSamplerRec,return )

bool Eval_obj::needsInline( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_91_needsInline)
HXLINE(  92)		{
HXLINE(  92)			int _g = 0;
HXDLIN(  92)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXDLIN(  92)			while((_g < _g1->length)){
HXLINE(  92)				 ::Dynamic a = _g1->__get(_g);
HXDLIN(  92)				_g = (_g + 1);
HXLINE(  93)				if (this->checkSamplerRec(a->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))) {
HXLINE(  94)					return true;
            				}
            			}
            		}
HXLINE(  95)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eval_obj,needsInline,return )

 ::Dynamic Eval_obj::eval( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_98_eval)
HXLINE(  99)		::Array< ::Dynamic> funs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 100)		{
HXLINE( 100)			int _g = 0;
HXDLIN( 100)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN( 100)			while((_g < _g1->length)){
HXLINE( 100)				 ::Dynamic f = _g1->__get(_g);
HXDLIN( 100)				_g = (_g + 1);
HXLINE( 102)				 ::hxsl::FunctionKind f1 = f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic);
HXLINE( 103)				 ::Dynamic f2 = this->mapVar(f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic));
HXLINE( 104)				::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 104)				{
HXLINE( 104)					int _g3 = 0;
HXDLIN( 104)					::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXDLIN( 104)					while((_g3 < _g4->length)){
HXLINE( 104)						 ::Dynamic a = _g4->__get(_g3);
HXDLIN( 104)						_g3 = (_g3 + 1);
HXDLIN( 104)						_g2->push(this->mapVar(a));
            					}
            				}
HXLINE( 101)				 ::Dynamic f21 =  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("ref",53,d9,56,00),f2)
            					->setFixed(1,HX_("ret",61,d9,56,00), ::Dynamic(f->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic)))
            					->setFixed(2,HX_("args",5d,8d,74,40),_g2)
            					->setFixed(3,HX_("expr",35,fd,1d,43), ::Dynamic(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)))
            					->setFixed(4,HX_("kind",54,e1,09,47),f1));
HXLINE( 108)				bool _hx_tmp;
HXDLIN( 108)				bool _hx_tmp1;
HXDLIN( 108)				if (::hx::IsPointerEq( f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::FunctionKind_obj::Helper_dyn() )) {
HXLINE( 108)					_hx_tmp1 = this->inlineCalls;
            				}
            				else {
HXLINE( 108)					_hx_tmp1 = false;
            				}
HXDLIN( 108)				if (!(_hx_tmp1)) {
HXLINE( 108)					_hx_tmp = this->needsInline(f21);
            				}
            				else {
HXLINE( 108)					_hx_tmp = true;
            				}
HXDLIN( 108)				if (_hx_tmp) {
HXLINE( 109)					this->funMap->set( ::Dynamic(f21->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic)),f);
            				}
            				else {
HXLINE( 111)					funs->push(f21);
            				}
            			}
            		}
HXLINE( 113)		{
HXLINE( 113)			int _g2 = 0;
HXDLIN( 113)			int _g3 = funs->length;
HXDLIN( 113)			while((_g2 < _g3)){
HXLINE( 113)				_g2 = (_g2 + 1);
HXDLIN( 113)				int i = (_g2 - 1);
HXLINE( 114)				this->curFun = funs->__get(i);
HXLINE( 115)				this->curFun->__SetField(HX_("expr",35,fd,1d,43),this->evalExpr(this->curFun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),false),::hx::paccDynamic);
            			}
            		}
HXLINE( 118)		::String s1 = ( (::String)(s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 119)		::Array< ::Dynamic> _g4 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 119)		{
HXLINE( 119)			int _g5 = 0;
HXDLIN( 119)			::Array< ::Dynamic> _g6 = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN( 119)			while((_g5 < _g6->length)){
HXLINE( 119)				 ::Dynamic v = _g6->__get(_g5);
HXDLIN( 119)				_g5 = (_g5 + 1);
HXDLIN( 119)				_g4->push(this->mapVar(v));
            			}
            		}
HXLINE( 117)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("funs",54,eb,c4,43),funs)
            			->setFixed(1,HX_("name",4b,72,ff,48),s1)
            			->setFixed(2,HX_("vars",ac,2b,49,4e),_g4));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eval_obj,eval,return )

bool Eval_obj::hasReturn( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_126_hasReturn)
HXLINE( 127)		this->markReturn = false;
HXLINE( 128)		this->hasReturnLoop(e);
HXLINE( 129)		return this->markReturn;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eval_obj,hasReturn,return )

void Eval_obj::hasReturnLoop( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_133_hasReturnLoop)
HXDLIN( 133)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 133)		if ((_g->_hx_getIndex() == 12)) {
HXLINE( 134)			 ::Dynamic _g1 = _g->_hx_getObject(0);
HXLINE( 135)			this->markReturn = true;
            		}
            		else {
HXLINE( 137)			if (!(this->markReturn)) {
HXLINE( 137)				::hxsl::Tools_obj::iter(e,this->hasReturnLoop_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eval_obj,hasReturnLoop,(void))

 ::Dynamic Eval_obj::handleReturn( ::Dynamic e,::hx::Null< bool >  __o_isFinal){
            		bool isFinal = __o_isFinal.Default(false);
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_142_handleReturn)
HXDLIN( 142)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 142)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
HXLINE( 169)				 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 170)				 ::Dynamic v1 = this->handleReturn(v,isFinal);
HXLINE( 171)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TParenthesis(v1))
            					->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            					->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            			}
            			break;
            			case (int)4: {
HXLINE( 149)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 150)				int i = 0;
HXDLIN( 150)				int last = el->length;
HXLINE( 151)				::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 152)				while((i < last)){
HXLINE( 153)					i = (i + 1);
HXDLIN( 153)					 ::Dynamic e = el->__get((i - 1));
HXLINE( 154)					if ((i == last)) {
HXLINE( 155)						out->push(this->handleReturn(e,isFinal));
            					}
            					else {
HXLINE( 156)						 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 156)						switch((int)(_g->_hx_getIndex())){
            							case (int)10: {
HXLINE( 157)								if (::hx::IsNull( _g->_hx_getObject(2) )) {
HXLINE( 157)									 ::Dynamic eif = _g->_hx_getObject(1);
HXDLIN( 157)									 ::Dynamic econd = _g->_hx_getObject(0);
HXDLIN( 157)									bool _hx_tmp;
HXDLIN( 157)									if (isFinal) {
HXLINE( 157)										_hx_tmp = this->hasReturn(eif);
            									}
            									else {
HXLINE( 157)										_hx_tmp = false;
            									}
HXDLIN( 157)									if (_hx_tmp) {
HXLINE( 158)										 ::hxsl::TExprDef _hx_tmp = ::hxsl::TExprDef_obj::TBlock(el->slice(i,null()));
HXDLIN( 158)										out->push(this->handleReturn( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TIf(econd,eif, ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),_hx_tmp)
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))))))
            											->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            											->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)))),null()));
HXLINE( 159)										goto _hx_goto_15;
            									}
            									else {
HXLINE( 164)										out->push(this->handleReturn(e,null()));
            									}
            								}
            								else {
HXLINE( 164)									out->push(this->handleReturn(e,null()));
            								}
            							}
            							break;
            							case (int)12: {
HXLINE( 160)								 ::Dynamic e = _g->_hx_getObject(0);
HXLINE( 161)								out->push(this->handleReturn(e,isFinal));
HXLINE( 162)								goto _hx_goto_15;
            							}
            							break;
            							default:{
HXLINE( 164)								out->push(this->handleReturn(e,null()));
            							}
            						}
            					}
            				}
            				_hx_goto_15:;
HXLINE( 167)				 ::hxsl::Type t;
HXDLIN( 167)				if (isFinal) {
HXLINE( 167)					t = out->__get((out->length - 1))->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            				}
            				else {
HXLINE( 167)					t = e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            				}
HXLINE( 168)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBlock(out))
            					->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            					->setFixed(2,HX_("t",74,00,00,00),t));
            			}
            			break;
            			case (int)10: {
HXLINE( 172)				 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 172)				 ::Dynamic eif = _g->_hx_getObject(1);
HXDLIN( 172)				 ::Dynamic eelse = _g->_hx_getObject(2);
HXDLIN( 172)				bool _hx_tmp;
HXDLIN( 172)				if (::hx::IsNotNull( eelse )) {
HXLINE( 172)					_hx_tmp = isFinal;
            				}
            				else {
HXLINE( 172)					_hx_tmp = false;
            				}
HXDLIN( 172)				if (_hx_tmp) {
HXLINE( 173)					 ::Dynamic cond1 = this->handleReturn(cond,null());
HXLINE( 174)					 ::Dynamic eif1 = this->handleReturn(eif,isFinal);
HXLINE( 175)					 ::hxsl::TExprDef _hx_tmp = ::hxsl::TExprDef_obj::TIf(cond1,eif1,this->handleReturn(eelse,isFinal));
HXDLIN( 175)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),_hx_tmp)
            						->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            						->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(eif1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            				}
            				else {
HXLINE( 177)					return ::hxsl::Tools_obj::map(e,this->handleReturnDef_dyn());
            				}
            			}
            			break;
            			case (int)12: {
HXLINE( 143)				 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 144)				if (!(isFinal)) {
HXLINE( 145)					::hxsl::Error_obj::t(HX_("Cannot inline not final return",f1,18,72,e6),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            				}
HXLINE( 146)				if (::hx::IsNull( v )) {
HXLINE( 147)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBlock(::Array_obj< ::Dynamic>::__new(0)))
            						->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
            				}
HXLINE( 148)				return this->handleReturn(v,true);
            			}
            			break;
            			default:{
HXLINE( 177)				return ::hxsl::Tools_obj::map(e,this->handleReturnDef_dyn());
            			}
            		}
HXLINE( 142)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Eval_obj,handleReturn,return )

 ::Dynamic Eval_obj::handleReturnDef( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_182_handleReturnDef)
HXDLIN( 182)		return this->handleReturn(e,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eval_obj,handleReturnDef,return )

 ::hxsl::TExprDef Eval_obj::evalCall( ::hxsl::TGlobal g,::Array< ::Dynamic> args,::Array< ::Dynamic> oldArgs, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_186_evalCall)
HXDLIN( 186)		switch((int)(g->_hx_getIndex())){
            			case (int)38: {
HXDLIN( 186)				if ((args->length == 1)) {
HXDLIN( 186)					 ::Dynamic _g = args->__get(0);
HXDLIN( 186)					 ::hxsl::TExprDef _g1 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 186)					 ::Dynamic _g2 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 186)					 ::hxsl::Type _g3 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 186)					if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 187)						 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 187)						if ((_g->_hx_getIndex() == 2)) {
HXLINE( 187)							int i = _g->_hx_getInt(0);
HXDLIN( 187)							return ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CFloat(i));
            						}
            						else {
HXLINE( 234)							return null();
            						}
            					}
            					else {
HXLINE( 234)						return null();
            					}
            				}
            				else {
HXLINE( 234)					return null();
            				}
            			}
            			break;
            			case (int)63: case (int)64: {
HXLINE( 193)				int i;
HXDLIN( 193)				 ::hxsl::TExprDef _g = args->__get(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 193)				if ((_g->_hx_getIndex() == 0)) {
HXLINE( 193)					 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 193)					if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 193)						int i1 = _g1->_hx_getInt(0);
HXDLIN( 193)						i = i1;
            					}
            					else {
HXLINE( 193)						::String i = ((HX_("Cannot eval complex channel ",34,e4,54,27) + ::hxsl::Printer_obj::toString(args->__get(0),true)) + HX_(" ",20,00,00,00));
HXDLIN( 193)						::hxsl::Error_obj::t((i + this->constantsToString()),pos);
HXDLIN( 193)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
            				}
            				else {
HXLINE( 193)					::String i = ((HX_("Cannot eval complex channel ",34,e4,54,27) + ::hxsl::Printer_obj::toString(args->__get(0),true)) + HX_(" ",20,00,00,00));
HXDLIN( 193)					::hxsl::Error_obj::t((i + this->constantsToString()),pos);
HXDLIN( 193)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
HXLINE( 194)				 ::Dynamic channel = oldArgs->__get(0);
HXLINE( 195)				 ::hxsl::TExprDef _g1 = channel->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 195)				 ::hxsl::TExprDef channel1;
HXDLIN( 195)				if ((_g1->_hx_getIndex() == 1)) {
HXLINE( 196)					 ::Dynamic v = _g1->_hx_getObject(0);
HXLINE( 195)					channel1 = ::hxsl::TExprDef_obj::TVar(this->mapVar(v));
            				}
            				else {
HXLINE( 197)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
HXLINE( 195)				channel =  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),channel1)
            					->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(channel->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            					->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(channel->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
HXLINE( 199)				int count;
HXDLIN( 199)				 ::hxsl::Type _g2 = channel->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 199)				if ((_g2->_hx_getIndex() == 17)) {
HXLINE( 199)					int i = _g2->_hx_getInt(0);
HXDLIN( 199)					count = i;
            				}
            				else {
HXLINE( 199)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
HXLINE( 200)				::cpp::VirtualArray params = null();
HXDLIN( 200)				 ::hxsl::Channel channelMode = ::Type_obj::createEnumIndex(::hx::ClassOf< ::hxsl::Channel >(),(i & 7),params);
HXLINE( 201)				::Array< ::Dynamic> targs = ::Array_obj< ::Dynamic>::__new(1)->init(0,channel);
HXLINE( 202)				{
HXLINE( 202)					int _g3 = 1;
HXDLIN( 202)					int _g4 = args->length;
HXDLIN( 202)					while((_g3 < _g4)){
HXLINE( 202)						_g3 = (_g3 + 1);
HXDLIN( 202)						int i = (_g3 - 1);
HXLINE( 203)						targs->push(args->__get(i));
            					}
            				}
HXLINE( 204)				targs->push( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((i >> 3))))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn())));
HXLINE( 205)				 ::Dynamic tget =  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(g))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),targs))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXLINE( 210)				switch((int)(channelMode->_hx_getIndex())){
            					case (int)0: {
HXLINE( 225)						 ::Dynamic zero =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CFloat(((Float)0.))))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn()));
HXLINE( 226)						if ((count == 1)) {
HXLINE( 227)							return zero->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            						}
HXLINE( 228)						return ::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::Array_obj< ::Dynamic>::__new(3)->init(0,::hxsl::TGlobal_obj::Vec2_dyn())->init(1,::hxsl::TGlobal_obj::Vec3_dyn())->init(2,::hxsl::TGlobal_obj::Vec4_dyn())->__get((count - 2)).StaticCast<  ::hxsl::TGlobal >()))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),::Array_obj< ::Dynamic>::__new(1)->init(0,zero));
            					}
            					break;
            					case (int)1: case (int)2: case (int)3: case (int)4: {
HXLINE( 212)						::Array< ::Dynamic> _hx_tmp;
HXDLIN( 212)						switch((int)(count)){
            							case (int)1: {
HXLINE( 212)								switch((int)(channelMode->_hx_getIndex())){
            									case (int)1: {
HXLINE( 212)										_hx_tmp = ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Component_obj::X_dyn());
            									}
            									break;
            									case (int)2: {
HXLINE( 212)										_hx_tmp = ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Component_obj::Y_dyn());
            									}
            									break;
            									case (int)3: {
HXLINE( 212)										_hx_tmp = ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Component_obj::Z_dyn());
            									}
            									break;
            									case (int)4: {
HXLINE( 212)										_hx_tmp = ::Array_obj< ::Dynamic>::__new(1)->init(0,::hxsl::Component_obj::W_dyn());
            									}
            									break;
            									default:{
HXLINE( 222)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Invalid channel value ",75,88,00,3a) + ::Std_obj::string(channelMode)) + HX_(" for ",17,f1,92,b0)) + count) + HX_(" channels",70,ca,1b,c9))));
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 212)								switch((int)(channelMode->_hx_getIndex())){
            									case (int)1: {
HXLINE( 212)										_hx_tmp = ::Array_obj< ::Dynamic>::__new(2)->init(0,::hxsl::Component_obj::X_dyn())->init(1,::hxsl::Component_obj::Y_dyn());
            									}
            									break;
            									case (int)2: {
HXLINE( 212)										_hx_tmp = ::Array_obj< ::Dynamic>::__new(2)->init(0,::hxsl::Component_obj::Y_dyn())->init(1,::hxsl::Component_obj::Z_dyn());
            									}
            									break;
            									case (int)3: {
HXLINE( 212)										_hx_tmp = ::Array_obj< ::Dynamic>::__new(2)->init(0,::hxsl::Component_obj::Z_dyn())->init(1,::hxsl::Component_obj::W_dyn());
            									}
            									break;
            									default:{
HXLINE( 222)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Invalid channel value ",75,88,00,3a) + ::Std_obj::string(channelMode)) + HX_(" for ",17,f1,92,b0)) + count) + HX_(" channels",70,ca,1b,c9))));
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 212)								switch((int)(channelMode->_hx_getIndex())){
            									case (int)1: {
HXLINE( 212)										_hx_tmp = ::Array_obj< ::Dynamic>::__new(3)->init(0,::hxsl::Component_obj::X_dyn())->init(1,::hxsl::Component_obj::Y_dyn())->init(2,::hxsl::Component_obj::Z_dyn());
            									}
            									break;
            									case (int)2: {
HXLINE( 212)										_hx_tmp = ::Array_obj< ::Dynamic>::__new(3)->init(0,::hxsl::Component_obj::Y_dyn())->init(1,::hxsl::Component_obj::Z_dyn())->init(2,::hxsl::Component_obj::W_dyn());
            									}
            									break;
            									default:{
HXLINE( 222)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Invalid channel value ",75,88,00,3a) + ::Std_obj::string(channelMode)) + HX_(" for ",17,f1,92,b0)) + count) + HX_(" channels",70,ca,1b,c9))));
            									}
            								}
            							}
            							break;
            							default:{
HXLINE( 222)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Invalid channel value ",75,88,00,3a) + ::Std_obj::string(channelMode)) + HX_(" for ",17,f1,92,b0)) + count) + HX_(" channels",70,ca,1b,c9))));
            							}
            						}
HXLINE( 212)						return ::hxsl::TExprDef_obj::TSwiz(tget,_hx_tmp);
            					}
            					break;
            					case (int)5: {
HXLINE( 230)						return ::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Unpack_dyn()))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),::Array_obj< ::Dynamic>::__new(1)->init(0,tget));
            					}
            					break;
            					case (int)6: {
HXLINE( 232)						return ::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::UnpackNormal_dyn()))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),::Array_obj< ::Dynamic>::__new(1)->init(0,tget));
            					}
            					break;
            				}
            			}
            			break;
            			case (int)67: {
HXLINE( 188)				::Array< ::Dynamic> args1 = args;
HXLINE( 189)				{
HXLINE( 189)					int _g = 0;
HXDLIN( 189)					while((_g < args1->length)){
HXLINE( 189)						 ::Dynamic a = args1->__get(_g);
HXDLIN( 189)						_g = (_g + 1);
HXLINE( 190)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 190)						::String _hx_tmp1 = ::hxsl::Printer_obj::toString(a,null());
HXDLIN( 190)						_hx_tmp(_hx_tmp1, ::Dynamic(::hx::Anon_obj::Create(4)
            							->setFixed(0,HX_("className",a3,92,3d,dc),null())
            							->setFixed(1,HX_("methodName",cc,19,0f,12),null())
            							->setFixed(2,HX_("fileName",e7,5a,43,62), ::Dynamic( ::Dynamic(a->__Field(HX_("p",70,00,00,00),::hx::paccDynamic))->__Field(HX_("file",7c,ce,bb,43),::hx::paccDynamic)))
            							->setFixed(3,HX_("lineNumber",dd,81,22,76),0)));
            					}
            				}
HXLINE( 191)				return ::hxsl::TExprDef_obj::TBlock(::Array_obj< ::Dynamic>::__new(0));
            			}
            			break;
            			default:{
HXLINE( 234)				return null();
            			}
            		}
HXLINE( 186)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(Eval_obj,evalCall,return )

::String Eval_obj::constantsToString(){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_239_constantsToString)
HXDLIN( 239)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 239)		{
HXDLIN( 239)			 ::Dynamic c = this->constants->keys();
HXDLIN( 239)			while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 239)				int c1 = ( (int)(c->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 239)				_g->push(((c1 + HX_(" => ",7f,53,55,15)) + ::hxsl::Printer_obj::toString( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),this->constants->get(c1))
            					->setFixed(1,HX_("p",70,00,00,00),null())
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),true)));
            			}
            		}
HXDLIN( 239)		return _g->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Eval_obj,constantsToString,return )

 ::Dynamic Eval_obj::ifBlock( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_93539d952bd1dc4c_242_ifBlock)
HXLINE( 243)		bool _hx_tmp;
HXDLIN( 243)		if (::hx::IsNotNull( e )) {
HXLINE( 243)			 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 243)			bool _hx_tmp1;
HXDLIN( 243)			if ((_g->_hx_getIndex() == 10)) {
HXLINE( 243)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 243)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 243)				 ::Dynamic _g3 = _g->_hx_getObject(2);
HXDLIN( 243)				_hx_tmp1 = true;
            			}
            			else {
HXLINE( 243)				_hx_tmp1 = false;
            			}
HXDLIN( 243)			_hx_tmp = !(_hx_tmp1);
            		}
            		else {
HXLINE( 243)			_hx_tmp = true;
            		}
HXDLIN( 243)		if (_hx_tmp) {
HXLINE( 244)			return e;
            		}
HXLINE( 245)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBlock(::Array_obj< ::Dynamic>::__new(1)->init(0,e)))
            			->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            			->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eval_obj,ifBlock,return )

 ::Dynamic Eval_obj::evalExpr( ::Dynamic e,::hx::Null< bool >  __o_isVal){
            		bool isVal = __o_isVal.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_93539d952bd1dc4c_248_evalExpr)
HXDLIN( 248)		 ::hxsl::Eval _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 249)		 ::hxsl::TExprDef d;
HXDLIN( 249)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 249)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 250)				 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 249)				d = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)1: {
HXLINE( 251)				 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 252)				 ::hxsl::TExprDef c = this->constants->get( ::Dynamic(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
HXLINE( 253)				if (::hx::IsNotNull( c )) {
HXLINE( 249)					d = c;
            				}
            				else {
HXLINE( 256)					 ::Dynamic v2 = this->mapVar(v);
HXLINE( 249)					d = ::hxsl::TExprDef_obj::TVar(v2);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 250)				 ::hxsl::TGlobal _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >();
HXLINE( 249)				d = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)3: {
HXLINE( 435)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE( 436)				 ::Dynamic e1 = this->evalExpr(e,isVal);
HXLINE( 437)				 ::hxsl::TExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 437)				if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 438)					 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 249)					d = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            				}
            				else {
HXLINE( 249)					d = ::hxsl::TExprDef_obj::TParenthesis(e1);
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 320)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 321)				::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 322)				int last = (el->length - 1);
HXLINE( 323)				{
HXLINE( 323)					int _g1 = 0;
HXDLIN( 323)					int _g2 = el->length;
HXDLIN( 323)					while((_g1 < _g2)){
HXLINE( 323)						_g1 = (_g1 + 1);
HXDLIN( 323)						int i = (_g1 - 1);
HXLINE( 324)						bool isVal1;
HXDLIN( 324)						if (isVal) {
HXLINE( 324)							isVal1 = (i == last);
            						}
            						else {
HXLINE( 324)							isVal1 = false;
            						}
HXLINE( 325)						 ::Dynamic e = this->evalExpr(el->__get(i),isVal1);
HXLINE( 326)						{
HXLINE( 326)							 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 326)							switch((int)(_g->_hx_getIndex())){
            								case (int)0: {
HXLINE( 327)									 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 327)									if (isVal1) {
HXLINE( 329)										out->push(e);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 327)									 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 327)									if (isVal1) {
HXLINE( 329)										out->push(e);
            									}
            								}
            								break;
            								default:{
HXLINE( 329)									out->push(e);
            								}
            							}
            						}
            					}
            				}
HXLINE( 332)				bool d1;
HXDLIN( 332)				if ((out->length == 1)) {
HXLINE( 332)					d1 = ::hx::IsPointerNotEq( this->curFun->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::FunctionKind_obj::Init_dyn() );
            				}
            				else {
HXLINE( 332)					d1 = false;
            				}
HXDLIN( 332)				if (d1) {
HXLINE( 249)					d = out->__get(0)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            				}
            				else {
HXLINE( 249)					d = ::hxsl::TExprDef_obj::TBlock(out);
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 336)				 ::haxe::macro::Binop op = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 336)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 336)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXLINE( 337)				 ::Dynamic e11 = this->evalExpr(e1,null());
HXLINE( 338)				 ::Dynamic e21 = this->evalExpr(e2,null());
HXLINE( 395)				switch((int)(op->_hx_getIndex())){
            					case (int)0: {
HXLINE( 396)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 396)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 396)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 396)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 396)							switch((int)(_g2->_hx_getIndex())){
            								case (int)2: {
HXLINE( 396)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 396)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 396)										if ((_g->_hx_getIndex() == 2)) {
HXLINE( 396)											int b = _g->_hx_getInt(0);
HXDLIN( 396)											int a = _g2->_hx_getInt(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(::Std_obj::_hx_int((a + b))));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 396)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 396)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 396)										if ((_g->_hx_getIndex() == 3)) {
HXLINE( 396)											Float b = _g->_hx_getFloat(0);
HXDLIN( 396)											Float a = _g2->_hx_getFloat(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CFloat((a + b)));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								default:{
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 398)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 398)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 398)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 398)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 398)							switch((int)(_g2->_hx_getIndex())){
            								case (int)2: {
HXLINE( 398)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 398)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 398)										if ((_g->_hx_getIndex() == 2)) {
HXLINE( 398)											int b = _g->_hx_getInt(0);
HXDLIN( 398)											int a = _g2->_hx_getInt(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(::Std_obj::_hx_int((( (Float)(a) ) * ( (Float)(b) )))));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 398)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 398)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 398)										if ((_g->_hx_getIndex() == 3)) {
HXLINE( 398)											Float b = _g->_hx_getFloat(0);
HXDLIN( 398)											Float a = _g2->_hx_getFloat(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CFloat((a * b)));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								default:{
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 399)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 399)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 399)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 399)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 399)							switch((int)(_g2->_hx_getIndex())){
            								case (int)2: {
HXLINE( 399)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 399)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 399)										if ((_g->_hx_getIndex() == 2)) {
HXLINE( 399)											int b = _g->_hx_getInt(0);
HXDLIN( 399)											int a = _g2->_hx_getInt(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(::Std_obj::_hx_int((( (Float)(a) ) / ( (Float)(b) )))));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 399)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 399)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 399)										if ((_g->_hx_getIndex() == 3)) {
HXLINE( 399)											Float b = _g->_hx_getFloat(0);
HXDLIN( 399)											Float a = _g2->_hx_getFloat(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CFloat((a / b)));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								default:{
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 397)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 397)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 397)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 397)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 397)							switch((int)(_g2->_hx_getIndex())){
            								case (int)2: {
HXLINE( 397)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 397)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 397)										if ((_g->_hx_getIndex() == 2)) {
HXLINE( 397)											int b = _g->_hx_getInt(0);
HXDLIN( 397)											int a = _g2->_hx_getInt(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(::Std_obj::_hx_int((( (Float)(a) ) - ( (Float)(b) )))));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 397)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 397)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 397)										if ((_g->_hx_getIndex() == 3)) {
HXLINE( 397)											Float b = _g->_hx_getFloat(0);
HXDLIN( 397)											Float a = _g2->_hx_getFloat(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CFloat((a - b)));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								default:{
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)4: case (int)21: {
HXLINE( 249)						d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            					}
            					break;
            					case (int)5: {
HXLINE( 409)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 409)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 409)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 409)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 409)							switch((int)(_g2->_hx_getIndex())){
            								case (int)0: {
HXLINE( 409)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 409)										if ((_g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >()->_hx_getIndex() == 0)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 409)									bool _g = _g2->_hx_getBool(0);
HXDLIN( 409)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 409)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 409)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)1: {
HXLINE( 409)												bool b = _g2->_hx_getBool(0);
HXDLIN( 409)												bool a = _g;
HXDLIN( 409)												int d1;
HXDLIN( 409)												if ((a == b)) {
HXLINE( 409)													d1 = 0;
            												}
            												else {
HXLINE( 409)													d1 = 1;
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 == 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 409)									int _g = _g2->_hx_getInt(0);
HXDLIN( 409)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 409)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 409)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)2: {
HXLINE( 409)												int b = _g2->_hx_getInt(0);
HXDLIN( 409)												int a = _g;
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(((a - b) == 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 409)									Float _g = _g2->_hx_getFloat(0);
HXDLIN( 409)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 409)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 409)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)3: {
HXLINE( 409)												Float b = _g2->_hx_getFloat(0);
HXDLIN( 409)												Float a = _g;
HXDLIN( 409)												int d1;
HXDLIN( 409)												if ((a > b)) {
HXLINE( 409)													d1 = 1;
            												}
            												else {
HXLINE( 409)													if ((a == b)) {
HXLINE( 409)														d1 = 0;
            													}
            													else {
HXLINE( 409)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 == 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)4: {
HXLINE( 409)									::String _g = _g2->_hx_getString(0);
HXDLIN( 409)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 409)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 409)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)4: {
HXLINE( 409)												::String b = _g2->_hx_getString(0);
HXDLIN( 409)												::String a = _g;
HXDLIN( 409)												int d1;
HXDLIN( 409)												if ((a > b)) {
HXLINE( 409)													d1 = 1;
            												}
            												else {
HXLINE( 409)													if ((a == b)) {
HXLINE( 409)														d1 = 0;
            													}
            													else {
HXLINE( 409)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 == 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)6: {
HXLINE( 410)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 410)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 410)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 410)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 410)							switch((int)(_g2->_hx_getIndex())){
            								case (int)0: {
HXLINE( 410)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 410)										if ((_g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >()->_hx_getIndex() == 0)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 410)									bool _g = _g2->_hx_getBool(0);
HXDLIN( 410)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 410)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 410)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)1: {
HXLINE( 410)												bool b = _g2->_hx_getBool(0);
HXDLIN( 410)												bool a = _g;
HXDLIN( 410)												int d1;
HXDLIN( 410)												if ((a == b)) {
HXLINE( 410)													d1 = 0;
            												}
            												else {
HXLINE( 410)													d1 = 1;
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 != 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 410)									int _g = _g2->_hx_getInt(0);
HXDLIN( 410)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 410)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 410)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)2: {
HXLINE( 410)												int b = _g2->_hx_getInt(0);
HXDLIN( 410)												int a = _g;
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(((a - b) != 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 410)									Float _g = _g2->_hx_getFloat(0);
HXDLIN( 410)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 410)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 410)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)3: {
HXLINE( 410)												Float b = _g2->_hx_getFloat(0);
HXDLIN( 410)												Float a = _g;
HXDLIN( 410)												int d1;
HXDLIN( 410)												if ((a > b)) {
HXLINE( 410)													d1 = 1;
            												}
            												else {
HXLINE( 410)													if ((a == b)) {
HXLINE( 410)														d1 = 0;
            													}
            													else {
HXLINE( 410)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 != 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)4: {
HXLINE( 410)									::String _g = _g2->_hx_getString(0);
HXDLIN( 410)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 410)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 410)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)4: {
HXLINE( 410)												::String b = _g2->_hx_getString(0);
HXDLIN( 410)												::String a = _g;
HXDLIN( 410)												int d1;
HXDLIN( 410)												if ((a > b)) {
HXLINE( 410)													d1 = 1;
            												}
            												else {
HXLINE( 410)													if ((a == b)) {
HXLINE( 410)														d1 = 0;
            													}
            													else {
HXLINE( 410)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 != 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)7: {
HXLINE( 411)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 411)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 411)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 411)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 411)							switch((int)(_g2->_hx_getIndex())){
            								case (int)0: {
HXLINE( 411)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 411)										if ((_g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >()->_hx_getIndex() == 0)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 411)									bool _g = _g2->_hx_getBool(0);
HXDLIN( 411)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 411)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 411)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)1: {
HXLINE( 411)												bool b = _g2->_hx_getBool(0);
HXDLIN( 411)												bool a = _g;
HXDLIN( 411)												int d1;
HXDLIN( 411)												if ((a == b)) {
HXLINE( 411)													d1 = 0;
            												}
            												else {
HXLINE( 411)													d1 = 1;
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 > 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 411)									int _g = _g2->_hx_getInt(0);
HXDLIN( 411)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 411)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 411)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)2: {
HXLINE( 411)												int b = _g2->_hx_getInt(0);
HXDLIN( 411)												int a = _g;
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(((a - b) > 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 411)									Float _g = _g2->_hx_getFloat(0);
HXDLIN( 411)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 411)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 411)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)3: {
HXLINE( 411)												Float b = _g2->_hx_getFloat(0);
HXDLIN( 411)												Float a = _g;
HXDLIN( 411)												int d1;
HXDLIN( 411)												if ((a > b)) {
HXLINE( 411)													d1 = 1;
            												}
            												else {
HXLINE( 411)													if ((a == b)) {
HXLINE( 411)														d1 = 0;
            													}
            													else {
HXLINE( 411)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 > 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)4: {
HXLINE( 411)									::String _g = _g2->_hx_getString(0);
HXDLIN( 411)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 411)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 411)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)4: {
HXLINE( 411)												::String b = _g2->_hx_getString(0);
HXDLIN( 411)												::String a = _g;
HXDLIN( 411)												int d1;
HXDLIN( 411)												if ((a > b)) {
HXLINE( 411)													d1 = 1;
            												}
            												else {
HXLINE( 411)													if ((a == b)) {
HXLINE( 411)														d1 = 0;
            													}
            													else {
HXLINE( 411)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 > 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)8: {
HXLINE( 412)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 412)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 412)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 412)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 412)							switch((int)(_g2->_hx_getIndex())){
            								case (int)0: {
HXLINE( 412)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 412)										if ((_g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >()->_hx_getIndex() == 0)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 412)									bool _g = _g2->_hx_getBool(0);
HXDLIN( 412)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 412)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 412)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)1: {
HXLINE( 412)												bool b = _g2->_hx_getBool(0);
HXDLIN( 412)												bool a = _g;
HXDLIN( 412)												int d1;
HXDLIN( 412)												if ((a == b)) {
HXLINE( 412)													d1 = 0;
            												}
            												else {
HXLINE( 412)													d1 = 1;
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 >= 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 412)									int _g = _g2->_hx_getInt(0);
HXDLIN( 412)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 412)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 412)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)2: {
HXLINE( 412)												int b = _g2->_hx_getInt(0);
HXDLIN( 412)												int a = _g;
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(((a - b) >= 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 412)									Float _g = _g2->_hx_getFloat(0);
HXDLIN( 412)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 412)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 412)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)3: {
HXLINE( 412)												Float b = _g2->_hx_getFloat(0);
HXDLIN( 412)												Float a = _g;
HXDLIN( 412)												int d1;
HXDLIN( 412)												if ((a > b)) {
HXLINE( 412)													d1 = 1;
            												}
            												else {
HXLINE( 412)													if ((a == b)) {
HXLINE( 412)														d1 = 0;
            													}
            													else {
HXLINE( 412)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 >= 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)4: {
HXLINE( 412)									::String _g = _g2->_hx_getString(0);
HXDLIN( 412)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 412)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 412)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            											}
            											break;
            											case (int)4: {
HXLINE( 412)												::String b = _g2->_hx_getString(0);
HXDLIN( 412)												::String a = _g;
HXDLIN( 412)												int d1;
HXDLIN( 412)												if ((a > b)) {
HXLINE( 412)													d1 = 1;
            												}
            												else {
HXLINE( 412)													if ((a == b)) {
HXLINE( 412)														d1 = 0;
            													}
            													else {
HXLINE( 412)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 >= 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)9: {
HXLINE( 413)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 413)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 413)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 413)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 413)							switch((int)(_g2->_hx_getIndex())){
            								case (int)0: {
HXLINE( 413)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 413)										if ((_g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >()->_hx_getIndex() == 0)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 413)									bool _g = _g2->_hx_getBool(0);
HXDLIN( 413)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 413)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 413)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)1: {
HXLINE( 413)												bool b = _g2->_hx_getBool(0);
HXDLIN( 413)												bool a = _g;
HXDLIN( 413)												int d1;
HXDLIN( 413)												if ((a == b)) {
HXLINE( 413)													d1 = 0;
            												}
            												else {
HXLINE( 413)													d1 = 1;
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 < 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 413)									int _g = _g2->_hx_getInt(0);
HXDLIN( 413)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 413)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 413)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)2: {
HXLINE( 413)												int b = _g2->_hx_getInt(0);
HXDLIN( 413)												int a = _g;
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(((a - b) < 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 413)									Float _g = _g2->_hx_getFloat(0);
HXDLIN( 413)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 413)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 413)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)3: {
HXLINE( 413)												Float b = _g2->_hx_getFloat(0);
HXDLIN( 413)												Float a = _g;
HXDLIN( 413)												int d1;
HXDLIN( 413)												if ((a > b)) {
HXLINE( 413)													d1 = 1;
            												}
            												else {
HXLINE( 413)													if ((a == b)) {
HXLINE( 413)														d1 = 0;
            													}
            													else {
HXLINE( 413)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 < 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)4: {
HXLINE( 413)									::String _g = _g2->_hx_getString(0);
HXDLIN( 413)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 413)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 413)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)4: {
HXLINE( 413)												::String b = _g2->_hx_getString(0);
HXDLIN( 413)												::String a = _g;
HXDLIN( 413)												int d1;
HXDLIN( 413)												if ((a > b)) {
HXLINE( 413)													d1 = 1;
            												}
            												else {
HXLINE( 413)													if ((a == b)) {
HXLINE( 413)														d1 = 0;
            													}
            													else {
HXLINE( 413)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 < 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)10: {
HXLINE( 414)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 414)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 414)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 414)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 414)							switch((int)(_g2->_hx_getIndex())){
            								case (int)0: {
HXLINE( 414)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 414)										if ((_g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >()->_hx_getIndex() == 0)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(true));
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)1: {
HXLINE( 414)									bool _g = _g2->_hx_getBool(0);
HXDLIN( 414)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 414)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 414)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)1: {
HXLINE( 414)												bool b = _g2->_hx_getBool(0);
HXDLIN( 414)												bool a = _g;
HXDLIN( 414)												int d1;
HXDLIN( 414)												if ((a == b)) {
HXLINE( 414)													d1 = 0;
            												}
            												else {
HXLINE( 414)													d1 = 1;
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 <= 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)2: {
HXLINE( 414)									int _g = _g2->_hx_getInt(0);
HXDLIN( 414)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 414)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 414)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)2: {
HXLINE( 414)												int b = _g2->_hx_getInt(0);
HXDLIN( 414)												int a = _g;
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(((a - b) <= 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 414)									Float _g = _g2->_hx_getFloat(0);
HXDLIN( 414)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 414)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 414)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)3: {
HXLINE( 414)												Float b = _g2->_hx_getFloat(0);
HXDLIN( 414)												Float a = _g;
HXDLIN( 414)												int d1;
HXDLIN( 414)												if ((a > b)) {
HXLINE( 414)													d1 = 1;
            												}
            												else {
HXLINE( 414)													if ((a == b)) {
HXLINE( 414)														d1 = 0;
            													}
            													else {
HXLINE( 414)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 <= 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)4: {
HXLINE( 414)									::String _g = _g2->_hx_getString(0);
HXDLIN( 414)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 414)										 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 414)										switch((int)(_g2->_hx_getIndex())){
            											case (int)0: {
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(false));
            											}
            											break;
            											case (int)4: {
HXLINE( 414)												::String b = _g2->_hx_getString(0);
HXDLIN( 414)												::String a = _g;
HXDLIN( 414)												int d1;
HXDLIN( 414)												if ((a > b)) {
HXLINE( 414)													d1 = 1;
            												}
            												else {
HXLINE( 414)													if ((a == b)) {
HXLINE( 414)														d1 = 0;
            													}
            													else {
HXLINE( 414)														d1 = -1;
            													}
            												}
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool((d1 <= 0)));
            											}
            											break;
            											default:{
HXLINE( 249)												d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            											}
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)11: {
HXLINE( 403)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 403)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 403)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 403)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 403)							if ((_g2->_hx_getIndex() == 2)) {
HXLINE( 403)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 403)									 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 403)									if ((_g->_hx_getIndex() == 2)) {
HXLINE( 403)										int b = _g->_hx_getInt(0);
HXDLIN( 403)										int a = _g2->_hx_getInt(0);
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((a & b)));
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)12: {
HXLINE( 402)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 402)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 402)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 402)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 402)							if ((_g2->_hx_getIndex() == 2)) {
HXLINE( 402)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 402)									 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 402)									if ((_g->_hx_getIndex() == 2)) {
HXLINE( 402)										int b = _g->_hx_getInt(0);
HXDLIN( 402)										int a = _g2->_hx_getInt(0);
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((a | b)));
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 401)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 401)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 401)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 401)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 401)							if ((_g2->_hx_getIndex() == 2)) {
HXLINE( 401)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 401)									 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 401)									if ((_g->_hx_getIndex() == 2)) {
HXLINE( 401)										int b = _g->_hx_getInt(0);
HXDLIN( 401)										int a = _g2->_hx_getInt(0);
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((a ^ b)));
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)14: {
HXLINE( 407)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 407)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 407)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 407)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 407)							if ((_g2->_hx_getIndex() == 1)) {
HXLINE( 407)								bool _g = _g2->_hx_getBool(0);
HXDLIN( 407)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 407)									 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 407)									if ((_g2->_hx_getIndex() == 1)) {
HXLINE( 407)										bool b = _g2->_hx_getBool(0);
HXDLIN( 407)										bool a = _g;
HXDLIN( 407)										bool d1;
HXDLIN( 407)										if (a) {
HXLINE( 407)											d1 = b;
            										}
            										else {
HXLINE( 407)											d1 = false;
            										}
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(d1));
            									}
            									else {
HXLINE( 407)										bool a = _g;
HXDLIN( 407)										if ((a == false)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(a));
            										}
            										else {
HXLINE( 249)											d = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            										}
            									}
            								}
            								else {
HXLINE( 407)									bool a = _g;
HXDLIN( 407)									if ((a == false)) {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(a));
            									}
            									else {
HXLINE( 249)										d = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            									}
            								}
            							}
            							else {
HXLINE( 407)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 407)									 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 407)									if ((_g->_hx_getIndex() == 1)) {
HXLINE( 407)										bool a = _g->_hx_getBool(0);
HXDLIN( 407)										if ((a == false)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(a));
            										}
            										else {
HXLINE( 249)											d = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            						}
            						else {
HXLINE( 407)							if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 407)								 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 407)								if ((_g->_hx_getIndex() == 1)) {
HXLINE( 407)									bool a = _g->_hx_getBool(0);
HXDLIN( 407)									if ((a == false)) {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(a));
            									}
            									else {
HXLINE( 249)										d = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            							}
            						}
            					}
            					break;
            					case (int)15: {
HXLINE( 408)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 408)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 408)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 408)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 408)							if ((_g2->_hx_getIndex() == 1)) {
HXLINE( 408)								bool _g = _g2->_hx_getBool(0);
HXDLIN( 408)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 408)									 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 408)									if ((_g2->_hx_getIndex() == 1)) {
HXLINE( 408)										bool b = _g2->_hx_getBool(0);
HXDLIN( 408)										bool a = _g;
HXDLIN( 408)										bool d1;
HXDLIN( 408)										if (!(a)) {
HXLINE( 408)											d1 = b;
            										}
            										else {
HXLINE( 408)											d1 = true;
            										}
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(d1));
            									}
            									else {
HXLINE( 408)										bool a = _g;
HXDLIN( 408)										if ((a == true)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(a));
            										}
            										else {
HXLINE( 249)											d = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            										}
            									}
            								}
            								else {
HXLINE( 408)									bool a = _g;
HXDLIN( 408)									if ((a == true)) {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(a));
            									}
            									else {
HXLINE( 249)										d = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            									}
            								}
            							}
            							else {
HXLINE( 408)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 408)									 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 408)									if ((_g->_hx_getIndex() == 1)) {
HXLINE( 408)										bool a = _g->_hx_getBool(0);
HXDLIN( 408)										if ((a == true)) {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(a));
            										}
            										else {
HXLINE( 249)											d = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            						}
            						else {
HXLINE( 408)							if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 408)								 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 408)								if ((_g->_hx_getIndex() == 1)) {
HXLINE( 408)									bool a = _g->_hx_getBool(0);
HXDLIN( 408)									if ((a == true)) {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(a));
            									}
            									else {
HXLINE( 249)										d = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            							}
            						}
            					}
            					break;
            					case (int)16: {
HXLINE( 406)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 406)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 406)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 406)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 406)							if ((_g2->_hx_getIndex() == 2)) {
HXLINE( 406)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 406)									 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 406)									if ((_g->_hx_getIndex() == 2)) {
HXLINE( 406)										int b = _g->_hx_getInt(0);
HXDLIN( 406)										int a = _g2->_hx_getInt(0);
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((a << b)));
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)17: {
HXLINE( 404)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 404)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 404)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 404)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 404)							if ((_g2->_hx_getIndex() == 2)) {
HXLINE( 404)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 404)									 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 404)									if ((_g->_hx_getIndex() == 2)) {
HXLINE( 404)										int b = _g->_hx_getInt(0);
HXDLIN( 404)										int a = _g2->_hx_getInt(0);
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((a >> b)));
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)18: {
HXLINE( 405)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 405)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 405)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 405)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 405)							if ((_g2->_hx_getIndex() == 2)) {
HXLINE( 405)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 405)									 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 405)									if ((_g->_hx_getIndex() == 2)) {
HXLINE( 405)										int b = _g->_hx_getInt(0);
HXDLIN( 405)										int a = _g2->_hx_getInt(0);
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(::hx::UShr(a,b)));
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								else {
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)19: {
HXLINE( 400)						 ::hxsl::TExprDef _g = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 400)						 ::hxsl::TExprDef _g1 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 400)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 400)							 ::hxsl::Const _g2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 400)							switch((int)(_g2->_hx_getIndex())){
            								case (int)2: {
HXLINE( 400)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 400)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 400)										if ((_g->_hx_getIndex() == 2)) {
HXLINE( 400)											int b = _g->_hx_getInt(0);
HXDLIN( 400)											int a = _g2->_hx_getInt(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(::Std_obj::_hx_int(::hx::Mod(a,b))));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 400)									if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 400)										 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 400)										if ((_g->_hx_getIndex() == 3)) {
HXLINE( 400)											Float b = _g->_hx_getFloat(0);
HXDLIN( 400)											Float a = _g2->_hx_getFloat(0);
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CFloat(::hx::Mod(a,b)));
            										}
            										else {
HXLINE( 249)											d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            										}
            									}
            									else {
HXLINE( 249)										d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            									}
            								}
            								break;
            								default:{
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            								}
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            						}
            					}
            					break;
            					case (int)20: {
HXLINE( 415)						 ::haxe::macro::Binop _g = op->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXLINE( 249)						d = ::hxsl::TExprDef_obj::TBinop(op,e11,e21);
            					}
            					break;
            					case (int)22: {
HXLINE( 416)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
            					break;
            					case (int)23: {
HXLINE( 418)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
            					break;
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 421)				 ::haxe::macro::Unop op = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Unop >();
HXDLIN( 421)				 ::Dynamic e = _g->_hx_getObject(1);
HXLINE( 422)				 ::Dynamic e1 = this->evalExpr(e,null());
HXLINE( 423)				 ::hxsl::TExprDef _g1 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 423)				if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 424)					 ::hxsl::Const c = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 425)					switch((int)(op->_hx_getIndex())){
            						case (int)2: {
HXLINE( 425)							if ((c->_hx_getIndex() == 1)) {
HXLINE( 426)								bool b = c->_hx_getBool(0);
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CBool(!(b)));
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TUnop(op,e1);
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 425)							switch((int)(c->_hx_getIndex())){
            								case (int)2: {
HXLINE( 427)									int i = c->_hx_getInt(0);
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(-(i)));
            								}
            								break;
            								case (int)3: {
HXLINE( 428)									Float f = c->_hx_getFloat(0);
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CFloat(-(f)));
            								}
            								break;
            								default:{
HXLINE( 249)									d = ::hxsl::TExprDef_obj::TUnop(op,e1);
            								}
            							}
            						}
            						break;
            						default:{
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TUnop(op,e1);
            						}
            					}
            				}
            				else {
HXLINE( 249)					d = ::hxsl::TExprDef_obj::TUnop(op,e1);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 259)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 259)				 ::Dynamic init = _g->_hx_getObject(1);
HXLINE( 260)				 ::Dynamic d1 = this->mapVar(v);
HXDLIN( 260)				 ::Dynamic d2;
HXDLIN( 260)				if (::hx::IsNull( init )) {
HXLINE( 260)					d2 = null();
            				}
            				else {
HXLINE( 260)					d2 = this->evalExpr(init,null());
            				}
HXLINE( 249)				d = ::hxsl::TExprDef_obj::TVarDecl(d1,d2);
            			}
            			break;
            			case (int)8: {
HXLINE( 274)				 ::Dynamic c = _g->_hx_getObject(0);
HXDLIN( 274)				::Array< ::Dynamic> eargs = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 275)				 ::Dynamic c1 = this->evalExpr(c,null());
HXLINE( 276)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 276)				{
HXLINE( 276)					int _g2 = 0;
HXDLIN( 276)					while((_g2 < eargs->length)){
HXLINE( 276)						 ::Dynamic a = eargs->__get(_g2);
HXDLIN( 276)						_g2 = (_g2 + 1);
HXDLIN( 276)						_g1->push(this->evalExpr(a,null()));
            					}
            				}
HXDLIN( 276)				::Array< ::Dynamic> args = _g1;
HXLINE( 277)				 ::hxsl::TExprDef _g3 = c1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 277)				switch((int)(_g3->_hx_getIndex())){
            					case (int)1: {
HXLINE( 281)						 ::Dynamic v = _g3->_hx_getObject(0);
HXDLIN( 281)						if (this->funMap->exists(v)) {
HXLINE( 283)							 ::Dynamic f = this->funMap->get(v);
HXLINE( 284)							::Array< ::Dynamic> outExprs = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 284)							::Array< ::Dynamic> undo = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 285)							{
HXLINE( 285)								int _g = 0;
HXDLIN( 285)								int _g1 = ( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) )->length;
HXDLIN( 285)								while((_g < _g1)){
HXLINE( 285)									_g = (_g + 1);
HXDLIN( 285)									int i = (_g - 1);
HXLINE( 286)									 ::Dynamic v =  ::Dynamic(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic))->__GetItem(i);
HXLINE( 287)									 ::Dynamic e = args->__get(i);
HXLINE( 288)									{
HXLINE( 288)										 ::hxsl::TExprDef _g1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 288)										switch((int)(_g1->_hx_getIndex())){
            											case (int)0: {
HXLINE( 289)												 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 289)												{
            													HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_2, ::hxsl::Eval,_gthis, ::Dynamic,v, ::hxsl::TExprDef,old) HXARGC(0)
            													void _hx_run(){
            														HX_GC_STACKFRAME(&_hx_pos_93539d952bd1dc4c_291_evalExpr)
HXLINE( 291)														if (::hx::IsNull( old )) {
HXLINE( 291)															_gthis->constants->remove(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
            														}
            														else {
HXLINE( 291)															_gthis->constants->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),old);
            														}
            													}
            													HX_END_LOCAL_FUNC0((void))

HXLINE( 290)													 ::hxsl::TExprDef old = this->constants->get( ::Dynamic(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
HXLINE( 291)													undo->push( ::Dynamic(new _hx_Closure_2(_gthis,v,old)));
HXLINE( 292)													this->constants->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ), ::Dynamic(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)));
            												}
            											}
            											break;
            											case (int)1: {
HXLINE( 289)												 ::Dynamic _g = _g1->_hx_getObject(0);
HXDLIN( 289)												{
HXLINE( 289)													int _g2 = ( (int)(_g->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXDLIN( 289)													::String _g3 = ( (::String)(_g->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 289)													 ::Dynamic _g4 = _g->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic);
HXDLIN( 289)													::Array< ::Dynamic> _g5 = ( (::Array< ::Dynamic>)(_g->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 289)													 ::hxsl::Type _g6 = _g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 289)													switch((int)( ::Dynamic(_g->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            														case (int)0: case (int)1: case (int)2: {
            															HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_5, ::hxsl::Eval,_gthis, ::Dynamic,v, ::hxsl::TExprDef,old) HXARGC(0)
            															void _hx_run(){
            																HX_GC_STACKFRAME(&_hx_pos_93539d952bd1dc4c_291_evalExpr)
HXLINE( 291)																if (::hx::IsNull( old )) {
HXLINE( 291)																	_gthis->constants->remove(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
            																}
            																else {
HXLINE( 291)																	_gthis->constants->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),old);
            																}
            															}
            															HX_END_LOCAL_FUNC0((void))

HXLINE( 290)															 ::hxsl::TExprDef old = this->constants->get( ::Dynamic(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
HXLINE( 291)															undo->push( ::Dynamic(new _hx_Closure_5(_gthis,v,old)));
HXLINE( 292)															this->constants->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ), ::Dynamic(e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)));
            														}
            														break;
            														default:{
HXLINE( 294)															 ::Dynamic old = this->varMap->get(v);
HXLINE( 295)															if (::hx::IsNull( old )) {
            																HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::hxsl::Eval,_gthis, ::Dynamic,v) HXARGC(0)
            																void _hx_run(){
            																	HX_GC_STACKFRAME(&_hx_pos_93539d952bd1dc4c_296_evalExpr)
HXLINE( 296)																	_gthis->varMap->remove(v);
            																}
            																HX_END_LOCAL_FUNC0((void))

HXLINE( 296)																undo->push( ::Dynamic(new _hx_Closure_3(_gthis,v)));
            															}
            															else {
            																HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_4, ::hxsl::Eval,_gthis, ::Dynamic,v, ::Dynamic,old) HXARGC(0)
            																void _hx_run(){
            																	HX_GC_STACKFRAME(&_hx_pos_93539d952bd1dc4c_299_evalExpr)
HXLINE( 299)																	_gthis->varMap->set(v,old);
            																}
            																HX_END_LOCAL_FUNC0((void))

HXLINE( 298)																this->varMap->remove(v);
HXLINE( 299)																undo->push( ::Dynamic(new _hx_Closure_4(_gthis,v,old)));
            															}
HXLINE( 301)															 ::Dynamic v2 = this->mapVar(v);
HXLINE( 302)															outExprs->push( ::Dynamic(::hx::Anon_obj::Create(3)
            																->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVarDecl(v2,e))
            																->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            																->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())));
            														}
            													}
            												}
            											}
            											break;
            											default:{
HXLINE( 294)												 ::Dynamic old = this->varMap->get(v);
HXLINE( 295)												if (::hx::IsNull( old )) {
            													HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::hxsl::Eval,_gthis, ::Dynamic,v) HXARGC(0)
            													void _hx_run(){
            														HX_GC_STACKFRAME(&_hx_pos_93539d952bd1dc4c_296_evalExpr)
HXLINE( 296)														_gthis->varMap->remove(v);
            													}
            													HX_END_LOCAL_FUNC0((void))

HXLINE( 296)													undo->push( ::Dynamic(new _hx_Closure_0(_gthis,v)));
            												}
            												else {
            													HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::hxsl::Eval,_gthis, ::Dynamic,v, ::Dynamic,old) HXARGC(0)
            													void _hx_run(){
            														HX_GC_STACKFRAME(&_hx_pos_93539d952bd1dc4c_299_evalExpr)
HXLINE( 299)														_gthis->varMap->set(v,old);
            													}
            													HX_END_LOCAL_FUNC0((void))

HXLINE( 298)													this->varMap->remove(v);
HXLINE( 299)													undo->push( ::Dynamic(new _hx_Closure_1(_gthis,v,old)));
            												}
HXLINE( 301)												 ::Dynamic v2 = this->mapVar(v);
HXLINE( 302)												outExprs->push( ::Dynamic(::hx::Anon_obj::Create(3)
            													->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVarDecl(v2,e))
            													->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            													->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())));
            											}
            										}
            									}
            								}
            							}
HXLINE( 305)							 ::Dynamic e = this->handleReturn(this->evalExpr(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),false),true);
HXLINE( 306)							{
HXLINE( 306)								int _g2 = 0;
HXDLIN( 306)								while((_g2 < undo->length)){
HXLINE( 306)									 ::Dynamic u = undo->__get(_g2);
HXDLIN( 306)									_g2 = (_g2 + 1);
HXDLIN( 306)									u();
            								}
            							}
HXLINE( 307)							{
HXLINE( 307)								 ::hxsl::TExprDef _g3 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 307)								if ((_g3->_hx_getIndex() == 4)) {
HXLINE( 308)									::Array< ::Dynamic> el = _g3->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 309)									{
HXLINE( 309)										int _g = 0;
HXDLIN( 309)										while((_g < el->length)){
HXLINE( 309)											 ::Dynamic e = el->__get(_g);
HXDLIN( 309)											_g = (_g + 1);
HXLINE( 310)											outExprs->push(e);
            										}
            									}
            								}
            								else {
HXLINE( 312)									outExprs->push(e);
            								}
            							}
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TBlock(outExprs);
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TCall(c1,args);
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 278)						 ::hxsl::TGlobal g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >();
HXLINE( 279)						 ::hxsl::TExprDef v = this->evalCall(g,args,eargs,e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
HXLINE( 280)						if (::hx::IsNotNull( v )) {
HXLINE( 249)							d = v;
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TCall(c1,args);
            						}
            					}
            					break;
            					default:{
HXLINE( 318)						::String d1 = ((HX_("Cannot eval non-static call expresssion '",b5,4c,24,55) +  ::hxsl::Printer_obj::__alloc( HX_CTX ,null())->exprString(c1)) + HX_("'",27,00,00,00));
HXLINE( 249)						d = ::hxsl::Error_obj::t(d1,c1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 270)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 270)				::Array< ::Dynamic> r = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 271)				 ::Dynamic d1 = this->evalExpr(e,null());
HXLINE( 249)				d = ::hxsl::TExprDef_obj::TSwiz(d1,r->copy());
            			}
            			break;
            			case (int)10: {
HXLINE( 441)				 ::Dynamic econd = _g->_hx_getObject(0);
HXDLIN( 441)				 ::Dynamic eif = _g->_hx_getObject(1);
HXDLIN( 441)				 ::Dynamic eelse = _g->_hx_getObject(2);
HXLINE( 442)				 ::Dynamic econd1 = this->evalExpr(econd,null());
HXLINE( 443)				 ::hxsl::TExprDef _g1 = econd1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 443)				if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 444)					 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 444)					if ((_g->_hx_getIndex() == 1)) {
HXLINE( 444)						bool b = _g->_hx_getBool(0);
HXDLIN( 444)						if (b) {
HXLINE( 249)							d = this->evalExpr(eif,isVal)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            						}
            						else {
HXLINE( 444)							if (::hx::IsNull( eelse )) {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CNull_dyn());
            							}
            							else {
HXLINE( 249)								d = this->evalExpr(eelse,isVal)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            							}
            						}
            					}
            					else {
HXLINE( 446)						bool d1;
HXDLIN( 446)						bool d2;
HXDLIN( 446)						if (isVal) {
HXLINE( 446)							d2 = ::hx::IsNotNull( eelse );
            						}
            						else {
HXLINE( 446)							d2 = false;
            						}
HXDLIN( 446)						if (d2) {
HXLINE( 446)							d1 = this->eliminateConditionals;
            						}
            						else {
HXLINE( 446)							d1 = false;
            						}
HXDLIN( 446)						if (d1) {
HXLINE( 447)							 ::Dynamic d1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Mix_dyn()))
            								->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
HXDLIN( 447)							 ::Dynamic d2 = this->evalExpr(eelse,true);
HXDLIN( 447)							 ::Dynamic d3 = this->evalExpr(eif,true);
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TCall(d1,::Array_obj< ::Dynamic>::__new(3)->init(0,d2)->init(1,d3)->init(2, ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::ToFloat_dyn()))
            									->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(econd1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0)))),::Array_obj< ::Dynamic>::__new(1)->init(0,econd1)))
            								->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn()))));
            						}
            						else {
HXLINE( 449)							eif = this->evalExpr(eif,isVal);
HXLINE( 450)							if (::hx::IsNotNull( eelse )) {
HXLINE( 451)								eelse = this->evalExpr(eelse,isVal);
HXLINE( 452)								 ::hxsl::TExprDef _g = eelse->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 452)								bool d;
HXDLIN( 452)								if ((_g->_hx_getIndex() == 0)) {
HXLINE( 452)									if ((_g->_hx_getObject(0).StaticCast<  ::hxsl::Const >()->_hx_getIndex() == 0)) {
HXLINE( 452)										d = true;
            									}
            									else {
HXLINE( 452)										d = false;
            									}
            								}
            								else {
HXLINE( 452)									d = false;
            								}
HXDLIN( 452)								if (d) {
HXLINE( 452)									eelse = null();
            								}
            							}
HXLINE( 454)							eif = this->ifBlock(eif);
HXLINE( 455)							eelse = this->ifBlock(eelse);
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TIf(econd1,eif,eelse);
            						}
            					}
            				}
            				else {
HXLINE( 446)					bool d1;
HXDLIN( 446)					bool d2;
HXDLIN( 446)					if (isVal) {
HXLINE( 446)						d2 = ::hx::IsNotNull( eelse );
            					}
            					else {
HXLINE( 446)						d2 = false;
            					}
HXDLIN( 446)					if (d2) {
HXLINE( 446)						d1 = this->eliminateConditionals;
            					}
            					else {
HXLINE( 446)						d1 = false;
            					}
HXDLIN( 446)					if (d1) {
HXLINE( 447)						 ::Dynamic d1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Mix_dyn()))
            							->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            							->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
HXDLIN( 447)						 ::Dynamic d2 = this->evalExpr(eelse,true);
HXDLIN( 447)						 ::Dynamic d3 = this->evalExpr(eif,true);
HXLINE( 249)						d = ::hxsl::TExprDef_obj::TCall(d1,::Array_obj< ::Dynamic>::__new(3)->init(0,d2)->init(1,d3)->init(2, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::ToFloat_dyn()))
            								->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(econd1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0)))),::Array_obj< ::Dynamic>::__new(1)->init(0,econd1)))
            							->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn()))));
            					}
            					else {
HXLINE( 449)						eif = this->evalExpr(eif,isVal);
HXLINE( 450)						if (::hx::IsNotNull( eelse )) {
HXLINE( 451)							eelse = this->evalExpr(eelse,isVal);
HXLINE( 452)							 ::hxsl::TExprDef _g = eelse->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 452)							bool d;
HXDLIN( 452)							if ((_g->_hx_getIndex() == 0)) {
HXLINE( 452)								if ((_g->_hx_getObject(0).StaticCast<  ::hxsl::Const >()->_hx_getIndex() == 0)) {
HXLINE( 452)									d = true;
            								}
            								else {
HXLINE( 452)									d = false;
            								}
            							}
            							else {
HXLINE( 452)								d = false;
            							}
HXDLIN( 452)							if (d) {
HXLINE( 452)								eelse = null();
            							}
            						}
HXLINE( 454)						eif = this->ifBlock(eif);
HXLINE( 455)						eelse = this->ifBlock(eelse);
HXLINE( 249)						d = ::hxsl::TExprDef_obj::TIf(econd1,eif,eelse);
            					}
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 249)				d = ::hxsl::TExprDef_obj::TDiscard_dyn();
            			}
            			break;
            			case (int)12: {
HXLINE( 272)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE( 273)				 ::Dynamic d1;
HXDLIN( 273)				if (::hx::IsNull( e )) {
HXLINE( 273)					d1 = null();
            				}
            				else {
HXLINE( 273)					d1 = this->evalExpr(e,null());
            				}
HXLINE( 249)				d = ::hxsl::TExprDef_obj::TReturn(d1);
            			}
            			break;
            			case (int)13: {
HXLINE( 465)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 465)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 465)				 ::Dynamic loop = _g->_hx_getObject(2);
HXLINE( 466)				 ::Dynamic v2 = this->mapVar(v);
HXLINE( 467)				 ::Dynamic it1 = this->evalExpr(it,null());
HXLINE( 468)				 ::hxsl::TExprDef e;
HXDLIN( 468)				 ::hxsl::TExprDef _g1 = it1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 468)				if ((_g1->_hx_getIndex() == 5)) {
HXLINE( 469)					 ::Dynamic _g = _g1->_hx_getObject(1);
HXDLIN( 469)					 ::Dynamic _g2 = _g1->_hx_getObject(2);
HXDLIN( 469)					if ((_g1->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >()->_hx_getIndex() == 21)) {
HXLINE( 469)						 ::hxsl::TExprDef _g1 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 469)						 ::Dynamic _g3 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 469)						 ::hxsl::Type _g4 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 469)						if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 469)							 ::hxsl::Const _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 469)							if ((_g->_hx_getIndex() == 2)) {
HXLINE( 469)								 ::hxsl::TExprDef _g1 = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 469)								 ::Dynamic _g3 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 469)								 ::hxsl::Type _g4 = _g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 469)								if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 469)									 ::hxsl::Const _g2 = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 469)									if ((_g2->_hx_getIndex() == 2)) {
HXLINE( 469)										int len = _g2->_hx_getInt(0);
HXDLIN( 469)										int start = _g->_hx_getInt(0);
HXDLIN( 469)										if (this->unrollLoops) {
HXLINE( 470)											::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 471)											{
HXLINE( 471)												int _g = start;
HXDLIN( 471)												int _g1 = len;
HXDLIN( 471)												while((_g < _g1)){
HXLINE( 471)													_g = (_g + 1);
HXDLIN( 471)													int i = (_g - 1);
HXLINE( 472)													this->constants->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(i)));
HXLINE( 473)													out->push(this->evalExpr(loop,false));
            												}
            											}
HXLINE( 475)											this->constants->remove(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
HXLINE( 468)											e = ::hxsl::TExprDef_obj::TBlock(out);
            										}
            										else {
HXLINE( 468)											e = ::hxsl::TExprDef_obj::TFor(v2,it1,this->ifBlock(this->evalExpr(loop,false)));
            										}
            									}
            									else {
HXLINE( 468)										e = ::hxsl::TExprDef_obj::TFor(v2,it1,this->ifBlock(this->evalExpr(loop,false)));
            									}
            								}
            								else {
HXLINE( 468)									e = ::hxsl::TExprDef_obj::TFor(v2,it1,this->ifBlock(this->evalExpr(loop,false)));
            								}
            							}
            							else {
HXLINE( 468)								e = ::hxsl::TExprDef_obj::TFor(v2,it1,this->ifBlock(this->evalExpr(loop,false)));
            							}
            						}
            						else {
HXLINE( 468)							e = ::hxsl::TExprDef_obj::TFor(v2,it1,this->ifBlock(this->evalExpr(loop,false)));
            						}
            					}
            					else {
HXLINE( 468)						e = ::hxsl::TExprDef_obj::TFor(v2,it1,this->ifBlock(this->evalExpr(loop,false)));
            					}
            				}
            				else {
HXLINE( 468)					e = ::hxsl::TExprDef_obj::TFor(v2,it1,this->ifBlock(this->evalExpr(loop,false)));
            				}
HXLINE( 480)				this->varMap->remove(v);
HXLINE( 249)				d = e;
            			}
            			break;
            			case (int)14: {
HXLINE( 249)				d = ::hxsl::TExprDef_obj::TContinue_dyn();
            			}
            			break;
            			case (int)15: {
HXLINE( 249)				d = ::hxsl::TExprDef_obj::TBreak_dyn();
            			}
            			break;
            			case (int)16: {
HXLINE( 261)				 ::Dynamic e1 = _g->_hx_getObject(0);
HXDLIN( 261)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXLINE( 262)				 ::Dynamic e11 = this->evalExpr(e1,null());
HXLINE( 263)				 ::Dynamic e21 = this->evalExpr(e2,null());
HXLINE( 264)				 ::hxsl::TExprDef _g1 = e11->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 264)				 ::hxsl::TExprDef _g2 = e21->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 264)				if ((_g1->_hx_getIndex() == 17)) {
HXLINE( 264)					if ((_g2->_hx_getIndex() == 0)) {
HXLINE( 265)						 ::hxsl::Const _g = _g2->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 265)						if ((_g->_hx_getIndex() == 2)) {
HXLINE( 265)							int i = _g->_hx_getInt(0);
HXDLIN( 265)							::Array< ::Dynamic> el = _g1->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 265)							bool d1;
HXDLIN( 265)							if ((i >= 0)) {
HXLINE( 265)								d1 = (i < el->length);
            							}
            							else {
HXLINE( 265)								d1 = false;
            							}
HXDLIN( 265)							if (d1) {
HXLINE( 249)								d = el->__get(i)->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            							}
            							else {
HXLINE( 249)								d = ::hxsl::TExprDef_obj::TArray(e11,e21);
            							}
            						}
            						else {
HXLINE( 249)							d = ::hxsl::TExprDef_obj::TArray(e11,e21);
            						}
            					}
            					else {
HXLINE( 249)						d = ::hxsl::TExprDef_obj::TArray(e11,e21);
            					}
            				}
            				else {
HXLINE( 249)					d = ::hxsl::TExprDef_obj::TArray(e11,e21);
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 520)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 521)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 521)				{
HXLINE( 521)					int _g2 = 0;
HXDLIN( 521)					while((_g2 < el->length)){
HXLINE( 521)						 ::Dynamic e = el->__get(_g2);
HXDLIN( 521)						_g2 = (_g2 + 1);
HXDLIN( 521)						_g1->push(this->evalExpr(e,null()));
            					}
            				}
HXLINE( 249)				d = ::hxsl::TExprDef_obj::TArrayDecl(_g1);
            			}
            			break;
            			case (int)18: {
HXLINE( 486)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 486)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 486)				 ::Dynamic def = _g->_hx_getObject(2);
HXLINE( 487)				 ::Dynamic e1 = this->evalExpr(e,null());
HXLINE( 488)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 488)				{
HXLINE( 488)					int _g2 = 0;
HXDLIN( 488)					while((_g2 < cases->length)){
HXLINE( 488)						 ::Dynamic c = cases->__get(_g2);
HXDLIN( 488)						_g2 = (_g2 + 1);
HXDLIN( 488)						::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 488)						{
HXLINE( 488)							int _g3 = 0;
HXDLIN( 488)							::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 488)							while((_g3 < _g4->length)){
HXLINE( 488)								 ::Dynamic v = _g4->__get(_g3);
HXDLIN( 488)								_g3 = (_g3 + 1);
HXDLIN( 488)								_g->push(this->evalExpr(v,null()));
            							}
            						}
HXDLIN( 488)						_g1->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("expr",35,fd,1d,43),this->evalExpr(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),isVal))
            							->setFixed(1,HX_("values",e2,03,b7,4f),_g)));
            					}
            				}
HXDLIN( 488)				::Array< ::Dynamic> cases1 = _g1;
HXLINE( 489)				 ::Dynamic def1;
HXDLIN( 489)				if (::hx::IsNull( def )) {
HXLINE( 489)					def1 = null();
            				}
            				else {
HXLINE( 489)					def1 = this->evalExpr(def,isVal);
            				}
HXLINE( 490)				bool hasCase = false;
HXLINE( 491)				{
HXLINE( 491)					 ::hxsl::TExprDef _g3 = e1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 491)					if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 492)						 ::hxsl::Const c = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 493)						if ((c->_hx_getIndex() == 2)) {
HXLINE( 494)							int val = c->_hx_getInt(0);
HXLINE( 495)							{
HXLINE( 495)								int _g = 0;
HXDLIN( 495)								while((_g < cases1->length)){
HXLINE( 495)									 ::Dynamic c = cases1->__get(_g);
HXDLIN( 495)									_g = (_g + 1);
HXLINE( 496)									{
HXLINE( 496)										int _g1 = 0;
HXDLIN( 496)										::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 496)										while((_g1 < _g2->length)){
HXLINE( 496)											 ::Dynamic v = _g2->__get(_g1);
HXDLIN( 496)											_g1 = (_g1 + 1);
HXLINE( 497)											{
HXLINE( 497)												 ::hxsl::TExprDef _g = v->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 497)												if ((_g->_hx_getIndex() == 0)) {
HXLINE( 498)													 ::hxsl::Const cst = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 499)													switch((int)(cst->_hx_getIndex())){
            														case (int)2: {
HXLINE( 500)															int k = cst->_hx_getInt(0);
HXDLIN( 500)															if ((k == val)) {
HXLINE( 500)																return c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic);
            															}
            														}
            														break;
            														case (int)3: {
HXLINE( 501)															Float k = cst->_hx_getFloat(0);
HXDLIN( 501)															if ((k == val)) {
HXLINE( 501)																return c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic);
            															}
            														}
            														break;
            														default:{
            														}
            													}
            												}
            												else {
HXLINE( 505)													hasCase = true;
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            						else {
HXLINE( 509)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported switch constant ",fb,18,48,fb) + ::Std_obj::string(c))));
            						}
            					}
            					else {
HXLINE( 512)						hasCase = true;
            					}
            				}
HXLINE( 514)				if (hasCase) {
HXLINE( 249)					d = ::hxsl::TExprDef_obj::TSwitch(e1,cases1,def1);
            				}
            				else {
HXLINE( 516)					if (::hx::IsNull( def1 )) {
HXLINE( 249)						d = ::hxsl::TExprDef_obj::TBlock(::Array_obj< ::Dynamic>::__new(0));
            					}
            					else {
HXLINE( 249)						d = def1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            					}
            				}
            			}
            			break;
            			case (int)19: {
HXLINE( 482)				 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 482)				 ::Dynamic loop = _g->_hx_getObject(1);
HXDLIN( 482)				bool normalWhile = _g->_hx_getBool(2);
HXLINE( 483)				 ::Dynamic cond1 = this->evalExpr(cond,null());
HXLINE( 484)				 ::Dynamic loop1 = this->evalExpr(loop,false);
HXLINE( 249)				d = ::hxsl::TExprDef_obj::TWhile(cond1,this->ifBlock(loop1),normalWhile);
            			}
            			break;
            			case (int)20: {
HXLINE( 522)				::String name = _g->_hx_getString(0);
HXDLIN( 522)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 522)				 ::Dynamic e = _g->_hx_getObject(2);
HXLINE( 523)				 ::Dynamic e2;
HXLINE( 524)				if ((name == HX_("unroll",56,f2,83,69))) {
HXLINE( 526)					bool old = this->unrollLoops;
HXLINE( 527)					this->unrollLoops = true;
HXLINE( 528)					e2 = this->evalExpr(e,isVal);
HXLINE( 529)					this->unrollLoops = false;
            				}
            				else {
HXLINE( 531)					e2 = this->evalExpr(e,isVal);
            				}
HXLINE( 249)				d = ::hxsl::TExprDef_obj::TMeta(name,args,e2);
            			}
            			break;
            		}
HXLINE( 535)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),d)
            			->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            			->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Eval_obj,evalExpr,return )


::hx::ObjectPtr< Eval_obj > Eval_obj::__new() {
	::hx::ObjectPtr< Eval_obj > __this = new Eval_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Eval_obj > Eval_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Eval_obj *__this = (Eval_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Eval_obj), true, "hxsl.Eval"));
	*(void **)__this = Eval_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Eval_obj::Eval_obj()
{
}

void Eval_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Eval);
	HX_MARK_MEMBER_NAME(varMap,"varMap");
	HX_MARK_MEMBER_NAME(inlineCalls,"inlineCalls");
	HX_MARK_MEMBER_NAME(unrollLoops,"unrollLoops");
	HX_MARK_MEMBER_NAME(eliminateConditionals,"eliminateConditionals");
	HX_MARK_MEMBER_NAME(constants,"constants");
	HX_MARK_MEMBER_NAME(funMap,"funMap");
	HX_MARK_MEMBER_NAME(curFun,"curFun");
	HX_MARK_MEMBER_NAME(markReturn,"markReturn");
	HX_MARK_END_CLASS();
}

void Eval_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(varMap,"varMap");
	HX_VISIT_MEMBER_NAME(inlineCalls,"inlineCalls");
	HX_VISIT_MEMBER_NAME(unrollLoops,"unrollLoops");
	HX_VISIT_MEMBER_NAME(eliminateConditionals,"eliminateConditionals");
	HX_VISIT_MEMBER_NAME(constants,"constants");
	HX_VISIT_MEMBER_NAME(funMap,"funMap");
	HX_VISIT_MEMBER_NAME(curFun,"curFun");
	HX_VISIT_MEMBER_NAME(markReturn,"markReturn");
}

::hx::Val Eval_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"eval") ) { return ::hx::Val( eval_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { return ::hx::Val( varMap ); }
		if (HX_FIELD_EQ(inName,"funMap") ) { return ::hx::Val( funMap ); }
		if (HX_FIELD_EQ(inName,"curFun") ) { return ::hx::Val( curFun ); }
		if (HX_FIELD_EQ(inName,"mapVar") ) { return ::hx::Val( mapVar_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ifBlock") ) { return ::hx::Val( ifBlock_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"evalCall") ) { return ::hx::Val( evalCall_dyn() ); }
		if (HX_FIELD_EQ(inName,"evalExpr") ) { return ::hx::Val( evalExpr_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"constants") ) { return ::hx::Val( constants ); }
		if (HX_FIELD_EQ(inName,"hasReturn") ) { return ::hx::Val( hasReturn_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"markReturn") ) { return ::hx::Val( markReturn ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlineCalls") ) { return ::hx::Val( inlineCalls ); }
		if (HX_FIELD_EQ(inName,"unrollLoops") ) { return ::hx::Val( unrollLoops ); }
		if (HX_FIELD_EQ(inName,"setConstant") ) { return ::hx::Val( setConstant_dyn() ); }
		if (HX_FIELD_EQ(inName,"needsInline") ) { return ::hx::Val( needsInline_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleReturn") ) { return ::hx::Val( handleReturn_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasReturnLoop") ) { return ::hx::Val( hasReturnLoop_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkSamplerRec") ) { return ::hx::Val( checkSamplerRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleReturnDef") ) { return ::hx::Val( handleReturnDef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"constantsToString") ) { return ::hx::Val( constantsToString_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"eliminateConditionals") ) { return ::hx::Val( eliminateConditionals ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Eval_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { varMap=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"funMap") ) { funMap=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curFun") ) { curFun=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"constants") ) { constants=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"markReturn") ) { markReturn=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlineCalls") ) { inlineCalls=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unrollLoops") ) { unrollLoops=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"eliminateConditionals") ) { eliminateConditionals=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Eval_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("varMap",f5,ed,8f,53));
	outFields->push(HX_("inlineCalls",fc,f4,4f,03));
	outFields->push(HX_("unrollLoops",59,37,c7,07));
	outFields->push(HX_("eliminateConditionals",ef,96,b8,c4));
	outFields->push(HX_("constants",8f,76,6b,44));
	outFields->push(HX_("funMap",9d,e7,38,6f));
	outFields->push(HX_("curFun",9f,6e,c6,3e));
	outFields->push(HX_("markReturn",9d,60,df,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Eval_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Eval_obj,varMap),HX_("varMap",f5,ed,8f,53)},
	{::hx::fsBool,(int)offsetof(Eval_obj,inlineCalls),HX_("inlineCalls",fc,f4,4f,03)},
	{::hx::fsBool,(int)offsetof(Eval_obj,unrollLoops),HX_("unrollLoops",59,37,c7,07)},
	{::hx::fsBool,(int)offsetof(Eval_obj,eliminateConditionals),HX_("eliminateConditionals",ef,96,b8,c4)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Eval_obj,constants),HX_("constants",8f,76,6b,44)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Eval_obj,funMap),HX_("funMap",9d,e7,38,6f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Eval_obj,curFun),HX_("curFun",9f,6e,c6,3e)},
	{::hx::fsBool,(int)offsetof(Eval_obj,markReturn),HX_("markReturn",9d,60,df,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Eval_obj_sStaticStorageInfo = 0;
#endif

static ::String Eval_obj_sMemberFields[] = {
	HX_("varMap",f5,ed,8f,53),
	HX_("inlineCalls",fc,f4,4f,03),
	HX_("unrollLoops",59,37,c7,07),
	HX_("eliminateConditionals",ef,96,b8,c4),
	HX_("constants",8f,76,6b,44),
	HX_("funMap",9d,e7,38,6f),
	HX_("curFun",9f,6e,c6,3e),
	HX_("setConstant",26,8b,fe,d5),
	HX_("mapVar",ab,15,0e,b9),
	HX_("checkSamplerRec",10,08,c1,f5),
	HX_("needsInline",96,f9,de,49),
	HX_("eval",9c,6b,1c,43),
	HX_("markReturn",9d,60,df,e4),
	HX_("hasReturn",aa,57,16,4a),
	HX_("hasReturnLoop",2e,47,3d,fe),
	HX_("handleReturn",78,ca,59,57),
	HX_("handleReturnDef",2d,02,e6,da),
	HX_("evalCall",5a,ae,43,e0),
	HX_("constantsToString",5b,aa,cb,54),
	HX_("ifBlock",30,68,de,1e),
	HX_("evalExpr",f1,92,a7,e1),
	::String(null()) };

::hx::Class Eval_obj::__mClass;

void Eval_obj::__register()
{
	Eval_obj _hx_dummy;
	Eval_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Eval",a1,be,cb,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Eval_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Eval_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Eval_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Eval_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
