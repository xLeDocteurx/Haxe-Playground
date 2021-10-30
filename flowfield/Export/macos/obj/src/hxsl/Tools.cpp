#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_hxsl_VarQualifier
#include <hxsl/VarQualifier.h>
#endif
#ifndef INCLUDED_hxsl_VecType
#include <hxsl/VecType.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_307_allocVarId,"hxsl.Tools","allocVarId",0x954633e5,"hxsl.Tools.allocVarId","hxsl/Ast.hx",307,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_311_getName,"hxsl.Tools","getName",0xb4dbed09,"hxsl.Tools.getName","hxsl/Ast.hx",311,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_322_getDoc,"hxsl.Tools","getDoc",0xc761e97a,"hxsl.Tools.getDoc","hxsl/Ast.hx",322,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_333_getConstBits,"hxsl.Tools","getConstBits",0xc861e28b,"hxsl.Tools.getConstBits","hxsl/Ast.hx",333,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_357_isConst,"hxsl.Tools","isConst",0x803d6821,"hxsl.Tools.isConst","hxsl/Ast.hx",357,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_370_isStruct,"hxsl.Tools","isStruct",0xfedab1d7,"hxsl.Tools.isStruct","hxsl/Ast.hx",370,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_374_isArray,"hxsl.Tools","isArray",0x5b6edc57,"hxsl.Tools.isArray","hxsl/Ast.hx",374,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_377_hasQualifier,"hxsl.Tools","hasQualifier",0x000c4768,"hxsl.Tools.hasQualifier","hxsl/Ast.hx",377,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_385_hasBorrowQualifier,"hxsl.Tools","hasBorrowQualifier",0x8644e5f3,"hxsl.Tools.hasBorrowQualifier","hxsl/Ast.hx",385,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_396_isSampler,"hxsl.Tools","isSampler",0x8370df46,"hxsl.Tools.isSampler","hxsl/Ast.hx",396,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_405_toString,"hxsl.Tools","toString",0xcda6aca4,"hxsl.Tools.toString","hxsl/Ast.hx",405,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_422_toType,"hxsl.Tools","toType",0xa708cbcd,"hxsl.Tools.toType","hxsl/Ast.hx",422,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_430_hasSideEffect,"hxsl.Tools","hasSideEffect",0xc9a2a08a,"hxsl.Tools.hasSideEffect","hxsl/Ast.hx",430,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_477_iter,"hxsl.Tools","iter",0xa5ec4510,"hxsl.Tools.iter","hxsl/Ast.hx",477,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_505_map,"hxsl.Tools","map",0xcd18b1a4,"hxsl.Tools.map","hxsl/Ast.hx",505,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_528_size,"hxsl.Tools","size",0xac8020b9,"hxsl.Tools.size","hxsl/Ast.hx",528,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_549_evalConst,"hxsl.Tools","evalConst",0x5fe0052f,"hxsl.Tools.evalConst","hxsl/Ast.hx",549,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_296_boot,"hxsl.Tools","boot",0xa148042a,"hxsl.Tools.boot","hxsl/Ast.hx",296,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_298_boot,"hxsl.Tools","boot",0xa148042a,"hxsl.Tools.boot","hxsl/Ast.hx",298,0x84860dc2)
HX_LOCAL_STACK_FRAME(_hx_pos_4dfc02b0cc77bdd2_299_boot,"hxsl.Tools","boot",0xa148042a,"hxsl.Tools.boot","hxsl/Ast.hx",299,0x84860dc2)
namespace hxsl{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57e52ff2;
}

int Tools_obj::UID;

::Array< ::Dynamic> Tools_obj::SWIZ;

int Tools_obj::MAX_CHANNELS_BITS;

int Tools_obj::allocVarId(){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_307_allocVarId)
HXDLIN( 307)		return ++::hxsl::Tools_obj::UID;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tools_obj,allocVarId,return )

::String Tools_obj::getName( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_311_getName)
HXLINE( 312)		if (::hx::IsNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 313)			return ( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            		}
HXLINE( 314)		{
HXLINE( 314)			int _g = 0;
HXDLIN( 314)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 314)			while((_g < _g1->length)){
HXLINE( 314)				 ::hxsl::VarQualifier q = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN( 314)				_g = (_g + 1);
HXLINE( 315)				if ((q->_hx_getIndex() == 4)) {
HXLINE( 316)					::String n = q->_hx_getString(0);
HXDLIN( 316)					return n;
            				}
            			}
            		}
HXLINE( 319)		return ( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getName,return )

::String Tools_obj::getDoc( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_322_getDoc)
HXLINE( 323)		if (::hx::IsNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 324)			return null();
            		}
HXLINE( 325)		{
HXLINE( 325)			int _g = 0;
HXDLIN( 325)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 325)			while((_g < _g1->length)){
HXLINE( 325)				 ::hxsl::VarQualifier q = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN( 325)				_g = (_g + 1);
HXLINE( 326)				if ((q->_hx_getIndex() == 10)) {
HXLINE( 327)					::String s = q->_hx_getString(0);
HXDLIN( 327)					return s;
            				}
            			}
            		}
HXLINE( 330)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getDoc,return )

