#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_hxsl_Prec
#include <hxsl/Prec.h>
#endif
#ifndef INCLUDED_hxsl_Printer
#include <hxsl/Printer.h>
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
#ifndef INCLUDED_hxsl_Tools2
#include <hxsl/Tools2.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f43f4e694940fe57_10_new,"hxsl.Printer","new",0x6e85b367,"hxsl.Printer.new","hxsl/Printer.hx",10,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_14_add,"hxsl.Printer","add",0x6e7bd528,"hxsl.Printer.add","hxsl/Printer.hx",14,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_17_shaderString,"hxsl.Printer","shaderString",0x8f1bc9ef,"hxsl.Printer.shaderString","hxsl/Printer.hx",17,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_32_varString,"hxsl.Printer","varString",0x060b855f,"hxsl.Printer.varString","hxsl/Printer.hx",32,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_38_funString,"hxsl.Printer","funString",0xa89004b7,"hxsl.Printer.funString","hxsl/Printer.hx",38,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_44_exprString,"hxsl.Printer","exprString",0x04718bbf,"hxsl.Printer.exprString","hxsl/Printer.hx",44,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_50_addVar,"hxsl.Printer","addVar",0x75896a9f,"hxsl.Printer.addVar","hxsl/Printer.hx",50,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_106_addFun,"hxsl.Printer","addFun",0x757d57f7,"hxsl.Printer.addFun","hxsl/Printer.hx",106,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_122_addVarName,"hxsl.Printer","addVarName",0xa815448a,"hxsl.Printer.addVarName","hxsl/Printer.hx",122,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_135_addConst,"hxsl.Printer","addConst",0x1351e31b,"hxsl.Printer.addConst","hxsl/Printer.hx",135,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_145_addExpr,"hxsl.Printer","addExpr",0x5788b27d,"hxsl.Printer.addExpr","hxsl/Printer.hx",145,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_306_opStr,"hxsl.Printer","opStr",0xfc779cd7,"hxsl.Printer.opStr","hxsl/Printer.hx",306,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_337_toString,"hxsl.Printer","toString",0x88059445,"hxsl.Printer.toString","hxsl/Printer.hx",337,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_341_shaderToString,"hxsl.Printer","shaderToString",0xc15b754a,"hxsl.Printer.shaderToString","hxsl/Printer.hx",341,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_345_check,"hxsl.Printer","check",0x0e6c8b8f,"hxsl.Printer.check","hxsl/Printer.hx",345,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_348_check,"hxsl.Printer","check",0x0e6c8b8f,"hxsl.Printer.check","hxsl/Printer.hx",348,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_364_check,"hxsl.Printer","check",0x0e6c8b8f,"hxsl.Printer.check","hxsl/Printer.hx",364,0xb194612a)
HX_LOCAL_STACK_FRAME(_hx_pos_f43f4e694940fe57_132_boot,"hxsl.Printer","boot",0x3e90474b,"hxsl.Printer.boot","hxsl/Printer.hx",132,0xb194612a)
static const ::String _hx_array_data_15e873f5_38[] = {
	HX_("x",78,00,00,00),HX_("y",79,00,00,00),HX_("z",7a,00,00,00),HX_("w",77,00,00,00),
};
namespace hxsl{

void Printer_obj::__construct(::hx::Null< bool >  __o_varId){
            		bool varId = __o_varId.Default(false);
            	HX_STACKFRAME(&_hx_pos_f43f4e694940fe57_10_new)
HXDLIN(  10)		this->varId = varId;
            	}

Dynamic Printer_obj::__CreateEmpty() { return new Printer_obj; }

void *Printer_obj::_hx_vtable = 0;

Dynamic Printer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Printer_obj > _hx_result = new Printer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Printer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x192ed771;
}

void Printer_obj::add( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f43f4e694940fe57_14_add)
HXDLIN(  14)		 ::StringBuf _this = this->buffer;
HXDLIN(  14)		 ::Dynamic x = v;
HXDLIN(  14)		if (::hx::IsNotNull( _this->charBuf )) {
HXDLIN(  14)			_this->flush();
            		}
HXDLIN(  14)		if (::hx::IsNull( _this->b )) {
HXDLIN(  14)			_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            		}
            		else {
HXDLIN(  14)			::Array< ::String > _this1 = _this->b;
HXDLIN(  14)			_this1->push(::Std_obj::string(x));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,add,(void))

::String Printer_obj::shaderString( ::Dynamic s){
            	HX_GC_STACKFRAME(&_hx_pos_f43f4e694940fe57_17_shaderString)
HXLINE(  18)		this->buffer =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  19)		{
HXLINE(  19)			int _g = 0;
HXDLIN(  19)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN(  19)			while((_g < _g1->length)){
HXLINE(  19)				 ::Dynamic v = _g1->__get(_g);
HXDLIN(  19)				_g = (_g + 1);
HXLINE(  20)				this->addVar(v,null(),null(),null());
HXLINE(  21)				{
HXLINE(  21)					 ::StringBuf _this = this->buffer;
HXDLIN(  21)					 ::Dynamic x = HX_(";\n",6f,33,00,00);
HXDLIN(  21)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  21)						_this->flush();
            					}
HXDLIN(  21)					if (::hx::IsNull( _this->b )) {
HXLINE(  21)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  21)						::Array< ::String > _this1 = _this->b;
HXDLIN(  21)						_this1->push(::Std_obj::string(x));
            					}
            				}
            			}
            		}
HXLINE(  23)		if ((( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) )->length > 0)) {
HXLINE(  24)			 ::StringBuf _this = this->buffer;
HXDLIN(  24)			 ::Dynamic x = HX_("\n",0a,00,00,00);
HXDLIN(  24)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  24)				_this->flush();
            			}
HXDLIN(  24)			if (::hx::IsNull( _this->b )) {
HXLINE(  24)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  24)				::Array< ::String > _this1 = _this->b;
HXDLIN(  24)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  25)		{
HXLINE(  25)			int _g2 = 0;
HXDLIN(  25)			::Array< ::Dynamic> _g3 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  25)			while((_g2 < _g3->length)){
HXLINE(  25)				 ::Dynamic f = _g3->__get(_g2);
HXDLIN(  25)				_g2 = (_g2 + 1);
HXLINE(  26)				this->addFun(f);
HXLINE(  27)				{
HXLINE(  27)					 ::StringBuf _this = this->buffer;
HXDLIN(  27)					 ::Dynamic x = HX_("\n\n",c0,08,00,00);
HXDLIN(  27)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  27)						_this->flush();
            					}
HXDLIN(  27)					if (::hx::IsNull( _this->b )) {
HXLINE(  27)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  27)						::Array< ::String > _this1 = _this->b;
HXDLIN(  27)						_this1->push(::Std_obj::string(x));
            					}
            				}
            			}
            		}
HXLINE(  29)		return this->buffer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,shaderString,return )

::String Printer_obj::varString( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_f43f4e694940fe57_32_varString)
HXLINE(  33)		this->buffer =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  34)		this->addVar(v,null(),null(),null());
HXLINE(  35)		return this->buffer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,varString,return )

::String Printer_obj::funString( ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_f43f4e694940fe57_38_funString)
HXLINE(  39)		this->buffer =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  40)		this->addFun(f);
HXLINE(  41)		return this->buffer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,funString,return )

::String Printer_obj::exprString( ::Dynamic e){
            	HX_GC_STACKFRAME(&_hx_pos_f43f4e694940fe57_44_exprString)
HXLINE(  45)		this->buffer =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  46)		this->addExpr(e,HX_("",00,00,00,00));
HXLINE(  47)		return this->buffer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,exprString,return )

void Printer_obj::addVar( ::Dynamic v, ::hxsl::VarKind defKind,::String __o_tabs, ::Dynamic parent){
            		::String tabs = __o_tabs;
            		if (::hx::IsNull(__o_tabs)) tabs = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_f43f4e694940fe57_50_addVar)
