#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
#ifndef INCLUDED_hxsl_Const
#include <hxsl/Const.h>
#endif
#ifndef INCLUDED_hxsl_Dce
#include <hxsl/Dce.h>
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
#ifndef INCLUDED_hxsl__Dce_VarDeps
#include <hxsl/_Dce/VarDeps.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7477308ddde223d4_27_new,"hxsl.Dce","new",0xab9ff213,"hxsl.Dce.new","hxsl/Dce.hx",27,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_30_debug,"hxsl.Dce","debug",0x06fd86c6,"hxsl.Dce.debug","hxsl/Dce.hx",30,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_37_dce,"hxsl.Dce","dce",0xab9859b9,"hxsl.Dce.dce","hxsl/Dce.hx",37,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_107_get,"hxsl.Dce","get",0xab9aa249,"hxsl.Dce.get","hxsl/Dce.hx",107,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_116_markRec,"hxsl.Dce","markRec",0xf3128e76,"hxsl.Dce.markRec","hxsl/Dce.hx",116,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_124_link,"hxsl.Dce","link",0x7f0472e7,"hxsl.Dce.link","hxsl/Dce.hx",124,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_142_check,"hxsl.Dce","check",0x7594cd3b,"hxsl.Dce.check","hxsl/Dce.hx",142,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_199_check,"hxsl.Dce","check",0x7594cd3b,"hxsl.Dce.check","hxsl/Dce.hx",199,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_203_checkBranches,"hxsl.Dce","checkBranches",0xbc4e7feb,"hxsl.Dce.checkBranches","hxsl/Dce.hx",203,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_214_mapExpr,"hxsl.Dce","mapExpr",0xb3442924,"hxsl.Dce.mapExpr","hxsl/Dce.hx",214,0x7744a77e)
HX_LOCAL_STACK_FRAME(_hx_pos_7477308ddde223d4_261_mapExpr,"hxsl.Dce","mapExpr",0xb3442924,"hxsl.Dce.mapExpr","hxsl/Dce.hx",261,0x7744a77e)
namespace hxsl{

void Dce_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7477308ddde223d4_27_new)
            	}

Dynamic Dce_obj::__CreateEmpty() { return new Dce_obj; }

void *Dce_obj::_hx_vtable = 0;

Dynamic Dce_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Dce_obj > _hx_result = new Dce_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Dce_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c39b439;
}

void Dce_obj::debug(::String msg, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_7477308ddde223d4_30_debug)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Dce_obj,debug,(void))

 ::Dynamic Dce_obj::dce( ::Dynamic vertex, ::Dynamic fragment){
            	HX_GC_STACKFRAME(&_hx_pos_7477308ddde223d4_37_dce)
HXLINE(  39)		this->used =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  40)		this->channelVars = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  42)		::Array< ::Dynamic> inputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  43)		{
HXLINE(  43)			int _g = 0;
HXDLIN(  43)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(vertex->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN(  43)			while((_g < _g1->length)){
HXLINE(  43)				 ::Dynamic v = _g1->__get(_g);
HXDLIN(  43)				_g = (_g + 1);
HXLINE(  44)				 ::hxsl::_Dce::VarDeps i = this->get(v);
HXLINE(  45)				if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Input_dyn() )) {
HXLINE(  46)					inputs->push(i);
            				}
HXLINE(  47)				if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Output_dyn() )) {
HXLINE(  48)					i->keep = true;
            				}
            			}
            		}
HXLINE(  50)		{
HXLINE(  50)			int _g2 = 0;
HXDLIN(  50)			::Array< ::Dynamic> _g3 = ( (::Array< ::Dynamic>)(fragment->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN(  50)			while((_g2 < _g3->length)){
HXLINE(  50)				 ::Dynamic v = _g3->__get(_g2);
HXDLIN(  50)				_g2 = (_g2 + 1);
HXLINE(  51)				 ::hxsl::_Dce::VarDeps i = this->get(v);
HXLINE(  52)				if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Output_dyn() )) {
HXLINE(  53)					i->keep = true;
            				}
            			}
            		}
HXLINE(  57)		{
HXLINE(  57)			int _g4 = 0;
HXDLIN(  57)			::Array< ::Dynamic> _g5 = ( (::Array< ::Dynamic>)(vertex->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  57)			while((_g4 < _g5->length)){
HXLINE(  57)				 ::Dynamic f = _g5->__get(_g4);
HXDLIN(  57)				_g4 = (_g4 + 1);
HXLINE(  58)				this->check(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),::Array_obj< ::Dynamic>::__new(0),::Array_obj< ::Dynamic>::__new(0));
            			}
            		}
HXLINE(  59)		{
HXLINE(  59)			int _g6 = 0;
HXDLIN(  59)			::Array< ::Dynamic> _g7 = ( (::Array< ::Dynamic>)(fragment->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  59)			while((_g6 < _g7->length)){
HXLINE(  59)				 ::Dynamic f = _g7->__get(_g6);
HXDLIN(  59)				_g6 = (_g6 + 1);
HXLINE(  60)				this->check(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),::Array_obj< ::Dynamic>::__new(0),::Array_obj< ::Dynamic>::__new(0));
            			}
            		}
HXLINE(  62)		::Array< ::Dynamic> outExprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  63)		while(true){
HXLINE(  67)			{
HXLINE(  67)				 ::Dynamic v = this->used->iterator();
HXDLIN(  67)				while(( (bool)(v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  67)					 ::hxsl::_Dce::VarDeps v1 = ( ( ::hxsl::_Dce::VarDeps)(v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  68)					if (v1->keep) {
HXLINE(  69)						this->markRec(v1);
            					}
            				}
            			}
HXLINE(  71)			while(true){
HXLINE(  71)				bool _hx_tmp;
HXDLIN(  71)				if ((inputs->length > 1)) {
HXLINE(  71)					_hx_tmp = !(inputs->__get((inputs->length - 1)).StaticCast<  ::hxsl::_Dce::VarDeps >()->used);
            				}
            				else {
HXLINE(  71)					_hx_tmp = false;
            				}
HXDLIN(  71)				if (!(_hx_tmp)) {
HXLINE(  71)					goto _hx_goto_8;
            				}
HXLINE(  72)				inputs->pop().StaticCast<  ::hxsl::_Dce::VarDeps >();
            			}
            			_hx_goto_8:;
HXLINE(  73)			{
HXLINE(  73)				int _g = 0;
HXDLIN(  73)				while((_g < inputs->length)){
HXLINE(  73)					 ::hxsl::_Dce::VarDeps v = inputs->__get(_g).StaticCast<  ::hxsl::_Dce::VarDeps >();
HXDLIN(  73)					_g = (_g + 1);
HXLINE(  74)					this->markRec(v);
            				}
            			}
HXLINE(  76)			outExprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  77)			{
HXLINE(  77)				int _g1 = 0;
HXDLIN(  77)				::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(vertex->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  77)				while((_g1 < _g2->length)){
HXLINE(  77)					 ::Dynamic f = _g2->__get(_g1);
HXDLIN(  77)					_g1 = (_g1 + 1);
HXLINE(  78)					outExprs->push(this->mapExpr(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),false));
            				}
            			}
HXLINE(  79)			{
HXLINE(  79)				int _g3 = 0;
HXDLIN(  79)				::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(fragment->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  79)				while((_g3 < _g4->length)){
HXLINE(  79)					 ::Dynamic f = _g4->__get(_g3);
HXDLIN(  79)					_g3 = (_g3 + 1);
HXLINE(  80)					outExprs->push(this->mapExpr(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic),false));
            				}
            			}
