#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_res_Filter
#include <hxd/res/Filter.h>
#endif
#ifndef INCLUDED_hxd_res_NanoJpeg
#include <hxd/res/NanoJpeg.h>
#endif
#ifndef INCLUDED_hxd_res__NanoJpeg_Component
#include <hxd/res/_NanoJpeg/Component.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_88_new,"hxd.res.NanoJpeg","new",0xa1549936,"hxd.res.NanoJpeg.new","hxd/res/NanoJpeg.hx",88,0xbcbe95b8)
static const int _hx_array_data_029e8644_1[] = {
	(int)0,(int)1,(int)8,(int)16,(int)9,(int)2,(int)3,(int)10,(int)17,(int)24,(int)32,(int)25,(int)18,(int)11,(int)4,(int)5,(int)12,(int)19,(int)26,(int)33,(int)40,(int)48,(int)41,(int)34,(int)27,(int)20,(int)13,(int)6,(int)7,(int)14,(int)21,(int)28,(int)35,(int)42,(int)49,(int)56,(int)57,(int)50,(int)43,(int)36,(int)29,(int)22,(int)15,(int)23,(int)30,(int)37,(int)44,(int)51,(int)58,(int)59,(int)52,(int)45,(int)38,(int)31,(int)39,(int)46,(int)53,(int)60,(int)61,(int)54,(int)47,(int)55,(int)62,(int)63,
};
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_107_alloc,"hxd.res.NanoJpeg","alloc",0x9af8cecb,"hxd.res.NanoJpeg.alloc","hxd/res/NanoJpeg.hx",107,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_110_free,"hxd.res.NanoJpeg","free",0x83718f16,"hxd.res.NanoJpeg.free","hxd/res/NanoJpeg.hx",110,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_113_njInit,"hxd.res.NanoJpeg","njInit",0xf36f7656,"hxd.res.NanoJpeg.njInit","hxd/res/NanoJpeg.hx",113,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_133_cleanup,"hxd.res.NanoJpeg","cleanup",0x2806f7fa,"hxd.res.NanoJpeg.cleanup","hxd/res/NanoJpeg.hx",133,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_147_njSkip,"hxd.res.NanoJpeg","njSkip",0xfa0951c5,"hxd.res.NanoJpeg.njSkip","hxd/res/NanoJpeg.hx",147,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_154_syntax,"hxd.res.NanoJpeg","syntax",0xaeb4634d,"hxd.res.NanoJpeg.syntax","hxd/res/NanoJpeg.hx",154,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_161_get,"hxd.res.NanoJpeg","get",0xa14f496c,"hxd.res.NanoJpeg.get","hxd/res/NanoJpeg.hx",161,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_165_njDecode16,"hxd.res.NanoJpeg","njDecode16",0x0adc05d9,"hxd.res.NanoJpeg.njDecode16","hxd/res/NanoJpeg.hx",165,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_169_njByteAlign,"hxd.res.NanoJpeg","njByteAlign",0xe8d75197,"hxd.res.NanoJpeg.njByteAlign","hxd/res/NanoJpeg.hx",169,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_172_njShowBits,"hxd.res.NanoJpeg","njShowBits",0x329814e9,"hxd.res.NanoJpeg.njShowBits","hxd/res/NanoJpeg.hx",172,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_204_njSkipBits,"hxd.res.NanoJpeg","njSkipBits",0x41663f6b,"hxd.res.NanoJpeg.njSkipBits","hxd/res/NanoJpeg.hx",204,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_210_njGetBits,"hxd.res.NanoJpeg","njGetBits",0x1c413f36,"hxd.res.NanoJpeg.njGetBits","hxd/res/NanoJpeg.hx",210,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_216_njDecodeLength,"hxd.res.NanoJpeg","njDecodeLength",0xc0326dfa,"hxd.res.NanoJpeg.njDecodeLength","hxd/res/NanoJpeg.hx",216,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_223_njSkipMarker,"hxd.res.NanoJpeg","njSkipMarker",0xe0655d5f,"hxd.res.NanoJpeg.njSkipMarker","hxd/res/NanoJpeg.hx",223,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_228_njDecodeSOF,"hxd.res.NanoJpeg","njDecodeSOF",0x75c2fab6,"hxd.res.NanoJpeg.njDecodeSOF","hxd/res/NanoJpeg.hx",228,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_280_njDecodeDQT,"hxd.res.NanoJpeg","njDecodeDQT",0x75b79ab3,"hxd.res.NanoJpeg.njDecodeDQT","hxd/res/NanoJpeg.hx",280,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_294_njDecodeDHT,"hxd.res.NanoJpeg","njDecodeDHT",0x75b792dc,"hxd.res.NanoJpeg.njDecodeDHT","hxd/res/NanoJpeg.hx",294,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_330_njDecodeDRI,"hxd.res.NanoJpeg","njDecodeDRI",0x75b79b87,"hxd.res.NanoJpeg.njDecodeDRI","hxd/res/NanoJpeg.hx",330,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_340_njGetVLC,"hxd.res.NanoJpeg","njGetVLC",0x52d71e3d,"hxd.res.NanoJpeg.njGetVLC","hxd/res/NanoJpeg.hx",340,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_362_njRowIDCT,"hxd.res.NanoJpeg","njRowIDCT",0xa3f6f2e0,"hxd.res.NanoJpeg.njRowIDCT","hxd/res/NanoJpeg.hx",362,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_406_njColIDCT,"hxd.res.NanoJpeg","njColIDCT",0xdecc9c06,"hxd.res.NanoJpeg.njColIDCT","hxd/res/NanoJpeg.hx",406,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_455_njDecodeBlock,"hxd.res.NanoJpeg","njDecodeBlock",0xf1fa5ab9,"hxd.res.NanoJpeg.njDecodeBlock","hxd/res/NanoJpeg.hx",455,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_479_notSupported,"hxd.res.NanoJpeg","notSupported",0x2432ff05,"hxd.res.NanoJpeg.notSupported","hxd/res/NanoJpeg.hx",479,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_482_njDecodeScan,"hxd.res.NanoJpeg","njDecodeScan",0x94e7a991,"hxd.res.NanoJpeg.njDecodeScan","hxd/res/NanoJpeg.hx",482,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_545_njUpsampleH,"hxd.res.NanoJpeg","njUpsampleH",0x2341d6dd,"hxd.res.NanoJpeg.njUpsampleH","hxd/res/NanoJpeg.hx",545,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_574_njUpsampleV,"hxd.res.NanoJpeg","njUpsampleV",0x2341d6eb,"hxd.res.NanoJpeg.njUpsampleV","hxd/res/NanoJpeg.hx",574,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_602_njUpsample,"hxd.res.NanoJpeg","njUpsample",0xfcb6d30b,"hxd.res.NanoJpeg.njUpsample","hxd/res/NanoJpeg.hx",602,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_632_njConvert,"hxd.res.NanoJpeg","njConvert",0x2371926d,"hxd.res.NanoJpeg.njConvert","hxd/res/NanoJpeg.hx",632,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_702_njDecode,"hxd.res.NanoJpeg","njDecode",0x149b75f4,"hxd.res.NanoJpeg.njDecode","hxd/res/NanoJpeg.hx",702,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_539_CF,"hxd.res.NanoJpeg","CF",0xb3cede8d,"hxd.res.NanoJpeg.CF","hxd/res/NanoJpeg.hx",539,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_542_njClip,"hxd.res.NanoJpeg","njClip",0xef76aa16,"hxd.res.NanoJpeg.njClip","hxd/res/NanoJpeg.hx",542,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_743_decode,"hxd.res.NanoJpeg","decode",0x240d3e18,"hxd.res.NanoJpeg.decode","hxd/res/NanoJpeg.hx",743,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_57_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",57,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_355_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",355,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_356_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",356,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_357_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",357,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_358_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",358,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_359_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",359,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_360_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",360,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_527_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",527,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_528_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",528,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_529_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",529,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_530_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",530,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_531_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",531,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_532_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",532,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_533_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",533,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_534_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",534,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_535_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",535,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_536_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",536,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_537_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",537,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_538_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",538,0xbcbe95b8)
HX_LOCAL_STACK_FRAME(_hx_pos_d70c768cc1eabb2f_742_boot,"hxd.res.NanoJpeg","boot",0x80ca769c,"hxd.res.NanoJpeg.boot","hxd/res/NanoJpeg.hx",742,0xbcbe95b8)
namespace hxd{
namespace res{

void NanoJpeg_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_88_new)
HXLINE(  90)		 ::hxd::res::_NanoJpeg::Component array =  ::hxd::res::_NanoJpeg::Component_obj::__alloc( HX_CTX );
HXLINE(  91)		 ::hxd::res::_NanoJpeg::Component array1 =  ::hxd::res::_NanoJpeg::Component_obj::__alloc( HX_CTX );
HXLINE(  89)		this->comps = ::Array_obj< ::Dynamic>::__new(3)->init(0,array)->init(1,array1)->init(2, ::hxd::res::_NanoJpeg::Component_obj::__alloc( HX_CTX ))->copy();
HXLINE(  95)		::Array< int > this1 = ::Array_obj< int >::__new(64);
HXLINE(  96)		::Array< int > this2 = ::Array_obj< int >::__new(64);
HXLINE(  97)		::Array< int > this3 = ::Array_obj< int >::__new(64);
HXLINE(  98)		::Array< int > this4 = ::Array_obj< int >::__new(64);
HXLINE(  94)		this->qtab = ::Array_obj< ::Dynamic>::__new(4)->init(0,this1)->init(1,this2)->init(2,this3)->init(3,this4)->copy();
HXLINE( 100)		::Array< int > this5 = ::Array_obj< int >::__new(16);
HXDLIN( 100)		this->counts = this5;
HXLINE( 101)		::Array< int > this6 = ::Array_obj< int >::__new(64);
HXDLIN( 101)		this->block = this6;
HXLINE( 102)		this->njZZ = ::Array_obj< int >::fromData( _hx_array_data_029e8644_1,64)->copy();
HXLINE( 103)		this->vlctab = ::Array_obj< ::Dynamic>::__new(8)->init(0,null())->init(1,null())->init(2,null())->init(3,null())->init(4,null())->init(5,null())->init(6,null())->init(7,null())->copy();
            	}

Dynamic NanoJpeg_obj::__CreateEmpty() { return new NanoJpeg_obj; }

void *NanoJpeg_obj::_hx_vtable = 0;

Dynamic NanoJpeg_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NanoJpeg_obj > _hx_result = new NanoJpeg_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NanoJpeg_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6273bf68;
}

 ::haxe::io::Bytes NanoJpeg_obj::alloc(int nbytes){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_107_alloc)
HXDLIN( 107)		return ::haxe::io::Bytes_obj::alloc(nbytes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,alloc,return )

void NanoJpeg_obj::free( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_110_free)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,free,(void))

void NanoJpeg_obj::njInit( ::haxe::io::Bytes bytes,int pos,int size, ::hxd::res::Filter filter){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_113_njInit)
HXLINE( 114)		this->bytes = bytes;
HXLINE( 115)		this->pos = pos;
HXLINE( 116)		 ::hxd::res::Filter _hx_tmp;
HXDLIN( 116)		if (::hx::IsNull( filter )) {
HXLINE( 116)			_hx_tmp = ::hxd::res::Filter_obj::Chromatic_dyn();
            		}
            		else {
HXLINE( 116)			_hx_tmp = filter;
            		}
HXDLIN( 116)		this->filter = _hx_tmp;
HXLINE( 117)		if ((size < 0)) {
HXLINE( 117)			size = (bytes->length - pos);
            		}
HXLINE( 118)		{
HXLINE( 119)			if (::hx::IsNull( _hx_array_unsafe_get(this->vlctab,0) )) {
HXLINE( 120)				::Array< ::Dynamic> this1 = this->vlctab;
HXDLIN( 120)				 ::haxe::io::Bytes val = ::haxe::io::Bytes_obj::alloc(131072);
HXDLIN( 120)				this1->__unsafe_set(0,val);
            			}
HXLINE( 119)			if (::hx::IsNull( _hx_array_unsafe_get(this->vlctab,1) )) {
HXLINE( 120)				::Array< ::Dynamic> this1 = this->vlctab;
HXDLIN( 120)				 ::haxe::io::Bytes val = ::haxe::io::Bytes_obj::alloc(131072);
HXDLIN( 120)				this1->__unsafe_set(1,val);
            			}
HXLINE( 119)			if (::hx::IsNull( _hx_array_unsafe_get(this->vlctab,2) )) {
HXLINE( 120)				::Array< ::Dynamic> this1 = this->vlctab;
HXDLIN( 120)				 ::haxe::io::Bytes val = ::haxe::io::Bytes_obj::alloc(131072);
HXDLIN( 120)				this1->__unsafe_set(2,val);
            			}
HXLINE( 119)			if (::hx::IsNull( _hx_array_unsafe_get(this->vlctab,3) )) {
HXLINE( 120)				::Array< ::Dynamic> this1 = this->vlctab;
HXDLIN( 120)				 ::haxe::io::Bytes val = ::haxe::io::Bytes_obj::alloc(131072);
HXDLIN( 120)				this1->__unsafe_set(3,val);
            			}
            		}
HXLINE( 121)		this->size = size;
HXLINE( 122)		this->qtused = 0;
HXLINE( 123)		this->qtavail = 0;
HXLINE( 124)		this->rstinterval = 0;
HXLINE( 125)		this->length = 0;
HXLINE( 126)		this->buf = 0;
HXLINE( 127)		this->bufbits = 0;
HXLINE( 128)		this->progressive = false;
HXLINE( 129)		{
HXLINE( 130)			( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,0)) )->dcpred = 0;
HXDLIN( 130)			( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,1)) )->dcpred = 0;
HXDLIN( 130)			( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,2)) )->dcpred = 0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(NanoJpeg_obj,njInit,(void))

void NanoJpeg_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_133_cleanup)
HXLINE( 134)		this->bytes = null();
HXLINE( 135)		{
HXLINE( 135)			int _g = 0;
HXDLIN( 135)			::Array< ::Dynamic> _g1 = this->comps;
HXDLIN( 135)			while((_g < _g1->length)){
HXLINE( 135)				 ::hxd::res::_NanoJpeg::Component c = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(_g1,_g)) );
HXDLIN( 135)				_g = (_g + 1);
HXLINE( 136)				if (::hx::IsNotNull( c->pixels )) {
HXLINE( 138)					c->pixels = null();
            				}
            			}
            		}
HXLINE( 140)		{
HXLINE( 141)			if (::hx::IsNotNull( _hx_array_unsafe_get(this->vlctab,0) )) {
HXLINE( 142)				 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,0)) );
HXLINE( 143)				{
HXLINE( 143)					 ::haxe::io::Bytes val = null();
HXDLIN( 143)					this->vlctab->__unsafe_set(0,val);
            				}
            			}
HXLINE( 141)			if (::hx::IsNotNull( _hx_array_unsafe_get(this->vlctab,1) )) {
HXLINE( 142)				 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,1)) );
HXLINE( 143)				{
HXLINE( 143)					 ::haxe::io::Bytes val = null();
HXDLIN( 143)					this->vlctab->__unsafe_set(1,val);
            				}
            			}
HXLINE( 141)			if (::hx::IsNotNull( _hx_array_unsafe_get(this->vlctab,2) )) {
HXLINE( 142)				 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,2)) );
HXLINE( 143)				{
HXLINE( 143)					 ::haxe::io::Bytes val = null();
HXDLIN( 143)					this->vlctab->__unsafe_set(2,val);
            				}
            			}
HXLINE( 141)			if (::hx::IsNotNull( _hx_array_unsafe_get(this->vlctab,3) )) {
HXLINE( 142)				 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,3)) );
HXLINE( 143)				{
HXLINE( 143)					 ::haxe::io::Bytes val = null();
HXDLIN( 143)					this->vlctab->__unsafe_set(3,val);
            				}
            			}
HXLINE( 141)			if (::hx::IsNotNull( _hx_array_unsafe_get(this->vlctab,4) )) {
HXLINE( 142)				 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,4)) );
HXLINE( 143)				{
HXLINE( 143)					 ::haxe::io::Bytes val = null();
HXDLIN( 143)					this->vlctab->__unsafe_set(4,val);
            				}
            			}
HXLINE( 141)			if (::hx::IsNotNull( _hx_array_unsafe_get(this->vlctab,5) )) {
HXLINE( 142)				 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,5)) );
HXLINE( 143)				{
HXLINE( 143)					 ::haxe::io::Bytes val = null();
HXDLIN( 143)					this->vlctab->__unsafe_set(5,val);
            				}
            			}
HXLINE( 141)			if (::hx::IsNotNull( _hx_array_unsafe_get(this->vlctab,6) )) {
HXLINE( 142)				 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,6)) );
HXLINE( 143)				{
HXLINE( 143)					 ::haxe::io::Bytes val = null();
HXDLIN( 143)					this->vlctab->__unsafe_set(6,val);
            				}
            			}
HXLINE( 141)			if (::hx::IsNotNull( _hx_array_unsafe_get(this->vlctab,7) )) {
HXLINE( 142)				 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,7)) );
HXLINE( 143)				{
HXLINE( 143)					 ::haxe::io::Bytes val = null();
HXDLIN( 143)					this->vlctab->__unsafe_set(7,val);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,cleanup,(void))

void NanoJpeg_obj::njSkip(int count){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_147_njSkip)
HXLINE( 148)		 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 148)		_hx_tmp->pos = (_hx_tmp->pos + count);
HXLINE( 149)		 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 149)		_hx_tmp1->size = (_hx_tmp1->size - count);
HXLINE( 150)		 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 150)		_hx_tmp2->length = (_hx_tmp2->length - count);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njSkip,(void))

void NanoJpeg_obj::syntax(bool flag){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_154_syntax)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,syntax,(void))

int NanoJpeg_obj::get(int p){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_161_get)
HXDLIN( 161)		return ( (int)(this->bytes->b->__get((this->pos + p))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,get,return )

int NanoJpeg_obj::njDecode16(int p){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_165_njDecode16)
HXDLIN( 165)		return ((( (int)(this->bytes->b->__get((this->pos + p))) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + (p + 1)))) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njDecode16,return )

void NanoJpeg_obj::njByteAlign(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_169_njByteAlign)
HXDLIN( 169)		 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)		_hx_tmp->bufbits = (_hx_tmp->bufbits & 248);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njByteAlign,(void))

int NanoJpeg_obj::njShowBits(int bits){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_172_njShowBits)
HXLINE( 173)		if ((bits == 0)) {
HXLINE( 173)			return 0;
            		}
HXLINE( 174)		while((this->bufbits < bits)){
HXLINE( 175)			if ((this->size <= 0)) {
HXLINE( 176)				this->buf = ((this->buf << 8) | 255);
HXLINE( 177)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->bufbits = (_hx_tmp->bufbits + 8);
HXLINE( 178)				continue;
            			}
HXLINE( 180)			int newbyte = ( (int)(this->bytes->b->__get(this->pos)) );
HXLINE( 181)			this->pos++;
HXLINE( 182)			this->size--;
HXLINE( 183)			 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)			_hx_tmp->bufbits = (_hx_tmp->bufbits + 8);
HXLINE( 184)			this->buf = ((this->buf << 8) | newbyte);
HXLINE( 185)			if ((newbyte == 255)) {
HXLINE( 187)				int marker = ( (int)(this->bytes->b->__get(this->pos)) );
HXLINE( 188)				this->pos++;
HXLINE( 189)				this->size--;
HXLINE( 190)				switch((int)(marker)){
            					case (int)217: {
HXLINE( 193)						this->size = 0;
            					}
            					break;
            					case (int)0: case (int)255: {
            					}
            					break;
            					default:{
HXLINE( 196)						this->buf = ((this->buf << 8) | marker);
HXLINE( 197)						 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)						_hx_tmp->bufbits = (_hx_tmp->bufbits + 8);
            					}
            				}
            			}
            		}
HXLINE( 201)		return ((this->buf >> (this->bufbits - bits)) & ((1 << bits) - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njShowBits,return )

void NanoJpeg_obj::njSkipBits(int bits){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_204_njSkipBits)
HXLINE( 205)		if ((this->bufbits < bits)) {
HXLINE( 206)			this->njShowBits(bits);
            		}
HXLINE( 207)		 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 207)		_hx_tmp->bufbits = (_hx_tmp->bufbits - bits);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njSkipBits,(void))

int NanoJpeg_obj::njGetBits(int bits){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_210_njGetBits)
HXLINE( 211)		int r = this->njShowBits(bits);
HXLINE( 212)		 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)		_hx_tmp->bufbits = (_hx_tmp->bufbits - bits);
HXLINE( 213)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njGetBits,return )

void NanoJpeg_obj::njDecodeLength(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_216_njDecodeLength)
HXLINE( 218)		this->length = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXLINE( 220)		{
HXLINE( 220)			 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 220)			_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 220)			 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 220)			_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 220)			 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 220)			_hx_tmp2->length = (_hx_tmp2->length - 2);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njDecodeLength,(void))

void NanoJpeg_obj::njSkipMarker(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_223_njSkipMarker)
HXLINE( 224)		{
HXLINE( 224)			this->length = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXDLIN( 224)			{
HXLINE( 224)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 224)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 224)				 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)				_hx_tmp2->length = (_hx_tmp2->length - 2);
            			}
            		}
HXLINE( 225)		{
HXLINE( 225)			int count = this->length;
HXDLIN( 225)			 ::hxd::res::NanoJpeg _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)			_hx_tmp3->pos = (_hx_tmp3->pos + count);
HXDLIN( 225)			 ::hxd::res::NanoJpeg _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)			_hx_tmp4->size = (_hx_tmp4->size - count);
HXDLIN( 225)			 ::hxd::res::NanoJpeg _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 225)			_hx_tmp5->length = (_hx_tmp5->length - count);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njSkipMarker,(void))

void NanoJpeg_obj::njDecodeSOF(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_228_njDecodeSOF)
HXLINE( 229)		{
HXLINE( 229)			this->length = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXDLIN( 229)			{
HXLINE( 229)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 229)				_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 229)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 229)				_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 229)				 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 229)				_hx_tmp2->length = (_hx_tmp2->length - 2);
            			}
            		}
HXLINE( 231)		if ((this->bytes->b->__get(this->pos) != 8)) {
HXLINE( 231)			this->notSupported();
            		}
HXLINE( 232)		this->height = ((( (int)(this->bytes->b->__get((this->pos + 1))) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 2))) ));
HXLINE( 233)		this->width = ((( (int)(this->bytes->b->__get((this->pos + 3))) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 4))) ));
HXLINE( 234)		this->ncomp = ( (int)(this->bytes->b->__get((this->pos + 5))) );
HXLINE( 235)		{
HXLINE( 235)			 ::hxd::res::NanoJpeg _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 235)			_hx_tmp3->pos = (_hx_tmp3->pos + 6);
HXDLIN( 235)			 ::hxd::res::NanoJpeg _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 235)			_hx_tmp4->size = (_hx_tmp4->size - 6);
HXDLIN( 235)			 ::hxd::res::NanoJpeg _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 235)			_hx_tmp5->length = (_hx_tmp5->length - 6);
            		}
HXLINE( 236)		switch((int)(this->ncomp)){
            			case (int)1: case (int)3: {
            			}
            			break;
            			default:{
HXLINE( 239)				this->notSupported();
            			}
            		}
HXLINE( 243)		int ssxmax = 0;
HXDLIN( 243)		int ssymax = 0;
HXLINE( 244)		{
HXLINE( 244)			int _g = 0;
HXDLIN( 244)			int _g1 = this->ncomp;
HXDLIN( 244)			while((_g < _g1)){
HXLINE( 244)				_g = (_g + 1);
HXDLIN( 244)				int i = (_g - 1);
HXLINE( 245)				 ::hxd::res::_NanoJpeg::Component c = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,i)) );
HXLINE( 246)				c->cid = ( (int)(this->bytes->b->__get(this->pos)) );
HXLINE( 247)				c->ssx = (( (int)(this->bytes->b->__get((this->pos + 1))) ) >> 4);
HXLINE( 249)				if (((c->ssx & (c->ssx - 1)) != 0)) {
HXLINE( 249)					this->notSupported();
            				}
HXLINE( 250)				c->ssy = (( (int)(this->bytes->b->__get((this->pos + 1))) ) & 15);
HXLINE( 252)				if (((c->ssy & (c->ssy - 1)) != 0)) {
HXLINE( 252)					this->notSupported();
            				}
HXLINE( 253)				c->qtsel = ( (int)(this->bytes->b->__get((this->pos + 2))) );
HXLINE( 255)				{
HXLINE( 255)					 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 255)					_hx_tmp->pos = (_hx_tmp->pos + 3);
HXDLIN( 255)					 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 255)					_hx_tmp1->size = (_hx_tmp1->size - 3);
HXDLIN( 255)					 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 255)					_hx_tmp2->length = (_hx_tmp2->length - 3);
            				}
HXLINE( 256)				 ::hxd::res::NanoJpeg _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 256)				_hx_tmp3->qtused = (_hx_tmp3->qtused | (1 << c->qtsel));
HXLINE( 257)				if ((c->ssx > ssxmax)) {
HXLINE( 257)					ssxmax = c->ssx;
            				}
HXLINE( 258)				if ((c->ssy > ssymax)) {
HXLINE( 258)					ssymax = c->ssy;
            				}
            			}
            		}
HXLINE( 260)		if ((this->ncomp == 1)) {
HXLINE( 261)			 ::hxd::res::_NanoJpeg::Component c = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,0)) );
HXLINE( 262)			ssymax = 1;
HXDLIN( 262)			ssxmax = ssymax;
HXDLIN( 262)			c->ssx = (c->ssy = ssxmax);
            		}
HXLINE( 264)		this->mbsizex = (ssxmax << 3);
HXLINE( 265)		this->mbsizey = (ssymax << 3);
HXLINE( 266)		this->mbwidth = ::Std_obj::_hx_int((( (Float)(((this->width + this->mbsizex) - 1)) ) / ( (Float)(this->mbsizex) )));
HXLINE( 267)		this->mbheight = ::Std_obj::_hx_int((( (Float)(((this->height + this->mbsizey) - 1)) ) / ( (Float)(this->mbsizey) )));
HXLINE( 268)		{
HXLINE( 268)			int _g2 = 0;
HXDLIN( 268)			int _g3 = this->ncomp;
HXDLIN( 268)			while((_g2 < _g3)){
HXLINE( 268)				_g2 = (_g2 + 1);
HXDLIN( 268)				int i = (_g2 - 1);
HXLINE( 269)				 ::hxd::res::_NanoJpeg::Component c = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,i)) );
HXLINE( 270)				c->width = ::Std_obj::_hx_int((( (Float)((((this->width * c->ssx) + ssxmax) - 1)) ) / ( (Float)(ssxmax) )));
HXLINE( 271)				c->stride = ((c->width + 7) & (int)2147483640);
HXLINE( 272)				c->height = ::Std_obj::_hx_int((( (Float)((((this->height * c->ssy) + ssymax) - 1)) ) / ( (Float)(ssymax) )));
HXLINE( 273)				c->stride = ::Std_obj::_hx_int((( (Float)(((this->mbwidth * this->mbsizex) * c->ssx)) ) / ( (Float)(ssxmax) )));
HXLINE( 274)				bool _hx_tmp;
HXDLIN( 274)				bool _hx_tmp1;
HXDLIN( 274)				if ((c->width < 3)) {
HXLINE( 274)					_hx_tmp1 = (c->ssx != ssxmax);
            				}
            				else {
HXLINE( 274)					_hx_tmp1 = false;
            				}
