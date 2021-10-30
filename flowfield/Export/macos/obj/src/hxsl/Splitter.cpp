#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_hxsl_Component
#include <hxsl/Component.h>
#endif
#ifndef INCLUDED_hxsl_Error
#include <hxsl/Error.h>
#endif
#ifndef INCLUDED_hxsl_FunctionKind
#include <hxsl/FunctionKind.h>
#endif
#ifndef INCLUDED_hxsl_Splitter
#include <hxsl/Splitter.h>
#endif
#ifndef INCLUDED_hxsl_TExprDef
#include <hxsl/TExprDef.h>
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
#ifndef INCLUDED_hxsl__Splitter_VarProps
#include <hxsl/_Splitter/VarProps.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_61a99c1626483ffe_23_new,"hxsl.Splitter","new",0x6637e7be,"hxsl.Splitter.new","hxsl/Splitter.hx",23,0xbd0a4711)
HX_LOCAL_STACK_FRAME(_hx_pos_61a99c1626483ffe_167_split,"hxsl.Splitter","split",0x3a0e15b8,"hxsl.Splitter.split","hxsl/Splitter.hx",167,0xbd0a4711)
HX_LOCAL_STACK_FRAME(_hx_pos_61a99c1626483ffe_168_split,"hxsl.Splitter","split",0x3a0e15b8,"hxsl.Splitter.split","hxsl/Splitter.hx",168,0xbd0a4711)
HX_LOCAL_STACK_FRAME(_hx_pos_61a99c1626483ffe_26_split,"hxsl.Splitter","split",0x3a0e15b8,"hxsl.Splitter.split","hxsl/Splitter.hx",26,0xbd0a4711)
HX_LOCAL_STACK_FRAME(_hx_pos_61a99c1626483ffe_185_addExpr,"hxsl.Splitter","addExpr",0xfe415e54,"hxsl.Splitter.addExpr","hxsl/Splitter.hx",185,0xbd0a4711)
HX_LOCAL_STACK_FRAME(_hx_pos_61a99c1626483ffe_194_checkVar,"hxsl.Splitter","checkVar",0x37611ee1,"hxsl.Splitter.checkVar","hxsl/Splitter.hx",194,0xbd0a4711)
HX_LOCAL_STACK_FRAME(_hx_pos_61a99c1626483ffe_207_mapVars,"hxsl.Splitter","mapVars",0xb22afec6,"hxsl.Splitter.mapVars","hxsl/Splitter.hx",207,0xbd0a4711)
HX_LOCAL_STACK_FRAME(_hx_pos_61a99c1626483ffe_222_get,"hxsl.Splitter","get",0x663297f4,"hxsl.Splitter.get","hxsl/Splitter.hx",222,0xbd0a4711)
HX_LOCAL_STACK_FRAME(_hx_pos_61a99c1626483ffe_248_uniqueName,"hxsl.Splitter","uniqueName",0xe0e33e5e,"hxsl.Splitter.uniqueName","hxsl/Splitter.hx",248,0xbd0a4711)
HX_LOCAL_STACK_FRAME(_hx_pos_61a99c1626483ffe_266_checkExpr,"hxsl.Splitter","checkExpr",0x326eb7fb,"hxsl.Splitter.checkExpr","hxsl/Splitter.hx",266,0xbd0a4711)
namespace hxsl{

void Splitter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_61a99c1626483ffe_23_new)
            	}

Dynamic Splitter_obj::__CreateEmpty() { return new Splitter_obj; }

void *Splitter_obj::_hx_vtable = 0;