HXLINE(  83)			this->markAsKeep = false;
HXLINE(  84)			{
HXLINE(  84)				int _g5 = 0;
HXDLIN(  84)				while((_g5 < outExprs->length)){
HXLINE(  84)					 ::Dynamic e = outExprs->__get(_g5);
HXDLIN(  84)					_g5 = (_g5 + 1);
HXLINE(  85)					this->checkBranches(e);
            				}
            			}
HXLINE(  86)			if (!(this->markAsKeep)) {
HXLINE(  86)				goto _hx_goto_6;
            			}
            		}
            		_hx_goto_6:;
HXLINE(  89)		{
HXLINE(  89)			int _g8 = 0;
HXDLIN(  89)			::Array< ::Dynamic> _g9 = ( (::Array< ::Dynamic>)(vertex->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  89)			while((_g8 < _g9->length)){
HXLINE(  89)				 ::Dynamic f = _g9->__get(_g8);
HXDLIN(  89)				_g8 = (_g8 + 1);
HXLINE(  90)				f->__SetField(HX_("expr",35,fd,1d,43),outExprs->shift(),::hx::paccDynamic);
            			}
            		}
HXLINE(  91)		{
HXLINE(  91)			int _g10 = 0;
HXDLIN(  91)			::Array< ::Dynamic> _g11 = ( (::Array< ::Dynamic>)(fragment->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  91)			while((_g10 < _g11->length)){
HXLINE(  91)				 ::Dynamic f = _g11->__get(_g10);
HXDLIN(  91)				_g10 = (_g10 + 1);
HXLINE(  92)				f->__SetField(HX_("expr",35,fd,1d,43),outExprs->shift(),::hx::paccDynamic);
            			}
            		}
HXLINE(  94)		{
HXLINE(  94)			 ::Dynamic v = this->used->iterator();
HXDLIN(  94)			while(( (bool)(v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  94)				 ::hxsl::_Dce::VarDeps v1 = ( ( ::hxsl::_Dce::VarDeps)(v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  95)				if (v1->used) {
HXLINE(  95)					continue;
            				}
HXLINE(  96)				if (::hx::IsPointerEq( v1->v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Input_dyn() )) {
HXLINE(  96)					continue;
            				}
HXLINE(  97)				( (::Array< ::Dynamic>)(vertex->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) )->remove(v1->v);
HXLINE(  98)				( (::Array< ::Dynamic>)(fragment->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) )->remove(v1->v);
            			}
            		}
HXLINE( 101)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("vertex",64,db,47,a1),vertex)
            			->setFixed(1,HX_("fragment",d0,5f,e5,ad),fragment));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Dce_obj,dce,return )

 ::hxsl::_Dce::VarDeps Dce_obj::get( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_7477308ddde223d4_107_get)
HXLINE( 108)		 ::hxsl::_Dce::VarDeps vd = ( ( ::hxsl::_Dce::VarDeps)(this->used->get( ::Dynamic(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))) );
HXLINE( 109)		if (::hx::IsNull( vd )) {
HXLINE( 110)			vd =  ::hxsl::_Dce::VarDeps_obj::__alloc( HX_CTX ,v);
HXLINE( 111)			this->used->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),vd);
            		}
HXLINE( 113)		return vd;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dce_obj,get,return )

void Dce_obj::markRec( ::hxsl::_Dce::VarDeps v){
            	HX_STACKFRAME(&_hx_pos_7477308ddde223d4_116_markRec)
HXLINE( 117)		if (v->used) {
HXLINE( 117)			return;
            		}
HXLINE( 119)		v->used = true;
HXLINE( 120)		{
HXLINE( 120)			 ::Dynamic d = v->deps->iterator();
HXDLIN( 120)			while(( (bool)(d->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 120)				 ::hxsl::_Dce::VarDeps d1 = ( ( ::hxsl::_Dce::VarDeps)(d->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 121)				this->markRec(d1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dce_obj,markRec,(void))

void Dce_obj::link( ::Dynamic v,::Array< ::Dynamic> writeTo){
            	HX_STACKFRAME(&_hx_pos_7477308ddde223d4_124_link)
HXLINE( 125)		 ::hxsl::_Dce::VarDeps vd = this->get(v);
HXLINE( 126)		{
HXLINE( 126)			int _g = 0;
HXDLIN( 126)			while((_g < writeTo->length)){
HXLINE( 126)				 ::hxsl::_Dce::VarDeps w = writeTo->__get(_g).StaticCast<  ::hxsl::_Dce::VarDeps >();
HXDLIN( 126)				_g = (_g + 1);
HXLINE( 127)				if (::hx::IsNull( w )) {
HXLINE( 129)					if (!(vd->keep)) {
HXLINE( 131)						vd->keep = true;
HXLINE( 132)						this->markAsKeep = true;
            					}
HXLINE( 134)					continue;
            				}
HXLINE( 137)				w->deps->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),vd);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Dce_obj,link,(void))

void Dce_obj::check( ::Dynamic e,::Array< ::Dynamic> writeTo,::Array< ::Dynamic> isAffected){
            	HX_STACKFRAME(&_hx_pos_7477308ddde223d4_142_check)
HXDLIN( 142)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 142)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE( 143)				 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 144)				this->link(v,writeTo);
            			}
            			break;
            			case (int)4: {
HXLINE( 152)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 152)				{
HXLINE( 153)					::Array< ::Dynamic> noWrite = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 154)					{
HXLINE( 154)						int _g1 = 0;
HXDLIN( 154)						int _g2 = el->length;
HXDLIN( 154)						while((_g1 < _g2)){
HXLINE( 154)							_g1 = (_g1 + 1);
HXDLIN( 154)							int i = (_g1 - 1);
HXLINE( 155)							::Array< ::Dynamic> _hx_tmp;
HXDLIN( 155)							if ((i < (el->length - 1))) {
HXLINE( 155)								_hx_tmp = noWrite;
            							}
            							else {
HXLINE( 155)								_hx_tmp = writeTo;
            							}
HXDLIN( 155)							this->check(el->__get(i),_hx_tmp,isAffected);
            						}
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 145)				 ::haxe::macro::Binop _g1 = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 145)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 145)				 ::Dynamic _g3 = _g->_hx_getObject(2);
HXDLIN( 145)				switch((int)(_g1->_hx_getIndex())){
            					case (int)4: {
HXLINE( 145)						 ::hxsl::TExprDef _g = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 145)						 ::Dynamic _g1 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 145)						 ::hxsl::Type _g4 = _g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 145)						switch((int)(_g->_hx_getIndex())){
            							case (int)1: {
HXLINE( 145)								 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 145)								 ::Dynamic e = _g3;
HXDLIN( 145)								{
HXLINE( 146)									 ::hxsl::_Dce::VarDeps v1 = this->get(v);
HXLINE( 147)									writeTo->push(v1);
HXLINE( 148)									this->check(e,writeTo,isAffected);
HXLINE( 149)									writeTo->pop().StaticCast<  ::hxsl::_Dce::VarDeps >();
HXLINE( 150)									if ((isAffected->indexOf(v1,null()) < 0)) {
HXLINE( 151)										isAffected->push(v1);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 145)								 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 145)								::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 145)								{
HXLINE( 145)									 ::hxsl::TExprDef _g4 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 145)									 ::Dynamic _g5 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 145)									 ::hxsl::Type _g6 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 145)									if ((_g4->_hx_getIndex() == 1)) {
HXLINE( 145)										 ::Dynamic v = _g4->_hx_getObject(0);
HXDLIN( 145)										 ::Dynamic e = _g3;
HXDLIN( 145)										{
HXLINE( 146)											 ::hxsl::_Dce::VarDeps v1 = this->get(v);
HXLINE( 147)											writeTo->push(v1);
HXLINE( 148)											this->check(e,writeTo,isAffected);
HXLINE( 149)											writeTo->pop().StaticCast<  ::hxsl::_Dce::VarDeps >();
HXLINE( 150)											if ((isAffected->indexOf(v1,null()) < 0)) {
HXLINE( 151)												isAffected->push(v1);
            											}
            										}
            									}
            									else {
            										HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            										void _hx_run( ::Dynamic e){
            											HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)											_g(e,writeTo1,isAffected1);
            										}
            										HX_END_LOCAL_FUNC1((void))

