#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_hxsl_ARead
#include <hxsl/ARead.h>
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
#ifndef INCLUDED_hxsl_Flatten
#include <hxsl/Flatten.h>
#endif
#ifndef INCLUDED_hxsl_FunctionKind
#include <hxsl/FunctionKind.h>
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
#ifndef INCLUDED_hxsl__Flatten_Alloc
#include <hxsl/_Flatten/Alloc.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_33_new,"hxsl.Flatten","new",0x561fc651,"hxsl.Flatten.new","hxsl/Flatten.hx",33,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_36_flatten,"hxsl.Flatten","flatten",0x6df7ee35,"hxsl.Flatten.flatten","hxsl/Flatten.hx",36,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_95_mapFun,"hxsl.Flatten","mapFun",0x64a999b2,"hxsl.Flatten.mapFun","hxsl/Flatten.hx",95,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_104_mapExpr,"hxsl.Flatten","mapExpr",0xaf15f462,"hxsl.Flatten.mapExpr","hxsl/Flatten.hx",104,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_137_mapConsts,"hxsl.Flatten","mapConsts",0x1b221a1d,"hxsl.Flatten.mapConsts","hxsl/Flatten.hx",137,0x6a4b9980)
static const Float _hx_array_data_78b049df_9[] = {
	(Float)1,(Float)255,(Float)65025,(Float)16581375,
};
static const Float _hx_array_data_78b049df_10[] = {
	0.00392156862745098,0.00392156862745098,0.00392156862745098,(Float)0,
};
static const Float _hx_array_data_78b049df_11[] = {
	(Float)1,0.00392156862745098,1.53787004998077679e-05,6.03086294110108446e-08,
};
static const Float _hx_array_data_78b049df_12[] = {
	0.5,0.5,
};
static const Float _hx_array_data_78b049df_13[] = {
	0.5,-0.5,
};
static const Float _hx_array_data_78b049df_14[] = {
	(Float)2,(Float)-2,
};
static const Float _hx_array_data_78b049df_15[] = {
	(Float)-1,(Float)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_200_allocConst,"hxsl.Flatten","allocConst",0x5f5096dd,"hxsl.Flatten.allocConst","hxsl/Flatten.hx",200,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_209_allocConsts,"hxsl.Flatten","allocConsts",0x07336af6,"hxsl.Flatten.allocConsts","hxsl/Flatten.hx",209,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_251_mkInt,"hxsl.Flatten","mkInt",0x62c8e862,"hxsl.Flatten.mkInt","hxsl/Flatten.hx",251,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_254_readIndex,"hxsl.Flatten","readIndex",0xff62688d,"hxsl.Flatten.readIndex","hxsl/Flatten.hx",254,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_259_readOffset,"hxsl.Flatten","readOffset",0x430595b8,"hxsl.Flatten.readOffset","hxsl/Flatten.hx",259,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_265_access,"hxsl.Flatten","access",0xb6ae2c53,"hxsl.Flatten.access","hxsl/Flatten.hx",265,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_323_toInt,"hxsl.Flatten","toInt",0x6d3bd265,"hxsl.Flatten.toInt","hxsl/Flatten.hx",323,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_328_optimize,"hxsl.Flatten","optimize",0xb2d66d4c,"hxsl.Flatten.optimize","hxsl/Flatten.hx",328,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_353_packTextures,"hxsl.Flatten","packTextures",0xc2e2cf20,"hxsl.Flatten.packTextures","hxsl/Flatten.hx",353,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_404_packBuffers,"hxsl.Flatten","packBuffers",0x6f66408b,"hxsl.Flatten.packBuffers","hxsl/Flatten.hx",404,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_423_pack,"hxsl.Flatten","pack",0x06fd13c8,"hxsl.Flatten.pack","hxsl/Flatten.hx",423,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_476_varSize,"hxsl.Flatten","varSize",0x5559edb9,"hxsl.Flatten.varSize","hxsl/Flatten.hx",476,0x6a4b9980)
HX_LOCAL_STACK_FRAME(_hx_pos_b66a16da5cf7ee2e_488_gatherVar,"hxsl.Flatten","gatherVar",0xdb90d45d,"hxsl.Flatten.gatherVar","hxsl/Flatten.hx",488,0x6a4b9980)
namespace hxsl{

void Flatten_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_33_new)
            	}

Dynamic Flatten_obj::__CreateEmpty() { return new Flatten_obj; }

void *Flatten_obj::_hx_vtable = 0;

Dynamic Flatten_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Flatten_obj > _hx_result = new Flatten_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Flatten_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7bf6ad5b;
}

 ::Dynamic Flatten_obj::flatten( ::Dynamic s, ::hxsl::FunctionKind kind,bool constsToGlobal){
            	HX_GC_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_36_flatten)
HXLINE(  37)		this->globals = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  38)		this->params = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  39)		this->outVars = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  40)		if (constsToGlobal) {
HXLINE(  41)			this->consts = ::Array_obj< Float >::__new(0);
HXLINE(  42)			 ::Dynamic p =  ::Dynamic( ::Dynamic(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic))->__GetItem(0)->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXLINE(  43)			 ::Dynamic gc =  ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("id",db,5b,00,00),::hxsl::Tools_obj::allocVarId())
            				->setFixed(1,HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Global_dyn())
            				->setFixed(2,HX_("name",4b,72,ff,48),HX_("__consts__",f0,cf,e3,48))
            				->setFixed(3,HX_("type",ba,f2,08,4d),null()));
HXLINE(  49)			this->econsts =  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(gc))
            				->setFixed(1,HX_("p",70,00,00,00),p)
            				->setFixed(2,HX_("t",74,00,00,00),null()));
HXLINE(  55)			::String s1 = ( (::String)(s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE(  56)			::Array< ::Dynamic> s2 = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) )->copy();
HXLINE(  57)			::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  57)			{
HXLINE(  57)				int _g1 = 0;
HXDLIN(  57)				::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  57)				while((_g1 < _g2->length)){
HXLINE(  57)					 ::Dynamic f = _g2->__get(_g1);
HXDLIN(  57)					_g1 = (_g1 + 1);
HXDLIN(  57)					_g->push(this->mapFun(f,this->mapConsts_dyn()));
            				}
            			}
HXLINE(  54)			s =  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("funs",54,eb,c4,43),_g)
            				->setFixed(1,HX_("name",4b,72,ff,48),s1)
            				->setFixed(2,HX_("vars",ac,2b,49,4e),s2));
HXLINE(  59)			{
HXLINE(  59)				int _g3 = 0;
HXDLIN(  59)				::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN(  59)				while((_g3 < _g4->length)){
HXLINE(  59)					 ::Dynamic v = _g4->__get(_g3);
HXDLIN(  59)					_g3 = (_g3 + 1);
HXLINE(  60)					{
HXLINE(  60)						 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN(  60)						if ((_g->_hx_getIndex() == 9)) {
HXLINE(  61)							int _g1 = _g->_hx_getInt(0);
HXLINE(  62)							this->allocConst(( (Float)(255) ),p);
            						}
            					}
            				}
            			}
HXLINE(  65)			if ((this->consts->length > 0)) {
HXLINE(  66)				gc->__SetField(HX_("type",ba,f2,08,4d),(this->econsts->__SetField(HX_("t",74,00,00,00),::hxsl::Type_obj::TArray(::hxsl::Type_obj::TFloat_dyn(),::hxsl::SizeDecl_obj::SConst(this->consts->length)),::hx::paccDynamic)),::hx::paccDynamic);
HXLINE(  67)				( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) )->push(gc);
            			}
            		}
HXLINE(  70)		this->varMap =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  71)		this->allocData =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  72)		{
HXLINE(  72)			int _g = 0;
HXDLIN(  72)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(s->__Field(HX_("vars",ac,2b,49,4e),::hx::paccDynamic)) );
HXDLIN(  72)			while((_g < _g1->length)){
HXLINE(  72)				 ::Dynamic v = _g1->__get(_g);
HXDLIN(  72)				_g = (_g + 1);
HXLINE(  73)				this->gatherVar(v);
            			}
            		}
HXLINE(  74)		::String prefix;
HXDLIN(  74)		switch((int)(kind->_hx_getIndex())){
            			case (int)0: {
HXLINE(  74)				prefix = HX_("vertex",64,db,47,a1);
            			}
            			break;
            			case (int)1: {
HXLINE(  74)				prefix = HX_("fragment",d0,5f,e5,ad);
            			}
            			break;
            			default:{
HXLINE(  77)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE(  79)		this->pack((prefix + HX_("Globals",90,2d,8a,e1)),::hxsl::VarKind_obj::Global_dyn(),this->globals,::hxsl::VecType_obj::VFloat_dyn());
HXLINE(  80)		this->pack((prefix + HX_("Params",66,6f,0f,22)),::hxsl::VarKind_obj::Param_dyn(),this->params,::hxsl::VecType_obj::VFloat_dyn());
HXLINE(  81)		::Array< ::Dynamic> allVars = this->globals->concat(this->params);
HXLINE(  82)		::Array< ::Dynamic> textures = this->packTextures((prefix + HX_("Textures",58,b3,80,3f)),allVars,::hxsl::Type_obj::TSampler2D_dyn());
HXDLIN(  82)		::Array< ::Dynamic> textures1 = textures->concat(this->packTextures((prefix + HX_("TexturesCube",6d,a8,3b,91)),allVars,::hxsl::Type_obj::TSamplerCube_dyn()));
HXDLIN(  82)		::Array< ::Dynamic> textures2 = textures1->concat(this->packTextures((prefix + HX_("TexturesArray",21,0b,3b,5a)),allVars,::hxsl::Type_obj::TSampler2DArray_dyn()));
HXLINE(  85)		this->packBuffers(allVars);
HXLINE(  86)		::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  86)		{
HXLINE(  86)			int _g3 = 0;
HXDLIN(  86)			::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(s->__Field(HX_("funs",54,eb,c4,43),::hx::paccDynamic)) );
HXDLIN(  86)			while((_g3 < _g4->length)){
HXLINE(  86)				 ::Dynamic f = _g4->__get(_g3);
HXDLIN(  86)				_g3 = (_g3 + 1);
HXDLIN(  86)				_g2->push(this->mapFun(f,this->mapExpr_dyn()));
            			}
            		}
