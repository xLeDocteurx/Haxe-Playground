#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_wav_Reader
#include <format/wav/Reader.h>
#endif
#ifndef INCLUDED_format_wav_WAVEFormat
#include <format/wav/WAVEFormat.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c0495d102eadeecb_38_new,"format.wav.Reader","new",0x2c7c9f2e,"format.wav.Reader.new","format/wav/Reader.hx",38,0x04e3ab40)
HX_LOCAL_STACK_FRAME(_hx_pos_c0495d102eadeecb_45_readInt,"format.wav.Reader","readInt",0x8afd0107,"format.wav.Reader.readInt","format/wav/Reader.hx",45,0x04e3ab40)
HX_LOCAL_STACK_FRAME(_hx_pos_c0495d102eadeecb_51_read,"format.wav.Reader","read",0xc33370c8,"format.wav.Reader.read","format/wav/Reader.hx",51,0x04e3ab40)
namespace format{
namespace wav{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_c0495d102eadeecb_38_new)
HXLINE(  39)		this->i = i;
HXLINE(  40)		i->set_bigEndian(false);
            	}

Dynamic Reader_obj::__CreateEmpty() { return new Reader_obj; }

void *Reader_obj::_hx_vtable = 0;

Dynamic Reader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reader_obj > _hx_result = new Reader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Reader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e714e38;
}

int Reader_obj::readInt(){
            	HX_STACKFRAME(&_hx_pos_c0495d102eadeecb_45_readInt)
HXDLIN(  45)		return this->i->readInt32();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readInt,return )

 ::Dynamic Reader_obj::read(){
            	HX_STACKFRAME(&_hx_pos_c0495d102eadeecb_51_read)
HXLINE(  53)		if ((this->i->readString(4,null()) != HX_("RIFF",b7,20,6b,36))) {
HXLINE(  54)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("RIFF header expected",02,8e,93,81)));
            		}
HXLINE(  56)		int len = this->i->readInt32();
HXLINE(  58)		if ((this->i->readString(4,null()) != HX_("WAVE",b9,2d,b3,39))) {
HXLINE(  59)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("WAVE signature not found",66,50,d1,19)));
            		}
HXLINE(  61)		::String fmt = this->i->readString(4,null());
HXLINE(  62)		while((fmt != HX_("fmt ",33,de,be,43))){
HXLINE(  63)			::String _hx_switch_0 = fmt;
            			if (  (_hx_switch_0==HX_("JUNK",c8,8d,2a,31)) ){
HXLINE(  65)				int junkLen = this->i->readInt32();
HXLINE(  66)				this->i->read(junkLen);
HXLINE(  67)				fmt = this->i->readString(4,null());
HXLINE(  64)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("bext",7f,f5,13,41)) ){
HXLINE(  69)				int bextLen = this->i->readInt32();
HXLINE(  70)				this->i->read(bextLen);
HXLINE(  71)				fmt = this->i->readString(4,null());
HXLINE(  68)				goto _hx_goto_3;
            			}
            			/* default */{
HXLINE(  73)				goto _hx_goto_2;
            			}
            			_hx_goto_3:;
            		}
            		_hx_goto_2:;
HXLINE(  76)		if ((fmt != HX_("fmt ",33,de,be,43))) {
HXLINE(  77)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("unsupported wave chunk ",af,20,1b,18) + fmt)));
            		}
HXLINE(  79)		int fmtlen = this->i->readInt32();
HXLINE(  80)		 ::format::wav::WAVEFormat format;
HXDLIN(  80)		switch((int)(this->i->readUInt16())){
            			case (int)1: case (int)3: {
HXLINE(  80)				format = ::format::wav::WAVEFormat_obj::WF_PCM_dyn();
            			}
            			break;
            			default:{
HXLINE(  82)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("only PCM (uncompressed) WAV files are supported",06,46,96,77)));
            			}
            		}
HXLINE(  84)		int channels = this->i->readUInt16();
HXLINE(  85)		int samplingRate = this->i->readInt32();
HXLINE(  86)		int byteRate = this->i->readInt32();
HXLINE(  87)		int blockAlign = this->i->readUInt16();
HXLINE(  88)		int bitsPerSample = this->i->readUInt16();
HXLINE(  90)		if ((fmtlen > 16)) {
HXLINE(  91)			this->i->read((fmtlen - 16));
            		}