HXLINE( 199)										 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)										::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)										::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)										::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_3(writeTo1,_g,isAffected1)));
            									}
            								}
            							}
            							break;
            							default:{
            								HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            								void _hx_run( ::Dynamic e){
            									HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)									_g(e,writeTo1,isAffected1);
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 199)								 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)								::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)								::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)								::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_2(writeTo1,_g,isAffected1)));
            							}
            						}
            					}
            					break;
            					case (int)20: {
HXLINE( 145)						 ::haxe::macro::Binop _g = _g1->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 145)						{
HXLINE( 145)							 ::hxsl::TExprDef _g4 = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 145)							 ::Dynamic _g5 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 145)							 ::hxsl::Type _g6 = _g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 145)							switch((int)(_g4->_hx_getIndex())){
            								case (int)1: {
HXLINE( 145)									 ::Dynamic v = _g4->_hx_getObject(0);
HXDLIN( 145)									 ::Dynamic e = _g3;
HXDLIN( 145)									{
HXLINE( 146)										 ::hxsl::_Dce::VarDeps v1 = this->get(v);
HXLINE( 147)										writeTo->push(v1);
HXLINE( 148)										this->check(e,writeTo,isAffected);
HXLINE( 149)										writeTo->pop().StaticCast<  ::hxsl::_Dce::VarDeps >();
HXLINE( 150)										if ((isAffected->indexOf(v1,null()) < 0)) {
HXLINE( 151)											isAffected->push(v1);
            										}
            									}
            								}
            								break;
            								case (int)9: {
HXLINE( 145)									 ::Dynamic _g = _g4->_hx_getObject(0);
HXDLIN( 145)									::Array< ::Dynamic> _g1 = _g4->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 145)									{
HXLINE( 145)										 ::hxsl::TExprDef _g2 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 145)										 ::Dynamic _g5 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 145)										 ::hxsl::Type _g6 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 145)										if ((_g2->_hx_getIndex() == 1)) {
HXLINE( 145)											 ::Dynamic v = _g2->_hx_getObject(0);
HXDLIN( 145)											 ::Dynamic e = _g3;
HXDLIN( 145)											{
HXLINE( 146)												 ::hxsl::_Dce::VarDeps v1 = this->get(v);
HXLINE( 147)												writeTo->push(v1);
HXLINE( 148)												this->check(e,writeTo,isAffected);
HXLINE( 149)												writeTo->pop().StaticCast<  ::hxsl::_Dce::VarDeps >();
HXLINE( 150)												if ((isAffected->indexOf(v1,null()) < 0)) {
HXLINE( 151)													isAffected->push(v1);
            												}
            											}
            										}
            										else {
            											HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_5,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            											void _hx_run( ::Dynamic e){
            												HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)												_g(e,writeTo1,isAffected1);
            											}
            											HX_END_LOCAL_FUNC1((void))

HXLINE( 199)											 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)											::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)											::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)											::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_5(writeTo1,_g,isAffected1)));
            										}
            									}
            								}
            								break;
            								default:{
            									HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_4,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            									void _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)										_g(e,writeTo1,isAffected1);
            									}
            									HX_END_LOCAL_FUNC1((void))

HXLINE( 199)									 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)									::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)									::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)									::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_4(writeTo1,_g,isAffected1)));
            								}
            							}
            						}
            					}
            					break;
            					default:{
            						HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            						void _hx_run( ::Dynamic e){
            							HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)							_g(e,writeTo1,isAffected1);
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 199)						 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)						::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)						::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)						::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_1(writeTo1,_g,isAffected1)));
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 156)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 156)				 ::Dynamic init = _g->_hx_getObject(1);
HXDLIN( 156)				if (::hx::IsNotNull( init )) {
HXLINE( 157)					writeTo->push(this->get(v));
HXLINE( 158)					this->check(init,writeTo,isAffected);
HXLINE( 159)					writeTo->pop().StaticCast<  ::hxsl::_Dce::VarDeps >();
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_6,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            					void _hx_run( ::Dynamic e){
            						HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)						_g(e,writeTo1,isAffected1);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 199)					 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)					::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)					::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)					::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_6(writeTo1,_g,isAffected1)));
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 189)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 189)				::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 189)				{
HXLINE( 189)					 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 189)					 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 189)					 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 189)					if ((_g3->_hx_getIndex() == 2)) {
HXLINE( 189)						switch((int)(_g3->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >()->_hx_getIndex())){
            							case (int)63: {
HXLINE( 189)								if ((_g2->length == 3)) {
HXLINE( 189)									 ::Dynamic _g = _g2->__get(0);
HXDLIN( 189)									 ::Dynamic _g1 = _g2->__get(2);
HXDLIN( 189)									{
HXLINE( 189)										 ::hxsl::TExprDef _g3 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 189)										 ::Dynamic _g4 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 189)										 ::hxsl::Type _g5 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 189)										if ((_g3->_hx_getIndex() == 1)) {
HXLINE( 189)											 ::hxsl::TExprDef _g = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 189)											 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 189)											 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 189)											if ((_g->_hx_getIndex() == 0)) {
HXLINE( 181)												 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 181)												if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 181)													int cid = _g1->_hx_getInt(0);
HXDLIN( 181)													 ::Dynamic uv = _g2->__get(1);
HXDLIN( 181)													 ::Dynamic c = _g3->_hx_getObject(0);
HXDLIN( 181)													{
HXLINE( 182)														this->check(uv,writeTo,isAffected);
HXLINE( 183)														if (::hx::IsNull( this->channelVars->__get(cid) )) {
HXLINE( 184)															this->channelVars[cid] = c;
HXLINE( 185)															this->link(c,writeTo);
            														}
            														else {
HXLINE( 187)															this->link(this->channelVars->__get(cid),writeTo);
            														}
            													}
            												}
            												else {
            													HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_8,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            													void _hx_run( ::Dynamic e){
            														HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)														_g(e,writeTo1,isAffected1);
            													}
            													HX_END_LOCAL_FUNC1((void))

