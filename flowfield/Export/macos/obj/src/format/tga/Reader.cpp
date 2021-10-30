#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_tga_ImageOrigin
#include <format/tga/ImageOrigin.h>
#endif
#ifndef INCLUDED_format_tga_ImageType
#include <format/tga/ImageType.h>
#endif
#ifndef INCLUDED_format_tga_Reader
#include <format/tga/Reader.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8879b4ce84c528cd_16_new,"format.tga.Reader","new",0x2243980c,"format.tga.Reader.new","format/tga/Reader.hx",16,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_22_read,"format.tga.Reader","read",0xdb863a2a,"format.tga.Reader.read","format/tga/Reader.hx",22,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_38_readHeader,"format.tga.Reader","readHeader",0x2507b357,"format.tga.Reader.readHeader","format/tga/Reader.hx",38,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_104_readColorMapData,"format.tga.Reader","readColorMapData",0x3352210d,"format.tga.Reader.readColorMapData","format/tga/Reader.hx",104,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_111_readImageData,"format.tga.Reader","readImageData",0xb584fb9b,"format.tga.Reader.readImageData","format/tga/Reader.hx",111,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_137_readPixels,"format.tga.Reader","readPixels",0xb4b198f7,"format.tga.Reader.readPixels","format/tga/Reader.hx",137,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_207_readMono,"format.tga.Reader","readMono",0xb6399f6d,"format.tga.Reader.readMono","format/tga/Reader.hx",207,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_267_readIndexes,"format.tga.Reader","readIndexes",0xbf6c42f6,"format.tga.Reader.readIndexes","format/tga/Reader.hx",267,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_326_parsePixel1,"format.tga.Reader","parsePixel1",0x93a7ef2a,"format.tga.Reader.parsePixel1","format/tga/Reader.hx",326,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_331_parsePixelGreyAlpha,"format.tga.Reader","parsePixelGreyAlpha",0x266a9b58,"format.tga.Reader.parsePixelGreyAlpha","format/tga/Reader.hx",331,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_336_parsePixel2,"format.tga.Reader","parsePixel2",0x93a7ef2b,"format.tga.Reader.parsePixel2","format/tga/Reader.hx",336,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_344_parsePixel3,"format.tga.Reader","parsePixel3",0x93a7ef2c,"format.tga.Reader.parsePixel3","format/tga/Reader.hx",344,0x2bdff822)
HX_LOCAL_STACK_FRAME(_hx_pos_8879b4ce84c528cd_349_parsePixel4,"format.tga.Reader","parsePixel4",0x93a7ef2d,"format.tga.Reader.parsePixel4","format/tga/Reader.hx",349,0x2bdff822)
namespace format{
namespace tga{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_16_new)
HXLINE(  17)		this->i = i;
HXLINE(  18)		i->set_bigEndian(false);
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x2fc73e9a;
}

 ::Dynamic Reader_obj::read(){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_22_read)
HXLINE(  23)		int idLength = this->i->readByte();
HXLINE(  24)		 ::Dynamic header = this->readHeader();
HXLINE(  25)		::String id;
HXDLIN(  25)		if ((idLength == 0)) {
HXLINE(  25)			id = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  25)			id = this->i->readString(idLength,null());
            		}
HXLINE(  26)		::Array< int > colorMap = this->readColorMapData(header);
HXLINE(  28)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("developerData",94,d2,af,a2),null())
            			->setFixed(1,HX_("imageId",16,2c,74,c1),id)
            			->setFixed(2,HX_("header",8d,09,00,fd),header)
            			->setFixed(3,HX_("imageData",25,eb,97,24),this->readImageData(header,colorMap))
            			->setFixed(4,HX_("colorMapData",c3,03,b6,50),colorMap));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )

 ::Dynamic Reader_obj::readHeader(){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_38_readHeader)
HXLINE(  39)		int colorMapType = this->i->readByte();
HXLINE(  40)		 ::format::tga::ImageType dataType;
HXLINE(  41)		int dataId = this->i->readByte();
HXLINE(  42)		switch((int)(dataId)){
            			case (int)0: {
HXLINE(  45)				dataType = ::format::tga::ImageType_obj::NoImage_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE(  47)				dataType = ::format::tga::ImageType_obj::UncompressedColorMapped_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE(  49)				dataType = ::format::tga::ImageType_obj::UncompressedTrueColor_dyn();
            			}
            			break;
            			case (int)3: {
HXLINE(  51)				dataType = ::format::tga::ImageType_obj::UncompressedBlackAndWhite_dyn();
            			}
            			break;
            			case (int)9: {
HXLINE(  53)				dataType = ::format::tga::ImageType_obj::RunLengthColorMapped_dyn();
            			}
            			break;
            			case (int)10: {
HXLINE(  55)				dataType = ::format::tga::ImageType_obj::RunLengthTrueColor_dyn();
            			}
            			break;
            			case (int)11: {
HXLINE(  57)				dataType = ::format::tga::ImageType_obj::RunLengthBlackAndWhite_dyn();
            			}
            			break;
            			default:{
HXLINE(  59)				dataType = ::format::tga::ImageType_obj::Unknown(dataId);
            			}
            		}
HXLINE(  62)		int colorMapOrigin = this->i->readInt16();
HXLINE(  63)		int colorMapLength = this->i->readInt16();
HXLINE(  64)		int colorMapDepth = this->i->readByte();
HXLINE(  66)		int xOrigin = this->i->readInt16();
HXLINE(  67)		int yOrigin = this->i->readInt16();
HXLINE(  68)		int width = this->i->readInt16();
HXLINE(  69)		int height = this->i->readInt16();
HXLINE(  70)		int depth = this->i->readByte();
HXLINE(  71)		int descriptor = this->i->readByte();
HXLINE(  72)		 ::format::tga::ImageOrigin origin;
HXLINE(  74)		switch((int)((descriptor & 48))){
            			case (int)16: {
HXLINE(  78)				origin = ::format::tga::ImageOrigin_obj::BottomRight_dyn();
            			}
            			break;
            			case (int)32: {
HXLINE(  77)				origin = ::format::tga::ImageOrigin_obj::TopLeft_dyn();
            			}
            			break;
            			case (int)48: {
HXLINE(  76)				origin = ::format::tga::ImageOrigin_obj::TopRight_dyn();
            			}
            			break;
            			default:{
HXLINE(  79)				origin = ::format::tga::ImageOrigin_obj::BottomLeft_dyn();
            			}
            		}
HXLINE(  82)		return  ::Dynamic(::hx::Anon_obj::Create(12)
            			->setFixed(0,HX_("imageOrigin",a1,23,41,93),origin)
            			->setFixed(1,HX_("alphaChannelBits",ab,d6,0e,b4),(descriptor & 15))
            			->setFixed(2,HX_("width",06,b6,62,ca),width)
            			->setFixed(3,HX_("colorMapEntrySize",1a,ce,71,ce),colorMapDepth)
            			->setFixed(4,HX_("colorMapLength",bf,9a,93,e9),colorMapLength)
            			->setFixed(5,HX_("xOrigin",7e,38,a5,fd),xOrigin)
            			->setFixed(6,HX_("height",e7,07,4c,02),height)
            			->setFixed(7,HX_("bitsPerPixel",8f,4d,ee,1c),depth)
            			->setFixed(8,HX_("yOrigin",3f,af,3a,27),yOrigin)
            			->setFixed(9,HX_("imageType",b5,87,3d,2f),dataType)
            			->setFixed(10,HX_("colorMapType",53,a0,5b,5b),colorMapType)
            			->setFixed(11,HX_("colorMapFirstIndex",1b,4b,59,6f),colorMapOrigin));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readHeader,return )

::Array< int > Reader_obj::readColorMapData( ::Dynamic header){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_104_readColorMapData)
HXLINE( 105)		if (::hx::IsEq( header->__Field(HX_("colorMapType",53,a0,5b,5b),::hx::paccDynamic),0 )) {
HXLINE( 105)			return null();
            		}
HXLINE( 106)		return this->readPixels(( (int)(header->__Field(HX_("colorMapEntrySize",1a,ce,71,ce),::hx::paccDynamic)) ),( (int)(header->__Field(HX_("colorMapLength",bf,9a,93,e9),::hx::paccDynamic)) ),( (int)(header->__Field(HX_("alphaChannelBits",ab,d6,0e,b4),::hx::paccDynamic)) ),false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readColorMapData,return )

::Array< int > Reader_obj::readImageData( ::Dynamic header,::Array< int > colorMap){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_111_readImageData)
HXDLIN( 111)		switch((int)( ::Dynamic(header->__Field(HX_("imageType",b5,87,3d,2f),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 114)				return null();
            			}
            			break;
            			case (int)1: {
HXLINE( 127)				return this->readIndexes(( (int)(header->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic)) ),(( (int)(header->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(header->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )),colorMap,( (int)(header->__Field(HX_("colorMapFirstIndex",1b,4b,59,6f),::hx::paccDynamic)) ),false);
            			}
            			break;
            			case (int)2: {
HXLINE( 117)				return this->readPixels(( (int)(header->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic)) ),(( (int)(header->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(header->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )),( (int)(header->__Field(HX_("alphaChannelBits",ab,d6,0e,b4),::hx::paccDynamic)) ),false);
            			}
            			break;
            			case (int)3: {
HXLINE( 122)				return this->readMono(( (int)(header->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic)) ),(( (int)(header->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(header->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )),( (int)(header->__Field(HX_("alphaChannelBits",ab,d6,0e,b4),::hx::paccDynamic)) ),false);
            			}
            			break;
            			case (int)4: {
HXLINE( 129)				return this->readIndexes(( (int)(header->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic)) ),(( (int)(header->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(header->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )),colorMap,( (int)(header->__Field(HX_("colorMapFirstIndex",1b,4b,59,6f),::hx::paccDynamic)) ),true);
            			}
            			break;
            			case (int)5: {
HXLINE( 119)				return this->readPixels(( (int)(header->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic)) ),(( (int)(header->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(header->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )),( (int)(header->__Field(HX_("alphaChannelBits",ab,d6,0e,b4),::hx::paccDynamic)) ),true);
            			}
            			break;
            			case (int)6: {
HXLINE( 124)				return this->readMono(( (int)(header->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic)) ),(( (int)(header->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ) * ( (int)(header->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) )),( (int)(header->__Field(HX_("alphaChannelBits",ab,d6,0e,b4),::hx::paccDynamic)) ),true);
            			}
            			break;
            			default:{
HXLINE( 132)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported image data type!",41,d2,db,55)));
            			}
            		}
HXLINE( 111)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,readImageData,return )

::Array< int > Reader_obj::readPixels(int bitsPerPixel,int amount,int alphaChannelBits,bool rle){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_137_readPixels)
HXLINE( 138)		::Array< int > this1 = ::Array_obj< int >::__new(amount);
HXDLIN( 138)		::Array< int > list = this1;
HXLINE( 140)		bool alpha = (alphaChannelBits != 0);
HXLINE( 142)		int bitFieldSize = ::Std_obj::_hx_int((( (Float)(bitsPerPixel) ) / ( (Float)(3) )));
HXLINE( 143)		if ((bitFieldSize > 8)) {
HXLINE( 143)			bitFieldSize = 8;
            		}
HXLINE( 145)		 ::Dynamic parsePixel;
HXLINE( 146)		 ::Dynamic readEntry;
HXLINE( 147)		switch((int)(bitsPerPixel)){
            			case (int)8: {
HXLINE( 150)				readEntry = this->i->readByte_dyn();
HXLINE( 151)				parsePixel = this->parsePixel1_dyn();
            			}
            			break;
            			case (int)16: {
HXLINE( 153)				readEntry = this->i->readUInt16_dyn();
HXLINE( 154)				parsePixel = this->parsePixel2_dyn();
            			}
            			break;
            			case (int)24: {
HXLINE( 156)				readEntry = this->i->readUInt24_dyn();
HXLINE( 157)				parsePixel = this->parsePixel3_dyn();
            			}
            			break;
            			case (int)32: {
HXLINE( 159)				readEntry = this->i->readInt32_dyn();
HXLINE( 160)				parsePixel = this->parsePixel4_dyn();
            			}
            			break;
            			default:{
HXLINE( 162)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported bits per pixels amount!",88,5f,3c,18)));
            			}
            		}
HXLINE( 165)		if (rle) {
HXLINE( 167)			int rleChunk;
HXLINE( 168)			int i = 0;
HXLINE( 169)			while((i < amount)){
HXLINE( 171)				rleChunk = this->i->readByte();
HXLINE( 172)				if (((rleChunk & 128) != 0)) {
HXLINE( 174)					rleChunk = (rleChunk & 127);
HXLINE( 175)					int pixel = ( (int)(parsePixel(readEntry(),alpha)) );
HXLINE( 176)					while((rleChunk >= 0)){
HXLINE( 178)						{
HXLINE( 178)							i = (i + 1);
HXDLIN( 178)							list->__unsafe_set((i - 1),pixel);
            						}
HXLINE( 179)						rleChunk = (rleChunk - 1);
            					}
            				}
            				else {
HXLINE( 184)					rleChunk = (rleChunk & 127);
HXLINE( 185)					while((rleChunk >= 0)){
HXLINE( 187)						{
HXLINE( 187)							i = (i + 1);
HXDLIN( 187)							int val = ( (int)(parsePixel(readEntry(),alpha)) );
HXDLIN( 187)							list->__unsafe_set((i - 1),val);
            						}
HXLINE( 188)						rleChunk = (rleChunk - 1);
            					}
            				}
            			}
            		}
            		else {
HXLINE( 195)			int _g = 0;
HXDLIN( 195)			int _g1 = amount;
HXDLIN( 195)			while((_g < _g1)){
HXLINE( 195)				_g = (_g + 1);
HXDLIN( 195)				int i = (_g - 1);
HXLINE( 197)				{
HXLINE( 197)					int val = ( (int)(parsePixel(readEntry(),alpha)) );
HXDLIN( 197)					list->__unsafe_set(i,val);
            				}
            			}
            		}
HXLINE( 203)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Reader_obj,readPixels,return )

::Array< int > Reader_obj::readMono(int bitsPerPixel,int amount,int alphaChannelBits,bool rle){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_207_readMono)
HXLINE( 208)		::Array< int > this1 = ::Array_obj< int >::__new(amount);
HXDLIN( 208)		::Array< int > list = this1;
HXLINE( 210)		bool alpha = (alphaChannelBits != 0);
HXLINE( 212)		 ::Dynamic parsePixel;
HXLINE( 213)		 ::Dynamic readEntry;
HXLINE( 214)		switch((int)(bitsPerPixel)){
            			case (int)8: {
HXLINE( 217)				readEntry = this->i->readByte_dyn();
HXLINE( 218)				parsePixel = this->parsePixel1_dyn();
            			}
            			break;
            			case (int)16: {
HXLINE( 220)				readEntry = this->i->readUInt16_dyn();
HXLINE( 221)				parsePixel = this->parsePixelGreyAlpha_dyn();
            			}
            			break;
            			default:{
HXLINE( 223)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported bits per pixels amount!",88,5f,3c,18)));
            			}
            		}
HXLINE( 226)		if (rle) {
HXLINE( 228)			int rleChunk;
HXLINE( 229)			int i = 0;
HXLINE( 230)			while((i < amount)){
HXLINE( 232)				rleChunk = this->i->readByte();
HXLINE( 233)				if (((rleChunk & 128) != 0)) {
HXLINE( 235)					rleChunk = (rleChunk & 127);
HXLINE( 236)					int pixel = ( (int)(parsePixel(readEntry(),alpha)) );
HXLINE( 237)					while((rleChunk >= 0)){
HXLINE( 239)						{
HXLINE( 239)							i = (i + 1);
HXDLIN( 239)							list->__unsafe_set((i - 1),pixel);
            						}
HXLINE( 240)						rleChunk = (rleChunk - 1);
            					}
            				}
            				else {
HXLINE( 245)					rleChunk = (rleChunk & 127);
HXLINE( 246)					while((rleChunk >= 0)){
HXLINE( 248)						{
HXLINE( 248)							i = (i + 1);
HXDLIN( 248)							int val = ( (int)(parsePixel(readEntry(),alpha)) );
HXDLIN( 248)							list->__unsafe_set((i - 1),val);
            						}
HXLINE( 249)						rleChunk = (rleChunk - 1);
            					}
            				}
            			}
            		}
            		else {
HXLINE( 256)			int _g = 0;
HXDLIN( 256)			int _g1 = amount;
HXDLIN( 256)			while((_g < _g1)){
HXLINE( 256)				_g = (_g + 1);
HXDLIN( 256)				int i = (_g - 1);
HXLINE( 258)				{
HXLINE( 258)					int val = ( (int)(parsePixel(readEntry(),alpha)) );
HXDLIN( 258)					list->__unsafe_set(i,val);
            				}
            			}
            		}
HXLINE( 263)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Reader_obj,readMono,return )

::Array< int > Reader_obj::readIndexes(int bitsPerPixel,int amount,::Array< int > colorMap,int offset,bool rle){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_267_readIndexes)
HXLINE( 268)		::Array< int > this1 = ::Array_obj< int >::__new(amount);
HXDLIN( 268)		::Array< int > list = this1;
HXLINE( 270)		 ::Dynamic readEntry;
HXLINE( 271)		switch((int)(bitsPerPixel)){
            			case (int)8: {
HXLINE( 274)				readEntry = this->i->readByte_dyn();
            			}
            			break;
            			case (int)16: {
HXLINE( 276)				readEntry = this->i->readUInt16_dyn();
            			}
            			break;
            			case (int)24: {
HXLINE( 278)				readEntry = this->i->readUInt24_dyn();
            			}
            			break;
            			case (int)32: {
HXLINE( 280)				readEntry = this->i->readInt32_dyn();
            			}
            			break;
            			default:{
HXLINE( 282)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unsupported bits per pixels amount!",88,5f,3c,18)));
            			}
            		}
HXLINE( 285)		if (rle) {
HXLINE( 287)			int i = 0;
HXLINE( 288)			int rleChunk;
HXLINE( 289)			while((i < amount)){
HXLINE( 291)				rleChunk = this->i->readByte();
HXLINE( 292)				if (((rleChunk & 128) != 0)) {
HXLINE( 294)					rleChunk = (rleChunk & 127);
HXLINE( 295)					int pixel = ( (int)(_hx_array_unsafe_get(colorMap,(offset + readEntry()))) );
HXLINE( 296)					while((rleChunk >= 0)){
HXLINE( 298)						{
HXLINE( 298)							i = (i + 1);
HXDLIN( 298)							list->__unsafe_set((i - 1),pixel);
            						}
HXLINE( 299)						rleChunk = (rleChunk - 1);
            					}
            				}
            				else {
HXLINE( 304)					rleChunk = (rleChunk & 127);
HXLINE( 305)					while((rleChunk >= 0)){
HXLINE( 307)						{
HXLINE( 307)							i = (i + 1);
HXDLIN( 307)							int val = ( (int)(_hx_array_unsafe_get(colorMap,(offset + readEntry()))) );
HXDLIN( 307)							list->__unsafe_set((i - 1),val);
            						}
HXLINE( 308)						rleChunk = (rleChunk - 1);
            					}
            				}
            			}
            		}
            		else {
HXLINE( 315)			int _g = 0;
HXDLIN( 315)			int _g1 = amount;
HXDLIN( 315)			while((_g < _g1)){
HXLINE( 315)				_g = (_g + 1);
HXDLIN( 315)				int i = (_g - 1);
HXLINE( 317)				{
HXLINE( 317)					int val = ( (int)(_hx_array_unsafe_get(colorMap,(offset + readEntry()))) );
HXDLIN( 317)					list->__unsafe_set(i,val);
            				}
            			}
            		}
HXLINE( 321)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Reader_obj,readIndexes,return )

int Reader_obj::parsePixel1(int value,bool alpha){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_326_parsePixel1)
HXDLIN( 326)		return (((value << 16) | (value << 8)) | value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,parsePixel1,return )

int Reader_obj::parsePixelGreyAlpha(int value,bool alpha){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_331_parsePixelGreyAlpha)
HXDLIN( 331)		int _hx_tmp;
HXDLIN( 331)		if (alpha) {
HXDLIN( 331)			_hx_tmp = ((value & 65280) << 16);
            		}
            		else {
HXDLIN( 331)			_hx_tmp = 0;
            		}
HXDLIN( 331)		return (_hx_tmp | this->parsePixel1((value & 255),false));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,parsePixelGreyAlpha,return )

int Reader_obj::parsePixel2(int value,bool alpha){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_336_parsePixel2)
HXDLIN( 336)		int _hx_tmp;
HXDLIN( 336)		if (alpha) {
HXDLIN( 336)			if (((value & 32768) == 1)) {
HXDLIN( 336)				_hx_tmp = -16777216;
            			}
            			else {
HXDLIN( 336)				_hx_tmp = 0;
            			}
            		}
            		else {
HXDLIN( 336)			_hx_tmp = 0;
            		}
HXDLIN( 336)		int _hx_tmp1 = (_hx_tmp | (::Std_obj::_hx_int(((( (Float)(((value & 31744) >> 10)) ) / ( (Float)(31) )) * ( (Float)(255) ))) << 16));
HXDLIN( 336)		int _hx_tmp2 = (_hx_tmp1 | (::Std_obj::_hx_int(((( (Float)(((value & 992) >> 5)) ) / ( (Float)(31) )) * ( (Float)(255) ))) << 8));
HXDLIN( 336)		return (_hx_tmp2 | ::Std_obj::_hx_int(((( (Float)((value & 31)) ) / ( (Float)(31) )) * ( (Float)(255) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,parsePixel2,return )

int Reader_obj::parsePixel3(int value,bool alpha){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_344_parsePixel3)
HXDLIN( 344)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,parsePixel3,return )

int Reader_obj::parsePixel4(int value,bool alpha){
            	HX_STACKFRAME(&_hx_pos_8879b4ce84c528cd_349_parsePixel4)
HXDLIN( 349)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,parsePixel4,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "format.tga.Reader"));
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
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
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
	case 8:
		if (HX_FIELD_EQ(inName,"readMono") ) { return ::hx::Val( readMono_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readHeader") ) { return ::hx::Val( readHeader_dyn() ); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return ::hx::Val( readPixels_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readIndexes") ) { return ::hx::Val( readIndexes_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePixel1") ) { return ::hx::Val( parsePixel1_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePixel2") ) { return ::hx::Val( parsePixel2_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePixel3") ) { return ::hx::Val( parsePixel3_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePixel4") ) { return ::hx::Val( parsePixel4_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readImageData") ) { return ::hx::Val( readImageData_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readColorMapData") ) { return ::hx::Val( readColorMapData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"parsePixelGreyAlpha") ) { return ::hx::Val( parsePixelGreyAlpha_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Reader_obj,i),HX_("i",69,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("read",56,4b,a7,4b),
	HX_("readHeader",83,ed,7b,f6),
	HX_("readColorMapData",39,44,5e,96),
	HX_("readImageData",ef,64,06,b8),
	HX_("readPixels",23,d3,25,86),
	HX_("readMono",99,b6,58,70),
	HX_("readIndexes",4a,ef,aa,33),
	HX_("parsePixel1",7e,9b,e6,07),
	HX_("parsePixelGreyAlpha",ac,bb,6b,72),
	HX_("parsePixel2",7f,9b,e6,07),
	HX_("parsePixel3",80,9b,e6,07),
	HX_("parsePixel4",81,9b,e6,07),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.tga.Reader",1a,e2,83,7e);
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
} // end namespace tga