HXLINE(  51)		if (::hx::IsNotNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE(  52)			int _g = 0;
HXDLIN(  52)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN(  52)			while((_g < _g1->length)){
HXLINE(  52)				 ::hxsl::VarQualifier q = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN(  52)				_g = (_g + 1);
HXLINE(  53)				{
HXLINE(  53)					::String v;
HXDLIN(  53)					switch((int)(q->_hx_getIndex())){
            						case (int)0: {
HXLINE(  54)							 ::Dynamic max = q->_hx_getObject(0);
HXDLIN(  54)							::String v1;
HXDLIN(  54)							if (::hx::IsNull( max )) {
HXLINE(  54)								v1 = HX_("",00,00,00,00);
            							}
            							else {
HXLINE(  54)								v1 = ((HX_("(",28,00,00,00) + max) + HX_(")",29,00,00,00));
            							}
HXLINE(  53)							v = (HX_("const",63,f9,5d,4a) + v1);
            						}
            						break;
            						case (int)1: {
HXLINE(  53)							v = HX_("private",03,2d,6f,89);
            						}
            						break;
            						case (int)2: {
HXLINE(  53)							v = HX_("nullable",a1,5b,36,33);
            						}
            						break;
            						case (int)3: {
HXLINE(  53)							v = HX_("perObject",7c,cb,e7,a8);
            						}
            						break;
            						case (int)4: {
HXLINE(  58)							::String n = q->_hx_getString(0);
HXLINE(  53)							v = ((HX_("name('",0a,fe,78,1d) + n) + HX_("')",22,22,00,00));
            						}
            						break;
            						case (int)5: {
HXLINE(  53)							v = HX_("shared",a5,5e,2b,1d);
            						}
            						break;
            						case (int)6: {
HXLINE(  60)							 ::hxsl::Prec p = q->_hx_getObject(0).StaticCast<  ::hxsl::Prec >();
HXLINE(  53)							v = (::Type_obj::enumConstructor(p).toLowerCase() + HX_("p",70,00,00,00));
            						}
            						break;
            						case (int)7: {
HXLINE(  61)							Float min = q->_hx_getFloat(0);
HXDLIN(  61)							Float max = q->_hx_getFloat(1);
HXLINE(  53)							v = ((((HX_("range(",cb,5f,91,b7) + min) + HX_(",",2c,00,00,00)) + max) + HX_(")",29,00,00,00));
            						}
            						break;
            						case (int)8: {
HXLINE(  53)							v = HX_("ignore",12,b9,c8,92);
            						}
            						break;
            						case (int)9: {
HXLINE(  63)							int n = q->_hx_getInt(0);
HXLINE(  53)							v = ((HX_("perInstance(",56,0a,97,29) + n) + HX_(")",29,00,00,00));
            						}
            						break;
            						case (int)10: {
HXLINE(  64)							::String s = q->_hx_getString(0);
HXLINE(  53)							v = ((HX_("doc(\"",72,f3,bb,dd) + ::StringTools_obj::replace(s,HX_("\"",22,00,00,00),HX_("\\\"",46,50,00,00))) + HX_("\")",c7,1d,00,00));
            						}
            						break;
            						case (int)11: {
HXLINE(  65)							::String s = q->_hx_getString(0);
HXLINE(  53)							v = ((HX_("borrow(",53,99,31,3c) + s) + HX_(")",29,00,00,00));
            						}
            						break;
            						case (int)12: {
HXLINE(  66)							::String s = q->_hx_getString(0);
HXLINE(  53)							v = ((HX_("sampler(",20,a2,c2,cc) + s) + HX_(")",29,00,00,00));
            						}
            						break;
            					}
HXDLIN(  53)					{
HXLINE(  53)						 ::StringBuf _this = this->buffer;
HXDLIN(  53)						 ::Dynamic x = ((HX_("@",40,00,00,00) + v) + HX_(" ",20,00,00,00));
HXDLIN(  53)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  53)							_this->flush();
            						}
HXDLIN(  53)						if (::hx::IsNull( _this->b )) {
HXLINE(  53)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE(  53)							::Array< ::String > _this1 = _this->b;
HXDLIN(  53)							_this1->push(::Std_obj::string(x));
            						}
            					}
            				}
            			}
            		}
HXLINE(  69)		if (::hx::IsPointerNotEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),defKind )) {
HXLINE(  70)			switch((int)( ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            				case (int)0: {
HXLINE(  74)					 ::StringBuf _this = this->buffer;
HXDLIN(  74)					 ::Dynamic x = HX_("@global ",1d,8d,d5,60);
HXDLIN(  74)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  74)						_this->flush();
            					}
HXDLIN(  74)					if (::hx::IsNull( _this->b )) {
HXLINE(  74)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  74)						::Array< ::String > _this1 = _this->b;
HXDLIN(  74)						_this1->push(::Std_obj::string(x));
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(  80)					 ::StringBuf _this = this->buffer;
HXDLIN(  80)					 ::Dynamic x = HX_("@input ",16,75,4b,01);
HXDLIN(  80)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  80)						_this->flush();
            					}
HXDLIN(  80)					if (::hx::IsNull( _this->b )) {
HXLINE(  80)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  80)						::Array< ::String > _this1 = _this->b;
HXDLIN(  80)						_this1->push(::Std_obj::string(x));
            					}
            				}
            				break;
            				case (int)2: {
HXLINE(  78)					 ::StringBuf _this = this->buffer;
HXDLIN(  78)					 ::Dynamic x = HX_("@param ",33,ab,d8,52);
HXDLIN(  78)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  78)						_this->flush();
            					}
HXDLIN(  78)					if (::hx::IsNull( _this->b )) {
HXLINE(  78)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  78)						::Array< ::String > _this1 = _this->b;
HXDLIN(  78)						_this1->push(::Std_obj::string(x));
            					}
            				}
            				break;
            				case (int)3: {
HXLINE(  76)					 ::StringBuf _this = this->buffer;
HXDLIN(  76)					 ::Dynamic x = HX_("@varying ",f0,65,23,61);
HXDLIN(  76)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  76)						_this->flush();
            					}
HXDLIN(  76)					if (::hx::IsNull( _this->b )) {
HXLINE(  76)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  76)						::Array< ::String > _this1 = _this->b;
HXDLIN(  76)						_this1->push(::Std_obj::string(x));
            					}
            				}
            				break;
            				case (int)4: {
HXLINE(  72)					 ::StringBuf _this = this->buffer;
HXDLIN(  72)					 ::Dynamic x = HX_("@local ",95,24,1d,bf);
HXDLIN(  72)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  72)						_this->flush();
            					}
HXDLIN(  72)					if (::hx::IsNull( _this->b )) {
HXLINE(  72)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  72)						::Array< ::String > _this1 = _this->b;
HXDLIN(  72)						_this1->push(::Std_obj::string(x));
            					}
            				}
            				break;
            				case (int)5: {
HXLINE(  84)					 ::StringBuf _this = this->buffer;
HXDLIN(  84)					 ::Dynamic x = HX_("@output ",bf,99,08,31);
HXDLIN(  84)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  84)						_this->flush();
            					}
HXDLIN(  84)					if (::hx::IsNull( _this->b )) {
HXLINE(  84)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  84)						::Array< ::String > _this1 = _this->b;
HXDLIN(  84)						_this1->push(::Std_obj::string(x));
            					}
            				}
            				break;
            				case (int)6: {
HXLINE(  82)					 ::StringBuf _this = this->buffer;
HXDLIN(  82)					 ::Dynamic x = HX_("@function ",c8,01,a1,c6);
HXDLIN(  82)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  82)						_this->flush();
            					}
HXDLIN(  82)					if (::hx::IsNull( _this->b )) {
HXLINE(  82)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  82)						::Array< ::String > _this1 = _this->b;
HXDLIN(  82)						_this1->push(::Std_obj::string(x));
            					}
            				}
            				break;
            			}
            		}
HXLINE(  86)		{
HXLINE(  86)			 ::StringBuf _this = this->buffer;
HXDLIN(  86)			 ::Dynamic x = HX_("var ",59,2b,49,4e);
HXDLIN(  86)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  86)				_this->flush();
            			}
HXDLIN(  86)			if (::hx::IsNull( _this->b )) {
HXLINE(  86)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  86)				::Array< ::String > _this1 = _this->b;
HXDLIN(  86)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  87)		if (::hx::IsEq( v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic),parent )) {
HXLINE(  88)			::String v1;
HXDLIN(  88)			if (this->varId) {
HXLINE(  88)				v1 = ( (::String)((HX_("@",40,00,00,00) + v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic))) );
            			}
            			else {
HXLINE(  88)				v1 = HX_("",00,00,00,00);
            			}
HXDLIN(  88)			{
HXLINE(  88)				 ::StringBuf _this = this->buffer;
HXDLIN(  88)				 ::Dynamic x =  ::Dynamic((v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + v1));
HXDLIN(  88)				if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  88)					_this->flush();
            				}
HXDLIN(  88)				if (::hx::IsNull( _this->b )) {
HXLINE(  88)					_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE(  88)					::Array< ::String > _this1 = _this->b;
HXDLIN(  88)					_this1->push(::Std_obj::string(x));
            				}
            			}
            		}
            		else {
HXLINE(  90)			this->addVarName(v);
            		}
HXLINE(  91)		{
HXLINE(  91)			 ::StringBuf _this1 = this->buffer;
HXDLIN(  91)			 ::Dynamic x1 = HX_(" : ",c6,7a,18,00);
HXDLIN(  91)			if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE(  91)				_this1->flush();
            			}
HXDLIN(  91)			if (::hx::IsNull( _this1->b )) {
HXLINE(  91)				_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE(  91)				::Array< ::String > _this = _this1->b;
HXDLIN(  91)				_this->push(::Std_obj::string(x1));
            			}
            		}
HXLINE(  92)		{
HXLINE(  92)			 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  92)			if ((_g->_hx_getIndex() == 13)) {
HXLINE(  93)				::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  93)				{
HXLINE(  94)					{
HXLINE(  94)						 ::StringBuf _this = this->buffer;
HXDLIN(  94)						 ::Dynamic x = HX_("{",7b,00,00,00);
HXDLIN(  94)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  94)							_this->flush();
            						}
HXDLIN(  94)						if (::hx::IsNull( _this->b )) {
HXLINE(  94)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE(  94)							::Array< ::String > _this1 = _this->b;
HXDLIN(  94)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE(  95)					bool first = true;
HXLINE(  96)					{
HXLINE(  96)						int _g1 = 0;
HXDLIN(  96)						while((_g1 < vl->length)){
HXLINE(  96)							 ::Dynamic v = vl->__get(_g1);
HXDLIN(  96)							_g1 = (_g1 + 1);
HXLINE(  97)							if (first) {
HXLINE(  97)								first = false;
            							}
            							else {
HXLINE(  97)								 ::StringBuf _this = this->buffer;
HXDLIN(  97)								 ::Dynamic x = HX_(", ",74,26,00,00);
HXDLIN(  97)								if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  97)									_this->flush();
            								}
HXDLIN(  97)								if (::hx::IsNull( _this->b )) {
HXLINE(  97)									_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE(  97)									::Array< ::String > _this1 = _this->b;
HXDLIN(  97)									_this1->push(::Std_obj::string(x));
            								}
            							}
HXLINE(  98)							this->addVar(v,v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),tabs,v);
            						}
            					}
HXLINE( 100)					{
HXLINE( 100)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 100)						 ::Dynamic x1 = HX_("}",7d,00,00,00);
HXDLIN( 100)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 100)							_this1->flush();
            						}
