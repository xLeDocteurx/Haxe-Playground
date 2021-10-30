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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_FbxProp
#include <hxd/fmt/fbx/FbxProp.h>
#endif
#ifndef INCLUDED_hxd_fmt_fbx_FbxTools
#include <hxd/fmt/fbx/FbxTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_21_get,"hxd.fmt.fbx.FbxTools","get",0xada6a114,"hxd.fmt.fbx.FbxTools.get","hxd/fmt/fbx/Data.hx",21,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_41_getAll,"hxd.fmt.fbx.FbxTools","getAll",0x56ddf46d,"hxd.fmt.fbx.FbxTools.getAll","hxd/fmt/fbx/Data.hx",41,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_57_getInts,"hxd.fmt.fbx.FbxTools","getInts",0xb0a32bd8,"hxd.fmt.fbx.FbxTools.getInts","hxd/fmt/fbx/Data.hx",57,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_68_getFloats,"hxd.fmt.fbx.FbxTools","getFloats",0x236d3f8b,"hxd.fmt.fbx.FbxTools.getFloats","hxd/fmt/fbx/Data.hx",68,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_87_hasProp,"hxd.fmt.fbx.FbxTools","hasProp",0xb2081f9b,"hxd.fmt.fbx.FbxTools.hasProp","hxd/fmt/fbx/Data.hx",87,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_94_idToInt,"hxd.fmt.fbx.FbxTools","idToInt",0x49a22fd7,"hxd.fmt.fbx.FbxTools.idToInt","hxd/fmt/fbx/Data.hx",94,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_104_toInt,"hxd.fmt.fbx.FbxTools","toInt",0xe0117a32,"hxd.fmt.fbx.FbxTools.toInt","hxd/fmt/fbx/Data.hx",104,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_113_toFloat,"hxd.fmt.fbx.FbxTools","toFloat",0x6780499f,"hxd.fmt.fbx.FbxTools.toFloat","hxd/fmt/fbx/Data.hx",113,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_122_toString,"hxd.fmt.fbx.FbxTools","toString",0xf89a276e,"hxd.fmt.fbx.FbxTools.toString","hxd/fmt/fbx/Data.hx",122,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_130_toBinary,"hxd.fmt.fbx.FbxTools","toBinary",0xd475ba9e,"hxd.fmt.fbx.FbxTools.toBinary","hxd/fmt/fbx/Data.hx",130,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_138_getId,"hxd.fmt.fbx.FbxTools","getId",0x5d604e0f,"hxd.fmt.fbx.FbxTools.getId","hxd/fmt/fbx/Data.hx",138,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_148_getName,"hxd.fmt.fbx.FbxTools","getName",0xb3e7597f,"hxd.fmt.fbx.FbxTools.getName","hxd/fmt/fbx/Data.hx",148,0x88448324)
HX_LOCAL_STACK_FRAME(_hx_pos_88d030dfe1f5e610_157_getType,"hxd.fmt.fbx.FbxTools","getType",0xb7f0d9ee,"hxd.fmt.fbx.FbxTools.getType","hxd/fmt/fbx/Data.hx",157,0x88448324)
namespace hxd{
namespace fmt{
namespace fbx{

void FbxTools_obj::__construct() { }

Dynamic FbxTools_obj::__CreateEmpty() { return new FbxTools_obj; }

void *FbxTools_obj::_hx_vtable = 0;

Dynamic FbxTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FbxTools_obj > _hx_result = new FbxTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FbxTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0834f642;
}

 ::Dynamic FbxTools_obj::get( ::Dynamic n,::String path,::hx::Null< bool >  __o_opt){
            		bool opt = __o_opt.Default(false);
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_21_get)
HXLINE(  22)		::Array< ::String > parts = path.split(HX_(".",2e,00,00,00));
HXLINE(  23)		 ::Dynamic cur = n;
HXLINE(  24)		{
HXLINE(  24)			int _g = 0;
HXDLIN(  24)			while((_g < parts->length)){
HXLINE(  24)				::String p = parts->__get(_g);
HXDLIN(  24)				_g = (_g + 1);
HXLINE(  25)				bool found = false;
HXLINE(  26)				{
HXLINE(  26)					int _g1 = 0;
HXDLIN(  26)					::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(cur->__Field(HX_("childs",57,bf,ba,bc),::hx::paccDynamic)) );
HXDLIN(  26)					while((_g1 < _g2->length)){
HXLINE(  26)						 ::Dynamic c = _g2->__get(_g1);
HXDLIN(  26)						_g1 = (_g1 + 1);
HXLINE(  27)						if (::hx::IsEq( c->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),p )) {
HXLINE(  28)							cur = c;
HXLINE(  29)							found = true;
HXLINE(  30)							goto _hx_goto_1;
            						}
            					}
            					_hx_goto_1:;
            				}
HXLINE(  32)				if (!(found)) {
HXLINE(  33)					if (opt) {
HXLINE(  34)						return null();
            					}
HXLINE(  35)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((((((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" does not have ",e4,3b,42,fd)) + path) + HX_(" (",08,1c,00,00)) + p) + HX_(" not found)",34,f7,8e,4f)))));
            				}
            			}
            		}