Dynamic Splitter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Splitter_obj > _hx_result = new Splitter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Splitter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1010b2fc;
}

 ::Dynamic Splitter_obj::split( ::Dynamic s){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::Dynamic v1, ::Dynamic v2){
            			HX_GC_STACKFRAME(&_hx_pos_61a99c1626483ffe_167_split)
HXLINE( 167)			return (( (int)(v1->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ) - ( (int)(v2->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            		int _hx_run( ::Dynamic v1, ::Dynamic v2){
            			HX_GC_STACKFRAME(&_hx_pos_61a99c1626483ffe_168_split)
HXLINE( 168)			return (( (int)(v1->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ) - ( (int)(v2->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_61a99c1626483ffe_26_split)
HXLINE(  27)		 ::Dynamic vfun = null();
HXDLIN(  27)		 ::haxe::ds::IntMap vvars =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  28)		 ::Dynamic ffun = null();
HXDLIN(  28)		 ::haxe::ds::IntMap fvars =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  29)		this->varNames =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  30)		this->varMap =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  31)		{
HXLINE(  31)			int _g = 0;
HXDLIN(  31)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  31)			while((_g < _g1->length)){
HXLINE(  31)				 ::Dynamic f = _g1->__get(_g);
HXDLIN(  31)				_g = (_g + 1);
HXLINE(  32)				switch((int)( ::Dynamic(f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)0: {
HXLINE(  34)						this->vars = vvars;
HXLINE(  35)						vfun = f;
HXLINE(  36)						this->checkExpr(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic));
            					}
            					break;
            					case (int)1: {
HXLINE(  38)						this->vars = fvars;
HXLINE(  39)						ffun = f;
HXLINE(  40)						this->checkExpr(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic));
            					}
            					break;
            					default:{
HXLINE(  42)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
            				}
            			}
            		}
HXLINE(  47)		 ::hxsl::Type vfun1 = vfun->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic);
HXLINE(  48)		 ::Dynamic vfun2 = vfun->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic);
HXLINE(  49)		 ::hxsl::FunctionKind vfun3 = vfun->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic);
HXLINE(  50)		::Array< ::Dynamic> vfun4 = ( (::Array< ::Dynamic>)(vfun->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXLINE(  46)		vfun =  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("ref",53,d9,56,00),vfun2)
            			->setFixed(1,HX_("ret",61,d9,56,00),vfun1)
            			->setFixed(2,HX_("args",5d,8d,74,40),vfun4)
            			->setFixed(3,HX_("expr",35,fd,1d,43),this->mapVars(vfun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)))
            			->setFixed(4,HX_("kind",54,e1,09,47),vfun3));
HXLINE(  54)		{
HXLINE(  54)			int _g2 = 0;
HXDLIN(  54)			::Array< ::Dynamic> _g3 = ::Lambda_obj::array(vvars);
HXDLIN(  54)			while((_g2 < _g3->length)){
HXLINE(  54)				 ::hxsl::_Splitter::VarProps inf = _g3->__get(_g2).StaticCast<  ::hxsl::_Splitter::VarProps >();
HXDLIN(  54)				_g2 = (_g2 + 1);
HXLINE(  55)				 ::Dynamic v = inf->v;
HXLINE(  56)				switch((int)( ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)3: case (int)4: {
HXLINE(  58)						 ::hxsl::VarKind _hx_tmp;
HXDLIN(  58)						if (fvars->exists(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ))) {
HXLINE(  58)							_hx_tmp = ::hxsl::VarKind_obj::Var_dyn();
            						}
            						else {
HXLINE(  58)							_hx_tmp = ::hxsl::VarKind_obj::Local_dyn();
            						}
HXDLIN(  58)						v->__SetField(HX_("kind",54,e1,09,47),_hx_tmp,::hx::paccDynamic);
            					}
            					break;
            					default:{
            					}
            				}
HXLINE(  61)				switch((int)( ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)3: case (int)5: {
HXLINE(  64)						bool _hx_tmp;
HXDLIN(  64)						if ((inf->read <= 0)) {
HXLINE(  64)							_hx_tmp = (inf->write > 1);
            						}
            						else {
HXLINE(  64)							_hx_tmp = true;
            						}
HXDLIN(  64)						if (_hx_tmp) {
HXLINE(  66)							int nv = ::hxsl::Tools_obj::allocVarId();
HXLINE(  65)							 ::Dynamic nv1 =  ::Dynamic(::hx::Anon_obj::Create(4)
            								->setFixed(0,HX_("id",db,5b,00,00),nv)
            								->setFixed(1,HX_("kind",54,e1,09,47), ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)))
            								->setFixed(2,HX_("name",4b,72,ff,48), ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))
            								->setFixed(3,HX_("type",ba,f2,08,4d), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXLINE(  71)							this->vars = vvars;
HXLINE(  72)							 ::hxsl::_Splitter::VarProps ninf = this->get(nv1);
HXLINE(  73)							v->__SetField(HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Local_dyn(),::hx::paccDynamic);
HXLINE(  74)							 ::Dynamic p =  ::Dynamic(vfun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXLINE(  75)							 ::Dynamic e =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAssign_dyn(), ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(nv1))
            									->setFixed(1,HX_("p",70,00,00,00),p)
            									->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(nv1->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(v))
            									->setFixed(1,HX_("p",70,00,00,00),p)
            									->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))))))
            								->setFixed(1,HX_("p",70,00,00,00),p)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(nv1->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXLINE(  76)							this->addExpr(vfun,e);
HXLINE(  77)							this->checkExpr(e);
HXLINE(  78)							if (::hx::IsPointerEq( nv1->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Var_dyn() )) {
HXLINE(  79)								 ::hxsl::_Splitter::VarProps old = ( ( ::hxsl::_Splitter::VarProps)(fvars->get( ::Dynamic(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))) );
HXLINE(  80)								this->varMap->set(v,nv1);
HXLINE(  81)								fvars->remove(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
HXLINE(  82)								 ::hxsl::_Splitter::VarProps np =  ::hxsl::_Splitter::VarProps_obj::__alloc( HX_CTX ,nv1);
HXLINE(  83)								np->read = old->read;
HXLINE(  84)								np->write = old->write;
HXLINE(  85)								fvars->set(( (int)(nv1->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),np);
            							}
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE(  91)		::Array< ::Dynamic> finits = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  92)		::Array< ::Dynamic> todo = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  93)		{
HXLINE(  93)			 ::Dynamic inf = fvars->iterator();
HXDLIN(  93)			while(( (bool)(inf->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  93)				 ::hxsl::_Splitter::VarProps inf1 = ( ( ::hxsl::_Splitter::VarProps)(inf->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  94)				 ::Dynamic v = inf1->v;
HXLINE(  95)				switch((int)( ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)1: {
HXLINE(  99)						int nv = ::hxsl::Tools_obj::allocVarId();
HXLINE(  98)						 ::Dynamic nv1 =  ::Dynamic(::hx::Anon_obj::Create(4)
            							->setFixed(0,HX_("id",db,5b,00,00),nv)
            							->setFixed(1,HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Var_dyn())
            							->setFixed(2,HX_("name",4b,72,ff,48), ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))
            							->setFixed(3,HX_("type",ba,f2,08,4d), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXLINE( 104)						this->uniqueName(nv1);
HXLINE( 105)						 ::hxsl::_Splitter::VarProps i = ( ( ::hxsl::_Splitter::VarProps)(vvars->get( ::Dynamic(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))) );
HXLINE( 106)						if (::hx::IsNull( i )) {
HXLINE( 107)							i =  ::hxsl::_Splitter::VarProps_obj::__alloc( HX_CTX ,v);
HXLINE( 108)							vvars->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),i);
            						}
HXLINE( 110)						i->read++;
HXLINE( 111)						 ::hxsl::_Splitter::VarProps vp =  ::hxsl::_Splitter::VarProps_obj::__alloc( HX_CTX ,nv1);
HXLINE( 112)						vp->write = 1;
HXLINE( 113)						vvars->set(( (int)(nv1->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),vp);
HXLINE( 114)						 ::hxsl::_Splitter::VarProps fp =  ::hxsl::_Splitter::VarProps_obj::__alloc( HX_CTX ,nv1);
HXLINE( 115)						fp->read = 1;
HXLINE( 116)						todo->push(fp);
HXLINE( 117)						this->addExpr(vfun, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAssign_dyn(), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(nv1))
            								->setFixed(1,HX_("p",70,00,00,00), ::Dynamic( ::Dynamic(vfun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(v))
            								->setFixed(1,HX_("p",70,00,00,00), ::Dynamic( ::Dynamic(vfun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))))))
            							->setFixed(1,HX_("p",70,00,00,00), ::Dynamic( ::Dynamic(vfun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            							->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))));
HXLINE( 118)						this->varMap->set(v,nv1);
HXLINE( 119)						inf1->local = true;
            					}
            					break;
            					case (int)3: {
HXLINE( 120)						if ((inf1->write > 0)) {
HXLINE( 122)							int nv = ::hxsl::Tools_obj::allocVarId();
HXLINE( 121)							 ::Dynamic nv1 =  ::Dynamic(::hx::Anon_obj::Create(4)
            								->setFixed(0,HX_("id",db,5b,00,00),nv)
            								->setFixed(1,HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Local_dyn())
            								->setFixed(2,HX_("name",4b,72,ff,48), ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))
            								->setFixed(3,HX_("type",ba,f2,08,4d), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXLINE( 127)							this->uniqueName(nv1);
HXLINE( 128)							finits->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVarDecl(nv1, ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(v))
            									->setFixed(1,HX_("p",70,00,00,00), ::Dynamic( ::Dynamic(ffun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            									->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))))))
            								->setFixed(1,HX_("p",70,00,00,00), ::Dynamic( ::Dynamic(ffun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())));
HXLINE( 129)							this->varMap->set(v,nv1);
            						}
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE( 133)		{
HXLINE( 133)			int _g4 = 0;
HXDLIN( 133)			while((_g4 < todo->length)){
HXLINE( 133)				 ::hxsl::_Splitter::VarProps v = todo->__get(_g4).StaticCast<  ::hxsl::_Splitter::VarProps >();
HXDLIN( 133)				_g4 = (_g4 + 1);
HXLINE( 134)				fvars->set(( (int)(v->v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),v);
            			}
            		}
HXLINE( 137)		{
HXLINE( 137)			 ::Dynamic v = vvars->iterator();
HXDLIN( 137)			while(( (bool)(v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 137)				 ::hxsl::_Splitter::VarProps v1 = ( ( ::hxsl::_Splitter::VarProps)(v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 138)				this->checkVar(v1,true,vvars, ::Dynamic(vfun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            			}
            		}
HXLINE( 139)		{
HXLINE( 139)			 ::Dynamic v1 = fvars->iterator();
HXDLIN( 139)			while(( (bool)(v1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 139)				 ::hxsl::_Splitter::VarProps v = ( ( ::hxsl::_Splitter::VarProps)(v1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 140)				this->checkVar(v,false,vvars, ::Dynamic(ffun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            			}
            		}
HXLINE( 143)		{
HXLINE( 143)			 ::Dynamic v2 = this->varMap->keys();
HXDLIN( 143)			while(( (bool)(v2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 143)				 ::Dynamic v = v2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 144)				::Dynamic this1 = this->varMap;
HXDLIN( 144)				 ::Dynamic v21 = ( ( ::haxe::ds::ObjectMap)(this1) )->get(this->varMap->get(v));
HXLINE( 145)				if (::hx::IsNotNull( v21 )) {
HXLINE( 146)					this->varMap->set(v,v21);
            				}
            			}
            		}
HXLINE( 149)		 ::hxsl::Type ffun1 = ffun->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic);
HXLINE( 150)		 ::Dynamic ffun2 = ffun->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic);
HXLINE( 151)		 ::hxsl::FunctionKind ffun3 = ffun->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic);
HXLINE( 152)		::Array< ::Dynamic> ffun4 = ( (::Array< ::Dynamic>)(ffun->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXLINE( 148)		ffun =  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("ref",53,d9,56,00),ffun2)
            			->setFixed(1,HX_("ret",61,d9,56,00),ffun1)
            			->setFixed(2,HX_("args",5d,8d,74,40),ffun4)
            			->setFixed(3,HX_("expr",35,fd,1d,43),this->mapVars(ffun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)))
            			->setFixed(4,HX_("kind",54,e1,09,47),ffun3));
HXLINE( 155)		{
HXLINE( 155)			 ::hxsl::TExprDef _g5 =  ::Dynamic(ffun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 155)			if ((_g5->_hx_getIndex() == 4)) {
HXLINE( 156)				::Array< ::Dynamic> el = _g5->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 157)				{
HXLINE( 157)					int _g = 0;
HXDLIN( 157)					while((_g < finits->length)){
HXLINE( 157)						 ::Dynamic e = finits->__get(_g);
HXDLIN( 157)						_g = (_g + 1);
HXLINE( 158)						el->unshift(e);
            					}
            				}
            			}
            			else {
HXLINE( 160)				finits->push( ::Dynamic(ffun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)));
HXLINE( 161)				ffun->__SetField(HX_("expr",35,fd,1d,43), ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBlock(finits))
            					->setFixed(1,HX_("p",70,00,00,00), ::Dynamic( ::Dynamic(ffun->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),::hx::paccDynamic);
            			}
            		}
HXLINE( 164)		::Array< ::Dynamic> _g6 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 164)		{
HXLINE( 164)			 ::Dynamic v3 = vvars->iterator();
HXDLIN( 164)			while(( (bool)(v3->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 164)				 ::hxsl::_Splitter::VarProps v = ( ( ::hxsl::_Splitter::VarProps)(v3->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 164)				if (!(v->local)) {
HXLINE( 164)					_g6->push(v->v);
            				}
            			}
            		}
HXDLIN( 164)		::Array< ::Dynamic> vvars1 = _g6;
HXLINE( 165)		::Array< ::Dynamic> _g7 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 165)		{
HXLINE( 165)			 ::Dynamic v4 = fvars->iterator();
HXDLIN( 165)			while(( (bool)(v4->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 165)				 ::hxsl::_Splitter::VarProps v = ( ( ::hxsl::_Splitter::VarProps)(v4->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 165)				if (!(v->local)) {
HXLINE( 165)					_g7->push(v->v);
            				}
            			}
            		}
HXDLIN( 165)		::Array< ::Dynamic> fvars1 = _g7;
HXLINE( 167)		vvars1->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 168)		fvars1->sort( ::Dynamic(new _hx_Closure_1()));
HXLINE( 170)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("vertex",64,db,47,a1), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("funs",54,eb,c4,43),::Array_obj< ::Dynamic>::__new(1)->init(0,vfun))
            				->setFixed(1,HX_("name",4b,72,ff,48),HX_("vertex",64,db,47,a1))
            				->setFixed(2,HX_("vars",ac,2b,49,4e),vvars1)))
            			->setFixed(1,HX_("fragment",d0,5f,e5,ad), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("funs",54,eb,c4,43),::Array_obj< ::Dynamic>::__new(1)->init(0,ffun))
            				->setFixed(1,HX_("name",4b,72,ff,48),HX_("fragment",d0,5f,e5,ad))
            				->setFixed(2,HX_("vars",ac,2b,49,4e),fvars1))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Splitter_obj,split,return )

void Splitter_obj::addExpr( ::Dynamic f, ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_61a99c1626483ffe_185_addExpr)
HXDLIN( 185)		 ::hxsl::TExprDef _g =  ::Dynamic(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 185)		if ((_g->_hx_getIndex() == 4)) {
HXLINE( 186)			::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 187)			el->push(e);
            		}
            		else {
HXLINE( 189)			f->__SetField(HX_("expr",35,fd,1d,43), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBlock(::Array_obj< ::Dynamic>::__new(2)->init(0, ::Dynamic(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)))->init(1,e)))
            				->setFixed(1,HX_("p",70,00,00,00), ::Dynamic( ::Dynamic(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),::hx::paccDynamic);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Splitter_obj,addExpr,(void))

void Splitter_obj::checkVar( ::hxsl::_Splitter::VarProps v,bool vertex, ::haxe::ds::IntMap vvars, ::Dynamic p){
            	HX_GC_STACKFRAME(&_hx_pos_61a99c1626483ffe_194_checkVar)
HXDLIN( 194)		switch((int)( ::Dynamic(v->v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            			case (int)3: {
HXLINE( 198)				if (!(vertex)) {
HXLINE( 199)					 ::hxsl::_Splitter::VarProps i = ( ( ::hxsl::_Splitter::VarProps)(vvars->get( ::Dynamic(v->v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))) );
HXLINE( 200)					bool _hx_tmp;
HXDLIN( 200)					if (::hx::IsNotNull( i )) {
HXLINE( 200)						_hx_tmp = (i->write == 0);
            					}
            					else {
HXLINE( 200)						_hx_tmp = true;
            					}
HXDLIN( 200)					if (_hx_tmp) {
HXLINE( 200)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hxsl::Error_obj::__alloc( HX_CTX ,( (::String)(((HX_("Varying ",d0,e1,7a,7e) + v->v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + HX_(" is not written by vertex shader",44,ae,00,e1))) ),p)));
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 195)				if (v->requireInit) {
HXLINE( 196)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hxsl::Error_obj::__alloc( HX_CTX ,( (::String)(((HX_("Variable ",44,c2,35,24) + v->v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + HX_(" is used without being initialized",4e,40,d4,10))) ),p)));
            				}
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Splitter_obj,checkVar,(void))

 ::Dynamic Splitter_obj::mapVars( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_61a99c1626483ffe_207_mapVars)
HXDLIN( 207)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 207)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE( 208)				 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 209)				 ::Dynamic v2 = this->varMap->get(v);
HXLINE( 210)				if (::hx::IsNull( v2 )) {
HXLINE( 210)					return e;
            				}
            				else {
HXLINE( 210)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(v2))
            						->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            						->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 211)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 211)				 ::Dynamic init = _g->_hx_getObject(1);
HXLINE( 212)				 ::Dynamic v2 = this->varMap->get(v);
HXLINE( 213)				if (::hx::IsNull( v2 )) {
HXLINE( 213)					return ::hxsl::Tools_obj::map(e,this->mapVars_dyn());
            				}
            				else {
HXLINE( 213)					 ::hxsl::TExprDef _hx_tmp = ::hxsl::TExprDef_obj::TVarDecl(v2,this->mapVars(init));
HXDLIN( 213)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),_hx_tmp)
            						->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            						->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            				}
            			}
            			break;
            			case (int)13: {
HXLINE( 214)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 214)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 214)				 ::Dynamic loop = _g->_hx_getObject(2);
HXLINE( 215)				 ::Dynamic v2 = this->varMap->get(v);
HXLINE( 216)				if (::hx::IsNull( v2 )) {
HXLINE( 216)					return ::hxsl::Tools_obj::map(e,this->mapVars_dyn());
            				}
            				else {
HXLINE( 216)					 ::Dynamic _hx_tmp = this->mapVars(it);
HXDLIN( 216)					 ::hxsl::TExprDef _hx_tmp1 = ::hxsl::TExprDef_obj::TFor(v2,_hx_tmp,this->mapVars(loop));
HXDLIN( 216)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),_hx_tmp1)
            						->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            						->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            				}
            			}
            			break;
            			default:{
HXLINE( 218)				return ::hxsl::Tools_obj::map(e,this->mapVars_dyn());
            			}
            		}
HXLINE( 207)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Splitter_obj,mapVars,return )

 ::hxsl::_Splitter::VarProps Splitter_obj::get( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_61a99c1626483ffe_222_get)
HXLINE( 223)		 ::hxsl::_Splitter::VarProps i = ( ( ::hxsl::_Splitter::VarProps)(this->vars->get( ::Dynamic(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))) );
HXLINE( 224)		if (::hx::IsNull( i )) {
HXLINE( 225)			 ::Dynamic v2 = this->varMap->get(v);
HXLINE( 226)			if (::hx::IsNotNull( v2 )) {
HXLINE( 227)				return this->get(v2);
            			}
HXLINE( 228)			::String oldName = ( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 229)			this->uniqueName(v);
HXLINE( 230)			bool _hx_tmp;
HXDLIN( 230)			if (::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Local_dyn() )) {
HXLINE( 230)				_hx_tmp = ::hx::IsNotEq( oldName,v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 230)				_hx_tmp = false;
            			}
HXDLIN( 230)			if (_hx_tmp) {
HXLINE( 233)				int nv = ::hxsl::Tools_obj::allocVarId();
HXLINE( 232)				 ::Dynamic nv1 =  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("id",db,5b,00,00),nv)
            					->setFixed(1,HX_("kind",54,e1,09,47), ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)))
            					->setFixed(2,HX_("name",4b,72,ff,48), ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))
            					->setFixed(3,HX_("type",ba,f2,08,4d), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic))));