HXDLIN( 100)						if (::hx::IsNull( _this1->b )) {
HXLINE( 100)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 100)							::Array< ::String > _this = _this1->b;
HXDLIN( 100)							_this->push(::Std_obj::string(x1));
            						}
            					}
            				}
            			}
            			else {
HXLINE( 102)				 ::Dynamic v1 = ::hxsl::Tools_obj::toString(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic));
HXDLIN( 102)				{
HXLINE( 102)					 ::StringBuf _this = this->buffer;
HXDLIN( 102)					 ::Dynamic x = v1;
HXDLIN( 102)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 102)						_this->flush();
            					}
HXDLIN( 102)					if (::hx::IsNull( _this->b )) {
HXLINE( 102)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 102)						::Array< ::String > _this1 = _this->b;
HXDLIN( 102)						_this1->push(::Std_obj::string(x));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Printer_obj,addVar,(void))

void Printer_obj::addFun( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_f43f4e694940fe57_106_addFun)
HXLINE( 107)		{
HXLINE( 107)			 ::StringBuf _this = this->buffer;
HXDLIN( 107)			 ::Dynamic x =  ::Dynamic(((HX_("function ",08,0a,03,b4) +  ::Dynamic(f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic))->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + HX_("(",28,00,00,00)));
HXDLIN( 107)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 107)				_this->flush();
            			}
HXDLIN( 107)			if (::hx::IsNull( _this->b )) {
HXLINE( 107)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 107)				::Array< ::String > _this1 = _this->b;
HXDLIN( 107)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 108)		bool first = true;
HXLINE( 109)		{
HXLINE( 109)			int _g = 0;
HXDLIN( 109)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXDLIN( 109)			while((_g < _g1->length)){
HXLINE( 109)				 ::Dynamic a = _g1->__get(_g);
HXDLIN( 109)				_g = (_g + 1);
HXLINE( 110)				if (first) {
HXLINE( 111)					{
HXLINE( 111)						 ::StringBuf _this = this->buffer;
HXDLIN( 111)						 ::Dynamic x = HX_(" ",20,00,00,00);
HXDLIN( 111)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 111)							_this->flush();
            						}
HXDLIN( 111)						if (::hx::IsNull( _this->b )) {
HXLINE( 111)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 111)							::Array< ::String > _this1 = _this->b;
HXDLIN( 111)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 112)					first = false;
            				}
            				else {
HXLINE( 114)					 ::StringBuf _this = this->buffer;
HXDLIN( 114)					 ::Dynamic x = HX_(", ",74,26,00,00);
HXDLIN( 114)					if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 114)						_this->flush();
            					}
HXDLIN( 114)					if (::hx::IsNull( _this->b )) {
HXLINE( 114)						_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 114)						::Array< ::String > _this1 = _this->b;
HXDLIN( 114)						_this1->push(::Std_obj::string(x));
            					}
            				}
HXLINE( 115)				this->addVar(a,::hxsl::VarKind_obj::Local_dyn(),null(),null());
            			}
            		}
HXLINE( 117)		if ((( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) )->length > 0)) {
HXLINE( 117)			 ::StringBuf _this = this->buffer;
HXDLIN( 117)			 ::Dynamic x = HX_(" ",20,00,00,00);
HXDLIN( 117)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 117)				_this->flush();
            			}
HXDLIN( 117)			if (::hx::IsNull( _this->b )) {
HXLINE( 117)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 117)				::Array< ::String > _this1 = _this->b;
HXDLIN( 117)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 118)		{
HXLINE( 118)			 ::Dynamic v = ((HX_(") : ",3d,3a,32,1b) + ::hxsl::Tools_obj::toString(f->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic))) + HX_(" ",20,00,00,00));
HXDLIN( 118)			{
HXLINE( 118)				 ::StringBuf _this1 = this->buffer;
HXDLIN( 118)				 ::Dynamic x1 = v;
HXDLIN( 118)				if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 118)					_this1->flush();
            				}
HXDLIN( 118)				if (::hx::IsNull( _this1->b )) {
HXLINE( 118)					_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            				}
            				else {
HXLINE( 118)					::Array< ::String > _this = _this1->b;
HXDLIN( 118)					_this->push(::Std_obj::string(x1));
            				}
            			}
            		}
HXLINE( 119)		this->addExpr(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,addFun,(void))

void Printer_obj::addVarName( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f43f4e694940fe57_122_addVarName)
HXLINE( 123)		if (::hx::IsNotNull( v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) )) {
HXLINE( 124)			this->addVarName(v->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic));
HXLINE( 125)			{
HXLINE( 125)				 ::StringBuf _this = this->buffer;
HXDLIN( 125)				 ::Dynamic x = HX_(".",2e,00,00,00);
HXDLIN( 125)				if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 125)					_this->flush();
            				}
HXDLIN( 125)				if (::hx::IsNull( _this->b )) {
HXLINE( 125)					_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 125)					::Array< ::String > _this1 = _this->b;
HXDLIN( 125)					_this1->push(::Std_obj::string(x));
            				}
            			}
            		}
HXLINE( 127)		{
HXLINE( 127)			 ::StringBuf _this = this->buffer;
HXDLIN( 127)			 ::Dynamic x =  ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic));
HXDLIN( 127)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 127)				_this->flush();
            			}
HXDLIN( 127)			if (::hx::IsNull( _this->b )) {
HXLINE( 127)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 127)				::Array< ::String > _this1 = _this->b;
HXDLIN( 127)				_this1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 128)		if (this->varId) {
HXLINE( 129)			 ::StringBuf _this = this->buffer;
HXDLIN( 129)			 ::Dynamic x =  ::Dynamic((HX_("@",40,00,00,00) + v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
HXDLIN( 129)			if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 129)				_this->flush();
            			}
HXDLIN( 129)			if (::hx::IsNull( _this->b )) {
HXLINE( 129)				_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 129)				::Array< ::String > _this1 = _this->b;
HXDLIN( 129)				_this1->push(::Std_obj::string(x));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,addVarName,(void))

void Printer_obj::addConst( ::hxsl::Const c){
            	HX_STACKFRAME(&_hx_pos_f43f4e694940fe57_135_addConst)
HXDLIN( 135)		 ::StringBuf _this = this->buffer;
HXDLIN( 135)		 ::Dynamic x;
HXDLIN( 135)		switch((int)(c->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 135)				x = HX_("null",87,9e,0e,49);
            			}
            			break;
            			case (int)1: {
HXLINE( 137)				bool b = c->_hx_getBool(0);
HXLINE( 135)				x = b;
            			}
            			break;
            			case (int)2: {
HXLINE( 138)				int i = c->_hx_getInt(0);
HXLINE( 135)				x = i;
            			}
            			break;
            			case (int)3: {
HXLINE( 139)				Float f = c->_hx_getFloat(0);
HXLINE( 135)				x = f;
            			}
            			break;
            			case (int)4: {
HXLINE( 140)				::String s = c->_hx_getString(0);
HXLINE( 135)				x = ((HX_("\"",22,00,00,00) + s) + HX_("\"",22,00,00,00));
            			}
            			break;
            		}
HXDLIN( 135)		 ::Dynamic x1 = x;
HXDLIN( 135)		if (::hx::IsNotNull( _this->charBuf )) {
HXDLIN( 135)			_this->flush();
            		}
HXDLIN( 135)		if (::hx::IsNull( _this->b )) {
HXDLIN( 135)			_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            		}
            		else {
HXDLIN( 135)			::Array< ::String > _this1 = _this->b;
HXDLIN( 135)			_this1->push(::Std_obj::string(x1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,addConst,(void))

void Printer_obj::addExpr( ::Dynamic e,::String tabs){
            	HX_STACKFRAME(&_hx_pos_f43f4e694940fe57_145_addExpr)
HXDLIN( 145)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 145)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 259)				 ::hxsl::Const c = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 260)				this->addConst(c);
            			}
            			break;
            			case (int)1: {
HXLINE( 146)				 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 147)				this->addVarName(v);
            			}
            			break;
            			case (int)2: {
HXLINE( 174)				 ::hxsl::TGlobal g = _g->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >();
HXLINE( 175)				{
HXLINE( 175)					 ::Dynamic v = ::hxsl::Tools2_obj::toString(g);
HXDLIN( 175)					{
HXLINE( 175)						 ::StringBuf _this = this->buffer;
HXDLIN( 175)						 ::Dynamic x = v;
HXDLIN( 175)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 175)							_this->flush();
            						}
HXDLIN( 175)						if (::hx::IsNull( _this->b )) {
HXLINE( 175)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 175)							::Array< ::String > _this1 = _this->b;
HXDLIN( 175)							_this1->push(::Std_obj::string(x));
            						}
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 255)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 255)				{
HXLINE( 256)					{
HXLINE( 256)						 ::StringBuf _this = this->buffer;
HXDLIN( 256)						 ::Dynamic x = HX_("(",28,00,00,00);
HXDLIN( 256)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 256)							_this->flush();
            						}
HXDLIN( 256)						if (::hx::IsNull( _this->b )) {
HXLINE( 256)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 256)							::Array< ::String > _this1 = _this->b;
HXDLIN( 256)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 257)					this->addExpr(e,tabs);
HXLINE( 258)					{
HXLINE( 258)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 258)						 ::Dynamic x1 = HX_(")",29,00,00,00);
HXDLIN( 258)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 258)							_this1->flush();
            						}
HXDLIN( 258)						if (::hx::IsNull( _this1->b )) {
HXLINE( 258)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 258)							::Array< ::String > _this = _this1->b;
HXDLIN( 258)							_this->push(::Std_obj::string(x1));
            						}
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 224)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 224)				{
HXLINE( 225)					{
HXLINE( 225)						 ::StringBuf _this = this->buffer;
HXDLIN( 225)						 ::Dynamic x = HX_("{",7b,00,00,00);
HXDLIN( 225)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 225)							_this->flush();
            						}