HXLINE( 199)													 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)													::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)													::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)													::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_8(writeTo1,_g,isAffected1)));
            												}
            											}
            											else {
            												HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_9,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            												void _hx_run( ::Dynamic e){
            													HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)													_g(e,writeTo1,isAffected1);
            												}
            												HX_END_LOCAL_FUNC1((void))

HXLINE( 199)												 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)												::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)												::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)												::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_9(writeTo1,_g,isAffected1)));
            											}
            										}
            										else {
            											HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_10,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            											void _hx_run( ::Dynamic e){
            												HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)												_g(e,writeTo1,isAffected1);
            											}
            											HX_END_LOCAL_FUNC1((void))

HXLINE( 199)											 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)											::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)											::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)											::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_10(writeTo1,_g,isAffected1)));
            										}
            									}
            								}
            								else {
            									HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_11,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            									void _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)										_g(e,writeTo1,isAffected1);
            									}
            									HX_END_LOCAL_FUNC1((void))

HXLINE( 199)									 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)									::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)									::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)									::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_11(writeTo1,_g,isAffected1)));
            								}
            							}
            							break;
            							case (int)64: {
HXLINE( 189)								if ((_g2->length == 4)) {
HXLINE( 189)									 ::Dynamic _g = _g2->__get(0);
HXDLIN( 189)									 ::Dynamic _g1 = _g2->__get(3);
HXDLIN( 189)									{
HXLINE( 189)										 ::hxsl::TExprDef _g3 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 189)										 ::Dynamic _g4 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 189)										 ::hxsl::Type _g5 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 189)										if ((_g3->_hx_getIndex() == 1)) {
HXLINE( 189)											 ::hxsl::TExprDef _g = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 189)											 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 189)											 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 189)											if ((_g->_hx_getIndex() == 0)) {
HXLINE( 189)												 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 189)												if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 189)													int cid = _g1->_hx_getInt(0);
HXDLIN( 189)													 ::Dynamic lod = _g2->__get(2);
HXDLIN( 189)													 ::Dynamic uv = _g2->__get(1);
HXDLIN( 189)													 ::Dynamic c = _g3->_hx_getObject(0);
HXDLIN( 189)													{
HXLINE( 190)														this->check(uv,writeTo,isAffected);
HXLINE( 191)														this->check(lod,writeTo,isAffected);
HXLINE( 192)														if (::hx::IsNull( this->channelVars->__get(cid) )) {
HXLINE( 193)															this->channelVars[cid] = c;
HXLINE( 194)															this->link(c,writeTo);
            														}
            														else {
HXLINE( 196)															this->link(this->channelVars->__get(cid),writeTo);
            														}
            													}
            												}
            												else {
            													HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_12,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            													void _hx_run( ::Dynamic e){
            														HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)														_g(e,writeTo1,isAffected1);
            													}
            													HX_END_LOCAL_FUNC1((void))

HXLINE( 199)													 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)													::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)													::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)													::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_12(writeTo1,_g,isAffected1)));
            												}
            											}
            											else {
            												HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_13,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            												void _hx_run( ::Dynamic e){
            													HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)													_g(e,writeTo1,isAffected1);
            												}
            												HX_END_LOCAL_FUNC1((void))

HXLINE( 199)												 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)												::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)												::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)												::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_13(writeTo1,_g,isAffected1)));
            											}
            										}
            										else {
            											HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_14,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            											void _hx_run( ::Dynamic e){
            												HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)												_g(e,writeTo1,isAffected1);
            											}
            											HX_END_LOCAL_FUNC1((void))

HXLINE( 199)											 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)											::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)											::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)											::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_14(writeTo1,_g,isAffected1)));
            										}
            									}
            								}
            								else {
            									HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_15,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            									void _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)										_g(e,writeTo1,isAffected1);
            									}
            									HX_END_LOCAL_FUNC1((void))

HXLINE( 199)									 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)									::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)									::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)									::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_15(writeTo1,_g,isAffected1)));
            								}
            							}
            							break;
            							default:{
            								HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_7,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            								void _hx_run( ::Dynamic e){
            									HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)									_g(e,writeTo1,isAffected1);
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 199)								 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)								::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)								::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)								::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_7(writeTo1,_g,isAffected1)));
            							}
            						}
            					}
            					else {
            						HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_16,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            						void _hx_run( ::Dynamic e){
            							HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)							_g(e,writeTo1,isAffected1);
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 199)						 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)						::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)						::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)						::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_16(writeTo1,_g,isAffected1)));
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 160)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 160)				 ::Dynamic eif = _g->_hx_getObject(1);
HXDLIN( 160)				 ::Dynamic eelse = _g->_hx_getObject(2);
HXDLIN( 160)				{
HXLINE( 161)					::Array< ::Dynamic> affect = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 162)					this->check(eif,writeTo,affect);
HXLINE( 163)					if (::hx::IsNotNull( eelse )) {
HXLINE( 163)						this->check(eelse,writeTo,affect);
            					}
HXLINE( 164)					int len = affect->length;
HXLINE( 165)					{
HXLINE( 165)						int _g1 = 0;
HXDLIN( 165)						while((_g1 < writeTo->length)){
HXLINE( 165)							 ::hxsl::_Dce::VarDeps v = writeTo->__get(_g1).StaticCast<  ::hxsl::_Dce::VarDeps >();
HXDLIN( 165)							_g1 = (_g1 + 1);
HXLINE( 166)							if ((affect->indexOf(v,null()) < 0)) {
HXLINE( 167)								affect->push(v);
            							}
            						}
            					}
