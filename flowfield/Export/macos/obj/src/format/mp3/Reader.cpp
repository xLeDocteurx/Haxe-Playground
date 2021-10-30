#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_mp3_Bitrate
#include <format/mp3/Bitrate.h>
#endif
#ifndef INCLUDED_format_mp3_CChannelMode
#include <format/mp3/CChannelMode.h>
#endif
#ifndef INCLUDED_format_mp3_CEmphasis
#include <format/mp3/CEmphasis.h>
#endif
#ifndef INCLUDED_format_mp3_CLayer
#include <format/mp3/CLayer.h>
#endif
#ifndef INCLUDED_format_mp3_ChannelMode
#include <format/mp3/ChannelMode.h>
#endif
#ifndef INCLUDED_format_mp3_Emphasis
#include <format/mp3/Emphasis.h>
#endif
#ifndef INCLUDED_format_mp3_FrameType
#include <format/mp3/FrameType.h>
#endif
#ifndef INCLUDED_format_mp3_Layer
#include <format/mp3/Layer.h>
#endif
#ifndef INCLUDED_format_mp3_MPEG
#include <format/mp3/MPEG.h>
#endif
#ifndef INCLUDED_format_mp3_MPEGVersion
#include <format/mp3/MPEGVersion.h>
#endif
#ifndef INCLUDED_format_mp3_Reader
#include <format/mp3/Reader.h>
#endif
#ifndef INCLUDED_format_mp3_SamplingRate
#include <format/mp3/SamplingRate.h>
#endif
#ifndef INCLUDED_format_mp3_Tools
#include <format/mp3/Tools.h>
#endif
#ifndef INCLUDED_format_tools_BitsInput
#include <format/tools/BitsInput.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_500e5aaed0613062_62_new,"format.mp3.Reader","new",0x72e5076a,"format.mp3.Reader.new","format/mp3/Reader.hx",62,0x6b601e84)
HX_LOCAL_STACK_FRAME(_hx_pos_500e5aaed0613062_78_skipID3v2,"format.mp3.Reader","skipID3v2",0xa7d30c9f,"format.mp3.Reader.skipID3v2","format/mp3/Reader.hx",78,0x6b601e84)
HX_LOCAL_STACK_FRAME(_hx_pos_500e5aaed0613062_101_seekFrame,"format.mp3.Reader","seekFrame",0x0edcaa1f,"format.mp3.Reader.seekFrame","format/mp3/Reader.hx",101,0x6b601e84)
HX_LOCAL_STACK_FRAME(_hx_pos_500e5aaed0613062_150_readFrames,"format.mp3.Reader","readFrames",0x2a0db1d2,"format.mp3.Reader.readFrames","format/mp3/Reader.hx",150,0x6b601e84)
HX_LOCAL_STACK_FRAME(_hx_pos_500e5aaed0613062_170_readFrameHeader,"format.mp3.Reader","readFrameHeader",0x9f2c73ee,"format.mp3.Reader.readFrameHeader","format/mp3/Reader.hx",170,0x6b601e84)
HX_LOCAL_STACK_FRAME(_hx_pos_500e5aaed0613062_250_readFrame,"format.mp3.Reader","readFrame",0xc915df81,"format.mp3.Reader.readFrame","format/mp3/Reader.hx",250,0x6b601e84)
HX_LOCAL_STACK_FRAME(_hx_pos_500e5aaed0613062_280_read,"format.mp3.Reader","read",0x18263d0c,"format.mp3.Reader.read","format/mp3/Reader.hx",280,0x6b601e84)
namespace format{
namespace mp3{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_GC_STACKFRAME(&_hx_pos_500e5aaed0613062_62_new)
HXLINE(  63)		this->i = i;
HXLINE(  64)		i->set_bigEndian(true);
HXLINE(  65)		this->bits =  ::format::tools::BitsInput_obj::__alloc( HX_CTX ,i);
HXLINE(  67)		this->samples = 0;
HXLINE(  68)		this->sampleSize = 0;
HXLINE(  69)		this->any_read = false;
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x3384b598;
}

void Reader_obj::skipID3v2(){
            	HX_STACKFRAME(&_hx_pos_500e5aaed0613062_78_skipID3v2)
HXLINE(  79)		this->id3v2_version = this->i->readUInt16();
HXLINE(  80)		this->id3v2_flags = this->i->readByte();
HXLINE(  87)		int size = (this->i->readByte() & 127);
HXLINE(  88)		size = ((size << 7) | (this->i->readByte() & 127));
HXLINE(  89)		size = ((size << 7) | (this->i->readByte() & 127));
HXLINE(  90)		size = ((size << 7) | (this->i->readByte() & 127));
HXLINE(  92)		this->id3v2_data = this->i->read(size);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,skipID3v2,(void))