HXDLIN( 225)						if (::hx::IsNull( _this->b )) {
HXLINE( 225)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 225)							::Array< ::String > _this1 = _this->b;
HXDLIN( 225)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 226)					tabs = (tabs + HX_("\t",09,00,00,00));
HXLINE( 227)					{
HXLINE( 227)						int _g1 = 0;
HXDLIN( 227)						while((_g1 < el->length)){
HXLINE( 227)							 ::Dynamic e = el->__get(_g1);
HXDLIN( 227)							_g1 = (_g1 + 1);
HXLINE( 228)							{
HXLINE( 228)								 ::StringBuf _this = this->buffer;
HXDLIN( 228)								 ::Dynamic x = (HX_("\n",0a,00,00,00) + tabs);
HXDLIN( 228)								if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 228)									_this->flush();
            								}
HXDLIN( 228)								if (::hx::IsNull( _this->b )) {
HXLINE( 228)									_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 228)									::Array< ::String > _this1 = _this->b;
HXDLIN( 228)									_this1->push(::Std_obj::string(x));
            								}
            							}
HXLINE( 229)							this->addExpr(e,tabs);
HXLINE( 230)							{
HXLINE( 230)								 ::StringBuf _this1 = this->buffer;
HXDLIN( 230)								 ::Dynamic x1 = HX_(";",3b,00,00,00);
HXDLIN( 230)								if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 230)									_this1->flush();
            								}
HXDLIN( 230)								if (::hx::IsNull( _this1->b )) {
HXLINE( 230)									_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            								}
            								else {
HXLINE( 230)									::Array< ::String > _this = _this1->b;
HXDLIN( 230)									_this->push(::Std_obj::string(x1));
            								}
            							}
            						}
            					}
HXLINE( 232)					tabs = tabs.substr(1,null());
HXLINE( 233)					if ((el->length > 0)) {
HXLINE( 234)						 ::StringBuf _this = this->buffer;
HXDLIN( 234)						 ::Dynamic x = (HX_("\n",0a,00,00,00) + tabs);
HXDLIN( 234)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 234)							_this->flush();
            						}
HXDLIN( 234)						if (::hx::IsNull( _this->b )) {
HXLINE( 234)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 234)							::Array< ::String > _this1 = _this->b;
HXDLIN( 234)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 235)					{
HXLINE( 235)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 235)						 ::Dynamic x1 = HX_("}",7d,00,00,00);
HXDLIN( 235)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 235)							_this1->flush();
            						}
HXDLIN( 235)						if (::hx::IsNull( _this1->b )) {
HXLINE( 235)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 235)							::Array< ::String > _this = _this1->b;
HXDLIN( 235)							_this->push(::Std_obj::string(x1));
            						}
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 246)				 ::haxe::macro::Binop op = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 246)				 ::Dynamic e1 = _g->_hx_getObject(1);
HXDLIN( 246)				 ::Dynamic e2 = _g->_hx_getObject(2);
HXDLIN( 246)				{
HXLINE( 247)					this->addExpr(e1,tabs);
HXLINE( 248)					{
HXLINE( 248)						 ::Dynamic v = ((HX_(" ",20,00,00,00) + ::hxsl::Printer_obj::opStr(op)) + HX_(" ",20,00,00,00));
HXDLIN( 248)						{
HXLINE( 248)							 ::StringBuf _this = this->buffer;
HXDLIN( 248)							 ::Dynamic x = v;
HXDLIN( 248)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 248)								_this->flush();
            							}
HXDLIN( 248)							if (::hx::IsNull( _this->b )) {
HXLINE( 248)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 248)								::Array< ::String > _this1 = _this->b;
HXDLIN( 248)								_this1->push(::Std_obj::string(x));
            							}
            						}
            					}
HXLINE( 249)					this->addExpr(e2,tabs);
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 236)				 ::haxe::macro::Unop op = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Unop >();
HXDLIN( 236)				 ::Dynamic e = _g->_hx_getObject(1);
HXDLIN( 236)				{
HXLINE( 237)					{
HXLINE( 237)						 ::Dynamic v;
HXDLIN( 237)						switch((int)(op->_hx_getIndex())){
            							case (int)0: {
HXLINE( 237)								v = HX_("++",a0,25,00,00);
            							}
            							break;
            							case (int)1: {
HXLINE( 237)								v = HX_("--",60,27,00,00);
            							}
            							break;
            							case (int)2: {
HXLINE( 237)								v = HX_("!",21,00,00,00);
            							}
            							break;
            							case (int)3: {
HXLINE( 237)								v = HX_("-",2d,00,00,00);
            							}
            							break;
            							case (int)4: {
HXLINE( 237)								v = HX_("~",7e,00,00,00);
            							}
            							break;
            							default:{
HXLINE( 243)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            							}
            						}
HXLINE( 237)						{
HXLINE( 237)							 ::StringBuf _this = this->buffer;
HXDLIN( 237)							 ::Dynamic x = v;
HXDLIN( 237)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 237)								_this->flush();
            							}
HXDLIN( 237)							if (::hx::IsNull( _this->b )) {
HXLINE( 237)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 237)								::Array< ::String > _this1 = _this->b;
HXDLIN( 237)								_this1->push(::Std_obj::string(x));
            							}
            						}
            					}
HXLINE( 245)					this->addExpr(e,tabs);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 148)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 148)				 ::Dynamic init = _g->_hx_getObject(1);
HXDLIN( 148)				{
HXLINE( 149)					this->addVar(v,::hxsl::VarKind_obj::Local_dyn(),tabs,null());
HXLINE( 150)					if (::hx::IsNotNull( init )) {
HXLINE( 151)						{
HXLINE( 151)							 ::StringBuf _this = this->buffer;
HXDLIN( 151)							 ::Dynamic x = HX_(" = ",63,7d,18,00);
HXDLIN( 151)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 151)								_this->flush();
            							}
HXDLIN( 151)							if (::hx::IsNull( _this->b )) {
HXLINE( 151)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 151)								::Array< ::String > _this1 = _this->b;
HXDLIN( 151)								_this1->push(::Std_obj::string(x));
            							}
            						}
HXLINE( 152)						this->addExpr(init,tabs);
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 176)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 176)				::Array< ::Dynamic> el = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 176)				{
HXLINE( 177)					this->addExpr(e,tabs);
HXLINE( 178)					{
HXLINE( 178)						 ::StringBuf _this = this->buffer;
HXDLIN( 178)						 ::Dynamic x = HX_("(",28,00,00,00);
HXDLIN( 178)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 178)							_this->flush();
            						}
HXDLIN( 178)						if (::hx::IsNull( _this->b )) {
HXLINE( 178)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 178)							::Array< ::String > _this1 = _this->b;
HXDLIN( 178)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 179)					bool first = true;
HXLINE( 180)					{
HXLINE( 180)						int _g1 = 0;
HXDLIN( 180)						while((_g1 < el->length)){
HXLINE( 180)							 ::Dynamic e = el->__get(_g1);
HXDLIN( 180)							_g1 = (_g1 + 1);
HXLINE( 181)							if (first) {
HXLINE( 181)								first = false;
            							}
            							else {
HXLINE( 181)								 ::StringBuf _this = this->buffer;
HXDLIN( 181)								 ::Dynamic x = HX_(", ",74,26,00,00);
HXDLIN( 181)								if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 181)									_this->flush();
            								}
HXDLIN( 181)								if (::hx::IsNull( _this->b )) {
HXLINE( 181)									_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 181)									::Array< ::String > _this1 = _this->b;
HXDLIN( 181)									_this1->push(::Std_obj::string(x));
            								}
            							}
HXLINE( 182)							this->addExpr(e,tabs);
            						}
            					}
HXLINE( 184)					{
HXLINE( 184)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 184)						 ::Dynamic x1 = HX_(")",29,00,00,00);
HXDLIN( 184)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 184)							_this1->flush();
            						}
HXDLIN( 184)						if (::hx::IsNull( _this1->b )) {
HXLINE( 184)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 184)							::Array< ::String > _this = _this1->b;
HXDLIN( 184)							_this->push(::Std_obj::string(x1));
            						}
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 154)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 154)				::Array< ::Dynamic> regs = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 154)				{
HXLINE( 155)					this->addExpr(e,tabs);
HXLINE( 156)					{
HXLINE( 156)						 ::StringBuf _this = this->buffer;
HXDLIN( 156)						 ::Dynamic x = HX_(".",2e,00,00,00);
HXDLIN( 156)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 156)							_this->flush();
            						}
HXDLIN( 156)						if (::hx::IsNull( _this->b )) {
HXLINE( 156)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 156)							::Array< ::String > _this1 = _this->b;
HXDLIN( 156)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 157)					{
HXLINE( 157)						int _g1 = 0;
HXDLIN( 157)						while((_g1 < regs->length)){
HXLINE( 157)							 ::hxsl::Component r = regs->__get(_g1).StaticCast<  ::hxsl::Component >();
HXDLIN( 157)							_g1 = (_g1 + 1);
HXLINE( 158)							{
HXLINE( 158)								 ::Dynamic v = ::hxsl::Printer_obj::SWIZ->__get(_hx_getEnumValueIndex(r));
HXDLIN( 158)								{
HXLINE( 158)									 ::StringBuf _this = this->buffer;
HXDLIN( 158)									 ::Dynamic x = v;
HXDLIN( 158)									if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 158)										_this->flush();
            									}
HXDLIN( 158)									if (::hx::IsNull( _this->b )) {
HXLINE( 158)										_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 158)										::Array< ::String > _this1 = _this->b;
HXDLIN( 158)										_this1->push(::Std_obj::string(x));
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 165)				 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 165)				 ::Dynamic eif = _g->_hx_getObject(1);
HXDLIN( 165)				 ::Dynamic eelse = _g->_hx_getObject(2);
HXDLIN( 165)				{
HXLINE( 166)					{
HXLINE( 166)						 ::StringBuf _this = this->buffer;
HXDLIN( 166)						 ::Dynamic x = HX_("if( ",15,f0,b4,45);
HXDLIN( 166)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 166)							_this->flush();
            						}