HXLINE( 168)					this->check(e,affect,isAffected);
HXLINE( 169)					{
HXLINE( 169)						int _g2 = 0;
HXDLIN( 169)						int _g3 = len;
HXDLIN( 169)						while((_g2 < _g3)){
HXLINE( 169)							_g2 = (_g2 + 1);
HXDLIN( 169)							int i = (_g2 - 1);
HXLINE( 170)							 ::hxsl::_Dce::VarDeps v = affect->__get(i).StaticCast<  ::hxsl::_Dce::VarDeps >();
HXLINE( 171)							if ((isAffected->indexOf(v,null()) < 0)) {
HXLINE( 172)								isAffected->push(v);
            							}
            						}
            					}
            				}
            			}
            			break;
            			case (int)13: {
HXLINE( 174)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 174)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 174)				 ::Dynamic loop = _g->_hx_getObject(2);
HXDLIN( 174)				{
HXLINE( 175)					::Array< ::Dynamic> affect = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 176)					this->check(loop,writeTo,affect);
HXLINE( 177)					this->check(it,affect,isAffected);
HXLINE( 178)					{
HXLINE( 178)						int _g1 = 0;
HXDLIN( 178)						while((_g1 < affect->length)){
HXLINE( 178)							 ::hxsl::_Dce::VarDeps v = affect->__get(_g1).StaticCast<  ::hxsl::_Dce::VarDeps >();
HXDLIN( 178)							_g1 = (_g1 + 1);
HXLINE( 179)							if ((isAffected->indexOf(v,null()) < 0)) {
HXLINE( 180)								isAffected->push(v);
            							}
            						}
            					}
            				}
            			}
            			break;
            			default:{
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,writeTo1, ::Dynamic,_g,::Array< ::Dynamic>,isAffected1) HXARGC(1)
            				void _hx_run( ::Dynamic e){
            					HX_STACKFRAME(&_hx_pos_7477308ddde223d4_199_check)
HXLINE( 199)					_g(e,writeTo1,isAffected1);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 199)				 ::Dynamic _g = this->check_dyn();
HXDLIN( 199)				::Array< ::Dynamic> writeTo1 = writeTo;
HXDLIN( 199)				::Array< ::Dynamic> isAffected1 = isAffected;
HXDLIN( 199)				::hxsl::Tools_obj::iter(e, ::Dynamic(new _hx_Closure_0(writeTo1,_g,isAffected1)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Dce_obj,check,(void))

void Dce_obj::checkBranches( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_7477308ddde223d4_203_checkBranches)
HXLINE( 205)		{
HXLINE( 205)			 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 205)			if ((_g->_hx_getIndex() == 10)) {
HXLINE( 206)				 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 206)				 ::Dynamic _g2 = _g->_hx_getObject(2);
HXDLIN( 206)				{
HXLINE( 206)					 ::Dynamic cond = _g->_hx_getObject(0);
HXDLIN( 206)					{
HXLINE( 207)						::Array< ::Dynamic> writeTo = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 208)						this->check(cond,writeTo,::Array_obj< ::Dynamic>::__new(0));
            					}
            				}
            			}
            		}
HXLINE( 211)		::hxsl::Tools_obj::iter(e,this->checkBranches_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dce_obj,checkBranches,(void))

 ::Dynamic Dce_obj::mapExpr( ::Dynamic e,bool isVar){
            	HX_STACKFRAME(&_hx_pos_7477308ddde223d4_214_mapExpr)
HXDLIN( 214)		 ::hxsl::Dce _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 215)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 215)		switch((int)(_g->_hx_getIndex())){
            			case (int)4: {
HXLINE( 216)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 217)				::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 218)				int count = 0;
HXLINE( 219)				{
HXLINE( 219)					int _g1 = 0;
HXDLIN( 219)					while((_g1 < el->length)){
HXLINE( 219)						 ::Dynamic e = el->__get(_g1);
HXDLIN( 219)						_g1 = (_g1 + 1);
HXLINE( 220)						bool isVar1;
HXDLIN( 220)						if (isVar) {
HXLINE( 220)							isVar1 = (count == (el->length - 1));
            						}
            						else {
HXLINE( 220)							isVar1 = false;
            						}
HXLINE( 221)						 ::Dynamic e1 = this->mapExpr(e,isVar1);
HXLINE( 222)						bool _hx_tmp;
HXDLIN( 222)						if (!(::hxsl::Tools_obj::hasSideEffect(e1))) {
HXLINE( 222)							_hx_tmp = isVar1;
            						}
            						else {
HXLINE( 222)							_hx_tmp = true;
            						}
HXDLIN( 222)						if (_hx_tmp) {
HXLINE( 223)							out->push(e1);
            						}
HXLINE( 224)						count = (count + 1);
            					}
            				}
HXLINE( 226)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBlock(out))
            					->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            					->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            			}
            			break;
            			case (int)5: {
HXLINE( 227)				 ::haxe::macro::Binop _g1 = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 227)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 227)				 ::Dynamic _g3 = _g->_hx_getObject(2);
HXDLIN( 227)				switch((int)(_g1->_hx_getIndex())){
            					case (int)4: {
HXLINE( 227)						 ::hxsl::TExprDef _g = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 227)						 ::Dynamic _g1 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 227)						 ::hxsl::Type _g3 = _g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 227)						switch((int)(_g->_hx_getIndex())){
            							case (int)1: {
HXLINE( 227)								 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 227)								if (!(this->get(v)->used)) {
HXLINE( 228)									return  ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CNull_dyn()))
            										->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            										->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            								}
            								else {
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::hxsl::Dce,_gthis) HXARGC(1)
            									 ::Dynamic _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)										return _gthis->mapExpr(e,true);
            									}
            									HX_END_LOCAL_FUNC1(return)

HXLINE( 261)									return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_3(_gthis)));
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 227)								 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 227)								::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 227)								 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 227)								 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 227)								 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 227)								if ((_g3->_hx_getIndex() == 1)) {
HXLINE( 227)									 ::Dynamic v = _g3->_hx_getObject(0);
HXDLIN( 227)									if (!(this->get(v)->used)) {
HXLINE( 228)										return  ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CNull_dyn()))
            											->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            											->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            									}
            									else {
            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::hxsl::Dce,_gthis) HXARGC(1)
            										 ::Dynamic _hx_run( ::Dynamic e){
            											HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)											return _gthis->mapExpr(e,true);
            										}
            										HX_END_LOCAL_FUNC1(return)

HXLINE( 261)										return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_4(_gthis)));
            									}
            								}
            								else {
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::hxsl::Dce,_gthis) HXARGC(1)
            									 ::Dynamic _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)										return _gthis->mapExpr(e,true);
            									}
            									HX_END_LOCAL_FUNC1(return)

HXLINE( 261)									return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_5(_gthis)));
            								}
            							}
            							break;
            							default:{
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::hxsl::Dce,_gthis) HXARGC(1)
            								 ::Dynamic _hx_run( ::Dynamic e){
            									HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)									return _gthis->mapExpr(e,true);
            								}
            								HX_END_LOCAL_FUNC1(return)

HXLINE( 261)								return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_2(_gthis)));
            							}
            						}
            					}
            					break;
            					case (int)20: {
HXLINE( 227)						 ::haxe::macro::Binop _g = _g1->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 227)						 ::hxsl::TExprDef _g3 = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 227)						 ::Dynamic _g4 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 227)						 ::hxsl::Type _g5 = _g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 227)						switch((int)(_g3->_hx_getIndex())){
            							case (int)1: {
HXLINE( 227)								 ::Dynamic v = _g3->_hx_getObject(0);
HXDLIN( 227)								if (!(this->get(v)->used)) {
HXLINE( 228)									return  ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CNull_dyn()))
            										->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            										->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            								}
            								else {
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_7, ::hxsl::Dce,_gthis) HXARGC(1)
            									 ::Dynamic _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)										return _gthis->mapExpr(e,true);
            									}
            									HX_END_LOCAL_FUNC1(return)