 ::format::mp3::FrameType Reader_obj::seekFrame(){
            	HX_STACKFRAME(&_hx_pos_500e5aaed0613062_101_seekFrame)
HXLINE( 102)		bool found = false;
HXLINE( 103)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 104)			int b;
HXLINE( 106)			while(true){
HXLINE( 108)				b = this->i->readByte();
HXLINE( 109)				if (!(this->any_read)) {
HXLINE( 110)					this->any_read = true;
HXLINE( 113)					if ((b == 73)) {
HXLINE( 114)						b = this->i->readByte();
HXLINE( 115)						if ((b == 68)) {
HXLINE( 116)							b = this->i->readByte();
HXLINE( 117)							if ((b == 51)) {
HXLINE( 123)								this->skipID3v2();
            							}
            						}
            					}
            				}
HXLINE( 129)				if ((b == 255)) {
HXLINE( 131)					this->bits->nbits = 0;
HXLINE( 132)					b = this->bits->readBits(3);
HXLINE( 133)					if ((b == 7)) {
HXLINE( 135)						return ::format::mp3::FrameType_obj::FT_MP3_dyn();
            					}
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 141)				{
HXLINE( 141)					null();
            				}
HXLINE( 103)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE( 142)					return ::format::mp3::FrameType_obj::FT_NONE_dyn();
            				}
            				else {
HXLINE( 103)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN( 103)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,seekFrame,return )

::Array< ::Dynamic> Reader_obj::readFrames(){
            	HX_STACKFRAME(&_hx_pos_500e5aaed0613062_150_readFrames)
HXLINE( 151)		::Array< ::Dynamic> frames = ::Array_obj< ::Dynamic>::__new();
HXLINE( 152)		 ::format::mp3::FrameType ft;
HXLINE( 153)		while(true){
HXLINE( 153)			ft = this->seekFrame();
HXDLIN( 153)			if (!(::hx::IsPointerNotEq( ft,::format::mp3::FrameType_obj::FT_NONE_dyn() ))) {
HXLINE( 153)				goto _hx_goto_4;
            			}
HXLINE( 154)			switch((int)(ft->_hx_getIndex())){
            				case (int)0: {
HXLINE( 156)					 ::Dynamic f = this->readFrame();
HXLINE( 157)					if (::hx::IsNotNull( f )) {
HXLINE( 158)						frames->push(f);
            					}
            				}
            				break;
            				case (int)1: {
            				}
            				break;
            			}
            		}
            		_hx_goto_4:;
HXLINE( 164)		return frames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readFrames,return )

 ::Dynamic Reader_obj::readFrameHeader(){
            	HX_STACKFRAME(&_hx_pos_500e5aaed0613062_170_readFrameHeader)
HXLINE( 175)		int version = this->bits->readBits(2);
HXLINE( 176)		int layer = this->bits->readBits(2);
HXLINE( 178)		bool hasCrc = !(this->bits->readBit());
HXLINE( 181)		bool _hx_tmp;
HXDLIN( 181)		if ((version != ::format::mp3::MPEG_obj::Reserved)) {
HXLINE( 181)			_hx_tmp = (layer == ::format::mp3::CLayer_obj::LReserved);
            		}
            		else {
HXLINE( 181)			_hx_tmp = true;
            		}
HXDLIN( 181)		if (_hx_tmp) {
HXLINE( 182)			return null();
            		}
HXLINE( 186)		int bitrateIdx = this->bits->readBits(4);
HXLINE( 187)		 ::format::mp3::Bitrate bitrate = ::format::mp3::Tools_obj::getBitrate(version,layer,bitrateIdx);
HXLINE( 189)		int samplingRateIdx = this->bits->readBits(2);
HXLINE( 190)		 ::format::mp3::SamplingRate samplingRate = ::format::mp3::Tools_obj::getSamplingRate(version,samplingRateIdx);
HXLINE( 192)		bool isPadded = this->bits->readBit();
HXLINE( 195)		bool privateBit = this->bits->readBit();
HXLINE( 198)		bool _hx_tmp1;
HXDLIN( 198)		bool _hx_tmp2;
HXDLIN( 198)		if (::hx::IsPointerNotEq( bitrate,::format::mp3::Bitrate_obj::BR_Bad_dyn() )) {
HXLINE( 198)			_hx_tmp2 = ::hx::IsPointerEq( bitrate,::format::mp3::Bitrate_obj::BR_Free_dyn() );
            		}
            		else {
HXLINE( 198)			_hx_tmp2 = true;
            		}
HXDLIN( 198)		if (!(_hx_tmp2)) {
HXLINE( 198)			_hx_tmp1 = ::hx::IsPointerEq( samplingRate,::format::mp3::SamplingRate_obj::SR_Bad_dyn() );
            		}
            		else {
HXLINE( 198)			_hx_tmp1 = true;
            		}
HXDLIN( 198)		if (_hx_tmp1) {
HXLINE( 199)			return null();
            		}
HXLINE( 203)		int channelMode = this->bits->readBits(2);
HXLINE( 206)		bool isIntensityStereo = this->bits->readBit();
HXLINE( 207)		bool isMSStereo = this->bits->readBit();
HXLINE( 209)		bool isCopyrighted = this->bits->readBit();
HXLINE( 210)		bool isOriginal = this->bits->readBit();
HXLINE( 211)		int emphasis = this->bits->readBits(2);
HXLINE( 215)		int crc16 = 0;
HXLINE( 216)		if (hasCrc) {
HXLINE( 217)			crc16 = this->i->readUInt16();
            		}
HXLINE( 222)		 ::format::mp3::MPEGVersion _hx_tmp3 = ::format::mp3::MPEG_obj::num2Enum(version);
HXLINE( 223)		 ::format::mp3::Layer _hx_tmp4 = ::format::mp3::CLayer_obj::num2Enum(layer);
HXLINE( 233)		 ::format::mp3::ChannelMode _hx_tmp5 = ::format::mp3::CChannelMode_obj::num2Enum(channelMode);
HXLINE( 221)		return  ::Dynamic(::hx::Anon_obj::Create(14)
            			->setFixed(0,HX_("privateBit",8a,07,b9,86),privateBit)
            			->setFixed(1,HX_("isMSStereo",28,cd,d2,8d),isMSStereo)
            			->setFixed(2,HX_("isCopyrighted",5c,b8,4b,a5),isCopyrighted)
            			->setFixed(3,HX_("hasCrc",9a,8f,32,bb),hasCrc)
            			->setFixed(4,HX_("isIntensityStereo",81,95,5b,f4),isIntensityStereo)
            			->setFixed(5,HX_("bitrate",2d,f6,cf,fc),bitrate)
            			->setFixed(6,HX_("channelMode",c6,1d,2f,18),_hx_tmp5)
            			->setFixed(7,HX_("emphasis",bc,a5,a4,2f),::format::mp3::CEmphasis_obj::num2Enum(emphasis))
            			->setFixed(8,HX_("samplingRate",67,a6,32,36),samplingRate)
            			->setFixed(9,HX_("isPadded",da,d9,a5,3c),isPadded)
            			->setFixed(10,HX_("crc16",b9,0a,51,4c),crc16)
            			->setFixed(11,HX_("isOriginal",5b,46,97,5b),isOriginal)
            			->setFixed(12,HX_("layer",d1,81,c0,6f),_hx_tmp4)
            			->setFixed(13,HX_("version",18,e7,f1,7c),_hx_tmp3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readFrameHeader,return )

 ::Dynamic Reader_obj::readFrame(){
            	HX_STACKFRAME(&_hx_pos_500e5aaed0613062_250_readFrame)
HXLINE( 251)		 ::Dynamic header = this->readFrameHeader();
HXLINE( 253)		bool _hx_tmp;
HXDLIN( 253)		if (::hx::IsNotNull( header )) {
HXLINE( 253)			_hx_tmp = ::format::mp3::Tools_obj::isInvalidFrameHeader(header);
            		}
            		else {
HXLINE( 253)			_hx_tmp = true;
            		}
HXDLIN( 253)		if (_hx_tmp) {
HXLINE( 254)			return null();
            		}
HXLINE( 260)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 261)			 ::haxe::io::Input data = this->i;
HXDLIN( 261)			 ::haxe::io::Bytes data1 = data->read(::format::mp3::Tools_obj::getSampleDataSizeHdr(header));
HXLINE( 262)			 ::format::mp3::Reader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 262)			int _hx_tmp1 = _hx_tmp->samples;
HXDLIN( 262)			_hx_tmp->samples = (_hx_tmp1 + ::format::mp3::Tools_obj::getSampleCountHdr(header));
HXLINE( 263)			 ::format::mp3::Reader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)			_hx_tmp2->sampleSize = (_hx_tmp2->sampleSize + data1->length);
HXLINE( 265)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("header",8d,09,00,fd),header)
            				->setFixed(1,HX_("data",2a,56,63,42),data1));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 270)				{
HXLINE( 270)					null();
            				}
HXLINE( 260)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE( 271)					return null();
            				}
            				else {
HXLINE( 260)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN( 260)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readFrame,return )

 ::Dynamic Reader_obj::read(){
            	HX_STACKFRAME(&_hx_pos_500e5aaed0613062_280_read)
HXLINE( 281)		::Array< ::Dynamic> fs = this->readFrames();
HXLINE( 288)		 ::Dynamic _hx_tmp;
HXDLIN( 288)		if (::hx::IsNull( this->id3v2_data )) {
HXLINE( 288)			_hx_tmp = null();
            		}
            		else {
HXLINE( 288)			_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("flagByte",d4,9c,07,98),this->id3v2_flags)
            				->setFixed(1,HX_("data",2a,56,63,42),this->id3v2_data)
            				->setFixed(2,HX_("versionBytes",33,da,1e,53),this->id3v2_version));
            		}
HXLINE( 283)		return  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("frames",a6,af,85,ac),fs)
            			->setFixed(1,HX_("id3v2",f4,58,53,b7),_hx_tmp)
            			->setFixed(2,HX_("sampleCount",45,7c,a7,61),this->samples)
            			->setFixed(3,HX_("sampleSize",0b,8a,fb,67),this->sampleSize));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "format.mp3.Reader"));
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
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_MEMBER_NAME(sampleSize,"sampleSize");
	HX_MARK_MEMBER_NAME(any_read,"any_read");
	HX_MARK_MEMBER_NAME(id3v2_data,"id3v2_data");
	HX_MARK_MEMBER_NAME(id3v2_version,"id3v2_version");
	HX_MARK_MEMBER_NAME(id3v2_flags,"id3v2_flags");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(bits,"bits");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(samples,"samples");
	HX_VISIT_MEMBER_NAME(sampleSize,"sampleSize");
	HX_VISIT_MEMBER_NAME(any_read,"any_read");
	HX_VISIT_MEMBER_NAME(id3v2_data,"id3v2_data");
	HX_VISIT_MEMBER_NAME(id3v2_version,"id3v2_version");
	HX_VISIT_MEMBER_NAME(id3v2_flags,"id3v2_flags");
}

::hx::Val Reader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return ::hx::Val( bits ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		if (HX_FIELD_EQ(inName,"samples") ) { return ::hx::Val( samples ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"any_read") ) { return ::hx::Val( any_read ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"skipID3v2") ) { return ::hx::Val( skipID3v2_dyn() ); }
		if (HX_FIELD_EQ(inName,"seekFrame") ) { return ::hx::Val( seekFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"readFrame") ) { return ::hx::Val( readFrame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleSize") ) { return ::hx::Val( sampleSize ); }
		if (HX_FIELD_EQ(inName,"id3v2_data") ) { return ::hx::Val( id3v2_data ); }
		if (HX_FIELD_EQ(inName,"readFrames") ) { return ::hx::Val( readFrames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"id3v2_flags") ) { return ::hx::Val( id3v2_flags ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"id3v2_version") ) { return ::hx::Val( id3v2_version ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readFrameHeader") ) { return ::hx::Val( readFrameHeader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast<  ::format::tools::BitsInput >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"any_read") ) { any_read=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleSize") ) { sampleSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id3v2_data") ) { id3v2_data=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"id3v2_flags") ) { id3v2_flags=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"id3v2_version") ) { id3v2_version=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("bits",06,fb,16,41));
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("samples",09,c5,c9,83));
	outFields->push(HX_("sampleSize",0b,8a,fb,67));
	outFields->push(HX_("any_read",c9,54,3d,ea));
	outFields->push(HX_("id3v2_data",95,24,16,c8));
	outFields->push(HX_("id3v2_version",8d,ad,2d,83));
	outFields->push(HX_("id3v2_flags",7c,fa,4d,79));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Reader_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsObject /*  ::format::tools::BitsInput */ ,(int)offsetof(Reader_obj,bits),HX_("bits",06,fb,16,41)},
	{::hx::fsInt,(int)offsetof(Reader_obj,version),HX_("version",18,e7,f1,7c)},
	{::hx::fsInt,(int)offsetof(Reader_obj,samples),HX_("samples",09,c5,c9,83)},
	{::hx::fsInt,(int)offsetof(Reader_obj,sampleSize),HX_("sampleSize",0b,8a,fb,67)},
	{::hx::fsBool,(int)offsetof(Reader_obj,any_read),HX_("any_read",c9,54,3d,ea)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Reader_obj,id3v2_data),HX_("id3v2_data",95,24,16,c8)},
	{::hx::fsInt,(int)offsetof(Reader_obj,id3v2_version),HX_("id3v2_version",8d,ad,2d,83)},
	{::hx::fsInt,(int)offsetof(Reader_obj,id3v2_flags),HX_("id3v2_flags",7c,fa,4d,79)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("bits",06,fb,16,41),
	HX_("version",18,e7,f1,7c),
	HX_("samples",09,c5,c9,83),
	HX_("sampleSize",0b,8a,fb,67),
	HX_("any_read",c9,54,3d,ea),
	HX_("id3v2_data",95,24,16,c8),
	HX_("id3v2_version",8d,ad,2d,83),
	HX_("id3v2_flags",7c,fa,4d,79),
	HX_("skipID3v2",15,f2,27,b6),
	HX_("seekFrame",95,8f,31,1d),
	HX_("readFrames",9c,93,01,a6),
	HX_("readFrameHeader",e4,d5,9f,02),
	HX_("readFrame",f7,c4,6a,d7),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.mp3.Reader",78,ca,e6,5f);
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
} // end namespace mp3
