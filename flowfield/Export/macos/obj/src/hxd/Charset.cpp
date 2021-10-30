#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxd_Charset
#include <hxd/Charset.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b318a65434ac965b_45_new,"hxd.Charset","new",0x0edbc944,"hxd.Charset.new","hxd/Charset.hx",45,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_101_resolveChar,"hxd.Charset","resolveChar",0x073c00c6,"hxd.Charset.resolveChar","hxd/Charset.hx",101,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_128_isCJK,"hxd.Charset","isCJK",0x7c6c83fe,"hxd.Charset.isCJK","hxd/Charset.hx",128,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_134_isSpace,"hxd.Charset","isSpace",0x232c6b60,"hxd.Charset.isSpace","hxd/Charset.hx",134,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_138_isBreakChar,"hxd.Charset","isBreakChar",0x3ab1aecf,"hxd.Charset.isBreakChar","hxd/Charset.hx",138,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_147_isComplementChar,"hxd.Charset","isComplementChar",0xb319b702,"hxd.Charset.isComplementChar","hxd/Charset.hx",147,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_151_getDefault,"hxd.Charset","getDefault",0x9afa0a67,"hxd.Charset.getDefault","hxd/Charset.hx",151,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_8_boot,"hxd.Charset","boot",0xe98d52ce,"hxd.Charset.boot","hxd/Charset.hx",8,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_13_boot,"hxd.Charset","boot",0xe98d52ce,"hxd.Charset.boot","hxd/Charset.hx",13,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_18_boot,"hxd.Charset","boot",0xe98d52ce,"hxd.Charset.boot","hxd/Charset.hx",18,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_23_boot,"hxd.Charset","boot",0xe98d52ce,"hxd.Charset.boot","hxd/Charset.hx",23,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_28_boot,"hxd.Charset","boot",0xe98d52ce,"hxd.Charset.boot","hxd/Charset.hx",28,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_33_boot,"hxd.Charset","boot",0xe98d52ce,"hxd.Charset.boot","hxd/Charset.hx",33,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_38_boot,"hxd.Charset","boot",0xe98d52ce,"hxd.Charset.boot","hxd/Charset.hx",38,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_41_boot,"hxd.Charset","boot",0xe98d52ce,"hxd.Charset.boot","hxd/Charset.hx",41,0xc5d075ed)
HX_LOCAL_STACK_FRAME(_hx_pos_b318a65434ac965b_141_boot,"hxd.Charset","boot",0xe98d52ce,"hxd.Charset.boot","hxd/Charset.hx",141,0xc5d075ed)
namespace hxd{

void Charset_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b318a65434ac965b_45_new)
HXDLIN(  45)		 ::hxd::Charset _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  46)		this->map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  51)		{
HXLINE(  51)			int _g = 0;
HXDLIN(  51)			while((_g < 94)){
HXLINE(  51)				_g = (_g + 1);
HXDLIN(  51)				int i = (_g - 1);
HXLINE(  52)				_gthis->map->set((65281 + i),(33 + i));
            			}
            		}
HXLINE(  54)		{
HXLINE(  54)			int _g1 = 192;
HXDLIN(  54)			int _g2 = 199;
HXDLIN(  54)			while((_g1 < _g2)){
HXLINE(  54)				_g1 = (_g1 + 1);
HXDLIN(  54)				int i = (_g1 - 1);
HXLINE(  55)				_gthis->map->set(i,65);
            			}
            		}
HXLINE(  56)		{
HXLINE(  56)			int _g3 = 224;
HXDLIN(  56)			int _g4 = 231;
HXDLIN(  56)			while((_g3 < _g4)){
HXLINE(  56)				_g3 = (_g3 + 1);
HXDLIN(  56)				int i = (_g3 - 1);
HXLINE(  57)				_gthis->map->set(i,97);
            			}
            		}
HXLINE(  58)		{
HXLINE(  58)			int _g5 = 200;
HXDLIN(  58)			int _g6 = 204;
HXDLIN(  58)			while((_g5 < _g6)){
HXLINE(  58)				_g5 = (_g5 + 1);
HXDLIN(  58)				int i = (_g5 - 1);
HXLINE(  59)				_gthis->map->set(i,69);
            			}
            		}
HXLINE(  60)		{
HXLINE(  60)			int _g7 = 232;
HXDLIN(  60)			int _g8 = 236;
HXDLIN(  60)			while((_g7 < _g8)){
HXLINE(  60)				_g7 = (_g7 + 1);
HXDLIN(  60)				int i = (_g7 - 1);
HXLINE(  61)				_gthis->map->set(i,101);
            			}
            		}
HXLINE(  62)		{
HXLINE(  62)			int _g9 = 204;
HXDLIN(  62)			int _g10 = 208;
HXDLIN(  62)			while((_g9 < _g10)){
HXLINE(  62)				_g9 = (_g9 + 1);
HXDLIN(  62)				int i = (_g9 - 1);
HXLINE(  63)				_gthis->map->set(i,73);
            			}
            		}
HXLINE(  64)		{
HXLINE(  64)			int _g11 = 236;
HXDLIN(  64)			int _g12 = 240;
HXDLIN(  64)			while((_g11 < _g12)){
HXLINE(  64)				_g11 = (_g11 + 1);
HXDLIN(  64)				int i = (_g11 - 1);
HXLINE(  65)				_gthis->map->set(i,105);
            			}
            		}
HXLINE(  66)		{
HXLINE(  66)			int _g13 = 210;
HXDLIN(  66)			int _g14 = 215;
HXDLIN(  66)			while((_g13 < _g14)){
HXLINE(  66)				_g13 = (_g13 + 1);
HXDLIN(  66)				int i = (_g13 - 1);
HXLINE(  67)				_gthis->map->set(i,79);
            			}
            		}
HXLINE(  68)		{
HXLINE(  68)			int _g15 = 242;
HXDLIN(  68)			int _g16 = 247;
HXDLIN(  68)			while((_g15 < _g16)){
HXLINE(  68)				_g15 = (_g15 + 1);
HXDLIN(  68)				int i = (_g15 - 1);
HXLINE(  69)				_gthis->map->set(i,111);
            			}
            		}
HXLINE(  70)		{
HXLINE(  70)			int _g17 = 217;
HXDLIN(  70)			int _g18 = 221;
HXDLIN(  70)			while((_g17 < _g18)){
HXLINE(  70)				_g17 = (_g17 + 1);
HXDLIN(  70)				int i = (_g17 - 1);
HXLINE(  71)				_gthis->map->set(i,85);
            			}
            		}
HXLINE(  72)		{
HXLINE(  72)			int _g19 = 249;
HXDLIN(  72)			int _g20 = 253;
HXDLIN(  72)			while((_g19 < _g20)){
HXLINE(  72)				_g19 = (_g19 + 1);
HXDLIN(  72)				int i = (_g19 - 1);
HXLINE(  73)				_gthis->map->set(i,117);
            			}
            		}
HXLINE(  74)		_gthis->map->set(199,67);
HXLINE(  75)		_gthis->map->set(231,67);
HXLINE(  76)		_gthis->map->set(208,68);
HXLINE(  77)		_gthis->map->set(222,100);
HXLINE(  78)		_gthis->map->set(209,78);
HXLINE(  79)		_gthis->map->set(241,110);
HXLINE(  80)		_gthis->map->set(221,89);
HXLINE(  81)		_gthis->map->set(253,121);
HXLINE(  82)		_gthis->map->set(255,121);
HXLINE(  83)		_gthis->map->set(8364,69);
HXLINE(  85)		_gthis->map->set(12288,32);
HXLINE(  86)		_gthis->map->set(160,32);
HXLINE(  88)		_gthis->map->set(171,34);
HXLINE(  89)		_gthis->map->set(187,34);
HXLINE(  90)		_gthis->map->set(8220,34);
HXLINE(  91)		_gthis->map->set(8221,34);
HXLINE(  92)		_gthis->map->set(8216,39);
HXLINE(  93)		_gthis->map->set(8217,39);
HXLINE(  94)		_gthis->map->set(180,39);
HXLINE(  95)		_gthis->map->set(8216,39);
HXLINE(  96)		_gthis->map->set(8249,60);
HXLINE(  97)		_gthis->map->set(8250,62);
HXLINE(  98)		_gthis->map->set(8211,45);
            	}

Dynamic Charset_obj::__CreateEmpty() { return new Charset_obj; }

void *Charset_obj::_hx_vtable = 0;

