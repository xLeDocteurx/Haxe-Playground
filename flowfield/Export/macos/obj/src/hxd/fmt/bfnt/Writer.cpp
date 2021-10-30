#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_Font
#include <h2d/Font.h>
#endif
#ifndef INCLUDED_h2d_FontChar
#include <h2d/FontChar.h>
#endif
#ifndef INCLUDED_h2d_Kerning
#include <h2d/Kerning.h>
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
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxd_fmt_bfnt_Writer
#include <hxd/fmt/bfnt/Writer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_db48d456635db964_23_new,"hxd.fmt.bfnt.Writer","new",0x1ebfecee,"hxd.fmt.bfnt.Writer.new","hxd/fmt/bfnt/Writer.hx",23,0xf570b623)
HX_LOCAL_STACK_FRAME(_hx_pos_db48d456635db964_26_write,"hxd.fmt.bfnt.Writer","write",0x777048ed,"hxd.fmt.bfnt.Writer.write","hxd/fmt/bfnt/Writer.hx",26,0xf570b623)
HX_LOCAL_STACK_FRAME(_hx_pos_db48d456635db964_76_writeString,"hxd.fmt.bfnt.Writer","writeString",0x79f9d59e,"hxd.fmt.bfnt.Writer.writeString","hxd/fmt/bfnt/Writer.hx",76,0xf570b623)
HX_LOCAL_STACK_FRAME(_hx_pos_db48d456635db964_8_boot,"hxd.fmt.bfnt.Writer","boot",0xc14863e4,"hxd.fmt.bfnt.Writer.boot","hxd/fmt/bfnt/Writer.hx",8,0xf570b623)
namespace hxd{
namespace fmt{
namespace bfnt{

void Writer_obj::__construct( ::haxe::io::Output out){
            	HX_STACKFRAME(&_hx_pos_db48d456635db964_23_new)
HXDLIN(  23)		this->out = out;
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x23cc50fa;
}

void Writer_obj::write( ::h2d::Font font){
            	HX_STACKFRAME(&_hx_pos_db48d456635db964_26_write)
HXLINE(  27)		this->out->writeString(HX_("BFNT",0a,77,d5,2b),null());
HXLINE(  28)		this->out->writeByte(0);
HXLINE(  29)		this->out->writeByte(1);
HXLINE(  30)		{
HXLINE(  30)			::String s = font->name;
HXDLIN(  30)			if (::hx::IsNull( s )) {
HXLINE(  30)				s = HX_("",00,00,00,00);
            			}
HXDLIN(  30)			 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s,null());
HXDLIN(  30)			if ((bytes->length > 65535)) {
HXLINE(  30)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid string: Size over 0xFFFF",75,9c,6d,52)));
            			}
HXDLIN(  30)			this->out->writeUInt16(bytes->length);
HXDLIN(  30)			this->out->write(bytes);
            		}
HXLINE(  31)		this->out->writeInt16(font->size);
HXLINE(  32)		{
HXLINE(  32)			::String s1 = font->tilePath;
HXDLIN(  32)			if (::hx::IsNull( s1 )) {
HXLINE(  32)				s1 = HX_("",00,00,00,00);
            			}
HXDLIN(  32)			 ::haxe::io::Bytes bytes1 = ::haxe::io::Bytes_obj::ofString(s1,null());
HXDLIN(  32)			if ((bytes1->length > 65535)) {
HXLINE(  32)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid string: Size over 0xFFFF",75,9c,6d,52)));
            			}
HXDLIN(  32)			this->out->writeUInt16(bytes1->length);
HXDLIN(  32)			this->out->write(bytes1);
            		}
HXLINE(  33)		 ::haxe::io::Output _hx_tmp = this->out;
HXDLIN(  33)		_hx_tmp->writeInt16(::Std_obj::_hx_int(font->lineHeight));
HXLINE(  34)		 ::haxe::io::Output _hx_tmp1 = this->out;
HXDLIN(  34)		_hx_tmp1->writeInt16(::Std_obj::_hx_int(font->baseLine));
HXLINE(  35)		if (::hx::IsInstanceNotEq( font->defaultChar,font->nullChar )) {
HXLINE(  36)			bool found = false;
HXLINE(  37)			{
HXLINE(  37)				 ::Dynamic k = font->glyphs->keys();
HXDLIN(  37)				while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  37)					int k1 = ( (int)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  38)					 ::h2d::FontChar _hx_tmp = ( ( ::h2d::FontChar)(font->glyphs->get(k1)) );
HXDLIN(  38)					if (::hx::IsInstanceEq( _hx_tmp,font->defaultChar )) {
HXLINE(  39)						this->out->writeInt32(k1);
HXLINE(  40)						found = true;
HXLINE(  41)						goto _hx_goto_1;
            					}
            				}
            				_hx_goto_1:;
            			}
HXLINE(  44)			if (!(found)) {
HXLINE(  44)				this->out->writeInt32(0);
            			}
            		}
            		else {
HXLINE(  46)			this->out->writeInt32(0);
            		}
HXLINE(  49)		{
HXLINE(  49)			 ::Dynamic id = font->glyphs->keys();
HXDLIN(  49)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  49)				int id1 = ( (int)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  51)				if ((id1 == 0)) {
HXLINE(  51)					continue;
            				}
HXLINE(  53)				 ::h2d::FontChar glyph = ( ( ::h2d::FontChar)(font->glyphs->get(id1)) );
HXLINE(  54)				 ::h2d::Tile t = glyph->t;
HXLINE(  55)				this->out->writeInt32(id1);
HXLINE(  56)				 ::haxe::io::Output _hx_tmp = this->out;
HXDLIN(  56)				_hx_tmp->writeUInt16(::Std_obj::_hx_int(t->x));
HXLINE(  57)				 ::haxe::io::Output _hx_tmp1 = this->out;
HXDLIN(  57)				_hx_tmp1->writeUInt16(::Std_obj::_hx_int(t->y));
HXLINE(  58)				 ::haxe::io::Output _hx_tmp2 = this->out;
HXDLIN(  58)				_hx_tmp2->writeUInt16(::Std_obj::_hx_int(t->width));
HXLINE(  59)				 ::haxe::io::Output _hx_tmp3 = this->out;
HXDLIN(  59)				_hx_tmp3->writeUInt16(::Std_obj::_hx_int(t->height));
HXLINE(  60)				 ::haxe::io::Output _hx_tmp4 = this->out;
HXDLIN(  60)				_hx_tmp4->writeInt16(::Std_obj::_hx_int(t->dx));
HXLINE(  61)				 ::haxe::io::Output _hx_tmp5 = this->out;
HXDLIN(  61)				_hx_tmp5->writeInt16(::Std_obj::_hx_int(t->dy));
HXLINE(  62)				 ::haxe::io::Output _hx_tmp6 = this->out;
HXDLIN(  62)				_hx_tmp6->writeInt16(::Std_obj::_hx_int(glyph->width));
HXLINE(  63)				 ::h2d::Kerning kern = glyph->kerning;
HXLINE(  64)				while(::hx::IsNotNull( kern )){
HXLINE(  65)					if ((kern->prevChar != 0)) {
HXLINE(  66)						this->out->writeInt32(kern->prevChar);
HXLINE(  67)						 ::haxe::io::Output _hx_tmp = this->out;
HXDLIN(  67)						_hx_tmp->writeInt16(::Std_obj::_hx_int(kern->offset));
            					}
HXLINE(  69)					kern = kern->next;
            				}
HXLINE(  71)				this->out->writeInt32(0);
            			}
            		}