HXLINE( 238)				this->varMap->set(v,nv1);
HXLINE( 239)				v->__SetField(HX_("name",4b,72,ff,48),oldName,::hx::paccDynamic);
HXLINE( 240)				v = nv1;
            			}
HXLINE( 242)			i =  ::hxsl::_Splitter::VarProps_obj::__alloc( HX_CTX ,v);
HXLINE( 243)			this->vars->set(( (int)(v->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),i);
            		}
HXLINE( 245)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Splitter_obj,get,return )

void Splitter_obj::uniqueName( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_61a99c1626483ffe_248_uniqueName)
HXLINE( 249)		bool _hx_tmp;
HXDLIN( 249)		bool _hx_tmp1;
HXDLIN( 249)		if (::hx::IsPointerNotEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Global_dyn() )) {
HXLINE( 249)			_hx_tmp1 = ::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Output_dyn() );
            		}
            		else {
HXLINE( 249)			_hx_tmp1 = true;
            		}
HXDLIN( 249)		if (!(_hx_tmp1)) {
HXLINE( 249)			_hx_tmp = ::hx::IsPointerEq( v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic),::hxsl::VarKind_obj::Input_dyn() );
            		}
            		else {
HXLINE( 249)			_hx_tmp = true;
            		}
HXDLIN( 249)		if (_hx_tmp) {
HXLINE( 250)			return;
            		}