int Tools_obj::getConstBits( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_333_getConstBits)
HXLINE( 334)		{
HXLINE( 334)			 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 334)			switch((int)(_g->_hx_getIndex())){
            				case (int)1: {
HXLINE( 338)					int _g = 0;
HXDLIN( 338)					::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 338)					while((_g < _g1->length)){
HXLINE( 338)						 ::hxsl::VarQualifier q = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN( 338)						_g = (_g + 1);
HXLINE( 339)						if ((q->_hx_getIndex() == 0)) {
HXLINE( 340)							 ::Dynamic n = q->_hx_getObject(0);
HXLINE( 341)							if (::hx::IsNotNull( n )) {
HXLINE( 342)								int bits = 0;
HXLINE( 343)								while(::hx::IsGreaterEq( n,(1 << bits) )){
HXLINE( 344)									bits = (bits + 1);
            								}
HXLINE( 345)								return bits;
            							}
HXLINE( 347)							return 8;
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 336)					return 1;
            				}
            				break;
            				case (int)17: {
HXLINE( 350)					int _g1 = _g->_hx_getInt(0);
HXLINE( 351)					return (3 + ::hxsl::Tools_obj::MAX_CHANNELS_BITS);
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE( 354)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getConstBits,return )

bool Tools_obj::isConst( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_357_isConst)
HXLINE( 358)		 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 358)		bool _hx_tmp;
HXDLIN( 358)		if ((_g->_hx_getIndex() == 17)) {
HXLINE( 358)			int _g1 = _g->_hx_getInt(0);
HXDLIN( 358)			_hx_tmp = true;
            		}
            		else {
HXLINE( 358)			_hx_tmp = false;
            		}
HXDLIN( 358)		if (_hx_tmp) {
HXLINE( 359)			return true;
            		}
HXLINE( 360)		if (::hx::IsNotNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 361)			int _g = 0;
HXDLIN( 361)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 361)			while((_g < _g1->length)){
HXLINE( 361)				 ::hxsl::VarQualifier q = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN( 361)				_g = (_g + 1);
HXLINE( 362)				if ((q->_hx_getIndex() == 0)) {
HXLINE( 363)					 ::Dynamic _g = q->_hx_getObject(0);
HXDLIN( 363)					return true;
            				}
            			}
            		}
HXLINE( 366)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,isConst,return )

bool Tools_obj::isStruct( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_370_isStruct)
HXDLIN( 370)		 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 370)		if ((_g->_hx_getIndex() == 13)) {
HXDLIN( 370)			::Array< ::Dynamic> _g1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 370)			return true;
            		}
            		else {
HXDLIN( 370)			return false;
            		}
HXDLIN( 370)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,isStruct,return )

bool Tools_obj::isArray( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_374_isArray)
HXDLIN( 374)		 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 374)		if ((_g->_hx_getIndex() == 15)) {
HXDLIN( 374)			 ::hxsl::Type _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 374)			 ::hxsl::SizeDecl _g2 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 374)			return true;
            		}
            		else {
HXDLIN( 374)			return false;
            		}
HXDLIN( 374)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,isArray,return )

bool Tools_obj::hasQualifier( ::Dynamic v, ::hxsl::VarQualifier q){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_377_hasQualifier)
HXLINE( 378)		if (::hx::IsNotNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 379)			int _g = 0;
HXDLIN( 379)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 379)			while((_g < _g1->length)){
HXLINE( 379)				 ::hxsl::VarQualifier q2 = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN( 379)				_g = (_g + 1);
HXLINE( 380)				if (::hx::IsPointerEq( q2,q )) {
HXLINE( 381)					return true;
            				}
            			}
            		}
HXLINE( 382)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,hasQualifier,return )

bool Tools_obj::hasBorrowQualifier( ::Dynamic v,::String path){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_385_hasBorrowQualifier)
HXLINE( 386)		if (::hx::IsNotNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 387)			int _g = 0;
HXDLIN( 387)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 387)			while((_g < _g1->length)){
HXLINE( 387)				 ::hxsl::VarQualifier q = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN( 387)				_g = (_g + 1);
HXLINE( 388)				if ((q->_hx_getIndex() == 11)) {
HXLINE( 389)					::String s = q->_hx_getString(0);
HXDLIN( 389)					return (path == s);
            				}
            			}
            		}
HXLINE( 392)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,hasBorrowQualifier,return )

bool Tools_obj::isSampler( ::hxsl::Type t){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_396_isSampler)
HXDLIN( 396)		switch((int)(t->_hx_getIndex())){
            			case (int)10: case (int)11: case (int)12: {
HXLINE( 398)				return true;
            			}
            			break;
            			case (int)17: {
HXLINE( 397)				int _g = t->_hx_getInt(0);
HXLINE( 398)				return true;
            			}
            			break;
            			default:{
HXLINE( 400)				return false;
            			}
            		}
HXLINE( 396)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,isSampler,return )

