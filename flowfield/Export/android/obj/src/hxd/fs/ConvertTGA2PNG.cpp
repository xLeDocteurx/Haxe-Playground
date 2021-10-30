#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_hxd_Flags
#include <hxd/Flags.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_Pixels
#include <hxd/Pixels.h>
#endif
#ifndef INCLUDED_hxd__Pixels_PixelsARGB_Impl_
#include <hxd/_Pixels/PixelsARGB_Impl_.h>
#endif
#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
#ifndef INCLUDED_hxd_fs_ConvertTGA2PNG
#include <hxd/fs/ConvertTGA2PNG.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a10014658cd5ca9_154_new,"hxd.fs.ConvertTGA2PNG","new",0x7e22086b,"hxd.fs.ConvertTGA2PNG.new","hxd/fs/Convert.hx",154,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_5a10014658cd5ca9_157_convert,"hxd.fs.ConvertTGA2PNG","convert",0x5d7c977e,"hxd.fs.ConvertTGA2PNG.convert","hxd/fs/Convert.hx",157,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_5a10014658cd5ca9_186_boot,"hxd.fs.ConvertTGA2PNG","boot",0xd7be55c7,"hxd.fs.ConvertTGA2PNG.boot","hxd/fs/Convert.hx",186,0x59888052)
namespace hxd{
namespace fs{

void ConvertTGA2PNG_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5a10014658cd5ca9_154_new)
HXDLIN( 154)		super::__construct(HX_("tga",8e,5f,58,00),HX_("png",a9,5c,55,00));
            	}

Dynamic ConvertTGA2PNG_obj::__CreateEmpty() { return new ConvertTGA2PNG_obj; }

void *ConvertTGA2PNG_obj::_hx_vtable = 0;

Dynamic ConvertTGA2PNG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConvertTGA2PNG_obj > _hx_result = new ConvertTGA2PNG_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConvertTGA2PNG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19ccfbf3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19ccfbf3;
	} else {
		return inClassId==(int)0x7a5db4d6;
	}
}

void ConvertTGA2PNG_obj::convert(){
            	HX_GC_STACKFRAME(&_hx_pos_5a10014658cd5ca9_157_convert)
HXLINE( 159)		 ::haxe::io::BytesInput input =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,::sys::io::File_obj::getBytes(this->srcPath),null(),null());
HXLINE( 160)		 ::Dynamic r =  ::format::tga::Reader_obj::__alloc( HX_CTX ,input)->read();
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		if (::hx::IsPointerEq(  ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("imageType",b5,87,3d,2f),::hx::paccDynamic),::format::tga::ImageType_obj::UncompressedTrueColor_dyn() )) {
HXLINE( 161)			_hx_tmp = ::hx::IsNotEq(  ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic),32 );
            		}
            		else {
HXLINE( 161)			_hx_tmp = true;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 162)			::String _hx_tmp = ((HX_("Not supported ",3f,88,54,c9) + ::Std_obj::string( ::Dynamic( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("imageType",b5,87,3d,2f),::hx::paccDynamic)))) + HX_("/",2f,00,00,00));
HXDLIN( 162)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((_hx_tmp +  ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),::hx::paccDynamic)))));
            		}