HXDLIN( 274)				if (!(_hx_tmp1)) {
HXLINE( 274)					if ((c->height < 3)) {
HXLINE( 274)						_hx_tmp = (c->ssy != ssymax);
            					}
            					else {
HXLINE( 274)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 274)					_hx_tmp = true;
            				}
HXDLIN( 274)				if (_hx_tmp) {
HXLINE( 274)					this->notSupported();
            				}
HXLINE( 275)				int c1 = c->stride;
HXDLIN( 275)				c->pixels = ::haxe::io::Bytes_obj::alloc((c1 * ::Std_obj::_hx_int((( (Float)(((this->mbheight * this->mbsizey) * c->ssy)) ) / ( (Float)(ssymax) )))));
            			}
            		}
HXLINE( 277)		{
HXLINE( 277)			int count = this->length;
HXDLIN( 277)			 ::hxd::res::NanoJpeg _hx_tmp6 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 277)			_hx_tmp6->pos = (_hx_tmp6->pos + count);
HXDLIN( 277)			 ::hxd::res::NanoJpeg _hx_tmp7 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 277)			_hx_tmp7->size = (_hx_tmp7->size - count);
HXDLIN( 277)			 ::hxd::res::NanoJpeg _hx_tmp8 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 277)			_hx_tmp8->length = (_hx_tmp8->length - count);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njDecodeSOF,(void))

void NanoJpeg_obj::njDecodeDQT(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_280_njDecodeDQT)
HXLINE( 281)		{
HXLINE( 281)			this->length = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXDLIN( 281)			{
HXLINE( 281)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 281)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 281)				 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)				_hx_tmp2->length = (_hx_tmp2->length - 2);
            			}
            		}
HXLINE( 282)		while((this->length >= 65)){
HXLINE( 283)			int i = ( (int)(this->bytes->b->__get(this->pos)) );
HXLINE( 285)			 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 285)			_hx_tmp->qtavail = (_hx_tmp->qtavail | (1 << i));
HXLINE( 286)			::Array< int > t = ( (::Array< int >)(_hx_array_unsafe_get(this->qtab,i)) );
HXLINE( 287)			{
HXLINE( 287)				int _g = 0;
HXDLIN( 287)				while((_g < 64)){
HXLINE( 287)					_g = (_g + 1);
HXDLIN( 287)					int k = (_g - 1);
HXLINE( 288)					t->__unsafe_set(k,this->bytes->b->__get((this->pos + (k + 1))));
            				}
            			}
HXLINE( 289)			{
HXLINE( 289)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp1->pos = (_hx_tmp1->pos + 65);
HXDLIN( 289)				 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp2->size = (_hx_tmp2->size - 65);
HXDLIN( 289)				 ::hxd::res::NanoJpeg _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp3->length = (_hx_tmp3->length - 65);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njDecodeDQT,(void))

void NanoJpeg_obj::njDecodeDHT(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_294_njDecodeDHT)
HXLINE( 295)		{
HXLINE( 295)			this->length = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXDLIN( 295)			{
HXLINE( 295)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 295)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 295)				 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 295)				_hx_tmp2->length = (_hx_tmp2->length - 2);
            			}
            		}
HXLINE( 296)		while((this->length >= 17)){
HXLINE( 297)			int i = ( (int)(this->bytes->b->__get(this->pos)) );
HXLINE( 299)			i = (((i >> 4) & 1) | ((i & 3) << 1));
HXLINE( 300)			{
HXLINE( 301)				this->counts->__unsafe_set(0,this->bytes->b->__get((this->pos + 1)));
HXDLIN( 301)				this->counts->__unsafe_set(1,this->bytes->b->__get((this->pos + 2)));
HXDLIN( 301)				this->counts->__unsafe_set(2,this->bytes->b->__get((this->pos + 3)));
HXDLIN( 301)				this->counts->__unsafe_set(3,this->bytes->b->__get((this->pos + 4)));
HXDLIN( 301)				this->counts->__unsafe_set(4,this->bytes->b->__get((this->pos + 5)));
HXDLIN( 301)				this->counts->__unsafe_set(5,this->bytes->b->__get((this->pos + 6)));
HXDLIN( 301)				this->counts->__unsafe_set(6,this->bytes->b->__get((this->pos + 7)));
HXDLIN( 301)				this->counts->__unsafe_set(7,this->bytes->b->__get((this->pos + 8)));
HXDLIN( 301)				this->counts->__unsafe_set(8,this->bytes->b->__get((this->pos + 9)));
HXDLIN( 301)				this->counts->__unsafe_set(9,this->bytes->b->__get((this->pos + 10)));
HXDLIN( 301)				this->counts->__unsafe_set(10,this->bytes->b->__get((this->pos + 11)));
HXDLIN( 301)				this->counts->__unsafe_set(11,this->bytes->b->__get((this->pos + 12)));
HXDLIN( 301)				this->counts->__unsafe_set(12,this->bytes->b->__get((this->pos + 13)));
HXDLIN( 301)				this->counts->__unsafe_set(13,this->bytes->b->__get((this->pos + 14)));
HXDLIN( 301)				this->counts->__unsafe_set(14,this->bytes->b->__get((this->pos + 15)));
HXDLIN( 301)				this->counts->__unsafe_set(15,this->bytes->b->__get((this->pos + 16)));
            			}
HXLINE( 302)			{
HXLINE( 302)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp->pos = (_hx_tmp->pos + 17);
HXDLIN( 302)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp1->size = (_hx_tmp1->size - 17);
HXDLIN( 302)				 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)				_hx_tmp2->length = (_hx_tmp2->length - 17);
            			}
HXLINE( 303)			 ::haxe::io::Bytes vlc = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,i)) );
HXLINE( 304)			int vpos = 0;
HXLINE( 305)			int remain = 65536;
HXDLIN( 305)			int spread = 65536;
HXLINE( 306)			{
HXLINE( 306)				int _g = 1;
HXDLIN( 306)				while((_g < 17)){
HXLINE( 306)					_g = (_g + 1);
HXDLIN( 306)					int codelen = (_g - 1);
HXLINE( 307)					spread = (spread >> 1);
HXLINE( 308)					int currcnt = ( (int)(_hx_array_unsafe_get(this->counts,(codelen - 1))) );
HXLINE( 309)					if ((currcnt == 0)) {
HXLINE( 309)						continue;
            					}
HXLINE( 311)					remain = (remain - (currcnt << (16 - codelen)));
HXLINE( 313)					{
HXLINE( 313)						int _g1 = 0;
HXDLIN( 313)						int _g2 = currcnt;
HXDLIN( 313)						while((_g1 < _g2)){
HXLINE( 313)							_g1 = (_g1 + 1);
HXDLIN( 313)							int i = (_g1 - 1);
HXLINE( 314)							int code = ( (int)(this->bytes->b->__get((this->pos + i))) );
HXLINE( 315)							{
HXLINE( 315)								int _g = 0;
HXDLIN( 315)								int _g2 = spread;
HXDLIN( 315)								while((_g < _g2)){
HXLINE( 315)									_g = (_g + 1);
HXDLIN( 315)									int j = (_g - 1);
HXLINE( 316)									{
HXLINE( 316)										vpos = (vpos + 1);
HXDLIN( 316)										vlc->b[(vpos - 1)] = ( (unsigned char)(codelen) );
            									}
HXLINE( 317)									{
HXLINE( 317)										vpos = (vpos + 1);
HXDLIN( 317)										vlc->b[(vpos - 1)] = ( (unsigned char)(code) );
            									}
            								}
            							}
            						}
            					}
HXLINE( 320)					{
HXLINE( 320)						 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 320)						_hx_tmp->pos = (_hx_tmp->pos + currcnt);
HXDLIN( 320)						 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 320)						_hx_tmp1->size = (_hx_tmp1->size - currcnt);
HXDLIN( 320)						 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 320)						_hx_tmp2->length = (_hx_tmp2->length - currcnt);
            					}
            				}
            			}
HXLINE( 322)			while(true){
HXLINE( 322)				remain = (remain - 1);
HXDLIN( 322)				if (!(((remain + 1) != 0))) {
HXLINE( 322)					goto _hx_goto_28;
            				}
HXLINE( 323)				vlc->b[vpos] = ( (unsigned char)(0) );
HXLINE( 324)				vpos = (vpos + 2);
            			}
            			_hx_goto_28:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njDecodeDHT,(void))

void NanoJpeg_obj::njDecodeDRI(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_330_njDecodeDRI)
HXLINE( 331)		{
HXLINE( 331)			this->length = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXDLIN( 331)			{
HXLINE( 331)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 331)				_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 331)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 331)				_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 331)				 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 331)				_hx_tmp2->length = (_hx_tmp2->length - 2);
            			}
            		}
HXLINE( 333)		this->rstinterval = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXLINE( 334)		{
HXLINE( 334)			int count = this->length;
HXDLIN( 334)			 ::hxd::res::NanoJpeg _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 334)			_hx_tmp3->pos = (_hx_tmp3->pos + count);
HXDLIN( 334)			 ::hxd::res::NanoJpeg _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 334)			_hx_tmp4->size = (_hx_tmp4->size - count);
HXDLIN( 334)			 ::hxd::res::NanoJpeg _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 334)			_hx_tmp5->length = (_hx_tmp5->length - count);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njDecodeDRI,(void))

int NanoJpeg_obj::njGetVLC( ::haxe::io::Bytes vlc){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_340_njGetVLC)
HXLINE( 341)		int value = this->njShowBits(16);
HXLINE( 342)		int bits = ( (int)(vlc->b->__get((value << 1))) );
HXLINE( 344)		{
HXLINE( 344)			if ((this->bufbits < bits)) {
HXLINE( 344)				this->njShowBits(bits);
            			}
HXDLIN( 344)			 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 344)			_hx_tmp->bufbits = (_hx_tmp->bufbits - bits);
            		}
HXLINE( 345)		value = ( (int)(vlc->b->__get(((value << 1) | 1))) );
HXLINE( 346)		this->vlcCode = value;
HXLINE( 347)		bits = (value & 15);
HXLINE( 348)		if ((bits == 0)) {
HXLINE( 348)			return 0;
            		}
HXLINE( 349)		int r = this->njShowBits(bits);
HXDLIN( 349)		 ::hxd::res::NanoJpeg value1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 349)		value1->bufbits = (value1->bufbits - bits);
HXDLIN( 349)		value = r;
HXLINE( 350)		if ((value < (1 << (bits - 1)))) {
HXLINE( 351)			value = (value + ((-1 << bits) + 1));
            		}
HXLINE( 352)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njGetVLC,return )

void NanoJpeg_obj::njRowIDCT(int bp){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_362_njRowIDCT)
HXLINE( 363)		int x1 = (( (int)(_hx_array_unsafe_get(this->block,(bp + 4))) ) << 11);
HXDLIN( 363)		int x2 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 6))) );
HXDLIN( 363)		int x3 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 2))) );
HXDLIN( 363)		int x4 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 1))) );
HXDLIN( 363)		int x5 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 7))) );
HXDLIN( 363)		int x6 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 5))) );
HXDLIN( 363)		int x7 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 3))) );
HXLINE( 364)		if ((((((((x1 | x2) | x3) | x4) | x5) | x6) | x7) == 0)) {
HXLINE( 371)			{
HXLINE( 371)				::Array< int > this1 = this->block;
HXDLIN( 371)				::Array< int > this2 = this->block;
HXDLIN( 371)				::Array< int > this3 = this->block;
HXDLIN( 371)				::Array< int > this4 = this->block;
HXDLIN( 371)				::Array< int > this5 = this->block;
HXDLIN( 371)				::Array< int > this6 = this->block;
HXDLIN( 371)				::Array< int > this7 = this->block;
HXDLIN( 371)				::Array< int > this8 = this->block;
HXDLIN( 371)				int val = (( (int)(_hx_array_unsafe_get(this->block,bp)) ) << 3);
HXDLIN( 371)				int val1 = ( (int)(this8->__unsafe_set((bp + 7),val)) );
HXDLIN( 371)				int val2 = ( (int)(this7->__unsafe_set((bp + 6),val1)) );
HXDLIN( 371)				int val3 = ( (int)(this6->__unsafe_set((bp + 5),val2)) );
HXDLIN( 371)				int val4 = ( (int)(this5->__unsafe_set((bp + 4),val3)) );
HXDLIN( 371)				int val5 = ( (int)(this4->__unsafe_set((bp + 3),val4)) );
HXDLIN( 371)				int val6 = ( (int)(this3->__unsafe_set((bp + 2),val5)) );
HXDLIN( 371)				int val7 = ( (int)(this2->__unsafe_set((bp + 1),val6)) );
HXDLIN( 371)				this1->__unsafe_set(bp,val7);
            			}
HXLINE( 372)			return;
            		}
HXLINE( 363)		int x0 = ((( (int)(_hx_array_unsafe_get(this->block,bp)) ) << 11) + 128);
HXDLIN( 363)		int x8 = (565 * (x4 + x5));
HXLINE( 376)		x4 = (x8 + (2276 * x4));
HXLINE( 377)		x5 = (x8 - (3406 * x5));
HXLINE( 378)		x8 = (2408 * (x6 + x7));
HXLINE( 379)		x6 = (x8 - (799 * x6));
HXLINE( 380)		x7 = (x8 - (4017 * x7));
HXLINE( 381)		x8 = (x0 + x1);
HXLINE( 382)		x0 = (x0 - x1);
HXLINE( 383)		x1 = (1108 * (x3 + x2));
HXLINE( 384)		x2 = (x1 - (3784 * x2));
HXLINE( 385)		x3 = (x1 + (1568 * x3));
HXLINE( 386)		x1 = (x4 + x6);
HXLINE( 387)		x4 = (x4 - x6);
HXLINE( 388)		x6 = (x5 + x7);
HXLINE( 389)		x5 = (x5 - x7);
HXLINE( 390)		x7 = (x8 + x3);
HXLINE( 391)		x8 = (x8 - x3);
HXLINE( 392)		x3 = (x0 + x2);
HXLINE( 393)		x0 = (x0 - x2);
HXLINE( 394)		x2 = (((181 * (x4 + x5)) + 128) >> 8);
HXLINE( 395)		x4 = (((181 * (x4 - x5)) + 128) >> 8);
HXLINE( 396)		this->block->__unsafe_set(bp,((x7 + x1) >> 8));
HXLINE( 397)		this->block->__unsafe_set((bp + 1),((x3 + x2) >> 8));
HXLINE( 398)		this->block->__unsafe_set((bp + 2),((x0 + x4) >> 8));
HXLINE( 399)		this->block->__unsafe_set((bp + 3),((x8 + x6) >> 8));
HXLINE( 400)		this->block->__unsafe_set((bp + 4),((x8 - x6) >> 8));
HXLINE( 401)		this->block->__unsafe_set((bp + 5),((x0 - x4) >> 8));
HXLINE( 402)		this->block->__unsafe_set((bp + 6),((x3 - x2) >> 8));
HXLINE( 403)		this->block->__unsafe_set((bp + 7),((x7 - x1) >> 8));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njRowIDCT,(void))

void NanoJpeg_obj::njColIDCT(int bp, ::haxe::io::Bytes out,int po,int stride){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_406_njColIDCT)
HXLINE( 407)		int x1 = (( (int)(_hx_array_unsafe_get(this->block,(bp + 32))) ) << 8);
HXDLIN( 407)		int x2 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 48))) );
HXDLIN( 407)		int x3 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 16))) );
HXDLIN( 407)		int x4 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 8))) );
HXDLIN( 407)		int x5 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 56))) );
HXDLIN( 407)		int x6 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 40))) );
HXDLIN( 407)		int x7 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 24))) );
HXLINE( 408)		if ((((((((x1 | x2) | x3) | x4) | x5) | x6) | x7) == 0)) {
HXLINE( 416)			int x = (((_hx_array_unsafe_get(this->block,bp) + 32) >> 6) + 128);
HXDLIN( 416)			if ((x < 0)) {
HXLINE( 416)				x1 = 0;
            			}
            			else {
HXLINE( 416)				if ((x > 255)) {
HXLINE( 416)					x1 = 255;
            				}
            				else {
HXLINE( 416)					x1 = x;
            				}
            			}
HXLINE( 417)			{
HXLINE( 417)				{
HXLINE( 418)					out->b[po] = ( (unsigned char)(x1) );
HXLINE( 419)					po = (po + stride);
            				}
HXLINE( 417)				{
HXLINE( 418)					out->b[po] = ( (unsigned char)(x1) );
HXLINE( 419)					po = (po + stride);
            				}
HXLINE( 417)				{
HXLINE( 418)					out->b[po] = ( (unsigned char)(x1) );
HXLINE( 419)					po = (po + stride);
            				}
HXLINE( 417)				{
HXLINE( 418)					out->b[po] = ( (unsigned char)(x1) );
HXLINE( 419)					po = (po + stride);
            				}
HXLINE( 417)				{
HXLINE( 418)					out->b[po] = ( (unsigned char)(x1) );
HXLINE( 419)					po = (po + stride);
            				}
HXLINE( 417)				{
HXLINE( 418)					out->b[po] = ( (unsigned char)(x1) );
HXLINE( 419)					po = (po + stride);
            				}
HXLINE( 417)				{
HXLINE( 418)					out->b[po] = ( (unsigned char)(x1) );
HXLINE( 419)					po = (po + stride);
            				}
HXLINE( 417)				{
HXLINE( 418)					out->b[po] = ( (unsigned char)(x1) );
HXLINE( 419)					po = (po + stride);
            				}
            			}
HXLINE( 421)			return;
            		}
HXLINE( 407)		int x0 = ((( (int)(_hx_array_unsafe_get(this->block,bp)) ) << 8) + 8192);
HXDLIN( 407)		int x8 = ((565 * (x4 + x5)) + 4);
HXLINE( 425)		x4 = ((x8 + (2276 * x4)) >> 3);
HXLINE( 426)		x5 = ((x8 - (3406 * x5)) >> 3);
HXLINE( 427)		x8 = ((2408 * (x6 + x7)) + 4);
HXLINE( 428)		x6 = ((x8 - (799 * x6)) >> 3);
HXLINE( 429)		x7 = ((x8 - (4017 * x7)) >> 3);
HXLINE( 430)		x8 = (x0 + x1);
HXLINE( 431)		x0 = (x0 - x1);
HXLINE( 432)		x1 = ((1108 * (x3 + x2)) + 4);
HXLINE( 433)		x2 = ((x1 - (3784 * x2)) >> 3);
HXLINE( 434)		x3 = ((x1 + (1568 * x3)) >> 3);
HXLINE( 435)		x1 = (x4 + x6);
HXLINE( 436)		x4 = (x4 - x6);
HXLINE( 437)		x6 = (x5 + x7);
HXLINE( 438)		x5 = (x5 - x7);
HXLINE( 439)		x7 = (x8 + x3);
HXLINE( 440)		x8 = (x8 - x3);
HXLINE( 441)		x3 = (x0 + x2);
HXLINE( 442)		x0 = (x0 - x2);
HXLINE( 443)		x2 = (((181 * (x4 + x5)) + 128) >> 8);
HXLINE( 444)		x4 = (((181 * (x4 - x5)) + 128) >> 8);
HXLINE( 445)		int x = (((x7 + x1) >> 14) + 128);
HXDLIN( 445)		int _hx_tmp;
HXDLIN( 445)		if ((x < 0)) {
HXLINE( 445)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 445)			if ((x > 255)) {
HXLINE( 445)				_hx_tmp = 255;
            			}
            			else {
HXLINE( 445)				_hx_tmp = x;
            			}
            		}
HXDLIN( 445)		out->b[po] = ( (unsigned char)(_hx_tmp) );
HXDLIN( 445)		po = (po + stride);
HXLINE( 446)		int x9 = (((x3 + x2) >> 14) + 128);
HXDLIN( 446)		int _hx_tmp1;
HXDLIN( 446)		if ((x9 < 0)) {
HXLINE( 446)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 446)			if ((x9 > 255)) {
HXLINE( 446)				_hx_tmp1 = 255;
            			}
            			else {
HXLINE( 446)				_hx_tmp1 = x9;
            			}
            		}
HXDLIN( 446)		out->b[po] = ( (unsigned char)(_hx_tmp1) );
HXDLIN( 446)		po = (po + stride);
HXLINE( 447)		int x10 = (((x0 + x4) >> 14) + 128);
HXDLIN( 447)		int _hx_tmp2;
HXDLIN( 447)		if ((x10 < 0)) {
HXLINE( 447)			_hx_tmp2 = 0;
            		}
            		else {
HXLINE( 447)			if ((x10 > 255)) {
HXLINE( 447)				_hx_tmp2 = 255;
            			}
            			else {
HXLINE( 447)				_hx_tmp2 = x10;
            			}
            		}
HXDLIN( 447)		out->b[po] = ( (unsigned char)(_hx_tmp2) );
HXDLIN( 447)		po = (po + stride);
HXLINE( 448)		int x11 = (((x8 + x6) >> 14) + 128);
HXDLIN( 448)		int _hx_tmp3;
HXDLIN( 448)		if ((x11 < 0)) {
HXLINE( 448)			_hx_tmp3 = 0;
            		}
            		else {
HXLINE( 448)			if ((x11 > 255)) {
HXLINE( 448)				_hx_tmp3 = 255;
            			}
            			else {
HXLINE( 448)				_hx_tmp3 = x11;
            			}
            		}
HXDLIN( 448)		out->b[po] = ( (unsigned char)(_hx_tmp3) );
HXDLIN( 448)		po = (po + stride);
HXLINE( 449)		int x12 = (((x8 - x6) >> 14) + 128);
HXDLIN( 449)		int _hx_tmp4;
HXDLIN( 449)		if ((x12 < 0)) {
HXLINE( 449)			_hx_tmp4 = 0;
            		}
            		else {
HXLINE( 449)			if ((x12 > 255)) {
HXLINE( 449)				_hx_tmp4 = 255;
            			}
            			else {
HXLINE( 449)				_hx_tmp4 = x12;
            			}
            		}
HXDLIN( 449)		out->b[po] = ( (unsigned char)(_hx_tmp4) );
HXDLIN( 449)		po = (po + stride);
HXLINE( 450)		int x13 = (((x0 - x4) >> 14) + 128);
HXDLIN( 450)		int _hx_tmp5;
HXDLIN( 450)		if ((x13 < 0)) {
HXLINE( 450)			_hx_tmp5 = 0;
            		}
            		else {
HXLINE( 450)			if ((x13 > 255)) {
HXLINE( 450)				_hx_tmp5 = 255;
            			}
            			else {
HXLINE( 450)				_hx_tmp5 = x13;
            			}
            		}
HXDLIN( 450)		out->b[po] = ( (unsigned char)(_hx_tmp5) );
HXDLIN( 450)		po = (po + stride);
HXLINE( 451)		int x14 = (((x3 - x2) >> 14) + 128);
HXDLIN( 451)		int _hx_tmp6;
HXDLIN( 451)		if ((x14 < 0)) {
HXLINE( 451)			_hx_tmp6 = 0;
            		}
            		else {
HXLINE( 451)			if ((x14 > 255)) {
HXLINE( 451)				_hx_tmp6 = 255;
            			}
            			else {
HXLINE( 451)				_hx_tmp6 = x14;
            			}
            		}
HXDLIN( 451)		out->b[po] = ( (unsigned char)(_hx_tmp6) );
HXDLIN( 451)		po = (po + stride);
HXLINE( 452)		int x15 = (((x7 - x1) >> 14) + 128);
HXDLIN( 452)		int _hx_tmp7;
HXDLIN( 452)		if ((x15 < 0)) {
HXLINE( 452)			_hx_tmp7 = 0;
            		}
            		else {
HXLINE( 452)			if ((x15 > 255)) {
HXLINE( 452)				_hx_tmp7 = 255;
            			}
            			else {
HXLINE( 452)				_hx_tmp7 = x15;
            			}
            		}
HXDLIN( 452)		out->b[po] = ( (unsigned char)(_hx_tmp7) );
            	}


HX_DEFINE_DYNAMIC_FUNC4(NanoJpeg_obj,njColIDCT,(void))

void NanoJpeg_obj::njDecodeBlock( ::hxd::res::_NanoJpeg::Component c,int po){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_455_njDecodeBlock)
HXLINE( 456)		 ::haxe::io::Bytes this1 = c->pixels;
HXDLIN( 456)		 ::haxe::io::Bytes out = this1;
HXLINE( 457)		int value;
HXDLIN( 457)		int coef = 0;
HXLINE( 458)		{
HXLINE( 458)			int _g = 0;
HXDLIN( 458)			while((_g < 64)){
HXLINE( 458)				_g = (_g + 1);
HXDLIN( 458)				int i = (_g - 1);
HXLINE( 459)				this->block->__unsafe_set(i,0);
            			}
            		}
HXLINE( 460)		 ::hxd::res::_NanoJpeg::Component c1 = c;
HXDLIN( 460)		int c2 = c1->dcpred;
HXDLIN( 460)		 ::haxe::io::Bytes vlc = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,c->dctabsel)) );
HXDLIN( 460)		int value1 = this->njShowBits(16);
HXDLIN( 460)		int bits = ( (int)(vlc->b->__get((value1 << 1))) );
HXDLIN( 460)		{
HXLINE( 460)			if ((this->bufbits < bits)) {
HXLINE( 460)				this->njShowBits(bits);
            			}
HXDLIN( 460)			 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 460)			_hx_tmp->bufbits = (_hx_tmp->bufbits - bits);
            		}
HXDLIN( 460)		value1 = ( (int)(vlc->b->__get(((value1 << 1) | 1))) );
HXDLIN( 460)		this->vlcCode = value1;
HXDLIN( 460)		bits = (value1 & 15);
HXDLIN( 460)		int _hx_tmp1;
HXDLIN( 460)		if ((bits == 0)) {
HXLINE( 460)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 460)			int r = this->njShowBits(bits);
HXDLIN( 460)			 ::hxd::res::NanoJpeg value = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 460)			value->bufbits = (value->bufbits - bits);
HXDLIN( 460)			value1 = r;
HXDLIN( 460)			if ((value1 < (1 << (bits - 1)))) {
HXLINE( 460)				value1 = (value1 + ((-1 << bits) + 1));
            			}
HXDLIN( 460)			_hx_tmp1 = value1;
            		}
HXDLIN( 460)		c1->dcpred = (c2 + _hx_tmp1);
HXLINE( 461)		::Array< int > qt = ( (::Array< int >)(_hx_array_unsafe_get(this->qtab,c->qtsel)) );
HXLINE( 462)		 ::haxe::io::Bytes at = ( ( ::haxe::io::Bytes)(_hx_array_unsafe_get(this->vlctab,c->actabsel)) );
HXLINE( 463)		{
HXLINE( 463)			::Array< int > this2 = this->block;
HXDLIN( 463)			int c3 = c->dcpred;
HXDLIN( 463)			int val = (c3 * ( (int)(_hx_array_unsafe_get(qt,0)) ));
HXDLIN( 463)			this2->__unsafe_set(0,val);
            		}
