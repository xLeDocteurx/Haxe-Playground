#include <hxcpp.h>

#ifndef INCLUDED_h2d_Font
#include <h2d/Font.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxd_fmt_bfnt_FontParser
#include <hxd/fmt/bfnt/FontParser.h>
#endif
#ifndef INCLUDED_hxd_fmt_bfnt_Writer
#include <hxd/fmt/bfnt/Writer.h>
#endif
#ifndef INCLUDED_hxd_fs_Convert
#include <hxd/fs/Convert.h>
#endif
#ifndef INCLUDED_hxd_fs_ConvertFNT2BFNT
#include <hxd/fs/ConvertFNT2BFNT.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eea4dd319df16e7e_194_new,"hxd.fs.ConvertFNT2BFNT","new",0x28cde62e,"hxd.fs.ConvertFNT2BFNT.new","hxd/fs/Convert.hx",194,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_eea4dd319df16e7e_202_convert,"hxd.fs.ConvertFNT2BFNT","convert",0x0efe12c1,"hxd.fs.ConvertFNT2BFNT.convert","hxd/fs/Convert.hx",202,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_eea4dd319df16e7e_209_resolveTile,"hxd.fs.ConvertFNT2BFNT","resolveTile",0xa6918408,"hxd.fs.ConvertFNT2BFNT.resolveTile","hxd/fs/Convert.hx",209,0x59888052)
HX_LOCAL_STACK_FRAME(_hx_pos_eea4dd319df16e7e_216_boot,"hxd.fs.ConvertFNT2BFNT","boot",0x837482a4,"hxd.fs.ConvertFNT2BFNT.boot","hxd/fs/Convert.hx",216,0x59888052)
namespace hxd{
namespace fs{

void ConvertFNT2BFNT_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_eea4dd319df16e7e_194_new)
HXLINE( 196)		this->emptyTile =  ::h2d::Tile_obj::__alloc( HX_CTX ,null(),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),0,0);
HXLINE( 197)		super::__construct(HX_("fnt",2c,c6,4d,00),HX_("bfnt",0a,af,14,41));
HXLINE( 198)		this->version = 1;
            	}

Dynamic ConvertFNT2BFNT_obj::__CreateEmpty() { return new ConvertFNT2BFNT_obj; }

void *ConvertFNT2BFNT_obj::_hx_vtable = 0;

Dynamic ConvertFNT2BFNT_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConvertFNT2BFNT_obj > _hx_result = new ConvertFNT2BFNT_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConvertFNT2BFNT_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b644d02) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b644d02;
	} else {
		return inClassId==(int)0x7a5db4d6;
	}
}

void ConvertFNT2BFNT_obj::convert(){
            	HX_GC_STACKFRAME(&_hx_pos_eea4dd319df16e7e_202_convert)
HXLINE( 203)		 ::h2d::Font font = ::hxd::fmt::bfnt::FontParser_obj::parse(this->srcBytes,this->srcPath,this->resolveTile_dyn());
HXLINE( 204)		 ::haxe::io::BytesOutput out =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE( 205)		 ::hxd::fmt::bfnt::Writer_obj::__alloc( HX_CTX ,out)->write(font);
HXLINE( 206)		this->save(out->getBytes());
            	}


 ::h2d::Tile ConvertFNT2BFNT_obj::resolveTile(::String path){
            	HX_STACKFRAME(&_hx_pos_eea4dd319df16e7e_209_resolveTile)
HXLINE( 211)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 211)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Could not resolve BitmapFont texture reference at path: ",1c,e2,eb,6b) + path)));
            		}
HXLINE( 213)		return this->emptyTile;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConvertFNT2BFNT_obj,resolveTile,return )

int ConvertFNT2BFNT_obj::_;


::hx::ObjectPtr< ConvertFNT2BFNT_obj > ConvertFNT2BFNT_obj::__new() {
	::hx::ObjectPtr< ConvertFNT2BFNT_obj > __this = new ConvertFNT2BFNT_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ConvertFNT2BFNT_obj > ConvertFNT2BFNT_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ConvertFNT2BFNT_obj *__this = (ConvertFNT2BFNT_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConvertFNT2BFNT_obj), true, "hxd.fs.ConvertFNT2BFNT"));
	*(void **)__this = ConvertFNT2BFNT_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConvertFNT2BFNT_obj::ConvertFNT2BFNT_obj()
{
}

void ConvertFNT2BFNT_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvertFNT2BFNT);
	HX_MARK_MEMBER_NAME(emptyTile,"emptyTile");
	 ::hxd::fs::Convert_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ConvertFNT2BFNT_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(emptyTile,"emptyTile");
	 ::hxd::fs::Convert_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ConvertFNT2BFNT_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return ::hx::Val( convert_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"emptyTile") ) { return ::hx::Val( emptyTile ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveTile") ) { return ::hx::Val( resolveTile_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConvertFNT2BFNT_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { outValue = ( _ ); return true; }
	}
	return false;
}

::hx::Val ConvertFNT2BFNT_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"emptyTile") ) { emptyTile=inValue.Cast<  ::h2d::Tile >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ConvertFNT2BFNT_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"_") ) { _=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ConvertFNT2BFNT_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("emptyTile",5b,fc,d4,09));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ConvertFNT2BFNT_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::h2d::Tile */ ,(int)offsetof(ConvertFNT2BFNT_obj,emptyTile),HX_("emptyTile",5b,fc,d4,09)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ConvertFNT2BFNT_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ConvertFNT2BFNT_obj::_,HX_("_",5f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ConvertFNT2BFNT_obj_sMemberFields[] = {
	HX_("emptyTile",5b,fc,d4,09),
	HX_("convert",f3,fd,c9,1a),
	HX_("resolveTile",3a,f0,37,e8),
	::String(null()) };

static void ConvertFNT2BFNT_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvertFNT2BFNT_obj::_,"_");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConvertFNT2BFNT_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvertFNT2BFNT_obj::_,"_");
};

#endif

::hx::Class ConvertFNT2BFNT_obj::__mClass;

static ::String ConvertFNT2BFNT_obj_sStaticFields[] = {
	HX_("_",5f,00,00,00),
	::String(null())
};

void ConvertFNT2BFNT_obj::__register()
{
	ConvertFNT2BFNT_obj _hx_dummy;
	ConvertFNT2BFNT_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.fs.ConvertFNT2BFNT",3c,f7,3f,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConvertFNT2BFNT_obj::__GetStatic;
	__mClass->mSetStaticField = &ConvertFNT2BFNT_obj::__SetStatic;
	__mClass->mMarkFunc = ConvertFNT2BFNT_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConvertFNT2BFNT_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConvertFNT2BFNT_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConvertFNT2BFNT_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConvertFNT2BFNT_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConvertFNT2BFNT_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConvertFNT2BFNT_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConvertFNT2BFNT_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_eea4dd319df16e7e_216_boot)
HXDLIN( 216)		_ = ::hxd::fs::Convert_obj::_hx_register( ::hxd::fs::ConvertFNT2BFNT_obj::__alloc( HX_CTX ));
            	}
}

} // end namespace hxd
} // end namespace fs