HXLINE(  73)		this->out->writeInt32(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,write,(void))

void Writer_obj::writeString(::String s){
            	HX_STACKFRAME(&_hx_pos_db48d456635db964_76_writeString)
HXLINE(  77)		if (::hx::IsNull( s )) {
HXLINE(  77)			s = HX_("",00,00,00,00);
            		}
HXLINE(  78)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s,null());
HXLINE(  79)		if ((bytes->length > 65535)) {
HXLINE(  80)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid string: Size over 0xFFFF",75,9c,6d,52)));
            		}
HXLINE(  81)		this->out->writeUInt16(bytes->length);
HXLINE(  82)		this->out->write(bytes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeString,(void))

int Writer_obj::VERSION;


::hx::ObjectPtr< Writer_obj > Writer_obj::__new( ::haxe::io::Output out) {
	::hx::ObjectPtr< Writer_obj > __this = new Writer_obj();
	__this->__construct(out);
	return __this;
}

::hx::ObjectPtr< Writer_obj > Writer_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output out) {
	Writer_obj *__this = (Writer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Writer_obj), true, "hxd.fmt.bfnt.Writer"));
	*(void **)__this = Writer_obj::_hx_vtable;
	__this->__construct(out);
	return __this;
}

Writer_obj::Writer_obj()
{
}

void Writer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Writer);
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_END_CLASS();
}

void Writer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(out,"out");
}

::hx::Val Writer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return ::hx::Val( out ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return ::hx::Val( writeString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Writer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Writer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("out",8e,a0,54,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Writer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Output */ ,(int)offsetof(Writer_obj,out),HX_("out",8e,a0,54,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Writer_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Writer_obj::VERSION,HX_("VERSION",f8,ba,c5,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Writer_obj_sMemberFields[] = {
	HX_("out",8e,a0,54,00),
	HX_("write",df,6c,59,d0),
	HX_("writeString",10,7b,29,a6),
	::String(null()) };

static void Writer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Writer_obj::VERSION,"VERSION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Writer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Writer_obj::VERSION,"VERSION");
};

#endif

::hx::Class Writer_obj::__mClass;

static ::String Writer_obj_sStaticFields[] = {
	HX_("VERSION",f8,ba,c5,fc),
	::String(null())
};

void Writer_obj::__register()
{
	Writer_obj _hx_dummy;
	Writer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fmt.bfnt.Writer",fc,9d,77,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Writer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Writer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Writer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Writer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Writer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Writer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Writer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Writer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_db48d456635db964_8_boot)
HXDLIN(   8)		VERSION = 1;
            	}
}

} // end namespace hxd
} // end namespace fmt
} // end namespace bfnt