HXDLIN(  86)		::Array< ::Dynamic> funs = _g2;
HXLINE(  87)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("funs",54,eb,c4,43),funs)
            			->setFixed(1,HX_("name",4b,72,ff,48), ::Dynamic(s->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))
            			->setFixed(2,HX_("vars",ac,2b,49,4e),this->outVars));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Flatten_obj,flatten,return )

 ::Dynamic Flatten_obj::mapFun( ::Dynamic f, ::Dynamic mapExpr){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_95_mapFun)
HXLINE(  96)		 ::hxsl::FunctionKind f1 = f->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic);
HXLINE(  97)		 ::hxsl::Type f2 = f->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic);
HXLINE(  98)		::Array< ::Dynamic> f3 = ( (::Array< ::Dynamic>)(f->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) );
HXLINE(  99)		 ::Dynamic f4 = f->__Field(HX_("ref",53,d9,56,00),::hx::paccDynamic);
HXLINE(  95)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("ref",53,d9,56,00),f4)
            			->setFixed(1,HX_("ret",61,d9,56,00),f2)
            			->setFixed(2,HX_("args",5d,8d,74,40),f3)
            			->setFixed(3,HX_("expr",35,fd,1d,43),mapExpr( ::Dynamic(f->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))))
            			->setFixed(4,HX_("kind",54,e1,09,47),f1));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Flatten_obj,mapFun,return )

 ::Dynamic Flatten_obj::mapExpr( ::Dynamic e){
            	HX_GC_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_104_mapExpr)
HXLINE( 105)		 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 105)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE( 106)				 ::Dynamic v = _g->_hx_getObject(0);
HXLINE( 107)				 ::hxsl::_Flatten::Alloc a = ( ( ::hxsl::_Flatten::Alloc)(this->varMap->get(v)) );
HXLINE( 108)				if (::hx::IsNotNull( a )) {
HXLINE( 111)					e = this->access(a,v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic),::hxsl::ARead_obj::AIndex(a));
            				}
            			}
            			break;
            			case (int)16: {
HXLINE( 112)				 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 112)				 ::hxsl::TExprDef _g2 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 112)				 ::hxsl::Type _g3 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 112)				if ((_g2->_hx_getIndex() == 1)) {
HXLINE( 112)					 ::Dynamic v = _g2->_hx_getObject(0);
HXDLIN( 112)					 ::Dynamic vp = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 112)					 ::Dynamic eindex = _g->_hx_getObject(1);
HXDLIN( 112)					 ::hxsl::TExprDef _g3 = eindex->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 112)					bool e1;
HXDLIN( 112)					if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 112)						 ::hxsl::Const _g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 112)						if ((_g->_hx_getIndex() == 2)) {
HXLINE( 112)							int _g1 = _g->_hx_getInt(0);
HXDLIN( 112)							e1 = true;
            						}
            						else {
HXLINE( 112)							e1 = false;
            						}
            					}
            					else {
HXLINE( 112)						e1 = false;
            					}
HXDLIN( 112)					if (!(e1)) {
HXLINE( 113)						 ::hxsl::_Flatten::Alloc a = ( ( ::hxsl::_Flatten::Alloc)(this->varMap->get(v)) );
HXLINE( 114)						if (::hx::IsNotNull( a )) {
HXLINE( 117)							 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 117)							if ((_g->_hx_getIndex() == 15)) {
HXLINE( 121)								 ::hxsl::Type _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 121)								 ::hxsl::SizeDecl _g2 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXLINE( 118)								 ::hxsl::Type t = _g1;
HXDLIN( 118)								if (::hxsl::Tools_obj::isSampler(t)) {
HXLINE( 119)									eindex = this->toInt(this->mapExpr(eindex));
HXLINE( 120)									e = this->access(a,t,vp,::hxsl::ARead_obj::AOffset(a,1,eindex));
            								}
            								else {
HXLINE( 121)									 ::hxsl::Type t = _g1;
HXLINE( 122)									int stride = this->varSize(t,a->t);
HXLINE( 123)									bool e1;
HXDLIN( 123)									if ((stride != 0)) {
HXLINE( 123)										e1 = ((stride & 3) != 0);
            									}
            									else {
HXLINE( 123)										e1 = true;
            									}
HXDLIN( 123)									if (e1) {
HXLINE( 123)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::hxsl::Error_obj::__alloc( HX_CTX ,HX_("Dynamic access to an Array which size is not 4 components-aligned is not allowed",95,86,16,03),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic))));
            									}
HXLINE( 124)									stride = (stride >> 2);
HXLINE( 125)									eindex = this->toInt(this->mapExpr(eindex));
HXLINE( 126)									 ::Dynamic e2;
HXDLIN( 126)									if ((stride == 1)) {
HXLINE( 126)										e2 = eindex;
            									}
            									else {
HXLINE( 126)										e2 =  ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpMult_dyn(),eindex, ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(stride)))
            												->setFixed(1,HX_("p",70,00,00,00),vp)
            												->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            											->setFixed(1,HX_("p",70,00,00,00),vp)
            											->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            									}
HXDLIN( 126)									e = this->access(a,t,vp,::hxsl::ARead_obj::AOffset(a,stride,e2));
            								}
            							}
            							else {
HXLINE( 128)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            							}
            						}
            					}
            					else {
HXLINE( 132)						e = ::hxsl::Tools_obj::map(e,this->mapExpr_dyn());
            					}
            				}
            				else {
HXLINE( 132)					e = ::hxsl::Tools_obj::map(e,this->mapExpr_dyn());
            				}
            			}
            			break;
            			default:{
HXLINE( 132)				e = ::hxsl::Tools_obj::map(e,this->mapExpr_dyn());
            			}
            		}
HXLINE( 134)		return this->optimize(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Flatten_obj,mapExpr,return )

 ::Dynamic Flatten_obj::mapConsts( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_137_mapConsts)
