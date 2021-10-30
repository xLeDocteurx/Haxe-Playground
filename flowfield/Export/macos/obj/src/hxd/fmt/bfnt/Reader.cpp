#include <hxcpp.h>

#ifndef INCLUDED_h2d_Font
#include <h2d/Font.h>
#endif
#ifndef INCLUDED_h2d_FontChar
#include <h2d/FontChar.h>
#endif
#ifndef INCLUDED_h2d_FontType
#include <h2d/FontType.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_hxd_fmt_bfnt_Reader
#include <hxd/fmt/bfnt/Reader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_599c7eefd907b7f1_11_new,"hxd.fmt.bfnt.Reader","new",0x441e437e,"hxd.fmt.bfnt.Reader.new","hxd/fmt/bfnt/Reader.hx",11,0x3cc86193)
HX_LOCAL_STACK_FRAME(_hx_pos_599c7eefd907b7f1_14_read,"hxd.fmt.bfnt.Reader","read",0x59019278,"hxd.fmt.bfnt.Reader.read","hxd/fmt/bfnt/Reader.hx",14,0x3cc86193)
HX_LOCAL_STACK_FRAME(_hx_pos_599c7eefd907b7f1_48_parse,"hxd.fmt.bfnt.Reader","parse",0x5ef986d1,"hxd.fmt.bfnt.Reader.parse","hxd/fmt/bfnt/Reader.hx",48,0x3cc86193)
namespace hxd{
namespace fmt{
namespace bfnt{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_599c7eefd907b7f1_11_new)
HXDLIN(  11)		this->i = i;
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ba51326;
}

 ::h2d::Font Reader_obj::read( ::Dynamic resolveTile){
            	HX_GC_STACKFRAME(&_hx_pos_599c7eefd907b7f1_14_read)
HXLINE(  16)		bool _hx_tmp;
HXDLIN(  16)		if ((this->i->readString(4,null()) == HX_("BFNT",0a,77,d5,2b))) {
HXLINE(  16)			_hx_tmp = (this->i->readByte() != 0);
            		}
            		else {
HXLINE(  16)			_hx_tmp = true;
            		}
HXDLIN(  16)		if (_hx_tmp) {
HXLINE(  16)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not a BFNT file!",3b,f9,59,5d)));
            		}
HXLINE(  18)		 ::h2d::Font font = null();
HXLINE(  20)		{
HXLINE(  20)			int _g = this->i->readByte();
HXDLIN(  20)			if ((_g == 1)) {
HXLINE(  22)				 ::haxe::io::Input font1 = this->i;
HXDLIN(  22)				::String font2 = font1->readString(this->i->readUInt16(),null());
HXDLIN(  22)				font =  ::h2d::Font_obj::__alloc( HX_CTX ,font2,this->i->readInt16(),null());
HXLINE(  23)				 ::haxe::io::Input _hx_tmp = this->i;
HXDLIN(  23)				font->tilePath = _hx_tmp->readString(this->i->readUInt16(),null());
HXLINE(  24)				 ::h2d::Tile tile = (font->tile = ( ( ::h2d::Tile)(resolveTile(font->tilePath)) ));
HXLINE(  25)				font->lineHeight = ( (Float)(this->i->readInt16()) );
HXLINE(  26)				font->baseLine = ( (Float)(this->i->readInt16()) );
HXLINE(  27)				int defaultChar = this->i->readInt32();
HXLINE(  28)				int id;
HXLINE(  29)				while(true){
HXLINE(  29)					id = this->i->readInt32();
HXDLIN(  29)					if (!((id != 0))) {
HXLINE(  29)						goto _hx_goto_1;
            					}
HXLINE(  30)					int t = this->i->readUInt16();
HXDLIN(  30)					int t1 = this->i->readUInt16();
HXDLIN(  30)					int t2 = this->i->readUInt16();
HXDLIN(  30)					int t3 = this->i->readUInt16();
HXDLIN(  30)					int t4 = this->i->readInt16();
HXDLIN(  30)					 ::h2d::Tile t5 = tile->sub(( (Float)(t) ),( (Float)(t1) ),( (Float)(t2) ),( (Float)(t3) ),t4,this->i->readInt16());
HXLINE(  31)					 ::h2d::FontChar glyph =  ::h2d::FontChar_obj::__alloc( HX_CTX ,t5,( (Float)(this->i->readInt16()) ));
HXLINE(  32)					font->glyphs->set(id,glyph);
HXLINE(  33)					if ((id == defaultChar)) {
HXLINE(  33)						font->defaultChar = glyph;
            					}
HXLINE(  35)					int prevChar;
HXLINE(  36)					while(true){
HXLINE(  36)						prevChar = this->i->readInt32();
HXDLIN(  36)						if (!((prevChar != 0))) {
HXLINE(  36)							goto _hx_goto_2;
            						}
HXLINE(  37)						glyph->addKerning(prevChar,this->i->readInt16());
            					}
            					_hx_goto_2:;
            				}
            				_hx_goto_1:;
            			}
            			else {
HXLINE(  40)				int ver = _g;
HXLINE(  41)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown BFNT version: ",1e,87,a0,b4) + ver)));
            			}
            		}
HXLINE(  44)		return font;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,read,return )

 ::h2d::Font Reader_obj::parse( ::haxe::io::Bytes bytes, ::Dynamic resolveTile){
            	HX_GC_STACKFRAME(&_hx_pos_599c7eefd907b7f1_48_parse)
HXDLIN(  48)		return  ::hxd::fmt::bfnt::Reader_obj::__alloc( HX_CTX , ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null()))->read(resolveTile);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,parse,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "hxd.fmt.bfnt.Reader"));
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
	}
	return super::__Field(inName,inCallProp);
}

bool Reader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
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
	::String(null()) };

::hx::Class Reader_obj::__mClass;

static ::String Reader_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.bfnt.Reader",8c,6c,23,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reader_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Reader_obj_sStaticFields);
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

} // end namespace hxd
} // end namespace fmt
} // end namespace bfnt