::String Tools_obj::toString( ::hxsl::Type t){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_405_toString)
HXDLIN( 405)		switch((int)(t->_hx_getIndex())){
            			case (int)5: {
HXLINE( 406)				int size = t->_hx_getInt(0);
HXDLIN( 406)				 ::hxsl::VecType t1 = t->_hx_getObject(1).StaticCast<  ::hxsl::VecType >();
HXLINE( 407)				::String prefix;
HXDLIN( 407)				switch((int)(t1->_hx_getIndex())){
            					case (int)0: {
HXLINE( 407)						prefix = HX_("I",49,00,00,00);
            					}
            					break;
            					case (int)1: {
HXLINE( 407)						prefix = HX_("",00,00,00,00);
            					}
            					break;
            					case (int)2: {
HXLINE( 407)						prefix = HX_("B",42,00,00,00);
            					}
            					break;
            				}
HXLINE( 412)				return ((prefix + HX_("Vec",34,9a,41,00)) + size);
            			}
            			break;
            			case (int)9: {
HXLINE( 416)				int n = t->_hx_getInt(0);
HXDLIN( 416)				return (HX_("Bytes",4b,78,c5,50) + n);
            			}
            			break;
            			case (int)13: {
HXLINE( 413)				::Array< ::Dynamic> vl = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 413)				::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 413)				{
HXLINE( 413)					int _g1 = 0;
HXDLIN( 413)					while((_g1 < vl->length)){
HXLINE( 413)						 ::Dynamic v = vl->__get(_g1);
HXDLIN( 413)						_g1 = (_g1 + 1);
HXDLIN( 413)						::String _hx_tmp = ( (::String)((v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" : ",c6,7a,18,00))) );
HXDLIN( 413)						_g->push((_hx_tmp + ::hxsl::Tools_obj::toString(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
            					}
            				}
HXDLIN( 413)				return ((HX_("{",7b,00,00,00) + _g->join(HX_(",",2c,00,00,00))) + HX_("}",7d,00,00,00));
            			}
            			break;
            			case (int)15: {
HXLINE( 414)				 ::hxsl::Type t1 = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 414)				 ::hxsl::SizeDecl s = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 414)				::String _hx_tmp = (::hxsl::Tools_obj::toString(t1) + HX_("[",5b,00,00,00));
HXDLIN( 414)				::String _hx_tmp1;
HXDLIN( 414)				switch((int)(s->_hx_getIndex())){
            					case (int)0: {
HXLINE( 414)						int i = s->_hx_getInt(0);
HXDLIN( 414)						_hx_tmp1 = (HX_("",00,00,00,00) + i);
            					}
            					break;
            					case (int)1: {
HXLINE( 414)						 ::Dynamic v = s->_hx_getObject(0);
HXDLIN( 414)						_hx_tmp1 = ( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            					}
            					break;
            				}
HXDLIN( 414)				return ((_hx_tmp + _hx_tmp1) + HX_("]",5d,00,00,00));
            			}
            			break;
            			case (int)16: {
HXLINE( 415)				 ::hxsl::Type t1 = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 415)				 ::hxsl::SizeDecl s = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 415)				::String _hx_tmp = ((HX_("buffer ",20,a3,90,b1) + ::hxsl::Tools_obj::toString(t1)) + HX_("[",5b,00,00,00));
HXDLIN( 415)				::String _hx_tmp1;
HXDLIN( 415)				switch((int)(s->_hx_getIndex())){
            					case (int)0: {
HXLINE( 415)						int i = s->_hx_getInt(0);
HXDLIN( 415)						_hx_tmp1 = (HX_("",00,00,00,00) + i);
            					}
            					break;
            					case (int)1: {
HXLINE( 415)						 ::Dynamic v = s->_hx_getObject(0);
HXDLIN( 415)						_hx_tmp1 = ( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            					}
            					break;
            				}
HXDLIN( 415)				return ((_hx_tmp + _hx_tmp1) + HX_("]",5d,00,00,00));
            			}
            			break;
            			default:{
HXLINE( 417)				return ::Type_obj::enumConstructor(t).substr(1,null());
            			}
            		}
HXLINE( 405)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,toString,return )

 ::hxsl::Type Tools_obj::toType( ::hxsl::VecType t){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_422_toType)
HXDLIN( 422)		switch((int)(t->_hx_getIndex())){
            			case (int)0: {
HXLINE( 425)				return ::hxsl::Type_obj::TInt_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE( 423)				return ::hxsl::Type_obj::TFloat_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 424)				return ::hxsl::Type_obj::TBool_dyn();
            			}
            			break;
            		}
HXLINE( 422)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,toType,return )

bool Tools_obj::hasSideEffect( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_430_hasSideEffect)
HXDLIN( 430)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 430)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 452)				 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 453)				return false;
            			}
            			break;
            			case (int)1: {
HXLINE( 452)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXLINE( 453)				return false;
            			}
            			break;
            			case (int)2: {
HXLINE( 452)				 ::hxsl::TGlobal _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >();
HXLINE( 453)				return false;
            			}
            			break;
            			case (int)3: {
HXLINE( 431)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE( 432)				return ::hxsl::Tools_obj::hasSideEffect(e);
            			}
            			break;
            			case (int)4: {
HXLINE( 433)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 434)				{
HXLINE( 434)					int _g1 = 0;
HXDLIN( 434)					while((_g1 < el->length)){
HXLINE( 434)						 ::Dynamic e = el->__get(_g1);
HXDLIN( 434)						_g1 = (_g1 + 1);
HXLINE( 435)						if (::hxsl::Tools_obj::hasSideEffect(e)) {
HXLINE( 436)							return true;
            						}
            					}
            				}
HXLINE( 437)				return false;
            			}
            			break;
            			case (int)5: {
HXLINE( 440)				 ::haxe::macro::Binop _g1 = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 440)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 440)				 ::Dynamic _g3 = _g->_hx_getObject(2);
HXDLIN( 440)				switch((int)(_g1->_hx_getIndex())){
            					case (int)4: {
HXLINE( 439)						return true;
            					}
            					break;
            					case (int)20: {
HXLINE( 438)						 ::haxe::macro::Binop _g = _g1->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXLINE( 439)						return true;
            					}
            					break;
            					default:{
HXLINE( 440)						 ::Dynamic e1 = _g2;
HXDLIN( 440)						 ::Dynamic e2 = _g3;
HXLINE( 441)						if (!(::hxsl::Tools_obj::hasSideEffect(e1))) {
HXLINE( 441)							return ::hxsl::Tools_obj::hasSideEffect(e2);
            						}
            						else {
HXLINE( 441)							return true;
            						}
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 442)				 ::haxe::macro::Unop _g1 = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Unop >();
HXDLIN( 442)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXLINE( 443)				return ::hxsl::Tools_obj::hasSideEffect(e1);
            			}
            			break;
            			case (int)7: {
HXLINE( 461)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 461)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXLINE( 462)				return true;
            			}
            			break;
            			case (int)8: {
HXLINE( 454)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 454)				::Array< ::Dynamic> pl = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 455)				 ::hxsl::TExprDef _g1 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 455)				bool _hx_tmp;
HXDLIN( 455)				if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 455)					 ::hxsl::TGlobal _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >();
HXDLIN( 455)					_hx_tmp = true;
            				}
            				else {
HXLINE( 455)					_hx_tmp = false;
            				}
