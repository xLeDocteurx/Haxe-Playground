#include <hxcpp.h>

#ifndef INCLUDED_format_gif_ApplicationExtension
#include <format/gif/ApplicationExtension.h>
#endif
#ifndef INCLUDED_format_gif_Block
#include <format/gif/Block.h>
#endif
#ifndef INCLUDED_format_gif_DisposalMethod
#include <format/gif/DisposalMethod.h>
#endif
#ifndef INCLUDED_format_gif_Extension
#include <format/gif/Extension.h>
#endif
#ifndef INCLUDED_format_gif_Reader
#include <format/gif/Reader.h>
#endif
#ifndef INCLUDED_format_gif_Version
#include <format/gif/Version.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_17_new,"format.gif.Reader","new",0x13b47b56,"format.gif.Reader.new","format/gif/Reader.hx",17,0xa8f08c18)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_23_read,"format.gif.Reader","read",0x2cdc37a0,"format.gif.Reader.read","format/gif/Reader.hx",23,0xa8f08c18)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_81_readBlock,"format.gif.Reader","readBlock",0x97c0098d,"format.gif.Reader.readBlock","format/gif/Reader.hx",81,0xa8f08c18)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_99_readImage,"format.gif.Reader","readImage",0xa02cb39b,"format.gif.Reader.readImage","format/gif/Reader.hx",99,0xa8f08c18)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_130_readPixels,"format.gif.Reader","readPixels",0x150812ed,"format.gif.Reader.readPixels","format/gif/Reader.hx",130,0xa8f08c18)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_237_deinterlace,"format.gif.Reader","deinterlace",0xe92a3ac8,"format.gif.Reader.deinterlace","format/gif/Reader.hx",237,0xa8f08c18)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_248_readExtension,"format.gif.Reader","readExtension",0x0cd347bf,"format.gif.Reader.readExtension","format/gif/Reader.hx",248,0xa8f08c18)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_303_readApplicationExtension,"format.gif.Reader","readApplicationExtension",0x4eaa11cf,"format.gif.Reader.readApplicationExtension","format/gif/Reader.hx",303,0xa8f08c18)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_316_readBlocks,"format.gif.Reader","readBlocks",0x30485246,"format.gif.Reader.readBlocks","format/gif/Reader.hx",316,0xa8f08c18)
HX_LOCAL_STACK_FRAME(_hx_pos_aa2ccdb0b06be478_333_readColorTable,"format.gif.Reader","readColorTable",0xd1ead36b,"format.gif.Reader.readColorTable","format/gif/Reader.hx",333,0xa8f08c18)
namespace format{
namespace gif{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_17_new)
HXLINE(  18)		this->i = i;
HXLINE(  19)		i->set_bigEndian(false);
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x43c7c910;
}

 ::Dynamic Reader_obj::read(){
            	HX_GC_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_23_read)