HXLINE( 138)		{
HXLINE( 138)			 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 138)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 150)					 ::hxsl::Const c = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXLINE( 151)					switch((int)(c->_hx_getIndex())){
            						case (int)2: {
HXLINE( 154)							int v = c->_hx_getInt(0);
HXLINE( 155)							return this->allocConst(( (Float)(v) ),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)3: {
HXLINE( 152)							Float v = c->_hx_getFloat(0);
HXLINE( 153)							return this->allocConst(v,e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						default:{
HXLINE( 157)							return e;
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 159)					 ::hxsl::TGlobal g = _g->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >();
HXLINE( 160)					switch((int)(g->_hx_getIndex())){
            						case (int)0: {
HXLINE( 167)							this->allocConst((::Math_obj::PI / ( (Float)(180) )),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)1: {
HXLINE( 169)							this->allocConst((( (Float)(180) ) / ::Math_obj::PI),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)9: {
HXLINE( 173)							this->allocConst(((Float)1.4426950408889634),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)10: {
HXLINE( 171)							this->allocConst(((Float)0.6931471805599453),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)24: {
HXLINE( 175)							this->allocConst(( (Float)(1) ),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)26: {
HXLINE( 188)							this->allocConst(((Float)2.0),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
HXLINE( 189)							this->allocConst(((Float)3.0),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)54: {
HXLINE( 162)							this->allocConsts(::Array_obj< Float >::fromData( _hx_array_data_78b049df_9,4),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
HXLINE( 163)							this->allocConsts(::Array_obj< Float >::fromData( _hx_array_data_78b049df_10,4),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)55: {
HXLINE( 165)							this->allocConsts(::Array_obj< Float >::fromData( _hx_array_data_78b049df_11,4),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)56: {
HXLINE( 179)							this->allocConst(( (Float)(1) ),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
HXLINE( 180)							this->allocConst(((Float)0.5),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)57: {
HXLINE( 177)							this->allocConst(((Float)0.5),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)58: {
HXLINE( 182)							this->allocConsts(::Array_obj< Float >::fromData( _hx_array_data_78b049df_12,2),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
HXLINE( 183)							this->allocConsts(::Array_obj< Float >::fromData( _hx_array_data_78b049df_13,2),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						case (int)59: {
HXLINE( 185)							this->allocConsts(::Array_obj< Float >::fromData( _hx_array_data_78b049df_14,2),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
HXLINE( 186)							this->allocConsts(::Array_obj< Float >::fromData( _hx_array_data_78b049df_15,2),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            						break;
            						default:{
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 141)					 ::Dynamic _g1 = _g->_hx_getObject(1);
HXDLIN( 141)					 ::Dynamic _g2 = _g->_hx_getObject(2);
HXDLIN( 141)					if ((_g->_hx_getObject(0).StaticCast<  ::haxe::macro::Binop >()->_hx_getIndex() == 1)) {
HXLINE( 141)						 ::hxsl::TExprDef _g = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 141)						 ::Dynamic _g1 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 141)						if (( ::Dynamic(_g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex() == 8)) {
HXLINE( 142)							this->allocConst(( (Float)(1) ),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 192)					 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 192)					::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 192)					{
HXLINE( 192)						 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 192)						 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 192)						 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 192)						if ((_g3->_hx_getIndex() == 2)) {
HXLINE( 192)							if ((_g3->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >()->_hx_getIndex() == 42)) {
HXLINE( 192)								if ((_g2->length == 2)) {
HXLINE( 192)									 ::Dynamic _g = _g2->__get(0);
HXDLIN( 192)									 ::Dynamic _g1 = _g2->__get(1);
HXDLIN( 192)									{
HXLINE( 192)										 ::hxsl::TExprDef _g3 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 192)										 ::Dynamic _g4 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 192)										 ::hxsl::Type _g5 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 192)										if ((_g3->_hx_getIndex() == 1)) {
HXLINE( 192)											 ::Dynamic _g = _g3->_hx_getObject(0);
HXDLIN( 192)											{
HXLINE( 192)												int _g2 = ( (int)(_g->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXDLIN( 192)												::String _g4 = ( (::String)(_g->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 192)												 ::Dynamic _g6 = _g->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic);
HXDLIN( 192)												::Array< ::Dynamic> _g7 = ( (::Array< ::Dynamic>)(_g->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 192)												 ::hxsl::Type _g8 = _g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 192)												switch((int)( ::Dynamic(_g->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            													case (int)0: {
HXLINE( 192)														if ((_g5->_hx_getIndex() == 5)) {
HXLINE( 192)															if ((_g5->_hx_getInt(0) == 3)) {
HXLINE( 192)																if ((_g5->_hx_getObject(1).StaticCast<  ::hxsl::VecType >()->_hx_getIndex() == 1)) {
HXLINE( 192)																	 ::hxsl::TExprDef _g = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	 ::Dynamic _g2 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	 ::hxsl::Type _g3 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	if ((_g->_hx_getIndex() == 0)) {
HXLINE( 192)																		 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 192)																		if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 192)																			if ((_g1->_hx_getInt(0) == 1)) {
HXLINE( 194)																				return e;
            																			}
            																		}
            																	}
            																}
            															}
            														}
            													}
            													break;
            													case (int)1: {
HXLINE( 192)														if ((_g5->_hx_getIndex() == 5)) {
HXLINE( 192)															if ((_g5->_hx_getInt(0) == 3)) {
HXLINE( 192)																if ((_g5->_hx_getObject(1).StaticCast<  ::hxsl::VecType >()->_hx_getIndex() == 1)) {
HXLINE( 192)																	 ::hxsl::TExprDef _g = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	 ::Dynamic _g2 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	 ::hxsl::Type _g3 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	if ((_g->_hx_getIndex() == 0)) {
HXLINE( 192)																		 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 192)																		if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 192)																			if ((_g1->_hx_getInt(0) == 1)) {
HXLINE( 194)																				return e;
            																			}
            																		}
            																	}
            																}
            															}
            														}
            													}
            													break;
            													case (int)2: {
HXLINE( 192)														if ((_g5->_hx_getIndex() == 5)) {
HXLINE( 192)															if ((_g5->_hx_getInt(0) == 3)) {
HXLINE( 192)																if ((_g5->_hx_getObject(1).StaticCast<  ::hxsl::VecType >()->_hx_getIndex() == 1)) {
HXLINE( 192)																	 ::hxsl::TExprDef _g = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	 ::Dynamic _g2 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	 ::hxsl::Type _g3 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	if ((_g->_hx_getIndex() == 0)) {
HXLINE( 192)																		 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 192)																		if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 192)																			if ((_g1->_hx_getInt(0) == 1)) {
HXLINE( 194)																				return e;
            																			}
            																		}
            																	}
            																}
            															}
            														}
            													}
            													break;
            													case (int)3: {
HXLINE( 192)														if ((_g5->_hx_getIndex() == 5)) {
HXLINE( 192)															if ((_g5->_hx_getInt(0) == 3)) {
HXLINE( 192)																if ((_g5->_hx_getObject(1).StaticCast<  ::hxsl::VecType >()->_hx_getIndex() == 1)) {
HXLINE( 192)																	 ::hxsl::TExprDef _g = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	 ::Dynamic _g2 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	 ::hxsl::Type _g3 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 192)																	if ((_g->_hx_getIndex() == 0)) {
HXLINE( 192)																		 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 192)																		if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 192)																			if ((_g1->_hx_getInt(0) == 1)) {
HXLINE( 194)																				return e;
            																			}
            																		}
            																	}
            																}
            															}
            														}
            													}
            													break;
            													default:{
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)16: {
HXLINE( 143)					 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 143)					 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 143)					{
HXLINE( 143)						 ::hxsl::TExprDef _g3 = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 143)						 ::Dynamic _g4 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 143)						 ::hxsl::Type _g5 = _g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 143)						if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 139)							 ::hxsl::Const _g = _g3->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 139)							if ((_g->_hx_getIndex() == 2)) {
HXLINE( 139)								int _g3 = _g->_hx_getInt(0);
HXDLIN( 139)								 ::Dynamic eindex = _g2;
HXDLIN( 139)								 ::Dynamic ea = _g1;
HXLINE( 140)								 ::hxsl::TExprDef _hx_tmp = ::hxsl::TExprDef_obj::TArray(this->mapConsts(ea),eindex);
HXDLIN( 140)								return  ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),_hx_tmp)
            									->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            									->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            							}
            							else {
HXLINE( 143)								 ::Dynamic eindex = _g2;
HXDLIN( 143)								 ::Dynamic ea = _g1;
HXLINE( 144)								{
HXLINE( 144)									 ::hxsl::Type _g = ea->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 144)									if ((_g->_hx_getIndex() == 15)) {
HXLINE( 145)										 ::hxsl::SizeDecl _g1 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 145)										{
HXLINE( 145)											 ::hxsl::Type t = _g->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 145)											{
HXLINE( 146)												int stride = (this->varSize(t,::hxsl::VecType_obj::VFloat_dyn()) >> 2);
HXLINE( 147)												this->allocConst(( (Float)(stride) ),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            											}
            										}
            									}
            								}
            							}
            						}
            						else {
HXLINE( 143)							 ::Dynamic eindex = _g2;
HXDLIN( 143)							 ::Dynamic ea = _g1;
HXLINE( 144)							{
HXLINE( 144)								 ::hxsl::Type _g = ea->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 144)								if ((_g->_hx_getIndex() == 15)) {
HXLINE( 145)									 ::hxsl::SizeDecl _g1 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 145)									{
HXLINE( 145)										 ::hxsl::Type t = _g->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 145)										{
HXLINE( 146)											int stride = (this->varSize(t,::hxsl::VecType_obj::VFloat_dyn()) >> 2);
HXLINE( 147)											this->allocConst(( (Float)(stride) ),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE( 197)		return ::hxsl::Tools_obj::map(e,this->mapConsts_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Flatten_obj,mapConsts,return )

 ::Dynamic Flatten_obj::allocConst(Float v, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_200_allocConst)
HXLINE( 201)		int index = this->consts->indexOf(v,null());
HXLINE( 202)		if ((index < 0)) {
HXLINE( 203)			index = this->consts->length;
HXLINE( 204)			this->consts->push(v);
            		}
HXLINE( 206)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(this->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            				->setFixed(1,HX_("p",70,00,00,00),p)
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            			->setFixed(1,HX_("p",70,00,00,00),p)
            			->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Flatten_obj,allocConst,return )

 ::Dynamic Flatten_obj::allocConsts(::Array< Float > va, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_209_allocConsts)
HXDLIN( 209)		 ::hxsl::Flatten _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 210)		int pad = ((va->length - 1) & 3);
HXLINE( 211)		int index = -1;
HXLINE( 212)		{
HXLINE( 212)			int _g = 0;
HXDLIN( 212)			int _g1 = (this->consts->length - (va->length - 1));
HXDLIN( 212)			while((_g < _g1)){
HXLINE( 212)				_g = (_g + 1);
HXDLIN( 212)				int i = (_g - 1);
HXLINE( 213)				if (((i >> 2) != ((i + pad) >> 2))) {
HXLINE( 213)					continue;
            				}
HXLINE( 214)				bool found = true;
HXLINE( 215)				{
HXLINE( 215)					int _g1 = 0;
HXDLIN( 215)					int _g2 = va->length;
HXDLIN( 215)					while((_g1 < _g2)){
HXLINE( 215)						_g1 = (_g1 + 1);
HXDLIN( 215)						int j = (_g1 - 1);
HXLINE( 216)						if ((this->consts->__get((i + j)) != va->__get(j))) {
HXLINE( 217)							found = false;
HXLINE( 218)							goto _hx_goto_18;
            						}
            					}
            					_hx_goto_18:;
            				}
HXLINE( 220)				if (found) {
HXLINE( 221)					index = i;
HXLINE( 222)					goto _hx_goto_17;
            				}
            			}
            			_hx_goto_17:;
            		}
HXLINE( 225)		if ((index < 0)) {
HXLINE( 227)			while(((this->consts->length >> 2) != ((this->consts->length + pad) >> 2))){
HXLINE( 228)				this->consts->push(0);
            			}
HXLINE( 229)			index = this->consts->length;
HXLINE( 230)			{
HXLINE( 230)				int _g = 0;
HXDLIN( 230)				while((_g < va->length)){
HXLINE( 230)					Float v = va->__get(_g);
HXDLIN( 230)					_g = (_g + 1);
HXLINE( 231)					this->consts->push(v);
            				}
            			}
            		}
HXLINE( 236)		switch((int)(va->length)){
            			case (int)1: {
HXLINE( 238)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            					->setFixed(1,HX_("p",70,00,00,00),p)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn()));
            			}
            			break;
            			case (int)2: {
HXLINE( 240)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Vec2_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),::Array_obj< ::Dynamic>::__new(2)->init(0, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            							->setFixed(1,HX_("p",70,00,00,00),p)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn())))->init(1, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((index + 1))))
            							->setFixed(1,HX_("p",70,00,00,00),p)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn())))))
            					->setFixed(1,HX_("p",70,00,00,00),p)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(2,::hxsl::VecType_obj::VFloat_dyn())));
            			}
            			break;
            			case (int)3: {
HXLINE( 242)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Vec3_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),::Array_obj< ::Dynamic>::__new(3)->init(0, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            							->setFixed(1,HX_("p",70,00,00,00),p)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn())))->init(1, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((index + 1))))
            							->setFixed(1,HX_("p",70,00,00,00),p)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn())))->init(2, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((index + 2))))
            							->setFixed(1,HX_("p",70,00,00,00),p)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn())))))
            					->setFixed(1,HX_("p",70,00,00,00),p)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(3,::hxsl::VecType_obj::VFloat_dyn())));
            			}
            			break;
            			case (int)4: {
HXLINE( 244)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Vec4_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVoid_dyn())),::Array_obj< ::Dynamic>::__new(4)->init(0, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            							->setFixed(1,HX_("p",70,00,00,00),p)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn())))->init(1, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((index + 1))))
            							->setFixed(1,HX_("p",70,00,00,00),p)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn())))->init(2, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((index + 3))))
            							->setFixed(1,HX_("p",70,00,00,00),p)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn())))->init(3, ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray(_gthis->econsts, ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((index + 4))))
            							->setFixed(1,HX_("p",70,00,00,00),p)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            						->setFixed(1,HX_("p",70,00,00,00),p)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn())))))
            					->setFixed(1,HX_("p",70,00,00,00),p)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,::hxsl::VecType_obj::VFloat_dyn())));
            			}
            			break;
            			default:{
HXLINE( 246)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE( 236)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Flatten_obj,allocConsts,return )

 ::Dynamic Flatten_obj::mkInt(int v, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_251_mkInt)
HXDLIN( 251)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(v)))
            			->setFixed(1,HX_("p",70,00,00,00),pos)
            			->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Flatten_obj,mkInt,return )

 ::Dynamic Flatten_obj::readIndex( ::hxsl::_Flatten::Alloc a,int index, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_254_readIndex)
HXLINE( 255)		int offs;
HXDLIN( 255)		if (::hx::IsNull( a->t )) {
HXLINE( 255)			offs = a->pos;
            		}
            		else {
HXLINE( 255)			offs = (a->pos >> 2);
            		}