HXLINE( 464)		while(true){
HXLINE( 465)			int value1 = this->njShowBits(16);
HXDLIN( 465)			int bits = ( (int)(at->b->__get((value1 << 1))) );
HXDLIN( 465)			{
HXLINE( 465)				if ((this->bufbits < bits)) {
HXLINE( 465)					this->njShowBits(bits);
            				}
HXDLIN( 465)				 ::hxd::res::NanoJpeg value2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 465)				value2->bufbits = (value2->bufbits - bits);
            			}
HXDLIN( 465)			value1 = ( (int)(at->b->__get(((value1 << 1) | 1))) );
HXDLIN( 465)			this->vlcCode = value1;
HXDLIN( 465)			bits = (value1 & 15);
HXDLIN( 465)			if ((bits == 0)) {
HXLINE( 465)				value = 0;
            			}
            			else {
HXLINE( 465)				int r = this->njShowBits(bits);
HXDLIN( 465)				 ::hxd::res::NanoJpeg value2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 465)				value2->bufbits = (value2->bufbits - bits);
HXDLIN( 465)				value1 = r;
HXDLIN( 465)				if ((value1 < (1 << (bits - 1)))) {
HXLINE( 465)					value1 = (value1 + ((-1 << bits) + 1));
            				}
HXDLIN( 465)				value = value1;
            			}
HXLINE( 466)			if ((this->vlcCode == 0)) {
HXLINE( 466)				goto _hx_goto_35;
            			}
HXLINE( 468)			coef = (coef + ((this->vlcCode >> 4) + 1));
HXLINE( 470)			{
HXLINE( 470)				::Array< int > this1 = this->block;
HXDLIN( 470)				int index = ( (int)(_hx_array_unsafe_get(this->njZZ,coef)) );
HXDLIN( 470)				int val = (value * ( (int)(_hx_array_unsafe_get(qt,coef)) ));
HXDLIN( 470)				this1->__unsafe_set(index,val);
            			}
HXLINE( 464)			if (!((coef < 63))) {
HXLINE( 464)				goto _hx_goto_35;
            			}
            		}
            		_hx_goto_35:;
HXLINE( 472)		{
HXLINE( 473)			{
HXLINE( 473)				int bp = 0;
HXDLIN( 473)				int x0;
HXDLIN( 473)				int x8;
HXDLIN( 473)				int x1 = (( (int)(_hx_array_unsafe_get(this->block,(bp + 4))) ) << 11);
HXDLIN( 473)				int x2 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 6))) );
HXDLIN( 473)				int x3 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 2))) );
HXDLIN( 473)				int x4 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 1))) );
HXDLIN( 473)				int x5 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 7))) );
HXDLIN( 473)				int x6 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 5))) );
HXDLIN( 473)				int x7 = ( (int)(_hx_array_unsafe_get(this->block,(bp + 3))) );
HXDLIN( 473)				if ((((((((x1 | x2) | x3) | x4) | x5) | x6) | x7) == 0)) {
HXLINE( 473)					::Array< int > this1 = this->block;
HXDLIN( 473)					::Array< int > this2 = this->block;
HXDLIN( 473)					::Array< int > this3 = this->block;
HXDLIN( 473)					::Array< int > this4 = this->block;
HXDLIN( 473)					::Array< int > this5 = this->block;
HXDLIN( 473)					::Array< int > this6 = this->block;
HXDLIN( 473)					::Array< int > this7 = this->block;
HXDLIN( 473)					::Array< int > this8 = this->block;
HXDLIN( 473)					int val = (( (int)(_hx_array_unsafe_get(this->block,bp)) ) << 3);
HXDLIN( 473)					int val1 = ( (int)(this8->__unsafe_set((bp + 7),val)) );
HXDLIN( 473)					int val2 = ( (int)(this7->__unsafe_set((bp + 6),val1)) );
HXDLIN( 473)					int val3 = ( (int)(this6->__unsafe_set((bp + 5),val2)) );
HXDLIN( 473)					int val4 = ( (int)(this5->__unsafe_set((bp + 4),val3)) );
HXDLIN( 473)					int val5 = ( (int)(this4->__unsafe_set((bp + 3),val4)) );
HXDLIN( 473)					int val6 = ( (int)(this3->__unsafe_set((bp + 2),val5)) );
HXDLIN( 473)					int val7 = ( (int)(this2->__unsafe_set((bp + 1),val6)) );
HXDLIN( 473)					this1->__unsafe_set(bp,val7);
            				}
            				else {
HXLINE( 473)					x0 = ((( (int)(_hx_array_unsafe_get(this->block,bp)) ) << 11) + 128);
HXDLIN( 473)					x8 = (565 * (x4 + x5));
HXDLIN( 473)					x4 = (x8 + (2276 * x4));
HXDLIN( 473)					x5 = (x8 - (3406 * x5));
HXDLIN( 473)					x8 = (2408 * (x6 + x7));
HXDLIN( 473)					x6 = (x8 - (799 * x6));
HXDLIN( 473)					x7 = (x8 - (4017 * x7));
HXDLIN( 473)					x8 = (x0 + x1);
HXDLIN( 473)					x0 = (x0 - x1);
HXDLIN( 473)					x1 = (1108 * (x3 + x2));
HXDLIN( 473)					x2 = (x1 - (3784 * x2));
HXDLIN( 473)					x3 = (x1 + (1568 * x3));
HXDLIN( 473)					x1 = (x4 + x6);
HXDLIN( 473)					x4 = (x4 - x6);
HXDLIN( 473)					x6 = (x5 + x7);
HXDLIN( 473)					x5 = (x5 - x7);
HXDLIN( 473)					x7 = (x8 + x3);
HXDLIN( 473)					x8 = (x8 - x3);
HXDLIN( 473)					x3 = (x0 + x2);
HXDLIN( 473)					x0 = (x0 - x2);
HXDLIN( 473)					x2 = (((181 * (x4 + x5)) + 128) >> 8);
HXDLIN( 473)					x4 = (((181 * (x4 - x5)) + 128) >> 8);
HXDLIN( 473)					this->block->__unsafe_set(bp,((x7 + x1) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp + 1),((x3 + x2) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp + 2),((x0 + x4) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp + 3),((x8 + x6) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp + 4),((x8 - x6) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp + 5),((x0 - x4) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp + 6),((x3 - x2) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp + 7),((x7 - x1) >> 8));
            				}
            			}
HXDLIN( 473)			{
HXLINE( 473)				int bp1 = 8;
HXDLIN( 473)				int x01;
HXDLIN( 473)				int x81;
HXDLIN( 473)				int x11 = (( (int)(_hx_array_unsafe_get(this->block,(bp1 + 4))) ) << 11);
HXDLIN( 473)				int x21 = ( (int)(_hx_array_unsafe_get(this->block,(bp1 + 6))) );
HXDLIN( 473)				int x31 = ( (int)(_hx_array_unsafe_get(this->block,(bp1 + 2))) );
HXDLIN( 473)				int x41 = ( (int)(_hx_array_unsafe_get(this->block,(bp1 + 1))) );
HXDLIN( 473)				int x51 = ( (int)(_hx_array_unsafe_get(this->block,(bp1 + 7))) );
HXDLIN( 473)				int x61 = ( (int)(_hx_array_unsafe_get(this->block,(bp1 + 5))) );
HXDLIN( 473)				int x71 = ( (int)(_hx_array_unsafe_get(this->block,(bp1 + 3))) );
HXDLIN( 473)				if ((((((((x11 | x21) | x31) | x41) | x51) | x61) | x71) == 0)) {
HXLINE( 473)					::Array< int > this1 = this->block;
HXDLIN( 473)					::Array< int > this2 = this->block;
HXDLIN( 473)					::Array< int > this3 = this->block;
HXDLIN( 473)					::Array< int > this4 = this->block;
HXDLIN( 473)					::Array< int > this5 = this->block;
HXDLIN( 473)					::Array< int > this6 = this->block;
HXDLIN( 473)					::Array< int > this7 = this->block;
HXDLIN( 473)					::Array< int > this8 = this->block;
HXDLIN( 473)					int val = (( (int)(_hx_array_unsafe_get(this->block,bp1)) ) << 3);
HXDLIN( 473)					int val1 = ( (int)(this8->__unsafe_set((bp1 + 7),val)) );
HXDLIN( 473)					int val2 = ( (int)(this7->__unsafe_set((bp1 + 6),val1)) );
HXDLIN( 473)					int val3 = ( (int)(this6->__unsafe_set((bp1 + 5),val2)) );
HXDLIN( 473)					int val4 = ( (int)(this5->__unsafe_set((bp1 + 4),val3)) );
HXDLIN( 473)					int val5 = ( (int)(this4->__unsafe_set((bp1 + 3),val4)) );
HXDLIN( 473)					int val6 = ( (int)(this3->__unsafe_set((bp1 + 2),val5)) );
HXDLIN( 473)					int val7 = ( (int)(this2->__unsafe_set((bp1 + 1),val6)) );
HXDLIN( 473)					this1->__unsafe_set(bp1,val7);
            				}
            				else {
HXLINE( 473)					x01 = ((( (int)(_hx_array_unsafe_get(this->block,bp1)) ) << 11) + 128);
HXDLIN( 473)					x81 = (565 * (x41 + x51));
HXDLIN( 473)					x41 = (x81 + (2276 * x41));
HXDLIN( 473)					x51 = (x81 - (3406 * x51));
HXDLIN( 473)					x81 = (2408 * (x61 + x71));
HXDLIN( 473)					x61 = (x81 - (799 * x61));
HXDLIN( 473)					x71 = (x81 - (4017 * x71));
HXDLIN( 473)					x81 = (x01 + x11);
HXDLIN( 473)					x01 = (x01 - x11);
HXDLIN( 473)					x11 = (1108 * (x31 + x21));
HXDLIN( 473)					x21 = (x11 - (3784 * x21));
HXDLIN( 473)					x31 = (x11 + (1568 * x31));
HXDLIN( 473)					x11 = (x41 + x61);
HXDLIN( 473)					x41 = (x41 - x61);
HXDLIN( 473)					x61 = (x51 + x71);
HXDLIN( 473)					x51 = (x51 - x71);
HXDLIN( 473)					x71 = (x81 + x31);
HXDLIN( 473)					x81 = (x81 - x31);
HXDLIN( 473)					x31 = (x01 + x21);
HXDLIN( 473)					x01 = (x01 - x21);
HXDLIN( 473)					x21 = (((181 * (x41 + x51)) + 128) >> 8);
HXDLIN( 473)					x41 = (((181 * (x41 - x51)) + 128) >> 8);
HXDLIN( 473)					this->block->__unsafe_set(bp1,((x71 + x11) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp1 + 1),((x31 + x21) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp1 + 2),((x01 + x41) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp1 + 3),((x81 + x61) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp1 + 4),((x81 - x61) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp1 + 5),((x01 - x41) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp1 + 6),((x31 - x21) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp1 + 7),((x71 - x11) >> 8));
            				}
            			}
HXDLIN( 473)			{
HXLINE( 473)				int bp2 = 16;
HXDLIN( 473)				int x02;
HXDLIN( 473)				int x82;
HXDLIN( 473)				int x12 = (( (int)(_hx_array_unsafe_get(this->block,(bp2 + 4))) ) << 11);
HXDLIN( 473)				int x22 = ( (int)(_hx_array_unsafe_get(this->block,(bp2 + 6))) );
HXDLIN( 473)				int x32 = ( (int)(_hx_array_unsafe_get(this->block,(bp2 + 2))) );
HXDLIN( 473)				int x42 = ( (int)(_hx_array_unsafe_get(this->block,(bp2 + 1))) );
HXDLIN( 473)				int x52 = ( (int)(_hx_array_unsafe_get(this->block,(bp2 + 7))) );
HXDLIN( 473)				int x62 = ( (int)(_hx_array_unsafe_get(this->block,(bp2 + 5))) );
HXDLIN( 473)				int x72 = ( (int)(_hx_array_unsafe_get(this->block,(bp2 + 3))) );
HXDLIN( 473)				if ((((((((x12 | x22) | x32) | x42) | x52) | x62) | x72) == 0)) {
HXLINE( 473)					::Array< int > this1 = this->block;
HXDLIN( 473)					::Array< int > this2 = this->block;
HXDLIN( 473)					::Array< int > this3 = this->block;
HXDLIN( 473)					::Array< int > this4 = this->block;
HXDLIN( 473)					::Array< int > this5 = this->block;
HXDLIN( 473)					::Array< int > this6 = this->block;
HXDLIN( 473)					::Array< int > this7 = this->block;
HXDLIN( 473)					::Array< int > this8 = this->block;
HXDLIN( 473)					int val = (( (int)(_hx_array_unsafe_get(this->block,bp2)) ) << 3);
HXDLIN( 473)					int val1 = ( (int)(this8->__unsafe_set((bp2 + 7),val)) );
HXDLIN( 473)					int val2 = ( (int)(this7->__unsafe_set((bp2 + 6),val1)) );
HXDLIN( 473)					int val3 = ( (int)(this6->__unsafe_set((bp2 + 5),val2)) );
HXDLIN( 473)					int val4 = ( (int)(this5->__unsafe_set((bp2 + 4),val3)) );
HXDLIN( 473)					int val5 = ( (int)(this4->__unsafe_set((bp2 + 3),val4)) );
HXDLIN( 473)					int val6 = ( (int)(this3->__unsafe_set((bp2 + 2),val5)) );
HXDLIN( 473)					int val7 = ( (int)(this2->__unsafe_set((bp2 + 1),val6)) );
HXDLIN( 473)					this1->__unsafe_set(bp2,val7);
            				}
            				else {
HXLINE( 473)					x02 = ((( (int)(_hx_array_unsafe_get(this->block,bp2)) ) << 11) + 128);
HXDLIN( 473)					x82 = (565 * (x42 + x52));
HXDLIN( 473)					x42 = (x82 + (2276 * x42));
HXDLIN( 473)					x52 = (x82 - (3406 * x52));
HXDLIN( 473)					x82 = (2408 * (x62 + x72));
HXDLIN( 473)					x62 = (x82 - (799 * x62));
HXDLIN( 473)					x72 = (x82 - (4017 * x72));
HXDLIN( 473)					x82 = (x02 + x12);
HXDLIN( 473)					x02 = (x02 - x12);
HXDLIN( 473)					x12 = (1108 * (x32 + x22));
HXDLIN( 473)					x22 = (x12 - (3784 * x22));
HXDLIN( 473)					x32 = (x12 + (1568 * x32));
HXDLIN( 473)					x12 = (x42 + x62);
HXDLIN( 473)					x42 = (x42 - x62);
HXDLIN( 473)					x62 = (x52 + x72);
HXDLIN( 473)					x52 = (x52 - x72);
HXDLIN( 473)					x72 = (x82 + x32);
HXDLIN( 473)					x82 = (x82 - x32);
HXDLIN( 473)					x32 = (x02 + x22);
HXDLIN( 473)					x02 = (x02 - x22);
HXDLIN( 473)					x22 = (((181 * (x42 + x52)) + 128) >> 8);
HXDLIN( 473)					x42 = (((181 * (x42 - x52)) + 128) >> 8);
HXDLIN( 473)					this->block->__unsafe_set(bp2,((x72 + x12) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp2 + 1),((x32 + x22) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp2 + 2),((x02 + x42) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp2 + 3),((x82 + x62) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp2 + 4),((x82 - x62) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp2 + 5),((x02 - x42) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp2 + 6),((x32 - x22) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp2 + 7),((x72 - x12) >> 8));
            				}
            			}
HXDLIN( 473)			{
HXLINE( 473)				int bp3 = 24;
HXDLIN( 473)				int x03;
HXDLIN( 473)				int x83;
HXDLIN( 473)				int x13 = (( (int)(_hx_array_unsafe_get(this->block,(bp3 + 4))) ) << 11);
HXDLIN( 473)				int x23 = ( (int)(_hx_array_unsafe_get(this->block,(bp3 + 6))) );
HXDLIN( 473)				int x33 = ( (int)(_hx_array_unsafe_get(this->block,(bp3 + 2))) );
HXDLIN( 473)				int x43 = ( (int)(_hx_array_unsafe_get(this->block,(bp3 + 1))) );
HXDLIN( 473)				int x53 = ( (int)(_hx_array_unsafe_get(this->block,(bp3 + 7))) );
HXDLIN( 473)				int x63 = ( (int)(_hx_array_unsafe_get(this->block,(bp3 + 5))) );
HXDLIN( 473)				int x73 = ( (int)(_hx_array_unsafe_get(this->block,(bp3 + 3))) );
HXDLIN( 473)				if ((((((((x13 | x23) | x33) | x43) | x53) | x63) | x73) == 0)) {
HXLINE( 473)					::Array< int > this1 = this->block;
HXDLIN( 473)					::Array< int > this2 = this->block;
HXDLIN( 473)					::Array< int > this3 = this->block;
HXDLIN( 473)					::Array< int > this4 = this->block;
HXDLIN( 473)					::Array< int > this5 = this->block;
HXDLIN( 473)					::Array< int > this6 = this->block;
HXDLIN( 473)					::Array< int > this7 = this->block;
HXDLIN( 473)					::Array< int > this8 = this->block;
HXDLIN( 473)					int val = (( (int)(_hx_array_unsafe_get(this->block,bp3)) ) << 3);
HXDLIN( 473)					int val1 = ( (int)(this8->__unsafe_set((bp3 + 7),val)) );
HXDLIN( 473)					int val2 = ( (int)(this7->__unsafe_set((bp3 + 6),val1)) );
HXDLIN( 473)					int val3 = ( (int)(this6->__unsafe_set((bp3 + 5),val2)) );
HXDLIN( 473)					int val4 = ( (int)(this5->__unsafe_set((bp3 + 4),val3)) );
HXDLIN( 473)					int val5 = ( (int)(this4->__unsafe_set((bp3 + 3),val4)) );
HXDLIN( 473)					int val6 = ( (int)(this3->__unsafe_set((bp3 + 2),val5)) );
HXDLIN( 473)					int val7 = ( (int)(this2->__unsafe_set((bp3 + 1),val6)) );
HXDLIN( 473)					this1->__unsafe_set(bp3,val7);
            				}
            				else {
HXLINE( 473)					x03 = ((( (int)(_hx_array_unsafe_get(this->block,bp3)) ) << 11) + 128);
HXDLIN( 473)					x83 = (565 * (x43 + x53));
HXDLIN( 473)					x43 = (x83 + (2276 * x43));
HXDLIN( 473)					x53 = (x83 - (3406 * x53));
HXDLIN( 473)					x83 = (2408 * (x63 + x73));
HXDLIN( 473)					x63 = (x83 - (799 * x63));
HXDLIN( 473)					x73 = (x83 - (4017 * x73));
HXDLIN( 473)					x83 = (x03 + x13);
HXDLIN( 473)					x03 = (x03 - x13);
HXDLIN( 473)					x13 = (1108 * (x33 + x23));
HXDLIN( 473)					x23 = (x13 - (3784 * x23));
HXDLIN( 473)					x33 = (x13 + (1568 * x33));
HXDLIN( 473)					x13 = (x43 + x63);
HXDLIN( 473)					x43 = (x43 - x63);
HXDLIN( 473)					x63 = (x53 + x73);
HXDLIN( 473)					x53 = (x53 - x73);
HXDLIN( 473)					x73 = (x83 + x33);
HXDLIN( 473)					x83 = (x83 - x33);
HXDLIN( 473)					x33 = (x03 + x23);
HXDLIN( 473)					x03 = (x03 - x23);
HXDLIN( 473)					x23 = (((181 * (x43 + x53)) + 128) >> 8);
HXDLIN( 473)					x43 = (((181 * (x43 - x53)) + 128) >> 8);
HXDLIN( 473)					this->block->__unsafe_set(bp3,((x73 + x13) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp3 + 1),((x33 + x23) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp3 + 2),((x03 + x43) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp3 + 3),((x83 + x63) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp3 + 4),((x83 - x63) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp3 + 5),((x03 - x43) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp3 + 6),((x33 - x23) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp3 + 7),((x73 - x13) >> 8));
            				}
            			}
HXDLIN( 473)			{
HXLINE( 473)				int bp4 = 32;
HXDLIN( 473)				int x04;
HXDLIN( 473)				int x84;
HXDLIN( 473)				int x14 = (( (int)(_hx_array_unsafe_get(this->block,(bp4 + 4))) ) << 11);
HXDLIN( 473)				int x24 = ( (int)(_hx_array_unsafe_get(this->block,(bp4 + 6))) );
HXDLIN( 473)				int x34 = ( (int)(_hx_array_unsafe_get(this->block,(bp4 + 2))) );
HXDLIN( 473)				int x44 = ( (int)(_hx_array_unsafe_get(this->block,(bp4 + 1))) );
HXDLIN( 473)				int x54 = ( (int)(_hx_array_unsafe_get(this->block,(bp4 + 7))) );
HXDLIN( 473)				int x64 = ( (int)(_hx_array_unsafe_get(this->block,(bp4 + 5))) );
HXDLIN( 473)				int x74 = ( (int)(_hx_array_unsafe_get(this->block,(bp4 + 3))) );
HXDLIN( 473)				if ((((((((x14 | x24) | x34) | x44) | x54) | x64) | x74) == 0)) {
HXLINE( 473)					::Array< int > this1 = this->block;
HXDLIN( 473)					::Array< int > this2 = this->block;
HXDLIN( 473)					::Array< int > this3 = this->block;
HXDLIN( 473)					::Array< int > this4 = this->block;
HXDLIN( 473)					::Array< int > this5 = this->block;
HXDLIN( 473)					::Array< int > this6 = this->block;
HXDLIN( 473)					::Array< int > this7 = this->block;
HXDLIN( 473)					::Array< int > this8 = this->block;
HXDLIN( 473)					int val = (( (int)(_hx_array_unsafe_get(this->block,bp4)) ) << 3);
HXDLIN( 473)					int val1 = ( (int)(this8->__unsafe_set((bp4 + 7),val)) );
HXDLIN( 473)					int val2 = ( (int)(this7->__unsafe_set((bp4 + 6),val1)) );
HXDLIN( 473)					int val3 = ( (int)(this6->__unsafe_set((bp4 + 5),val2)) );
HXDLIN( 473)					int val4 = ( (int)(this5->__unsafe_set((bp4 + 4),val3)) );
HXDLIN( 473)					int val5 = ( (int)(this4->__unsafe_set((bp4 + 3),val4)) );
HXDLIN( 473)					int val6 = ( (int)(this3->__unsafe_set((bp4 + 2),val5)) );
HXDLIN( 473)					int val7 = ( (int)(this2->__unsafe_set((bp4 + 1),val6)) );
HXDLIN( 473)					this1->__unsafe_set(bp4,val7);
            				}
            				else {
HXLINE( 473)					x04 = ((( (int)(_hx_array_unsafe_get(this->block,bp4)) ) << 11) + 128);
HXDLIN( 473)					x84 = (565 * (x44 + x54));
HXDLIN( 473)					x44 = (x84 + (2276 * x44));
HXDLIN( 473)					x54 = (x84 - (3406 * x54));
HXDLIN( 473)					x84 = (2408 * (x64 + x74));
HXDLIN( 473)					x64 = (x84 - (799 * x64));
HXDLIN( 473)					x74 = (x84 - (4017 * x74));
HXDLIN( 473)					x84 = (x04 + x14);
HXDLIN( 473)					x04 = (x04 - x14);
HXDLIN( 473)					x14 = (1108 * (x34 + x24));
HXDLIN( 473)					x24 = (x14 - (3784 * x24));
HXDLIN( 473)					x34 = (x14 + (1568 * x34));
HXDLIN( 473)					x14 = (x44 + x64);
HXDLIN( 473)					x44 = (x44 - x64);
HXDLIN( 473)					x64 = (x54 + x74);
HXDLIN( 473)					x54 = (x54 - x74);
HXDLIN( 473)					x74 = (x84 + x34);
HXDLIN( 473)					x84 = (x84 - x34);
HXDLIN( 473)					x34 = (x04 + x24);
HXDLIN( 473)					x04 = (x04 - x24);
HXDLIN( 473)					x24 = (((181 * (x44 + x54)) + 128) >> 8);
HXDLIN( 473)					x44 = (((181 * (x44 - x54)) + 128) >> 8);
HXDLIN( 473)					this->block->__unsafe_set(bp4,((x74 + x14) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp4 + 1),((x34 + x24) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp4 + 2),((x04 + x44) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp4 + 3),((x84 + x64) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp4 + 4),((x84 - x64) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp4 + 5),((x04 - x44) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp4 + 6),((x34 - x24) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp4 + 7),((x74 - x14) >> 8));
            				}
            			}
HXDLIN( 473)			{
HXLINE( 473)				int bp5 = 40;
HXDLIN( 473)				int x05;
HXDLIN( 473)				int x85;
HXDLIN( 473)				int x15 = (( (int)(_hx_array_unsafe_get(this->block,(bp5 + 4))) ) << 11);
HXDLIN( 473)				int x25 = ( (int)(_hx_array_unsafe_get(this->block,(bp5 + 6))) );
HXDLIN( 473)				int x35 = ( (int)(_hx_array_unsafe_get(this->block,(bp5 + 2))) );
HXDLIN( 473)				int x45 = ( (int)(_hx_array_unsafe_get(this->block,(bp5 + 1))) );
HXDLIN( 473)				int x55 = ( (int)(_hx_array_unsafe_get(this->block,(bp5 + 7))) );
HXDLIN( 473)				int x65 = ( (int)(_hx_array_unsafe_get(this->block,(bp5 + 5))) );
HXDLIN( 473)				int x75 = ( (int)(_hx_array_unsafe_get(this->block,(bp5 + 3))) );
HXDLIN( 473)				if ((((((((x15 | x25) | x35) | x45) | x55) | x65) | x75) == 0)) {
HXLINE( 473)					::Array< int > this1 = this->block;
HXDLIN( 473)					::Array< int > this2 = this->block;
HXDLIN( 473)					::Array< int > this3 = this->block;
HXDLIN( 473)					::Array< int > this4 = this->block;
HXDLIN( 473)					::Array< int > this5 = this->block;
HXDLIN( 473)					::Array< int > this6 = this->block;
HXDLIN( 473)					::Array< int > this7 = this->block;
HXDLIN( 473)					::Array< int > this8 = this->block;
HXDLIN( 473)					int val = (( (int)(_hx_array_unsafe_get(this->block,bp5)) ) << 3);
HXDLIN( 473)					int val1 = ( (int)(this8->__unsafe_set((bp5 + 7),val)) );
HXDLIN( 473)					int val2 = ( (int)(this7->__unsafe_set((bp5 + 6),val1)) );
HXDLIN( 473)					int val3 = ( (int)(this6->__unsafe_set((bp5 + 5),val2)) );
HXDLIN( 473)					int val4 = ( (int)(this5->__unsafe_set((bp5 + 4),val3)) );
HXDLIN( 473)					int val5 = ( (int)(this4->__unsafe_set((bp5 + 3),val4)) );
HXDLIN( 473)					int val6 = ( (int)(this3->__unsafe_set((bp5 + 2),val5)) );
HXDLIN( 473)					int val7 = ( (int)(this2->__unsafe_set((bp5 + 1),val6)) );
HXDLIN( 473)					this1->__unsafe_set(bp5,val7);
            				}
            				else {
HXLINE( 473)					x05 = ((( (int)(_hx_array_unsafe_get(this->block,bp5)) ) << 11) + 128);
HXDLIN( 473)					x85 = (565 * (x45 + x55));
HXDLIN( 473)					x45 = (x85 + (2276 * x45));
HXDLIN( 473)					x55 = (x85 - (3406 * x55));
HXDLIN( 473)					x85 = (2408 * (x65 + x75));
HXDLIN( 473)					x65 = (x85 - (799 * x65));
HXDLIN( 473)					x75 = (x85 - (4017 * x75));
HXDLIN( 473)					x85 = (x05 + x15);
HXDLIN( 473)					x05 = (x05 - x15);
HXDLIN( 473)					x15 = (1108 * (x35 + x25));
HXDLIN( 473)					x25 = (x15 - (3784 * x25));
HXDLIN( 473)					x35 = (x15 + (1568 * x35));
HXDLIN( 473)					x15 = (x45 + x65);
HXDLIN( 473)					x45 = (x45 - x65);
HXDLIN( 473)					x65 = (x55 + x75);
HXDLIN( 473)					x55 = (x55 - x75);
HXDLIN( 473)					x75 = (x85 + x35);
HXDLIN( 473)					x85 = (x85 - x35);
HXDLIN( 473)					x35 = (x05 + x25);
HXDLIN( 473)					x05 = (x05 - x25);
HXDLIN( 473)					x25 = (((181 * (x45 + x55)) + 128) >> 8);
HXDLIN( 473)					x45 = (((181 * (x45 - x55)) + 128) >> 8);
HXDLIN( 473)					this->block->__unsafe_set(bp5,((x75 + x15) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp5 + 1),((x35 + x25) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp5 + 2),((x05 + x45) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp5 + 3),((x85 + x65) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp5 + 4),((x85 - x65) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp5 + 5),((x05 - x45) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp5 + 6),((x35 - x25) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp5 + 7),((x75 - x15) >> 8));
            				}
            			}