HXDLIN( 166)						if (::hx::IsNull( _this->b )) {
HXLINE( 166)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 166)							::Array< ::String > _this1 = _this->b;
HXDLIN( 166)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 167)					this->addExpr(cond,tabs);
HXLINE( 168)					{
HXLINE( 168)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 168)						 ::Dynamic x1 = HX_(" ) ",f7,6b,18,00);
HXDLIN( 168)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 168)							_this1->flush();
            						}
HXDLIN( 168)						if (::hx::IsNull( _this1->b )) {
HXLINE( 168)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 168)							::Array< ::String > _this = _this1->b;
HXDLIN( 168)							_this->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 169)					this->addExpr(eif,tabs);
HXLINE( 170)					if (::hx::IsNotNull( eelse )) {
HXLINE( 171)						{
HXLINE( 171)							 ::StringBuf _this = this->buffer;
HXDLIN( 171)							 ::Dynamic x = HX_(" else ",27,c9,9e,3a);
HXDLIN( 171)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 171)								_this->flush();
            							}
HXDLIN( 171)							if (::hx::IsNull( _this->b )) {
HXLINE( 171)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 171)								::Array< ::String > _this1 = _this->b;
HXDLIN( 171)								_this1->push(::Std_obj::string(x));
            							}
            						}
HXLINE( 172)						this->addExpr(eelse,tabs);
            					}
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 223)				 ::StringBuf _this = this->buffer;
HXDLIN( 223)				 ::Dynamic x = HX_("discard",1e,1a,aa,b2);
HXDLIN( 223)				if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 223)					_this->flush();
            				}
HXDLIN( 223)				if (::hx::IsNull( _this->b )) {
HXLINE( 223)					_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 223)					::Array< ::String > _this1 = _this->b;
HXDLIN( 223)					_this1->push(::Std_obj::string(x));
            				}
            			}
            			break;
            			case (int)12: {
HXLINE( 159)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 159)				{
HXLINE( 160)					{
HXLINE( 160)						 ::StringBuf _this = this->buffer;
HXDLIN( 160)						 ::Dynamic x = HX_("return",b0,a4,2d,09);
HXDLIN( 160)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 160)							_this->flush();
            						}
HXDLIN( 160)						if (::hx::IsNull( _this->b )) {
HXLINE( 160)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 160)							::Array< ::String > _this1 = _this->b;
HXDLIN( 160)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 161)					if (::hx::IsNotNull( e )) {
HXLINE( 162)						{
HXLINE( 162)							 ::StringBuf _this = this->buffer;
HXDLIN( 162)							 ::Dynamic x = HX_(" ",20,00,00,00);
HXDLIN( 162)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 162)								_this->flush();
            							}
HXDLIN( 162)							if (::hx::IsNull( _this->b )) {
HXLINE( 162)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 162)								::Array< ::String > _this1 = _this->b;
HXDLIN( 162)								_this1->push(::Std_obj::string(x));
            							}
            						}
HXLINE( 163)						this->addExpr(e,tabs);
            					}
            				}
            			}
            			break;
            			case (int)13: {
HXLINE( 185)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 185)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 185)				 ::Dynamic loop = _g->_hx_getObject(2);
HXDLIN( 185)				{
HXLINE( 186)					{
HXLINE( 186)						 ::StringBuf _this = this->buffer;
HXDLIN( 186)						 ::Dynamic x = HX_("for( ",41,7e,94,04);
HXDLIN( 186)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 186)							_this->flush();
            						}
HXDLIN( 186)						if (::hx::IsNull( _this->b )) {
HXLINE( 186)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 186)							::Array< ::String > _this1 = _this->b;
HXDLIN( 186)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 187)					this->addVarName(v);
HXLINE( 188)					{
HXLINE( 188)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 188)						 ::Dynamic x1 = HX_(" in ",7b,e0,76,15);
HXDLIN( 188)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 188)							_this1->flush();
            						}
HXDLIN( 188)						if (::hx::IsNull( _this1->b )) {
HXLINE( 188)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 188)							::Array< ::String > _this = _this1->b;
HXDLIN( 188)							_this->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 189)					this->addExpr(it,tabs);
HXLINE( 190)					{
HXLINE( 190)						 ::StringBuf _this2 = this->buffer;
HXDLIN( 190)						 ::Dynamic x2 = HX_(" ) ",f7,6b,18,00);
HXDLIN( 190)						if (::hx::IsNotNull( _this2->charBuf )) {
HXLINE( 190)							_this2->flush();
            						}
HXDLIN( 190)						if (::hx::IsNull( _this2->b )) {
HXLINE( 190)							_this2->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 190)							::Array< ::String > _this = _this2->b;
HXDLIN( 190)							_this->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 191)					this->addExpr(loop,tabs);
            				}
            			}
            			break;
            			case (int)14: {
HXLINE( 219)				 ::StringBuf _this = this->buffer;
HXDLIN( 219)				 ::Dynamic x = HX_("continue",67,e0,c8,31);
HXDLIN( 219)				if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 219)					_this->flush();
            				}
HXDLIN( 219)				if (::hx::IsNull( _this->b )) {
HXLINE( 219)					_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 219)					::Array< ::String > _this1 = _this->b;
HXDLIN( 219)					_this1->push(::Std_obj::string(x));
            				}
            			}
            			break;
            			case (int)15: {
HXLINE( 221)				 ::StringBuf _this = this->buffer;
HXDLIN( 221)				 ::Dynamic x = HX_("break",bf,24,ec,b8);
HXDLIN( 221)				if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 221)					_this->flush();
            				}
HXDLIN( 221)				if (::hx::IsNull( _this->b )) {
HXLINE( 221)					_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 221)					::Array< ::String > _this1 = _this->b;
HXDLIN( 221)					_this1->push(::Std_obj::string(x));
            				}
            			}
            			break;
            			case (int)16: {
HXLINE( 250)				 ::Dynamic e1 = _g->_hx_getObject(0);
HXDLIN( 250)				 ::Dynamic e2 = _g->_hx_getObject(1);
HXDLIN( 250)				{
HXLINE( 251)					this->addExpr(e1,tabs);
HXLINE( 252)					{
HXLINE( 252)						 ::StringBuf _this = this->buffer;
HXDLIN( 252)						 ::Dynamic x = HX_("[",5b,00,00,00);
HXDLIN( 252)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 252)							_this->flush();
            						}
HXDLIN( 252)						if (::hx::IsNull( _this->b )) {
HXLINE( 252)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 252)							::Array< ::String > _this1 = _this->b;
HXDLIN( 252)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 253)					this->addExpr(e2,tabs);
HXLINE( 254)					{
HXLINE( 254)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 254)						 ::Dynamic x1 = HX_("]",5d,00,00,00);
HXDLIN( 254)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 254)							_this1->flush();
            						}
HXDLIN( 254)						if (::hx::IsNull( _this1->b )) {
HXLINE( 254)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 254)							::Array< ::String > _this = _this1->b;
HXDLIN( 254)							_this->push(::Std_obj::string(x1));
            						}
            					}
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 261)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 261)				{
HXLINE( 262)					{
HXLINE( 262)						 ::StringBuf _this = this->buffer;
HXDLIN( 262)						 ::Dynamic x = HX_("[",5b,00,00,00);
HXDLIN( 262)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 262)							_this->flush();
            						}
HXDLIN( 262)						if (::hx::IsNull( _this->b )) {
HXLINE( 262)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 262)							::Array< ::String > _this1 = _this->b;
HXDLIN( 262)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 263)					bool first = true;
HXLINE( 264)					{
HXLINE( 264)						int _g1 = 0;
HXDLIN( 264)						while((_g1 < el->length)){
HXLINE( 264)							 ::Dynamic e = el->__get(_g1);
HXDLIN( 264)							_g1 = (_g1 + 1);
HXLINE( 265)							if (first) {
HXLINE( 265)								first = false;
            							}
            							else {
HXLINE( 265)								 ::StringBuf _this = this->buffer;
HXDLIN( 265)								 ::Dynamic x = HX_(", ",74,26,00,00);
HXDLIN( 265)								if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 265)									_this->flush();
            								}
HXDLIN( 265)								if (::hx::IsNull( _this->b )) {
HXLINE( 265)									_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 265)									::Array< ::String > _this1 = _this->b;
HXDLIN( 265)									_this1->push(::Std_obj::string(x));
            								}
            							}
HXLINE( 266)							this->addExpr(e,tabs);
            						}
            					}
HXLINE( 268)					{
HXLINE( 268)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 268)						 ::Dynamic x1 = HX_("]",5d,00,00,00);
HXDLIN( 268)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 268)							_this1->flush();
            						}
HXDLIN( 268)						if (::hx::IsNull( _this1->b )) {
HXLINE( 268)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 268)							::Array< ::String > _this = _this1->b;
HXDLIN( 268)							_this->push(::Std_obj::string(x1));
            						}
            					}
            				}
            			}
            			break;
            			case (int)18: {
HXLINE( 192)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 192)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 192)				 ::Dynamic def = _g->_hx_getObject(2);
HXDLIN( 192)				{
HXLINE( 193)					{
HXLINE( 193)						 ::StringBuf _this = this->buffer;
HXDLIN( 193)						 ::Dynamic x = HX_("switch( ",ec,d1,d6,0d);
HXDLIN( 193)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 193)							_this->flush();
            						}
HXDLIN( 193)						if (::hx::IsNull( _this->b )) {
HXLINE( 193)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 193)							::Array< ::String > _this1 = _this->b;
HXDLIN( 193)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 194)					this->addExpr(e,tabs);
HXLINE( 195)					{
HXLINE( 195)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 195)						 ::Dynamic x1 = HX_(") {",c4,38,1f,00);
HXDLIN( 195)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 195)							_this1->flush();
            						}
HXDLIN( 195)						if (::hx::IsNull( _this1->b )) {
HXLINE( 195)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 195)							::Array< ::String > _this = _this1->b;
HXDLIN( 195)							_this->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 196)					::String old = tabs;
HXLINE( 197)					{
HXLINE( 197)						int _g1 = 0;
HXDLIN( 197)						while((_g1 < cases->length)){
HXLINE( 197)							 ::Dynamic c = cases->__get(_g1);
HXDLIN( 197)							_g1 = (_g1 + 1);
HXLINE( 198)							{
HXLINE( 198)								 ::StringBuf _this = this->buffer;
HXDLIN( 198)								 ::Dynamic x = (HX_("\n",0a,00,00,00) + tabs);
HXDLIN( 198)								if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 198)									_this->flush();
            								}
HXDLIN( 198)								if (::hx::IsNull( _this->b )) {
HXLINE( 198)									_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 198)									::Array< ::String > _this1 = _this->b;
HXDLIN( 198)									_this1->push(::Std_obj::string(x));
            								}
            							}
HXLINE( 199)							{
HXLINE( 199)								 ::StringBuf _this1 = this->buffer;
HXDLIN( 199)								 ::Dynamic x1 = HX_("case ",70,bb,20,41);
HXDLIN( 199)								if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 199)									_this1->flush();
            								}
HXDLIN( 199)								if (::hx::IsNull( _this1->b )) {
HXLINE( 199)									_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            								}
            								else {
HXLINE( 199)									::Array< ::String > _this = _this1->b;
HXDLIN( 199)									_this->push(::Std_obj::string(x1));
            								}
            							}
HXLINE( 200)							bool first = true;
HXLINE( 201)							{
HXLINE( 201)								int _g = 0;
HXDLIN( 201)								::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 201)								while((_g < _g2->length)){
HXLINE( 201)									 ::Dynamic v = _g2->__get(_g);
HXDLIN( 201)									_g = (_g + 1);
HXLINE( 202)									if (first) {
HXLINE( 202)										first = false;
            									}
            									else {
HXLINE( 202)										 ::StringBuf _this = this->buffer;
HXDLIN( 202)										 ::Dynamic x = HX_(", ",74,26,00,00);
HXDLIN( 202)										if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 202)											_this->flush();
            										}
HXDLIN( 202)										if (::hx::IsNull( _this->b )) {
HXLINE( 202)											_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            										}
            										else {
HXLINE( 202)											::Array< ::String > _this1 = _this->b;
HXDLIN( 202)											_this1->push(::Std_obj::string(x));
            										}
            									}
HXLINE( 203)									this->addExpr(v,tabs);
            								}
            							}
HXLINE( 205)							tabs = (tabs + HX_("\t",09,00,00,00));
HXLINE( 206)							{
HXLINE( 206)								 ::StringBuf _this2 = this->buffer;
HXDLIN( 206)								 ::Dynamic x2 = (HX_(":\n",90,32,00,00) + tabs);
HXDLIN( 206)								if (::hx::IsNotNull( _this2->charBuf )) {
HXLINE( 206)									_this2->flush();
            								}
HXDLIN( 206)								if (::hx::IsNull( _this2->b )) {
HXLINE( 206)									_this2->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            								}
            								else {
HXLINE( 206)									::Array< ::String > _this = _this2->b;
HXDLIN( 206)									_this->push(::Std_obj::string(x2));
            								}
            							}
HXLINE( 207)							this->addExpr(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),tabs);
HXLINE( 208)							tabs = old;
            						}
            					}
HXLINE( 210)					if (::hx::IsNotNull( def )) {
HXLINE( 211)						{
HXLINE( 211)							 ::StringBuf _this = this->buffer;
HXDLIN( 211)							 ::Dynamic x = (HX_("\n",0a,00,00,00) + tabs);
HXDLIN( 211)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 211)								_this->flush();
            							}
HXDLIN( 211)							if (::hx::IsNull( _this->b )) {
HXLINE( 211)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 211)								::Array< ::String > _this1 = _this->b;
HXDLIN( 211)								_this1->push(::Std_obj::string(x));
            							}
            						}
HXLINE( 212)						tabs = (tabs + HX_("\t",09,00,00,00));
HXLINE( 213)						{
HXLINE( 213)							 ::StringBuf _this1 = this->buffer;
HXDLIN( 213)							 ::Dynamic x1 = (HX_("default:\n",91,7d,fc,f6) + tabs);
HXDLIN( 213)							if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 213)								_this1->flush();
            							}
HXDLIN( 213)							if (::hx::IsNull( _this1->b )) {
HXLINE( 213)								_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            							}
            							else {
HXLINE( 213)								::Array< ::String > _this = _this1->b;
HXDLIN( 213)								_this->push(::Std_obj::string(x1));
            							}
            						}
HXLINE( 214)						this->addExpr(def,tabs);
HXLINE( 215)						tabs = old;
            					}
HXLINE( 217)					{
HXLINE( 217)						 ::StringBuf _this2 = this->buffer;
HXDLIN( 217)						 ::Dynamic x2 = ((HX_("\n",0a,00,00,00) + tabs) + HX_("}",7d,00,00,00));
HXDLIN( 217)						if (::hx::IsNotNull( _this2->charBuf )) {
HXLINE( 217)							_this2->flush();
            						}
HXDLIN( 217)						if (::hx::IsNull( _this2->b )) {
HXLINE( 217)							_this2->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 217)							::Array< ::String > _this = _this2->b;
HXDLIN( 217)							_this->push(::Std_obj::string(x2));
            						}
            					}
            				}
            			}
            			break;
            			case (int)19: {
HXLINE( 278)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 278)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 278)				if ((_g->_hx_getBool(2) == false)) {
HXLINE( 269)					 ::Dynamic loop = _g2;
HXDLIN( 269)					 ::Dynamic e = _g1;
HXDLIN( 269)					{
HXLINE( 270)						::String old = tabs;
HXLINE( 271)						tabs = (tabs + HX_("\t",09,00,00,00));
HXLINE( 272)						{
HXLINE( 272)							 ::StringBuf _this = this->buffer;
HXDLIN( 272)							 ::Dynamic x = (HX_("do {\n",a4,64,89,dd) + tabs);
HXDLIN( 272)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 272)								_this->flush();
            							}
HXDLIN( 272)							if (::hx::IsNull( _this->b )) {
HXLINE( 272)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 272)								::Array< ::String > _this1 = _this->b;
HXDLIN( 272)								_this1->push(::Std_obj::string(x));
            							}
            						}
HXLINE( 273)						this->addExpr(loop,tabs);
HXLINE( 274)						tabs = old;
HXLINE( 275)						{
HXLINE( 275)							 ::StringBuf _this1 = this->buffer;
HXDLIN( 275)							 ::Dynamic x1 = ((HX_("\n",0a,00,00,00) + tabs) + HX_("} while( ",46,fe,88,cc));
HXDLIN( 275)							if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 275)								_this1->flush();
            							}
HXDLIN( 275)							if (::hx::IsNull( _this1->b )) {
HXLINE( 275)								_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            							}
            							else {
HXLINE( 275)								::Array< ::String > _this = _this1->b;
HXDLIN( 275)								_this->push(::Std_obj::string(x1));
            							}
            						}
HXLINE( 276)						this->addExpr(e,tabs);
HXLINE( 277)						{
HXLINE( 277)							 ::StringBuf _this2 = this->buffer;
HXDLIN( 277)							 ::Dynamic x2 = HX_(" )",09,1c,00,00);
HXDLIN( 277)							if (::hx::IsNotNull( _this2->charBuf )) {
HXLINE( 277)								_this2->flush();
            							}
HXDLIN( 277)							if (::hx::IsNull( _this2->b )) {
HXLINE( 277)								_this2->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            							}
            							else {
HXLINE( 277)								::Array< ::String > _this = _this2->b;
HXDLIN( 277)								_this->push(::Std_obj::string(x2));
            							}
            						}
            					}
            				}
            				else {
HXLINE( 278)					 ::Dynamic loop = _g2;
HXDLIN( 278)					 ::Dynamic e = _g1;
HXDLIN( 278)					{
HXLINE( 279)						{
HXLINE( 279)							 ::StringBuf _this = this->buffer;
HXDLIN( 279)							 ::Dynamic x = HX_("while( ",e9,74,5a,a6);
HXDLIN( 279)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 279)								_this->flush();
            							}
HXDLIN( 279)							if (::hx::IsNull( _this->b )) {
HXLINE( 279)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 279)								::Array< ::String > _this1 = _this->b;
HXDLIN( 279)								_this1->push(::Std_obj::string(x));
            							}
            						}
HXLINE( 280)						this->addExpr(e,tabs);
HXLINE( 281)						::String old = tabs;
HXLINE( 282)						tabs = (tabs + HX_("\t",09,00,00,00));
HXLINE( 283)						{
HXLINE( 283)							 ::StringBuf _this1 = this->buffer;
HXDLIN( 283)							 ::Dynamic x1 = (HX_(" ) {\n",e6,02,05,88) + tabs);
HXDLIN( 283)							if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 283)								_this1->flush();
            							}
HXDLIN( 283)							if (::hx::IsNull( _this1->b )) {
HXLINE( 283)								_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            							}
            							else {
HXLINE( 283)								::Array< ::String > _this = _this1->b;
HXDLIN( 283)								_this->push(::Std_obj::string(x1));
            							}
            						}
HXLINE( 284)						this->addExpr(loop,tabs);
HXLINE( 285)						tabs = old;
HXLINE( 286)						{
HXLINE( 286)							 ::StringBuf _this2 = this->buffer;
HXDLIN( 286)							 ::Dynamic x2 = ((HX_("\n",0a,00,00,00) + tabs) + HX_("}",7d,00,00,00));
HXDLIN( 286)							if (::hx::IsNotNull( _this2->charBuf )) {
HXLINE( 286)								_this2->flush();
            							}
HXDLIN( 286)							if (::hx::IsNull( _this2->b )) {
HXLINE( 286)								_this2->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            							}
            							else {
HXLINE( 286)								::Array< ::String > _this = _this2->b;
HXDLIN( 286)								_this->push(::Std_obj::string(x2));
            							}
            						}
            					}
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 287)				::String m = _g->_hx_getString(0);
HXDLIN( 287)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 287)				 ::Dynamic e = _g->_hx_getObject(2);
HXDLIN( 287)				{
HXLINE( 288)					{
HXLINE( 288)						 ::StringBuf _this = this->buffer;
HXDLIN( 288)						 ::Dynamic x = HX_("@",40,00,00,00);
HXDLIN( 288)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 288)							_this->flush();
            						}
HXDLIN( 288)						if (::hx::IsNull( _this->b )) {
HXLINE( 288)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 288)							::Array< ::String > _this1 = _this->b;
HXDLIN( 288)							_this1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 289)					{
HXLINE( 289)						 ::StringBuf _this1 = this->buffer;
HXDLIN( 289)						 ::Dynamic x1 = m;
HXDLIN( 289)						if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 289)							_this1->flush();
            						}
HXDLIN( 289)						if (::hx::IsNull( _this1->b )) {
HXLINE( 289)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 289)							::Array< ::String > _this = _this1->b;
HXDLIN( 289)							_this->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 290)					if ((args->length > 0)) {
HXLINE( 291)						{
HXLINE( 291)							 ::StringBuf _this = this->buffer;
HXDLIN( 291)							 ::Dynamic x = HX_("(",28,00,00,00);
HXDLIN( 291)							if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 291)								_this->flush();
            							}
HXDLIN( 291)							if (::hx::IsNull( _this->b )) {
HXLINE( 291)								_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 291)								::Array< ::String > _this1 = _this->b;
HXDLIN( 291)								_this1->push(::Std_obj::string(x));
            							}
            						}
HXLINE( 292)						bool first = true;
HXLINE( 293)						{
HXLINE( 293)							int _g = 0;
HXDLIN( 293)							while((_g < args->length)){
HXLINE( 293)								 ::hxsl::Const c = args->__get(_g).StaticCast<  ::hxsl::Const >();
HXDLIN( 293)								_g = (_g + 1);
HXLINE( 294)								if (first) {
HXLINE( 294)									first = false;
            								}
            								else {
HXLINE( 294)									 ::StringBuf _this = this->buffer;
HXDLIN( 294)									 ::Dynamic x = HX_(", ",74,26,00,00);
HXDLIN( 294)									if (::hx::IsNotNull( _this->charBuf )) {
HXLINE( 294)										_this->flush();
            									}
HXDLIN( 294)									if (::hx::IsNull( _this->b )) {
HXLINE( 294)										_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 294)										::Array< ::String > _this1 = _this->b;
HXDLIN( 294)										_this1->push(::Std_obj::string(x));
            									}
            								}
HXLINE( 295)								this->addConst(c);
            							}
            						}
HXLINE( 297)						{
HXLINE( 297)							 ::StringBuf _this1 = this->buffer;
HXDLIN( 297)							 ::Dynamic x1 = HX_(")",29,00,00,00);
HXDLIN( 297)							if (::hx::IsNotNull( _this1->charBuf )) {
HXLINE( 297)								_this1->flush();
            							}
HXDLIN( 297)							if (::hx::IsNull( _this1->b )) {
HXLINE( 297)								_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            							}
            							else {
HXLINE( 297)								::Array< ::String > _this = _this1->b;
HXDLIN( 297)								_this->push(::Std_obj::string(x1));
            							}
            						}
            					}
HXLINE( 299)					{
HXLINE( 299)						 ::StringBuf _this2 = this->buffer;
HXDLIN( 299)						 ::Dynamic x2 = HX_(" ",20,00,00,00);
HXDLIN( 299)						if (::hx::IsNotNull( _this2->charBuf )) {
HXLINE( 299)							_this2->flush();
            						}
HXDLIN( 299)						if (::hx::IsNull( _this2->b )) {
HXLINE( 299)							_this2->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 299)							::Array< ::String > _this = _this2->b;
HXDLIN( 299)							_this->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 300)					this->addExpr(e,tabs);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,addExpr,(void))

::Array< ::String > Printer_obj::SWIZ;

::String Printer_obj::opStr( ::haxe::macro::Binop op){
            	HX_STACKFRAME(&_hx_pos_f43f4e694940fe57_306_opStr)
HXDLIN( 306)		switch((int)(op->_hx_getIndex())){
            			case (int)0: {
HXLINE( 307)				return HX_("+",2b,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE( 309)				return HX_("*",2a,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE( 310)				return HX_("/",2f,00,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE( 308)				return HX_("-",2d,00,00,00);
            			}
            			break;
            			case (int)4: {
HXLINE( 326)				return HX_("=",3d,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE( 312)				return HX_("==",60,35,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE( 313)				return HX_("!=",fc,1c,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE( 314)				return HX_(">",3e,00,00,00);
            			}
            			break;
            			case (int)8: {
HXLINE( 316)				return HX_(">=",3f,36,00,00);
            			}
            			break;
            			case (int)9: {
HXLINE( 315)				return HX_("<",3c,00,00,00);
            			}
            			break;
            			case (int)10: {
HXLINE( 317)				return HX_("<=",81,34,00,00);
            			}
            			break;
            			case (int)11: {
HXLINE( 320)				return HX_("&",26,00,00,00);
            			}
            			break;
            			case (int)12: {
HXLINE( 319)				return HX_("|",7c,00,00,00);
            			}
            			break;
            			case (int)13: {
HXLINE( 318)				return HX_("^",5e,00,00,00);
            			}
            			break;
            			case (int)14: {
HXLINE( 324)				return HX_("&&",40,21,00,00);
            			}
            			break;
            			case (int)15: {
HXLINE( 325)				return HX_("||",80,6c,00,00);
            			}
            			break;
            			case (int)16: {
HXLINE( 321)				return HX_("<<",80,34,00,00);
            			}
            			break;
            			case (int)17: {
HXLINE( 322)				return HX_(">>",40,36,00,00);
            			}
            			break;
            			case (int)18: {
HXLINE( 323)				return HX_(">>>",fe,41,2f,00);
            			}
            			break;
            			case (int)19: {
HXLINE( 311)				return HX_("%",25,00,00,00);
            			}
            			break;
            			case (int)20: {
HXLINE( 327)				 ::haxe::macro::Binop op1 = op->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 327)				return (::hxsl::Printer_obj::opStr(op1) + HX_("=",3d,00,00,00));
            			}
            			break;
            			case (int)21: {
HXLINE( 329)				return HX_("...",ee,0f,23,00);
            			}
            			break;
            			case (int)22: {
HXLINE( 328)				return HX_("=>",61,35,00,00);
            			}
            			break;
            			case (int)23: {
HXLINE( 331)				return HX_(" in ",7b,e0,76,15);
            			}
            			break;
            		}
HXLINE( 306)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,opStr,return )

::String Printer_obj::toString( ::Dynamic e,::hx::Null< bool >  __o_varId){
            		bool varId = __o_varId.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f43f4e694940fe57_337_toString)
HXDLIN( 337)		return  ::hxsl::Printer_obj::__alloc( HX_CTX ,varId)->exprString(e);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,toString,return )

::String Printer_obj::shaderToString( ::Dynamic s,::hx::Null< bool >  __o_varId){
            		bool varId = __o_varId.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f43f4e694940fe57_341_shaderToString)
HXDLIN( 341)		return  ::hxsl::Printer_obj::__alloc( HX_CTX ,varId)->shaderString(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,shaderToString,return )

void Printer_obj::check( ::Dynamic s,::Array< ::Dynamic> from){
            	HX_GC_STACKFRAME(&_hx_pos_f43f4e694940fe57_345_check)
HXDLIN( 345)		try {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,regVars, ::haxe::ds::IntMap,vars,::Array< ::Dynamic>,regVar) HXARGC(2)
            			void _hx_run( ::Dynamic v,bool reg){
            				HX_GC_STACKFRAME(&_hx_pos_f43f4e694940fe57_348_check)
HXLINE( 349)				if (reg) {
HXLINE( 350)					if (vars->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ))) {
HXLINE( 350)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((HX_("Duplicate var ",2e,b6,7d,cb) + v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))));
            					}
HXLINE( 351)					vars->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),v);
HXLINE( 352)					regVars->__get(0).StaticCast< ::Array< ::Dynamic> >()->push(v);
            				}
            				else {
HXLINE( 355)					vars->remove(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
            				}
HXLINE( 356)				{
HXLINE( 356)					 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 356)					if ((_g->_hx_getIndex() == 13)) {
HXLINE( 357)						::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 358)						{
HXLINE( 358)							int _g1 = 0;
HXDLIN( 358)							while((_g1 < vl->length)){
HXLINE( 358)								 ::Dynamic v = vl->__get(_g1);
HXDLIN( 358)								_g1 = (_g1 + 1);
HXLINE( 359)								regVar->__get(0)(v,reg);
            							}
            						}
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,regVars, ::haxe::ds::IntMap,vars,::Array< ::Dynamic>,regVar,::Array< ::Dynamic>,checkExpr) HXARGC(1)
            			void _hx_run( ::Dynamic e){
            				HX_GC_STACKFRAME(&_hx_pos_f43f4e694940fe57_364_check)
HXLINE( 364)				 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 364)				switch((int)(_g->_hx_getIndex())){
            					case (int)1: {
HXLINE( 365)						 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 366)						if (!(vars->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) )))) {
HXLINE( 366)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((((HX_("Unbound var ",34,e6,62,00) + v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + HX_("@",40,00,00,00)) + v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))));
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 370)						::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 370)						{
HXLINE( 371)							::Array< ::Dynamic> old = regVars->__get(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 372)							regVars[0] = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 373)							{
HXLINE( 373)								int _g1 = 0;
HXDLIN( 373)								while((_g1 < el->length)){
HXLINE( 373)									 ::Dynamic e = el->__get(_g1);
HXDLIN( 373)									_g1 = (_g1 + 1);
HXLINE( 374)									checkExpr->__get(0)(e);
            								}
            							}