HXDLIN( 455)				if (!(_hx_tmp)) {
HXLINE( 456)					return true;
            				}
HXLINE( 457)				{
HXLINE( 457)					int _g2 = 0;
HXDLIN( 457)					while((_g2 < pl->length)){
HXLINE( 457)						 ::Dynamic p = pl->__get(_g2);
HXDLIN( 457)						_g2 = (_g2 + 1);
HXLINE( 458)						if (::hxsl::Tools_obj::hasSideEffect(p)) {
HXLINE( 459)							return true;
            						}
            					}
            				}
HXLINE( 460)				return false;
            			}
            			break;
            			case (int)9: {
HXLINE( 444)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 444)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE( 445)				return ::hxsl::Tools_obj::hasSideEffect(e);
            			}
            			break;
            			case (int)10: {
HXLINE( 446)				 ::Dynamic econd = _g->_hx_getObject(0);
HXDLIN( 446)				 ::Dynamic eif = _g->_hx_getObject(1);
HXDLIN( 446)				 ::Dynamic eelse = _g->_hx_getObject(2);
HXLINE( 447)				bool _hx_tmp;
HXDLIN( 447)				if (!(::hxsl::Tools_obj::hasSideEffect(econd))) {
HXLINE( 447)					_hx_tmp = ::hxsl::Tools_obj::hasSideEffect(eif);
            				}
            				else {
HXLINE( 447)					_hx_tmp = true;
            				}
HXDLIN( 447)				if (!(_hx_tmp)) {
HXLINE( 447)					if (::hx::IsNotNull( eelse )) {
HXLINE( 447)						return ::hxsl::Tools_obj::hasSideEffect(eelse);
            					}
            					else {
HXLINE( 447)						return false;
            					}
            				}
            				else {
HXLINE( 447)					return true;
            				}
            			}
            			break;
            			case (int)11: case (int)14: case (int)15: {
HXLINE( 462)				return true;
            			}
            			break;
            			case (int)12: {
HXLINE( 461)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXLINE( 462)				return true;
            			}
            			break;
            			case (int)13: {
HXLINE( 448)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 448)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 448)				 ::Dynamic loop = _g->_hx_getObject(2);
HXLINE( 449)				if (!(::hxsl::Tools_obj::hasSideEffect(it))) {
HXLINE( 449)					return ::hxsl::Tools_obj::hasSideEffect(loop);
            				}
            				else {
HXLINE( 449)					return true;
            				}
            			}
            			break;
            			case (int)16: {
HXLINE( 450)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 450)				 ::Dynamic index = _g->_hx_getObject(1);
HXLINE( 451)				if (!(::hxsl::Tools_obj::hasSideEffect(e))) {
HXLINE( 451)					return ::hxsl::Tools_obj::hasSideEffect(index);
            				}
            				else {
HXLINE( 451)					return true;
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 433)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 434)				{
HXLINE( 434)					int _g1 = 0;
HXDLIN( 434)					while((_g1 < el->length)){
HXLINE( 434)						 ::Dynamic e = el->__get(_g1);
HXDLIN( 434)						_g1 = (_g1 + 1);
HXLINE( 435)						if (::hxsl::Tools_obj::hasSideEffect(e)) {
HXLINE( 436)							return true;
            						}
            					}
            				}
HXLINE( 437)				return false;
            			}
            			break;
            			case (int)18: {
HXLINE( 463)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 463)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 463)				 ::Dynamic def = _g->_hx_getObject(2);
HXLINE( 464)				{
HXLINE( 464)					int _g1 = 0;
HXDLIN( 464)					while((_g1 < cases->length)){
HXLINE( 464)						 ::Dynamic c = cases->__get(_g1);
HXDLIN( 464)						_g1 = (_g1 + 1);
HXLINE( 465)						{
HXLINE( 465)							int _g = 0;
HXDLIN( 465)							::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 465)							while((_g < _g2->length)){
HXLINE( 465)								 ::Dynamic v = _g2->__get(_g);
HXDLIN( 465)								_g = (_g + 1);
HXDLIN( 465)								if (::hxsl::Tools_obj::hasSideEffect(v)) {
HXLINE( 465)									return true;
            								}
            							}
            						}
HXLINE( 466)						if (::hxsl::Tools_obj::hasSideEffect(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))) {
HXLINE( 466)							return true;
            						}
            					}
            				}
HXLINE( 468)				if (!(::hxsl::Tools_obj::hasSideEffect(e))) {
HXLINE( 468)					if (::hx::IsNotNull( def )) {
HXLINE( 468)						return ::hxsl::Tools_obj::hasSideEffect(def);
            					}
            					else {
HXLINE( 468)						return false;
            					}
            				}
            				else {
HXLINE( 468)					return true;
            				}
            			}
            			break;
            			case (int)19: {
HXLINE( 469)				bool _g1 = _g->_hx_getBool(2);
HXDLIN( 469)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 469)				 ::Dynamic loop = _g->_hx_getObject(1);
HXLINE( 470)				if (!(::hxsl::Tools_obj::hasSideEffect(e))) {
HXLINE( 470)					return ::hxsl::Tools_obj::hasSideEffect(loop);
            				}
            				else {
HXLINE( 470)					return true;
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 471)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 471)				::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 471)				 ::Dynamic e = _g->_hx_getObject(2);
HXLINE( 472)				return ::hxsl::Tools_obj::hasSideEffect(e);
            			}
            			break;
            		}
HXLINE( 430)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,hasSideEffect,return )

void Tools_obj::iter( ::Dynamic e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_477_iter)
HXDLIN( 477)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 477)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 500)				 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
            			}
            			break;
            			case (int)1: {
HXLINE( 500)				 ::Dynamic _g1 = _g->_hx_getObject(0);
            			}
            			break;
            			case (int)2: {
HXLINE( 500)				 ::hxsl::TGlobal _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >();
            			}
            			break;
            			case (int)3: {
HXLINE( 478)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 478)				f(e);
            			}
            			break;
            			case (int)4: {
HXLINE( 479)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 479)				{
HXLINE( 479)					int _g1 = 0;
HXDLIN( 479)					while((_g1 < el->length)){
HXLINE( 479)						 ::Dynamic e = el->__get(_g1);
HXDLIN( 479)						_g1 = (_g1 + 1);
HXDLIN( 479)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 480)				 ::haxe::macro::Binop _g1 = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 480)				{
HXLINE( 480)					 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 480)					 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 480)					{
HXLINE( 480)						f(e1);
HXDLIN( 480)						f(e2);
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 481)				 ::haxe::macro::Unop _g1 = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Unop >();
HXDLIN( 481)				{
HXLINE( 481)					 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 481)					f(e1);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 482)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 482)				{
HXLINE( 482)					 ::Dynamic init = _g->_hx_getObject(1);
HXDLIN( 482)					if (::hx::IsNotNull( init )) {
HXLINE( 482)						f(init);
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 483)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 483)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 483)				{
HXLINE( 483)					f(e);
HXDLIN( 483)					{
HXLINE( 483)						int _g1 = 0;
HXDLIN( 483)						while((_g1 < args->length)){
HXLINE( 483)							 ::Dynamic a = args->__get(_g1);
HXDLIN( 483)							_g1 = (_g1 + 1);
HXDLIN( 483)							f(a);
            						}
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 484)				::Array< ::Dynamic> _g1 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 484)				{
HXLINE( 484)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 484)					f(e);
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 485)				 ::Dynamic econd = _g->_hx_getObject(0);
HXDLIN( 485)				 ::Dynamic eif = _g->_hx_getObject(1);
HXDLIN( 485)				 ::Dynamic eelse = _g->_hx_getObject(2);
HXDLIN( 485)				{
HXLINE( 485)					f(econd);
HXDLIN( 485)					f(eif);
HXDLIN( 485)					if (::hx::IsNotNull( eelse )) {
HXLINE( 485)						f(eelse);
            					}
            				}
            			}
            			break;
            			case (int)11: case (int)14: case (int)15: {
            			}
            			break;
            			case (int)12: {
HXLINE( 486)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 486)				if (::hx::IsNotNull( e )) {
HXLINE( 486)					f(e);
            				}
            			}
            			break;
            			case (int)13: {
HXLINE( 487)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 487)				{
HXLINE( 487)					 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 487)					 ::Dynamic loop = _g->_hx_getObject(2);
HXDLIN( 487)					{
HXLINE( 487)						f(it);
HXDLIN( 487)						f(loop);
            					}
            				}
            			}
            			break;
            			case (int)16: {
HXLINE( 488)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 488)				 ::Dynamic index = _g->_hx_getObject(1);
HXDLIN( 488)				{
HXLINE( 488)					f(e);
HXDLIN( 488)					f(index);
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 489)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 489)				{
HXLINE( 489)					int _g1 = 0;
HXDLIN( 489)					while((_g1 < el->length)){
HXLINE( 489)						 ::Dynamic e = el->__get(_g1);
HXDLIN( 489)						_g1 = (_g1 + 1);
HXDLIN( 489)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)18: {
HXLINE( 490)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 490)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 490)				 ::Dynamic def = _g->_hx_getObject(2);
HXDLIN( 490)				{
HXLINE( 491)					f(e);
HXLINE( 492)					{
HXLINE( 492)						int _g1 = 0;
HXDLIN( 492)						while((_g1 < cases->length)){
HXLINE( 492)							 ::Dynamic c = cases->__get(_g1);
HXDLIN( 492)							_g1 = (_g1 + 1);
HXLINE( 493)							{
HXLINE( 493)								int _g = 0;
HXDLIN( 493)								::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 493)								while((_g < _g2->length)){
HXLINE( 493)									 ::Dynamic v = _g2->__get(_g);
HXDLIN( 493)									_g = (_g + 1);
HXDLIN( 493)									f(v);
            								}
            							}
HXLINE( 494)							f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)));
            						}
            					}
HXLINE( 496)					if (::hx::IsNotNull( def )) {
HXLINE( 496)						f(def);
            					}
            				}
            			}
            			break;
            			case (int)19: {
HXLINE( 497)				bool _g1 = _g->_hx_getBool(2);
HXDLIN( 497)				{
HXLINE( 497)					 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 497)					 ::Dynamic loop = _g->_hx_getObject(1);
HXDLIN( 497)					{
HXLINE( 498)						f(e);
HXLINE( 499)						f(loop);
            					}
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 501)				::String _g1 = _g->_hx_getString(0);
HXDLIN( 501)				::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 501)				{
HXLINE( 501)					 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 501)					f(e);
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,iter,(void))

 ::Dynamic Tools_obj::map( ::Dynamic e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_505_map)
HXLINE( 506)		 ::hxsl::TExprDef ed;
HXDLIN( 506)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 506)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 521)				 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 506)				ed = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)1: {
HXLINE( 521)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXLINE( 506)				ed = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)2: {
HXLINE( 521)				 ::hxsl::TGlobal _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >();
HXLINE( 506)				ed = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)3: {
HXLINE( 507)				 ::Dynamic e = _g->_hx_getObject(0);
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TParenthesis(f(e));
            			}
            			break;
            			case (int)4: {
HXLINE( 508)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 508)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 508)				{
HXLINE( 508)					int _g2 = 0;
HXDLIN( 508)					while((_g2 < el->length)){
HXLINE( 508)						 ::Dynamic e = el->__get(_g2);
HXDLIN( 508)						_g2 = (_g2 + 1);
HXDLIN( 508)						_g1->push(f(e));
            					}
            				}
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TBlock(_g1);
            			}
            			break;
            			case (int)5: {
HXLINE( 509)				 ::haxe::macro::Binop op = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 509)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 509)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 509)				 ::Dynamic ed1 = f(e1);
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TBinop(op,ed1,f(e2));
            			}
            			break;
            			case (int)6: {
HXLINE( 510)				 ::haxe::macro::Unop op = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Unop >();
HXDLIN( 510)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TUnop(op,f(e1));
            			}
            			break;
            			case (int)7: {
HXLINE( 511)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 511)				 ::Dynamic init = _g->_hx_getObject(1);
HXDLIN( 511)				 ::Dynamic ed1;
HXDLIN( 511)				if (::hx::IsNotNull( init )) {
HXLINE( 511)					ed1 = f(init);
            				}
            				else {
HXLINE( 511)					ed1 = null();
            				}
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TVarDecl(v,ed1);
            			}
            			break;
            			case (int)8: {
HXLINE( 512)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 512)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 512)				 ::Dynamic ed1 = f(e);
HXDLIN( 512)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 512)				{
HXLINE( 512)					int _g2 = 0;
HXDLIN( 512)					while((_g2 < args->length)){
HXLINE( 512)						 ::Dynamic a = args->__get(_g2);
HXDLIN( 512)						_g2 = (_g2 + 1);
HXDLIN( 512)						_g1->push(f(a));
            					}
            				}
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TCall(ed1,_g1);
            			}
            			break;
            			case (int)9: {
HXLINE( 513)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 513)				::Array< ::Dynamic> c = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TSwiz(f(e),c);
            			}
            			break;
            			case (int)10: {
HXLINE( 514)				 ::Dynamic econd = _g->_hx_getObject(0);
HXDLIN( 514)				 ::Dynamic eif = _g->_hx_getObject(1);
HXDLIN( 514)				 ::Dynamic eelse = _g->_hx_getObject(2);
HXDLIN( 514)				 ::Dynamic ed1 = f(econd);
HXDLIN( 514)				 ::Dynamic ed2 = f(eif);
HXDLIN( 514)				 ::Dynamic ed3;
HXDLIN( 514)				if (::hx::IsNotNull( eelse )) {
HXLINE( 514)					ed3 = f(eelse);
            				}
            				else {
HXLINE( 514)					ed3 = null();
            				}
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TIf(ed1,ed2,ed3);
            			}
            			break;
            			case (int)11: case (int)14: case (int)15: {
HXLINE( 506)				ed = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
            			}
            			break;
            			case (int)12: {
HXLINE( 515)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 515)				 ::Dynamic ed1;
HXDLIN( 515)				if (::hx::IsNotNull( e )) {
HXLINE( 515)					ed1 = f(e);
            				}
            				else {
HXLINE( 515)					ed1 = null();
            				}
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TReturn(ed1);
            			}
            			break;
            			case (int)13: {
HXLINE( 516)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 516)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 516)				 ::Dynamic loop = _g->_hx_getObject(2);
HXDLIN( 516)				 ::Dynamic ed1 = f(it);
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TFor(v,ed1,f(loop));
            			}
            			break;
            			case (int)16: {
HXLINE( 517)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 517)				 ::Dynamic index = _g->_hx_getObject(1);
HXDLIN( 517)				 ::Dynamic ed1 = f(e);
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TArray(ed1,f(index));
            			}
            			break;
            			case (int)17: {
HXLINE( 518)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 518)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 518)				{
HXLINE( 518)					int _g2 = 0;
HXDLIN( 518)					while((_g2 < el->length)){
HXLINE( 518)						 ::Dynamic e = el->__get(_g2);
HXDLIN( 518)						_g2 = (_g2 + 1);
HXDLIN( 518)						_g1->push(f(e));
            					}
            				}
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TArrayDecl(_g1);
            			}
            			break;
            			case (int)18: {
HXLINE( 519)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 519)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 519)				 ::Dynamic def = _g->_hx_getObject(2);
HXDLIN( 519)				 ::Dynamic ed1 = f(e);
HXDLIN( 519)				::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 519)				{
HXLINE( 519)					int _g2 = 0;
HXDLIN( 519)					while((_g2 < cases->length)){
HXLINE( 519)						 ::Dynamic c = cases->__get(_g2);
HXDLIN( 519)						_g2 = (_g2 + 1);
HXDLIN( 519)						::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 519)						{
HXLINE( 519)							int _g3 = 0;
HXDLIN( 519)							::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 519)							while((_g3 < _g4->length)){
HXLINE( 519)								 ::Dynamic v = _g4->__get(_g3);
HXDLIN( 519)								_g3 = (_g3 + 1);
HXDLIN( 519)								_g->push(f(v));
            							}
            						}