HXDLIN( 473)			{
HXLINE( 473)				int bp6 = 48;
HXDLIN( 473)				int x06;
HXDLIN( 473)				int x86;
HXDLIN( 473)				int x16 = (( (int)(_hx_array_unsafe_get(this->block,(bp6 + 4))) ) << 11);
HXDLIN( 473)				int x26 = ( (int)(_hx_array_unsafe_get(this->block,(bp6 + 6))) );
HXDLIN( 473)				int x36 = ( (int)(_hx_array_unsafe_get(this->block,(bp6 + 2))) );
HXDLIN( 473)				int x46 = ( (int)(_hx_array_unsafe_get(this->block,(bp6 + 1))) );
HXDLIN( 473)				int x56 = ( (int)(_hx_array_unsafe_get(this->block,(bp6 + 7))) );
HXDLIN( 473)				int x66 = ( (int)(_hx_array_unsafe_get(this->block,(bp6 + 5))) );
HXDLIN( 473)				int x76 = ( (int)(_hx_array_unsafe_get(this->block,(bp6 + 3))) );
HXDLIN( 473)				if ((((((((x16 | x26) | x36) | x46) | x56) | x66) | x76) == 0)) {
HXLINE( 473)					::Array< int > this1 = this->block;
HXDLIN( 473)					::Array< int > this2 = this->block;
HXDLIN( 473)					::Array< int > this3 = this->block;
HXDLIN( 473)					::Array< int > this4 = this->block;
HXDLIN( 473)					::Array< int > this5 = this->block;
HXDLIN( 473)					::Array< int > this6 = this->block;
HXDLIN( 473)					::Array< int > this7 = this->block;
HXDLIN( 473)					::Array< int > this8 = this->block;
HXDLIN( 473)					int val = (( (int)(_hx_array_unsafe_get(this->block,bp6)) ) << 3);
HXDLIN( 473)					int val1 = ( (int)(this8->__unsafe_set((bp6 + 7),val)) );
HXDLIN( 473)					int val2 = ( (int)(this7->__unsafe_set((bp6 + 6),val1)) );
HXDLIN( 473)					int val3 = ( (int)(this6->__unsafe_set((bp6 + 5),val2)) );
HXDLIN( 473)					int val4 = ( (int)(this5->__unsafe_set((bp6 + 4),val3)) );
HXDLIN( 473)					int val5 = ( (int)(this4->__unsafe_set((bp6 + 3),val4)) );
HXDLIN( 473)					int val6 = ( (int)(this3->__unsafe_set((bp6 + 2),val5)) );
HXDLIN( 473)					int val7 = ( (int)(this2->__unsafe_set((bp6 + 1),val6)) );
HXDLIN( 473)					this1->__unsafe_set(bp6,val7);
            				}
            				else {
HXLINE( 473)					x06 = ((( (int)(_hx_array_unsafe_get(this->block,bp6)) ) << 11) + 128);
HXDLIN( 473)					x86 = (565 * (x46 + x56));
HXDLIN( 473)					x46 = (x86 + (2276 * x46));
HXDLIN( 473)					x56 = (x86 - (3406 * x56));
HXDLIN( 473)					x86 = (2408 * (x66 + x76));
HXDLIN( 473)					x66 = (x86 - (799 * x66));
HXDLIN( 473)					x76 = (x86 - (4017 * x76));
HXDLIN( 473)					x86 = (x06 + x16);
HXDLIN( 473)					x06 = (x06 - x16);
HXDLIN( 473)					x16 = (1108 * (x36 + x26));
HXDLIN( 473)					x26 = (x16 - (3784 * x26));
HXDLIN( 473)					x36 = (x16 + (1568 * x36));
HXDLIN( 473)					x16 = (x46 + x66);
HXDLIN( 473)					x46 = (x46 - x66);
HXDLIN( 473)					x66 = (x56 + x76);
HXDLIN( 473)					x56 = (x56 - x76);
HXDLIN( 473)					x76 = (x86 + x36);
HXDLIN( 473)					x86 = (x86 - x36);
HXDLIN( 473)					x36 = (x06 + x26);
HXDLIN( 473)					x06 = (x06 - x26);
HXDLIN( 473)					x26 = (((181 * (x46 + x56)) + 128) >> 8);
HXDLIN( 473)					x46 = (((181 * (x46 - x56)) + 128) >> 8);
HXDLIN( 473)					this->block->__unsafe_set(bp6,((x76 + x16) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp6 + 1),((x36 + x26) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp6 + 2),((x06 + x46) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp6 + 3),((x86 + x66) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp6 + 4),((x86 - x66) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp6 + 5),((x06 - x46) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp6 + 6),((x36 - x26) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp6 + 7),((x76 - x16) >> 8));
            				}
            			}
HXDLIN( 473)			{
HXLINE( 473)				int bp7 = 56;
HXDLIN( 473)				int x07;
HXDLIN( 473)				int x87;
HXDLIN( 473)				int x17 = (( (int)(_hx_array_unsafe_get(this->block,(bp7 + 4))) ) << 11);
HXDLIN( 473)				int x27 = ( (int)(_hx_array_unsafe_get(this->block,(bp7 + 6))) );
HXDLIN( 473)				int x37 = ( (int)(_hx_array_unsafe_get(this->block,(bp7 + 2))) );
HXDLIN( 473)				int x47 = ( (int)(_hx_array_unsafe_get(this->block,(bp7 + 1))) );
HXDLIN( 473)				int x57 = ( (int)(_hx_array_unsafe_get(this->block,(bp7 + 7))) );
HXDLIN( 473)				int x67 = ( (int)(_hx_array_unsafe_get(this->block,(bp7 + 5))) );
HXDLIN( 473)				int x77 = ( (int)(_hx_array_unsafe_get(this->block,(bp7 + 3))) );
HXDLIN( 473)				if ((((((((x17 | x27) | x37) | x47) | x57) | x67) | x77) == 0)) {
HXLINE( 473)					::Array< int > this1 = this->block;
HXDLIN( 473)					::Array< int > this2 = this->block;
HXDLIN( 473)					::Array< int > this3 = this->block;
HXDLIN( 473)					::Array< int > this4 = this->block;
HXDLIN( 473)					::Array< int > this5 = this->block;
HXDLIN( 473)					::Array< int > this6 = this->block;
HXDLIN( 473)					::Array< int > this7 = this->block;
HXDLIN( 473)					::Array< int > this8 = this->block;
HXDLIN( 473)					int val = (( (int)(_hx_array_unsafe_get(this->block,bp7)) ) << 3);
HXDLIN( 473)					int val1 = ( (int)(this8->__unsafe_set((bp7 + 7),val)) );
HXDLIN( 473)					int val2 = ( (int)(this7->__unsafe_set((bp7 + 6),val1)) );
HXDLIN( 473)					int val3 = ( (int)(this6->__unsafe_set((bp7 + 5),val2)) );
HXDLIN( 473)					int val4 = ( (int)(this5->__unsafe_set((bp7 + 4),val3)) );
HXDLIN( 473)					int val5 = ( (int)(this4->__unsafe_set((bp7 + 3),val4)) );
HXDLIN( 473)					int val6 = ( (int)(this3->__unsafe_set((bp7 + 2),val5)) );
HXDLIN( 473)					int val7 = ( (int)(this2->__unsafe_set((bp7 + 1),val6)) );
HXDLIN( 473)					this1->__unsafe_set(bp7,val7);
            				}
            				else {
HXLINE( 473)					x07 = ((( (int)(_hx_array_unsafe_get(this->block,bp7)) ) << 11) + 128);
HXDLIN( 473)					x87 = (565 * (x47 + x57));
HXDLIN( 473)					x47 = (x87 + (2276 * x47));
HXDLIN( 473)					x57 = (x87 - (3406 * x57));
HXDLIN( 473)					x87 = (2408 * (x67 + x77));
HXDLIN( 473)					x67 = (x87 - (799 * x67));
HXDLIN( 473)					x77 = (x87 - (4017 * x77));
HXDLIN( 473)					x87 = (x07 + x17);
HXDLIN( 473)					x07 = (x07 - x17);
HXDLIN( 473)					x17 = (1108 * (x37 + x27));
HXDLIN( 473)					x27 = (x17 - (3784 * x27));
HXDLIN( 473)					x37 = (x17 + (1568 * x37));
HXDLIN( 473)					x17 = (x47 + x67);
HXDLIN( 473)					x47 = (x47 - x67);
HXDLIN( 473)					x67 = (x57 + x77);
HXDLIN( 473)					x57 = (x57 - x77);
HXDLIN( 473)					x77 = (x87 + x37);
HXDLIN( 473)					x87 = (x87 - x37);
HXDLIN( 473)					x37 = (x07 + x27);
HXDLIN( 473)					x07 = (x07 - x27);
HXDLIN( 473)					x27 = (((181 * (x47 + x57)) + 128) >> 8);
HXDLIN( 473)					x47 = (((181 * (x47 - x57)) + 128) >> 8);
HXDLIN( 473)					this->block->__unsafe_set(bp7,((x77 + x17) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp7 + 1),((x37 + x27) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp7 + 2),((x07 + x47) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp7 + 3),((x87 + x67) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp7 + 4),((x87 - x67) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp7 + 5),((x07 - x47) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp7 + 6),((x37 - x27) >> 8));
HXDLIN( 473)					this->block->__unsafe_set((bp7 + 7),((x77 - x17) >> 8));
            				}
            			}
            		}