HXLINE( 261)									return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_7(_gthis)));
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 227)								 ::Dynamic _g = _g3->_hx_getObject(0);
HXDLIN( 227)								::Array< ::Dynamic> _g1 = _g3->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 227)								 ::hxsl::TExprDef _g2 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 227)								 ::Dynamic _g4 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 227)								 ::hxsl::Type _g5 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 227)								if ((_g2->_hx_getIndex() == 1)) {
HXLINE( 227)									 ::Dynamic v = _g2->_hx_getObject(0);
HXDLIN( 227)									if (!(this->get(v)->used)) {
HXLINE( 228)										return  ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CNull_dyn()))
            											->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            											->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            									}
            									else {
            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::hxsl::Dce,_gthis) HXARGC(1)
            										 ::Dynamic _hx_run( ::Dynamic e){
            											HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)											return _gthis->mapExpr(e,true);
            										}
            										HX_END_LOCAL_FUNC1(return)

HXLINE( 261)										return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_8(_gthis)));
            									}
            								}
            								else {
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_9, ::hxsl::Dce,_gthis) HXARGC(1)
            									 ::Dynamic _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)										return _gthis->mapExpr(e,true);
            									}
            									HX_END_LOCAL_FUNC1(return)

HXLINE( 261)									return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_9(_gthis)));
            								}
            							}
            							break;
            							default:{
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::hxsl::Dce,_gthis) HXARGC(1)
            								 ::Dynamic _hx_run( ::Dynamic e){
            									HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)									return _gthis->mapExpr(e,true);
            								}
            								HX_END_LOCAL_FUNC1(return)

HXLINE( 261)								return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_6(_gthis)));
            							}
            						}
            					}
            					break;
            					default:{
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::hxsl::Dce,_gthis) HXARGC(1)
            						 ::Dynamic _hx_run( ::Dynamic e){
            							HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)							return _gthis->mapExpr(e,true);
            						}
            						HX_END_LOCAL_FUNC1(return)

HXLINE( 261)						return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_1(_gthis)));
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 227)				 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 227)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 227)				if (!(this->get(v)->used)) {
HXLINE( 228)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CNull_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            						->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_10, ::hxsl::Dce,_gthis) HXARGC(1)
            					 ::Dynamic _hx_run( ::Dynamic e){
            						HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)						return _gthis->mapExpr(e,true);
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 261)					return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_10(_gthis)));
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 244)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 244)				::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 244)				 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 244)				 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 244)				 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 244)				if ((_g3->_hx_getIndex() == 2)) {
HXLINE( 244)					switch((int)(_g3->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >()->_hx_getIndex())){
            						case (int)63: {
HXLINE( 244)							if ((_g2->length == 3)) {
HXLINE( 244)								 ::Dynamic _g = _g2->__get(0);
HXDLIN( 244)								 ::Dynamic _g1 = _g2->__get(2);
HXDLIN( 244)								 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 244)								 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 244)								 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 244)								if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 229)									 ::hxsl::Const _g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 229)									if ((_g->_hx_getIndex() == 2)) {
HXLINE( 229)										int cid = _g->_hx_getInt(0);
HXDLIN( 229)										 ::Dynamic uv = _g2->__get(1);
HXLINE( 230)										 ::Dynamic c = this->channelVars->__get(cid);
HXLINE( 231)										 ::Dynamic _hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Texture_dyn()))
            											->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            											->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXDLIN( 231)										 ::Dynamic _hx_tmp1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(c))
            											->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            											->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(c->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXDLIN( 231)										 ::hxsl::TExprDef _hx_tmp2 = ::hxsl::TExprDef_obj::TCall(_hx_tmp,::Array_obj< ::Dynamic>::__new(2)->init(0,_hx_tmp1)->init(1,this->mapExpr(uv,true)));
HXDLIN( 231)										return  ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),_hx_tmp2)
            											->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            											->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
            									}
            									else {
            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_12, ::hxsl::Dce,_gthis) HXARGC(1)
            										 ::Dynamic _hx_run( ::Dynamic e){
            											HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)											return _gthis->mapExpr(e,true);
            										}
            										HX_END_LOCAL_FUNC1(return)

HXLINE( 261)										return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_12(_gthis)));
            									}
            								}
            								else {
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_13, ::hxsl::Dce,_gthis) HXARGC(1)
            									 ::Dynamic _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)										return _gthis->mapExpr(e,true);
            									}
            									HX_END_LOCAL_FUNC1(return)

HXLINE( 261)									return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_13(_gthis)));
            								}
            							}
            							else {
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_14, ::hxsl::Dce,_gthis) HXARGC(1)
            								 ::Dynamic _hx_run( ::Dynamic e){
            									HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)									return _gthis->mapExpr(e,true);
            								}
            								HX_END_LOCAL_FUNC1(return)

HXLINE( 261)								return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_14(_gthis)));
            							}
            						}
            						break;
            						case (int)64: {
HXLINE( 244)							if ((_g2->length == 4)) {
HXLINE( 244)								 ::Dynamic _g = _g2->__get(0);
HXDLIN( 244)								 ::Dynamic _g1 = _g2->__get(3);
HXDLIN( 244)								 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 244)								 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 244)								 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 244)								if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 232)									 ::hxsl::Const _g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 232)									if ((_g->_hx_getIndex() == 2)) {
HXLINE( 232)										int cid = _g->_hx_getInt(0);
HXDLIN( 232)										 ::Dynamic lod = _g2->__get(2);
HXDLIN( 232)										 ::Dynamic uv = _g2->__get(1);
HXLINE( 233)										 ::Dynamic c = this->channelVars->__get(cid);
HXLINE( 234)										 ::Dynamic _hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::TextureLod_dyn()))
            											->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            											->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXDLIN( 234)										 ::Dynamic _hx_tmp1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(c))
            											->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            											->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(c->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXDLIN( 234)										 ::Dynamic _hx_tmp2 = this->mapExpr(uv,true);
HXDLIN( 234)										 ::hxsl::TExprDef _hx_tmp3 = ::hxsl::TExprDef_obj::TCall(_hx_tmp,::Array_obj< ::Dynamic>::__new(3)->init(0,_hx_tmp1)->init(1,_hx_tmp2)->init(2,this->mapExpr(lod,true)));
HXDLIN( 234)										return  ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),_hx_tmp3)
            											->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            											->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
            									}
            									else {
            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_15, ::hxsl::Dce,_gthis) HXARGC(1)
            										 ::Dynamic _hx_run( ::Dynamic e){
            											HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)											return _gthis->mapExpr(e,true);
            										}
            										HX_END_LOCAL_FUNC1(return)

HXLINE( 261)										return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_15(_gthis)));
            									}
            								}
            								else {
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_16, ::hxsl::Dce,_gthis) HXARGC(1)
            									 ::Dynamic _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)										return _gthis->mapExpr(e,true);
            									}
            									HX_END_LOCAL_FUNC1(return)

HXLINE( 261)									return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_16(_gthis)));
            								}
            							}
            							else {
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_17, ::hxsl::Dce,_gthis) HXARGC(1)
            								 ::Dynamic _hx_run( ::Dynamic e){
            									HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)									return _gthis->mapExpr(e,true);
            								}
            								HX_END_LOCAL_FUNC1(return)