HXDLIN( 519)						_g1->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("expr",35,fd,1d,43),f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))))
            							->setFixed(1,HX_("values",e2,03,b7,4f),_g)));
            					}
            				}
HXDLIN( 519)				 ::Dynamic ed2;
HXDLIN( 519)				if (::hx::IsNull( def )) {
HXLINE( 519)					ed2 = null();
            				}
            				else {
HXLINE( 519)					ed2 = f(def);
            				}
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TSwitch(ed1,_g1,ed2);
            			}
            			break;
            			case (int)19: {
HXLINE( 520)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 520)				 ::Dynamic loop = _g->_hx_getObject(1);
HXDLIN( 520)				bool normalWhile = _g->_hx_getBool(2);
HXDLIN( 520)				 ::Dynamic ed1 = f(e);
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TWhile(ed1,f(loop),normalWhile);
            			}
            			break;
            			case (int)20: {
HXLINE( 522)				::String m = _g->_hx_getString(0);
HXDLIN( 522)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 522)				 ::Dynamic e = _g->_hx_getObject(2);
HXLINE( 506)				ed = ::hxsl::TExprDef_obj::TMeta(m,args,f(e));
            			}
            			break;
            		}
HXLINE( 524)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),ed)
            			->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            			->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,map,return )

int Tools_obj::size( ::hxsl::Type t){
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_528_size)
HXDLIN( 528)		switch((int)(t->_hx_getIndex())){
            			case (int)0: {
HXLINE( 529)				return 0;
            			}
            			break;
            			case (int)1: case (int)3: {
HXLINE( 530)				return 1;
            			}
            			break;
            			case (int)2: case (int)4: case (int)10: case (int)11: case (int)12: {
HXLINE( 541)				return 0;
            			}
            			break;
            			case (int)5: {
HXLINE( 531)				 ::hxsl::VecType _g = t->_hx_getObject(1).StaticCast<  ::hxsl::VecType >();
HXDLIN( 531)				int n = t->_hx_getInt(0);
HXDLIN( 531)				return n;
            			}
            			break;
            			case (int)6: {
HXLINE( 537)				return 9;
            			}
            			break;
            			case (int)7: {
HXLINE( 538)				return 16;
            			}
            			break;
            			case (int)8: {
HXLINE( 539)				return 12;
            			}
            			break;
            			case (int)9: {
HXLINE( 540)				int s = t->_hx_getInt(0);
HXDLIN( 540)				return s;
            			}
            			break;
            			case (int)13: {
HXLINE( 532)				::Array< ::Dynamic> vl = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 533)				int s = 0;
HXLINE( 534)				{
HXLINE( 534)					int _g = 0;
HXDLIN( 534)					while((_g < vl->length)){
HXLINE( 534)						 ::Dynamic v = vl->__get(_g);
HXDLIN( 534)						_g = (_g + 1);
HXDLIN( 534)						s = (s + ::hxsl::Tools_obj::size(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)));
            					}
            				}
HXLINE( 535)				return s;
            			}
            			break;
            			case (int)14: {
HXLINE( 541)				::Array< ::Dynamic> _g = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 541)				return 0;
            			}
            			break;
            			case (int)15: {
HXLINE( 543)				 ::hxsl::Type _g = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 543)				 ::hxsl::SizeDecl _g1 = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 543)				switch((int)(_g1->_hx_getIndex())){
            					case (int)0: {
HXLINE( 542)						int v = _g1->_hx_getInt(0);
HXDLIN( 542)						 ::hxsl::Type t = _g;
HXDLIN( 542)						return (::hxsl::Tools_obj::size(t) * v);
            					}
            					break;
            					case (int)1: {
HXLINE( 543)						 ::Dynamic _g = _g1->_hx_getObject(0);
HXDLIN( 543)						return 0;
            					}
            					break;
            				}
            			}
            			break;
            			case (int)16: {
HXLINE( 543)				 ::hxsl::SizeDecl _g = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 543)				if ((_g->_hx_getIndex() == 0)) {
HXLINE( 542)					int v = _g->_hx_getInt(0);
HXDLIN( 542)					 ::hxsl::Type t1 = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 542)					return (::hxsl::Tools_obj::size(t1) * v);
            				}
            				else {
HXLINE( 543)					return 0;
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 531)				int n = t->_hx_getInt(0);
HXDLIN( 531)				return n;
            			}
            			break;
            			case (int)18: {
HXLINE( 536)				return 4;
            			}
            			break;
            		}
HXLINE( 528)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,size,return )

 ::Dynamic Tools_obj::evalConst( ::Dynamic e){
            	HX_GC_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_549_evalConst)