HXLINE( 474)		{
HXLINE( 475)			{
HXLINE( 475)				int po1 = po;
HXDLIN( 475)				int stride = c->stride;
HXDLIN( 475)				int x08;
HXDLIN( 475)				int x88;
HXDLIN( 475)				int x18 = (( (int)(_hx_array_unsafe_get(this->block,32)) ) << 8);
HXDLIN( 475)				int x28 = ( (int)(_hx_array_unsafe_get(this->block,48)) );
HXDLIN( 475)				int x38 = ( (int)(_hx_array_unsafe_get(this->block,16)) );
HXDLIN( 475)				int x48 = ( (int)(_hx_array_unsafe_get(this->block,8)) );
HXDLIN( 475)				int x58 = ( (int)(_hx_array_unsafe_get(this->block,56)) );
HXDLIN( 475)				int x68 = ( (int)(_hx_array_unsafe_get(this->block,40)) );
HXDLIN( 475)				int x78 = ( (int)(_hx_array_unsafe_get(this->block,24)) );
HXDLIN( 475)				if ((((((((x18 | x28) | x38) | x48) | x58) | x68) | x78) == 0)) {
HXLINE( 475)					int x = (((_hx_array_unsafe_get(this->block,0) + 32) >> 6) + 128);
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						x18 = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							x18 = 255;
            						}
            						else {
HXLINE( 475)							x18 = x;
            						}
            					}
HXDLIN( 475)					{
HXLINE( 475)						{
HXLINE( 475)							out->b[po1] = ( (unsigned char)(x18) );
HXDLIN( 475)							po1 = (po1 + stride);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po1] = ( (unsigned char)(x18) );
HXDLIN( 475)							po1 = (po1 + stride);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po1] = ( (unsigned char)(x18) );
HXDLIN( 475)							po1 = (po1 + stride);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po1] = ( (unsigned char)(x18) );
HXDLIN( 475)							po1 = (po1 + stride);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po1] = ( (unsigned char)(x18) );
HXDLIN( 475)							po1 = (po1 + stride);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po1] = ( (unsigned char)(x18) );
HXDLIN( 475)							po1 = (po1 + stride);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po1] = ( (unsigned char)(x18) );
HXDLIN( 475)							po1 = (po1 + stride);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po1] = ( (unsigned char)(x18) );
HXDLIN( 475)							po1 = (po1 + stride);
            						}
            					}
            				}
            				else {
HXLINE( 475)					x08 = ((( (int)(_hx_array_unsafe_get(this->block,0)) ) << 8) + 8192);
HXDLIN( 475)					x88 = ((565 * (x48 + x58)) + 4);
HXDLIN( 475)					x48 = ((x88 + (2276 * x48)) >> 3);
HXDLIN( 475)					x58 = ((x88 - (3406 * x58)) >> 3);
HXDLIN( 475)					x88 = ((2408 * (x68 + x78)) + 4);
HXDLIN( 475)					x68 = ((x88 - (799 * x68)) >> 3);
HXDLIN( 475)					x78 = ((x88 - (4017 * x78)) >> 3);
HXDLIN( 475)					x88 = (x08 + x18);
HXDLIN( 475)					x08 = (x08 - x18);
HXDLIN( 475)					x18 = ((1108 * (x38 + x28)) + 4);
HXDLIN( 475)					x28 = ((x18 - (3784 * x28)) >> 3);
HXDLIN( 475)					x38 = ((x18 + (1568 * x38)) >> 3);
HXDLIN( 475)					x18 = (x48 + x68);
HXDLIN( 475)					x48 = (x48 - x68);
HXDLIN( 475)					x68 = (x58 + x78);
HXDLIN( 475)					x58 = (x58 - x78);
HXDLIN( 475)					x78 = (x88 + x38);
HXDLIN( 475)					x88 = (x88 - x38);
HXDLIN( 475)					x38 = (x08 + x28);
HXDLIN( 475)					x08 = (x08 - x28);
HXDLIN( 475)					x28 = (((181 * (x48 + x58)) + 128) >> 8);
HXDLIN( 475)					x48 = (((181 * (x48 - x58)) + 128) >> 8);
HXDLIN( 475)					int x = (((x78 + x18) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp;
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						_hx_tmp = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							_hx_tmp = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp = x;
            						}
            					}
HXDLIN( 475)					out->b[po1] = ( (unsigned char)(_hx_tmp) );
HXDLIN( 475)					po1 = (po1 + stride);
HXDLIN( 475)					int x1 = (((x38 + x28) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp1;
HXDLIN( 475)					if ((x1 < 0)) {
HXLINE( 475)						_hx_tmp1 = 0;
            					}
            					else {
HXLINE( 475)						if ((x1 > 255)) {
HXLINE( 475)							_hx_tmp1 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp1 = x1;
            						}
            					}
HXDLIN( 475)					out->b[po1] = ( (unsigned char)(_hx_tmp1) );
HXDLIN( 475)					po1 = (po1 + stride);
HXDLIN( 475)					int x2 = (((x08 + x48) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp2;
HXDLIN( 475)					if ((x2 < 0)) {
HXLINE( 475)						_hx_tmp2 = 0;
            					}
            					else {
HXLINE( 475)						if ((x2 > 255)) {
HXLINE( 475)							_hx_tmp2 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp2 = x2;
            						}
            					}
HXDLIN( 475)					out->b[po1] = ( (unsigned char)(_hx_tmp2) );
HXDLIN( 475)					po1 = (po1 + stride);
HXDLIN( 475)					int x3 = (((x88 + x68) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp3;
HXDLIN( 475)					if ((x3 < 0)) {
HXLINE( 475)						_hx_tmp3 = 0;
            					}
            					else {
HXLINE( 475)						if ((x3 > 255)) {
HXLINE( 475)							_hx_tmp3 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp3 = x3;
            						}
            					}
HXDLIN( 475)					out->b[po1] = ( (unsigned char)(_hx_tmp3) );
HXDLIN( 475)					po1 = (po1 + stride);
HXDLIN( 475)					int x4 = (((x88 - x68) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp4;
HXDLIN( 475)					if ((x4 < 0)) {
HXLINE( 475)						_hx_tmp4 = 0;
            					}
            					else {
HXLINE( 475)						if ((x4 > 255)) {
HXLINE( 475)							_hx_tmp4 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp4 = x4;
            						}
            					}
HXDLIN( 475)					out->b[po1] = ( (unsigned char)(_hx_tmp4) );
HXDLIN( 475)					po1 = (po1 + stride);
HXDLIN( 475)					int x5 = (((x08 - x48) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp5;
HXDLIN( 475)					if ((x5 < 0)) {
HXLINE( 475)						_hx_tmp5 = 0;
            					}
            					else {
HXLINE( 475)						if ((x5 > 255)) {
HXLINE( 475)							_hx_tmp5 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp5 = x5;
            						}
            					}
HXDLIN( 475)					out->b[po1] = ( (unsigned char)(_hx_tmp5) );
HXDLIN( 475)					po1 = (po1 + stride);
HXDLIN( 475)					int x6 = (((x38 - x28) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp6;
HXDLIN( 475)					if ((x6 < 0)) {
HXLINE( 475)						_hx_tmp6 = 0;
            					}
            					else {
HXLINE( 475)						if ((x6 > 255)) {
HXLINE( 475)							_hx_tmp6 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp6 = x6;
            						}
            					}
HXDLIN( 475)					out->b[po1] = ( (unsigned char)(_hx_tmp6) );
HXDLIN( 475)					po1 = (po1 + stride);
HXDLIN( 475)					int x7 = (((x78 - x18) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp7;
HXDLIN( 475)					if ((x7 < 0)) {
HXLINE( 475)						_hx_tmp7 = 0;
            					}
            					else {
HXLINE( 475)						if ((x7 > 255)) {
HXLINE( 475)							_hx_tmp7 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp7 = x7;
            						}
            					}
HXDLIN( 475)					out->b[po1] = ( (unsigned char)(_hx_tmp7) );
            				}
            			}
HXDLIN( 475)			{
HXLINE( 475)				int po2 = (1 + po);
HXDLIN( 475)				int stride1 = c->stride;
HXDLIN( 475)				int x09;
HXDLIN( 475)				int x89;
HXDLIN( 475)				int x19 = (( (int)(_hx_array_unsafe_get(this->block,33)) ) << 8);
HXDLIN( 475)				int x29 = ( (int)(_hx_array_unsafe_get(this->block,49)) );
HXDLIN( 475)				int x39 = ( (int)(_hx_array_unsafe_get(this->block,17)) );
HXDLIN( 475)				int x49 = ( (int)(_hx_array_unsafe_get(this->block,9)) );
HXDLIN( 475)				int x59 = ( (int)(_hx_array_unsafe_get(this->block,57)) );
HXDLIN( 475)				int x69 = ( (int)(_hx_array_unsafe_get(this->block,41)) );
HXDLIN( 475)				int x79 = ( (int)(_hx_array_unsafe_get(this->block,25)) );
HXDLIN( 475)				if ((((((((x19 | x29) | x39) | x49) | x59) | x69) | x79) == 0)) {
HXLINE( 475)					int x = (((_hx_array_unsafe_get(this->block,1) + 32) >> 6) + 128);
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						x19 = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							x19 = 255;
            						}
            						else {
HXLINE( 475)							x19 = x;
            						}
            					}
HXDLIN( 475)					{
HXLINE( 475)						{
HXLINE( 475)							out->b[po2] = ( (unsigned char)(x19) );
HXDLIN( 475)							po2 = (po2 + stride1);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po2] = ( (unsigned char)(x19) );
HXDLIN( 475)							po2 = (po2 + stride1);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po2] = ( (unsigned char)(x19) );
HXDLIN( 475)							po2 = (po2 + stride1);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po2] = ( (unsigned char)(x19) );
HXDLIN( 475)							po2 = (po2 + stride1);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po2] = ( (unsigned char)(x19) );
HXDLIN( 475)							po2 = (po2 + stride1);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po2] = ( (unsigned char)(x19) );
HXDLIN( 475)							po2 = (po2 + stride1);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po2] = ( (unsigned char)(x19) );
HXDLIN( 475)							po2 = (po2 + stride1);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po2] = ( (unsigned char)(x19) );
HXDLIN( 475)							po2 = (po2 + stride1);
            						}
            					}
            				}
            				else {
HXLINE( 475)					x09 = ((( (int)(_hx_array_unsafe_get(this->block,1)) ) << 8) + 8192);
HXDLIN( 475)					x89 = ((565 * (x49 + x59)) + 4);
HXDLIN( 475)					x49 = ((x89 + (2276 * x49)) >> 3);
HXDLIN( 475)					x59 = ((x89 - (3406 * x59)) >> 3);
HXDLIN( 475)					x89 = ((2408 * (x69 + x79)) + 4);
HXDLIN( 475)					x69 = ((x89 - (799 * x69)) >> 3);
HXDLIN( 475)					x79 = ((x89 - (4017 * x79)) >> 3);
HXDLIN( 475)					x89 = (x09 + x19);
HXDLIN( 475)					x09 = (x09 - x19);
HXDLIN( 475)					x19 = ((1108 * (x39 + x29)) + 4);
HXDLIN( 475)					x29 = ((x19 - (3784 * x29)) >> 3);
HXDLIN( 475)					x39 = ((x19 + (1568 * x39)) >> 3);
HXDLIN( 475)					x19 = (x49 + x69);
HXDLIN( 475)					x49 = (x49 - x69);
HXDLIN( 475)					x69 = (x59 + x79);
HXDLIN( 475)					x59 = (x59 - x79);
HXDLIN( 475)					x79 = (x89 + x39);
HXDLIN( 475)					x89 = (x89 - x39);
HXDLIN( 475)					x39 = (x09 + x29);
HXDLIN( 475)					x09 = (x09 - x29);
HXDLIN( 475)					x29 = (((181 * (x49 + x59)) + 128) >> 8);
HXDLIN( 475)					x49 = (((181 * (x49 - x59)) + 128) >> 8);
HXDLIN( 475)					int x = (((x79 + x19) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp;
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						_hx_tmp = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							_hx_tmp = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp = x;
            						}
            					}
HXDLIN( 475)					out->b[po2] = ( (unsigned char)(_hx_tmp) );
HXDLIN( 475)					po2 = (po2 + stride1);
HXDLIN( 475)					int x1 = (((x39 + x29) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp1;
HXDLIN( 475)					if ((x1 < 0)) {
HXLINE( 475)						_hx_tmp1 = 0;
            					}
            					else {
HXLINE( 475)						if ((x1 > 255)) {
HXLINE( 475)							_hx_tmp1 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp1 = x1;
            						}
            					}
HXDLIN( 475)					out->b[po2] = ( (unsigned char)(_hx_tmp1) );
HXDLIN( 475)					po2 = (po2 + stride1);
HXDLIN( 475)					int x2 = (((x09 + x49) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp2;
HXDLIN( 475)					if ((x2 < 0)) {
HXLINE( 475)						_hx_tmp2 = 0;
            					}
            					else {
HXLINE( 475)						if ((x2 > 255)) {
HXLINE( 475)							_hx_tmp2 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp2 = x2;
            						}
            					}
HXDLIN( 475)					out->b[po2] = ( (unsigned char)(_hx_tmp2) );
HXDLIN( 475)					po2 = (po2 + stride1);
HXDLIN( 475)					int x3 = (((x89 + x69) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp3;
HXDLIN( 475)					if ((x3 < 0)) {
HXLINE( 475)						_hx_tmp3 = 0;
            					}
            					else {
HXLINE( 475)						if ((x3 > 255)) {
HXLINE( 475)							_hx_tmp3 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp3 = x3;
            						}
            					}
HXDLIN( 475)					out->b[po2] = ( (unsigned char)(_hx_tmp3) );
HXDLIN( 475)					po2 = (po2 + stride1);
HXDLIN( 475)					int x4 = (((x89 - x69) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp4;
HXDLIN( 475)					if ((x4 < 0)) {
HXLINE( 475)						_hx_tmp4 = 0;
            					}
            					else {
HXLINE( 475)						if ((x4 > 255)) {
HXLINE( 475)							_hx_tmp4 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp4 = x4;
            						}
            					}
HXDLIN( 475)					out->b[po2] = ( (unsigned char)(_hx_tmp4) );
HXDLIN( 475)					po2 = (po2 + stride1);
HXDLIN( 475)					int x5 = (((x09 - x49) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp5;
HXDLIN( 475)					if ((x5 < 0)) {
HXLINE( 475)						_hx_tmp5 = 0;
            					}
            					else {
HXLINE( 475)						if ((x5 > 255)) {
HXLINE( 475)							_hx_tmp5 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp5 = x5;
            						}
            					}
HXDLIN( 475)					out->b[po2] = ( (unsigned char)(_hx_tmp5) );
HXDLIN( 475)					po2 = (po2 + stride1);
HXDLIN( 475)					int x6 = (((x39 - x29) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp6;
HXDLIN( 475)					if ((x6 < 0)) {
HXLINE( 475)						_hx_tmp6 = 0;
            					}
            					else {
HXLINE( 475)						if ((x6 > 255)) {
HXLINE( 475)							_hx_tmp6 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp6 = x6;
            						}
            					}
HXDLIN( 475)					out->b[po2] = ( (unsigned char)(_hx_tmp6) );
HXDLIN( 475)					po2 = (po2 + stride1);
HXDLIN( 475)					int x7 = (((x79 - x19) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp7;
HXDLIN( 475)					if ((x7 < 0)) {
HXLINE( 475)						_hx_tmp7 = 0;
            					}
            					else {
HXLINE( 475)						if ((x7 > 255)) {
HXLINE( 475)							_hx_tmp7 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp7 = x7;
            						}
            					}
HXDLIN( 475)					out->b[po2] = ( (unsigned char)(_hx_tmp7) );
            				}
            			}
HXDLIN( 475)			{
HXLINE( 475)				int po3 = (2 + po);
HXDLIN( 475)				int stride2 = c->stride;
HXDLIN( 475)				int x010;
HXDLIN( 475)				int x810;
HXDLIN( 475)				int x110 = (( (int)(_hx_array_unsafe_get(this->block,34)) ) << 8);
HXDLIN( 475)				int x210 = ( (int)(_hx_array_unsafe_get(this->block,50)) );
HXDLIN( 475)				int x310 = ( (int)(_hx_array_unsafe_get(this->block,18)) );
HXDLIN( 475)				int x410 = ( (int)(_hx_array_unsafe_get(this->block,10)) );
HXDLIN( 475)				int x510 = ( (int)(_hx_array_unsafe_get(this->block,58)) );
HXDLIN( 475)				int x610 = ( (int)(_hx_array_unsafe_get(this->block,42)) );
HXDLIN( 475)				int x710 = ( (int)(_hx_array_unsafe_get(this->block,26)) );
HXDLIN( 475)				if ((((((((x110 | x210) | x310) | x410) | x510) | x610) | x710) == 0)) {
HXLINE( 475)					int x = (((_hx_array_unsafe_get(this->block,2) + 32) >> 6) + 128);
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						x110 = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							x110 = 255;
            						}
            						else {
HXLINE( 475)							x110 = x;
            						}
            					}
HXDLIN( 475)					{
HXLINE( 475)						{
HXLINE( 475)							out->b[po3] = ( (unsigned char)(x110) );
HXDLIN( 475)							po3 = (po3 + stride2);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po3] = ( (unsigned char)(x110) );
HXDLIN( 475)							po3 = (po3 + stride2);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po3] = ( (unsigned char)(x110) );
HXDLIN( 475)							po3 = (po3 + stride2);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po3] = ( (unsigned char)(x110) );
HXDLIN( 475)							po3 = (po3 + stride2);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po3] = ( (unsigned char)(x110) );
HXDLIN( 475)							po3 = (po3 + stride2);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po3] = ( (unsigned char)(x110) );
HXDLIN( 475)							po3 = (po3 + stride2);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po3] = ( (unsigned char)(x110) );
HXDLIN( 475)							po3 = (po3 + stride2);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po3] = ( (unsigned char)(x110) );
HXDLIN( 475)							po3 = (po3 + stride2);
            						}
            					}
            				}
            				else {
HXLINE( 475)					x010 = ((( (int)(_hx_array_unsafe_get(this->block,2)) ) << 8) + 8192);
HXDLIN( 475)					x810 = ((565 * (x410 + x510)) + 4);
HXDLIN( 475)					x410 = ((x810 + (2276 * x410)) >> 3);
HXDLIN( 475)					x510 = ((x810 - (3406 * x510)) >> 3);
HXDLIN( 475)					x810 = ((2408 * (x610 + x710)) + 4);
HXDLIN( 475)					x610 = ((x810 - (799 * x610)) >> 3);
HXDLIN( 475)					x710 = ((x810 - (4017 * x710)) >> 3);
HXDLIN( 475)					x810 = (x010 + x110);
HXDLIN( 475)					x010 = (x010 - x110);
HXDLIN( 475)					x110 = ((1108 * (x310 + x210)) + 4);
HXDLIN( 475)					x210 = ((x110 - (3784 * x210)) >> 3);
HXDLIN( 475)					x310 = ((x110 + (1568 * x310)) >> 3);
HXDLIN( 475)					x110 = (x410 + x610);
HXDLIN( 475)					x410 = (x410 - x610);
HXDLIN( 475)					x610 = (x510 + x710);
HXDLIN( 475)					x510 = (x510 - x710);
HXDLIN( 475)					x710 = (x810 + x310);
HXDLIN( 475)					x810 = (x810 - x310);
HXDLIN( 475)					x310 = (x010 + x210);
HXDLIN( 475)					x010 = (x010 - x210);
HXDLIN( 475)					x210 = (((181 * (x410 + x510)) + 128) >> 8);
HXDLIN( 475)					x410 = (((181 * (x410 - x510)) + 128) >> 8);
HXDLIN( 475)					int x = (((x710 + x110) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp;
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						_hx_tmp = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							_hx_tmp = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp = x;
            						}
            					}
HXDLIN( 475)					out->b[po3] = ( (unsigned char)(_hx_tmp) );
HXDLIN( 475)					po3 = (po3 + stride2);
HXDLIN( 475)					int x1 = (((x310 + x210) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp1;
HXDLIN( 475)					if ((x1 < 0)) {
HXLINE( 475)						_hx_tmp1 = 0;
            					}
            					else {
HXLINE( 475)						if ((x1 > 255)) {
HXLINE( 475)							_hx_tmp1 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp1 = x1;
            						}
            					}
HXDLIN( 475)					out->b[po3] = ( (unsigned char)(_hx_tmp1) );
HXDLIN( 475)					po3 = (po3 + stride2);
HXDLIN( 475)					int x2 = (((x010 + x410) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp2;
HXDLIN( 475)					if ((x2 < 0)) {
HXLINE( 475)						_hx_tmp2 = 0;
            					}
            					else {
HXLINE( 475)						if ((x2 > 255)) {
HXLINE( 475)							_hx_tmp2 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp2 = x2;
            						}
            					}
HXDLIN( 475)					out->b[po3] = ( (unsigned char)(_hx_tmp2) );
HXDLIN( 475)					po3 = (po3 + stride2);
HXDLIN( 475)					int x3 = (((x810 + x610) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp3;
HXDLIN( 475)					if ((x3 < 0)) {
HXLINE( 475)						_hx_tmp3 = 0;
            					}
            					else {
HXLINE( 475)						if ((x3 > 255)) {
HXLINE( 475)							_hx_tmp3 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp3 = x3;
            						}
            					}
HXDLIN( 475)					out->b[po3] = ( (unsigned char)(_hx_tmp3) );
HXDLIN( 475)					po3 = (po3 + stride2);
HXDLIN( 475)					int x4 = (((x810 - x610) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp4;
HXDLIN( 475)					if ((x4 < 0)) {
HXLINE( 475)						_hx_tmp4 = 0;
            					}
            					else {
HXLINE( 475)						if ((x4 > 255)) {
HXLINE( 475)							_hx_tmp4 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp4 = x4;
            						}
            					}
HXDLIN( 475)					out->b[po3] = ( (unsigned char)(_hx_tmp4) );
HXDLIN( 475)					po3 = (po3 + stride2);
HXDLIN( 475)					int x5 = (((x010 - x410) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp5;
HXDLIN( 475)					if ((x5 < 0)) {
HXLINE( 475)						_hx_tmp5 = 0;
            					}
            					else {
HXLINE( 475)						if ((x5 > 255)) {
HXLINE( 475)							_hx_tmp5 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp5 = x5;
            						}
            					}
HXDLIN( 475)					out->b[po3] = ( (unsigned char)(_hx_tmp5) );
HXDLIN( 475)					po3 = (po3 + stride2);
HXDLIN( 475)					int x6 = (((x310 - x210) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp6;
HXDLIN( 475)					if ((x6 < 0)) {
HXLINE( 475)						_hx_tmp6 = 0;
            					}
            					else {
HXLINE( 475)						if ((x6 > 255)) {
HXLINE( 475)							_hx_tmp6 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp6 = x6;
            						}
            					}
HXDLIN( 475)					out->b[po3] = ( (unsigned char)(_hx_tmp6) );
HXDLIN( 475)					po3 = (po3 + stride2);
HXDLIN( 475)					int x7 = (((x710 - x110) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp7;
HXDLIN( 475)					if ((x7 < 0)) {
HXLINE( 475)						_hx_tmp7 = 0;
            					}
            					else {
HXLINE( 475)						if ((x7 > 255)) {
HXLINE( 475)							_hx_tmp7 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp7 = x7;
            						}
            					}
HXDLIN( 475)					out->b[po3] = ( (unsigned char)(_hx_tmp7) );
            				}
            			}
HXDLIN( 475)			{
HXLINE( 475)				int po4 = (3 + po);
HXDLIN( 475)				int stride3 = c->stride;
HXDLIN( 475)				int x011;
HXDLIN( 475)				int x811;
HXDLIN( 475)				int x111 = (( (int)(_hx_array_unsafe_get(this->block,35)) ) << 8);
HXDLIN( 475)				int x211 = ( (int)(_hx_array_unsafe_get(this->block,51)) );
HXDLIN( 475)				int x311 = ( (int)(_hx_array_unsafe_get(this->block,19)) );
HXDLIN( 475)				int x411 = ( (int)(_hx_array_unsafe_get(this->block,11)) );
HXDLIN( 475)				int x511 = ( (int)(_hx_array_unsafe_get(this->block,59)) );
HXDLIN( 475)				int x611 = ( (int)(_hx_array_unsafe_get(this->block,43)) );
HXDLIN( 475)				int x711 = ( (int)(_hx_array_unsafe_get(this->block,27)) );
HXDLIN( 475)				if ((((((((x111 | x211) | x311) | x411) | x511) | x611) | x711) == 0)) {
HXLINE( 475)					int x = (((_hx_array_unsafe_get(this->block,3) + 32) >> 6) + 128);
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						x111 = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							x111 = 255;
            						}
            						else {
HXLINE( 475)							x111 = x;
            						}
            					}
HXDLIN( 475)					{
HXLINE( 475)						{
HXLINE( 475)							out->b[po4] = ( (unsigned char)(x111) );
HXDLIN( 475)							po4 = (po4 + stride3);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po4] = ( (unsigned char)(x111) );
HXDLIN( 475)							po4 = (po4 + stride3);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po4] = ( (unsigned char)(x111) );
HXDLIN( 475)							po4 = (po4 + stride3);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po4] = ( (unsigned char)(x111) );
HXDLIN( 475)							po4 = (po4 + stride3);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po4] = ( (unsigned char)(x111) );
HXDLIN( 475)							po4 = (po4 + stride3);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po4] = ( (unsigned char)(x111) );
HXDLIN( 475)							po4 = (po4 + stride3);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po4] = ( (unsigned char)(x111) );
HXDLIN( 475)							po4 = (po4 + stride3);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po4] = ( (unsigned char)(x111) );
HXDLIN( 475)							po4 = (po4 + stride3);
            						}
            					}
            				}
            				else {
HXLINE( 475)					x011 = ((( (int)(_hx_array_unsafe_get(this->block,3)) ) << 8) + 8192);
HXDLIN( 475)					x811 = ((565 * (x411 + x511)) + 4);
HXDLIN( 475)					x411 = ((x811 + (2276 * x411)) >> 3);
HXDLIN( 475)					x511 = ((x811 - (3406 * x511)) >> 3);
HXDLIN( 475)					x811 = ((2408 * (x611 + x711)) + 4);
HXDLIN( 475)					x611 = ((x811 - (799 * x611)) >> 3);
HXDLIN( 475)					x711 = ((x811 - (4017 * x711)) >> 3);
HXDLIN( 475)					x811 = (x011 + x111);
HXDLIN( 475)					x011 = (x011 - x111);
HXDLIN( 475)					x111 = ((1108 * (x311 + x211)) + 4);
HXDLIN( 475)					x211 = ((x111 - (3784 * x211)) >> 3);
HXDLIN( 475)					x311 = ((x111 + (1568 * x311)) >> 3);
HXDLIN( 475)					x111 = (x411 + x611);
HXDLIN( 475)					x411 = (x411 - x611);
HXDLIN( 475)					x611 = (x511 + x711);
HXDLIN( 475)					x511 = (x511 - x711);
HXDLIN( 475)					x711 = (x811 + x311);
HXDLIN( 475)					x811 = (x811 - x311);
HXDLIN( 475)					x311 = (x011 + x211);
HXDLIN( 475)					x011 = (x011 - x211);
HXDLIN( 475)					x211 = (((181 * (x411 + x511)) + 128) >> 8);
HXDLIN( 475)					x411 = (((181 * (x411 - x511)) + 128) >> 8);
HXDLIN( 475)					int x = (((x711 + x111) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp;
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						_hx_tmp = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							_hx_tmp = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp = x;
            						}
            					}
HXDLIN( 475)					out->b[po4] = ( (unsigned char)(_hx_tmp) );
HXDLIN( 475)					po4 = (po4 + stride3);
HXDLIN( 475)					int x1 = (((x311 + x211) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp1;
HXDLIN( 475)					if ((x1 < 0)) {
HXLINE( 475)						_hx_tmp1 = 0;
            					}
            					else {
HXLINE( 475)						if ((x1 > 255)) {
HXLINE( 475)							_hx_tmp1 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp1 = x1;
            						}
            					}
HXDLIN( 475)					out->b[po4] = ( (unsigned char)(_hx_tmp1) );
HXDLIN( 475)					po4 = (po4 + stride3);
HXDLIN( 475)					int x2 = (((x011 + x411) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp2;
HXDLIN( 475)					if ((x2 < 0)) {
HXLINE( 475)						_hx_tmp2 = 0;
            					}
            					else {
HXLINE( 475)						if ((x2 > 255)) {
HXLINE( 475)							_hx_tmp2 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp2 = x2;
            						}
            					}
HXDLIN( 475)					out->b[po4] = ( (unsigned char)(_hx_tmp2) );
HXDLIN( 475)					po4 = (po4 + stride3);
HXDLIN( 475)					int x3 = (((x811 + x611) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp3;
HXDLIN( 475)					if ((x3 < 0)) {
HXLINE( 475)						_hx_tmp3 = 0;
            					}
            					else {
HXLINE( 475)						if ((x3 > 255)) {
HXLINE( 475)							_hx_tmp3 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp3 = x3;
            						}
            					}
HXDLIN( 475)					out->b[po4] = ( (unsigned char)(_hx_tmp3) );
HXDLIN( 475)					po4 = (po4 + stride3);
HXDLIN( 475)					int x4 = (((x811 - x611) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp4;
HXDLIN( 475)					if ((x4 < 0)) {
HXLINE( 475)						_hx_tmp4 = 0;
            					}
            					else {
HXLINE( 475)						if ((x4 > 255)) {
HXLINE( 475)							_hx_tmp4 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp4 = x4;
            						}
            					}
HXDLIN( 475)					out->b[po4] = ( (unsigned char)(_hx_tmp4) );
HXDLIN( 475)					po4 = (po4 + stride3);
HXDLIN( 475)					int x5 = (((x011 - x411) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp5;
HXDLIN( 475)					if ((x5 < 0)) {
HXLINE( 475)						_hx_tmp5 = 0;
            					}
            					else {
HXLINE( 475)						if ((x5 > 255)) {
HXLINE( 475)							_hx_tmp5 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp5 = x5;
            						}
            					}
HXDLIN( 475)					out->b[po4] = ( (unsigned char)(_hx_tmp5) );
HXDLIN( 475)					po4 = (po4 + stride3);
HXDLIN( 475)					int x6 = (((x311 - x211) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp6;
HXDLIN( 475)					if ((x6 < 0)) {
HXLINE( 475)						_hx_tmp6 = 0;
            					}
            					else {
HXLINE( 475)						if ((x6 > 255)) {
HXLINE( 475)							_hx_tmp6 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp6 = x6;
            						}
            					}
HXDLIN( 475)					out->b[po4] = ( (unsigned char)(_hx_tmp6) );
HXDLIN( 475)					po4 = (po4 + stride3);
HXDLIN( 475)					int x7 = (((x711 - x111) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp7;
HXDLIN( 475)					if ((x7 < 0)) {
HXLINE( 475)						_hx_tmp7 = 0;
            					}
            					else {
HXLINE( 475)						if ((x7 > 255)) {
HXLINE( 475)							_hx_tmp7 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp7 = x7;
            						}
            					}
HXDLIN( 475)					out->b[po4] = ( (unsigned char)(_hx_tmp7) );
            				}
            			}
HXDLIN( 475)			{
HXLINE( 475)				int po5 = (4 + po);
HXDLIN( 475)				int stride4 = c->stride;
HXDLIN( 475)				int x012;
HXDLIN( 475)				int x812;
HXDLIN( 475)				int x112 = (( (int)(_hx_array_unsafe_get(this->block,36)) ) << 8);
HXDLIN( 475)				int x212 = ( (int)(_hx_array_unsafe_get(this->block,52)) );
HXDLIN( 475)				int x312 = ( (int)(_hx_array_unsafe_get(this->block,20)) );
HXDLIN( 475)				int x412 = ( (int)(_hx_array_unsafe_get(this->block,12)) );
HXDLIN( 475)				int x512 = ( (int)(_hx_array_unsafe_get(this->block,60)) );
HXDLIN( 475)				int x612 = ( (int)(_hx_array_unsafe_get(this->block,44)) );
HXDLIN( 475)				int x712 = ( (int)(_hx_array_unsafe_get(this->block,28)) );
HXDLIN( 475)				if ((((((((x112 | x212) | x312) | x412) | x512) | x612) | x712) == 0)) {
HXLINE( 475)					int x = (((_hx_array_unsafe_get(this->block,4) + 32) >> 6) + 128);
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						x112 = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							x112 = 255;
            						}
            						else {
HXLINE( 475)							x112 = x;
            						}
            					}
HXDLIN( 475)					{
HXLINE( 475)						{
HXLINE( 475)							out->b[po5] = ( (unsigned char)(x112) );
HXDLIN( 475)							po5 = (po5 + stride4);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po5] = ( (unsigned char)(x112) );
HXDLIN( 475)							po5 = (po5 + stride4);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po5] = ( (unsigned char)(x112) );
HXDLIN( 475)							po5 = (po5 + stride4);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po5] = ( (unsigned char)(x112) );
HXDLIN( 475)							po5 = (po5 + stride4);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po5] = ( (unsigned char)(x112) );
HXDLIN( 475)							po5 = (po5 + stride4);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po5] = ( (unsigned char)(x112) );
HXDLIN( 475)							po5 = (po5 + stride4);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po5] = ( (unsigned char)(x112) );
HXDLIN( 475)							po5 = (po5 + stride4);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po5] = ( (unsigned char)(x112) );
HXDLIN( 475)							po5 = (po5 + stride4);
            						}
            					}
            				}
            				else {
HXLINE( 475)					x012 = ((( (int)(_hx_array_unsafe_get(this->block,4)) ) << 8) + 8192);
HXDLIN( 475)					x812 = ((565 * (x412 + x512)) + 4);
HXDLIN( 475)					x412 = ((x812 + (2276 * x412)) >> 3);
HXDLIN( 475)					x512 = ((x812 - (3406 * x512)) >> 3);
HXDLIN( 475)					x812 = ((2408 * (x612 + x712)) + 4);
HXDLIN( 475)					x612 = ((x812 - (799 * x612)) >> 3);
HXDLIN( 475)					x712 = ((x812 - (4017 * x712)) >> 3);
HXDLIN( 475)					x812 = (x012 + x112);
HXDLIN( 475)					x012 = (x012 - x112);
HXDLIN( 475)					x112 = ((1108 * (x312 + x212)) + 4);
HXDLIN( 475)					x212 = ((x112 - (3784 * x212)) >> 3);
HXDLIN( 475)					x312 = ((x112 + (1568 * x312)) >> 3);
HXDLIN( 475)					x112 = (x412 + x612);
HXDLIN( 475)					x412 = (x412 - x612);
HXDLIN( 475)					x612 = (x512 + x712);
HXDLIN( 475)					x512 = (x512 - x712);
HXDLIN( 475)					x712 = (x812 + x312);
HXDLIN( 475)					x812 = (x812 - x312);
HXDLIN( 475)					x312 = (x012 + x212);
HXDLIN( 475)					x012 = (x012 - x212);
HXDLIN( 475)					x212 = (((181 * (x412 + x512)) + 128) >> 8);
HXDLIN( 475)					x412 = (((181 * (x412 - x512)) + 128) >> 8);
HXDLIN( 475)					int x = (((x712 + x112) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp;
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						_hx_tmp = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							_hx_tmp = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp = x;
            						}
            					}
HXDLIN( 475)					out->b[po5] = ( (unsigned char)(_hx_tmp) );
HXDLIN( 475)					po5 = (po5 + stride4);
HXDLIN( 475)					int x1 = (((x312 + x212) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp1;
HXDLIN( 475)					if ((x1 < 0)) {
HXLINE( 475)						_hx_tmp1 = 0;
            					}
            					else {
HXLINE( 475)						if ((x1 > 255)) {
HXLINE( 475)							_hx_tmp1 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp1 = x1;
            						}
            					}
HXDLIN( 475)					out->b[po5] = ( (unsigned char)(_hx_tmp1) );
HXDLIN( 475)					po5 = (po5 + stride4);
HXDLIN( 475)					int x2 = (((x012 + x412) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp2;
HXDLIN( 475)					if ((x2 < 0)) {
HXLINE( 475)						_hx_tmp2 = 0;
            					}
            					else {
HXLINE( 475)						if ((x2 > 255)) {
HXLINE( 475)							_hx_tmp2 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp2 = x2;
            						}
            					}
HXDLIN( 475)					out->b[po5] = ( (unsigned char)(_hx_tmp2) );
HXDLIN( 475)					po5 = (po5 + stride4);
HXDLIN( 475)					int x3 = (((x812 + x612) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp3;
HXDLIN( 475)					if ((x3 < 0)) {
HXLINE( 475)						_hx_tmp3 = 0;
            					}
            					else {
HXLINE( 475)						if ((x3 > 255)) {
HXLINE( 475)							_hx_tmp3 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp3 = x3;
            						}
            					}
HXDLIN( 475)					out->b[po5] = ( (unsigned char)(_hx_tmp3) );
HXDLIN( 475)					po5 = (po5 + stride4);
HXDLIN( 475)					int x4 = (((x812 - x612) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp4;
HXDLIN( 475)					if ((x4 < 0)) {
HXLINE( 475)						_hx_tmp4 = 0;
            					}
            					else {
HXLINE( 475)						if ((x4 > 255)) {
HXLINE( 475)							_hx_tmp4 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp4 = x4;
            						}
            					}
HXDLIN( 475)					out->b[po5] = ( (unsigned char)(_hx_tmp4) );
HXDLIN( 475)					po5 = (po5 + stride4);
HXDLIN( 475)					int x5 = (((x012 - x412) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp5;
HXDLIN( 475)					if ((x5 < 0)) {
HXLINE( 475)						_hx_tmp5 = 0;
            					}
            					else {
HXLINE( 475)						if ((x5 > 255)) {
HXLINE( 475)							_hx_tmp5 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp5 = x5;
            						}
            					}
HXDLIN( 475)					out->b[po5] = ( (unsigned char)(_hx_tmp5) );
HXDLIN( 475)					po5 = (po5 + stride4);
HXDLIN( 475)					int x6 = (((x312 - x212) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp6;
HXDLIN( 475)					if ((x6 < 0)) {
HXLINE( 475)						_hx_tmp6 = 0;
            					}
            					else {
HXLINE( 475)						if ((x6 > 255)) {
HXLINE( 475)							_hx_tmp6 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp6 = x6;
            						}
            					}
HXDLIN( 475)					out->b[po5] = ( (unsigned char)(_hx_tmp6) );
HXDLIN( 475)					po5 = (po5 + stride4);
HXDLIN( 475)					int x7 = (((x712 - x112) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp7;
HXDLIN( 475)					if ((x7 < 0)) {
HXLINE( 475)						_hx_tmp7 = 0;
            					}
            					else {
HXLINE( 475)						if ((x7 > 255)) {
HXLINE( 475)							_hx_tmp7 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp7 = x7;
            						}
            					}
HXDLIN( 475)					out->b[po5] = ( (unsigned char)(_hx_tmp7) );
            				}
            			}
HXDLIN( 475)			{
HXLINE( 475)				int po6 = (5 + po);
HXDLIN( 475)				int stride5 = c->stride;
HXDLIN( 475)				int x013;
HXDLIN( 475)				int x813;
HXDLIN( 475)				int x113 = (( (int)(_hx_array_unsafe_get(this->block,37)) ) << 8);
HXDLIN( 475)				int x213 = ( (int)(_hx_array_unsafe_get(this->block,53)) );
HXDLIN( 475)				int x313 = ( (int)(_hx_array_unsafe_get(this->block,21)) );
HXDLIN( 475)				int x413 = ( (int)(_hx_array_unsafe_get(this->block,13)) );
HXDLIN( 475)				int x513 = ( (int)(_hx_array_unsafe_get(this->block,61)) );
HXDLIN( 475)				int x613 = ( (int)(_hx_array_unsafe_get(this->block,45)) );
HXDLIN( 475)				int x713 = ( (int)(_hx_array_unsafe_get(this->block,29)) );
HXDLIN( 475)				if ((((((((x113 | x213) | x313) | x413) | x513) | x613) | x713) == 0)) {
HXLINE( 475)					int x = (((_hx_array_unsafe_get(this->block,5) + 32) >> 6) + 128);
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						x113 = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							x113 = 255;
            						}
            						else {
HXLINE( 475)							x113 = x;
            						}
            					}
HXDLIN( 475)					{
HXLINE( 475)						{
HXLINE( 475)							out->b[po6] = ( (unsigned char)(x113) );
HXDLIN( 475)							po6 = (po6 + stride5);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po6] = ( (unsigned char)(x113) );
HXDLIN( 475)							po6 = (po6 + stride5);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po6] = ( (unsigned char)(x113) );
HXDLIN( 475)							po6 = (po6 + stride5);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po6] = ( (unsigned char)(x113) );
HXDLIN( 475)							po6 = (po6 + stride5);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po6] = ( (unsigned char)(x113) );
HXDLIN( 475)							po6 = (po6 + stride5);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po6] = ( (unsigned char)(x113) );
HXDLIN( 475)							po6 = (po6 + stride5);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po6] = ( (unsigned char)(x113) );
HXDLIN( 475)							po6 = (po6 + stride5);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po6] = ( (unsigned char)(x113) );
HXDLIN( 475)							po6 = (po6 + stride5);
            						}
            					}
            				}
            				else {
HXLINE( 475)					x013 = ((( (int)(_hx_array_unsafe_get(this->block,5)) ) << 8) + 8192);
HXDLIN( 475)					x813 = ((565 * (x413 + x513)) + 4);
HXDLIN( 475)					x413 = ((x813 + (2276 * x413)) >> 3);
HXDLIN( 475)					x513 = ((x813 - (3406 * x513)) >> 3);
HXDLIN( 475)					x813 = ((2408 * (x613 + x713)) + 4);
HXDLIN( 475)					x613 = ((x813 - (799 * x613)) >> 3);
HXDLIN( 475)					x713 = ((x813 - (4017 * x713)) >> 3);
HXDLIN( 475)					x813 = (x013 + x113);
HXDLIN( 475)					x013 = (x013 - x113);
HXDLIN( 475)					x113 = ((1108 * (x313 + x213)) + 4);
HXDLIN( 475)					x213 = ((x113 - (3784 * x213)) >> 3);
HXDLIN( 475)					x313 = ((x113 + (1568 * x313)) >> 3);
HXDLIN( 475)					x113 = (x413 + x613);
HXDLIN( 475)					x413 = (x413 - x613);
HXDLIN( 475)					x613 = (x513 + x713);
HXDLIN( 475)					x513 = (x513 - x713);
HXDLIN( 475)					x713 = (x813 + x313);
HXDLIN( 475)					x813 = (x813 - x313);
HXDLIN( 475)					x313 = (x013 + x213);
HXDLIN( 475)					x013 = (x013 - x213);
HXDLIN( 475)					x213 = (((181 * (x413 + x513)) + 128) >> 8);
HXDLIN( 475)					x413 = (((181 * (x413 - x513)) + 128) >> 8);
HXDLIN( 475)					int x = (((x713 + x113) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp;
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						_hx_tmp = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							_hx_tmp = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp = x;
            						}
            					}
HXDLIN( 475)					out->b[po6] = ( (unsigned char)(_hx_tmp) );
HXDLIN( 475)					po6 = (po6 + stride5);
HXDLIN( 475)					int x1 = (((x313 + x213) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp1;
HXDLIN( 475)					if ((x1 < 0)) {
HXLINE( 475)						_hx_tmp1 = 0;
            					}
            					else {
HXLINE( 475)						if ((x1 > 255)) {
HXLINE( 475)							_hx_tmp1 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp1 = x1;
            						}
            					}
HXDLIN( 475)					out->b[po6] = ( (unsigned char)(_hx_tmp1) );
HXDLIN( 475)					po6 = (po6 + stride5);
HXDLIN( 475)					int x2 = (((x013 + x413) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp2;
HXDLIN( 475)					if ((x2 < 0)) {
HXLINE( 475)						_hx_tmp2 = 0;
            					}
            					else {
HXLINE( 475)						if ((x2 > 255)) {
HXLINE( 475)							_hx_tmp2 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp2 = x2;
            						}
            					}
HXDLIN( 475)					out->b[po6] = ( (unsigned char)(_hx_tmp2) );
HXDLIN( 475)					po6 = (po6 + stride5);
HXDLIN( 475)					int x3 = (((x813 + x613) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp3;
HXDLIN( 475)					if ((x3 < 0)) {
HXLINE( 475)						_hx_tmp3 = 0;
            					}
            					else {
HXLINE( 475)						if ((x3 > 255)) {
HXLINE( 475)							_hx_tmp3 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp3 = x3;
            						}
            					}
HXDLIN( 475)					out->b[po6] = ( (unsigned char)(_hx_tmp3) );
HXDLIN( 475)					po6 = (po6 + stride5);
HXDLIN( 475)					int x4 = (((x813 - x613) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp4;
HXDLIN( 475)					if ((x4 < 0)) {
HXLINE( 475)						_hx_tmp4 = 0;
            					}
            					else {
HXLINE( 475)						if ((x4 > 255)) {
HXLINE( 475)							_hx_tmp4 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp4 = x4;
            						}
            					}
HXDLIN( 475)					out->b[po6] = ( (unsigned char)(_hx_tmp4) );
HXDLIN( 475)					po6 = (po6 + stride5);
HXDLIN( 475)					int x5 = (((x013 - x413) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp5;
HXDLIN( 475)					if ((x5 < 0)) {
HXLINE( 475)						_hx_tmp5 = 0;
            					}
            					else {
HXLINE( 475)						if ((x5 > 255)) {
HXLINE( 475)							_hx_tmp5 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp5 = x5;
            						}
            					}
HXDLIN( 475)					out->b[po6] = ( (unsigned char)(_hx_tmp5) );
HXDLIN( 475)					po6 = (po6 + stride5);
HXDLIN( 475)					int x6 = (((x313 - x213) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp6;
HXDLIN( 475)					if ((x6 < 0)) {
HXLINE( 475)						_hx_tmp6 = 0;
            					}
            					else {
HXLINE( 475)						if ((x6 > 255)) {
HXLINE( 475)							_hx_tmp6 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp6 = x6;
            						}
            					}
HXDLIN( 475)					out->b[po6] = ( (unsigned char)(_hx_tmp6) );
HXDLIN( 475)					po6 = (po6 + stride5);
HXDLIN( 475)					int x7 = (((x713 - x113) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp7;
HXDLIN( 475)					if ((x7 < 0)) {
HXLINE( 475)						_hx_tmp7 = 0;
            					}
            					else {
HXLINE( 475)						if ((x7 > 255)) {
HXLINE( 475)							_hx_tmp7 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp7 = x7;
            						}
            					}
HXDLIN( 475)					out->b[po6] = ( (unsigned char)(_hx_tmp7) );
            				}
            			}
HXDLIN( 475)			{
HXLINE( 475)				int po7 = (6 + po);
HXDLIN( 475)				int stride6 = c->stride;
HXDLIN( 475)				int x014;
HXDLIN( 475)				int x814;
HXDLIN( 475)				int x114 = (( (int)(_hx_array_unsafe_get(this->block,38)) ) << 8);
HXDLIN( 475)				int x214 = ( (int)(_hx_array_unsafe_get(this->block,54)) );
HXDLIN( 475)				int x314 = ( (int)(_hx_array_unsafe_get(this->block,22)) );
HXDLIN( 475)				int x414 = ( (int)(_hx_array_unsafe_get(this->block,14)) );
HXDLIN( 475)				int x514 = ( (int)(_hx_array_unsafe_get(this->block,62)) );
HXDLIN( 475)				int x614 = ( (int)(_hx_array_unsafe_get(this->block,46)) );
HXDLIN( 475)				int x714 = ( (int)(_hx_array_unsafe_get(this->block,30)) );
HXDLIN( 475)				if ((((((((x114 | x214) | x314) | x414) | x514) | x614) | x714) == 0)) {
HXLINE( 475)					int x = (((_hx_array_unsafe_get(this->block,6) + 32) >> 6) + 128);
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						x114 = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							x114 = 255;
            						}
            						else {
HXLINE( 475)							x114 = x;
            						}
            					}
HXDLIN( 475)					{
HXLINE( 475)						{
HXLINE( 475)							out->b[po7] = ( (unsigned char)(x114) );
HXDLIN( 475)							po7 = (po7 + stride6);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po7] = ( (unsigned char)(x114) );
HXDLIN( 475)							po7 = (po7 + stride6);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po7] = ( (unsigned char)(x114) );
HXDLIN( 475)							po7 = (po7 + stride6);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po7] = ( (unsigned char)(x114) );
HXDLIN( 475)							po7 = (po7 + stride6);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po7] = ( (unsigned char)(x114) );
HXDLIN( 475)							po7 = (po7 + stride6);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po7] = ( (unsigned char)(x114) );
HXDLIN( 475)							po7 = (po7 + stride6);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po7] = ( (unsigned char)(x114) );
HXDLIN( 475)							po7 = (po7 + stride6);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po7] = ( (unsigned char)(x114) );
HXDLIN( 475)							po7 = (po7 + stride6);
            						}
            					}
            				}
            				else {
HXLINE( 475)					x014 = ((( (int)(_hx_array_unsafe_get(this->block,6)) ) << 8) + 8192);
HXDLIN( 475)					x814 = ((565 * (x414 + x514)) + 4);
HXDLIN( 475)					x414 = ((x814 + (2276 * x414)) >> 3);
HXDLIN( 475)					x514 = ((x814 - (3406 * x514)) >> 3);
HXDLIN( 475)					x814 = ((2408 * (x614 + x714)) + 4);
HXDLIN( 475)					x614 = ((x814 - (799 * x614)) >> 3);
HXDLIN( 475)					x714 = ((x814 - (4017 * x714)) >> 3);
HXDLIN( 475)					x814 = (x014 + x114);
HXDLIN( 475)					x014 = (x014 - x114);
HXDLIN( 475)					x114 = ((1108 * (x314 + x214)) + 4);
HXDLIN( 475)					x214 = ((x114 - (3784 * x214)) >> 3);
HXDLIN( 475)					x314 = ((x114 + (1568 * x314)) >> 3);
HXDLIN( 475)					x114 = (x414 + x614);
HXDLIN( 475)					x414 = (x414 - x614);
HXDLIN( 475)					x614 = (x514 + x714);
HXDLIN( 475)					x514 = (x514 - x714);
HXDLIN( 475)					x714 = (x814 + x314);
HXDLIN( 475)					x814 = (x814 - x314);
HXDLIN( 475)					x314 = (x014 + x214);
HXDLIN( 475)					x014 = (x014 - x214);
HXDLIN( 475)					x214 = (((181 * (x414 + x514)) + 128) >> 8);
HXDLIN( 475)					x414 = (((181 * (x414 - x514)) + 128) >> 8);
HXDLIN( 475)					int x = (((x714 + x114) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp;
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						_hx_tmp = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							_hx_tmp = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp = x;
            						}
            					}
HXDLIN( 475)					out->b[po7] = ( (unsigned char)(_hx_tmp) );
HXDLIN( 475)					po7 = (po7 + stride6);
HXDLIN( 475)					int x1 = (((x314 + x214) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp1;
HXDLIN( 475)					if ((x1 < 0)) {
HXLINE( 475)						_hx_tmp1 = 0;
            					}
            					else {
HXLINE( 475)						if ((x1 > 255)) {
HXLINE( 475)							_hx_tmp1 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp1 = x1;
            						}
            					}
HXDLIN( 475)					out->b[po7] = ( (unsigned char)(_hx_tmp1) );
HXDLIN( 475)					po7 = (po7 + stride6);
HXDLIN( 475)					int x2 = (((x014 + x414) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp2;
HXDLIN( 475)					if ((x2 < 0)) {
HXLINE( 475)						_hx_tmp2 = 0;
            					}
            					else {
HXLINE( 475)						if ((x2 > 255)) {
HXLINE( 475)							_hx_tmp2 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp2 = x2;
            						}
            					}
HXDLIN( 475)					out->b[po7] = ( (unsigned char)(_hx_tmp2) );
HXDLIN( 475)					po7 = (po7 + stride6);
HXDLIN( 475)					int x3 = (((x814 + x614) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp3;
HXDLIN( 475)					if ((x3 < 0)) {
HXLINE( 475)						_hx_tmp3 = 0;
            					}
            					else {
HXLINE( 475)						if ((x3 > 255)) {
HXLINE( 475)							_hx_tmp3 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp3 = x3;
            						}
            					}
HXDLIN( 475)					out->b[po7] = ( (unsigned char)(_hx_tmp3) );
HXDLIN( 475)					po7 = (po7 + stride6);
HXDLIN( 475)					int x4 = (((x814 - x614) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp4;
HXDLIN( 475)					if ((x4 < 0)) {
HXLINE( 475)						_hx_tmp4 = 0;
            					}
            					else {
HXLINE( 475)						if ((x4 > 255)) {
HXLINE( 475)							_hx_tmp4 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp4 = x4;
            						}
            					}
HXDLIN( 475)					out->b[po7] = ( (unsigned char)(_hx_tmp4) );
HXDLIN( 475)					po7 = (po7 + stride6);
HXDLIN( 475)					int x5 = (((x014 - x414) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp5;
HXDLIN( 475)					if ((x5 < 0)) {
HXLINE( 475)						_hx_tmp5 = 0;
            					}
            					else {
HXLINE( 475)						if ((x5 > 255)) {
HXLINE( 475)							_hx_tmp5 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp5 = x5;
            						}
            					}
HXDLIN( 475)					out->b[po7] = ( (unsigned char)(_hx_tmp5) );
HXDLIN( 475)					po7 = (po7 + stride6);
HXDLIN( 475)					int x6 = (((x314 - x214) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp6;
HXDLIN( 475)					if ((x6 < 0)) {
HXLINE( 475)						_hx_tmp6 = 0;
            					}
            					else {
HXLINE( 475)						if ((x6 > 255)) {
HXLINE( 475)							_hx_tmp6 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp6 = x6;
            						}
            					}
HXDLIN( 475)					out->b[po7] = ( (unsigned char)(_hx_tmp6) );
HXDLIN( 475)					po7 = (po7 + stride6);
HXDLIN( 475)					int x7 = (((x714 - x114) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp7;
HXDLIN( 475)					if ((x7 < 0)) {
HXLINE( 475)						_hx_tmp7 = 0;
            					}
            					else {
HXLINE( 475)						if ((x7 > 255)) {
HXLINE( 475)							_hx_tmp7 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp7 = x7;
            						}
            					}
HXDLIN( 475)					out->b[po7] = ( (unsigned char)(_hx_tmp7) );
            				}
            			}
HXDLIN( 475)			{
HXLINE( 475)				int po8 = (7 + po);
HXDLIN( 475)				int stride7 = c->stride;
HXDLIN( 475)				int x015;
HXDLIN( 475)				int x815;
HXDLIN( 475)				int x115 = (( (int)(_hx_array_unsafe_get(this->block,39)) ) << 8);
HXDLIN( 475)				int x215 = ( (int)(_hx_array_unsafe_get(this->block,55)) );
HXDLIN( 475)				int x315 = ( (int)(_hx_array_unsafe_get(this->block,23)) );
HXDLIN( 475)				int x415 = ( (int)(_hx_array_unsafe_get(this->block,15)) );
HXDLIN( 475)				int x515 = ( (int)(_hx_array_unsafe_get(this->block,63)) );
HXDLIN( 475)				int x615 = ( (int)(_hx_array_unsafe_get(this->block,47)) );
HXDLIN( 475)				int x715 = ( (int)(_hx_array_unsafe_get(this->block,31)) );
HXDLIN( 475)				if ((((((((x115 | x215) | x315) | x415) | x515) | x615) | x715) == 0)) {
HXLINE( 475)					int x = (((_hx_array_unsafe_get(this->block,7) + 32) >> 6) + 128);
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						x115 = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							x115 = 255;
            						}
            						else {
HXLINE( 475)							x115 = x;
            						}
            					}
HXDLIN( 475)					{
HXLINE( 475)						{
HXLINE( 475)							out->b[po8] = ( (unsigned char)(x115) );
HXDLIN( 475)							po8 = (po8 + stride7);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po8] = ( (unsigned char)(x115) );
HXDLIN( 475)							po8 = (po8 + stride7);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po8] = ( (unsigned char)(x115) );
HXDLIN( 475)							po8 = (po8 + stride7);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po8] = ( (unsigned char)(x115) );
HXDLIN( 475)							po8 = (po8 + stride7);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po8] = ( (unsigned char)(x115) );
HXDLIN( 475)							po8 = (po8 + stride7);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po8] = ( (unsigned char)(x115) );
HXDLIN( 475)							po8 = (po8 + stride7);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po8] = ( (unsigned char)(x115) );
HXDLIN( 475)							po8 = (po8 + stride7);
            						}
HXDLIN( 475)						{
HXLINE( 475)							out->b[po8] = ( (unsigned char)(x115) );
HXDLIN( 475)							po8 = (po8 + stride7);
            						}
            					}
            				}
            				else {
HXLINE( 475)					x015 = ((( (int)(_hx_array_unsafe_get(this->block,7)) ) << 8) + 8192);
HXDLIN( 475)					x815 = ((565 * (x415 + x515)) + 4);
HXDLIN( 475)					x415 = ((x815 + (2276 * x415)) >> 3);
HXDLIN( 475)					x515 = ((x815 - (3406 * x515)) >> 3);
HXDLIN( 475)					x815 = ((2408 * (x615 + x715)) + 4);
HXDLIN( 475)					x615 = ((x815 - (799 * x615)) >> 3);
HXDLIN( 475)					x715 = ((x815 - (4017 * x715)) >> 3);
HXDLIN( 475)					x815 = (x015 + x115);
HXDLIN( 475)					x015 = (x015 - x115);
HXDLIN( 475)					x115 = ((1108 * (x315 + x215)) + 4);
HXDLIN( 475)					x215 = ((x115 - (3784 * x215)) >> 3);
HXDLIN( 475)					x315 = ((x115 + (1568 * x315)) >> 3);
HXDLIN( 475)					x115 = (x415 + x615);
HXDLIN( 475)					x415 = (x415 - x615);
HXDLIN( 475)					x615 = (x515 + x715);
HXDLIN( 475)					x515 = (x515 - x715);
HXDLIN( 475)					x715 = (x815 + x315);
HXDLIN( 475)					x815 = (x815 - x315);
HXDLIN( 475)					x315 = (x015 + x215);
HXDLIN( 475)					x015 = (x015 - x215);
HXDLIN( 475)					x215 = (((181 * (x415 + x515)) + 128) >> 8);
HXDLIN( 475)					x415 = (((181 * (x415 - x515)) + 128) >> 8);
HXDLIN( 475)					int x = (((x715 + x115) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp;
HXDLIN( 475)					if ((x < 0)) {
HXLINE( 475)						_hx_tmp = 0;
            					}
            					else {
HXLINE( 475)						if ((x > 255)) {
HXLINE( 475)							_hx_tmp = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp = x;
            						}
            					}
HXDLIN( 475)					out->b[po8] = ( (unsigned char)(_hx_tmp) );
HXDLIN( 475)					po8 = (po8 + stride7);
HXDLIN( 475)					int x1 = (((x315 + x215) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp1;
HXDLIN( 475)					if ((x1 < 0)) {
HXLINE( 475)						_hx_tmp1 = 0;
            					}
            					else {
HXLINE( 475)						if ((x1 > 255)) {
HXLINE( 475)							_hx_tmp1 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp1 = x1;
            						}
            					}
HXDLIN( 475)					out->b[po8] = ( (unsigned char)(_hx_tmp1) );
HXDLIN( 475)					po8 = (po8 + stride7);
HXDLIN( 475)					int x2 = (((x015 + x415) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp2;
HXDLIN( 475)					if ((x2 < 0)) {
HXLINE( 475)						_hx_tmp2 = 0;
            					}
            					else {
HXLINE( 475)						if ((x2 > 255)) {
HXLINE( 475)							_hx_tmp2 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp2 = x2;
            						}
            					}
HXDLIN( 475)					out->b[po8] = ( (unsigned char)(_hx_tmp2) );
HXDLIN( 475)					po8 = (po8 + stride7);
HXDLIN( 475)					int x3 = (((x815 + x615) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp3;
HXDLIN( 475)					if ((x3 < 0)) {
HXLINE( 475)						_hx_tmp3 = 0;
            					}
            					else {
HXLINE( 475)						if ((x3 > 255)) {
HXLINE( 475)							_hx_tmp3 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp3 = x3;
            						}
            					}
HXDLIN( 475)					out->b[po8] = ( (unsigned char)(_hx_tmp3) );
HXDLIN( 475)					po8 = (po8 + stride7);
HXDLIN( 475)					int x4 = (((x815 - x615) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp4;
HXDLIN( 475)					if ((x4 < 0)) {
HXLINE( 475)						_hx_tmp4 = 0;
            					}
            					else {
HXLINE( 475)						if ((x4 > 255)) {
HXLINE( 475)							_hx_tmp4 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp4 = x4;
            						}
            					}
HXDLIN( 475)					out->b[po8] = ( (unsigned char)(_hx_tmp4) );
HXDLIN( 475)					po8 = (po8 + stride7);
HXDLIN( 475)					int x5 = (((x015 - x415) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp5;
HXDLIN( 475)					if ((x5 < 0)) {
HXLINE( 475)						_hx_tmp5 = 0;
            					}
            					else {
HXLINE( 475)						if ((x5 > 255)) {
HXLINE( 475)							_hx_tmp5 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp5 = x5;
            						}
            					}
HXDLIN( 475)					out->b[po8] = ( (unsigned char)(_hx_tmp5) );
HXDLIN( 475)					po8 = (po8 + stride7);
HXDLIN( 475)					int x6 = (((x315 - x215) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp6;
HXDLIN( 475)					if ((x6 < 0)) {
HXLINE( 475)						_hx_tmp6 = 0;
            					}
            					else {
HXLINE( 475)						if ((x6 > 255)) {
HXLINE( 475)							_hx_tmp6 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp6 = x6;
            						}
            					}
HXDLIN( 475)					out->b[po8] = ( (unsigned char)(_hx_tmp6) );
HXDLIN( 475)					po8 = (po8 + stride7);
HXDLIN( 475)					int x7 = (((x715 - x115) >> 14) + 128);
HXDLIN( 475)					int _hx_tmp7;
HXDLIN( 475)					if ((x7 < 0)) {
HXLINE( 475)						_hx_tmp7 = 0;
            					}
            					else {
HXLINE( 475)						if ((x7 > 255)) {
HXLINE( 475)							_hx_tmp7 = 255;
            						}
            						else {
HXLINE( 475)							_hx_tmp7 = x7;
            						}
            					}
HXDLIN( 475)					out->b[po8] = ( (unsigned char)(_hx_tmp7) );
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NanoJpeg_obj,njDecodeBlock,(void))

void NanoJpeg_obj::notSupported(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_479_notSupported)
HXDLIN( 479)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This JPG file is not supported",8e,e9,23,d5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,notSupported,(void))

void NanoJpeg_obj::njDecodeScan(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_482_njDecodeScan)
HXLINE( 483)		{
HXLINE( 483)			this->length = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXDLIN( 483)			{
HXLINE( 483)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 483)				_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 483)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 483)				_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 483)				 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 483)				_hx_tmp2->length = (_hx_tmp2->length - 2);
            			}
            		}
HXLINE( 485)		if ((this->bytes->b->__get(this->pos) != this->ncomp)) {
HXLINE( 485)			this->notSupported();
            		}
HXLINE( 486)		{
HXLINE( 486)			 ::hxd::res::NanoJpeg _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 486)			_hx_tmp3->pos = (_hx_tmp3->pos + 1);
HXDLIN( 486)			 ::hxd::res::NanoJpeg _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 486)			_hx_tmp4->size = (_hx_tmp4->size - 1);
HXDLIN( 486)			 ::hxd::res::NanoJpeg _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 486)			_hx_tmp5->length = (_hx_tmp5->length - 1);
            		}
HXLINE( 487)		{
HXLINE( 487)			int _g = 0;
HXDLIN( 487)			int _g1 = this->ncomp;
HXDLIN( 487)			while((_g < _g1)){
HXLINE( 487)				_g = (_g + 1);
HXDLIN( 487)				int i = (_g - 1);
HXLINE( 488)				 ::hxd::res::_NanoJpeg::Component c = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,i)) );
HXLINE( 491)				c->dctabsel = ((( (int)(this->bytes->b->__get((this->pos + 1))) ) >> 4) << 1);
HXLINE( 492)				c->actabsel = (((( (int)(this->bytes->b->__get((this->pos + 1))) ) & 3) << 1) | 1);
HXLINE( 493)				{
HXLINE( 493)					 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 493)					_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 493)					 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 493)					_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 493)					 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 493)					_hx_tmp2->length = (_hx_tmp2->length - 2);
            				}
            			}
            		}
HXLINE( 495)		int start = ( (int)(this->bytes->b->__get(this->pos)) );
HXLINE( 496)		int count = ( (int)(this->bytes->b->__get((this->pos + 1))) );
HXLINE( 497)		int other = ( (int)(this->bytes->b->__get((this->pos + 2))) );
HXLINE( 498)		bool _hx_tmp6;
HXDLIN( 498)		bool _hx_tmp7;
HXDLIN( 498)		bool _hx_tmp8;
HXDLIN( 498)		if (!(this->progressive)) {
HXLINE( 498)			_hx_tmp8 = (start != 0);
            		}
            		else {
HXLINE( 498)			_hx_tmp8 = false;
            		}
HXDLIN( 498)		if (!(_hx_tmp8)) {
HXLINE( 498)			_hx_tmp7 = (count != (63 - start));
            		}
            		else {
HXLINE( 498)			_hx_tmp7 = true;
            		}
HXDLIN( 498)		if (!(_hx_tmp7)) {
HXLINE( 498)			_hx_tmp6 = (other != 0);
            		}
            		else {
HXLINE( 498)			_hx_tmp6 = true;
            		}
HXDLIN( 498)		if (_hx_tmp6) {
HXLINE( 498)			this->notSupported();
            		}
HXLINE( 499)		{
HXLINE( 499)			int count1 = this->length;
HXDLIN( 499)			 ::hxd::res::NanoJpeg _hx_tmp9 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 499)			_hx_tmp9->pos = (_hx_tmp9->pos + count1);
HXDLIN( 499)			 ::hxd::res::NanoJpeg _hx_tmp10 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 499)			_hx_tmp10->size = (_hx_tmp10->size - count1);
HXDLIN( 499)			 ::hxd::res::NanoJpeg _hx_tmp11 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 499)			_hx_tmp11->length = (_hx_tmp11->length - count1);
            		}
HXLINE( 501)		int mbx = 0;
HXDLIN( 501)		int mby = 0;
HXLINE( 502)		int rstcount = this->rstinterval;
HXDLIN( 502)		int nextrst = 0;
HXLINE( 503)		while(true){
HXLINE( 504)			{
HXLINE( 504)				int _g = 0;
HXDLIN( 504)				int _g1 = this->ncomp;
HXDLIN( 504)				while((_g < _g1)){
HXLINE( 504)					_g = (_g + 1);
HXDLIN( 504)					int i = (_g - 1);
HXLINE( 505)					 ::hxd::res::_NanoJpeg::Component c = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,i)) );
HXLINE( 506)					{
HXLINE( 506)						int _g1 = 0;
HXDLIN( 506)						int _g2 = c->ssy;
HXDLIN( 506)						while((_g1 < _g2)){
HXLINE( 506)							_g1 = (_g1 + 1);
HXDLIN( 506)							int sby = (_g1 - 1);
HXLINE( 507)							{
HXLINE( 507)								int _g = 0;
HXDLIN( 507)								int _g2 = c->ssx;
HXDLIN( 507)								while((_g < _g2)){
HXLINE( 507)									_g = (_g + 1);
HXDLIN( 507)									int sbx = (_g - 1);
HXLINE( 508)									this->njDecodeBlock(c,((((((mby * c->ssy) + sby) * c->stride) + (mbx * c->ssx)) + sbx) << 3));
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE( 510)			mbx = (mbx + 1);
HXDLIN( 510)			if ((mbx >= this->mbwidth)) {
HXLINE( 511)				mbx = 0;
HXLINE( 512)				mby = (mby + 1);
HXDLIN( 512)				if ((mby >= this->mbheight)) {
HXLINE( 512)					goto _hx_goto_39;
            				}
            			}
HXLINE( 514)			bool _hx_tmp;
HXDLIN( 514)			if ((this->rstinterval != 0)) {
HXLINE( 514)				rstcount = (rstcount - 1);
HXDLIN( 514)				_hx_tmp = (rstcount == 0);
            			}
            			else {
HXLINE( 514)				_hx_tmp = false;
            			}
HXDLIN( 514)			if (_hx_tmp) {
HXLINE( 515)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 515)				_hx_tmp->bufbits = (_hx_tmp->bufbits & 248);
HXLINE( 516)				int r = this->njShowBits(16);
HXDLIN( 516)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 516)				_hx_tmp1->bufbits = (_hx_tmp1->bufbits - 16);
HXDLIN( 516)				int i = r;
HXLINE( 518)				nextrst = ((nextrst + 1) & 7);
HXLINE( 519)				rstcount = this->rstinterval;
HXLINE( 520)				{
HXLINE( 521)					( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,0)) )->dcpred = 0;
HXDLIN( 521)					( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,1)) )->dcpred = 0;
HXDLIN( 521)					( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,2)) )->dcpred = 0;
            				}
            			}
            		}
            		_hx_goto_39:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njDecodeScan,(void))

void NanoJpeg_obj::njUpsampleH( ::hxd::res::_NanoJpeg::Component c){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_545_njUpsampleH)
HXLINE( 546)		int xmax = (c->width - 3);
HXLINE( 549)		 ::haxe::io::Bytes cout = ::haxe::io::Bytes_obj::alloc(((c->width * c->height) << 1));
HXLINE( 550)		 ::haxe::io::Bytes this1 = cout;
HXDLIN( 550)		 ::haxe::io::Bytes lout = this1;
HXLINE( 551)		 ::haxe::io::Bytes this2 = c->pixels;
HXDLIN( 551)		 ::haxe::io::Bytes lin = this2;
HXLINE( 552)		int pi = 0;
HXDLIN( 552)		int po = 0;
HXLINE( 553)		{
HXLINE( 553)			int _g = 0;
HXDLIN( 553)			int _g1 = c->height;
HXDLIN( 553)			while((_g < _g1)){
HXLINE( 553)				_g = (_g + 1);
HXDLIN( 553)				int y = (_g - 1);
HXLINE( 554)				{
HXLINE( 554)					int x = ((((139 * ( (int)(lin->b->__get(pi)) )) + (-11 * ( (int)(lin->b->__get((pi + 1))) ))) + 64) >> 7);
HXDLIN( 554)					int v;
HXDLIN( 554)					if ((x < 0)) {
HXLINE( 554)						v = 0;
            					}
            					else {
HXLINE( 554)						if ((x > 255)) {
HXLINE( 554)							v = 255;
            						}
            						else {
HXLINE( 554)							v = x;
            						}
            					}
HXDLIN( 554)					lout->b[po] = ( (unsigned char)(v) );
            				}
HXLINE( 555)				{
HXLINE( 555)					int x1 = (((((104 * ( (int)(lin->b->__get(pi)) )) + (27 * ( (int)(lin->b->__get((pi + 1))) ))) + (-3 * ( (int)(lin->b->__get((pi + 2))) ))) + 64) >> 7);
HXDLIN( 555)					int v1;
HXDLIN( 555)					if ((x1 < 0)) {
HXLINE( 555)						v1 = 0;
            					}
            					else {
HXLINE( 555)						if ((x1 > 255)) {
HXLINE( 555)							v1 = 255;
            						}
            						else {
HXLINE( 555)							v1 = x1;
            						}
            					}
HXDLIN( 555)					lout->b[(po + 1)] = ( (unsigned char)(v1) );
            				}
HXLINE( 556)				{
HXLINE( 556)					int x2 = (((((28 * ( (int)(lin->b->__get(pi)) )) + (109 * ( (int)(lin->b->__get((pi + 1))) ))) + (-9 * ( (int)(lin->b->__get((pi + 2))) ))) + 64) >> 7);
HXDLIN( 556)					int v2;
HXDLIN( 556)					if ((x2 < 0)) {
HXLINE( 556)						v2 = 0;
            					}
            					else {
HXLINE( 556)						if ((x2 > 255)) {
HXLINE( 556)							v2 = 255;
            						}
            						else {
HXLINE( 556)							v2 = x2;
            						}
            					}
HXDLIN( 556)					lout->b[(po + 2)] = ( (unsigned char)(v2) );
            				}
HXLINE( 557)				{
HXLINE( 557)					int _g1 = 0;
HXDLIN( 557)					int _g2 = xmax;
HXDLIN( 557)					while((_g1 < _g2)){
HXLINE( 557)						_g1 = (_g1 + 1);
HXDLIN( 557)						int x = (_g1 - 1);
HXLINE( 558)						{
HXLINE( 558)							int x1 = ((((((-9 * ( (int)(lin->b->__get((pi + x))) )) + (111 * ( (int)(lin->b->__get(((pi + x) + 1))) ))) + (29 * ( (int)(lin->b->__get(((pi + x) + 2))) ))) + (-3 * ( (int)(lin->b->__get(((pi + x) + 3))) ))) + 64) >> 7);
HXDLIN( 558)							int v;
HXDLIN( 558)							if ((x1 < 0)) {
HXLINE( 558)								v = 0;
            							}
            							else {
HXLINE( 558)								if ((x1 > 255)) {
HXLINE( 558)									v = 255;
            								}
            								else {
HXLINE( 558)									v = x1;
            								}
            							}
HXDLIN( 558)							lout->b[((po + (x << 1)) + 3)] = ( (unsigned char)(v) );
            						}
HXLINE( 559)						{
HXLINE( 559)							int x2 = ((((((-3 * ( (int)(lin->b->__get((pi + x))) )) + (29 * ( (int)(lin->b->__get(((pi + x) + 1))) ))) + (111 * ( (int)(lin->b->__get(((pi + x) + 2))) ))) + (-9 * ( (int)(lin->b->__get(((pi + x) + 3))) ))) + 64) >> 7);
HXDLIN( 559)							int v1;
HXDLIN( 559)							if ((x2 < 0)) {
HXLINE( 559)								v1 = 0;
            							}
            							else {
HXLINE( 559)								if ((x2 > 255)) {
HXLINE( 559)									v1 = 255;
            								}
            								else {
HXLINE( 559)									v1 = x2;
            								}
            							}
HXDLIN( 559)							lout->b[((po + (x << 1)) + 4)] = ( (unsigned char)(v1) );
            						}
            					}
            				}
HXLINE( 561)				pi = (pi + c->stride);
HXLINE( 562)				po = (po + (c->width << 1));
HXLINE( 563)				{
HXLINE( 563)					int x3 = (((((28 * ( (int)(lin->b->__get((pi - 1))) )) + (109 * ( (int)(lin->b->__get((pi - 2))) ))) + (-9 * ( (int)(lin->b->__get((pi - 3))) ))) + 64) >> 7);
HXDLIN( 563)					int v3;
HXDLIN( 563)					if ((x3 < 0)) {
HXLINE( 563)						v3 = 0;
            					}
            					else {
HXLINE( 563)						if ((x3 > 255)) {
HXLINE( 563)							v3 = 255;
            						}
            						else {
HXLINE( 563)							v3 = x3;
            						}
            					}
HXDLIN( 563)					lout->b[(po - 3)] = ( (unsigned char)(v3) );
            				}
HXLINE( 564)				{
HXLINE( 564)					int x4 = (((((104 * ( (int)(lin->b->__get((pi - 1))) )) + (27 * ( (int)(lin->b->__get((pi - 2))) ))) + (-3 * ( (int)(lin->b->__get((pi - 3))) ))) + 64) >> 7);
HXDLIN( 564)					int v4;
HXDLIN( 564)					if ((x4 < 0)) {
HXLINE( 564)						v4 = 0;
            					}
            					else {
HXLINE( 564)						if ((x4 > 255)) {
HXLINE( 564)							v4 = 255;
            						}
            						else {
HXLINE( 564)							v4 = x4;
            						}
            					}
HXDLIN( 564)					lout->b[(po - 2)] = ( (unsigned char)(v4) );
            				}
HXLINE( 565)				{
HXLINE( 565)					int x5 = ((((139 * ( (int)(lin->b->__get((pi - 1))) )) + (-11 * ( (int)(lin->b->__get((pi - 2))) ))) + 64) >> 7);
HXDLIN( 565)					int v5;
HXDLIN( 565)					if ((x5 < 0)) {
HXLINE( 565)						v5 = 0;
            					}
            					else {
HXLINE( 565)						if ((x5 > 255)) {
HXLINE( 565)							v5 = 255;
            						}
            						else {
HXLINE( 565)							v5 = x5;
            						}
            					}
HXDLIN( 565)					lout->b[(po - 1)] = ( (unsigned char)(v5) );
            				}
            			}
            		}
HXLINE( 567)		 ::hxd::res::_NanoJpeg::Component c1 = c;
HXDLIN( 567)		c1->width = (c1->width << 1);
HXLINE( 568)		c->stride = c->width;
HXLINE( 570)		c->pixels = cout;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njUpsampleH,(void))

void NanoJpeg_obj::njUpsampleV( ::hxd::res::_NanoJpeg::Component c){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_574_njUpsampleV)
HXLINE( 575)		int w = c->width;
HXDLIN( 575)		int s1 = c->stride;
HXDLIN( 575)		int s2 = (s1 + s1);
HXLINE( 576)		 ::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc(((c->width * c->height) << 1));
HXLINE( 577)		int pi = 0;
HXDLIN( 577)		int po = 0;
HXLINE( 578)		 ::haxe::io::Bytes this1 = out;
HXDLIN( 578)		 ::haxe::io::Bytes cout = this1;
HXLINE( 579)		 ::haxe::io::Bytes this2 = c->pixels;
HXDLIN( 579)		 ::haxe::io::Bytes cin = this2;
HXLINE( 580)		{
HXLINE( 580)			int _g = 0;
HXDLIN( 580)			int _g1 = w;
HXDLIN( 580)			while((_g < _g1)){
HXLINE( 580)				_g = (_g + 1);
HXDLIN( 580)				int x = (_g - 1);
HXLINE( 581)				po = x;
HXDLIN( 581)				pi = po;
HXLINE( 582)				{
HXLINE( 582)					int x1 = ((((139 * ( (int)(cin->b->__get(pi)) )) + (-11 * ( (int)(cin->b->__get((pi + s1))) ))) + 64) >> 7);
HXDLIN( 582)					int v;
HXDLIN( 582)					if ((x1 < 0)) {
HXLINE( 582)						v = 0;
            					}
            					else {
HXLINE( 582)						if ((x1 > 255)) {
HXLINE( 582)							v = 255;
            						}
            						else {
HXLINE( 582)							v = x1;
            						}
            					}
HXDLIN( 582)					cout->b[po] = ( (unsigned char)(v) );
            				}
HXDLIN( 582)				po = (po + w);
HXLINE( 583)				{
HXLINE( 583)					int x2 = (((((104 * ( (int)(cin->b->__get(pi)) )) + (27 * ( (int)(cin->b->__get((pi + s1))) ))) + (-3 * ( (int)(cin->b->__get((pi + s2))) ))) + 64) >> 7);
HXDLIN( 583)					int v1;
HXDLIN( 583)					if ((x2 < 0)) {
HXLINE( 583)						v1 = 0;
            					}
            					else {
HXLINE( 583)						if ((x2 > 255)) {
HXLINE( 583)							v1 = 255;
            						}
            						else {
HXLINE( 583)							v1 = x2;
            						}
            					}
HXDLIN( 583)					cout->b[po] = ( (unsigned char)(v1) );
            				}
HXDLIN( 583)				po = (po + w);
HXLINE( 584)				{
HXLINE( 584)					int x3 = (((((28 * ( (int)(cin->b->__get(pi)) )) + (109 * ( (int)(cin->b->__get((pi + s1))) ))) + (-9 * ( (int)(cin->b->__get((pi + s2))) ))) + 64) >> 7);
HXDLIN( 584)					int v2;
HXDLIN( 584)					if ((x3 < 0)) {
HXLINE( 584)						v2 = 0;
            					}
            					else {
HXLINE( 584)						if ((x3 > 255)) {
HXLINE( 584)							v2 = 255;
            						}
            						else {
HXLINE( 584)							v2 = x3;
            						}
            					}
HXDLIN( 584)					cout->b[po] = ( (unsigned char)(v2) );
            				}
HXDLIN( 584)				po = (po + w);
HXLINE( 585)				pi = (pi + s1);
HXLINE( 586)				{
HXLINE( 586)					int _g1 = 0;
HXDLIN( 586)					int _g2 = (c->height - 2);
HXDLIN( 586)					while((_g1 < _g2)){
HXLINE( 586)						_g1 = (_g1 + 1);
HXDLIN( 586)						int y = (_g1 - 1);
HXLINE( 587)						{
HXLINE( 587)							int x = ((((((-9 * ( (int)(cin->b->__get((pi - s1))) )) + (111 * ( (int)(cin->b->__get(pi)) ))) + (29 * ( (int)(cin->b->__get((pi + s1))) ))) + (-3 * ( (int)(cin->b->__get((pi + s2))) ))) + 64) >> 7);
HXDLIN( 587)							int v;
HXDLIN( 587)							if ((x < 0)) {
HXLINE( 587)								v = 0;
            							}
            							else {
HXLINE( 587)								if ((x > 255)) {
HXLINE( 587)									v = 255;
            								}
            								else {
HXLINE( 587)									v = x;
            								}
            							}
HXDLIN( 587)							cout->b[po] = ( (unsigned char)(v) );
            						}
HXDLIN( 587)						po = (po + w);
HXLINE( 588)						{
HXLINE( 588)							int x1 = ((((((-3 * ( (int)(cin->b->__get((pi - s1))) )) + (29 * ( (int)(cin->b->__get(pi)) ))) + (111 * ( (int)(cin->b->__get((pi + s1))) ))) + (-9 * ( (int)(cin->b->__get((pi + s2))) ))) + 64) >> 7);
HXDLIN( 588)							int v1;
HXDLIN( 588)							if ((x1 < 0)) {
HXLINE( 588)								v1 = 0;
            							}
            							else {
HXLINE( 588)								if ((x1 > 255)) {
HXLINE( 588)									v1 = 255;
            								}
            								else {
HXLINE( 588)									v1 = x1;
            								}
            							}
HXDLIN( 588)							cout->b[po] = ( (unsigned char)(v1) );
            						}
HXDLIN( 588)						po = (po + w);
HXLINE( 589)						pi = (pi + s1);
            					}
            				}
HXLINE( 591)				pi = (pi + s1);
HXLINE( 592)				{
HXLINE( 592)					int x4 = (((((28 * ( (int)(cin->b->__get(pi)) )) + (109 * ( (int)(cin->b->__get((pi - s1))) ))) + (-9 * ( (int)(cin->b->__get((pi - s2))) ))) + 64) >> 7);
HXDLIN( 592)					int v3;
HXDLIN( 592)					if ((x4 < 0)) {
HXLINE( 592)						v3 = 0;
            					}
            					else {
HXLINE( 592)						if ((x4 > 255)) {
HXLINE( 592)							v3 = 255;
            						}
            						else {
HXLINE( 592)							v3 = x4;
            						}
            					}
HXDLIN( 592)					cout->b[po] = ( (unsigned char)(v3) );
            				}
HXDLIN( 592)				po = (po + w);
HXLINE( 593)				{
HXLINE( 593)					int x5 = (((((104 * ( (int)(cin->b->__get(pi)) )) + (27 * ( (int)(cin->b->__get((pi - s1))) ))) + (-3 * ( (int)(cin->b->__get((pi - s2))) ))) + 64) >> 7);
HXDLIN( 593)					int v4;
HXDLIN( 593)					if ((x5 < 0)) {
HXLINE( 593)						v4 = 0;
            					}
            					else {
HXLINE( 593)						if ((x5 > 255)) {
HXLINE( 593)							v4 = 255;
            						}
            						else {
HXLINE( 593)							v4 = x5;
            						}
            					}
HXDLIN( 593)					cout->b[po] = ( (unsigned char)(v4) );
            				}
HXDLIN( 593)				po = (po + w);
HXLINE( 594)				{
HXLINE( 594)					int x6 = ((((139 * ( (int)(cin->b->__get(pi)) )) + (-11 * ( (int)(cin->b->__get((pi - s1))) ))) + 64) >> 7);
HXDLIN( 594)					int v5;
HXDLIN( 594)					if ((x6 < 0)) {
HXLINE( 594)						v5 = 0;
            					}
            					else {
HXLINE( 594)						if ((x6 > 255)) {
HXLINE( 594)							v5 = 255;
            						}
            						else {
HXLINE( 594)							v5 = x6;
            						}
            					}
HXDLIN( 594)					cout->b[po] = ( (unsigned char)(v5) );
            				}
            			}
            		}
HXLINE( 596)		 ::hxd::res::_NanoJpeg::Component c1 = c;
HXDLIN( 596)		c1->height = (c1->height << 1);
HXLINE( 597)		c->stride = c->width;
HXLINE( 599)		c->pixels = out;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njUpsampleV,(void))

void NanoJpeg_obj::njUpsample( ::hxd::res::_NanoJpeg::Component c){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_602_njUpsample)
HXLINE( 603)		int xshift = 0;
HXDLIN( 603)		int yshift = 0;
HXLINE( 604)		while((c->width < this->width)){
HXLINE( 604)			 ::hxd::res::_NanoJpeg::Component c1 = c;
HXDLIN( 604)			c1->width = (c1->width << 1);
HXDLIN( 604)			xshift = (xshift + 1);
            		}
HXLINE( 605)		while((c->height < this->height)){
HXLINE( 605)			 ::hxd::res::_NanoJpeg::Component c1 = c;
HXDLIN( 605)			c1->height = (c1->height << 1);
HXDLIN( 605)			yshift = (yshift + 1);
            		}
HXLINE( 606)		 ::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc((c->width * c->height));
HXLINE( 607)		 ::haxe::io::Bytes this1 = c->pixels;
HXDLIN( 607)		 ::haxe::io::Bytes lin = this1;
HXLINE( 608)		int pout = 0;
HXLINE( 617)		 ::haxe::io::Bytes this2 = out;
HXDLIN( 617)		 ::haxe::io::Bytes lout = this2;
HXLINE( 622)		{
HXLINE( 622)			int _g = 0;
HXDLIN( 622)			int _g1 = c->height;
HXDLIN( 622)			while((_g < _g1)){
HXLINE( 622)				_g = (_g + 1);
HXDLIN( 622)				int y = (_g - 1);
HXLINE( 623)				int pin = ((y >> yshift) * c->stride);
HXLINE( 624)				{
HXLINE( 624)					int _g1 = 0;
HXDLIN( 624)					int _g2 = c->width;
HXDLIN( 624)					while((_g1 < _g2)){
HXLINE( 624)						_g1 = (_g1 + 1);
HXDLIN( 624)						int x = (_g1 - 1);
HXLINE( 625)						{
HXLINE( 625)							pout = (pout + 1);
HXDLIN( 625)							lout->b[(pout - 1)] = lin->b->__get(((x >> xshift) + pin));
            						}
            					}
            				}
            			}
            		}
HXLINE( 627)		c->stride = c->width;
HXLINE( 629)		c->pixels = out;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njUpsample,(void))

 ::haxe::io::Bytes NanoJpeg_obj::njConvert(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_632_njConvert)
HXLINE( 633)		{
HXLINE( 633)			int _g = 0;
HXDLIN( 633)			int _g1 = this->ncomp;
HXDLIN( 633)			while((_g < _g1)){
HXLINE( 633)				_g = (_g + 1);
HXDLIN( 633)				int i = (_g - 1);
HXLINE( 634)				 ::hxd::res::_NanoJpeg::Component c = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,i)) );
HXLINE( 635)				switch((int)(this->filter->_hx_getIndex())){
            					case (int)0: {
HXLINE( 637)						bool _hx_tmp;
HXDLIN( 637)						if ((c->width >= this->width)) {
HXLINE( 637)							_hx_tmp = (c->height < this->height);
            						}
            						else {
HXLINE( 637)							_hx_tmp = true;
            						}
HXDLIN( 637)						if (_hx_tmp) {
HXLINE( 638)							this->njUpsample(c);
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 640)						while(true){
HXLINE( 640)							bool _hx_tmp;
HXDLIN( 640)							if ((c->width >= this->width)) {
HXLINE( 640)								_hx_tmp = (c->height < this->height);
            							}
            							else {
HXLINE( 640)								_hx_tmp = true;
            							}
HXDLIN( 640)							if (!(_hx_tmp)) {
HXLINE( 640)								goto _hx_goto_56;
            							}
HXLINE( 641)							if ((c->width < this->width)) {
HXLINE( 641)								this->njUpsampleH(c);
            							}
HXLINE( 642)							if ((c->height < this->height)) {
HXLINE( 642)								this->njUpsampleV(c);
            							}
            						}
            						_hx_goto_56:;
            					}
            					break;
            				}
HXLINE( 645)				bool _hx_tmp;
HXDLIN( 645)				if ((c->width >= this->width)) {
HXLINE( 645)					_hx_tmp = (c->height < this->height);
            				}
            				else {
HXLINE( 645)					_hx_tmp = true;
            				}
HXDLIN( 645)				if (_hx_tmp) {
HXLINE( 645)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            				}
            			}
            		}
HXLINE( 647)		 ::haxe::io::Bytes pixels = ::haxe::io::Bytes_obj::alloc(((this->width * this->height) * 4));
HXLINE( 648)		if ((this->ncomp == 3)) {
HXLINE( 650)			 ::haxe::io::Bytes this1 = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,0)) )->pixels;
HXDLIN( 650)			 ::haxe::io::Bytes py = this1;
HXLINE( 651)			 ::haxe::io::Bytes this2 = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,1)) )->pixels;
HXDLIN( 651)			 ::haxe::io::Bytes pcb = this2;
HXLINE( 652)			 ::haxe::io::Bytes this3 = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,2)) )->pixels;
HXDLIN( 652)			 ::haxe::io::Bytes pcr = this3;
HXLINE( 661)			 ::haxe::io::Bytes this4 = pixels;
HXDLIN( 661)			 ::haxe::io::Bytes pix = this4;
HXLINE( 666)			int k1 = 0;
HXDLIN( 666)			int k2 = 0;
HXDLIN( 666)			int k3 = 0;
HXDLIN( 666)			int out = 0;
HXLINE( 667)			{
HXLINE( 667)				int _g = 0;
HXDLIN( 667)				int _g1 = this->height;
HXDLIN( 667)				while((_g < _g1)){
HXLINE( 667)					_g = (_g + 1);
HXDLIN( 667)					int yy = (_g - 1);
HXLINE( 668)					{
HXLINE( 668)						int _g1 = 0;
HXDLIN( 668)						int _g2 = this->width;
HXDLIN( 668)						while((_g1 < _g2)){
HXLINE( 668)							_g1 = (_g1 + 1);
HXDLIN( 668)							int x = (_g1 - 1);
HXLINE( 669)							k1 = (k1 + 1);
HXDLIN( 669)							int y = (( (int)(py->b->__get((k1 - 1))) ) << 8);
HXLINE( 670)							k2 = (k2 + 1);
HXDLIN( 670)							int cb = (( (int)(pcb->b->__get((k2 - 1))) ) - 128);
HXLINE( 671)							k3 = (k3 + 1);
HXDLIN( 671)							int cr = (( (int)(pcr->b->__get((k3 - 1))) ) - 128);
HXLINE( 672)							int x1 = (((y + (359 * cr)) + 128) >> 8);
HXDLIN( 672)							int r;
HXDLIN( 672)							if ((x1 < 0)) {
HXLINE( 672)								r = 0;
            							}
            							else {
HXLINE( 672)								if ((x1 > 255)) {
HXLINE( 672)									r = 255;
            								}
            								else {
HXLINE( 672)									r = x1;
            								}
            							}
HXLINE( 673)							int x2 = ((((y - (88 * cb)) - (183 * cr)) + 128) >> 8);
HXDLIN( 673)							int g;
HXDLIN( 673)							if ((x2 < 0)) {
HXLINE( 673)								g = 0;
            							}
            							else {
HXLINE( 673)								if ((x2 > 255)) {
HXLINE( 673)									g = 255;
            								}
            								else {
HXLINE( 673)									g = x2;
            								}
            							}
HXLINE( 674)							int x3 = (((y + (454 * cb)) + 128) >> 8);
HXDLIN( 674)							int b;
HXDLIN( 674)							if ((x3 < 0)) {
HXLINE( 674)								b = 0;
            							}
            							else {
HXLINE( 674)								if ((x3 > 255)) {
HXLINE( 674)									b = 255;
            								}
            								else {
HXLINE( 674)									b = x3;
            								}
            							}
HXLINE( 675)							{
HXLINE( 675)								out = (out + 1);
HXDLIN( 675)								pix->b[(out - 1)] = ( (unsigned char)(b) );
            							}
HXLINE( 676)							{
HXLINE( 676)								out = (out + 1);
HXDLIN( 676)								pix->b[(out - 1)] = ( (unsigned char)(g) );
            							}
HXLINE( 677)							{
HXLINE( 677)								out = (out + 1);
HXDLIN( 677)								pix->b[(out - 1)] = ( (unsigned char)(r) );
            							}
HXLINE( 678)							{
HXLINE( 678)								out = (out + 1);
HXDLIN( 678)								pix->b[(out - 1)] = ( (unsigned char)(255) );
            							}
            						}
            					}
HXLINE( 680)					 ::hxd::res::_NanoJpeg::Component k11 = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,0)) );
HXDLIN( 680)					k1 = (k1 + (k11->stride - this->width));
HXLINE( 681)					 ::hxd::res::_NanoJpeg::Component k21 = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,1)) );
HXDLIN( 681)					k2 = (k2 + (k21->stride - this->width));
HXLINE( 682)					 ::hxd::res::_NanoJpeg::Component k31 = ( ( ::hxd::res::_NanoJpeg::Component)(_hx_array_unsafe_get(this->comps,2)) );
HXDLIN( 682)					k3 = (k3 + (k31->stride - this->width));
            				}
            			}
            		}
            		else {
HXLINE( 686)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TODO",c6,19,c2,37)));
            		}
HXLINE( 699)		return pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njConvert,return )

 ::Dynamic NanoJpeg_obj::njDecode(){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_702_njDecode)
HXLINE( 703)		bool _hx_tmp;
HXDLIN( 703)		bool _hx_tmp1;
HXDLIN( 703)		if ((this->size >= 2)) {
HXLINE( 703)			_hx_tmp1 = (this->bytes->b->__get(this->pos) != 255);
            		}
            		else {
HXLINE( 703)			_hx_tmp1 = true;
            		}
HXDLIN( 703)		if (!(_hx_tmp1)) {
HXLINE( 703)			_hx_tmp = (this->bytes->b->__get((this->pos + 1)) != 216);
            		}
            		else {
HXLINE( 703)			_hx_tmp = true;
            		}
HXDLIN( 703)		if (_hx_tmp) {
HXLINE( 703)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("This file is not a JPEG",68,ba,3e,db)));
            		}
HXLINE( 704)		{
HXLINE( 704)			 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 704)			_hx_tmp2->pos = (_hx_tmp2->pos + 2);
HXDLIN( 704)			 ::hxd::res::NanoJpeg _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 704)			_hx_tmp3->size = (_hx_tmp3->size - 2);
HXDLIN( 704)			 ::hxd::res::NanoJpeg _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 704)			_hx_tmp4->length = (_hx_tmp4->length - 2);
            		}
HXLINE( 705)		while(true){
HXLINE( 707)			{
HXLINE( 707)				 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 707)				_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 707)				 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 707)				_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 707)				 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 707)				_hx_tmp2->length = (_hx_tmp2->length - 2);
            			}
HXLINE( 708)			switch((int)(( (int)(this->bytes->b->__get((this->pos + -1))) ))){
            				case (int)192: {
HXLINE( 710)					this->njDecodeSOF();
            				}
            				break;
            				case (int)194: {
HXLINE( 712)					this->progressive = true;
HXLINE( 713)					if (this->progressive) {
HXLINE( 713)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported progressive JPG",e1,6a,64,e7)));
            					}
HXLINE( 714)					{
HXLINE( 715)						if (::hx::IsNull( _hx_array_unsafe_get(this->vlctab,4) )) {
HXLINE( 716)							::Array< ::Dynamic> this1 = this->vlctab;
HXDLIN( 716)							 ::haxe::io::Bytes val = ::haxe::io::Bytes_obj::alloc(131072);
HXDLIN( 716)							this1->__unsafe_set(4,val);
            						}
HXLINE( 715)						if (::hx::IsNull( _hx_array_unsafe_get(this->vlctab,5) )) {
HXLINE( 716)							::Array< ::Dynamic> this1 = this->vlctab;
HXDLIN( 716)							 ::haxe::io::Bytes val = ::haxe::io::Bytes_obj::alloc(131072);
HXDLIN( 716)							this1->__unsafe_set(5,val);
            						}
HXLINE( 715)						if (::hx::IsNull( _hx_array_unsafe_get(this->vlctab,6) )) {
HXLINE( 716)							::Array< ::Dynamic> this1 = this->vlctab;
HXDLIN( 716)							 ::haxe::io::Bytes val = ::haxe::io::Bytes_obj::alloc(131072);
HXDLIN( 716)							this1->__unsafe_set(6,val);
            						}
HXLINE( 715)						if (::hx::IsNull( _hx_array_unsafe_get(this->vlctab,7) )) {
HXLINE( 716)							::Array< ::Dynamic> this1 = this->vlctab;
HXDLIN( 716)							 ::haxe::io::Bytes val = ::haxe::io::Bytes_obj::alloc(131072);
HXDLIN( 716)							this1->__unsafe_set(7,val);
            						}
            					}
HXLINE( 717)					this->njDecodeSOF();
            				}
            				break;
            				case (int)195: {
HXLINE( 725)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported lossless JPG",c8,0b,e7,52)));
            				}
            				break;
            				case (int)196: {
HXLINE( 719)					this->njDecodeDHT();
            				}
            				break;
            				case (int)218: {
HXLINE( 722)					this->njDecodeScan();
HXLINE( 723)					goto _hx_goto_60;
            				}
            				break;
            				case (int)219: {
HXLINE( 718)					this->njDecodeDQT();
            				}
            				break;
            				case (int)221: {
HXLINE( 720)					this->njDecodeDRI();
            				}
            				break;
            				case (int)254: {
HXLINE( 724)					{
HXLINE( 724)						this->length = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXDLIN( 724)						{
HXLINE( 724)							 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 724)							_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 724)							 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 724)							_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 724)							 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 724)							_hx_tmp2->length = (_hx_tmp2->length - 2);
            						}
            					}
HXDLIN( 724)					{
HXLINE( 724)						int count = this->length;
HXDLIN( 724)						 ::hxd::res::NanoJpeg _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 724)						_hx_tmp3->pos = (_hx_tmp3->pos + count);
HXDLIN( 724)						 ::hxd::res::NanoJpeg _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 724)						_hx_tmp4->size = (_hx_tmp4->size - count);
HXDLIN( 724)						 ::hxd::res::NanoJpeg _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 724)						_hx_tmp5->length = (_hx_tmp5->length - count);
            					}
            				}
            				break;
            				default:{
HXLINE( 727)					switch((int)((( (int)(this->bytes->b->__get((this->pos + -1))) ) & 240))){
            						case (int)192: {
HXLINE( 731)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported jpeg type ",59,2e,ec,00) + (( (int)(this->bytes->b->__get((this->pos + -1))) ) & 15))));
            						}
            						break;
            						case (int)224: {
HXLINE( 729)							{
HXLINE( 729)								this->length = ((( (int)(this->bytes->b->__get(this->pos)) ) << 8) | ( (int)(this->bytes->b->__get((this->pos + 1))) ));
HXDLIN( 729)								{
HXLINE( 729)									 ::hxd::res::NanoJpeg _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 729)									_hx_tmp->pos = (_hx_tmp->pos + 2);
HXDLIN( 729)									 ::hxd::res::NanoJpeg _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 729)									_hx_tmp1->size = (_hx_tmp1->size - 2);
HXDLIN( 729)									 ::hxd::res::NanoJpeg _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 729)									_hx_tmp2->length = (_hx_tmp2->length - 2);
            								}
            							}
