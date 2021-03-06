#include <hxcpp.h>

#ifndef INCLUDED_format_png_Chunk
#include <format/png/Chunk.h>
#endif
#ifndef INCLUDED_format_png_Color
#include <format/png/Color.h>
#endif
#ifndef INCLUDED_format_png_Reader
#include <format/png/Reader.h>
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
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9da417f3f1ecb56_35_new,"format.png.Reader","new",0x8a4e4ad1,"format.png.Reader.new","format/png/Reader.hx",35,0xe65084fd)
HX_LOCAL_STACK_FRAME(_hx_pos_d9da417f3f1ecb56_41_read,"format.png.Reader","read",0x7cd7f3c5,"format.png.Reader.read","format/png/Reader.hx",41,0xe65084fd)
HX_LOCAL_STACK_FRAME(_hx_pos_d9da417f3f1ecb56_56_readHeader,"format.png.Reader","readHeader",0x49691332,"format.png.Reader.readHeader","format/png/Reader.hx",56,0xe65084fd)
HX_LOCAL_STACK_FRAME(_hx_pos_d9da417f3f1ecb56_91_readChunk,"format.png.Reader","readChunk",0xedb57868,"format.png.Reader.readChunk","format/png/Reader.hx",91,0xe65084fd)
namespace format{
namespace png{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_d9da417f3f1ecb56_35_new)
HXLINE(  36)		this->i = i;
HXLINE(  37)		i->set_bigEndian(true);
HXLINE(  38)		this->checkCRC = true;
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x5fff4eb5;
}

 ::haxe::ds::List Reader_obj::read(){
            	HX_GC_STACKFRAME(&_hx_pos_d9da417f3f1ecb56_41_read)
HXLINE(  42)		{
HXLINE(  42)			{
HXLINE(  42)				int b = 137;
HXLINE(  43)				if ((this->i->readByte() != b)) {
HXLINE(  44)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
HXLINE(  42)			{
HXLINE(  42)				int b1 = 80;
HXLINE(  43)				if ((this->i->readByte() != b1)) {
HXLINE(  44)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
HXLINE(  42)			{
HXLINE(  42)				int b2 = 78;
HXLINE(  43)				if ((this->i->readByte() != b2)) {
HXLINE(  44)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
HXLINE(  42)			{
HXLINE(  42)				int b3 = 71;
HXLINE(  43)				if ((this->i->readByte() != b3)) {
HXLINE(  44)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
HXLINE(  42)			{
HXLINE(  42)				int b4 = 13;
HXLINE(  43)				if ((this->i->readByte() != b4)) {
HXLINE(  44)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
HXLINE(  42)			{
HXLINE(  42)				int b5 = 10;
HXLINE(  43)				if ((this->i->readByte() != b5)) {
HXLINE(  44)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
HXLINE(  42)			{
HXLINE(  42)				int b6 = 26;
HXLINE(  43)				if ((this->i->readByte() != b6)) {
HXLINE(  44)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
HXLINE(  42)			{
HXLINE(  42)				int b7 = 10;
HXLINE(  43)				if ((this->i->readByte() != b7)) {
HXLINE(  44)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            				}
            			}
            		}
HXLINE(  46)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  47)		while(true){
HXLINE(  48)			 ::format::png::Chunk c = this->readChunk();
HXLINE(  49)			l->add(c);
HXLINE(  50)			if (::hx::IsPointerEq( c,::format::png::Chunk_obj::CEnd_dyn() )) {
HXLINE(  51)				goto _hx_goto_1;
            			}
            		}
            		_hx_goto_1:;
HXLINE(  53)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )

 ::Dynamic Reader_obj::readHeader( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_d9da417f3f1ecb56_56_readHeader)
HXLINE(  57)		i->set_bigEndian(true);
HXLINE(  59)		int width = i->readInt32();
HXLINE(  60)		int height = i->readInt32();
HXLINE(  65)		int colbits = i->readByte();
HXLINE(  66)		int color = i->readByte();
HXLINE(  67)		 ::format::png::Color color1;
HXDLIN(  67)		switch((int)(color)){
            			case (int)0: {
HXLINE(  67)				color1 = ::format::png::Color_obj::ColGrey(false);
            			}
            			break;
            			case (int)2: {
HXLINE(  67)				color1 = ::format::png::Color_obj::ColTrue(false);
            			}
            			break;
            			case (int)3: {
HXLINE(  67)				color1 = ::format::png::Color_obj::ColIndexed_dyn();
            			}
            			break;
            			case (int)4: {
HXLINE(  67)				color1 = ::format::png::Color_obj::ColGrey(true);
            			}
            			break;
            			case (int)6: {
HXLINE(  67)				color1 = ::format::png::Color_obj::ColTrue(true);
            			}
            			break;
            			default:{
HXLINE(  73)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Unknown color model ",ea,c3,70,6c) + color) + HX_(":",3a,00,00,00)) + colbits)));
            			}
            		}
HXLINE(  75)		int compress = i->readByte();
HXLINE(  76)		int filter = i->readByte();
HXLINE(  77)		bool _hx_tmp;
HXDLIN(  77)		if ((compress == 0)) {
HXLINE(  77)			_hx_tmp = (filter != 0);
            		}
            		else {
HXLINE(  77)			_hx_tmp = true;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  78)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            		}
HXLINE(  79)		int interlace = i->readByte();
HXLINE(  80)		bool _hx_tmp1;
HXDLIN(  80)		if ((interlace != 0)) {
HXLINE(  80)			_hx_tmp1 = (interlace != 1);
            		}
            		else {
HXLINE(  80)			_hx_tmp1 = false;
            		}
HXDLIN(  80)		if (_hx_tmp1) {
HXLINE(  81)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid header",b6,f7,77,ca)));
            		}
HXLINE(  82)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("width",06,b6,62,ca),width)
            			->setFixed(1,HX_("interlaced",91,cb,78,d9),(interlace == 1))
            			->setFixed(2,HX_("colbits",46,9b,c7,e6),colbits)
            			->setFixed(3,HX_("height",e7,07,4c,02),height)
            			->setFixed(4,HX_("color",63,71,5c,4a),color1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readHeader,return )

 ::format::png::Chunk Reader_obj::readChunk(){
            	HX_GC_STACKFRAME(&_hx_pos_d9da417f3f1ecb56_91_readChunk)
HXLINE(  92)		int dataLen = this->i->readInt32();
HXLINE(  93)		::String id = this->i->readString(4,null());
HXLINE(  94)		 ::haxe::io::Bytes data = this->i->read(dataLen);
HXLINE(  95)		int crc = this->i->readInt32();
HXLINE(  96)		if (this->checkCRC) {
HXLINE(  98)			int c_crc = -1;
HXLINE(  99)			{
HXLINE( 100)				{
HXLINE( 100)					int tmp = ((c_crc ^ ( (int)(id.charCodeAt(0)) )) & 255);
HXDLIN( 100)					{
HXLINE(  38)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
            					}
HXLINE( 100)					c_crc = (::hx::UShr(c_crc,8) ^ tmp);
            				}
HXDLIN( 100)				{
HXLINE( 100)					int tmp1 = ((c_crc ^ ( (int)(id.charCodeAt(1)) )) & 255);
HXDLIN( 100)					{
HXLINE(  38)						tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)						tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)						tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)						tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)						tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)						tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)						tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)						tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
            					}
HXLINE( 100)					c_crc = (::hx::UShr(c_crc,8) ^ tmp1);
            				}
HXDLIN( 100)				{
HXLINE( 100)					int tmp2 = ((c_crc ^ ( (int)(id.charCodeAt(2)) )) & 255);
HXDLIN( 100)					{
HXLINE(  38)						tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)						tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)						tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)						tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)						tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)						tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)						tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)						tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
            					}
HXLINE( 100)					c_crc = (::hx::UShr(c_crc,8) ^ tmp2);
            				}
HXDLIN( 100)				{
HXLINE( 100)					int tmp3 = ((c_crc ^ ( (int)(id.charCodeAt(3)) )) & 255);
HXDLIN( 100)					{
HXLINE(  38)						tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)						tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)						tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)						tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)						tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)						tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)						tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)						tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
            					}
HXLINE( 100)					c_crc = (::hx::UShr(c_crc,8) ^ tmp3);
            				}
            			}
HXLINE( 101)			{
HXLINE( 101)				::Array< unsigned char > b = data->b;
HXDLIN( 101)				{
HXLINE( 101)					int _g = 0;
HXDLIN( 101)					int _g1 = data->length;
HXDLIN( 101)					while((_g < _g1)){
HXLINE( 101)						_g = (_g + 1);
HXDLIN( 101)						int i = (_g - 1);
HXDLIN( 101)						int tmp = ((c_crc ^ ( (int)(_hx_array_unsafe_get(b,i)) )) & 255);
HXDLIN( 101)						{
HXLINE(  47)							tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)							tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)							tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)							tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)							tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)							tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)							tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)							tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
            						}
HXLINE( 101)						c_crc = (::hx::UShr(c_crc,8) ^ tmp);
            					}
            				}
            			}
HXLINE( 102)			if (((c_crc ^ -1) != crc)) {
HXLINE( 103)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("CRC check failure",86,b2,b3,b2)));
            			}
            		}
HXLINE( 113)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("IDAT",8e,65,74,30)) ){
HXLINE( 116)			return ::format::png::Chunk_obj::CData(data);
HXDLIN( 116)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("IEND",12,33,75,30)) ){
HXLINE( 114)			return ::format::png::Chunk_obj::CEnd_dyn();
HXDLIN( 114)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("IHDR",2d,71,77,30)) ){
HXLINE( 115)			return ::format::png::Chunk_obj::CHeader(this->readHeader( ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,data,null(),null())));
HXDLIN( 115)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("PLTE",6d,06,1b,35)) ){
HXLINE( 117)			return ::format::png::Chunk_obj::CPalette(data);
HXDLIN( 117)			goto _hx_goto_5;
            		}
            		/* default */{
HXLINE( 118)			return ::format::png::Chunk_obj::CUnknown(id,data);
            		}
            		_hx_goto_5:;
HXLINE( 113)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readChunk,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "format.png.Reader"));
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
	HX_MARK_MEMBER_NAME(checkCRC,"checkCRC");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(checkCRC,"checkCRC");
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
		if (HX_FIELD_EQ(inName,"checkCRC") ) { return ::hx::Val( checkCRC ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readChunk") ) { return ::hx::Val( readChunk_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readHeader") ) { return ::hx::Val( readHeader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkCRC") ) { checkCRC=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("checkCRC",ec,32,de,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Reader_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsBool,(int)offsetof(Reader_obj,checkCRC),HX_("checkCRC",ec,32,de,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("checkCRC",ec,32,de,ac),
	HX_("read",56,4b,a7,4b),
	HX_("readHeader",83,ed,7b,f6),
	HX_("readChunk",37,13,aa,16),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.png.Reader",5f,8e,22,99);
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
} // end namespace png