HXLINE(  38)		return cur;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FbxTools_obj,get,return )

::Array< ::Dynamic> FbxTools_obj::getAll( ::Dynamic n,::String path){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_41_getAll)
HXLINE(  42)		::Array< ::String > parts = path.split(HX_(".",2e,00,00,00));
HXLINE(  43)		::Array< ::Dynamic> cur = ::Array_obj< ::Dynamic>::__new(1)->init(0,n);
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			while((_g < parts->length)){
HXLINE(  44)				::String p = parts->__get(_g);
HXDLIN(  44)				_g = (_g + 1);
HXLINE(  45)				::Array< ::Dynamic> out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)				{
HXLINE(  46)					int _g1 = 0;
HXDLIN(  46)					while((_g1 < cur->length)){
HXLINE(  46)						 ::Dynamic n = cur->__get(_g1);
HXDLIN(  46)						_g1 = (_g1 + 1);
HXLINE(  47)						{
HXLINE(  47)							int _g = 0;
HXDLIN(  47)							::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(n->__Field(HX_("childs",57,bf,ba,bc),::hx::paccDynamic)) );
HXDLIN(  47)							while((_g < _g2->length)){
HXLINE(  47)								 ::Dynamic c = _g2->__get(_g);
HXDLIN(  47)								_g = (_g + 1);
HXLINE(  48)								if (::hx::IsEq( c->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),p )) {
HXLINE(  49)									out->push(c);
            								}
            							}
            						}
            					}
            				}
HXLINE(  50)				cur = out;
HXLINE(  51)				if ((cur->length == 0)) {
HXLINE(  52)					return cur;
            				}
            			}
            		}
HXLINE(  54)		return cur;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FbxTools_obj,getAll,return )

::Array< int > FbxTools_obj::getInts( ::Dynamic n){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_57_getInts)
HXLINE(  58)		if ((( (::Array< ::Dynamic>)(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)) )->length != 1)) {
HXLINE(  59)			::String _hx_tmp = ( (::String)((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" has ",a6,bf,da,b1))) );
HXDLIN(  59)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + ::Std_obj::string( ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)))) + HX_(" props",50,73,fb,93))));
            		}
HXLINE(  60)		 ::hxd::fmt::fbx::FbxProp _g = Dynamic(  ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >();
HXDLIN(  60)		if ((_g->_hx_getIndex() == 4)) {
HXLINE(  61)			::Array< int > v = _g->_hx_getObject(0).StaticCast< ::Array< int > >();
HXLINE(  62)			return v;
            		}
            		else {
HXLINE(  64)			::String _hx_tmp = ( (::String)((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" has ",a6,bf,da,b1))) );
HXDLIN(  64)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + ::Std_obj::string( ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)))) + HX_(" props",50,73,fb,93))));
            		}
HXLINE(  60)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,getInts,return )

::Array< Float > FbxTools_obj::getFloats( ::Dynamic n){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_68_getFloats)
HXLINE(  69)		if ((( (::Array< ::Dynamic>)(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)) )->length != 1)) {
HXLINE(  70)			::String _hx_tmp = ( (::String)((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" has ",a6,bf,da,b1))) );
HXDLIN(  70)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + ::Std_obj::string( ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)))) + HX_(" props",50,73,fb,93))));
            		}
HXLINE(  71)		 ::hxd::fmt::fbx::FbxProp _g = Dynamic(  ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >();
HXDLIN(  71)		switch((int)(_g->_hx_getIndex())){
            			case (int)4: {
HXLINE(  74)				::Array< int > i = _g->_hx_getObject(0).StaticCast< ::Array< int > >();
HXLINE(  75)				::Array< Float > fl = ::Array_obj< Float >::__new();
HXLINE(  76)				{
HXLINE(  76)					int _g1 = 0;
HXDLIN(  76)					while((_g1 < i->length)){
HXLINE(  76)						int x = i->__get(_g1);
HXDLIN(  76)						_g1 = (_g1 + 1);
HXLINE(  77)						fl->push(x);
            					}
            				}
HXLINE(  78)				 ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__SetItem(0,::hxd::fmt::fbx::FbxProp_obj::PFloats(fl));
HXLINE(  81)				return fl;
            			}
            			break;
            			case (int)5: {
HXLINE(  72)				::Array< Float > v = _g->_hx_getObject(0).StaticCast< ::Array< Float > >();
HXLINE(  73)				return v;
            			}
            			break;
            			default:{
HXLINE(  83)				::String _hx_tmp = ( (::String)((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" has ",a6,bf,da,b1))) );
HXDLIN(  83)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((_hx_tmp + ::Std_obj::string( ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)))) + HX_(" props",50,73,fb,93))));
            			}
            		}
HXLINE(  71)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,getFloats,return )

bool FbxTools_obj::hasProp( ::Dynamic n, ::hxd::fmt::fbx::FbxProp p){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_87_hasProp)
HXLINE(  88)		{
HXLINE(  88)			int _g = 0;
HXDLIN(  88)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)) );
HXDLIN(  88)			while((_g < _g1->length)){
HXLINE(  88)				 ::hxd::fmt::fbx::FbxProp p2 = _g1->__get(_g).StaticCast<  ::hxd::fmt::fbx::FbxProp >();
HXDLIN(  88)				_g = (_g + 1);
HXLINE(  89)				if (__hxcpp_enum_eq(p,p2)) {
HXLINE(  90)					return true;
            				}
            			}
            		}
HXLINE(  91)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FbxTools_obj,hasProp,return )

int FbxTools_obj::idToInt(Float f){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_94_idToInt)
HXLINE(  96)		f = ::hx::Mod(f,((Float)4294967296.));
HXLINE(  97)		if ((f >= ((Float)2147483648.))) {
HXLINE(  98)			f = (f - ((Float)4294967296.));
            		}
            		else {
HXLINE(  99)			if ((f < ((Float)-2147483648.))) {
HXLINE( 100)				f = (f + ((Float)4294967296.));
            			}
            		}
HXLINE( 101)		return ::Std_obj::_hx_int(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,idToInt,return )

int FbxTools_obj::toInt( ::hxd::fmt::fbx::FbxProp n){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_104_toInt)
HXLINE( 105)		if (::hx::IsNull( n )) {
HXLINE( 105)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("null prop",dc,af,93,38)));
            		}
HXLINE( 106)		switch((int)(n->_hx_getIndex())){
            			case (int)0: {
HXLINE( 107)				int v = n->_hx_getInt(0);
HXDLIN( 107)				return v;
            			}
            			break;
            			case (int)1: {
HXLINE( 108)				Float f = n->_hx_getFloat(0);
HXDLIN( 108)				return ::hxd::fmt::fbx::FbxTools_obj::idToInt(f);
            			}
            			break;
            			default:{
HXLINE( 109)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid prop ",14,b1,c8,ac) + ::Std_obj::string(n))));
            			}
            		}
HXLINE( 106)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,toInt,return )

Float FbxTools_obj::toFloat( ::hxd::fmt::fbx::FbxProp n){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_113_toFloat)
HXLINE( 114)		if (::hx::IsNull( n )) {
HXLINE( 114)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("null prop",dc,af,93,38)));
            		}
HXLINE( 115)		switch((int)(n->_hx_getIndex())){
            			case (int)0: {
HXLINE( 116)				int v = n->_hx_getInt(0);
HXDLIN( 116)				return (( (Float)(v) ) * ((Float)1.0));
            			}
            			break;
            			case (int)1: {
HXLINE( 117)				Float v = n->_hx_getFloat(0);
HXDLIN( 117)				return v;
            			}
            			break;
            			default:{
HXLINE( 118)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid prop ",14,b1,c8,ac) + ::Std_obj::string(n))));
            			}
            		}
HXLINE( 115)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,toFloat,return )

::String FbxTools_obj::toString( ::hxd::fmt::fbx::FbxProp n){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_122_toString)
HXLINE( 123)		if (::hx::IsNull( n )) {
HXLINE( 123)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("null prop",dc,af,93,38)));
            		}
HXLINE( 124)		if ((n->_hx_getIndex() == 2)) {
HXLINE( 125)			::String v = n->_hx_getString(0);
HXDLIN( 125)			return v;
            		}
            		else {
HXLINE( 126)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid prop ",14,b1,c8,ac) + ::Std_obj::string(n))));
            		}
HXLINE( 124)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,toString,return )

 ::haxe::io::Bytes FbxTools_obj::toBinary( ::hxd::fmt::fbx::FbxProp n){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_130_toBinary)
HXLINE( 131)		if (::hx::IsNull( n )) {
HXLINE( 131)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("null prop",dc,af,93,38)));
            		}