HXLINE(  24)		{
HXLINE(  24)			{
HXLINE(  24)				int b = 71;
HXLINE(  26)				if ((this->i->readByte() != b)) {
HXLINE(  26)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
HXLINE(  24)			{
HXLINE(  24)				int b1 = 73;
HXLINE(  26)				if ((this->i->readByte() != b1)) {
HXLINE(  26)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
HXLINE(  24)			{
HXLINE(  24)				int b2 = 70;
HXLINE(  26)				if ((this->i->readByte() != b2)) {
HXLINE(  26)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
            		}
HXLINE(  29)		::String gifVer = this->i->readString(3,null());
HXLINE(  30)		 ::format::gif::Version version = ::format::gif::Version_obj::GIF89a_dyn();
HXLINE(  31)		::String _hx_switch_0 = gifVer;
            		if (  (_hx_switch_0==HX_("87a",82,ae,2a,00)) ){
HXLINE(  33)			version = ::format::gif::Version_obj::GIF87a_dyn();
HXDLIN(  33)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("89a",40,b0,2a,00)) ){
HXLINE(  34)			version = ::format::gif::Version_obj::GIF89a_dyn();
HXDLIN(  34)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  35)			version = ::format::gif::Version_obj::Unknown(gifVer);
            		}
            		_hx_goto_1:;
HXLINE(  39)		int width = this->i->readUInt16();
HXLINE(  40)		int height = this->i->readUInt16();
HXLINE(  41)		int packedField = this->i->readByte();
HXLINE(  42)		int bgIndex = this->i->readByte();
HXLINE(  43)		Float pixelAspectRatio = ( (Float)(this->i->readByte()) );
HXLINE(  44)		if ((pixelAspectRatio != 0)) {
HXLINE(  44)			pixelAspectRatio = ((pixelAspectRatio + 15) / ( (Float)(64) ));
            		}
            		else {
HXLINE(  45)			pixelAspectRatio = ( (Float)(1) );
            		}
HXLINE(  47)		 ::Dynamic lsd =  ::Dynamic(::hx::Anon_obj::Create(8)
            			->setFixed(0,HX_("globalColorTableSize",cf,9a,ff,8d),(2 << (packedField & 7)))
            			->setFixed(1,HX_("pixelAspectRatio",2d,d3,2f,a5),pixelAspectRatio)
            			->setFixed(2,HX_("colorResolution",6f,64,b1,bc),::hx::UShr((packedField & 112),4))
            			->setFixed(3,HX_("width",06,b6,62,ca),width)
            			->setFixed(4,HX_("height",e7,07,4c,02),height)
            			->setFixed(5,HX_("backgroundColorIndex",3d,c0,ec,2b),bgIndex)
            			->setFixed(6,HX_("sorted",3d,93,37,30),((packedField & 8) == 8))
            			->setFixed(7,HX_("hasGlobalColorTable",68,ae,6d,7b),((packedField & 128) == 128)));
HXLINE(  59)		 ::haxe::io::Bytes gct = null();
HXLINE(  60)		if (( (bool)(lsd->__Field(HX_("hasGlobalColorTable",68,ae,6d,7b),::hx::paccDynamic)) )) {
HXLINE(  60)			gct = this->readColorTable(( (int)(lsd->__Field(HX_("globalColorTableSize",cf,9a,ff,8d),::hx::paccDynamic)) ));
            		}
HXLINE(  62)		 ::haxe::ds::List blocks =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  64)		while(true){
HXLINE(  66)			 ::format::gif::Block b = this->readBlock();
HXLINE(  67)			blocks->add(b);
HXLINE(  68)			if (::hx::IsPointerEq( b,::format::gif::Block_obj::BEOF_dyn() )) {
HXLINE(  68)				goto _hx_goto_2;
            			}
            		}
            		_hx_goto_2:;
HXLINE(  71)		return  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("globalColorTable",ee,be,bd,88),gct)
            			->setFixed(1,HX_("blocks",86,2e,ea,a7),blocks)
            			->setFixed(2,HX_("logicalScreenDescriptor",e4,86,29,f9),lsd)
            			->setFixed(3,HX_("version",18,e7,f1,7c),version));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )

 ::format::gif::Block Reader_obj::readBlock(){
            	HX_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_81_readBlock)
HXLINE(  82)		int blockID = this->i->readByte();
HXLINE(  83)		switch((int)(blockID)){
            			case (int)33: {
HXLINE(  90)				return this->readExtension();
            			}
            			break;
            			case (int)44: {
HXLINE(  87)				return this->readImage();
            			}
            			break;
            			case (int)59: {
HXLINE(  92)				return ::format::gif::Block_obj::BEOF_dyn();
            			}
            			break;
            		}
HXLINE(  95)		return ::format::gif::Block_obj::BEOF_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readBlock,return )

 ::format::gif::Block Reader_obj::readImage(){
            	HX_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_99_readImage)
HXLINE( 100)		int x = this->i->readUInt16();
HXLINE( 101)		int y = this->i->readUInt16();
HXLINE( 102)		int width = this->i->readUInt16();
HXLINE( 103)		int height = this->i->readUInt16();
HXLINE( 104)		int packed = this->i->readByte();
HXLINE( 105)		bool localColorTable = ((packed & 128) == 128);
HXLINE( 106)		bool interlaced = ((packed & 64) == 64);
HXLINE( 107)		bool sorted = ((packed & 32) == 32);
HXLINE( 108)		int localColorTableSize = (2 << (packed & 7));
HXLINE( 110)		 ::haxe::io::Bytes lct = null();
HXLINE( 111)		if (localColorTable) {
HXLINE( 111)			lct = this->readColorTable(localColorTableSize);
            		}