HXLINE( 251)		v->__SetField(HX_("parent",2a,05,7e,ed),null(),::hx::paccDynamic);
HXLINE( 252)		 ::Dynamic n = this->varNames->get( ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)));
HXLINE( 253)		bool _hx_tmp2;
HXDLIN( 253)		if (::hx::IsNotNull( n )) {
HXLINE( 253)			_hx_tmp2 = ::hx::IsNotEq( n,v );
            		}
            		else {
HXLINE( 253)			_hx_tmp2 = false;
            		}
HXDLIN( 253)		if (_hx_tmp2) {
HXLINE( 254)			::String prefix = ( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 255)			while(true){
HXLINE( 255)				bool _hx_tmp;
HXDLIN( 255)				if (::hx::IsGreaterEq( prefix.charCodeAt((prefix.length - 1)),48 )) {
HXLINE( 255)					_hx_tmp = ::hx::IsLessEq( prefix.charCodeAt((prefix.length - 1)),57 );
            				}
            				else {
HXLINE( 255)					_hx_tmp = false;
            				}
HXDLIN( 255)				if (!(_hx_tmp)) {
HXLINE( 255)					goto _hx_goto_18;
            				}
HXLINE( 256)				prefix = prefix.substr(0,-1);
            			}
            			_hx_goto_18:;
HXLINE( 257)			 ::Dynamic k;
HXDLIN( 257)			if (::hx::IsEq( prefix,v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) )) {
HXLINE( 257)				k = 2;
            			}
            			else {
HXLINE( 257)				k = ::Std_obj::parseInt(( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ).substr(prefix.length,null()));
            			}
HXLINE( 258)			while(this->varNames->exists((prefix + k))){
HXLINE( 259)				k = (k + 1);
            			}
HXLINE( 260)			v->__SetField(HX_("name",4b,72,ff,48),(prefix + k),::hx::paccDynamic);
            		}
HXLINE( 262)		this->varNames->set(( (::String)(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Splitter_obj,uniqueName,(void))

void Splitter_obj::checkExpr( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_61a99c1626483ffe_266_checkExpr)
HXDLIN( 266)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 266)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE( 267)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 267)				{
HXLINE( 268)					 ::hxsl::_Splitter::VarProps inf = this->get(v);
HXLINE( 269)					if ((inf->write == 0)) {
HXLINE( 269)						inf->requireInit = true;
            					}
HXLINE( 270)					inf->read++;
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 275)				 ::haxe::macro::Binop _g1 = _g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 275)				 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 275)				 ::Dynamic _g3 = _g->_hx_getObject(2);
HXDLIN( 275)				switch((int)(_g1->_hx_getIndex())){
            					case (int)4: {
HXLINE( 275)						 ::hxsl::TExprDef _g = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 275)						 ::Dynamic _g1 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 275)						 ::hxsl::Type _g4 = _g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 275)						switch((int)(_g->_hx_getIndex())){
            							case (int)1: {
HXLINE( 271)								 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 271)								 ::Dynamic e = _g3;
HXDLIN( 271)								{
HXLINE( 272)									 ::hxsl::_Splitter::VarProps inf = this->get(v);
HXLINE( 273)									inf->write++;
HXLINE( 274)									this->checkExpr(e);
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 271)								 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 271)								::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 271)								{
HXLINE( 271)									 ::hxsl::TExprDef _g4 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 271)									 ::Dynamic _g5 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 271)									 ::hxsl::Type _g6 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 271)									if ((_g4->_hx_getIndex() == 1)) {
HXLINE( 271)										 ::Dynamic v = _g4->_hx_getObject(0);
HXDLIN( 271)										 ::Dynamic e = _g3;
HXDLIN( 271)										{
HXLINE( 272)											 ::hxsl::_Splitter::VarProps inf = this->get(v);
HXLINE( 273)											inf->write++;
HXLINE( 274)											this->checkExpr(e);
            										}
            									}
            									else {
HXLINE( 295)										::hxsl::Tools_obj::iter(e,this->checkExpr_dyn());
            									}
            								}
            							}
            							break;
            							default:{
HXLINE( 295)								::hxsl::Tools_obj::iter(e,this->checkExpr_dyn());
            							}
            						}
            					}
            					break;
            					case (int)20: {
HXLINE( 275)						 ::haxe::macro::Binop _g = _g1->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >();
HXDLIN( 275)						{
HXLINE( 275)							 ::hxsl::TExprDef _g4 = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 275)							 ::Dynamic _g5 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 275)							 ::hxsl::Type _g6 = _g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 275)							switch((int)(_g4->_hx_getIndex())){
            								case (int)1: {
HXLINE( 275)									 ::Dynamic v = _g4->_hx_getObject(0);
HXDLIN( 275)									 ::Dynamic e = _g3;
HXDLIN( 275)									{
HXLINE( 276)										 ::hxsl::_Splitter::VarProps inf = this->get(v);
HXLINE( 277)										if ((inf->write == 0)) {
HXLINE( 277)											inf->requireInit = true;
            										}
HXLINE( 278)										inf->read++;
HXLINE( 279)										inf->write++;
HXLINE( 280)										this->checkExpr(e);
            									}
            								}
            								break;
            								case (int)9: {
HXLINE( 275)									 ::Dynamic _g = _g4->_hx_getObject(0);
HXDLIN( 275)									::Array< ::Dynamic> _g1 = _g4->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 275)									{
HXLINE( 275)										 ::hxsl::TExprDef _g2 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 275)										 ::Dynamic _g5 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 275)										 ::hxsl::Type _g6 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 275)										if ((_g2->_hx_getIndex() == 1)) {
HXLINE( 275)											 ::Dynamic v = _g2->_hx_getObject(0);
HXDLIN( 275)											 ::Dynamic e = _g3;
HXDLIN( 275)											{
HXLINE( 276)												 ::hxsl::_Splitter::VarProps inf = this->get(v);
HXLINE( 277)												if ((inf->write == 0)) {
HXLINE( 277)													inf->requireInit = true;
            												}
HXLINE( 278)												inf->read++;
HXLINE( 279)												inf->write++;
HXLINE( 280)												this->checkExpr(e);
            											}
            										}
            										else {
HXLINE( 295)											::hxsl::Tools_obj::iter(e,this->checkExpr_dyn());
            										}
            									}
            								}
            								break;
            								default:{
HXLINE( 295)									::hxsl::Tools_obj::iter(e,this->checkExpr_dyn());
            								}
            							}
            						}
            					}
            					break;
            					default:{
HXLINE( 295)						::hxsl::Tools_obj::iter(e,this->checkExpr_dyn());
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 281)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 281)				 ::Dynamic init = _g->_hx_getObject(1);
HXDLIN( 281)				{
HXLINE( 282)					 ::hxsl::_Splitter::VarProps inf = this->get(v);
HXLINE( 283)					inf->local = true;
HXLINE( 284)					if (::hx::IsNotNull( init )) {
HXLINE( 285)						this->checkExpr(init);
HXLINE( 286)						inf->write++;
            					}
            				}
            			}
            			break;
            			case (int)13: {
HXLINE( 288)				 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 288)				 ::Dynamic it = _g->_hx_getObject(1);
HXDLIN( 288)				 ::Dynamic loop = _g->_hx_getObject(2);
HXDLIN( 288)				{
HXLINE( 289)					this->checkExpr(it);
HXLINE( 290)					 ::hxsl::_Splitter::VarProps inf = this->get(v);
HXLINE( 291)					inf->local = true;
HXLINE( 292)					inf->write++;
HXLINE( 293)					this->checkExpr(loop);
            				}
            			}
            			break;
            			default:{
HXLINE( 295)				::hxsl::Tools_obj::iter(e,this->checkExpr_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Splitter_obj,checkExpr,(void))


::hx::ObjectPtr< Splitter_obj > Splitter_obj::__new() {
	::hx::ObjectPtr< Splitter_obj > __this = new Splitter_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Splitter_obj > Splitter_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Splitter_obj *__this = (Splitter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Splitter_obj), true, "hxsl.Splitter"));
	*(void **)__this = Splitter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Splitter_obj::Splitter_obj()
{
}

void Splitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Splitter);
	HX_MARK_MEMBER_NAME(vars,"vars");
	HX_MARK_MEMBER_NAME(varNames,"varNames");
	HX_MARK_MEMBER_NAME(varMap,"varMap");
	HX_MARK_END_CLASS();
}

void Splitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vars,"vars");
	HX_VISIT_MEMBER_NAME(varNames,"varNames");
	HX_VISIT_MEMBER_NAME(varMap,"varMap");
}

::hx::Val Splitter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"vars") ) { return ::hx::Val( vars ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"split") ) { return ::hx::Val( split_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { return ::hx::Val( varMap ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addExpr") ) { return ::hx::Val( addExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapVars") ) { return ::hx::Val( mapVars_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"varNames") ) { return ::hx::Val( varNames ); }
		if (HX_FIELD_EQ(inName,"checkVar") ) { return ::hx::Val( checkVar_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkExpr") ) { return ::hx::Val( checkExpr_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uniqueName") ) { return ::hx::Val( uniqueName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Splitter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"vars") ) { vars=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"varMap") ) { varMap=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"varNames") ) { varNames=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Splitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vars",ac,2b,49,4e));
	outFields->push(HX_("varNames",61,bb,43,dd));
	outFields->push(HX_("varMap",f5,ed,8f,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Splitter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Splitter_obj,vars),HX_("vars",ac,2b,49,4e)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Splitter_obj,varNames),HX_("varNames",61,bb,43,dd)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Splitter_obj,varMap),HX_("varMap",f5,ed,8f,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Splitter_obj_sStaticStorageInfo = 0;
#endif

static ::String Splitter_obj_sMemberFields[] = {
	HX_("vars",ac,2b,49,4e),
	HX_("varNames",61,bb,43,dd),
	HX_("varMap",f5,ed,8f,53),
	HX_("split",da,ea,6e,81),
	HX_("addExpr",f6,3f,5b,7f),
	HX_("checkVar",ff,aa,ec,ac),
	HX_("mapVars",68,e0,44,33),
	HX_("get",96,80,4e,00),
	HX_("uniqueName",fc,8d,80,79),
	HX_("checkExpr",1d,c6,fd,96),
	::String(null()) };

::hx::Class Splitter_obj::__mClass;

void Splitter_obj::__register()
{
	Splitter_obj _hx_dummy;
	Splitter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Splitter",cc,f0,05,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Splitter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Splitter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Splitter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Splitter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