Dynamic Charset_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Charset_obj > _hx_result = new Charset_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Charset_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17c99ec4;
}

 ::Dynamic Charset_obj::resolveChar(int code, ::haxe::ds::IntMap glyphs){
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_101_resolveChar)
HXLINE( 102)		 ::Dynamic c = code;
HXLINE( 103)		while(::hx::IsNotNull( c )){
HXLINE( 104)			 ::Dynamic g = glyphs->get(c);
HXLINE( 105)			if (::hx::IsNotNull( g )) {
HXLINE( 105)				return g;
            			}
HXLINE( 106)			c = this->map->get(c);
            		}
HXLINE( 108)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Charset_obj,resolveChar,return )

bool Charset_obj::isCJK(int code){
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_128_isCJK)
HXDLIN( 128)		bool _hx_tmp;
HXDLIN( 128)		bool _hx_tmp1;
HXDLIN( 128)		if ((code >= 11904)) {
HXDLIN( 128)			_hx_tmp1 = (code <= 42191);
            		}
            		else {
HXDLIN( 128)			_hx_tmp1 = false;
            		}
HXDLIN( 128)		if (!(_hx_tmp1)) {
HXDLIN( 128)			if ((code >= 63744)) {
HXDLIN( 128)				_hx_tmp = (code <= 64255);
            			}
            			else {
HXDLIN( 128)				_hx_tmp = false;
            			}
            		}
            		else {
HXDLIN( 128)			_hx_tmp = true;
            		}
HXDLIN( 128)		if (!(_hx_tmp)) {
HXDLIN( 128)			if ((code >= 131072)) {
HXDLIN( 128)				return (code <= 262141);
            			}
            			else {
HXDLIN( 128)				return false;
            			}
            		}
            		else {
HXDLIN( 128)			return true;
            		}
HXDLIN( 128)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Charset_obj,isCJK,return )

bool Charset_obj::isSpace(int code){
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_134_isSpace)
HXDLIN( 134)		if ((code != 32)) {
HXDLIN( 134)			return (code == 12288);
            		}
            		else {
HXDLIN( 134)			return true;
            		}
HXDLIN( 134)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Charset_obj,isSpace,return )

bool Charset_obj::isBreakChar(int code){
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_138_isBreakChar)
HXDLIN( 138)		if (!(this->isSpace(code))) {
HXDLIN( 138)			return this->isCJK(code);
            		}
            		else {
HXDLIN( 138)			return true;
            		}
HXDLIN( 138)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Charset_obj,isBreakChar,return )

bool Charset_obj::isComplementChar(int code){
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_147_isComplementChar)
HXDLIN( 147)		return ::hxd::Charset_obj::complementChars->exists(code);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Charset_obj,isComplementChar,return )

::String Charset_obj::ASCII;

::String Charset_obj::LATIN1;

::String Charset_obj::CYRILLIC;

::String Charset_obj::POLISH;

::String Charset_obj::TURKISH;

::String Charset_obj::JP_KANA;

::String Charset_obj::UNICODE_SPECIALS;

::String Charset_obj::DEFAULT_CHARS;

 ::haxe::ds::IntMap Charset_obj::complementChars;

 ::hxd::Charset Charset_obj::inst;

 ::hxd::Charset Charset_obj::getDefault(){
            	HX_GC_STACKFRAME(&_hx_pos_b318a65434ac965b_151_getDefault)
HXLINE( 152)		if (::hx::IsNull( ::hxd::Charset_obj::inst )) {
HXLINE( 152)			::hxd::Charset_obj::inst =  ::hxd::Charset_obj::__alloc( HX_CTX );
            		}
HXLINE( 153)		return ::hxd::Charset_obj::inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Charset_obj,getDefault,return )


::hx::ObjectPtr< Charset_obj > Charset_obj::__new() {
	::hx::ObjectPtr< Charset_obj > __this = new Charset_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Charset_obj > Charset_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Charset_obj *__this = (Charset_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Charset_obj), true, "hxd.Charset"));
	*(void **)__this = Charset_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Charset_obj::Charset_obj()
{
}

void Charset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Charset);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_END_CLASS();
}

void Charset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
}