HXLINE( 113)		return ::format::gif::Block_obj::BFrame( ::Dynamic(::hx::Anon_obj::Create(10)
            			->setFixed(0,HX_("pixels",2d,ef,a9,8c),this->readPixels(width,height,interlaced))
            			->setFixed(1,HX_("localColorTable",f6,b0,1d,aa),localColorTable)
            			->setFixed(2,HX_("width",06,b6,62,ca),width)
            			->setFixed(3,HX_("interlaced",91,cb,78,d9),interlaced)
            			->setFixed(4,HX_("localColorTableSize",d7,30,75,de),localColorTableSize)
            			->setFixed(5,HX_("x",78,00,00,00),x)
            			->setFixed(6,HX_("y",79,00,00,00),y)
            			->setFixed(7,HX_("height",e7,07,4c,02),height)
            			->setFixed(8,HX_("colorTable",ab,cf,4f,2f),lct)
            			->setFixed(9,HX_("sorted",3d,93,37,30),sorted)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readImage,return )

 ::haxe::io::Bytes Reader_obj::readPixels(int width,int height,bool interlaced){
            	HX_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_130_readPixels)
HXLINE( 131)		 ::haxe::io::Input input = this->i;
HXLINE( 133)		int pixelsCount = (width * height);
HXLINE( 134)		 ::haxe::io::Bytes pixels = ::haxe::io::Bytes_obj::alloc(pixelsCount);
HXLINE( 136)		int minCodeSize = input->readByte();
HXLINE( 138)		int blockSize = (input->readByte() - 1);
HXLINE( 139)		int bits = input->readByte();
HXLINE( 140)		int bitsCount = 8;
HXLINE( 142)		int clearCode = (1 << minCodeSize);
HXLINE( 143)		int eoiCode = (clearCode + 1);
HXLINE( 145)		int codeSize = (minCodeSize + 1);
HXLINE( 146)		int codeSizeLimit = (1 << codeSize);
HXLINE( 147)		int codeMask = (codeSizeLimit - 1);
HXLINE( 150)		::Array< ::Dynamic> baseDict = ::Array_obj< ::Dynamic>::__new();
HXLINE( 151)		{
HXLINE( 151)			int _g = 0;
HXDLIN( 151)			int _g1 = clearCode;
HXDLIN( 151)			while((_g < _g1)){
HXLINE( 151)				_g = (_g + 1);
HXDLIN( 151)				int i = (_g - 1);
HXDLIN( 151)				baseDict[i] = ::Array_obj< int >::__new(1)->init(0,i);
            			}
            		}
HXLINE( 153)		::Array< ::Dynamic> dict = ::Array_obj< ::Dynamic>::__new();
HXLINE( 154)		int dictLen = (clearCode + 2);
HXLINE( 155)		::Array< int > newRecord;
HXLINE( 157)		int i = 0;
HXLINE( 158)		int code = 0;
HXLINE( 159)		int last;
HXLINE( 161)		while((i < pixelsCount)){
HXLINE( 163)			last = code;
HXLINE( 164)			while((bitsCount < codeSize)){
HXLINE( 166)				if ((blockSize == 0)) {
HXLINE( 166)					goto _hx_goto_8;
            				}
HXLINE( 167)				bits = (bits | (input->readByte() << bitsCount));
HXLINE( 168)				bitsCount = (bitsCount + 8);
HXLINE( 169)				blockSize = (blockSize - 1);
HXLINE( 170)				if ((blockSize == 0)) {
HXLINE( 170)					blockSize = input->readByte();
            				}
            			}
            			_hx_goto_8:;
HXLINE( 172)			code = (bits & codeMask);
HXLINE( 173)			bits = (bits >> codeSize);
HXLINE( 174)			bitsCount = (bitsCount - codeSize);
HXLINE( 176)			if ((code == clearCode)) {
HXLINE( 178)				dict = baseDict->copy();
HXLINE( 179)				dictLen = (clearCode + 2);
HXLINE( 180)				codeSize = (minCodeSize + 1);
HXLINE( 181)				codeSizeLimit = (1 << codeSize);
HXLINE( 182)				codeMask = (codeSizeLimit - 1);
HXLINE( 183)				continue;
            			}
HXLINE( 185)			if ((code == eoiCode)) {
HXLINE( 185)				goto _hx_goto_7;
            			}
HXLINE( 187)			if ((code < dictLen)) {
HXLINE( 189)				if ((last != clearCode)) {
HXLINE( 191)					newRecord = dict->__get(last).StaticCast< ::Array< int > >()->copy();
HXLINE( 192)					newRecord->push(dict->__get(code).StaticCast< ::Array< int > >()->__get(0));
HXLINE( 193)					dictLen = (dictLen + 1);
HXDLIN( 193)					dict[(dictLen - 1)] = newRecord;
            				}
            			}
            			else {
HXLINE( 198)				if ((code != dictLen)) {
HXLINE( 198)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Invalid LZW code. Excepted: ",bd,a3,3e,94) + dictLen) + HX_(", got: ",fe,9b,18,89)) + code)));
            				}
HXLINE( 199)				newRecord = dict->__get(last).StaticCast< ::Array< int > >()->copy();
HXLINE( 200)				newRecord->push(newRecord->__get(0));
HXLINE( 201)				dictLen = (dictLen + 1);
HXDLIN( 201)				dict[(dictLen - 1)] = newRecord;
            			}
HXLINE( 204)			newRecord = dict->__get(code).StaticCast< ::Array< int > >();
HXLINE( 205)			{
HXLINE( 205)				int _g = 0;
HXDLIN( 205)				while((_g < newRecord->length)){
HXLINE( 205)					int item = newRecord->__get(_g);
HXDLIN( 205)					_g = (_g + 1);
HXDLIN( 205)					{
HXLINE( 205)						i = (i + 1);
HXDLIN( 205)						pixels->b[(i - 1)] = ( (unsigned char)(item) );
            					}
            				}
            			}
HXLINE( 207)			bool _hx_tmp;
HXDLIN( 207)			if ((dictLen == codeSizeLimit)) {
HXLINE( 207)				_hx_tmp = (codeSize < 12);
            			}
            			else {
HXLINE( 207)				_hx_tmp = false;
            			}
HXDLIN( 207)			if (_hx_tmp) {
HXLINE( 209)				codeSize = (codeSize + 1);
HXLINE( 210)				codeSizeLimit = (1 << codeSize);
HXLINE( 211)				codeMask = (codeSizeLimit - 1);
            			}
            		}
            		_hx_goto_7:;
HXLINE( 216)		while((blockSize > 0)){
HXLINE( 218)			input->readByte();
HXLINE( 219)			blockSize = (blockSize - 1);
HXLINE( 220)			if ((blockSize == 0)) {
HXLINE( 220)				blockSize = input->readByte();
            			}
            		}
HXLINE( 223)		while((i < pixelsCount)){
HXLINE( 223)			i = (i + 1);
HXDLIN( 223)			pixels->b[(i - 1)] = ( (unsigned char)(0) );
            		}
HXLINE( 224)		if (interlaced) {
HXLINE( 226)			 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc(pixelsCount);
HXLINE( 227)			int offset = this->deinterlace(pixels,buffer,8,0,0,width,height);
HXLINE( 228)			offset = this->deinterlace(pixels,buffer,8,4,offset,width,height);
HXLINE( 229)			offset = this->deinterlace(pixels,buffer,4,2,offset,width,height);
HXLINE( 230)			this->deinterlace(pixels,buffer,2,1,offset,width,height);
HXLINE( 231)			pixels = buffer;
            		}
HXLINE( 233)		return pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Reader_obj,readPixels,return )

int Reader_obj::deinterlace( ::haxe::io::Bytes input, ::haxe::io::Bytes output,int step,int y,int offset,int width,int height){
            	HX_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_237_deinterlace)
HXLINE( 238)		while((y < height)){
HXLINE( 240)			output->blit((y * width),input,offset,width);
HXLINE( 241)			offset = (offset + width);
HXLINE( 242)			y = (y + step);
            		}
HXLINE( 244)		return offset;
            	}


HX_DEFINE_DYNAMIC_FUNC7(Reader_obj,deinterlace,return )

 ::format::gif::Block Reader_obj::readExtension(){
            	HX_GC_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_248_readExtension)
HXLINE( 249)		int subId = this->i->readByte();
HXLINE( 251)		switch((int)(subId)){
            			case (int)1: {
HXLINE( 278)				if ((this->i->readByte() != 12)) {
HXLINE( 278)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Incorrect size of Plain Text Extension introducer block.",b5,fe,0a,33)));
            				}
HXLINE( 281)				int _hx_tmp = this->i->readUInt16();
HXLINE( 282)				int _hx_tmp1 = this->i->readUInt16();
HXLINE( 283)				int _hx_tmp2 = this->i->readUInt16();
HXLINE( 284)				int _hx_tmp3 = this->i->readUInt16();
HXLINE( 285)				int _hx_tmp4 = this->i->readByte();
HXLINE( 286)				int _hx_tmp5 = this->i->readByte();
HXLINE( 287)				int _hx_tmp6 = this->i->readByte();
HXLINE( 288)				int _hx_tmp7 = this->i->readByte();
HXLINE( 289)				 ::haxe::io::BytesOutput buffer =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXDLIN( 289)				 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(255);
HXDLIN( 289)				int len = this->i->readByte();
HXDLIN( 289)				while((len != 0)){
HXLINE( 289)					this->i->readBytes(bytes,0,len);
HXDLIN( 289)					buffer->writeBytes(bytes,0,len);
HXDLIN( 289)					len = this->i->readByte();
            				}
HXDLIN( 289)				buffer->flush();
HXDLIN( 289)				bytes = buffer->getBytes();
HXDLIN( 289)				buffer->close();
HXLINE( 279)				return ::format::gif::Block_obj::BExtension(::format::gif::Extension_obj::EText( ::Dynamic(::hx::Anon_obj::Create(9)
            					->setFixed(0,HX_("textBackgroundColorIndex",8a,3d,54,85),_hx_tmp7)
            					->setFixed(1,HX_("charCellWidth",4e,cf,e3,01),_hx_tmp4)
            					->setFixed(2,HX_("textGridHeight",5a,f6,1a,21),_hx_tmp3)
            					->setFixed(3,HX_("textGridX",e5,a6,dd,32),_hx_tmp)
            					->setFixed(4,HX_("textGridY",e6,a6,dd,32),_hx_tmp1)
            					->setFixed(5,HX_("text",ad,cc,f9,4c),bytes->toString())
            					->setFixed(6,HX_("charCellHeight",9f,0d,c1,5b),_hx_tmp5)
            					->setFixed(7,HX_("textForegroundColorIndex",9f,fe,c1,67),_hx_tmp6)
            					->setFixed(8,HX_("textGridWidth",f3,96,b8,76),_hx_tmp2))));
            			}
            			break;
            			case (int)249: {
HXLINE( 255)				if ((this->i->readByte() != 4)) {
HXLINE( 255)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Incorrect Graphic Control Extension block size!",d6,80,33,f3)));
            				}
HXLINE( 256)				int packed = this->i->readByte();
HXLINE( 257)				 ::format::gif::DisposalMethod disposalMethod;
HXDLIN( 257)				switch((int)(((packed & 28) >> 2))){
            					case (int)0: {
HXLINE( 257)						disposalMethod = ::format::gif::DisposalMethod_obj::UNSPECIFIED_dyn();
            					}
            					break;
            					case (int)1: {
HXLINE( 257)						disposalMethod = ::format::gif::DisposalMethod_obj::NO_ACTION_dyn();
            					}
            					break;
            					case (int)2: {
HXLINE( 257)						disposalMethod = ::format::gif::DisposalMethod_obj::FILL_BACKGROUND_dyn();
            					}
            					break;
            					case (int)3: {
HXLINE( 257)						disposalMethod = ::format::gif::DisposalMethod_obj::RENDER_PREVIOUS_dyn();
            					}
            					break;
            					default:{
HXLINE( 257)						disposalMethod = ::format::gif::DisposalMethod_obj::UNDEFINED(((packed & 28) >> 2));
            					}
            				}
HXLINE( 270)				int b = this->i->readUInt16();
HXLINE( 265)				 ::format::gif::Block b1 = ::format::gif::Block_obj::BExtension(::format::gif::Extension_obj::EGraphicControl( ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("hasTransparentColor",2b,5c,07,ad),((packed & 1) == 1))
            					->setFixed(1,HX_("delay",83,d7,26,d7),b)
            					->setFixed(2,HX_("disposalMethod",32,1d,cc,29),disposalMethod)
            					->setFixed(3,HX_("transparentIndex",60,96,0f,2e),this->i->readByte())
            					->setFixed(4,HX_("userInput",bf,71,f0,67),((packed & 2) == 2)))));