HXLINE( 261)								return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_17(_gthis)));
            							}
            						}
            						break;
            						case (int)65: {
HXLINE( 244)							switch((int)(_g2->length)){
            								case (int)3: {
HXLINE( 244)									 ::Dynamic _g = _g2->__get(0);
HXDLIN( 244)									 ::Dynamic _g1 = _g2->__get(2);
HXDLIN( 244)									 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 235)										 ::hxsl::Const _g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 235)										if ((_g->_hx_getIndex() == 2)) {
HXLINE( 235)											int cid = _g->_hx_getInt(0);
HXDLIN( 235)											 ::Dynamic pos = _g2->__get(1);
HXLINE( 236)											 ::Dynamic c = this->channelVars->__get(cid);
HXLINE( 237)											 ::Dynamic _hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Texel_dyn()))
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXDLIN( 237)											 ::Dynamic _hx_tmp1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(c))
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(c->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXDLIN( 237)											 ::hxsl::TExprDef _hx_tmp2 = ::hxsl::TExprDef_obj::TCall(_hx_tmp,::Array_obj< ::Dynamic>::__new(2)->init(0,_hx_tmp1)->init(1,this->mapExpr(pos,true)));
HXDLIN( 237)											return  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),_hx_tmp2)
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
            										}
            										else {
            											HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_19, ::hxsl::Dce,_gthis) HXARGC(1)
            											 ::Dynamic _hx_run( ::Dynamic e){
            												HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)												return _gthis->mapExpr(e,true);
            											}
            											HX_END_LOCAL_FUNC1(return)

HXLINE( 261)											return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_19(_gthis)));
            										}
            									}
            									else {
            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_20, ::hxsl::Dce,_gthis) HXARGC(1)
            										 ::Dynamic _hx_run( ::Dynamic e){
            											HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)											return _gthis->mapExpr(e,true);
            										}
            										HX_END_LOCAL_FUNC1(return)

HXLINE( 261)										return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_20(_gthis)));
            									}
            								}
            								break;
            								case (int)4: {
HXLINE( 244)									 ::Dynamic _g = _g2->__get(0);
HXDLIN( 244)									 ::Dynamic _g1 = _g2->__get(3);
HXDLIN( 244)									 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 238)										 ::hxsl::Const _g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 238)										if ((_g->_hx_getIndex() == 2)) {
HXLINE( 238)											int cid = _g->_hx_getInt(0);
HXDLIN( 238)											 ::Dynamic lod = _g2->__get(2);
HXDLIN( 238)											 ::Dynamic pos = _g2->__get(1);
HXLINE( 239)											 ::Dynamic c = this->channelVars->__get(cid);
HXLINE( 240)											 ::Dynamic _hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Texel_dyn()))
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXDLIN( 240)											 ::Dynamic _hx_tmp1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(c))
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(c->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXDLIN( 240)											 ::Dynamic _hx_tmp2 = this->mapExpr(pos,true);
HXDLIN( 240)											 ::hxsl::TExprDef _hx_tmp3 = ::hxsl::TExprDef_obj::TCall(_hx_tmp,::Array_obj< ::Dynamic>::__new(3)->init(0,_hx_tmp1)->init(1,_hx_tmp2)->init(2,this->mapExpr(lod,true)));
HXDLIN( 240)											return  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),_hx_tmp3)
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
            										}
            										else {
            											HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_21, ::hxsl::Dce,_gthis) HXARGC(1)
            											 ::Dynamic _hx_run( ::Dynamic e){
            												HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)												return _gthis->mapExpr(e,true);
            											}
            											HX_END_LOCAL_FUNC1(return)

HXLINE( 261)											return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_21(_gthis)));
            										}
            									}
            									else {
            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_22, ::hxsl::Dce,_gthis) HXARGC(1)
            										 ::Dynamic _hx_run( ::Dynamic e){
            											HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)											return _gthis->mapExpr(e,true);
            										}
            										HX_END_LOCAL_FUNC1(return)

HXLINE( 261)										return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_22(_gthis)));
            									}
            								}
            								break;
            								default:{
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_18, ::hxsl::Dce,_gthis) HXARGC(1)
            									 ::Dynamic _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)										return _gthis->mapExpr(e,true);
            									}
            									HX_END_LOCAL_FUNC1(return)

HXLINE( 261)									return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_18(_gthis)));
            								}
            							}
            						}
            						break;
            						case (int)66: {
HXLINE( 244)							switch((int)(_g2->length)){
            								case (int)2: {
HXLINE( 244)									 ::Dynamic _g = _g2->__get(0);
HXDLIN( 244)									 ::Dynamic _g1 = _g2->__get(1);
HXDLIN( 244)									 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 241)										 ::hxsl::Const _g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 241)										if ((_g->_hx_getIndex() == 2)) {
HXLINE( 241)											int cid = _g->_hx_getInt(0);
HXLINE( 242)											 ::Dynamic c = this->channelVars->__get(cid);
HXLINE( 243)											return  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            													->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::TextureSize_dyn()))
            													->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            													->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(3)
            													->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(c))
            													->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            													->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(c->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))))))
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
            										}
            										else {
            											HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_24, ::hxsl::Dce,_gthis) HXARGC(1)
            											 ::Dynamic _hx_run( ::Dynamic e){
            												HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)												return _gthis->mapExpr(e,true);
            											}
            											HX_END_LOCAL_FUNC1(return)

HXLINE( 261)											return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_24(_gthis)));
            										}
            									}
            									else {
            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_25, ::hxsl::Dce,_gthis) HXARGC(1)
            										 ::Dynamic _hx_run( ::Dynamic e){
            											HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)											return _gthis->mapExpr(e,true);
            										}
            										HX_END_LOCAL_FUNC1(return)

HXLINE( 261)										return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_25(_gthis)));
            									}
            								}
            								break;
            								case (int)3: {
HXLINE( 244)									 ::Dynamic _g = _g2->__get(0);
HXDLIN( 244)									 ::Dynamic _g1 = _g2->__get(2);
HXDLIN( 244)									 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 244)									if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 244)										 ::hxsl::Const _g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 244)										if ((_g->_hx_getIndex() == 2)) {
HXLINE( 244)											int cid = _g->_hx_getInt(0);
HXDLIN( 244)											 ::Dynamic lod = _g2->__get(1);
HXLINE( 245)											 ::Dynamic c = this->channelVars->__get(cid);
HXLINE( 246)											 ::Dynamic _hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::TextureSize_dyn()))
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
HXDLIN( 246)											 ::Dynamic _hx_tmp1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(c))
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(c->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXDLIN( 246)											 ::hxsl::TExprDef _hx_tmp2 = ::hxsl::TExprDef_obj::TCall(_hx_tmp,::Array_obj< ::Dynamic>::__new(2)->init(0,_hx_tmp1)->init(1,this->mapExpr(lod,true)));
HXDLIN( 246)											return  ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),_hx_tmp2)
            												->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            												->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn()));
            										}
            										else {
            											HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_26, ::hxsl::Dce,_gthis) HXARGC(1)
            											 ::Dynamic _hx_run( ::Dynamic e){
            												HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)												return _gthis->mapExpr(e,true);
            											}
            											HX_END_LOCAL_FUNC1(return)