HXLINE( 375)							{
HXLINE( 375)								int _g2 = 0;
HXDLIN( 375)								while((_g2 < regVars->__get(0).StaticCast< ::Array< ::Dynamic> >()->length)){
HXLINE( 375)									 ::Dynamic v = regVars->__get(0).StaticCast< ::Array< ::Dynamic> >()->__get(_g2);
HXDLIN( 375)									_g2 = (_g2 + 1);
HXLINE( 376)									regVar->__get(0)(v,false);
            								}
            							}
HXLINE( 377)							regVars[0] = old;
            						}
            					}
            					break;
            					case (int)7: {
HXLINE( 367)						 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 367)						 ::Dynamic init = _g->_hx_getObject(1);
HXDLIN( 367)						{
HXLINE( 368)							if (::hx::IsNotNull( init )) {
HXLINE( 368)								checkExpr->__get(0)(init);
            							}
HXLINE( 369)							regVar->__get(0)(v,true);
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 378)						 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 378)						 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 378)						 ::Dynamic loop = _g->_hx_getObject(2);
HXDLIN( 378)						{
HXLINE( 379)							checkExpr->__get(0)(it);
HXLINE( 380)							regVar->__get(0)(v,true);
HXLINE( 381)							checkExpr->__get(0)(loop);
HXLINE( 382)							regVar->__get(0)(v,false);
            						}
            					}
            					break;
            					default:{
HXLINE( 384)						::hxsl::Tools_obj::iter(e,checkExpr->__get(0));
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 346)			 ::haxe::ds::IntMap vars =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 347)			::Array< ::Dynamic> regVars = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< ::Dynamic>::__new(0));
HXLINE( 348)			::Array< ::Dynamic> regVar = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 348)			regVar[0] =  ::Dynamic(new _hx_Closure_0(regVars,vars,regVar));
HXLINE( 363)			::Array< ::Dynamic> checkExpr = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 363)			checkExpr[0] =  ::Dynamic(new _hx_Closure_1(regVars,vars,regVar,checkExpr));
HXLINE( 387)			{
HXLINE( 387)				int _g = 0;
HXDLIN( 387)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN( 387)				while((_g < _g1->length)){
HXLINE( 387)					 ::Dynamic v = _g1->__get(_g);
HXDLIN( 387)					_g = (_g + 1);
HXLINE( 388)					regVar->__get(0)(v,true);
            				}
            			}
HXLINE( 389)			{
HXLINE( 389)				int _g2 = 0;
HXDLIN( 389)				::Array< ::Dynamic> _g3 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN( 389)				while((_g2 < _g3->length)){
HXLINE( 389)					 ::Dynamic f = _g3->__get(_g2);
HXDLIN( 389)					_g2 = (_g2 + 1);
HXLINE( 390)					{
HXLINE( 390)						int _g = 0;
HXDLIN( 390)						::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXDLIN( 390)						while((_g < _g1->length)){
HXLINE( 390)							 ::Dynamic v = _g1->__get(_g);
HXDLIN( 390)							_g = (_g + 1);
HXLINE( 391)							regVar->__get(0)(v,true);
            						}
            					}
HXLINE( 392)					checkExpr->__get(0)( ::Dynamic(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)));
HXLINE( 393)					{
HXLINE( 393)						int _g4 = 0;
HXDLIN( 393)						::Array< ::Dynamic> _g5 = ( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXDLIN( 393)						while((_g4 < _g5->length)){
HXLINE( 393)							 ::Dynamic v = _g5->__get(_g4);
HXDLIN( 393)							_g4 = (_g4 + 1);
HXLINE( 394)							regVar->__get(0)(v,false);
            						}
            					}
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 396)				{
HXLINE( 396)					null();
            				}
HXDLIN( 396)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 345)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::String >())) {
HXLINE( 396)					::String e = ( (::String)(_g1) );
HXLINE( 397)					::String msg = ((e + HX_("\n    in\n",bb,49,5c,bc)) + ::hxsl::Printer_obj::shaderToString(s,true));
HXLINE( 398)					if (::hx::IsNotNull( from )) {
HXLINE( 399)						::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 399)						{
HXLINE( 399)							int _g1 = 0;
HXDLIN( 399)							while((_g1 < from->length)){
HXLINE( 399)								 ::Dynamic s = from->__get(_g1);
HXDLIN( 399)								_g1 = (_g1 + 1);
HXDLIN( 399)								_g->push(::hxsl::Printer_obj::shaderToString(s,true));
            							}
            						}
HXDLIN( 399)						msg = (msg + (HX_("\n    from\n\n",34,c5,ef,7e) + _g->join(HX_("\n\n",c0,08,00,00))));
            					}
HXLINE( 400)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(msg));
            				}
            				else {
HXDLIN( 345)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,check,(void))


::hx::ObjectPtr< Printer_obj > Printer_obj::__new(::hx::Null< bool >  __o_varId) {
	::hx::ObjectPtr< Printer_obj > __this = new Printer_obj();
	__this->__construct(__o_varId);
	return __this;
}

::hx::ObjectPtr< Printer_obj > Printer_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_varId) {
	Printer_obj *__this = (Printer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Printer_obj), true, "hxsl.Printer"));
	*(void **)__this = Printer_obj::_hx_vtable;
	__this->__construct(__o_varId);
	return __this;
}

Printer_obj::Printer_obj()
{
}

void Printer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Printer);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(varId,"varId");
	HX_MARK_END_CLASS();
}

void Printer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(varId,"varId");
}

::hx::Val Printer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"varId") ) { return ::hx::Val( varId ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"addVar") ) { return ::hx::Val( addVar_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFun") ) { return ::hx::Val( addFun_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addExpr") ) { return ::hx::Val( addExpr_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addConst") ) { return ::hx::Val( addConst_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"varString") ) { return ::hx::Val( varString_dyn() ); }
		if (HX_FIELD_EQ(inName,"funString") ) { return ::hx::Val( funString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exprString") ) { return ::hx::Val( exprString_dyn() ); }
		if (HX_FIELD_EQ(inName,"addVarName") ) { return ::hx::Val( addVarName_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shaderString") ) { return ::hx::Val( shaderString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Printer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SWIZ") ) { outValue = ( SWIZ ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"opStr") ) { outValue = opStr_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"check") ) { outValue = check_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shaderToString") ) { outValue = shaderToString_dyn(); return true; }
	}
	return false;
}

::hx::Val Printer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"varId") ) { varId=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::StringBuf >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Printer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SWIZ") ) { SWIZ=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void Printer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("varId",a2,e6,bc,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Printer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::StringBuf */ ,(int)offsetof(Printer_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsBool,(int)offsetof(Printer_obj,varId),HX_("varId",a2,e6,bc,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Printer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Printer_obj::SWIZ,HX_("SWIZ",95,f9,1e,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Printer_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("varId",a2,e6,bc,31),
	HX_("add",21,f2,49,00),
	HX_("shaderString",d6,c5,18,81),
	HX_("varString",18,23,b7,b1),
	HX_("funString",70,a2,3b,54),
	HX_("exprString",e6,ef,ef,8e),
	HX_("addVar",46,ef,0a,9f),
	HX_("addFun",9e,dc,fe,9e),
	HX_("addVarName",b1,a8,93,32),
	HX_("addConst",82,1f,bb,c3),
	HX_("addExpr",f6,3f,5b,7f),
	::String(null()) };

static void Printer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Printer_obj::SWIZ,"SWIZ");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Printer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Printer_obj::SWIZ,"SWIZ");
};

#endif

::hx::Class Printer_obj::__mClass;

static ::String Printer_obj_sStaticFields[] = {
	HX_("SWIZ",95,f9,1e,37),
	HX_("opStr",10,aa,c1,33),
	HX_("toString",ac,d0,6e,38),
	HX_("shaderToString",f1,78,7c,e9),
	HX_("check",c8,98,b6,45),
	::String(null())
};

void Printer_obj::__register()
{
	Printer_obj _hx_dummy;
	Printer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Printer",f5,73,e8,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Printer_obj::__GetStatic;
	__mClass->mSetStaticField = &Printer_obj::__SetStatic;
	__mClass->mMarkFunc = Printer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Printer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Printer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Printer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Printer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Printer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Printer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Printer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f43f4e694940fe57_132_boot)
HXDLIN( 132)		SWIZ = ::Array_obj< ::String >::fromData( _hx_array_data_15e873f5_38,4);
            	}
}

} // end namespace hxsl
