#include <hxcpp.h>

#ifndef INCLUDED_h2d_Font
#include <h2d/Font.h>
#endif
#ifndef INCLUDED_h2d_FontType
#include <h2d/FontType.h>
#endif
#ifndef INCLUDED_h2d_Tile
#include <h2d/Tile.h>
#endif
#ifndef INCLUDED_h3d_mat_Filter
#include <h3d/mat/Filter.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxd_fmt_bfnt_FontParser
#include <hxd/fmt/bfnt/FontParser.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_res_Any
#include <hxd/res/Any.h>
#endif
#ifndef INCLUDED_hxd_res_BitmapFont
#include <hxd/res/BitmapFont.h>
#endif
#ifndef INCLUDED_hxd_res_Loader
#include <hxd/res/Loader.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8b2286ccb7a67d91_14_new,"hxd.res.BitmapFont","new",0x36579598,"hxd.res.BitmapFont.new","hxd/res/BitmapFont.hx",14,0xa63e6716)
HX_LOCAL_STACK_FRAME(_hx_pos_8b2286ccb7a67d91_19_toFont,"hxd.res.BitmapFont","toFont",0x036316b2,"hxd.res.BitmapFont.toFont","hxd/res/BitmapFont.hx",19,0xa63e6716)
HX_LOCAL_STACK_FRAME(_hx_pos_8b2286ccb7a67d91_31_toSdfFont,"hxd.res.BitmapFont","toSdfFont",0xfa38da21,"hxd.res.BitmapFont.toSdfFont","hxd/res/BitmapFont.hx",31,0xa63e6716)
HX_LOCAL_STACK_FRAME(_hx_pos_8b2286ccb7a67d91_50_resolveSdfTile,"hxd.res.BitmapFont","resolveSdfTile",0x791a70bf,"hxd.res.BitmapFont.resolveSdfTile","hxd/res/BitmapFont.hx",50,0xa63e6716)
HX_LOCAL_STACK_FRAME(_hx_pos_8b2286ccb7a67d91_57_resolveTile,"hxd.res.BitmapFont","resolveTile",0x43d7ad72,"hxd.res.BitmapFont.resolveTile","hxd/res/BitmapFont.hx",57,0xa63e6716)
namespace hxd{
namespace res{

void BitmapFont_obj::__construct( ::hxd::fs::FileEntry entry){
            	HX_STACKFRAME(&_hx_pos_8b2286ccb7a67d91_14_new)
HXLINE(  15)		super::__construct(entry);
HXLINE(  16)		this->loader = ::hxd::res::Loader_obj::currentInstance;
            	}

Dynamic BitmapFont_obj::__CreateEmpty() { return new BitmapFont_obj; }

void *BitmapFont_obj::_hx_vtable = 0;

Dynamic BitmapFont_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapFont_obj > _hx_result = new BitmapFont_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BitmapFont_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09c9e03a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09c9e03a;
	} else {
		return inClassId==(int)0x6c3ff3ca;
	}
}

 ::h2d::Font BitmapFont_obj::toFont(){
            	HX_STACKFRAME(&_hx_pos_8b2286ccb7a67d91_19_toFont)
HXLINE(  20)		if (::hx::IsNull( this->font )) {
HXLINE(  21)			 ::haxe::io::Bytes _hx_tmp = this->entry->getBytes();
HXDLIN(  21)			this->font = ::hxd::fmt::bfnt::FontParser_obj::parse(_hx_tmp,this->entry->get_path(),this->resolveTile_dyn());
            		}
HXLINE(  23)		return this->font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,toFont,return )

 ::h2d::Font BitmapFont_obj::toSdfFont( ::Dynamic size,::hx::Null< int >  __o_channel,::hx::Null< Float >  __o_alphaCutoff,::hx::Null< Float >  __o_smoothing){
            		int channel = __o_channel.Default(0);
            		Float alphaCutoff = __o_alphaCutoff.Default(((Float)0.5));
            		Float smoothing = __o_smoothing.Default(((Float)0.03125));
            	HX_STACKFRAME(&_hx_pos_8b2286ccb7a67d91_31_toSdfFont)
HXLINE(  32)		if (::hx::IsNull( this->sdfFonts )) {
HXLINE(  32)			this->sdfFonts = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE(  33)		if (::hx::IsNull( size )) {
HXLINE(  33)			size = this->toFont()->size;
            		}
HXLINE(  34)		{
HXLINE(  34)			int _g = 0;
HXDLIN(  34)			::Array< ::Dynamic> _g1 = this->sdfFonts;
HXDLIN(  34)			while((_g < _g1->length)){
HXLINE(  34)				 ::h2d::Font font = _g1->__get(_g).StaticCast<  ::h2d::Font >();
HXDLIN(  34)				_g = (_g + 1);
HXLINE(  35)				{
HXLINE(  35)					 ::h2d::FontType _g2 = font->type;
HXDLIN(  35)					if ((_g2->_hx_getIndex() == 1)) {
HXLINE(  36)						int fchannel = _g2->_hx_getInt(0);
HXDLIN(  36)						Float falphaCutoff = _g2->_hx_getFloat(1);
HXDLIN(  36)						Float fsmoothing = _g2->_hx_getFloat(2);
HXLINE(  37)						bool _hx_tmp;
HXDLIN(  37)						bool _hx_tmp1;
HXDLIN(  37)						bool _hx_tmp2;
HXDLIN(  37)						if (::hx::IsEq( font->size,size )) {
HXLINE(  37)							_hx_tmp2 = (fchannel == channel);
            						}
            						else {
HXLINE(  37)							_hx_tmp2 = false;
            						}
HXDLIN(  37)						if (_hx_tmp2) {
HXLINE(  37)							_hx_tmp1 = (falphaCutoff == alphaCutoff);
            						}
            						else {
HXLINE(  37)							_hx_tmp1 = false;
            						}
HXDLIN(  37)						if (_hx_tmp1) {
HXLINE(  37)							_hx_tmp = (fsmoothing == smoothing);
            						}
            						else {
HXLINE(  37)							_hx_tmp = false;
            						}
HXDLIN(  37)						if (_hx_tmp) {
HXLINE(  38)							return font;
            						}
            					}
            				}
            			}
            		}
HXLINE(  43)		 ::haxe::io::Bytes font = this->entry->getBytes();
HXDLIN(  43)		 ::h2d::Font font1 = ::hxd::fmt::bfnt::FontParser_obj::parse(font,this->entry->get_path(),this->resolveSdfTile_dyn());
HXLINE(  44)		font1->type = ::h2d::FontType_obj::SignedDistanceField(channel,alphaCutoff,smoothing);
HXLINE(  45)		font1->resizeTo(( (int)(size) ));
HXLINE(  46)		this->sdfFonts->push(font1);
HXLINE(  47)		return font1;
            	}


HX_DEFINE_DYNAMIC_FUNC4(BitmapFont_obj,toSdfFont,return )

 ::h2d::Tile BitmapFont_obj::resolveSdfTile(::String path){
            	HX_STACKFRAME(&_hx_pos_8b2286ccb7a67d91_50_resolveSdfTile)
HXLINE(  51)		 ::h3d::mat::Texture tex = this->loader->load(path)->toTexture();
HXLINE(  52)		tex->set_filter(::h3d::mat::Filter_obj::Linear_dyn());
HXLINE(  53)		return ::h2d::Tile_obj::fromTexture(tex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,resolveSdfTile,return )

 ::h2d::Tile BitmapFont_obj::resolveTile(::String path){
            	HX_STACKFRAME(&_hx_pos_8b2286ccb7a67d91_57_resolveTile)
HXDLIN(  57)		return this->loader->load(path)->toTile();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,resolveTile,return )


::hx::ObjectPtr< BitmapFont_obj > BitmapFont_obj::__new( ::hxd::fs::FileEntry entry) {
	::hx::ObjectPtr< BitmapFont_obj > __this = new BitmapFont_obj();
	__this->__construct(entry);
	return __this;
}

::hx::ObjectPtr< BitmapFont_obj > BitmapFont_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxd::fs::FileEntry entry) {
	BitmapFont_obj *__this = (BitmapFont_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapFont_obj), true, "hxd.res.BitmapFont"));
	*(void **)__this = BitmapFont_obj::_hx_vtable;
	__this->__construct(entry);
	return __this;
}

BitmapFont_obj::BitmapFont_obj()
{
}

void BitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFont);
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(sdfFonts,"sdfFonts");
	 ::hxd::res::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(sdfFonts,"sdfFonts");
	 ::hxd::res::Resource_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BitmapFont_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return ::hx::Val( font ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { return ::hx::Val( loader ); }
		if (HX_FIELD_EQ(inName,"toFont") ) { return ::hx::Val( toFont_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sdfFonts") ) { return ::hx::Val( sdfFonts ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toSdfFont") ) { return ::hx::Val( toSdfFont_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveTile") ) { return ::hx::Val( resolveTile_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resolveSdfTile") ) { return ::hx::Val( resolveSdfTile_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BitmapFont_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast<  ::h2d::Font >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast<  ::hxd::res::Loader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sdfFonts") ) { sdfFonts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("loader",13,48,6f,58));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("sdfFonts",cf,9c,31,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapFont_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxd::res::Loader */ ,(int)offsetof(BitmapFont_obj,loader),HX_("loader",13,48,6f,58)},
	{::hx::fsObject /*  ::h2d::Font */ ,(int)offsetof(BitmapFont_obj,font),HX_("font",cf,5d,c0,43)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BitmapFont_obj,sdfFonts),HX_("sdfFonts",cf,9c,31,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitmapFont_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapFont_obj_sMemberFields[] = {
	HX_("loader",13,48,6f,58),
	HX_("font",cf,5d,c0,43),
	HX_("sdfFonts",cf,9c,31,50),
	HX_("toFont",ea,c8,79,79),
	HX_("toSdfFont",e9,5a,e1,c2),
	HX_("resolveSdfTile",f7,1a,02,f5),
	HX_("resolveTile",3a,f0,37,e8),
	::String(null()) };

::hx::Class BitmapFont_obj::__mClass;

void BitmapFont_obj::__register()
{
	BitmapFont_obj _hx_dummy;
	BitmapFont_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxd.res.BitmapFont",a6,29,cf,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapFont_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapFont_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapFont_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapFont_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxd
} // end namespace res