::hx::Val Charset_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isCJK") ) { return ::hx::Val( isCJK_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { return ::hx::Val( isSpace_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveChar") ) { return ::hx::Val( resolveChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"isBreakChar") ) { return ::hx::Val( isBreakChar_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isComplementChar") ) { return ::hx::Val( isComplementChar_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Charset_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = ( inst ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ASCII") ) { outValue = ( ASCII ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LATIN1") ) { outValue = ( LATIN1 ); return true; }
		if (HX_FIELD_EQ(inName,"POLISH") ) { outValue = ( POLISH ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"TURKISH") ) { outValue = ( TURKISH ); return true; }
		if (HX_FIELD_EQ(inName,"JP_KANA") ) { outValue = ( JP_KANA ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CYRILLIC") ) { outValue = ( CYRILLIC ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDefault") ) { outValue = getDefault_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARS") ) { outValue = ( DEFAULT_CHARS ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"complementChars") ) { outValue = ( complementChars ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"UNICODE_SPECIALS") ) { outValue = ( UNICODE_SPECIALS ); return true; }
	}
	return false;
}

::hx::Val Charset_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Charset_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=ioValue.Cast<  ::hxd::Charset >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ASCII") ) { ASCII=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LATIN1") ) { LATIN1=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"POLISH") ) { POLISH=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"TURKISH") ) { TURKISH=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"JP_KANA") ) { JP_KANA=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CYRILLIC") ) { CYRILLIC=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARS") ) { DEFAULT_CHARS=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"complementChars") ) { complementChars=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"UNICODE_SPECIALS") ) { UNICODE_SPECIALS=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Charset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("map",9c,0a,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Charset_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Charset_obj,map),HX_("map",9c,0a,53,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Charset_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Charset_obj::ASCII,HX_("ASCII",31,81,1b,a4)},
	{::hx::fsString,(void *) &Charset_obj::LATIN1,HX_("LATIN1",cd,b5,e8,07)},
	{::hx::fsString,(void *) &Charset_obj::CYRILLIC,HX_("CYRILLIC",c7,38,24,71)},
	{::hx::fsString,(void *) &Charset_obj::POLISH,HX_("POLISH",d1,95,a8,ab)},
	{::hx::fsString,(void *) &Charset_obj::TURKISH,HX_("TURKISH",e4,e1,06,0a)},
	{::hx::fsString,(void *) &Charset_obj::JP_KANA,HX_("JP_KANA",a2,e4,96,e6)},
	{::hx::fsString,(void *) &Charset_obj::UNICODE_SPECIALS,HX_("UNICODE_SPECIALS",dc,92,40,d2)},
	{::hx::fsString,(void *) &Charset_obj::DEFAULT_CHARS,HX_("DEFAULT_CHARS",5f,77,29,b9)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Charset_obj::complementChars,HX_("complementChars",17,88,92,32)},
	{::hx::fsObject /*  ::hxd::Charset */ ,(void *) &Charset_obj::inst,HX_("inst",c6,43,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Charset_obj_sMemberFields[] = {
	HX_("map",9c,0a,53,00),
	HX_("resolveChar",e2,83,fa,dc),
	HX_("isCJK",1a,8a,49,c1),
	HX_("isSpace",7c,30,ec,1d),
	HX_("isBreakChar",eb,31,70,10),
	HX_("isComplementChar",66,6e,de,3e),
	::String(null()) };

static void Charset_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Charset_obj::ASCII,"ASCII");
	HX_MARK_MEMBER_NAME(Charset_obj::LATIN1,"LATIN1");
	HX_MARK_MEMBER_NAME(Charset_obj::CYRILLIC,"CYRILLIC");
	HX_MARK_MEMBER_NAME(Charset_obj::POLISH,"POLISH");
	HX_MARK_MEMBER_NAME(Charset_obj::TURKISH,"TURKISH");
	HX_MARK_MEMBER_NAME(Charset_obj::JP_KANA,"JP_KANA");
	HX_MARK_MEMBER_NAME(Charset_obj::UNICODE_SPECIALS,"UNICODE_SPECIALS");
	HX_MARK_MEMBER_NAME(Charset_obj::DEFAULT_CHARS,"DEFAULT_CHARS");
	HX_MARK_MEMBER_NAME(Charset_obj::complementChars,"complementChars");
	HX_MARK_MEMBER_NAME(Charset_obj::inst,"inst");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Charset_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Charset_obj::ASCII,"ASCII");
	HX_VISIT_MEMBER_NAME(Charset_obj::LATIN1,"LATIN1");
	HX_VISIT_MEMBER_NAME(Charset_obj::CYRILLIC,"CYRILLIC");
	HX_VISIT_MEMBER_NAME(Charset_obj::POLISH,"POLISH");
	HX_VISIT_MEMBER_NAME(Charset_obj::TURKISH,"TURKISH");
	HX_VISIT_MEMBER_NAME(Charset_obj::JP_KANA,"JP_KANA");
	HX_VISIT_MEMBER_NAME(Charset_obj::UNICODE_SPECIALS,"UNICODE_SPECIALS");
	HX_VISIT_MEMBER_NAME(Charset_obj::DEFAULT_CHARS,"DEFAULT_CHARS");
	HX_VISIT_MEMBER_NAME(Charset_obj::complementChars,"complementChars");
	HX_VISIT_MEMBER_NAME(Charset_obj::inst,"inst");
};