HXLINE( 163)		int w = ( (int)( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
HXLINE( 164)		int h = ( (int)( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXLINE( 165)		 ::hxd::Pixels pix = ::hxd::Pixels_obj::alloc(w,h,::hxd::PixelFormat_obj::ARGB_dyn());
HXLINE( 166)		 ::hxd::Pixels access = ::hxd::_Pixels::PixelsARGB_Impl__obj::fromPixels(pix);
HXLINE( 167)		int p = 0;
HXLINE( 168)		{
HXLINE( 168)			int _g = 0;
HXDLIN( 168)			int _g1 = h;
HXDLIN( 168)			while((_g < _g1)){
HXLINE( 168)				_g = (_g + 1);
HXDLIN( 168)				int y = (_g - 1);
HXLINE( 169)				{
HXLINE( 169)					int _g1 = 0;
HXDLIN( 169)					int _g2 = w;
HXDLIN( 169)					while((_g1 < _g2)){
HXLINE( 169)						_g1 = (_g1 + 1);
HXDLIN( 169)						int x = (_g1 - 1);
HXLINE( 170)						int c = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(r->__Field(HX_("imageData",25,eb,97,24),::hx::paccDynamic)) ),(x + (y * w)))) );
HXLINE( 171)						{
HXLINE( 171)							 ::haxe::io::Bytes _this = access->bytes;
HXDLIN( 171)							int pos = (((x + (y * access->width)) << 2) + access->offset);
HXDLIN( 171)							int v = (((::hx::UShr(c,24) | ((c >> 8) & 65280)) | ((c << 8) & 16711680)) | (c << 24));
HXDLIN( 171)							_this->b[pos] = ( (unsigned char)((v & 255)) );
HXDLIN( 171)							_this->b[(pos + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN( 171)							_this->b[(pos + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN( 171)							_this->b[(pos + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            						}
            					}
            				}
            			}
            		}
HXLINE( 173)		switch((int)( ::Dynamic( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("imageOrigin",a1,23,41,93),::hx::paccDynamic)).StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 175)				 ::hxd::Pixels pix1 = pix;
HXDLIN( 175)				int pix2 = pix1->flags;
HXDLIN( 175)				pix1->flags = (pix2 | (1 << _hx_getEnumValueIndex(::hxd::Flags_obj::FlipY_dyn())));
            			}
            			break;
            			case (int)2: {
            			}
            			break;
            			default:{
HXLINE( 178)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Not supported ",3f,88,54,c9) + ::Std_obj::string( ::Dynamic( ::Dynamic(r->__Field(HX_("header",8d,09,00,fd),::hx::paccDynamic))->__Field(HX_("imageOrigin",a1,23,41,93),::hx::paccDynamic))))));
            			}
            		}
HXLINE( 180)		::String _hx_tmp1 = this->dstPath;
HXDLIN( 180)		::sys::io::File_obj::saveBytes(_hx_tmp1,pix->toPNG(null()));
            	}


int ConvertTGA2PNG_obj::_;


::hx::ObjectPtr< ConvertTGA2PNG_obj > ConvertTGA2PNG_obj::__new() {
	::hx::ObjectPtr< ConvertTGA2PNG_obj > __this = new ConvertTGA2PNG_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ConvertTGA2PNG_obj > ConvertTGA2PNG_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ConvertTGA2PNG_obj *__this = (ConvertTGA2PNG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConvertTGA2PNG_obj), true, "hxd.fs.ConvertTGA2PNG"));
	*(void **)__this = ConvertTGA2PNG_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConvertTGA2PNG_obj::ConvertTGA2PNG_obj()
{
}

::hx::Val ConvertTGA2PNG_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConvertTGA2PNG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { outValue = ( _ ); return true; }
	}
	return false;
}

bool ConvertTGA2PNG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { _=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ConvertTGA2PNG_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ConvertTGA2PNG_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ConvertTGA2PNG_obj::_,HX_("_",5f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ConvertTGA2PNG_obj_sMemberFields[] = {
	HX_("convert",f3,fd,c9,1a),
	::String(null()) };

static void ConvertTGA2PNG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvertTGA2PNG_obj::_,"_");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConvertTGA2PNG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvertTGA2PNG_obj::_,"_");
};

#endif

::hx::Class ConvertTGA2PNG_obj::__mClass;

static ::String ConvertTGA2PNG_obj_sStaticFields[] = {
	HX_("_",5f,00,00,00),
	::String(null())
};

void ConvertTGA2PNG_obj::__register()
{
	ConvertTGA2PNG_obj _hx_dummy;
	ConvertTGA2PNG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.ConvertTGA2PNG",f9,f6,ec,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConvertTGA2PNG_obj::__GetStatic;
	__mClass->mSetStaticField = &ConvertTGA2PNG_obj::__SetStatic;
	__mClass->mMarkFunc = ConvertTGA2PNG_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConvertTGA2PNG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConvertTGA2PNG_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConvertTGA2PNG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConvertTGA2PNG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvertTGA2PNG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvertTGA2PNG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConvertTGA2PNG_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_5a10014658cd5ca9_186_boot)
HXDLIN( 186)		_ = ::hxd::fs::Convert_obj::_hx_register( ::hxd::fs::ConvertTGA2PNG_obj::__alloc( HX_CTX ));
            	}
}

} // end namespace hxd
} // end namespace fs