HXLINE( 132)		if ((n->_hx_getIndex() == 6)) {
HXLINE( 133)			 ::haxe::io::Bytes v = n->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN( 133)			return v;
            		}
            		else {
HXLINE( 134)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid prop ",14,b1,c8,ac) + ::Std_obj::string(n))));
            		}
HXLINE( 132)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,toBinary,return )

int FbxTools_obj::getId( ::Dynamic n){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_138_getId)
HXLINE( 139)		if ((( (::Array< ::Dynamic>)(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)) )->length != 3)) {
HXLINE( 140)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" is not an object",af,81,d0,05)))));
            		}
HXLINE( 141)		 ::hxd::fmt::fbx::FbxProp _g = Dynamic(  ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::hxd::fmt::fbx::FbxProp >();
HXDLIN( 141)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 142)				int id = _g->_hx_getInt(0);
HXDLIN( 142)				return id;
            			}
            			break;
            			case (int)1: {
HXLINE( 143)				Float id = _g->_hx_getFloat(0);
HXDLIN( 143)				return ::hxd::fmt::fbx::FbxTools_obj::idToInt(id);
            			}
            			break;
            			default:{
HXLINE( 144)				::String _hx_tmp = ( (::String)((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" is not an object ",91,f7,a0,10))) );
HXDLIN( 144)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string( ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))))));
            			}
            		}
HXLINE( 141)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,getId,return )

::String FbxTools_obj::getName( ::Dynamic n){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_148_getName)
HXLINE( 149)		if ((( (::Array< ::Dynamic>)(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)) )->length != 3)) {
HXLINE( 150)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" is not an object",af,81,d0,05)))));
            		}
HXLINE( 151)		 ::hxd::fmt::fbx::FbxProp _g = Dynamic(  ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(1)).StaticCast<  ::hxd::fmt::fbx::FbxProp >();
HXDLIN( 151)		if ((_g->_hx_getIndex() == 2)) {
HXLINE( 152)			::String n = _g->_hx_getString(0);
HXDLIN( 152)			return ( (::String)(n.split(HX_("::",c0,32,00,00))->pop()) );
            		}
            		else {
HXLINE( 153)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" is not an object",af,81,d0,05)))));
            		}
HXLINE( 151)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,getName,return )

::String FbxTools_obj::getType( ::Dynamic n){
            	HX_STACKFRAME(&_hx_pos_88d030dfe1f5e610_157_getType)
HXLINE( 158)		if ((( (::Array< ::Dynamic>)(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic)) )->length != 3)) {
HXLINE( 159)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" is not an object",af,81,d0,05)))));
            		}
HXLINE( 160)		 ::hxd::fmt::fbx::FbxProp _g = Dynamic(  ::Dynamic(n->__Field(HX_("props",70,e7,8f,c8),::hx::paccDynamic))->__GetItem(2)).StaticCast<  ::hxd::fmt::fbx::FbxProp >();
HXDLIN( 160)		if ((_g->_hx_getIndex() == 2)) {
HXLINE( 161)			::String n = _g->_hx_getString(0);
HXDLIN( 161)			return n;
            		}
            		else {
HXLINE( 162)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((n->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_(" is not an object",af,81,d0,05)))));
            		}
HXLINE( 160)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FbxTools_obj,getType,return )


FbxTools_obj::FbxTools_obj()
{
}

bool FbxTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getId") ) { outValue = getId_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getAll") ) { outValue = getAll_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getInts") ) { outValue = getInts_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasProp") ) { outValue = hasProp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"idToInt") ) { outValue = idToInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toFloat") ) { outValue = toFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getName") ) { outValue = getName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getType") ) { outValue = getType_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBinary") ) { outValue = toBinary_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFloats") ) { outValue = getFloats_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FbxTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FbxTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FbxTools_obj::__mClass;

static ::String FbxTools_obj_sStaticFields[] = {
	HX_("get",96,80,4e,00),
	HX_("getAll",2b,32,19,a3),
	HX_("getInts",5a,f4,3d,18),
	HX_("getFloats",8d,ac,ac,bd),
	HX_("hasProp",1d,e8,a2,19),
	HX_("idToInt",59,f8,3c,b1),
	HX_("toInt",34,be,11,14),
	HX_("toFloat",21,12,1b,cf),
	HX_("toString",ac,d0,6e,38),
	HX_("toBinary",dc,63,4a,14),
	HX_("getId",11,92,60,91),
	HX_("getName",01,22,82,1b),
	HX_("getType",70,a2,8b,1f),
	::String(null())
};

void FbxTools_obj::__register()
{
	FbxTools_obj _hx_dummy;
	FbxTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.fbx.FbxTools",ec,e9,36,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FbxTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FbxTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FbxTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FbxTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FbxTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx
