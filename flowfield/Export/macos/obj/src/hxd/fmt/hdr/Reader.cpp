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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hxd_fmt_hdr_Reader
#include <hxd/fmt/hdr/Reader.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6c124de387d27cec_5_decode,"hxd.fmt.hdr.Reader","decode",0xda813466,"hxd.fmt.hdr.Reader.decode","hxd/fmt/hdr/Reader.hx",5,0xcaf5f065)
namespace hxd{
namespace fmt{
namespace hdr{

void Reader_obj::__construct() { }

Dynamic Reader_obj::__CreateEmpty() { return new Reader_obj; }

void *Reader_obj::_hx_vtable = 0;

Dynamic Reader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reader_obj > _hx_result = new Reader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Reader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x30473840;
}

 ::Dynamic Reader_obj::decode( ::haxe::io::Bytes bytes,bool sRGB){
            	HX_GC_STACKFRAME(&_hx_pos_6c124de387d27cec_5_decode)
HXLINE(   6)		 ::haxe::io::BytesInput f =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null());
HXLINE(   7)		int width = 0;
HXDLIN(   7)		int height = 0;
HXLINE(   8)		 ::haxe::ds::StringMap keys =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(   9)		while(true){
HXLINE(  10)			::String line = f->readLine();
HXLINE(  11)			if ((line == HX_("",00,00,00,00))) {
HXLINE(  11)				goto _hx_goto_0;
            			}
HXLINE(  12)			if (::hx::IsEq( line.charCodeAt(0),35 )) {
HXLINE(  12)				continue;
            			}
HXLINE(  13)			::Array< ::String > nameValue = line.split(HX_("=",3d,00,00,00));
HXLINE(  14)			if ((nameValue->length > 1)) {
HXLINE(  15)				::String key = ( (::String)(nameValue->shift()) );
HXDLIN(  15)				keys->set(key,nameValue->join(HX_("=",3d,00,00,00)));
            			}
            		}
            		_hx_goto_0:;
HXLINE(  18)		::Array< ::String > parts = f->readLine().split(HX_(" ",20,00,00,00));
HXLINE(  19)		height = ( (int)(::Std_obj::parseInt(parts->__get(1))) );
HXLINE(  20)		width = ( (int)(::Std_obj::parseInt(parts->__get(3))) );
HXLINE(  22)		bool gamma = (keys->get_string(HX_("GAMMA",07,bf,a4,0c)) == HX_("1",31,00,00,00));
HXLINE(  23)		 ::haxe::io::Bytes data = ::haxe::io::Bytes_obj::alloc((((width * height) * 4) * 4));
HXLINE(  25)		Float exposure = ((Float)1.0);
HXLINE(  27)		::String exp = keys->get_string(HX_("EXPOSURE",07,c3,4b,66));
HXLINE(  28)		if (::hx::IsNotNull( exp )) {
HXLINE(  29)			Float exp1 = ::Std_obj::parseFloat(exp);
HXLINE(  30)			bool _hx_tmp;
HXDLIN(  30)			if (!((exp1 < ((Float)1e-12)))) {
HXLINE(  30)				_hx_tmp = (exp1 < ((Float)1e12));
            			}
            			else {
HXLINE(  30)				_hx_tmp = true;
            			}
HXDLIN(  30)			if (_hx_tmp) {
HXLINE(  30)				exposure = exp1;
            			}
            		}
HXLINE(  33)		Float gammaCorrect;
HXDLIN(  33)		if (sRGB) {
HXLINE(  33)			gammaCorrect = ( (Float)(1) );
            		}
            		else {
HXLINE(  33)			gammaCorrect = ((Float)0.45454545454545453);
            		}
HXLINE(  34)		::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN(  34)		{
HXLINE(  34)			int _g1 = 0;
HXDLIN(  34)			while((_g1 < 256)){
HXLINE(  34)				_g1 = (_g1 + 1);
HXDLIN(  34)				int e = (_g1 - 1);
HXDLIN(  34)				_g->push(::Math_obj::pow(( (Float)(e) ),gammaCorrect));
            			}
            		}
HXDLIN(  34)		::Array< Float > gammaVals = _g;
HXLINE(  35)		::Array< Float > _g2 = ::Array_obj< Float >::__new(0);
HXDLIN(  35)		{
HXLINE(  35)			int _g3 = 0;
HXDLIN(  35)			while((_g3 < 256)){
HXLINE(  35)				_g3 = (_g3 + 1);
HXDLIN(  35)				int e = (_g3 - 1);
HXDLIN(  35)				_g2->push(::Math_obj::pow((::Math_obj::pow(( (Float)(2) ),( (Float)((e - 128)) )) / (( (Float)(256) ) * exposure)),gammaCorrect));
            			}
            		}
HXDLIN(  35)		::Array< Float > exps = _g2;
HXLINE(  37)		{
HXLINE(  37)			::String _g4 = keys->get_string(HX_("FORMAT",37,3b,11,b0));
HXDLIN(  37)			if (::hx::IsNull( _g4 )) {
HXLINE(  88)				::String fmt = _g4;
HXLINE(  89)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported HDR format ",b4,4c,c6,73) + fmt)));
            			}
            			else {
HXLINE(  37)				if ((_g4 == HX_("32-bit_rle_rgbe",ec,b1,f1,ca))) {
HXLINE(  40)					int dataPos = f->pos;
HXLINE(  41)					int scanLen = (width * 4);
HXLINE(  42)					 ::haxe::io::Bytes scanLine = ::haxe::io::Bytes_obj::alloc(scanLen);
HXLINE(  43)					int widthBE = ((width >> 8) | ((width & 255) << 8));
HXLINE(  49)					{
HXLINE(  49)						int _g = 0;
HXDLIN(  49)						int _g1 = height;
HXDLIN(  49)						while((_g < _g1)){
HXLINE(  49)							_g = (_g + 1);
HXDLIN(  49)							int y = (_g - 1);
HXLINE(  50)							int h = (((( (int)(bytes->b->__get(dataPos)) ) | (( (int)(bytes->b->__get((dataPos + 1))) ) << 8)) | (( (int)(bytes->b->__get((dataPos + 2))) ) << 16)) | (( (int)(bytes->b->__get((dataPos + 3))) ) << 24));
HXLINE(  51)							bool _hx_tmp;
HXDLIN(  51)							if (((h & 65535) == 514)) {
HXLINE(  51)								_hx_tmp = (::hx::UShr(h,16) != widthBE);
            							}
            							else {
HXLINE(  51)								_hx_tmp = true;
            							}
HXDLIN(  51)							if (_hx_tmp) {
HXLINE(  53)								scanLine->blit(0,bytes,dataPos,(width * 4));
HXLINE(  54)								dataPos = (dataPos + (width * 4));
            							}
            							else {
HXLINE(  56)								dataPos = (dataPos + 4);
HXLINE(  57)								int p = 0;
HXLINE(  58)								int end = (width * 4);
HXLINE(  59)								while((p < end)){
HXLINE(  60)									dataPos = (dataPos + 1);
HXDLIN(  60)									int len = ( (int)(bytes->b->__get((dataPos - 1))) );
HXLINE(  61)									if ((len > 128)) {
HXLINE(  62)										len = (len - 128);
HXLINE(  63)										dataPos = (dataPos + 1);
HXDLIN(  63)										scanLine->fill(p,len,( (int)(bytes->b->__get((dataPos - 1))) ));
            									}
            									else {
HXLINE(  65)										scanLine->blit(p,bytes,dataPos,len);
HXLINE(  66)										dataPos = (dataPos + len);
            									}
HXLINE(  68)									p = (p + len);
            								}
            							}
HXLINE(  71)							int pos = ((y * width) * 16);
HXLINE(  80)							{
HXLINE(  80)								int _g1 = 0;
HXDLIN(  80)								int _g2 = width;
HXDLIN(  80)								while((_g1 < _g2)){
HXLINE(  80)									_g1 = (_g1 + 1);
HXDLIN(  80)									int x = (_g1 - 1);
HXLINE(  81)									Float e = exps->__get(( (int)(scanLine->b->__get((x + (width * 3)))) ));
HXLINE(  82)									{
HXLINE(  82)										data->setFloat(pos,(gammaVals->__get(( (int)(scanLine->b->__get(x)) )) * e));
HXDLIN(  82)										pos = (pos + 4);
            									}
HXLINE(  83)									{
HXLINE(  83)										data->setFloat(pos,(gammaVals->__get(( (int)(scanLine->b->__get((x + width))) )) * e));
HXDLIN(  83)										pos = (pos + 4);
            									}
HXLINE(  84)									{
HXLINE(  84)										data->setFloat(pos,(gammaVals->__get(( (int)(scanLine->b->__get((x + (width << 1)))) )) * e));
HXDLIN(  84)										pos = (pos + 4);
            									}
HXLINE(  85)									{
HXLINE(  85)										data->setFloat(pos,((Float)1.0));
HXDLIN(  85)										pos = (pos + 4);
            									}
            								}
            							}
            						}
            					}
            				}
            				else {
HXLINE(  88)					::String fmt = _g4;
HXLINE(  89)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported HDR format ",b4,4c,c6,73) + fmt)));
            				}
            			}
            		}
HXLINE(  91)		return  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("gamma",27,87,b6,8e),gamma)
            			->setFixed(1,HX_("bytes",6b,08,98,bd),data)
            			->setFixed(2,HX_("width",06,b6,62,ca),width)
            			->setFixed(3,HX_("height",e7,07,4c,02),height));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,decode,return )


Reader_obj::Reader_obj()
{
}

bool Reader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Reader_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Reader_obj::__mClass;

static ::String Reader_obj_sStaticFields[] = {
	HX_("decode",2e,5d,ed,64),
	::String(null())
};

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.hdr.Reader",36,d2,a9,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reader_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Reader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Reader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace fmt
} // end namespace hdr