HXLINE(  93)		::String nextChunk = this->i->readString(4,null());
HXLINE(  94)		while((nextChunk != HX_("data",2a,56,63,42))){
HXLINE(  96)			 ::haxe::io::Input _hx_tmp = this->i;
HXDLIN(  96)			_hx_tmp->read(this->i->readInt32());
HXLINE(  97)			nextChunk = this->i->readString(4,null());
            		}
HXLINE( 101)		if ((nextChunk != HX_("data",2a,56,63,42))) {
HXLINE( 102)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("expected data subchunk",fb,5d,1d,86)));
            		}
HXLINE( 104)		int datalen = this->i->readInt32();
HXLINE( 106)		 ::haxe::io::Bytes data;
HXLINE( 107)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 108)			data = this->i->read(datalen);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 109)				{
HXLINE( 109)					null();
            				}
HXLINE( 107)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE( 110)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid chunk data length",60,da,82,ba)));
            				}
            				else {
HXLINE( 107)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 113)		::Array< ::Dynamic> cuePoints = ::Array_obj< ::Dynamic>::__new();
HXLINE( 114)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 116)			while(true){
HXLINE( 117)				::String nextChunk = this->i->readString(4,null());
HXLINE( 118)				if ((nextChunk == HX_("cue ",4d,3f,c9,41))) {
HXLINE( 120)					this->i->readInt32();
HXLINE( 121)					int nbCuePoints = this->i->readInt32();
HXLINE( 123)					{
HXLINE( 123)						int _g = 0;
HXDLIN( 123)						int _g1 = nbCuePoints;
HXDLIN( 123)						while((_g < _g1)){
HXLINE( 123)							_g = (_g + 1);
HXDLIN( 123)							int _ = (_g - 1);
HXLINE( 124)							int cueId = this->i->readInt32();
HXLINE( 125)							this->i->readInt32();
HXLINE( 126)							this->i->readString(4,null());
HXLINE( 127)							this->i->readInt32();
HXLINE( 128)							this->i->readInt32();
HXLINE( 129)							int cueSampleOffset = this->i->readInt32();
HXLINE( 130)							cuePoints->push( ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("sampleOffset",5d,e7,ab,a4),cueSampleOffset)
            								->setFixed(1,HX_("id",db,5b,00,00),cueId)));
            						}
            					}
            				}
            				else {
HXLINE( 133)					int n = this->i->readInt32();
HXLINE( 134)					if ((n < 0)) {
HXLINE( 134)						goto _hx_goto_5;
            					}
HXLINE( 135)					this->i->read(n);
            				}
            			}
            			_hx_goto_5:;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 139)				{
HXLINE( 139)					null();
            				}
HXLINE( 114)				if (!(::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >()))) {
HXLINE( 114)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 141)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("header",8d,09,00,fd), ::Dynamic(::hx::Anon_obj::Create(6)
            				->setFixed(0,HX_("bitsPerSample",01,01,36,c4),bitsPerSample)
            				->setFixed(1,HX_("blockAlign",38,fa,f4,f8),blockAlign)
            				->setFixed(2,HX_("format",37,8f,8e,fd),format)
            				->setFixed(3,HX_("samplingRate",67,a6,32,36),samplingRate)
            				->setFixed(4,HX_("byteRate",08,c2,50,4c),byteRate)
            				->setFixed(5,HX_("channels",50,aa,ee,6a),channels)))
            			->setFixed(1,HX_("data",2a,56,63,42),data)
            			->setFixed(2,HX_("cuePoints",f6,23,24,4b),cuePoints));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "format.wav.Reader"));
	*(void **)__this = Reader_obj::_hx_vtable;
	__this->__construct(i);
	return __this;
}

Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(version,"version");
}

::hx::Val Reader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return ::hx::Val( readInt_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("version",18,e7,f1,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Reader_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsInt,(int)offsetof(Reader_obj,version),HX_("version",18,e7,f1,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("version",18,e7,f1,7c),
	HX_("readInt",39,b3,c9,02),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.wav.Reader",3c,30,de,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Reader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Reader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace wav
