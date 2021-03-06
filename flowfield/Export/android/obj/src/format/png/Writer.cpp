#include <hxcpp.h>

#ifndef INCLUDED_format_png_Chunk
#include <format/png/Chunk.h>
#endif
#ifndef INCLUDED_format_png_Color
#include <format/png/Color.h>
#endif
#ifndef INCLUDED_format_png_Writer
#include <format/png/Writer.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
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
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_93ee61a200cb40a9_34_new,"format.png.Writer","new",0x64eff441,"format.png.Writer.new","format/png/Writer.hx",34,0x9ef8d98d)
HX_LOCAL_STACK_FRAME(_hx_pos_93ee61a200cb40a9_39_write,"format.png.Writer","write",0xaf2f0b00,"format.png.Writer.write","format/png/Writer.hx",39,0x9ef8d98d)
HX_LOCAL_STACK_FRAME(_hx_pos_93ee61a200cb40a9_75_writeChunk,"format.png.Writer","writeChunk",0xac594b4d,"format.png.Writer.writeChunk","format/png/Writer.hx",75,0x9ef8d98d)
namespace format{
namespace png{

void Writer_obj::__construct( ::haxe::io::Output o){
            	HX_STACKFRAME(&_hx_pos_93ee61a200cb40a9_34_new)
HXLINE(  35)		this->o = o;
HXLINE(  36)		o->set_bigEndian(true);
            	}

Dynamic Writer_obj::__CreateEmpty() { return new Writer_obj; }

void *Writer_obj::_hx_vtable = 0;

Dynamic Writer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Writer_obj > _hx_result = new Writer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Writer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e7d9a5d;
}

void Writer_obj::write( ::haxe::ds::List png){
            	HX_GC_STACKFRAME(&_hx_pos_93ee61a200cb40a9_39_write)
HXLINE(  40)		{
HXLINE(  40)			{
HXLINE(  40)				int b = 137;
HXLINE(  41)				this->o->writeByte(b);
            			}
HXLINE(  40)			{
HXLINE(  40)				int b1 = 80;
HXLINE(  41)				this->o->writeByte(b1);
            			}
HXLINE(  40)			{
HXLINE(  40)				int b2 = 78;
HXLINE(  41)				this->o->writeByte(b2);
            			}
HXLINE(  40)			{
HXLINE(  40)				int b3 = 71;
HXLINE(  41)				this->o->writeByte(b3);
            			}
HXLINE(  40)			{
HXLINE(  40)				int b4 = 13;
HXLINE(  41)				this->o->writeByte(b4);
            			}
HXLINE(  40)			{
HXLINE(  40)				int b5 = 10;
HXLINE(  41)				this->o->writeByte(b5);
            			}
HXLINE(  40)			{
HXLINE(  40)				int b6 = 26;
HXLINE(  41)				this->o->writeByte(b6);
            			}
HXLINE(  40)			{
HXLINE(  40)				int b7 = 10;
HXLINE(  41)				this->o->writeByte(b7);
            			}
            		}
HXLINE(  42)		{
HXLINE(  42)			 ::haxe::ds::_List::ListNode _g_head = png->h;
HXDLIN(  42)			while(::hx::IsNotNull( _g_head )){
HXLINE(  42)				 ::format::png::Chunk val = _g_head->item;
HXDLIN(  42)				_g_head = _g_head->next;
HXDLIN(  42)				 ::format::png::Chunk c = val;
HXLINE(  43)				switch((int)(c->_hx_getIndex())){
            					case (int)0: {
HXLINE(  65)						this->writeChunk(HX_("IEND",12,33,75,30),::haxe::io::Bytes_obj::alloc(0));
            					}
            					break;
            					case (int)1: {
HXLINE(  44)						 ::Dynamic h = c->_hx_getObject(0);
HXDLIN(  44)						{
HXLINE(  45)							 ::haxe::io::BytesOutput b =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE(  46)							b->set_bigEndian(true);
HXLINE(  48)							b->writeInt32(( (int)(h->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ));
HXLINE(  49)							b->writeInt32(( (int)(h->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ));
HXLINE(  54)							b->writeByte(( (int)(h->__Field(HX_("colbits",46,9b,c7,e6),::hx::paccDynamic)) ));
HXLINE(  55)							 ::format::png::Color _g = h->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
HXDLIN(  55)							int _hx_tmp;
HXDLIN(  55)							switch((int)(_g->_hx_getIndex())){
            								case (int)0: {
HXLINE(  56)									bool alpha = _g->_hx_getBool(0);
HXDLIN(  56)									if (alpha) {
HXLINE(  55)										_hx_tmp = 4;
            									}
            									else {
HXLINE(  55)										_hx_tmp = 0;
            									}
            								}
            								break;
            								case (int)1: {
HXLINE(  57)									bool alpha = _g->_hx_getBool(0);
HXDLIN(  57)									if (alpha) {
HXLINE(  55)										_hx_tmp = 6;
            									}
            									else {
HXLINE(  55)										_hx_tmp = 2;
            									}
            								}
            								break;
            								case (int)2: {
HXLINE(  55)									_hx_tmp = 3;
            								}
            								break;
            							}
HXDLIN(  55)							b->writeByte(_hx_tmp);
HXLINE(  60)							b->writeByte(0);
HXLINE(  61)							b->writeByte(0);
HXLINE(  62)							int _hx_tmp1;
HXDLIN(  62)							if (( (bool)(h->__Field(HX_("interlaced",91,cb,78,d9),::hx::paccDynamic)) )) {
HXLINE(  62)								_hx_tmp1 = 1;
            							}
            							else {
HXLINE(  62)								_hx_tmp1 = 0;
            							}
HXDLIN(  62)							b->writeByte(_hx_tmp1);
HXLINE(  63)							this->writeChunk(HX_("IHDR",2d,71,77,30),b->getBytes());
            						}
            					}
            					break;
            					case (int)2: {
HXLINE(  66)						 ::haxe::io::Bytes d = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXLINE(  67)						this->writeChunk(HX_("IDAT",8e,65,74,30),d);
            					}
            					break;
            					case (int)3: {
HXLINE(  68)						 ::haxe::io::Bytes b = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXLINE(  69)						this->writeChunk(HX_("PLTE",6d,06,1b,35),b);
            					}
            					break;
            					case (int)4: {
HXLINE(  70)						::String id = c->_hx_getString(0);
HXDLIN(  70)						 ::haxe::io::Bytes data = c->_hx_getObject(1).StaticCast<  ::haxe::io::Bytes >();
HXLINE(  71)						this->writeChunk(id,data);
            					}
            					break;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,write,(void))

void Writer_obj::writeChunk(::String id, ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_93ee61a200cb40a9_75_writeChunk)
HXLINE(  77)		this->o->writeInt32(data->length);
HXLINE(  81)		this->o->writeString(id,null());
HXLINE(  82)		this->o->write(data);
HXLINE(  85)		int crc_crc = -1;
HXLINE(  86)		{
HXLINE(  87)			{
HXLINE(  87)				int tmp = ((crc_crc ^ ( (int)(id.charCodeAt(0)) )) & 255);
HXDLIN(  87)				{
HXLINE(  38)					tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)					tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)					tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)					tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)					tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)					tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)					tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  38)					tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
            				}
HXLINE(  87)				crc_crc = (::hx::UShr(crc_crc,8) ^ tmp);
            			}
HXDLIN(  87)			{
HXLINE(  87)				int tmp1 = ((crc_crc ^ ( (int)(id.charCodeAt(1)) )) & 255);
HXDLIN(  87)				{
HXLINE(  38)					tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)					tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)					tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)					tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)					tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)					tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)					tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
HXDLIN(  38)					tmp1 = (::hx::UShr(tmp1,1) ^ (-((tmp1 & 1)) & -306674912));
            				}
HXLINE(  87)				crc_crc = (::hx::UShr(crc_crc,8) ^ tmp1);
            			}
HXDLIN(  87)			{
HXLINE(  87)				int tmp2 = ((crc_crc ^ ( (int)(id.charCodeAt(2)) )) & 255);
HXDLIN(  87)				{
HXLINE(  38)					tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)					tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)					tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)					tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)					tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)					tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)					tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
HXDLIN(  38)					tmp2 = (::hx::UShr(tmp2,1) ^ (-((tmp2 & 1)) & -306674912));
            				}
HXLINE(  87)				crc_crc = (::hx::UShr(crc_crc,8) ^ tmp2);
            			}
HXDLIN(  87)			{
HXLINE(  87)				int tmp3 = ((crc_crc ^ ( (int)(id.charCodeAt(3)) )) & 255);
HXDLIN(  87)				{
HXLINE(  38)					tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)					tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)					tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)					tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)					tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)					tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)					tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
HXDLIN(  38)					tmp3 = (::hx::UShr(tmp3,1) ^ (-((tmp3 & 1)) & -306674912));
            				}
HXLINE(  87)				crc_crc = (::hx::UShr(crc_crc,8) ^ tmp3);
            			}
            		}
HXLINE(  88)		{
HXLINE(  88)			::Array< unsigned char > b = data->b;
HXDLIN(  88)			{
HXLINE(  88)				int _g = 0;
HXDLIN(  88)				int _g1 = data->length;
HXDLIN(  88)				while((_g < _g1)){
HXLINE(  88)					_g = (_g + 1);
HXDLIN(  88)					int i = (_g - 1);
HXDLIN(  88)					int tmp = ((crc_crc ^ ( (int)(_hx_array_unsafe_get(b,i)) )) & 255);
HXDLIN(  88)					{
HXLINE(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
HXDLIN(  47)						tmp = (::hx::UShr(tmp,1) ^ (-((tmp & 1)) & -306674912));
            					}
HXLINE(  88)					crc_crc = (::hx::UShr(crc_crc,8) ^ tmp);
            				}
            			}
            		}
HXLINE(  89)		this->o->writeInt32((crc_crc ^ -1));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeChunk,(void))


::hx::ObjectPtr< Writer_obj > Writer_obj::__new( ::haxe::io::Output o) {
	::hx::ObjectPtr< Writer_obj > __this = new Writer_obj();
	__this->__construct(o);
	return __this;
}

::hx::ObjectPtr< Writer_obj > Writer_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output o) {
	Writer_obj *__this = (Writer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Writer_obj), true, "format.png.Writer"));
	*(void **)__this = Writer_obj::_hx_vtable;
	__this->__construct(o);
	return __this;
}

Writer_obj::Writer_obj()
{
}

void Writer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Writer);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void Writer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
}

::hx::Val Writer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return ::hx::Val( o ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeChunk") ) { return ::hx::Val( writeChunk_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Writer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Writer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("o",6f,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Writer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Output */ ,(int)offsetof(Writer_obj,o),HX_("o",6f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Writer_obj_sStaticStorageInfo = 0;
#endif

static ::String Writer_obj_sMemberFields[] = {
	HX_("o",6f,00,00,00),
	HX_("write",df,6c,59,d0),
	HX_("writeChunk",0e,c1,84,da),
	::String(null()) };

::hx::Class Writer_obj::__mClass;

void Writer_obj::__register()
{
	Writer_obj _hx_dummy;
	Writer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("format.png.Writer",cf,bf,76,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Writer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Writer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Writer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Writer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace format
} // end namespace png