HXDLIN( 729)							{
HXLINE( 729)								int count = this->length;
HXDLIN( 729)								 ::hxd::res::NanoJpeg _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 729)								_hx_tmp3->pos = (_hx_tmp3->pos + count);
HXDLIN( 729)								 ::hxd::res::NanoJpeg _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 729)								_hx_tmp4->size = (_hx_tmp4->size - count);
HXDLIN( 729)								 ::hxd::res::NanoJpeg _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 729)								_hx_tmp5->length = (_hx_tmp5->length - count);
            							}
            						}
            						break;
            						default:{
HXLINE( 733)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported jpeg tag 0x",bb,3a,f7,f5) + ::StringTools_obj::hex(( (int)(this->bytes->b->__get((this->pos + -1))) ),2))));
            						}
            					}
            				}
            			}
            		}
            		_hx_goto_60:;
HXLINE( 737)		 ::haxe::io::Bytes pixels = this->njConvert();
HXLINE( 738)		this->cleanup();
HXLINE( 739)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("pixels",2d,ef,a9,8c),pixels)
            			->setFixed(1,HX_("width",06,b6,62,ca),this->width)
            			->setFixed(2,HX_("height",e7,07,4c,02),this->height));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NanoJpeg_obj,njDecode,return )

int NanoJpeg_obj::BLOCKSIZE;

int NanoJpeg_obj::W1;

int NanoJpeg_obj::W2;

int NanoJpeg_obj::W3;

int NanoJpeg_obj::W5;

int NanoJpeg_obj::W6;

int NanoJpeg_obj::W7;

int NanoJpeg_obj::CF4A;

int NanoJpeg_obj::CF4B;

int NanoJpeg_obj::CF4C;

int NanoJpeg_obj::CF4D;

int NanoJpeg_obj::CF3A;

int NanoJpeg_obj::CF3B;

int NanoJpeg_obj::CF3C;

int NanoJpeg_obj::CF3X;

int NanoJpeg_obj::CF3Y;

int NanoJpeg_obj::CF3Z;

int NanoJpeg_obj::CF2A;

int NanoJpeg_obj::CF2B;

int NanoJpeg_obj::CF(int x){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_539_CF)
HXDLIN( 539)		int x1 = ((x + 64) >> 7);
HXDLIN( 539)		if ((x1 < 0)) {
HXDLIN( 539)			return 0;
            		}
            		else {
HXDLIN( 539)			if ((x1 > 255)) {
HXDLIN( 539)				return 255;
            			}
            			else {
HXDLIN( 539)				return x1;
            			}
            		}
HXDLIN( 539)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,CF,return )

int NanoJpeg_obj::njClip(int x){
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_542_njClip)
HXDLIN( 542)		if ((x < 0)) {
HXDLIN( 542)			return 0;
            		}
            		else {
HXDLIN( 542)			if ((x > 255)) {
HXDLIN( 542)				return 255;
            			}
            			else {
HXDLIN( 542)				return x;
            			}
            		}
HXDLIN( 542)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NanoJpeg_obj,njClip,return )

 ::hxd::res::NanoJpeg NanoJpeg_obj::inst;

 ::Dynamic NanoJpeg_obj::decode( ::haxe::io::Bytes bytes, ::hxd::res::Filter filter,::hx::Null< int >  __o_position,::hx::Null< int >  __o_size){
            		int position = __o_position.Default(0);
            		int size = __o_size.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_743_decode)
HXLINE( 744)		if (::hx::IsNull( ::hxd::res::NanoJpeg_obj::inst )) {
HXLINE( 744)			::hxd::res::NanoJpeg_obj::inst =  ::hxd::res::NanoJpeg_obj::__alloc( HX_CTX );
            		}
HXLINE( 745)		::hxd::res::NanoJpeg_obj::inst->njInit(bytes,position,size,filter);
HXLINE( 746)		return ::hxd::res::NanoJpeg_obj::inst->njDecode();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NanoJpeg_obj,decode,return )


::hx::ObjectPtr< NanoJpeg_obj > NanoJpeg_obj::__new() {
	::hx::ObjectPtr< NanoJpeg_obj > __this = new NanoJpeg_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NanoJpeg_obj > NanoJpeg_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NanoJpeg_obj *__this = (NanoJpeg_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NanoJpeg_obj), true, "hxd.res.NanoJpeg"));
	*(void **)__this = NanoJpeg_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NanoJpeg_obj::NanoJpeg_obj()
{
}

void NanoJpeg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NanoJpeg);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(ncomp,"ncomp");
	HX_MARK_MEMBER_NAME(comps,"comps");
	HX_MARK_MEMBER_NAME(counts,"counts");
	HX_MARK_MEMBER_NAME(qtab,"qtab");
	HX_MARK_MEMBER_NAME(qtused,"qtused");
	HX_MARK_MEMBER_NAME(qtavail,"qtavail");
	HX_MARK_MEMBER_NAME(vlctab,"vlctab");
	HX_MARK_MEMBER_NAME(block,"block");
	HX_MARK_MEMBER_NAME(njZZ,"njZZ");
	HX_MARK_MEMBER_NAME(progressive,"progressive");
	HX_MARK_MEMBER_NAME(mbsizex,"mbsizex");
	HX_MARK_MEMBER_NAME(mbsizey,"mbsizey");
	HX_MARK_MEMBER_NAME(mbwidth,"mbwidth");
	HX_MARK_MEMBER_NAME(mbheight,"mbheight");
	HX_MARK_MEMBER_NAME(rstinterval,"rstinterval");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(bufbits,"bufbits");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(vlcCode,"vlcCode");
	HX_MARK_END_CLASS();
}

void NanoJpeg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(ncomp,"ncomp");
	HX_VISIT_MEMBER_NAME(comps,"comps");
	HX_VISIT_MEMBER_NAME(counts,"counts");
	HX_VISIT_MEMBER_NAME(qtab,"qtab");
	HX_VISIT_MEMBER_NAME(qtused,"qtused");
	HX_VISIT_MEMBER_NAME(qtavail,"qtavail");
	HX_VISIT_MEMBER_NAME(vlctab,"vlctab");
	HX_VISIT_MEMBER_NAME(block,"block");
	HX_VISIT_MEMBER_NAME(njZZ,"njZZ");
	HX_VISIT_MEMBER_NAME(progressive,"progressive");
	HX_VISIT_MEMBER_NAME(mbsizex,"mbsizex");
	HX_VISIT_MEMBER_NAME(mbsizey,"mbsizey");
	HX_VISIT_MEMBER_NAME(mbwidth,"mbwidth");
	HX_VISIT_MEMBER_NAME(mbheight,"mbheight");
	HX_VISIT_MEMBER_NAME(rstinterval,"rstinterval");
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(bufbits,"bufbits");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(vlcCode,"vlcCode");
}

::hx::Val NanoJpeg_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		if (HX_FIELD_EQ(inName,"buf") ) { return ::hx::Val( buf ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"qtab") ) { return ::hx::Val( qtab ); }
		if (HX_FIELD_EQ(inName,"njZZ") ) { return ::hx::Val( njZZ ); }
		if (HX_FIELD_EQ(inName,"free") ) { return ::hx::Val( free_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return ::hx::Val( bytes ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"ncomp") ) { return ::hx::Val( ncomp ); }
		if (HX_FIELD_EQ(inName,"comps") ) { return ::hx::Val( comps ); }
		if (HX_FIELD_EQ(inName,"block") ) { return ::hx::Val( block ); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return ::hx::Val( alloc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"counts") ) { return ::hx::Val( counts ); }
		if (HX_FIELD_EQ(inName,"qtused") ) { return ::hx::Val( qtused ); }
		if (HX_FIELD_EQ(inName,"vlctab") ) { return ::hx::Val( vlctab ); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return ::hx::Val( pixels ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"njInit") ) { return ::hx::Val( njInit_dyn() ); }
		if (HX_FIELD_EQ(inName,"njSkip") ) { return ::hx::Val( njSkip_dyn() ); }
		if (HX_FIELD_EQ(inName,"syntax") ) { return ::hx::Val( syntax_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"qtavail") ) { return ::hx::Val( qtavail ); }
		if (HX_FIELD_EQ(inName,"mbsizex") ) { return ::hx::Val( mbsizex ); }
		if (HX_FIELD_EQ(inName,"mbsizey") ) { return ::hx::Val( mbsizey ); }
		if (HX_FIELD_EQ(inName,"mbwidth") ) { return ::hx::Val( mbwidth ); }
		if (HX_FIELD_EQ(inName,"bufbits") ) { return ::hx::Val( bufbits ); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return ::hx::Val( cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"vlcCode") ) { return ::hx::Val( vlcCode ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mbheight") ) { return ::hx::Val( mbheight ); }
		if (HX_FIELD_EQ(inName,"njGetVLC") ) { return ::hx::Val( njGetVLC_dyn() ); }
		if (HX_FIELD_EQ(inName,"njDecode") ) { return ::hx::Val( njDecode_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"njGetBits") ) { return ::hx::Val( njGetBits_dyn() ); }
		if (HX_FIELD_EQ(inName,"njRowIDCT") ) { return ::hx::Val( njRowIDCT_dyn() ); }
		if (HX_FIELD_EQ(inName,"njColIDCT") ) { return ::hx::Val( njColIDCT_dyn() ); }
		if (HX_FIELD_EQ(inName,"njConvert") ) { return ::hx::Val( njConvert_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"njDecode16") ) { return ::hx::Val( njDecode16_dyn() ); }
		if (HX_FIELD_EQ(inName,"njShowBits") ) { return ::hx::Val( njShowBits_dyn() ); }
		if (HX_FIELD_EQ(inName,"njSkipBits") ) { return ::hx::Val( njSkipBits_dyn() ); }
		if (HX_FIELD_EQ(inName,"njUpsample") ) { return ::hx::Val( njUpsample_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"progressive") ) { return ::hx::Val( progressive ); }
		if (HX_FIELD_EQ(inName,"rstinterval") ) { return ::hx::Val( rstinterval ); }
		if (HX_FIELD_EQ(inName,"njByteAlign") ) { return ::hx::Val( njByteAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"njDecodeSOF") ) { return ::hx::Val( njDecodeSOF_dyn() ); }
		if (HX_FIELD_EQ(inName,"njDecodeDQT") ) { return ::hx::Val( njDecodeDQT_dyn() ); }
		if (HX_FIELD_EQ(inName,"njDecodeDHT") ) { return ::hx::Val( njDecodeDHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"njDecodeDRI") ) { return ::hx::Val( njDecodeDRI_dyn() ); }
		if (HX_FIELD_EQ(inName,"njUpsampleH") ) { return ::hx::Val( njUpsampleH_dyn() ); }
		if (HX_FIELD_EQ(inName,"njUpsampleV") ) { return ::hx::Val( njUpsampleV_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"njSkipMarker") ) { return ::hx::Val( njSkipMarker_dyn() ); }
		if (HX_FIELD_EQ(inName,"notSupported") ) { return ::hx::Val( notSupported_dyn() ); }
		if (HX_FIELD_EQ(inName,"njDecodeScan") ) { return ::hx::Val( njDecodeScan_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"njDecodeBlock") ) { return ::hx::Val( njDecodeBlock_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"njDecodeLength") ) { return ::hx::Val( njDecodeLength_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NanoJpeg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CF") ) { outValue = CF_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = ( inst ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"njClip") ) { outValue = njClip_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
	}
	return false;
}

::hx::Val NanoJpeg_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qtab") ) { qtab=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"njZZ") ) { njZZ=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ncomp") ) { ncomp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comps") ) { comps=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block") ) { block=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"counts") ) { counts=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qtused") ) { qtused=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vlctab") ) { vlctab=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::hxd::res::Filter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"qtavail") ) { qtavail=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mbsizex") ) { mbsizex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mbsizey") ) { mbsizey=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mbwidth") ) { mbwidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufbits") ) { bufbits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vlcCode") ) { vlcCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mbheight") ) { mbheight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"progressive") ) { progressive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rstinterval") ) { rstinterval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NanoJpeg_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=ioValue.Cast<  ::hxd::res::NanoJpeg >(); return true; }
	}
	return false;
}

void NanoJpeg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytes",6b,08,98,bd));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("ncomp",7d,88,d8,97));
	outFields->push(HX_("comps",84,34,5d,4a));
	outFields->push(HX_("counts",c4,f0,78,cc));
	outFields->push(HX_("qtab",84,76,09,4b));
	outFields->push(HX_("qtused",a0,a2,7c,46));
	outFields->push(HX_("qtavail",ec,ae,86,e4));
	outFields->push(HX_("vlctab",08,b4,2b,9f));
	outFields->push(HX_("block",4d,75,fc,b4));
	outFields->push(HX_("njZZ",fc,35,06,49));
	outFields->push(HX_("progressive",4b,66,73,e6));
	outFields->push(HX_("mbsizex",22,f5,75,60));
	outFields->push(HX_("mbsizey",23,f5,75,60));
	outFields->push(HX_("mbwidth",91,a2,ff,ad));
	outFields->push(HX_("mbheight",fc,14,fe,47));
	outFields->push(HX_("rstinterval",d8,a9,5f,82));
	outFields->push(HX_("buf",33,c3,4a,00));
	outFields->push(HX_("bufbits",b9,d3,ee,ae));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("filter",b8,1f,35,85));
	outFields->push(HX_("vlcCode",3a,00,b9,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NanoJpeg_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(NanoJpeg_obj,bytes),HX_("bytes",6b,08,98,bd)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,ncomp),HX_("ncomp",7d,88,d8,97)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NanoJpeg_obj,comps),HX_("comps",84,34,5d,4a)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(NanoJpeg_obj,counts),HX_("counts",c4,f0,78,cc)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NanoJpeg_obj,qtab),HX_("qtab",84,76,09,4b)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,qtused),HX_("qtused",a0,a2,7c,46)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,qtavail),HX_("qtavail",ec,ae,86,e4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NanoJpeg_obj,vlctab),HX_("vlctab",08,b4,2b,9f)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(NanoJpeg_obj,block),HX_("block",4d,75,fc,b4)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(NanoJpeg_obj,njZZ),HX_("njZZ",fc,35,06,49)},
	{::hx::fsBool,(int)offsetof(NanoJpeg_obj,progressive),HX_("progressive",4b,66,73,e6)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,mbsizex),HX_("mbsizex",22,f5,75,60)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,mbsizey),HX_("mbsizey",23,f5,75,60)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,mbwidth),HX_("mbwidth",91,a2,ff,ad)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,mbheight),HX_("mbheight",fc,14,fe,47)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,rstinterval),HX_("rstinterval",d8,a9,5f,82)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,buf),HX_("buf",33,c3,4a,00)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,bufbits),HX_("bufbits",b9,d3,ee,ae)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(NanoJpeg_obj,pixels),HX_("pixels",2d,ef,a9,8c)},
	{::hx::fsObject /*  ::hxd::res::Filter */ ,(int)offsetof(NanoJpeg_obj,filter),HX_("filter",b8,1f,35,85)},
	{::hx::fsInt,(int)offsetof(NanoJpeg_obj,vlcCode),HX_("vlcCode",3a,00,b9,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NanoJpeg_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &NanoJpeg_obj::BLOCKSIZE,HX_("BLOCKSIZE",6e,b0,61,62)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::W1,HX_("W1",fa,4b,00,00)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::W2,HX_("W2",fb,4b,00,00)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::W3,HX_("W3",fc,4b,00,00)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::W5,HX_("W5",fe,4b,00,00)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::W6,HX_("W6",ff,4b,00,00)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::W7,HX_("W7",00,4c,00,00)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF4A,HX_("CF4A",f0,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF4B,HX_("CF4B",f1,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF4C,HX_("CF4C",f2,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF4D,HX_("CF4D",f3,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF3A,HX_("CF3A",11,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF3B,HX_("CF3B",12,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF3C,HX_("CF3C",13,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF3X,HX_("CF3X",28,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF3Y,HX_("CF3Y",29,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF3Z,HX_("CF3Z",2a,96,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF2A,HX_("CF2A",32,95,7e,2c)},
	{::hx::fsInt,(void *) &NanoJpeg_obj::CF2B,HX_("CF2B",33,95,7e,2c)},
	{::hx::fsObject /*  ::hxd::res::NanoJpeg */ ,(void *) &NanoJpeg_obj::inst,HX_("inst",c6,43,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NanoJpeg_obj_sMemberFields[] = {
	HX_("bytes",6b,08,98,bd),
	HX_("pos",94,5d,55,00),
	HX_("size",c1,a0,53,4c),
	HX_("length",e6,94,07,9f),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("ncomp",7d,88,d8,97),
	HX_("comps",84,34,5d,4a),
	HX_("counts",c4,f0,78,cc),
	HX_("qtab",84,76,09,4b),
	HX_("qtused",a0,a2,7c,46),
	HX_("qtavail",ec,ae,86,e4),
	HX_("vlctab",08,b4,2b,9f),
	HX_("block",4d,75,fc,b4),
	HX_("njZZ",fc,35,06,49),
	HX_("progressive",4b,66,73,e6),
	HX_("mbsizex",22,f5,75,60),
	HX_("mbsizey",23,f5,75,60),
	HX_("mbwidth",91,a2,ff,ad),
	HX_("mbheight",fc,14,fe,47),
	HX_("rstinterval",d8,a9,5f,82),
	HX_("buf",33,c3,4a,00),
	HX_("bufbits",b9,d3,ee,ae),
	HX_("pixels",2d,ef,a9,8c),
	HX_("filter",b8,1f,35,85),
	HX_("alloc",75,a4,93,21),
	HX_("free",ac,9c,c2,43),
	HX_("njInit",6c,95,4f,34),
	HX_("cleanup",24,0c,42,ab),
	HX_("njSkip",db,70,e9,3a),
	HX_("syntax",63,82,94,ef),
	HX_("get",96,80,4e,00),
	HX_("njDecode16",ef,67,88,52),
	HX_("njByteAlign",c1,c2,00,58),
	HX_("njShowBits",ff,76,44,7a),
	HX_("njSkipBits",81,a1,12,89),
	HX_("njGetBits",e0,31,89,33),
	HX_("njDecodeLength",10,93,88,3d),
	HX_("njSkipMarker",f5,f0,7e,b5),
	HX_("njDecodeSOF",e0,6b,ec,e4),
	HX_("njDecodeDQT",dd,0b,e1,e4),
	HX_("njDecodeDHT",06,04,e1,e4),
	HX_("njDecodeDRI",b1,0c,e1,e4),
	HX_("vlcCode",3a,00,b9,86),
	HX_("njGetVLC",d3,ae,4d,a3),
	HX_("njRowIDCT",8a,e5,3e,bb),
	HX_("njColIDCT",b0,8e,14,f6),
	HX_("njDecodeBlock",63,ea,41,93),
	HX_("notSupported",9b,92,4c,f9),
	HX_("njDecodeScan",27,3d,01,6a),
	HX_("njUpsampleH",07,48,6b,92),
	HX_("njUpsampleV",15,48,6b,92),
	HX_("njUpsample",21,35,63,44),
	HX_("njConvert",17,85,b9,3a),
	HX_("njDecode",8a,06,12,65),
	::String(null()) };

static void NanoJpeg_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::BLOCKSIZE,"BLOCKSIZE");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::W1,"W1");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::W2,"W2");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::W3,"W3");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::W5,"W5");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::W6,"W6");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::W7,"W7");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF4A,"CF4A");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF4B,"CF4B");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF4C,"CF4C");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF4D,"CF4D");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF3A,"CF3A");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF3B,"CF3B");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF3C,"CF3C");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF3X,"CF3X");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF3Y,"CF3Y");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF3Z,"CF3Z");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF2A,"CF2A");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::CF2B,"CF2B");
	HX_MARK_MEMBER_NAME(NanoJpeg_obj::inst,"inst");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NanoJpeg_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::BLOCKSIZE,"BLOCKSIZE");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::W1,"W1");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::W2,"W2");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::W3,"W3");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::W5,"W5");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::W6,"W6");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::W7,"W7");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF4A,"CF4A");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF4B,"CF4B");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF4C,"CF4C");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF4D,"CF4D");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF3A,"CF3A");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF3B,"CF3B");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF3C,"CF3C");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF3X,"CF3X");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF3Y,"CF3Y");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF3Z,"CF3Z");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF2A,"CF2A");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::CF2B,"CF2B");
	HX_VISIT_MEMBER_NAME(NanoJpeg_obj::inst,"inst");
};

#endif

::hx::Class NanoJpeg_obj::__mClass;

static ::String NanoJpeg_obj_sStaticFields[] = {
	HX_("BLOCKSIZE",6e,b0,61,62),
	HX_("W1",fa,4b,00,00),
	HX_("W2",fb,4b,00,00),
	HX_("W3",fc,4b,00,00),
	HX_("W5",fe,4b,00,00),
	HX_("W6",ff,4b,00,00),
	HX_("W7",00,4c,00,00),
	HX_("CF4A",f0,96,7e,2c),
	HX_("CF4B",f1,96,7e,2c),
	HX_("CF4C",f2,96,7e,2c),
	HX_("CF4D",f3,96,7e,2c),
	HX_("CF3A",11,96,7e,2c),
	HX_("CF3B",12,96,7e,2c),
	HX_("CF3C",13,96,7e,2c),
	HX_("CF3X",28,96,7e,2c),
	HX_("CF3Y",29,96,7e,2c),
	HX_("CF3Z",2a,96,7e,2c),
	HX_("CF2A",32,95,7e,2c),
	HX_("CF2B",33,95,7e,2c),
	HX_("CF",a3,3a,00,00),
	HX_("njClip",2c,c9,56,30),
	HX_("inst",c6,43,bb,45),
	HX_("decode",2e,5d,ed,64),
	::String(null())
};

void NanoJpeg_obj::__register()
{
	NanoJpeg_obj _hx_dummy;
	NanoJpeg_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.NanoJpeg",44,86,9e,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NanoJpeg_obj::__GetStatic;
	__mClass->mSetStaticField = &NanoJpeg_obj::__SetStatic;
	__mClass->mMarkFunc = NanoJpeg_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NanoJpeg_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NanoJpeg_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NanoJpeg_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NanoJpeg_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NanoJpeg_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NanoJpeg_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NanoJpeg_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_57_boot)
HXDLIN(  57)		BLOCKSIZE = 64;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_355_boot)
HXDLIN( 355)		W1 = 2841;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_356_boot)
HXDLIN( 356)		W2 = 2676;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_357_boot)
HXDLIN( 357)		W3 = 2408;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_358_boot)
HXDLIN( 358)		W5 = 1609;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_359_boot)
HXDLIN( 359)		W6 = 1108;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_360_boot)
HXDLIN( 360)		W7 = 565;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_527_boot)
HXDLIN( 527)		CF4A = -9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_528_boot)
HXDLIN( 528)		CF4B = 111;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_529_boot)
HXDLIN( 529)		CF4C = 29;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_530_boot)
HXDLIN( 530)		CF4D = -3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_531_boot)
HXDLIN( 531)		CF3A = 28;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_532_boot)
HXDLIN( 532)		CF3B = 109;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_533_boot)
HXDLIN( 533)		CF3C = -9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_534_boot)
HXDLIN( 534)		CF3X = 104;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_535_boot)
HXDLIN( 535)		CF3Y = 27;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_536_boot)
HXDLIN( 536)		CF3Z = -3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_537_boot)
HXDLIN( 537)		CF2A = 139;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_538_boot)
HXDLIN( 538)		CF2B = -11;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d70c768cc1eabb2f_742_boot)
HXDLIN( 742)		inst = null();
            	}
}

} // end namespace hxd
} // end namespace res