HXLINE( 273)				this->i->readByte();
HXLINE( 274)				return b1;
            			}
            			break;
            			case (int)254: {
HXLINE( 293)				 ::haxe::io::BytesOutput buffer =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXDLIN( 293)				 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(255);
HXDLIN( 293)				int len = this->i->readByte();
HXDLIN( 293)				while((len != 0)){
HXLINE( 293)					this->i->readBytes(bytes,0,len);
HXDLIN( 293)					buffer->writeBytes(bytes,0,len);
HXDLIN( 293)					len = this->i->readByte();
            				}
HXDLIN( 293)				buffer->flush();
HXDLIN( 293)				bytes = buffer->getBytes();
HXDLIN( 293)				buffer->close();
HXDLIN( 293)				return ::format::gif::Block_obj::BExtension(::format::gif::Extension_obj::EComment(bytes->toString()));
            			}
            			break;
            			case (int)255: {
HXLINE( 296)				return this->readApplicationExtension();
            			}
            			break;
            			default:{
HXLINE( 298)				 ::haxe::io::BytesOutput buffer =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXDLIN( 298)				 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(255);
HXDLIN( 298)				int len = this->i->readByte();
HXDLIN( 298)				while((len != 0)){
HXLINE( 298)					this->i->readBytes(bytes,0,len);
HXDLIN( 298)					buffer->writeBytes(bytes,0,len);
HXDLIN( 298)					len = this->i->readByte();
            				}
HXDLIN( 298)				buffer->flush();
HXDLIN( 298)				bytes = buffer->getBytes();
HXDLIN( 298)				buffer->close();
HXDLIN( 298)				return ::format::gif::Block_obj::BExtension(::format::gif::Extension_obj::EUnknown(subId,bytes));
            			}
            		}
HXLINE( 251)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readExtension,return )

 ::format::gif::Block Reader_obj::readApplicationExtension(){
            	HX_GC_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_303_readApplicationExtension)
HXLINE( 304)		if ((this->i->readByte() != 11)) {
HXLINE( 304)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Incorrect size of Application Extension introducer block.",f8,53,e6,99)));
            		}
HXLINE( 305)		::String name = this->i->readString(8,null());
HXLINE( 306)		::String version = this->i->readString(3,null());
HXLINE( 307)		 ::haxe::io::BytesOutput buffer =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXDLIN( 307)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(255);
HXDLIN( 307)		int len = this->i->readByte();
HXDLIN( 307)		while((len != 0)){
HXLINE( 307)			this->i->readBytes(bytes,0,len);
HXDLIN( 307)			buffer->writeBytes(bytes,0,len);
HXDLIN( 307)			len = this->i->readByte();
            		}
HXDLIN( 307)		buffer->flush();
HXDLIN( 307)		bytes = buffer->getBytes();
HXDLIN( 307)		buffer->close();
HXDLIN( 307)		 ::haxe::io::Bytes data = bytes;
HXLINE( 308)		bool _hx_tmp;
HXDLIN( 308)		bool _hx_tmp1;
HXDLIN( 308)		if ((name == HX_("NETSCAPE",89,20,5f,2f))) {
HXLINE( 308)			_hx_tmp1 = (version == HX_("2.0",f4,18,26,00));
            		}
            		else {
HXLINE( 308)			_hx_tmp1 = false;
            		}
HXDLIN( 308)		if (_hx_tmp1) {
HXLINE( 308)			_hx_tmp = (data->b->__get(0) == 1);
            		}
            		else {
HXLINE( 308)			_hx_tmp = false;
            		}
HXDLIN( 308)		if (_hx_tmp) {
HXLINE( 310)			return ::format::gif::Block_obj::BExtension(::format::gif::Extension_obj::EApplicationExtension(::format::gif::ApplicationExtension_obj::AENetscapeLooping((( (int)(data->b->__get(1)) ) | (( (int)(data->b->__get(2)) ) << 8)))));
            		}
HXLINE( 312)		return ::format::gif::Block_obj::BExtension(::format::gif::Extension_obj::EApplicationExtension(::format::gif::ApplicationExtension_obj::AEUnknown(name,version,data)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readApplicationExtension,return )

 ::haxe::io::Bytes Reader_obj::readBlocks(){
            	HX_GC_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_316_readBlocks)
HXLINE( 317)		 ::haxe::io::BytesOutput buffer =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE( 318)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(255);
HXLINE( 319)		int len = this->i->readByte();
HXLINE( 320)		while((len != 0)){
HXLINE( 322)			this->i->readBytes(bytes,0,len);
HXLINE( 323)			buffer->writeBytes(bytes,0,len);
HXLINE( 324)			len = this->i->readByte();
            		}
HXLINE( 326)		buffer->flush();
HXLINE( 327)		bytes = buffer->getBytes();
HXLINE( 328)		buffer->close();
HXLINE( 329)		return bytes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readBlocks,return )

 ::haxe::io::Bytes Reader_obj::readColorTable(int size){
            	HX_STACKFRAME(&_hx_pos_aa2ccdb0b06be478_333_readColorTable)
HXLINE( 334)		size = (size * 3);
HXLINE( 335)		 ::haxe::io::Bytes output = ::haxe::io::Bytes_obj::alloc(size);
HXLINE( 336)		int c = 0;
HXLINE( 337)		while((c < size)){
HXLINE( 339)			{
HXLINE( 339)				int v = this->i->readByte();
HXDLIN( 339)				output->b[c] = ( (unsigned char)(v) );
            			}
HXLINE( 340)			{
HXLINE( 340)				int v1 = this->i->readByte();
HXDLIN( 340)				output->b[(c + 1)] = ( (unsigned char)(v1) );
            			}
HXLINE( 341)			{
HXLINE( 341)				int v2 = this->i->readByte();
HXDLIN( 341)				output->b[(c + 2)] = ( (unsigned char)(v2) );
            			}
HXLINE( 342)			c = (c + 3);
            		}
HXLINE( 344)		return output;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readColorTable,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "format.gif.Reader"));
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
	case 9:
		if (HX_FIELD_EQ(inName,"readBlock") ) { return ::hx::Val( readBlock_dyn() ); }
		if (HX_FIELD_EQ(inName,"readImage") ) { return ::hx::Val( readImage_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readPixels") ) { return ::hx::Val( readPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"readBlocks") ) { return ::hx::Val( readBlocks_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"deinterlace") ) { return ::hx::Val( deinterlace_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readExtension") ) { return ::hx::Val( readExtension_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readColorTable") ) { return ::hx::Val( readColorTable_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"readApplicationExtension") ) { return ::hx::Val( readApplicationExtension_dyn() ); }
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
	HX_("readBlock",17,c2,e3,85),
	HX_("readImage",25,6c,50,8e),
	HX_("readPixels",23,d3,25,86),
	HX_("deinterlace",d2,a9,14,72),
	HX_("readExtension",49,0d,7f,78),
	HX_("readApplicationExtension",85,84,6b,bd),
	HX_("readBlocks",7c,12,66,a1),
	HX_("readColorTable",a1,e6,8b,9c),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.gif.Reader",64,d8,9a,7e);
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
} // end namespace gif