HXLINE( 261)											return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_26(_gthis)));
            										}
            									}
            									else {
            										HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_27, ::hxsl::Dce,_gthis) HXARGC(1)
            										 ::Dynamic _hx_run( ::Dynamic e){
            											HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)											return _gthis->mapExpr(e,true);
            										}
            										HX_END_LOCAL_FUNC1(return)

HXLINE( 261)										return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_27(_gthis)));
            									}
            								}
            								break;
            								default:{
            									HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_23, ::hxsl::Dce,_gthis) HXARGC(1)
            									 ::Dynamic _hx_run( ::Dynamic e){
            										HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)										return _gthis->mapExpr(e,true);
            									}
            									HX_END_LOCAL_FUNC1(return)

HXLINE( 261)									return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_23(_gthis)));
            								}
            							}
            						}
            						break;
            						default:{
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_11, ::hxsl::Dce,_gthis) HXARGC(1)
            							 ::Dynamic _hx_run( ::Dynamic e){
            								HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)								return _gthis->mapExpr(e,true);
            							}
            							HX_END_LOCAL_FUNC1(return)

HXLINE( 261)							return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_11(_gthis)));
            						}
            					}
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_28, ::hxsl::Dce,_gthis) HXARGC(1)
            					 ::Dynamic _hx_run( ::Dynamic e){
            						HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)						return _gthis->mapExpr(e,true);
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 261)					return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_28(_gthis)));
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 247)				 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 247)				 ::Dynamic econd = _g->_hx_getObject(1);
HXDLIN( 247)				 ::Dynamic eelse = _g->_hx_getObject(2);
HXLINE( 248)				 ::Dynamic e1 = this->mapExpr(e,true);
HXLINE( 249)				 ::Dynamic econd1 = this->mapExpr(econd,isVar);
HXLINE( 250)				 ::Dynamic eelse1;
HXDLIN( 250)				if (::hx::IsNull( eelse )) {
HXLINE( 250)					eelse1 = null();
            				}
            				else {
HXLINE( 250)					eelse1 = this->mapExpr(eelse,isVar);
            				}
HXLINE( 251)				bool _hx_tmp;
HXDLIN( 251)				bool _hx_tmp1;
HXDLIN( 251)				if (!(isVar)) {
HXLINE( 251)					_hx_tmp1 = !(::hxsl::Tools_obj::hasSideEffect(econd1));
            				}
            				else {
HXLINE( 251)					_hx_tmp1 = false;
            				}
HXDLIN( 251)				if (_hx_tmp1) {
HXLINE( 251)					if (::hx::IsNotNull( eelse1 )) {
HXLINE( 251)						_hx_tmp = !(::hxsl::Tools_obj::hasSideEffect(eelse1));
            					}
            					else {
HXLINE( 251)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 251)					_hx_tmp = false;
            				}
HXDLIN( 251)				if (_hx_tmp) {
HXLINE( 252)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CNull_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            						->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            				}
HXLINE( 253)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TIf(e1,econd1,eelse1))
            					->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            					->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            			}
            			break;
            			case (int)13: {
HXLINE( 254)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 254)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 254)				 ::Dynamic loop = _g->_hx_getObject(2);
HXLINE( 255)				 ::Dynamic it1 = this->mapExpr(it,true);
HXLINE( 256)				 ::Dynamic loop1 = this->mapExpr(loop,false);
HXLINE( 257)				if (!(::hxsl::Tools_obj::hasSideEffect(loop1))) {
HXLINE( 258)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CNull_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            						->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            				}
HXLINE( 259)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TFor(v,it1,loop1))
            					->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            					->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            			}
            			break;
            			default:{
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hxsl::Dce,_gthis) HXARGC(1)
            				 ::Dynamic _hx_run( ::Dynamic e){
            					HX_STACKFRAME(&_hx_pos_7477308ddde223d4_261_mapExpr)
HXLINE( 261)					return _gthis->mapExpr(e,true);
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 261)				return ::hxsl::Tools_obj::map(e, ::Dynamic(new _hx_Closure_0(_gthis)));
            			}
            		}
HXLINE( 215)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Dce_obj,mapExpr,return )


::hx::ObjectPtr< Dce_obj > Dce_obj::__new() {
	::hx::ObjectPtr< Dce_obj > __this = new Dce_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Dce_obj > Dce_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Dce_obj *__this = (Dce_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Dce_obj), true, "hxsl.Dce"));
	*(void **)__this = Dce_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Dce_obj::Dce_obj()
{
}

void Dce_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dce);
	HX_MARK_MEMBER_NAME(used,"used");
	HX_MARK_MEMBER_NAME(channelVars,"channelVars");
	HX_MARK_MEMBER_NAME(markAsKeep,"markAsKeep");
	HX_MARK_END_CLASS();
}

void Dce_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(used,"used");
	HX_VISIT_MEMBER_NAME(channelVars,"channelVars");
	HX_VISIT_MEMBER_NAME(markAsKeep,"markAsKeep");
}

::hx::Val Dce_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dce") ) { return ::hx::Val( dce_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"used") ) { return ::hx::Val( used ); }
		if (HX_FIELD_EQ(inName,"link") ) { return ::hx::Val( link_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return ::hx::Val( debug_dyn() ); }
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"markRec") ) { return ::hx::Val( markRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapExpr") ) { return ::hx::Val( mapExpr_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"markAsKeep") ) { return ::hx::Val( markAsKeep ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"channelVars") ) { return ::hx::Val( channelVars ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkBranches") ) { return ::hx::Val( checkBranches_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Dce_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"used") ) { used=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"markAsKeep") ) { markAsKeep=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"channelVars") ) { channelVars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dce_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("used",3d,92,ad,4d));
	outFields->push(HX_("channelVars",0f,76,17,1e));
	outFields->push(HX_("markAsKeep",84,6e,44,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Dce_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Dce_obj,used),HX_("used",3d,92,ad,4d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Dce_obj,channelVars),HX_("channelVars",0f,76,17,1e)},
	{::hx::fsBool,(int)offsetof(Dce_obj,markAsKeep),HX_("markAsKeep",84,6e,44,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Dce_obj_sStaticStorageInfo = 0;
#endif

static ::String Dce_obj_sMemberFields[] = {
	HX_("used",3d,92,ad,4d),
	HX_("channelVars",0f,76,17,1e),
	HX_("markAsKeep",84,6e,44,0d),
	HX_("debug",53,52,1f,d7),
	HX_("dce",06,38,4c,00),
	HX_("get",96,80,4e,00),
	HX_("markRec",43,17,e8,67),
	HX_("link",fa,17,b3,47),
	HX_("check",c8,98,b6,45),
	HX_("checkBranches",78,20,aa,b2),
	HX_("mapExpr",f1,b1,19,28),
	::String(null()) };

::hx::Class Dce_obj::__mClass;

void Dce_obj::__register()
{
	Dce_obj _hx_dummy;
	Dce_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Dce",a1,ec,7a,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Dce_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Dce_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dce_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dce_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