HXLINE( 256)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((offs + index))))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            			->setFixed(1,HX_("p",70,00,00,00),pos)
            			->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Flatten_obj,readIndex,return )

 ::Dynamic Flatten_obj::readOffset( ::hxsl::_Flatten::Alloc a,int stride, ::Dynamic delta,int index, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_259_readOffset)
HXLINE( 260)		int index1;
HXDLIN( 260)		if (::hx::IsNull( a->t )) {
HXLINE( 260)			index1 = a->pos;
            		}
            		else {
HXLINE( 260)			index1 = (a->pos >> 2);
            		}
HXDLIN( 260)		int index2 = (index1 + index);
HXLINE( 261)		 ::Dynamic offset;
HXDLIN( 261)		if ((index2 == 0)) {
HXLINE( 261)			offset = delta;
            		}
            		else {
HXLINE( 261)			offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index2)))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            		}
HXLINE( 262)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            				->setFixed(1,HX_("p",70,00,00,00),pos)
            				->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            			->setFixed(1,HX_("p",70,00,00,00),pos)
            			->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Flatten_obj,readOffset,return )

 ::Dynamic Flatten_obj::access( ::hxsl::_Flatten::Alloc a, ::hxsl::Type t, ::Dynamic pos, ::hxsl::ARead acc){
            	HX_GC_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_265_access)
HXDLIN( 265)		 ::hxsl::Flatten _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 272)		switch((int)(t->_hx_getIndex())){
            			case (int)6: {
HXLINE( 287)				 ::Dynamic _hx_tmp = this->access(a,::hxsl::Type_obj::TMat3x4_dyn(),pos,acc);
HXDLIN( 287)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Mat3_dyn()))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0)))),::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp)))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TMat3_dyn()));
            			}
            			break;
            			case (int)7: {
HXLINE( 274)				 ::hxsl::TExprDef _hx_tmp = ::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Mat4_dyn());
HXDLIN( 274)				 ::hxsl::Type _hx_tmp1 = ::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0));
HXLINE( 275)				 ::Dynamic _hx_tmp2;
HXDLIN( 275)				switch((int)(acc->_hx_getIndex())){
            					case (int)0: {
HXLINE( 275)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 275)						int offs;
HXDLIN( 275)						if (::hx::IsNull( a->t )) {
HXLINE( 275)							offs = a->pos;
            						}
            						else {
HXLINE( 275)							offs = (a->pos >> 2);
            						}
HXDLIN( 275)						_hx_tmp2 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(offs)))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            					case (int)1: {
HXLINE( 275)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 275)						int stride = acc->_hx_getInt(1);
HXDLIN( 275)						 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 275)						int index;
HXDLIN( 275)						if (::hx::IsNull( a->t )) {
HXLINE( 275)							index = a->pos;
            						}
            						else {
HXLINE( 275)							index = (a->pos >> 2);
            						}
HXDLIN( 275)						 ::Dynamic offset;
HXDLIN( 275)						if ((index == 0)) {
HXLINE( 275)							offset = delta;
            						}
            						else {
HXLINE( 275)							offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            						}
HXDLIN( 275)						_hx_tmp2 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            				}
HXLINE( 276)				 ::Dynamic _hx_tmp3;
HXDLIN( 276)				switch((int)(acc->_hx_getIndex())){
            					case (int)0: {
HXLINE( 276)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 276)						int offs;
HXDLIN( 276)						if (::hx::IsNull( a->t )) {
HXLINE( 276)							offs = a->pos;
            						}
            						else {
HXLINE( 276)							offs = (a->pos >> 2);
            						}
HXDLIN( 276)						_hx_tmp3 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((offs + 1))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            					case (int)1: {
HXLINE( 276)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 276)						int stride = acc->_hx_getInt(1);
HXDLIN( 276)						 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 276)						int index;
HXDLIN( 276)						if (::hx::IsNull( a->t )) {
HXLINE( 276)							index = a->pos;
            						}
            						else {
HXLINE( 276)							index = (a->pos >> 2);
            						}
HXDLIN( 276)						int index1 = (index + 1);
HXDLIN( 276)						 ::Dynamic offset;
HXDLIN( 276)						if ((index1 == 0)) {
HXLINE( 276)							offset = delta;
            						}
            						else {
HXLINE( 276)							offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index1)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            						}
HXDLIN( 276)						_hx_tmp3 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            				}
HXLINE( 277)				 ::Dynamic _hx_tmp4;
HXDLIN( 277)				switch((int)(acc->_hx_getIndex())){
            					case (int)0: {
HXLINE( 277)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 277)						int offs;
HXDLIN( 277)						if (::hx::IsNull( a->t )) {
HXLINE( 277)							offs = a->pos;
            						}
            						else {
HXLINE( 277)							offs = (a->pos >> 2);
            						}
HXDLIN( 277)						_hx_tmp4 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((offs + 2))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            					case (int)1: {
HXLINE( 277)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 277)						int stride = acc->_hx_getInt(1);
HXDLIN( 277)						 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 277)						int index;
HXDLIN( 277)						if (::hx::IsNull( a->t )) {
HXLINE( 277)							index = a->pos;
            						}
            						else {
HXLINE( 277)							index = (a->pos >> 2);
            						}
HXDLIN( 277)						int index1 = (index + 2);
HXDLIN( 277)						 ::Dynamic offset;
HXDLIN( 277)						if ((index1 == 0)) {
HXLINE( 277)							offset = delta;
            						}
            						else {
HXLINE( 277)							offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index1)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            						}
HXDLIN( 277)						_hx_tmp4 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            				}
HXLINE( 278)				 ::Dynamic _hx_tmp5;
HXDLIN( 278)				switch((int)(acc->_hx_getIndex())){
            					case (int)0: {
HXLINE( 278)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 278)						int offs;
HXDLIN( 278)						if (::hx::IsNull( a->t )) {
HXLINE( 278)							offs = a->pos;
            						}
            						else {
HXLINE( 278)							offs = (a->pos >> 2);
            						}
HXDLIN( 278)						_hx_tmp5 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((offs + 3))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            					case (int)1: {
HXLINE( 278)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 278)						int stride = acc->_hx_getInt(1);
HXDLIN( 278)						 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 278)						int index;
HXDLIN( 278)						if (::hx::IsNull( a->t )) {
HXLINE( 278)							index = a->pos;
            						}
            						else {
HXLINE( 278)							index = (a->pos >> 2);
            						}
HXDLIN( 278)						int index1 = (index + 3);
HXDLIN( 278)						 ::Dynamic offset;
HXDLIN( 278)						if ((index1 == 0)) {
HXLINE( 278)							offset = delta;
            						}
            						else {
HXLINE( 278)							offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index1)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            						}
HXDLIN( 278)						_hx_tmp5 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            				}
HXLINE( 274)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),_hx_tmp)
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),_hx_tmp1)),::Array_obj< ::Dynamic>::__new(4)->init(0,_hx_tmp2)->init(1,_hx_tmp3)->init(2,_hx_tmp4)->init(3,_hx_tmp5)))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TMat4_dyn()));
            			}
            			break;
            			case (int)8: {
HXLINE( 281)				 ::hxsl::TExprDef _hx_tmp = ::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::Mat3x4_dyn());
HXDLIN( 281)				 ::hxsl::Type _hx_tmp1 = ::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0));
HXLINE( 282)				 ::Dynamic _hx_tmp2;
HXDLIN( 282)				switch((int)(acc->_hx_getIndex())){
            					case (int)0: {
HXLINE( 282)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 282)						int offs;
HXDLIN( 282)						if (::hx::IsNull( a->t )) {
HXLINE( 282)							offs = a->pos;
            						}
            						else {
HXLINE( 282)							offs = (a->pos >> 2);
            						}
HXDLIN( 282)						_hx_tmp2 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(offs)))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            					case (int)1: {
HXLINE( 282)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 282)						int stride = acc->_hx_getInt(1);
HXDLIN( 282)						 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 282)						int index;
HXDLIN( 282)						if (::hx::IsNull( a->t )) {
HXLINE( 282)							index = a->pos;
            						}
            						else {
HXLINE( 282)							index = (a->pos >> 2);
            						}
HXDLIN( 282)						 ::Dynamic offset;
HXDLIN( 282)						if ((index == 0)) {
HXLINE( 282)							offset = delta;
            						}
            						else {
HXLINE( 282)							offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            						}
HXDLIN( 282)						_hx_tmp2 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            				}
HXLINE( 283)				 ::Dynamic _hx_tmp3;
HXDLIN( 283)				switch((int)(acc->_hx_getIndex())){
            					case (int)0: {
HXLINE( 283)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 283)						int offs;
HXDLIN( 283)						if (::hx::IsNull( a->t )) {
HXLINE( 283)							offs = a->pos;
            						}
            						else {
HXLINE( 283)							offs = (a->pos >> 2);
            						}
HXDLIN( 283)						_hx_tmp3 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((offs + 1))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            					case (int)1: {
HXLINE( 283)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 283)						int stride = acc->_hx_getInt(1);
HXDLIN( 283)						 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 283)						int index;
HXDLIN( 283)						if (::hx::IsNull( a->t )) {
HXLINE( 283)							index = a->pos;
            						}
            						else {
HXLINE( 283)							index = (a->pos >> 2);
            						}
HXDLIN( 283)						int index1 = (index + 1);
HXDLIN( 283)						 ::Dynamic offset;
HXDLIN( 283)						if ((index1 == 0)) {
HXLINE( 283)							offset = delta;
            						}
            						else {
HXLINE( 283)							offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index1)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            						}
HXDLIN( 283)						_hx_tmp3 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            				}
HXLINE( 284)				 ::Dynamic _hx_tmp4;
HXDLIN( 284)				switch((int)(acc->_hx_getIndex())){
            					case (int)0: {
HXLINE( 284)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 284)						int offs;
HXDLIN( 284)						if (::hx::IsNull( a->t )) {
HXLINE( 284)							offs = a->pos;
            						}
            						else {
HXLINE( 284)							offs = (a->pos >> 2);
            						}
HXDLIN( 284)						_hx_tmp4 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt((offs + 2))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            					case (int)1: {
HXLINE( 284)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 284)						int stride = acc->_hx_getInt(1);
HXDLIN( 284)						 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 284)						int index;
HXDLIN( 284)						if (::hx::IsNull( a->t )) {
HXLINE( 284)							index = a->pos;
            						}
            						else {
HXLINE( 284)							index = (a->pos >> 2);
            						}
HXDLIN( 284)						int index1 = (index + 2);
HXDLIN( 284)						 ::Dynamic offset;
HXDLIN( 284)						if ((index1 == 0)) {
HXLINE( 284)							offset = delta;
            						}
            						else {
HXLINE( 284)							offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index1)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            						}
HXDLIN( 284)						_hx_tmp4 =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            				}
HXLINE( 281)				return  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),_hx_tmp)
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),_hx_tmp1)),::Array_obj< ::Dynamic>::__new(3)->init(0,_hx_tmp2)->init(1,_hx_tmp3)->init(2,_hx_tmp4)))
            					->setFixed(1,HX_("p",70,00,00,00),pos)
            					->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TMat3x4_dyn()));
            			}
            			break;
            			case (int)15: {
HXLINE( 288)				 ::hxsl::SizeDecl _g = t->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 288)				if ((_g->_hx_getIndex() == 0)) {
HXLINE( 288)					int len = _g->_hx_getInt(0);
HXDLIN( 288)					 ::hxsl::Type t1 = t->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXLINE( 289)					int stride = ::Std_obj::_hx_int((( (Float)(a->size) ) / ( (Float)(len) )));
HXLINE( 290)					::Array< ::Dynamic> _g1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 290)					{
HXLINE( 290)						int _g2 = 0;
HXDLIN( 290)						int _g3 = len;
HXDLIN( 290)						while((_g2 < _g3)){
HXLINE( 290)							_g2 = (_g2 + 1);
HXDLIN( 290)							int i = (_g2 - 1);
HXDLIN( 290)							 ::hxsl::_Flatten::Alloc a1 =  ::hxsl::_Flatten::Alloc_obj::__alloc( HX_CTX ,a->g,a->t,(a->pos + (stride * i)),stride);
HXDLIN( 290)							_g1->push(this->access(a1,t1,pos,::hxsl::ARead_obj::AIndex(a1)));
            						}
            					}
HXDLIN( 290)					::Array< ::Dynamic> earr = _g1;
HXLINE( 291)					return  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArrayDecl(earr))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),t1));
            				}
            				else {
HXLINE( 293)					if (::hxsl::Tools_obj::isSampler(t)) {
HXLINE( 294)						 ::Dynamic e;
HXDLIN( 294)						switch((int)(acc->_hx_getIndex())){
            							case (int)0: {
HXLINE( 294)								 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 294)								int offs;
HXDLIN( 294)								if (::hx::IsNull( a->t )) {
HXLINE( 294)									offs = a->pos;
            								}
            								else {
HXLINE( 294)									offs = (a->pos >> 2);
            								}
HXDLIN( 294)								e =  ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            										->setFixed(1,HX_("p",70,00,00,00),pos)
            										->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(offs)))
            										->setFixed(1,HX_("p",70,00,00,00),pos)
            										->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            							}
            							break;
            							case (int)1: {
HXLINE( 294)								 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 294)								int stride = acc->_hx_getInt(1);
HXDLIN( 294)								 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 294)								int index;
HXDLIN( 294)								if (::hx::IsNull( a->t )) {
HXLINE( 294)									index = a->pos;
            								}
            								else {
HXLINE( 294)									index = (a->pos >> 2);
            								}
HXDLIN( 294)								 ::Dynamic offset;
HXDLIN( 294)								if ((index == 0)) {
HXLINE( 294)									offset = delta;
            								}
            								else {
HXLINE( 294)									offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            											->setFixed(1,HX_("p",70,00,00,00),pos)
            											->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            										->setFixed(1,HX_("p",70,00,00,00),pos)
            										->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            								}
HXDLIN( 294)								e =  ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            										->setFixed(1,HX_("p",70,00,00,00),pos)
            										->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            							}
            							break;
            						}
HXLINE( 295)						e->__SetField(HX_("t",74,00,00,00),t,::hx::paccDynamic);
HXLINE( 296)						return e;
            					}
HXLINE( 298)					int size = this->varSize(t,a->t);
HXLINE( 299)					if ((size > 4)) {
HXLINE( 300)						return ::hxsl::Error_obj::t((HX_("Access not supported for ",72,79,74,b6) + ::hxsl::Tools_obj::toString(t)),null());
            					}
HXLINE( 301)					 ::Dynamic e;
HXDLIN( 301)					switch((int)(acc->_hx_getIndex())){
            						case (int)0: {
HXLINE( 301)							 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 301)							int offs;
HXDLIN( 301)							if (::hx::IsNull( a->t )) {
HXLINE( 301)								offs = a->pos;
            							}
            							else {
HXLINE( 301)								offs = (a->pos >> 2);
            							}
HXDLIN( 301)							e =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(offs)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            						}
            						break;
            						case (int)1: {
HXLINE( 301)							 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 301)							int stride = acc->_hx_getInt(1);
HXDLIN( 301)							 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 301)							int index;
HXDLIN( 301)							if (::hx::IsNull( a->t )) {
HXLINE( 301)								index = a->pos;
            							}
            							else {
HXLINE( 301)								index = (a->pos >> 2);
            							}
HXDLIN( 301)							 ::Dynamic offset;
HXDLIN( 301)							if ((index == 0)) {
HXLINE( 301)								offset = delta;
            							}
            							else {
HXLINE( 301)								offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            										->setFixed(1,HX_("p",70,00,00,00),pos)
            										->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            							}
HXDLIN( 301)							e =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            						}
            						break;
            					}
HXLINE( 302)					if ((size == 4)) {
HXLINE( 303)						if (((a->pos & 3) != 0)) {
HXLINE( 303)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            						}
            					}
            					else {
HXLINE( 305)						::Array< ::Dynamic> sw = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 306)						{
HXLINE( 306)							int _g = 0;
HXDLIN( 306)							int _g1 = size;
HXDLIN( 306)							while((_g < _g1)){
HXLINE( 306)								_g = (_g + 1);
HXDLIN( 306)								int i = (_g - 1);
HXLINE( 307)								sw->push(::hxsl::Tools_obj::SWIZ->__get((i + (a->pos & 3))).StaticCast<  ::hxsl::Component >());
            							}
            						}
HXLINE( 308)						e =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TSwiz(e,sw))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),t));
            					}
HXLINE( 310)					switch((int)(t->_hx_getIndex())){
            						case (int)1: {
HXLINE( 312)							e->__SetField(HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn(),::hx::paccDynamic);
HXLINE( 313)							e = this->toInt(e);
            						}
            						break;
            						case (int)5: {
HXLINE( 314)							if ((t->_hx_getObject(1).StaticCast<  ::hxsl::VecType >()->_hx_getIndex() == 0)) {
HXLINE( 314)								int size = t->_hx_getInt(0);
HXDLIN( 314)								{
HXLINE( 315)									e->__SetField(HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(size,::hxsl::VecType_obj::VFloat_dyn()),::hx::paccDynamic);
HXLINE( 316)									e =  ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::Array_obj< ::Dynamic>::__new(3)->init(0,::hxsl::TGlobal_obj::IVec2_dyn())->init(1,::hxsl::TGlobal_obj::IVec3_dyn())->init(2,::hxsl::TGlobal_obj::IVec4_dyn())->__get((size - 2)).StaticCast<  ::hxsl::TGlobal >()))
            											->setFixed(1,HX_("p",70,00,00,00),pos)
            											->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0)))),::Array_obj< ::Dynamic>::__new(1)->init(0,e)))
            										->setFixed(1,HX_("p",70,00,00,00),pos)
            										->setFixed(2,HX_("t",74,00,00,00),t));
            								}
            							}
            						}
            						break;
            						default:{
            						}
            					}
HXLINE( 319)					return e;
            				}
            			}
            			break;
            			default:{
HXLINE( 293)				if (::hxsl::Tools_obj::isSampler(t)) {
HXLINE( 294)					 ::Dynamic e;
HXDLIN( 294)					switch((int)(acc->_hx_getIndex())){
            						case (int)0: {
HXLINE( 294)							 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 294)							int offs;
HXDLIN( 294)							if (::hx::IsNull( a->t )) {
HXLINE( 294)								offs = a->pos;
            							}
            							else {
HXLINE( 294)								offs = (a->pos >> 2);
            							}
HXDLIN( 294)							e =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(offs)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            						}
            						break;
            						case (int)1: {
HXLINE( 294)							 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 294)							int stride = acc->_hx_getInt(1);
HXDLIN( 294)							 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 294)							int index;
HXDLIN( 294)							if (::hx::IsNull( a->t )) {
HXLINE( 294)								index = a->pos;
            							}
            							else {
HXLINE( 294)								index = (a->pos >> 2);
            							}
HXDLIN( 294)							 ::Dynamic offset;
HXDLIN( 294)							if ((index == 0)) {
HXLINE( 294)								offset = delta;
            							}
            							else {
HXLINE( 294)								offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            										->setFixed(1,HX_("p",70,00,00,00),pos)
            										->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            							}
HXDLIN( 294)							e =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            						}
            						break;
            					}
HXLINE( 295)					e->__SetField(HX_("t",74,00,00,00),t,::hx::paccDynamic);
HXLINE( 296)					return e;
            				}
HXLINE( 298)				int size = this->varSize(t,a->t);
HXLINE( 299)				if ((size > 4)) {
HXLINE( 300)					return ::hxsl::Error_obj::t((HX_("Access not supported for ",72,79,74,b6) + ::hxsl::Tools_obj::toString(t)),null());
            				}
HXLINE( 301)				 ::Dynamic e;
HXDLIN( 301)				switch((int)(acc->_hx_getIndex())){
            					case (int)0: {
HXLINE( 301)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 301)						int offs;
HXDLIN( 301)						if (::hx::IsNull( a->t )) {
HXLINE( 301)							offs = a->pos;
            						}
            						else {
HXLINE( 301)							offs = (a->pos >> 2);
            						}
HXDLIN( 301)						e =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(offs)))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            					case (int)1: {
HXLINE( 301)						 ::hxsl::_Flatten::Alloc a = acc->_hx_getObject(0).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 301)						int stride = acc->_hx_getInt(1);
HXDLIN( 301)						 ::Dynamic delta = acc->_hx_getObject(2);
HXDLIN( 301)						int index;
HXDLIN( 301)						if (::hx::IsNull( a->t )) {
HXLINE( 301)							index = a->pos;
            						}
            						else {
HXLINE( 301)							index = (a->pos >> 2);
            						}
HXDLIN( 301)						 ::Dynamic offset;
HXDLIN( 301)						if ((index == 0)) {
HXLINE( 301)							offset = delta;
            						}
            						else {
HXLINE( 301)							offset =  ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TBinop(::haxe::macro::Binop_obj::OpAdd_dyn(),delta, ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TConst(::hxsl::Const_obj::CInt(index)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()))))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            						}
HXDLIN( 301)						e =  ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TArray( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TVar(a->g))
            								->setFixed(1,HX_("p",70,00,00,00),pos)
            								->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(a->g->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))),offset))
            							->setFixed(1,HX_("p",70,00,00,00),pos)
            							->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(4,a->t)));
            					}
            					break;
            				}
HXLINE( 302)				if ((size == 4)) {
HXLINE( 303)					if (((a->pos & 3) != 0)) {
HXLINE( 303)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            					}
            				}
            				else {
HXLINE( 305)					::Array< ::Dynamic> sw = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 306)					{
HXLINE( 306)						int _g = 0;
HXDLIN( 306)						int _g1 = size;
HXDLIN( 306)						while((_g < _g1)){
HXLINE( 306)							_g = (_g + 1);
HXDLIN( 306)							int i = (_g - 1);
HXLINE( 307)							sw->push(::hxsl::Tools_obj::SWIZ->__get((i + (a->pos & 3))).StaticCast<  ::hxsl::Component >());
            						}
            					}
HXLINE( 308)					e =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TSwiz(e,sw))
            						->setFixed(1,HX_("p",70,00,00,00),pos)
            						->setFixed(2,HX_("t",74,00,00,00),t));
            				}
HXLINE( 310)				switch((int)(t->_hx_getIndex())){
            					case (int)1: {
HXLINE( 312)						e->__SetField(HX_("t",74,00,00,00),::hxsl::Type_obj::TFloat_dyn(),::hx::paccDynamic);
HXLINE( 313)						e = this->toInt(e);
            					}
            					break;
            					case (int)5: {
HXLINE( 314)						if ((t->_hx_getObject(1).StaticCast<  ::hxsl::VecType >()->_hx_getIndex() == 0)) {
HXLINE( 314)							int size = t->_hx_getInt(0);
HXDLIN( 314)							{
HXLINE( 315)								e->__SetField(HX_("t",74,00,00,00),::hxsl::Type_obj::TVec(size,::hxsl::VecType_obj::VFloat_dyn()),::hx::paccDynamic);
HXLINE( 316)								e =  ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::Array_obj< ::Dynamic>::__new(3)->init(0,::hxsl::TGlobal_obj::IVec2_dyn())->init(1,::hxsl::TGlobal_obj::IVec3_dyn())->init(2,::hxsl::TGlobal_obj::IVec4_dyn())->__get((size - 2)).StaticCast<  ::hxsl::TGlobal >()))
            										->setFixed(1,HX_("p",70,00,00,00),pos)
            										->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0)))),::Array_obj< ::Dynamic>::__new(1)->init(0,e)))
            									->setFixed(1,HX_("p",70,00,00,00),pos)
            									->setFixed(2,HX_("t",74,00,00,00),t));
            							}
            						}
            					}
            					break;
            					default:{
            					}
            				}
HXLINE( 319)				return e;
            			}
            		}
HXLINE( 272)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(Flatten_obj,access,return )

 ::Dynamic Flatten_obj::toInt( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_323_toInt)
HXLINE( 324)		if (::hx::IsPointerEq( e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic),::hxsl::Type_obj::TInt_dyn() )) {
HXLINE( 324)			return e;
            		}
HXLINE( 325)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TGlobal(::hxsl::TGlobal_obj::ToInt_dyn()))
            				->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            				->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TFun(::Array_obj< ::Dynamic>::__new(0)))),::Array_obj< ::Dynamic>::__new(1)->init(0,e)))
            			->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            			->setFixed(2,HX_("t",74,00,00,00),::hxsl::Type_obj::TInt_dyn()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Flatten_obj,toInt,return )

 ::Dynamic Flatten_obj::optimize( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_328_optimize)
HXLINE( 329)		{
HXLINE( 329)			 ::hxsl::TExprDef _g = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 329)			switch((int)(_g->_hx_getIndex())){
            				case (int)8: {
HXLINE( 330)					 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 330)					::Array< ::Dynamic> _g2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 330)					{
HXLINE( 330)						 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 330)						 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 330)						 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 330)						if ((_g3->_hx_getIndex() == 2)) {
HXLINE( 330)							if ((_g3->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >()->_hx_getIndex() == 52)) {
HXLINE( 330)								if ((_g2->length == 1)) {
HXLINE( 330)									 ::Dynamic _g = _g2->__get(0);
HXDLIN( 330)									{
HXLINE( 330)										 ::hxsl::TExprDef _g1 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 330)										 ::Dynamic _g3 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 330)										 ::hxsl::Type _g4 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 330)										if ((_g1->_hx_getIndex() == 8)) {
HXLINE( 330)											 ::Dynamic _g = _g1->_hx_getObject(0);
HXDLIN( 330)											{
HXLINE( 330)												 ::hxsl::TExprDef _g2 = _g->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 330)												 ::Dynamic _g3 = _g->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 330)												 ::hxsl::Type _g4 = _g->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 330)												if ((_g2->_hx_getIndex() == 2)) {
HXLINE( 330)													if ((_g2->_hx_getObject(0).StaticCast<  ::hxsl::TGlobal >()->_hx_getIndex() == 51)) {
HXLINE( 330)														::Array< ::Dynamic> args = _g1->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 330)														{
HXLINE( 331)															int rem = 0;
HXLINE( 332)															int size = 0;
HXLINE( 333)															while((size < 4)){
HXLINE( 334)																 ::hxsl::Type t = args->__get(((args->length - 1) - rem))->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXLINE( 335)																size = (size + this->varSize(t,::hxsl::VecType_obj::VFloat_dyn()));
HXLINE( 336)																rem = (rem + 1);
            															}
HXLINE( 338)															if ((size == 4)) {
HXLINE( 339)																{
HXLINE( 339)																	int _g = 0;
HXDLIN( 339)																	int _g1 = rem;
HXDLIN( 339)																	while((_g < _g1)){
HXLINE( 339)																		_g = (_g + 1);
HXDLIN( 339)																		int i = (_g - 1);
HXLINE( 340)																		args->pop();
            																	}
            																}
HXLINE( 341)																 ::Dynamic emat;
HXDLIN( 341)																 ::hxsl::TExprDef _g2 = e->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 341)																if ((_g2->_hx_getIndex() == 8)) {
HXLINE( 341)																	::Array< ::Dynamic> _g = _g2->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 341)																	 ::Dynamic e = _g2->_hx_getObject(0);
HXDLIN( 341)																	emat = e;
            																}
            																else {
HXLINE( 341)																	HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            																}
HXLINE( 342)																return  ::Dynamic(::hx::Anon_obj::Create(3)
            																	->setFixed(0,HX_("e",65,00,00,00),::hxsl::TExprDef_obj::TCall(emat,args))
            																	->setFixed(1,HX_("p",70,00,00,00), ::Dynamic(e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)))
            																	->setFixed(2,HX_("t",74,00,00,00), ::Dynamic(e->__Field(HX_("t",74,00,00,00),::hx::paccDynamic))));
            															}
            														}
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)16: {
HXLINE( 344)					 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 344)					 ::Dynamic _g2 = _g->_hx_getObject(1);
HXDLIN( 344)					{
HXLINE( 344)						 ::hxsl::TExprDef _g3 = _g1->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 344)						 ::Dynamic _g4 = _g1->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 344)						 ::hxsl::Type _g5 = _g1->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 344)						if ((_g3->_hx_getIndex() == 17)) {
HXLINE( 344)							 ::hxsl::TExprDef _g = _g2->__Field(HX_("e",65,00,00,00),::hx::paccDynamic);
HXDLIN( 344)							 ::Dynamic _g1 = _g2->__Field(HX_("p",70,00,00,00),::hx::paccDynamic);
HXDLIN( 344)							 ::hxsl::Type _g4 = _g2->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
HXDLIN( 344)							if ((_g->_hx_getIndex() == 0)) {
HXLINE( 344)								 ::hxsl::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Const >();
HXDLIN( 344)								if ((_g1->_hx_getIndex() == 2)) {
HXLINE( 344)									int i = _g1->_hx_getInt(0);
HXDLIN( 344)									::Array< ::Dynamic> el = _g3->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 344)									{
HXLINE( 345)										bool _hx_tmp;
HXDLIN( 345)										if ((i >= 0)) {
HXLINE( 345)											_hx_tmp = (i < el->length);
            										}
            										else {
HXLINE( 345)											_hx_tmp = false;
            										}
HXDLIN( 345)										if (_hx_tmp) {
HXLINE( 346)											return el->__get(i);
            										}
HXLINE( 347)										::hxsl::Error_obj::t(HX_("Reading outside array bounds",6b,6b,be,6d),e->__Field(HX_("p",70,00,00,00),::hx::paccDynamic));
            									}
            								}
            							}
            						}
            					}
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE( 350)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Flatten_obj,optimize,return )

::Array< ::Dynamic> Flatten_obj::packTextures(::String name,::Array< ::Dynamic> vars, ::hxsl::Type t){
            	HX_GC_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_353_packTextures)
HXLINE( 354)		::Array< ::Dynamic> alloc = ::Array_obj< ::Dynamic>::__new();
HXLINE( 355)		 ::Dynamic g =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),::hxsl::Tools_obj::allocVarId())
            			->setFixed(1,HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Param_dyn())
            			->setFixed(2,HX_("name",4b,72,ff,48),name)
            			->setFixed(3,HX_("type",ba,f2,08,4d),t));
HXLINE( 361)		int pos = 0;
HXLINE( 362)		::Array< ::String > samplers = ::Array_obj< ::String >::__new(0);
HXLINE( 363)		{
HXLINE( 363)			int _g = 0;
HXDLIN( 363)			while((_g < vars->length)){
HXLINE( 363)				 ::Dynamic v = vars->__get(_g);
HXDLIN( 363)				_g = (_g + 1);
HXLINE( 364)				int count = 1;
HXLINE( 365)				if (::hx::IsPointerNotEq( v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),t )) {
HXLINE( 366)					 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 366)					switch((int)(_g->_hx_getIndex())){
            						case (int)15: {
HXLINE( 368)							 ::hxsl::SizeDecl _g1 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 368)							if ((_g1->_hx_getIndex() == 0)) {
HXLINE( 368)								int n = _g1->_hx_getInt(0);
HXDLIN( 368)								 ::hxsl::Type t2 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 368)								if (::hx::IsPointerEq( t2,t )) {
HXLINE( 369)									count = n;
            								}
            								else {
HXLINE( 371)									continue;
            								}
            							}
            							else {
HXLINE( 371)								continue;
            							}
            						}
            						break;
            						case (int)17: {
HXLINE( 367)							int _g1 = _g->_hx_getInt(0);
HXDLIN( 367)							if (::hx::IsPointerNotEq( t,::hxsl::Type_obj::TSampler2D_dyn() )) {
HXLINE( 371)								continue;
            							}
            						}
            						break;
            						default:{
HXLINE( 371)							continue;
            						}
            					}
            				}
HXLINE( 374)				 ::hxsl::_Flatten::Alloc a =  ::hxsl::_Flatten::Alloc_obj::__alloc( HX_CTX ,g,null(),pos,count);
HXLINE( 375)				a->v = v;
HXLINE( 376)				if (::hx::IsNotNull( v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 377)					int _g = 0;
HXDLIN( 377)					::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(v->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 377)					while((_g < _g1->length)){
HXLINE( 377)						 ::hxsl::VarQualifier q = _g1->__get(_g).StaticCast<  ::hxsl::VarQualifier >();
HXDLIN( 377)						_g = (_g + 1);
HXLINE( 378)						if ((q->_hx_getIndex() == 12)) {
HXLINE( 379)							::String name = q->_hx_getString(0);
HXLINE( 380)							{
HXLINE( 380)								int _g = 0;
HXDLIN( 380)								int _g1 = count;
HXDLIN( 380)								while((_g < _g1)){
HXLINE( 380)									_g = (_g + 1);
HXDLIN( 380)									int i = (_g - 1);
HXLINE( 381)									samplers[(pos + i)] = name;
            								}
            							}
            						}
            					}
            				}
HXLINE( 384)				this->varMap->set(v,a);
HXLINE( 385)				alloc->push(a);
HXLINE( 386)				pos = (pos + count);
            			}
            		}
HXLINE( 388)		g->__SetField(HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TArray(t,::hxsl::SizeDecl_obj::SConst(pos)),::hx::paccDynamic);
HXLINE( 389)		if ((samplers->length > 0)) {
HXLINE( 390)			{
HXLINE( 390)				int _g = 0;
HXDLIN( 390)				int _g1 = pos;
HXDLIN( 390)				while((_g < _g1)){
HXLINE( 390)					_g = (_g + 1);
HXDLIN( 390)					int i = (_g - 1);
HXLINE( 391)					if (::hx::IsNull( samplers->__get(i) )) {
HXLINE( 392)						samplers[i] = HX_("",00,00,00,00);
            					}
            				}
            			}
HXLINE( 393)			if (::hx::IsNull( g->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic) )) {
HXLINE( 394)				g->__SetField(HX_("qualifiers",09,bb,6b,7c),::Array_obj< ::Dynamic>::__new(0),::hx::paccDynamic);
            			}
HXLINE( 395)			::Array< ::Dynamic> g1 = ( (::Array< ::Dynamic>)(g->__Field(HX_("qualifiers",09,bb,6b,7c),::hx::paccDynamic)) );
HXDLIN( 395)			g1->push(::hxsl::VarQualifier_obj::Sampler(samplers->join(HX_(",",2c,00,00,00))));
            		}
HXLINE( 397)		if ((alloc->length > 0)) {
HXLINE( 398)			this->outVars->push(g);
HXLINE( 399)			this->allocData->set(g,alloc);
            		}
HXLINE( 401)		return alloc;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Flatten_obj,packTextures,return )

void Flatten_obj::packBuffers(::Array< ::Dynamic> vars){
            	HX_GC_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_404_packBuffers)
HXLINE( 405)		::Array< ::Dynamic> alloc = ::Array_obj< ::Dynamic>::__new();
HXLINE( 406)		 ::Dynamic g =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),::hxsl::Tools_obj::allocVarId())
            			->setFixed(1,HX_("kind",54,e1,09,47),::hxsl::VarKind_obj::Param_dyn())
            			->setFixed(2,HX_("name",4b,72,ff,48),HX_("buffers",73,a3,90,b1))
            			->setFixed(3,HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TVoid_dyn()));
HXLINE( 412)		{
HXLINE( 412)			int _g = 0;
HXDLIN( 412)			while((_g < vars->length)){
HXLINE( 412)				 ::Dynamic v = vars->__get(_g);
HXDLIN( 412)				_g = (_g + 1);
HXLINE( 413)				 ::hxsl::Type _g1 = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 413)				bool _hx_tmp;
HXDLIN( 413)				if ((_g1->_hx_getIndex() == 16)) {
HXLINE( 413)					 ::hxsl::Type _g = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 413)					 ::hxsl::SizeDecl _g2 = _g1->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 413)					_hx_tmp = true;
            				}
            				else {
HXLINE( 413)					_hx_tmp = false;
            				}
HXDLIN( 413)				if (_hx_tmp) {
HXLINE( 414)					 ::hxsl::_Flatten::Alloc a =  ::hxsl::_Flatten::Alloc_obj::__alloc( HX_CTX ,g,null(),alloc->length,1);
HXLINE( 415)					a->v = v;
HXLINE( 416)					alloc->push(a);
HXLINE( 417)					this->outVars->push(v);
            				}
            			}
            		}
HXLINE( 419)		g->__SetField(HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TArray(::hxsl::Type_obj::TBuffer(::hxsl::Type_obj::TVoid_dyn(),::hxsl::SizeDecl_obj::SConst(0)),::hxsl::SizeDecl_obj::SConst(alloc->length)),::hx::paccDynamic);
HXLINE( 420)		this->allocData->set(g,alloc);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Flatten_obj,packBuffers,(void))

 ::Dynamic Flatten_obj::pack(::String name, ::hxsl::VarKind kind,::Array< ::Dynamic> vars, ::hxsl::VecType t){
            	HX_GC_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_423_pack)
HXLINE( 424)		::Array< ::Dynamic> alloc = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 424)		int apos = 0;
HXLINE( 425)		 ::Dynamic g =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),::hxsl::Tools_obj::allocVarId())
            			->setFixed(1,HX_("kind",54,e1,09,47),kind)
            			->setFixed(2,HX_("name",4b,72,ff,48),name)
            			->setFixed(3,HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TVec(0,t)));
HXLINE( 431)		{
HXLINE( 431)			int _g = 0;
HXDLIN( 431)			while((_g < vars->length)){
HXLINE( 431)				 ::Dynamic v = vars->__get(_g);
HXDLIN( 431)				_g = (_g + 1);
HXLINE( 432)				bool _hx_tmp;
HXDLIN( 432)				if (!(::hxsl::Tools_obj::isSampler(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))) {
HXLINE( 432)					 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 432)					if ((_g->_hx_getIndex() == 16)) {
HXLINE( 432)						 ::hxsl::Type _g1 = _g->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 432)						 ::hxsl::SizeDecl _g2 = _g->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 432)						_hx_tmp = true;
            					}
            					else {
HXLINE( 432)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 432)					_hx_tmp = true;
            				}
HXDLIN( 432)				if (_hx_tmp) {
HXLINE( 433)					continue;
            				}
HXLINE( 434)				{
HXLINE( 434)					 ::hxsl::Type _g1 = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 434)					if ((_g1->_hx_getIndex() == 15)) {
HXLINE( 435)						 ::hxsl::SizeDecl _g = _g1->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 435)						{
HXLINE( 435)							 ::hxsl::Type t = _g1->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 435)							if (::hxsl::Tools_obj::isSampler(t)) {
HXLINE( 435)								continue;
            							}
            						}
            					}
            				}
HXLINE( 438)				int size = this->varSize(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),t);
HXLINE( 439)				 ::hxsl::_Flatten::Alloc best = null();
HXLINE( 440)				{
HXLINE( 440)					int _g2 = 0;
HXDLIN( 440)					while((_g2 < alloc->length)){
HXLINE( 440)						 ::hxsl::_Flatten::Alloc a = alloc->__get(_g2).StaticCast<  ::hxsl::_Flatten::Alloc >();
HXDLIN( 440)						_g2 = (_g2 + 1);
HXLINE( 441)						bool _hx_tmp;
HXDLIN( 441)						bool _hx_tmp1;
HXDLIN( 441)						if (::hx::IsNull( a->v )) {
HXLINE( 441)							_hx_tmp1 = (a->size >= size);
            						}
            						else {
HXLINE( 441)							_hx_tmp1 = false;
            						}
HXDLIN( 441)						if (_hx_tmp1) {
HXLINE( 441)							if (::hx::IsNotNull( best )) {
HXLINE( 441)								_hx_tmp = (best->size > a->size);
            							}
            							else {
HXLINE( 441)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE( 441)							_hx_tmp = false;
            						}
HXDLIN( 441)						if (_hx_tmp) {
HXLINE( 442)							best = a;
            						}
            					}
            				}
HXLINE( 443)				if (::hx::IsNotNull( best )) {
HXLINE( 444)					int free = (best->size - size);
HXLINE( 445)					if ((free > 0)) {
HXLINE( 446)						int i = alloc->indexOf(best,null());
HXLINE( 447)						 ::hxsl::_Flatten::Alloc a =  ::hxsl::_Flatten::Alloc_obj::__alloc( HX_CTX ,g,t,(best->pos + size),free);
HXLINE( 448)						alloc->insert((i + 1),a);
HXLINE( 449)						best->size = size;
            					}
HXLINE( 451)					best->v = v;
HXLINE( 452)					this->varMap->set(v,best);
            				}
            				else {
HXLINE( 454)					 ::hxsl::_Flatten::Alloc a =  ::hxsl::_Flatten::Alloc_obj::__alloc( HX_CTX ,g,t,apos,size);
HXLINE( 455)					apos = (apos + size);
HXLINE( 456)					a->v = v;
HXLINE( 457)					this->varMap->set(v,a);
HXLINE( 458)					alloc->push(a);
HXLINE( 459)					int pad = ::hx::Mod((4 - ::hx::Mod(size,4)),4);
HXLINE( 460)					if ((pad > 0)) {
HXLINE( 461)						 ::hxsl::_Flatten::Alloc a =  ::hxsl::_Flatten::Alloc_obj::__alloc( HX_CTX ,g,t,apos,pad);
HXLINE( 462)						apos = (apos + pad);
HXLINE( 463)						alloc->push(a);
            					}
            				}
            			}
            		}