#endif

::hx::Class Charset_obj::__mClass;

static ::String Charset_obj_sStaticFields[] = {
	HX_("ASCII",31,81,1b,a4),
	HX_("LATIN1",cd,b5,e8,07),
	HX_("CYRILLIC",c7,38,24,71),
	HX_("POLISH",d1,95,a8,ab),
	HX_("TURKISH",e4,e1,06,0a),
	HX_("JP_KANA",a2,e4,96,e6),
	HX_("UNICODE_SPECIALS",dc,92,40,d2),
	HX_("DEFAULT_CHARS",5f,77,29,b9),
	HX_("complementChars",17,88,92,32),
	HX_("inst",c6,43,bb,45),
	HX_("getDefault",cb,5e,25,eb),
	::String(null())
};

void Charset_obj::__register()
{
	Charset_obj _hx_dummy;
	Charset_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.Charset",52,17,6d,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Charset_obj::__GetStatic;
	__mClass->mSetStaticField = &Charset_obj::__SetStatic;
	__mClass->mMarkFunc = Charset_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Charset_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Charset_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Charset_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Charset_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Charset_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Charset_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Charset_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_8_boot)
HXDLIN(   8)		ASCII = HX_(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~",6f,61,48,0a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_13_boot)
HXDLIN(  13)		LATIN1 = HX_W(u"\u00a1\u00a2\u00a3\u00a4\u00a5\u00a6\u00a7\u00a8\u00a9\u00aa\u00ab\u00ac-\u00ae\u00af\u00b0\u00b1\u00b2\u00b3\u00b4\u00b5\u00b6\u00b7\u00b8\u00b9\u00ba\u00bb\u00bc\u00bd\u00be\u00bf\u00c0\u00c1\u00c2\u00c3\u00c4\u00c5\u00c6\u00c7\u00c8\u00c9\u00ca\u00cb\u00cc\u00cd\u00ce\u00cf\u00d0\u00d1\u00d2\u00d3\u00d4\u00d5\u00d6\u00d7\u00d8\u00d9\u00da\u00db\u00dc\u00dd\u00de\u00df\u00e0\u00e1\u00e2\u00e3\u00e4\u00e5\u00e6\u00e7\u00e8\u00e9\u00ea\u00eb\u00ec\u00ed\u00ee\u00ef\u00f0\u00f1\u00f2\u00f3\u00f4\u00f5\u00f6\u00f7\u00f8\u00f9\u00fa\u00fb\u00fc\u00fd\u00fe\u00ff\u0153\u00e6\u0152\u00c6\u20ac",1ae3,fd89);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_18_boot)
HXDLIN(  18)		CYRILLIC = HX_W(u"\u0410\u0411\u0412\u0413\u0414\u0415\u0416\u0417\u0418\u0419\u041a\u041b\u041c\u041d\u041e\u041f\u0420\u0421\u0422\u0423\u0424\u0425\u0426\u0427\u0428\u0429\u042a\u042b\u042c\u042d\u042e\u042f\u0430\u0431\u0432\u0433\u0434\u0435\u0436\u0437\u0438\u0439\u043a\u043b\u043c\u043d\u043e\u043f\u0440\u0441\u0442\u0443\u0444\u0445\u0446\u0447\u0448\u0449\u044a\u044b\u044c\u044d\u044e\u044f\u2014",cba6,7760);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_23_boot)
HXDLIN(  23)		POLISH = HX_W(u"\u0104\u0106\u0118\u0141\u0143\u00d3\u015a\u0179\u017b\u0105\u0107\u0119\u0142\u0144\u00f3\u015b\u017a\u017c",74e6,0725);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_28_boot)
HXDLIN(  28)		TURKISH = HX_W(u"\u00c2\u00c7\u011eI\u0130\u00ce\u00d6\u015e\u00dc\u00db\u00e2\u00e7\u011f\u0131\u0130\u00ee\u00f6\u015f\u00fc\u00fb",3540,b187);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_33_boot)
HXDLIN(  33)		JP_KANA = HX_W(u"\u3000\u3042\u3044\u3046\u3048\u304a\u304b\u304d\u304f\u3051\u3053\u3055\u3057\u3059\u305b\u305d\u305f\u3061\u3064\u3066\u3068\u306a\u306b\u306c\u306d\u306e\u306f\u3072\u3075\u3078\u307b\u307e\u307f\u3080\u3081\u3082\u3084\u3086\u3088\u3089\u308a\u308b\u308c\u308d\u308f\u3090\u3091\u3092\u3093\u304c\u304e\u3050\u3052\u3054\u3056\u3058\u305a\u305c\u305e\u3060\u3062\u3065\u3067\u3069\u3070\u3073\u3076\u3079\u307c\u3071\u3074\u3077\u307a\u307d\u3083\u3085\u3087\u30a2\u30a4\u30a6\u30a8\u30aa\u30ab\u30ad\u30af\u30b1\u30b3\u30b5\u30b7\u30b9\u30bb\u30bd\u30bf\u30c1\u30c4\u30c6\u30c8\u30ca\u30cb\u30cc\u30cd\u30ce\u30cf\u30d2\u30d5\u30d8\u30db\u30de\u30df\u30e0\u30e1\u30e2\u30e4\u30e6\u30e8\u30e9\u30ea\u30eb\u30ec\u30ed\u30ef\u30f0\u30f1\u30f2\u30f3\u30ac\u30ae\u30b0\u30b2\u30b4\u30b6\u30b8\u30ba\u30bc\u30be\u30c0\u30c2\u30c5\u30c7\u30c9\u30d0\u30d3\u30d6\u30d9\u30dc\u30d1\u30d4\u30d7\u30da\u30dd\u30f4\u30e3\u3047\u3063\u30c3\u30e5\u30e7\u30a1\u30a3\u30a5\u30a7\u30a9\u30fb\u30fc\u300c\u300d\u3001\u3002\u300e\u300f\u201c\u201d\uff01\uff1a\uff1f\uff05\uff06\uff08\uff09\uff0d\uff10\uff11\uff12\uff13\uff14\uff15\uff16\uff17\uff18\uff19",ee1a,b8e0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_38_boot)
HXDLIN(  38)		UNICODE_SPECIALS = HX_W(u"\ufffd\u25a1",5d00,066d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_41_boot)
HXDLIN(  41)		DEFAULT_CHARS = (::hxd::Charset_obj::ASCII + ::hxd::Charset_obj::LATIN1);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::IntMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b318a65434ac965b_141_boot)
HXLINE( 142)			::String str = HX_W(u"\u30fd\u30fe\u30fc\u30a1\u30a3\u30a5\u30a7\u30a9\u30c3\u30e3\u30e5\u30e7\u30ee\u30f5\u30f6\u3041\u3043\u3045\u3047\u3049\u3063\u3083\u3085\u3087\u308e\u3095\u3096\u31f0\u31f1\u31f2\u31f3\u31f4\u31f5\u31f6\u31f7\u31f8\u31f9\u31fa\u31fb\u31fc\u31fd\u31fe\u31ff\u3005\u303b",1468,5193);
HXLINE( 143)			 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN( 143)			{
HXLINE( 143)				int _g1 = 0;
HXDLIN( 143)				int _g2 = str.length;
HXDLIN( 143)				while((_g1 < _g2)){
HXLINE( 143)					_g1 = (_g1 + 1);
HXDLIN( 143)					int i = (_g1 - 1);
HXDLIN( 143)					_g->set(( (int)(str.charCodeAt(i)) ),true);
            				}
            			}
HXDLIN( 143)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_b318a65434ac965b_141_boot)
HXDLIN( 141)		complementChars = ( ( ::haxe::ds::IntMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace hxd