HXDLIN( 549)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 549)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 550)				 ::hxsl::Const c = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 551)				switch((int)(c->_hx_getIndex())){
            					case (int)0: {
HXLINE( 552)						return null();
            					}
            					break;
            					case (int)1: {
HXLINE( 553)						bool b = c->_hx_getBool(0);
HXDLIN( 553)						return b;
            					}
            					break;
            					case (int)2: {
HXLINE( 554)						int i = c->_hx_getInt(0);
HXDLIN( 554)						return i;
            					}
            					break;
            					case (int)3: {
HXLINE( 555)						Float f = c->_hx_getFloat(0);
HXDLIN( 555)						return f;
            					}
            					break;
            					case (int)4: {
HXLINE( 556)						::String s = c->_hx_getString(0);
HXDLIN( 556)						return s;
            					}
            					break;
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 558)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 558)				::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 558)				 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 558)				 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 558)				 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 558)				if ((_g3->_hx_getIndex() == 2)) {
HXLINE( 558)					switch((int)(_g3->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >()->_hx_getIndex())){
            						case (int)40: case (int)41: case (int)42: {
HXLINE( 558)							::Array< ::Dynamic> args = _g2;
HXLINE( 559)							::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN( 559)							{
HXLINE( 559)								int _g1 = 0;
HXDLIN( 559)								while((_g1 < args->length)){
HXLINE( 559)									 ::Dynamic a = args->__get(_g1);
HXDLIN( 559)									_g1 = (_g1 + 1);
HXDLIN( 559)									_g->push(::hxsl::Tools_obj::evalConst(a));
            								}
            							}
HXDLIN( 559)							::Array< Float > vals = _g;
HXLINE( 560)							if ((vals->length == 1)) {
HXLINE( 561)								return  ::h3d::Vector_obj::__alloc( HX_CTX ,vals->__get(0),vals->__get(0),vals->__get(0),vals->__get(0));
            							}
HXLINE( 562)							return  ::h3d::Vector_obj::__alloc( HX_CTX ,vals->__get(0),vals->__get(1),vals->__get(2),vals->__get(3));
            						}
            						break;
            						default:{
HXLINE( 564)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unhandled constant init ",71,ec,8c,5a) + ::hxsl::Printer_obj::toString(e,null()))));
            						}
            					}
            				}
            				else {
HXLINE( 564)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unhandled constant init ",71,ec,8c,5a) + ::hxsl::Printer_obj::toString(e,null()))));
            				}
            			}
            			break;
            			default:{
HXLINE( 564)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unhandled constant init ",71,ec,8c,5a) + ::hxsl::Printer_obj::toString(e,null()))));
            			}
            		}
HXLINE( 549)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,evalConst,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { outValue = ( UID ); return true; }
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"SWIZ") ) { outValue = ( SWIZ ); return true; }
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"size") ) { outValue = size_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getDoc") ) { outValue = getDoc_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toType") ) { outValue = toType_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { outValue = getName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isConst") ) { outValue = isConst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isArray") ) { outValue = isArray_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isStruct") ) { outValue = isStruct_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isSampler") ) { outValue = isSampler_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"evalConst") ) { outValue = evalConst_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allocVarId") ) { outValue = allocVarId_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getConstBits") ) { outValue = getConstBits_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasQualifier") ) { outValue = hasQualifier_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasSideEffect") ) { outValue = hasSideEffect_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_CHANNELS_BITS") ) { outValue = ( MAX_CHANNELS_BITS ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasBorrowQualifier") ) { outValue = hasBorrowQualifier_dyn(); return true; }
	}
	return false;
}

bool Tools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { UID=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"SWIZ") ) { SWIZ=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_CHANNELS_BITS") ) { MAX_CHANNELS_BITS=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Tools_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Tools_obj::UID,HX_("UID",70,bf,40,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Tools_obj::SWIZ,HX_("SWIZ",95,f9,1e,37)},
	{::hx::fsInt,(void *) &Tools_obj::MAX_CHANNELS_BITS,HX_("MAX_CHANNELS_BITS",5a,b8,d0,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Tools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tools_obj::UID,"UID");
	HX_MARK_MEMBER_NAME(Tools_obj::SWIZ,"SWIZ");
	HX_MARK_MEMBER_NAME(Tools_obj::MAX_CHANNELS_BITS,"MAX_CHANNELS_BITS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tools_obj::UID,"UID");
	HX_VISIT_MEMBER_NAME(Tools_obj::SWIZ,"SWIZ");
	HX_VISIT_MEMBER_NAME(Tools_obj::MAX_CHANNELS_BITS,"MAX_CHANNELS_BITS");
};

#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("UID",70,bf,40,00),
	HX_("SWIZ",95,f9,1e,37),
	HX_("MAX_CHANNELS_BITS",5a,b8,d0,90),
	HX_("allocVarId",ed,69,65,5d),
	HX_("getName",01,22,82,1b),
	HX_("getDoc",82,7b,1b,a3),
	HX_("getConstBits",93,aa,40,3f),
	HX_("isConst",19,9d,e3,e6),
	HX_("isStruct",df,d5,a2,69),
	HX_("isArray",4f,11,15,c2),
	HX_("hasQualifier",70,0f,eb,76),
	HX_("hasBorrowQualifier",fb,63,15,89),
	HX_("isSampler",3e,42,c8,87),
	HX_("toString",ac,d0,6e,38),
	HX_("toType",d5,5d,c2,82),
	HX_("hasSideEffect",82,df,b2,55),
	HX_("iter",18,c5,bf,45),
	HX_("map",9c,0a,53,00),
	HX_("size",c1,a0,53,4c),
	HX_("evalConst",27,68,37,64),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Tools",76,e3,e7,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &Tools_obj::__SetStatic;
	__mClass->mMarkFunc = Tools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Tools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_296_boot)
HXDLIN( 296)		UID = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_298_boot)
HXDLIN( 298)		SWIZ = ::Type_obj::allEnums(::hx::ClassOf< ::hxsl::Component >());
            	}
{
            	HX_STACKFRAME(&_hx_pos_4dfc02b0cc77bdd2_299_boot)
HXDLIN( 299)		MAX_CHANNELS_BITS = 3;
            	}
}

} // end namespace hxsl