HXLINE( 467)		g->__SetField(HX_("type",ba,f2,08,4d),::hxsl::Type_obj::TArray(::hxsl::Type_obj::TVec(4,t),::hxsl::SizeDecl_obj::SConst((apos >> 2))),::hx::paccDynamic);
HXLINE( 468)		if ((apos > 0)) {
HXLINE( 469)			this->outVars->push(g);
HXLINE( 470)			this->allocData->set(g,alloc);
            		}
HXLINE( 472)		return g;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Flatten_obj,pack,return )

int Flatten_obj::varSize( ::hxsl::Type v, ::hxsl::VecType t){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_476_varSize)
HXDLIN( 476)		switch((int)(v->_hx_getIndex())){
            			case (int)1: case (int)3: {
HXLINE( 477)				if (::hx::IsPointerEq( t,::hxsl::VecType_obj::VFloat_dyn() )) {
HXLINE( 477)					return 1;
            				}
            				else {
HXLINE( 483)					::String _hx_tmp = (::hxsl::Tools_obj::toString(v) + HX_(" size unknown for type ",ba,b8,5d,02));
HXDLIN( 483)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(t))));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 478)				int n = v->_hx_getInt(0);
HXDLIN( 478)				 ::hxsl::VecType t2 = v->_hx_getObject(1).StaticCast<  ::hxsl::VecType >();
HXDLIN( 478)				if (::hx::IsPointerEq( t,t2 )) {
HXLINE( 478)					return n;
            				}
            				else {
HXLINE( 483)					::String _hx_tmp = (::hxsl::Tools_obj::toString(v) + HX_(" size unknown for type ",ba,b8,5d,02));
HXDLIN( 483)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(t))));
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 479)				if (::hx::IsPointerEq( t,::hxsl::VecType_obj::VFloat_dyn() )) {
HXLINE( 479)					return 16;
            				}
            				else {
HXLINE( 483)					::String _hx_tmp = (::hxsl::Tools_obj::toString(v) + HX_(" size unknown for type ",ba,b8,5d,02));
HXDLIN( 483)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(t))));
            				}
            			}
            			break;
            			case (int)6: case (int)8: {
HXLINE( 480)				if (::hx::IsPointerEq( t,::hxsl::VecType_obj::VFloat_dyn() )) {
HXLINE( 480)					return 12;
            				}
            				else {
HXLINE( 483)					::String _hx_tmp = (::hxsl::Tools_obj::toString(v) + HX_(" size unknown for type ",ba,b8,5d,02));
HXDLIN( 483)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(t))));
            				}
            			}
            			break;
            			case (int)15: {
HXLINE( 481)				 ::hxsl::SizeDecl _g = v->_hx_getObject(1).StaticCast<  ::hxsl::SizeDecl >();
HXDLIN( 481)				if ((_g->_hx_getIndex() == 0)) {
HXLINE( 481)					int n = _g->_hx_getInt(0);
HXDLIN( 481)					 ::hxsl::Type at = v->_hx_getObject(0).StaticCast<  ::hxsl::Type >();
HXDLIN( 481)					return (this->varSize(at,t) * n);
            				}
            				else {
HXLINE( 483)					::String _hx_tmp = (::hxsl::Tools_obj::toString(v) + HX_(" size unknown for type ",ba,b8,5d,02));
HXDLIN( 483)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(t))));
            				}
            			}
            			break;
            			default:{
HXLINE( 483)				::String _hx_tmp = (::hxsl::Tools_obj::toString(v) + HX_(" size unknown for type ",ba,b8,5d,02));
HXDLIN( 483)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(t))));
            			}
            		}
HXLINE( 476)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Flatten_obj,varSize,return )

void Flatten_obj::gatherVar( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_b66a16da5cf7ee2e_488_gatherVar)
HXDLIN( 488)		 ::hxsl::Type _g = v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic);
HXDLIN( 488)		if ((_g->_hx_getIndex() == 13)) {
HXLINE( 489)			::Array< ::Dynamic> vl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 490)			{
HXLINE( 490)				int _g1 = 0;
HXDLIN( 490)				while((_g1 < vl->length)){
HXLINE( 490)					 ::Dynamic v = vl->__get(_g1);
HXDLIN( 490)					_g1 = (_g1 + 1);
HXLINE( 491)					this->gatherVar(v);
            				}
            			}
            		}
            		else {
HXLINE( 493)			switch((int)( ::Dynamic(v->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 495)					if (::hxsl::Tools_obj::hasQualifier(v,::hxsl::VarQualifier_obj::PerObject_dyn())) {
HXLINE( 496)						this->params->push(v);
            					}
            					else {
HXLINE( 498)						this->globals->push(v);
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 500)					this->params->push(v);
            				}
            				break;
            				default:{
HXLINE( 502)					this->outVars->push(v);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Flatten_obj,gatherVar,(void))


::hx::ObjectPtr< Flatten_obj > Flatten_obj::__new() {
	::hx::ObjectPtr< Flatten_obj > __this = new Flatten_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Flatten_obj > Flatten_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Flatten_obj *__this = (Flatten_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Flatten_obj), true, "hxsl.Flatten"));
	*(void **)__this = Flatten_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Flatten_obj::Flatten_obj()
{
}

void Flatten_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Flatten);
	HX_MARK_MEMBER_NAME(globals,"globals");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(outVars,"outVars");
	HX_MARK_MEMBER_NAME(varMap,"varMap");
	HX_MARK_MEMBER_NAME(econsts,"econsts");
	HX_MARK_MEMBER_NAME(consts,"consts");
	HX_MARK_MEMBER_NAME(allocData,"allocData");
	HX_MARK_END_CLASS();
}

void Flatten_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(globals,"globals");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(outVars,"outVars");
	HX_VISIT_MEMBER_NAME(varMap,"varMap");
	HX_VISIT_MEMBER_NAME(econsts,"econsts");
	HX_VISIT_MEMBER_NAME(consts,"consts");
	HX_VISIT_MEMBER_NAME(allocData,"allocData");
}

::hx::Val Flatten_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pack") ) { return ::hx::Val( pack_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mkInt") ) { return ::hx::Val( mkInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"toInt") ) { return ::hx::Val( toInt_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"varMap") ) { return ::hx::Val( varMap ); }
		if (HX_FIELD_EQ(inName,"consts") ) { return ::hx::Val( consts ); }
		if (HX_FIELD_EQ(inName,"mapFun") ) { return ::hx::Val( mapFun_dyn() ); }
		if (HX_FIELD_EQ(inName,"access") ) { return ::hx::Val( access_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { return ::hx::Val( globals ); }
		if (HX_FIELD_EQ(inName,"outVars") ) { return ::hx::Val( outVars ); }
		if (HX_FIELD_EQ(inName,"econsts") ) { return ::hx::Val( econsts ); }
		if (HX_FIELD_EQ(inName,"flatten") ) { return ::hx::Val( flatten_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapExpr") ) { return ::hx::Val( mapExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"varSize") ) { return ::hx::Val( varSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"optimize") ) { return ::hx::Val( optimize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocData") ) { return ::hx::Val( allocData ); }
		if (HX_FIELD_EQ(inName,"mapConsts") ) { return ::hx::Val( mapConsts_dyn() ); }
		if (HX_FIELD_EQ(inName,"readIndex") ) { return ::hx::Val( readIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"gatherVar") ) { return ::hx::Val( gatherVar_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allocConst") ) { return ::hx::Val( allocConst_dyn() ); }
		if (HX_FIELD_EQ(inName,"readOffset") ) { return ::hx::Val( readOffset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocConsts") ) { return ::hx::Val( allocConsts_dyn() ); }
		if (HX_FIELD_EQ(inName,"packBuffers") ) { return ::hx::Val( packBuffers_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"packTextures") ) { return ::hx::Val( packTextures_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Flatten_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"varMap") ) { varMap=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"consts") ) { consts=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outVars") ) { outVars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"econsts") ) { econsts=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocData") ) { allocData=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Flatten_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("globals",b0,05,39,14));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("outVars",5a,57,2d,d3));
	outFields->push(HX_("varMap",f5,ed,8f,53));
	outFields->push(HX_("econsts",d5,17,d4,2f));
	outFields->push(HX_("consts",b0,3d,dc,c7));
	outFields->push(HX_("allocData",3f,05,54,29));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Flatten_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Flatten_obj,globals),HX_("globals",b0,05,39,14)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Flatten_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Flatten_obj,outVars),HX_("outVars",5a,57,2d,d3)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Flatten_obj,varMap),HX_("varMap",f5,ed,8f,53)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Flatten_obj,econsts),HX_("econsts",d5,17,d4,2f)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Flatten_obj,consts),HX_("consts",b0,3d,dc,c7)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Flatten_obj,allocData),HX_("allocData",3f,05,54,29)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Flatten_obj_sStaticStorageInfo = 0;
#endif

static ::String Flatten_obj_sMemberFields[] = {
	HX_("globals",b0,05,39,14),
	HX_("params",46,fb,7a,ed),
	HX_("outVars",5a,57,2d,d3),
	HX_("varMap",f5,ed,8f,53),
	HX_("econsts",d5,17,d4,2f),
	HX_("consts",b0,3d,dc,c7),
	HX_("allocData",3f,05,54,29),
	HX_("flatten",c4,ab,fb,e6),
	HX_("mapFun",03,03,02,b9),
	HX_("mapExpr",f1,b1,19,28),
	HX_("mapConsts",6c,99,bb,aa),
	HX_("allocConst",ae,7c,06,76),
	HX_("allocConsts",05,9c,a6,cf),
	HX_("mkInt",31,d4,9e,09),
	HX_("readIndex",dc,e7,fb,8e),
	HX_("readOffset",89,7b,bb,59),
	HX_("access",a4,95,06,0b),
	HX_("toInt",34,be,11,14),
	HX_("optimize",dd,8c,18,1d),
	HX_("packTextures",31,8b,3a,5f),
	HX_("packBuffers",9a,71,d9,37),
	HX_("pack",d9,d6,51,4a),
	HX_("varSize",48,ab,5d,ce),
	HX_("gatherVar",ac,53,2a,6b),
	::String(null()) };

::hx::Class Flatten_obj::__mClass;

void Flatten_obj::__register()
{
	Flatten_obj _hx_dummy;
	Flatten_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxsl.Flatten",df,49,b0,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Flatten_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Flatten_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Flatten_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Flatten_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxsl
